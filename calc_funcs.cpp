#include <iostream>

double input_digit()		// Функция для ввода числа
{
	double num;
	std::cin >> num;

	return num;
}

char input_operation()		// Функция выбора операции (+,-,*,/)
{
	char operation;
	std::cin >> operation;

	return operation;
}

// Фунция в которой происходят  расчёты уравнения
double calc_result(double num1, char operation, double num2)
{
	switch (operation)	// Выбор операции
	{
		case 43:
			return (num2 + num1);
		case 45:
			return (num2 - num1);
		case 42:
			return (num2 * num1);
		case 47:
			return (num2 / num1);
	}
}

void do_calc()
{
	std::cout << "Программа калькулятор:\n";	// Вывод "имени" программы

	// Вывод результата написан в одну строчку для сокращения кода и экономии ресурсов
	std::cout << calc_result(input_digit(), input_operation(), input_digit()) << std::endl;
}