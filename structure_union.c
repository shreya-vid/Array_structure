/*
 * structure_union.c
 *
 *  Created on: 16-Apr-2023
 *      Author: AssetManagement
 */
struct car
{
	char mirror;
	int wiper;
	float door;
	double wheel;
};
union door
{
	char front;
	int back;
	float right;
	double left;
};
void structure_u()
{
	struct car v={'a',2,4,4};
	struct car *p=&v;
	printf("mirror=%c\t wiper=%d\t door=%f\t wheel=%lf\n",v.mirror,v.wiper,v.door,v.wheel);
	printf("structure using pointer\n");
	printf("mirror=%c\t wiper=%d\t door=%f\t wheel=%lf\n",p->mirror,p->wiper,p->door,p->wheel);
	union_s();
}
void union_s()
{
	union door f;
	f.front='j';
	printf("front=%c\n",f.front);
	f.back=10;
	printf("back=%d\n",f.back);
	f.right=11.12;
	printf("right=%f\n",f.right);
	f.left=23.45;
	printf("left=%lf\n",f.left);
	structure_add();
}


