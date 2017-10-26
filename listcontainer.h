#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include "component.h"
#include "container.h"

#include <list>
class ListContainer : public Container {
    private:
        std::list<Base*> datatree;
        
    public:
        ListContainer() : Container() {};
        ListContainer(Sort* func) : Container(func){};

        void add_element(Base* element);
        void print();
        void sort();
        void swap(int i, int j);
        Base* at(int i);
        int size();
};


#endif
