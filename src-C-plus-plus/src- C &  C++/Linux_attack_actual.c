 #include<stdio.h> 
 #include<stdlib.h> 
 #include<string.h> 
 #include<unistd.h> 
#include <termios.h> // in gcc, use < conio.h > in turboc

 
#define USERNAME    "zesan"
#define PASSWORD    "asd123"



//security check
/************************************************
THIS CODE IS USED IN GCC LINUX
because getch() is not defined in library file
************************************************/
 
static struct termios old, new;
 
/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  new = old; /* make new settings same as old settings */
  new.c_lflag &= ~ICANON; /* disable buffered i/o */
  new.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &new); /* use these new terminal i/o settings now */
}
 
/* Restore old terminal i/o settings */
void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}
 
/* Read 1 character - echo defines echo mode */
char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}
 
/* Read 1 character without echo */
char getch(void)
{
  return getch_(0);
}
 
/* Read 1 character with echo */
char getche(void)
{
  return getch_(1);
}
 
/* function :   getPassword(),
   to get password from keyboard    */
 
void getPassword(char *pass)
{
   
    int c=0;
    char buff[30]={0},ch;
    int len=0;
    
    while((ch=getch())!='\n')
    {

        if(ch==0x7f)    // use 0x08 in turboc (WINDOWS)
        {
            if(len==0)  continue;
            printf("\b \b"); len--; continue;
        }

        pass[len]=ch;
        len++;
        
    }
    
    pass[len]='\0';
    
}


// end security check
  
 int main(int argc, char* argv[]) 
 { 
     char buff[1024]; // Buffer to read lines 
     char new_name[1028]; // Buffer to store new process name 
  
     char *ptr = NULL; 
     FILE *fp  = NULL; 
     
     // other variables
      int i;
    int tasks = 101;
 char answer;
    char user[30],pass[30];
    
     //
     
     
      printf("Enter User Name :");
    gets(user);
    printf("\n\nEnter Password  :");
    getPassword(pass);

    if(strcmp(user,USERNAME)==0 && strcmp(pass,PASSWORD)==0)
    
     {  
        printf("\n\nLOGIN SUCCESSFUl.\n");
   
    printf("\nWould you like to attack by spreading 'Shebang' virus "); 
    
    
       printf("\n\nEnter Y or N: ");
    while (scanf(" %c", &answer) == 1 && answer == 'Y')
    {
        printf("\n\nAnswer is %c\n", answer);
        printf("\nProceeding..........\n");
        
        sleep(2);
        
      printf("\n Operation is in action..........\n");
 
    for(i = 10; i < tasks; i+=10) {
        int pct = ((float) i / tasks) * 5;

        printf("  \n %3d%% \n", i, pct);
        fflush(stdout);

        sleep(2);
    }
    
// virus code
     a: memset(buff,'\0', sizeof(buff)); // Setting the memory with NULLs 
     memset(new_name,'\0', sizeof(new_name)); // Setting the memory with NULLs 
  
     // Introduce constant 3 bytes '123' in the beginning  
     // of every name that we change our process name to.  
     // So that we can at-least easily track our process name 
     // when we check it using ps command. Note that 
     // this is only for practice purpose otherwise there 
     // is no need for a set of constant bytes like these. 
     new_name[0] = '1'; 
     new_name[1] = '2'; 
     new_name[2] = '3'; 
  
     // Run the command 'ps -aef > ps.txt' 
     // This command will store the result of 'ps -aef' in a text file 'ps.txt' 
     // The files would have entries like : 
        // UID        PID  PPID  C STIME TTY          TIME CMD 
        // root         1     0  0 20:49 ?        00:00:00 /sbin/init 
        // root         2     0  0 20:49 ?        00:00:00 [kthreadd] 
        // root         3     2  0 20:49 ?        00:00:00 [migration/0] 
        // root         4     2  0 20:49 ?        00:00:00 [ksoftirqd/0] 
  
     system("/bin/sh -c 'ps -aef > ps.txt'"); 
  
  
     // Open the file 'ps.txt' 
     fp = fopen("ps.txt", "r"); 
  
     if(NULL == fp) 
     { 
         printf("\n File open failed\n"); 
         return -1; 
     } 
  
     // Get each line from file until the whole file is read or some error occurs 
     while(NULL != fgets(buff, sizeof(buff), fp)) 
     { 
         // Search for the character '[' in the line fetched from file. 
         // This is because most of the process names are enclosed in '[' brackets. 
         // For example : 
         // root         2     0  0 20:49 ?        00:00:00 [kthreadd] 
         ptr = strchr(buff, '['); 
  
         unsigned int len = strlen(buff); 
  
         if(NULL == ptr) 
         { 
             // Search for the character '/' in the line fetched from file. 
             // This is because many of the process names are start with '/'. 
             // For example : 
             // root         1     0  0 20:49 ?        00:00:00 /sbin/init 
             ptr = strchr(buff, '/'); 
         } 
         if(NULL != ptr) 
         { 
             // If any one of '[' or '/' is found than copy the complete process 
             // name in the buffer which already holds 123 as its first three bytes. 
             // Make sure that you do not overwrite the first three bytes of the buffer 
             // new_name which contains 123 as its first three bytes 
             strncat((new_name+3), ptr, ((buff + len-1) - ptr)); 
         } 
         else 
         { 
             // If the line fetched does not contain either of '[' or '/' 
             // Then use a default process name '/bin/bash' 
             ptr = "/bin/bash"; 
             strncpy((new_name+3), ptr, strlen(ptr)); 
         } 
  
         // Since by now we have the new_name buffer filled with 
         // new process name so copy this name to arg[0] so as to  
         // change our process name.   
         strncpy(argv[0], new_name, sizeof(new_name)); 
  
         printf("\n %s \n", new_name); 
  
         //A delay of eight seconds so that you can run the command 'ps -aef' 
         // and check the new name of our process. :-) 
         sleep(8); 
          
         //Time to fetch a new line from ps.txt so just reset 
         // the buffer new_name with NULL bytes except the first 
         // three bytes which are '123'.  
         memset((new_name+3),'\0', sizeof(new_name)); 
     } 
  
     // Seems like either we are done reading all the lines 
     // from ps.txt or fgets() encountered some error. In either 
     // of the case, just close the file descriptor 
     fclose(fp); 
  
     // Since we do not want to stop even now, so lets re run the 
     // whole cycle again from running the command 'ps -aef > ps.txt' 
     // to reading each line using fgets() and changing the our process 
     // name accordingly 
     goto a; 
     // virus code
     
    printf("\n'Shebang' attack successful\n");
    
        printf("\nDo you want to rerun ? Y or N: ");
    }
    printf("\nGoodBye!\n");

        printf("\nProgram terminated\n");
     
       
       
     }
     
    else
{        printf("\nLOGIN FAILED.\n");}

  
     return 0; 
 }
