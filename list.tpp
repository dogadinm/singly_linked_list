#include "list.hpp"

template<typename T>
List<T>::List() : head(nullptr), size(0)
{}

template<typename T>
void List<T>::my_push_back(T data)
{
    if (head == nullptr)
        head = new Node(data);
    else
    {
        Node *current = head;
        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext  = new Node(data);
    }
    size++;

}
template<typename T>
T& List<T>::operator[](const int index)
{
    if (index < 0 || index >= size)
        throw (ErrorInvalidIndex());
    int counter = 0;
    Node *current = head;

    while (current != nullptr)
    {
        if(counter == index)
            return current->data;
        current = current->pNext;
        counter++;
    }
    return (current->data);
}

template<typename T>
void List<T>::pop_front()
{
    Node *temp = head;
    head = head->pNext;
    delete temp;
    size--;
}

template<typename T>
void List<T>::clear()
{
    while (size)
    {
        pop_front();
    }
}

template<typename T>
void List<T>::push_front(int data)
{
    head = new Node(data, head);
    size++;
}

template<typename T>
void List<T>::insert(T data, int index)
{
    if (index < 0 || index > size)
        throw (ErrorInvalidIndex());
    if (index == 0)
        push_front(data);
    else
    {
        Node *previuos = head;

        for (int i = 0; i < index - 1; i++)
        {
            previuos = previuos->pNext;
        }
        Node *newNode = new Node(data, previuos->pNext);
        previuos->pNext = newNode;
        size++;
    }
}

template<typename T>
void List<T>::remove(int index)
{
    if (index < 0 || index >= size)
        throw (ErrorInvalidIndex());
    if (index == 0)
        pop_front();
    else
    {
        Node *previuos = head;

        for (int i = 0; i < index - 1; i++)
        {
            previuos = previuos->pNext;
        }

        Node *toDelete = previuos->pNext;
        previuos->pNext = toDelete->pNext;
        size--;
    }
}

template<typename T>
void List<T>::pop_back()
{
    remove(size - 1);
}



template<typename T>
List<T>::~List()
{
    clear();  
}