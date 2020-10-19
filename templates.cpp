#include <iostream>
using namespace std;
template <class S>
void bubble(S a[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
}
template <class T>
void swap(T &x,T &y){
    T temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int i,j,a[5]={25,2,56,4,34};
    float p[5]={25.25,3.45,4.2,20.5,5.8};
    cout.precision(2);
    cout<<"Original integer array a: ";
    for(i=0;i<5;i++)
    cout<<a[i]<<" ";
    cout<<"\nOriginal float array b: ";
    for(i=0;i<5;i++)
    cout<<p[i]<<" ";
    bubble(a,5);
    bubble(p,5);
    cout<<"\nSorted integer array a: ";
    for(i=0;i<5;i++)
    cout<<a[i]<<" ";
    cout<<"\nSorted float array b: ";
    for(i=0;i<5;i++)
    cout<<p[i]<<" ";
}