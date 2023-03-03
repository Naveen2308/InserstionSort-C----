#include<iostream>
using namespace std;
void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int j=i-1;
        for(;j>=0 && a[j]>curr;j--){
            
                a[j+1]=a[j];
            
        }
        a[j+1]=curr;
    }
}
void display(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int n;
    int a[100];
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"your array is"<<endl;
    display(a,n);
    insertionsort(a,n);
    cout<<"your array after sorted"<<endl;
    display(a,n);
}