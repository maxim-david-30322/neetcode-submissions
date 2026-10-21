class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    //  array<int,26> ctr;  
    //  vector<string> good_words; 
    //  int c=0;
    //  for (int i=0;i<strs.length();i++)
    //  {
    //     good_words.push_back(strs[i]);
    //     c++;
    //     if(strs[i].length()==strs[c].length())
    //     {
    //         for (int j=0;j<strs[i].length();j++)
    //         {
                
    //                 ctr[strs[i][j]-'a']++;
    //                 ctr[strs[c][j]-'a']--;
                    
    //         }
    //         if(ctr!=0)
    //         {
    //             good_words.push_back(strs[c]);
    //             strs.
    //         }
    //     }

    //  }   

    map<array<int,26>,vector<string>> mp;


    for (int i=0;i<(int)strs.size();i++)
    {
        array<int,26> crt ={};

        for(int j=0;j<(int)strs[i].size();j++)
        {
            crt[strs[i][j]-'a']++;
        }
        mp[crt].push_back(strs[i]);

    }   

    vector<vector<string>> result;

    result.reserve(mp.size());

    for (auto&pair:mp)
    {
            result.push_back(move(pair.second));
    }
    return result;

    




     }


};


// pick the first, insert into a new list
// create dictionary for it
//go through all of the strs, make dictionary and 
//check them to the first

//if it matches put the 2nd in aan array and remove it 
//from the input string

//after all of the strs print the list