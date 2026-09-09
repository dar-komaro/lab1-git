// Лабораторная работа № 1. Вариант N 27.
// Выполнил: Комаровская Д. Е., группа ПИ-52.
//heeeeey
#include <iostream>
#include <windows.h> 
using namespace std;

// ===== Расчётные функции варианта =====

// Плотность
double density(double m, double V) {
	return m / V;
}

//Масса
double massFromDensity(double rho, double V) {
	return rho * V;
}

//Объем 
double volumeFromDensity(double m, double rho) {
	return m / rho;
}


// ===== Главная функция: меню =====

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice;
	double m, rho, V;

	do {
		cout << "\n=== Программа расчетов. Вариант 27\n";
		cout << "1. Плотность\n";
		cout << "2.Масса\n";
		cout << "3.Объем\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Введите массу m и объем V: ";
			cin >> m >> V;
			cout << "Плотность = " << density(m, V) << "\n";
			break;
		case 2:
			cout << "Введите плотность rho и объем V: ";
			cin >> rho >> V;
			cout << "Масса = " << massFromDensity(rho, V) << "\n";
			break;
		case 3:
			cout << "Введите массу m и плотность rho: ";
			cin >> m >> rho;
			cout << "Объем = " << volumeFromDensity(m,rho) << "\n";
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