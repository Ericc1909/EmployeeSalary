#include "Manager.h"

//Constructor Manager với thuộc tính riêng là FixedPayment và TotalEmployees
Manager::Manager()
{
	this->FixedPayment = 0;
	this->TotalEmployees = 0;
}
Manager::~Manager()
{

}

//Dựa vào file các thông tin về Manager để thực hiện đọc file
void Manager::ReadFile(fstream& f)
{
	string temp = "";
	getline(f, temp);
	this->Names = temp.substr(1); //Xóa ký tự khoảng trắng sau dấu ':' để lấy được tên
	
	getline(f, temp, '=');
	string Str_Fixed = "";
	getline(f, Str_Fixed, '$');//Tiếp tục xuống đọc đến dấu bằng sau đó lấy ký tự đến '$' để lấy ra FixedPayment, nhưng nó đang ở kiểu string
	this->FixedPayment = stoi(Str_Fixed); //Dùng hàm stoi để chuyển sang số nguyên và lưu lại

	getline(f, temp, '=');
	string Str_Employees = "";
	getline(f, Str_Employees, ';'); //Tiếp tục đọc đến dấu bằng sau đó lấy ký tự đến ';' để lấy ra TotalEmployees, nhưng nó đang ở kiểu string
	this->TotalEmployees = stoi(Str_Employees); //Tương tự như trên, dùng hàm stoi để chuyển sang số nguyên và lưu lại
	
	getline(f, temp, '=');
	string Str_Money = "";
	getline(f, Str_Money, '$');//Tiếp tục đọc đến dấu bằng sau đó lấy ký tự đến '$; để lấy raMoney, nhưng nó đang ở kiểu string
	this->Money = stoi(Str_Money);//Tương tự như trên, dùng hàm stoi để chuyển sang số nguyên và lưu lại
}

//Hàm tính lương
long Manager::Payment()
{
	return TotalEmployees * Money + FixedPayment;
}

//Hàm xuất 
void Manager::Output()
{
	Employees::Output();
	cout << "Payment: " << this->Payment() << endl;
}