#include <iostream>
#include <cmath>
#include <iomanip>

const double EPSILON = 1e-6;

struct Point {
    double x, y;
};

double distance(const Point& p1, const Point& p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}

double dotProduct(const Point& A, const Point& B, const Point& C, const Point& D) {
    double ABx = B.x - A.x;
    double ABy = B.y - A.y;
    double CDx = D.x - C.x;
    double CDy = D.y - C.y;
    return ABx * CDx + ABy * CDy;
}

bool isParallel(const Point& A, const Point& B, const Point& C, const Point& D) {
    return fabs(dotProduct(A, B, C, D)) < EPSILON;
}

bool isPerpendicular(const Point& A, const Point& B, const Point& C, const Point& D) {
    return fabs(dotProduct(A, B, C, D)) < EPSILON;
}

std::string quadrilateral_type(const Point& A, const Point& B, const Point& C, const Point& D) {
    double AB = distance(A, B);
    double BC = distance(B, C);
    double CD = distance(C, D);
    double DA = distance(D, A);

    bool AB_CD_parallel = isParallel(A, B, C, D);
    bool BC_DA_parallel = isParallel(B, C, D, A);

    bool AB_BC_perpendicular = isPerpendicular(A, B, B, C);
    bool BC_CD_perpendicular = isPerpendicular(B, C, C, D);

    if (AB_CD_parallel && BC_DA_parallel && AB_BC_perpendicular && BC_CD_perpendicular) {
        return "Прямоугольник";
    }

    if (AB_CD_parallel && BC_DA_parallel) {
        return "Параллелограмм";
    }

    if (AB_CD_parallel || BC_DA_parallel) {
        return "Трапеция";
    }

    return "Произвольный четырехугольник";
}

int main() {
    setlocale(LC_ALL, "rus");

    Point A, B, C, D;
    std::cout << "Введите координаты точек A, B, C и D:\n";
    std::cout << "A (x y): ";
    std::cin >> A.x >> A.y;
    std::cout << "B (x y): ";
    std::cin >> B.x >> B.y;
    std::cout << "C (x y): ";
    std::cin >> C.x >> C.y;
    std::cout << "D (x y): ";
    std::cin >> D.x >> D.y;

    std::string type = quadrilateral_type(A, B, C, D);
    std::cout << "Тип четырехугольника: " << type << std::endl;

    return 0;
}