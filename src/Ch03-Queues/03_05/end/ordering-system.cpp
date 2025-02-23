/*
Author implement code base
==========================

#include <iostream>
#include <queue>
using namespace std;

class MerchOrderSystem
{
private:
    queue<int> regularOrders;
    queue<int> priorityOrders;

public:
    // Function to place an order
    void place_order(int orderID, bool isPriority = false)
    {
        if (isPriority)
        {
            priorityOrders.push(orderID);
            cout << "Placed priority order with ID: " << orderID << endl;
        }
        else
        {
            regularOrders.push(orderID);
            cout << "Placed regular order with ID: " << orderID << endl;
        }        
    }

    // Function to fulfill an order
    int fulfill_order()
    {
        if (!priorityOrders.empty())
        {
            int orderID = priorityOrders.front();
            priorityOrders.pop();
            return orderID;
        }
        else if (!regularOrders.empty())
        {
            int orderID = regularOrders.front();
            regularOrders.pop();
            return orderID;
        }
        else
        {
            cout << "No orders to fulfill." << endl;
            return -1; // Return -1 if no orders in either queue
        }
    }
};

int main()
{
    MerchOrderSystem system; // Instantiate MerchOrderSystem object

    // Placing some orders
    system.place_order(201);       // Regular order
    system.place_order(202);       // Regular order
    system.place_order(101, true); // Priority order
    system.place_order(203);       // Regular order

    // Fulfilling all orders
    int orderID;
    while ((orderID = system.fulfill_order()) != -1)
    {
        cout << "Order with ID " << orderID << " has been fulfilled.\n";
    }

    return 0;
}

*/

#include <iostream>
#include <queue>

class MerchOrderSystem
{
private:
    std::queue<int> regularOrder;
    std::queue<int> priorityOrder;

public:
    void place_order(int orderId, bool isPriority = false)
    {
        if (isPriority)
        {
            priorityOrder.push(orderId);
            std::cout << "Priority order " << orderId << " added to the queue" << std::endl;
        }

        else
        {
            regularOrder.push(orderId);
            std::cout << "Regular order " << orderId << " added to the queue" << std::endl;
        }
    }

    int fullfill_order()
    {
        while (!priorityOrder.empty())
        {
            std::cout << "Priority order " << priorityOrder.front() << " - Processed" << std::endl;
            priorityOrder.pop();
        }

        while (!regularOrder.empty())
        {
            std::cout << "Regular order " << regularOrder.front() << " - Processed" << std::endl;
            regularOrder.pop();
        }

        return -1;
    }
};

int main()
{
    MerchOrderSystem customer;

    customer.place_order(1);
    customer.place_order(2);
    customer.place_order(3, true);
    customer.place_order(4);
    customer.place_order(5, true);
    customer.place_order(6);
    customer.place_order(7, true);
    customer.place_order(8, true);

    std::cout << "-----------------------" << std::endl;

    if (customer.fullfill_order() == -1)
    {
        std::cout << "No orders to process" << std::endl;
    }

    return 0;
}