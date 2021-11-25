#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
public:
    T data;
    Node* next;
};
template<class T>
class Stackk{
    Node<T>* head;
    public:
    Stackk(){
        head = NULL;
    }
    void push(T a){
        Node<T>* newNode = new Node<T>;
        newNode->data = a;
        newNode->next = head;
        head = newNode;
    }
    void pop(){
        if(head == NULL) return;
        Node<T> *temp = head->next;
        head = temp;
        free(temp);
    }
    T top(){
        if(head != NULL)
            return head->data;
    }
    bool isEmpty(){
        return (head==NULL);
    }
};
int main(){
    Stackk<string> s;
    s.push("khai");
    s.push("vat");
    s.push("ami");
    while(!s.isEmpty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}