// Лабораторная работа № 1. Вариант N 27.
// Выполнил: Комаровская Д. Е., группа ПИ-52.
//heeeeey
#include <iostream>
#include <windows.h>
void setConsoleUTF8() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
}
#include <stdexcept>
using namespace std;

// ===== Расчётные функции варианта =====

// Плотность
double density(double m, double V) {
	if (V <= 0)throw invalid_argument("Объем не может быть отрицательным или равным нулю!");
	if (m < 0)throw invalid_argument("Масса не может быть отрицательной или равна нулю!");
	return m / V;
}

//Масса
double massFromDensity(double rho, double V) {
	if (V < 0)throw invalid_argument("Объем не может быть отрицательным или равным нулю!");
	if (rho <= 0)throw invalid_argument("Плотность не может быть отрицательной или равной нулю!");
	return rho * V;
}

//Объем 
double volumeFromDensity(double m, double rho) {
	if (rho <= 0)throw invalid_argument("Плотность не может быть отрицательной или равной нулю!");
	if (m < 0)throw invalid_argument("Масса не может быть отрицательной или равна нулю!");
	return m / rho;
}


// ===== Главная функция: меню =====

int main() {
	setConsoleUTF8();
	int choice;
	double m, rho, V;

	do {
		cout << "\n=== Программа расчетов. Вариант 27\n";
		cout << "1. Плотность\n";
		cout << "2. Масса\n";
		cout << "3. Объем\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Введите массу m и объем V: ";
			cin >> m >> V;
			try {
				double res = density(m, V);
				cout << "Плотность = " << res << "\n"; }
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 2:
			cout << "Введите плотность rho и объем V: ";
			cin >> rho >> V;
			try {
				double res = massFromDensity(rho, V);
				cout << "Масса = " << res << "\n"; 
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 3:
			cout << "Введите массу m и плотность rho: ";
			cin >> m >> rho;
			try {
				double res = volumeFromDensity(m, rho);
				cout << "Объем = " << res << "\n";
			}
			catch (const invalid_argument& e) {
				cerr << e.what() << "\n";
			}
			break;
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);

	return 0;

}