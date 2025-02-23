/*
Author implement code base
==========================

#include <iostream>
#include <list>
using namespace std;

class SensorData
{
private:
    list<double> readings;

public:
    // Add a new sensor reading to the list
    void add_reading(double value)
    {
        readings.push_back(value);
    }

    // Go through the list and replace any spike or dip with the previous reading
    void smooth_data()
    {
        if(readings.size() < 2)
        {
            return;
        }
        auto prev = readings.begin();
        auto current = prev;
        ++current;

        while(current != readings.end())
        {
            if(*current >= 2 * (*prev) || *current <= 0.5 * (*prev))
            {
                *current = *prev;
            }
            ++prev;
            ++current;
        }
    }

    // Print all sensor readings
    void print_data()
    {
        for(const auto &reading : readings)
        {
            cout << reading << " ";
        }
        cout << endl;
    }
};

int main()
{
    SensorData sensorData;
    sensorData.add_reading(10.0);
    sensorData.add_reading(24.0);   // spike
    sensorData.add_reading(6.0);
    sensorData.add_reading(2.0);    // dip
    sensorData.add_reading(4.0);

    cout << "Sensor data: ";
    sensorData.print_data();

    cout << "Normalized sensor data: ";
    sensorData.smooth_data();
    sensorData.print_data();

    return 0;
}

*/

#include <iostream>
#include <list>
using namespace std;

class SensorData
{
private:
    list<double> sensor_data;

public:
    void add_reading(double value)
    {
        sensor_data.push_back(value);
    }

    void smooth_data()
    {
        if (!sensor_data.empty())
        {
            list<double>::iterator itOne = sensor_data.begin();
            auto itTwo = itOne;
            while (itOne != sensor_data.end())
            {
                itTwo = itOne;
                advance(itTwo, 1);

                if (*itTwo > *itOne * 2 || *itTwo < *itOne / 2)
                {
                    *itTwo = *itOne;
                }
                itOne++;
            }
        }
    }

    void print_data()
    {
        if (!sensor_data.empty())
        {
            for (double read : sensor_data)
                cout << read << endl;
        }
        else
        {
            cout << "No sensor readings in the list" << endl;
        }
    }
};

int main()
{
    SensorData transmit;

    transmit.add_reading(2.0);
    transmit.add_reading(1.0);
    transmit.add_reading(3.0);
    transmit.add_reading(2.0);
    transmit.add_reading(7.0);
    transmit.add_reading(2.0);
    transmit.add_reading(3.0);
    transmit.add_reading(8.0);
    transmit.add_reading(1.0);

    transmit.smooth_data();
    transmit.print_data();

    return 0;
}