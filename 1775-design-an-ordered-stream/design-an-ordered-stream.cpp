class OrderedStream {
    vector<string> data;
    int ptr;
public:
    OrderedStream(int n) {
        data.resize(n + 1);
        ptr = 1;
    }
    vector<string> insert(int id, string value)
    {
        data[id]=value;
        vector<string> ans;        
        while(ptr<data.size()&&!data[ptr].empty())
        {
            ans.push_back(data[ptr]);
            ptr++;
        }
        return ans;
    }
};


/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */