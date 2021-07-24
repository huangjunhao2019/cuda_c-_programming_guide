#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void bubbleSort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
void selectSort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(a[j]<a[j-1]){
                swap(a[j],a[j-1]);
            }
        }
    }
}
void print_sort(int *a,int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
int main(){
    int a[10];
    int b[10];
    int n=10;
    for(int i=0;i<n;i++){
        a[i]=n-1-i;
        b[i]=n-1-i;
    }
    bubbleSort(a,n);
    print_sort(a,n);
    selectSort(a,n);
    print_sort(a,n);
    return 0;
}