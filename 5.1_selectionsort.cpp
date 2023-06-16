#include<iostream>
using namespace std;
void swap(int* a,int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void selection(int* a,int n){
    for(int j=0 ;j<n-1;j++){
        int max_index=0;
for(int i=1;i<n-j; i++){
    if(a[i]>a[max_index]){
        max_index =i;
        
    }
}swap(a,max_index,n-j-1);
        

    }
}
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    cout<<"emter the no of inputs"<<endl;
    //int a[n];
    int* a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection(a,n);
    cout<<"the sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }




    

}
