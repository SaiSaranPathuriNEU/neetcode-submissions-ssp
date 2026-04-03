using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> resMap;

        //try sorted way of doing it
        // for(auto& s: strs){
        //     string sorted = s;
        //     sort(sorted.begin(), sorted.end());
        //     resMap[sorted].push_back(s);
            
        // }

        //using frequecy map hash
        for(auto& s: strs){
            vector<int> freq(26, 0);
            for(auto& c : s){
                freq[c - 'a']++;
            }

            //create a key and add they string to it
            string key = "";
            for(int i = 0; i < 26; i++){
                key = key + "," + to_string(freq[i]);
            }
            resMap[key].push_back(s);
        }
        
        vector<vector<string>> result;
        for(auto& pair : resMap){
            result.push_back(pair.second);
        }


        return result;
    }
};
