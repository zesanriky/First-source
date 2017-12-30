//#include <QCoreApplication>
#include <cstdio>
#include <cstdlib>
#include<iostream>
#include<iomanip>

using  namespace std;

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);

    float num1;

       cout << "To buy a ticket please insert 3 Euros in cash or coins: ";
       cin >> num1;

       char op;
       cout << "Enter a digit \n press 1 if insert below 3,press 4 if insert above 3,press 5 if insert 3, : ";
       cin >> op;

      int const num2=3;

       int answer, answer1;

               char num3;

       if (op == '1'){

           answer = num2 - num1;
           cout << "Still remaining " << answer <<setw(8)<<"Euros:";

           cin >> num3;

           if (num3 =='1'||num3 =='2' )

               cout<< "Take your ticket & have a safe journey"<<endl;

        }else {
           if (op == '4'){
               answer1 = num1 - num2;
               cout << "Take your change  " << answer1 <<setw(8)<<"Euros"<<"\n"<<"and have a pleasent journey "<<endl;
           } else {
               if (op == '5'){

                   cout <<  "Collect your ticket,wishing you nice journey "<< endl;
               }}}



    return true;
}
