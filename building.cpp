#include<iostream>
#include<string>

using namespace std;


class Building {
protected:
	string address;
	int buildingNum;      
	
public:
	Building(const string Address = " ", int BuildingNum = 0)
	{
		address = Address;
		buildingNum = BuildingNum;
	}

	void output()
	{
		cout << "��ַ��" << address << endl;
		cout << "¥�ţ�" << buildingNum << endl;
	}
};




class House :public Building {

protected:
	int houseNum;          
	int area;             
	
public:
	House(int HouseNum = 0 , int Area = 100) 
	{
		houseNum = HouseNum;
		area = Area;
	}

	void output() {
		cout << "���ţ�" << houseNum << endl;
		cout << "�����" << area << "ƽ����" << endl;
	}

};

class Office :public Building {
protected:
	string officeName;	
	string phoneNum;		
	
	
public:
	Office(const string OfficeName = "", string PhoneNum = "") {
		officeName = OfficeName;
		phoneNum = PhoneNum;
	}

	void output() {
		cout << "�칫�����ƣ�" << officeName << endl;
		cout << "�绰���룺" << phoneNum << endl;
	}

};




int main() {
	Building building("11��Ԣ", 11);
	House house(223, 25);
	Office office("�칫��", "123456");

	building.output();
	house.output();
	office.output();

	return 0;
}
