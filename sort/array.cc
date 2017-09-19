#include <iostream>

void PrintArray(int v[], int size) {

	for(int i = 0;i < size ;i++)
	std::cout<< v[i] << "\n";
}

void InputArray(int v[], int size){
	std::cerr<< "input 10 seperate ints between 0-100: \n";
	for(int i=0;i<size;i++){
 	std::cin>>v[i];
	}
}

void SortArray(int v[], int size) {
	int min,temp;
	
	for(int i=0; i<size-1;i++)
	{
	 min=i;//set to current
		for(int a=i+1; a<size; a++)
		{
		
		if (v[a] < v[min])
		  min=a; //track
		
		}

		if(min != i)//swap
		{
			temp = v[i];
			v[i] = v[min];
			v[min] = temp;
		
		}
	}
}

int main() {
	int numbers[10];
	InputArray(numbers, 10);
	SortArray(numbers, 10);
	std::cerr<<"\n The Sorted Array is as follows: \n";
	PrintArray(numbers, 10);
  return 0;
}
