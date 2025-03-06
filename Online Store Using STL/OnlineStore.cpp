#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product
{
    int productID;
    string name;
    string category;
};

struct Order
{
    int OrderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main()
{
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Coffee maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };

    deque<string> recentCostomers = {"C001", "C002", "C003"};

    recentCostomers.push_back("C004");
    recentCostomers.push_back("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;

    for (const auto &product : products)
    {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for (const auto &order : orderHistory)
    {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerDara = {
        {"C001", "Alice"},
        {"C002", "Hitesh"},
        {"C003", "Sarthak"},
        {"C004", "Max"},
        {"C005", "Sami"},
    };

    unordered_set<int> uniqueProductIDs;

    for (const auto &product : products)
    {
        uniqueProductIDs.insert(product.productID);
    }

    return 0;
}