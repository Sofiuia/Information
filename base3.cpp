#include <iostream>

int main()
{
    int a = 2;
    char b = 'A';
    float c = 1.25f;
    double d = 2.45;
    /*Головні:
    long double
    double
    float
    unsigned lpng long
    long long
    unsigned int
    int
    Автоматичне преведення 
    */
    std::cout << "Реузьтат ієрархії:" << a + b + c + d << std::endl;
    
   int side1 = 3, side2 = 4;

    double division = (double)side1 / double(side2);//static_cast<double>(side1)
    /*  1.(Тип)Значення
        2.Тип(Значення)
        3. static_cast<Тип>(значення)*/

    std::cout << division << std::endl;


    std::cout << "int:" << sizeof(int) << std::endl;
    std::cout << "char:" << sizeof(char) << std::endl;
    std::cout << "число 7:" << sizeof(7) << std::endl;
    /* sizeof(Тип даних) - приймає тип даних і повертає його розмір. Напркилад, дізнатись скільки памʼяті займає.
    sizeof(Вираз значення) - можемо дізнатись скільки байтів займає.
    sizeof Вираз значення*/


   /* std::cout << "Введите число\n";
    int num;
    std::cin >> num;

    bool expr = !strcmp(2 < num > 10);
    std::cout << expr;*/


    /*І && - бінарний.  умова 1 && умова 2
    хоть десь брехня - не правда, всі 2 мають бути правдою.
    або || - брехня буде , коли обидві брехні. хоч одна правда = правда.
    не ! = !умова
    !true = false;
    Використовується тільки там де можна спростити вираз*/
    return 0;



     
}

