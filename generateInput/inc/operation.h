#ifndef _OPERATION_H
#define _OPERATION_H
#include<string>

class Operation{
    private:
        char begin;
        std::string line;
        bool check();
    public: 
        Operation(const std::string& line);
        std::string generate();
 
};    
#endif
