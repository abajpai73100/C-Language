#include<iostream>
using namespace std;
class sum
{
	int a,b;
	public:
		void input()
		{
			cout<<"enter two number\n";
			cin>>a>>b;
		}
		void add()
		{
		cout<<"result:"<<a+b;
	}
};
int main()
{
	sum a;
	a.input();
	a.add();
}
			
