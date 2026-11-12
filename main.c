#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct DF{
    char* direita;
    char* esquerda;
} DF;

int main(int argc, char *argv[]){
    //Alocações
    char *nome_arq, *atributos;    
    int tam = 30;
    char in;
    atributos = calloc(tam, sizeof(char));

    //Parte onde lido com argumentos que eu esqueci o nome certo dessa parte e estou fazendo gracinha agora
    for (int i=0; i< argc; i++){
        if (strcmp(argv[i], "--fds") == 0){
            nome_arq = calloc(strlen(argv[++i]), sizeof(char));
        }
    }
    
    //Abra. O arquivo
    FILE* arquivo = fopen(nome_arq, "r");

    //Leia. O arquivo.
    int cont = 0;
    do{
        in = fgetc(arquivo);
        if((in != ',') || (in != ';') || (in != '{') || (in != '}')) atributos[cont++] = in;
    }while (in != '}');

    in = fgetc(arquivo);


}