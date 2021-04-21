#include<iostream>
using namespace std;

class TCal
{
public:
	double static CalLong(double r);
	double  static CalSize(double r);

private:
	double r;
};

double TCal::CalLong(double r)//计算周长 
{
	double l = 2 * 3.14 * r;
	return l;


}

double TCal:: CalSize(double r)//计算面积 
{
	double s = 3.14 * r * r;
	return s;

}

int main()
{
	double guodaoPrice;
	double zhalanPrice;

	double r1;
	double s1, s2,s;

//过道的面积用大面积减小面积，再乘以价格得到费用 
	cin >> r1 ;
	s1=TCal::CalSize(r1);
	s2=TCal::CalSize(r1+3);
	s = s2 - s1;
	guodaoPrice = s * 20;
	cout << "过道价格为：" << guodaoPrice << endl;

//栅栏的价格用泳池半径加上过道宽度，计算周长，乘以价格 
	double l1;
	l1 = TCal::CalLong(r1+3);
	zhalanPrice = l1 * 35;
	cout << "栅栏价格为：" << zhalanPrice;

	return 0;
}
