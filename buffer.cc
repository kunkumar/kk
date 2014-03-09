#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void parse(char * str)
{
	char buffer[100];
	while(*str != '\0')
	{
		if(*str == ':')
			*str = ',';
		str++;
	}
}

void addbuff(char * temp, char * columns, char * values, char * bufferup)
{
	strcat(bufferup," and ");

	if(strcmp(columns,"sw") == 0)
	{
		parse(values);
		sprintf(temp,"%s=ROW%s",columns,values);
	}
	else
	{
		sprintf(temp,"%s=%s",columns,values);
	}
	strcat(bufferup,temp);
	memset(temp,'\0',100);
}

void func(char * arg)
{
	//char input[] = "col1,col2,col3|kundan,13,14";
	char columns[12][120];
	char buffer[1024];
	char bufferup[1024] = {0};
	char columns_val[12][120];
	char * cols;
	char * val;
	int seqno_i=0;
	cols= strtok_r(arg,"|",&val);
	
	//char colarr[] = "col1,col2,col3,col4,col5";
	printf("%s  %s\n",cols,val);
	sprintf(buffer,"insert into table (%s) values(%s);\n",cols,val);
	printf("query is : %s",buffer);
	int count=0;
	char * arr = strtok(cols,",");
	int acc_pos=-1;
	int seq_pos=-1;
	//printf("%s\n",columns[0]);
	while(arr != NULL)
	{
		if((strcmp(arr,"accno") != 0)&& (strcmp(arr,"seq") != 0))
		{
			strcpy(columns[count],arr);
			printf("%s\n",columns[count]);
			count++;
		}
		else if(strcmp(arr,"accno") == 0)
		{
			acc_pos = count;
		}
		else if(strcmp(arr,"seq") == 0)
		{
			seq_pos = count;
		}
		//printf("%s\n",columns[count]);
		arr = strtok(NULL,",");
	}
	count=0;
	char * valarr = strtok(val,",");
	char account_number[9];
	char seqno[1];
	while(valarr != NULL)
	{
		if((count != acc_pos) && (count != seq_pos) )
		{
			strcpy(columns_val[count],valarr);
			printf("%s\n",columns_val[count]);
			valarr = strtok(NULL,",");
			count++;
		}
		else if(count == acc_pos)
		{
			strcpy(account_number,valarr);
			valarr = strtok(NULL,",");
			acc_pos=-1;
			continue;
		}	
		else if(count == seq_pos)
		{
			strcpy(seqno,valarr);
			valarr = strtok(NULL,",");
			seq_pos=-1;
			seqno_i = atoi(seqno);
			continue;
		}	
			
		
	}
	memset(buffer,'\0',sizeof(buffer));
	printf("buffer is\n",buffer);
	

	/*while(ptr != NULL)
	{
		printf("%s  %s\n",ptr,rem);
		ptr = strtok_r(NULL,",",&rem);
	}
	*/

	/*char str[] ="col1,col2,col3,col4,col5|12,13,14,15,16";
  	char * pch;
	//printf ("Splitting string \"%s\" into tokens:\n",str);
  	pch = strtok (str,",");
  	while (pch != NULL)
  	{
    		printf ("%s\n",pch);
    		pch = strtok (NULL, ",");
  	}*/
	sprintf(bufferup,"update table kk set %s=%s",columns[0],columns_val[0]);
	printf("%s\n",bufferup);
	char temp[100];
	for(int i =1;i < count;i++)
	{
		//strcat(bufferup," and ");
		//if(strcmp(columns[i],"sw") == 0)
		//{	
			//parse(columns_val[i]);
			//strcat(bufferup," and ");
			//sprintf(temp,"%s=ROW%s",columns[i],columns_val[i]);
			//strcat(bufferup,temp);
			//memset(temp,'\0',100);
			//addbuff(temp,columns[i],columns_val[i],bufferup);
			//continue;
		//}
		addbuff(temp,columns[i],columns_val[i],bufferup);
		//strcat(bufferup," and ");
		//sprintf(temp,"%s=%s",columns[i],columns_val[i]);
		//strcat(bufferup,temp);
		//memset(temp,'\0',100);
	}


	char where_clause[100];
	sprintf(where_clause," where accno=%s and seq=%d",account_number,seqno_i);
	strcat(bufferup,where_clause);
	printf("%s\n",bufferup);
	
}
	

int main(int argc, char * argv[])
{
	//char input[] = "col1,col2,accno,col3,sw,seq,col4|\"Richard\",13,\"12345\",14,(1:0:0:1:1:1:\"otherdetail\":0),1,45";
	func(argv[1]);
	//func(input);
	return 0;
}	













