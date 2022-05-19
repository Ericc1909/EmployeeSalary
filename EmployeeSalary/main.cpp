#include"CompanyOmega.h"

#include<fstream>
#include<string>
using namespace std;


int main()
{
	CompanyOmega Omega;
	Omega.ReadFile("November2021.txt");
	Omega.Output();
}

