#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char a[100];
	
	while (true)
	{
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 100);
		
		if (strcmp(a, "yes")==0)  
		{
			cout << "�����մϴ�.";
				
		break;
		}
	}
	
	return 0;
}
