#include <stdio.h>


// Uma calculadora com switch statement 

int main(){

    char opcao = 'A';


    while (opcao != 'Q'){

        printf("\nPara Adicao Digite A.\n");
        printf("Indique A Sua Opcao: ");
        scanf("%c", &opcao); 


    switch (opcao){

        case 'A':{
            printf("Adicao selecionada...\n");  

            double parcelaA;
            double parcelaB; 

            printf("Indique o valor da primeira parcela: "); 
            scanf("%lf", &parcelaA); 

            printf("Indique o valor da segunda parcela: ");
            scanf("%lf", &parcelaB); 

            double resultado = parcelaA + parcelaB; 

            printf("\n========== Resultado ==========\n");
            printf("%.2lf + %.2lf = %.2lf\n", parcelaA, parcelaB, resultado); 

            break;

        }

        case 'S':{  
            printf("\nSubtracao Selecionada...\n\n");

            double minuendo;
            double subtraendo;

            // Obtendo as entradas.
            printf("Indique o valor do minuendo: ");
            scanf("%lf", &minuendo);
            

            printf("Indique o valor do subtraendo: ");
            scanf("%lf", &subtraendo);

            double resultado = minuendo - subtraendo; 

            printf("\n========== Resultado ==========\n\n");
            printf("%.2lf - %.2lf = %.2lf\n", minuendo, subtraendo, resultado); 

            break; 


        }

        // O caso da múltiplicação. 
        case 'M': {

            double fatorA; 
            double fatorB; 

            printf("\n\n============= Multiplicacao ============\n\n"); 

            printf("Indique o primeiro fator: ");
            scanf("%lf", &fatorA); 

            printf("Indique o segundo fator: ");
            scanf("%lf", &fatorB); 

            double resultado = fatorA * fatorB; 

            printf("\n%.2lf x %.2lf = %.2lf.\n", fatorA, fatorB, resultado);

        }

        case 'D': {

            double numerador; 
            double denominador; 

            printf("\n\n============ Divisao =============\n\n");

            printf("Indique o numerador: ");
            scanf("%lf", numerador); 

            printf("Indique o denominador: ");
            scanf("%lf", denominador); 

            if (denominador != 0){

                double resultado = numerador / denominador; 

                printf("\n\n============== Resultado =============\n\n"); 

                printf("\n\n%.2lf : %.2lf = %.2lf.\n\n", numerador, denominador, resultado);

            } else {

                printf("O denominador nao pode ser igual a zero; Isso nos levaria a uma indeterminacao em matamática.");
            }
        } 

        // O código está com um problema relacionado ao que está sendo exibido no display, uma repetição na frase: "Para Adição que aparece duas ". Problema resolvido.
    }

    }


    return 0;
}