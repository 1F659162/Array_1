#include <iostream>
#include <string>
using namespace std;
void ListStudent(string name[1000] , int , int score[1000]);
char Calgrade (int);
int main()
{
	string name[1000] ;
	int score[1000];
	int num ;
	
	cout << "Input Number of Student : ";
	cin >> num;
	for(int i = 0 ; i < num ; i++)
	{
		cout << "Input Name "<< i+1 << " : ";
		cin >> name[i] ;
		cout << "Input Score "<< i+1 << " : ";
		cin >> score[i] ;
		cout << endl;
	}
	ListStudent(name , num , score);
	return 0 ;
}

void ListStudent(string name[1000] , int num , int score[1000])
{
	for(int i = 0 ; i < num ; i++)
	{
		cout << "Student Name : " << name[i] <<"\tScore = " << score[i];
		cout << "\tYour grade is " << Calgrade(score[i]) << endl;
	}
}

char Calgrade(int score)
{
	if (score >= 80 && score <= 100) return('A');
	else if (score >= 70 && score <= 79) return('B');
	else if (score >= 60 && score <= 69) return('C');
	else return('D');
} 