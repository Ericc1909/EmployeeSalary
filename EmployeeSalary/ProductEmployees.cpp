#include "ProductEmployees.h"

//Constructor ProducrEmployees với thuộc tính riêng là TotalProduct
ProductEmployees::ProductEmployees()
{
	this->TotalProducts = 0;
}
ProductEmployees::~ProductEmployees()
{

}

//Hàm đọc file tương tự DailyEmployees do kết cấu thông tin giống nhau
void ProductEmployees::ReadFile(fstream& f)
{
	string temp = "";
	getline(f, temp);
	this->Names = temp.substr(1);
	getline(f, temp, '=');
	string Str_Money = "";
	getline(f, Str_Money, '$');
	this->Money = stoi(Str_Money);
	getline(f, temp, '=');
	f >> this->TotalProducts;
	getline(f, temp);
}

//Hàm tính lương
long ProductEmployees::Payment()
{
	return TotalProducts * Money;
}

//Hàm xuất
void ProductEmployees::Output()
{
	Employees::Output();
	cout << "Payment: " << this->Payment() << endl;
}