#include "array.cpp"

int main(){
	Array<int> myArray;
	myArray.insert_at_end(1);
	myArray.insert_at_end(6);
	myArray.insert_at_end(4);
	cout<<myArray;
	myArray.insert_at_end(8);
	myArray.insert_at_end(5);
	myArray.insert_at_end(7);
	cout<<myArray;
	//myArray.insert_at_begning();
	myArray.insert_at_index(45,3);
	cout<<myArray;
	myArray.linear_search(4);
	cout<<myArray;
	myArray.inserion_sort();
	cout<<myArray;
	Array<int> second;
	second.insert_at_end(2);
	second.insert_at_end(76);
	Array<int> merge;
	merge.merge(second,myArray);
	cout<<merge;
	return 0;
	}