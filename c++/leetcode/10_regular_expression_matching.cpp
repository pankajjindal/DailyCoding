bool bk(const char* str, const char* pattern){
    if (*pattern && *(pattern+1) == '*'){
        if (bk(str, pattern+2))
            return true;
   
        for (int i=0;str[i] && (str[i]==*pattern || *pattern == '.');i++){
            if (bk(str+i+1, pattern+2))
                return true;
        }
    }
    else if ((bool)*str != (bool)*pattern){
        return false;
    }
    else if (!*str){
        return true;
    }
    else if (*str == *pattern || *pattern == '.'){
        return bk(str+1, pattern+1);
    } 
    return false;    
}

bool isMatch( const string &text, const string &pattern ) 
{
  return bk(text.c_str(), pattern.c_str());  
}
