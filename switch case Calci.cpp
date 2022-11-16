#include<iostream>
using namespace std;

int add()
{
	int a,b,c;
	cout<<"Enter the 1st value : ";
	cin>>a;
	cout<<"Enter the 2nd value : ";
	cin>>b;
	
	c=a+b;
	return c;
}

int sub()
{
	int p,q,r;
	cout<<"Enter the 1st value  : ";
	cin>>p;
	cout<<"Enter the 2nd value  : ";
	cin>>q;
	
	r=p-q;
	return r;
}

int div()
{
	float e,f,g;
	cout<<"Enter the 1st value : ";
	cin>>e;
	cout<<"Enter the 2nd value : ";
	cin>>f;
	
	g=e/f;
	return g;
}

int multi()
{
	int q,r,t;
	cout<<"Enter the 1st value : ";
	cin>>q;
	cout<<"Enter the 2nd value : ";
	cin>>r;
	t=q*r;
	return t;
	
}


int main()
{
	int ch, r,res,resul,result;
	char val;
	
	do
	{
	cout<<"which operation do you want to perform ? "<<endl;
	cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Division"<<endl<<"4. Multiplication"<<endl;
	cin>>ch;
	
	switch(ch)
	{
		
		case 1 :
			{
				r=add();
				cout<<"The addition of two numbers is : "<<r;
			}
		break;
	
		case 2 :
			{
				res=sub();
				cout<<"The subtraction of two numbers is : "<<res;
			}
		break;
	
		case 3 :
			{
				resul=div();
				cout<<"The result of division is : "<<resul;
			}
		break;
	
		case 4 :
		{
			result=multi();
			cout<<"The multiplication of two number is : "<<result;
		}
		break;
		
		default:
			{
				cout<<"Enter the correct input !!!";
			}
		break;
	
	}
	
	cout<<endl<<endl;
	cout<<"Do you want to continue ? ";
	cin>>val;
	}while(val=='y');
	
	
}
	
	

