#include<iostream>
using namespace std;
class area
{
	public:
		int l;
		int h;
		float r;
		int final_area(int a,int b)
		{
			l=a;
			h=b;
			return(l*h);
		}
		int final_area (int a)
		{
			l=a;
			return(l*l);
		}
		float final_area(float p)
		{
			r=p;
			return(3.14*r*r);
		}
	};
	int main()
	{
		area a1;
		cout<<a1.final_area(2,6)<<endl;
		cout<<a1.final_area(5)<<endl;
		cout<<a1.final_area(2.2,3)<<endl;
	}
