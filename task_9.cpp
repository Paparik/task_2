#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int k, l, m;
    std::cout << "Введите k, l, m: ";
    std::cin >> k >> l >> m;

    if (k % l == 0 && k > 0)
        std::cout << "";
    else if (k / m && k > 0)
        std::cout << "k кратно m\n";
    else if (l / k && l > 0)
        std::cout << "l кратно k\n";
    else if (l / m && l > 0)
        std::cout << "l кратно m\n";
    else if (m / k && m > 0)
        std::cout << "m кратно k\n";
    else (m / l && m > 0);
    std::cout << "m кратно l\n";
}