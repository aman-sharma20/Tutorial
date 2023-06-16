// insertion at end
#include<iostream>
using namespace std;
void insert_at_end(int a[],int max_size,int item);
int n;
int main(){
    int max_size=100;
    int a[max_size];
   // int n;

    cout<<"enter the no of elements you want in your array"<<endl;
    cin>>n;
    cout<<"enter the no of inputs"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int item;
    cout<<"enter the element that you want to insert"<<endl;
    cin>>item;
    insert_at_end(a,100,item);
cout<<"your new array is"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}

}
void insert_at_end(int a[],int max_size,int item){
    if(n>=max_size){
        cout<<"overflow";
        return;
    }
    a[n]=item;
    n++;
}
