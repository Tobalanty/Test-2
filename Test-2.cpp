#include <iostream>
#include "myConstants.h"
#include <math.h>

/*1 задание*/
/*Ввести два числа и выполнить введённую операцию*/
/*
double input() {

    std::cout << "Input a double value: ";
    double a;
    std::cin >> a;
    std::cout << "\n";

    return a;
}

int main()
{

    double a, b;
    a = input();
    b = input();

    std::cout << "Enter one of the following: +, -, *, or /: ";
    char c;
    std::cin >> c;
    std::cout << "\n";

    double answer;
    if (c == '+') {
        answer = a + b;
    }else
        if (c == '-') {
            answer = a - b;
        }else
            if (c == '*') {
                answer = a * b;
            }else
                if (c == '/') {
                    answer = a / b;
                }
                else
                    return 1;

            std::cout << a << c << b << " = " << answer << "\t";

    system("pause");
    return 0;
}*/
/*2 задание*/
/*Программа-симулятор падения мячика с башни*/

double towerHeight() {
    
    std::cout << "Input the height of tower: ";
    double a;
    std::cin >> a;
    
    return a;
}
void calculateHeightAfter(double height, int time) {

    double height_after = height - (constants::gravity * pow(time, 2) / 2);
    
    if (height_after <= 0) {
        std::cout << "At " << time << " the ball is on the ground.\n";
    }else
        std::cout << "At " << time << " seconds, the ball is at height: " << height_after << " meters.\n";

}

int main() {
    const double height = towerHeight();

    for (int time = 0; time <= 5; time++) {

        calculateHeightAfter(height, time);

    }

    system("pause");
    return 0;
}