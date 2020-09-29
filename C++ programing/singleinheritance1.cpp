#include<iostream>
using namespace std;
class base                                              // base class
{
	int a;
	public:                                             //declear section
		int b;
		base()                                         //difault constructer
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
	class derived:protected base                            // derived class
	{
		int x;
		public:
			int y;
			derived()                                    //difault constructer
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
