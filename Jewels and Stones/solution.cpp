class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num_J = J.size();
        int n = 0;
        for(int i=0; i<num_J; i++){
            char current_J = J[i];
            n += std::count(S.begin(), S.end(), current_J);
        }
        return n;
    }
};
