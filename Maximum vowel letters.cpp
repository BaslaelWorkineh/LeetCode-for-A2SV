class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0;
        int j = k - 1;
        int mx = 0;
        int vCh = 0;

        for(int n = 0; n < k; n++)
        {
            if(s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u')
            {
                vCh++;
            }
        }
        if(vCh == k) return k;

        mx = max(mx, vCh);
        j++;

        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vCh--;
            i++;
        }

        else
        {
            i++;
        }
        
        while(j < s.size())
        {
            if(vCh == k) return k;

            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
            {
                vCh++;
                mx = max(mx, vCh);

                j++;
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    vCh--;
                    i++;
                }
                else
                {
                    i++;
                }
                

            }
            else
            {
                j++;
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                {
                    vCh--;
                    i++;
                }
                else
                {
                    i++;
                }
            }
            mx = max(mx, vCh);
        }

    return mx;
    }
};
