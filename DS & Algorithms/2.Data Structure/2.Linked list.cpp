#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
};
/* Given a reference (pointer to pointer) to the head of a list and an int, inserts a new node on the front of the list. */
void push(Node **head_ref, int new_data){
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
/* Given a reference (pointer to pointer) to the head of a list and an int, appends a new node at the end */
void append(Node **head_ref, int new_data){
    Node *new_node = new Node();
    Node *last = *head_ref; /* used in step 5*/
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}
// Given a reference (pointer to pointer) to the head of a list and a key, deletes the first occurrence of key in linked list
void deleteNode(Node **head_ref, int key){
    Node *temp = *head_ref;
    Node *prev = NULL;
    if (temp != NULL && temp->data == key){
        *head_ref = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }
    // Else Search for the key to be deleted, keep track of the previous node as we need to change 'prev->next' */
    else{
        while (temp != NULL && temp->data != key){
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }
}
// This function prints contents of linked list starting from head
void printList(Node *node){
    while (node != NULL){
        cout << " " << node->data;
        node = node->next;
    }
}

int main(){
    Node *head = NULL;
    append(&head, 6);
    push(&head, 7);         // Insert 7 at the beginning. So linked list becomes 7->6->NULL
    push(&head, 1);         // Insert 1 at the beginning. So linked list becomes 1->7->6->NULL
    append(&head, 4);       // Insert 4 at the end. So linked list becomes 1->7->6->4->NULL
    append(&head, 8);       // Insert 8 at the end. So linked list becomes 1->7->6->4->8->NULL
    cout << "Created Linked list is: ";
    printList(head);
    deleteNode(&head, 6);
    cout << "\nLinked list after deletion: ";
    printList(head);
    return 0;
}
