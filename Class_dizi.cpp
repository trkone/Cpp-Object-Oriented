#include <iostream>
using namespace std;

class Personel
{
public:
	char ad[25];
	char soyad[25];
	long long  tc_no;
};

int main()
{
	Personel a1={"Mahmut","Karabas",27123122321};
	
	cout<<"Adi....:"<<a1.ad<<endl;
	cout<<"Soyadi.:"<<a1.soyad<<endl;
	cout<<"TC_NO..:"<<a1.tc_no<<endl;
	
	/////////////////////////////
	
	Personel *d1=new Personel[5];
	
	for(int s=0; s<5; s++)
	{
		cout<<s+1<<". Numarali kisinin adi........:";
		cin>>d1[s].ad;
		
		cout<<s+1<<". Numarali kisinin soyadi.....:";
		cin>>d1[s].soyad;
		
		cout<<s+1<<". Numarali kisinin Tc'si......:";
		cin>>d1[s].tc_no;
	}
	
	for(int s=0; s<5; s++)
	{
		cout<<s+1<<". Adi.....:"<<d1[s].ad<<endl;
		cout<<s+1<<". Soyadi..:"<<d1[s].soyad<<endl;
		cout<<s+1<<". TC_si...:"<<d1[s].tc_no<<endl;
	}
	
	return 0;
}
