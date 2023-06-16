#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
     node(int x){
        data =x;
        next=NULL;
     }

};
int main(){
node* n1=new node(23);
node* n2=new node(43);
node* n3=new node(67);
node* n4=new node(76);
node* head=n1;
n1->next=n2;
n2->next=n3;
n3->next= n4;

}