#include<iostream>
using namespace std;
int main(){
	int l;
	int b;
	float area;
	float peri;
	cin>>l>>b;
	area=l*b;
	
	peri=2*(l+b);
	if (area>peri){
		cout<<"area is larger";
	} else cout<<"peri is greatest";
}
