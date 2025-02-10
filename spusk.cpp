/*Список ініціалізаціі - це процесс надання початкових значень змінним в класі при створенні об'єкта.

Список ініціалізаціі дозволяє задавати значення змінним відразу:*/

class Values
{
private:
    int m_value1;
    double m_value2;
    char m_value3;

public:
    Values() : m_value1(3), m_value2(4.5), m_value3('d')
    {
    }

    void print()
    {
        std::cout << "Values(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
};
/*
Константи і посилання ініціалізуються одразу.
Можна передавати значення через параметри конструктора:*/
class Values
{
private:
    int m_value1;
    double m_value2;
    char m_value3;

public:
    Values(int value1, double value2, char value3='d')
        : m_value1(value1), m_value2(value2), m_value3(value3)
    {
    }

    void print()
    {
        std::cout << "Values(" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
    }
};



int main()
{
    Values value(3, 4.5);
    value.print();
    return 0;
}
//Uniform-ініціалізація:
class Values
{
private:
    const int m_value;

public:
    Values() : m_value { 7 }
    {
    }
};
