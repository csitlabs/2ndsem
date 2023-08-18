#include<iostream>
using namespace std;
int main() {
	int sales;
	float amount, commission;
	cout<<"Enter sales amount: ";
	cin>>sales;
	if (sales <= 10000) {
		commission = 0.001;
	}
	else if (sales > 10000 && sales <= 100000){
		commission = 0.04;
	}
	else if (sales > 100000 && sales  <= 500000){
		commission = 0.03;
	}
	else if (sales > 500000 && sales <= 1000000){
		commission = 0.01;
	}
	else {
		commission = 0.005;
	}
	amount = commission * sales;
	cout <<"The commission amount is: " << amount;
	return 0;
}
