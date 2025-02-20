// Приклад класу 
#include <iostream>
using namespace std;

// Оголошення класу Car
class Car {
private:
    string brand;
    int year;

public:
    // Конструктор класу
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    // Метод для виводу інформації про rcar
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
 }

    // Модифікатори доступу гетер і сеттер
 string getBrand() {
        return brand;
    }

    void setBrand(string b) {
        brand = b;
 }

    int getYear() {
        return year;
    }

    void setYear(int y) {
        year = y;
    }
};

int main() {
    // Створення об'єкта класу Car
    Car myCar("Toyota", 2020);

    // Виклик методу об'єкта
    myCar.displayInfo();

    // Зміна полів через сеттери
    myCar.setBrand("Honda");
    myCar.setYear(2022);

    // Вивід змінених значень черезгеттери
    cout << "Updated Car: " << myCar.getBrand() << ", " << myCar.getYear() << endl;

    return 0;
}
