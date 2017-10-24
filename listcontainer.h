#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include "component.h"
#include "container.h"

#include <list>
class ListContainer : public Container {
    private:
        std::list<Base*> datatree;
        
    public:
        ListContainer() : sort_function(NULL) {}
        ListContainer(Sort* func) : sort_function(function){}

        void add_element(Base* element);
        void print();
        void sort();
        void swap(int i, int j);
        Base* at(int i) = 0;
        int size();
};


#endif
