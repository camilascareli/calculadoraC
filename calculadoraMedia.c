#include <stdio.h>

int main(){

    int numero, resultado;
    char operacao;
    int primeiraEntrada = 1;

    if (primeiraEntrada){
            printf("Digite o primeiro número:");
            scanf("%d", &numero);
            resultado = numero; 
            getchar();
            primeiraEntrada = 0;
        }

    while (1)
    {
        printf("Digite a operação: +, -, *, / ou digite 'f' para finalizar \n");
        operacao = getchar();
        if (operacao == 'f') {
            break;
        }
        getchar();

        printf("Digite um numero:");
        scanf("%d", &numero);
        getchar();

        switch (operacao)
    {
            case '+':
                resultado += numero;
                break;

            case '-':
                resultado -= numero;
                break;

            case '*':
                resultado *= numero;
                break;

            case '/':
                if (numero == 0) {
                        printf("Erro: Divisão por zero.\n");
                    } else {
                        resultado /= numero;
                    }
                break;
            
            default:
                printf("Operação inválida.\n");
                break;
            }
            printf("O resultado atual é: %d.\n", resultado);
    }
    
    printf("Conta finalizada!\n");
    printf("O resultado final é: %d.\n", resultado);

    return 0;
}