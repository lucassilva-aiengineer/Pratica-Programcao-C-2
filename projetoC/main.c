#include <stdio.h>
#include <string.h> 


// Treinando Loops for loops while e a criação de structs. 


// typedef struct Funcionario{

//     char id[20];
//     char nome[30];
//     int idade;
//     char cpf[20];


// };

typedef struct{

    char id[20];
    char nome[25];
    int idade; 
    char cpf[20];
    char senha[10];
    double salario; 

} Funcionario; 




int main(){



    Funcionario funcionario = {"10304", "Marcos", 25, "000.000.000-00", "1234", 10000};

    printf("============ Funcionario ============\n\n");

    printf("\nNome: %s", funcionario.nome);
    printf("\nID: %s", funcionario.id);
    printf("\nIdade: %d\n\n", funcionario.idade);



    Funcionario lider = {"2502", "Mateus", 22, "000.000.000-00", "abcd", 20000};

    printf("Senha: %s", lider.senha);

    char senha_a[10]; 

    printf("Indique a sua senha: ");
    scanf("%s", &senha_a); 


    if (lider.senha == "abcd"){

        double salario;

        printf("\n\n============ Alterando salario ============\n\n");

        // printf("============ Relatorio ============");
        // printf("")

        printf("Indique o novo salário: ");
        scanf("%lf", &salario);

        funcionario.salario = salario; 

        printf("Salario do Funcionario: %lf", funcionario.salario);


    } 
    return 0;
}   

// Uma ideia de projeto interessante seria um sistema de administração de funcionários.