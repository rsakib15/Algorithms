#include <iostream>
using namespace std;
 
void TowerofHanoi(int Disks,char *source_position,char *midposition,char *final_position){
	if(Disks!=0){
		TowerofHanoi(Disks-1,source_position,final_position,midposition);
 
		printf("Move Disk %d Form %s to %s\n",Disks,source_position,final_position);
 
		TowerofHanoi(Disks-1,midposition,source_position,final_position);
	}
}
 
 
int main(){
	int disk;
	cin>>disk;
	char *tower1="left Tower";
	char *tower2="Mid Tower";
	char *tower3="Right Tower";
 
	TowerofHanoi(disk,tower1,tower2,tower3);
 
 
	return 0;
}
