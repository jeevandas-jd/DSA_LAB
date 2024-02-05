#include<iostream>
#include<ostream>

using namespace std;
template <class T>
class Array{
	int LB,UB;
	
	T A[100];
  public:
  	Array();
  	Array(int,int,T[]);
  	void insert_at_end(T);
	
	void insert_at_begning(T);
	
	void insert_at_index(T,int index);

	void remove_index(T);
	void linear_search(T key);
	void selection_sort();
	void inserion_sort();
	void merge(Array a,Array b);
 	template <class U>
  	friend ostream& operator<<(ostream&, Array<U> );
};
