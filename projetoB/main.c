#include <stdio.h> 


double adicionar(double parcelaA, double parcelaB){

    return parcelaA + parcelaB;
}


double subtrair(double minuendo, double subtraendo){

    return minuendo - subtraendo; 
}


// Multiplicação. 
double multiplicar(double fatorA, double fatorB){

    return fatorA * fatorB; 
}


// Divisão
double dividir(double numerador, double denominador){

    return numerador / denominador;
}


int main(){

    double resultados[10]; 


    char opcao = 'A';

    int resultados_adicionados = 0;
    while (opcao != 'Q'){

        printf("\n============= Menu de opcoes =============\n");

        printf("\nPara adicionar digite A.");
        printf("\nPara subtrair digite S.");
        printf("\nPara multiplicar digite M.");
        printf("\nPara dividir digite D.\n");

        printf("Indique a sua opcao: ");
        scanf("%c",  &opcao);

        if (opcao == 'A'){

            double parcelaA; 
            double parcelaB; 

            printf("\nAdicionando...\n"); 

            printf("Indique a primeira parcela: ");
            scanf("%lf", &parcelaA); 

            printf("Indique a segunda parcela: ");
            scanf("%lf", &parcelaB); 

            printf("\n============== Resultado ==============\n");
            // printf("\n%.2lf + %.2lf = %.2lf\n", parcelaA, parcelaB, adicionar(parcelaA, parcelaB));


            // Pensando no armazenar os resultados em uma lista 

            double resultado = adicionar(parcelaA, parcelaB);
            resultados[resultados_adicionados] = resultado; 
            resultados_adicionados += 1; 


            printf("%.2lf + %.2lf = %.2lf", parcelaA, parcelaB, resultado);

            printf("\n %.2lf\n", resultados[resultados_adicionados]);
        } else if (opcao == 'S'){

            double minuendo;
            double subtraendo; 

            printf("\nSubtraindo...\n");

            printf("Indique o valor do minuendo: ");
            scanf("%lf", &minuendo);

            printf("Indique o valor do subtraendo: ");
            scanf("%lf", &subtraendo);

            printf("\n============= Resultado =============\n");
            printf("%.2lf - %.2lf = %.2lf", minuendo, subtraendo, subtrair(minuendo, subtraendo)); 


        }else if(opcao == 'M'){

            double fatorA;
            double fatorB; 

            printf("\nMultiplicando...\n");

            printf("Indique o valor do primeiro fator: ");
            scanf("%lf", &fatorA);

            printf("Indique o valor do segundo fator: ");
            scanf("%lf", &fatorB);

            printf("\n============= Resultado =============\n");

            printf("%.2lf x %.2lf = %.2lf", fatorA, fatorB, multiplicar(fatorA, fatorB));

        } else if (opcao == 'D'){

            double numerador;
            double denominador; 

            printf("Indique o valor do numerador: ");
            scanf("%lf", &numerador);

            printf("Indique o valor do denominador: ");
            scanf("%lf", &denominador);

            if (denominador != 0){

                printf("\n============= Resultado =============\n");
                printf("\n%.2lf : %.2lf = %.2lf", numerador, denominador, dividir(numerador, denominador));

            } else {

                printf("O denominador nao pode ser 0.");
                printf("\nTentando novamente...\n");
            } 
        
        } else if (opcao == 'Q'){

            printf("\nSaindo...\n");
            printf("Concluindo iteracao\n"); 


            // Verificando se conseguimos adicionar os resultados. 

            int len_resultados = sizeof(resultados) / sizeof(resultados[0]); 

            for (int i = 0; i < len_resultados; i++){

                printf("%.2lf\n", resultados[i]);
            }


            // Teste realizar três adições e imprimir todos os resultados. 
        }
    }

    return 0;
}