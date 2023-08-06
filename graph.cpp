class Graph
{
    public:
    int n;
    map<string,int> m;
    map<int,string> m2;
    vector<vector<float>> d;
    vector<vector<float>> t;

/*     class edge{
        string s;
        string d;
        int dis;
        int time;
        public:
        edge(string p,string q,int km,int t)
        {
            s=p;
            d=q;
            dis=km;
            time=t;
        }
    }; */

    Graph()
    {
        n=35;
        for(int i=0;i<35;i++)
        {
            vector<float> k;
            for(int i=0;i<35;i++)
            {
                k.push_back(0);
            }
            d.push_back(k);
            t.push_back(k);
        }
    }

    void creategraph()
    {
        d[m["Lokmanya_Nagar"]-1][m["Bansi_Nagar"]-1]=1.5;
        d[m["Bansi_Nagar"]-1][m["Lokmanya_Nagar"]-1]=1.5;
        t[m["Lokmanya_Nagar"]-1][m["Bansi_Nagar"]-1]=1.2;
        t[m["Bansi_Nagar"]-1][m["Lokmanya_Nagar"]-1]=1.2;

        d[m["Bansi_Nagar"]-1][m["Vasudev_Nagar"]-1]=3;
        d[m["Vasudev_Nagar"]-1][m["Bansi_Nagar"]-1]=3;
        t[m["Bansi_Nagar"]-1][m["Vasudev_Nagar"]-1]=2.4;
        t[m["Vasudev_Nagar"]-1][m["Bansi_Nagar"]-1]=2.4;

        d[m["Vasudev_Nagar"]-1][m["Rachana_Ring_Road_Junction"]-1]=1.5;
        d[m["Rachana_Ring_Road_Junction"]-1][m["Vasudev_Nagar"]-1]=1.5;
        t[m["Vasudev_Nagar"]-1][m["Rachana_Ring_Road_Junction"]-1]=1.2;
        t[m["Rachana_Ring_Road_Junction"]-1][m["Vasudev_Nagar"]-1]=1.2;
        
        d[m["Rachana_Ring_Road_Junction"]-1][m["Subhash_Nagar"]-1]=1.5;
        d[m["Subhash_Nagar"]-1][m["Rachana_Ring_Road_Junction"]-1]=1.5;
        t[m["Rachana_Ring_Road_Junction"]-1][m["Subhash_Nagar"]-1]=1.2;
        t[m["Subhash_Nagar"]-1][m["Rachana_Ring_Road_Junction"]-1]=1.2;
        
        d[m["Subhash_Nagar"]-1][m["Dharampeth_College"]-1]=4;
        d[m["Dharampeth_College"]-1][m["Subhash_Nagar"]-1]=4;
        t[m["Subhash_Nagar"]-1][m["Dharampeth_College"]-1]=3.2;
        t[m["Dharampeth_College"]-1][m["Subhash_Nagar"]-1]=3.2;
        
        d[m["Dharampeth_College"]-1][m["LAD_Square"]-1]=1.2;
        d[m["LAD_Square"]-1][m["Dharampeth_College"]-1]=1.2;
        t[m["Dharampeth_College"]-1][m["LAD_Square"]-1]=0.96;
        t[m["LAD_Square"]-1][m["Dharampeth_College"]-1]=0.96;

        d[m["LAD_Square"]-1][m["Shankar_Nagar_Square"]-1]=2.0;
        d[m["Shankar_Nagar_Square"]-1][m["LAD_Square"]-1]=2.0;
        t[m["LAD_Square"]-1][m["Shankar_Nagar_Square"]-1]=2.2;
        t[m["Shankar_Nagar_Square"]-1][m["LAD_Square"]-1]=2.2;
        
        d[m["Shankar_Nagar_Square"]-1][m["Institute_of_Engineers"]-1]=2.75;
        d[m["Institute_of_Engineers"]-1][m["Shankar_Nagar_Square"]-1]=2.75;
        t[m["Shankar_Nagar_Square"]-1][m["Institute_of_Engineers"]-1]=2.2;
        t[m["Institute_of_Engineers"]-1][m["Shankar_Nagar_Square"]-1]=2.2;
        
        d[m["Institute_of_Engineers"]-1][m["Jhansi_Rani_Square"]-1]=1.4;
        d[m["Jhansi_Rani_Square"]-1][m["Institute_of_Engineers"]-1]=1.4;
        t[m["Institute_of_Engineers"]-1][m["Jhansi_Rani_Square"]-1]=1.12;
        t[m["Jhansi_Rani_Square"]-1][m["Institute_of_Engineers"]-1]=1.12;

        
        d[m["Jhansi_Rani_Square"]-1][m["Sitabuldi"]-1]=0.75;
        d[m["Sitabuldi"]-1][m["Jhansi_Rani_Square"]-1]=0.75;
        t[m["Jhansi_Rani_Square"]-1][m["Sitabuldi"]-1]=0.6;
        t[m["Sitabuldi"]-1][m["Jhansi_Rani_Square"]-1]=0.6;

        
        d[m["Sitabuldi"]-1][m["Nagpur_Railway_Station"]-1]=2;
        d[m["Nagpur_Railway_Station"]-1][m["Sitabuldi"]-1]=2;
        t[m["Sitabuldi"]-1][m["Nagpur_Railway_Station"]-1]=1.6;
        t[m["Nagpur_Railway_Station"]-1][m["Sitabuldi"]-1]=1.6;

        d[m["Nagpur_Railway_Station"]-1][m["Dosar_Vaishya_Square"]-1]=1.5;
        d[m["Dosar_Vaishya_Square"]-1][m["Nagpur_Railway_Station"]-1]=1.5;
        t[m["Nagpur_Railway_Station"]-1][m["Dosar_Vaishya_Square"]-1]=1.2;
        t[m["Dosar_Vaishya_Square"]-1][m["Nagpur_Railway_Station"]-1]=1.2;

        d[m["Dosar_Vaishya_Square"]-1][m["Agrasen_Square"]-1]=1.5;
        d[m["Agrasen_Square"]-1][m["Dosar_Vaishya_Square"]-1]=1.5;
        t[m["Dosar_Vaishya_Square"]-1][m["Agrasen_Square"]-1]=1.2;
        t[m["Agrasen_Square"]-1][m["Dosar_Vaishya_Square"]-1]=1.2;
        
        d[m["Agrasen_Square"]-1][m["Telephone_Exchange"]-1]=1.6;
        d[m["Telephone_Exchange"]-1][m["Agrasen_Square"]-1]=1.6;
        t[m["Agrasen_Square"]-1][m["Telephone_Exchange"]-1]=1.28;
        t[m["Telephone_Exchange"]-1][m["Agrasen_Square"]-1]=1.28;

        d[m["Telephone_Exchange"]-1][m["Ambedkar_Square"]-1]=1.7;
        d[m["Ambedkar_Square"]-1][m["Telephone_Exchange"]-1]=1.7;
        t[m["Telephone_Exchange"]-1][m["Ambedkar_Square"]-1]=1.36;
        t[m["Ambedkar_Square"]-1][m["Telephone_Exchange"]-1]=1.36;

        
        d[m["Ambedkar_Square"]-1][m["Vaishnodevi_Square"]-1]=0.8;
        d[m["Vaishnodevi_Square"]-1][m["Ambedkar_Square"]-1]=0.8;
        t[m["Ambedkar_Square"]-1][m["Vaishnodevi_Square"]-1]=0.64;
        t[m["Vaishnodevi_Square"]-1][m["Ambedkar_Square"]-1]=0.64;
        
        d[m["Vaishnodevi_Square"]-1][m["Prajapati_Nagar"]-1]=1.5;
        d[m["Prajapati_Nagar"]-1][m["Vaishnodevi_Square"]-1]=1.5;
        t[m["Vaishnodevi_Square"]-1][m["Prajapati_Nagar"]-1]=1.2;
        t[m["Prajapati_Nagar"]-1][m["Vaishnodevi_Square"]-1]=1.2;

        d[m["Khapri"]-1][m["New_Airport"]-1]=3;
        d[m["New_Airport"]-1][m["Khapri"]-1]=3;
        t[m["Khapri"]-1][m["New_Airport"]-1]=2.4;
        t[m["New_Airport"]-1][m["Khapri"]-1]=2.4;       
        
        d[m["New_Airport"]-1][m["Airport_South"]-1]=1.5;
        d[m["Airport_South"]-1][m["New_Airport"]-1]=1.5;
        t[m["New_Airport"]-1][m["Airport_South"]-1]=1.2;
        t[m["Airport_South"]-1][m["New_Airport"]-1]=1.2;
        
        d[m["Airport_South"]-1][m["Airport"]-1]=1;
        d[m["Airport"]-1][m["Airport_South"]-1]=1;
        t[m["Airport_South"]-1][m["Airport"]-1]=0.8;
        t[m["Airport"]-1][m["Airport_South"]-1]=0.8;
        
        d[m["Airport"]-1][m["Ujjwal_Nagar"]-1]=1.5;
        d[m["Ujjwal_Nagar"]-1][m["Airport"]-1]=1.5;
        t[m["Airport"]-1][m["Ujjwal_Nagar"]-1]=1.2;
        t[m["Ujjwal_Nagar"]-1][m["Airport"]-1]=1.2;
        
        d[m["Ujjwal_Nagar"]-1][m["Jaiprakash_Nagar"]-1]=1;
        d[m["Jaiprakash_Nagar"]-1][m["Ujjwal_Nagar"]-1]=1;
        t[m["Ujjwal_Nagar"]-1][m["Jaiprakash_Nagar"]-1]=0.8;
        t[m["Jaiprakash_Nagar"]-1][m["Ujjwal_Nagar"]-1]=0.8;
        
        d[m["Jaiprakash_Nagar"]-1][m["Chhatrapati_Square"]-1]=1;
        d[m["Chhatrapati_Square"]-1][m["Jaiprakash_Nagar"]-1]=1;
        t[m["Jaiprakash_Nagar"]-1][m["Chhatrapati_Square"]-1]=0.8;
        t[m["Chhatrapati_Square"]-1][m["Jaiprakash_Nagar"]-1]=0.8;
        
        d[m["Chhatrapati_Square"]-1][m["Ajni_Square"]-1]=1.8;
        d[m["Ajni_Square"]-1][m["Chhatrapati_Square"]-1]=1.8;
        t[m["Chhatrapati_Square"]-1][m["Ajni_Square"]-1]=1.44;
        t[m["Ajni_Square"]-1][m["Chhatrapati_Square"]-1]=1.44;
        
        d[m["Ajni_Square"]-1][m["Rahate_Colony"]-1]=1;
        d[m["Rahate_Colony"]-1][m["Ajni_Square"]-1]=1;
        t[m["Ajni_Square"]-1][m["Rahate_Colony"]-1]=0.8;
        t[m["Rahate_Colony"]-1][m["Ajni_Square"]-1]=0.8;
        
        d[m["Rahate_Colony"]-1][m["Congress_Nagar"]-1]=0.8;
        d[m["Congress_Nagar"]-1][m["Rahate_Colony"]-1]=0.8;
        t[m["Rahate_Colony"]-1][m["Congress_Nagar"]-1]=0.64;
        t[m["Congress_Nagar"]-1][m["Rahate_Colony"]-1]=0.64;
      
        d[m["Congress_Nagar"]-1][m["Sitabuldi"]-1]=3;
        d[m["Sitabuldi"]-1][m["Congress_Nagar"]-1]=3;
        t[m["Congress_Nagar"]-1][m["Sitabuldi"]-1]=2.4;
        t[m["Sitabuldi"]-1][m["Congress_Nagar"]-1]=2.4;

        d[m["Sitabuldi"]-1][m["Zero_Mile"]-1]=1;
        d[m["Zero_Mile"]-1][m["Sitabuldi"]-1]=1;
        t[m["Sitabuldi"]-1][m["Zero_Mile"]-1]=0.8;
        t[m["Zero_Mile"]-1][m["Sitabuldi"]-1]=0.8;
        
        d[m["Zero_Mile"]-1][m["Kasturchand_Park"]-1]=2.1;
        d[m["Kasturchand_Park"]-1][m["Zero_Mile"]-1]=2.1;
        t[m["Zero_Mile"]-1][m["Kasturchand_Park"]-1]=1.68;
        t[m["Kasturchand_Park"]-1][m["Zero_Mile"]-1]=1.68;
        
        d[m["Kasturchand_Park"]-1][m["Gaddi_Godam_Square"]-1]=1.5;
        d[m["Gaddi_Godam_Square"]-1][m["Kasturchand_Park"]-1]=1.5;
        t[m["Kasturchand_Park"]-1][m["Gaddi_Godam_Square"]-1]=1.2;
        t[m["Gaddi_Godam_Square"]-1][m["Kasturchand_Park"]-1]=1.2;
        
        d[m["Gaddi_Godam_Square"]-1][m["Kadvi_Square"]-1]=2;
        d[m["Kadvi_Square"]-1][m["Gaddi_Godam_Square"]-1]=2;
        t[m["Gaddi_Godam_Square"]-1][m["Kadvi_Square"]-1]=1.6;
        t[m["Kadvi_Square"]-1][m["Gaddi_Godam_Square"]-1]=1.6;
        
        d[m["Kadvi_Square"]-1][m["Indora_Square"]-1]=1.9;
        d[m["Indora_Square"]-1][m["Kadvi_Square"]-1]=1.9;
        t[m["Kadvi_Square"]-1][m["Indora_Square"]-1]=1.52;
        t[m["Indora_Square"]-1][m["Kadvi_Square"]-1]=1.52;
        
        d[m["Indora_Square"]-1][m["Nari_Road"]-1]=2.7;
        d[m["Nari_Road"]-1][m["Indora_Square"]-1]=2.7;
        t[m["Indora_Square"]-1][m["Nari_Road"]-1]=2.16;
        t[m["Nari_Road"]-1][m["Indora_Square"]-1]=2.16;
        
        d[m["Nari_Road"]-1][m["Automotive_Square"]-1]=3.2;
        d[m["Automotive_Square"]-1][m["Nari_Road"]-1]=3.2;
        t[m["Nari_Road"]-1][m["Automotive_Square"]-1]=2.56;
        t[m["Automotive_Square"]-1][m["Nari_Road"]-1]=2.56;
    }

    void createmap()
    {
        m["Agrasen_Square"]=1;
        m2[1]="Agrasen_Square";

        m["Airport"]=2;
        m2[2]="Airport";

        m["Airport_South"]=3;
        m2[3]="Airport_South";

        m["Ajni_Square"]=4;
        m2[4]="Ajni_Square";

        m["Ambedkar_Square"]=5;
        m2[5]="Ambedkar_Square";

        m["Automotive_Square"]=6;
        m2[6]="Automotive_Square";

        m["Bansi_Nagar"]=7;
        m2[7]="Bansi_Nagar";

        m["Chhatrapati_Square"]=8;
        m2[8]="Chhatrapati_Square";

        m["Congress_Nagar"]=9;
        m2[9]="Congress_Nagar";

        m["Dharampeth_College"]=10;
        m2[10]="Dharampeth_College";

        m["Dosar_Vaishya_Square"]=11;
        m2[11]="Dosar_Vaishya_Square";

        m["Gaddi_Godam_Square"]=12;
        m2[12]="Gaddi_Godam_Square";

        m["Indora_Square"]=13;
        m2[13]="Indora_Square";

        m["Institute_of_Engineers"]=14;
        m2[14]="Institute_of_Engineers";

        m["Jaiprakash_Nagar"]=15;
        m2[15]="Jaiprakash_Nagar";

        m["Jhansi_Rani_Square"]=16;
        m2[16]="Jhansi_Rani_Square";

        m["Kadvi_Square"]=17;
        m2[17]="Kadvi_Square";

        m["Kasturchand_Park"]=18;
        m2[18]="Kasturchand_Park";

        m["Khapri"]=19;
        m2[19]="Khapri";

        m["LAD_Square"]=20;
        m2[20]="LAD_Square";

        m["Lokmanya_Nagar"]=21;
        m2[21]="Lokmanya_Nagar";

        m["Nagpur_Railway_Station"]=22;
        m2[22]="Nagpur_Railway_Station";

        m["Nari_Road"]=23;
        m2[23]="Nari_Road";

        m["New_Airport"]=24;
        m2[24]="New_Airport";

        m["Prajapati_Nagar"]=25;
        m2[25]="Prajapati_Nagar";

        m["Rachana_Ring_Road_Junction"]=26;
        m2[26]="Rachana_Ring_Road_Junction";

        m["Rahate_Colony"]=27;
        m2[27]="Rahate_Colony";

        m["Shankar_Nagar_Square"]=28;
        m2[28]="Shankar_Nagar_Square";

        m["Sitabuldi"]=29;
        m2[29]="Sitabuldi";

        m["Subhash_Nagar"]=30;
        m2[30]="Subhash_Nagar";

        m["Telephone_Exchange"]=31;
        m2[31]="Telephone_Exchange";

        m["Ujjwal_Nagar"]=32;
        m2[32]="Ujjwal_Nagar";

        m["Vaishnodevi_Square"]=33;
        m2[33]="Vaishnodevi_Square";

        m["Vasudev_Nagar"]=34;
        m2[34]="Vasudev_Nagar";

        m["Zero_Mile"]=35;
        m2[35]="Zero_Mile";

        creategraph();
    }

    void display_list()
    {
        cout<<"Nagpur Metro List"<<endl;
        map<string, int>:: iterator it=m.begin();
        while(it!=m.end())
        {
            cout<<it->second<<":-  "<<it->first<<endl;
            it++;
        }
        return;
    }

    void display_map()
    {
        map<string,int>:: iterator it=m.begin();
        while(it!=m.end())
        {
            cout<<it->first<<"=> "<<endl;
            map<string,int>:: iterator it2=m.begin();
            while(it2!=m.end())
            {
                if(d[it->second-1][it2->second-1]!=0)
                {
                    cout<<"   "<<it2->first<<" "<<d[it->second-1][it2->second-1]<<endl;
                }
                it2++;
            }
            it++;
        }
        return;
    }

    int mindis(vector<bool> visited,vector<float> distance)
    {
        int mini=-1;
        for(int i=0;i<35;i++)
        {
            if(!visited[i] && (mini==-1||distance[i]<distance[mini]))
            {
                mini=i;
            }
        }
        return mini;
    }

    float dis(string source,string destination)
    {
        int s=m[source]-1;
        int e=m[destination]-1;
        vector<bool> visited;
        vector<float> distance;
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i=0;i<35;i++)
        {
            visited.push_back(false);
            distance.push_back(INT_MAX);
        }
        distance[s]=0;
        pq.push(make_pair(0,s));
        while(!pq.empty())
        {
            int mini=pq.top().second;
            pq.pop();
            visited[mini]=true;
            for(int j=0;j<35;j++)
            {
                if(d[mini][j]!=0 && !visited[j])
                {
                    distance[j]=min(distance[j],distance[mini] +d[mini][j]);
                    pq.push(make_pair(distance[j],j));
                }
            }
        }
        return distance[e];
    }

    int mint(vector<bool> visited,vector<float> tim)
    {
        int mini=-1;
        for(int i=0;i<35;i++)
        {
            if(!visited[i] && (mini==-1||tim[i]<tim[mini]))
            {
                mini=i;
            }
        }
        return mini;
    }

    float time(string source,string destination)
    {
        int s=m[source]-1;
        int e=m[destination]-1;
        vector<bool> visited;
        vector<float> tim;
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;
        for(int i=0;i<35;i++)
        {
            visited.push_back(false);
            tim.push_back(INT_MAX);
        }
        tim[s]=0;
        pq.push(make_pair(0,s));
        while(!pq.empty())
        {
            int mini=pq.top().second;
            pq.pop();
            visited[mini]=true;
            for(int j=0;j<35;j++)
            {
                if(t[mini][j]!=0 && !visited[j])
                {
                    tim[j]=min(tim[j],tim[mini] +t[mini][j]);
                    pq.push(make_pair(tim[j],j));
                }
            }
        }
        return tim[e];
    }

    void path(string source,string destination,vector<string>& ans)
    {
        vector<bool> visited;
        for(int i=0;i<35;i++)
        {
            visited.push_back(false);
        }
        int s=m[source]-1;
        int e=m[destination]-1;
        vector<float> distance(35,INT_MAX);
        distance[s]=0;
        for(int i=0;i<35;i++)
        {
            int mini=mindis(visited,distance);
            visited[mini]=true;
            if(mini==e)
            {
                break;
            }
            for(int j=0;j<35;j++)
            {
                if(d[mini][j]!=0 && !visited[j])
                {
                    distance[j]=min(distance[j],distance[mini] +d[mini][j]);
                }
            }
        } 
        return;            
    }
    
};