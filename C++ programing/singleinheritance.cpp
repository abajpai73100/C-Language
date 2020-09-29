#include<iostream>
using namespace std;
class base
{
	int a;
	public:
		int b;
		base()
		{
			a=0;
			b=0;
		}
		void seta()
		{
			cout<<"enter a\n";
			cin>>a;
			cout<<"enter b\n";
			cin>>b;
		}
		void geta()
		{
			
		cout<<"a="<<a<<endl;
		cout<<"b="<<b<<endl;
	}
	};
	class derived:private base
	{
		int x;
		public:
			int y;
			derived()
			{
				x=0;
				y=0;
			}
			void setx()
			{
				seta();
				cout<<"enter x and y\n";
				cin>>x>>y;
			}
			void getx()
			{
				geta();
				cout<<"x="<<x<<endl;
				cout<<"y="<<y<<endl;
			}
		};
		int main()
		{
			derived d;
			d.setx();
			d.getx();
		}
