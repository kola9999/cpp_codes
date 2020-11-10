#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int num,n;
    int k=0;
    cout<<"enter number of pyramids:";
    cin>>num;
    while(num!=0){
    cout<<"enter number of steps:";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            k++;
            cout<<k;
            cout<<" ";
        }
        cout<<endl;
    }
    num--;
}
return 0;
}
