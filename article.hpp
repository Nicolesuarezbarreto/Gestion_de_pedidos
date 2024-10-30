#ifndef ARTICLE_HPP
#define ARTICLE_HPP
#include <string>

class Article {
private:
    std::string code;
    std::string name;
    double price;

public:
    Article(const std::string &code, const std::string &name, double price)
        : code(code), name(name), price(price) {}

    std::string getCode() const { return code; }
    std::string getName() const { return name; }
    double getPrice() const { return price; }

    void showArticle() const {
        std::cout << "Code: " << code << ", Name: " << name << ", Price: $" << price << std::endl;
    }
};
#endif
