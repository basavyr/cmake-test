#include "../include/test.hh"
#include <iostream>
#include <functional>

inline void newline()
{
    std::cout << "\n";
}

void tests()
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

void referenceWrapper_Test()
{
    auto out = std::ref(std::cout << "Reference ");
    [&]() {
        out.get() << "Test...";
        newline();
    }();
}

int main()
{
    referenceWrapper_Test();
}