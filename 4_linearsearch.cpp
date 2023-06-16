// binary search
#include<iostream>
using namespace std;
//void linear_search(int* a,int n,int item) is same as below one
void linear_search(int a[],int n,int item){
    for(int i=0;i<n;i++){
        if(a[i]==item){
            cout<<"element found at index : "<<i;
            return;
        }
    }
    cout<<"element not found";
    return;

}

int main(){

int n;
cout<<"enter the no of element"<<endl;
cin>>n;
cout<<"enter the inputs"<<endl;

//int a[] (for static)
int* a= new int[n];
for(int i=0;i<n; i++)
cin>>a[i];
int item;
cout<<"enter the item to search"<<endl;
cin>>item;
linear_search(a,n,item);
}