#include<bits/stdc++.h>
using namespace std;
template<class T>
class Node{
    public:
    T data;
    Node<T>* next;
};
template<class T>
class QQueue{
    Node<T> *front, *back;
    public:
    QQueue(){
        front = NULL;
        back = NULL;
    }
    void enqueue(T a){
        Node<T> *temp = new Node<T>;
        temp->data = a;
        temp->next = NULL;
        if(back==NULL) front = back = temp;
        else back->next = temp;
        back = temp;
    }
    void dequeue(){
        if(front!=NULL){
            Node<T> * temp = front;
            front = front->next;
            delete(temp);
        }
    }
    T Front(){
        return front->data;
    }
    T Back(){
        return back->data;
    }
    bool isEmpty() {
        return front==NULL;
    }

};
int main(){
    QQueue<int> q;
    q.enqueue(4);
    q.enqueue(6);
    q.enqueue(8);
    q.enqueue(22);
    q.dequeue();
    while(!q.isEmpty()){
        cout<<q.Front()<<" ";
        q.dequeue();
    }
    return 0;
}