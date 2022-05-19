#pragma once
#include"DailyEmployees.h"
#include"HourlyEmployees.h"
#include"ProductEmployees.h"
#include"Manager.h"
#include<vector>

//Tạo class CompanyOmega để lưu trữ thông tin tất cả nhân viên
class CompanyOmega
{
private:
	vector<Employees*>list;//Dùng vecto để tạo list lưu thông tin
public:
	//Constructor and Destructor
	CompanyOmega();
	~CompanyOmega();
	void ReadFile(string filename);//Hàm đọc file
	void Output();// Hàm xuất ra màn hình
};

