// implement linear  search
#include<iostream>
using namespace std;
int main(){
	int n,a,arr[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element to find";
	cin>>a;
	for(int i=0;i<n;i++){
		if(a==arr[i]){
			cout<<"yes,it's there";
		break;
		}
		else{
			cout<<"no";
			break;
		}
	 
	}
	
	
}
