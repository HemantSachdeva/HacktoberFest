#include <bits/stdc++.h>
using namespace std;

class DLL;

class node{
	node *prev;
	bool n;
	node*next;
    public:
        node(){
            prev=next=NULL;
        }
	node(bool b){
		n=b;
		prev=next=NULL;
	}
	friend class DLL;
};

class DLL
{
	node *start;

	public:
		DLL()
		{
			start=NULL;
		}
		void Binary(int no);
		void displayBinary();
		void Ones_Complement_of_Binary();
		void Twos_Complement_of_Binary();
			DLL operator +(DLL n1);
	bool addBitAtBegin(bool val)
	{
		node *nodee=new node(val);
		if(start==NULL)
		{
			start=nodee;
		}
		else
		{
			nodee->next=start;
			start->prev=nodee;
			start=nodee;
		}
		return true;
	}
};

void DLL::Binary(int no){
	bool rem;
	node *p;
	rem=no%2;
	start=new node(rem);
	no=no/2;
	while(no!=0)
	{
		rem=no%2;
		no=no/2;

			p=new node(rem);
			p->next=start;
			start->prev=p;
			start=p;

	}
}

void DLL::displayBinary(){
	node *t;
	t=start;
	while(t!=NULL)
	{
		cout<<t->n;
		t=t->next;
	}

}

void DLL::Ones_Complement_of_Binary(){
	node *t;
	t=start;

	while(t!=NULL)
	{
		if(t->n==0)
			t->n=1;
		else
			t->n=0;

		t=t->next;

	}
}

DLL DLL::operator +(DLL n1){
	DLL sum;
	node *a=start;
	node *b=n1.start;
	bool carry=false;
	while(a->next!=NULL)
		a=a->next;
	while(b->next!=NULL)
		b=b->next;

	while(a!=NULL && b!=NULL)
	{
		sum.addBitAtBegin((a->n)^(b->n)^carry);
		carry=((a->n&& b->n) || (a->n&& carry) || (b->n && carry));

		a=a->prev;
		b=b->prev;
	}
	while(a!=NULL)
	{
		sum.addBitAtBegin(a->n^carry);
		a=a->prev;
	}
	while(b!=NULL)
	{
		sum.addBitAtBegin(b->n^carry);
		b=b->prev;
	}
	sum.addBitAtBegin(carry);
	return sum;
}

void DLL::Twos_Complement_of_Binary(){
	Ones_Complement_of_Binary();
	bool carry=1;
	node *t;
	t=start;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	while(t!=NULL){
        if(t->n==1&& carry==1){
            t->n=0;
            carry=1;
        }
        else if(t->n==0&& carry==1){
            t->n=1;
            carry=0;
        }
        else if(carry==0)
        break;
        t=t->prev;
    }
    displayBinary();
}

int main(){
	int num,num1;
	DLL n1,n3,n2;
	int agree=1, choice;
	cout<<"\nDouble Linked List Implementation\n";
	while(agree!=0){
		cout<<"\n"<<"Enter number according to the menu provided below"<<"\n";
		cout<<"\n"<<"1.One's Complement of a Binary Number"<<"\n"
            <<"2.Two's Complement of a Binary Number"<<"\n"
            <<"3.Addition of 2 binary numbers"<<"\n"
            <<"4.Exit"<<"\n\n"<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:cout<<"\nEnter Number in decimal form: ";
					cin>>num;
					n1.Binary(num);
					cout<<"\nBinary Representation of the number you entered: ";
					n1.displayBinary();
					cout<<"\nOne's Complement: ";
					n1.Ones_Complement_of_Binary();
					n1.displayBinary();
					cout<<"\n";
					break;
			case 2:cout<<"\nEnter Number in decimal form: ";
					cin>>num;
					n1.Binary(num);
					cout<<"\nBinary Representation of the number you entered: ";
					n1.displayBinary();
					cout<<"\nTwo's complement: ";
					n1.Twos_Complement_of_Binary();
					cout<<"\n";
					break;
			case 3: cout<<"\nEnter Two Numbers you want to add in Decimal form: \n";
                    cout<<"\nEnter the First Number: ";
					cin>>num;
					n1.Binary(num);
					cout<<"\nBinary Representation of the number you entered: ";
					n1.displayBinary();
					cout<<"\nEnter the Second Number: ";
					cin>>num1;
					n2.Binary(num1);
					cout<<"\nBinary Representation of the number you entered: ";
					n2.displayBinary();
					cout<<"\n";
					n1.displayBinary();
					cout<<" + ";
					n2.displayBinary();
					cout<<" = ";
					n3=n1+n2;
					n3.displayBinary();
					cout<<"\n";
					break;
            case 4: cout<<"\nYou've chosen to exit the program!"<<"\n";
                    cout<<"Why (ToT)?"<<"\n";
                    agree=0;
                    cout<<"\n";
                    break;
            default: cout<<"Learn counting between 1 to 4 (-_-)"<<"\n";
                     cout<<"\n";
                     break;
		}
	}

	return 0;
}
