#include<iostream>

using namespace std;

class Employee
{
	double salary;
	int hrs;
	
	public:
	Employee() {
		salary=0;
		hrs=0;
	}
	void getInfo()
	{
		cout << "Please, enter the salary of employee: ";
		cin >> salary;
		cout << "Please, enter the number of hours: ";
		cin >> hrs;
	}
	void AddSal()
	{
		if (salary < 500)
			salary += 10;
	}
	void AddWork()
	{
		if (hrs > 6)
			salary += 5;
	}
	void Dis_Sal()
	{
		cout << salary;
	}


};


int main()
{
	int num;
	cout << "Enter the number of employees: ";
	cin >> num;
	Employee* emp=new Employee[num];
	for (int i = 0; i < num; i++)
	{
		emp[i].getInfo();
		emp[i].AddSal();
		emp[i].AddWork();
	}
	for (int i = 0; i < num; i++)
	{
		cout << "\nThe total salary of employee ["<<i+1<<"] is:";
		emp[i].Dis_Sal();
	}
}