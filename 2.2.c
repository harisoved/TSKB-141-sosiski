#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

double getDouble();

double y(const double x);

int main()
{
    printf("Enter x: ");
    double x = getDouble();
    printf("y = %lf", y(x));
    return 0;
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

double y(const double x)
{
    const double a = 2.5;
    if (x < 0.5)
        {
            return sqrt(a * x * x + 1);
        }
    if (x > 0.5)
        {
            return sqrt(a * a * x - 1);
        }
    return a * x + 3;
}
