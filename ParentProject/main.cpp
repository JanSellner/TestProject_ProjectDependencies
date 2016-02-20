#include "interface.h"
#include "Interface2.h"
#include "ImageFunctions.h"
#include <iostream>

using namespace std;

int main()
{
	Interface i;
	cout << i.add(2, 3) << endl;
	
	Interface2 i2;
	cout << i2.mult(2, 3) << endl;

	cout << ImageFunctions::imageFunction({ 1,2,3 }) << endl;
}
