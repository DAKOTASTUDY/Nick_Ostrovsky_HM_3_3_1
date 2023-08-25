// Nick_Ostrovsky_HM_3_3_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Abaqus
{
private:
    double num1;
    double num2;
public:
    Abaqus() : num1(1), num2(1)
    {}
    Abaqus(double num1, double num2)
    {}
    bool set_num1(double num1) {
        if (this->num1 != 0) { this->num1 = num1; return (true); }
        else { return (false); }
    }
    bool set_num2(double num2) {
        if (this->num2 != 0) { this->num2 = num2; return (true); }
        else { return (false); }
    }
    double get_num1() { return num1; }
    double get_num2() { return num2; }
    double add()
    {
        return (num2 + num1);
    }
    double multiply()
    {
        return (num1 * num2);
    }
    double substruct_1_2()
    {
        return (num1 - num2);
    }
    double substruct_2_1()
    {
        return (num2 - num1);
    }
    double divide_1_2()
    {
        return (num1 / num2);
    }
    double divide_2_1()
    {
        return (num2 / num1);
    }

};
int main()
{
    bool a, b;
    double n = 10, m = 5;
    std::cout << "\n Please, enter num1:\t";
    std::cin >> n;
    std::cout << "\n Please, enter num2:\t";
    std::cin >> m;
    Abaqus calc;
    a = calc.set_num1(n);
    b = calc.set_num2(m);
    // если задаю условие через переменные 
    if ((calc.set_num1(n)) && calc.set_num2(m))
    {
        std::cout << "\n num1 + num2 =" << calc.add() << std::endl;
        std::cout <<"\n num1 * num2 =" << calc.multiply() << std::endl;
        std::cout << "\n num1 - num2 =" << calc.substruct_1_2() << std::endl;
        std::cout << "\n num2 - num1 =" << calc.substruct_2_1() << std::endl;
        std::cout << "\n num2 / num1 =" << calc.divide_2_1() << std::endl;
    }
    else 
    {
        std::cout << "Without Zero values, please!\n";
    }
    std::cout <<"\n\t\t\t\t\t value boolean" << ((calc.set_num1(n)) && (calc.set_num2(m)));
   
    return (0);

}


