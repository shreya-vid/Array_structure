/*
 * struct_structure.c
 *
 *  Created on: 16-Apr-2023
 *      Author: AssetManagement
 */
struct car1
{
	int wheel1;
	int door1;

};
struct car2
{
	int wheel2;
	int door2;
};
struct car3
{
	int wheel3;
	int door3;

}part3;
int structure_add()
{
	struct car1 parts1={2,1};
	struct car2 part2={1,3};
	int e,f;
	e=(parts1.wheel1+part2.wheel2);
	f=(parts1.door1+part2.door2);
	struct car3 part3={e,f};
	printf("wheel3=%d\t door3=%d\n",part3.wheel3,part3.door3);
	return 0;
}
