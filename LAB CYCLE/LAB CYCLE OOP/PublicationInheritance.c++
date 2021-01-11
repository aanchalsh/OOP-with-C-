#include<iostream>
#include<string>
using namespace std;
class Publication
{
	private:
		string title;
		int price;
	public:
		void getdata()
		{
			cout<<"\nEnter title	:";
			cin>>title;
			cout<<"\nEnter price	:";
			cin>>price;
		}
		void displaydata()
		{
			cout<<"\nTitle			:"<<title;
			cout<<"\nPrice			:"<<price;
		}
};

class Book : public Publication
{
	private:
		int pagecount;
	public:
		void getdata()
		{
			Publication ::  getdata();
			cout<<"\nEnter no. of pages:";
			cin>>pagecount;
		}
		void displaydata()
		{
			Publication ::  displaydata();
			cout<<"\nBook page(s) count	:"<<pagecount;
		}
	
};

class Tape : public Publication
{
	private:
		int time;
	public:
		void getdata()
		{
			Publication ::  getdata();
			cout<<"\nEnter time of tape play(in hours)	:";
			cin>>time;
		}
		void displaydata()
		{
			Publication ::  displaydata();
			cout<<"\nTime of tape play is	:"<<time<<" hours.";
		}
};

int main()
{
	Book b;
	Tape t;
	cout<<"\nBOOK DATA\n"<<endl;
	b.getdata();
	b.displaydata();
	cout<<"\nTAPE DATA\n"<<endl;
	
	t.getdata();
	t.displaydata();
	return 0;
}
