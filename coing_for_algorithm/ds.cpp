#include<iostream>
using namespace std;
int sum(int *a,int head,int tail){
    if(tail==head){
        return a[tail];
    }
    return a[head]+sum(a,head+1,tail);
}
int main(){
    int a[5]={1,2,3,4,5};
    int result=sum(a,0,4);
    cout<<result<<endl;
    return 0;
}