#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");

    float a, b, c, r, s, t;
    std::cin >> a >> b >> c >> r >> s >> t;
    if ((a < r && b < s && c < t) ||
        (a < r && b < t && c < s) ||
        (a < s && b < r && c < t) ||
        (a < s && b < t && c < r) ||
        (a < t && b < s && c < r) ||
        (a < t && b < r && c < s))
        std::cout << "Влезет";
    else
        std::cout << "Не влезет";
}