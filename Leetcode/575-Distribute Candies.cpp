class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int count = 0;
        int *HashTable = new int[200001];
        for(int i = 0; i < candies.size(); i++){
            if(HashTable[candies[i] + 100000] == 0){
                count++;
                HashTable[candies[i] + 100000] = 1;
                if(count == candies.size()/2)return count;
            }
        }
        return count;
    }
};