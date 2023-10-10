
string parenBit(const string& str) 
{
   if (str.empty()) 
   {
      return str;
   }

   if (str[0] == '(') {
      if (str[str.length() - 1] == ')') 
      {
         return str;
      } 
      else 
      {
         return parenBit(str.substr(0, str.length() - 1));
      }
   } 
   else 
   {
      return parenBit(str.substr(1));
   }
}
/*
22THE PAREN BIT PROBLEM
Given a string that contains a single pair of parenthesis, compute recursively a new string made
of only of the parenthesis and their contents, so "xyz(abc)123" yields "(abc)".
• parenBit("xyz(abc)123") → "(abc)"
• parenBit("x(hello)") → "(hello)"
• parenBit("(xy)1") → "(xy)"
*/