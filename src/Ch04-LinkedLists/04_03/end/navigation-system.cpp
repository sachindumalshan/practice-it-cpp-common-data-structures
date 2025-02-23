/*
Author implement code base
==========================

#include <iostream>
#include <list>
using namespace std;

class Route
{
private:
    list<string> stops;
    list<string>::iterator current;

public:
    Route()
    {
        current = stops.end();
    }

    // Add a new stop to the route
    void add_stop(const string &stop)
    {
        stops.push_back(stop);

        if (current == stops.end())
        {
            current = stops.begin();
        }
    }

    // Advance to the next stop on the route
    void next_stop()
    {
        if (!stops.empty())
        {
            ++current;
            if (current == stops.end())
            {
                current = stops.begin();
            }
        }
    }

    // Go back to the previous stop on the route
    void prev_stop()
    {
        if (!stops.empty())
        {
            if (current == stops.begin())
            {
                current = stops.end();
            }
            --current;
        }
    }

    // Display the current stop on the route
    void current_stop()
    {
        if (!stops.empty())
        {
            cout << "Current stop: " << *current << endl;
        }
        else
        {
            cout << "No stops in the route" << endl;
        }
    }
};

int main()
{
    Route route;

    route.add_stop("Los Angeles");
    route.add_stop("Las Vegas");
    route.add_stop("Salt Lake City");
    route.add_stop("Denver");

    route.current_stop(); // "Current stop: Los Angeles"
    route.next_stop();
    route.current_stop(); // "Current stop: Las Vegas"
    route.next_stop();
    route.current_stop(); // "Current stop: Salt Lake City"
    route.next_stop();
    route.current_stop(); // "Current stop: Denver"
    route.prev_stop();
    route.current_stop(); // "Current stop: Salt Lake City"

    return 0;
}

*/

#include <iostream>
#include <list>
using namespace std;

class Route
{

private:
    list<string> stop_position;
    list<string>::iterator it;

public:
    Route()
    {
        it = stop_position.end();
    }

    void add_stop(const string &stop)
    {
        stop_position.push_back(stop);
        if (it == stop_position.end())
            it = stop_position.begin();
    }

    void next_stop()
    {
        if (!stop_position.empty())
        {
            it++;
            if (it == stop_position.end())
                it = stop_position.begin();
        }
    }

    void prev_stop()
    {
        if (!stop_position.empty())
        {
            it--;
            if (it == stop_position.end())
                it = stop_position.begin();
        }
    }

    void current_stop()
    {
        if (!stop_position.empty())
        {
            cout << *it << endl;
        }
        else
        {
            cout << "No position to traverse" << endl;
        }
    }
};

int main()
{

    Route path;
    path.add_stop("A");
    path.add_stop("B");
    path.add_stop("C");
    path.add_stop("D");
    path.add_stop("E");

    path.current_stop();
    path.next_stop();
    path.current_stop();
    path.next_stop();
    path.current_stop();
    path.next_stop();
    path.current_stop();
    path.next_stop();
    path.current_stop();
    path.prev_stop();
    path.current_stop();

    return 0;
}