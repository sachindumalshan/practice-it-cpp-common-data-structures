/*
Author implement code base
==========================

#include <iostream>
#include <queue>
using namespace std;

class CallCenter
{
private:
    queue<int> callQueue; // Queue to hold the call IDs

public:
    // Function to enqueue a call
    void receive_call(const int id)
    {
        callQueue.push(id);
        cout << "Received call with ID: " << id << endl;
    }

    // Function to process a call
    int process_call()
    {
        // Check if there are calls in the queue
        if (callQueue.empty())
        {            
            cout << "No calls to process." << endl;
            return -1; // Return -1 if no calls
        }
        else
        {
            int call_id = callQueue.front(); // Get the call id at the front of the queue
            callQueue.pop();                 // Remove the call from the queue            
            return call_id; // Return the call id
        }
    }
};

int main()
{
    CallCenter center; // Instantiate CallCenter object

    // Receiving some calls
    center.receive_call(101);
    center.receive_call(102);
    center.receive_call(103);

    // Processing all calls
    int call_id;
    while((call_id = center.process_call()) != -1) {
        std::cout << "Successfully processed call: " << call_id << std::endl;
    }

    return 0;
}

*/

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

    if (customer.process_call() == -1)
        std::cout << "No calls to process" << std::endl;

    return 0;
}
