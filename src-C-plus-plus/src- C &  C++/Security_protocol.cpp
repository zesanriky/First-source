#include <iostream>
#include <ctime>
#include <string>
#include <bits/stdc++.h>
#include <time.h>
#include <unistd.h>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <iomanip>
using namespace std;

// common starts with demo software
// This software's working principle is checking the hidden password  
string crackPassword(string pass); //declaring the variables
long long int attempt;
clock_t start_t, end_t;
int main(){
string str1 = "zesan";//defining fixed password
string str2 = "check-security-protocol";//setting the string to check the protocol.
string p ;
w:{
  cout << "The functionality of this software is defining a certain password what is consisted by small, capital letters or numbers, maximum 39 characters can be chosen but in that case protocol check may take long time so ideal is 6 characters, here 5 characters are chosen for quick respnose and becomes hidden e.g. ******, then checking its protocol by typing command “check-security-protocol” to know what is the hidden password and check if the user followed the protocol instruction.\n"<<endl; 
cout << "Enter the defined password ‘zesan’ \n"<<endl;
getline(cin, p);// user input
if(p != str1)
{
cout << "\nRequest is in progress..........\n"<<endl;

sleep(5);
cout << "\nAccess Denied\n"<<endl;// if input is not matched 
goto w;
}
else if(str1=="zesan")
{
cout << "\nRequest is in progress..........\n"<<endl;

sleep(5);
cout<<"\nAccess Granted\n"<<endl; // if input is matched
}
o:{  
cout << "\n Type command 'check-security-protocol' \n\n";
getline(cin, p);// input to check the hidden password
if(p != str2)
{
cout << "\nAccess Denied\n"<<endl;//// if input not matched
goto o;
}
else if(str2=="check-security-protocol")
{
cout<<"\n Protocol Initialized..........\n"<<endl;// if input is matched
sleep(5); 
}
double dStart=clock();    // time count
const char HIDING_CHARACTER = '*'; //this is the character that will be used to hide characters
const string password = "zesan"; // hiding the character
//setfill specify which character should fill unused space of a column.By default it filled by ' '
cout << setfill(HIDING_CHARACTER);
//setw() create a column of width password.length() characters and all the places are filled with HIDING_CHARACTER
cout << "Your hidden password is "<< setw(password.length()) << HIDING_CHARACTER << endl;
cout << " "<<endl;
cout  << " Please wait protocol checking is in progress.........." << "\n"<<endl;
int count = 10;
for(count;count < 110; count+=10){
cout <<"\n"<<count<<"%"<<endl<<" ";
fflush(stdout);

sleep(5); // this loop is for showing progress 
}
cout << endl << "Done\n" <<endl;
cout << " Congratulation ! Security checking is successful  " << "\n"<<endl;

// common ends with demo software

sleep(5); // wait to show success 
cout <<crackPassword(password) << "\n"<<endl;  // calling crackPassword function
         //time calcualtion
double dDuration=clock()-dStart;
cout<<"Time estimation\n"<<endl;
cout<<dDuration/CLOCKS_PER_SEC<<"sec\n\n"<<endl; // time calculation 

cout<<" Program terminated"<<endl; 



// Keylogger and Virus considering
//Upcoming
// Ending Key logger and  Virus code 

return 0;
}
}}
string crackPassword(string pass){
int digit[7], alphabetSet = 1, passwordLength = 1; // defining the function
string test, alphabet = "1337 also daktari is pro";
while (1){
switch (passwordLength){
  case 1:
// checking if the password length is less then 4 characters
//considering digit [0]          
while (alphabetSet<4){
  switch (alphabetSet){
  case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl<< endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
  }  
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;        
case 2:            
// checking if the password length is less then 6 characters and 
// considering digits [1] & [0]            
alphabetSet = 1;
while (alphabetSet<6){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl<< endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
}
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;  
}
break;
case 3:        
// checking if the password length is less then 8 characters
// considering digits [2], [1] & [0]        
alphabetSet = 1;
while (alphabetSet<8){
  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase character(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 4:        
// checking if the password length is less then 8 characters 
// considering digits [3] [2], [1] & [0]        
alphabetSet = 1;
while (alphabetSet<8){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;                    
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;                    
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;                    
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;                    
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;                    
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;  
}
break;
case 5:        
// checking if the password length is less then 10 characters 
// considering digits [4], [3] [2], [1] & [0]        
alphabetSet = 1;
while (alphabetSet<10){
    switch (alphabetSet){                
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;

case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){  
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;
case 6:        
// checking if the password length is less then 12 characters 
// considering digits [5], [4], [3] [2], [1] & [0]
alphabetSet = 1;
while (alphabetSet<12){  
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"; 
break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;                    
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;
case 7:        
// checking if the password length is less then 14 characters 
// considering digits [6], [5], [4], [3] [2], [1] & [0] 
        
alphabetSet = 1;
while (alphabetSet<14){
  switch (alphabetSet){
  case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;                    
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait";  break;                    
}
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }  
}
alphabetSet++;
}
break;
case 8:        
// checking if the password length is less then 16 characters 
// considering digits  [7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<16){
  switch (alphabetSet){
  case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;

case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 9:
// checking if the password length is less then 18 characters 
// considering digits  [8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<18){  
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;

case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;             
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 10:        
// checking if the password length is less then 20 characters 
// considering digits  [9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<20){
  switch (alphabetSet){
  case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;                    
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;                    
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;                    
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;                    
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;                    
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;                    
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}break;            
case 11:        
// checking if the password length is less then 22 characters 
// considering digits  [10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<22){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;                    
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
 case 12:        
// checking if the password length is less then 24 characters 
// considering digits  [11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<24){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;                    
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
                    cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;                   
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 13:        
// checking if the password length is less then 26 characters 
// considering digits  [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<26){  
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;                    
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;                    
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 14:        
// checking if the password length is less then 28 characters 
// considering digits [13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<28){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;                    
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 15:        
// checking if the password length is less then 30 characters 
 // considering digits [14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<30){  
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;

case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
 }                
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;            
case 16:        
// checking if the password length is less then 32 characters 
// considering digits [15],[14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<32){  
switch (alphabetSet){  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;

case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[15] = 0; digit[15]<alphabet.length(); digit[15]++) 
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++; 
}
break;            
case 17:        
// checking if the password length is less then 34 characters 
// considering digits [16],[15],[14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<34){ 
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;

case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[16] = 0; digit[16]<alphabet.length(); digit[16]++) 
for (digit[15] = 0; digit[15]<alphabet.length(); digit[15]++) 
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break;             
case 18:        
// checking if the password length is less then 36 characters 
// considering digits [17],[16],[15],[14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0] 
alphabetSet = 1;
while (alphabetSet<36){              
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;  
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;  
}                
for (digit[17] = 0; digit[17]<alphabet.length(); digit[17]++) 
for (digit[16] = 0; digit[16]<alphabet.length(); digit[16]++) 
for (digit[15] = 0; digit[15]<alphabet.length(); digit[15]++)
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break; 
case 19:        
// checking if the password length is less then 38 characters 
// considering digits [18],[17],[16],[15],[14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<38){  
switch (alphabetSet){                  
case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;

case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}                
for (digit[18] = 0; digit[18]<alphabet.length(); digit[18]++) 
for (digit[17] = 0; digit[17]<alphabet.length(); digit[17]++) 
for (digit[16] = 0; digit[16]<alphabet.length(); digit[16]++) 
for (digit[15] = 0; digit[15]<alphabet.length(); digit[15]++) 
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }                
}
alphabetSet++;
}            
break;             
case 20:        
// checking if the password length is less then 40 characters 
// considering digits [19],[18],[17],[16],[15],[14],[13], [12],[11],[10],[9],[8],[7],[6], [5], [4], [3] [2], [1] & [0]         
alphabetSet = 1;
while (alphabetSet<40){  
switch (alphabetSet){
  case 1: alphabet = "-0123456789";
cout << endl << endl << "Testing only digits(0123456789) - 10 Characters, please wait"<<endl;  break;
case 2: alphabet = "-abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only lowercase characters(abcdefghijklmnopqrstuvwxyz) - 26 Characters, please wait"<<endl;  break;
case 3: alphabet = "-ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing only uppercase characters(ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 26 Characters, please wait"<<endl;  break;
case 4: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyz";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyz) - 36 Characters, please wait"<<endl;  break;
case 5: alphabet = "-0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing uppercase characters and numbers(0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ) - 36 Characters, please wait"<<endl;  break;
case 6: alphabet = "-abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters(abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 52 Characters, please wait"<<endl;  break;
case 7: alphabet = "-0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << endl << endl << "Couldn't find the password, increasing the searching level." << endl << endl << "Testing lowercase, uppercase characters and numbers(0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ) - 62 Characters, please wait"<<endl;  break;
}
for (digit[19] = 0; digit[19]<alphabet.length(); digit[19]++) 
for (digit[18] = 0; digit[18]<alphabet.length(); digit[18]++) 
for (digit[17] = 0; digit[17]<alphabet.length(); digit[17]++) 
for (digit[16] = 0; digit[16]<alphabet.length(); digit[16]++) 
for (digit[15] = 0; digit[15]<alphabet.length(); digit[15]++) 
for (digit[14] = 0; digit[14]<alphabet.length(); digit[14]++) 
for (digit[13] = 0; digit[13]<alphabet.length(); digit[13]++)
for (digit[12] = 0; digit[12]<alphabet.length(); digit[12]++)
for (digit[11] = 0; digit[11]<alphabet.length(); digit[11]++)
for (digit[10] = 0; digit[10]<alphabet.length(); digit[10]++)
for (digit[9] = 0; digit[9]<alphabet.length(); digit[9]++)
for (digit[8] = 0; digit[8]<alphabet.length(); digit[8]++)
for (digit[7] = 0; digit[7]<alphabet.length(); digit[7]++)
for (digit[6] = 0; digit[6]<alphabet.length(); digit[6]++)
for (digit[5] = 0; digit[5]<alphabet.length(); digit[5]++)
for (digit[4] = 0; digit[4]<alphabet.length(); digit[4]++)
for (digit[3] = 0; digit[3]<alphabet.length(); digit[3]++)
for (digit[2] = 0; digit[2]<alphabet.length(); digit[2]++)
for (digit[1] = 0; digit[1]<alphabet.length(); digit[1]++)
for (digit[0] = 1; digit[0]<alphabet.length(); digit[0]++){
attempt++;
if (attempt % 2500000 == 0) cout << ".";
test = alphabet[digit[0]];
for (int i = 1; i<passwordLength; i++)
if (alphabet[digit[i]] != '-')test += alphabet[digit[i]];
if (pass.compare(test) == 0){ end_t = clock(); return test; }
}
alphabetSet++;
}
break; 

// ending case checking                
}
cout << endl << endl << endl << endl << "*" << endl;
cout << "*** Password length is not " << passwordLength << ". Increasing password length! ***";
cout << endl << "*" << endl << endl;
passwordLength++; // increamenting the powerword length        
}} // ending the function's definition
