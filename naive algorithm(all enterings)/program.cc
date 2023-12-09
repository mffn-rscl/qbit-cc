#include <iostream>
#include <string>

int main()
{
    bool isTrue = false;
    int counter = 0;
    std::string P,T, currentSubString = "";
    getline(std::cin,P);
    getline(std::cin,T);
        for (int i = 0; i <= T.length() - P.length(); i++)
        {
            currentSubString = T.substr(i, P.length());
            if (currentSubString == P)
            {
                isTrue = true;
                std::cout << i+1 << " ";
            }
            
        
            for (int j = 0; j <P.length(); j++)
            {
                counter++;

                if (currentSubString[j] != P[j])
                {
                    break;
                }
                
            }
        }
       if (!isTrue)
       {
        std::cout << 0 << std::endl;
       }
       
    std::cout << "\n" << counter << std::endl; 
    

    return 0;
}