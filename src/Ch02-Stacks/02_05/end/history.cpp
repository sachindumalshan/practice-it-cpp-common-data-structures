#include <iostream>
#include <stack>
#include <string>

class BrowsingHistory
{
public:
    std::stack<std::string> historyList;

    void visit(const std::string &url)
    {
        historyList.push(url);
    }

    void back()
    {
        if (!historyList.empty())
            historyList.pop();
        else "No sites to go back";
    }

    std::string current() const
    {
        if (!historyList.empty())
            return historyList.top();
        else
            return "No current websites";
    }
};

int main()
{
    BrowsingHistory webSite;
    webSite.visit("www.explorer.com");
    std::cout << "Current Page: " << webSite.current() << std::endl;

    webSite.visit("www.landhome.com");
    std::cout << "Current Page: " << webSite.current() << std::endl;

    webSite.back();
    std::cout << "Current Page: " << webSite.current() << std::endl;

    webSite.visit("www.masterchef.com");
    std::cout << "Current Page: " << webSite.current() << std::endl;

    return 0;
}
