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
    Operation();
    ~Operation();

    template <typename... Arguments>
    virtual eval(Arguments... operands) = 0;

protected:
    
    static const int arity;
}

#endif
