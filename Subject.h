#include <string.h>
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
