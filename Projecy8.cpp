#include <locale.h>
#include <windows.h>
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");


	int number;
	cout << "Введите число для поиска делителей: ";
	cin >> number;

	cout << "Делители числа " << number << ": ";
	for (int i = 1; i <= number; ++i) {
		if (number % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;

	return 0;
}

