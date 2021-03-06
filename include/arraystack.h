#include <iostream>
#include "stack.h"

template <class T>
class arraystack : public stack<T>
{
private:
    T *data;
    int topIndex;
    int maxStackSize;

public:
    arraystack(int maxStackSize);
    ~arraystack()
    {
        delete[] data;
    }
    bool isEmpty() const;
    bool isFull() const;
    bool push(const T &element);
    bool pop(T &element);
    bool top(T &element) const;
};

template <class T>
arraystack<T>::arraystack(int size)
{
    this->maxStackSize = size;
    this->topIndex = -1;
    this->data = new T[size];
}
template <class T>
bool arraystack<T>::isEmpty() const
{
    return topIndex < 0;
}
template <class T>
bool arraystack<T>::isFull() const
{
    return topIndex == maxStackSize - 1;
}
template <class T>
bool arraystack<T>::push(const T &element)
{
    if (!isFull())
    {
        topIndex++;
        data[topIndex] = element;
        return true;
    }
    else
    {
        std::cout << "The stack is full" << std::endl;
        return false;
    }
}
template <class T>
bool arraystack<T>::pop(T &element)
{
    if (!isEmpty())
    {
        element = data[topIndex--];
        return true;
    }
    else
    {
        std::cout << "The stack is empty" << std::endl;
        return false;
    }
}
template <class T>
bool arraystack<T>::top(T &element) const
{
    if (!isEmpty())
    {
        element = data[topIndex];
        return true;
    }
    else
    {
        std::cout << "Thestack is empty" << std::endl;
        return false;
    }
}