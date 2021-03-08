/**
 * @file main.cpp
 * @author Egor Sharapkov (egor111orexov@gmail.com)
 * @brief Основной файл программы.
 * @version 0.4
 * @date 2021-03-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/*! \mainpage Простой консольный калькулятор.
 *
 * Читает из выбранного файла два числа, арифметический оператор и производит вычисление.
 * Результат выводится в консоль.
 *
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * @brief Функция Calc, позволяющая рассчитать арифметическую операцию.
 * 
 * @param num1 Первое число
 * @param num2 Второе число
 * @param operation Символ арифметического оператора
 * @return string Возвращает ответ в формате строки
 */
string calc(float num1, float num2, char operation) {
    switch (operation) {
    case '+':
        return to_string(num1 + num2);
        break;
    case '-':
        return to_string(num1 - num2);
        break;
    case '*':
        return to_string(num1 * num2);
        break;
    case '/':
        if (num2 == 0)
            return "error: devision by zero";
        else
            return to_string(num1 / num2);
        break;
    default:
        return "error: unknown operator";
        break;
    }
}
/**
 * @brief Главная функция main.
 * 
 * @return int 
 */
int main() {
    ifstream fin("D:\\test.txt");
    float num1 = 0, num2 = 0;
    char operation;
    fin >> num1 >> operation >> num2;
    cout << calc(num1, num2, operation);
    fin.close();
}