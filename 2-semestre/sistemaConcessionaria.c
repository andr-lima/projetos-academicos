#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    // criar uma validação na qual caso a parcela seja superior a um terço do salario não deixe financiar.
    float salarioCliente, valorPagoMes;
    int escolhaCarro, escolhaPagamento, qtdParcela, valorAutomovel;
    char nome[100], cpf[20];

    printf("Bem Vindo a WebCars, Chegou a hora de comprar a tão sonhada Conquista. \n");
    printf("Para podermos começar, primeiro precisamos que preencha o cadastro a baixo. \n");

    // Adicionar alguns system cls, para codigo ficar mais limpo;

    printf("Digite seu Nome: ");
    scanf(" %[^\n]", nome);

    do{

        printf("Digite o CPF (11 numeros): ");
        scanf(" %[^\n]", cpf);
        //Adicionar Validação de cpf: veja se o cpf informado é apenas número e que tem 11 digitos
        
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

            printf("Legal boa escolha,\nEscolha a quantidade de meses que quer financiar, entre 20 e 50: ");
            scanf("%d", &qtdParcela);

            system("cls");

            valorPagoMes = (float)valorAutomovel / qtdParcela ;
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

            printf("Legal boa escolha,\nEscolha a quantidade de meses que quer financiar, entre 20 e 50: ");
            scanf("%d", &qtdParcela);

            system("cls");

            valorPagoMes = (float)valorAutomovel / qtdParcela ;

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

            printf("Legal boa escolha,\nEscolha a quantidade de meses que quer financiar, entre 20 e 50: ");
            scanf("%d", &qtdParcela);

            system("cls");

            valorPagoMes = (float)valorAutomovel / qtdParcela ;

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

    default:
        break;
    }

    //Criação do sistema de relatorio Final do Programa




    return 0;
}
    


    