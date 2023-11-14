#ifndef CIF_H
#define CIF_H

#include <iostream>
#include <string>

class Cesar {
    public:
        Cesar(std::string& contra, int number) : con(contra), num(number){}
        int fibo(int n){
            int n1{1};
            int n2{2};
            int sum;

            for(int i{0}; i <= n; i++){
                sum = n1;
                n1 = n2;
                n2 += sum;
            }
            return sum;
        }
        
        std::string Cifrado(){
            int or_num = num;
            for(int i{0}; i < con.length(); i++){
                int f{0};
                if(fibo(i) + num >= 60){
                    num = (fibo(i) + num) % 26;
                }
                else{
                    f = fibo(i);
                    num += f;
                }
                if(con[i] < 65){
                    con[i] += 26;
                }
                if(con[i] > 122){
                    con[i] -= 26;
                }
                if(con[i] + num > 122){
                    con[i] -= 26;
                }
                con[i] += num;
                num = or_num; 
            }
            return con;
        }

    private:
        std::string con;
        int num;
};

#endif