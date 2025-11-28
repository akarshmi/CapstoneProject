#include <iostream>
#include <fstream>
using namespace std;

void CreateFile(){

    string text;
    ofstream file;
    file.open("../CPP/File.txt");
    cout<<"Writing to the file"<<endl;
    cout<<"Enter the text of the file:- "<<endl;

    cin.getline(text,100);
}