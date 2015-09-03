#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x54 = 8U;
int64_t x84 = INT64_MAX;
static uint64_t x102 = 2965LLU;
uint16_t x243 = 3U;
int32_t x246 = 149208275;
int16_t x251 = 6;
int8_t x346 = INT8_MAX;
int16_t x369 = INT16_MIN;
volatile int16_t x383 = 0;
uint64_t t10 = 10LLU;
int64_t x433 = INT64_MAX;
int64_t x436 = 28455908273LL;
int64_t t12 = 18LL;
static int64_t x721 = INT64_MIN;
int64_t x729 = INT64_MAX;
static volatile int64_t x730 = 113249633898LL;
uint16_t x732 = 820U;
uint8_t x825 = 119U;
uint32_t x827 = 2U;
volatile int32_t t17 = 715;
volatile uint32_t x871 = 11U;
int8_t x928 = INT8_MAX;
static int32_t x961 = -1;
uint32_t x1003 = 2U;
volatile int32_t x1004 = INT32_MAX;
int64_t x1058 = INT64_MAX;
uint64_t t23 = 18488282229LLU;
uint16_t x1075 = 22U;
int16_t x1076 = INT16_MIN;
int32_t x1250 = INT32_MAX;
volatile int32_t x1258 = INT32_MAX;
int64_t t26 = -95774389LL;
static uint8_t x1375 = 13U;
uint16_t x1378 = 112U;
int16_t x1416 = INT16_MAX;
volatile uint64_t t31 = 1078296LLU;
static volatile uint8_t x1515 = 4U;
int16_t x1558 = INT16_MAX;
uint8_t x1559 = 1U;
int16_t x1706 = 0;
volatile int64_t t37 = -16656833522LL;
volatile int8_t x1894 = INT8_MAX;
uint32_t x2130 = 18U;
int16_t x2132 = INT16_MIN;
uint32_t t42 = 14872015U;
int32_t x2148 = -1;
int64_t x2201 = INT64_MIN;
int8_t x2238 = 0;
int8_t x2263 = 0;
volatile uint32_t x2424 = 336U;
static uint32_t x2486 = UINT32_MAX;
int32_t x2509 = INT32_MIN;
static uint32_t x2510 = UINT32_MAX;
uint8_t x2551 = 50U;
static uint8_t x2552 = 62U;
volatile uint64_t t51 = 1894114765592712LLU;
int16_t x2588 = 67;
uint32_t x2737 = 26U;
uint8_t x2738 = 6U;
uint64_t t56 = 87239854571077LLU;
volatile uint16_t x3138 = 393U;
int32_t x3140 = 9;
int32_t t58 = 1;
int64_t x3249 = INT64_MAX;
uint32_t x3251 = 8U;
int32_t x3420 = -1;
uint32_t x3480 = 127121U;
int64_t x3613 = INT64_MIN;
int64_t t65 = -134LL;
int8_t x3657 = INT8_MIN;
uint64_t x3658 = UINT64_MAX;
int64_t x3769 = 349389381LL;
int64_t t70 = -12739910LL;
int8_t x3889 = -1;
int64_t x3890 = 9029072922LL;
int8_t x3891 = 2;
int32_t x4054 = INT32_MAX;
int64_t t76 = -41LL;
static int16_t x4125 = INT16_MIN;
uint8_t x4251 = 0U;
static uint64_t t80 = 720526635919LLU;
uint8_t x4403 = 10U;
uint64_t x4546 = 123918735297LLU;
static uint8_t x4718 = 0U;
static uint16_t x4753 = UINT16_MAX;
uint8_t x4835 = 0U;
uint8_t x4836 = 23U;
uint32_t x4842 = 54U;
volatile int64_t t90 = -20LL;
volatile uint64_t t91 = 24124478LLU;
uint8_t x4882 = 1U;
uint64_t x4925 = UINT64_MAX;
int16_t x4953 = -1;
int8_t x4956 = -1;
int64_t x5097 = 1443548835376LL;
int64_t x5134 = INT64_MAX;
int64_t t97 = 1112LL;
static volatile int64_t t99 = -142LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	uint32_t x2 = 91189U;
	static uint16_t x3 = 5U;
	int32_t x4 = -13166;
	volatile uint32_t t0 = 3922621U;

	t0 = ((x1&(x2>>x3))%x4);

	if (t0 != 2816U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x53 = 249LL;
	int16_t x55 = 6;
	volatile uint8_t x56 = UINT8_MAX;
	static volatile int64_t t1 = 168599402966641184LL;

	t1 = ((x53&(x54>>x55))%x56);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x81 = -1LL;
	uint64_t x82 = 333080531064LLU;
	volatile int32_t x83 = 6;
	uint64_t t2 = 892436929380979828LLU;

	t2 = ((x81&(x82>>x83))%x84);

	if (t2 != 5204383297LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x101 = 14U;
	uint16_t x103 = 0U;
	int16_t x104 = -1;
	volatile uint64_t t3 = 28477796872LLU;

	t3 = ((x101&(x102>>x103))%x104);

	if (t3 != 4LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x241 = INT16_MIN;
	static uint16_t x242 = 1468U;
	uint64_t x244 = UINT64_MAX;
	uint64_t t4 = 427241689433LLU;

	t4 = ((x241&(x242>>x243))%x244);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x245 = UINT32_MAX;
	int16_t x247 = 0;
	int8_t x248 = -13;
	static volatile uint32_t t5 = 217501787U;

	t5 = ((x245&(x246>>x247))%x248);

	if (t5 != 149208275U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 16271028633505LLU;
	int8_t x252 = INT8_MIN;
	uint64_t t6 = 22928933289LLU;

	t6 = ((x249&(x250>>x251))%x252);

	if (t6 != 254LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x345 = INT16_MIN;
	static int16_t x347 = 1;
	volatile int8_t x348 = -41;
	int32_t t7 = 0;

	t7 = ((x345&(x346>>x347))%x348);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x361 = INT64_MAX;
	uint64_t x362 = UINT64_MAX;
	uint8_t x363 = 63U;
	int32_t x364 = -1;
	volatile uint64_t t8 = 26467658706494638LLU;

	t8 = ((x361&(x362>>x363))%x364);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x370 = UINT64_MAX;
	int8_t x371 = 26;
	int8_t x372 = INT8_MIN;
	uint64_t t9 = 1848273616991LLU;

	t9 = ((x369&(x370>>x371))%x372);

	if (t9 != 274877874176LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x381 = 1U;
	volatile int32_t x382 = 405230223;
	uint64_t x384 = UINT64_MAX;

	t10 = ((x381&(x382>>x383))%x384);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x429 = INT16_MIN;
	uint64_t x430 = 63041930818094648LLU;
	uint16_t x431 = 0U;
	int16_t x432 = -9;
	volatile uint64_t t11 = 194533LLU;

	t11 = ((x429&(x430>>x431))%x432);

	if (t11 != 63041930818093056LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x434 = INT32_MAX;
	int8_t x435 = 4;

	t12 = ((x433&(x434>>x435))%x436);

	if (t12 != 134217727LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x653 = INT64_MIN;
	uint32_t x654 = UINT32_MAX;
	uint64_t x655 = 1LLU;
	int8_t x656 = 15;
	volatile int64_t t13 = -674825156386329LL;

	t13 = ((x653&(x654>>x655))%x656);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x722 = 6890LLU;
	volatile uint32_t x723 = 4U;
	static volatile int16_t x724 = -1;
	uint64_t t14 = 67701462LLU;

	t14 = ((x721&(x722>>x723))%x724);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x731 = 7U;
	int64_t t15 = 27LL;

	t15 = ((x729&(x730>>x731))%x732);

	if (t15 != 804LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x809 = 6517092986245696LL;
	static uint16_t x810 = UINT16_MAX;
	int32_t x811 = 0;
	uint32_t x812 = UINT32_MAX;
	int64_t t16 = -190695LL;

	t16 = ((x809&(x810>>x811))%x812);

	if (t16 != 53824LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x826 = 0U;
	static volatile int32_t x828 = INT32_MIN;

	t17 = ((x825&(x826>>x827))%x828);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x869 = INT32_MAX;
	int8_t x870 = 1;
	static int16_t x872 = INT16_MIN;
	volatile int32_t t18 = 31;

	t18 = ((x869&(x870>>x871))%x872);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x925 = 55225945485664LLU;
	int16_t x926 = 559;
	static uint8_t x927 = 3U;
	volatile uint64_t t19 = 4867034358LLU;

	t19 = ((x925&(x926>>x927))%x928);

	if (t19 != 64LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x957 = 5682U;
	uint16_t x958 = 357U;
	static int8_t x959 = 0;
	static int16_t x960 = INT16_MIN;
	volatile uint32_t t20 = 3046U;

	t20 = ((x957&(x958>>x959))%x960);

	if (t20 != 32U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x962 = 8551LL;
	static uint8_t x963 = 36U;
	static volatile uint8_t x964 = 1U;
	volatile int64_t t21 = -520LL;

	t21 = ((x961&(x962>>x963))%x964);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x1001 = -1463008337501033249LL;
	static volatile int64_t x1002 = 5232226LL;
	volatile int64_t t22 = 4548632410303408338LL;

	t22 = ((x1001&(x1002>>x1003))%x1004);

	if (t22 != 1107096LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x1057 = 1096031U;
	uint8_t x1059 = 19U;
	uint64_t x1060 = 1045796089040251LLU;

	t23 = ((x1057&(x1058>>x1059))%x1060);

	if (t23 != 1096031LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x1073 = -1755486;
	volatile uint16_t x1074 = 5000U;
	static volatile int32_t t24 = -1093;

	t24 = ((x1073&(x1074>>x1075))%x1076);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1249 = 15;
	uint8_t x1251 = 1U;
	int8_t x1252 = INT8_MIN;
	int32_t t25 = 192661581;

	t25 = ((x1249&(x1250>>x1251))%x1252);

	if (t25 != 15) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x1257 = -106LL;
	volatile int16_t x1259 = 11;
	int8_t x1260 = -30;

	t26 = ((x1257&(x1258>>x1259))%x1260);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1285 = INT16_MIN;
	volatile uint16_t x1286 = 2816U;
	volatile uint16_t x1287 = 9U;
	uint64_t x1288 = 4976552334897LLU;
	volatile uint64_t t27 = 66363560831314653LLU;

	t27 = ((x1285&(x1286>>x1287))%x1288);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1373 = 1008337862724517939LLU;
	int16_t x1374 = 13;
	int16_t x1376 = INT16_MIN;
	uint64_t t28 = 1402091812894787603LLU;

	t28 = ((x1373&(x1374>>x1375))%x1376);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x1377 = INT16_MAX;
	int32_t x1379 = 1;
	int32_t x1380 = -1;
	static int32_t t29 = -2766841;

	t29 = ((x1377&(x1378>>x1379))%x1380);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x1397 = INT16_MIN;
	int64_t x1398 = INT64_MAX;
	uint64_t x1399 = 1LLU;
	uint32_t x1400 = UINT32_MAX;
	int64_t t30 = -108851386970LL;

	t30 = ((x1397&(x1398>>x1399))%x1400);

	if (t30 != 1073709056LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1413 = 3;
	uint64_t x1414 = 526471202722LLU;
	uint16_t x1415 = 7U;

	t31 = ((x1413&(x1414>>x1415))%x1416);

	if (t31 != 3LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x1513 = 37465662;
	volatile uint16_t x1514 = 1U;
	volatile int64_t x1516 = -1LL;
	volatile int64_t t32 = 170698927814LL;

	t32 = ((x1513&(x1514>>x1515))%x1516);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1557 = 666U;
	volatile uint32_t x1560 = UINT32_MAX;
	volatile uint32_t t33 = 1U;

	t33 = ((x1557&(x1558>>x1559))%x1560);

	if (t33 != 666U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1605 = 127;
	int64_t x1606 = 96275052264LL;
	volatile uint8_t x1607 = 40U;
	static int8_t x1608 = INT8_MAX;
	volatile int64_t t34 = -3776951LL;

	t34 = ((x1605&(x1606>>x1607))%x1608);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x1701 = -1;
	int64_t x1702 = INT64_MAX;
	uint16_t x1703 = 3U;
	int32_t x1704 = INT32_MIN;
	volatile int64_t t35 = 26909788593819403LL;

	t35 = ((x1701&(x1702>>x1703))%x1704);

	if (t35 != 2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x1705 = INT32_MAX;
	uint16_t x1707 = 1U;
	static uint16_t x1708 = 24U;
	int32_t t36 = 48960;

	t36 = ((x1705&(x1706>>x1707))%x1708);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x1793 = -13007345;
	static uint32_t x1794 = 17268U;
	uint8_t x1795 = 23U;
	int64_t x1796 = -31768214608LL;

	t37 = ((x1793&(x1794>>x1795))%x1796);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x1853 = INT8_MIN;
	volatile int16_t x1854 = INT16_MAX;
	uint8_t x1855 = 8U;
	static int32_t x1856 = INT32_MAX;
	volatile int32_t t38 = 6266330;

	t38 = ((x1853&(x1854>>x1855))%x1856);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x1893 = UINT8_MAX;
	uint8_t x1895 = 0U;
	int16_t x1896 = INT16_MIN;
	volatile int32_t t39 = -37463;

	t39 = ((x1893&(x1894>>x1895))%x1896);

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1933 = INT8_MIN;
	static int64_t x1934 = INT64_MAX;
	volatile uint16_t x1935 = 4U;
	int32_t x1936 = INT32_MIN;
	volatile int64_t t40 = -76369602390098LL;

	t40 = ((x1933&(x1934>>x1935))%x1936);

	if (t40 != 2147483520LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x2113 = INT8_MAX;
	volatile uint64_t x2114 = 241LLU;
	int16_t x2115 = 0;
	uint32_t x2116 = 385119514U;
	uint64_t t41 = 14553609054894184LLU;

	t41 = ((x2113&(x2114>>x2115))%x2116);

	if (t41 != 113LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x2129 = INT8_MIN;
	uint16_t x2131 = 1U;

	t42 = ((x2129&(x2130>>x2131))%x2132);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2145 = 7U;
	uint32_t x2146 = 79461U;
	uint8_t x2147 = 26U;
	volatile uint32_t t43 = 35073U;

	t43 = ((x2145&(x2146>>x2147))%x2148);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x2202 = 131595U;
	uint16_t x2203 = 29U;
	uint16_t x2204 = 7473U;
	int64_t t44 = 57982994469LL;

	t44 = ((x2201&(x2202>>x2203))%x2204);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x2237 = UINT16_MAX;
	volatile uint16_t x2239 = 12U;
	uint8_t x2240 = 66U;
	int32_t t45 = -1590568;

	t45 = ((x2237&(x2238>>x2239))%x2240);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x2261 = INT64_MAX;
	uint8_t x2262 = 93U;
	uint8_t x2264 = UINT8_MAX;
	int64_t t46 = -23555623LL;

	t46 = ((x2261&(x2262>>x2263))%x2264);

	if (t46 != 93LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x2421 = INT32_MAX;
	uint32_t x2422 = 746066320U;
	static uint8_t x2423 = 29U;
	volatile uint32_t t47 = 260211U;

	t47 = ((x2421&(x2422>>x2423))%x2424);

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x2485 = INT8_MIN;
	int32_t x2487 = 0;
	static int64_t x2488 = INT64_MIN;
	volatile int64_t t48 = -2LL;

	t48 = ((x2485&(x2486>>x2487))%x2488);

	if (t48 != 4294967168LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x2511 = 5;
	int8_t x2512 = -1;
	volatile uint32_t t49 = 1732280746U;

	t49 = ((x2509&(x2510>>x2511))%x2512);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x2541 = -1;
	static uint8_t x2542 = 6U;
	volatile int8_t x2543 = 1;
	int8_t x2544 = INT8_MIN;
	static int32_t t50 = 0;

	t50 = ((x2541&(x2542>>x2543))%x2544);

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x2549 = 59616352634LLU;
	static int64_t x2550 = INT64_MAX;

	t51 = ((x2549&(x2550>>x2551))%x2552);

	if (t51 != 12LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x2585 = INT64_MIN;
	int32_t x2586 = 1;
	uint32_t x2587 = 3U;
	int64_t t52 = 0LL;

	t52 = ((x2585&(x2586>>x2587))%x2588);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x2709 = INT16_MAX;
	uint32_t x2710 = 168402U;
	int8_t x2711 = 8;
	volatile int32_t x2712 = 5612976;
	static volatile uint32_t t53 = 224U;

	t53 = ((x2709&(x2710>>x2711))%x2712);

	if (t53 != 657U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2739 = 2;
	static uint16_t x2740 = 3308U;
	static uint32_t t54 = 520047U;

	t54 = ((x2737&(x2738>>x2739))%x2740);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2781 = -1;
	static volatile int32_t x2782 = 3;
	uint8_t x2783 = 3U;
	static volatile int32_t x2784 = INT32_MIN;
	int32_t t55 = -6039;

	t55 = ((x2781&(x2782>>x2783))%x2784);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x2997 = 15467212LL;
	uint64_t x2998 = UINT64_MAX;
	uint16_t x2999 = 10U;
	int8_t x3000 = INT8_MAX;

	t56 = ((x2997&(x2998>>x2999))%x3000);

	if (t56 != 9LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x3109 = INT8_MAX;
	uint32_t x3110 = 2002U;
	int8_t x3111 = 3;
	volatile int16_t x3112 = INT16_MAX;
	uint32_t t57 = 2756U;

	t57 = ((x3109&(x3110>>x3111))%x3112);

	if (t57 != 122U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x3137 = 72U;
	int16_t x3139 = 0;

	t58 = ((x3137&(x3138>>x3139))%x3140);

	if (t58 != 8) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x3250 = 60843LLU;
	int16_t x3252 = INT16_MIN;
	uint64_t t59 = 1067LLU;

	t59 = ((x3249&(x3250>>x3251))%x3252);

	if (t59 != 237LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x3305 = INT16_MIN;
	uint32_t x3306 = 50882630U;
	static int32_t x3307 = 3;
	uint16_t x3308 = UINT16_MAX;
	uint32_t t60 = 4651U;

	t60 = ((x3305&(x3306>>x3307))%x3308);

	if (t60 != 97U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3417 = INT8_MIN;
	int8_t x3418 = 1;
	volatile uint8_t x3419 = 10U;
	int32_t t61 = -2;

	t61 = ((x3417&(x3418>>x3419))%x3420);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x3477 = UINT8_MAX;
	uint16_t x3478 = 217U;
	uint16_t x3479 = 12U;
	volatile uint32_t t62 = 18U;

	t62 = ((x3477&(x3478>>x3479))%x3480);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x3593 = 19U;
	uint16_t x3594 = UINT16_MAX;
	static volatile uint16_t x3595 = 1U;
	static int16_t x3596 = INT16_MIN;
	volatile uint32_t t63 = 25132982U;

	t63 = ((x3593&(x3594>>x3595))%x3596);

	if (t63 != 19U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x3614 = INT32_MAX;
	int8_t x3615 = 1;
	volatile int8_t x3616 = INT8_MIN;
	volatile int64_t t64 = 6312955LL;

	t64 = ((x3613&(x3614>>x3615))%x3616);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x3649 = 260LL;
	uint32_t x3650 = 683699902U;
	uint8_t x3651 = 9U;
	int64_t x3652 = INT64_MIN;

	t65 = ((x3649&(x3650>>x3651))%x3652);

	if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x3659 = 4U;
	static int8_t x3660 = -35;
	static uint64_t t66 = 17736151161335725LLU;

	t66 = ((x3657&(x3658>>x3659))%x3660);

	if (t66 != 1152921504606846848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x3741 = UINT8_MAX;
	uint64_t x3742 = 33016617755313LLU;
	uint8_t x3743 = 0U;
	int16_t x3744 = 101;
	static volatile uint64_t t67 = 36897311LLU;

	t67 = ((x3741&(x3742>>x3743))%x3744);

	if (t67 != 76LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x3749 = INT8_MIN;
	int32_t x3750 = INT32_MAX;
	int64_t x3751 = 1LL;
	static int16_t x3752 = 96;
	volatile int32_t t68 = -622;

	t68 = ((x3749&(x3750>>x3751))%x3752);

	if (t68 != 32) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3770 = 2;
	int32_t x3771 = 1;
	static uint64_t x3772 = 103126904712LLU;
	uint64_t t69 = 35805804696LLU;

	t69 = ((x3769&(x3770>>x3771))%x3772);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3789 = INT16_MAX;
	int64_t x3790 = 41176543LL;
	static uint32_t x3791 = 2U;
	int64_t x3792 = INT64_MIN;

	t70 = ((x3789&(x3790>>x3791))%x3792);

	if (t70 != 4983LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3857 = INT64_MIN;
	uint32_t x3858 = UINT32_MAX;
	int8_t x3859 = 0;
	int8_t x3860 = INT8_MIN;
	volatile int64_t t71 = 450507701763055LL;

	t71 = ((x3857&(x3858>>x3859))%x3860);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x3881 = INT16_MIN;
	int64_t x3882 = INT64_MAX;
	volatile uint16_t x3883 = 25U;
	int16_t x3884 = INT16_MAX;
	static int64_t t72 = 1748748249824893LL;

	t72 = ((x3881&(x3882>>x3883))%x3884);

	if (t72 != 255LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x3892 = INT16_MIN;
	volatile int64_t t73 = -1LL;

	t73 = ((x3889&(x3890>>x3891))%x3892);

	if (t73 != 11782LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x3993 = 72U;
	int16_t x3994 = 0;
	uint8_t x3995 = 0U;
	volatile uint8_t x3996 = 37U;
	volatile int32_t t74 = -16018132;

	t74 = ((x3993&(x3994>>x3995))%x3996);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x4053 = UINT8_MAX;
	static int16_t x4055 = 7;
	uint32_t x4056 = UINT32_MAX;
	volatile uint32_t t75 = 55U;

	t75 = ((x4053&(x4054>>x4055))%x4056);

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x4057 = -622386581;
	uint8_t x4058 = 5U;
	int32_t x4059 = 0;
	int64_t x4060 = 33784350469224783LL;

	t76 = ((x4057&(x4058>>x4059))%x4060);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x4073 = 12LL;
	int8_t x4074 = 1;
	uint16_t x4075 = 14U;
	int32_t x4076 = 7757276;
	static int64_t t77 = -6171LL;

	t77 = ((x4073&(x4074>>x4075))%x4076);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x4126 = 467U;
	volatile int64_t x4127 = 0LL;
	uint64_t x4128 = 40350133LLU;
	volatile uint64_t t78 = 11065045456044133LLU;

	t78 = ((x4125&(x4126>>x4127))%x4128);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x4249 = 1;
	int32_t x4250 = 33441;
	int32_t x4252 = -25;
	volatile int32_t t79 = -7614;

	t79 = ((x4249&(x4250>>x4251))%x4252);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x4273 = 3436256LL;
	static uint64_t x4274 = UINT64_MAX;
	uint8_t x4275 = 2U;
	volatile int64_t x4276 = INT64_MIN;

	t80 = ((x4273&(x4274>>x4275))%x4276);

	if (t80 != 3436256LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x4401 = INT16_MIN;
	int8_t x4402 = 5;
	uint8_t x4404 = UINT8_MAX;
	int32_t t81 = -7;

	t81 = ((x4401&(x4402>>x4403))%x4404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x4545 = UINT8_MAX;
	static uint8_t x4547 = 0U;
	volatile uint16_t x4548 = 593U;
	uint64_t t82 = 8228119962089513LLU;

	t82 = ((x4545&(x4546>>x4547))%x4548);

	if (t82 != 193LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x4561 = 0U;
	uint8_t x4562 = 1U;
	uint16_t x4563 = 7U;
	static volatile uint8_t x4564 = UINT8_MAX;
	volatile int32_t t83 = 30096218;

	t83 = ((x4561&(x4562>>x4563))%x4564);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4573 = INT32_MAX;
	int64_t x4574 = INT64_MAX;
	volatile int8_t x4575 = 54;
	volatile int32_t x4576 = 276520;
	volatile int64_t t84 = -146116LL;

	t84 = ((x4573&(x4574>>x4575))%x4576);

	if (t84 != 511LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x4697 = -1LL;
	volatile uint16_t x4698 = 12U;
	volatile int16_t x4699 = 28;
	volatile int8_t x4700 = INT8_MIN;
	volatile int64_t t85 = 218224078261LL;

	t85 = ((x4697&(x4698>>x4699))%x4700);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x4717 = UINT8_MAX;
	int8_t x4719 = 1;
	static int32_t x4720 = INT32_MAX;
	volatile int32_t t86 = 435847691;

	t86 = ((x4717&(x4718>>x4719))%x4720);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x4745 = 39LLU;
	int64_t x4746 = 6460968245621LL;
	volatile int16_t x4747 = 1;
	int16_t x4748 = INT16_MIN;
	uint64_t t87 = 111LLU;

	t87 = ((x4745&(x4746>>x4747))%x4748);

	if (t87 != 34LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x4754 = 209;
	static int8_t x4755 = 5;
	int8_t x4756 = INT8_MIN;
	static int32_t t88 = 33;

	t88 = ((x4753&(x4754>>x4755))%x4756);

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x4833 = 1353542730766692544LL;
	volatile int64_t x4834 = INT64_MAX;
	volatile int64_t t89 = -38896874894LL;

	t89 = ((x4833&(x4834>>x4835))%x4836);

	if (t89 != 16LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x4841 = -4161570585LL;
	static int32_t x4843 = 3;
	int8_t x4844 = -7;

	t90 = ((x4841&(x4842>>x4843))%x4844);

	if (t90 != 6LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4869 = -1;
	uint8_t x4870 = UINT8_MAX;
	uint32_t x4871 = 18U;
	uint64_t x4872 = UINT64_MAX;

	t91 = ((x4869&(x4870>>x4871))%x4872);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4881 = 709709792078658957LLU;
	uint16_t x4883 = 26U;
	int32_t x4884 = -1;
	volatile uint64_t t92 = 1832107LLU;

	t92 = ((x4881&(x4882>>x4883))%x4884);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x4926 = 22900LLU;
	uint8_t x4927 = 0U;
	int32_t x4928 = -18448;
	static volatile uint64_t t93 = 24131097279LLU;

	t93 = ((x4925&(x4926>>x4927))%x4928);

	if (t93 != 22900LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x4954 = 489465LLU;
	volatile uint64_t x4955 = 63LLU;
	volatile uint64_t t94 = 44903168073625LLU;

	t94 = ((x4953&(x4954>>x4955))%x4956);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x5061 = INT32_MIN;
	uint16_t x5062 = UINT16_MAX;
	int16_t x5063 = 3;
	static volatile int16_t x5064 = -1;
	int32_t t95 = 48618819;

	t95 = ((x5061&(x5062>>x5063))%x5064);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x5098 = 89931LLU;
	volatile uint32_t x5099 = 4U;
	volatile uint16_t x5100 = UINT16_MAX;
	static volatile uint64_t t96 = 1740093660LLU;

	t96 = ((x5097&(x5098>>x5099))%x5100);

	if (t96 != 1072LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x5133 = INT8_MAX;
	uint8_t x5135 = 0U;
	static int8_t x5136 = INT8_MIN;

	t97 = ((x5133&(x5134>>x5135))%x5136);

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x5149 = INT32_MAX;
	uint64_t x5150 = UINT64_MAX;
	static volatile uint8_t x5151 = 29U;
	static int32_t x5152 = INT32_MAX;
	uint64_t t98 = 27825705861619LLU;

	t98 = ((x5149&(x5150>>x5151))%x5152);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x5289 = INT16_MIN;
	uint32_t x5290 = 539U;
	volatile uint8_t x5291 = 3U;
	static int64_t x5292 = INT64_MIN;

	t99 = ((x5289&(x5290>>x5291))%x5292);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

