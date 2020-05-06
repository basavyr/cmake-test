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
    auto sayHello = [&](auto name) {
        auto out = std::ref(std::cout << "Hey there ");
        out.get() << name << "\n";
    };

    int x = 4,
        y = 5, z = 6;
    std::reference_wrapper<int> refs[]{x, y, z};

    int n;
    std::cout << "How many times you want to be polite? "
              << "\n";
    std::cin >> n;
    for (auto x = 0; x < n; ++x)
    {
        std::string nameX = "Ariana";
        nameX.append(std::to_string(x));
        sayHello(nameX);
    }
    // for (auto x : refs)
    //     std::cout << x << "\n";
}

int main()
{
    referenceWrapper_Test();
}