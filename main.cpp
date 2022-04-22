#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {

	int celsius;
	cout << "Entre com a temperatura em celsius: ";
	cin >> celsius;

	int factor;
	factor = 212 - 32;

	int fahrenheit;
	fahrenheit = factor * celsius / 100 + 32;

	cout << "O valor em Fahrenheit e: ";
	cout << fahrenheit << endl;

	cout << "Pressione enter para continuar..." << endl;
	cin.ignore(10, '\n');
	cin.get();
	return 0;

}