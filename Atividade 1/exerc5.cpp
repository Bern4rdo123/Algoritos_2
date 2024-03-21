#include<iostream>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>
#include<iomanip>
#include<cmath>
#include<locale.h>
#include<clocale>
#include<stdlib.h>

using namespace std;
int main()
{
    system("chcp 65001");
    system("cls");
   setlocale(LC_ALL, "Portuguese");

   cout.precision(2);
   cout<<fixed;

    float mat[10][2];
    int conta=0;
    int t=0;
     int cod;
      int quant;

      for(int i=0; i<=9; i++){
        for(int j=0; j<2; j++){
            mat[i][j]=0;
        }
      }

    for(int i=0;i<9;i++){
        do{
        cout<<" INFORME O CÓDIGO DO PRODUTO: "<<endl;

        cin>>cod;
        }while(cod<1 || cod>9);
        cout<<" INFORME A QUANTIDADE DO PRODUTO SELECIONADO: "<<endl;

        cin>>quant;


        mat[cod][t]+=cod;
        mat[cod][t+1]+=quant;

        conta++;

        cout<<" DESEJA INFORMAR UM NOVO PRODUTO ? 1-sim   2-não"<<endl;
        int d;
        cin>>d;

        if(d==1){
            continue;
            conta++;
        }
        else{
            break;
        }
    }

        for(int i=0; i<9; i++){
            cout<<endl<<mat[i][0];
        }

    for(int i=0; i<conta; i++){
        if(mat[i][0]==1){
            cout<<" FOLHA A4 COM 500";
            cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*28.00;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.07*28.00))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*28.00)-((0.07*28.00)*mat[cod][t+1]);
            cout<<endl;

            continue;
        }
        if(mat[i][0]==2){
            cout<<" CANETA BIC FINA";
            cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*6.30;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.05*6.30))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*6.30)-((0.05*6.30)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==3){
            cout<<" CADERNO 10 MATÉRIAS";
            cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*22.00;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.05*22.00))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*22.00)-((0.05*22.00)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==4){
            cout<<" CANETA MARCA TEXTO";
             cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*17.80;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.06*17.80))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*17.80)-((0.06*17.80)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==6){
            cout<<" CORRETOR ORTOGRÁFICO";
             cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*11.00;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.1*11.00))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*11.00)-((0.1*11.00)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==5){
            cout<<" COLA BASTÃO";
            cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*5.50;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.07*5.50))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*5.50)-((0.07*5.50)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==7){
            cout<<" LÁPIS PRETO";
            cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*4.50;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.02*4.50))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*4.50)-((0.02*4.50)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==8){
            cout<<" MOCHILA COM SEPARAÇÃO";
             cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*138.00;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.07*138.00))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*138.00)-((0.07*138.00)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
        if(mat[i][0]==9){
             cout<<" CADERNO DE DESENHO";
             cout.width(15);
            cout.fill(' ');
            cout<<mat[cod][t+1]*8.00;

            cout.width(15);
            cout.fill(' ');
            cout<<(float(0.05*8.00))*float(mat[cod][t+1]);

            cout.width(15);
            cout.fill(' ');
            cout<<(mat[cod][t+1]*8.00)-((0.05*8.00)*mat[cod][t+1]);
            cout<<endl;
            continue;
        }
    }

}
