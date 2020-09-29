#include<iostream>
using namespace std;
int main()
{
	int n ,sum=0;
	cout<<"enter apositive intger:";
	    cin >> n;
	for (int i = 1; i <= n; ++i)
	 {
        sum += i;
    }
        cout << "Sum = " << sum;
    return 0;
}
