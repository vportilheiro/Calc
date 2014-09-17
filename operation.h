/*  operation.h
 *
 *  This file defines an Operation type, and derived operations, that take
 *  a given number of operands, stored as the "arity". The operation can then
 *  be evaluated given arguments, and the result checked.
 *
 *  Vasco Portilheiro, 2014
 */

#ifndef _OPERATION_H_
#define _OPERATION_H_

class Operation {
public:

    /* Constructor and destructor */
    Operation() {};
    virtual ~Operation() = 0;

    /*
    template <typename T, typename... Arguments>
    T eval(Arguments... operands);
    */

    virtual double eval(double x, double y) = 0;

    int getArity() {
        return arity;
    }

private:
    
    static const int arity;
};

class Addition : public Operation {
public:

    virtual double eval(double x, double y) {
        return x + y;
    }
};

class Subtraction : public Operation {
public:

    virtual double eval(double x, double y) {
        return x - y;
    }
};

class Multiplication : public Operation {
public:

    virtual double eval(double x, double y) {
        return x * y;
    }
};


class Division : public Operation {
public:

    virtual double eval(double x, double y) {
        return x / y;
    }
};

#endif
