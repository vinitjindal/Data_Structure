// implement binary search
#include<iostream>
using namespace std;
int main(){
	int n,a,arr[n],l,u,mid,flag=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the element to find";
	cin>>a;
	l=0,u=n-1;
	mid=(l+u)/2;
	while(l<=u){
		 
		if(a==arr[mid]){
			flag=0;
			cout<<"yes,it's there";
			break;
		}else if(a>arr[mid]){
			l=mid+1;
			
		}else{
			u=mid-1;
		}
		mid=(l+u)/2;
	}
 
	
}
