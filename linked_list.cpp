#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class list{
private:
    node *head;
    node *tail; 
public:
    list(){
        head=tail=NULL;
    }
    void push_front(int val){
        node *newnode=new node(val);
        if (head==NULL)
        {
            head=tail=newnode;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }
    void print_linked_list(){
        node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void push_back(int val){
        node *newnode=new node(val);
        if (head==NULL)
        {
            head=tail=newnode;
        }
        else{
        tail->next=newnode;
        tail=newnode;
        }
    }
    void pop_front(){
        if (head==NULL)
        {
            cout<<"enpty list";
        }
        node *temp=head;
        head=head->next;
        delete temp;
    }
    void pop_back(){
        node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        tail=NULL;
        delete tail;
        tail=temp;
    }
};
int main(){
    list l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_back(4);
    l1.pop_front();
    l1.pop_back();
    l1.print_linked_list();
}