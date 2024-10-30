#ifndef ORDER_HPP
#define ORDER_HPP
#include <vector>
#include "Article.hpp"
#include "Customer.hpp"

class Order {
private:
    std::string orderId;
    Customer *customer;
    std::vector<Article *> articles;

public:
    Order(const std::string &orderId, Customer *customer) 
        : orderId(orderId), customer(customer) {}

    void addArticle(Article *article) {
        articles.push_back(article);
    }

    void showOrder() const {
        std::cout << "Order ID: " << orderId << std::endl;
        customer->showCustomer();
        std::cout << "Articles in the order:" << std::endl;
        for (const auto &article : articles) {
            article->showArticle();
        }
        std::cout << "---------------------------------" << std::endl;
    }
};
#endif
