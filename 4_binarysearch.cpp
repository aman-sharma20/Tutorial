#include<iostream>
using namespace std;
int binary_search(int a[],int n,int item){
    int i=0;
    int e=n-1;
    while(i<=e){
        int mid=(i+e)/2;
        if(item>a[mid]){
            i=mid+1;

        }
       else if(item<a[mid]){
            e=mid-1;

        }
        else {
            return mid;
        }
    }
    return -1;

    
}
int main(){
    int n;
    cout<<"enter the no of elements you want in your array"<<endl;
    cin>>n;
    cout<<"enter the no of inputs"<<endl;
    // int a[];
    int* a= new int[n];
    for(int i=0; i<n; i++)
    cin>>a[i];

    int item;
    cout<<"enter the item you search for:";
    cin>>item;
    cout<<"your item is present at the index:";
    cout<<binary_search(a,n,item);


}