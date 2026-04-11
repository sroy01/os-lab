#include <bits/stdc++.h>
using namespace std;

int global_timer = 0;

struct process {
    string p_id;
    int at, bt, pr;
    int original_bt;
    int ct = 0;
    bool done = false;
};

// 1. Highest priority (lowest pr value)
// 2. If same priority -> earlier arrival time (FCFS)
// 3. If same Arrival Time -> smaller burst time (SJF)

int select_process(vector<process>& arr){
    int idx=-1;

    for(int i=0;i<arr.size();i++){
        // process must not be done and must arrive
        if(!arr[i].done && arr[i].at <= global_timer){
            if(idx == -1) idx = i;
            else {
                // priority comparison
                if(arr[i].pr < arr[idx].pr){
                    idx=i;
                }
                // if same priority -> FCFS
                else if(arr[i].pr == arr[idx].pr){
                    if(arr[i].at < arr[idx].at){
                        idx=i;
                    }
                    // if same arrival -> SJF
                    else if(arr[i].at == arr[idx].at){
                        if(arr[i].bt < arr[idx].bt){
                            idx=i;
                        }
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
            // when process finishes
            p.ct = global_timer; // store completion time
            cout<< p.p_id << " Execution done at time " << global_timer <<endl;
            p.done = true;
            break;
        } else {
            // execute 1 unit
            p.bt--;
            cout<< "Executing: "<<p.p_id
                << " Remaining BT: "<<p.bt
                << " Time: "<<global_timer<<endl;
        }
        global_timer++;
    }
}

int main() {

    vector<process> arr = {
        {"P1", 0, 5, 2},
        {"P2", 1, 3, 1},
        {"P3", 2, 8, 4},
        {"P4", 3, 6, 2}
    };
    int n = arr.size();
    // save original BT before modification
    for(auto &p:arr){
        p.original_bt = p.bt;
    }
    int completed = 0;

    while(completed<n){
        int idx = select_process(arr);
        if(idx != -1){
            process_exe(arr[idx]);
            completed++;
        } else {
            // CPU is idle, no process arrived
            cout<<"Idle time: "<<global_timer<<endl;
            global_timer++;
        }
    }
    cout<<"\nAll Process Executed\n";

    // calculate & print table
    cout<<"\nProcess\tAT\tBT\tCT\tTAT\tWT\n";

    for(auto &p:arr){
        int tat = p.ct - p.at;
        int wt = tat - p.original_bt;

        cout<<p.p_id<< "\t"
            <<p.at<< "\t"
            <<p.original_bt<< "\t"
            <<p.ct<< "\t"
            <<tat<< "\t"
            <<wt<<endl;
    }
    return 0;
}