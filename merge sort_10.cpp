#include<iostream>
using namespace std;
void merge(int arr1[],int p,int m,int r){
	int n1=m-p+1,j=1,k=1;
	int l[n1];
	int n2=r-m;
	int r1[n2];
	for(int i=1;i<=n1;i++){
		l[i]=arr1[p+i-1];
	//	cout<<"l[i]="<<l[i]<<endl;
	}
	for(int i=1;i<=n2;i++){
		r1[i]=arr1[m+i];
	//	cout<<"r1[i]="<<r1[i]<<endl;
	}
	for(int i=p;i<=r;i++){
		if(j<=n1){
			if(k<=n2){
				if(l[j]<=r1[k]){
					arr1[i]=l[j];
					j++;
				}else{
					arr1[i]=r1[k];
			        k++;
				}
			}else{
				arr1[i]=l[j];
				j++;
			}
		}else{
			arr1[i]=r1[k];
			k++;
		}
		//cout<<endl<<arr1[i]<<endl;
	}	
}
void mergesort(int arr1[],int l,int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(arr1,l,m);
		mergesort(arr1,m+1,r);
	    merge(arr1,l,m,r);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	mergesort(arr,1,n);
	cout<<":::::::::::::"<<endl;
		for(int i=1;i<=n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
} 
