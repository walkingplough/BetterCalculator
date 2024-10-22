#include <iostream>
#include <cmath>
#include <string>

int main() {
    std::string op; 
    double num1;
    double num2;
    double result;

    std::cout << "********** CALCULATOR **********\n";
    std::cout << "What operation would you like to do? (+, -, *, /, power, square root) ";
    std::cin >> op;

    if (op != "sqrt" && op != "pow" && op != "+" && op != "-" && op != "*" && op != "/") {
        std::cout << "Invalid Operation!";
        return 1;
    }

    if (op == "sqrt") {
        std::cout << "What number? ";
        std::cin >> num1;
        result = sqrt(num1);
        std::cout << "Your result is: " << result << '\n';
    }else {
        std::cout << "What is the first number? " << '\n';
        std::cin >> num1;

        std::cout << "What is the second number? " << '\n';
        std::cin >> num2;

        if (op == "pow") {
            result = pow(num1, num2);
            std::cout << "Your result is: " << result << '\n';
        }

        switch (op[0]) { 
        case '+':
            result = num1 + num2;
            std::cout << "Your result is: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Your result is: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Your result is: " << result << '\n';
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "Your result is: " << result << '\n';
            } else {
                std::cout << "Error: Division by zero!" << '\n';
            }
            break;
        }
    }

    return 0;
}
