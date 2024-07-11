// #include<bits/stdc++.h>
// using namespace std;
// /*
// Question 5 : Coin Game
// -----------------------
// Raman was playing a game,  he starts with x coins. Now in every step, he wins and loses and he has to get the money or pay the money as needed. He came in contact with a psychic who can see the future and the Psychic predicted the outcomes after each step. Now Raman wants to start the game with the minimum wage where he doesn’t run out of money.  Help Raman to find what money he should start with. The only rule to keep playing is not going in a credit situation.

// Input Format:
// --------------
// First line with n, number of steps in the game
// Next n lines, n integers denoting outcomes of every game. Positive means winning and negative means losing that money.
// Output Format:
// One single integer denoting the minimum amount to start with
// Constraints:
// Number of steps<=10^9
// -1000<=Money needed in each step<=1000

// Sample Input:
// --------------
//     4
//     2
//     -9
//     15
//      2

// Sample Output:
// -------------
//     7
    
// Explanation:
// If he starts with 7 rupees, then after steps : 7 ->9 -> 0-> 15 -> 17.
// */
// int main(){
//     int n;
//     cin>>n;
//     int total = 0;
//     int result = 0;
//     while(n--){
//         int x;
//         cin>>x;
//         total += x;
//         if(total < 0){
//             total = -total;
//             result = max(result,total);
//             total = 0;
//         }
//     }
//     cout << result << endl;
// }


// Last student's ID 
// -----------------

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string input;
//     cin>>input;
//     int n = input.size();
//     vector<string> values;
    
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             values.push_back(input.substr(i,j-i+1));
//         }
//     }
//     sort(values.begin(),values.end());
//     cout << *values.rbegin() << endl;
//     return 0;
// }

// 3. Duplicates

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     unordered_map<int,int> mp;
//     while(n--){
//         int x;
//         cin>>x;
//         ++mp[x];
//     }
//     for(auto it : mp){
//         if(it.second > 1){
//             cout << it.first << endl;
//         }
//     }
//     return 0;
// }

// Question2 : Vampire Battle (Two Pointer Approach)
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     string s;
//     cin>>s;
//     int stephen, damon;
//     stephen = damon = 0;
    
//     int pointer1 = 0,pointer2 = n-1;
//     while(pointer1 <= pointer2){
//         if(stephen <= damon){
//             stephen += s[pointer1] - '0'; // converting string to integer
//             pointer1 ++;
//         }else{
//             damon += s[pointer2] - '0';
//             pointer2 --;
//         }
//     }
//     cout << stephen << endl;
//     return 0;
// }

// Question1 : Starts Between Bars
/*
Given a string s consisting of stars “*” and bars  “|” ,an array of starting indices starIndex, and an array of ending indices endIndex, determine the number of stars between any two bars within the substrings between the two indices inclusive . NOTE that in this problem indexing starts at 0.

A Star is represented as an asterisk [*=ascii decimal 42]
A Bar is represented as a Pipe [“|”=ascii decimal 124]
Example
s=’|**|*|’
n = 2
startIndex=[0,0]
endIndex=[4,5]

For the first pair of indices (0,4) the substrings is “|**|*”  . There are 2 stars between a pair of bars
For the second pair of indices (0,5) the substring is  “|**|*|” and there are 2+1=3 stars in between the bars.
Both of the answers are returned to the array [2,3].
Constraints
1 <= n <= 105
1 <= StartIndex[i] <= endIndex[i]
Each Character of s is either “*” or “|”
Input Format for Custom testing
First line contains a string S. The next line contains an integer n , the no.of elements in startIndex and endIndex. Each line i of the n subsequent lines contains an integer of startIndex. Each line i of the n subsequent lines contains an integer of endindex.

Sample Input
*|*|  → s=”*|*|”
1 → size of startindex[] and endIndex[] is 1.
0 → startindex = 0
2 → endindex = 2

Sample output:
0

Explanation :
The substring from index = 0 to index = 2 is “*|*” . there is no consecutive pair of bars in this string.
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string pattern;
//     cin>>pattern;
//     int n;
//     cin>>n;
//     vector<int> startIndex, endIndex;
//     for(int i = 0;i<n;i++){
//         int e;
//         cin>>e;
//         startIndex.push_back(e);
//     }
//     for(int i = 0;i<n;i++){
//         int e;
//         cin>>e;
//         endIndex.push_back(e);
//     }
//     vector<int> result;
//     for(int i = 0;i<n;i++){
//         int start = startIndex[i];
//         int end = endIndex[i];
//         int length = end-start+1;
//         string curr = pattern.substr(start,length);
//         int track = 0;
//         int pointer1 = 0;
//         int pointer2 = length-1;
//         while(curr[pointer1] != '|' && pointer1 < length){
//             pointer1++;
//         }
//         while(curr[pointer2] != '|' && pointer2 > -1){
//             pointer2--;
//         }
        
//         for(int i=pointer1;i<=pointer2;i++){
//             if(curr[i] == '*') track++;
//         }
        
//         result.push_back(track);
//     }
//     sort(result.begin(),result.end());
//     for(auto it : result){
//         cout << it << " ";
//     }cout << endl;
//     return 0;
// }