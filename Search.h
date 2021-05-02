/*

SearchPattern function was created using the inspiration of https://www.youtube.com/watch?v=ZMQWjslBlbU Code kits's psuedocode
removeSpaces function was created using the inspiration of https://www.geeksforgeeks.org/remove-spaces-from-a-given-string/ Code
*/

//todo change functionality
#include <iostream>
#include <string.h>
using namespace std;
class Search{
    private:
        string query;
        //void badCharHeuristic(string, int[MAX_CHAR_LENGTH]);
        int min(int, int);
        int last(string, int, string);
        string removeSpaces(string);
        bool searchPattern(string,string);
    public:
        void mainProcess(string, string);
};
int Search::min(int j, int i){
    if(j < i){
        return j;
    }else if(j > i){
        return i;
    }else{
        return j;
    }
}
int Search::last(string text, int i, string query){
    int size = query.size();

    for(int j = size; j>=0; j--){
        if(text[i] == query[j]){
            return j;
        }
    }
    return -1;
}
bool Search::searchPattern(string txt, string query){
    int n = txt.size();
    int i = query.size()-1;
    int j = query.size() - 1;
    while(!(i > n-1)){
        if(query[j] == txt[i]){
            if(j == 0){
                return true;
            }else{
                i--;
                j--;
            }
        }else{
            i = i + query.size() - min(j,1+last(txt,i,query));
            j = query.size()-1;
        }
    }
    return false;
}
string Search::removeSpaces(string str){
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}
void Search::mainProcess(string pattern, string text){
    bool yn = searchPattern(text,query);
}