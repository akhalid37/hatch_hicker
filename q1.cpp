#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class divorce
{
private:
	

	int r;
	string nameM, nameF;
	string financialissue;
	int ageM, ageF;
	int yearsofmarriage;
	string occupM, occupF;
	string finance;
	string affair, outiders;
	int timespenttogether;
	int children;
	string reasons[100];
	
public:
	

	void personalinfoset()
	{
		cout << "Fill out the following Info Form" << endl;
		char c;
		cout << "Name of the husband" << endl;
		cin.ignore();
		getline(cin, nameM);
		cout << "Name of the wife" << endl;
		cin.ignore();
		getline(cin, nameF);
		cout << "Enter the age of Husband" << endl;
		cin >> ageM;
		cout<<"Enter the age of wife" << endl;
		cin >> ageF;
		cout << "Enter the years of marriage" << endl;
		cin >> yearsofmarriage;
		cout << "Does the couple have children\n.Press y for yes.Press n for no." << endl;
			cin >> c;
			if (c == 'y')
			{
				cout << "Enter the no. of children" << endl;
				cin >> children;
			}

			else if (c = 'n')
			{
				children = NULL;
			}
			cout << "What is the occupation of husband?" << endl;
			cin.ignore();
			getline(cin, occupM);
			cout << "What is the occupation of wife?" << endl;
			cin.ignore();
			getline(cin, occupF);
			cout << "What is the financial status of the family" << endl;
			getline(cin, finance);









	}
	void personalinfoget()
	{
		ofstream myfile("Divorce Case.txt");

		cout << "Husband Name:" << nameM << endl;
		cout << "Wife Name:" << nameF << endl;
		cout << "Husband's Age:" << ageM << endl;
		cout << "Wife's Age:" << ageF << endl;
		cout << "Years of Marriage:" << yearsofmarriage << endl;
		cout << "Husband's Occupation:" <<  occupM << endl;
		cout << "Wife's Occupation:" << occupF <<  endl;
		cout << "No. of Children:" << children << endl;
		cout << "Status of the family:" << finance << endl;
		myfile << "Husband Name:" << nameM << endl 
			<< "Wife Name:" << nameF << endl
			<<"Husband's Age:" << ageM<<endl
			<< "Wife's Age:" << ageF << endl
		<< "Years of Marriage:" << yearsofmarriage << endl
		<< "Husband's Occupation:" << occupM << endl
		<< "Wife's Occupation:" << occupF << endl
		<< "No. of Children:" << children << endl
			<< "Status of the family:" << finance;
		myfile.close();
		
		

	}

	void reasonset()
	{
		char i;
		int reason=0;

		cout << "In order to help us out in the possible reasons of divorce,Please answer the following questions" << endl;
		
		


		cout << "how many are the possible reasons for this divorce?" << endl;
		cin >> r;


		for (int i = 1; i <= r; i++)
		{
			string reason;

			cout << "Enter the reason no. " << i << endl;
			cin.ignore();
			getline(cin, reason);
			reasons[i] = reason;



		}



	}
	void reasonget()
	{
		ofstream myfile("Divorce Case.txt");
		cout << "The Reasons which lead to Divorce are:" << endl;
		for (int i = 1; i <= r; i++)
		{
			cout << "Reason " << i << "\t" << reasons[i] << endl;
			
		}
		myfile << reasons[r];
		system("pause");
		myfile.close();
	}
};
void main()
{
	int x;
	cout << "This Program tries to look for the reasons of divorce between a couple" << endl;
		
	divorce divorce1;
	divorce1.personalinfoset();
	
	divorce1.reasonset();
	cout << "\n\n\n\n\nCase of the divorce is as follow" << endl;
	divorce1.personalinfoget();

	divorce1.reasonget();
	cout << "Want to study another case?\n1.Yes\n2.No" << endl;
	cin >> x;
	if (x == 1)
	{
		divorce d2;
		d2.personalinfoset();
		d2.personalinfoset();
		d2.reasonset();
		d2.personalinfoset();
		d2.reasonget();

	}
	
}