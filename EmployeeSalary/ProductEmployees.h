#pragma once
#include"Employees.h"

//Viết lớp ProductEmployees để đọc loại nhân viên ProductEmployees trong file
// Lớp này kế thừa public từ lớp Employees
class ProductEmployees:public Employees
{
private:
	int TotalProducts;  //thuộc tính TotalProducts riêng của loại nhân viên ProductEmployees
public:
	//Constructor and Destructor
	ProductEmployees();
	~ProductEmployees();
	void ReadFile(fstream& f); //Hàm đọc file
	long Payment();//Hàm tính lương
	void Output();// Hàm xuất ra màn hình
};

