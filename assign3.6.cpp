#include<iostream>
using namespace std;
int main(){
	int x;
	int y;
	cout<<"enter x and y";
	cin>>x>>y;
	if(x==0) cout<<"it lies on y axis";
	else if(y==0) cout<<"it lies on x axis";
	else if(x==0 && y==0) cout<<"it lies at origin";
	else cout<<"it lies at co orinates";
}
