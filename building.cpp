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
		cout << "地址：" << address << endl;
		cout << "楼号：" << buildingNum << endl;
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
		cout << "房号：" << houseNum << endl;
		cout << "面积：" << area << "平方米" << endl;
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
		cout << "办公室名称：" << officeName << endl;
		cout << "电话号码：" << phoneNum << endl;
	}

};




int main() {
	Building building("11公寓", 11);
	House house(223, 25);
	Office office("办公室", "123456");

	building.output();
	house.output();
	office.output();

	return 0;
}
