// // #include <iostream>
// // using namespace std;

// // int main() {
// //     int N,count=0;
// //     scanf("%d",&N);
// //     for(int i=0;i<N;i++)
// //     {
// //         for(int j=0;j<N;j++)
// //         {
// //             if((i+j)==N)
// //             {
// //                 count++;
// //             }
// //         }
// //     }
// //     cout<<count<<endl;
// // 	return 0;
// // }
// #include<iostream>
// #include<cstdio>
// using namespace std;

// int minMoves(int target, int maxDoubles){

//     int count=0;
//     int x=1;
//     while(x!=target)
//     {
//         x++;
//         count++;
//     }
//     cout<<count<<endl;
// }
// int main(){
//     minMoves(5,0);

//     return 0;
// }
#include <iostream>
using namespace std;

class chess
{
public:
    int A, B, P, Q;
    void inputs()
    {
        cin >> A >> B >> P >> Q;
    }
    void display()
    {
        cout << A << " " << B << " " << P << " " << Q << " ";
    }
    void outPuts();
};

void chess ::outPuts()
{
    if (A == P && B == Q)
    {
        cout << "0" << endl;
    }

    else if ((A + P) % 2 == 0 && (B + Q) % 2 != 0)
    {
        cout << "1" << endl;
    }
    else if ((A + P) % 2 != 0 && (B + Q) % 2 == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "2" << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    chess piece[4];
    for (int i = 0; i < N; i++)
    {
        cout << i + 1 << "==>" << endl;
        piece[i].inputs();
    }

    for (int i = 0; i < N; i++)
    {
        piece[i].outPuts();
    }
    return 0;
}
