#include <iostream>
#include <stack>
#include <string>

std::stack<char> inputLetter;
std::string reverseString(const std::string &input)
{
    // std::cout << input << std::endl;
    for (int i = 0; i < input.length(); i++)
    {
        inputLetter.push(input[i]);
        // std::cout << input[i] << std::endl;
    }

    std::string newWord;
    for (int i = 0; i < 12; i++)
    {
        // std::cout << inputLetter.top() << std::endl;
        newWord = newWord + inputLetter.top();
        inputLetter.pop();
    }
    // std::cout << newWord << std::endl;
    return newWord;
}

int main()
{
    std::string word = "Hello,World!";
    std::cout << reverseString(word) << std::endl;

    std::cout << std::endl;
    return 0;
}
