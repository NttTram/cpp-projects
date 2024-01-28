#include "Person.hpp"
#include "Book.hpp"
#include "BookStore.hpp"
#include "Inventory.hpp"
#include "Owner.hpp"

#include <iostream>
#include <vector>
#include <climits>
#include <json/json.h>
#include <json/writer.h>
#include <fstream>

using namespace std;


void Border(vector<string> &text, string title){
    //Clear outputs
    cout << "\033[2J\033[1;1H";
    char spaccing[] = "* HELLLLLLLLLLLLLO                *";
    int border_size = 50; //Border size max is 100
    char border[] = "****************************************************************************************************";
    int fill_space; //Fill empty space

    //Top border
    printf("%.*s\n", border_size, border);

    int title_spacing = (border_size/2) + (title.length() / 2) - 1 ;
    int title_size = border_size/2 - title.length()/2 ;
    // cout<<"title_spacing: "<<title_spacing<<endl;
    printf("*%*s%*s\n", title_spacing, title.c_str(), title_size, "*");

    //Print text to fit into border
    for( int i = 0; i < text.size(); i++){
        fill_space = border_size - text[i].length() - 8; //Adjust the filling size
        printf("*%4d. %3s%.*s*\n", i+1, text[i].c_str(), fill_space, "                                                                                                   ");
    }

    //End border
    printf("*%*s\n",border_size-1, "*");
    printf("%.*s\n", border_size, border);
    

}

int validInput(vector<string> opt){
    int signin;
    cin >> signin;
    if(cin.good()){
        if(signin >= 1 && signin <= opt.size()) {
            return signin;
        }else {
            // cout<<signin<< " is not within valid input"<<endl;
        }

    }else{
        // cout<<"Not an interger"<<endl;
        cin.clear();
        cin.ignore(INT_MAX, '\n'); //NB: prefeered method for flushing cin
    }
    return 0;
}

int main(){
    Json::Value root;
    Json::Reader reader;
    Json::StyledStreamWriter writer;
    std::ofstream book_file;
    
    root["title"] = "DeathNote";
    root["author"] = "N/A";
    root["year"] = 1999;     
    cout<<root;

    book_file.open("book.json");
    writer.write(book_file, root);
    book_file.close();


    vector<string> login = {"Customer", "Admin"};
    Border(login, "WELCOME");
    int signin;
    while(!(signin = validInput(login))){Border(login, "WELCOME");}
    
    switch(signin){
        case 1:{
            int input;
            vector<string> customerOpts = {"Browse books", "Buy book(s)", "Review :)"};
            Border(customerOpts, "Welcome Customer");
            while(!(input = validInput(customerOpts))){Border(customerOpts, "Welcome Customer");}
            break;
        }
        case 2:{
            vector<string> adminOpts = {"Buy book(s)", "Sell book(s)", "Add Inventory", "Owner"};
            Border(adminOpts, "Welcome Admin");
            break;
        }
        default:
            cout<<"Nothing"<<endl;
            break;
    }

    return 0;
}