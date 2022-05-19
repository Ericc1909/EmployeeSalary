#include "CompanyOmega.h"
#include "Employees.h"

CompanyOmega::CompanyOmega()
{
}

CompanyOmega::~CompanyOmega()
{
}


//Hàm đọc file chính nó sẽ ở trong công ty, sẽ đọc và phân loại từng nhân viên
void CompanyOmega::ReadFile(string filename)
{
	fstream f;
	f.open(filename, ios::in);
	//Sử dụng các chuỗi tương ứng với loại nhân viên để so sánh trong lúc đọc file, nhằm biết nhân viên đó thuộc loại nào
	string DEID = "DailyEmployee";
	string HEID = "HourlyEmployee";
	string PEID = "ProductEmployee";
	string MAID = "Manager";
	Employees* E; //Khởi tạo con trỏ lớp Employees
	if (f.is_open())
	{
		while (!f.eof())
		{
			string temp = "";
			getline(f, temp, ':');//Đọc từ đầu đòng đến dấu ':' sau đó lưu chuỗi này vào temp
			if (temp == DEID) //So sánh xem nó là loại nhân viên nào
			{
				//Factory Design Pattern
				E = new DailyEmployees; //Nếu chuỗi đó là loại DailyEmployees thì tạo mới, sau đó đọc file 
				E->ReadFile(f);
			}
			//Tương tự với các loại còn lại
			else if (temp == HEID)
			{
				//Factory Design Pattern
				E = new HourlyEmployees;
				E->ReadFile(f);
			}
			else if (temp == PEID)
			{
				//Factory Design Pattern
				E = new ProductEmployees;
				E->ReadFile(f);
			}
			else if(temp == MAID)
			{
				//Factory Design Pattern
				E = new Manager;
				E->ReadFile(f);
			}

			//Lưu nó vào list
			list.push_back(E);
		}
	}
}

//Hàm xuất tất cả thông tin
void CompanyOmega::Output()
{
	for (int i = 0; i < list.size(); i++)
	{
		list[i]->Output();
	}
}