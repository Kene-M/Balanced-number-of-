#include <iostream>
#include <string>

using namespace std;

bool isBalanced(string str)
{
    int open=0, closed=0, length, i;

    length = str.length();
    for (i = 0; i < length; i++){
        if (str[i] == '('){ // increment the # '('
            open++;
        }
        else if (str[i] == ')'){ // increment the # ')'
            closed++;
        }
        //else return 0; // this is a case of some other character
        if (open < closed)
            return 0; // this is the case of closed parenthesis before open
    }
    if (open == closed){
        return 1;
    }
    else {
        return 0;
    }

}


int main()
{
    string str;

    cout << "Enter the name of the string: ";
    cin >> str;
    if (isBalanced(str))
        cout << "The given string is balanced. \n";
    else
        cout << "The given string is not balanced. \n";
}
