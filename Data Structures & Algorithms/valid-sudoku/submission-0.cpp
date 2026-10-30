class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int big=board.size();
        int numbers=board[0].size();
        int box_id=0;
        string row;
        string col;
        string box;
        int nr=0;

        unordered_set<string> seen;

        for(int i=0;i<big;i++)
        {
            

            for (int j=0;j<numbers;j++)
            {   
                if (board[i][j] == '.') continue;



                box_id=(i/3)*3+(j/3);
                nr=board[i][j];
                string nr_str=to_string(nr);

                row=nr_str+to_string(i)+"row";
                col=nr_str+to_string(j)+"col";
                box=nr_str+to_string(box_id)+"box";

                if (
                !seen.insert(row).second ||
                !seen.insert(col).second || 
                !seen.insert(box).second
                )
                {
                    return false;
                }
                
            }
        }
        return true;
    }
};
