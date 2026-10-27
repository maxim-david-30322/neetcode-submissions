class Solution {
public:

    string encode(vector<string>& strs) {

        string result;
        for (int i=0;i<strs.size();i++)
        {
            int size=strs[i].length();
            result += to_string(size) + "#" + strs[i];


        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;

        while (i<(int)s.size())
        {
            int slash= s.find('#',i);
            int len =stoi(s.substr(i, slash-i));

            string word =s.substr(slash+1,len);

            i=slash+1+len;
            result.push_back(word);
        }
        return result;
    }
};
