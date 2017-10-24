#include "vectorcontainer.h"
#include "sort.h"
#include <iostream>
#include <algorithm>
void VectorContainer::add_element(Base* element) {
    this->datatree.push_back(element);
}

void VectorContainer::print() {
    for (int i = 0; i < this->datatree.size(); i++) {
        std::cout << datatree[i]->evaluate() << " ";
    }
}

void VectorContainer::sort() {
    if (this->sort_function == NULL) throw "Sort function is not set!\n";
    else this->sort_function->sort(this);
}

void VectorContainer::swap(int i, int j) {
    std::swap(this->datatree.at(i), this->datatree.at(j));
}

int VectorContainer::size() {
    return this->datatree.size();
}
