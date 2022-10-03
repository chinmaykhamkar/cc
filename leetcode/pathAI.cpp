#include <iostream>
#include <vector>
#include <string>
#include<bits/stdc++.h>
using namespace std;



vector<string> solution(vector<vector<string>> &meetingTimes,int slots){
    // for(int i=0; i<meetingTimes.size(); i++){
    //     for(int j=0; j<meetingTimes[i].size(); j++){
    //         cout << meetingTimes[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int i;
    // map with key as int vector
    map<vector<int>, int> m;
    for(i=0;i<24*60;i+=15){
        m.insert(pair<vector<int>, int>(vector<int>{i,i+15},0));

    }

//print map
    // for (auto it = m.begin(); it != m.end(); ++it) {
    //     cout << it->first[0] << " " << it->first[1] << " " << it->second << endl;
    // }

    for(auto meet:meetingTimes){  
        //print meeting times
        //assign 2d int vector
        vector<vector<int>> arr;
        //push [0] in arr
        arr.push_back(vector<int>{0});
       
        for(auto time:meet){
            //split time by -
            vector<string> splitTime;
            stringstream ss(time);
            string temp;
            while(getline(ss,temp,'-')){
                splitTime.push_back(temp);
            }
            // cout<<splitTime[0]<<" "<<splitTime[1]<<endl;
            //convert splitTime[0] to minutes 
            int start = stoi(splitTime[0].substr(0,2))*60 + stoi(splitTime[0].substr(3,2));
            //convert splitTime[1] to minutes
            int end = stoi(splitTime[1].substr(0,2))*60 + stoi(splitTime[1].substr(3,2));
            //print start and end
            // cout<<start<<" "<<end<<endl;
            //push start to the last element of arr
            arr[arr.size()-1].push_back(start);
            //push end in arr
            arr.push_back(vector<int>{end});
        }
        //push 24*60 in the last element of arr
        arr[arr.size()-1].push_back(24*60);
        //print arr
        // for(auto a:arr){
        //     for(auto b:a){
        //         cout<<b<<" ";
        //     }
        //     cout<<endl;
        // }
        for(auto el:arr){
            for(i=el[0];i<el[1];i+=15){
                m[vector<int>{i,i+15}]++;
            }
        }
            
           
    }
    // for (auto it = m.begin(); it != m.end(); ++it) {
    //         cout << it->first[0] << " " << it->first[1] << " " << it->second << endl;
    //     }
    //assign a 2d vector to store
    vector<vector<int>> ans;
    i=0;
    while(i<=24*60-30){
        int j=i;
        //check if m[i,i+15] is equal to m[i+15,i+30] and m[i,i+15] is greater than 2 and i is less than 24*60-30
        while(i<=(24*60-30) && m[vector<int>{i,i+15}]==m[vector<int>{i+15,i+30}] && m[vector<int>{i,i+15}]>=2){
            i+=15;
        }
        if(j!=i){
            ans.push_back(vector<int>{j,i+15,m[vector<int>{j,j+15}]});
        }
        else if(m[vector<int>{j,j+15}]>=2){
            ans.push_back(vector<int>{j,i+15,m[vector<int>{j,j+15}]});
        }
        if(i==1440 && m[vector<int>{i+15,i+30}]>=2){
            ans.push_back(vector<int>{i+15,i+30,m[vector<int>{i+15,i+30}]});
        }
        i+=15;
    }

    //print ans
    // for(auto a:ans){
    //     for(auto b:a){
    //         cout<<b<<" ";
    //     }
    //     cout<<endl;
    // }
    //sort arr by 3rd element
    sort(ans.begin(),ans.end(),[](vector<int> a,vector<int> b){
        return a[2]>b[2];
    });
    for(auto a:ans){
            for(auto b:a){
                cout<<b<<" ";
            }
            cout<<endl;
        }

    cout<<"ans size: "<<ans.size()<<endl;
  
    if(ans.size()<slots){
        return {};
    }
    //trim arr from 0 to slots
    ans.resize(slots);
    
    // assign a 2d vector to store final time slots
    vector<string> finalAns;
    for(auto a:ans){
       //convert a[0] to string
        int start = a[0]/60;
        int startMin = a[0]%60;
        string startStr = to_string(start);
        string startMinStr = to_string(startMin);
        if(start<10){
            startStr = "0"+startStr;
        }
        if(startMin<10){
            startMinStr = "0"+startMinStr;
        }
        string startTime = startStr+":"+startMinStr;
        //convert a[1] to string
        int end = a[1]/60;
        int endMin = a[1]%60;
        string endStr = to_string(end);
        string endMinStr = to_string(endMin);
        if(end<10){
            endStr = "0"+endStr;
        }
        if(endMin<10){
            endMinStr = "0"+endMinStr;
        }
        string endTime = endStr+":"+endMinStr;
        //push startTime and endTime in finalAns
        finalAns.push_back({startTime+"-"+endTime});
    }
    //print finalAns
    for(auto a:finalAns){
        cout<<a<<endl;
    }

   
  


return finalAns;

    
}

int main(){
    int slots=8;
    vector<vector<string>> meetingTimes{{"01:00-02:00","03:00-04:00","05:00-06:00","07:00-08:00","09:00-16:00","17:00-18:00","19:00-20:00","21:00-24:00"},{"00:30-01:30","02:30-03:30","04:30-05:30","06:30-07:30","08:30-16:30","17:30-18:30","19:30-20:30","21:30-24:00"}};
    //print vector    

    solution(meetingTimes, slots);

    return 0;
}