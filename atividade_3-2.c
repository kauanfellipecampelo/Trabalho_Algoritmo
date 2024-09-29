#include <stdio.h>
#include <limits.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
    printf("======================================================================\n");
    printf("| %-25s | %-20s | %-20s |\n", "TIPO", "MÍNIMO", "MÁXIMO");
    printf("======================================================================\n");
    printf("| %-25s | %-20d | %-20d |\n", "char", CHAR_MIN, CHAR_MAX);
    printf("| %-25s | %-20d | %-20d |\n", "int", INT_MIN, INT_MAX);
    printf("| %-25s | %-20d | %-20d |\n", "short int", SHRT_MIN, SHRT_MAX);
    printf("| %-25s | %-20s | %-20u |\n", "unsigned int", "0", UINT_MAX);
    printf("| %-25s | %-20ld | %-20ld |\n", "long int", LONG_MIN, LONG_MAX);
    printf("| %-25s | %-20s | %-20lu |\n", "unsigned long int", "0", ULONG_MAX);
    printf("| %-25s | %-20lld | %-20lld |\n", "long long int", LLONG_MIN, LLONG_MAX);
    printf("| %-25s | %-20s | %-20llu |\n", "unsigned long long int", "0", ULLONG_MAX);
    printf("======================================================================\n");

    
    int valor_maximo = INT_MAX; 
    printf("\nExemplo de valor fora do limite \n");
    
    printf("Valor original de valor_maximo: %d\n", valor_maximo);
    
    valor_maximo += 1;  /* Adicionando 1 ao valor máximo, ultrapassando o limite suportado pela variável */  

    printf("O valor apresentado após passar do limite é: %d\n", valor_maximo);   

    return 0;
}

