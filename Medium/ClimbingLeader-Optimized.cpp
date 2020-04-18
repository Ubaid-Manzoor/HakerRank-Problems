#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int> &vec ){
    for(const int& value: vec){
        cout<<value<<" ";
    }
    cout<<endl;
}


vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice){
    /*
        The Idea is to Create a vector of which contains Ranks Only
        and Then loop through the array from backward and
        find were alice lies taking both scores and new vector
        in consideration
    */

    vector<int> ranks;
    ranks.resize(scores.size(),0);

    /* Creating a Ranks Vector */
    for(unsigned int i = 0 ; i < scores.size() ; ++i){
        if(i == 0){
            ranks[i] = 1;
        }else if(scores[i] != scores[i-1]){
                ranks[i] = ranks[i-1] + 1; 
        }else{
            ranks[i] = ranks[i-1];
        }
    }



    vector<int> ranksOfAlice;
    ranksOfAlice.resize(alice.size(),0);
    int already_checked = 0;
    for(int i = 0 ; i < alice.size() ; ++i){
        int alice_score = alice[i]; // Score for round i

        for(int j = scores.size() - already_checked - 1 ; j >= 0 ; --j){
            /*
                IF alice score is less we will stay where we are
                and set rankOfAlice to one less rank then at dashboard 
            */
            if(scores[j] > alice_score){
                ranksOfAlice[i] = ranks[j] + 1;
                break;
            /*
                IF alice score is equal set rankOfAlice to current score
            */
            }else if(scores[j] == alice_score){
                ranksOfAlice[i] = ranks[j];
                already_checked++;
            /*
                Else if alice have greater score just move forward into dashboar
            */
            }else{
                already_checked++;
            }
            

            /*
                At the End if alice have topped the dashboard that is
                all the remaining scores of alice are greater than the top score
                in the dashboard 
                Then fill all the remaining value of rankOfAlice with 1;
            */

            if(already_checked == scores.size()){
                for(int index = i ; index < ranksOfAlice.size() ; index++){
                    ranksOfAlice[index] = 1;
                }
                break;
            }
        }
    }
    return ranksOfAlice;
}

int main(){
    vector<int> scores{100,100,50,40,40,20,5};
    vector<int> alice{5,5,110,120};
    vector<int> result = climbingLeaderboard(scores, alice);
    printVector(result);
    return 0;
}
