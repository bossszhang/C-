#include<string>
enum Rating{
    Unrated,
    General,
    Adult,
    Child,
};
class BaseBook{
    using ll=long long;
    using string=std::string;
    string id;
    string title;
    string author;
    Rating rating;
protected:
    void virtual display_with_out_endl();
public:
    string get_id();
    string get_title();
    string get_author();
    string get_rating();
    void display();
    BaseBook(string id,string title,string author,Rating rating);
};
