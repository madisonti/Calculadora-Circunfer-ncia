/// ---------------------------------------------------------------
/// Projeto Prático em C++ — Calculadora de Circunferência
/// ---------------------------------------------------------------
/// Descrição:
/// Construa um algoritmo que calcule o valor do comprimento da
/// circunferência a partir do valor do raio informado pelo usuário.
///
/// Fórmula utilizada:
///     C = 2 * p * r
///
/// Objetivo:
/// Demonstrar o uso de variáveis, entrada de dados, operadores
/// matemáticos e saída formatada no cálculo de uma circunferência.
///
/// Autor: Mádison Santos Oliveira
/// Versão: 1.0
/// Linguagem: C++
/// Codificação: UTF-8
/// -------------------------

#include <stdio.h>
#include <math.h>
#include <locale.h> 

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float raio, comprimento;

    printf("\n Ola, seja bem-vindo!\n");
    printf("\n Este sistema ira calcular o comprimento da circunferencia a partir do valor do raio.\n");
    printf("\n Digite o valor do raio: ");
    scanf("%f", &raio);

    comprimento = 2 * M_PI * raio; 
    printf("\n O comprimento da circunferencia é: %.2f \n", comprimento);

    return 0;
}

