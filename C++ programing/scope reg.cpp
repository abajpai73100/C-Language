#include<iostream>
using namespace std;
class student
{
	public:
		int sid;
		char sname[25];
	void input()
	{
		cin>>sid;
		cin>>sname;
	}
    void output()
    {
		cout<<sid<<endl;
    	cout<<sname;
	}
};
int main()
{
	student s;
	s.input();
	s.output();
	return 0;
}
