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
