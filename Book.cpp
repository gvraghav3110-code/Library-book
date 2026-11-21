#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    string name;
    int BookID;
    string Availability;
    void details(){
        cout<<"Title:"<<title<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Book ID:"<<BookID<<endl;
        cout<<"Availabile status(borrowed or vacant):"<<Availability<<endl;
    }
    void borrow(){
        if(Availability=="vacant"){
            cout<<"Enter the name of the person:";
            cin>>name;
            cout<<"The book "<< title<<"by"<<author<<" is borrowed by "<<name<<endl;
        }
        else{
            cout<<"The book "<<title<<" by "<<author<<" is already borrowed.\n";
        }
    }
    void returnbook(){
        if(Availability=="borrowed"){
            cout<<"Enter the name:";
            cin>>name;
            cout<<"The book "<<title<<" is returned by "<<name<<endl;
        }
        else{
            cout<<"The book is already available\n";
        }
    }
};
int main()
{
    Book b;
    cout<<"Enter the title of the book:";
    cin>>b.title;
    cout<<"Enter the author of the book:";
    cin>>b.author;
    cout<<"Enter the Book ID:";
    cin>>b.BookID;
    cout<<"Enter the Availabile status:";
    cin>>b.Availability;
    b.details();
    b.borrow();
    b.returnbook();
    cout<<"\nUpdated book details\n";
    b.details();
    return 0;
}
