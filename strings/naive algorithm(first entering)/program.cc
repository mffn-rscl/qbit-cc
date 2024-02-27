#include <iostream>
#include <string>

int main()
{
    std::string T, P, solution = "", solutionT = "";

    getline(std::cin, P);
    getline(std::cin, T);
    bool printed = false;
    int i;


    for (i = 0; i <= T.length() - P.length(); i++)
    {
        if (T.length() < P.length() || T.empty() || P.empty())
        {
            printed = true;
            std::cout << 0 << std::endl;
            break;
        }
        for (int j = 0; j < P.length(); j++)
        {
            solution += P[j];
            if (P[j] == T[i + j])
            {
                solutionT += P[j];
            }
            else
            {
                break;
            }
        }

        if (P == solutionT)
        {
            printed = true;
            std::cout << solution << std::endl;
            std::cout << i + 1 << std::endl;
            break;
        }
        else
        {
            solutionT = "";
        }
    }
    if (!printed)
    {
        std::cout << solution << std::endl;
        std::cout << 0 << std::endl;
    }
    

    return 0;
}