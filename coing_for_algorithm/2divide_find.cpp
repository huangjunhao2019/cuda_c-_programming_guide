#include<iostream>
using namespace std;
int find(int *a,int aim,int left,int right){
 //   int med=0;
    while(left<=right){
        int mid=left+right/2;
        if(aim==a[mid])
            return mid;
        else if(aim<a[mid]){
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return -1;
}
int find_di(int *a,int aim,int left,int right){
    if(left==right){
        if(a[left]==aim)
            return left;
        else
            return -1;
    }
    int mid=left+right/2;
    if(aim==a[mid])
        return mid;
    else if(aim<a[mid])
        return find_di(a,aim,left,mid-1);
    else
    {
        return find_di(a,aim,mid+1,right);
    }
    
    
}
int main(){
    int a[]={2,5,8,9,11};
    int result=find(a,3,0,4);
    int result_di=find_di(a,8,0,4);
    cout<<result_di<<endl;
    cout<<result<<endl;
    return 0;
}