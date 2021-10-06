//Adding two polynomials using a Linked List
#include <iostream>
#include <iomanip>
using namespace std;

template <class T>
class polyn
{
	public:
		T info;
		T pow;
		polyn<T> *next;
		
	polyn (T x, T y, polyn<T> *n = 0)
	{
		info = x;
		pow = y;
		next = n;
	}
};
	
template <class T>
class polyl
{
	polyn<T> *head;   //because it will be capable of pointing to first node of LL
	public:
		polyl()
		{
			head = 0;
		}
		
		void addtotail(T x, T y);
		int isempty();
		void display();
		polyl<T> operator+ (polyl<T> ob1);   //to add two objects of polyl class
};

template <class T>
int polyl<T>::isempty()
{
	if(head == 0)        //head is NULL
	    return 1;
	else 
	    return 0;
}

template <class T>
void polyl<T>::addtotail(T x, T y)
{
	polyn<T> *curr;
	polyn<T> *temp;
	temp = new polyn<T>(x,y);    //object created
	if(isempty())  //checking if the linked list is empty --> head is grounded!
	   head = temp;      //head will point where temp is pointing --> temp is pointing to the newly created object/LL
	else{
		curr = head;  //curr will point where head is pointing
		while(curr->next != 0)  //iterate until cuur->next != grounded 
		{
			curr = curr -> next;   //curr will point where curr -> next will point (next node) 
			                      // in last iteration curr will point to the node whose next part will be grounded 
		}
		curr -> next = temp;   //now curr is at the node whose next part is grounded and here we need to delink the grounded part 
		                        //and start pointing to the node where temp is pointing 
	}
}

template <class T>
void polyl<T>::display()
{
	polyn<T> *temp;
	if(!isempty())
	{
		cout<<"\nThe Polynomial is : ";
		for(temp=head; temp->next!=NULL; temp=temp->next)
		    cout<<temp->info<<"(x)^"<<temp->pow<<" + ";
	}
    for(; temp!=NULL; temp=temp->next)
        cout<<temp->info<<"(x)^"<<temp->pow;
    cout<<endl;
}

template <class T>
polyl<T> polyl<T>::operator+ (polyl ob1)
{
	polyl<T> ob3;
	polyn<T> *temp1 = (*this).head;
	polyn<T> *temp2 = ob1.head;
	while(temp1!=0 && temp2!=0)
	{
		if(temp1->pow == temp2->pow){
			ob3.addtotail((temp1->info + temp2->info) , temp1->pow);
			temp1 = temp1 -> next;
			temp2 = temp2 -> next;
		}
		else if (temp2->pow > temp1->pow){
			ob3.addtotail(temp2->info , temp2->pow);
			temp2 = temp2 -> next;
		}
		else{
			ob3.addtotail(temp1->info , temp1->pow);
			temp1 = temp1 -> next;
		}
	}
	while(temp1!=0){
		ob3.addtotail(temp1->info , temp1->pow);
		temp1 = temp1 -> next;
	}
	while(temp2!=0){
		ob3.addtotail(temp2->info , temp2->pow);
		temp2 = temp2 -> next;
	}
	return ob3;
}

int main()
{
	polyl<int> p1,p2,p3;
	int x,y,w,z;
	char ch1,ch2;
	cout<<"Enter First Polynomial - ";
	do{
	cout<<"\nEnter Coefficient - ";
	cin>>x;
	cout<<"\nEnter Power - ";
	cin>>y;
	p1.addtotail(x,y);
	cout<<"Do you want to enter more nodes?(Y/N) - ";
	cin>>ch1;
	}while(ch1 == 'y'||ch1 == 'Y');
	p1.display();
	cout<<"Enter Second Polynomial - ";
	do{
	cout<<"\nEnter Coefficient - ";
	cin>>w;
	cout<<"\nEnter Power - ";
	cin>>z;
	p2.addtotail(w,z);
	cout<<"Do you want to enter more nodes?(Y/N) - ";
	cin>>ch2;
	}while(ch2 == 'y'||ch2 == 'Y');
	p2.display();
	p3 = p1+p2;
	cout<<"\nAddition of two polynomial you entered yields - ";
	p3.display();
}
	


