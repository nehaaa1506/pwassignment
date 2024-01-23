#include<iostream>
using namespace std;
int main(){
	int a;
	int b;
	int c;
	cin>>a>>b>>c;
	if(a==b&&b==c){
		cout<<"it is a equilateral triangle";
		
	}else if (a==b||b==c||c==a){
		cout<<"isoscalene";
		
	}
	else if(a!=b||b!=c||c!=a)cout<<"scalene";
}
