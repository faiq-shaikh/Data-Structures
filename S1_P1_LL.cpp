#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int val):data(val),next(NULL){}
};
class list{
    private:
    node*head;
    node*tail;
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
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    void insert_before_val(int befval,int val){
        node*newnode=new node(val);
        if(head==NULL){
            head=tail=newnode;
        }

        node*temp=head;
        node*prev=NULL;
        while(temp!=nullptr && temp->data!=befval){
            prev=temp;
            temp=temp->next;
        }
        prev->next=newnode;
        newnode->next=temp;
    }
    void insert_after_val(int aftval,int val){
        node*newnode=new node(val);
        if(head->data==aftval){

        }
        if(head==NULL){
            return;
        }
        node*curr=head;
        node*temp=NULL;
        while(curr!=NULL && curr->data!=aftval)
        {
            curr=curr->next;
            temp=curr->next;
        }
        curr->next=newnode;
        newnode->next=temp;
    }
    void pop_front(){
        if (head==NULL)
        {
            cout<<"LL empty";
            return;
        }
        else if(head==tail){
            head=NULL;
            tail=NULL;
        }
        else{
        node*temp=head;
        head=head->next;
        delete temp;
        }
    }
    void pop_back(){
        if(head==NULL){
            cout<<"LL empty";
            return;
        }
        else if(head==tail){
            head=NULL;
            tail=NULL;
        }
        else{
            node*temp=head;
            while(temp!=tail){
                temp=temp->next;
            }
            tail=NULL;
            delete tail;
            tail=temp;
        }
    }
    void del_before_val(int val){}
    void del_after_val(int val){}
    void search(int val){}
    void count_nodes(){}
    void reverse(){}

};