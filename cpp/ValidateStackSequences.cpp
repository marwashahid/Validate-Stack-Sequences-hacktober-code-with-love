//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//
//        bool c = true;
//        stack<int> s;
//        int i = 0;
//        for (unsigned int j = 0; j < pushed.size(); j++)
//        {
//            s.push(pushed[j]);
//
//            if (s.top() == popped[i])
//            {
//                while (!s.empty() && (s.top() == popped[i]) && (i < popped.size()))
//                {
//                    s.pop();
//                    i++;
//                }
//            }
//
//        }
//
//        if (!s.empty())
//        {
//
//            c = false;
//        }
//
//        return c;
//
//    }
//};
//
//int main()
//{
//
//    vector<int> pushed;
//
//    for (int i = 1; i <= 5; i++)
//    {
//        pushed.push_back(i);
//
//    }
//    vector<int> popped;
//    popped.push_back(4);
//    popped.push_back(5);
//    for (int i = 3; i >= 1; i--)
//    {
//        popped.push_back(i);
//
//    }
//
//    Solution obj;
//    std::cout << obj.validateStackSequences(pushed, popped);
//
//
//    return 0;
//
//}