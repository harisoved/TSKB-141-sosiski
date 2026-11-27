#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Вычисляет расстояние между двумя одинаковыми шарами
 * @param m масса каждого шара в тоннах
 * @param f коэффициент силы тяготения (сила равна f * 10^-5 Н)
 * @return Расстояние между шарами в метрах
 */
double r(const double m, const double f);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что значение - положительное число
 * @param value - считанное значение
 */
void checkPositive(const double value);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */

int main()
{
    printf("Enter m: ");
    double m = getDouble();
    checkPositive(m);
    printf("Enter F: ");
    double f = getDouble();
    checkPositive(f);
    printf("Distance is %lf m\n", r(m, f));
    return 0;
}

double r(const double m, const double f)
{
    const double G = 6.674e-11;
    double mass = m * 1000;
    double force = f * 1e-5;
    return sqrt(G * pow(mass,2) / force);
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}

void checkPositive(const double value)
{
    if (value <= 0)
        {
            printf("Error");
            exit(1);
        }
}
