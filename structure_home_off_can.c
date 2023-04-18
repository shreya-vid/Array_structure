/*
 * structure_home_off_can.c
 *
 *  Created on: 16-Apr-2023
 *      Author: AssetManagement
 */
struct home_office
{
	int km1;
	int feet1;
	int cm1;
};
struct office_canteen
{
	int km2;
	int feet2;
	int cm2;
};
struct home_canteen
{
	int km3;
	int feet3;
	int cm3;
};
void home_office_canteen()
{
	struct home_office distance={10,9,250};
	struct office_canteen distance1;
	struct home_canteen distance2={15,14,1000};
	distance1.km2=distance2.km3-distance.km1;
	distance1.feet2=distance2.feet3-distance.feet1;
	distance1.cm2=distance2.cm3-distance.cm1;
	printf("distance from office to canteen\n");
	printf("km=%d\t feet=%d\t cm=%d\n",distance1.km2,distance1.feet2,distance1.cm2);
	distance2.km3=distance.km1+distance1.km2;
	distance2.feet3=distance.feet1+distance1.feet2;
	distance2.cm3=distance.cm1+distance1.cm2;
	printf("distance from home to canteen\n");
	printf("km=%d\t feet=%d\t cm=%d\n",distance2.km3,distance2.feet3,distance2.cm3);

}

