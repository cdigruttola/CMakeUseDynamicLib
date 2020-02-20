// CMakeUseDynamicLibrary.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "TryLib.h"
using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	TryLib* lib = new TryLib();
	return 0;
}
