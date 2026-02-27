#include <stdio.h>


// Uma calculadora com switch statement 

int main(){

    char opcao = 'A';


    while (opcao != 'Q'){

        printf("Para Adicao Digite A.\n");
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
            
    }

    }


    return 0;
}