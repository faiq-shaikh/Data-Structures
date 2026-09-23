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
    void search(int val){
        if(head==NULL){
            cout<<"LL empty";
            return;
        }
        node*temp=head;
        int count=0;
        while(temp->data!=val){
            temp=temp->next;
            count++;
        }
            cout<<"found at node :"<<count<<endl;
    }
        void reverse(){
        node*oldhead=head;
        node*temp=head;
        node*prev=NULL;
        node*NEXT=NULL;
        while(temp!=NULL){
            NEXT=temp->next;
            temp->next=prev;
            prev=temp;
            temp=NEXT;
        }
        tail=oldhead;
        head=prev;
    }
    void count_nodes(){
        node*temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        cout<<"node count: "<<count<<endl;
    }
    void del_before_val(int val){}
    void del_after_val(int val){}
    node* merge(node* &h1,node* &h2){
        node*p1=h1;
        node*p2=h2;
        node*dummy=new node(-1);
        node*p3=dummy;
        while(p1!=NULL &&p2!=NULL){
            if(p1->data<p2->data){
                p3->next=p1;
                p1=p1->next;
            }
            else{
                p3->next=p2;
                p2=p2->next;
            }
            p3=p3->next;
        }
        while (p1!=NULL)
        {
            p3->next=p1;
            p1=p1->next;
            p3=p3->next;
        }
        while(p2!=NULL){
            p3->next=p2;
            p2=p2->next;
            p3=p3->next;
        }
        // while(p3!=NULL){
        //     cout<<p3->data<<"->";
        //     p3=p3->next;
        // }
        return dummy->next;
        
    }
    void print(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main(){
    list l1;
    list l2;
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(7);
    l1.push_back(9);
    l1.print();
    l2.push_back(3);
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(8);

}