#include <iostream>
using namespace std;
struct Person{
	int toes;
	int knees;
	int shoulder;
	int head;
}; 
int main(){
	Person person;
	for (int i;i<5;i++){
	cout << "Person number " << (i+1) << endl;
	cout << "Person's toes:" << endl;
	cin >> person.toes;
	cout << "Person's knees:" << endl;
	cin >> person.knees;
	cout << "Person's shoulder:" << endl;
	cin >> person.shoulder;
	cout << "Person's head:" << endl;
	cin >> person.head;
	cout <<"Toes: " << person.toes << endl;
	cout <<"knees: " << person.knees << endl;
	cout <<"shoulder: " << person.shoulder << endl;
	cout << "head: " <<person.head << endl;
	system("pause"); 
	system("CLS"); 
}
	return 0;
}

	
