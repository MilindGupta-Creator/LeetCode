class Solution {
    unordered_map<string,vector<string>> map;
public:
    
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>> ans;
        string dir;
        int l,i;
        
        for(string path : paths) {
            dir = "";
            l = path.length();
            i = 0;
            
            //directory name is present until first ' ' i.e empty space character
            while(i<l && path[i] != ' ') {
                dir += path[i];
                i++;
            }
            i++;
            
            //keep iterating until the entire string is scanned and keep inserting {file_content,file_name} into the map
            while(i<l) {
                if(path[i] == ' ')
                    i++;
                store(i,l,path,dir);
            }
            
        } 
        
        //iterate over the map and insert all the duplicate files into the ans array
        for(auto m : map) {
            if(m.second.size() > 1)
                ans.push_back(m.second);
        }
        return ans;
    }
    
    /*
    Helper Function to insert key-value pairs into map where key is flie_content and value is file_name because in the output we
    need all of the duplicate fiels i.e different fiels in different directories with the same content therefore
    file_content is the key here
    */
    void store(int &i , int l , string path , string dir) {
        string file_name = "", file_content = "";
        
        //file_name is present between ' ' & '('
        while(i<l && path[i] != '(') {
            file_name += path[i];
            i++;
        }
        i++;
        
        //file_content is present between '(' & ')'
        while(i<l && path[i] != ')') {
            file_content += path[i];
            i++;
        }
        i++;
        
        //insert {file_content,file_name} into the map
        if(map.find(file_content) == map.end())
            map.insert({file_content,{}});
        
        map[file_content].push_back(dir+'/'+file_name);
    }
    
};