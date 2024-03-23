#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isMatchingPair(char character1, char character2) {
    if (character1 == '(' && character2 == ')')
        return true;
    else if (character1 == '[' && character2 == ']')
        return true;
    else if (character1 == '{' && character2 == '}')
        return true;
    else
        return false;
}

bool isBalanced(string exp) {
    stack<char> st;
    for (int i = 0; i < exp.length(); i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            st.push(exp[i]);
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (st.empty() || !isMatchingPair(st.top(), exp[i]))
                return false;
            else
                st.pop();
        }
    }
    return st.empty();
}

int main() {
    string sequence;
    cin >> sequence;

    if (isBalanced(sequence)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}