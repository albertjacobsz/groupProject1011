#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;

struct Subject{
    int level;//subject level
    char subCode[10];//
    char subTitle[50];
    int credit;
    int weight;
    char preReq[5][10];
    int lecture;
    int tls;
    int ca;
    int exam;
};
