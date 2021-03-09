#ifndef HEADER
#define HEADER
#include <string>
#include <iostream>
struct IncludeTest {
    std::string message { "This works!" };
    int id(int x) const;
    virtual void tstFn() {}
    ~IncludeTest() {}
};

struct other : public IncludeTest {
    virtual void tstFn() {
        std::cout << "This actually does something!\n";
    }
};
#endif