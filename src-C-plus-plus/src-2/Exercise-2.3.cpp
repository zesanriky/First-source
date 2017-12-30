
//#include <QCoreApplication>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <ostream>
#include <time.h>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>
 #include <unistd.h>

using namespace std;

class employee
    {
public:
    employee(){

        name;salary;}

      void works()
      {

         cout<<"Name and salary"<<endl;}

      void reports()
      {

           // Empty
      }
      private:

      double salary ;
      char name;
};
class manager:public employee
{

private:
    double salary;

  public:

      manager()

      {
        salary=10.000;

      }

    void reports()
    {

        cout<<"The manager reports to the CEO"<<endl;}
};

class department {

                public:
                  string name;
                  string meeting;

                 void reports();

                 };
class marketing:public department

{
private:

 string meeting;
 string reports;
public:

 marketing()
 {

     meeting="Wednesday";
     reports="Executive department";
 }};

class Chiefofmarketing:public manager,public marketing

{
public:

    Chiefofmarketing(const std::string & chiefofmarketing): chiefofmarketing_(chiefofmarketing)
         { }

          void report(){
              cout << chiefofmarketing_ << endl;
          }
      private:
          std::string chiefofmarketing_;

};

int main(int argc, char *argv[])
{
  //  QApplication a(argc, argv);

    // QCoreApplication a(argc, argv);

   employee printworks;

    Chiefofmarketing s1("Executive department");



       printworks.works();

   manager rtoceo;

         rtoceo.reports();

           s1.report();

    return 0;
}

