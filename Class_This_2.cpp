#include <iostream>
using namespace std;

class Daire
{
private:
	double s1;
	const double PI=3.14;
public:
	
	Daire(int s1)
	{
		s1=s1;
	}
	
	void alan()
	{
		cout<<"Alan.....:"<<s1*s1*PI<<endl;
	}
};

class Daire2
{
private:
	double s1;
	const double PI=3.14;
public:
	
	Daire2(int s1)
	{
		this->s1=s1;
	}
	
	void alan()
	{
		cout<<"Alan.....:"<<s1*s1*PI<<endl;
	}
};


int main()
{
	Daire a4(3.1);
	
	a4.alan();
	
	Daire2 d4(2.4);
	
	d4.alan();
	
	return 0;
}
