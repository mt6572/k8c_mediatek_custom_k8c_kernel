#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R		  100000	
#endif
#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{0   ,4182},
{2   ,3975},
{5   ,3947},
{7   ,3924},
{9   ,3904},
{11  ,3882},
{14  ,3862},
{16  ,3844},
{18  ,3827},
{21  ,3811},
{23  ,3795},
{25  ,3781},
{27  ,3769},
{30  ,3757},
{32  ,3744},
{34  ,3734},
{37  ,3720},
{39  ,3711},
{41  ,3700},
{43  ,3690},
{46  ,3680},
{48  ,3669},
{50  ,3659},
{53  ,3650},
{55  ,3641},
{57  ,3632},
{59  ,3624},
{62  ,3615},
{64  ,3607},
{66  ,3599},
{69  ,3591},
{71  ,3581},
{73  ,3572},
{76  ,3561},
{78  ,3550},
{80  ,3540},
{82  ,3525},
{85  ,3510},
{87  ,3495},
{89  ,3479},
{92  ,3463},
{94  ,3446},
{96  ,3427},
{98  ,3407},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400},
{100 ,3400} 
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
{0  ,4185},
{2  ,4039},
{4  ,4016},
{6  ,3996},
{8  ,3976},
{10 ,3956},
{12 ,3934},
{14 ,3913},
{16 ,3899},
{18 ,3885},
{19 ,3871},
{21 ,3856},
{23 ,3844},
{25 ,3834},
{27 ,3825},
{29 ,3815},
{31 ,3804},
{33 ,3795},
{35 ,3786},
{37 ,3777},
{39 ,3768},
{41 ,3761},
{43 ,3753},
{45 ,3745},
{47 ,3737},
{49 ,3729},
{51 ,3722},
{53 ,3714},
{55 ,3709},
{57 ,3705},
{58 ,3698},
{60 ,3690},
{62 ,3687},
{64 ,3682},
{66 ,3675},
{68 ,3669},
{70 ,3665},
{72 ,3659},
{74 ,3648},
{76 ,3639},
{78 ,3631},
{80 ,3621},
{82 ,3603},
{84 ,3589},
{86 ,3578},
{88 ,3561},
{90 ,3538},
{92 ,3518},
{94 ,3500},
{96 ,3469},
{97 ,3444},
{99 ,3412},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400},
{100,3400} 
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
{0   ,4190},
{2   ,4113},
{3   ,4094},
{5   ,4076},
{7   ,4059},
{8   ,4044},
{10  ,4029},
{12  ,4014},
{13  ,3997},
{15  ,3982},
{17  ,3964},
{18  ,3945},
{20  ,3931},
{22  ,3921},
{23  ,3911},
{25  ,3902},
{27  ,3890},
{28  ,3879},
{30  ,3867},
{32  ,3857},
{33  ,3847},
{35  ,3837},
{37  ,3828},
{39  ,3819},
{40  ,3810},
{42  ,3802},
{44  ,3794},
{45  ,3787},
{47  ,3779},
{49  ,3773},
{50  ,3767},
{52  ,3761},
{54  ,3756},
{55  ,3751},
{57  ,3746},
{59  ,3741},
{60  ,3737},
{62  ,3734},
{64  ,3730},
{65  ,3728},
{67  ,3725},
{69  ,3722},
{70  ,3719},
{72  ,3716},
{74  ,3713},
{75  ,3709},
{77  ,3704},
{79  ,3699},
{80  ,3692},
{82  ,3685},
{84  ,3676},
{85  ,3666},
{87  ,3655},
{89  ,3643},
{90  ,3634},
{92  ,3626},
{94  ,3615},
{95  ,3600},
{97  ,3569},
{99  ,3495},
{100 ,3400},
{100 ,3400},
{100 ,3400} 
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
{0   ,4190},
{2   ,4144},
{3   ,4125},
{5   ,4108},
{7   ,4092},
{8   ,4076},
{10  ,4060},
{11  ,4045},
{13  ,4030},
{15  ,4015},
{16  ,4001},
{18  ,3987},
{20  ,3974},
{21  ,3960},
{23  ,3947},
{24  ,3934},
{26  ,3922},
{28  ,3910},
{29  ,3898},
{31  ,3887},
{33  ,3876},
{34  ,3865},
{36  ,3855},
{37  ,3845},
{39  ,3836},
{41  ,3826},
{42  ,3817},
{44  ,3809},
{46  ,3801},
{47  ,3792},
{49  ,3785},
{50  ,3778},
{52  ,3772},
{54  ,3766},
{55  ,3761},
{57  ,3755},
{59  ,3750},
{60  ,3746},
{62  ,3741},
{63  ,3737},
{65  ,3733},
{67  ,3730},
{68  ,3726},
{70  ,3723},
{72  ,3719},
{73  ,3713},
{75  ,3706},
{76  ,3700},
{78  ,3695},
{80  ,3689},
{81  ,3682},
{83  ,3676},
{85  ,3668},
{86  ,3659},
{88  ,3649},
{89  ,3641},
{91  ,3636},
{93  ,3630},
{94  ,3624},
{96  ,3609},
{98  ,3560},
{99  ,3473},
{100 ,3400}
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
 {0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0}
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
{931,4182},
{931,3975},
{927,3947},
{925,3924},
{924,3904},
{919,3882},
{917,3862},
{919,3844},
{918,3827},
{920,3811},
{922,3795},
{925,3781},
{925,3769},
{926,3757},
{928,3744},
{925,3734},
{925,3720},
{924,3711},
{925,3700},
{923,3690},
{923,3680},
{923,3669},
{926,3659},
{925,3650},
{924,3641},
{924,3632},
{928,3624},
{927,3615},
{930,3607},
{929,3599},
{933,3591},
{933,3581},
{938,3572},
{940,3561},
{945,3550},
{948,3540},
{954,3525},
{957,3510},
{963,3495},
{968,3479},
{971,3463},
{977,3446},
{982,3427},
{988,3407},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400},
{992,3400} 
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
{591,4185},
{591,4039},
{571,4016},
{563,3996},
{561,3976},
{565,3956},
{563,3934},
{568,3913},
{562,3899},
{560,3885},
{566,3871},
{574,3856},
{580,3844},
{575,3834},
{575,3825},
{578,3815},
{594,3804},
{591,3795},
{591,3786},
{595,3777},
{599,3768},
{591,3761},
{594,3753},
{602,3745},
{608,3737},
{613,3729},
{613,3722},
{628,3714},
{616,3709},
{610,3705},
{626,3698},
{643,3690},
{631,3687},
{634,3682},
{654,3675},
{660,3669},
{662,3665},
{671,3659},
{690,3648},
{702,3639},
{706,3631},
{714,3621},
{734,3603},
{742,3589},
{744,3578},
{752,3561},
{767,3538},
{774,3518},
{776,3500},
{790,3469},
{798,3444},
{811,3412},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400},
{827,3400} 
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
{157 ,4190},
{157 ,4113},
{159 ,4094},
{159 ,4076},
{159 ,4059},
{160 ,4044},
{159 ,4029},
{159 ,4014},
{158 ,3997},
{158 ,3982},
{159 ,3964},
{161 ,3945},
{163 ,3931},
{163 ,3921},
{164 ,3911},
{162 ,3902},
{162 ,3890},
{164 ,3879},
{164 ,3867},
{164 ,3857},
{164 ,3847},
{164 ,3837},
{165 ,3828},
{166 ,3819},
{167 ,3810},
{167 ,3802},
{169 ,3794},
{171 ,3787},
{169 ,3779},
{170 ,3773},
{170 ,3767},
{171 ,3761},
{173 ,3756},
{174 ,3751},
{176 ,3746},
{178 ,3741},
{177 ,3737},
{178 ,3734},
{179 ,3730},
{181 ,3728},
{184 ,3725},
{185 ,3722},
{185 ,3719},
{188 ,3716},
{191 ,3713},
{195 ,3709},
{199 ,3704},
{200 ,3699},
{204 ,3692},
{208 ,3685},
{213 ,3676},
{218 ,3666},
{228 ,3655},
{237 ,3643},
{249 ,3634},
{264 ,3626},
{281 ,3615},
{308 ,3600},
{343 ,3569},
{391 ,3495},
{474 ,3400},
{474 ,3400},
{474 ,3400} 
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
{78 ,4190},
{78 ,4144},
{78 ,4125},
{79 ,4108},
{79 ,4092},
{79 ,4076},
{79 ,4060},
{81 ,4045},
{80 ,4030},
{81 ,4015},
{80 ,4001},
{80 ,3987},
{81 ,3974},
{81 ,3960},
{81 ,3947},
{81 ,3934},
{82 ,3922},
{81 ,3910},
{81 ,3898},
{81 ,3887},
{81 ,3876},
{81 ,3865},
{80 ,3855},
{82 ,3845},
{81 ,3836},
{81 ,3826},
{81 ,3817},
{82 ,3809},
{82 ,3801},
{82 ,3792},
{82 ,3785},
{81 ,3778},
{82 ,3772},
{84 ,3766},
{83 ,3761},
{84 ,3755},
{85 ,3750},
{84 ,3746},
{85 ,3741},
{85 ,3737},
{85 ,3733},
{85 ,3730},
{86 ,3726},
{87 ,3723},
{87 ,3719},
{87 ,3713},
{87 ,3706},
{87 ,3700},
{88 ,3695},
{89 ,3689},
{89 ,3682},
{89 ,3676},
{89 ,3668},
{90 ,3659},
{90 ,3649},
{91 ,3641},
{91 ,3636},
{92 ,3630},
{94 ,3624},
{94 ,3609},
{94 ,3560},
{97 ,3473},
{101,3400}
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
 {0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0}
};    

typedef struct{	
	unsigned int BattVolt;
	unsigned int BattPercent;
}VBAT_TO_PERCENT;

/* Battery Voltage and Percentage Mapping Table */
VBAT_TO_PERCENT Batt_VoltToPercent_Table[] = {
	/*BattVolt,BattPercent*/
#if 0
	{3440,0},
	{3640,10},
	{3672,20},
	{3704,30},
	{3736,40},
	{3768,50},
	{3800,60},
	{3865,70},
	{3934,80},
	{4000,90},
	{4110,100},
#else
   {3400,0},
	{3631,20},
	{3685,30},
	{3714,40},
	{3731,45},
	{3757,50},
	{3800,60},
	{3857,70},
	{3929,80},
	{4007,90},
	{4160,100},
#endif
};    
VBAT_TO_PERCENT Charged_Batt_VoltToPercent_Table[] = {
#if 0
	{3400,0},
	{3850,10},
	{3901,20},
	{3922,30},
	{3932,40},
	{3966,50},
	{4010,60},
	{4055,70},
	{4100,80},
	{4145,90},
	{4190,100},
#else
        {3400,0},
	{3631,20},
	{3685,30},
	{3714,40},
	{3731,45},
	{3757,50},
	{3800,60},
	{3857,70},
	{3929,80},
	{4100,90},
	{4190,100},
#endif

};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

