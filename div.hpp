#ifndef DIV_HPP
#define DIV_HPP

#include "base.hpp"
#include "op.hpp"
#include <iomanip>
#include <sstream>

class Div : public Base {
    private:
        double result;
        std::string sentence;
    public:
        Div(Base* &val1, Base* &val2) : Base() {
            result = val1 ->evaluate() / val2->evaluate();
            std::stringstream stream;
            stream << std::fixed << std::setprecision(1) <<  val1 -> evaluate() << " / " << val2 -> evaluate();
            sentence = stream.str();
        }
        virtual double evaluate() {
            return result; 
        }
        virtual std::string stringify() { 
            return sentence;
        }
};

#endif 