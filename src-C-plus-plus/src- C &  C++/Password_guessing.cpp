#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
#include <unistd.h>
using namespace std;

// This software takes input as integer for guessing the forgotten passwords

int main()
{
int a[1000]; // declaring the varibales
int length;
int random;
int b[1000] = { 33 };
unsigned long long tries = 0;
bool cracked = false;

cout << "   This is a password geussing software, when you want to get access into a system you need a password, if you enter randomly any password then you will get a notification by saying - Access denied, please enter the password of x character, where x is the length of the password. \n "<<endl;

cout << "   Enter the length of the password, it will give you predicted possibilties of the password : "<<endl;

cout << "\n User input : "; 

cin >> length;//taking the user input

cout << "\n System output : "<< endl;   


cout << " \n Let me think, it could be : \n "<<endl;

int count = 0;
cout << endl << "Loading\n "<<endl;
for(count;count < 20; ++count){
cout << "|--" ;
fflush(stdout);
sleep(1);
} // running the loop for showing progress
        
        
cout << endl << "\nDone\n" <<endl;

cout << "   Here we go \n "<<endl;

srand(time(NULL));// creating random passwords
for (int i =0; i<length; i++){
do {
random = (rand()%94)+33;
}while(random==45);
a[i] = random;
 cout << char(a[i]);
}cout << endl; 

do{
b[0]++;
for(int i =0; i<length; i++){
if (b[i] >= 94 + 33){
b[i] -= 94;
b[i+1]++;
}else break; // password's length checking loop
}
cracked=true;
for(int k=0; k<length; k++)
if(b[k]!=a[k]){
cracked=false;
break;
        }
if( (tries & 0x7ffffff) == 0 )
cout << "\r       \r   ";
else if( (tries & 0x1ffffff) == 0 )
cout << ".";
tries++;
}while(cracked==false);
cout << " \n Reconfirmation of password : \n "<<endl;//rechecking the password
cout << "\r       \n";
for(int i=0; i<length; i++) // length is getting checked

cout << char (b[i]);

cout << "\n " << endl;


cout << " \nTry it out \n "<<endl;


cout << "\nI have tried to geuss it for " << tries <<" times"<< endl; // number of efforts for guessing the password

return 0;// ending the program
}
