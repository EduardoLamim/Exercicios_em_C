// Exercícios_24_08_2018.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void exercicio01()
{
	cout << "Exercício01" << endl << endl;

	int vetor[50];
	int guardaNumero = 0;

	cout << "Vetor original:" << endl << endl;
	
	for (int i = 0; i < 50; i++) {
		vetor[i] = rand() % 101;
		cout << vetor[i] << " ";
	}

	for (int i = 0; i < 100; i++) {
		for (int aux = 0; aux < 49; aux++) {
			if (vetor[aux] > vetor[aux + 1]) {
				guardaNumero = vetor[aux + 1];
				vetor[aux + 1] = vetor[aux];
				vetor[aux] = guardaNumero;
			}
		}
	}

	cout << endl << endl << "Vetor crescente:" << endl << endl;

	for (int i = 0; i < 50; i++) 
		cout << vetor[i] << " ";
	
	for (int i = 0; i < 100; i++) {
		for (int aux = 0; aux < 49; aux++) {
			if (vetor[aux] < vetor[aux + 1]) {
				guardaNumero = vetor[aux + 1];
				vetor[aux + 1] = vetor[aux];
				vetor[aux] = guardaNumero;
			}
		}
	}

	cout << endl << endl << "Vetor decrescente:" << endl << endl;

	for (int i = 0; i < 50; i++)
		cout << vetor[i] << " ";
}

void exercicio02()
{
	cout << "Exercício 02" << endl << endl;

	int matriz[5][5];
	int vetor[25];
	int guardaNumero = 0;
	int aux2 = 0;

	cout << "Matriz original:" << endl << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = rand() % 101;
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	//----------------------------------------------

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			vetor[aux2] = matriz[i][j];
			aux2++;
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int aux = 0; aux < 24; aux++) {
			if (vetor[aux] > vetor[aux + 1]) {
				guardaNumero = vetor[aux + 1];
				vetor[aux + 1] = vetor[aux];
				vetor[aux] = guardaNumero;
			}
		}
	}

	aux2 = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = vetor[aux2];
			aux2++;
		}
	}

	cout << endl << endl << "Matriz crescente: " << endl << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < 100; i++) {
		for (int aux = 0; aux < 24; aux++) {
			if (vetor[aux] < vetor[aux + 1]) {
				guardaNumero = vetor[aux + 1];
				vetor[aux + 1] = vetor[aux];
				vetor[aux] = guardaNumero;
			}
		}
	}

	aux2 = 0;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = vetor[aux2];
			aux2++;
		}
	}

	cout << endl << endl << "Matriz decrescente: " << endl << endl;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	srand(time(NULL));

	exercicio01();
	cout << endl << endl << "-------------------------------------------------------------" << endl << endl;
	exercicio02();

	return 0;
}

