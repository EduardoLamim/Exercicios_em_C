// Exercícios_ 07_08_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int exercicio01()
{
	cout << "Exercício 1" << endl;

	int numero;

	cout << "Digite um número: ";
	cin >> numero;

	if (numero < 0) {
		cout << -numero << endl;
	}
	else {
		cout << numero << endl;
	}

	return 0;
}

int exercicio02()
{
	cout << "Exercício 2" << endl;

	int nota1, nota2, nota3;
	double media;

	cout << "Digite a primeira nota: ";
	cin >> nota1;

	cout << "Digite a segunda nota: ";
	cin >> nota2;

	cout << "Digite a terceira nota: ";
	cin >> nota3;

	media = (nota1 + nota2 + nota3) / 3;

	if (media >= 6) {
		cout << "O aluno foi aprovado com média: " << media << endl;
	}
	else {
		cout << "O aluno foi reprovado com média: " << media << endl;
	}

	return 0;
}

int exercicio03()
{
	cout << "Exercício 3" << endl;

	int numero;

	cout << "Digite um número: ";
	cin >> numero;

	if (numero % 2 == 1){
		cout << "Esse número é ímpar" << endl;
	}
	else {
		cout << "Esse número é par" << endl;
	}

	return 0;
}

int exercicio04()
{
	cout << "Exercício 4" << endl;

	char letra;

	cout << "Digite uma letra: ";
	cin >> letra;

	switch (letra) 
	{
	case 'A':
		cout << "Essa letra é uma vogal" << endl;
		break;
	case 'a':
		cout << "Essa letra é uma vogal" << endl;
		break;

	case 'E':
		cout << "Essa letra é uma vogal" << endl;
		break;
	case 'e':
		cout << "Essa letra é uma vogal" << endl;
		break;

	case 'I':
		cout << "Essa letra é uma vogal" << endl;
		break;
	case 'i':
		cout << "Essa letra é uma vogal" << endl;
		break;

	case 'O':
		cout << "Essa letra é uma vogal" << endl;
		break;
	case 'o':
		cout << "Essa letra é uma vogal" << endl;
		break;

	case 'U':
		cout << "Essa letra é uma vogal" << endl;
		break;
	case 'u':
		cout << "Essa letra é uma vogal" << endl;
		break;

	default:
		cout << "Essa letra é uma consoante" << endl;
	}

	return 0;
}

int exercicio05()
{
	cout << "Exercício 5" << endl;

	int horas, minutos;

	cout << "Digite as horas: ";
	cin >> horas;

	cout << "Digite os minutos: ";
	cin >> minutos;

	if (horas >= 00 and horas <= 23) {
		if (minutos >= 00 and minutos <= 59)
			cout << "O horário informado é: " << horas << ":" << minutos << endl;
	}
	else {
		cout << "O horário informado é inválido" << endl;
	}

	return 0;
}

int exercicio06()
{
	cout << "Exercício 6" << endl;

	int numero1, numero2, numero3;

	cout << "Digite o primeiro número: ";
	cin >> numero1;

	cout << "Digite o segundo número: ";
	cin >> numero2;

	cout << "Digite o terceiro número: ";
	cin >> numero3;

	if (numero1 % 2 == 0) {
		if (numero2 % 2 == 1) {
			if (numero3 % 2 == 0)
				cout << "Números mágicos inseridos corretamente" << endl;
			else
				cout << "Números inseridos em ordem errada" << endl;
		}
		else 
			cout << "Números inseridos em ordem errada" << endl;
	}
	else
		cout << "Números inseridos em ordem errada" << endl;

	return 0;
}

int exercicio07()

{
	cout << "Exercício 7" << endl;

	int numero;

	cout << "Digite um número: ";
	cin >> numero;

	if (numero >= 10 and numero <= 20 or numero >= 40 and numero <= 50)
		cout << "Número na faixa correta" << endl;
	else
		cout << "Número incorreto" << endl;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	exercicio01();
	cout << "-------------------------------------------------------------" << endl;
	exercicio02();
	cout << "-------------------------------------------------------------" << endl;
	exercicio03();
	cout << "-------------------------------------------------------------" << endl;
	exercicio04();
	cout << "-------------------------------------------------------------" << endl;
	exercicio05();
	cout << "-------------------------------------------------------------" << endl;
	exercicio06();
	cout << "-------------------------------------------------------------" << endl;
	exercicio07();

    return 0;
}

