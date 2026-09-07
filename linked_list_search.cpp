#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int val){
    data=val;
    next=NULL;
}
};
class Linkedlist{
private:
Node *head;
Node *tail;
public:
Linkedlist(){
    head=tail=NULL;
}
void push_front(int val){
    Node *newnode=new Node(val);
    if(head==NULL){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}
void search(int val){
    int count=0;
    Node *temp=NULL;
    temp=head;
    while (temp!=NULL)
    {
        if(temp->data==val){
            cout<<val<<" found at node "<<count<<endl;
        }
        count++;
        temp=temp->next;
    }
    
}
void display(){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void push_back(int val){
    Node *newnode=new Node(val);
    if (head=NULL)
    {
        head=tail=newnode;
    }
    newnode->next=tail;
    newnode=tail;
    
}
void pop_front(){
    Node *temp=head;
    head=head->next;
    delete temp;
}
void pop_back(){
    Node *temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
}
void insert(int val,int pos){
    Node *newnode=new Node(val);
    Node *temp=head;
    for (int i = 0; i < pos-1; i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
};
int main(){
    Linkedlist L1;
    L1.push_front(10);
    L1.push_front(20);
    L1.push_front(30);
    L1.push_front(40);
    L1.push_front(50);
    L1.display();
    L1.search(30);
}