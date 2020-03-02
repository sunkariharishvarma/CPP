
#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0,fact=1,temp;
	cout<<"enter  num  ";
	cin>>num;
    temp=num;
	while(num!=0)
	{
		 rem=num%10;
		 while(rem>=1)
		 {
		 	fact=fact*rem;
		 	rem--;
		 }
		 sum=sum+fact;
		 fact=1;
		 num=num/10;
	}

	if(temp==sum)
	{
		cout<<" is strong  no "<<temp;
	}
	else
	{
		cout<<"is not strong no "<<temp;
	}
	return 0;
}