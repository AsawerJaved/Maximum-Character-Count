#include<iostream>
using namespace std;
int main()
{
	char array[50];
	int max=0,count=0,a=0;
	cout<<"Enter an array: ";
	cin.getline(array,50);
	while(1)
	{
		if(array[a]==' '||array[a]=='\0')
		{
			if(count>max)
			{
				max=count;
				count=0;
			}
			count=0;
		}
		if(array[a]=='\0')
		break;
		if(array[a]!=' ')
		count++;
		a++;
	}
	cout<<"Maximun character count is "<<max;
	return 0;
}
