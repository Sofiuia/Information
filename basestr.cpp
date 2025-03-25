#include <iostream>
#include <cstring>

// Клас шаблону для роботи зі строками
template <class T>
class BasicString
{
public:
 // Конструктор за замовчуванням - створюємо пустий рядок
BasicString() : data(new T[1]), len(0), cap(1)
    {
data[0] = '\0'; // Ініціалізуємо нульовим символом
    }

 // Конструктор із вхідного рядка
BasicString(const T* str)
 {
        len = std::strlen(str); // Довжина вхідного рядка
        cap = len + 1;          // Виділяємо місце з урахуванням '\0'
        data = new T[cap];
        std::memcpy(data, str, len + 1); // Копіюємо вхідний рядок
}

// Деструктор: звільняємо пам'ять
~BasicString()
    {
    delete[] data; // Видалення виділеного масиву
}

 // Метод перевірки на пустий рядок
bool empty() const
{
return len == 0; // Повертаємо true, якщо довжина дорівнює 0
}

 // Метод для отримання довжини рядка
size_t size() const
{
        return len; // Повертаємо поточну довжину
}

// Додати текст до рядка
void append(const T* str)
{
    size_t addLen = std::strlen(str);          // Довжина доданого тексту
        resize(len + addLen + 1);                 // Змінюємо розмір буфера
        std::memcpy(data + len, str, addLen + 1); // Копіюємо текст у кінець
        len += addLen;                            // Оновлюємо довжину
}

 // Знайти підрядок у рядку
int find(const T* str) const
 {
        size_t subLen = std::strlen(str); // Довжина підрядка
        if (subLen > len) return -1;     // Якщо підрядок довший, нічого не знайдено

        for (size_t i = 0; i <= len - subLen; ++i)
{
            if (std::memcmp(data + i, str, subLen) == 0)
            {
                return i; // Повертаємо індекс, коли знайшли
            }
        }
        return -1; // Якщо не знайдено
    }

// Очистти рядок
void clear()
 {
        delete[] data;             // Звільняємо пам'ять
        data = new T[1];           // Створюємо новий порожній рядок
        data[0] = '\0';            // Ініціалізуємо нульовим символом
        len = 0;                   // Скидаємо довжину
        cap = 1;                   // Скидаємо об'єм
}

private:
    T* data;       // Вказівник на масив символів
    size_t len;    // Поточна довжина рядка
    size_t cap;    // Обсяг виділеної пам'яті

// Змінити розмір буфера
void resize(size_t newCapacity)
{
     if (newCapacity > cap) // Якщо потрібно більше пам'яті
{
            T* newData = new T[newCapacity];       // Виділяємо новий буфер
            std::memcpy(newData, data, len + 1);   // Копіюємо старі дані
            delete[] data;                         // Звільняємо стару пам'ять
            data = newData;                        // Оновлюємо вказівник
            cap = newCapacity;                     // Оновлюємо об'єм
}
    }
};

// Основна функція для дпоказуку
int main()
{
    BasicString<char> str("вапролд");               // Створюємо рядок
    std::cout << "Рядок: " << str.size() << " символів" << std::endl;
    str.append("вапролджє!");                        // Додаємо текст
    std::cout << "Додали: " << str.find("світе") << " (знайдено позицію)" << std::endl;
    str.clear();                                   // Очистка
    std::cout << "Рядок порожній: " << str.empty() << std::endl;
    return 0;
}
