#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <limits>
#include <sstream>
#include <string>
using namespace std;

// http://cpp.sh/33k5h


class IntelligentCoffeeMachine
{      
    private:
bool poweron;
bool poweroff;
 
   static const int n = 100;
     static const int w = 200;
    public:
       int q;
       // static  int count =10;   
    bool Set_poweron(bool x)
    {        
    poweron=true;
      cout << "The power is on because of true" << endl;    
    }        
    bool Get_poweron(){
        
        return poweron;
             
        }
        
         bool Set_poweroff(bool x)
    {
        
    poweroff=false;
       cout << "The power is off because of false" << endl;
    
    }    
    bool Get_poweroff(){
        
        return poweroff;
        
        } 
    void openlid()
    {
          cout << "The lid is now open " << endl;
        
        }
        
        void insertfilter()
    {
          cout <<  "A filter is inserted " << endl;
        
        }
        
        int insertcoffee()
    {
            while (true)
              {

                 cout << "How much coffee do you want to insert ? minimum 100 gm  " <<endl;

               cin>>q;

                 if (q==n)
                 {
                    // do something with n
                    cout <<q<< "gm coffee is inserted " << endl;

                    return q;
                 }
                 else
                 {
                    cout << " More than or below 100 gm coffee insertion is not allowed" << endl;
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                 }
              }


      }
                
    
      int insertwater()
    {
          while (true)
            {

               cout << "How much water do you want to insert ?  minimum 200 ml  " <<endl;

             cin>>q;

               if (q==w)
               {
                  // do something with n
                  cout <<q<< "ml water is inserted " << endl;

                  return q;
               }
               else
               {
                  cout << " More than or below 200 ml water insertion is not allowed" << endl;
                  cin.clear();
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
               }
            }

      }
                       
     void closelid()        
        {
            cout << "The lid is now closed " << endl;  
            }
            
     void startcooking()        
        {
            
            cout << "Coffee cooking got started " << endl;  
            
            for(int count =10;count< 110;count+=10)

{cout<<count<<"%"<<"\n";

fflush(stdout);

 sleep(1);
}
            
            }
    
      void takecoffee()        
        {
            
            cout << "Enjoy your coffee " << endl;  
            
            }
            
            
              void removefilter()        
        {
            
            cout << "Old filter is removed " << endl;  
            
            }

};

 int main()
 { 
           IntelligentCoffeeMachine object;
           char s;

  int option;

    std::string  line;
     //Prompting user to enter an option according to menu

do{

 //start task-1
     cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==2)  

      {
          cout << "lid is closed filter can not be inserted" << endl;}      
         
   if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "lid is closed coffee can not be inserted" << endl;
     }

 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "lid is closed water can not be inserted" << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "lid is already closed" << endl;
     }
 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Do not switch on before closing the lid" << endl;
     }


 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee to cook" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee to take" << endl;
     }


 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }


        if ((option < 1) || (option > 1))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.openlid();

   break;

    }

//end of task-1- done


//start task-2 

  cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid is already open" << endl;}      
         
   if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "At first filter has to be inserted" << endl;
     }

 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is in the machine why water ?" << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid only can be closed after inserintg coffee and water" << endl;
     }
 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Alert ! Insertions are not yet done" << endl;
     }


 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee and water to cook" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is made" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }

        if ((option < 2) || (option > 2))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
        object.insertfilter(); 
   break;

    } 
  
    //end of task-2-done


 //start task-3


  cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid is already open" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Insert coffee first" << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Alert ! Insertions are not yet done" << endl;
     }


 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch can be on after insertion" << endl;
     }
 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is off" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }

 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is made to take" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }

        if ((option < 3) || (option > 3))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.insertcoffee();

   break;

    } 

  
    //end of task-3-done

 //start task-4

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid is already open" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Coffee is in the machine" << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Insert water first" << endl;
     }
 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Alert ! Insertions are not yet done" << endl;
     }


 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is off" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee to take" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }


        if ((option < 4) || (option > 4))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.insertwater();

   break;

    } 

  
     //end of task-4-done

 //start task-5

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid is already open" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " Coffee in the machine" << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Water is inserted " << endl;
     }
 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Alert ! lid is not yet closed" << endl;
     }


 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Close the lid first" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is made" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }


        if ((option < 5) || (option > 5))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.closelid();

   break;

    } 

  
     //end of task-5-done

 //start task-6

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid reamins closed before switching on" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " Coffee in the machine" << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Water is inserted " << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid is  closed" << endl;
     }


 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is off" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is made" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter is not yet used" << endl;
     }


        if ((option < 6) || (option > 6))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
       object.Set_poweron(true);
        cout<< object.Get_poweron()<<endl;
     

   break;

    } 

  
     //end of task-6-done

 //start task-7

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid reamins closed before cooking" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " Coffee in the machine" << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Water is inserted " << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid is  closed" << endl;
     }


 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already on" << endl;
     }
 if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch must be on before cooking" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "No coffee is made" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter can be taken out after taking coffee" << endl;
     }


        if ((option < 7) || (option > 7))
        {
       cout<<"Sorry invalid input"<<endl;

             continue;
        }
        
        
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.startcooking() ;

   break;

    } 

  
     //end of task-7-done

 //start task-8

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid reamins closed till swtching off" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " Coffee is in the machine" << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Water is inserted " << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid is  closed" << endl;
     }


 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is already on" << endl;
     }
 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Cooking is done" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch off before taking coffee" << endl;
     }

 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter can be taken out after taking coffee" << endl;
     }


        if ((option < 8) || (option > 8))
        {
       cout<<"Sorry invalid input"<<endl;

             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.Set_poweroff(false);
                 cout<< object.Get_poweroff()<<endl;  

   break;

    } 

  
     //end of task-8-done

 //start task-9

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "lid reamins closed till coffee is taken" << endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " Coffee in the machine" << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Water is inserted " << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid is  closed" << endl;
     }


 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch can be on while making new coffee" << endl;
     }
 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Cooking is done" << endl;
     }

if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is off" << endl;
     }


 if(option==10) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Filter can be taken out after taking coffee" << endl;
     }


        if ((option < 9) || (option > 9))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
         object.takecoffee();

   break;

    } 

  
     //end of task-9


 //start task-10

cout << "Please select an option : "<<endl;
  //Displaying Options for the menu
     cout << "1) Opening lid " << endl;
     cout << "2)Insert filter " << endl;
     cout << "3) Inserting coffee " << endl;
     cout << "4) Inserting water" << endl;
     cout << "5) Closing lid " << endl;
     cout << "6) Switch on " << endl;
     cout << "7) Start cooking " << endl;
     cout << "8) Switch off " << endl;
     cout << "9) Taking coffee " << endl;
     cout << "10)remove filter  " << endl;
  // taking option value as input and saving in variable "option"
 
    while(std::getline(std::cin, line))   // read a line at a time for parsing.
    {
        std::stringstream linestream(line);
        if (!(linestream >> option))
        {
                  cout<<"Sorry invalid input"<<endl;

             continue;
        }

   if(option==1)  

      {
          cout << "To open the lid select to make new coffee after removing the filter "<< endl;}      
         
   if(option==2) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "A filter has been inserted" << endl;
     }

 if(option==3) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " cook new coffee " << endl;
     }
 if(option==4) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << " cook new coffee " << endl;
     }
 if(option==5) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Lid is  closed" << endl;
     }


 if(option==6) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch can be on while making new coffee" << endl;
     }
 if(option==7) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Cooking is done" << endl;
     }

if(option==8) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Switch is off" << endl;
     }
 if(option==9) //if user has entered invalid choice (other than 1,2,3 or 4)

     {
       //Displaying error message

       cout << "Coffee is taken" << endl;
     }



        if ((option < 10) || (option > 10))
        {
       cout<<"Sorry invalid input"<<endl;
             continue;
        }
        char errorTest;
        if (linestream >> errorTest)
        {
                   cout<<"Sorry invalid input"<<endl;

             continue;
        }


   cout<<"Correct choice"<<endl; 
     
        object.removefilter();

   break;

    }

  
     //end of task-10


          cout << " Wanna make new coffee 'Y'/'N' " << endl;
  
     cin >> s;  // taking option value as input and saving in variable "option"
     
 // Checking if user selected option 1

 
  }while(s =='Y' ); 
  
  
             
      return 0;
 }
