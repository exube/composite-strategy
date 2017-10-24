#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include "sort.h"
#include "container.h"
class SelectionSort : public Sort {
    public:
        SelectionSort();

        void sort(Container* container);
}


#endif
