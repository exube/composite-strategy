#ifndef SORT_H
#define SORT_H

class Container;

class Sort {
    public:
        Sort();
        
        virtual void sort(Container* container) = 0;
};
#endif
