#include <bits/stdc++.h>
using namespace std;

int global_timer = 0;

struct process{
    string p_id;
    int at, bt, pr;
    bool done = false;
};

int select_process(vector<process> &arr){
    int idx = -1;

    for(int i = 0; i < arr.size(); i++){
        if(!arr[i].done && arr[i].at <= global_timer){
            if(idx == -1) idx = i;
            else{
                if(arr[i].pr < arr[idx].pr){
                    idx = i;
                }

                else if(arr[i].pr == arr[idx].pr){
                    if(arr[i].at < arr[idx].at){
                        idx = i;
                    }

                    else if(arr[i].at == arr[idx].at){
                        if(arr[i].bt < arr[idx].bt){
                            idx = i;
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
            cout << p.p_id << " Execution done at time " << global_timer << endl;
            p.done = true;
            break;
        }
        else{
            p.bt--;
            cout << "Executing: " << p.p_id
                 << " Remaining BT: " << p.bt
                 << " Time: " << global_timer << endl;
        }
        global_timer++;
    }
}

int main(){
    vector<process> arr = {
        {"P1", 3, 2, 1},
        {"P2", 5, 1, 3},
        {"P3", 6, 7, 4},
        {"P4", 3, 3, 1}
    };

    int completed = 0;
    int n = arr.size();

    while(completed < n){
        int idx = select_process(arr);

        if(idx != -1){
            process_exe(arr[idx]);
            completed++;
        }
        else{
            global_timer++;
            cout << "Idle time: " << global_timer << endl;
        }
    }

    cout << "All processes executed" << endl;
    return 0;
}