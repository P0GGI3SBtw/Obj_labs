// Only main

#include <iostream>
#include <string>
#include "book.cpp" // Connect with Book.cpp (Functions)

using namespace std;

int main(){

    Book book1;

    book1.title = "Harry Potter";
    book1.author = "J. K. Rowling";
    book1.pages = 534;

    cout << book1.pages << endl;

    return 0;
}