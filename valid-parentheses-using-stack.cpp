#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char>st;

    string s;

    cout << "Enter your Parentheses: ";
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if(st.empty()) {
            st.push(s[i]);
        } else if((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '[')){
            st.pop();
        } else {
            st.push(s[i]);
        }
    }

    if (st.empty()) {
        cout << endl << "The input parentheses are valid!" << endl;
    } else {
        cout << endl << "The input parentheses are invalid!" << endl;
    }

    return 0;
}
