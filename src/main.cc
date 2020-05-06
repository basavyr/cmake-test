#include "../include/test.hh"
#include <iostream>

inline void newline()
{
    std::cout << "\n";
}

int main()
{
    const std::string darwin_user = "cmake";
    std::ofstream fout("../output/tests.out");
    std::cout << "Select number of tests: "
              << "\n";
    int noTests;
    bool status = true;
    std::cin >> noTests;
    newline();
    if (!noTests)
    {
        status = false;
        std::cout << "No tests required...";
        newline();
        std::cout << "Program stopped with status " << static_cast<int>(status);
        newline();
    }
    else
    {
        for (int i = 0; i < noTests; ++i)
        {
            test::runTest(darwin_user);
            test::runTestFile(darwin_user, fout);
        }
        newline();
        std::cout << "Program stopped with status " << static_cast<int>(status);
        newline();
    }
}