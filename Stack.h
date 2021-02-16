#ifndef CONTAINER_STACK_H
#define CONTAINER_STACK_H
#include <iostream>
#include <vector>
#include "Exception.h"

using namespace std;


template<class T>
class Stack {
private:
    vector<T> container;
public:
    Stack() {}
    Stack(vector<T> container)
    {
        this->container = container;
    }
    //TODO Написать конструктор копирования
    /*
    Stack(Stack stack)
    {
        container = stack;
    }
    */

    void Push(T value)
    {
        container.push_back(value);
    }
    T Pop()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            T temp = container.front();
            for (auto element = container.begin(); element < container.end(); element++) {
                *element = *(element + 1);
            }

            container.pop_back();
            return temp;
        }
    }

    T Fetch()
    {
        if (isEmpty()) {
            throw Exception::Bottom;
        } else {
            return container.front();
        }
    }

    void Clear()
    {
        container.clear();
    }

    bool isEmpty()
    {
        return container.empty();
    }

    void ForEach(void(*Func)(T))
    {
        for (auto el : container) {
            Func(el);
        }
    }
    void ForEach(T(*Func)(T))
    {
        for (auto el: container) {
            el = Func(el);
        }
    }

};

#endif //CONTAINER_STACK_H
