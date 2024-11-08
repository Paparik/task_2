#include <iostream>

bool canSpherePass(double r, double p, double q) {
    return (2 * r <= q);
}

int main() {
    setlocale(LC_ALL, "rus");

    double r, p, q;
    std::cin >> r >> p >> q;

    if (p < q) std::swap(p, q); 

    if (canSpherePass(r, p, q)) {
        std::cout << "Шар пройдет через отверстие" << std::endl;
    }
    else {
        std::cout << "Шар не пройдет через отверстие" << std::endl;
    }

    return 0;
}