//#include <QCoreApplication>
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char *argv[])
{
  ifstream readingfile("machine.tex");

  if(!readingfile) {
    cout << "File not found.\n";
    return 1;
  }

  char str[255];

  while(readingfile) {

    readingfile.getline(str, 255);  // delim defaults to '\n'
    if(readingfile) cout << str << endl;
  }

  readingfile.close();

  return 0;
 }


