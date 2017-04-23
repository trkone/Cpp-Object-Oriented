#include <iostream>

class Daire
{
private:
	const double pi=3.14;
	double yaricap;
	
	
public:
	friend void alan(Daire &d1);
	Daire(double a)
	{
		yaricap=a;
	}
};

void alan(Daire &d1)
{
	std::cout<<"Alan...:"<<d1.pi*d1.yaricap*d1.yaricap<<std::endl;
}

int main()
{
	Daire a1(2.1);
	alan(a1);
	
	return 0;
}
