#include <iostream> 
 
using namespace std; 
 
class Transport { 
private: 
  float fuel; 
 
public: 
 
  Transport(float fuel) { 
    this->fuel = fuel; 
  } 
 
 
  float getFuel() { 
    return fuel; 
  } 
 

  virtual void accelerate() = 0; 
  virtual void brake() = 0; 
}; 
 
class Bus : public Transport { 
private: 
  int capacity; 
  int year; 
 
public: 
 
  Bus(float fuel, int capacity, int year) : Transport(fuel) { 
    this->capacity = capacity; 
    this->year = year; 
  } 
 
 
  int getCapacity() { 
    return capacity; 
  } 
 
  int getYear() { 
    return year; 
  } 
 
 
  void accelerate() { 
    cout << "Bus is accelerating..." << endl; 
  } 
 

  void brake() { 
    cout << "Bus is braking..." << endl; 
  } 
}; 
 
int main() { 

  Bus bus(50.0, 40, 2020); 
 
 
  cout << "Bus fuel: " << bus.getFuel() << endl; 
  cout << "Bus capacity: " << bus.getCapacity() << endl; 
  cout << "Bus year: " << bus.getYear() << endl; 
 
  bus.accelerate(); 
  bus.brake(); 
 
  return 0; 
}
