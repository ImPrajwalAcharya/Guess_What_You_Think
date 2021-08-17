#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int a, b, c, d, e, f,g, result;
char num, num2, num3, num4, num5, num6,num7;

int main()
{
		cout << "\t\t\t\t\tThink of a number Range from 1 to 100 and answer each step." << endl;
		system("pause");
		cout << "Is your number in here?" << endl;
		cout << "\n1, 3, 5, 7, 9, 11, 13, 15 17, 19, 21, 23, 25, 27,29, 31, 33, 35, 37, 39 ,41, 43, 45, 47, 49, 51,"<<endl ;
		cout << "\n53, 55, 57, 59, 61, 63, 65, 67, 69, 71, 73, 75, 77, 79, 81, 83, 85, 87, 89, 91, 93, 95, 97, 99 ";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num;
		if ( num == 'Y' || num == 'y')
			a = 1;

		cout << "\nIs your number in here?" << endl;
		cout << "\n2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31, 34, 35, 38, 39, 42, 43, 46, 47, 50, 51 "<<endl;
		cout<<"\n54, 55, 58, 59, 62, 63, 66, 67, 70, 71, 74, 75, 78, 79, 82, 83, 86, 87, 90, 91, 94, 95, 98, 99 ";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num2;
		if ( num2 == 'Y' || num2 == 'y')
			b = 2;

		cout << "\nIs your number in here?" << endl;
		cout << "\n4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31, 36, 37, 38, 39, 44, 45, 46, 47, 52" <<endl;
		cout<<"\n53, 54, 55, 60, 61, 62, 63, 68, 69, 70, 71, 76, 77, 78, 79, 84, 85, 86, 87, 92, 93 94, 95, 100 ";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num3;
		if ( num3 == 'Y' || num3 == 'y')
			c = 4;

		cout << "\nIs your number in here?" << endl;
		cout << "\n8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31, 40, 41, 42, 43, 44, 45, 46, 47"<<endl ;
		cout<<"\n56, 57, 58, 59, 60, 61, 62, 63, 72, 73, 74, 75, 76, 77, 78, 79, 88, 89, 90, 91, 92, 93, 94, 95";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num4;
		if ( num4 == 'Y' || num4 == 'y')
			d = 8;

		cout << "\nIs your number in here?" << endl;
		cout << "\n16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 48, 49, 50, 51, 52, 53, 54, 55"<<endl;
		cout<<"\n 56, 57, 58, 59, 60, 61, 62, 63, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95 ";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num5;
		if ( num5 == 'Y' || num5 == 'y')
			e = 16;

		cout << "\nIs your number in here?" << endl;
		cout << "\n32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49,"<<endl;
		cout<<"\n50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 96, 97, 98, 99, 100 ";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num6;
		if ( num6 == 'Y' || num6 == 'y')
			f = 32;
cout << "\nIs your number in here?" << endl;
		cout << "\n64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81" << endl;
		cout<<"\n82, 83, 84, 85, 86, 86, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100";
		cout << " " << endl;
		cout << "y/n?" << endl;
		cout << " " << endl;
		cin >> num7;
		if ( num7 == 'Y' || num7 == 'y')
			g = 64;
		result = a+b+c+d+e+f+g;
		if(result>100){
                cout<<"\n One or More of your answer Invalid"<<endl;

		}
		else{
		cout << "\n\t\t\t============================BOOM===========================";
		cout << "\n\t\t\t\t\tI Got the number you are Thinking :" << result << "." << endl;}
		cout << endl;
	return 0;
}