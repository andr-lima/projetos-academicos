#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // criar uma validação na qual caso a parcela seja superior a um terço do salario não deixe financiar.
    float salarioCliente, valorPagoMes;
    int valorDesejado, escolha, qtdParcela, valorAutomovel;
    char nomeCliente[100], cpfCliente[20];

    printf("Bem Vindo a WebCars, Chegou a hora de comprar a tão sonhada Conquista. \n");
    printf("Para podermos começar, primeiro precisamos que preencha o cadastro a baixo. \n");

    printf("Digite seu Nome: ");
    scanf(" %[^\n]", &nomeCliente);

    printf("Digite seu CPF: ");
    scanf(" %[^\n]", &cpfCliente);
    //Adicionar Validação de cpf: veja se o cpf informado é apenas número e que tem 11 digitos

    printf("Digite seu salario: ");
    scanf("%f", &salarioCliente);
    

    printf("Parábens %s!\nAgora que está Cadastrado, podemos finalmente escolher o seu Automovel.\n", nomeCliente);

    printf("Me diga o valor do carro que esta disposto a pagar no seu automovel: ");
    scanf("%d", &valorDesejado);

    if (valorDesejado < 10000){
        printf("Sinto Muito =( \n não temos nada que você possa comprar");


    }else if(valorDesejado >= 15.000){
        printf("Temos duas opções disponiveis! Sendo elas a Bis(1) e a NMax(2)\n");
        printf("(1) -Bis está sendo ofertada no valor de 11 mil\n");
        printf("(2) -NMax está sendo ofertada no valor de 15 mil\n");

        printf("Digite o número referente a sua escolha: ");
        scanf("%d", &escolha);
    
        switch (escolha){
        case 1:
            valorAutomovel = 11000;
            printf("Otima escolha, Você vai pagar a vista(1) ou financiar(2)?");
            scanf("%d", &escolha);
            switch (escolha){
            case 1 :
                printf("Ótimo siga para o proximo caixa para concluir o pagamento!");
                break;
            
            case 2 :
                printf("Legal boa escolha,\nEscolha a quantiade de meses que quer financiar, entre 20 e 50: ");
                scanf("%d", &qtdParcela);
                valorPagoMes = valorAutomovel / qtdParcela ;
                if (valorPagoMes < salarioCliente * 0.33){
                    printf("Infelizmente você não esta apto a este serviço =< \nPor motivos de: Renda insuficiente");
                }else{
                    printf("Você está apto a este serviço => \nVá ao proximo caixa para concluir o pagamento!");
                }

                break;

            default:
                break;
            }
            
            break;
        
        case 2:
            valorAutomovel = 15000;
            printf("Otima escolha, Você vai pagar a vista(1) ou financiar(2)?");
            scanf("%d", &escolha);
            switch (escolha){
            case 1 :
                printf("Ótimo siga para o proximo caixa para concluir o pagamento!");
                break;
            
            case 2 :
                printf("Legal boa escolha,\nEscolha a quantiade de meses que quer financiar, entre 20 e 50: ");
                scanf("%d", &qtdParcela);
                valorPagoMes = valorAutomovel / qtdParcela ;
                if (valorPagoMes < salarioCliente * 0.33){
                    printf("Infelizmente você não esta apto a este serviço =< \nPor motivos de: Renda insuficiente");
                }else{
                    printf("Você está apto a este serviço => \nVá ao proximo caixa para concluir o pagamento!");
                }

                break;

            default:
                break;
            }
            
            break;
            
            break;
        default:
            break;
        }
    

    }


    return 0;
}
    


    