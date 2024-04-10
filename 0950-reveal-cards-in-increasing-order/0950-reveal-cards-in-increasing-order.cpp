class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        queue<int>q;
        
        for(int i=n-1;i>=0;i--)
        {
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
            q.push(deck[i]);
            
        }
        for(int i=n-1;i>=0;i--)
        {
            deck[i]=q.front();
            q.pop();
        }
        return deck;

        
    }
};