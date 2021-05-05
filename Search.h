#include <string>
#include <iostream>
class Search{
    private:
        //void badCharHeuristic(string, int[MAX_CHAR_LENGTH]);
        std::string toLowerCase(std::string);
        
    public:
        bool searchPattern(std::string,std::string);
};

bool Search::searchPattern(std::string query, std::string txt){
    query = toLowerCase(query);
    txt = toLowerCase(txt);
    int sq = query.size();
    int st = txt.size();
    int i = 0;
    int j = 0;
    while(i < st){
        if(query[j] == txt[i]){
            if(j == sq-1){
                return true;
            }
            if(i != st){
                i++;
                j++;
            }
        }else{
            i++;
            j = 0;
        }
    }
    return false;
}
std::string Search::toLowerCase(std::string text){
    int size = text.size();
    std::string newString = "";
    for(int i = 0; i<size; i++){
        char temp = text[i];
        if((int(temp) >= 65) && (int(temp) <= 90)){
           // std::cout<< " INSIDE = "<< std::endl;
            int off = int(temp) - 65;
            //std::cout<< " OFF = "<< off << std::endl;
            off = off + 97;
            //std::cout<< " NEW OFF = "<<  off << std::endl;
            temp = off;
            //std::cout<< " new  = "<< std::endl;
        }
        //std::cout<< "new char = " << int(temp) << std::endl;
        newString += temp;
    }
    
    return newString;
}