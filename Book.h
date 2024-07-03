#include "BaseBook.h"
class Book:private BaseBook{
private:
    using string=std::string;
    int pages;
    string ISBN;
    string publisher;

public:
    int get_pages();
    string get_ISBN();
    string get_publisher();
    void display();
    Book(string id,string title,string author,Rating rating,
             int pages,string ISBN,string publisher);
};
