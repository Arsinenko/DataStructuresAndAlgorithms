#include "iostream"
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;

public:
    LinkedList(): head(NULL){}

    void InsertAtEnd(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (!head){
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next){
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void InsertAtBeginning(int data){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    void InsertIntoPosition(int position, int value){
        if (position < 1){
            cout << "position error" << endl;
            return;
        }
        if (position == 1){
            InsertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; i < position -1 && temp; ++i){
            temp = temp->next;
        }
        if (!temp){
            cout << "position out of range" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    void DeleteFromBeginning(){
        if (!head){
            cout << "list is empty" << endl;
            return;
        }
        Node* temp = head;
        head = temp->next;
        delete temp;
    }
    void DeleteFromEnd(){
        if (!head){
            cout << "list is empty" << endl;
            return;
        }
        if (!head->next){
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    void Display(){
        if (!head){
            cout << "list is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << NULL << endl;
    }
};

