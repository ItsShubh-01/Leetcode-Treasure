class Solution {
public:
    int f(vector<long long>& find, long long val, int n) {
        int start = 0, end = n-1;
        while(start<=end) {
            int mid = start + (end-start)/2;

            if(find[mid]==val) return find.size()-mid-1;
            else if(find[mid]>val) end=mid-1;
            else start=mid+1;
        }
        return n-start;
    }
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n=tasks.size(), m=shifts.size();
        long long sum=0;
        for(int i:tasks) sum+=i;

        vector<long long> find;
        long long val = 0;
        for(int i:tasks) {val+=i; find.push_back(val);}

         long long done = 0;
        vector<int> ans;
        for(int i=0; i<m; i++) {
            if(shifts[i]+done>=sum) {ans.push_back(0); done=0; continue;}

            ans.push_back(f(find, done+shifts[i], n));
            done+=shifts[i];
            if(done>=sum) done = 0;
        }
        return ans;
    }
};
