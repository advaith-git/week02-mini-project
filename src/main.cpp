
/*
EECE 2140: Computing Fundamentals for Engineers
Name: Jailen Patel
Date: October 9, 2026
Mini Project 01 Part B: Temperature Conversion App
*/

#include <iostream>
#include <string>

int main()
{
    std::string direction;
    double temperature;

    if (!(std::cin >> direction >> temperature))
    {
        std::cout << "Invalid input\n";
        return 0;
    }

    if (direction == "CtoF")
    {
        double fahrenheit = temperature * 9 / 5 + 32;
        std::cout << temperature << " C = " << fahrenheit << " F\n";
    }
    else if (direction == "FtoC")
    {
        double celsius = (temperature - 32) * 5 / 9;
        std::cout << temperature << " F = " << celsius << " C\n";
    }
    else
    {
        std::cout << "Unsupported direction\n";
    }

    return 0;
}