#include <bits/stdc++.h>
#include <bitwise.hpp>
using namespace std;

void push_n_to_stack(int number, string &prev_loc, int &cond,int &max_cond){

    if(n == 0 ){
        cout << prev_loc << ", " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 1){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 2){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 3){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 4){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 5){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 6){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 7){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 8){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond << ", southern_labs_1" << endl;
        cout << "southern_labs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 9){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 10){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 11){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 12){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    if(n == 13){
        cout << prev_loc << ", " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", eshop_1" << endl;
        cout << "eshop_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", oat_stairs_1" << endl;
        cout << "oat_stairs_1, " << cond << ", rm_1" << endl;
        cout << "rm_1, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        prev_loc="oat_stage";
        max_cond = max(cond, max_cond);
        return;
    }
    vector<int> v;
    while(number){
        v.push_back(number%2);
        number/=2;
    }
    cout << prev_loc << ", " << cond << ", oat_stairs_2" << endl;
    cout << "oat_stairs_2, " << cond << ", oat_stairs_1" << endl;
    cout << "oat_stairs_1, " << cond << ", hall_2" << endl;
    prev_loc = "hall_2";
    if(v[0] == 1 && v[1] == 1)
    {
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", hall_2" << endl;
        cout << "hall_2, " << cond << ", kd_2" << endl;
        cout << "kd_2, " << cond << ", kd_3" << endl;
        prev_loc = "kd_3";
    }
    else if(v[0] == 0 && v[1] == 1)
    {
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_2" << endl;
        cout << "rm_2, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", mt_3_2" << endl;
        cout << "mt_3_2, " << cond << ", kd_3" << endl;
        cout << "kd_3, " << cond << ", kd_2" << endl;  
        prev_loc = "kd_2";
    }
    else if(v[0] == 1 && v[1] == 0)
    {
        cout << "hall_2, " << cond++ << ", oat_stage[1]" << endl;
        cout << "oat_stage, " << cond << ", rm_3" << endl;
        cout << "rm_3, " << cond << ", mt_3_1" << endl;
        cout << "mt_3_1, " << cond << ", kd_3" << endl;
        prev_loc = "kd_3";
    }
    cout << prev_loc << ", " << cond << ", mt_2_3" << endl;
    cout << "mt_2_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    prev_loc = "mt_1_3";

    int variable = 1;
    for(int i = 0; i < v.size(); i++){
        if(v[i]){
            if(i == 0){
                continue;
            }else if(i == 1){
                continue;
            }else{
                int temp = i - variable;
                while(temp--)
                {
                    cout << prev_loc << ", " << cond << ", hall_3" << endl;
                    cout << "hall_3, " << cond++ << ", oat_stage[1]" << endl;
                    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
                    prev_loc = "mt_1_3";
                }

                    cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
                    cout << "mt_3_2, " << cond << ", rm_3" << endl;
                    cout << "rm_3, " << cond << ", mt_2_3" << endl;
                    cout << "mt_2_3, " << cond << ", hall_2" << endl;
                    cout << "hall_2, " << cond << ", kd_3" << endl;
                    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
                    cout << "oat_stage, " << cond << ", mt_2_3" << endl;
                    prev_loc = "mt_2_3";
                    variable = i;
            }
        }
    }

                    cout << prev_loc << ", " << cond << ", rm_3" << endl;
                    cout << "rm_3, " << cond << ", mt_1_3" << endl;
                    cout << "mt_1_3, " << cond << ", rm_1" << endl;
                    cout << "rm_1, " << cond << ", rm_2" << endl;
                    cout << "rm_2, " << cond << ", hall_13_1" << endl;
                    cout << "hall_13_1, " << cond << ", hall_13_2" << endl;
                    cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
                    cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;

    prev_loc = "oat_stage";
    max_cond = max(cond, max_cond);
    return;
}

void debug(int &cond, string &prev_loc, int &max_cond){
    cout << prev_loc << ", " << cond <<  ", pronite_1" << endl;
    cout << "pronite_1, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", kd_1" << endl;
    cout << "events_1_t, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", events_1" << endl;
    cout << "events_1_f, " << cond << ", iit_gate_out_1" << endl;
    cout << "iit_gate_out_1, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", oat_stage[0]" << endl;
    cout << "events_1_t, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc="oat_stage";
    max_cond = max(cond, max_cond);
}

void swap(int &cond, string &prev_loc, int &max_cond){
    cout << prev_loc << ", " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", mt_3_1" << endl;
    cout << "mt_3_1, " << cond << ", rm_3" << endl;
    cout << "rm_3, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", mt_3_2" << endl;
    cout << "mt_3_2, " << cond++ << ", oat_stage[1]" << endl;
    cout << "oat_stage, " << cond << ", mt_1_3" << endl;
    cout << "mt_1_3, " << cond << ", rm_1" << endl;
    cout << "rm_1, " << cond << ", hall_13_3" << endl;
    cout << "hall_13_3, " << cond << ", hall_13_2" << endl;
    cout << "hall-13_2, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(max_cond, cond);
}

// void rev_swap(int &cond, string &prev_loc, int &max_cond){
//     cout << prev_loc << ", " << cond << ", mt_3_2" << endl;
//     cout << "mt_3_2, " << cond << ", rm_3" << endl;
//     cout << "rm_3, " << cond << ", mt_3_1" << endl;
//     cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
//     cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
//     cout << "hall_13_3, " << cond << ", kd_3" << endl;
//     cout << "kd_3, " << cond << ", mt_1_3" << endl;
//     cout << "mt_1_3, " << cond++ << ", oat_stage[1]" << endl;
//     cout << "oat_stage, " << cond << ", hall_13_3" << endl;
//     cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;
//     prev_loc = "oat_stage";
//     max_cond = max(max_cond, cond);
// }

void pop(int &cond, string &prev_loc, int &max_cond)
{
    cout << prev_loc << "," << cond << ", kd_1" << endl;
    cout << "kd_1, " << cond << ", kd_2" << endl;
    cout << "kd_2, " << cond << ", kd_3" << endl;
    cout << "kd_3, " << cond << ", hall_13_1" << endl;
    cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
    prev_loc = "oat_stage";
    max_cond = max(max_cond, cond);
}

int main(int argc, char* argv[]){
    freopen(argv[1], "r", stdin);
    freopen("output.iitktvlr", "w", stdout);
    Bit_operators* b_op = new Bit_operators;

    vector<string> stk_code;
    string c;
    while (cin >> c) {
        stk_code.push_back(c);
    }

    vector<string> temp_stk_code;
    int i = 0;
    for(i = 0; i + 1 < stk_code.size(); i++){
        if(stk_code[i] == stk_code[i+1] && (stk_code[i] == "rev" || stk_code[i] == "swap" || stk_code[i] == "not")){
            i++;
        }else{
            temp_stk_code.push_back(stk_code[i]);
        }
    }
    if(i < stk_code.size()) temp_stk_code.push_back(stk_code[i]);
    stk_code = temp_stk_code;

    int cond = 1;
    int max_cond = 1;
    cout << "start, 0, pronite_1" << endl;
    cout << "pronite_1, 0, rm_1" << endl;
    cout << "rm_1, 0, rm_2" << endl;
    cout << "rm_2, 0, rm_3" << endl;
    cout << "rm_3, 0, oat_stage[1]" << endl;
    string prev_loc = "oat_stage";
    stack<int> cond_vals;

    for (string code_word : stk_code) {
        if (code_word[0] == '`') {
            continue;
        }

        // Added but commented it since the user does not need to enter the input inside every while loop

        // else if (isdigit(code_word[0])) {
        //     cout << prev_loc << ", " << cond << ", iit_gate_in_1" << endl;
        //     cout << "iit_gate_in_1, " << cond << ", rm_1" << endl;
        //     cout << "rm_1, " << cond << ", rm_2" << endl;
        //     cout << "rm_2, " << cond << ", rm_3" << endl;
        //     cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
        //     prev_loc = "oat_stage";
        //     max_cond = max(max_cond, cond);
        // }

        else if(code_word == "add"){
            cout << prev_loc << ", " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", hall_2" << endl;
            cout << "hall_2, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "sub"){
            cout << prev_loc << ", " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", hall_5" << endl;
            cout << "hall_5, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "mul"){
            cout << prev_loc << ", " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", hall_3" << endl;
            cout << "hall_3, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "div"){
            cout << prev_loc << ", " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", hall_12" << endl;
            cout << "hall_12, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "pop"){
            pop(cond, prev_loc, max_cond);
        }

        else if(code_word == "swap"){
            swap(cond, prev_loc, max_cond);
        }

        else if(code_word == "input"){
            cout << prev_loc << ", " << cond << ", iit_gate_in_1" << endl;
            cout << "iit_gate_in_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "output"){
            cout << prev_loc << "," << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", iit_gate_out_1" << endl;
            cout << "iit_gate_out_1, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "outputascii"){
            cout << prev_loc << "," << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", nankari_gate_out_1" << endl;
            cout << "nankari_gate_out_1, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "dup"){
            cout << prev_loc << "," << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", mt_3_1" << endl;
            cout << "mt_3_1, " << cond << ", mt_2_3" << endl;
            cout << "mt_2_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "if"){
            cond_vals.push(cond);
            cout << prev_loc << ", " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", lecture_hall_eq" << endl;
            cout << "lecture_hall_eq_f, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond, cond);
        }

        else if(code_word == "fi"){
            int prev_cond_val = cond_vals.top();
            cond_vals.pop();
            int cond_diff = prev_cond_val - cond;
            cout << prev_loc << ", " << cond << ", oat_stage[" << cond_diff << "]" << endl;
            cond = prev_cond_val;
            cond_diff = max_cond - cond + 1;
            cout << "lecture_hall_eq_t, " << cond << ", oat_stage[" << cond_diff << "]" << endl;
            cond = max_cond + 1;
            cout << "oat_stage, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(max_cond,cond);
        }

        else if(code_word == "debug"){
            debug(cond, prev_loc, max_cond);
        }

        else if(code_word == "cycle"){
            cout << prev_loc << ", " << cond << ", pronite_1" << endl;
            cout << "pronite_1, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", mt_3_1" << endl;
            cout << "mt_3_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", rm_1" << endl;  // pointer 1 to position 1 //## Here pointer 1 is at eos & pointer 3 is at 3+n+1
            cout << "rm_1, " << cond << ", mt_3_2" << endl; // copy mem 2 in mem 3
            cout << "mt_3_2, " << cond << ", mt_1_3" << endl; // paste mem3 in mem1
            cout << "mt_1_3, " << cond << ", hall_13_3" << endl; // empty mem3
            cout << "hall_13_3, " << cond << ", kd_3" << endl; // mem3--
            cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", rm_1" << endl; // mem1++ // mem1 is at 2 pos
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl; // copy 3 in 1, mem3--, mem1++  until mem1 is EOF
            cout << "events_1_f, " << cond << ", mt_1_3" << endl;  // here mem1 is at eof and mem3 is at pointer 2
            cout << "mt_1_3, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", hall_13_1" << endl; // removing eof from pointer pos 1
            cout << "hall_13_1, " << cond << ", rm_3" << endl; // changing position of pointer 3 from initial 1 to 3
            cout << "rm_3, " << cond << ", hall_13_2" << endl; // removig start character from pos 2
            cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(cond, max_cond);
        }

        else if(code_word == "rcycle"){
            cout << prev_loc << ", " << cond << ", pronite_1" << endl;
            cout << "pronite_1, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", mt_3_1" << endl;
            cout << "mt_3_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", mt_2_3" << endl;
            cout << "mt_2_3, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(cond, max_cond);
        }

        else if(code_word == "rev"){
            // can be done like cycle and rcycle, just saved few lines in traveller with this one

            cout << prev_loc << ", " << cond << ", pronite_1" << endl; // added eof in mem1
            cout << "pronite_1, " << cond << ", kd_3" << endl; // mem1--
            cout << "kd_3, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl; // ---- loop until pointer 1 is at EOF and pointer 3 is at 3 + n+1
            cout << "events_1_f, " << cond << ", mt_3_1" << endl; // mem3=mem1
            cout << "mt_3_1, " << cond << ", rm_3" << endl; // mem3++
            cout << "rm_3, " << cond << ", kd_1" << endl; // mem1--
            cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", rm_1" << endl; // mem1++ makes pointer 1 at position 1 (ie. 1st eof+1)
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", rm_2" << endl; // mem2++
            cout << "rm_2, " << cond << ", oat_stage[0]" << endl; 
            cout << "events_1_t, " << cond << ", rm_3" << endl; // clearing the previous array
            cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", pronite_2" << endl;
            cout << "pronite_2, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
            max_cond = max(cond, max_cond);
        }

        else if(code_word == "inputascii"){
            // not working properly -- need to debug it

            cout << prev_loc << ", " << cond << ", pronite_1" << endl;
            cout << "pronite_1, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", airstrip_land_2" << endl;
            cout << "airstrip_land_2, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", oat_stage[0]" << endl;

            // after this loop input will be taken and stored, just need to reverse it now.
            cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_1" << endl; // mem1--
            cout << "kd_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", mt_3_1" << endl; // mem3=mem1
            cout << "mt_3_1, " << cond << ", rm_3" << endl; // mem3++
            cout << "rm_3, " << cond << ", kd_1" << endl; // mem1--
            cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", events_1" << endl;
            cout << "events_1_f, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", kd_3" << endl;
            cout << "kd_3, " << cond << ", oat_stage[0]" << endl;
            cout << "events_1_t, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond << ", rm_3" << endl;
            cout << "rm_3, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", hall_13_1" << endl;
            cout << "hall_13_1, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
        }

        else if(code_word == "mod"){
            int temp_cond = cond;
            cout << prev_loc << ", " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", kd_2" << endl;
            cout << "kd_2, " << cond << ", kd_1" << endl;
            cout << "kd_1, " << cond++ << ", oat_stage[1]" << endl;
            cout << "oat_stage, " << cond << ", lecture_hall_gt" << endl;
            cout << "lecture_hall_gt_t, " << cond << ", hall_5" << endl;
            cout << "hall_5, " << cond << ", mt_1_3" << endl;
            cout << "mt_1_3, " << cond << ", oat_stage[0]" << endl;
            cout << "lecture_hall_gt_f, " << cond << ", rm_1" << endl;
            cout << "rm_1, " << cond << ", hall_13_3" << endl;
            cout << "hall_13_3, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond << ", hall_13_2" << endl;
            cout << "hall_13_2, " << cond << ", rm_2" << endl;
            cout << "rm_2, " << cond++ << ", oat_stage[1]" << endl;
            prev_loc = "oat_stage";
        }

        else if(code_word == "not"){
            b_op->Not(prev_loc, cond, max_cond);
        }

        else if(code_word == "and"){
            b_op->And(prev_loc, cond, max_cond);
        }

        else if(code_word == "or"){
            b_op->Or(prev_loc, cond, max_cond);
        }

        else if(code_word == "xor"){
            b_op->Xor(prev_loc, cond, max_cond);
        }

        else if(code_word == "nand"){
            b_op->Nand(prev_loc, cond, max_cond);
        }

        else if (code_word == "quit"){
            break;
        }

            // function created for debugging pointer locations
        // else if (code_word == "pointer"){
        //     cout << prev_loc << ", " << cond << ", events_1" << endl;
        //     cout << "events_1_f, " << cond << ", iit_gate_out_1" << endl;
        //     cout << "iit_gate_out_1, " << cond << ", kd_1" << endl;
        //     cout << "kd_1, " << cond << ", oat_stage[0]" << endl;
        //     cout << "events_1_t, " << cond++ << ", oat_stage[1]" << endl;
        //     prev_loc = "oat_stage";
        //     max_cond = max(cond, max_cond);
        // }


        else {
            int num;
            sscanf(code_word.c_str(), "%d", &num);
            if(num<0){
                num=-1*num;
                push_n_to_stack(num,prev_loc,cond,max_cond);
                cout << prev_loc << ", " << cond << ", southern_labs_2" << endl;
                cout << "southern_labs_2, " << cond << ", kd_1" << endl;
                cout << "kd_1, " << cond << ", hall_3" << endl;
                cout << "hall_3, " << cond << ", mt_1_3" << endl;
                cout << "mt_1_3, " << cond << ", hall_13_3" << endl;
                cout << "hall_13_3, " << cond << ", rm_1" << endl;
                cout << "rm_1, " << cond++ << ", oat_stage[1]" << endl;
            }
            else push_n_to_stack(num,prev_loc,cond,max_cond);
            prev_loc = "oat_stage";
            max_cond = max(max_cond,cond);
        }

    }
    cout << prev_loc << ", " << cond << ", finish" << endl;
    return 0;
}