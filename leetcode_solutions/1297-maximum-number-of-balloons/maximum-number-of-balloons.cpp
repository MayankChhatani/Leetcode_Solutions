class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<int,int>mp = {
            {'b',0},{'a',0},{'l',0},{'o',0},{'n',0}
        };
        for(char t: text){
            if(mp.find(t)!=mp.end()){
                mp[t]++;
            }
        }
        int num = INT_MAX;
        
        num = min(num, mp['b']/1);
        num = min(num, mp['a']/1);
        num = min(num, mp['l']/2);
        num = min(num, mp['o']/2);
        num = min(num, mp['n']/1);

        return num;   
    }
};

//       agar ye chal gya to maja hi ajayega 
//                  kyuki maine ye wala kud socha hia 


// key idea?   =  kyuki balloon banane keliye sab jitte baar ate hai bollon mai utte hone hi chaiye to 
        //      agar koi char sabse cum count rakhta hai matlab baki ka count jitna bhi ho jinte words ka criteria ye covver kar raha hai utna to kar hi rahe hone 