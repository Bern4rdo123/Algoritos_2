#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void venda(float* lugar_vendas, int* torcedor_total);
void inserir(ofstream&arqui,float*partes_estadio_venda,int*categorias_torcedores_quan);
int main()
{
    setlocale(LC_ALL, "portuguese");
    float* partes_estadio_vendas = new float[4] {0.00, 0.00, 0.00, 0.00};
    int* categorias_torcedores_quant = new int[4] {0, 0, 0, 0};
    int opc;
    bool opc1 = false;

    do
    {
        cout << "0 - Sair\n";
        cout << "1 - Vender ingresso\n";
        cout << "2 - Mostrar total vendido \n";
        cout << "3 - Mostrar total de torcedores\n";
        cout << "4 - Encerrar partida\n\n";
        cout << "Insira opção: ";
        cin>>opc;

        if (opc == 0)
            break;
        else if (opc == 1)
        {
            venda(partes_estadio_vendas, categorias_torcedores_quant);
            ofstream arquivo1("Futebol.txt");
            if(!arquivo1.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            inserir(arquivo1,partes_estadio_vendas,categorias_torcedores_quant);
            arquivo1.close();
            opc1 = true;
        }
        else if (opc == 2 && opc1 == true)
        {
            cout<<"\nValor arrecadado no camarote: "<<partes_estadio_vendas[0]<<endl;
            cout<<"Valor arrecadado nas cadeiras centrais: "<<partes_estadio_vendas[1]<<endl;
            cout<<"Valor arrecadado nas cadeiras laterais: "<<partes_estadio_vendas[2]<<endl;
            cout<<"Valor arrecadado na arquibancada: "<<partes_estadio_vendas[3]<<endl;
            cout<<"Total arrecadado na partida atual: "<<partes_estadio_vendas[0]+partes_estadio_vendas[1]+partes_estadio_vendas[2]+partes_estadio_vendas[3]<<endl;
        }
        else if (opc == 3 && opc1 == true)
        {
            cout<<"\nTotal de sócios proprietários: "<<categorias_torcedores_quant[0]<<endl;
            cout<<"Total de sócios contribuintes: "<<categorias_torcedores_quant[1]<<endl;
            cout<<"Total de idosos e estudantes: "<<categorias_torcedores_quant[2]<<endl;
            cout<<"Total de outros torcedores: "<<categorias_torcedores_quant[3]<<endl;
            cout<<"Total de torcedores na partida atual: "<<categorias_torcedores_quant[0]+categorias_torcedores_quant[1]+categorias_torcedores_quant[2]+categorias_torcedores_quant[3]<<endl;
        }
        else if (opc == 4 && opc1 == true)
        {
            partes_estadio_vendas[0] = 0;
            partes_estadio_vendas[1] = 0;
            partes_estadio_vendas[2] = 0;
            partes_estadio_vendas[3] = 0;
            categorias_torcedores_quant[0] = 0;
            categorias_torcedores_quant[1] = 0;
            categorias_torcedores_quant[2] = 0;
            categorias_torcedores_quant[3] = 0;
            opc1 = false;
            ofstream arquivo2("Futebol.txt");
            if(!arquivo2.is_open())
            {
                cout<<"\nERRO AO ABRIR O ARQUIVO\n";
                return 1;
            }
            inserir(arquivo2,partes_estadio_vendas,categorias_torcedores_quant);
            arquivo2.close();
            cout<<"\nPartida encerrada. Início de nova partida\n";
        }
        else
        {
            cout << "\nOpção inválida";
        }
        cout << endl;
        system("pause");
        system("cls");
    }
    while(true);
    delete[]partes_estadio_vendas;
    delete[]categorias_torcedores_quant;

    return 0;
}

void venda(float* lugar_vendas, int* torcedor_total)
{
    int torcedor, parte;
    cout << "insira o tipo de torcedor: \n\n(1 - Sócio Proprietário - Grátis)\n(2 - Sócio Contribuinte - 50% Desc.)\n(3 - Idosos e Estudantes - 50% Desc.)\n(4 - Outro)\n\n";
    do
    {
        cin >> torcedor;
    }
    while (torcedor < 1 || torcedor > 4);
    cout << "insira a parte do estágio: \n\n(1 - Camarote - R$ 350,00)\n(2 - Cadeira Central - R$ 160,00)\n(3 - Cadeira Lateral - R$125,00)\n(4 - Arquibancada - R$ 98,00)\n\n";
    do
    {
        cin >> parte;
    }
    while (parte < 1 || parte > 4);
    if (parte == 1)
    {
        if (torcedor == 1)
        {
            torcedor_total[0]++;
        }
        if (torcedor == 2)
        {
            lugar_vendas[0] += 175.00;
            torcedor_total[1]++;
        }
        if (torcedor == 3)
        {
            lugar_vendas[0] += 175.00;
            torcedor_total[2]++;
        }
        if (torcedor == 4)
        {
            lugar_vendas[0] += 350.00;
            torcedor_total[3]++;
        }
    }
    if (parte == 2)
    {
        if (torcedor == 1)
        {
            torcedor_total[0]++;
        }
        if (torcedor == 2)
        {
            torcedor_total[1]++;
            lugar_vendas[1] += 80.00;
        }
        if (torcedor == 3)
        {
            torcedor_total[2]++;
            lugar_vendas[1] += 80.00;
        }
        if (torcedor == 4)
        {
            torcedor_total[3]++;
            lugar_vendas[1] += 160.00;
        }
    }
    if (parte == 3)
    {
        if (torcedor == 1)
        {
            torcedor_total[0]++;
        }
        if (torcedor == 2)
        {
            torcedor_total[1]++;
            lugar_vendas[2] += 62.50;
        }
        if (torcedor == 3)
        {
            torcedor_total[2]++;
            lugar_vendas[2] += 62.50;
        }
        if (torcedor == 4)
        {
            torcedor_total[3]++;
            lugar_vendas[2] += 125.00;
        }
    }
    if (parte == 4)
    {
        if (torcedor == 1)
        {
            torcedor_total[0]++;
        }
        if (torcedor == 2)
        {
            torcedor_total[1]++;
            lugar_vendas[3] += 49.00;
        }
        if (torcedor == 3)
        {
            torcedor_total[2]++;
            lugar_vendas[3] += 49.00;
        }
        if (torcedor == 4)
        {
            torcedor_total[3]++;
            lugar_vendas[3] += 98.00;
        }
    }

    cout << "\nVenda realizada!\n\n";
}
void inserir(ofstream& arqui,float*partes_estadio_venda,int*categorias_torcedores_quan)
{
    arqui<<"Valor arrecadado no camarote: "<<partes_estadio_venda[0]<<endl;
    arqui<<"Valor arrecadado nas cadeiras centrais: "<<partes_estadio_venda[1]<<endl;
    arqui<<"Valor arrecadado nas cadeiras laterais: "<<partes_estadio_venda[2]<<endl;
    arqui<<"Valor arrecadado na arquibancada: "<<partes_estadio_venda[3]<<endl;
    arqui<<"Total arrecadado na partida atual: "<<partes_estadio_venda[0]+partes_estadio_venda[1]+partes_estadio_venda[2]+partes_estadio_venda[3]<<endl;
    arqui<<"\nTotal de sócios proprietários: "<<categorias_torcedores_quan[0]<<endl;
    arqui<<"Total de sócios contribuintes: "<<categorias_torcedores_quan[1]<<endl;
    arqui<<"Total de idosos e estudantes: "<<categorias_torcedores_quan[2]<<endl;
    arqui<<"Total de outros torcedores: "<<categorias_torcedores_quan[3]<<endl;
    arqui<<"Total de torcedores na partida atual: "<<categorias_torcedores_quan[0]+categorias_torcedores_quan[1]+categorias_torcedores_quan[2]+categorias_torcedores_quan[3];
}

/*1 – Vender ingresso
2 – Mostrar total vendido (exibe o valor comercializado em cada parte do estádio e o total geral)
3 – Mostrar o total de torcedores (exibe o total em cada categoria, juntamente como total geral)
4 – Encerrar partida (deve zerar todas as vendas para iniciar outra partida)*/
