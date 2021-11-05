#include<stdio.h>

int main(void) {

	int TID, SID, HID, LID, ANS,GEN;
	unsigned int PID;
	printf("Enter ROM's generation.\n");
	scanf("%d", &GEN);

	while (1) {
		printf("TID : ");
		scanf("%d", &TID);
		printf("SID : ");
		scanf("%d", &SID);
		printf("PID : ");
		scanf("%x", &PID);


		HID = (int)(PID >> 16);
		LID = (int)(PID & 0xffff);
		ANS = TID ^ SID^HID^LID;

			if (ANS == 0) {
				printf("ž effect shiny\n");
			}
			else if (GEN >= 6 && ANS < 16) {
				printf("™ effect shiny\n");
			}
			else if (GEN <= 5 && ANS < 8) {
				printf("™ effect shiny\n");
			}
			else {
				printf("not shiny\n");
			}
		}
	return 0;
}
