#include <iostream>
#include <stack>
#include <string>

std::stack<char> inputLetter;
std::string reverseString(const std::string &input)
{
    for (char le : input)
    {
        inputLetter.push(le);
    }

    std::string newWord;
    while(!inputLetter.empty()){
        newWord = newWord + inputLetter.top();
        inputLetter.pop();
    }
    return newWord;
}

int main()
{
    std::string word = "Hello,World!";
    std::cout << reverseString(word) << std::endl;

    std::cout << std::endl;
    return 0;
}
