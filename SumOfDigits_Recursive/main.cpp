#include <iostream>

using namespace std;

void SumDigitsRecurs(int number, int *sum)
{
	*sum=0;
	
	while(number > 0)
	{
		*sum += number % 10;
		number /= 10;
	}
	
}

int main(int argc, char** argv) {
	
	int sum;
	int num;
	
	cout<<" Enter a number: ";
	cin>>num;
	
	SumDigitsRecurs(num, &sum);
	
	cout<<"\n Sumary of digits of the number: "<<sum;
	
	return 0;
}
