/*
Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en la salida estándar su tabla de multiplicar.
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {

	int numero = 0,num =0;
	cout << "Decifre la tabla de multiplicar: " << endl;
	cout << "Digite un nuemro del 1 al 10: "; cin >> numero;


	cout << "\tTabla de Multiplicar de: " << numero << endl;
	for (int i = 1; i <= 10;i++) {
		
		num = numero * i;

		cout << "\t" << numero << " X " << i << " = " << num << endl;
	}


	_getch();
	system("pause");
	return 0;
}