// Лабораторная работа № 1. Вариант N 27.
// Выполнил: Комаровская Д. Е., группа ПИ-52.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====

// Плотность
double density(double m, double V) {
	return m / V;
}


// ===== Главная функция: меню =====

int main() {
	int choice;
	double m, V;

	do {
		cout << "\n=== Вариант N27: расчёты для плотности===\n";
		cout << "1. Плотность\n";
		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
		case 1:
			cout << "Введите массу m и объем V: ";
			cin >> m >> V;
			cout << "Плотность = " << density(m, V) << "\n";
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