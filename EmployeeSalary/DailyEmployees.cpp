#include "DailyEmployees.h"

//Constructor DailyEmployees với thuộc tính riêng là TotalDays
DailyEmployees::DailyEmployees()
{
	this->TotalDays = 0;
}
DailyEmployees::~DailyEmployees()
{}

//Hàm đọc file để lưu các thông tin vào từng loại nhân viên
void DailyEmployees::ReadFile(fstream &f)
{
	string temp = "";
	getline(f, temp);
	this->Names = temp.substr(1);// Xóa dấu cách ở phần đầu của tên
	getline(f, temp, '=');
	string Str_Money = "";
	getline(f, Str_Money, '$');//Lấy được số tiền nhưng ở string
	this->Money = stoi(Str_Money);//Chuyển từ string về kiểu số nguyên
	getline(f, temp, '=');
	f >> this->TotalDays;//Lấy các ký tự sau dấu bằng để lưu vào TotalsDay
	getline(f, temp);
}

//Hàm tính lương của DailyEmployees
long DailyEmployees::Payment()
{
	return TotalDays * Money;
}

//Hàm xuất của DailyEmployees
void DailyEmployees::Output()
{
	Employees::Output();
	cout << "Payment: " << this->Payment() << endl;
}