/*

SearchPattern function was created using the inspiration of https://www.youtube.com/watch?v=ZMQWjslBlbU Code kits's psuedocode
removeSpaces function was created using the inspiration of https://www.geeksforgeeks.org/remove-spaces-from-a-given-string/ Code
*/
#include <iostream>
#include <string.h>
#define MAX_CHAR_LENGTH 160
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
        void mainProcess();
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
void Search::mainProcess(){
    cout<< "Enter in a keyword" << endl;
    cin>> query;
   // query = removeSpaces(query);
    string text = "world.com Hello";
    cout<< query<<endl;
   // text = removeSpaces(text);
    cout<< text<< endl;
    bool yn = searchPattern(text,query);
    cout <<"Is string found?: " << yn<< endl;
}