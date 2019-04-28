#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class CTML 
{
public:
	CTML();
	~CTML();
	void head();
	void p();
	void h1();
	void h2();
	void h3();
	void h4();
	void h5();
	void h6( );
	void hr();
	void br();
	void finish();
private:
	ofstream stream;
};

void CTML::head() 
{
	string head;
	cout << "Enter head: ";
	
	//fflush(stdin); getline(cin, head);
	cin >> head;
	stream << "<head><title>" <<head << "</title></head>";
}
void CTML::p() 
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin);
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin);
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<p style=\"color:" << color << ";font-size:" << size << ";\">" << n << "</p>";
}

void CTML::h1() 
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin); 
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin); 
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin); 
	getline(cin, size);
	stream << "<h1 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h1>";
}
void CTML::h2() 
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin); 
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin); 
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<h2 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h2>";
}
void CTML::h3() 
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin);
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin);
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<h3 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h3>";
}
void CTML::h4()
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin);
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin);
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<h4 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h4>";
}
void CTML::h5()
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin);
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin);
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<h5 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h5>";
}
void CTML::h6() 
{
	string n, color, size;
	cout << "Enter what you want to write: ";
	fflush(stdin);
	getline(cin, n);
	cout << "\nEnter color: ";
	fflush(stdin);
	getline(cin, color);
	cout << "\nEnter font size: ";
	fflush(stdin);
	getline(cin, size);
	stream << "<h6 style=\"color: " << color << ";font-size:" << size << ";\">" << n << "</h6>";
}
CTML::CTML() {
	stream.open("D:\\HTML_sample.html");
	stream << "<!DOCTYPE html><html>";
}
CTML::~CTML() 
{
	stream.close(); 
}
void CTML::hr() 
{
	stream << "<hr>"; 
}
void CTML::br()
{
	stream << "<br>";
}
void CTML::finish()
{
	stream << "<!DOCTYPE html><html></html>"; 
}



int main() 
{
	CTML c1;
	int n;
	int control = 1;
	while (control == 1)
	{
		cout << "Enter 1 to insert head" << endl;
		cout << "Enter 2 to insert body" << endl;
		cin >> n;
		cin.ignore();
		//fflush(stdin);
		if (n == 1)		//set head
		{
			c1.head();
			cout << "Enter 1 to continue otherwise enter another number: \n";
			cin >> control;
			cin.ignore();
		}
		if (n == 2)		//set body
		{
			int m;
			int controlm = 1;
			while (controlm == 1)
			{
				cout << "Enter 1 to insert paragraph" << endl;
				cout << "Enter 2 to insert h1" << endl;
				cout << "Enter 3 to insert h2" << endl;
				cout << "Enter 4 to insert h3" << endl;
				cout << "Enter 5 to insert h4" << endl;
				cout << "Enter 6 to insert h5" << endl;
				cout << "Enter 7 to insert h6" << endl;
				cout << "Enter 8 to insert hr" << endl;
				cout << "Enter 9 to insert br" << endl;
				cout << "Enter 0 to finish" << endl;
				cin >> m;
				cin.ignore();
				if (m == 0)
				{
					return 0;
				}
				else if (m == 1)
				{

					c1.p();
				}
				else if (m == 2)
				{
					c1.h1();
				}
				else if (m == 3)
				{

					c1.h2();
				}
				else if (m == 4)
				{

					c1.h3();
				}
				else if (m == 5)
				{

					c1.h4();

				}
				else if (m == 6)
				{

					c1.h5();

				}
				else if (m == 7)
				{
					c1.h6();

				}
				else if (m == 8)
				{
					c1.hr();
				}
				else if (m == 9)
				{
					c1.br();
				}
				cout << "Enter 1 to continue editing the body otherwise enter another number: \n";
				cin >> controlm;
				cin.ignore();
			}
			cout << "Enter 1 to continue otherwise enter another number: \n";
			cin >> control;
			cin.ignore();
		}
	}
	c1.finish();
	return 0;
}