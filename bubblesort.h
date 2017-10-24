#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include "sort.h"
#include "container.h"
class BubbleSort : public Sort {
    public:
        BubbleSort();

        void sort(Container* container);
};


#endif
