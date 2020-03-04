#include<iostream>
using namespace std;
int arr[100],n=0;
void ascorder()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void descorder()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}	
}
void deletelastoccurence()
{
	int i,j,n,value,search;
	cout<<"enter value and insert at specific index";
	cin>>value;
		for(i=n-1;i>0;i--)
		{
			if(search==arr[i])
			{
				for(j=i;j<n;j++)
				{
				arr[j]=arr[j+1];
			    }
			     n--;
			    break;
		        
		}
			
	}
	
}
void deletefirstoccurence()
{
	int i,n,j,value,search;
	cout<<"enter value and insert at specific index";
	cin>>value;
		for(i=0;i<n;i++)
		{
			if(search==arr[i])
			{
				for(j=i;j<n;j++)
				{
				arr[j]=arr[j+1];
			    }n--;
			    break;
		         
		}
			
	}
	
}


void   	deleteAll()

{
	int i,n,j,value,search;
	cout<<"enter value and insert at specific index";
	cin>>value;
		for(i=0;i<n;i++)
		{
			if(search==arr[i])
			{
				for(j=i;j<n;j++)
				{
				arr[j]=arr[j+1];
			    }
			    i=i-1;
		         n--;
		}
			
	}
	
}
void deleteelement()
{
	int i,n,value,index;
	cout<<"enter value and insert at specific index";
	cin>>index;
	if(index<=n)
	{
		for(i=index;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;	
	}
	else
	{
		cout<<"invalid index, please enter 0-"<<n<<endl;
	}
}
void addelement()
{
	int i, value,index,n;
	cout<<"enter value and insert at specific index";
	cin>>value>>index;
	if(index<=n)
	{
	for(i=n;i>index;i--)
	{
		
	arr[i]=arr[i-1];
	}
	arr[index]=value;
	n++;
	}else
	{
		cout<<"invalid index, please enter 0-"<<n<<endl;
	}
	}
void addelementfirst()
{
	int i, value;
	cout<<"enter value";
	cin>>value;
	for(i=n;i>0;i--)
	{
		
	arr[i]=arr[i-1];
	}
	arr[0]=value;
	n++;
	}
	
void addelementlast()
{
int value;
cout<<"enter value";
cin>>value;
arr[n]=value;
n++;
}
void display()
{
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
void viewoptions()
{

int opt;
do
{
cout<<"\n====== Array Operations ======"<<endl;	
cout<<"1. adding  element @ last index"<<endl;
cout<<"2.adding element @ first index"<<endl;
cout<<"3. adding  element @ specific index"<<endl;
  cout<<"5. delete all occurences of search element"<<endl;
  cout<<"6. delete first occurence of search element"<<endl;
  cout<<"7. delete last occurence of search element"<<endl;
  cout<<"8. Display Asc order"<<endl;
  cout<<"9. Display desc order"<<endl;


cin>>opt;	

if(opt==1)
{
	addelementlast();
	display();
	}
else if(opt==2)
{
	addelementfirst();
	display();
}
  else if (opt==3)
  {
  	addelement();
  	display();
  	
  }
  else if(opt==4)
  {
  	deleteelement();
  	display();
  	
  }
  else if(opt==5)
  {
  	deleteAll();
  	display();
  }
  else if(opt==6)
  {
  	deletefirstoccurence();
  	display();
  }
  else if(opt==7)
  {
  	deletelastoccurence();
  	display();
  }
  else if(opt==8)
  {
  	ascorder();
  	display();
  }
  else if(opt==9)
  {
  	descorder();
  	display();
  }
  else
  {
  	cout<<"invalid option please enter 1-9"<<endl;
  }
}
while(opt!=0);	
}



int main()
{
	viewoptions();
	return 0;
}

