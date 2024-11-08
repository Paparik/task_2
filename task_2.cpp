#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, c;
    std::cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= b + a)
        std::cout << "Это не треугольник";
    else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
        std::cout << "Прямоугольный";
    else if (a * a + b * b < c * c)
        std::cout << "Тупоугольный";
    else
        std::cout << "Остроугольный";
}