#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    char p[50];
    char q[50];
    char r[50];
    
    printf("Digite seu login:\n");
    scanf("%s", p);
    printf("Digite a senha:\n");
    scanf("%s", q);
    printf("Digite a senha mestra:\n");
    scanf("%s", r);
    
    if (strcmp(p, "pedro") == 0 && strcmp(q, "1234") == 0) {
        printf("Pode Acessar!\n");
    } else if (strcmp(p, "pedro") == 0 && strcmp(q, "1234") != 0) {
        printf("Acesso negado!\n");
    } else if (strcmp(r, "5678") == 0) {
        printf("Pode acessar!\n");
    } else {
        printf("Acesso negado!\n");
    }
    
    return 0;
}

