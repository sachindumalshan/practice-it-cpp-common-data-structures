#include <iostream>
#include <queue>

class CallCenter{

    private:
    std::queue<int> callerList;

    public:
    int process_call(){
        while(!callerList.empty()){
        std::cout << callerList.front() << std::endl;
        callerList.pop();}

        return -1;

    }

    void receive_call(const int id){
        callerList.push(id);
        //std::cout << callerList.back() << std::endl;
    }

};

int main()
{
    CallCenter customer;
    int callerID[] {1,2,3,4,5,6};

    for(int i : callerID)
    customer.receive_call(i);

    customer.process_call();
   
    return 0;
}
