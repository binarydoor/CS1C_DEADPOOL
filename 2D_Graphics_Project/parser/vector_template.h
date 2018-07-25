/*
 * vector.h
 * 
 * Created on: July 4, 2018
 *     Author: Eunsoo An
 */

#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>
#include <algorithm> // std::copy
using std::copy;


namespace myStd
{
    
template <typename T>
class vector
{
    /*
    vector of generic types

    NOTE: elem[n]
          size_v
          space
          if size_v < space
    */

    int size_v;   // the size
    T *elem;      // pointer to the elements (or 0)
    int space;    // number of elements plus number of free slots

public:
    vector(): size_v{0}, elem{nullptr}, space{0} {} // default constructor

    explicit vector(int s): size_v{0}, elem{new T[s]}, space{s} // alternate constructor
    {
        for (int i = 0; i < size_v; ++i)
            elem[i] = T(); // elements are initialized
    }

    vector(const vector &src): size_v{src.size_v}, elem{new T[src.size_v]}, space{src.space} // copy constructo
    {
        copy(src.elem, src.elem + size_v, elem); // copy elements - std::copy() algorithm
    }

    vector(vector &&src): size_v{0}, elem{nullptr}, space{src.space} // move constructor
    {
        elem = src.elem;
        size_v = src.size_v;
        src.elem = nullptr;
        src.size_v = 0;
    }

    vector &operator=(const vector &src) // copy assignment
    {
        T *p = new T[src.size_v];                 // allocate new space
        copy(src.elem, src.elem + src.size_v, p); // copy elements - std::copy() algorithm
        delete[] elem;
        elem = p;
        size_v = src.size_v;
        return *this;   // return a self-reference
    }
    
    vector &operator=(vector &&src)
    {
        if(this != &src)
        {
            delete[] elem;
            elem = src.elem;
            size_v = src.size_v;
            src.elem = nullptr;
            src.size_v = 0;
        }
        return *this;
   }

    ~vector() 
    {
        delete[] elem; // destructor
    }

    T &operator[](int n)
    {
        return elem[n]; // access: return reference
    }

    const T &operator[](int n) const 
    {
        return elem[n];
    }

    int size() const
    {
        return size_v;
    }

    int capacity() const 
    {
        return space;
    }

    void resize(int newsize) // growth
    // make the vector have newsize elements
    // initialize each new element with the default value 0.0
    {
        reserve(newsize);
        for (int i = 0; i < newsize; ++i)
        {
            elem[i] = T(); // initialize new elements
        }
        size_v = newsize;
    }

    void push_back(const T &obj)
    // increase vector size by one; initialize the new element with obj
    {
        if (space == 0)
            reserve(8);        // start with space for 8 elements
        else if (size_v == space)
            reserve(2 * space); // get more space
        elem[size_v] = obj;    // add d at end
        ++size_v;              // increase the size (size_v is the number of elements)
    }

    void reserve(int newalloc)
    {
        T *p = new T[newalloc];
        copy(elem, elem + size_v, p);
        delete[] elem;
        elem = p;
    }

    using iterator = T *;
    using const_iterator = const T *;

    iterator begin() // points to first element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    const_iterator begin() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[0];
    }

    iterator end() // points to one beyond the last element
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    const_iterator end() const
    {
        if (size_v == 0)
            return nullptr;
        return &elem[size_v];
    }

    iterator insert(iterator p, const T &obj) // insert a new element obj before p
    {
        if (size_v == space)
            reserve(2 * space);
        if (p > end())
        {
            std::cerr << "Position greater than the last element." << std::endl;
            std::cerr << "Inserting at the end." << std::endl;
            elem[size_v] = obj;
            ++size_v;
            return &elem[size_v];
        }
        copy(p, elem + size_v, p + 1);
        p = &obj;
        ++size_v;
        return p;
    }

    iterator erase(iterator p) // remove element pointed to by p
    {
        if (p == end())
            return p;
        for (iterator pos = p + 1; pos != end(); ++pos)
            *(pos - 1) = *pos; // copy element one position to the left
        // delete (end() - 1);
        --size_v;
        return p;
    }
};
} // nam myStd

#endif // _VECTOR_H_
