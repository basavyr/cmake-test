#include "../include/test.hh"

void test::runTest(const std::string &name)
{
    std::cout << "Hi there " << name;
    std::cout << "\n";
}

void test::runTestFile(const std::string &name, std::ofstream &fout)
{
    const std::string newline = "\n";
    fout << "Hey there " << name;
    fout << newline;
}