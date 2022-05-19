#pragma once
#include"Employees.h"

//Viết lớp DailyEmployees để đọc loại nhân viên DailyEmployees trong file
// Lớp này kế thừa public từ lớp Employees
class DailyEmployees:public Employees
{
private:
	int TotalDays; //thuộc tính TotalDays riêng của loại nhân viên DailyEmployees
public:
	//Constructor and Destructor
	DailyEmployees();
	~DailyEmployees();
	long Payment();//Hàm tính lương
	void ReadFile(fstream& f); //Hàm đọc file
	void Output();// Hàm xuất ra màn hình
};

