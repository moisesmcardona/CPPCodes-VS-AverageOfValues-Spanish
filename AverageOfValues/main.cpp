#include<iostream>
#include<iomanip>
using namespace::std;

int main(){
	double num1, num2, num3, num4, num5, sum, total;

	cout << "Entre el valor del primer digito: ";
	cin >> num1;
	while (num1 < 0) {

		cout << "El valor no puede ser negativo: ";
		cin >> num1;
	}
	cout << "Entre el valor del segundo digito: ";
	cin >> num2;
	while (num2 < 0){
		cout << "El valor no puede ser negativo: ";
		cin >> num2;
	}
	cout << "Entre el valor del tercer digito: ";
	cin >> num3;
	while (num3 < 0){
		cout << "El valor no puede ser negativo: ";
		cin >> num3;
	}
	cout << "Entre el valor del cuarto digito: ";
	cin >> num4;
	while (num4 < 0){
		cout << "El valor no puede ser negativo: ";
		cin >> num4;
	}
	cout << "Entre el valor del quinto digito: ";
	cin >> num5;
	while (num5 < 0){
		cout << "El valor no puede ser negativo: ";
		cin >> num5;
	}
	sum = num1 + num2 + num3 + num4 + num5;
	cout << "La suma total de sus valores es: " << fixed << showpoint << setprecision(2) << sum << endl;
	total = sum / 5;
	cout << "El promedio de los valores es: " << fixed << showpoint << setprecision(2) << total << endl;
    system("pause");
	return 0;

}
/*
Entre el valor del primer digito: 4
Entre el valor del segundo digito: 5
Entre el valor del tercer digito: 6
Entre el valor del cuarto digito: 7
Entre el valor del quinto digito: 8
La suma total de sus valores es: 30.00
El promedio de los valores es: 6.00
Press any key to continue . . .
*/