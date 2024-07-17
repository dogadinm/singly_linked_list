#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>


template<typename T>
class List
{
public:
    List();
    ~List();
    void my_push_back(T data);
    void pop_front();
    void clear();
    int getSize() {return size;}
    T& operator[](const int index);

    void insert(T data, int index);
    void remove(int index);
    void pop_back();
    void push_front(int data);


private:
    class ErrorInvalidIndex : public std::exception {
    public:
        virtual const char* what() const throw() {
            return "Invalid index";
        }
    };
    class Node
    {
    public:
        Node *pNext;
        T data;

        Node(T data=T(), Node *pNext = nullptr)
        {
            this->pNext = pNext;
            this->data = data;
        }

        ~Node(){}
    };

    Node *head;
    int size;
};


#include "list.tpp"

#endif