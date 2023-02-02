class Solution {
public:
    int totalFruit(vector<int>& fruits) {

     int l = 0, r = 0, max_fruits = 0, cnt = 0;
     unordered_map<int, int> basket;

     while(r < fruits.size()){

         //acquire
         while(r < fruits.size() && basket.size() <= 2){
             basket[fruits[r]]++;
             cnt++;
             r++;

             if(basket.size() <= 2)
                max_fruits = max(max_fruits, cnt);
         }
        
         //release
         while(l < r && basket.size() > 2){
             basket[fruits[l]]--;
             cnt--;

             if(basket[fruits[l]] == 0)
                basket.erase(fruits[l]);

             l++;
         }
     }
     
     return max_fruits; 
    }
};
