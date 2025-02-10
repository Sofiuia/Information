

#include <iostream>

// Специфікатори доступу
struct DateStruct 
{
    int day;    
    int month;  
    int year;   
};

int main()
{
    DateStruct date;
    date.day = 12;
    date.month = 11;
    date.year = 2018;

    return 0;
}

// оголоашення структуру DateStruct, а потім звертаємося до її членів ініціалізації. 
// Це працює, тому що всі члени структури є відкритими за замовчуванням.

class DateClass // члени класу є закритими за замовчуванням
{
    int m_day;    
    int m_month;  
    int m_year;   
};


class DateClass
{
public: // ключове слово 
    int m_day;    // відкрито, доступ має будь-який об'єкт
    int m_month;  
    int m_year;   
};

int main()
{
    DateClass date;
    date.m_day = 12;   // має специфікатор доступу public
    date.m_month = 11; 
    date.m_year = 2018; 

    return 0;
}

// Оскільки тепер члени класу DateClass є відкритими, то до них можна отримати доступ безпосередньо з функції main().

// 3 рівні доступу:
//  public робить члени відкритими
//  private робить члени закритими
// protected відкриває доступ до членів тільки для дружніх і дочірніх класів.

class DateClass 
{
    int m_day;    // закрито за замовчуванням, доступ мають тільки інші члени класу
    int m_month;  
    int m_year;  

public:
    void setDate(int day, int month, int year) // відкрито, доступ має будь-який об'єкт
    {
        m_day = day;
        m_month = month;
        m_year = year;
    }

    void print() // відкрито, доступ має будь-який об'єкт
    {
        std::cout << m_day << "/" << m_month << "/" << m_year;
    }
};

