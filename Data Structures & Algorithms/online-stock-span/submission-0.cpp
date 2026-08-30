class StockSpanner {
private:
    stack<pair<int, int>> res;
public:
    StockSpanner() {}
    
    int next(int price) {
        int span = 1;
        while(!res.empty() and res.top().first <= price){
            span += res.top().second;
            res.pop();
        }
        res.push({price, span});
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */