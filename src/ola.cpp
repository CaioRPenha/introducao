#include <stdio.h>  // Necessário para printf
#include <iostream> // Apenas para comparação com cout

int main() {
    // Sintaxe básica do printf:
    // printf("string de formato", argumento1, argumento2, ...);
    
    // Exemplo 1: Imprimir texto simples
    printf("Olá, mundo!\n");
    
    // Exemplo 2: Imprimir números inteiros
    int idade = 25;
    printf("Eu tenho %d anos.\n", idade);
    
    // Exemplo 3: Imprimir números decimais
    float altura = 1.75;
    printf("Minha altura é %.2f metros.\n", altura);
    
    // Exemplo 4: Imprimir múltiplos valores
    char nome[] = "João";
    printf("Nome: %s, Idade: %d, Altura: %.2f\n", nome, idade, altura);
    
    // Exemplo 5: Formatação de números
    int numero = 42;
    printf("Decimal: %d\n", numero);       // Decimal
    printf("Hexadecimal: %x\n", numero);   // Hexadecimal (minúsculo)
    printf("Hexadecimal: %X\n", numero);   // Hexadecimal (maiúsculo)
    printf("Octal: %o\n", numero);         // Octal
    
    // Exemplo 6: Controle de largura e preenchimento
    printf("Número com 5 dígitos: %5d\n", 42);        // Alinhado à direita
    printf("Número com zeros à esquerda: %05d\n", 42); // Preenchido com zeros
    printf("Número alinhado à esquerda: %-5d fim\n", 42); // Alinhado à esquerda
    
    // Exemplo 7: Precisão para números de ponto flutuante
    double pi = 3.141592653589793;
    printf("Pi com 2 casas decimais: %.2f\n", pi);
    printf("Pi com 6 casas decimais: %.6f\n", pi);
    
    // Exemplo 8: Imprimir caracteres
    char letra = 'A';
    printf("A letra é: %c\n", letra);
    
    // Exemplo 9: Imprimir endereços de memória (ponteiros)
    int* ptr = &numero;
    printf("Endereço de memória: %p\n", (void*)ptr);
    
    // Exemplo 10: Imprimir porcentagem
    printf("Taxa de aprovação: 75%%\n");  // Para imprimir % use %%
    
    // Comparação com cout (apenas para referência)
    std::cout << "Com cout: Meu nome é " << nome << " e tenho " << idade << " anos." << std::endl;
    
    return 0;
}