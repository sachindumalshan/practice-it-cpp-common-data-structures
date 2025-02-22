#include <iostream>
#include <queue>

class CallCenter
{

private:
    std::queue<int> callerList;

public:
    int process_call()
    {
        while (!callerList.empty())
        {
            std::cout << "Caller '" << callerList.front() << "' is finished" << std::endl;
            callerList.pop();
        }

        return -1;
    }

    void receive_call(const int id)
    {
        callerList.push(id);
        std::cout << "Caller '" << callerList.back() << "' added to the waiting list" << std::endl;
    }
};

int main()
{
    CallCenter customer;
    int callerID[]{1, 2, 3, 4, 5};

    for (int i : callerID)
        customer.receive_call(i);
    std::cout << "-----" << std::endl;

    customer.process_call();

    return 0;
}
