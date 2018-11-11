#include<iostream>
using namespace std;
void maxheapy(int arr[],int n,int n1){
	int temp=arr[n],j=2*n;
	while(j<=n1){
		if(j<n1 && arr[j]<arr[j+1]){
			j=j+1; 
		}if(temp>arr[j]){
			break;
		}else if(temp<=arr[j]){
			arr[j/2]=arr[j];
			j=j*2;
		}
	}
	arr[j/2]=temp;
}
void maxheap(int arr[],int n){
	for(int i=n/2;i>=1;i--){
		maxheapy(arr,i,n);
	}
}
void heapsort(int arr[],int n){
	int temp;
	for(int i=n;i>=2;i--){
		temp=arr[i];
		arr[i]=arr[1];
		arr[1]=temp;
		maxheapy(arr,1,i-1);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	maxheap(arr,n);
		for(int i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
	heapsort(arr,n);
	cout<<"::::::::"<<endl;
		for(int i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
