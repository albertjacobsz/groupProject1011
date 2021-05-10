#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;
#pragma once
struct Subject{
    int level = 0;//subject level
    char subCode[20] ="";//
    char subTitle[70] = "";
    int credit = 0;
    int weight = 0;
    char preReq[5][50];
    int lecture = 0;
    int tls = 0;
    int ca = 0;
    int exam = 0;
};

Subject* init_data(){
    Subject infor[90];//CS for Computer Science
    Subject *info = infor;

    //make sure the array of preReq is not empty and lost arrays
    for (int i = 0; i<82;i++){
        for (int j = 0; j < 5; j++){
            strcpy(info[i].preReq[j],"");
        }
    }
    //0 - Intialize COMP1001
    info[0].level = 1;
    strcpy(info[0].subCode,"comp1001");
    strcpy(info[0].subTitle, "Problem Solving Methodology in Information Technology");
    info[0].credit = 3;
    info[0].weight = 3;
    strcpy(info[0].preReq[0],"nil");
    info[0].lecture = 26;
    info[0].tls = 55;
    info[0].exam = 45;
    
    //1 - Intialize COMP1002
    info[1].level = 1;
    strcpy(info[1].subCode,"comp1002");
    strcpy(info[1].subTitle, "computational thinking and problem solving");
    info[1].credit = 3;
    info[1].weight = 3;
    strcpy(info[1].preReq[0],"nil");
    info[1].lecture = 26;
    info[1].tls = 55;
    info[1].exam = 45;
    
    //2 - Intialize COMP1003
    info[2].level = 1;
    strcpy(info[2].subCode,"comp1003");
    strcpy(info[2].subTitle, "statistical tools and applications");
    info[2].credit = 3;
    info[2].weight = 3;
    strcpy(info[2].preReq[0],"nil");
    info[2].lecture = 26;
    info[2].tls = 55;
    info[2].exam = 45;
    
     //3 - Intialize COMP1011
    info[3] .level = 1;
    strcpy(info[3].subCode,"comp1011");
    strcpy(info[3].subTitle, "programming fundamentals");
    info[3].credit = 3;
    info[3].weight = 3;
    strcpy(info[3].preReq[0],"nil");
    info[3].lecture = 26;
    info[3].tls = 55;
    info[3].exam = 45;
    
     //4 - Intialize COMP1411
    info[4].level = 1;
    strcpy(info[4].subCode,"comp1411");
    strcpy(info[4].subTitle, "introduction to computer systems");
    info[4].credit = 3;
    info[4].weight = 3;
    strcpy(info[4].preReq[0],"nil");
    info[4].lecture = 26;
    info[4].tls = 55;
    info[4].exam = 45;
    
     //5 - Intialize COMP1433
    info[5].level = 1;
    strcpy(info[5].subCode,"comp1433");
    strcpy(info[5].subTitle, "introduction to data analytics");
    info[5].credit = 3;
    info[5].weight = 3;
    strcpy(info[5].preReq[0],"nil");
    info[5].lecture = 26;
    info[5].tls = 55;
    info[5].exam = 45;
    
     //6 - Intialize COMP1901
    info[6].level = 1;
    strcpy(info[6].subCode,"comp1901");
    strcpy(info[6].subTitle, "seminars and topics in information technology");
    info[6].credit = 3;
    info[6].weight = 3;
    strcpy(info[6].preReq[0],"nil");
    info[6].lecture = 26;
    info[6].tls = 55;
    info[6].exam = 45;
    
     //7 - Intialize COMP1B02
    info[7].level = 1;
    strcpy(info[7].subCode,"comp1b02");
    strcpy(info[7].subTitle, "friends, followers and circles: connections in a socially-computed world");
    info[7].credit = 3;
    info[7].weight = 3;
    strcpy(info[7].preReq[0],"nil");
    info[7].lecture = 26;
    info[7].tls = 55;
    info[7].exam = 45;
    
     //8 - Intialize COMP1B03
    info[8].level = 1;
    strcpy(info[8].subCode,"comp1b03");
    strcpy(info[8].subTitle, "innovation and entrepreneurship: the rise of the ICT industry in china");
    info[8].credit = 3;
    info[8].weight = 3;
    strcpy(info[8].preReq[0],"nil");;
    info[8].lecture = 26;
    info[8].tls = 55;
    info[8].exam = 45;
    
    //9 - Intialize COMP1D04
    info[9].level = 1;
    strcpy(info[9].subCode,"comp1d04");
    strcpy(info[9].subTitle, "from scratch to apps: foundations of computational thinking and literacy for problem solving");
    info[9].credit = 3;
    info[9].weight = 3;
    strcpy(info[9].preReq[0],"nil");
    info[9].lecture = 26;
    info[9].tls = 55;
    info[9].exam = 45;
    
    //10 - Intialize COMP2011
    info[10].level = 2;
    strcpy(info[10].subCode,"comp2011");
    strcpy(info[10].subTitle, "data structures");
    info[10].credit = 3;
    info[10].weight = 3;
    strcpy(info[10].preReq[0],"comp1011");
    info[10].lecture = 26;
    info[10].tls = 55;
    info[10].exam = 45;
    
    //11 - Intialize COMP2012
    info[11].level = 2;
    strcpy(info[11].subCode,"comp2012");
    strcpy(info[11].subTitle, "discrete structures");
    info[11].credit = 3;
    info[11].weight = 3;
    strcpy(info[11].preReq[0],"nil");
    info[11].lecture = 26;
    info[11].tls = 55;
    info[11].exam = 45;
    
    //12 - Intialize COMP2021
    info[12].level = 2;
    strcpy(info[12].subCode,"comp2021");
    strcpy(info[12].subTitle, "object-oriented programming");
    info[12].credit = 3;
    info[12].weight = 3;
    strcpy(info[12].preReq[0],"comp1011");
    info[12].lecture = 26;
    info[12].tls = 55;
    info[12].exam = 45;
    
    //13 - Intialize COMP2022
    info[13].level = 2;
    strcpy(info[13].subCode,"comp2021");
    strcpy(info[13].subTitle, "programming for finTech applications");
    info[13].credit = 3;
    info[13].weight = 3;
    strcpy(info[13].preReq[0],"comp1001");
    info[13].lecture = 26;
    info[13].tls = 55;
    info[13].exam = 45;
    
    //14 - Intialize COMP2121
    info[14].level = 2;
    strcpy(info[14].subCode,"comp2121");
    strcpy(info[14].subTitle, "e-business");
    info[14].credit = 3;
    info[14].weight = 3;
    strcpy(info[14].preReq[0],"nil");
    info[14].lecture = 26;
    info[14].tls = 55;
    info[14].exam = 45;
    
    //15 - Intialize COMP2222
    info[15].level = 2;
    strcpy(info[15].subCode,"comp2222");
    strcpy(info[15].subTitle, "introduction to human-computer interaction methods");
    info[15].credit = 3;
    info[15].weight = 3;
    strcpy(info[15].preReq[0],"nil");
    info[15].lecture = 26;
    info[15].tls = 55;
    info[15].exam = 45;
    
    //16 - Intialize COMP2322
    info[16].level = 2;
    strcpy(info[16].subCode,"comp2322");
    strcpy(info[16].subTitle, "computer networking");
    info[16].credit = 3;
    info[16].weight = 3;
    strcpy(info[16].preReq[0],"comp1011");
    info[16].lecture = 26;
    info[16].tls = 55;
    info[16].exam = 45;
    
     //17 - Intialize COMP2411
    info[17].level = 2;
    strcpy(info[17].subCode,"comp2411");
    strcpy(info[17].subTitle, "database systems");
    info[17].credit = 3;
    info[17].weight = 3;
    strcpy(info[17].preReq[0],"comp1011");
    info[17].lecture = 26;
    info[17].tls = 55;
    info[17].exam = 45;
    
     //18 - Intialize COMP2421
    info[18].level = 2;
    strcpy(info[18].subCode,"comp2421");
    strcpy(info[18].subTitle, "computer organization");
    info[18].credit = 3;
    info[18].weight = 3;
    strcpy(info[18].preReq[0],"nil");
    info[18].lecture = 26;
    info[18].tls = 55;
    info[18].exam = 45;
    
     //19 - Intialize COMP2422
    info[19].level = 2;
    strcpy(info[19].subCode,"comp2422");
    strcpy(info[19].subTitle, "visual interface and interaction development");
    info[19].credit = 3;
    info[19].weight = 3;
    strcpy(info[19].preReq[0],"comp2011");
    strcpy(info[19].preReq[0],"comp2021");
    info[19].lecture = 26;
    info[19].tls = 55;
    info[19].exam = 45;
    
     //20 - Intialize COMP2432
    info[20].level = 2;
    strcpy(info[20].subCode,"comp2422");
    strcpy(info[20].subTitle, "operating systems");
    info[20].credit = 3;
    info[20].weight = 3;
    strcpy(info[20].preReq[0],"comp2011");
    info[20].lecture = 26;
    info[20].tls = 55;
    info[20].exam = 45;
    
    //21 - Intialize COMP2A01
    info[21].level = 2;
    strcpy(info[21].subCode,"comp2a01");
    strcpy(info[21].subTitle, "whose data is it anyway?information and internet ethics, privacy and security");
    info[21].credit = 3;
    info[21].weight = 3;
    strcpy(info[21].preReq[0],"comp2011");
    info[21].lecture = 26;
    info[21].tls = 50;
    info[21].exam = 50;
    
    //22 - Intialize COMP2S01
    info[21].level = 2;
    strcpy(info[21].subCode,"comp2s01");
    strcpy(info[21].subTitle, "technology beyond borders:service learning across cultural, ethnic and community lines");
    info[21].credit = 3;
    info[21].weight = 3;
    strcpy(info[21].preReq[0],"nil");
    info[21].lecture = 26;
    info[21].tls = 55;
    info[21].exam = 45;
    
    //23 - Intialize COMP3011
    info[23].level = 3;
    strcpy(info[23].subCode,"comp3011");
    strcpy(info[23].subTitle, "design and analysis of algorithms");
    info[23].credit = 3;
    info[23].weight = 3;
    strcpy(info[23].preReq[0],"comp1011");
    strcpy(info[23].preReq[1],"comp2011");
    info[23].lecture = 26;
    info[23].tls = 60;
    info[23].exam = 40;
    
    //24 - Intialize COMP3021
    info[24].level = 3;
    strcpy(info[24].subCode,"comp3021");
    strcpy(info[24].subTitle, "programming language paradigms");
    info[24].credit = 3;
    info[24].weight = 3;
    strcpy(info[24].preReq[0],"comp1011");
    strcpy(info[24].preReq[1],"comp2011");
    info[24].lecture = 26;
    info[24].tls = 55;
    info[24].exam = 45;
    
     //25 - Intialize COMP3121
    info[25].level = 3;
    strcpy(info[25].subCode,"comp3121");
    strcpy(info[25].subTitle, "social and collaborative computing");
    info[25].credit = 3;
    info[25].weight = 3;
    strcpy(info[25].preReq[0],"nil");
    info[25].lecture = 26;
    info[25].tls = 55;
    info[25].exam = 45;
    
     //26 - Intialize COMP3122
    info[26].level = 3;
    strcpy(info[26].subCode,"comp3122");
    strcpy(info[26].subTitle, "information systems development");
    info[26].credit = 3;
    info[26].weight = 3;
    strcpy(info[26].preReq[0],"nil");
    info[26].lecture = 39;
    info[26].tls = 70;
    info[26].exam = 30;
    
    //27 - Intialize COMP3131
    info[27].level = 3;
    strcpy(info[27].subCode,"comp3131");
    strcpy(info[27].subTitle, "business and information systems strategies");
    info[27].credit = 3;
    info[27].weight = 3;
    strcpy(info[27].preReq[0],"nil");
    info[27].lecture = 39;
    info[27].tls = 60;
    info[27].exam = 40;
    
     //28 - Intialize COMP3133
    info[28].level = 3;
    strcpy(info[28].subCode,"comp3133");
    strcpy(info[28].subTitle, "chinese language computing");
    info[28].credit = 3;
    info[28].weight = 3;
    strcpy(info[28].preReq[0],"comp1011");
    info[28].lecture = 26;
    info[28].tls = 55;
    info[28].exam = 45;
    
    //29 - Intialize COMP3134
    info[29].level = 3;
    strcpy(info[29].subCode,"comp3134");
    strcpy(info[29].subTitle, "business intelligence and customer relationship management");
    info[29].credit = 3;
    info[29].weight = 3;
    strcpy(info[29].preReq[0],"nil");
    info[29].lecture = 39;
    info[29].tls = 55;
    info[29].exam = 45;
    
    //30 - Intialize COMP3211
    info[30].level = 3;
    strcpy(info[30].subCode,"comp3211");
    strcpy(info[30].subTitle, "software engineering");
    info[30].credit = 3;
    info[30].weight = 3;
    strcpy(info[30].preReq[0],"comp1011");
    strcpy(info[30].preReq[0],"comp2011");
    info[30].lecture = 39;
    info[30].tls = 60;
    info[30].exam = 40;
    
     //31 - Intialize COMP3222
    info[31].level = 3;
    strcpy(info[31].subCode,"comp3222");
    strcpy(info[31].subTitle, "software design principles");
    info[31].credit = 3;
    info[31].weight = 3;
    strcpy(info[31].preReq[0],"comp2011");
    strcpy(info[31].preReq[0],"comp2021");
    info[31].lecture = 39;
    info[31].tls = 55;
    info[31].exam = 45;
    
     //32 - Intialize COMP3233
    info[32].level = 3;
    strcpy(info[32].subCode,"comp3233");
    strcpy(info[32].subTitle, "software testing and quality assurance");
    info[32].credit = 3;
    info[32].weight = 3;
    strcpy(info[32].preReq[0],"comp3211");
    info[32].lecture = 39;
    info[32].tls = 55;
    info[32].exam = 45;
    
     //33 - Intialize COMP3235
    info[33].level = 3;
    strcpy(info[33].subCode,"comp3235");
    strcpy(info[33].subTitle, "software project management");
    info[33].credit = 3;
    info[33].weight = 3;
    strcpy(info[33].preReq[0],"comp3211");
    info[33].lecture = 39;
    info[33].tls = 55;
    info[33].exam = 45;
    
     //34 - Intialize COMP3334
    info[34].level = 3;
    strcpy(info[34].subCode,"comp3334");
    strcpy(info[34].subTitle, "computer systems security");
    info[34].credit = 3;
    info[34].weight = 3;
    strcpy(info[34].preReq[0],"nil");
    info[34].lecture = 39;
    info[34].tls = 60;
    info[34].exam = 40;
    
    //35 - Intialize COMP3335
    info[35].level = 3;
    strcpy(info[35].subCode,"comp3335");
    strcpy(info[35].subTitle, "database security");
    info[35].credit = 3;
    info[35].weight = 3;
    strcpy(info[35].preReq[0],"comp2411");
    info[35].lecture = 39;
    info[35].tls = 55;
    info[35].exam = 45;
    
    //36 - Intialize COMP3421
    info[36].level = 3;
    strcpy(info[36].subCode,"comp3421");
    strcpy(info[36].subTitle, "web application design and development");
    info[36].credit = 3;
    info[36].weight = 3;
    strcpy(info[36].preReq[0],"comp1011");
    info[36].lecture = 26;
    info[36].tls = 55;
    info[36].exam = 45;
    
    //37 - Intialize COMP3422
    info[37].level = 3;
    strcpy(info[37].subCode,"comp3422");
    strcpy(info[37].subTitle, "creative digital media design");
    info[37].credit = 3;
    info[37].weight = 3;
    strcpy(info[37].preReq[0],"comp2011");
    info[37].lecture = 26;
    info[37].tls = 55;
    info[37].exam = 45;
    
     //38 - Intialize COMP3423
    info[38].level = 3;
    strcpy(info[38].subCode,"comp3423");
    strcpy(info[38].subTitle, "human computer interaction");
    info[38].credit = 3;
    info[38].weight = 3;
    strcpy(info[38].preReq[0],"comp1011");
    info[38].lecture = 39;
    info[38].tls = 55;
    info[38].exam = 45;
    
     //39 - Intialize COMP3432
    info[39].level = 3;
    strcpy(info[39].subCode,"comp3432");
    strcpy(info[39].subTitle, "innovative computing paradigms");
    info[39].credit = 3;
    info[39].weight = 3;
    strcpy(info[39].preReq[0],"comp2011");
    strcpy(info[39].preReq[0],"comp2021");
    info[39].lecture = 39;
    info[39].tls = 55;
    info[39].exam = 45;
    
     //40 - Intialize COMP3438
    info[40].level = 3;
    strcpy(info[40].subCode,"comp3438");
    strcpy(info[40].subTitle, "system programming");
    info[40].credit = 3;
    info[40].weight = 3;
    strcpy(info[40].preReq[0],"comp1011");
    strcpy(info[40].preReq[0],"comp2432");
    info[40].lecture = 39;
    info[40].tls = 55;
    info[40].exam = 45;
    
    //41 - Intialize COMP3511
    info[41].level = 3;
    strcpy(info[41].subCode,"comp3511");
    strcpy(info[41].subTitle, "legal aspects and ethics of computing");
    info[41].credit = 3;
    info[41].weight = 3;
    strcpy(info[41].preReq[0],"nil");
    info[41].lecture = 26;
    info[41].tls = 100;
    info[41].exam = 0;
    
    //42 - Intialize COMP3512
    info[42].level = 3;
    strcpy(info[42].subCode,"comp3512");
    strcpy(info[42].subTitle, "legal aspects, professionalism and ethics of computing");
    info[42].credit = 3;
    info[42].weight = 3;
    strcpy(info[42].preReq[0],"nil");
    info[42].lecture = 39;
    info[42].tls = 100;
    info[42].exam = 0;
    
    //43 - Intialize COMP3531
    info[43].level = 3;
    strcpy(info[43].subCode,"comp3531");
    strcpy(info[43].subTitle, "IT entrepreneurship");
    info[43].credit = 3;
    info[43].weight = 3;
    strcpy(info[43].preReq[0],"nil");
    info[43].lecture = 39;
    info[43].tls = 65;
    info[43].exam = 35;
    
    //44 - Intialize COMP3911
    info[44].level = 3;
    strcpy(info[44].subCode,"comp3911");
    strcpy(info[44].subTitle, "service learning and civic engagement in the information age");
    info[44].credit = 3;
    info[44].weight = 3;
    strcpy(info[44].preReq[0],"nil");
    info[44].lecture = 28;
    info[44].tls = 70;
    info[44].exam = 30;


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
    strcpy(info[64].subCode,"COMP4334");
    strcpy(info[64].subTitle, "Principles and Practice of Internet Security");
    info[64].credit = 3;
    info[64].weight = 3;
    strcpy(info[64].preReq[0],"COMP3334");
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

    //67 - initialize COMP4423
     info[67].level = 4;
    strcpy(info[67].subCode,"COMP4423");
    strcpy(info[67].subTitle, "Computer Vision");
    info[67].credit = 3;
    info[67].weight = 3;
    strcpy(info[67].preReq[0],"COMP2011");
    strcpy(info[67].preReq[1],"EIE2106 (EIE student)");
    info[66].lecture = 39;
    info[66].tls = 80;
    info[66].ca = 55;
    info[66].exam = 45;

    //68 - initialize COMP4431

    info[68].level = 4;
    strcpy(info[68].subCode,"COMP4431");
    strcpy(info[68].subTitle, "Artificial Intelligence");
    info[68].credit = 3;
    info[68].weight = 3;
    strcpy(info[68].preReq[0],"COMP2011");
    info[68].lecture = 39;
    info[68].tls = 80;
    info[68].ca = 55;
    info[68].exam = 45;

    //69 - initialize COMP4432

    info[69].level = 4;
    strcpy(info[69].subCode,"COMP4432");
    strcpy(info[69].subTitle, "Machine Learning");
    info[69].credit = 3;
    info[69].weight = 3;
    strcpy(info[69].preReq[0],"COMP2011");
    info[69].lecture = 39;
    info[69].tls = 80;
    info[69].ca = 55;
    info[69].exam = 45;

    //70 - initialize COMP4433
    info[70].level = 4;
    strcpy(info[70].subCode,"COMP4433");
    strcpy(info[70].subTitle, "Data Mining and Data Warehousing");
    info[70].credit = 3;
    info[70].weight = 3;
    strcpy(info[70].preReq[0],"COMP2411");
    info[70].lecture = 39;
    info[70].tls = 70;
    info[70].ca = 55;
    info[70].exam = 45;

    //71 - initialize COMP4434
    info[71].level = 4;
    strcpy(info[71].subCode,"COMP4434");
    strcpy(info[71].subTitle, "Big Data Analytics");
    info[71].credit = 3;
    info[71].weight = 3;
    strcpy(info[71].preReq[0],"AMA1104");
    strcpy(info[71].preReq[1],"COMP1011");
    strcpy(info[71].preReq[2],"COMP2011");
    strcpy(info[71].preReq[3],"COMP2411");
    info[71].lecture = 39;
    info[71].tls = 77;
    info[71].ca = 60;
    info[71].exam = 40;

    //72 - initialize COMP4435
    info[72].level = 4;
    strcpy(info[72].subCode,"COMP4435");
    strcpy(info[72].subTitle, "Dependable Computing");
    info[72].credit = 3;
    info[72].weight = 3;
    strcpy(info[72].preReq[0],"Nil");
    info[72].lecture = 39;
    info[72].tls = 66;
    info[72].ca = 55;
    info[72].exam = 45;

    //73 - initialize COMP4438
    info[73].level = 4;
    strcpy(info[73].subCode,"COMP4438");
    strcpy(info[73].subTitle, "Embedded Software");
    info[73].credit = 3;
    info[73].weight = 3;
    strcpy(info[73].preReq[0],"COMP3438");
    info[73].lecture = 39;
    info[73].tls = 80;
    info[73].ca = 55;
    info[73].exam = 45;

    //74 - initialize COMP4441
    info[74].level = 4;
    strcpy(info[74].subCode,"COMP4441");
    strcpy(info[74].subTitle, "Enterprise Middleware Systems and Applications");
    info[74].credit = 3;
    info[74].weight = 3;
    strcpy(info[74].preReq[0],"COMP1011");
    info[74].lecture = 39;
    info[74].tls = 66;
    info[74].ca = 55;
    info[74].exam = 45;

    //75 - initialize COMP4442:
    info[75].level = 4;
    strcpy(info[75].subCode,"COMP4442");
    strcpy(info[75].subTitle, "Service and Cloud Computing");
    info[75].credit = 3;
    info[75].weight = 3;
    strcpy(info[75].preReq[0],"COMP2322");
    strcpy(info[75].preReq[1], "COMP3421");
    info[75].lecture = 39;
    info[75].tls =66;
    info[75].ca = 55;
    info[75].exam = 45;

     //76 - initialize COMP4512:
    info[76].level = 4;
    strcpy(info[76].subCode,"COMP4512");
    strcpy(info[76].subTitle, "Intellectual Property Protection and Management");
    info[76].credit = 3;
    info[76].weight = 3;
    strcpy(info[76].preReq[0],"Nil");
    info[76].lecture = 39;
    info[76].tls = 66;
    info[76].ca = 55;
    info[76].exam = 45;

    //77 - initialize COMP4531:
    info[77].level = 4;
    strcpy(info[77].subCode,"COMP4512");
    strcpy(info[77].subTitle, "Emerging Topics in FinTech");
    info[77].credit = 3;
    info[77].weight = 3;
    strcpy(info[77].preReq[0],"Nil");
    info[77].lecture = 39;
    info[77].tls = 78;
    info[77].ca = 55;
    info[77].exam = 45;

    //78 - initialize COMP4911:
    info[78].level = 4;
    strcpy(info[78].subCode,"COMP4911-12");
    strcpy(info[78].subTitle, "Capstone Project");
    info[78].credit = 3;
    info[78].weight = 3;
    strcpy(info[78].preReq[0],"COMP4911 for COMP4912");
    info[78].lecture = 26;
    info[78].tls = 214;
    info[78].ca = 100;
    info[78].exam = 0;

    //79 - initialize COMP4913:
    info[79].level = 4;
    strcpy(info[79].subCode,"COMP4913");
    strcpy(info[79].subTitle, "Capstone Project");
    info[79].credit = 6;
    info[79].weight = 4;
    strcpy(info[79].preReq[0],"Nil");
    info[79].lecture = 0;
    info[79].tls = 210;
    info[79].ca = 100;
    info[79].exam = 0;

    //80 - initialize COMP4921:
    info[80].level = 4;
    strcpy(info[80].subCode,"COMP4921");
    strcpy(info[80].subTitle, "Final Year Project");
    info[80].credit = 9;
    info[80].weight = 6;
    strcpy(info[80].preReq[0],"Nil");
    info[80].lecture = 0;
    info[80].tls = 378;
    info[80].ca = 100;
    info[80].exam = 0;
    return info;
}
