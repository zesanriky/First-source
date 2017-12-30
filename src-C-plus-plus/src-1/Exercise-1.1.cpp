//#include <QCoreApplication>
#include<iostream>
#include <string>
#include <vector>
#include<limits>

using namespace std;

int ReadNumberFromConsole()
{
    // Reads an integer from command line
    int nNumber;
    cin.clear();
    cin >> nNumber;
    return nNumber;
}

int main(int argc, char *argv[])
{
   // QCoreApplication a(argc, argv);

    int iNum1,iNum2,product,pproduct,qproduct,qqproduct,div,mdiv;

    float realdiv,rdiv1,rdiv2;

    bool bfail;
    do
    {
        cin.clear();
        cout << "Pick your first Natural number between 32 and 127: "<<flush;

        while (true)
        {
            //cin >>  iNum1;
            iNum1 = ReadNumberFromConsole();
            if ((cin) && (iNum1 >= 32) && (iNum1 <= 127))

                break;

            cin.clear();
            cin.ignore( 1000, '\n' );
            cout << "Hey, follow instructions please: " << flush;
        }

        cout << "Good job!\nYou entered the number '" << iNum1 << "'.\n";
        product=iNum1*2;
        cout<<"your multiplication for first unmber using * is "<<" "<<product<<endl;

        pproduct=iNum1<<1;

        cout << "your multiplication for first unmber  unmber  using << is "<<" "<<pproduct<<endl;

        cout << " has the ASCII code"<<" "<< static_cast<char>(iNum1)<< endl;

        bfail=cin.fail();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');



    } while (bfail==true);
    do
    {
        cin.clear();
        cout << "Pick your second Natural number between 32 and 127: ";

        while (true)
        {
            cin >>  iNum2;

            if ((cin) && (iNum2 >= 32) && (iNum2 <= 127))

                break;

            cin.clear();
            cin.ignore( 1000, '\n' );
            cout << "Hey, follow instructions please: " << flush;
        }
        cout << "Good job!\nYou entered the number '" << iNum2 << "'.\n";
        cout << " has the ASCII code"<< " "<<static_cast<char>(iNum2)<< endl;

        qproduct=iNum2*2;
        cout<<"your multiplication for second number using * is "<<" "<<qproduct<<endl;

        qqproduct = iNum2 << 1;

        cout<<"your multiplication for second number using  << is "<<" "<<qqproduct<<endl;

        div= iNum1/iNum2;
        cout << "your  regular division is "<<" "<<div<<endl;

        mdiv= iNum1%iNum2;

        cout << "your module division is "<<" "<<mdiv<<endl;

        realdiv=rdiv1/ rdiv2;

        cout << "your real number division is "<<" "<<realdiv<<endl;


        bfail=cin.fail();
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');

    }while (bfail==true);


    return 0;}

