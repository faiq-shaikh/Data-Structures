#include<iostream>
using namespace std;
class node{
public:
int data;
node *next;
node *prev;
node(int val){
    data=val;
    next=NULL;
    prev=NULL;
}
};
class doubly{
private:
node *head;
node*tail;
public:
doubly(){
    head=NULL;
    tail=NULL;
}
void push_front(int val){
    node *newnode=new node(val);
    if(head==nullptr){
        head=tail=newnode;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;

    }
}
void push_back(int val){
    node*newnode=new node(val);
    if(head==nullptr){
        head=tail=newnode;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        tail=newnode;
    }
}
void pop_front(){
    node*temp=head;
    if(head==NULL){
        return;
    }
    else if(head==tail){
        head=tail=NULL;
    }
    else{
        head=head->next;
        head->prev=NULL;
    }
    delete temp;
}
void pop_back(){
    node*temp=tail;
    if(head==NULL){
        return;
    }
    else if(head==tail){
        head=tail=NULL;
    }
    else{
        tail=tail->prev;
        tail->next=NULL;
    }
    delete temp;
}
void delete_by_val(int val){
    node*temp=head;
     while (temp!=NULL && temp->data!=val)
    {
        temp=temp->next;
    }    
    if(temp==NULL){return;}
    else if(temp==head){pop_front();return;}
    else if(temp==tail){pop_back();return;}
    node*back=temp->prev;
    node*NEXT=temp->next;
    back->next=NEXT;
    NEXT->prev=back;

    delete temp;
}
void insert_after_val(int aftval,int val){
    node*newnode=new node(val);
    node *temp=head;
    node*NEXT;
    while(temp!=nullptr && temp->data!=aftval){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"value not found"; return;
    }

    NEXT=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=NEXT;
    if(NEXT!=NULL){
    NEXT->prev=newnode;
    }
}
bool is_present(int val){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){return true;}
        temp=temp->next;
    }
    return false;
}
void count_nodes(){
    int count=0;
    node*temp=head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<count<<" number of nodes are present";
}
void print(){
    node*temp=head;
    while(temp!=nullptr){
        cout<<"<=>"<<temp->data;
        temp=temp->next;
    }cout<<"\n";
}
void print_back(){
    node*temp=tail;
    while(temp!=nullptr){
        cout<<"<=>"<<temp->data;
        temp=temp->prev;
    }cout<<"\n";
}
void convert_circular(){
    tail->next=head;
    head->prev=tail;
}
};
int main(){
    doubly d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);
    d1.print();
    d1.insert_after_val(20,25);
    d1.print();
    d1.delete_by_val(25);
    d1.print();
}