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
    void print(){
        node *temp=head;
        while(temp!=NULL){
            cout<<" "<<temp->data;
            temp=temp->next;
        }
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
            newnode->next=tail;
            newnode=tail;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"empty list";
        }
        else{
            node *temp=head;
            head=head->next;
            delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"empty list";
        }
        else{
            node *temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            tail=NULL;
            delete tail;
            tail=temp;
        }
    }
    void insert_node(int val,int pos){
        node* newnode=new node(val);
        if(pos<0){
            cout<<"invalid position";
        }
        else{
            node *temp=head;
            for(int i=0;i<pos-1;i++){
                temp=temp->next;
            }
            newnode->next=temp->next;
            temp->next=newnode;
        }
    }
};
int main(){
    list l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);
    l1.pop_front();
    l1.pop_back();
    l1.insert_node(7,3);
    l1.print();

}