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

double TCal::CalLong(double r)//�����ܳ� 
{
	double l = 2 * 3.14 * r;
	return l;


}

double TCal:: CalSize(double r)//������� 
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

//����������ô������С������ٳ��Լ۸�õ����� 
	cin >> r1 ;
	s1=TCal::CalSize(r1);
	s2=TCal::CalSize(r1+3);
	s = s2 - s1;
	guodaoPrice = s * 20;
	cout << "�����۸�Ϊ��" << guodaoPrice << endl;

//դ���ļ۸���Ӿ�ذ뾶���Ϲ�����ȣ������ܳ������Լ۸� 
	double l1;
	l1 = TCal::CalLong(r1+3);
	zhalanPrice = l1 * 35;
	cout << "դ���۸�Ϊ��" << zhalanPrice;

	return 0;
}
