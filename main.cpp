#include <iostream>
#include "list.h"

int main() {
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(5);
    for (int& i : l){
        std::cout << i << "\n";
    }
}