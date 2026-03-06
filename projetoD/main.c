#include <stdio.h> 
#include <string.h>


int main(){


    // Uma forma de criar um struct


    // struct Produto{ 

    //     char nome[20];
    //     char fornecedor[20];
    //     int quantidade;
    //     char validade[20];

    //     float custo; 
    //     float preco; 

    // }

    // A forma mais inteligente 

    typedef struct {

        char nome[20];                  // Eu crio um struct que modela um objeto do mundo
        char fornecedor[20];            // real, no caso o produto em um mercado. 
        int quantidade;
        char validade[20];
        
        float custo;
        float preco; 

    }Produto;           // Dessa forma o código fica maias fácil de reproduzir, mais fácil de 
                        // criar instâncias. 

    // Então eu crio uma instância que possui seus próprios atributos, dados.
    // Produto produto1 = {"Molho de tomate", "Hainz", 20, "25/10/2028", 0.3, 0.5};

    // E agora eu crio um vetor que recebe estas instâncias. 
    // Produto produtos[1] = {produto1};


    int produtosCriar;

    printf("Indique a quantidade de produtos que voce quer adicionar ao estoque: ");
    scanf("%d", &produtosCriar);


    int tamanho = sizeof(Produto) * 100;
    Produto produtosVetor[tamanho]; // Onde eu armazenarei os produtos  


    int produtosCriados = 0; // Contagem dos produtos que foram criados 


    while (produtosCriados <= produtosCriar){   // Compare se a contagem dos produtos criados 
                                                // é menor a quantidade de produtos criar. 

        char nome[20];
        char fornecedor[20];
        int quantidade; 

        float custo;
        float preco; 


        printf("Indique o nome do produto: ");
        scanf("%s", &nome);

        printf("Indique o nome do fornecedor: ");
        scanf("%s", &fornecedor);

        printf("Indique a Quantidade: ");
        scanf("%d", &quantidade);

        printf("Indique o custo: ");
        scanf("%f", &custo);

        printf("Indique o preco: ");
        scanf("%f", &preco); 


        Produto produtoAdicionar =   {nome, 
                            fornecdor,
                            quantidade, 
                            custo, 
                            preco};


        produtosVetor[produtosCriados] = produtoAdicionar; 

        produtosCriados += 1;

    }


    // printf("Nome produto 1: %s", produtos[0].nome); 


    return 0; 
}