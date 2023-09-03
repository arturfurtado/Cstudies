#include <stdio.h>

int numero1;
int numero2;
int resultado;

int main()
{
    int escolha;
    printf("Qual operação você quer realizar? 1:Soma, 2:Substração\n");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor: ");
        scanf("%d", &numero2);

        resultado = numero1 + numero2;
        printf("Resultado: %d\n", resultado);
    }
    else if (escolha == 2)
    {
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor: ");
        scanf("%d", &numero2);

        resultado = numero1 - numero2;
        printf("Resultado: %d\n", resultado);
    }
    else
    {
        printf("Escolha inválida\n");
    }

    return 0;
}
