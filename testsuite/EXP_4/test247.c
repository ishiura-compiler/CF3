#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x345 = INT8_MAX;
int32_t x346 = INT32_MAX;
volatile int32_t t4 = -7;
uint32_t t5 = 1352023187U;
uint32_t x1007 = 1U;
int8_t x1008 = 1;
volatile int32_t x1017 = INT32_MIN;
volatile uint64_t t13 = 160LLU;
static volatile uint32_t x1318 = 969U;
volatile uint32_t x1373 = 420144694U;
uint64_t x1374 = 486691337533LLU;
int32_t t16 = -294969082;
int8_t x1485 = -1;
volatile int16_t x1587 = -1;
uint64_t x1844 = 1LLU;
int32_t t20 = -19;
uint16_t x2021 = 121U;
int64_t t22 = -1264LL;
volatile uint64_t t23 = 14306277966824076LLU;
static volatile uint16_t x2293 = 16U;
int16_t x2295 = -1;
volatile int16_t x2343 = -1;
volatile int32_t x2661 = INT32_MIN;
uint8_t x2841 = 2U;
uint8_t x2843 = 4U;
volatile int8_t x2928 = -1;
int64_t x2943 = -1LL;
int32_t t30 = -26110;
int16_t x3029 = INT16_MIN;
int16_t x3031 = INT16_MIN;
int16_t x3032 = INT16_MIN;
int8_t x3168 = -6;
int32_t t33 = 2;
uint16_t x3418 = UINT16_MAX;
static uint16_t x3419 = 11U;
volatile int32_t t34 = 23535677;
uint8_t x3575 = 61U;
volatile uint64_t x3576 = UINT64_MAX;
uint32_t x3677 = 5U;
uint64_t x3789 = 18047275510589LLU;
static volatile uint32_t x3790 = UINT32_MAX;
volatile uint64_t t38 = 4613735362835707LLU;
int16_t x4011 = 0;
static int32_t x4012 = -1;
uint32_t t39 = 0U;
uint8_t x4094 = 40U;
static volatile int8_t x4096 = -1;
uint16_t x4166 = UINT16_MAX;
int64_t x4217 = 1031734245LL;
uint32_t x4218 = 1848U;
volatile int64_t x4221 = -14LL;
uint32_t x4222 = 29U;
int64_t x4223 = INT64_MIN;
volatile int32_t t47 = -398253;
int16_t x4606 = INT16_MAX;
int8_t x4607 = -1;
static int32_t t48 = 1458;
uint8_t x4623 = 21U;
volatile int64_t t49 = 120428737LL;
static uint32_t t50 = 281402017U;
int64_t x4837 = -21166346722891286LL;
int32_t x4838 = INT32_MAX;
volatile int64_t x4839 = -1LL;
uint8_t x5101 = 2U;
volatile uint32_t t52 = 12572U;
uint32_t x5190 = 169401U;
uint32_t x5191 = UINT32_MAX;
int32_t t55 = 9772;
int64_t x5289 = INT64_MIN;
uint8_t x5291 = 3U;
volatile uint8_t x5622 = UINT8_MAX;
int32_t x5623 = -1;
volatile int16_t x5624 = -1;
int16_t x5851 = -1;
int64_t x5852 = -1LL;
volatile int64_t x6253 = 973219LL;
int32_t x6496 = -1;
int64_t x6661 = -236218346236LL;
uint8_t x6662 = 7U;
int16_t x6705 = INT16_MIN;
int32_t x6707 = -1;
int64_t x6795 = -1LL;
uint16_t x6847 = 6U;
uint16_t x6863 = UINT16_MAX;
static volatile uint16_t x6982 = UINT16_MAX;
uint8_t x7157 = 58U;
volatile uint8_t x7160 = 3U;
int8_t x7473 = -1;
uint8_t x7475 = 4U;
uint32_t x7673 = 678846U;
int16_t x7715 = INT16_MIN;
int8_t x7883 = INT8_MIN;
uint8_t x7953 = 57U;
static int64_t x8113 = -1053648869LL;
volatile int64_t t88 = 0LL;
uint16_t x8354 = 466U;
int64_t x8356 = -1LL;
static uint8_t x8431 = 6U;
volatile uint16_t x8470 = 5U;
int64_t x8563 = INT64_MIN;
int8_t x8616 = -1;
int32_t x8634 = 64;
int8_t x9021 = -1;
int64_t x9022 = INT64_MAX;
int32_t x9113 = 26;
uint64_t x9116 = UINT64_MAX;
volatile int32_t t98 = -112;
volatile int32_t x9174 = 0;
int8_t x9175 = 1;
static volatile int32_t t99 = INT32_MIN;


void f0(void) {
	uint64_t x1 = 204264092516855198LLU;
	uint64_t x2 = 5LLU;
	volatile int64_t x3 = -1LL;
	int32_t x4 = -1;
	uint64_t t0 = 66306590700857LLU;

	t0 = (x1^(x2<<(x3-x4)));

	if (t0 != 204264092516855195LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = UINT64_MAX;
	int16_t x43 = 13;
	static volatile uint64_t x44 = UINT64_MAX;
	uint64_t t1 = 23286506563805LLU;

	t1 = (x41^(x42<<(x43-x44)));

	if (t1 != 16384LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x93 = INT8_MIN;
	uint64_t x94 = 2275419LLU;
	static int16_t x95 = INT16_MIN;
	static volatile int16_t x96 = INT16_MIN;
	uint64_t t2 = 197950LLU;

	t2 = (x93^(x94<<(x95-x96)));

	if (t2 != 18446744073707276251LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x229 = -1;
	volatile uint16_t x230 = UINT16_MAX;
	volatile int8_t x231 = 6;
	uint32_t x232 = 1U;
	volatile int32_t t3 = -3;

	t3 = (x229^(x230<<(x231-x232)));

	if (t3 != -2097121) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x347 = -1;
	int16_t x348 = -1;

	t4 = (x345^(x346<<(x347-x348)));

	if (t4 != 2147483520) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x677 = 1859520413U;
	uint8_t x678 = 11U;
	int64_t x679 = -1LL;
	uint64_t x680 = UINT64_MAX;

	t5 = (x677^(x678<<(x679-x680)));

	if (t5 != 1859520406U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x809 = INT32_MIN;
	int32_t x810 = INT32_MAX;
	volatile uint32_t x811 = UINT32_MAX;
	int16_t x812 = -1;
	static int32_t t6 = 3871;

	t6 = (x809^(x810<<(x811-x812)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x897 = UINT16_MAX;
	static uint32_t x898 = 941U;
	uint64_t x899 = UINT64_MAX;
	static int8_t x900 = -1;
	static uint32_t t7 = 30006251U;

	t7 = (x897^(x898<<(x899-x900)));

	if (t7 != 64594U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x925 = -1LL;
	static int64_t x926 = INT64_MAX;
	static volatile int64_t x927 = INT64_MAX;
	int64_t x928 = INT64_MAX;
	static int64_t t8 = INT64_MIN;

	t8 = (x925^(x926<<(x927-x928)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x1005 = INT16_MIN;
	uint8_t x1006 = UINT8_MAX;
	int32_t t9 = 5457898;

	t9 = (x1005^(x1006<<(x1007-x1008)));

	if (t9 != -32513) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x1018 = UINT32_MAX;
	static uint32_t x1019 = UINT32_MAX;
	uint32_t x1020 = UINT32_MAX;
	uint32_t t10 = 79380145U;

	t10 = (x1017^(x1018<<(x1019-x1020)));

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x1025 = UINT32_MAX;
	int16_t x1026 = INT16_MAX;
	int32_t x1027 = -1;
	volatile int64_t x1028 = -1LL;
	uint32_t t11 = 116U;

	t11 = (x1025^(x1026<<(x1027-x1028)));

	if (t11 != 4294934528U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x1189 = UINT8_MAX;
	volatile uint8_t x1190 = 16U;
	uint32_t x1191 = UINT32_MAX;
	uint32_t x1192 = UINT32_MAX;
	int32_t t12 = -29052999;

	t12 = (x1189^(x1190<<(x1191-x1192)));

	if (t12 != 239) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x1193 = 33254937484LLU;
	static uint8_t x1194 = UINT8_MAX;
	int8_t x1195 = -1;
	uint32_t x1196 = UINT32_MAX;

	t13 = (x1193^(x1194<<(x1195-x1196)));

	if (t13 != 33254937459LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x1317 = INT64_MIN;
	static volatile int8_t x1319 = -1;
	volatile int64_t x1320 = -1LL;
	int64_t t14 = -16LL;

	t14 = (x1317^(x1318<<(x1319-x1320)));

	if (t14 != -9223372036854774839LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x1375 = -1;
	uint64_t x1376 = UINT64_MAX;
	volatile uint64_t t15 = 531110515LLU;

	t15 = (x1373^(x1374<<(x1375-x1376)));

	if (t15 != 486541005579LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x1445 = 19781;
	int16_t x1446 = INT16_MAX;
	int8_t x1447 = INT8_MAX;
	uint8_t x1448 = 113U;

	t16 = (x1445^(x1446<<(x1447-x1448)));

	if (t16 != 536841541) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1486 = UINT32_MAX;
	int16_t x1487 = INT16_MAX;
	int16_t x1488 = INT16_MAX;
	uint32_t t17 = 980213U;

	t17 = (x1485^(x1486<<(x1487-x1488)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1585 = INT64_MAX;
	uint64_t x1586 = UINT64_MAX;
	int32_t x1588 = -1;
	uint64_t t18 = 88LLU;

	t18 = (x1585^(x1586<<(x1587-x1588)));

	if (t18 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x1841 = -1;
	int64_t x1842 = 88302175365LL;
	int8_t x1843 = 10;
	int64_t t19 = 74105530LL;

	t19 = (x1841^(x1842<<(x1843-x1844)));

	if (t19 != -45210713786881LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x1849 = INT8_MAX;
	int16_t x1850 = INT16_MAX;
	int64_t x1851 = INT64_MIN;
	int64_t x1852 = INT64_MIN;

	t20 = (x1849^(x1850<<(x1851-x1852)));

	if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x2022 = 249272U;
	uint16_t x2023 = 18U;
	uint32_t x2024 = UINT32_MAX;
	volatile uint32_t t21 = 474136779U;

	t21 = (x2021^(x2022<<(x2023-x2024)));

	if (t21 != 1841299577U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x2141 = INT64_MIN;
	volatile int16_t x2142 = 539;
	static uint32_t x2143 = UINT32_MAX;
	int16_t x2144 = -1;

	t22 = (x2141^(x2142<<(x2143-x2144)));

	if (t22 != -9223372036854775269LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x2261 = 246075U;
	uint64_t x2262 = 53444855374036LLU;
	int16_t x2263 = -1;
	int16_t x2264 = -13;

	t23 = (x2261^(x2262<<(x2263-x2264)));

	if (t23 != 218910127612133691LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x2294 = 0LL;
	volatile int8_t x2296 = -5;
	volatile int64_t t24 = 28703603517971851LL;

	t24 = (x2293^(x2294<<(x2295-x2296)));

	if (t24 != 16LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x2341 = INT64_MIN;
	uint8_t x2342 = UINT8_MAX;
	int16_t x2344 = -1;
	int64_t t25 = 224393699584LL;

	t25 = (x2341^(x2342<<(x2343-x2344)));

	if (t25 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x2662 = 34;
	int32_t x2663 = INT32_MIN;
	int32_t x2664 = INT32_MIN;
	int32_t t26 = -522966730;

	t26 = (x2661^(x2662<<(x2663-x2664)));

	if (t26 != -2147483614) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x2842 = 265087;
	volatile uint64_t x2844 = UINT64_MAX;
	static volatile int32_t t27 = 1846;

	t27 = (x2841^(x2842<<(x2843-x2844)));

	if (t27 != 8482786) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x2913 = 609679859196858232LLU;
	static volatile uint64_t x2914 = 70031146613344037LLU;
	volatile int32_t x2915 = -1;
	int16_t x2916 = -27;
	volatile uint64_t t28 = 1009311LLU;

	t28 = (x2913^(x2914<<(x2915-x2916)));

	if (t28 != 15830834965595262840LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2925 = 16;
	uint64_t x2926 = 118859299505127LLU;
	uint16_t x2927 = 24U;
	static volatile uint64_t t29 = 0LLU;

	t29 = (x2925^(x2926<<(x2927-x2928)));

	if (t29 != 3759562891154423824LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2941 = INT8_MIN;
	int32_t x2942 = INT32_MAX;
	static int8_t x2944 = -1;

	t30 = (x2941^(x2942<<(x2943-x2944)));

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x3030 = UINT32_MAX;
	uint32_t t31 = 85U;

	t31 = (x3029^(x3030<<(x3031-x3032)));

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x3165 = INT64_MAX;
	static int16_t x3166 = 1;
	int8_t x3167 = -1;
	static volatile int64_t t32 = 6496916288899946LL;

	t32 = (x3165^(x3166<<(x3167-x3168)));

	if (t32 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x3321 = -1;
	volatile int16_t x3322 = 1;
	int32_t x3323 = INT32_MIN;
	volatile int32_t x3324 = INT32_MIN;

	t33 = (x3321^(x3322<<(x3323-x3324)));

	if (t33 != -2) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3417 = 39;
	int16_t x3420 = -1;

	t34 = (x3417^(x3418<<(x3419-x3420)));

	if (t34 != 268431399) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x3573 = INT32_MIN;
	uint64_t x3574 = 907846LLU;
	volatile uint64_t t35 = 18482850337339339LLU;

	t35 = (x3573^(x3574<<(x3575-x3576)));

	if (t35 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x3673 = -1LL;
	static int64_t x3674 = 8LL;
	int8_t x3675 = -1;
	int16_t x3676 = -1;
	int64_t t36 = -84575704090017784LL;

	t36 = (x3673^(x3674<<(x3675-x3676)));

	if (t36 != -9LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x3678 = 115583568873302210LLU;
	int16_t x3679 = -1;
	volatile uint32_t x3680 = UINT32_MAX;
	static volatile uint64_t t37 = 36543LLU;

	t37 = (x3677^(x3678<<(x3679-x3680)));

	if (t37 != 115583568873302215LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x3791 = UINT64_MAX;
	int64_t x3792 = -1LL;

	t38 = (x3789^(x3790<<(x3791-x3792)));

	if (t38 != 18043334677698LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x4009 = -45;
	uint32_t x4010 = 4091U;

	t39 = (x4009^(x4010<<(x4011-x4012)));

	if (t39 != 4294959141U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x4093 = -1;
	uint32_t x4095 = 3U;
	int32_t t40 = -2536;

	t40 = (x4093^(x4094<<(x4095-x4096)));

	if (t40 != -641) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x4101 = 7420;
	int16_t x4102 = INT16_MAX;
	volatile uint16_t x4103 = 0U;
	volatile int64_t x4104 = -1LL;
	volatile int32_t t41 = 88621;

	t41 = (x4101^(x4102<<(x4103-x4104)));

	if (t41 != 58114) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x4165 = INT16_MIN;
	static int8_t x4167 = INT8_MAX;
	static int8_t x4168 = INT8_MAX;
	static int32_t t42 = 13149329;

	t42 = (x4165^(x4166<<(x4167-x4168)));

	if (t42 != -32769) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x4219 = UINT32_MAX;
	int8_t x4220 = -1;
	static int64_t t43 = 860013015LL;

	t43 = (x4217^(x4218<<(x4219-x4220)));

	if (t43 != 1031734493LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x4224 = INT64_MIN;
	int64_t t44 = -3338683LL;

	t44 = (x4221^(x4222<<(x4223-x4224)));

	if (t44 != -17LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x4225 = 18326866U;
	static volatile uint16_t x4226 = 2914U;
	uint16_t x4227 = UINT16_MAX;
	static volatile uint16_t x4228 = UINT16_MAX;
	volatile uint32_t t45 = 78402725U;

	t45 = (x4225^(x4226<<(x4227-x4228)));

	if (t45 != 18329136U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x4261 = -5;
	static int8_t x4262 = 1;
	int8_t x4263 = -1;
	int8_t x4264 = -5;
	volatile int32_t t46 = 17;

	t46 = (x4261^(x4262<<(x4263-x4264)));

	if (t46 != -21) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x4473 = INT8_MAX;
	int8_t x4474 = 32;
	uint16_t x4475 = 1U;
	int64_t x4476 = -1LL;

	t47 = (x4473^(x4474<<(x4475-x4476)));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x4605 = -1;
	uint32_t x4608 = UINT32_MAX;

	t48 = (x4605^(x4606<<(x4607-x4608)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x4621 = INT64_MAX;
	uint16_t x4622 = UINT16_MAX;
	uint8_t x4624 = 7U;

	t49 = (x4621^(x4622<<(x4623-x4624)));

	if (t49 != 9223372035781050367LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x4733 = -8;
	volatile uint32_t x4734 = 652U;
	volatile uint8_t x4735 = 1U;
	uint64_t x4736 = UINT64_MAX;

	t50 = (x4733^(x4734<<(x4735-x4736)));

	if (t50 != 4294964680U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x4840 = -1;
	int64_t t51 = -1793538471668LL;

	t51 = (x4837^(x4838<<(x4839-x4840)));

	if (t51 != -21166347742587371LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x5102 = 37U;
	int8_t x5103 = -1;
	volatile int32_t x5104 = -1;

	t52 = (x5101^(x5102<<(x5103-x5104)));

	if (t52 != 39U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x5137 = INT64_MIN;
	volatile int8_t x5138 = 0;
	static int32_t x5139 = INT32_MIN;
	int32_t x5140 = INT32_MIN;
	static volatile int64_t t53 = INT64_MIN;

	t53 = (x5137^(x5138<<(x5139-x5140)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x5189 = INT64_MIN;
	volatile int8_t x5192 = -1;
	volatile int64_t t54 = -733297LL;

	t54 = (x5189^(x5190<<(x5191-x5192)));

	if (t54 != -9223372036854606407LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x5265 = 1001177704;
	volatile uint16_t x5266 = 3U;
	int8_t x5267 = 0;
	uint16_t x5268 = 0U;

	t55 = (x5265^(x5266<<(x5267-x5268)));

	if (t55 != 1001177707) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x5290 = 336U;
	int8_t x5292 = -1;
	volatile int64_t t56 = 906858392505873512LL;

	t56 = (x5289^(x5290<<(x5291-x5292)));

	if (t56 != -9223372036854770432LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x5621 = -3;
	volatile int32_t t57 = -50;

	t57 = (x5621^(x5622<<(x5623-x5624)));

	if (t57 != -254) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x5701 = 2U;
	static uint16_t x5702 = 235U;
	static uint16_t x5703 = 3U;
	static uint32_t x5704 = UINT32_MAX;
	static volatile int32_t t58 = -7860;

	t58 = (x5701^(x5702<<(x5703-x5704)));

	if (t58 != 3762) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x5721 = INT8_MIN;
	int64_t x5722 = 454466LL;
	volatile uint32_t x5723 = UINT32_MAX;
	int16_t x5724 = -7;
	volatile int64_t t59 = 7780LL;

	t59 = (x5721^(x5722<<(x5723-x5724)));

	if (t59 != -29085952LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x5765 = 4U;
	volatile uint64_t x5766 = 561392LLU;
	uint32_t x5767 = UINT32_MAX;
	int8_t x5768 = -1;
	volatile uint64_t t60 = 883862272223LLU;

	t60 = (x5765^(x5766<<(x5767-x5768)));

	if (t60 != 561396LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x5849 = 1;
	uint16_t x5850 = 87U;
	int32_t t61 = 2041;

	t61 = (x5849^(x5850<<(x5851-x5852)));

	if (t61 != 86) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x6013 = INT32_MAX;
	int64_t x6014 = 537960606123LL;
	static uint16_t x6015 = 6U;
	static int64_t x6016 = -1LL;
	int64_t t62 = 3894377LL;

	t62 = (x6013^(x6014<<(x6015-x6016)));

	if (t62 != 68857021278847LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x6189 = 1273;
	static uint16_t x6190 = 2U;
	int8_t x6191 = 1;
	int16_t x6192 = -1;
	int32_t t63 = -3;

	t63 = (x6189^(x6190<<(x6191-x6192)));

	if (t63 != 1265) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x6221 = 21U;
	static int64_t x6222 = 228185031971486LL;
	volatile int8_t x6223 = -1;
	static int8_t x6224 = -1;
	int64_t t64 = 984396LL;

	t64 = (x6221^(x6222<<(x6223-x6224)));

	if (t64 != 228185031971467LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x6254 = 141177LLU;
	int16_t x6255 = 6;
	static uint8_t x6256 = 5U;
	uint64_t t65 = 1615948846LLU;

	t65 = (x6253^(x6254<<(x6255-x6256)));

	if (t65 != 694097LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x6493 = 150981130LLU;
	volatile uint16_t x6494 = 591U;
	volatile int32_t x6495 = -1;
	uint64_t t66 = 852221767018049LLU;

	t66 = (x6493^(x6494<<(x6495-x6496)));

	if (t66 != 150980677LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x6649 = 211809LLU;
	static uint32_t x6650 = 1533U;
	static int32_t x6651 = INT32_MIN;
	int32_t x6652 = INT32_MIN;
	static uint64_t t67 = 101729539LLU;

	t67 = (x6649^(x6650<<(x6651-x6652)));

	if (t67 != 212636LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x6663 = 10;
	uint64_t x6664 = UINT64_MAX;
	static int64_t t68 = 85LL;

	t68 = (x6661^(x6662<<(x6663-x6664)));

	if (t68 != -236218340092LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x6706 = 181977391U;
	int32_t x6708 = -1;
	uint32_t t69 = 162853U;

	t69 = (x6705^(x6706<<(x6707-x6708)));

	if (t69 != 4112990511U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x6765 = 127546U;
	volatile int16_t x6766 = 0;
	uint32_t x6767 = UINT32_MAX;
	static int8_t x6768 = -1;
	static uint32_t t70 = 1005743484U;

	t70 = (x6765^(x6766<<(x6767-x6768)));

	if (t70 != 127546U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x6793 = INT8_MIN;
	uint8_t x6794 = 7U;
	static int32_t x6796 = -1;
	volatile int32_t t71 = -15860175;

	t71 = (x6793^(x6794<<(x6795-x6796)));

	if (t71 != -121) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x6837 = -881126;
	volatile int16_t x6838 = 1;
	static uint8_t x6839 = 6U;
	volatile uint8_t x6840 = 0U;
	static volatile int32_t t72 = -937635529;

	t72 = (x6837^(x6838<<(x6839-x6840)));

	if (t72 != -881062) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x6845 = 30;
	uint16_t x6846 = 62U;
	int8_t x6848 = -1;
	static int32_t t73 = -59;

	t73 = (x6845^(x6846<<(x6847-x6848)));

	if (t73 != 7966) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x6861 = 2078596;
	uint8_t x6862 = UINT8_MAX;
	volatile uint16_t x6864 = UINT16_MAX;
	int32_t t74 = 3558;

	t74 = (x6861^(x6862<<(x6863-x6864)));

	if (t74 != 2078587) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x6981 = UINT64_MAX;
	uint8_t x6983 = 11U;
	volatile int8_t x6984 = -1;
	uint64_t t75 = 1LLU;

	t75 = (x6981^(x6982<<(x6983-x6984)));

	if (t75 != 18446744073441120255LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x7045 = INT8_MIN;
	int8_t x7046 = INT8_MAX;
	int16_t x7047 = -1;
	int16_t x7048 = -1;
	int32_t t76 = 5811;

	t76 = (x7045^(x7046<<(x7047-x7048)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x7158 = UINT8_MAX;
	uint8_t x7159 = 5U;
	volatile int32_t t77 = -39977;

	t77 = (x7157^(x7158<<(x7159-x7160)));

	if (t77 != 966) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x7377 = 103;
	uint16_t x7378 = 211U;
	int64_t x7379 = INT64_MIN;
	int64_t x7380 = INT64_MIN;
	int32_t t78 = -3897;

	t78 = (x7377^(x7378<<(x7379-x7380)));

	if (t78 != 180) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x7474 = 1;
	static int16_t x7476 = 0;
	int32_t t79 = -1624262;

	t79 = (x7473^(x7474<<(x7475-x7476)));

	if (t79 != -17) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x7674 = 586328884U;
	int16_t x7675 = 2;
	uint64_t x7676 = UINT64_MAX;
	static volatile uint32_t t80 = 2268U;

	t80 = (x7673^(x7674<<(x7675-x7676)));

	if (t80 != 396296734U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x7713 = INT8_MAX;
	uint64_t x7714 = 151962350582299959LLU;
	static int16_t x7716 = INT16_MIN;
	volatile uint64_t t81 = 26760056LLU;

	t81 = (x7713^(x7714<<(x7715-x7716)));

	if (t81 != 151962350582299976LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x7841 = 9U;
	uint32_t x7842 = 1562U;
	uint64_t x7843 = UINT64_MAX;
	static int16_t x7844 = -1;
	volatile uint32_t t82 = 1U;

	t82 = (x7841^(x7842<<(x7843-x7844)));

	if (t82 != 1555U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x7881 = 13558U;
	int8_t x7882 = 1;
	int8_t x7884 = INT8_MIN;
	int32_t t83 = -17;

	t83 = (x7881^(x7882<<(x7883-x7884)));

	if (t83 != 13559) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x7897 = UINT32_MAX;
	uint16_t x7898 = 217U;
	uint32_t x7899 = UINT32_MAX;
	volatile int16_t x7900 = -2;
	uint32_t t84 = 849700882U;

	t84 = (x7897^(x7898<<(x7899-x7900)));

	if (t84 != 4294966861U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x7954 = INT32_MAX;
	int32_t x7955 = -1;
	int16_t x7956 = -1;
	volatile int32_t t85 = -2672;

	t85 = (x7953^(x7954<<(x7955-x7956)));

	if (t85 != 2147483590) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x8081 = 74U;
	static volatile uint32_t x8082 = UINT32_MAX;
	uint32_t x8083 = UINT32_MAX;
	static int8_t x8084 = -4;
	volatile uint32_t t86 = 19652U;

	t86 = (x8081^(x8082<<(x8083-x8084)));

	if (t86 != 4294967218U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x8114 = 3U;
	volatile int64_t x8115 = -1LL;
	int32_t x8116 = -1;
	volatile int64_t t87 = -104687941LL;

	t87 = (x8113^(x8114<<(x8115-x8116)));

	if (t87 != -1053648872LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x8169 = INT16_MAX;
	int64_t x8170 = 11447339341LL;
	int32_t x8171 = -1;
	int8_t x8172 = -8;

	t88 = (x8169^(x8170<<(x8171-x8172)));

	if (t88 != 1465259448703LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x8353 = 15U;
	uint8_t x8355 = 7U;
	static volatile int32_t t89 = 1;

	t89 = (x8353^(x8354<<(x8355-x8356)));

	if (t89 != 119311) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x8429 = -5;
	int64_t x8430 = 4246274691250LL;
	int16_t x8432 = -2;
	volatile int64_t t90 = 411745709199778300LL;

	t90 = (x8429^(x8430<<(x8431-x8432)));

	if (t90 != -1087046320960005LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x8469 = 116U;
	uint32_t x8471 = 4U;
	int8_t x8472 = -1;
	volatile int32_t t91 = 183507;

	t91 = (x8469^(x8470<<(x8471-x8472)));

	if (t91 != 212) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x8561 = 25;
	uint8_t x8562 = 68U;
	int64_t x8564 = INT64_MIN;
	volatile int32_t t92 = -3;

	t92 = (x8561^(x8562<<(x8563-x8564)));

	if (t92 != 93) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x8593 = INT16_MAX;
	uint16_t x8594 = 32531U;
	int8_t x8595 = 1;
	int8_t x8596 = 1;
	volatile int32_t t93 = 156855297;

	t93 = (x8593^(x8594<<(x8595-x8596)));

	if (t93 != 236) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x8613 = 1432830U;
	int64_t x8614 = 1668LL;
	int64_t x8615 = -1LL;
	int64_t t94 = -1886746452LL;

	t94 = (x8613^(x8614<<(x8615-x8616)));

	if (t94 != 1432186LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x8633 = INT8_MIN;
	uint16_t x8635 = 16U;
	volatile uint32_t x8636 = UINT32_MAX;
	volatile int32_t t95 = -429880469;

	t95 = (x8633^(x8634<<(x8635-x8636)));

	if (t95 != -8388736) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x8837 = 1U;
	uint64_t x8838 = UINT64_MAX;
	int16_t x8839 = INT16_MIN;
	int16_t x8840 = INT16_MIN;
	static uint64_t t96 = 403052955LLU;

	t96 = (x8837^(x8838<<(x8839-x8840)));

	if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x9023 = UINT64_MAX;
	static volatile int16_t x9024 = -1;
	int64_t t97 = INT64_MIN;

	t97 = (x9021^(x9022<<(x9023-x9024)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x9114 = UINT8_MAX;
	int16_t x9115 = 1;

	t98 = (x9113^(x9114<<(x9115-x9116)));

	if (t98 != 998) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x9173 = INT32_MIN;
	int64_t x9176 = -1LL;

	t99 = (x9173^(x9174<<(x9175-x9176)));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

