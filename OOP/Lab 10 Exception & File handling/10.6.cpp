//lab 10.6
#include<iostream>
#include<fstream>

using namespace std;

int main(){
	
	ofstream myFile("D:/prime.txt");
	
	myFile<<"File Handling in C++";
	
	myFile.close();
	
	
	
	string myText;
	
	ifstream readFile("D:/prime.txt");
	
	cout<<"The contents in this file are: \n";
	while(getline(readFile,myText)){
		cout<<myText;
	}
	
	readFile.close();
	
	return 0;
}
