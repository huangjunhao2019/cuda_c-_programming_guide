#include<iostream>
using namespace std;
int find_max(int *a,int head,int tail){
    if(tail==head)
        return a[head];
    return max(a[head],find_max(a,head+1,tail));
}

int main(){
    int a[4]={2,1,4,3};
    int result=find_max(a,0,3);
    cout<<result<<endl;
    return 0;
}