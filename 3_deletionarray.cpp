//delete from begin
#include<iostream>
using namespace std;
 void delete_at_begin(int a[],int& n);

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
    
    delete_at_begin(a,n);
cout<<"your new array  after deletion from begin"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}

}
void delete_at_begin(int a[],int& n){
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    
    n--;
}

