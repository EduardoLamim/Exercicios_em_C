// Exercícios_28_08_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Operacoes.h"

using namespace std;

#pragma region Exercício01


void calcularMedia(int nota1, int nota2)
{
	if ((nota1 + nota2) / 2 >= 6)
		cout << "Você foi aprovado!";
	else
		cout << "Você foi reprovado!";
}

void exercicio01()
{
	int nota1 = 0;
	int nota2 = 0;

	cout << "Insira a primeira nota: ";
	cin >> nota1;
	cout << "Insira a segunda nota: ";
	cin >> nota2;

	calcularMedia(nota1, nota2);
}

#pragma endregion

#pragma region Exercício02



enum poligono
{
	triangulo = 3,
	quadrado = 4,
	pentagono = 5
};

void verificarLadosPoligono(poligono lados)
{
	switch (lados)
	{
	case triangulo:
		cout << "Isso é um triângulo";
		break;
	case quadrado:
		cout << "Isso é um quadrado";
		break;
	case pentagono:
		cout << "Isso é um pentagono";
		break;
	default:
		cout << "Valor inválido";
	}
}

void exercicio02()
{
	int ladosPoligono = 0;

	cout << "Digite os lados de um polígono: ";
	cin >> ladosPoligono;

	poligono valor = (poligono)ladosPoligono;
	verificarLadosPoligono(valor);
}

#pragma endregion

#pragma region Exercício03

int dobroNumero(int numero)
{
	return numero * 2;
}

void exercicio03()
{
	int numero = 0;

	cout << "Digite um número: ";
	cin >> numero;

	cout << "O dobro do seu número é: " << dobroNumero(numero);
}

#pragma endregion

#pragma region Exercício04




bool verificarNumero(int valor)
{
	return (valor % 2 == 0);
}

void exercicio04()
{
	int numero = 0;

	cout << "Digite um número: ";
	cin >> numero;

	cout << "Esse número é par: " << verificarNumero(numero);
}

#pragma endregion

#pragma region Exercício05

double areaCirculo(double raio)
{
	return 3.14 * raio * raio;
}

double perimetroCirculo(double raio)
{
	return 3.14 * 2 * raio;
}

void exercicio05()
{
	double raio = 0.0;

	cout << "Digite o raio: ";
	cin >> raio;

	cout << "Área do círculo: " << areaCirculo(raio) << endl;
	cout << "Perímetro do círculo: " << perimetroCirculo(raio) << endl;
}

#pragma endregion

#pragma region Exercício06

int menu()
{
	int opcao = 0;

	cout << "\t Calculadora" << endl << endl;
	cout << "1 - Adição" << endl << "2 - Subtração" << endl << "3 - Multiplicação" << endl << "4 - Divisão" << endl << "5 - Sair" << endl << endl;

	cout << "Digite uma opção: ";
	cin >> opcao;

	return opcao;
}

void exercicio06()
{
	int opcao = 0;
	double n1 = 0;
	double n2 = 0;

	do {

			opcao = menu();
			
			if (opcao != 5) {

			cout << endl << "Digite um número: ";
			cin >> n1;

			cout << "Digite um outro número: ";
			cin >> n2;
			cout << endl;


			switch (opcao)
			{
			case 1:
				cout << "Resultado: " << soma(n1, n2) << endl << endl;
				break;
			case 2:
				cout << "Resultado: " << subtracao(n1, n2) << endl << endl;
				break;
			case 3:
				cout << "Resultado: " << multiplicacao(n1, n2) << endl << endl;
				break;
			case 4:
				cout << "Resultado: " << divisao(n1, n2) << endl << endl;
				break;
			default:
				cout << "Opcão inválida" << endl << endl;
				break;
			}
		}
		else {}
	} while (opcao != 5);
}

#pragma endregion

int main() {

	setlocale(LC_ALL, "portuguese");

	cout << "Exercício 1" << endl << endl;
	exercicio01();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	cout << "Exercício 2" << endl << endl;
	exercicio02();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	cout << "Exercício 3" << endl << endl;
	exercicio03();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	cout << "Exercício 4" << endl << endl;
	exercicio04();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	cout << "Exercício 5" << endl << endl;
	exercicio05();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	cout << "Exercício 6" << endl << endl;
	exercicio06();

	return 0;
}