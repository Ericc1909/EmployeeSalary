#include "HourlyEmployees.h"


//Constructor HourlyEmployees với thuộc tính riêng là TotalHours
HourlyEmployees::HourlyEmployees()
{
	this->TotalHours = 0;
}
HourlyEmployees::~HourlyEmployees()
{

}

//Hàm đọc file tương tự DailyEmployees do kết cấu thông tin giống nhau
void HourlyEmployees::ReadFile(fstream& f)
{

	string temp = "";
	getline(f, temp);
	this->Names = temp.substr(1);
	getline(f, temp, '=');
	string Str_Money = "";
	getline(f, Str_Money, '$');
	this->Money = stoi(Str_Money);
	getline(f, temp, '=');
	f >> this->TotalHours;
	getline(f, temp);
}

//Hàm tính lương 
long HourlyEmployees::Payment()
{
	return TotalHours * Money;
}

//Hàm xuất
void HourlyEmployees::Output()
{
	Employees::Output();
	cout << "Payment: " << this->Payment() << endl;
}