/// ---------------------------------------------------------------
/// Projeto Pr�tico em C++ � Calculadora de Circunfer�ncia
/// ---------------------------------------------------------------
/// Descri��o:
/// Construa um algoritmo que calcule o valor do comprimento da
/// circunfer�ncia a partir do valor do raio informado pelo usu�rio.
///
/// F�rmula utilizada:
///     C = 2 * p * r
///
/// Objetivo:
/// Demonstrar o uso de vari�veis, entrada de dados, operadores
/// matem�ticos e sa�da formatada no c�lculo de uma circunfer�ncia.
///
/// Autor: M�dison Santos Oliveira
/// Vers�o: 1.0
/// Linguagem: C++
/// Codifica��o: UTF-8
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
    printf("\n O comprimento da circunferencia �: %.2f \n", comprimento);

    return 0;
}

