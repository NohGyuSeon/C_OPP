#include <iostream>
using namespace std;

#include "Box.h"

void Box::draw() {
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			cout << fill;
		}
		cout << endl;
	}
}