#include <iostream>
#include <numbers>

int main()
{
    setlocale(LC_ALL, "rus");

    double a, b, c, x, y, z;
    std::cin >> a >> b >> c >> x >> y >> z;

    x = (a + c - b) / 2;
    y = (a + b - c) / 2;
    z = (b + c - a) / 2;
    if (x > 0 && y > 0 && z > 0) std::cout << "Эти отрезки могут являться сторонами треугольника";
    else std::cout << "Эти отрезки не могут являться сторонами треугольника";
}