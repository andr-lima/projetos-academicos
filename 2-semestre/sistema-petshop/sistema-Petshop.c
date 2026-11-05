#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>




void login(){
    char user[50], senha[20];
    for(int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Digite seu Usuario: ");
        scanf("%49s", user);

        printf("Digite sua senha: ");
        scanf("%19s", senha);

        if(strcmp(user,"admin") == 0 && 
            strcmp(senha,"1234") == 0){
            system("clear");
            // printf("Bem Vindo %s\n", user);
            return;
        } 
        printf("Usuario ou senha incorretos.\n");
    }
    printf("Limite de tentativas atingido.\n");
}

int main(){
    char divisoria[40] = "==============================",nomeCliente[10][75], telefone[10][20], nomePet[20][50], especie[20][12];
    int saida = 0, escolha, escolhaCadastro, i = 0, j = 0, ch, verificador;
    login();

    do{
        printf("\n%s\n     PETSHOP AMIGO FIEL     \n%s\n", divisoria,divisoria);
        printf("1 - Cadastros\n2 - Serviços\n3 - Produtos\n4 - Comprovante final\n0 - Sair\n");
        scanf("%d", &escolha);

        switch (escolha){
            case 0:
                saida = 1;
                break;
            case 1:
                do{
                    system("clear");
                    printf("--------CADASTROS--------\n");
                    printf("1 - Cadastrar cliente\n2 - Cadastrar pet\n0 - Voltar\n");
                    scanf("%d", &escolhaCadastro);
                    switch (escolhaCadastro){
                        case 0:
                            system("clear");
                            break;

                        case 1:
                            system("clear");
                            while ((ch = getchar()) != '\n' && ch != EOF) {
                            }
                            printf("Nome Cliente:");
                            
                            if(i<10){
                                fgets(nomeCliente[i], 75, stdin);
                                nomeCliente[i][strcspn(nomeCliente[i], "\n")] = '\0';
                                printf("Nome cadastrado: %s\n", nomeCliente[i]);
                            } else {
                                printf("Limite de clientes atingido.\n");
                            }
                            printf("Telefone Cliente:");
                            if(i<10){
                                fgets(telefone[i], 20, stdin);
                                telefone[i][strcspn(telefone[i], "\n")] = '\0';
                                printf("Telefone cadastrado: %s\n", telefone[i]);
                                i++;
                            } else {
                                printf("Limite de clientes atingido.\n");
                            }
                            break;
                        
                        case 2:
                            if(i == 0){
                                printf("Cadastre um Usúario primeiro!\n");
                                sleep(1);
                            } else {
                                system("clear");
                                printf("Nome do pet: \n");
                                scanf("%s", nomePet[j]);
                                system("clear");
                                verificador = 0;
                                
                                do{
                                    printf("-----ESPÉCIE-----\n1 - Cachorro\n2 - Gato\n");
                                    scanf("%d", &escolha);
                                    switch (escolha){
                                        case 1:
                                            strcpy(especie[j], "cachorro");
                                            verificador++;
                                            break;

                                        case 2:
                                            strcpy(especie[j], "gato");
                                            verificador++;
                                            break;

                                        default:
                                            system("clear");
                                            printf("Escolha uma das opções\n");
                                            sleep(1);
                                            break;
                                            
                                    }
                                }while(verificador != 1);
                            }
                            break;

                        default:
                            system("clear");
                            printf("Escolha uma das opções!");
                            sleep(1);
                            break;

                    }
                    
                }while(escolhaCadastro != 0);
            case 2:
                system("clear");
                printf("--------SERVIÇOS--------\n");
                printf("1 - Banho\n2 - Tosa\n3 - Veterinária\n0 - Voltar\n");
                scanf("%d", &escolha);
                switch (escolha){
                    case 0:
                        system("clear");
                        break;

                    default:
                        system("clear");
                        printf("Escolha uma das opções!");
                        sleep(1);
                }
                break;
            case 3:
                system("clear");
                printf("--------PRODUTOS--------\n");
                printf("1 - Alimentos\n2 - Acessórios\n3 - Higiene\n0 - Voltar\n");
                scanf("%d", &escolha);
                switch (escolha){
                    case 0:
                        system("clear");
                        break;

                    default: 
                        system("clear");
                        printf("Escolha uma das opções!");
                        sleep(1);
                }
                break;
                
            default:
                system("clear");
                printf("Escolha uma das opções!");
                sleep(1);
                break;
            
        }
    }while (saida != 1);
    return 0;
}
