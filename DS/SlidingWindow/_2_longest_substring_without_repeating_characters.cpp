#include <bits/stdc++.h>
using namespace std;

int longestSubstringWithoutRepeatingCharacters(string &str)
{
    int left = 0, right = 0;
    vector<int> hash(256, -1);
    int maxlen = 0;

    int n = str.size();

    while (right < n)
    {
        if (hash[str[right]] != -1)
        {
            left = max(left, hash[str[right]] + 1);
        }
        maxlen = max(maxlen, right - left + 1);
        hash[str[right]] = right;
        right++;
    }

    return maxlen;
}

int main()
{
    string str;
    cin >> str;
    cout << longestSubstringWithoutRepeatingCharacters(str);
    return 0;
}

/*
    find the longest substring without repeating characters

    ex: cadbzabcd

    cadbz -> 5


    - Naive approach
        - generate all the substring and check the substring having the repeating characters or not
        - if not then check the length of the substring and update the max length

        i will keep hash

        for(int i=0;i<n;i++){
            vector<int>hash(26,0);

            for(int j=i;j<n;j++){
                hash[str[j]-'a']++;

                if(hash[str[j]-'a']>1){
                    break;
                }

                ans = max(ans,j-i+1);
            }

        }


    - Optimized approach
        - use the sliding window technique
        - keep the hash of the character
        - if the character is repeating then move the left pointer to the right until the character is not repeating
        - update the max length



      s= "cadbzabcd"

      left=0 , right =0;

        map<char,index>hash

      hash['c'-'a'] = 0
      hash['a'-'a'] = 1
      hash['d'-'a'] = 2
      hash['b'-'a'] = 3
      hash['z'-'a'] = 4

      hash['a'-'a'] =  // repeating character
      // i need to move the left pointer

        left = mp['a'-'a']+1 = 2

         then hash['a'-'a'] = 5
         hash['b'-'a'] already present

            left = mp['b'-'a']+1 = 4

            then hash['b'-'a'] = 6


            hash['c'-'a'] = 7
            hash['d'-'a'] = 8

            done


*/