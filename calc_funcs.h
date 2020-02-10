/* Header Guards подключаем во избежание повторного
 * подключения в Main.cpp*/

#ifndef CALC_FUNCS_H		 
#define CALC_FUNCS_H		 

double input_digit();			// Функция для ввод числа
char input_operation();			// Функция выбора операции (+,-,*,/)

// Фунция в которой происходят  расчёты уравнения
double calc_result(double num1, char operation, double num2);

void do_calc();				// Основная фунция

#endif
