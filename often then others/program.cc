    #include <iostream>
    #include <string>
    #include <algorithm>
    #include <climits>

    int main()
    {
        int n, symbolCounter = 0, maxSymbolCounter = INT_MIN, newSavedLetter = 0;
        std::cin >> n;
        std::cin.ignore();

        std::string str;
        getline(std::cin,str);
        
        for (int i = 0; i < str.length(); i++)
        {
            symbolCounter = std::count(str.begin(), str.end(), str[i]);
            if (maxSymbolCounter < symbolCounter)
            {
                maxSymbolCounter = symbolCounter;
                newSavedLetter = static_cast<int>(str[i]);
            }
            else if(maxSymbolCounter == symbolCounter && newSavedLetter != static_cast<int>(str[i]))
            {
                newSavedLetter = std::min(newSavedLetter,static_cast<int>(str[i]) );
            }        
        }
        std::cout << newSavedLetter << std::endl;
        

        return 0;
    }