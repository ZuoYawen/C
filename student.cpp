#include<iostream> 
#include<string>  
using namespace std;

class Stu
{    
public:
	void input();
	void output();
	float teamgrade; //�Ŷӳɼ����� 
	string getNumber()const;//׼��֤�Ų��ɱ� 

private:  	
string number[20];  	
string name[20]; 	 	   	
double  grade[20];  
};  


void Stu::input()
{					
	//����ѧ����Ϣ  		  		
	for (int i = 0; i < 3; i++)
	{  			
		cout << "��" << i + 1 << "��ѧ��������" << endl;    
		cin >> name[i];
		  			

		cout << "��" << i + 1 << "��ѧ��׼��֤�ţ�" << endl;  	
		cin >> number[i];
 

		cout << "��" << i + 1 << "��ѧ�����˳ɼ���" << endl;  			
		cin >> grade[i];
	}  

	cout << "�Ŷӳɼ���" << endl;  	
	cin >> teamgrade;
	cout <<  endl;  
}  

void Stu::output()
{				
	//���ѧ����Ϣ  	
	for (int i = 0; i < 3; i++)
	{  		
		cout << "����:" << name[i] << "\t" << "׼��֤��:" << number[i] <<"\t "<<"���˳ɼ�:"<< grade[i] <<endl;
	}  
	cout << "�Ŷӳɼ���" << teamgrade << "\n" << endl;
}   

int main()
{  	
	Stu stu;  	

	stu.input();  	
	stu.output(); 

	return 0;  
} 
