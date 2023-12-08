#include <stdio.h>
#include <stdlib.h>
 
int isEraser(char* str, int *pos){
	int i;
  	i = *pos;
   	if(str[i] == 'e' && str[i+1] == 'r' && str[i+2] == 'a' && str[i+3] == 's' && str[i+4] == 'e' &&  str[i+5] == 'r'){          
        	//if(str[i*6] == 'a' && str[i*7] == 's' && str[i*8] == 'e'){
	   	   //     *pos +=5 ;
          //  	return 2;
          //  }
	        *pos += 6;
			return 1;          
    }
 
    if(str[i] == 'e' && str[i+1] == 'r' && str[i+2] == 'a' && str[i+3] == 's' && str[i+4] == 'e'){   
          	*pos += 5;
          	return 2;
    }
  	return 0;
}
 
int isDreamer(char* str, int* pos){
	int i;
    	i = *pos;

    	if(str[i] == 'd' && str[i+1] == 'r' && str[i+2] == 'e' && str[i+3] == 'a' && str[i+4] == 'm' &&  str[i+5] == 'e' &&  str[i+6] == 'r'){          
			if(str[i+7] == 'a' && str[i+8] == 's' && str[i+9] == 'e'){
                *pos += 5;
            	return 2;
            }
            *pos += 7;            
            return 1;          
        }else if(str[i] == 'd' && str[i+1] == 'r' && str[i+2] == 'e' && str[i+3] == 'a' && str[i+4] == 'm'){
          	*pos += 5;
	      	return 2;
        }			      	
  	return 0;
}
 
 
 
int main(){
	int n,i,j,k;
  	int *pos;
  	int flag;
  	char str[100001];  
  
  
  
  	scanf("%s",str);
   // printf("%s",str);
  
  
  	k=0;
  	pos = &k;
  
  	flag = 0;
  	while(1){
      	if(str[*pos] == 'e'){
       		if(isEraser(str,pos) == 0){
   	          	flag = 1;
            	break;
            }
        }else if(str[*pos] == 'd'){
       		if(isDreamer(str,pos) == 0){
          		flag = 1;            	
              	break;
            }          
        }else if(str[*pos] == '\0' || str[*pos] == '\n'){          	
          	break;
        }else{
          	flag = 1;
        	break;
        }      
    }
  	if(flag == 1){
		printf("NO");	    
    }else{
		printf("YES");	    
    }      
  
      
}