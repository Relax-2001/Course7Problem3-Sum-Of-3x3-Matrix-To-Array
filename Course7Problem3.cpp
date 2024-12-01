
#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{

	int RandomNum = rand() % (To - From + 1) + From;

	return RandomNum;
}

void RandomizeMatrixElements(short Arr[3][3], short Rows, short Cols)
{


	for (short i = 0; i < Rows; i++)
	{

		for (short j = 0; j < Cols; j++)
		{
			Arr[i][j] = RandomNumber(1, 100);
		}

	}
}

short RowSum(short Arr[3][3], short Rows, short Cols)
{
	short Sum = 0;

	for (int j = 0; j < Cols; j++)
	{
		Sum += Arr[Rows][j];
	}
	return Sum;
}

void SumMatrixRowsToArray(short Arr[3][3], short SumArray[3], short Rows, short Cols)
{

	for (int i = 0; i < Rows; i++)
	{
		SumArray[i] = RowSum(Arr, i, Cols);
	}

}

void PrintSumArray(short SumArray[3], short Rows)
{

	for (int i = 0; i < Rows; i++)
	{
		printf("Sum of matrix row [%d] = %d\n", i + 1, SumArray[i]);
	}
}

void PrintMatrixElements(short Arr[3][3], short RowNumber, short Cols)
{


	for (short i = 0; i < RowNumber; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << Arr[i][j] << "\t";
		}
		cout << "\n";
	}

}


int main()
{
	srand((unsigned)time(NULL));


	short Arr[3][3];
	short SumArray[3];

	RandomizeMatrixElements(Arr, 3, 3);

	cout << "\n The following are a 3x3 random matrix :\n";
	PrintMatrixElements(Arr, 3, 3);


	SumMatrixRowsToArray(Arr, SumArray, 3, 3);

	cout << "\n The following are sum of each row in a 3x3 random matrix :\n";
	PrintSumArray(SumArray, 3);


}