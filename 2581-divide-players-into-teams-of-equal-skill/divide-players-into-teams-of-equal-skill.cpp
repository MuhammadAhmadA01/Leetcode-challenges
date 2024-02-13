class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int end=skill.size()-1;
        int opt=skill[0]+skill[end];
        
        long long chem=0;
        chem=chem+(skill[0]*skill[end--]);
        for(int i =1;i<skill.size()/2;i++)
        {
            int sum=skill[i]+skill[end];
            if(sum==opt)
            {
                chem=chem+(skill[i]*skill[end]);
                end--;
            }
            else return -1;
        }
        return chem;
    }
};