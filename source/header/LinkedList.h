#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

template <class T> class LinkedList {
public:
    Node<T>* head;
    LinkedList();
    ~LinkedList();
    void add(T data);
    void remove(Node<T>* node);
    void display();

    // Phương thức duyệt
    Node<T>* begin(); // Trả về nút đầu
    Node<T>* end();   // Trả về nullptr (điểm kết thúc)
};

template <class T> LinkedList<T>::LinkedList() {
    this->head = new Node<T>;
    this->head->next = this->head;
    this->head->prev = this->head;
}

template <class T> LinkedList<T>::~LinkedList() {
    Node<T> *temp = this->head->next;
    Node<T> *prev;
    while(temp != this->head) {
        prev = temp;
        temp = temp->next;
        delete prev;
    }
    delete this->head;
}

template <class T> void LinkedList<T>::add(T data) {
    Node<T>* newNode = new Node<T>(data);
    newNode->next = this->head;
    newNode->prev = this->head->prev;
    this->head->prev->next = newNode;
    this->head->prev = newNode;
}

template <class T> void LinkedList<T>::remove(Node<T>* node) {
    node->prev->next = node->next;
    node->next->prev = node->prev;
    delete node;
}

template <class T> void LinkedList<T>::display() {
    Node<T> *temp = this->head->next;
    while(temp != this->head) {
        cout << temp->data << endl; // nay thi phai dung da nang hoa toan tu nay!!
        temp = temp->next;
    }
}

// Phương thức duyệt
template <class T>
    Node<T>* LinkedList<T>::begin() 
    {
        return head->next; // Trả về nút đầu tiên (nếu có)
    }

template <class T>
    Node<T>* LinkedList<T>::end() 
    {
    return nullptr; // Trả về nullptr cho điểm kết thúc
    }
#endif