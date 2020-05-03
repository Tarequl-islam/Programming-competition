#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *root;
void Insert(int value){
    struct Node *newNode = new Node;
    newNode->data = value;
    newNode->right = NULL; newNode->left = NULL;
    if(root== NULL) root = newNode;
    else{
        struct Node *temp = root;
        while(1){
            if(newNode->data <= temp->data){
                if(temp->left== NULL){
                    temp->left = newNode;
                    break;
                }
                else temp = temp->left;
            }
            else{
                if(temp->right== NULL){
                    temp->right= newNode;
                    break;
                }
                else temp= temp->right;
            }
        }
    }
}
void inorder(struct Node *r){
    if(r==NULL) return;
    inorder(r->left);
    cout<<r->data<<" ";
    inorder(r->right);
}
int main(){
    root = NULL;
    Insert(55);
    Insert(40);
    Insert(80);
    Insert(34);
    Insert(60);
    Insert(90);

    inorder(root);
    return 0;
}



