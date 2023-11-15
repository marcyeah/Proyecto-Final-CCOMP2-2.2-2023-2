#ifndef CIF_H
#define CIF_H

#include <iostream>
#include <string>

class Cesar {
    public:
        Cesar(std::string& contra) : con(contra), num(contra.length()/2){}
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

        ~Cesar(){};
        
        std::string& Cifrado(){
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
                if(con[i] <= 90 && con[i] + num > 96){
                    con[i] -= 33;
                }
                if((con[i] > 90 && con[i] < 97) || con[i] > 122){
                    con[i] -= 26;
                }
                if((con[i] + num > 90 && con[i] + num < 97) || con[i] + num > 122){
                    con[i] -= 26;
                }
                con[i] += num;
                num = or_num; 
            }
            con[num+(con.length()%num)] = toupper(con[num+con.length()%num]);
            con[num/2] = tolower(con[num/2]);
            return con;
        }

    private:
        std::string& con;
        int num;
};

#endif