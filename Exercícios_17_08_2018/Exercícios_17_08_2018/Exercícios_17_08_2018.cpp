// Exercícios_17_08_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h> 

using namespace std;

void exercicio01()
{
	cout << "Exercício 1" << endl;

	int valores[5];

	for (int x = 0; x < 5; x++) {
		cout << "Digite um número: ";
		cin >> valores[x];
	}

	system("cls");
	cout << "Os valores digitados foram: " << endl;

	for (int x = 0; x < 5; x++) {
		cout << valores[x] << endl;
	}

}

void exercicio02()
{
	cout << "Exercício 2" << endl;

	double valores[10];
	double media = 0;

	for (int i = 0; i < 10; i++) {
		cout << "Digite um valor: ";
		cin >> valores[i];

		media = media + valores[i];
	}

	media = media / 10;

	system("cls");
	cout << "Os valores acima da média são: " << endl;

	for (int i = 0; i < 10; i++) {
		if (valores[i] > media)
			cout << valores[i] << endl;
	}
}

void exercicio03()
{
	cout << "Exercício 3" << endl;

	int valores1[10];
	int valores2[10];
	int valores3[10];

	for (int i = 0; i < 10; i++) {
		cout << "Digite um valor: ";
		cin >> valores1[i];
		cout << "Digite outro valor: ";
		cin >> valores2[i];

		valores3[i] = valores1[i] * valores2[i];
	}

	system("cls");
	cout << "A multiplicação dos dois arrays é: " << endl;

	for (int i = 0; i < 10; i++) {
		cout << valores3[i] << endl;
	}
}

void exercicio04()
{
	cout << "Exercício 4" << endl;

	int vetor[50];
	int menorValor;
	int indiceMenorValor = 0;
	int numerosImpares = 0;

	cout << "Números pares:" << endl;

	for (int x = 0; x < 50; x++) {
		vetor[x] = rand() % 51;
		if (vetor[x] == 0)
			vetor[x]++;
		if (vetor[x] % 2 == 1)
			numerosImpares++;
		else {
			cout << vetor[x] << endl;
		}
	}

	menorValor = vetor[0];
	indiceMenorValor = vetor[0];

	for (int x = 0; x < 50; x++) {
		if (menorValor > vetor[x]) {
			menorValor = vetor[x];
			indiceMenorValor = x;
		}
	}

	cout << "A quantidade de números ímpares são: " << numerosImpares << endl;
	cout << "O menor valor contido no vetor é: " << menorValor << endl;
	cout << "O índice do menor valor é: " << indiceMenorValor << endl;

}

void exercicio05()
{
	cout << "Exercício 5" << endl;

	int matriz[3][3];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Digite um valor: ";
			cin >> matriz[i][j];
		}
	}
	system("cls");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}

void exercicio06()
{
	cout << "Exercício 6" << endl << endl;

	int matriz[6][6];

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (i == j)
				matriz[i][j] = 1;
			else
				matriz[i][j] = 0;
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}

void exercicio07()
{
	cout << "Exercício 7" << endl << endl;

	int matriz[3][5];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 501;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (matriz[i][j] > 100)
				matriz[i][j] = 0;
		}
	}

	cout << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}
}

void exercicio08()
{
	cout << "Exercício 8" << endl << endl;

	int matriz[5][5];
	int vetor[5];

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 101;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j)
				vetor[i] = matriz[i][j];
		}
	}

	cout << endl << endl;

	for (int i = 0; i < 5; i++) {
		cout << vetor[i] << "\t";
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	srand(time(NULL));

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
	cout << "-------------------------------------------------------------" << endl;
	exercicio08();

    return 0;
}
