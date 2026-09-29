#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет Среднее арифметическое кубов двух чисел
 * @param number1 первое число
 * @param number2 второе число
 * @return Рассчитанное значение
 */
double avg_arifcube( const double number1, const double number2);
/**
 * @brief Вычисляет среднее геометрическое модулей двух чисел
 * @param number1 первое число
 * @param number2 второе число
 * @return Рассчитанное значение
 */
double avg_geomabs(const double number1, const double number2);

/**
 * @brief Считывает вещественное число
 * @return Введенное значение
 */

double getNumbers();

/**
 * @brief Точка входа в программу
 * @return 0 Если программа завершенна 
 */


int main() 
{
    double number1 = getNumbers();
    double number2 = getNumbers();
    
    printf("Среднее арифметическое кубов чисел равно %lf\n", avg_arifcube(number1, number2));
    printf("Среднее геометрическое модулей равно %lf\n", avg_geomabs(number1, number2));
    
    return 0;
}


double avg_arifcube(const double number1, const double number2)
{
    return (pow(number1, 3) + pow(number2, 3)) / 2.0;
}

double avg_geomabs(const double number1, const double number2)
{
    return sqrt(fabs(number1) * fabs(number2));
}

double getNumbers()
{
    double number1 = 0.0;
    scanf("%lf",&number1);
    return number1;
}
