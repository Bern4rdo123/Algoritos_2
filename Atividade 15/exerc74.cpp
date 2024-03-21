#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

void leitura(int *ponteiro_N);
void preenche(char *ponteiro_vetor_aux, int *posicao);

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int N, COLUNA = 0, LINHA = 0, INDICE = 0, contador_parametro = 0;

    leitura(&N);

    char matriz[N][N], auxiliar[N*N];

    preenche(&auxiliar[0], &N);

    ofstream escreve_txt("exer_74.txt",ios :: out);

    system("cls");
    cout << "\n\tMatriz gerada:\n\n";

    for(LINHA = 0; LINHA < N; LINHA++){
        for(COLUNA = 0; COLUNA < N; COLUNA++){
            matriz[LINHA][COLUNA] = auxiliar[contador_parametro];
            cout << "\t" << matriz[LINHA][COLUNA] << " ";
            escreve_txt << "\t" << matriz[LINHA][COLUNA] << " ";
            contador_parametro++;
        }
        cout << endl;
        escreve_txt << "\n";
    }

    escreve_txt.close();



}

void leitura(int *ponteiro_N){

    bool entrada_correta = false, mensagem_erro = false;

    do{
        system("cls");

        if(mensagem_erro == true)
            cout << "\n\tAVISO: número inserido incorreto.\n\n";

        cout << "\n\tInsira um número ímpar entre 5 e 15: ";
        cin >> *ponteiro_N;

        if(*ponteiro_N > 15 || *ponteiro_N < 5 || *ponteiro_N % 2 == 0)
                mensagem_erro = true;

        else
            entrada_correta = true;

    } while (entrada_correta == false);

}

void preenche(char *ponteiro_vetor_aux, int *posicao){

    int linha = 0, coluna = 0;

    for(linha = 0; linha < *posicao; linha++){
            for(coluna = 0; coluna < *posicao; coluna++){

                if(coluna * 2 == *posicao - 1 || linha * 2 == *posicao - 1)
                    *ponteiro_vetor_aux = '#';

                else if(coluna * 2 < *posicao - 1 && linha * 2 < *posicao - 1)
                    *ponteiro_vetor_aux = 'A';

                else if(coluna * 2 > *posicao - 1 && linha * 2 < *posicao - 1)
                    *ponteiro_vetor_aux = 'B';

                else if(coluna * 2 < *posicao - 1 && linha * 2 > *posicao - 1)
                    *ponteiro_vetor_aux = 'C';

                else if(coluna * 2 > *posicao - 1 && linha * 2 > *posicao - 1)
                    *ponteiro_vetor_aux = 'D';

                ponteiro_vetor_aux++;

            }
    }

    ponteiro_vetor_aux -= *posicao;

}


