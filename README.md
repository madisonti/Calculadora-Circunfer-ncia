# Calculadora de Circunferência — Projeto Prático em C

> **Observação:** O código-fonte utiliza a sintaxe C (com bibliotecas C padrão como `stdio.h` e `math.h`), embora a descrição mencione C++. No contexto de projetos práticos e educacionais, é comum a interoperabilidade. Este README reflete a linguagem C utilizada no código.

## 📘 Descrição do Projeto

Este projeto simples e prático, desenvolvido em **C**, tem como objetivo calcular o **comprimento da circunferência** a partir do valor do raio informado pelo usuário.

É um exercício com foco na aplicação de conceitos fundamentais de programação:
* Variáveis numéricas (`float`).
* Entrada e saída de dados.
* Operadores matemáticos.
* Uso de constantes matemáticas (`M_PI`).

### Fórmula Matemática

A fórmula matemática utilizada para o cálculo é:

$$C = 2 \times \pi \times r$$

Foto ilustrativa 

<img width="235" height="215" alt="Image" src="https://github.com/user-attachments/assets/adc2ec62-3f04-4c12-a69e-73eda0a78a2b" />

Onde:
* **$C$** é o comprimento da circunferência.
* **$\pi$ (pi)** é a constante matemática ($\approx 3.14159$).
* **$r$** é o raio informado pelo usuário.

---

## 🧠 Objetivos de Aprendizagem

* Compreender o uso de variáveis numéricas (`float`).
* Utilizar funções de entrada e saída (`scanf` / `printf`).
* Aplicar operadores matemáticos.
* Utilizar bibliotecas padrão (`stdio.h`, `math.h`, `locale.h`).
* Configurar o ambiente para suporte a caracteres especiais (UTF-8).

---

## ⚙️ Tecnologias Utilizadas

* **Linguagem:** C
* **Bibliotecas padrão:** `stdio.h`, `math.h`, `locale.h`
* **Codificação:** UTF-8
* **Compatibilidade:** Windows, Linux e macOS

---

## 💻 Código-Fonte (`circunferencia.c`)

```c
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul"); // Força o console a usar UTF-8 no Windows

    float raio, comprimento;

    printf("\nOlá, seja bem-vindo!\n");
    printf("\nEste sistema calcula o comprimento da circunferência a partir do valor do raio.\n");
    printf("\nDigite o valor do raio: ");
    scanf("%f", &raio);

    // M_PI é uma constante definida em <math.h> que representa o valor de Pi
    comprimento = 2 * M_PI * raio;

    printf("\nO comprimento da circunferência é: %.2f\n", comprimento);

    return 0;
}
