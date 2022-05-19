#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//Tạo lớp Employees để làm lớp cha cho các nhân viên
class Employees
{
// Khai báo các thuộc tính chung có ở tất cả các lớp
protected:
	string EmployeeID; // Loại nhân viên
	string Names; //Tên nhân viên
	int Money; //Số tiền lương để nhân cho thuộc tính riêng của mỗi loại nhân viên
public:
	//Constructor and Destructor
	Employees();
	~Employees();
	// Viết các hàm chức năng, dùng virtual để đa hình các hàm của các loại nhân viên
	virtual long Payment() = 0; // hàm tính lương
	virtual void Output(); //hàm xuất
	virtual void ReadFile(fstream& f) = 0; // hàm đọc file
public: //getter, setter
	string Getter_EmployeeID();
	string Getter_Names();
	int Getter_Money();
};

