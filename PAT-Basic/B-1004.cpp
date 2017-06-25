#include <stdio.h>
#include <string.h>
struct student
{
	char name[11];
	char studentID[11];
	int grade;
};
void copy_info(struct student *des, struct student *res);
int main(void){
	int i, count;
	struct student stu, stu_max, stu_min;
	scanf("%d", &count);
	if(count == 0)return 0;
	scanf("%s%s%d", stu_min.name, stu_min.studentID, &stu_min.grade);
	strcpy(stu_max.name, stu_min.name);
	strcpy(stu_max.studentID, stu_min.studentID);
	stu_max.grade = stu_min.grade;
	for(i = 1; i < count; i++){
		scanf("%s%s%d", stu.name, stu.studentID, &stu.grade);
		if(stu.grade > stu_max.grade){
			copy_info(&stu_max, &stu);
		}
		if(stu.grade < stu_min.grade){
			copy_info(&stu_min, &stu);
		}
	}
	printf("%s %s\n", stu_max.name, stu_max.studentID);
	printf("%s %s\n", stu_min.name, stu_min.studentID);
	return 0;
}
void copy_info(struct student *des, struct student *res){
	strcpy(des->name, res->name);
	strcpy(des->studentID, res->studentID);
	des->grade = res->grade;
}