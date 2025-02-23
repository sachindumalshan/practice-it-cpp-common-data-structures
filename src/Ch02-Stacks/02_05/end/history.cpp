/*
Author implement code base
==========================

#include <iostream>
#include <stack>
#include <string>

using namespace std;

class BrowserHistory
{
private:
    stack<string> history;

public:
    // Visiting a website
    void visit(const string &url)
    {
        cout << "Visiting: " << url << endl;
        history.push(url);
    }

    // Clicking the back button
    void back()
    {
        cout << "Navigating back" << endl;
        if (!history.empty())
        {
            history.pop();
        }
    }

    // Checking the current site
    string current() const
    {
        if (history.empty())
        {
            return "No sites currently being viewed.";
        }
        return history.top();
    }
};

int main()
{
    BrowserHistory bh;

    bh.visit("explorecalifornia.org");
    bh.visit("pixelford.com");
    bh.visit("landonhotel.com");

    cout << "Current Site: " << bh.current() << endl;

    bh.back();
    cout << "Current Site: " << bh.current() << endl;

    bh.back();
    cout << "Current Site: " << bh.current() << endl;

    bh.back();
    cout << "Current Site: " << bh.current() << endl;

    return 0;
}

*/

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
        else
            "No sites to go back";
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
