#include <iostream>
#include "component.h"
#include "vectorcontainer.h"
#include "listcontainer.h"
#include "sort.h"
#include "selectionsort.h"
#include "bubblesort.h"
//#include ".h"
#define Mult Multiply
#define Sub Subtract
//#define Sqr Square
using namespace std;

int main() {
    Op* op1 = new Op(5);
    Op* op2 = new Op(2);
    Op* op3 = new Op(4);
    Op* op4 = new Op(6);
    Mult* A = new Mult(op1, op2);
    Sub* B = new Sub(op3, op4);
    Add* C = new Add(A, B);
    Sqr* D = new Sqr(C);

    Container* container[2]; 
    container[0] = new VectorContainer();
    container[1] = new ListContainer();

    container[0]->add_element(A);
    container[0]->add_element(B);
    container[0]->add_element(C);
    container[0]->add_element(D);

    container[1]->add_element(A);
    container[1]->add_element(B);
    container[1]->add_element(C);
    container[1]->add_element(D);

    cout << "Container Before Sort: " << endl;
    container[0]->print();
    container[0]->set_sort_function(new SelectionSort());
    container[0]->sort();	
    cout << "Container After Sort: " << endl;
    container[0]->print();
    
    cout << "Container before sort: " << endl;
    container[1]->print();
    container[1]->set_sort_function(new BubbleSort());
    container[1]->sort();
    cout << "Container after sort: " << endl;
    container[1]->print();
    return 0;
};
