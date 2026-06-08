class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>ransomNotemp;
        unordered_map<char,int>magazinemp;

        for(int i=0;i<ransomNote.size();i++){
            ransomNotemp[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++) magazinemp[magazine[i]]++;

        for(auto ele:ransomNotemp){
            char ch=ele.first;
            int rcount=ele.second;
            int mcount=magazinemp[ch];
            cout<<ch<<rcount<<" "<<mcount<<endl;
            if(rcount>mcount)return false;
        }
        return true;
    }
};