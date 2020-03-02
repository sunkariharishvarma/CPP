#include<math.h>
using namespace std;
int main()
{
	int num,rem,sum=0,digits=0,temp;
	cout<<"enter  num  ";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		 num=num/10;   
		 digits++;
	}
	num=temp;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,digits);  
		num=num/10; 
	}
	if(sum==temp)
	{
		cout<<" is armstrong no "<<temp;
	}
	else
	{
		cout<<"is not armstrong no "<<temp;
	}
	return 0;
}