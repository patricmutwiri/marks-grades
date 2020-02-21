#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Total marks...
    //Average marks...
    //List score...
    //High score...
    //Marks obtained..
    char scr[6];
    double mark[6];
    int units=6, i=0,k=1,l;
    double marks, average, highscore=0.0, totalmarks=0.0,lowestscore=10000;
    char unitname;

    cout<<"\n";
    cout<<"KCA UNIVERSITY GRADING SYSTEM \n";
    cout<<"\n";
    while(i<=5) {
        l = i-1;
        //cout<<"Enter unit "<<i<<" name"<<"\t\n";
        //cin>>unitname;
        cout<<"Enter unit "<<k<<" marks"<<"\t\n";
        cin>>marks;
        scr[i]  = i;
        mark[i] = marks;
        totalmarks = totalmarks+marks;

        highscore = std::max(highscore,marks);
        lowestscore = std::min(lowestscore,marks);
        //cout<<lowestscore<<"\n";

        i++;
        k++;
    }
    average = totalmarks/units;
    // highscore = max(mark);
    cout<<"::::::::::::::::::::::::::::::::::::::::::\n";
    cout<<"KCA UNIVERSITY GRADING SYSTEM \n";

    cout<<"OOP STUDENT GROUP - 19/03488 \n";


    cout<<":::::::::::::::::::::::::::::::::::::::::: \n";
    for(k=0; k<=5;k++){
        cout<<"Unit "<<k<<" score \t: "<<mark[k]<<"\n";
    }

    cout<<"Total Marks is: \t\t"<<totalmarks<<"\n";
    cout<<"Average Marks is: \t\t"<<average<<"\n";
    cout<<"High Score is: \t\t"<<highscore<<"\n";
    cout<<"Lowest Score is: \t\t"<<lowestscore<<"\n";

    cout<<"::::::::::::::::::::::::::::::::::::::::::\n";

    return 0;
}
