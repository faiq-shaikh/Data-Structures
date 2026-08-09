#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class list{
node *head;
node *tail;
public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        node *newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void push_back(int val){
        node *newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front(){
        node *temp=head;
        head=head->next;
        delete temp;
    }
    void pop_back(){
        node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void reverse(){
        node *old_head=head;
        node *curr=head;
        node *prev=NULL;
        node *NEXT;
        while (curr!=NULL)
        {
            NEXT=curr->next;
            curr->next=prev;
            prev=curr;
            curr=NEXT;
        }
        tail=old_head;
        head=prev;
        
    }
    void print(){
        node *temp=head;
        while(temp!=NULL){
            cout<<" "<<temp->data;
            temp=temp->next;
        }
    }

};
int main(){
    list L;
    L.push_front(1);L.push_front(2);L.push_front(3);L.push_back(4);L.push_back(5);L.push_back(6);
    L.pop_front();
    L.pop_back();
    L.print();

}