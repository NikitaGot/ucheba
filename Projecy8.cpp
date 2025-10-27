#include <locale.h>
#include <windows.h>
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");



	cout << "Таблица умножения:" << endl;

	for (int i = 1; i <= 9; ++i) {
		for (int j = 1; j <= 9; ++j) {
			cout << setw(4) << i * j; // setw(4) устанавливает ширину поля вывода в 4 символа
		}
		cout << endl;
	}

	return 0;
}

