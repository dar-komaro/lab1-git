// Лабораторная работа № 1. Вариант N 27.
// Выполнил: Комаровская Д. Е., группа ПИ-52.
#include <iostream>
#include <clocale>
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


// ===== Главная функция: меню =====

int main() {
	setlocale(LC_ALL, "Russ");
	int choice;
	double m, rho, V;

	do {
		cout << "\n=== Вариант N27: расчёты для плотности===\n";
		cout << "1. Плотность\n";
		cout << "2.Масса\n";
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
		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);

	return 0;

}