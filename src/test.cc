#include "../include/test.hh"

void test::runTest(){
    const std::string name="CMAKE";
    std::cout<<"Hi there "<<name;
    std::cout<<"\n";
}

int main()
{
    test::runTest();
}