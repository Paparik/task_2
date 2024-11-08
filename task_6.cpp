#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    std::cout << "Размеры кирпича: ";
    int a, b, c;
    std::cin >> a >> b >> c;

    std::cout << "Разеры отверстия: ";
    int x, y;
    std::cin >> x >> y;

    int max = a;
    if (max < b) { max = b; }
    if (max < c) { max = c; }

    int min = a;
    if (min > b) { min = b; }
    if (min > c) { min = c; }

    int mid = a + b + c - max - min;

    int low = x;
    if (low > y) low = y;

    int high = x + y - low;

    if (min <= low && mid <= high) {
        std::cout << "Пройдет";
    }
    else {
        std::cout << "Не пройдет";
    }

}