//Alice Martins Valero
//Número de Matrícula - 202210341

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void verifica(char str[],FILE* fp){
    if(str[1] == 'U'){
        printf("STO 0 ");
        if(str[5] == 'a'){
            printf("3");
        }
        if(str[5] == 'b'){
            printf("4");
        }
        if(str[5] == 'c'){
            printf("5");
        }
        if(str[5] == 'd'){
            printf("6");
        }
        if(str[5] == 'e'){
            printf("7");
        }
    } else {
        fscanf(fp, "%s", str);
        fscanf(fp, "%s", str);
        fscanf(fp, "%s", str);
        if(str[0] == 'A'){
            printf("OPR 0 2");
        }if(str[0] == 'S'){
            printf("OPR 0 3");
        } if(str[0] == 'M'){
            printf("OPR 0 4");
        } if(str[0] == 'D'){
            printf("OPR 0 5");
        }
        fscanf(fp, "%s", str);
    }
}

int main(void){
    FILE *fp;
    char str[50];
    int count = 1;


    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Arquivo não pode ser aberto\n");
    }else{
        while (!feof(fp)) {
            //lê o numero
            fscanf(fp, "%s", str);
            if(str[0] == '/'){
                printf("\nCaso %c%c",str[1],str[2]);
            }
            else{
                verifica(str,fp);
            }
            printf("\n");
        }
        int err = fclose(fp);
        // err != 0
        if (err){
            printf("Arquivo incorretamente fechado!!\n");
        }
    }

} 