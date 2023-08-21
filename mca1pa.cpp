#include<iostream>
using namespace std;
class books
{
char name_of_books[25];
int book_serial_number;
char name_of_author[15];
int price;
public:
void read()
{
cout<<"Enter the name of book "<<endl;
cin>>name_of_books;
cout<<"Enter the book serial number"<<endl;
cin>>book_serial_number;
cout<<"Enter the name_of_author "<<endl;
cin>>name_of_author;
cout<<"Enter the price "<<endl;
cin>>price;
}
void display()
{
cout<<"name_of_book :- "<<name_of_books<<endl;
cout<<"book_serial_number :- "<<book_serial_number<<endl;
cout<<"name_of_author :- "<<name_of_author<<endl;
cout<<"price :- "<<price<<endl;
}
};
int main ()
{
books s;
s.read();
s.display();
return 0;
}

