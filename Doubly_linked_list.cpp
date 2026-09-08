#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val):data(val),next(NULL),prev(NULL){}
};
class Doublylist{
    private:
    Node *head;
    Node *tail;
    public:
    Doublylist(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node *newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        }
    }
    void push_back(int val){
        Node *newnode=new Node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->prev=tail;
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        Node *temp=head;
        head=head->next;
        if(!head){
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        }
        }
    void pop_back(){
        Node *temp=tail;
        tail=tail->prev;
        if(!tail){
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        }
    }
    void display(){
        Node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};
int main(){
    Doublylist l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.pop_front();
    l1.display();
}
