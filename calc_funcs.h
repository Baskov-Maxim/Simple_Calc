/* Header Guards ���������� �� ��������� ����������
 * ����������� � Main.cpp*/

#ifndef CALC_FUNCS_H		 
#define CALC_FUNCS_H		 

double input_digit();			// ������� ��� ���� �����
char input_operation();			// ������� ������ �������� (+,-,*,/)

// ������ � ������� ����������  ������� ���������
double calc_result(double num1, char operation, double num2);

void do_calc();					// �������� ������

#endif