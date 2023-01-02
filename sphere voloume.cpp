#include<iostream>
#include<cmath>
using namespace std;
int spherevol(int x)

{
	double vol;
	vol=4.0/3.0 * 3.14159 * pow(x,3);
	return vol;
}
int main()
{
	int r;
    cout<<"enter number : ";
	cin>>r;
	cout<<"sphere nolume = "<<spherevol(r);
}
