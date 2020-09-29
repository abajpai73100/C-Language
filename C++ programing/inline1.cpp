#include<iostream>
using namespace std;
class inli
{
	public:
	inline float cube(int x)
	{
		return x*x*x;
	}
};
int main()
{
	inli l1;
	cout<<l1.cube(5);
}
