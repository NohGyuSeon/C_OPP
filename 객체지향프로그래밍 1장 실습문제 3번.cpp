#include <iostream>

int main()
{
	int sum = 0;
	
	for (int i=0; i<=10; i++) {
		sum += i;
	}
		
	std::cout << "결과는" << sum << "입니다.\n" << std::endl;
	
	return 0; 
 } 
