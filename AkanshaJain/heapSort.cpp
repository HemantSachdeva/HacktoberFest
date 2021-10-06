#include <iostream>
#include <fstream>
using namespace std;
#include <stdlib.h>
#include <math.h>

template <class T>
class heapSortGraph{
	public:
		T a[1100];
		int size,heap_size,count;
		
		void input();
		void maxHeapify(T a[],int i);
		void buildMaxHeap(T a[]);
		void heapSort(T a[]);
		int left(int i);
		int right(int i);
		void output();
};

template <class T>
void heapSortGraph<T>::input(){
	count=0;
	heap_size=size;
	for(int i=1; i<=size; i++){
		T el=rand()%1000;
		a[i]=el;
	}
}

template <class T>
int heapSortGraph<T>::left(int i){
	return (i*2);
}

template <class T>
int heapSortGraph<T>::right(int i){
	return (i*2+1);
}

template <class T>
void heapSortGraph<T>::maxHeapify(T a[],int i){
	int l,r,largest;
	l=left(i);
	r=right(i);
	if(l<=heap_size && a[l]>a[i]){
		largest=l;
	}
	else{
		largest=i;
	}
	count++;
	if(r<=heap_size && a[r]>a[largest]){
		largest=r;
	}
	count++;
	if(largest!=i){
		T temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		maxHeapify(a,largest);
	}
}

template <class T>
void heapSortGraph<T>::buildMaxHeap(T a[]){
	for(int i=size/2; i>=1; i--){
		maxHeapify(a,i);
	}
}

template <class T>
void heapSortGraph<T>::heapSort(T a[]){
	buildMaxHeap(a);
	for(int i=size; i>=2; i--){
		T temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		heap_size--;
		maxHeapify(a,1);
	}
}


template <class T>
void heapSortGraph<T>::output(){
	cout<<"\nFor size="<<size;
	cout<<"\nThe sorted array is:\n";
	for(int i=1; i<=size; i++)
		cout<<a[i]<<" ";
	cout<<"\n\nThe number of comparisons is: "<<count<<"\n";
}

int main(){
	int n;
	heapSortGraph<int> HSG;
	cout<<"\n\t--HEAP SORT--\n\n";
	cout<<"Enter the size of array: ";
	cin>>n;
	if(n>=30){
		ofstream writein("heapsortgraph.csv",ios::app);
		writein<<"Size(n),Number of comparisons,log(n),n*n,nlog(n)"<<endl;
		while(n<=1000){
			HSG.size=n;
			HSG.input();
			HSG.heapSort(HSG.a);
			HSG.output();
			writein<<HSG.size<<","<<HSG.count<<","<<log2(HSG.size)<<","<<HSG.size*HSG.size<<","<<HSG.size*log2(HSG.size)<<endl;
			n+=50;
		}
		writein.close();
	}
	else{
		cout<<"Size should be greater than 30\n";
		main();
	}
	return 0;
}

