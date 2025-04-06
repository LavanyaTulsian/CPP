#include<iostream>
using namespace std;

void Log(const char* message);//declaration--> gets linked by the linker to the definition in Log.cpp

int main()
{
	Log("Hello world");
	cin.get();//pauses the program and waits for enter input to  continue the program
}


//For Linking the function name, no. of arguments and return type of definition and declaration needs to be same
//Any of the three being different results in a different function and hence is not the same function with a different function ID