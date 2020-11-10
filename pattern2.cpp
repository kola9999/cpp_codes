#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter number of pyramids:";
	cin>>num;
	int n;
	while(num!=0){
	cout<<"enter number of steps:";
    cin>>n;
    int k=1;
    for(int i=1;i<=n;i++,k=0){
    for(int j=1;j<=n-i;j++){
    	cout<<" ";
	}
	for(k=0;k<(2*i-1);k++){
    	cout<<"*";
	}
	cout<<endl;
}
num--;
	}
	return 0;	
}
