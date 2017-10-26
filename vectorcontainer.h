#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "component.h"
#include "container.h"

#include <vector>
class VectorContainer : public Container {
    private:
        std::vector<Base*> datatree;
        
    public:
        VectorContainer() : Container() {};
        VectorContainer(Sort* func) : Container(func){};

        void add_element(Base* element);
        void print();
        void sort();
        void swap(int i, int j);
        Base* at(int i);
        int size();
};


#endif
