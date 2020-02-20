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
    int units=6, i=0,k=0;
    double marks, average, highscore, totalmarks=0.0;
    char unitname;


    while(i<=6) {
        //cout<<"Enter unit "<<i<<" name"<<"\t\n";
        //cin>>unitname;
        cout<<"Enter unit "<<i<<" marks"<<"\t\n";
        cin>>marks;
        scr[i]  = i;
        mark[i] = marks;
        totalmarks = totalmarks+marks;
        i++;
    }
    average = totalmarks/units;
    // highscore = max(mark);
    cout<<"::::::::::::::::::::::::::::::::::::::::::\n";

    for(k=0; k<=6;k++){
        cout<<"Unit "<<k<<" score \t: "<<mark[k]<<"\n";
    }
    highscore = std::max(mark[0], mark[5]);
    cout<<"Total Marks is: \t"<<totalmarks<<"\n";
    cout<<"Average Marks is: \t"<<average<<"\n";
    cout<<"Highscore is: \t"<<highscore<<"\n";

    cout<<"::::::::::::::::::::::::::::::::::::::::::\n";

    return 0;
}
