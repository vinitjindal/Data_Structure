#include<iostream>
using namespace std;
struct node{
	int data;
	node *ptr;
};
int main(){
	struct node *n,*start=NULL;
	char flag;
	int n1;
	cout<<"enter the size of stack"<<endl;
	cin>>n1;
	for(int i=0;i<n1;i++){
		n=new node;
		cout<<"enter the element"<<endl;
		cin>>n->data;
		n->ptr=start;
		start=n;
	}
	cout<<"for deleting the element press 'd' else 'e' for exit"<<;
	cin>>flag;
	if(flag=='d'){
		while(flag=='d'){
		start=start->ptr;
		cout<<"its deleted and to again delete press 'd'";
		cin>>flag;
	}
	}else{
		while(start!=NULL){
		cout<<start->data;
		start=start->ptr;
	}
	}
	cout<<" and Top element is.."<<endl;
	cout<<start->data;
	cout<<"now remaining list is.."<<endl;
	while(start!=NULL){
		cout<<start->data;
		start=start->ptr;
	}
	return 0;
}
