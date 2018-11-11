#include<iostream>
using namespace std;
int main(){
	char x1;
	cout<<"what do you want to do: insertion 'i',deletion 'd' or updation 'u'";
	cin>>x1;
	if(x1=='i'){
		int x,arr[x+1],n,a;
	cout<<"enter the size of array"<<endl;
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	cout<<"enter the position and value"<<endl;
	cin>>n>>a;
	 for(int i=x-1;i>=n;i--){
	 	arr[i+1]=arr[i];
	 }
	 arr[n]=a;
	 for(int i=0;i<x+1;i++){
	 	cout<<arr[i];
	 }
}else if(x1=='d'){
	 	int n,arr[n],x,x1,x3=1,flag=0;
	 	cout<<"enter the size of array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the value to delete"<<endl;
	cin>>x;
	while(x3!=0){
		flag=0;
	for(int i=0;i<n;i++){
		if(x==arr[i]){
		x1=i;
		flag=1;
		break;	
		}
	}
		if(flag==1){
			for(int i=x1;i<n-1;i++){
		arr[i]=arr[i+1];
	}
	n--;
	}
	else{
		x3=0;
	}
}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}else{
	int n,arr[n],x,x1;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the new value and older value"<<endl;
	cin>>x>>x1;
	for(int i=0;i<n;i++){
		if(arr[i]==x1){
			arr[i]=x;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}

return 0;
}
