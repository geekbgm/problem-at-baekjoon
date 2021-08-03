#include <iostream>
#include <vector>
#include <cstring>

#define MAX 51
#define PLAYER 10

using namespace std;

int N, answer;
int order[PLAYER];
int Game[MAX][PLAYER];
bool Select[PLAYER];
vector<int> V;

int Bigger(int a, int b) {if (a>b) return a; return b;}

void Play_The_Game()
{

    int Score = 0;
    int Start_Player = 1;
    int State[4];  // State[0] = 홈, State[1] = 1루, State[2] = 2루, State[3] = 3루를 의미한다.

    for (int i = 1; i <= N; i++)  // 총 N이닝 동안 진행
    {
        int Out_Cnt = 0;
        bool Next_Ining = false;

        memset(State, 0, sizeof(State));
 
        while (1)
        {
            for (int j = Start_Player; j < PLAYER; j++)
            {
            // 순서가 정해진 대로 선수들이 타석으로 출전.
                int Player = Game[i][order[j]];
 
                if (Player == 0) Out_Cnt++;       // 아웃을 치게되면 Out_Cnt 증가
                else if (Player == 1)             // 1루타를 치게되면
                {
                    for (int F = 3; F >= 1; F--)  // 각 루에 있던 선수들이 한 칸씩 전진하게 된다.
                    {
                        if (State[F] == 1)   
                        {
                            if (F == 3)           // 3루에 선수가 있었다면
                            {
                                State[F] = 0;     // 홈으로 들어가게되고
                                Score++;          // 점수가 1점 ++
                            }

                            else                   
                            {
                                State[F + 1] = 1; // 3루가 아닌 선수들은 1루씩 전진
                                State[F] = 0;     
                            }
                        }
                    }
                    State[1] = 1; // 1루타를 했으니 1루에 사람이 있다.
                }
                else if (Player == 2)            // 2루타
                {
                    for (int F = 3; F >= 1; F--)
                    {
                        if (State[F] == 1)
                        {
                            if (F == 3 || F == 2)
                            {
                                State[F] = 0;
                                Score++;
                            }
                            else
                            {
                                State[F + 2] = 1;
                                State[F] = 0;
                            }
                        }
                    }
                    State[2] = 1;
                }
                else if (Player == 3)            // 3루타
                {
                    for (int S = 3; S >= 1; S--)
                    {
                        if (State[S] == 1)
                        {
                            State[S] = 0;
                            Score++;
                        }
                    }
                    State[3] = 1;
                }
                else                             // 홈런
                {
                    for (int F = 1; F <= 3; F++) 
                    {
                        if (State[F] == 1)
                        {
                            State[F] = 0;
                            Score++;             // 어떤 루에 있던 간에 무조건 홈으로 들어갈 수
                                                 // 있으므로 점수++
                        }
                    }
                    Score++;
                }
 
                if (Out_Cnt == 3)                 // 삼진아웃 되면 그 다음 이닝으로 넘어간다.
                {
                    Start_Player = j + 1;
                    if (Start_Player == PLAYER) Start_Player = 1;
 
                    Next_Ining = true;
                    break;
                }
            }
            if (Next_Ining == true) break;
            Start_Player = 1;
        }
    }
 
    answer = Bigger(answer, Score);
}

void DFS(int Cnt)
{
    if (Cnt == PLAYER)
    {
        Play_The_Game();
        return;
    }
 
    for (int i = 1; i < PLAYER; i++)
    {
        if (Select[i] == true) continue;
        Select[i] = true;
        order[i] = Cnt;
        DFS(Cnt + 1);
        Select[i] = false;
    }
}


int main(){ 

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N;

    for (int i = 1 ; i<=N ;i++){
        for (int j = 1 ; j<PLAYER; j++){
            cin >> Game[i][j];
        }
    }
    
    Select[4] = true;
    order[4] = 1;
    DFS(2);

    cout<<answer<<endl;
    
    
    return 0;
}