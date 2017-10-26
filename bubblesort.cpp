#include "bubblesort.h"
#include "container.h"



void BubbleSort::sort(Container* container) {
    bool sorted = false;

    while (!sorted) {
        sorted = true;
        for (int i = 0; i < container->size() - 1; i++) {
            if ( container->at(i)->evaluate() < container->at(i+1)->evaluate() ) {
                sorted = false;
                container->swap(i, i+1);
            }
        }
    }
}
