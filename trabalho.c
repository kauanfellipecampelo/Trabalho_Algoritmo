#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

double calcular_val(int x, double b) {
    double a0 = 186752,a1 = -148235,a2 = 34504.9,a3 = -3509.1,a4 = 0.183166,a5 = -0.00513554,a6 = 0.0000735464,a7 = -4.22038e-7;
    return round(a0 + (a1 + b) * x + a2 *pow(x,2)+ a3 * (x,3) +
                 a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7));
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num_mensagens, contador_mensagens, contador_caracteres;
    printf("Digite o número de mensagens (1 a 10000): ");
    scanf("%d", &num_mensagens);

    if (num_mensagens < 1 || num_mensagens > 10000) {
        printf("Número de mensagens inválido.\n");
        return 1;
    }
    for (contador_mensagens = 0; contador_mensagens < num_mensagens; contador_mensagens++) {
        double b;
        char mensagem_hexadecimal[101]; 

        printf("Digite o número da inteligencia: ");
        scanf("%lf", &b);
        printf("Digite a mensagem em hexadecimal (máx 100 caracteres): ");
        scanf("%s", mensagem_hexadecimal);

        int x = 1; 
        for (contador_caracteres = 0; contador_caracteres < strlen(mensagem_hexadecimal); contador_caracteres += 2) {
            if (contador_caracteres + 1 >= strlen(mensagem_hexadecimal)) {
                break;
            }
            char par_hexadecimal[3] = {mensagem_hexadecimal[contador_caracteres], mensagem_hexadecimal[contador_caracteres + 1], '\0'};
            int valor_ascii = (int)strtol(par_hexadecimal, NULL, 16);
            if (valor_ascii == 0) {
                continue;
            }
            double resultado = calcular_val(x, b);
            if (resultado != 0) {
                printf("%c", (char)valor_ascii);
            }
            x++;
        }
        printf("\n");
    }
    return 0;
}

