#include <iostream>
#include <fstream>
using namespace std;
void incluir_vet(ofstream&arquivo,int*&vetor,int*tamanho);
void intersec(ofstream&arquivo,int*& vetor_1, int*& vetor_2, int*& vetor_3, int* tamanho1, int* tamanho2, int*& tamanho3);
void ordenados(int*vetor1,int*vetor2,int*vetor3,int*tamanho1,int*tamanho2,int*tamanho3);
int main()
{
    setlocale(LC_ALL, "portuguese");
    int * tam1 = new int(0);
    int * tam2 = new int(0);
    int * tam3 = new int(0);
    int * vetor1 = new int[*tam1];
    int * vetor2 = new int[*tam2];
    int * vetor3 = new int[*tam3];
    int opc;
    do
    {
        cout<<"0 - sair\n";
        cout<<"1 - incluir elemento no vetor 1\n";
        cout<<"2 - incluir elemento no vetor 2\n";
        cout<<"3 - intersecção\n";
        cout<<"4 - mostrar ordenado\n\n";
        cout<<"Insira opção: ";
        cin>>opc;
        if(opc==0)
            break;
        else if(opc==1)
        {
            ofstream arq1("vet_1.txt");
            if(!arq1.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            incluir_vet(arq1,vetor1,tam1);
            arq1.close();
        }
        else if(opc==2)
        {
            ofstream arq2("vet_2.txt");
            if(!arq2.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            incluir_vet(arq2,vetor2,tam2);
            arq2.close();
        }
        else if(opc==3&&*tam1>0&&*tam2>0)
        {
            ofstream arq3("vet_3.txt");
            if(!arq3.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            intersec(arq3,vetor1,vetor2,vetor3,tam1,tam2,tam3);
            arq3.close();
        }
        else if(opc==4&&*tam1>0&&*tam2>0)
        {
            ordenados(vetor1,vetor2,vetor3,tam1,tam2,tam3);
        }
        else
        {
            cout<<"\nOpção inválida";
        }
        cout<<endl;
        system("pause");
        system("cls");
    }
    while(true);
    delete[]vetor1;
    delete[]vetor2;
    delete[]vetor3;
    delete tam1;
    delete tam2;
    delete tam3;
}
void incluir_vet(ofstream&arquivo,int*&vetor,int*tamanho)
{
    int*inicio = vetor;
    int*temp = new int[*tamanho];
    int*iniciotemp = temp;
    for(int i=0; i<*tamanho; i++)
    {
        temp[i] = vetor[i];
    }
    cout<<"Incluir elemento: ";
    cin>>temp[*tamanho];
    (*tamanho)++;
    vetor = temp;
    for(int i=0;i<*tamanho;i++)
    {
        arquivo<<vetor[i]<<";";
    }
    delete[]temp;
}
void intersec(ofstream&arquivo,int*& vetor_1, int*& vetor_2, int*& vetor_3, int* tamanho1, int* tamanho2, int*& tamanho3)
{
    int* inicio1 = vetor_1, *inicio2 = vetor_2, *inicio3 = vetor_3, cont_intersec = 0;
    for (int i = 0; i < *tamanho3; i++)
    {
        *vetor_3 = 0;
        vetor_3++;
    }
    vetor_3 = inicio3;
    *tamanho3 = 0;

    bool achou;

    for (int i = 0; i < *tamanho2; i++)
    {
        for (int j = 0; j < *tamanho1; j++)
        {
            if (vetor_2[i] == vetor_1[j])
            {
                achou = false;
                for (int k = 0; k < *tamanho3; k++)
                {
                    if (vetor_2[i] == vetor_3[k])
                    {
                        achou = true;
                        break;
                    }
                }
                if (!achou)
                {
                    *vetor_3 = vetor_2[i];
                    vetor_3++;
                    (*tamanho3)++;
                }
                break;
            }
        }
    }
    vetor_2 = inicio2;
    vetor_3 = inicio3;
    vetor_1 = inicio1;
    for(int i=0;i<*tamanho3;i++)
    {
        arquivo<<vetor_3[i]<<";";
    }
}

void ordenados(int* vetor1, int* vetor2, int* vetor3, int* tamanho1, int* tamanho2, int* tamanho3)
{
    int veto1[*tamanho1], veto2[*tamanho2], veto3[*tamanho3], *in1 = vetor1, *in2 = vetor2, *in3 = vetor3;

    for (int i = 0; i < *tamanho1; i++)
    {
        veto1[i] = vetor1[i];
    }
    vetor1 = in1;

    for (int i = 0; i < *tamanho2; i++)
    {
        veto2[i] = vetor2[i];
    }
    vetor2 = in2;

    for (int i = 0; i < *tamanho3; i++)
    {
        veto3[i] = vetor3[i];
    }
    vetor3 = in3;

    for (int i = 0; i < *tamanho1; i++)
    {
        for (int j = 0; j < *tamanho1; j++)
        {
            if (veto1[i] < veto1[j])
            {
                int aux = veto1[i];
                veto1[i] = veto1[j];
                veto1[j] = aux;
            }
        }
    }

    cout << "Vetor 1:\n";
    for (int i = 0; i < *tamanho1; i++)
    {
        cout << veto1[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < *tamanho2; i++)
    {
        for (int j = 0; j < *tamanho2; j++)
        {
            if (veto2[i] < veto2[j])   // Change here
            {
                int aux = veto2[i];
                veto2[i] = veto2[j];
                veto2[j] = aux;
            }
        }
    }

    cout << "Vetor 2:\n";
    for (int i = 0; i < *tamanho2; i++)
    {
        cout << veto2[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < *tamanho3; i++)
    {
        for (int j = 0; j < *tamanho3; j++)
        {
            if (veto3[i] < veto3[j])
            {
                int aux = veto3[i];
                veto3[i] = veto3[j];
                veto3[j] = aux;
            }
        }
    }

    cout << "Vetor 3:\n";
    for (int i = 0; i < *tamanho3; i++)
    {
        cout << veto3[i] << " ";
    }
    cout << endl << endl;
}

// comparar vet de menor tamanho com vet de maior tamanho
// fazer um for com os elementos do vetor c/ menor numero de elementos

/*Escreva um programa para manipular dois arquivos texto: vet1.txt e vet2.txt, ambos
contendo uma sequência não determinada de valores inteiros separados por ponto e vírgula. Ao
iniciar o programa os dados dos vetores devem ser carregados para a memória e o programa
deve apresentar um menu com as seguintes opções:
0 - Sair
1 – Incluir elemento no vetor 1 (insere um elemento no final do vetor e atualiza no respectivo
arquivo)
2 – Incluir elemento no vetor 2 (insere um elemento no final do vetor e atualiza no respectivo
arquivo)
3 – Intersecção (gerar um terceiro arquivo texto chamado vet3.txt que irá conter a intersecção
de vet1 e vet2, ou seja, os elementos que existem nos dois vetores.
Exemplo:
Sendo
vet1 = {41, 4, 37, 65, 63, 72, 39, 49, 82, 79}
vet2 = {71, 82, 39, 69, 62, 84, 53, 41, 77, 80, 18, 5}
vet3 irá conter {41, 39, 82}
4 – Mostrar Ordenado (mostrar os três vetores na tela, ordenado em ordem crescente e
separando cada elemento com uma vírgula).
OBS: as opções 3 e 4 só poderão ser acionadas se existir ao menos um elemento em cada um
dos vetores (vet1 e vet2), escolha de opção inválida no menu deverá mostra mensagem de
erro.*/
