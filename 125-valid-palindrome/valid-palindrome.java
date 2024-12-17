class Solution {
    public boolean isPalindrome(String s) {
      StringBuilder ss=new StringBuilder();
      for(int i=0;i< s.length();i++){
        char c=s.charAt(i);
        if(Character.isLetterOrDigit(c)){
            ss.append(Character.toLowerCase(c));
        }
      }
      String st=ss.toString();
      return ispalin(st,0,st.length()-1);
    }
   boolean ispalin(String s,int start,int end){
        if(start>end){
            return true;
        }
       if(s.charAt(start)!=s.charAt(end)){
        return false;
       }
      return ispalin(s,start+1,end-1);
   }
   
}