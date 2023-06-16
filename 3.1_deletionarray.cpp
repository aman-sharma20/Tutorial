 // delete from end
 #include<iostream>
using namespace std;
 void delete_at_last(int a[],int& n);

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
    
    delete_at_last(a,n);
cout<<"your new array  after deletion from last"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
}

}
void delete_at_last(int a[],int& n){
    a[n-1]=a[n];
    
    n--;
}

