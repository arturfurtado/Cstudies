#include <stdio.h>

int main() {
    int numero_valores;
    printf("Quantos valores você deseja utilizar? ");
    scanf("%d", &numero_valores);

    long long int valores[numero_valores];
    long long int resultado = 0;

    escolha:
    for (int i = 0; i < numero_valores; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%lld", &valores[i]);
       
}
//      if (i = 1)
// {
//     printf("É necessário mais de dois valores para realizar uma operação");
//     goto escolha;
//     } else {
//         goto inicio;
//     }


    inicio:
    int escolha;
    printf("Qual operação você quer realizar? 1:Soma, 2:Subtração, 3:Multiplicação, 4:Divisão\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            for (int i = 0; i < numero_valores; i++) {
                resultado += valores[i];
            }
            printf("Resultado da Soma: %lld\n", resultado);
            break;

        case 2:
            resultado = valores[0]; 
            for (int i = 1; i < numero_valores; i++) {
                resultado -= valores[i];
            }
            printf("Resultado da Subtração: %lld\n", resultado);
            break;

        case 3:
            resultado = 1; 
            for (int i = 0; i < numero_valores; i++) {
                resultado *= valores[i];
            }
            printf("Resultado da Multiplicação: %lld\n", resultado);
            break;

        case 4:
            resultado = valores[0]; 
            for (int i = 1; i < numero_valores; i++) {
                if (valores[i] == 0) {
                    printf("Erro: Divisão por zero não é permitida.\n");
                    return 1; 
                }
                resultado /= valores[i];
            }
            printf("Resultado da Divisão: %lld\n", resultado);
            break;

        default:
            printf("Opção não reconhecida.\n");
    }

    return 0;
}
