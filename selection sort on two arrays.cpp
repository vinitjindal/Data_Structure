//to implement merging of two arrays and sorting it
#include<iostream>
using namespace std;
int main(){
	int m,n,a1[m],a2[n],a3[m+n],j=0,k=0;
	cout<<"enter the size of two arrays"<<endl;
	cin>>m>>n;
	cout<<"enter the emlements of first array"<<endl;
	for(int i=0;i<m;i++){
		cin>>a1[i];
	}
		cout<<"enter the emlements of second array"<<endl;
	for(int i=0;i<n;i++){
		cin>>a2[i];
	}
	for(int i=0;i<m;i++)
	{
		int a=a1[i],a11;
		for(int j=i+1;j<m;j++)
		{
			if(a1[j]<=a)
			{
				a=a1[j];
				a11=j;
			}
		}
		int temp=a1[i];
		a1[i]=a1[a11];
		a1[a11]=temp;
	}
	for(int i=0;i<n;i++)
	{
		int a=a2[i],a11;
		for(int j=i+1;j<n;j++)
		{
			if(a2[j]<=a)
			{
				a=a2[j];
				a11=j;
			}
		}
		int temp=a2[i];
		a2[i]=a2[a11];
		a2[a11]=temp;
	}
	cout<<"sorted array after selection sort is "<<endl;
	for(int i=0;i<m;i++){
		cout<<a1[i];
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		cout<<a2[i];
	}
	
}
