#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	int x=(int)ch;
	if(x>=97&&x<=122 || x>=65&& x<=90){
		cout<<"alphabet";
	}else if(x>=48&&x<=57){
		cout<<"it is a digit";
	}else cout<<"special character";
}
