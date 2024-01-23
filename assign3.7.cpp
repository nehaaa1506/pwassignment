#include<iostream>
using namespace std;
int main(){
	float x1,x2,x3,y1,y2,y3;
	cin>>x1>>x2>>x3>>y1>>y2>>y3;
	float a=(y2-y1)/(x2-x1);
	float b=(y3-y2)/(x2-x1);
	if(a==b)cout<<"collinear";
	else cout<<"not collinear";
}
