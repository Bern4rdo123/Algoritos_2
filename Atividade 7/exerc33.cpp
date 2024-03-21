#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<cstring>

using namespace std;

struct cliente{
    int codigo;
    string nome;
    string telef;
    string endereco;
};
struct Data{
    int dia;
    int mes;
    int ano;
};
struct Bol{
    Data vencimento;
    Data pagt;
    int numb;
    int codcli;
    float vlr;
    float juros;
    float vlrpg;
};

int cadastra(cliente cliente[],int &cont, bool &cliente1){
    system("cls");
    cout<<endl<<"Informe o código deste cliente: ";
    cin>>cliente[cont].codigo;

    if(cont>1){
        for(int i=0; i<cont; i++){
            if(cliente[cont].codigo==cliente[i].codigo){
                cout<<endl<<" Este código já existe !";
                cliente[cont].codigo=0;
                return 0;
            }
        }
    }
    cout<<endl<<" Informe o nome: ";
    fflush(stdin);
    getline(cin, cliente[cont].nome);

    cout<<endl<<" Informe o telefone: ";
    fflush(stdin);
    getline(cin, cliente[cont].telef);

    cout<<endl<<" Informe o endereço desse cliente: ";
    fflush(stdin);
    getline(cin, cliente[cont].endereco);
    cont++;
    cliente1=true;
    return 0;
}

void gerabol(cliente cliente[], Bol boletos[], int &contb, int cont){
    system("cls");
    cout<<endl<<"Informe o número do boleto: ";
    cin>>boletos[contb].numb;

    cout<<endl<<"Informe o código do cliente em que sairá o boleto: ";
    int cod;
    cin>>cod;

    bool tinha=false;
    for(int i=0; i<cont; i++){
        if(cliente[i].codigo==cod){
            boletos[contb].codcli=cod;
            tinha=true;
        }
    }
    if(tinha==false){
        cout<<endl<<" O código não está vinculado com nenhum cliente! ";
        system("pause");
        return;
    }
    cout<<endl<<" Informe o dia do vencimento: ";
    cin>>boletos[contb].vencimento.dia;

    cout<<endl<<" Informe o mês do vencimento: ";
    cin>>boletos[contb].vencimento.mes;

    cout<<endl<<" Informe a porcentagem de juros ao dia: ";
    cin>>boletos[contb].juros;
    boletos[contb].juros/=100;

    cout<<endl<<" Informe o valor do boleto: ";
    cin>>boletos[contb].vlr;
    contb++;
    return;
}

void exclui(cliente cliente[], Bol boletos[], int &cont, int &contb){
    system("cls");
    cout<<"Informe o código do boleto a ser excluído: ";
    int codi;
    cin>>codi;

    for(int i=0; i<contb; i++){
        if(boletos[i].numb==codi){
            cout<<endl<<"Você tem certeza que deseja excluir ?";
            codi=i;
            string d;
            fflush(stdin);
            getline(cin, d);
            if( d=="sim" || d=="SIM"){
                contb--;
            }
            else{
                return;
            }
        }
    }
}

void paga(cliente cliente[], Bol boletos[], int &cont, int &contb){
    system("cls");
    cout<<" Informe o numero do boleto: ";
    int n;
    bool t=false;
    cin>>n;

    for(int i=0; i<contb; i++){
        if(boletos[i].numb==n){
            n=i;
            t=true;
        }
    }
    if(!t){
        return;
    }

    cout<<" Informe o dia do pagamento: ";
    cin>>boletos[n].pagt.dia;

    cout<<" Informe o mes do pagamento: ";
    cin>>boletos[n].pagt.mes;

    int somadias=0;

    boletos[n].vlrpg=boletos[n].vlr;
    if(boletos[n].pagt.mes<boletos[n].vencimento.mes){
        boletos[n].vlrpg=boletos[n].vlr;
        return;
    }else {
        if (boletos[n].pagt.mes > boletos[n].vencimento.mes) {
            for (int i = boletos[n].vencimento.mes; i < boletos[n].pagt.mes; i++) {
                somadias += 30;
            }
            somadias += boletos[n].pagt.dia;
        }
    }
    for(int i=0; i<somadias;i++){
        boletos[n].vlrpg+=boletos[n].vlrpg*boletos[n].juros;
    }
}

void listabol(cliente cliente[], Bol boletos[], int &cont, int &contb){
    system("cls");
    cout<<endl<<"Informe a data a ser procurada: ";
    int d;
    cin>>d;

    cout<<endl<<"Informe o mes a ser procurado: ";
    int m;
    cin>>m;

    for(int i=0; i<contb; i++){
        if(boletos[i].vencimento.mes==m){
            if(boletos[i].vencimento.dia<d){
                cout<<endl<<"Boleto código: "<<boletos[i].numb;
            }
        }
        else{
            if(boletos[i].vencimento.mes<m){
                cout<<endl<<"Boleto código: "<<boletos[i].numb;
            }
        }
    }
}

void consulta(cliente cliente[], Bol boletos[], int &cont, int &contb){
        system("cls");
        cout<<endl<<" Informe o código do cliente: ";
        int c;
        cin>>c;

        for(int i=0; i<contb; i++){
            if(boletos[i].codcli==c){
                cout<<endl<<"Código do boleto: "<<boletos[i].numb;
                cout<<endl<<"Valor: "<<boletos[i].vlr;
                cout<<endl<<"Vencimento: "<<boletos[i].vencimento.dia<<"/"<<boletos[i].vencimento.mes;
                cout.width(35);
                cout.fill('-');
                cout<<endl<<"-";
            }
        }
}

int main(){
    setlocale(LC_ALL, "pt-BR");
    cout<<endl;
    cliente cliente[15];
    Bol boletos[30];
    int menu;
    int cont=0;
    int contb=0;
    bool cliente1=false;
    do{
        system("cls");
        cout<<endl<<" MENU:: ";
        cout<<endl<<" 0-Sair";
        cout<<endl<<" 1-Cadastra cliente";
        cout<<endl<<" 2-Cadastra boleto";
        cout<<endl<<" 3-Excluir boleto";
        cout<<endl<<" 4-Pagar boleto";
        cout<<endl<<" 5-Lista Boletos em atraso";
        cout<<endl<<" 6-Consultar";
        cout<<endl<<"Insira a sua opção: ";
        cin>>menu;

        if(menu>6 || menu<0){
            cout<<endl<<" INSIRA UM VALOR DENTRO DO INTERVALO ESPERADO !"<<endl;
            system("pause");
            continue;
        }
        if(menu==1){
            cadastra(cliente, cont, cliente1);
        }
        if(menu==2){
            if(cliente1){
                gerabol(cliente, boletos, contb, cont);
            }else {
                cout << endl << " AINDA NÃO FORAM GERADOS CLIENTES !";
                cout << endl << system("pause");
            }
        }

        if(menu==3) {
            if(cliente1){
                exclui(cliente, boletos, cont, contb);
            }
            else{
                cout<<endl<<" AINDA NÃO FORAM GERADOS CLIENTES !";
                cout<<endl<<system("pause");
            }
        }

        if(menu==4){
            if(cliente1){
                paga(cliente, boletos, cont, contb);
            }
            else{
                cout<<endl<<" AINDA NÃO FORAM GERADOS CLIENTES !";
                cout<<endl<<system("pause");
            }
        }

        if(menu==5) {
            if(cliente1){
                listabol(cliente, boletos, cont, contb);
            }
            else{
                cout<<endl<<" AINDA NÃO FORAM GERADOS CLIENTES !";
                cout<<endl<<system("pause");
            }
        }

        if(menu==6){
            if(cliente1){
                consulta(cliente, boletos, cont, contb);
            }
            else{
                cout<<endl<<" AINDA NÃO FORAM GERADOS CLIENTES !";
                cout<<endl<<system("pause");
            }
        }
    }while(menu!=0);
}