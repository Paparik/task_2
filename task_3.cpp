#include <iostream>
#include <numbers>

int main()
{
    setlocale(LC_ALL, "rus");

    double a1, b1, c1, a2, b2, c2;
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    double a = sqrt(pow(a2 - a1, 2) + pow(b1 - b2, 2));
    double b = sqrt(pow(b2 - b1, 2) + pow(c1 - c2, 2));
    double c = sqrt(pow(c2 - c1, 2) + pow(a1 - a2, 2));

    double alpha = 0;
    double betta = 0;
    double gamma = 0;

    alpha = (((acos((b * b + c * c - a * a) / (2 * b * c)) * 180)) / 3.1415926);
    betta = (((acos((a * a + c * c - b * b) / (2 * a * c)) * 180)) / 3.1415926);
    gamma = (((acos((a * a + b * b - c * c) / (2 * a * b)) * 180)) / 3.1415926);
    if ((a < b + c) & (b < c + a) & (c < b + a))
    {
        if ((alpha == 90) || (betta == 90) || (gamma == 90)) std::cout << " Треугольник прямоугольный";
        else
            if ((alpha > 90) || (betta > 90) || (gamma > 90)) std::cout << "Треугольник тупоугольный";
            else
                std::cout << "Треугольник остроугольный";
    }
    else
        std::cout << "Теугольник не существует";
}