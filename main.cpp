#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "addUpTo.hpp"

int main()
{
    // INIT vector with random values
    std::vector<std::size_t> randomVector = {2,6,4,10};
    /*auto limitRand = [](int &number) { number = number % 100; };
    std::generate(randomVector.begin(), randomVector.end(), rand);
    std::for_each(randomVector.begin(), randomVector.end(), limitRand);
    const std::vector<int> test = randomVector;

    randomVector[1] *= -1;
    randomVector[3] *= -1;
    randomVector[6] *= -1;*/
    for (int value : randomVector)
    {
        std::cout << value << std::endl;
    }
    std::cout << "--------------" << std::endl;
    std::string str = (addUpTo(16, randomVector))?"Yes":"No";
    std::cout << "Can we add up to 16 : " << str << std::endl;
    str = (addUpTo(17, randomVector))?"Yes":"No";
    std::cout << "Can we add up to 17 : " << str << std::endl;
    str = (addUpTo(20, randomVector))?"Yes":"No";
    std::cout << "Can we add up to 20 : " << str << std::endl;
    return 0;
}
