#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include <string>

class Customer {
private:
    std::string id;
    std::string name;
    std::string address;

public:
    Customer(const std::string &id, const std::string &name, const std::string &address)
        : id(id), name(name), address(address) {}

    std::string getId() const { return id; }
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

    void showCustomer() const {
        std::cout << "Customer ID: " << id << ", Name: " << name << ", Address: " << address << std::endl;
    }
};
#endif

