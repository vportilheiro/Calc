/*  calc.h
 *
 *  This is the main class defining the functionality of the RPN calculator.
 *  A calculator can store numbers on the stack, as well as perform operations
 *  that are defined on N numbers. If there are less than N numbers on the
 *  stack when and N-ary operation is performed, an error is thrown.
 *
 *      Vasco Portilheiro, 2014
 */

#ifndef _CALC_H_
#define _CALC_H_

#include "calcnode.h"
#include "operation.h"

/* The Calc class that will be able to handle storing values and handling
 * operations. Note that this implementation allows for multiple types to be
 * stored on the "stack", namely because an actual stack is not used. Rather,
 * a linked list of StackNode objects is used to store values, where the front
 * corresponds to the stack "top". */
class Calc {
public:

    /* Constructor and destructor manage the memory associated with the stack */
    Calc();
    ~Calc();

    /* Pushes number onto internal stack */
    template<class T>
    void push(T number);

    /* Removes number from internal stack. If the stack is empty, throws an
     * exception. */
    void pop();

    /* Evaluates the given operation, pushing the result onto the stack. If not
     * enough values are present on the stack -- which is checked through the
     * operation's "arity" -- an exception is thrown. */
    void eval(Operation op);
    void eval(const Operation& op);

private:

    /* The internal "stack" used to store values, made of general StackNodes */
    CalcNode* top;
};

#endif
