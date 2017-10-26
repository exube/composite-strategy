#include "component.h"

double Op::evaluate() { return this->data; }

double Multiply::evaluate() { 
    return this->left->evaluate() * this->right->evaluate(); 
}


double Divide::evaluate() { 
    return this->left->evaluate() / this->right->evaluate(); 
}
double Add::evaluate() { 
    return this->left->evaluate() + this->right->evaluate(); 
}
double Subtract::evaluate() { 
    return this->left->evaluate() - this->right->evaluate(); 
}

double Sqr::evaluate() {
    return this->left->evaluate() * this->left->evaluate();
}
