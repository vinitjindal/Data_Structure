// conversion of infix to postfix
#include<stack>
#include<cstring>
#include<iostream>
using namespace std;
int priority(char p){
	if(p=='+' || p=='-')
	return 1;
	else if(p=='/' || p=='*')
	return 2;
	else if(p=='^')
	return 3; 
	else 
	return 0;
	 
}
int main(){
	string s="";
	stack <char> op;
	string p="1+2*(3^4-5)^(6+7*8)-9";
	int k=-1;
	for(int i=0;p[i]!='\0';++i){
		if(isdigit(p[i])){
			s+=p[i];
		}
		else{
			if(op.empty()){
				op.push(p[i]);
			}else{
				if(p[i]=='('){
					op.push(p[i]);
				
				}
			    else if(p[i]==')'){
					 while(op.top()!='('){
					    s+=op.top();
		                   op.pop(); 
					 }
					 op.pop();
				}
				else{
					while(priority(p[i])<=priority(op.top())){
					
					s+=op.top();
					 op.pop();
					
						if(op.empty()){
							break;
						}
					}
					op.push(p[i]);
				}
			}
		}
	}
	while(!op.empty()){
		s+=op.top();
	op.pop();
	}
	
	cout<<s;
	return 0;
}
