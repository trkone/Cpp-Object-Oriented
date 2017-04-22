#include <iostream>
using namespace std;

class Kare
{
private:
	int uzun,kisa;
	
public:
	Kare(int a,int b)
	{
		uzun=a;
		kisa=b;
	}
	
	Kare(Kare &a1)
	{
		uzun=a1.uzun;	
		kisa=a1.kisa;
	}

	void alan()
	{
		cout<<"Alan....:"<<uzun*kisa<<endl;
	}
};

int main()
{
	Kare g1(20,30);
	g1.alan();
	
	Kare knesne(g1);
	
	knesne.alan();
	
	return 0;
}
