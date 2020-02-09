#include <iostream>

double input_digit()		// ������� ��� ����� �����
{
	double num;
	std::cin >> num;

	return num;
}

char input_operation()		// ������� ������ �������� (+,-,*,/)
{
	char operation;
	std::cin >> operation;

	return operation;
}

// ������ � ������� ����������  ������� ���������
double calc_result(double num1, char operation, double num2)
{
	switch (operation)	// ����� ��������
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
	std::cout << "��������� �����������:\n";	// ����� "�����" ���������

	// ����� ���������� ������� � ���� ������� ��� ���������� ���� � �������� ��������
	std::cout << calc_result(input_digit(), input_operation(), input_digit()) << std::endl;
}