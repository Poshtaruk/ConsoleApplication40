// Створити лінійний двозв’язний список з цілих чисел.Вилучити зі списку перший елемент, більший числа 4. Вставити в список число 10 перед кожним числом, рівним 15.
#include <iostream>
#include <list>  
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Створення списку цілих чисел
    list<int> numberList = { 1, 2, 4, 6, 15, 7, 15, 3, 10 };

    cout << "Початковий список: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    // Вилучення першого елемента, який більший за 4
    for (auto it = numberList.begin(); it != numberList.end(); ++it) {
        if (*it > 4) {
            numberList.erase(it);
            break;  // Вилучаємо тільки перший знайдений елемент і зупиняємо цикл
        }
    }

    cout << "Список після вилучення першого елемента, більшого за 4: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    // Вставка числа 10 перед кожним числом, рівним 15
    for (auto it = numberList.begin(); it != numberList.end(); ++it) {
        if (*it == 15) {
            it = numberList.insert(it, 10);  // Вставляємо 10 перед 15
            ++it;  // Переміщаємо ітератор на наступний елемент після вставки
        }
    }

    cout << "Список після вставки числа 10 перед кожним числом, рівним 15: ";
    for (int number : numberList) {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}