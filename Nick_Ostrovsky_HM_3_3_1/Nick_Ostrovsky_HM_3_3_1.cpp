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
   {};
    Abaqus(double num1, double num2)
    {};
    bool set_num1(double nn) {
        if (nn != 0) { num1 = nn; return (true); }
        else { return (false); }
    }
    bool set_num2(double mm) {
        if (mm != 0) { num2 = mm; return (true); }
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
   
    double n, m;
   
    Abaqus calc;
    while (1) {
        std::cout << "\n Please, enter num1:\t";
        std::cin >> n;
        std::cout << "\n Please, enter num2:\t";
        std::cin >> m;
        if ((calc.set_num1(n) == 1) && (calc.set_num2(m) == 1))
        {
            std::cout << "\n num1 + num2 =" << calc.add() << std::endl;
            std::cout << "\n num1 * num2 =" << calc.multiply() << std::endl;
            std::cout << "\n num1 - num2 =" << calc.substruct_1_2() << std::endl;
            std::cout << "\n num2 - num1 =" << calc.substruct_2_1() << std::endl;
            std::cout << "\n num2 / num1 =" << calc.divide_2_1() << std::endl;
        }
        else
        {
            std::cout << "Without Zero values, please!\n";

        }

    }
    return (0);

}


