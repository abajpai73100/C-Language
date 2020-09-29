
#include<iostream>
using namespace std;
class calc
{
	public:
		inline float mul(float x,float y)
        {
        	return (x*y);
	}
		inline double div(double p, double q)
	   {	
			return(p/q);
    }
};
	int main()
	{
		calc c1;
		cout<<c1.mul(10.5,6)<<endl;
		cout<<c1.div(12.2,3)<<endl;
	}
