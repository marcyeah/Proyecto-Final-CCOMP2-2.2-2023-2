#ifndef HOR_H
#define HOR_H

#include <string>
#include <iomanip>
#include <sstream>

class Horario {
    public:
        Horario (std::string dia, int hora_in, int min_in, int hora_fn, int min_fn) : 
        d(dia), mi(min_in), mf(min_fn){
            if(hora_in > 23 || hora_fn > 23){
                hi = 0;
                hf = 0;
            }
            if(min_in > 60 || min_fn > 60){
                mi = 0;
                mf = 0;
            }
        }

        std::string toString() const{
			std::ostringstream output;
			output << d << std::setfill('0') << std::setw(2) << hi << ":" << std::setw(2) << mi << ":" << std::setw(2);
			return output.str(); 
        }

    private:
        std::string d;
        int hi{0};
        int mi{0};
        int hf{0};
        int mf{0};
};

#endif