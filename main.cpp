#include <iostream>
#include "degree.h"
#include "matrix.h"

int main() {
    int a, b;
    std::cout << "\n~~~Power~~~\n\n";
    std::cout << "Enter a digit and a degree:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Result: " << pow(a, b) << std::endl;

    std::cout << "\n~~~Matrix~~~\n\n";
    std::cout << "Enter N and M: " << std::endl;
    Matrix<double, 5, 5> M;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            M.Set(i, j, rand()%100);
        }
    }
    M.Print("M");
    try
    {
        std::cout << "Search element in M. Indexes starts from 0." << std::endl;
        int K, R;
        std::cout << "Enter n(string):";
        std::cin >> K;
        std::cout << "Enter m(column):";
        std::cin >> R;
        std::cout << std::endl;
        M.Check(K, R);
    }
    catch (MyException &ex)
    {
        std::cout << ex.getError() << std::endl;
    }
}