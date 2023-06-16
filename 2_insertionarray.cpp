// insertion at begin
#include<iostream>
using namespace std;
void insert_at_begin(int arr[],int& n,int max_size,int item);
int main(){
    
    int max_size;
    max_size=100;
    int arr[100];
    int n;
    cout<<"enter the no of elements you want in your array"<<endl;
    cin>>n;
    cout<<"enter the no of inputs"<<endl;
    
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int item;
    cout<<"enter the item to add in your array"<<endl;
cin>>item;
insert_at_begin(arr,n,max_size,item);
cout<<"your new array is"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}
void insert_at_begin(int arr[],int& n,int max_size,int item){
    if(n>=max_size){
        cout<<"overflow";
        return;
    }
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=item;
    n++;
}



