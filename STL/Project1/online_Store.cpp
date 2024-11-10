#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <map>
#include <set>
#include <list>
#include <deque>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
    int productID;
    string productName;
    string category;
};

struct Order
{
    int orederID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Tea Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Disk Lamp", "Home"},
    };

    deque<string> recentCustomers = {"C001", "C002", "C003"};
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 5, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C004", time(0)});
    orderHistory.push_back({3, 103, 4, "C002", time(0)});
    orderHistory.push_back({4, 104, 7, "C005", time(0)});

    set<string> categories;

    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 12},
        {105, 17},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory)
    {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Abhishek L."},
        {"C002", "Yashraj S."},
        {"C003", "Md. Sariq"},
        {"C004", "A. Patidar"},
        {"C005", "A. Patel"},
    };

    unordered_set<int> uniqueProductID;
    for (const auto &product : products)
    {
        uniqueProductID.insert(product.productID);
    }

    // printing data that is present
    cout << "Products that are available in store" << endl;
    for (const auto &product : products)
    {
        cout << "ProductID: " << product.productID << " Product name: "
             << product.productName << " Product Category: " << product.category << endl;
    }

    // printing customer of store that purchase products
    for (string customer : recentCustomers)
    {
        cout << "Cutomer of store are: " << customer << ", ";
    }
    cout << endl;

    // printing orderHistory
    cout << "Order History" << endl;
    for (const auto &order : orderHistory)
    {
        cout << "Order ID: " << order.orederID << " Quantity: " << order.quantity
             << " Product ID: " << order.productID << " Customer ID: " << order.customerID
             << " Order Time: " << order.orderDate << endl;
    }

    return 0;
}