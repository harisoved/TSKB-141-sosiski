#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Находит наименьшее из трёх чисел
 * @param a первое число
 * @param b второе число
 * @param c третье число
 * @return Наименьшее число
 */
double minOfThree(const double a, const double b, const double c);

/**
 * @brief Находит среднее по величине из трёх чисел
 * @param a первое число
 * @param b второе число
 * @param c третье число
 * @return Среднее по величине число
 */
double midOfThree(const double a, const double b, const double c);

/**
 * @brief Находит наибольшее из трёх чисел
 * @param a первое число
 * @param b второе число
 * @param c третье число
 * @return Наибольшее число
 */
double maxOfThree(const double a, const double b, const double c);

/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Проверяет, что ln x имеет смысл
 * @param x - считанное значение
 * @return 1, если x > 0, иначе 0
 */
int isLogDefined(const double x);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    double s = sin(x);
    double c = cos(x);
    if (isLogDefined(x))
        {
            double l = log(x);
            printf("%lf %lf %lf\n", minOfThree(s, c, l), midOfThree(s, c, l), maxOfThree(s, c, l));
        }
    else
        {
            printf("ln x is not defined\n");
            printf("%lf %lf\n", fmin(s, c), fmax(s, c));
        }
    return 0;
}

double minOfThree(const double a, const double b, const double c)
{
    return fmin(a, fmin(b, c));
}

double midOfThree(const double a, const double b, const double c)
{
    return fmax(fmin(a, b), fmin(fmax(a, b), c));
}

double maxOfThree(const double a, const double b, const double c)
{
    return fmax(a, fmax(b, c));
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

int isLogDefined(const double x)
{
    return x > 0;
}
