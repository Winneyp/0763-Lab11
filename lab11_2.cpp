#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    string boom;
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------"<<endl;
	while (getline(source,boom)){
	    dest << boom << endl;
	}
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
