#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Вычисляет значение кусочно-заданной функции:
 *        y = sqrt(a * x^2 + 1) при x < 0.5,
 *        y = a * x + 3         при x = 0.5,
 *        y = sqrt(a^2 * x - 1) при x > 0.5
 * @param x аргумент функции
 * @return Значение функции y в точке x
 */
double y(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf", y(x));
    return 0;
}

double getDouble(){
    double value = 0.0;
    if (scanf("%lf", &value) != 1)
    {
        printf("Error");
        exit(1);
    }
    return value;
}

double y(const double x){
    const double a = 2.5;
    if (x < 0.5)
    {
        return sqrt(a * pow(x, 2) + 1);
    }
    if (x > 0.5)
    {
        return sqrt(pow(a, 2) * x - 1);
    }
    return a * x + 3;
}
