#include <stdio.h> // Para o printf
#include <iostream> // para o cout

int main () 
{
    // sintaxe printf;
    //printf("string de formato", argumento1, argumento2, ...);

    //ex1: imprimir texto simples
    printf("Olá, mundo!\n");

    //ex2: iprimir n inteiros
    //int idade = 14;
    int idade;
    idade = 14;
    printf("eu tenho %d anos.\n", idade);

    //ex3: numeros reais
    float peso;
    peso = 30.46;
    printf("Meu peso é %.3f kilos.\n", peso);

    //testando texto: ex4
    const char* nome;
    nome = "Caio";
    printf("Meu nome é %s.\n", nome);

    //ex5: imprimindo multiplos valores
    printf("Nome: %s, Idade: %d, Peso: %.3f. \n", nome, idade, peso);

    //ex6: formatação de numeros
    int numero;
    numero = 42;
    printf("decimal: %d\n", numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Hexadecimal: %X\n", numero);
    printf("Octal: %o\n", numero);

    //ex7: Precisão para números de ponto flutuante
    double pi;
    pi = 3.141592653589793;
    printf("Pi com 2 casas decimais: %.2f\n", pi);
    printf("Pi com 6 casas decimais: %.9f\n", pi);

    //ex8: Imprimir caracteres
    char letra;
    letra = 'A';
    printf("Aletra é: %c\n", letra);

    // Exemplo 10: Imprimir porcentagem
    printf("Taxa de aprovação: 50%%\n");  // Para imprimir uma porcentagem use %%

    // Comparação com cout (apenas para referência)

    std::cout << "Com cout: Meu nome é " << nome << " e tenho " << idade << " anos." << std::endl;

    return 0;
}