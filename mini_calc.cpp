#include<iostream>
using namespace std;

int get_sum(int x, int y){
	return x+y;
}
int get_difference(int x, int y){
	return x-y;
}

int get_product(int x, int y){
	return x*y;
}
int get_quotient(int x, int y){
	return x/y;
}

int main(){
	int x, y;
	
	cout<<"Enter num 1: ";
	cin>>x;
	cout<<"Enter num 2: ";
	cin>>y;
	
	cout<<"Sum is: "<<get_sum(x, y)<<endl;
	cout<<"Difference is: "<<get_difference(x,y)<<endl;
	cout<<"Product is: "<<get_product(x,y)<<endl;
	cout<<"Quotient is: "<<get_quotient( x,y);
	
	return 0;
}
