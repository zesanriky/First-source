#include <iostream>
#include <string>
#include<ctime>
#include<cstdlib>
#include <unistd.h>

using namespace std;

// This program wroks to check the character coverrage which is given by the user


int main()
{
string password; //declaring the varibales as string types
    
string generatedPass;

cout << "Password coverage checking alphabatically, it is recommended to enter not more than 4 alphabatic small letter without special characters. " << endl;
        
 
cin >> password;// user input
    
cout << "\nAnalysis in progress " << endl;  
  
       
int count = 0;
cout << endl << "\nLoading\n "<<endl;
for(count;count < 20; ++count){
cout << " ->" ;
fflush(stdout);
sleep(1);
            
} // the loop is for showing the progress
        
cout << endl << "\nDone\n" <<endl;
        
cout << "\nGot it, please go to the bottom of the lines if you see repeating \n characters which mean it can be found in the program  \n" << endl;
  
char digitArray[]={'a'-1,'a','a','a','a','a','a','a','a','a'};//considering the characters in array


while( password.compare(generatedPass) != 0 ){

digitArray[0]++;

for(int x=0;x<password.length();x++){
if (digitArray[x] == 'z'+1)
{
digitArray[x] = 'a';
digitArray[x + 1]++;
}
} // running the loop for checking password length

// creating the string with those digits
generatedPass=digitArray[password.length()-1]; // i set the first one here

for(int i=password.length()-2  ;  i>=0  ;  i-- )
generatedPass+= digitArray[i]; // now i add other digits to next to first digit

cout << generatedPass << endl; // i put it to test how it looks
}

cout << generatedPass << endl; // gives the result


return 0; // ending the program
}

