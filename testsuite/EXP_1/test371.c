#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x45 = 80U;
volatile uint8_t x47 = 4U;
uint64_t x289 = UINT64_MAX;
int16_t x290 = INT16_MIN;
volatile uint64_t t1 = 18641LLU;
uint16_t x368 = 0U;
volatile uint16_t x601 = 73U;
int8_t x604 = 0;
volatile uint32_t t5 = 4392U;
int32_t x675 = -1;
uint8_t x676 = 0U;
uint64_t x726 = 117446417755LLU;
uint64_t x728 = 1LLU;
volatile int16_t x807 = INT16_MIN;
int16_t x808 = 3;
uint64_t t9 = 403364489LLU;
uint64_t x914 = 9416509334LLU;
uint64_t x949 = UINT64_MAX;
int32_t x951 = INT32_MIN;
uint8_t x952 = 14U;
uint16_t x1073 = 0U;
uint64_t t14 = 283388459LLU;
volatile uint32_t t15 = 1211U;
uint32_t x1255 = 9U;
int8_t x1281 = INT8_MIN;
int64_t x1283 = -1LL;
static uint32_t x1293 = 20462U;
int8_t x1296 = 5;
static uint8_t x1308 = 3U;
volatile int32_t x1755 = INT32_MIN;
uint32_t x1756 = 10U;
int32_t x1766 = 257629;
uint64_t x1767 = 64340LLU;
static volatile int64_t x1768 = 3LL;
volatile int16_t x2023 = -1;
uint64_t x2032 = 11LLU;
volatile int64_t x2066 = INT64_MIN;
int64_t x2067 = -125LL;
static int64_t x2094 = -444717LL;
static uint64_t x2130 = 1823229915121679LLU;
volatile uint64_t t33 = 6117LLU;
uint32_t x2573 = 1421156U;
static uint16_t x2623 = UINT16_MAX;
int8_t x2654 = INT8_MIN;
int64_t t36 = -32LL;
int8_t x2789 = 0;
int64_t x2791 = INT64_MAX;
static int16_t x2792 = 1;
static volatile int64_t t37 = 19404329084961708LL;
volatile int32_t x2921 = -6;
volatile uint16_t x3037 = 27186U;
int16_t x3121 = INT16_MAX;
int8_t x3124 = 0;
uint8_t x3292 = 14U;
volatile int8_t x3319 = -1;
int16_t x3394 = 938;
uint32_t x3395 = 111U;
volatile uint8_t x3831 = 15U;
uint64_t x3978 = 30735229924157404LLU;
uint16_t x3980 = 22U;
volatile int32_t t56 = 447;
uint32_t x4337 = UINT32_MAX;
uint16_t x4338 = 127U;
int16_t x4349 = -1;
volatile uint8_t x4352 = 11U;
volatile uint64_t x4511 = UINT64_MAX;
uint16_t x4522 = UINT16_MAX;
int64_t x4885 = 71LL;
uint32_t x5001 = 0U;
static uint32_t x5065 = 388350U;
volatile uint32_t t70 = 3U;
int32_t x5094 = INT32_MAX;
int8_t x5104 = 5;
volatile int64_t x5367 = 13LL;
uint8_t x5532 = 4U;
uint64_t t75 = 19430636026047LLU;
int8_t x5659 = INT8_MAX;
uint64_t t76 = 2277080775916663892LLU;
uint8_t x5677 = 10U;
uint8_t x5680 = 1U;
uint8_t x5760 = 5U;
uint64_t x5798 = UINT64_MAX;
static volatile uint64_t t80 = 50242182653105LLU;
volatile int64_t x5857 = INT64_MAX;
uint8_t x5952 = 13U;
int8_t x5996 = 1;
static uint8_t x6042 = 0U;
volatile int32_t t86 = 1725630;
uint64_t x6140 = 0LLU;
volatile uint64_t t88 = 43479080986477LLU;
uint64_t x6245 = 4871285606142804580LLU;
uint16_t x6246 = UINT16_MAX;
volatile uint64_t t90 = 63209423576LLU;
static uint32_t x6297 = 24U;
int8_t x6306 = 0;
int64_t x6307 = -249LL;
uint32_t x6369 = 29113U;
volatile uint16_t x6371 = 650U;
uint32_t t93 = 14788613U;
static volatile uint32_t x6665 = 12499792U;
int16_t x7082 = INT16_MIN;
int16_t x7238 = INT16_MAX;
int8_t x7239 = -1;
volatile int32_t t98 = 20;
static uint8_t x7324 = 0U;


void f0(void) {
	uint8_t x46 = 1U;
	volatile uint64_t x48 = 30LLU;
	static int32_t t0 = 31877340;

	t0 = (((x45*x46)*x47)>>x48);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x291 = -1LL;
	static volatile int16_t x292 = 0;

	t1 = (((x289*x290)*x291)>>x292);

	if (t1 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x305 = 18316U;
	int8_t x306 = -1;
	int32_t x307 = 13704318;
	uint8_t x308 = 2U;
	uint32_t t2 = 8375U;

	t2 = (((x305*x306)*x307)>>x308);

	if (t2 != 598695494U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x321 = 0U;
	int8_t x322 = 1;
	static uint8_t x323 = UINT8_MAX;
	static uint8_t x324 = 28U;
	int32_t t3 = -4;

	t3 = (((x321*x322)*x323)>>x324);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x365 = 1LL;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = -24382;
	volatile uint64_t t4 = 2362574133925LLU;

	t4 = (((x365*x366)*x367)>>x368);

	if (t4 != 24382LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x602 = 21U;
	volatile uint32_t x603 = UINT32_MAX;

	t5 = (((x601*x602)*x603)>>x604);

	if (t5 != 4294965763U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x673 = -1;
	static volatile uint16_t x674 = 6426U;
	static volatile int32_t t6 = -12;

	t6 = (((x673*x674)*x675)>>x676);

	if (t6 != 6426) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x725 = INT32_MIN;
	int8_t x727 = -3;
	static uint64_t t7 = 14811905359660562LLU;

	t7 = (((x725*x726)*x727)>>x728);

	if (t7 != 163138956513247232LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x805 = 1021095688LLU;
	int8_t x806 = INT8_MIN;
	uint64_t t8 = 51604761106LLU;

	t8 = (((x805*x806)*x807)>>x808);

	if (t8 != 535348216070144LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x885 = INT16_MIN;
	static volatile uint64_t x886 = 3046287017136LLU;
	static int16_t x887 = -50;
	uint16_t x888 = 19U;

	t9 = (((x885*x886)*x887)>>x888);

	if (t9 != 9519646928550LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x889 = INT16_MIN;
	int8_t x890 = -1;
	static uint32_t x891 = 1924750U;
	int8_t x892 = 0;
	static uint32_t t10 = 711U;

	t10 = (((x889*x890)*x891)>>x892);

	if (t10 != 2940665856U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x913 = 1U;
	int8_t x915 = INT8_MAX;
	uint16_t x916 = 0U;
	static volatile uint64_t t11 = 33927LLU;

	t11 = (((x913*x914)*x915)>>x916);

	if (t11 != 1195896685418LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x950 = INT64_MIN;
	volatile uint64_t t12 = 130390133LLU;

	t12 = (((x949*x950)*x951)>>x952);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x1074 = INT16_MAX;
	int64_t x1075 = INT64_MAX;
	int16_t x1076 = 17;
	volatile int64_t t13 = -15LL;

	t13 = (((x1073*x1074)*x1075)>>x1076);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1157 = 26;
	int16_t x1158 = INT16_MIN;
	uint64_t x1159 = 762946LLU;
	volatile uint16_t x1160 = 59U;

	t14 = (((x1157*x1158)*x1159)>>x1160);

	if (t14 != 31LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x1241 = 1447;
	uint32_t x1242 = 1811U;
	int8_t x1243 = INT8_MAX;
	uint8_t x1244 = 0U;

	t15 = (((x1241*x1242)*x1243)>>x1244);

	if (t15 != 332805659U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1253 = 22U;
	int16_t x1254 = 0;
	uint8_t x1256 = 6U;
	volatile uint32_t t16 = 31371U;

	t16 = (((x1253*x1254)*x1255)>>x1256);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x1282 = 70U;
	int32_t x1284 = 0;
	volatile int64_t t17 = 4985889869785750LL;

	t17 = (((x1281*x1282)*x1283)>>x1284);

	if (t17 != 8960LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1294 = 1390099643952800LLU;
	static uint32_t x1295 = UINT32_MAX;
	uint64_t t18 = 79276836908549LLU;

	t18 = (((x1293*x1294)*x1295)>>x1296);

	if (t18 != 326924882457695802LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1305 = 11359794LLU;
	int8_t x1306 = INT8_MAX;
	uint64_t x1307 = 14176565575LLU;
	uint64_t t19 = 311089077371LLU;

	t19 = (((x1305*x1306)*x1307)>>x1308);

	if (t19 != 250712465668234404LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x1313 = -1;
	uint32_t x1314 = UINT32_MAX;
	int16_t x1315 = INT16_MIN;
	static uint32_t x1316 = 10U;
	uint32_t t20 = 53U;

	t20 = (((x1313*x1314)*x1315)>>x1316);

	if (t20 != 4194272U) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1521 = -1;
	uint32_t x1522 = 62435346U;
	uint8_t x1523 = UINT8_MAX;
	uint32_t x1524 = 5U;
	uint32_t t21 = 44032U;

	t21 = (((x1521*x1522)*x1523)>>x1524);

	if (t21 != 39339248U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x1561 = UINT64_MAX;
	uint32_t x1562 = 119278U;
	uint8_t x1563 = UINT8_MAX;
	uint32_t x1564 = 1U;
	static volatile uint64_t t22 = 6738946152465617LLU;

	t22 = (((x1561*x1562)*x1563)>>x1564);

	if (t22 != 9223372036839567863LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x1753 = 214646117;
	uint64_t x1754 = UINT64_MAX;
	volatile uint64_t t23 = 7049292178400381699LLU;

	t23 = (((x1753*x1754)*x1755)>>x1756);

	if (t23 != 450145533558784LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1765 = -4085;
	volatile uint64_t t24 = 1LLU;

	t24 = (((x1765*x1766)*x1767)>>x1768);

	if (t24 != 2305834545170359189LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1853 = -1;
	uint32_t x1854 = UINT32_MAX;
	int8_t x1855 = 21;
	static uint8_t x1856 = 24U;
	uint32_t t25 = 501836U;

	t25 = (((x1853*x1854)*x1855)>>x1856);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x2013 = UINT16_MAX;
	uint64_t x2014 = 73235886LLU;
	int32_t x2015 = INT32_MIN;
	uint16_t x2016 = 0U;
	volatile uint64_t t26 = 12932128133LLU;

	t26 = (((x2013*x2014)*x2015)>>x2016);

	if (t26 != 4852556954142244864LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2021 = -1;
	int16_t x2022 = INT16_MAX;
	uint64_t x2024 = 0LLU;
	static int32_t t27 = -120619;

	t27 = (((x2021*x2022)*x2023)>>x2024);

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2029 = -1LL;
	volatile uint64_t x2030 = 462661341780458013LLU;
	volatile int32_t x2031 = 68;
	volatile uint64_t t28 = 16645828LLU;

	t28 = (((x2029*x2030)*x2031)>>x2032);

	if (t28 != 2652596145677714LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x2065 = 497312LLU;
	uint64_t x2068 = 0LLU;
	volatile uint64_t t29 = 2513704037099435716LLU;

	t29 = (((x2065*x2066)*x2067)>>x2068);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x2093 = 7U;
	int32_t x2095 = -1;
	uint32_t x2096 = 42U;
	volatile int64_t t30 = 11310289923LL;

	t30 = (((x2093*x2094)*x2095)>>x2096);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x2129 = UINT8_MAX;
	int8_t x2131 = INT8_MAX;
	volatile uint32_t x2132 = 14U;
	uint64_t t31 = 90LLU;

	t31 = (((x2129*x2130)*x2131)>>x2132);

	if (t31 != 226139439702570LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x2137 = INT16_MIN;
	int8_t x2138 = INT8_MIN;
	uint32_t x2139 = 518U;
	uint8_t x2140 = 2U;
	volatile uint32_t t32 = 0U;

	t32 = (((x2137*x2138)*x2139)>>x2140);

	if (t32 != 543162368U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x2245 = UINT64_MAX;
	uint32_t x2246 = 9014U;
	uint64_t x2247 = 44400557504505LLU;
	static int16_t x2248 = 3;

	t33 = (((x2245*x2246)*x2247)>>x2248);

	if (t33 != 2255814681045492943LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2574 = -1LL;
	static int8_t x2575 = INT8_MIN;
	int8_t x2576 = 0;
	int64_t t34 = 14178337LL;

	t34 = (((x2573*x2574)*x2575)>>x2576);

	if (t34 != 181907968LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2621 = 113U;
	uint64_t x2622 = 8579LLU;
	int32_t x2624 = 1;
	static volatile uint64_t t35 = 640537987582LLU;

	t35 = (((x2621*x2622)*x2623)>>x2624);

	if (t35 != 31765699222LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x2653 = UINT16_MAX;
	int64_t x2655 = -1LL;
	uint8_t x2656 = 0U;

	t36 = (((x2653*x2654)*x2655)>>x2656);

	if (t36 != 8388480LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x2790 = 1;

	t37 = (((x2789*x2790)*x2791)>>x2792);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x2829 = INT8_MAX;
	uint8_t x2830 = 120U;
	volatile uint8_t x2831 = 54U;
	uint16_t x2832 = 3U;
	int32_t t38 = 771661642;

	t38 = (((x2829*x2830)*x2831)>>x2832);

	if (t38 != 102870) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x2922 = 218983054U;
	volatile int8_t x2923 = -1;
	uint64_t x2924 = 3LLU;
	uint32_t t39 = 16987U;

	t39 = (((x2921*x2922)*x2923)>>x2924);

	if (t39 != 164237290U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x3038 = 79U;
	uint32_t x3039 = 3U;
	static int8_t x3040 = 30;
	uint32_t t40 = 92514548U;

	t40 = (((x3037*x3038)*x3039)>>x3040);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x3053 = UINT32_MAX;
	volatile uint8_t x3054 = 0U;
	static int8_t x3055 = INT8_MAX;
	static int16_t x3056 = 3;
	uint32_t t41 = 64688028U;

	t41 = (((x3053*x3054)*x3055)>>x3056);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x3122 = -1LL;
	volatile int16_t x3123 = INT16_MIN;
	volatile int64_t t42 = -20LL;

	t42 = (((x3121*x3122)*x3123)>>x3124);

	if (t42 != 1073709056LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x3289 = INT8_MIN;
	uint64_t x3290 = 541LLU;
	int16_t x3291 = 23;
	uint64_t t43 = 1547LLU;

	t43 = (((x3289*x3290)*x3291)>>x3292);

	if (t43 != 1125899906842526LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x3301 = 10U;
	int32_t x3302 = -20149795;
	int32_t x3303 = -1;
	uint16_t x3304 = 2U;
	volatile uint32_t t44 = 915324643U;

	t44 = (((x3301*x3302)*x3303)>>x3304);

	if (t44 != 50374487U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x3317 = 0;
	uint8_t x3318 = UINT8_MAX;
	int8_t x3320 = 28;
	volatile int32_t t45 = 224394886;

	t45 = (((x3317*x3318)*x3319)>>x3320);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x3365 = 12U;
	static uint32_t x3366 = 77933451U;
	int32_t x3367 = INT32_MIN;
	int64_t x3368 = 0LL;
	static volatile uint32_t t46 = 817601014U;

	t46 = (((x3365*x3366)*x3367)>>x3368);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x3393 = 9114U;
	int64_t x3396 = 2LL;
	uint32_t t47 = 1094U;

	t47 = (((x3393*x3394)*x3395)>>x3396);

	if (t47 != 237232863U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x3457 = 1;
	uint16_t x3458 = 0U;
	uint16_t x3459 = 63U;
	uint16_t x3460 = 25U;
	int32_t t48 = -106;

	t48 = (((x3457*x3458)*x3459)>>x3460);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3801 = UINT16_MAX;
	int8_t x3802 = -1;
	int8_t x3803 = INT8_MIN;
	int8_t x3804 = 0;
	int32_t t49 = 1;

	t49 = (((x3801*x3802)*x3803)>>x3804);

	if (t49 != 8388480) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x3829 = INT32_MIN;
	uint64_t x3830 = 3LLU;
	int8_t x3832 = 1;
	volatile uint64_t t50 = 170414521348LLU;

	t50 = (((x3829*x3830)*x3831)>>x3832);

	if (t50 != 9223371988536393728LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x3901 = UINT16_MAX;
	static volatile uint64_t x3902 = 16132567864100LLU;
	int16_t x3903 = INT16_MIN;
	volatile uint32_t x3904 = 0U;
	uint64_t t51 = 228199LLU;

	t51 = (((x3901*x3902)*x3903)>>x3904);

	if (t51 != 17535058078982078464LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x3957 = 0U;
	int64_t x3958 = 157503393283256335LL;
	volatile int64_t x3959 = INT64_MAX;
	int16_t x3960 = 1;
	int64_t t52 = 58431LL;

	t52 = (((x3957*x3958)*x3959)>>x3960);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x3977 = 84U;
	uint32_t x3979 = 320U;
	uint64_t t53 = 12192LLU;

	t53 = (((x3977*x3978)*x3979)>>x3980);

	if (t53 != 3458557395489LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x4041 = -1;
	uint64_t x4042 = 1370440439LLU;
	uint64_t x4043 = UINT64_MAX;
	int32_t x4044 = 25;
	uint64_t t54 = 0LLU;

	t54 = (((x4041*x4042)*x4043)>>x4044);

	if (t54 != 40LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x4089 = 118U;
	int16_t x4090 = 205;
	uint16_t x4091 = 3U;
	static volatile uint32_t x4092 = 0U;
	uint32_t t55 = 834U;

	t55 = (((x4089*x4090)*x4091)>>x4092);

	if (t55 != 72570U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x4205 = -152;
	int16_t x4206 = -1;
	uint16_t x4207 = 0U;
	static int8_t x4208 = 0;

	t56 = (((x4205*x4206)*x4207)>>x4208);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x4229 = UINT64_MAX;
	static uint16_t x4230 = UINT16_MAX;
	volatile uint8_t x4231 = UINT8_MAX;
	uint16_t x4232 = 38U;
	uint64_t t57 = 946LLU;

	t57 = (((x4229*x4230)*x4231)>>x4232);

	if (t57 != 67108863LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x4241 = 138U;
	static int64_t x4242 = -1LL;
	uint64_t x4243 = UINT64_MAX;
	static volatile uint8_t x4244 = 7U;
	volatile uint64_t t58 = 543576985991LLU;

	t58 = (((x4241*x4242)*x4243)>>x4244);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x4339 = UINT64_MAX;
	int16_t x4340 = 28;
	uint64_t t59 = 15715829395290602LLU;

	t59 = (((x4337*x4338)*x4339)>>x4340);

	if (t59 != 68719476720LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x4350 = 5592822U;
	static uint64_t x4351 = 386490827270LLU;
	static uint64_t t60 = 1217015814134582572LLU;

	t60 = (((x4349*x4350)*x4351)>>x4352);

	if (t60 != 7833821468228033LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x4361 = INT16_MAX;
	int64_t x4362 = -1LL;
	int16_t x4363 = -1;
	uint8_t x4364 = 56U;
	int64_t t61 = -4451222183862721LL;

	t61 = (((x4361*x4362)*x4363)>>x4364);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x4509 = -1LL;
	int8_t x4510 = INT8_MIN;
	static uint32_t x4512 = 3U;
	volatile uint64_t t62 = 629409LLU;

	t62 = (((x4509*x4510)*x4511)>>x4512);

	if (t62 != 2305843009213693936LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x4521 = 238964516U;
	int64_t x4523 = 3486LL;
	static uint8_t x4524 = 28U;
	volatile int64_t t63 = 121LL;

	t63 = (((x4521*x4522)*x4523)>>x4524);

	if (t63 != 14139LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x4793 = 0;
	int8_t x4794 = INT8_MAX;
	static int32_t x4795 = -1;
	uint8_t x4796 = 2U;
	volatile int32_t t64 = 0;

	t64 = (((x4793*x4794)*x4795)>>x4796);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x4849 = INT16_MIN;
	int32_t x4850 = 1;
	uint64_t x4851 = UINT64_MAX;
	volatile uint8_t x4852 = 1U;
	volatile uint64_t t65 = 13485310LLU;

	t65 = (((x4849*x4850)*x4851)>>x4852);

	if (t65 != 16384LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x4886 = 0;
	uint32_t x4887 = 2U;
	uint8_t x4888 = 28U;
	volatile int64_t t66 = 398LL;

	t66 = (((x4885*x4886)*x4887)>>x4888);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x4985 = 323;
	volatile int8_t x4986 = 45;
	int8_t x4987 = 2;
	uint16_t x4988 = 0U;
	volatile int32_t t67 = 1043;

	t67 = (((x4985*x4986)*x4987)>>x4988);

	if (t67 != 29070) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x5002 = -1;
	int64_t x5003 = INT64_MAX;
	static uint16_t x5004 = 27U;
	static volatile int64_t t68 = -1922891189LL;

	t68 = (((x5001*x5002)*x5003)>>x5004);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x5053 = 2833;
	uint32_t x5054 = UINT32_MAX;
	static int16_t x5055 = INT16_MAX;
	volatile uint8_t x5056 = 2U;
	uint32_t t69 = 11566U;

	t69 = (((x5053*x5054)*x5055)>>x5056);

	if (t69 != 1050534596U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x5066 = INT32_MAX;
	int32_t x5067 = INT32_MIN;
	uint16_t x5068 = 4U;

	t70 = (((x5065*x5066)*x5067)>>x5068);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x5093 = 2U;
	int16_t x5095 = 1;
	int8_t x5096 = 1;
	uint32_t t71 = 366U;

	t71 = (((x5093*x5094)*x5095)>>x5096);

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x5101 = INT32_MIN;
	int16_t x5102 = 1;
	uint32_t x5103 = 808U;
	volatile uint32_t t72 = 293400U;

	t72 = (((x5101*x5102)*x5103)>>x5104);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x5301 = UINT64_MAX;
	static int8_t x5302 = INT8_MAX;
	volatile int16_t x5303 = INT16_MIN;
	static int16_t x5304 = 0;
	uint64_t t73 = 2522932646LLU;

	t73 = (((x5301*x5302)*x5303)>>x5304);

	if (t73 != 4161536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x5365 = INT8_MIN;
	int8_t x5366 = -3;
	uint8_t x5368 = 29U;
	static int64_t t74 = -17676LL;

	t74 = (((x5365*x5366)*x5367)>>x5368);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x5529 = INT8_MAX;
	uint16_t x5530 = 1U;
	volatile uint64_t x5531 = UINT64_MAX;

	t75 = (((x5529*x5530)*x5531)>>x5532);

	if (t75 != 1152921504606846968LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x5657 = 3;
	uint64_t x5658 = 20243194581LLU;
	uint8_t x5660 = 4U;

	t76 = (((x5657*x5658)*x5659)>>x5660);

	if (t76 != 482041070960LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x5678 = 1;
	int8_t x5679 = 2;
	int32_t t77 = -1004191;

	t77 = (((x5677*x5678)*x5679)>>x5680);

	if (t77 != 10) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x5757 = INT8_MAX;
	int16_t x5758 = INT16_MIN;
	uint64_t x5759 = 3LLU;
	uint64_t t78 = 31747559LLU;

	t78 = (((x5757*x5758)*x5759)>>x5760);

	if (t78 != 576460752303033344LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x5781 = 120926808104LLU;
	int64_t x5782 = 773320384604LL;
	int8_t x5783 = INT8_MIN;
	uint32_t x5784 = 39U;
	volatile uint64_t t79 = 17522241868443LLU;

	t79 = (((x5781*x5782)*x5783)>>x5784);

	if (t79 != 6255926LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x5797 = -12;
	int32_t x5799 = INT32_MIN;
	int8_t x5800 = 27;

	t80 = (((x5797*x5798)*x5799)>>x5800);

	if (t80 != 137438953280LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x5813 = UINT64_MAX;
	uint32_t x5814 = UINT32_MAX;
	int8_t x5815 = INT8_MIN;
	static uint32_t x5816 = 3U;
	uint64_t t81 = 8111218551644LLU;

	t81 = (((x5813*x5814)*x5815)>>x5816);

	if (t81 != 68719476720LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x5858 = 55462523917253LLU;
	uint32_t x5859 = 6638U;
	uint8_t x5860 = 0U;
	volatile uint64_t t82 = 8878942LLU;

	t82 = (((x5857*x5858)*x5859)>>x5860);

	if (t82 != 18078583839946826202LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5949 = UINT16_MAX;
	int16_t x5950 = -1;
	static uint64_t x5951 = 957463286LLU;
	uint64_t t83 = 27311790663197804LLU;

	t83 = (((x5949*x5950)*x5951)>>x5952);

	if (t83 != 2251792154095837LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x5985 = UINT16_MAX;
	int16_t x5986 = -1;
	static int16_t x5987 = INT16_MIN;
	uint8_t x5988 = 0U;
	int32_t t84 = 94;

	t84 = (((x5985*x5986)*x5987)>>x5988);

	if (t84 != 2147450880) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x5993 = -1;
	uint32_t x5994 = 41827U;
	int8_t x5995 = INT8_MIN;
	uint32_t t85 = 0U;

	t85 = (((x5993*x5994)*x5995)>>x5996);

	if (t85 != 2676928U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x6041 = -7552366;
	volatile int8_t x6043 = INT8_MIN;
	static int8_t x6044 = 0;

	t86 = (((x6041*x6042)*x6043)>>x6044);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x6137 = INT16_MIN;
	uint32_t x6138 = 1201497439U;
	static int8_t x6139 = INT8_MIN;
	volatile uint32_t t87 = 16846323U;

	t87 = (((x6137*x6138)*x6139)>>x6140);

	if (t87 != 1472200704U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x6197 = 326709694851000LLU;
	volatile int32_t x6198 = INT32_MIN;
	static int8_t x6199 = -1;
	uint16_t x6200 = 8U;

	t88 = (((x6197*x6198)*x6199)>>x6200);

	if (t88 != 1028266106290176LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x6247 = INT32_MIN;
	uint8_t x6248 = 3U;
	volatile uint64_t t89 = 8342260LLU;

	t89 = (((x6245*x6246)*x6247)>>x6248);

	if (t89 != 1833976763319844864LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x6249 = UINT64_MAX;
	int8_t x6250 = INT8_MIN;
	int64_t x6251 = INT64_MAX;
	uint64_t x6252 = 11LLU;

	t90 = (((x6249*x6250)*x6251)>>x6252);

	if (t90 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x6298 = 230;
	uint8_t x6299 = 3U;
	static int8_t x6300 = 0;
	volatile uint32_t t91 = 93147656U;

	t91 = (((x6297*x6298)*x6299)>>x6300);

	if (t91 != 16560U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x6305 = INT8_MIN;
	uint8_t x6308 = 0U;
	int64_t t92 = -2LL;

	t92 = (((x6305*x6306)*x6307)>>x6308);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x6370 = -1;
	volatile int32_t x6372 = 0;

	t93 = (((x6369*x6370)*x6371)>>x6372);

	if (t93 != 4276043846U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x6666 = UINT8_MAX;
	static int32_t x6667 = INT32_MIN;
	int32_t x6668 = 18;
	uint32_t t94 = 1045742501U;

	t94 = (((x6665*x6666)*x6667)>>x6668);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x6721 = -1;
	volatile int16_t x6722 = -26;
	static volatile uint8_t x6723 = UINT8_MAX;
	uint8_t x6724 = 17U;
	volatile int32_t t95 = 463;

	t95 = (((x6721*x6722)*x6723)>>x6724);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x6801 = 10225370468097905LL;
	uint64_t x6802 = 245960LLU;
	static int32_t x6803 = INT32_MIN;
	static uint8_t x6804 = 10U;
	uint64_t t96 = 139374273041988928LLU;

	t96 = (((x6801*x6802)*x6803)>>x6804);

	if (t96 != 5648697887031296LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x7081 = INT8_MAX;
	static volatile int8_t x7083 = INT8_MIN;
	volatile int8_t x7084 = 0;
	volatile int32_t t97 = 12594;

	t97 = (((x7081*x7082)*x7083)>>x7084);

	if (t97 != 532676608) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x7237 = INT8_MIN;
	int8_t x7240 = 12;

	t98 = (((x7237*x7238)*x7239)>>x7240);

	if (t98 != 1023) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x7321 = -1;
	uint64_t x7322 = 96LLU;
	volatile uint8_t x7323 = UINT8_MAX;
	static uint64_t t99 = 199LLU;

	t99 = (((x7321*x7322)*x7323)>>x7324);

	if (t99 != 18446744073709527136LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

