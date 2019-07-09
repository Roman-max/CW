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





	const int  ROW = 5;
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
	}

	system("pause");
	return 0;
}