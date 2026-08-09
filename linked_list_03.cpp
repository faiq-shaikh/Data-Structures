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
        if (head==NULL)
        {
            head=tail=newnode;;
        }
        else{
            newnode->next=head;
            head=newnode;
        }
        
    }
    void search(int val){
        node *temp=head;
        int idx=0;
        while (temp!=NULL)
        {
            if(temp->data==val){
                cout<<"found at index: "<<idx;
            }
            temp=temp->next;
            idx++;
        }
        
    }
    void print(){
        node *temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }

};
int main(){
    list L;
    L.push_front(1);
    L.push_front(2);
    L.push_front(3);
    L.push_front(4);
    L.search(3);
}