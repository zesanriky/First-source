
#include <iostream>
#include <unistd.h>
#include <stdio.h>
using namespace std;


// This program works as user inputs as much given as much the output is displayed.
//Any integer number will be accepted to run the code properly.

int main()
{

int pain_in_life; // integer variable declaration
cout<< "This source code I named as code of life because I have been and will be following this code for the rest of my life and this is applicable for those who wants to shake their hands with success.\n" <<endl;

cout<<"Please enter the number of pains you can take\nRecommended to enter any integer number\n" <<endl;

cin>>pain_in_life;// taking input from the users

cout << "Efforts are being paid off \nGo to the bottom of the output to see the results \n" << endl;


for(int success_in_life=0; success_in_life < pain_in_life; success_in_life++){

cout <<success_in_life+1<<"%"<<" \n";

fflush(stdout);

sleep(1);
} // running the loop according to input along showing progress in percentage 

{cout<<"\nYour input as efforts == Your output in percentage as results"<<endl ;}
{cout<<"\nNerver give up\nSuccess is knocking at the door"<<endl ;}
          
{cout<<"\nMoral of the code-\nThe more you increase your pain in life the more get closer to your success  "<<endl ;}         

return 0; // ending the program

}

