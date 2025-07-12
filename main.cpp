#include <iostream>
#include "LinkedList.h"

using namespace std;

int main() {
    
    LinkedList<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);
    std::cout << list << std::endl;

    //list.pop_back();
    //std::cout << list << std::endl;
    for (size_t i = 0; i < 8; i++)
    {
        
        list.push_back(i);

    }
    std::cout << list << std::endl;
    
    return 0;
}