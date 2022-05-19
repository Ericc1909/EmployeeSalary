#pragma once
#include"Employees.h"

//Viết lớp HourlyEmployees để đọc loại nhân viên HourlyEmployees trong file
// Lớp này kế thừa public từ lớp Employees
class HourlyEmployees :public Employees
{
private:
	int TotalHours; //thuộc tính TotalHours riêng của loại nhân viên HourlyEmployees
public:
	//Constructor and Destructor
	HourlyEmployees();
	~HourlyEmployees();
	long Payment(); //Hàm tính lương
	void ReadFile(fstream& f); //Hàm đọc file
	void Output();// Hàm xuất ra màn hình
};

