#include <iostream>
#include <windows.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	double meters;

	cout << "Введите кол-во метров: ";

	cin >> meters;

	double kilometers = meters / 1000;

	cout << meters << "Метров = " << kilometers << "километров" << endl;

}