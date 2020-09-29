#include<iostream>
using namespace std;
class ar
{
	void arr(int s)
	{
		int sum=0;
		int *ptr=new arr[s];
		for(int i=0;i<s;i++)
		{
			cin>>*(ptr+i);
		}
		for(int i=0;i<s;i++)
		{
			sum=sum+*(ptr+i);
		}
		cout<<"sum is "<<sum;
		delete ptr;
	}
};
int main()
{
	int size;
	cin>>"enter size of array"<<endl;
	ar x;
	x.arr(size);
	return 0;
}
