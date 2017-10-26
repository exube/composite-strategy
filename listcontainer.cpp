#include "listcontainer.h"
#include "sort.h"
#include <iostream>
#include <algorithm>
void ListContainer::add_element(Base* element) {
    this->datatree.push_back(element);
}

void ListContainer::print() {
    auto it = this->datatree.begin();
    while (it != this->datatree.end()) {
        std::cout << (*it)->evaluate() << " ";
        it++;
    }
}

void ListContainer::sort() {
    if (this->sort_function == NULL) throw "Sort function is not set!\n";
    else this->sort_function->sort(this);
}

Base* ListContainer::at(int i) {
    auto it = this->datatree.begin(); 
    for (int j = 0; j < i; j++) {
        it++;
    }
    return *it;
}

void ListContainer::swap(int i, int j) {
    auto it1 = this->datatree.begin(); 
    for (int k = 0; k < i; k++) {
        it1++;
    }
    auto it2 = this->datatree.begin(); 
    for (int k = 0; k < j; k++) {
        it2++;
    }
    Base* left = this->at(i);
    Base* right = this->at(j);
    std::swap(left, right);
}

int ListContainer::size() {
    return this->datatree.size();
}
