#include "selectionsort.h"
#include "container.h"
void SelectionSort::sort(Container* container) {

    int size = container->size();
    
    for (int i = 0; i < size; i++) {
        int largest = 0;

        // Get the largest remaining element
        for (int j = i; j < size; j++) {
            if (container->at(largest)->evaluate() < container->at(j)->evaluate()) {
                largest = j;
            }
        }
      
        // If the largest is larger than current element, swap

        if (container->at(largest)->evaluate() > container->at(i)->evaluate()) {
            container->swap(i, largest);
        }

    }
}
            

SelectionSort::SelectionSort() {};
//void SelectionSort::set_sort_function(Sort* test) : sort_function(test) {};
  
