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

struct dados{
    int idade;
    string sexo;
    float salario;
    int filhos;
};

struct media{
    float idade;
    float salariof;
    float salariom;
    float salariofilhos;
    int maisv;
}media;

struct novo{
    float salario;
    int idade;
    string sexon;
}novo;

struct velho{
    float salario;
    int idade;
    string sexov;
}velho;

struct conta{
    int h=0;
    int m=0;
}conta;

int cadastra(dados &pessoa, int cont){
    system("cls");
    cout<<" INFORME A IDADE DESSA PESSOA: ";
    cin>>pessoa.idade;

    cout<<" INFORME O SEXO DESSA PESSOA (M OU F): ";
    fflush(stdin);
    getline(cin, pessoa.sexo);

    cout<<" INFORME O SALÁRIO DESSA PESSOA: ";
    cin>>pessoa.salario;

    cout<<" INFORME A QUANTIDADE DE FILHOS DESSA PESSOA: ";
    cin>>pessoa.filhos;

    if(pessoa.sexo=="F" || pessoa.sexo=="f"){
        media.salariof+=pessoa.salario;
        conta.m++;
    }
    else{
        media.salariom+=pessoa.salario;
        conta.h++;
    }

    if(cont==1){
        novo.idade=pessoa.idade;
        novo.salario=pessoa.salario;
        novo.sexon=pessoa.sexo;

        velho.idade=pessoa.idade;
        velho.salario=pessoa.salario;
        velho.sexov=pessoa.sexo;

        media.maisv=pessoa.filhos;
        media.salariofilhos=pessoa.salario;

        return 0;
    }
    if(pessoa.idade>velho.idade){
        velho.idade=pessoa.idade;
        velho.salario=pessoa.salario;
        velho.sexov=pessoa.sexo;
    }
    if(pessoa.idade<novo.idade){
        novo.idade=pessoa.idade;
        novo.salario=pessoa.salario;
        novo.sexon=pessoa.sexo;
    }
    if(pessoa.filhos>media.maisv){
        media.maisv=pessoa.filhos;
        media.salariofilhos=pessoa.salario;
    }
}

main()
{
setlocale(LC_ALL, "Portuguese");

    dados pessoa;
      int menu;
      int cont=1;

do{
    system("cls");
    cout<<" -MENU- "<<endl;
    cout<<" 0- Sair"<<endl;
    cout<<" 1- Cadastrar nova pessoa"<<endl;
    cout<<" 2- Média de salários dos homens cadastrados"<<endl;
    cout<<" 3- Média de salários das mulheres cadastradas"<<endl;
    cout<<" 4- Sexo e salário da pessoa mas velha cadastrada"<<endl;
    cout<<" 5- Sexo e salário da pessoa mais nova cadastrada"<<endl;
    cout<<" 6- Salário da pessoa com mais filhos"<<endl;

    cin>>menu;

    if(menu>5 || menu<0){
        cout<<endl<<" INSIRA UM VALOR VÁLIDO ";

        }

    if(menu==1){
        cadastra(pessoa, cont);
        cont++;
    }
    if(menu==2){
        system("cls");
        cout<<" Media de salário masculino: "<<media.salariof/conta.h;
        cout<<endl<<system("pause");
    }
    if(menu==3){
        system("cls");
        cout<<" Media de salário feminino: "<<media.salariom/cont.f;
        cout<<endl<<system("pause");
    }
    if(menu==4){
        system("cls");
        cout<<" O sexo da pessoa mais velha é: ";
        if(velho.sexov=="m" || velho.sexov=="M"){
            cout<<" masculino";
        }
        else{
            cout<<" feminino";
        }
        cout<<endl;
        cout<<" O salário da pessoa mais velha é de: ";
        cout<<velho.salario;

        cout<<endl;
        system("pause");
    }
    if(menu==5){
        system("cls");
        cout<<" O sexo da pessoa mais nova é: ";
        if(novo.sexon=="m" || novo.sexon=="M"){
            cout<<" masculino";
        }
        else{
            cout<<" feminino";
        }
        cout<<endl;
        cout<<" O salário da pessoa mais nova é de: ";
        cout<<novo.salario;

        cout<<endl;
        system("pause");
    }
    if(menu==6){
        system("cls");
        cout<<" O salário da pessoa com mais filhos é de: ";
        cout<< media.salariofilhos;
        system("pause");
    }
    }while(menu!=0);
}
