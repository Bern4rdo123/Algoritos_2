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
#include<fstream>
#include<sstream>

using namespace std;

void leitura(int v1[], int v2[], int &contv1, int &contv2){
    ifstream le;
    le.open("entrada.txt",ios::in);
    char t[25];

    ofstream escreve;
    escreve.open("saida.txt", ios::out);

    while(!le.eof()){
    le.getline(t,25,' ');

    if(!strcmp(t,"adiciona")){
       le.getline(t,25,' ');
       if(!strcmp(t,"v1")){
           le.getline(t,25,'\n');
           v1[contv1]=atof(t);
           contv1++;
           escreve<<"O número "<< t<<" foi adicionado no vetor V1"<<endl;
       }
        if(!strcmp(t,"v2")){
            le.getline(t,25,'\n');
            v2[contv2]=atof(t);
            contv2++;
            escreve<<"O número "<< t <<" foi adicionado no vetor V2"<<"\n";
            }
        }
        if(!strcmp(t,"mostra")){
            le.getline(t,25,' ');
            if(!strcmp(t,"v1")){
                escreve<<"v1 ";
                le.getline(t,25,'\n');
                if(!strcmp(t,"C")){
                    escreve<<(" C: ");
                    sort(v1,v1+contv1);
                    for(int i=0; i<contv1; i++){
                        escreve<<v1[i]<<" - ";
                    }
                    escreve<<"\n";

                }
                if(!strcmp(t,"D")){
                    escreve<<" D: ";
                    sort(v1,v1+contv1);;
                    for(int i=0; i<contv1; i++){
                        escreve<<v1[i]<<" - ";
                    }
                    cout<<endl;
                    escreve<<"\n";
                }
            }
            if(!strcmp(t,"v2")){
                escreve<<"v2 ";
                le.getline(t,25,'\n');
                if(!strcmp(t,"C")){
                    escreve<<" C: ";
                    sort(v2,v2+contv2, greater<int>());
                    for(int i=0; i<contv2; i++){
                        escreve<<v2[i]<<" - ";
                    }
                    cout<<endl;
                    escreve<<"\n";
                }
                if(!strcmp(t,"D")){
                    escreve<<" D: ";
                    sort(v2,v2+contv2, greater<>());
                    for(int i=0; i<contv2; i++){
                        escreve<<v2[i]<<" - ";
                    }
                    cout<<endl;
                    escreve<<endl;
                }

                continue;
            }
        }
        if(!strcmp(t,"remove")){
            le.getline(t,25,' ');
            if(!strcmp(t,"v1")){
                le.getline(t,25,'\n');
                int c=atoi(t);
                for(int i=0; i<contv1;i++){
                    if(v1[i]==c){
                        for(int j=i; j<contv1; j++){
                            v1[j]=v1[j+1];
                        }
                        contv1--;
                        escreve<<"O número "<< c <<" foi removido do vetor V1";
                        escreve<<endl;
                    }
                }
            }
            if(!strcmp(t,"v2")){
                le.getline(t,25,'\n');
                int c=atoi(t);
                for(int i=0; i<contv2;i++){
                    if(v2[i]==c){
                        for(int j=i; j<contv2; j++){
                            v2[j]=v2[j+1];
                        }
                        contv2--;
                        escreve<<"O número "<< c <<" foi removido do vetor V2";
                        escreve<<endl;
                    }
                }
            }
        }
        if(!strcmp(t, "qtd")){
            le.getline(t,25,'\n');
            if(!strcmp(t,"v1")){
                escreve<<"Total de elementos no vetor V1: "<<contv1<<endl;
            }
            if(!strcmp(t,"v2")){
                escreve<<"Total de elementos no vetor V2: "<<contv2<<endl;
            }
        }
        if(!strcmp(t,"media")){
            le.getline(t,25,' ');
                if(!strcmp(t,"v1")){
                    float soma=0;
                    int cont;

                    for(int i=0; i<contv1;i++){
                        soma+=v1[i];
                    }
                    escreve<<"Media: "<<soma/(contv1+1);
                }
                if(!strcmp(t,"v2")){
                    float soma=0;
                    int cont;

                    for(int i=0; i<contv2;i++){
                    soma+=v2[i];
                    }
                    escreve<<"Media: "<<soma/(contv2+1);
                }

        }
    }
    le.close();
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int v1[50];
    int contv1=0;
    int v2[50];
    int contv2=0;

        leitura(v1,v2, contv1, contv2);
}
