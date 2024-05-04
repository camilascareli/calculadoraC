#include <stdio.h>

int main(){
    int numero1, numero2, resultado;
    char operacao;

    printf("Digite um número: \n");
    scanf("%d", &numero1);
    getchar();

    printf("Digite outro número: \n");
    scanf("%d", &numero2);
    getchar();

    printf("Qual será a operação? +, -, * ou / \n");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':
        resultado = numero1 + numero2;
        printf("O resultado é %d. \n", resultado);
        break;

    case '-':
        resultado = numero1 - numero2;
        printf("O resultado é %d. \n", resultado);
        break;

    case '*':
        resultado = numero1 * numero2;
        printf("O resultado é %d. \n", resultado);
        break;

    case '/':
        if (numero2 == 0) {
                printf("Erro: Divisão por zero.\n");
            } else {
                resultado = numero1 / numero2;
                printf("O resultado é: %d. \n", resultado);
            }
        break;
    
    default:
        printf("Operação inválida.\n");
        break;
    }

    return 0;
}