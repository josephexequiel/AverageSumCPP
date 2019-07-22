#include <iostream>
#include <string>

using namespace std;

float getAverage(int arr[], int size)
{
	int i, sum = 0;
	float avg;

	for (i = 0; i <= size; i++) {
		sum += arr[i];
	}

	avg = float(sum) / (size + 1);

	return avg;
}

float getSum(int arr[], int size)
{
	int i;
	float sum = 0;

	for (i = 0; i <= size; i++) {
		sum += arr[i];
	}

	return sum;
}

int main()
{
	int z = 0;
	int maxentry = 0;
	int temp = 0;
	int array[10] = { 0,0,0,0,0,0,0,0,0,0 };

	string value;
	for (z = 0; z < 10; z++)
	{
	start:
		std::cout << "Enter a number (n to end): ";
		std::cin >> value;

		if (value == "n")
		{
			maxentry = z - 1;
			break;
		}
		else
		{
			try
			{
				int temp = std::stoi(value);
				array[z] = temp;
				maxentry = z;
			}
			catch (const std::invalid_argument)
			{
				std::cout << "Invalid Entry." << endl;
				std::cin.clear();
				goto start;
			}
		}
	}

	cout << "\nWhat to do?\na) Sum\nb) Average\nc) Sum and Average\n" << endl;
	cout << "Choose an operation (a/b/c): ";
	char userchoice;
	cin >> userchoice;

	switch (userchoice) {
	case 'a':
		cout << "Sum: " << getSum(array, maxentry) << endl;
		break;
	case 'b':
		cout << "Average: " << getAverage(array, maxentry) << endl;
		break;
	case 'c':
		cout << "Sum: " << getSum(array, maxentry) << endl;
		cout << "Average: " << getAverage(array, maxentry) << endl;
		break;
	default:
		cout << "Invalid operation selected." << endl;
	}

	return 0;
}