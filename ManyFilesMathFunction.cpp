#include <iostream>
#include "mathfunc/add.h"
#include "mathfunc/sub.h"
#include "mathfunc/mult.h"
#include "mathfunc/div.h"
#include "mathfunc/pow.h"

int main() {
	int a, b, c;

	setlocale(LC_ALL, "Russian");

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> c;
	switch (c) {
		case 1:
			std::cout << a << " + " << b << " = " << add(a, b);
			break;
		case 2:
			std::cout << a << " - " << b << " = " << sub(a, b);
			break;
		case 3:
			std::cout << a << " * " << b << " = " << mult(a, b);
			break;
		case 4:
			std::cout << a << " / " << b << " = " << divide(a, b);
			break;
		case 5:
			std::cout << a << " ^ " << b << " = " << pow(a, b);
			break;
		default:
			std::cout << "Неверный номер операции" << std::endl;
	}
	return 0;
}