#include<iostream> //preprocessor statement---> anything that starts with # is a preprocessor statement
// #include is a header file that includes(literally copies and pastes) the contents of the file in the <> in your program

int main()//entry point for our application--> every C++ program must have a main function
{
	std::cout << "Hello, World!" << std::endl;
	std::cin.get();//program pauses and waits for us to press enter
}