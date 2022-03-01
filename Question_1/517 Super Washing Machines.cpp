/*
Problem:
    517. 超级洗衣机
Author:
	LQP
Modify:
	2021-09-29
*/

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> machines = {99659,20650,46506,29343,8957,11268,55176,62248,50100,10109,24234,11638,52245,18223,30468,86054,18956,84834,85236,92442,27089,19720,70479,82697,29645,18902,26832,71366,59318,48255,18441,11883,17814,99278,72722,24419,31466,49247,50274,88241,38406,23547,45240,3808,94518,63535,23197,69703,15935,32360,65133,7416,92771,64077,54256,11974,44260,25816,17064,8817,47776,77714,47874,49360,74042,12042,94734,80089,24185,5906,99116,58351,94346,64151,43548,53225,92577,93915,22712,52795,32061,87184,33470,23300,57065,74642,96420,60243,18142,50338,70544,85846,96230,50747,8128,8608,99899,339,31619,76150};
    
    int ans = 0, sum = 0, presum = 0;
    for (int i = 0; i < machines.size(); i++)
        sum += machines[i];

    if (sum % machines.size() != 0)
        return -1;

    int avg = sum / machines.size();

    for (int i = 0; i < machines.size(); i++) {
        presum += machines[i];
        ans = max(ans, max(machines[i] - avg, abs(presum - avg * (i + 1))));
    }
    cout << ans;
    return ans;


    
    // int m_length = machines.size();
    // vector<int> move(m_length,0);
    // int m_sum = 0, m_ave = 0;
    // int step = 0, left_flag = 0, flag = 0, step_flag = 0;

    // for(int i = 0; i < m_length; i++)
    //     m_sum = m_sum + machines[i];
    // if(m_sum%m_length){
    //     cout << "-1" << endl;
    //     return -1;
    // }
    // m_ave = m_sum / m_length;

    // move[0] = m_ave - machines[0];
    // for(int i = 1; i < m_length; i++)
    //     move[i] = move[i-1] + m_ave - machines[i];


    // while(flag < m_length){
    //     flag = 0;
    //     for(int i = 0; i < m_length; i++){
    //         if(move[i] > 0 && machines[i+1] > 0){
    //             move[i]--;
    //             machines[i]++;
    //             machines[i+1]--;
    //             left_flag = 1;
    //             step_flag = 1;
    //         }
    //         else if(move[i] < 0 && (!left_flag)){
    //             move[i]++;
    //             machines[i]--;
    //             machines[i+1]++;
    //             left_flag = 0;
    //             step_flag = 1;
    //         }
    //         else left_flag = 0;
    //         if(move[i] == 0)
    //             flag++;
    //     }
    //     if(step_flag){
    //         step++;
    //         step_flag = 0;
    //     }
            
    //     // for(int i = 0; i < m_length; i++)
    //     //     cout << move[i] << " ";
    //     // cout << endl;
    // }
    // for(int i = 0; i < m_length; i++)
    //     cout << machines[i] << " ";
    // cout << endl;
    // cout << step << endl;
    // return step;
}