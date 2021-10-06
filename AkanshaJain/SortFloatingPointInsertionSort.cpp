void Insertion_sort(float fl[], int n){
	for(int i=1; i<n; i++){
		float temp = fl[i];
		for (int j=i; j>0 && temp<fl[j-1]; j--)
		    fl[j]= fl[j-1];
		fl[j] = temp;
	}
	cout<<"After sorting through Insertion-Sort: ";
	for(int i=0; i<n; i++)
	    cout<<fl[j]<<" ";
	cout<<endl;
}
