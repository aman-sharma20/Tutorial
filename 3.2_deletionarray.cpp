//deletion from specific
#include<iostream>
using namespace std;
 void delete_at_specific(int a[],int& n,int index);

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
    int index;
    cout<<"enter the index to delete "<<endl;
    cin>>index;

    delete_at_specific(a,n,index);
cout<<"your new array  after deletion from specific"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}

}
void delete_at_specific(int a[],int& n,int index){
    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    
    n--;
}

