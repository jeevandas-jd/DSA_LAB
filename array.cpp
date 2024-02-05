#include"array.h"


template <class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template <class T>
Array<T>::Array(int LB,int UB,T x[]){
	
}
template <class T>
void Array<T>::insert_at_end(T key){
	UB=UB+1;
	A[UB]=key;
}

template <class T>

void Array<T>::insert_at_begning(T key){

	UB=UB+1;
	int k=UB-1;
	
	while (k>=LB){
	
		A[k+1]=A[k];
		
		k=k-1;
	}
	
	A[LB]=key; 	
	}
template <class T>
void Array<T>::insert_at_index(T key,int index){

	UB=UB+1;
	int k =UB-1;
	while(k>=index){
		A[k+1]=A[k];
		k=k-1;
	}
	A[index]=key;

}

template <class T>

void Array<T>::remove_index(T index){
	if(LB<=index<=UB){
		int k=index+1;
		while(k<UB){
			A[k-1]=A[k];
			k=k+1;
		}

	}

}
template<class T>

void Array<T>::linear_search(T key){

	int index=-1;
	int i=LB;

	while (i<=UB){

		if (A[i]==key){

			cout<<i;
			break;
		}
		else{

			i=i+1;
			if (i==UB){
				cout<<"404 not foud\n";
			}
		}
	}

}
template <class T>

void Array<T>::selection_sort(){

for(int i=LB;i<UB;i++){

	int min=i;
	for(int j=i+1;j<UB;j++){
		if(A[j]<A[min]){
			min=j;
		}
	}
	if (min!=i){
		T a=A[i];
		A[i]=A[min];
		A[min]=a;
	}
}
}
template <class T>
void Array<T>::inserion_sort(){
	for(int i=LB+1;i<=UB;i++){
		T key=A[i];
		int k=i-1;
		while (k>=0 && A[k]>key){
			A[k+1]=A[k];
			k=k-1;
		}
		A[k+1]=key;
	}
}
template <class T>
void Array<T>::merge(Array<T> A1,Array<T>A2){
	Array<T> A3;
	A1=A1.inserion_sort();
	A2=A2.inserion_sort();
	int nel;//nel means number of elements in merged array;
	nel=(A1.UB-A1.LB)+(A2.UB-A2.LB);
	int i;
	for(i=A1.LB;i<A1.UB;i++){

		A3.insert_at_end(A1[i]);
	}
	for(i=A2.LB;i<A2.UB;i++){

		A3.insert_at_end(A1[i]);
	}

	}
template <class U>
ostream& operator << (ostream& os,Array<U> M){
	int i;
	os<<endl;
	for (i=M.LB;i<=M.UB;i++){
		os<<M.A[i]<<" ";
	}
	os<<endl;
	return os;
}



