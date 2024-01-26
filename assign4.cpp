#include<iostream>
using namespace std;
int main(){
	int amount;
    int	n2,n5,n10,n20,n50,n100,n200,n500,n2000;
    n2=n5=n10=n20=n50=n100=n200=n500=n2000=0;
	cin>>amount;
	switch(amount>=2000){
		case 1:
		n2000+=amount/2000;
		amount-=n2000*2000;//if 3000 rs then first in n2000 the amount/2000 means the total amount when reduced by dividing to 2000
		// will be 3000/2000=1 so the n2000 will be 1.    then,the total amount will be reduced by multiplying n2000*2000.
	    cout<<"total 2000 note is"<<n2000;
		break;
	}
	switch(amount>=500){
		case 1:
		n500+=amount/500;
		amount-=n500*500;
		cout<<"total 500 note is"<<n500;
		break;
	}
	switch(amount>=200){
		case 1:
		n200+=amount/200;
		amount-=n200*200;
	    cout<<"total 200 note is"<<n200;
		break;
	}
	switch(amount>=100){
		case 1:
		n100+=amount/100;
		amount-=n100*100;
		cout<<"total 100 note is"<<n100;
		break;
	}
	switch(amount>=50){
		case 1:
		n50+=amount/50;
		amount-=n50*50;
		cout<<"total 50 note is"<<n50;
		break;
	}
	switch(amount>=20){
		case 1:
		n20+=amount/20;
		amount-=n20*20;
		cout<<"total 20 note is"<<n20;
		break;
	}
}
