#include <iostream>

int main ()
{
    std::cout << "Enter a number from 0 to 10:"  << std::endl;;
    int number;
    std::cin >> number;


    if (number >= 0 && number <= 10)
    {
     std::cout << "Good number " << std::endl;   
    }
    else if ( number >=11 && number <= 100)
    {
       std::cout << "So So number" << std::endl;  ; 
    }
    else if ( number >=101 && number <= 1000)
    {
       std::cout << "Bad number" << std::endl;  
    }

else 
{
     std::cout << "Bad bad" << std::endl;  ; 
}
/*Оператор if

До цього писались тільки послідовні програми

Добавляємо оператор розгалуженння
Синтаксис
if (умова/вираз)
Перелік дій
}
Будь яка умова завжди буде виразом але не навпаки.
else - інакше ( у всіх інших випадках)
*/
    std::cout << "Enter x:"  << std::endl;;
    int x;
    std::cin >> x;

    std::cout << "Enter y:"  << std::endl;;
    int y;
    std::cin >> y;

    std::cout << ((x > 0 &&  y > 0)
     ? "1"  : (x < 0 &&  y > 0)
      ? "2" : (x < 0 &&  y < 0)
       ? "3" : (x > 0 &&  y < 0)
        ? "4" :"Between") << std::endl;




    int numb = 3;

    switch (numb)
        {
        case 1 :
            std::cout << "1\n";
            std::cout << number << std::endl;
            break;

        case 2 :
            std::cout << "2\n";
            std::cout << number * 2  << std::endl;
            break;


        case 3 :
            std::cout << "3\n";
            std::cout << number * 2 << std::endl;
            break;


             default :
            std::cout << "I don't\n";
            break;

            /*int numbe = 1;
while (numbe < 20) 
{
std::cout << << std::endl;
numbe++
}


do 
{
std::cout <<  Ent numberr <<  std::endl;
std::cin >> numberr;


if ( number >=0)
std:: cout < "square = " «< number * number «< std: :endl;
} while (numberr >= 0)

Використовуємо коли в умові є змінна значення якої встановлюється в самому циклі.
НЕмавє повтоорення коду, читається простіше




цикл for - використовууємо, коли знаємо конкретну кількість повторень

Такий самій як вайл але має оператор ініціаліхації та оператор зміни.

Синтаксис
(оператор-ініціалізації; умова ;оператор-зміни)
{
Перелік дій
}

for (int strs = 10; stars < 10; stars ++)
	std:: cout << *


Вираз -  умова. без нього завжди правда, вічний цикл*/


        }
    return 0;
}