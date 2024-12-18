#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

    int main(){

        /* Definição de variaveis */

        int calculo;
        float n1, n2, soma, subtracao, divisao, multiplicacao;

        /* Menu */

        while (1){ 
        printf("-- MENU DA CALCULADORA -- \n");
        printf("1- Soma \n");
        printf("2- Subtracao \n");
        printf("3- Multiplicacao \n");
        printf("4- Divisao \n");
        printf("5- Sair \n");
        printf("\n Selecione a opcao desejada: ");
        scanf("%d", &calculo);

        if(calculo == 5){
            printf("Saindo da calculadora... \n");
            break;
        }

        if(calculo >= 1 && calculo <= 4){
            printf("Insira um numero: ");
            scanf("%f", &n1);

            printf("Insira outro numero: ");
            scanf("%f", &n2);
        }

        /* Desvio de fluxo */

        switch(calculo){
            case 1:
                printf("Calculo de adicao selecionado !\n");
                soma = n1 + n2;
                printf("Calculando.... \n");
                sleep(3);
                printf("A soma entre %.0f e %.0f vale: %.0f \n", n1, n2, soma);
                break;
            
            case 2:
                printf("Calculo de subtracao selecionado !\n");
                subtracao = n1 - n2;
                printf("Calculando... \n");
                sleep(3);
                printf("A subtracao entre %.0f e %.0f vale: %.0f \n", n1, n2, subtracao);
                break;
            
            case 3:
                printf("Calculo de multiplicacao selecionado !\n");
                multiplicacao = n1 * n2;
                printf("Calculando... \n");
                sleep(3);
                printf("A multiplicacao entre %.0f e %.0f vale: %.0f \n", n1, n2, multiplicacao);
                break;
            
            case 4:
                printf("Calculo de divisao selecionado !\n");
                divisao = n1 / n2;
                printf("Calculando... \n");
                sleep(3);
                printf("A divisao entre %.0f e %.0f vale: %.2f \n", n1, n2, divisao);
                break;

            default:
                printf("Opcao invalida. Insira um numero de acordo com o menu ! \n");
                continue;
            }   
    }
        system("pause");
            }