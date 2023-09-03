#include <stdio.h>

int numero1;
int numero2;
int resultado;

int main()
{
    int escolha;
    printf("Qual operação você quer realizar? 1:Soma, 2:Substração, 3:Multiplicação, 4:Divisão\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor: ");
        scanf("%d", &numero2);

        resultado = numero1 + numero2;
        printf("Resultado: %d\n", resultado);
        break;

    case 2:
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor: ");
        scanf("%d", &numero2);

        resultado = numero1 - numero2;
        printf("Resultado: %d\n", resultado);
        break;
    case 3:
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor:");
        scanf("%d", &numero2);

        resultado = numero1 * numero2;
        printf("Resultado: %d\n", resultado);
        break;

    case 4:
        printf("Digite o primeiro valor: ");
        scanf("%d", &numero1);

        printf("Digite o segundo valor:");
        scanf("%d", &numero2);

        if (numero2 != 0)
        {
            resultado = numero1 / numero2;
            printf("Resultado: %d\n", resultado);
        }
        else
        {
            printf("Divisão por 0 não é permitida");
        }
        break;

    default:
        printf("Opção não reconhecida, selecione 1, 2, 3 ou 4.\n");
    }

            return 0;
    }
