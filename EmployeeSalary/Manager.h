#pragma once
#include"Employees.h"

//Viết lớp Manager để đọc loại nhân viên Manager trong file
// Lớp này kế thừa public từ lớp Employees
class Manager: public Employees
{
private:
	//thuộc tính TotalEmployees và FixedPayment riêng của loại nhân viên Manager
	int TotalEmployees;
	int FixedPayment;
public:
	//Constructor and Destructor
	Manager();
	~Manager();
	void ReadFile(fstream& f); //Hàm đọc file
	long Payment();//Hàm tính lương
	void Output();// Hàm xuất ra màn hình
};

