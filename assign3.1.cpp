#include<iostream>
using namespace std;
int main(){
	int r;
	float pi=3.14;
	float area;
	float circum;
	cin>>r;
	area=pi*r*r;
	circum=2*pi*r;
	if (area>circum){
		cout<<"area is larger";
	} else cout<<"circum is greatest";
}
