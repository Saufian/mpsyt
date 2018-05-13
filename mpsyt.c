#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

void mpsyt();
void system2();

///////////////////////////////////////////////////////////////////////////


	int main()
{
	int c;
		printf("\t \t \t >>>>>> Welcome >>>>>>\n\n\n");
		printf("\t [Press 1 For Termux]\n\n");
		printf("\t [Press 2 For Kali Linux]\n\n");
		printf("\t [Press 3 For Exit] \n\n");
		printf(">>>>>");
	scanf("%d",&c);
	if(c == 1)
		{
			system2();
			mpsyt();
			exit(0);
		}
	if(c == 2)
			{
						printf("\t \t \t >>>>>> Installing The dependecies >>>>>> \n \n \n");
					sleep(1);
						printf("\t \t \t >>>>>> Installing python-setuptools >>>>>> \n \n \n");
					sleep(1);
				system("apt-get install python-setuptools && apt-get install python3-setuptools");
						printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
					sleep(1);
						printf("\t \t \t >>>>>> Downloading [mpsyt]  >>>>>>\n \n \n");
					sleep(1);
                       			//system("git clone https://github.com/mps-youtube/mps-youtube");
						printf("\t \t \t >>>>>> installing Mpsyt  >>>>>>\n \n \n");
					sleep(1);
				system("cd /root/Desktop/Myscripts/mps-youtube/ && python3 setup.py build");
					sleep(1);
				system("cd /root/Desktop/Myscripts/mps-youtube/ && python3 setup.py install");
					sleep(3);
						printf("\t \t \t >>>>>> Installation Completed  >>>>>>\n \n \n");
						printf("\t \t \t >>>>>> Use  mpsyt to Run the tool >>>>>>\n \n \n"); 
				exit(0);
			}
	else
		{
			exit(0);
		}
}
///////////////////////////////////////////////////////////////////////////////////////////////////
	void system2()
	{
				printf("\t \t \t >>>>>> Installing The dependecies >>>>>> \n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> Installing Python >>>>>> \n \n \n");
			sleep(1);
		system("pkg install python ");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> Installing mpv >>>>>> \n \n \n");
		system("pkg install mpv");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> Upgrading Pip >>>>>>\n \n \n");
			sleep(1);
		system("pip install --upgrade pip");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> Installing youtube-dl >>>>>> \n \n \n");
		sleep(1);
		system("pip install youtube-dl");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> installing Git  >>>>>>\n \n \n");
			sleep(1);
		system("pkg install git");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> installing Wget  >>>>>>\n \n \n");
			sleep(1);
		system("pkg install wget");
				printf("\t \t \t >>>>>> Installation Succesfull >>>>>>\n \n \n");
			sleep(1);
				printf("\t \t \t >>>>>> Downloading [mpsyt]  >>>>>>\n \n \n");
			sleep(1);
/////////////////////////////////////system("git clone https://github.com/mps-youtube/mps-youtube");
			sleep(1);
				printf("\t \t \t >>>>>> installing Mpsyt  >>>>>>\n \n \n");
			sleep(1);
		system("cd /root/Desktop/Myscripts/mps-youtube/ && python3 setup.py build");
			sleep(1);
		system("cd /root/Desktop/Myscripts/mps-youtube/ && python3 setup.py install");
			sleep(3);
				printf("\t \t \t >>>>>> Installation Completed  >>>>>>\n \n \n");
	}
///////////////////////////////////////////////////////////////////////////////////////////////////
		void mpsyt()
			{
						printf("\t \t \t >>>>>> Selecting Player For mpsyt  >>>>>>\n \n \n");
					sleep(2);
				system("mpsyt 'set player mpv' ");
						printf("\t \t \t >>>>>> Configration is Done  >>>>>>\n \n \n");
			}
//////////////////////////////////////////////////////////////////////////////////////////////////

