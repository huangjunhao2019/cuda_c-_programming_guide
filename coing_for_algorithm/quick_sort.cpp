#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void quick_sort(int *a,int left,int right){
 //   cout<<a[left]<<" "<<a[right]<<endl;
    if(left>=right)
        return;
    if(right-left==1){
        if(a[left]>a[right])
            swap(a[left],a[right]);
        return ;
    }
    int temp=a[left];
    int left_i=left;
    int right_j=right;
    while(left_i<right_j){
        while(left_i<right_j && a[right_j]>=temp){
            right_j--;
        }
        
       a[left_i]=a[right_j];
        while(left_i<right_j && a[left_i]<=temp){
            left_i++;
        }
        a[right_j]=a[left_i];
    }
    a[left_i]=temp;
    quick_sort(a,left,left_i-1);
    quick_sort(a,left_i+1,right);
}
int main(){
    int a[]={5,4,3,2,1};
 //   cout<<a[0]<<" "<<a[4]<<endl;
 //   return 0;
    quick_sort(a,0,4);
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    return 0;
}