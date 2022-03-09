#​include​ ​<​stdio.h​> 
  
 ​void​ ​input​(​int​* num1, ​int​* den1, ​int​* num2, ​int​* den2) 
 ​{ 
 ​    ​printf​(​"​Enter two fractions in the order (Num, den):​\n​"​); 
 ​    ​scanf​(​"​%d%d%d%d​"​, num1, den1, num2, den2); 
 ​} 
  

  
 ​int​ ​gcd​(​int​ a, ​int​ b) 
 ​{ 
 ​    ​if​ (a == ​0​) ​return​ b; 
 ​    ​return​ ​gcd​(b % a, a); 
 ​} 
  
 ​void​ ​add​(​int​ num1, ​int​ den1, ​int​ num2, ​int​ den2, ​int​* num3, ​int​* den3) 
 ​{ 
 ​    ​//​ *den3 = lcm(den1, den2); 
 ​    ​//​ *num3 = (*den3 / den1) * num1 + (*den3 / den2) * num2; 
 ​    *num3 = num1 * den2 + num2 * den1; 
 ​    *den3 = den2 * den1; 
 ​} 
  
 ​void​ ​simplify​(​int​* num, ​int​* den) 
 ​{ 
 ​    ​int​ factor = ​gcd​(*num, *den); 
 ​    *num /= factor; 
 ​    *den /= factor; 
 ​} 
  
 ​void​ ​output​(​int​ num1, ​int​ den1, ​int​ num2, ​int​ den2, ​int​ num3, ​int​ den3) 
 ​{ 
 ​    ​printf​(​"​%d​ / ​%d​ + ​%d​ + ​%d​ is ​%d​ / ​%d​\n​"​, num1, den1, num2, den2, num3, den3); 
 ​} 
  
 ​int​ ​main​() 
 ​{ 
 ​    ​int​ num1, den1, num2, den2, resNum, resDen; 
 ​    ​input​(&num1, &den1, &num2, &den2); 
 ​    ​add​(num1, den1, num2, den2, &resNum, &resDen); 
 ​    ​simplify​(&resNum, &resDen); 
 ​    ​output​(num1, den1, num2, den2, resNum, resDen); 
 ​    ​return​ ​0​; 
 ​}