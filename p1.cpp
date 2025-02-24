// Перевантаження операторів у C++
#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real, imag;

public:
    // Конструктор
    ComplexNumber(double r = 0, double i = 0) : real(r), imag(i) {}

    // Перевантаження оператора +
    ComplexNumber operator+(const ComplexNumber &other) {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    // Перевантаження оператора -
    ComplexNumber operator-(const ComplexNumber &other) {
        return ComplexNumber(real - other.real, imag - other.imag);
    }

    // Перевантаження оператора *
    ComplexNumber operator*(const ComplexNumber &other) {
        return ComplexNumber(real * other.real - imag * other.imag,
                             real * other.imag + imag * other.real);
    }

    // Вивід комплексного числа
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    ComplexNumber a(3, 2), b(1, 7);

    // Використання перевантажених операторів
    ComplexNumber c = a + b;
    ComplexNumber d = a - b;
    ComplexNumber result = c * d;

    // Вивід результатів
    cout << "Addition: "; c.display();
    cout << "Subtraction: "; d.display();
    cout << "Multiplication: "; result.display();

    return 0;
}



// Перевантаження арифметичних операторів у C++
//#include <iostream>
//using namespace std;

class Number {
private:
    int value;

public:
    // Конструктор
    Number(int v = 0) : value(v) {}

    // Перевантаження унарних операторів
    Number operator+() const { return Number(value); }
    Number operator-() const { return Number(-value); }

    // Інкремент і декремент
    Number& operator++() { ++value; return *this; }
    Number operator++(int) { Number temp = *this; ++value; return temp; }
    Number& operator--() { --value; return *this; }
    Number operator--(int) { Number temp = *this; --value; return temp; }

    // Оператор присвоєння
    Number& operator=(const Number& other) { value = other.value; return *this; }
    Number& operator=(int number) { value = number; return *this; }

    // Бінарні оператори
    Number operator+(const Number& other) const { return Number(value + other.value); }
    Number operator-(const Number& other) const { return Number(value - other.value); }
    Number operator*(const Number& other) const { return Number(value * other.value); }
    Number operator/(const Number& other) const { return Number(value / other.value); }
    Number operator%(const Number& other) const { return Number(value % other.value); }

    // Вивід значення
    void display() const { cout << value << endl; }

    // Дружні функції для перевантаження
    friend Number operator+(const Number& number) { return Number(+number.value); }
    friend Number operator-(const Number& number) { return Number(-number.value); }
    friend Number& operator--(Number& number) { --number.value; return number; }
    friend Number operator--(Number& number, int) { Number temp = number; --number.value; return temp; }
    friend Number& operator++(Number& number) { ++number.value; return number; }
    friend Number operator++(Number& number, int) { Number temp = number; ++number.value; return temp; }
};

int main() {
    Number a(10), b(3);
    Number c = a + b;
    Number d = a - b;
    Number e = a * b;
    Number f = a / b;
    Number g = a % b;

    cout << "Addition: "; c.display();
    cout << "Subtraction: "; d.display();
    cout << "Multiplication: "; e.display();
    cout << "Division: "; f.display();
    cout << "Modulus: "; g.display();

    return 0;
}




// Перевантаження арифметичних операторів у C++
//#include <iostream>
//using namespace std;

class Number {
private:
    int value;

public:
    // Конструктор
    Number(int v = 0) : value(v) {}

    // Перевантаження унарних операторів
    Number operator+() const { return Number(value); }
    Number operator-() const { return Number(-value); }

    // Інкремент і декремент
    Number& operator++() { ++value; return *this; }
    Number operator++(int) { Number temp = *this; ++value; return temp; }
    Number& operator--() { --value; return *this; }
    Number operator--(int) { Number temp = *this; --value; return temp; }

    // Оператор присвоєння
    Number& operator=(const Number& other) { value = other.value; return *this; }
    Number& operator=(int number) { value = number; return *this; }

    // Бінарні оператори
    Number operator+(const Number& other) const { return Number(value + other.value); }
    Number operator-(const Number& other) const { return Number(value - other.value); }
    Number operator*(const Number& other) const { return Number(value * other.value); }
    Number operator/(const Number& other) const { return Number(value / other.value); }
    Number operator%(const Number& other) const { return Number(value % other.value); }

    // Вивід значення
    void display() const { cout << value << endl; }

    // Дружні функції для перевантаження
    friend Number operator+(const Number& number) { return Number(+number.value); }
    friend Number operator-(const Number& number) { return Number(-number.value); }
    friend Number& operator--(Number& number) { --number.value; return number; }
    friend Number operator--(Number& number, int) { Number temp = number; --number.value; return temp; }
    friend Number& operator++(Number& number) { ++number.value; return number; }
    friend Number operator++(Number& number, int) { Number temp = number; ++number.value; return temp; }
};

int main() {
    Number a(10), b(3);
    Number c = a + b;
    Number d = a - b;
    Number e = a * b;
    Number f = a / b;
    Number g = a % b;

    cout << "Addition: "; c.display();
    cout << "Subtraction: "; d.display();
    cout << "Multiplication: "; e.display();
    cout << "Division: "; f.display();
    cout << "Modulus: "; g.display();

    return 0;
}
