// SJF (Non-Preemptive)
#include <bits/stdc++.h>
using namespace std;

int global_timer = 0;

struct process {
    string p_id;
    int at, bt;
    int original_bt;
    int ct = 0;
    bool done = false;
};

int select_process(vector<process>& arr){
    int idx=-1;
    for(int i=0;i<arr.size();i++){
        if(!arr[i].done && arr[i].at <= global_timer){
            if(idx == -1) idx = i;
            else {
                if(arr[i].bt < arr[idx].bt){
                    idx = i;
                } else if(arr[i].bt == arr[idx].bt){
                    if(arr[i].at < arr[idx].at){
                        idx = i;
                    }
                }
            }
        }
    }
    return idx;
}

void process_exe(process &p){
    while(true){
        if(p.bt == 0){
            p.ct = global_timer;

            cout<<p.p_id<<" Execution done at time "
                <<global_timer<<endl;
            p.done = true;
            break;
        } else {
            p.bt--;
            cout<<"Executing: "<<p.p_id
                <<" Remaining BT: "<<p.bt
                <<" Time: "<<global_timer<<endl;
        }
        global_timer++;
    }
}

int main() {

    vector<process> arr = {
        {"P1", 4, 3},
        {"P2", 10, 2},
        {"P3", 11, 1},
        {"P4", 18, 4},
        {"P5", 25, 2}
    };

    int n = arr.size();
    int completed = 0;

    for(auto &p:arr){
        p.original_bt = p.bt;
    }

    while(completed < n){
        int idx = select_process(arr);

        if(idx != -1){
            process_exe(arr[idx]);
            completed++;
        } else {
            cout<<"Idle time: "<<global_timer<<endl;
            global_timer++;
        }
    }
    cout<<"\nAll Process Completed\n";

    cout<<"\nProcess\tAT\tBT\tCT\tTAT\tWT\n";

    for(auto &p:arr){
        int tat = p.ct - p.at;
        int wt = tat - p.original_bt;

        cout<<p.p_id<<"\t"
            <<p.at<<"\t"
            <<p.original_bt<<"\t"
            <<p.ct<<"\t"
            <<tat<<"\t"
            <<wt<<endl;
    }
    
    return 0;
}