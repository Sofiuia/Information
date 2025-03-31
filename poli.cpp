#include <iostream>
using namespace std;

// Базовий клас
class Animal {
public:
// Віртуальна функція - може бути перевизначена в дочірніх класах
virtual void Speak() {
        // Базова реалізація
        cout << "Animal makes a sound." << endl;}

 // Віртуальний деструктор для правильного звільнення памяті
virtual ~Animal() {}
};

// Дочірній клас
class Dog : public Animal {
public:
 // Перевизначаємо функцію Speak
void Speak() override {
    cout << "Dog barks." << endl;
    }
};

// Інший дочірній клас
class Cat : public Animal {
public:
 // Перевизначаємо функцію Speak
void Speak() override {
    cout << "Cat meows." << endl;
    }
};

int main() {
    // Динамічний поліморфізм дозволяє використовувати базовий тип для збереження дочірніх об'єктів
    Animal* myAnimal1 = new Dog();
    Animal* myAnimal2 = new Cat();
        // Під час виконання викликаються функції дочірніх класів
        myAnimal1->Speak(); // Виведе: Dog barks.
        myAnimal2->Speak(); // Виведе: Cat meows.
    // Звільняємо пам'ять
    delete myAnimal1;
    delete myAnimal2;

    return 0;
}
