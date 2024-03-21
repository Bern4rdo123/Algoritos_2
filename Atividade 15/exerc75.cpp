#include <iostream>
#include <fstream>
using namespace std;
void incluir(ofstream&arq,int*p);
void estatisticas(int*p);
int main()
{
    setlocale(LC_ALL, "portuguese");
    int opc;
    int *acidentes = new int[24], *ini = acidentes;
    for(int i=0; i<24; i++)
    {
        *acidentes = 0;
        acidentes++;
    }
    acidentes = ini;
    do
    {
        cout<<"\n0 - sair";
        cout<<"\n1 - matriz de acidentes";
        cout<<"\n2 - indicar acidente";
        cout<<"\n3 - estatísticas\n\n";
        cout<<"Insira opção: ";
        cin>>opc;
        if(opc==0)
        {
            break;
        }
        else if(opc==1)
        {
            cout<<endl;
            int contlinha = 0;
            for(int i=0; i<24; i++)
            {
                if(contlinha==6)
                {
                    contlinha = 0;
                    cout<<endl;
                }
                cout<<*acidentes<<"\t";
                acidentes++;
                contlinha++;
            }
            acidentes = ini;
        }
        else if(opc==2)
        {
            ofstream arqu;
            arqu.open("exer_75.txt",ios::out);
            if(!arqu.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            incluir(arqu,acidentes);
            arqu.close();
        }
        else if(opc==3)
        {
            estatisticas(acidentes);
        }
        else
        {
            cout<<"\nOpção inválida";
        }
        cout<<endl<<endl;
        system("pause");
        system("cls");
    }
    while(true);
    delete[]acidentes;
    return 0;
}
void estatisticas (int*p)
{
    int cruzamentos[24] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,}, maior_cruzamentos=0;
    int vet_norte_sul[6] = {0,0,0,0,0,0}, i;
    int vet_leste_oeste[4] = {0,0,0,0};
    int *inicio = p;
    for(i=0;i<24;i++)
    {
        if(maior_cruzamentos<*p)
        {
            maior_cruzamentos = *p;
            for(int j=0;j<24;j++)
            {
                cruzamentos[j]=0;
            }
            i = 0;
            p = inicio;
        }
        else if(maior_cruzamentos==*p)
        {
            cruzamentos[i]++;
        }
        p++;
    }
    p = inicio;
    int cruzamatriz[4][6], t=0, totalacidentes=0;
    for(int k=0;k<4;k++)
    {
        for(int q=0;q<6;q++)
        {
            cruzamatriz[k][q] = cruzamentos[t];
            t++;
        }
    }
    cout<<"\nCruzamentos com maior número de acidentes:\n\nRua N-S||Rua L-O\n";
    for(int k=0;k<4;k++)
    {
        for(int q=0;q<6;q++)
        {
            if(cruzamatriz[k][q]>0)
            {
                cout<<"   "<<k<<"   ||   "<<q<<" "<<endl;
            }
        }
    }
    for(i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(j==0)
            {
                vet_norte_sul[0] += *p;
            }
            else if(j==1)
            {
                vet_norte_sul[1] += *p;
            }
            else if(j==2)
            {
                vet_norte_sul[2] += *p;
            }
            else if(j==3)
            {
                vet_norte_sul[3] += *p;
            }
            else if(j==4)
            {
                vet_norte_sul[4] += *p;
            }
            else if(j==5)
            {
              vet_norte_sul[5] += *p;
            }
            if(i==0)
            {
               vet_leste_oeste[0] += *p;
            }
            else if(i==1)
            {
               vet_leste_oeste[1] += *p;
            }
            else if(i==2)
            {
               vet_leste_oeste[2] += *p;
            }
            else if(i==3)
            {
               vet_leste_oeste[3] += *p;
            }
            totalacidentes+=*p;
            p++;
        }
    }
    p = inicio;
    cout<<"\nTotal de acidentes: "<<totalacidentes<<endl<<endl;
    int posic_norte_sul = 0, posic_leste_oeste = 0;
    int maior_norte_sul = 0, maior_leste_oeste = 0, menor_norte_sul = vet_norte_sul[5], menor_leste_oeste = vet_leste_oeste[3];
    for(i=0;i<6;i++)
    {
        if(maior_norte_sul<vet_norte_sul[i])
        {
            maior_norte_sul = vet_norte_sul[i];
            posic_norte_sul = i;
        }
    }
    for(i=0;i<4;i++)
    {
        if(maior_leste_oeste<vet_leste_oeste[i])
        {
            maior_leste_oeste = vet_leste_oeste[i];
            posic_leste_oeste = i;
        }
    }
    cout<<"Rua Norte-Sul com mais acidentes: "<<posic_norte_sul<<" (com "<<maior_norte_sul<<" acidente(s))"<<endl;
    cout<<"Rua Leste-Oeste com mais acidentes: "<<posic_leste_oeste<<" (com "<<maior_leste_oeste<<" acidente(s))";
}
void incluir(ofstream&arq,int*p)
{
    int x,y,indice;
    cout<<"Insira o valor da rua norte-sul: ";
    do
    {
      cin>>x;
    }while(x<0||x>5);
    cout<<"Insira o valor da rua leste-oeste: ";
    do
    {
       cin>>y;
    }while(y<0||y>3);
    indice = y*6+x;
    (*(&p[indice]))++;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<6;j++)
        {
        arq<<*p<<"\t";
        p++;
        }
        arq<<endl;
    }
    cout<<"Acidente incluido\n";
}
//criar exer_75.txt
