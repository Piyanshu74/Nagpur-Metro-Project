#include<iostream>
#include<queue>
#include<map>
#include<climits>
#include "graph.cpp"
using namespace std;


int main()
{

    Graph g=Graph();
    g.createmap();


    cout<<"                           ***WELCOME TO THE METRO APP***                           "<<endl;
    cout<<"                                 ~~MENU OPTIONS~~                           "<<endl;
    cout<<"1. LIST ALL THE STATIONS IN THE MAP"<<endl;
    cout<<"2. SHOW THE METRO MAP"<<endl;
    cout<<"3. GET SHORTEST DISTANCE FROM A 'SOURCE' STATION TO 'DESTINATION' STATION"<<endl;
    cout<<"4. GET SHORTEST TIME TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION"<<endl;
    cout<<"5. GET SHORTEST PATH (DISTANCE WISE) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION"<<endl;
    cout<<"6. GET SHORTEST PATH (TIME WISE) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION"<<endl;
    cout<<"7. EXIT THE MENU"<<endl;
    cout<<"ENTER YOUR CHOICE FROM THE ABOVE LIST:"<<endl;


    cout<<"**************************************"<<endl;
    while(true)
    {
        int choice;
        cin>>choice;
        if(choice==7)
        {
            return 0;
        }
        if(choice==1)
        {
            g.display_list();
        }
        if(choice==2)
        {
            g.display_map();
        }
        if(choice==3)
        {
            string source,destination;
            cin>>source>>destination;
            cout<<g.dis(source,destination)<<" kilometer"<<endl;
        }
        if(choice==4)
        {
            string source,destination;
            cin>>source>>destination;
            cout<<g.time(source,destination)<<" minutes"<<endl;
        }
        if(choice==5)
        {
            string source,destination;
            cin>>source>>destination;
            vector<string> ans;
            g.path(source,destination,ans);
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
        }
    }
}