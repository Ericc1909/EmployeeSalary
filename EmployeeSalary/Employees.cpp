#include "Employees.h"

//Hàm Constructor khởi tạo các thuộc tính của Employees
Employees::Employees()
{
	this->EmployeeID = "";
	this->Names = "";
	this->Money = 0;
}

Employees::~Employees()
{
	
}

string Employees::Getter_EmployeeID()
{
	return this->EmployeeID;
}

string Employees::Getter_Names()
{
	return this->Names;
}

int Employees::Getter_Money()
{
	return this->Money;
}

//Do tất cả các loại nhân viên đều có tên nên hàm xuất chung ở Employees sẽ xuất tên, còn xuất thông tin ở các lớp khác sẽ dùng kế thừa
void Employees::Output()
{
	cout << "Name: " << this->Names << endl;
}