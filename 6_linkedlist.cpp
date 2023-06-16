#include<iostream>
using namespace std; 
class node{
    public:
    int data;
    node* next;
    node(int x){
        data =x;
        next= NULL;
    }
};

void insert_at_begin(node* &head,int x){
    node* newnode= new node(x);
newnode->next =head;
head =newnode;
}
void print_linked(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;

    }
}



int main(){
    node* n1= new node(23);
    node* n2=new node(12);
    node* n3=new node(55);
node* n4=new node(90);
node* head=n1;
n1->next =n2;
n2->next =n3;
n3->next =n4;
print_linked(head);
insert_at_begin(head,515);
cout<<"updated linked list is"<<endl;
print_linked(head);
}