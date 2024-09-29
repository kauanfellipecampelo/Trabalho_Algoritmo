#include <stdio.h>
#include <locale.h>

float media(float a, float b, float c, float d) {
    if (d == 1) {
        d = 0; 
    }
    return a + b + c + d; 
}

int main() {
    setlocale(LC_ALL, "Portuguese"); 
    float N1, N2, N3, PPD, NotaEU = 0;
    int FezEU, FezN3;

    printf("Digite as notas:\n");
    printf("Nota 1: ");
    scanf("%f", &N1);
    printf("Nota 2: ");
    scanf("%f", &N2);
    printf("PPD: ");
    scanf("%f", &PPD);
    
    printf("Realizou o Exame Unificado?\nDigite 1 para sim e 0 para não: ");
    scanf("%d", &FezEU);
    
    printf("Realizou o N3?\nDigite [1] para sim e [0] para não: ");
    scanf("%d", &FezN3);
    
    if (FezEU == 1) {
        printf("Digite sua nota do EU: ");
        scanf("%f", &NotaEU);
        printf("Nota Exame Unificado: %.2f\n", NotaEU);
    }
    if (FezN3 == 1) {
        printf("Digite sua nota do N3: ");
        scanf("%f", &N3);
        
        if (N3 > 4.5) {
            printf("ERRO!! NOTA INVÁLIDA\n");
            return 3; // Retorna erro
        }
        
        if (N1 < N2) {
            N1 = N3;
        } else {
            N2 = N3;
        }
    }
    
    if (N1 > 4.5 || N2 > 4.5 || PPD > 1) {
        printf("ERRO!! NOTAS INVÁLIDAS\n");
        return 3; // Retorna erro
    }

    float resultado = media(N1, N2, PPD, NotaEU);
    if (resultado < 7) {
        printf("Reprovado!!\n");
    } else {
        printf("Aprovado!!\n");
    }

    printf("Sua média é %.2f\n", resultado);

    return 0;
}

