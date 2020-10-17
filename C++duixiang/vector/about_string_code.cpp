#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string line;
    regex email(R"(\w+@(\w+\.)+\w+)");
    while (getline(cin,line)){
        smatch matches;
        auto current =cbegin(line);
        auto last = cend(line);
        while (current != last){
            if (regex_search(current,last,matches,email)){
                ssub_match match = matches[0];
                current = match.second;
                cout<<match.str()<<endl;
            }
            else
            {
                break;
            }
        }
//        if (regex_search(line,matches,email)){
//            ssub_match match = matches[0];
//            cout<<match.str()<<endl;
//        }
    }
    return 0;
}

//https://www.jisuanke.com/course/2037/151292
