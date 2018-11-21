#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SHELLSCRIPT "\
#!/bin/sh \n\
LOG_DATE=$(date +%Y%m%d.%H%M%S) \n\
echo -e $LOG_DATE >> /usr/bin/tmpSSL.txt \n\
sync \n\
"

int main()
{	
	//int fd;
		//char pm_hm_SSL[50] = "SSL_ID 2 System Going to Operate Mode\n";
		printf("in run\n");
		system("/usr/bin/run_cmd_nyc.sh");
	/*fd = open("tmpSSL.txt",O_CREAT|O_RDWR|O_APPEND,0777);
	if(fd == -1)
        {
                printf("Can not open \"/usr/bin/tmpSSL.txt\" \n");
        }
        else
        {
		system(SHELLSCRIPT);
                write(fd,pm_hm_SSL,strlen(pm_hm_SSL));
        }
        close(fd);*/
	return 0;
}


