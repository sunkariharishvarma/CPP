
#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0,temp;
	cout<<"enter  num  ";
	cin>>num;
	num=temp;
	while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;	
			num=num/10;
			}
			if(rev==temp)
			{ 
			cout<<"is palindrom";
			}
			else
			{
				cout<<"is not palindrom";
		}

	return 0;
}