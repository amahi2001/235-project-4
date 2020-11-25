#include <iostream>
#include "LinkedList.hpp"
#include "Node.hpp"


int main ()
{
    LinkedList<int> hello;
    hello.insert(1,1);
    hello.insert(2,2); 
    hello.insert(3,3);
    hello.insert(4,4);    
    hello.invert(); 
    hello.rotate(1);
}   