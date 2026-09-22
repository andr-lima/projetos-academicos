#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float salarioCliente, valorPagoMes, valorAutomovel;
    int escolhaCarro, escolhaPagamento, qtdParcela, i;
    char nome[100], cpf[20], continuar;

    do{
        system("cls");
        i = 0;
        
        printf("Bem Vindo a WebCars, Chegou a hora de comprar a tão sonhada Conquista. \n");
        printf("Para podermos começar, primeiro precisamos que preencha o cadastro a baixo. \n");

        printf("Digite seu Nome: ");
        scanf(" %[^\n]", nome);

        do{

            printf("Digite o CPF (11 numeros): ");
            scanf(" %[^\n]", cpf);
            
            if (strlen(cpf) == 1){
                break;
            }

            if (strlen(cpf) != 11){
                printf("Erro: Digite 11 algarismos.\n");

            }

            
            }while (strlen(cpf) != 11);

            
        printf("Digite seu salario: ");
        scanf("%f", &salarioCliente);

        system("cls");

        printf("Parábens %s!\nAgora que está Cadastrado, podemos finalmente escolher o seu Automovel.\n", nome);

        printf("Atualmente temos 3 veiculos disponiveis abaixo: \n-1 Uno(R$40.000). \n-2 Civir(R$100.000). \n-3 Corrola(R$130.000).\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolhaCarro);

        system("cls");

        switch (escolhaCarro){
        case 1:

            valorAutomovel = 40000;
            printf("Otima escolha, Você vai pagar a vista(1) ou financiar(2)? \n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolhaPagamento);

            system("cls");

            switch (escolhaPagamento){
            case 1 :
                printf("Ótimo siga para o proximo caixa para concluir o pagamento!");
                break;
            
            case 2 :
                do{
                    printf("Escolha a quantidade de meses que quer financiar, entre 20 e 50: ");
                    scanf("%d", &qtdParcela);
                    if(qtdParcela < 20 || qtdParcela > 50){
                        printf("Digite um Valor entre 20 e 50\n");
                    } else {
                        i++;
                    }
                } while(i < 1);
                
                system("cls");

                valorPagoMes = valorAutomovel / qtdParcela ;
                if (valorPagoMes > salarioCliente * 0.33){
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
            valorAutomovel = 100000;
            printf("Otima escolha, Você vai pagar a vista(1) ou financiar(2)?\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolhaPagamento);

            system("cls");

            switch (escolhaPagamento){
            case 1 :

                printf("Ótimo siga para o proximo caixa para concluir o pagamento!");
                break;
            
            case 2 :

                do{
                    printf("Escolha a quantidade de meses que quer financiar, entre 20 e 50: ");
                    scanf("%d", &qtdParcela);
                    if(qtdParcela < 20 || qtdParcela > 50){
                        printf("Digite um Valor entre 20 e 50\n");
                    } else {
                        i++;
                    }
                } while(i < 1);

                system("cls");

                valorPagoMes = valorAutomovel / qtdParcela ;

                if (valorPagoMes > salarioCliente * 0.33){

                    printf("Infelizmente você não esta apto a este serviço =< \nPor motivos de: Renda insuficiente");

                }else{

                    printf("Você está apto a este serviço => \nVá ao proximo caixa para concluir o pagamento!");

                }

                break;

            default:
                break;
            }
            
            break;
            
        case 3:
            valorAutomovel = 130000;
            printf("Otima escolha, Você vai pagar a vista(1) ou financiar(2)?\n");
            printf("Digite sua escolha: ");
            scanf("%d", &escolhaPagamento);

            system("cls");

            switch (escolhaPagamento){
            case 1 :

                printf("Ótimo siga para o proximo caixa para concluir o pagamento!");
                break;
            
            case 2 :

                do{
                    printf("Escolha a quantidade de meses que quer financiar, entre 20 e 50: ");
                    scanf("%d", &qtdParcela);
                    if(qtdParcela < 20 || qtdParcela > 50){
                        printf("Digite um Valor entre 20 e 50\n");
                    } else {
                        i++;
                    }
                } while(i < 1);

                system("cls");

                valorPagoMes = valorAutomovel / qtdParcela ;

                if (valorPagoMes > salarioCliente * 0.33){

                    printf("Infelizmente você não esta apto a este serviço =< \nPor motivos de: Renda insuficiente");
                    exit(0);
                }else{

                    printf("Você está apto a este serviço => \nVá ao proximo caixa para concluir o pagamento!");

                }

                break;

            default:
                break;
            }
            
            break;

        default:
            break;
        }

        Sleep(3000);
        
        system("cls");

        printf("O Nome cadastrado foi: %s.\n", nome);
        printf("O CPF cadastrado foi: %s.\n", cpf);
        printf("O salario cadastrado foi: %.2f.\n", salarioCliente);

        switch(escolhaCarro){
            case 1: 

                printf("Você escolheu o Uno de R$%.2f.\n", valorAutomovel);

                switch(escolhaPagamento){
                    case 1:

                        printf("Você escolheu pagar vista.\n");
                        break;

                    case 2:

                        printf("Você escolheu financiar em %d meses e pagará R$%.2f por mês.\n", qtdParcela, valorPagoMes);
                        break;

                    default:
                    break;
                }
                break;
            
            case 2:

                printf("Você escolheu o Civic de R$%.2f.\n", valorAutomovel);

                switch(escolhaPagamento){
                    case 1:

                        printf("Você escolheu pagar vista.\n");
                        break;

                    case 2:
                
                        printf("Você escolheu financiar em %d meses e pagará R$%.2f por mês.\n", qtdParcela, valorPagoMes);
                        break;

                    default:
                    break;
                }
                break;

            case 3:

                printf("Você escolheu o Corrola de R$%.2f.\n", valorAutomovel);

                switch(escolhaPagamento){
                    case 1:

                        printf("Você escolheu pagar vista.\n");
                        break;

                    case 2:

                        printf("Você escolheu financiar em %d meses e pagará R$%.2f por mês.\n", qtdParcela, valorPagoMes);
                        break;

                    default:
                    break;
                }
                break;

            default:
                break;
            


        }
    printf("\nDeseja cadastra outro cliente? (s/n): ");
    scanf(" %c", &continuar);

    }while(continuar == 's' || continuar == 'S');

    return 0;
}
    


    