// hanoi_tower.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include "Windows.h"
using namespace std;

class Hanoi // Определить класс
{
public:
    ~Hanoi() {} // Деструктор
    void  hani(int n, char a, char b, char c)
    {
        if (n == 1)
        {
            move(a, c); // Ханойская башня в основном использует рекурсивные процедуры, но правила необходимо найти заранее. Это тот случай, когда n = 1
        }
        else 
        {
            hani(n - 1, a, c, b);
            move(a, c);
            hani(n - 1, b, a, c); 
        }

    }
private:
    void move(char a, char b) 
    {
        cout << "Из " << a << "->" << b << endl;
    }

};

int main()
{
    setlocale(LC_ALL,"rus");
    Hanoi h; // Создаем конкретный объект
    cout << "Порядок передачи Ханойской башни:" << endl;
    h.hani(3, 'a', 'b', 'c'); // переносим 2 ^ n-1, а здесь n = 3, итого 2 ^ 3 -1 раз

}
