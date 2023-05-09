//============================================================================
// Name        : Lab7.cpp
// Author      : Yevhenii Loha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double e = 0.0004; // точність
    double x; //  значення x з клави
    double sum = 0.0; // сума
    double term = 0.0; // елемент ряду
    int n = 1; // це і, не плутать
    double factorial = 1.0; // факторіал

    cout << "Введіть значення x: ";
    cin >> x;

    do {
        factorial *= n;
        term = pow(-1, n-1) * ((n-1) * x) / ((factorial + 1) * pow(e, n*x));
        sum += term;
        cout << "Елемент " << n << " ряду: " << term << endl;
        n++;
    } while (std::abs(term) >= e);

    cout << "Сума ряду з точністю " << e << " дорівнює " << sum << endl;

    return 0;
}
