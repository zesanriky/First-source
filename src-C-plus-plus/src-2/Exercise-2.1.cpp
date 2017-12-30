
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

//void use_vector()
//{

  //std::ifstream source("fruit.bmp", std::ios::binary);
  //std::vector<char> vec((std::istreambuf_iterator<char>(source)),
    //                     std::istreambuf_iterator<char>());

      // for(unsigned int i = 54; i <vec.size(); i++)
        //          vec[i] = 255-vec[i];



          //ofstream fout("data.dat", ios::out | ios::binary);
           //fout.write((char*)&vec[0], vec.size() * sizeof(char));
           //fout.close();}

void USE_CHARACTER_ARRAY(char array[]);

void USE_CHARACTER_ARRAY(char array[]) {

    std::ifstream source("fruit.bmp", std::ios::binary);
  std::vector<char> vec((std::istreambuf_iterator<char>(source)),
                         std::istreambuf_iterator<char>());

       for(unsigned int i = 54; i <vec.size(); i++)
                  vec[i] = 255-vec[i];

          ofstream fout("charr.dat", ios::out | ios::binary);
           fout.write((char*)&vec[0], vec.size() * sizeof(char));
           fout.close();

};


void USE_POINTER(std::vector<char> * q)

{ std::ifstream source("fruit.bmp", std::ios::binary);
  std::vector<char> vec((std::istreambuf_iterator<char>(source)),
                         std::istreambuf_iterator<char>());

       for(unsigned int i = 54; i <vec.size(); i++)
                  vec[i] = 255-vec[i];

          ofstream fout("pointer.dat", ios::out | ios::binary);
           fout.write((char*)&vec[0], vec.size() * sizeof(char));
           fout.close();

    }

void USE_REFERENCE(std::vector<char> & v)

{ std::ifstream source("fruit.bmp", std::ios::binary);
  std::vector<char> vec((std::istreambuf_iterator<char>(source)),
                         std::istreambuf_iterator<char>());

       for(unsigned int i = 54; i <vec.size(); i++)
                  vec[i] = 255-vec[i];

          ofstream fout("reffrence.dat", ios::out | ios::binary);
           fout.write((char*)&vec[0], vec.size() * sizeof(char));
           fout.close();

    }
void USE_VECTOR(std::vector<char>v)
{
     std::ifstream source("fruit.bmp", std::ios::binary);
  std::vector<char> vec((std::istreambuf_iterator<char>(source)),
                         std::istreambuf_iterator<char>());

       for(unsigned int i = 54; i <vec.size(); i++)
                  vec[i] = 255-vec[i];

          ofstream fout("vector.dat", ios::out | ios::binary);
           fout.write((char*)&vec[0], vec.size() * sizeof(char));
           fout.close();
}

int main(int argc, char* argv[])
{


    if (argc >= 4) {
          // Tell the user how to run the program

           int count = 10;
            cout << "Inverting file \n" << endl;
            for(count;count < 110; count+=10){


                cout <<count<<"%"<<" ";

                fflush(stdout);

                sleep(1);
            }
            cout << endl << "Done\n" <<endl;

          std::cerr << " " << argv[0] << " Your BMP file is inverted\n" << std::endl;

double dStart=clock();

       //  use_vector();//Done
//use_pointer();
//use_reference();
//use_character_array();

 std::vector<char>v;

     USE_REFERENCE(v);

     std::vector<char>v1;

     USE_VECTOR(v1);

     std::vector<char>l;

    USE_POINTER(&l);

    char array[255];

      USE_CHARACTER_ARRAY(array);

         double dDuration=clock()-dStart;

             cout<<"Time estimation\n"<<endl;

         cout<<dDuration/CLOCKS_PER_SEC<<"sec"<<endl;

          return 1;

      }

      // Print the user's name:
      std::cout << argv[0] << " hello, " << argv[1] << "Zesan" << std::endl;


      return 0;

}




