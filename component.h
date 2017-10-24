#ifndef __COMPONENT_H__
#define __COMPONENT_H__

class Base {
    public:
        /* Constructors */
        Base() {}

        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
};

class Op : public Base {
    private:
        double data;
    public:
        Op(double d) : data(d) {}
        
        double evaluate();
            
};

class Multiply : public Base {
    private:
        Base* left;
        Base* right;
    public:
        Multiply( Base* l, Base* r ) : left(l), right(r) {}

        double evaluate();
};


class Divide : public Base {
    private:
        Base* left;
        Base* right;
    public:
        Divide( Base* l, Base* r ) : left(l), right(r) {}

        double evaluate();
};
class Add : public Base {
    private:
        Base* left;
        Base* right;
    public:
        Add( Base* l, Base* r ) : left(l), right(r) {}

        double evaluate();
};
class Subtract : public Base {
    private:
        Base* left;
        Base* right;
    public:
        Subtract( Base* l, Base* r ) : left(l), right(r) {}

        double evaluate();
};
#endif // __COMPONENT_H__
