#include<iostream> 
#include<string>  
using namespace std;

class Stu
{    
public:
	void input();
	void output();
	float teamgrade; //团队成绩共享 
	string getNumber()const;//准考证号不可变 

private:  	
string number[20];  	
string name[20]; 	 	   	
double  grade[20];  
};  


void Stu::input()
{					
	//输入学生信息  		  		
	for (int i = 0; i < 3; i++)
	{  			
		cout << "第" << i + 1 << "个学生姓名：" << endl;    
		cin >> name[i];
		  			

		cout << "第" << i + 1 << "个学生准考证号：" << endl;  	
		cin >> number[i];
 

		cout << "第" << i + 1 << "个学生个人成绩：" << endl;  			
		cin >> grade[i];
	}  

	cout << "团队成绩：" << endl;  	
	cin >> teamgrade;
	cout <<  endl;  
}  

void Stu::output()
{				
	//输出学生信息  	
	for (int i = 0; i < 3; i++)
	{  		
		cout << "姓名:" << name[i] << "\t" << "准考证号:" << number[i] <<"\t "<<"个人成绩:"<< grade[i] <<endl;
	}  
	cout << "团队成绩：" << teamgrade << "\n" << endl;
}   

int main()
{  	
	Stu stu;  	

	stu.input();  	
	stu.output(); 

	return 0;  
} 
