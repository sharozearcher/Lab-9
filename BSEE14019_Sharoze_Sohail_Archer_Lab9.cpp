#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

class band
{
	
	protected:
		int count;		
		
	public:
		string name;
		int check;
	    virtual void set_members(int mem)=0;
		void set_name(string a);
		int members(void);
		
		band()
		{
			count=0;
			check=0;
		}
		
};

void band::set_name(string a)
	{
		this->name=a;
	}
	
int band::members()
	{
		return this->count;
	}
	
class metal: public band
{
	public:
	void set_members(int mem);
};


void metal::set_members(int mem)


	{
		count=mem;
		int pyro;
		
		if(check==0)
		{
			cout<<"Please enter the number of pyrotechnicians: ";
			cin>>pyro;
			count+=pyro;
			check=1;
			return;
		}
		if(check==1)
		{
			cout<<"Pyrotechnicians Available. Remove them?\nPress:1 to proceed: ";
			int lo;
			cin>>lo;
			if (lo==1)
			{
				check=0;
				cout<<"\nRemoved.";
				return;
			}
			cout<<"\nNot Removed.";
			return;
		}
	}

class symphony: public band
{
	public:
	void set_members(int mem);
};

void symphony::set_members(int mem)

	{
		count=mem;
		
		if(check==0)
		{
			cout<<"Press return to add conductor <return>";
			getch();
			count++;
			return;
		}
		if(check==1)
		{
			cout<<"Conductor already available.\nPress return to remove conductor <return>";
			getch();
			return;
		}
	}

class jazz: public band
{
	public:
	void set_members(int mem);
};

void jazz::set_members(int mem)

	{
		count=mem;
		
	}
	
class marching: public band
{
	public:
	void set_members(int mem);
};

void marching::set_members(int mem)

	{
		count=mem;
		
		if(check==0)
		{
			cout<<"Press return to add conductor <return>";
			getch();
			count++;
			return;
		}
		if(check==1)
		{
			cout<<"Conductor already available.\nPress return to remove conductor <return>";
			getch();
			return;
		}
	}


int main(void)
{
	metal a;
	cout<<"\n__________________METAL BAND_________________\n";
	string b="Metal YOLO band";
	a.set_name(b);
	int na;cout<<"\nPlease enter the number of members: ";cin>>na;
	a.set_members(na);
	cout<<"\nName of the Band: "<<a.name;
	cout<<"\nTotal Band Members: "<<a.members();
	
	symphony x;
	cout<<"\n\n__________________SYMPHONY BAND_________________\n";
	string y="YOLO strings band";
	x.set_name(y);
	int an;cout<<"\nPlease enter the number of members: ";cin>>an;
	x.set_members(an);
	cout<<"\n\nName of the Band: "<<x.name;
	cout<<"\nTotal Band Members: "<<x.members();
	
	marching x1;
	cout<<"\n\n__________________MARCHING BAND_________________\n";
	string y1="YOLO marching band";
	x1.set_name(y1);
	int an1;cout<<"\nPlease enter the number of members: ";cin>>an1;
	x1.set_members(an1);
	cout<<"\n\nName of the Band: "<<x1.name;
	cout<<"\nTotal Band Members: "<<x1.members();
	
	jazz x2;
	cout<<"\n\n__________________JAZZ BAND_________________\n";
	string y2="YOLO na-jazz band";
	x2.set_name(y2);
	int an2;cout<<"\nPlease enter the number of members: ";cin>>an2;
	x2.set_members(an2);
	cout<<"\n\nName of the Band: "<<x2.name;
	cout<<"\nTotal Band Members: "<<x2.members();
	return 0;
}
