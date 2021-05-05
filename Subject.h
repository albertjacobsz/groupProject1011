#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;
#pragma once
struct Subject{
    int level;//subject level
    char subCode[20];//
    char subTitle[70];
    int credit;
    int weight;
    char preReq[5][10];
    int lecture;
    int tls;
    int ca;
    int exam;
};

Subject* init_data(){
    Subject infor[81];//CS for Computer Science
    Subject *info = infor;

    //make sure the array of preReq is not empty and lost arrays
    for (int i = 0; i<81;i++){
        for (int j = 0; j < 5; j++){
            strcpy(info[i].preReq[j],"");
        }
    }
    //45 - initialize COMP3921-23:
    info[45].level = 3;
    strcpy(info[45].subCode,"COMP3921-23");
    strcpy(info[45].subTitle, "FinTech Seminars and Case Studies (I, II, and III)");
    info[45].credit = 3;
    info[45].weight = 3;
    strcpy(info[45].preReq[0],"Nil");
    info[45].lecture = 39;
    info[45].tls = 65;
    info[45].ca = 100;
    info[45].exam = 0;

    //46 - initialize COMP3924:
    info[46].level = 3;
    strcpy(info[46].subCode,"COMP3924");
    strcpy(info[46].subTitle, "FinTech Seminars and Case Studies");
    info[46].credit = 3;
    info[46].weight = 3;
    strcpy(info[46].preReq[0],"COMP3921-23");
    info[46].lecture = 39;
    info[46].tls = 65;
    info[46].ca = 100;
    info[46].exam = 0;

    //47 - initialize COMP3S02:
    info[47].level = 3;
    strcpy(info[47].subCode,"COMP3S02");
    strcpy(info[47].subTitle, "Socially Responsible Global Leadership in a Digital World");
    info[47].credit = 3;
    info[47].weight = 3;
    strcpy(info[47].preReq[0],"Nil");
    info[47].lecture = 45;
    info[47].tls = 90;
    info[47].ca = 100;
    info[47].exam = 0;

    //48 - initialize COMP4000:
    info[48].level = 4;
    strcpy(info[48].subCode,"COMP4000");
    strcpy(info[48].subTitle, "Industrial Placement");
    info[48].credit = 24;
    info[48].weight = 0;
    strcpy(info[48].preReq[0],"Nil");
    info[48].lecture = 0;
    info[48].tls = 0;
    info[48].ca = 0;
    info[48].exam = 0;

    //49 - initialize COMP4001:
    info[49].level = 4;
    strcpy(info[49].subCode,"COMP4001");
    strcpy(info[49].subTitle, "Industrial Placement");
    info[49].credit = 3;
    info[49].weight = 0;
    strcpy(info[49].preReq[0],"Nil");
    info[49].lecture = 0;
    info[49].tls = 0;
    info[49].ca = 0;
    info[49].exam = 0;

    //50 - initialize COMP4011:
    info[50].level = 4;
    strcpy(info[50].subCode,"COMP4011");
    strcpy(info[50].subTitle, "Theory of Computation");
    info[50].credit = 3;
    info[50].weight = 3;
    strcpy(info[50].preReq[0],"COMP3011");
    info[50].lecture = 39;
    info[50].tls = 66;
    info[50].ca = 60;
    info[50].exam = 40;

    //51 - initialize COMP4121:
    info[51].level = 4;
    strcpy(info[51].subCode,"COMP4121");
    strcpy(info[51].subTitle, "E-Commerce Technology and Applications");
    info[51].credit = 3;
    info[51].weight = 3;
    strcpy(info[51].preReq[0],"COMP2411");
    strcpy(info[51].preReq[1],"COMP3421");
    info[51].lecture = 39;
    info[51].tls = 66;
    info[51].ca = 55;
    info[51].exam = 45;

    //52 - initialize COMP4122:
    info[52].level = 4;
    strcpy(info[52].subCode,"COMP4122");
    strcpy(info[52].subTitle, "Game Design and Development");
    info[52].credit = 3;
    info[52].weight = 3;
    strcpy(info[52].preReq[0],"COMP2011");
    info[52].lecture = 39;
    info[52].tls = 80;
    info[52].ca = 55;
    info[52].exam = 45;

    //53 - initialize COMP4123:
    info[53].level = 4;
    strcpy(info[53].subCode,"COMP4123");
    strcpy(info[53].subTitle, "Business Process and Workflow Management");
    info[53].credit = 3;
    info[53].weight = 3;
    strcpy(info[53].preReq[0],"Nil");
    info[53].lecture = 39;
    info[53].tls = 66;
    info[53].ca = 55;
    info[53].exam = 45;

    //54 - initialize COMP4125:
    info[54].level = 4;
    strcpy(info[54].subCode,"COMP4125");
    strcpy(info[54].subTitle, "Operations Research and Logistics Management");
    info[54].credit = 3;
    info[54].weight = 3;
    strcpy(info[54].preReq[0],"COMP1011");
    strcpy(info[54].preReq[1],"COMP2011");
    info[54].lecture = 39;
    info[54].tls = 80;
    info[54].ca = 60;
    info[54].exam = 40;

    //55 - initialize COMP4127:
    info[55].level = 4;
    strcpy(info[55].subCode,"COMP4127");
    strcpy(info[55].subTitle, "Information Systems Audit and Control");
    info[55].credit = 3;
    info[55].weight = 3;
    strcpy(info[55].preReq[0],"Nil");
    info[55].lecture = 39;
    info[55].tls = 80;
    info[55].ca = 55;
    info[55].exam = 45;

    //56 - initialize COMP4133:
    info[56].level = 4;
    strcpy(info[56].subCode,"COMP4133");
    strcpy(info[56].subTitle, "Information Retrieval");
    info[56].credit = 3;
    info[56].weight = 3;
    strcpy(info[56].preReq[0],"COMP2011");
    strcpy(info[56].preReq[1],"COMP2411");
    info[56].lecture = 39;
    info[56].tls = 66;
    info[56].ca = 55;
    info[56].exam = 45;

    //57 - initialize COMP4134:
    info[57].level = 4;
    strcpy(info[57].subCode,"COMP4134");
    strcpy(info[57].subTitle, "Biometrics and Security");
    info[57].credit = 3;
    info[57].weight = 3;
    strcpy(info[57].preReq[0],"Nil");
    info[57].lecture = 39;
    info[57].tls = 66;
    info[57].ca = 60;
    info[57].exam = 40;

    //58 - initialize COMP4135:
    info[58].level = 4;
    strcpy(info[58].subCode,"COMP4135");
    strcpy(info[58].subTitle, "Knowledge and Information Management");
    info[58].credit = 3;
    info[58].weight = 3;
    strcpy(info[58].preReq[0],"Nil");
    info[58].lecture = 39;
    info[58].tls = 66;
    info[58].ca = 55;
    info[58].exam = 45;

    //59 - initialize COMP4141:
    info[59].level = 4;
    strcpy(info[59].subCode,"COMP4141");
    strcpy(info[59].subTitle, "Crowdfunding and E-Finance");
    info[59].credit = 3;
    info[59].weight = 3;
    strcpy(info[59].preReq[0],"Basic concepts of finance and computing");
    info[59].lecture = 39;
    info[59].tls = 71;
    info[59].ca = 55;
    info[59].exam = 45;

    //60 - initialize COMP4142:
    info[60].level = 4;
    strcpy(info[60].subCode,"COMP4142");
    strcpy(info[60].subTitle, "E-Payment and Cryptocurrency");
    info[60].credit = 3;
    info[60].weight = 3;
    strcpy(info[60].preReq[0],"COMP3334");
    info[60].lecture = 39;
    info[60].tls = 71;
    info[60].ca = 55;
    info[60].exam = 45;

    //61 - Initialize COMP4146
    info[61].level = 4;
    strcpy(info[61].subCode,"comp4146");
    strcpy(info[61].subTitle, "computational finance");
    info[61].credit = 3;
    info[61].weight = 3;
    strcpy(info[61].preReq[0],"nil");
    info[61].lecture = 39;
    info[61].tls = 66;
    info[61].ca = 55;
    info[61].exam = 45;

    //62 - Initialize COMP4322
    info[62].level = 4;
    strcpy(info[62].subCode,"comp4322");
    strcpy(info[62].subTitle, "internetworking protocol software and management");
    info[62].credit = 3;
    info[62].weight = 3;
    strcpy(info[62].preReq[0],"comp2322");
    info[62].lecture = 39;
    info[62].tls = 66;
    info[62].ca = 50;
    info[62].exam = 50;

    //63 - Initialize COMP4332
    info[63].level = 4;
    strcpy(info[63].subCode,"comp4332");
    strcpy(info[63].subTitle, "mobile security: principles and practice");
    info[63].credit = 3;
    info[63].weight = 3;
    strcpy(info[63].preReq[0],"comp1011");
    strcpy(info[63].preReq[1],"comp2322");
    strcpy(info[63].preReq[2],"comp2432");
    strcpy(info[63].preReq[3],"comp1411");
    strcpy(info[63].preReq[4],"comp3334");
    info[63].lecture = 39;
    info[63].tls = 66;
    info[63].ca = 100;
    info[63].exam = 0;

    //64 - Initialize COMP4334
    info[64].level = 4;
    strcpy(info[64].subCode,"comp4334");
    strcpy(info[64].subTitle, "principles and practice of internet security");
    info[64].credit = 3;
    info[64].weight = 3;
    strcpy(info[64].preReq[0],"comp3334");
    info[64].lecture = 39;
    info[64].tls = 94;
    info[64].ca = 60;
    info[64].exam = 40;

     //65 - Initialize COMP4342
    info[65].level = 4;
    strcpy(info[65].subCode,"comp4342");
    strcpy(info[65].subTitle, "mobile computing");
    info[65].credit = 3;
    info[65].weight = 3;
    strcpy(info[65].preReq[0],"comp2411");
    strcpy(info[65].preReq[1],"comp2432");
    strcpy(info[65].preReq[2],"comp1411");
    info[65].lecture = 26;
    info[65].tls = 66;
    info[65].ca = 55;
    info[65].exam = 45;

    //66 - Initialize COMP4422
    info[66].level = 4;
    strcpy(info[66].subCode,"comp4422");
    strcpy(info[66].subTitle, "computer graphics");
    info[66].credit = 3;
    info[66].weight = 3;
    strcpy(info[66].preReq[0],"comp2011");
    info[66].lecture = 39;
    info[66].tls = 66;
    info[66].ca = 60;
    info[66].exam = 40;

    //75 - initialize COMP4442:
    info[75].level = 4;
    strcpy(info[75].subCode,"COMP4442");
    strcpy(info[75].subTitle, "Service and Cloud Computing");
    info[75].credit = 3;
    info[75].weight = 3;
    strcpy(info[75].preReq[0],"COMP2322");
    strcpy(info[75].preReq[1], "COMP3421");
    info[75].lecture = 39;
    info[75].tls = 0;
    info[75].ca = 55;
    info[75].exam = 45;

    return info;
}
