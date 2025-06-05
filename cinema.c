#include <stdio.h>

int main() {
    int ingressos, pontos, continuar;
    float precoingre = 25.00;
    float valor;

    do{
        printf("Bem vindo ao Cinema\n");
        printf("Digite a quantidade de ingressos comprados: ");
        scanf("%d", &ingressos);

        pontos = ingressos; 
        valor = ingressos * precoingre; 

        printf("Cliente acumulou %d pontos.\n", pontos);
        printf("Valor total da compra: R$ %.2f\n", valor);

        printf("Deseja cadastrar outro cliente? (1-Sim / 0-Não): ");
        scanf("%d", &continuar);
        
    } while (continuar != 0);

    printf("Sistema encerrado.\n");

    return 0;
}
