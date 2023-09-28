#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(1, 100);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

bool palindromArray(int arr[3], int length)
{
	return (arr[0] == arr[length - 1]);
}

void isPalindromMatrix(int arr[3][3], int Rows, int Colos)
{
	string result = "";

	for (int i = 0; i < Rows; i++)
	{
		if(palindromArray(arr[i], Rows))
			result = "Yes: Matrix is Palindrom";
		else
			result = "No: Matrix is not Palindrom";
	}
	cout << result << endl;
}

int main()
{
	srand((unsigned)time(NULL));

	//int arr1[3][3];

	int arr1[3][3] = { {1,0,1},{0, 2, 0},{2, 0, 2} };
	int arr2[3][3] = { {1,5,1},{7, 2, 7},{102, 50, 101} };
	//fill3X3MatrixWithRandomNumbers(arr1, 3, 3);

	cout << " The Matrix1 is: \n";
	printMatrix3X3(arr1, 3, 3);
	isPalindromMatrix(arr1, 3, 3);

	cout << " The Matrix2 is: \n";
	printMatrix3X3(arr2, 3, 3);
	isPalindromMatrix(arr2, 3, 3);





	return 0;
}



