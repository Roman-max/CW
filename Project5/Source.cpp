#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(unsigned(time(NULL)));

	//const int  ROW = 3;
	//const int  COL = 4;
	//int arr[ROW][COL];


	//arr[0][0] = 1;

	//for (int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COL; j++)
	//	{
	//		arr[i][j] = rand() % 20 + 1;
	//	}
	//	cout << endl;
	//}

	//for (int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COL; j++)
	//	{
	//		cout << "arr[" << i << "]"<<"["<<j<<"] = "<<arr[i][j]  <<endl;
	//	}
	//	cout<<endl;
	//}






//	const int ROW = 11;
//	const int COL = 11;
//	int arr[ROW][COL];
//
//	
//	for (int i = 1; i < ROW; i++)
//{
//	for (int j = 1; j < COL; j++)
//	{
//		arr[i][j] = i * j;
//	}
//
//}
//
//for (int i = 1; i < ROW; i++)
//{
//	for (int j = 1; j < COL; j++)
//	{
//		cout << "arr[" << i << "]"<<"*"<<"["<<j<<"] = "<<arr[i][j]  <<endl;
//	}
//	cout<<endl;
//}





	/*const int  ROW = 5;
	const int  COL = 4;
	float arr[ROW][COL];
	float zero = 0,arifme = 0;
	int row1 = 0, col1 = 0,a=0;


	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 40 + -20;
		}
		
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			
			cout << "arr[" << i << "]"<<"["<<j<<"] = "<<arr[i][j]  <<endl;
		}
		
		
		cout<<endl;
		
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			if (arr[i][j] == 0)
			{
				zero += 1;
			}
		}
	}
	cout << "Number zero = "<<zero  << endl;


	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			a = arr[i][j];
			arifme += arr[i][j];
		}
		arifme = arifme / 4;
		cout << "arif = " << arifme << endl;
	}
	



	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{

			cout<<"Enter number = [0] [0];exit = 100"<<endl;
			cin >> row1 >> col1;
			if (row1 == i && col1 == j)
			{
				cout << "Number = "<<arr[i][j] << endl; 
			}
			else if (row1 == 100 || col1 == 100)
			{
				return 0;
			}
			else
			{
				cout << "error" << endl;
			}
		}
	}*/



	//	const int ROW = 5;
	//	const int COL = 4;
	//
	//	
	//	int arr[ROW][COL];
	//
	//
	//	for (int i = 0; i < ROW; i++)
	//{
	//	for (int j = 0; j < COL; j++)
	//	{
	//	arr[i][j] = rand() % 40 + -20;
	//	cout <<"=" << arr[i][j] << endl;
	//	}
	//	cout << endl;
	//}
	//	for (int i = 0; i < 1; i++)
	//	{
	//	int arr = 0;
	//	
	//
	//	}


	//const int NUM = 5;
	//int arr[NUM];

	//for (int i = 0; i < NUM; i++) {
	//	cin >> arr[i];
	//}

	//for (int i = NUM - 1; i >= 1; i--) {
	//	for (int j = 0; j < i; j++) {
	//	if (arr[j] > arr[j + 1]) {
	//	int tmp = 0;
	//	tmp = arr[j];
	//	arr[j] = arr[j + 1];
	//	arr[j + 1] = tmp;
	//	}
	//	}
	//}

	//for (int i = 0; i < 1; i++)
	//{
	//	cout <<"MInimal =  "<<arr[i]<<endl;
	//}

	//for (int i = NUM - 1; i >= 1; i--) {
	//	for (int j = 0; j < i; j++) {
	//	if (arr[j] > arr[j + 1]) {
	//	int tmp = 0;
	//	tmp = arr[j];
	//	arr[j] = arr[j - 1];
	//	arr[j - 1] = tmp;
	//	}
	//	}
	//	cout << arr[i] << endl;
	//}
	//
	//for (int i = 4; i < 5; i++)
	//{
	//	cout << "MAX =  " << arr[i] << endl;
	//}


	//int number = 0;
	//cout << "Enter number" << endl;
	//cin >> number;
	//for (int i = 0; i < 1; i++)
	//{
	//
	 //if (number <=10)
	//{

	//	cout << "Number =" << number * 1 << endl;
	//	cout << "Number =" << number * 2 << endl;
	//	cout << "Number =" << number * 3 << endl;
	//	cout << "Number =" << number * 4 << endl;
	//	cout << "Number =" << number * 5 << endl;
	//	cout << "Number =" << number * 6 << endl;
	//	cout << "Number =" << number * 7 << endl;
	//	cout << "Number =" << number * 8 << endl;
	//	cout << "Number =" << number * 9 << endl;
	//	cout << "Number =" << number * 10 << endl;
	//}
	 //else if (number == 0)
	 //{
	// cout << "error 0 " << endl;
	 //}
	 //   }

	//int a = 0;
	//int number = 5;
	//for (int i = 1; i < 6; i++)
	//{
	//	cout << "Enter number" << endl;
	//	cin>> number;
	//	if (number > 0)
	//	{
	//		a++;
	//	}

	//		cout << "[" << i << "]" << number << endl;
	//		cout << "Number no 0 = "<<a  << endl;
	//}


 //   int num[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "Enter number" << endl;
	//	cin >> num[i];
	//}
	//for (int i = 0; i < 1; i++)
	//{
	//	num[i]=num[0] + num[1] + num[2] + num[3] + num[4];
	//	num[i] /= 5;
	//	cout << "arifmetiche = "<< num[i]  << endl;

	//}

const int NUM = 5;
int arr[NUM];

for (int i = 0; i < NUM; i++)
{
	cout << "Enter number" << endl;
	cin >> arr[i];
}

for (int i = NUM - 1; i >= 1; i--) {
	for (int j = 0; j < i; j++) {
		if (arr[j] > arr[j + 1]) {
			int tmp = 0;
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}
cout << "==============================" << endl;
for (int i = 0; i < NUM; i++)
{
	cout << arr[i] << endl;
}
cout << "==============================" << endl;
for (int i = NUM - 1; i >= 1; i--) {
	for (int j = 0; j < i; j++) {
		if (arr[j] > arr[j + 1]) {
			int tmp = 0;
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
}

for (int i = 0; i < NUM; i++)
{
	cout << arr[i] << endl;
}

	system("pause");
	return 0;
}