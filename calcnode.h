/*  calcnode.h
 *
 *  This file defines the linked list node-like CalcNode, which provides a way
 *  of generalizing a stack to hold entries of multiple types.
 *
 *  Vasco Portilheiro, 2014
 */

#ifndef _CALCNODE_H_
#define _CALCNODE_H_

struct Numerical {
    Numerical(){}
    virtual ~Numerical() = 0;
};

template <class T>
struct NumberEntry : Numerical {
    NumberEntry(T entry) {
        this->entry = entry;
    }
    virtual ~NumberEntry(){}

    T entry;
};

struct CalcNode {
    CalcNode() {
        this->next = NULL;
        this->number = NULL;
    }

    ~CalcNode() {
        delete number;
        delete next;
    };

    CalcNode* next;
    Numerical* number;
};

#endif
