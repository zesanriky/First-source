//#include <QCoreApplication>
#include<iostream>
#include<cmath>
#include<curses.h>
#include <ctype.h>
#include <string.h>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <limits>



using namespace std;

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);

    int i=0;
    char t,T;
    float q, b, p, x1, x2, determinant, realPart, imaginaryPart;

    //Find which letter the user has supplied and print out the corrrect callsign
    //Allow for upper and lowercase letters
    char c,w;
    char choice;
    do{
        cout << "Please press R or r to set up the coefficients "<<endl;
        cin >> choice;
         std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    }while(choice != 'R' && choice != 'r');
    cout << "Please input 3 coefficients ";
    while (!(std::cin >> q>>b>>p)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
        std::cout << "Enter valid numbers\n";
    }
    {
        // Checking validation of C or c
        char C,c,w;
        char choice;
        {
            do{
                cout << "Please press C or c to start calculation"<<endl;
                cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
                cin >> choice;
            }while(choice != 'C' && choice != 'c');
            cout << "Equation will be calculated ";}
        {

            //
            char choice;
            do{
                cout << "Please press W or w to make the program in waiting "<<endl;
                cin.ignore();
                cin >> choice;
            }while(choice != 'W' && choice != 'w');

            cout<<"The program is waiting"<<endl;
            sleep(10);
            determinant = b*b - 4*q*p;

            if (determinant > 0) {
                x1 = (-b + sqrt(determinant)) / (2*q);
                x2 = (-b - sqrt(determinant)) / (2*q);
                cout << "Roots are real and different." << endl;
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }

            else if (determinant == 0) {
                cout << "Roots are real and same." << endl;
                x1 = (-b + sqrt(determinant)) / (2*q);
                cout << "x1 = x2 =" << x1 << endl;
            }

            else {
                realPart = -b/(2*q);
                imaginaryPart =sqrt(-determinant)/(2*q);
                cout << "Roots are complex and different."  << endl;
                cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
                cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;

                {char t,T,myChar;
                    char choice;
                    do{
                        cout << "Please press T or t to terminate the program"<<endl;
                        cin.ignore();
                        cin >> choice;
                    }while(choice != 'T' && choice != 't');}

                cout<<" The program is reminated"<<endl;

                return 0 ;


            }}}}
