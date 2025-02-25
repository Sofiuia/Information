// Перевантаження комбінованих операторів у C++
#include <iostream>
using namespace std;

class DInt {
private:
    int value;

public:
    // Конструктор
    DInt(int v = 0) : value(v) {}

    // Отримати значення
    int GetValue() const { return value; }

    // Арифметичні комбіновані оператори (методи)
    DInt& operator+=(const DInt& other) { *this = *this + other; return *this; }
    DInt& operator-=(const DInt& other) { *this = *this - other; return *this; }
    DInt& operator*=(const DInt& other) { *this = *this * other; return *this; }
    DInt& operator/=(const DInt& other) { *this = *this / other; return *this; }
    DInt& operator%=(const DInt& other) { *this = *this % other; return *this; }

    // Побітові комбіновані оператори (методи)
    DInt& operator&=(const DInt& other) { *this = *this & other; return *this; }
    DInt& operator|=(const DInt& other) { *this = *this | other; return *this; }
    DInt& operator^=(const DInt& other) { *this = *this ^ other; return *this; }
    DInt& operator<<=(int shift) { *this = *this << shift; return *this; }
    DInt& operator>>=(int shift) { *this = *this >> shift; return *this; }

    // Дружні функції для перевантаження комбінованих операторів
    friend DInt operator+=(DInt& lhs, const DInt& rhs) { lhs = lhs + rhs; return lhs; }
    friend DInt operator-=(DInt& lhs, const DInt& rhs) { lhs = lhs - rhs; return lhs; }
    friend DInt operator*=(DInt& lhs, const DInt& rhs) { lhs = lhs * rhs; return lhs; }
    friend DInt operator/=(DInt& lhs, const DInt& rhs) { lhs = lhs / rhs; return lhs; }
    friend DInt operator%=(DInt& lhs, const DInt& rhs) { lhs = lhs % rhs; return lhs; }
    friend DInt operator&=(DInt& lhs, const DInt& rhs) { lhs = lhs & rhs; return lhs; }
    friend DInt operator|=(DInt& lhs, const DInt& rhs) { lhs = lhs | rhs; return lhs; }
    friend DInt operator^=(DInt& lhs, const DInt& rhs) { lhs = lhs ^ rhs; return lhs; }
    friend DInt operator<<=(DInt& lhs, int shift) { lhs = lhs << shift; return lhs; }
    friend DInt operator>>=(DInt& lhs, int shift) { lhs = lhs >> shift; return lhs; }
};

int main() {
    DInt num1(10), num2(30);

    cout << "Оператор +=:\n";
    cout << "num1 = " << num1.GetValue() << endl;
    cout << "num2 = " << num2.GetValue() << endl;
    num1 += num2;
    cout << "(num1 += num2) = " << num1.GetValue() << "\n\n";

    return 0;
}
