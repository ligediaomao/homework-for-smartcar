#include <iostream>
#include <cmath> 
using namespace std;
class Vector {
private:
    double x, y;

public:
    Vector(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}
    Vector add(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }
    void print() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }
    void dir() const {
        double m = std::sqrt(std::pow(x, 2) + std::pow(y, 2));
        std::cout << "ģ��: " << m << std::endl;
    }
};

//����
int main() {
    Vector v1(2, 4);
    Vector v2(3, 2);
    std::cout << "����1: ";
    v1.print();
    std::cout << "����2: ";
    v2.print();
    Vector s = v1.add(v2);
    std::cout << "����֮��: ";
    s.print();
    s.dir();
    system("pause");
    return 0;
}
