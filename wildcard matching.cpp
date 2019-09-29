bool isMatch(string s, string p) {
        int n = p.length();
        int m = s.length();
        
        // f[i][j] - does pattern p[:i] match text s[:j]?
        vector<vector<bool>> f(n + 1, vector<bool>(m + 1, false));
        
        // Empty pattern always matches an empty text!
        f[0][0] = true;
        
        for (int i = 1; i <= n; ++i) {
            // !!! We must start from 0 here, since empty text can match a pattern like "a*b*"
            for (int j = 0; j <= m; ++j) { 
                // convert length to index
                int ii = i - 1;
                int jj = j - 1;
                
                if (p[ii] == '*') {
                    f[i][j] = f[i - 2][j];
                    
                    if (jj >= 0 && (p[ii - 1] == s[jj] || p[ii - 1] == '.')) {
                        f[i][j] = f[i][j] || f[i][j - 1];
                    }
                } else {
                    f[i][j] = jj >= 0 && (p[ii] == s[jj] || p[ii] == '.') && f[i - 1][j - 1];
                }
            }
        }
        
        return f[n][m];
    }
