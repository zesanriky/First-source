
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include<vector>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include<ostream>
#include<limits>

using namespace std;
enum book {Chemistry,Physics,Electrical_engineering,Computer_science,Software_engineer};



class addBook

{
public :
    addBook() // constructor
    {
        count=0;

    }
    ~addBook() // constructor
    {


    }

    void addEntry();
void changeEntry();


    void displayAll();
    void displayspecificbook();
    // Display a specific entry

    void displayEntry(int i);
    void displaychangeEntry(int i);
    void searchEntry();
    void savesearchEntry();
    void Entry();



    // You should wrap all members into a struct
 class entry_struct
    {
 public :
        char firstName[ 15 ] ;
        char lastName[ 15 ] ;
        char publisher[ 15 ] ;
        char topic[ 15 ] ;
        char email[ 15 ] ;
       // char price[ 15 ] ;
int price;
        char  title[ 15 ] ;
        string readingState;
        book Topic;

    };
    // An array is required if you want multiple entries

    //entry_struct entries[100];
    vector<entry_struct>entries;
    unsigned int count;
    unsigned int bite;
     unsigned int see;
    string subject;
};

void addBook::addEntry()
{

    entry_struct InputBook;
    cout << "Entry number " << (count + 1) << " : " << endl;
    cout << "Authors First Name: ";
    cin >> InputBook.firstName;
    cout << "Authors Last Name: ";
    cin >> InputBook.lastName;
    cout << "Title of the book: ";
    cin >> InputBook.title;
    cout << "Publisher of the Book: ";
 cin >> InputBook.publisher;
    cout << "Price: ";
    cin >> InputBook.price;
    cout << "Range of the Topics:";
    string sInput;
    cin >> sInput;
    if(sInput == "Chemistry")
    {    
    entries.push_back(InputBook);
   entries[count].Topic = Chemistry;

    }else if(sInput == "Physics")
    {
entries.push_back(InputBook);
 entries[count].Topic = Physics;

   } else if(sInput == "Electrical_engineering")
    {

entries.push_back(InputBook);
entries[count].Topic = Electrical_engineering;

    }else if(sInput == "Computer_science")
{
entries.push_back(InputBook);
entries[count].Topic = Computer_science;
    }
    else if(sInput == "Software_engineer")
{
entries.push_back(InputBook);
      entries[count].Topic = Software_engineer;}
    

    do{
     cout << "Enter reading state : "<<endl;
     std::cout << std::boolalpha; // print bools as true or false
     std::cout << true << std::endl;
     std::cout << false << std::endl;
     cin >> entries[count].readingState;
     }while((entries[count].readingState!="true"&&(entries[count].readingState!="false")));

    ++count; }// add an entry

void addBook::displayEntry(int i)
{
    cout << "Entry[" << i + 1 << "] : " << endl;
    cout << "First name : " << entries[i].firstName << endl;
    cout << "Last name : " << entries[i].lastName << endl;
    cout << "Title_of_The_Book : " << entries[i].title << endl;
    cout << "Publishers: " << entries[i].publisher << endl;
    cout << "Price: " << entries[i].price << endl;
    cout << "Range of the Topics: "<< endl;
    cout <<   entries[i].Topic << endl;
   //cout << "reading state: " << entries[i].readingState << endl;

    switch (entries[i].Topic ){
           case 0:
                cout<<"Chemistry"<<endl;
        break;
    case 1:
        cout<<"Physics"<<endl;
break;
    case 2:
        cout<<"Electrical_engineering"<<endl;
break;
    case 3:
        cout<<"Computer_science"<<endl;
break;
    case 4:
        cout<<"Software_engineer"<<endl;
break;
    }
    cout << "Entered reading state : "<< entries[i].readingState<<endl;
}





void addBook::changeEntry()


{

    if(count==0)
{
        cout << "You have not entered any book "<<endl;

           addEntry();
}

else  {

cout<<"Which book do you want to chnage?"<<endl;

cin>>count;// if cin==0;

count--;
entry_struct InputBook;
cout << "Entry number " << (count+1 ) << " : " << endl;// taking entry number 2

 cout << "Authors First Name: ";
    cin >> InputBook.firstName;
    cout << "Authors Last Name: ";
    cin >> InputBook.lastName;
    cout << "Title of the book: ";
    cin >> InputBook.title;
    cout << "Publisher of the Book: ";
 cin >> InputBook.publisher;
    cout << "Price: ";
    cin >> InputBook.price;
    cout << "Range of the Topics:";
entries[count] = InputBook;
    string sInput;
cin >> sInput;

 if(sInput == "Chemistry")
    {    
    entries.push_back(InputBook);
   entries[count].Topic = Chemistry;

    }else if(sInput == "Physics")
    {
entries.push_back(InputBook);
 entries[count].Topic = Physics;

   } else if(sInput == "Electrical_engineering")
    {

entries.push_back(InputBook);
entries[count].Topic = Electrical_engineering;

    }else if(sInput == "Computer_science")
{
entries.push_back(InputBook);
entries[count].Topic = Computer_science;
    }
    else if(sInput == "Software_engineer")
{
entries.push_back(InputBook);
      entries[count].Topic = Software_engineer;
    }

    do{
     cout << "Enter reading state : ";
     std::cout << std::boolalpha; // print bools as true or false
     std::cout << true << std::endl;
     std::cout << false << std::endl;
     cin >> entries[count].readingState;
     }while((entries[count].readingState!="true"&&(entries[count].readingState!="false")));

    ++count;


}//for ending else 

}//fo ending function




void addBook::displaychangeEntry(int i)
{
    cout << "Entry[" << i + 1 << "] : " << endl;
    cout << "First name : " << entries[i].firstName << endl;
    cout << "Last name : " << entries[i].lastName << endl;
    cout << "Title_of_The_Book : " << entries[i].title << endl;
    cout << "Publishers: " << entries[i].publisher << endl;
    cout << "Price: " << entries[i].price << endl;
    cout << "Range of the Topics : " << entries[i].Topic << endl;
    cout << "Enter reading state : "<< entries[i].readingState<<endl;
}

void addBook::displayAll()
{
    cout << "Number of entries : " << count << endl;

    for(unsigned int i = 0;i < count;i++)displayEntry(i);



}

void addBook::displayspecificbook()
{
    int t;
    cout<<"Enter the entry number "<<endl;
    cin>>t;

    displaychangeEntry(t-1);
}

void addBook::searchEntry()
{
    char lastname[32];

    cout << "Enter last name : ";
    cin >> lastname;

    for(unsigned int i = 0;i < count;++i)
    {
        if(strcmp(lastname, entries[i].lastName) == 0)
        {
            cout << "Found ";

            displayEntry(i);
            {

                cout<<endl;

            }}}}

void addBook::savesearchEntry()

{
    ofstream out("Search_result.txt", ios::out);

    for(unsigned int i = 0; i < entries.size(); i++)
    {
        out << entries.at(i).firstName <<endl<<entries.at(i).lastName<<endl
        <<entries.at(i).title <<endl<<entries.at(i).price<<endl<<entries.at(i).publisher<<endl
        <<entries.at(i).Topic<<endl<<entries.at(i).readingState<<endl;

    }

    out.close();
}
// Your class


class vr:public addBook
{

        public:

    void addEntry();

        };

addBook my_book;

int mainMenu()
{

    bool bQuit = false;

    // Put all your code into a while loop.
    while(bQuit == false)
    {
        system("cls"); // clear screen

        cout << "+-----------------------------------------+" << endl;
        cout << "|   This is book database please make a choice |" << endl;
        cout << "|                                         |" << endl;
        cout << "(a) : New book entry " << endl;
        cout << "(b) : Show all books entry" << endl;
        cout << "(c) : Change the entry" << endl;
        cout << "(d) : Show specific book entry" << endl;
        cout << "(e) : Search a certain last name" << endl;
        cout << "(f) : Save the search result in a file" << endl;
        cout << "(g) : Program trmination" << endl;
        cout << endl;
        cout << "|                                         |" << endl;
        cout << "+-----------------------------------------+" << endl;

        cout << " " << endl;
        cout << "Please enter a letter for one of the above options." << endl;
        cout << "Your choice : ";
        char q;
        cin >> q;



        if (q == 'a')my_book.addEntry();
        else if (q == 'b')my_book.displayAll();
        else if (q == 'c')my_book.changeEntry();
        else if (q == 'd')my_book.displayspecificbook();
        else if (q == 'e')my_book.searchEntry();
        else  if (q == 'f')my_book.savesearchEntry();
       // else  if (q == 'q')my_book.savesearchEntry();

        else if (q == 'g')bQuit = true;
        else cout << "Invalid choice. Please try again" << endl;
        cout << endl;
        system("pause");
    }
    return 0;
}


int main (){


mainMenu();
return 0;



}


