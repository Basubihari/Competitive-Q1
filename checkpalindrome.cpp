#include<iostream>
using namespace std;
class Palindrome
{
	private:
		long Num,Rev=0;
	public:
		void getdata()
		{
			cout<<"Input x = ";
			cin>>Num;
		}
		long Reverse()
		{
			int x=Num;
			while(x!=0)
			{
				int a=x%10;
				Rev=(Rev*10)+a;
				x/=10;
			}
		return Rev;
		}
		void CheckPalindrome()
		{
			if(Num<0)
			{
				cout<<"Output = False";
			}
			else if(Num==Reverse())
			{
				cout<<"Output = True";
			}
			else
			{
				cout<<"Output = False";
			}
			
		}
};
int main()
{
	Palindrome P1;
	P1.getdata();
	P1.CheckPalindrome();
	return 0;
}