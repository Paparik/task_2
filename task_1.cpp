#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, c;
    std::cin >> a >> b >> c;
    if ((a >= b + c) || (b >= a + c) || (c >= a + b))
        std::cout << "Не треугольник";
    else if (a == b && b == c)
        std::cout << "Равносторонний";
    else if ((a == b) || (a == c) || (b == c))
        std::cout << "Равнобедренный";
    else
        std::cout << "Обычный треугольник";
}