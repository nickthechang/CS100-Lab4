#ifndef MULT_HPP
#define MULT_HPP

#include "base.hpp"
#include "op.hpp"
#include <iomanip>
#include <sstream>

class Mult : public Base {
    private:
        double result;
        std::string sentence;
    public:
        Mult(Base* &val1, Base* &val2) : Base() {
            result = val1 ->evaluate() * val2->evaluate();
            std::stringstream stream;
            stream << std::fixed << std::setprecision(1) <<  val1 -> evaluate() << " * " << val2 -> evaluate();
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