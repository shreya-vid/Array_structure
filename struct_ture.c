/*
 * struct_ture.c
 *
 *  Created on: 17-Apr-2023
 *      Author: AssetManagement
 */
struct ecu
{
	int cluster1;
	int sunroof;
	struct cluster
	{
		int speedometer;
		int adometer;
	}parameter;
}euc_two;
struct sensor
{
	int temperature;
	union sensor1
	{
		float humidity;
		int pressure;
	}value;
}readings;
union bcm
{
	int mirror;
	int door;
	union abs
	{
		int bre_ak;
		int steer;
	}abs_ecu;
}b_ecu;
union parking
{
	int space;
	struct parking_lot
	{
		float square_feet;
	}s_l;
}p_s;
void fun_ecu()
{
	struct ecu ecu_two;
	ecu_two.cluster1=10;
	ecu_two.sunroof=2;
	ecu_two.parameter.speedometer=60;
	ecu_two.parameter.adometer=80;
	printf("structure_structure=%d\n",ecu_two.parameter.speedometer);
	fun_sensor();
	fun_bcm();
	fun_parking();
}
void fun_sensor()
{
	readings.value.humidity=23;
	printf("structure_union=%f\n",readings.value.humidity);
}
void fun_bcm()
{
	b_ecu.abs_ecu.bre_ak=2;
	printf("union_union=%d\n",b_ecu.abs_ecu.bre_ak);
}
void fun_parking()
{
	p_s.s_l.square_feet=30.45;
	printf("union_structure=%f\n",p_s.s_l.square_feet);
}
