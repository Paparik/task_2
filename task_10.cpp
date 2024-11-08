#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int x;
    std::cout << "Введите x: ";
    std::cin >> x;

    int sum = x % 10;
    while (x /= 10)
        sum += x % 10;
    std::cout << (sum % 3 ? "Не делится" : "Делится");
    return 0;
}