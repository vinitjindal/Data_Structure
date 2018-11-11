#include<iostream>
using namespace std;
struct node{
     struct node *pre;
     int data;
     struct node *next;
};
int main(){
	struct node * n;
	struct node *start3,*start4;
	struct node *start2;
	struct node *start1;
	struct node *ptr1;
	struct node *ptr;
	char flag,flag1,flag2;
	int num;
	struct node * start=NULL;
	cout<<"you want to add a node"<<endl;
	cin>>flag;
	if(flag=='y'){
		n=new(struct node);
		n->pre=start;
		cin>>n->data;
		n->next=start;
		start=n;
		ptr=n;
	}do{
		cout<<"want to creat a node.."<<endl;
		cin>>flag;
		if(flag=='y'){
			n=new(struct node);
			n->pre=NULL;
			cin>>n->data;
			n->next=start;
			start->pre=n;
			start=n;
		}
	}while(flag!='n');
	start3=start;
	start2=start;
	start4=start;
	start1=start;
	while(start!=NULL){
		cout<<start->data<<endl;
		start=start->next;
	}
	cout<<"you want to add a node in end or middle";
	cin>>flag;
	if(flag=='e'){
			n=new(struct node);
			n->pre=ptr;
			cin>>n->data;
			n->next=NULL;
			ptr->next=n;
			ptr1=n;
		
			cout<<"do you want to continue.."<<endl;
		cin>>flag1;
				do{
					if(flag1=='y'){
			n=new(struct node);
			n->pre=ptr1;
			cin>>n->data;
			n->next=NULL;
			ptr1->next=n;
			cout<<"do you want to continue"<<endl;
			cin>>flag1;
			}
		}while(flag1!='n');
	
	while(start1!=NULL){
		cout<<start1->data;
		start1=start1->next;
		
	}
	}else if(flag=='m'){
		cout<<"after which element you want to add"<<endl;
		cin>>num;
		while(start2!=NULL){
            if(start2->data==num){

			n=new(struct node);
			n->pre=start2;
			cin>>n->data;
			n->next=start2->next;
			start2->next=n;
			break;
}  
 start2=start2->next;
	}
	cout<<"do you want to delete the element if yes press 'y' else 'n'";
	cin>>flag2;
	if(flag2=='y'){
		while(start4!=NULL){
		if(start4->data==num){
			start2=start4->pre;
			start2->next=start4->next;
			delete(start4);
			break;
		}
		start4=start4->next;
	}
	}
	while(start3!=NULL){
		cout<<start3->data;
		start3=start3->next;
	}
		
	}
	return 0;
}
