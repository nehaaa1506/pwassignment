#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	if(a>b&&b<c){
		cout<<"b is scored least ";
		
	}
	else if(a<b&&a<c){
		cout<<"a scored the least";
		
	}else cout<<"c scored the least";
}
