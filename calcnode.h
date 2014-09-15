/*  calcnode.h
 *
 *  This file defines the linked list node-like CalcNode, which provides a way
 *  of generalizing a stack to hold entries of multiple types.
 *
 *  Vasco Portilheiro, 2014
 */

#ifndef _CALCNODE_H_
#define _CALCNODE_H_

class CalcNode {
public:
    CalcNode();
    ~CalcNode();
    CalcNode* next;

protected:
    Numerical number;
};

class Numerical {
public:
    Numerical();
    ~Numerical();
}

template <class T>
class NumberEntry : public Numerical {
public:
    NumberEntry();
    virtual ~NumberEntry();

    T entry;
}

#endif
