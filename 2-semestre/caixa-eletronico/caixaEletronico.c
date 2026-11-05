#include <stdio.h>

int main(){
    char nome[50];
    int cpf, status;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite seu cpf: ");
    scanf("%d", &cpf);

    printf("Para darmos continuidade preciso que insira o cartão(digite S caso tenha inserido.)");
    scanf("%d", &status);

    while(status != "s" || status != "S"){
        printf("Não detectamos o cartão tente novamente.");

        printf("Para darmos continuidade preciso que insira o cartão(digite S caso tenha inserido.)");
    scanf("%d", &status);

    }

    printf("\n%s %d %d", nome, cpf, status);
}