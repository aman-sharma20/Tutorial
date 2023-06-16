// insertion st specific
#include<iostream>
using namespace std;
void insert_at_specific(int a[],int& n,int max_size,int item,int index);

int main(){
    int max_size=100;
    int a[max_size];
    int n;

    cout<<"enter the no of elements you want in your array"<<endl;
    cin>>n;
    cout<<"enter the no of inputs"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int item;
    cout<<"enter the element that you to insert"<<endl;
    cin>>item;
    int index;
    cout<<"enter the index to insert array"<<endl;
    cin>>index;
    insert_at_specific(a,n,100,item,index);
cout<<"your new array is"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}

}
void insert_at_specific(int a[],int& n,int max_size,int item, int index){
    if(n>=max_size){
        cout<<"overflow";
        return;
    }
    for(int i=n-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index]=item;
    n++;
}
