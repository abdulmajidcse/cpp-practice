
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "100 200 + 2 / 5 * 7 +";
    stack<int>st;
    stringstream ss;
    ss<<s;
    string w;
    int x, result;

    while(ss>>w) {
        if (w == "+") {
            result = st.top();
            st.pop();
            result = st.top() + result;
            st.pop();
            st.push(result);
        } else if (w == "-") {
            result = st.top();
            st.pop();
            result = st.top() - result;
            st.pop();
            st.push(result);
        } else if (w == "*") {
            result = st.top();
            st.pop();
            result = st.top() * result;
            st.pop();
            st.push(result);
        } else if (w == "/") {
            result = st.top();
            st.pop();
            result = st.top() / result;
            st.pop();
            st.push(result);
        } else {
            x = stoi(w);
            st.push(x);
        }
    }

    cout << st.top();

    return 0;
}
