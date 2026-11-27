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
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */

int main()
{
    printf("Enter a: ");
    double a = getDouble();
    printf("Enter b: ");
    double b = getDouble();
    printf("Enter c: ");
    double c = getDouble();
    printf("Ascending: %lf %lf %lf\n", minOfThree(a, b, c), midOfThree(a, b, c), maxOfThree(a, b, c));
    printf("Descending: %lf %lf %lf\n", maxOfThree(a, b, c), midOfThree(a, b, c), minOfThree(a, b, c));
    return 0;
}

double minOfThree(const double a, const double b, const double c){
    return fmin(a, fmin(b, c));
}

double midOfThree(const double a, const double b, const double c){
    return fmax(fmin(a, b), fmin(fmax(a, b), c));
}

double maxOfThree(const double a, const double b, const double c){
    return fmax(a, fmax(b, c));
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
