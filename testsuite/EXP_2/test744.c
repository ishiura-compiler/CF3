#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x28 = 0U;
static volatile int32_t t0 = -25293;
uint16_t x33 = 0U;
volatile int64_t t1 = 28888879875486990LL;
static int16_t x87 = -1;
volatile int64_t t4 = 105925156785547LL;
int16_t x135 = -1;
static volatile uint32_t x136 = 212451U;
uint8_t x138 = 0U;
int16_t x217 = INT16_MAX;
volatile uint16_t x219 = 2923U;
int8_t x231 = 1;
uint32_t x234 = UINT32_MAX;
volatile int16_t x251 = -1;
int64_t x273 = 15LL;
int64_t t12 = -5429207111374LL;
volatile int16_t x308 = INT16_MIN;
static volatile uint16_t x309 = 10U;
static volatile uint64_t x325 = UINT64_MAX;
volatile int32_t x358 = INT32_MIN;
volatile int8_t x359 = INT8_MIN;
int32_t x360 = 116076;
int32_t x383 = 3;
volatile int16_t x389 = 4;
uint64_t x397 = 533504065LLU;
volatile int64_t x402 = -34335298790388030LL;
uint32_t x453 = 1718017U;
volatile int16_t x465 = 13;
volatile int16_t x486 = INT16_MIN;
int32_t t26 = -59;
int32_t x501 = 92;
uint8_t x504 = UINT8_MAX;
static int32_t x521 = 25;
uint32_t x523 = 8U;
uint8_t x539 = 2U;
int64_t x540 = -1LL;
int8_t x549 = INT8_MAX;
int32_t x550 = 7;
volatile int32_t x607 = -1;
int8_t x616 = INT8_MIN;
int8_t x675 = -1;
int32_t x731 = -3;
static uint64_t x761 = UINT64_MAX;
uint16_t x762 = 178U;
volatile uint32_t x770 = 47262U;
int8_t x772 = INT8_MAX;
static int32_t x778 = -1;
volatile uint8_t x798 = 34U;
static uint16_t x821 = 12U;
uint32_t x849 = UINT32_MAX;
int64_t x851 = -1LL;
int64_t x896 = -1LL;
static volatile uint32_t t49 = 3421U;
uint8_t x913 = UINT8_MAX;
int32_t x914 = -1;
static int64_t x991 = INT64_MIN;
int64_t x1010 = INT64_MIN;
volatile int32_t x1012 = INT32_MIN;
static uint64_t t52 = 3018073767389252268LLU;
static volatile uint8_t x1050 = 12U;
int64_t x1051 = -1346834LL;
int8_t x1052 = INT8_MAX;
volatile int32_t t53 = 6661363;
uint32_t t56 = 3U;
volatile uint32_t t57 = 672U;
int8_t x1180 = 9;
volatile int32_t t58 = -1356;
uint64_t x1261 = UINT64_MAX;
uint32_t x1290 = 1U;
int8_t x1333 = 11;
int8_t x1335 = -47;
volatile int64_t x1336 = 117033LL;
int8_t x1347 = -1;
uint64_t x1492 = 960339811207225521LLU;
uint16_t x1614 = 10791U;
uint32_t x1673 = UINT32_MAX;
uint16_t x1674 = UINT16_MAX;
int16_t x1715 = -1;
volatile uint32_t t75 = 31U;
volatile int16_t x1745 = 7099;
static int16_t x1783 = INT16_MIN;
static int8_t x1784 = 0;
volatile int32_t t78 = 119114;
volatile uint32_t x1813 = 1001748591U;
uint8_t x1815 = 1U;
volatile uint64_t t81 = 3LLU;
int64_t x1846 = 1937082268291626130LL;
int32_t x1847 = -1;
int64_t x1848 = -128322302392258007LL;
static int64_t x1937 = INT64_MAX;
static int64_t x1939 = INT64_MAX;
int32_t x1982 = -6109;
uint64_t x1985 = 0LLU;
volatile uint64_t t88 = 3561681LLU;
int64_t t89 = -2880071752137499479LL;
uint8_t x1993 = 108U;
volatile uint32_t x2026 = 1U;
static uint64_t x2097 = 73LLU;
volatile int64_t t95 = 27987128821LL;
int16_t x2168 = -9220;
volatile uint8_t x2176 = 4U;
uint16_t x2194 = UINT16_MAX;
int32_t x2218 = INT32_MIN;
volatile int16_t x2220 = 0;


void f0(void) {
	uint16_t x25 = 358U;
	volatile int16_t x26 = 1;
	int32_t x27 = INT32_MIN;

	t0 = ((x25<<(x26%x27))*x28);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x34 = 11;
	int32_t x35 = INT32_MIN;
	int64_t x36 = 129707936273123246LL;

	t1 = ((x33<<(x34%x35))*x36);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x45 = 742304LLU;
	int8_t x46 = INT8_MAX;
	static uint32_t x47 = 2U;
	int16_t x48 = -1;
	static uint64_t t2 = 847LLU;

	t2 = ((x45<<(x46%x47))*x48);

	if (t2 != 18446744073708067008LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x65 = 11424741LL;
	static int64_t x66 = INT64_MAX;
	int32_t x67 = INT32_MAX;
	int64_t x68 = -637697769LL;
	int64_t t3 = -485535185731733869LL;

	t3 = ((x65<<(x66%x67))*x68);

	if (t3 != -14571063694205658LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x85 = 16073224LL;
	volatile int16_t x86 = 1;
	static uint32_t x88 = 11791U;

	t4 = ((x85<<(x86%x87))*x88);

	if (t4 != 189519384184LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x133 = 25U;
	int64_t x134 = INT64_MAX;
	uint32_t t5 = 2126534493U;

	t5 = ((x133<<(x134%x135))*x136);

	if (t5 != 5311275U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int8_t x139 = 1;
	volatile int32_t x140 = INT32_MIN;
	volatile uint64_t t6 = 15LLU;

	t6 = ((x137<<(x138%x139))*x140);

	if (t6 != 2147483648LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x149 = UINT8_MAX;
	uint16_t x150 = 0U;
	static int16_t x151 = 123;
	static uint64_t x152 = 1422493688590LLU;
	volatile uint64_t t7 = 27514541639039319LLU;

	t7 = ((x149<<(x150%x151))*x152);

	if (t7 != 362735890590450LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x218 = 1LLU;
	uint32_t x220 = 77295U;
	volatile uint32_t t8 = 247591906U;

	t8 = ((x217<<(x218%x219))*x220);

	if (t8 != 770483234U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x229 = UINT8_MAX;
	int16_t x230 = -1;
	int8_t x232 = -1;
	int32_t t9 = -11;

	t9 = ((x229<<(x230%x231))*x232);

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x233 = 76U;
	int64_t x235 = -1LL;
	uint16_t x236 = 21U;
	volatile int32_t t10 = 30;

	t10 = ((x233<<(x234%x235))*x236);

	if (t10 != 1596) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	uint8_t x252 = UINT8_MAX;
	int32_t t11 = -13;

	t11 = ((x249<<(x250%x251))*x252);

	if (t11 != 65025) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x274 = 1U;
	int16_t x275 = INT16_MIN;
	static uint8_t x276 = 2U;

	t12 = ((x273<<(x274%x275))*x276);

	if (t12 != 60LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x305 = UINT64_MAX;
	int8_t x306 = INT8_MIN;
	int32_t x307 = -1;
	volatile uint64_t t13 = 44596945LLU;

	t13 = ((x305<<(x306%x307))*x308);

	if (t13 != 32768LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x310 = INT32_MIN;
	static volatile int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;
	int32_t t14 = 625694;

	t14 = ((x309<<(x310%x311))*x312);

	if (t14 != -327680) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x326 = 5766750295362994LL;
	static int16_t x327 = -1;
	int16_t x328 = INT16_MAX;
	volatile uint64_t t15 = 3174LLU;

	t15 = ((x325<<(x326%x327))*x328);

	if (t15 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x349 = UINT32_MAX;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -1;
	uint64_t x352 = 255889055LLU;
	uint64_t t16 = 5621502482660815803LLU;

	t16 = ((x349<<(x350%x351))*x352);

	if (t16 != 1099035122373456225LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x357 = 281;
	static int32_t t17 = -41924427;

	t17 = ((x357<<(x358%x359))*x360);

	if (t17 != 32617356) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x381 = 5411427U;
	volatile uint32_t x382 = 0U;
	int8_t x384 = INT8_MAX;
	uint32_t t18 = 32279520U;

	t18 = ((x381<<(x382%x383))*x384);

	if (t18 != 687251229U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x390 = 0;
	uint8_t x391 = 19U;
	uint8_t x392 = 5U;
	int32_t t19 = -161512991;

	t19 = ((x389<<(x390%x391))*x392);

	if (t19 != 20) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x398 = 1;
	int32_t x399 = -1;
	volatile uint64_t x400 = 465881127319383367LLU;
	volatile uint64_t t20 = 32211518395253060LLU;

	t20 = ((x397<<(x398%x399))*x400);

	if (t20 != 937382894326374151LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x401 = UINT64_MAX;
	uint8_t x403 = 2U;
	volatile int64_t x404 = INT64_MIN;
	static uint64_t t21 = 119LLU;

	t21 = ((x401<<(x402%x403))*x404);

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x429 = INT16_MAX;
	int8_t x430 = INT8_MIN;
	uint16_t x431 = 1U;
	int8_t x432 = INT8_MAX;
	int32_t t22 = 2;

	t22 = ((x429<<(x430%x431))*x432);

	if (t22 != 4161409) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x437 = INT8_MAX;
	static int64_t x438 = -1LL;
	static int8_t x439 = -1;
	int8_t x440 = INT8_MIN;
	int32_t t23 = 35690;

	t23 = ((x437<<(x438%x439))*x440);

	if (t23 != -16256) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x454 = INT32_MIN;
	static int16_t x455 = -1;
	uint64_t x456 = UINT64_MAX;
	static uint64_t t24 = 1449310673125187LLU;

	t24 = ((x453<<(x454%x455))*x456);

	if (t24 != 18446744073707833599LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x466 = 15U;
	static uint64_t x467 = 127331232272799236LLU;
	static int8_t x468 = INT8_MAX;
	int32_t t25 = -78133;

	t25 = ((x465<<(x466%x467))*x468);

	if (t25 != 54099968) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x485 = 1U;
	int32_t x487 = -1;
	uint16_t x488 = 1659U;

	t26 = ((x485<<(x486%x487))*x488);

	if (t26 != 1659) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x502 = INT16_MIN;
	int8_t x503 = INT8_MIN;
	int32_t t27 = 1953;

	t27 = ((x501<<(x502%x503))*x504);

	if (t27 != 23460) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x509 = INT8_MAX;
	uint8_t x510 = 16U;
	static volatile int8_t x511 = INT8_MAX;
	static uint8_t x512 = 92U;
	volatile int32_t t28 = 4;

	t28 = ((x509<<(x510%x511))*x512);

	if (t28 != 765722624) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x522 = UINT64_MAX;
	int16_t x524 = INT16_MIN;
	static int32_t t29 = 10025;

	t29 = ((x521<<(x522%x523))*x524);

	if (t29 != -104857600) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x537 = 27;
	int64_t x538 = INT64_MIN;
	int64_t t30 = 2129021604881331LL;

	t30 = ((x537<<(x538%x539))*x540);

	if (t30 != -27LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x551 = -1;
	int16_t x552 = INT16_MIN;
	volatile int32_t t31 = 263750877;

	t31 = ((x549<<(x550%x551))*x552);

	if (t31 != -4161536) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x605 = INT16_MAX;
	static int8_t x606 = -1;
	uint16_t x608 = UINT16_MAX;
	int32_t t32 = 15;

	t32 = ((x605<<(x606%x607))*x608);

	if (t32 != 2147385345) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x613 = 0;
	static uint8_t x614 = 4U;
	uint16_t x615 = UINT16_MAX;
	static volatile int32_t t33 = 28;

	t33 = ((x613<<(x614%x615))*x616);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x673 = 35U;
	uint16_t x674 = 110U;
	uint32_t x676 = UINT32_MAX;
	volatile uint32_t t34 = 52U;

	t34 = ((x673<<(x674%x675))*x676);

	if (t34 != 4294967261U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x701 = 5103U;
	int16_t x702 = INT16_MIN;
	volatile int8_t x703 = INT8_MIN;
	int8_t x704 = INT8_MAX;
	int32_t t35 = 0;

	t35 = ((x701<<(x702%x703))*x704);

	if (t35 != 648081) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x709 = UINT8_MAX;
	uint8_t x710 = 3U;
	int32_t x711 = -111;
	static uint16_t x712 = UINT16_MAX;
	static int32_t t36 = 0;

	t36 = ((x709<<(x710%x711))*x712);

	if (t36 != 133691400) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x717 = 14LLU;
	static uint16_t x718 = UINT16_MAX;
	static int8_t x719 = INT8_MAX;
	int64_t x720 = 62723414629988LL;
	volatile uint64_t t37 = 39015732LLU;

	t37 = ((x717<<(x718%x719))*x720);

	if (t37 != 7025022438558656LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x729 = 56535007676753LLU;
	int16_t x730 = 9513;
	volatile uint16_t x732 = UINT16_MAX;
	volatile uint64_t t38 = 4209730726LLU;

	t38 = ((x729<<(x730%x731))*x732);

	if (t38 != 3705021728096007855LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x745 = 50U;
	int16_t x746 = 0;
	uint64_t x747 = 259624LLU;
	int32_t x748 = -11;
	static int32_t t39 = -1;

	t39 = ((x745<<(x746%x747))*x748);

	if (t39 != -550) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x763 = 1;
	volatile int32_t x764 = -3811;
	volatile uint64_t t40 = 891LLU;

	t40 = ((x761<<(x762%x763))*x764);

	if (t40 != 3811LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x769 = 179029957931455329LLU;
	static uint16_t x771 = 6U;
	volatile uint64_t t41 = 162058359926152480LLU;

	t41 = ((x769<<(x770%x771))*x772);

	if (t41 != 4290060583585275167LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x773 = UINT16_MAX;
	int64_t x774 = -36058354263480959LL;
	int16_t x775 = 1;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t42 = 290;

	t42 = ((x773<<(x774%x775))*x776);

	if (t42 != 16711425) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x777 = 86U;
	static volatile uint16_t x779 = 1U;
	static volatile int8_t x780 = INT8_MIN;
	int32_t t43 = 25398410;

	t43 = ((x777<<(x778%x779))*x780);

	if (t43 != -11008) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x781 = UINT16_MAX;
	static volatile uint16_t x782 = 1U;
	static int64_t x783 = -1LL;
	int8_t x784 = 0;
	volatile int32_t t44 = 951;

	t44 = ((x781<<(x782%x783))*x784);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x797 = UINT64_MAX;
	uint32_t x799 = 77830U;
	int8_t x800 = INT8_MIN;
	uint64_t t45 = 0LLU;

	t45 = ((x797<<(x798%x799))*x800);

	if (t45 != 2199023255552LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x822 = INT64_MIN;
	static int16_t x823 = -1;
	uint8_t x824 = 14U;
	int32_t t46 = 480703;

	t46 = ((x821<<(x822%x823))*x824);

	if (t46 != 168) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x850 = -1;
	static uint8_t x852 = UINT8_MAX;
	uint32_t t47 = 105792676U;

	t47 = ((x849<<(x850%x851))*x852);

	if (t47 != 4294967041U) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x893 = 316217;
	int8_t x894 = INT8_MIN;
	volatile int16_t x895 = 1;
	int64_t t48 = -3631065277043079LL;

	t48 = ((x893<<(x894%x895))*x896);

	if (t48 != -316217LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x901 = 1499U;
	static int32_t x902 = INT32_MIN;
	volatile int8_t x903 = 8;
	static volatile uint32_t x904 = 1896U;

	t49 = ((x901<<(x902%x903))*x904);

	if (t49 != 2842104U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x915 = UINT32_MAX;
	int16_t x916 = INT16_MAX;
	int32_t t50 = 128;

	t50 = ((x913<<(x914%x915))*x916);

	if (t50 != 8355585) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x989 = INT16_MAX;
	static uint8_t x990 = 0U;
	int16_t x992 = INT16_MIN;
	volatile int32_t t51 = -1;

	t51 = ((x989<<(x990%x991))*x992);

	if (t51 != -1073709056) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x1009 = UINT64_MAX;
	int64_t x1011 = INT64_MIN;

	t52 = ((x1009<<(x1010%x1011))*x1012);

	if (t52 != 2147483648LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x1049 = 5;

	t53 = ((x1049<<(x1050%x1051))*x1052);

	if (t53 != 2600960) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x1097 = 0;
	static volatile int64_t x1098 = -4463320229345148088LL;
	int32_t x1099 = -1;
	uint8_t x1100 = 100U;
	int32_t t54 = 60511577;

	t54 = ((x1097<<(x1098%x1099))*x1100);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x1113 = 1LL;
	int8_t x1114 = 1;
	uint64_t x1115 = 1276450LLU;
	volatile int32_t x1116 = 152;
	volatile int64_t t55 = -3233LL;

	t55 = ((x1113<<(x1114%x1115))*x1116);

	if (t55 != 304LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x1117 = INT8_MAX;
	static int32_t x1118 = INT32_MIN;
	uint16_t x1119 = 1U;
	uint32_t x1120 = UINT32_MAX;

	t56 = ((x1117<<(x1118%x1119))*x1120);

	if (t56 != 4294967169U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1157 = 30U;
	uint8_t x1158 = UINT8_MAX;
	volatile uint16_t x1159 = 5U;
	volatile uint32_t x1160 = 1619582706U;

	t57 = ((x1157<<(x1158%x1159))*x1160);

	if (t57 != 1342840924U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x1177 = INT8_MAX;
	uint64_t x1178 = UINT64_MAX;
	static int16_t x1179 = -1;

	t58 = ((x1177<<(x1178%x1179))*x1180);

	if (t58 != 1143) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x1201 = 2248328022353LLU;
	uint16_t x1202 = UINT16_MAX;
	uint8_t x1203 = 107U;
	int8_t x1204 = 0;
	volatile uint64_t t59 = 41055700968LLU;

	t59 = ((x1201<<(x1202%x1203))*x1204);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x1229 = UINT64_MAX;
	int32_t x1230 = INT32_MIN;
	volatile int8_t x1231 = -1;
	volatile int32_t x1232 = -2824;
	uint64_t t60 = 591LLU;

	t60 = ((x1229<<(x1230%x1231))*x1232);

	if (t60 != 2824LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x1262 = INT64_MIN;
	uint32_t x1263 = 1U;
	int8_t x1264 = INT8_MIN;
	volatile uint64_t t61 = 106140LLU;

	t61 = ((x1261<<(x1262%x1263))*x1264);

	if (t61 != 128LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x1289 = INT16_MAX;
	int8_t x1291 = INT8_MIN;
	static int8_t x1292 = INT8_MIN;
	int32_t t62 = -392010;

	t62 = ((x1289<<(x1290%x1291))*x1292);

	if (t62 != -8388352) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x1297 = 334838LL;
	volatile uint16_t x1298 = 26U;
	static uint32_t x1299 = UINT32_MAX;
	uint64_t x1300 = UINT64_MAX;
	uint64_t t63 = 2LLU;

	t63 = ((x1297<<(x1298%x1299))*x1300);

	if (t63 != 18446721603111747584LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x1334 = 1LLU;
	volatile int64_t t64 = -13147846121088LL;

	t64 = ((x1333<<(x1334%x1335))*x1336);

	if (t64 != 2574726LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1345 = 323810133888103LL;
	int16_t x1346 = INT16_MIN;
	uint16_t x1348 = 0U;
	int64_t t65 = -115017LL;

	t65 = ((x1345<<(x1346%x1347))*x1348);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1361 = 165048U;
	volatile int32_t x1362 = INT32_MIN;
	static int8_t x1363 = INT8_MIN;
	volatile int8_t x1364 = -1;
	uint32_t t66 = 46U;

	t66 = ((x1361<<(x1362%x1363))*x1364);

	if (t66 != 4294802248U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x1469 = 317608625U;
	volatile uint8_t x1470 = 11U;
	static int32_t x1471 = INT32_MIN;
	uint32_t x1472 = 5U;
	volatile uint32_t t67 = 8773937U;

	t67 = ((x1469<<(x1470%x1471))*x1472);

	if (t67 != 1022076928U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1481 = 0LLU;
	uint16_t x1482 = 0U;
	int64_t x1483 = INT64_MIN;
	volatile int8_t x1484 = INT8_MAX;
	static volatile uint64_t t68 = 1LLU;

	t68 = ((x1481<<(x1482%x1483))*x1484);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x1489 = INT16_MAX;
	static int64_t x1490 = 155039999802LL;
	int64_t x1491 = -682LL;
	uint64_t t69 = 593646290727126899LLU;

	t69 = ((x1489<<(x1490%x1491))*x1492);

	if (t69 != 12256501771565257664LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x1537 = UINT32_MAX;
	int16_t x1538 = 0;
	volatile int8_t x1539 = INT8_MIN;
	int64_t x1540 = -5593167LL;
	volatile int64_t t70 = -428019147LL;

	t70 = ((x1537<<(x1538%x1539))*x1540);

	if (t70 != -24022469340473265LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1605 = UINT32_MAX;
	static volatile int32_t x1606 = INT32_MIN;
	static int8_t x1607 = -1;
	int8_t x1608 = 24;
	uint32_t t71 = 868391981U;

	t71 = ((x1605<<(x1606%x1607))*x1608);

	if (t71 != 4294967272U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x1613 = 1413758119LLU;
	uint8_t x1615 = 7U;
	int8_t x1616 = -1;
	uint64_t t72 = 41732825LLU;

	t72 = ((x1613<<(x1614%x1615))*x1616);

	if (t72 != 18446744051089421712LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1629 = 4U;
	int64_t x1630 = INT64_MAX;
	int32_t x1631 = -1;
	int16_t x1632 = -1;
	int32_t t73 = 276;

	t73 = ((x1629<<(x1630%x1631))*x1632);

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x1675 = -30;
	volatile uint32_t x1676 = 11208U;
	uint32_t t74 = 914966105U;

	t74 = ((x1673<<(x1674%x1675))*x1676);

	if (t74 != 3927703552U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x1713 = UINT32_MAX;
	int8_t x1714 = -1;
	volatile int16_t x1716 = INT16_MIN;

	t75 = ((x1713<<(x1714%x1715))*x1716);

	if (t75 != 32768U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1746 = -1;
	int8_t x1747 = -1;
	uint64_t x1748 = 973780132119510LLU;
	uint64_t t76 = 13749780284969LLU;

	t76 = ((x1745<<(x1746%x1747))*x1748);

	if (t76 != 6912865157916401490LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x1773 = 2U;
	volatile int16_t x1774 = -1;
	static uint32_t x1775 = UINT32_MAX;
	int8_t x1776 = INT8_MIN;
	volatile int32_t t77 = 7606;

	t77 = ((x1773<<(x1774%x1775))*x1776);

	if (t77 != -256) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x1781 = 112U;
	volatile int16_t x1782 = INT16_MIN;

	t78 = ((x1781<<(x1782%x1783))*x1784);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1785 = 527171003818840LLU;
	int8_t x1786 = -1;
	int16_t x1787 = -1;
	int32_t x1788 = -48976442;
	uint64_t t79 = 7622650277209LLU;

	t79 = ((x1785<<(x1786%x1787))*x1788);

	if (t79 != 6481610578176495120LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1814 = -13;
	volatile int64_t x1816 = 9940689LL;
	static volatile int64_t t80 = -23767462975LL;

	t80 = ((x1813<<(x1814%x1815))*x1816);

	if (t80 != 9958071199319199LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1833 = 114404420LLU;
	static int32_t x1834 = 1350884;
	int8_t x1835 = 22;
	int64_t x1836 = -1LL;

	t81 = ((x1833<<(x1834%x1835))*x1836);

	if (t81 != 18446714083277275136LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x1845 = 0U;
	volatile int64_t t82 = 14855190689LL;

	t82 = ((x1845<<(x1846%x1847))*x1848);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1877 = UINT64_MAX;
	uint16_t x1878 = UINT16_MAX;
	volatile int16_t x1879 = -1;
	int8_t x1880 = INT8_MIN;
	volatile uint64_t t83 = 9532LLU;

	t83 = ((x1877<<(x1878%x1879))*x1880);

	if (t83 != 128LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x1909 = INT8_MAX;
	int64_t x1910 = INT64_MAX;
	volatile int64_t x1911 = -1LL;
	volatile uint16_t x1912 = 21855U;
	int32_t t84 = 127926765;

	t84 = ((x1909<<(x1910%x1911))*x1912);

	if (t84 != 2775585) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1938 = 0U;
	uint64_t x1940 = UINT64_MAX;
	static uint64_t t85 = 321602199093535430LLU;

	t85 = ((x1937<<(x1938%x1939))*x1940);

	if (t85 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1969 = 6U;
	volatile uint32_t x1970 = UINT32_MAX;
	int32_t x1971 = INT32_MAX;
	int32_t x1972 = -1;
	volatile int32_t t86 = 5;

	t86 = ((x1969<<(x1970%x1971))*x1972);

	if (t86 != -12) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x1981 = UINT16_MAX;
	uint64_t x1983 = 6LLU;
	volatile uint32_t x1984 = 1070U;
	uint32_t t87 = 7183U;

	t87 = ((x1981<<(x1982%x1983))*x1984);

	if (t87 != 560979600U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1986 = UINT32_MAX;
	uint16_t x1987 = UINT16_MAX;
	int16_t x1988 = -44;

	t88 = ((x1985<<(x1986%x1987))*x1988);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1989 = 9595921U;
	uint16_t x1990 = 27426U;
	static uint8_t x1991 = 1U;
	int64_t x1992 = 831010998443LL;

	t89 = ((x1989<<(x1990%x1991))*x1992);

	if (t89 != 7974315891190151003LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1994 = UINT32_MAX;
	int16_t x1995 = INT16_MAX;
	int8_t x1996 = INT8_MIN;
	static int32_t t90 = 11370338;

	t90 = ((x1993<<(x1994%x1995))*x1996);

	if (t90 != -110592) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x2025 = 68516245U;
	int64_t x2027 = -31662316706LL;
	volatile int64_t x2028 = -1LL;
	static volatile int64_t t91 = 515890188LL;

	t91 = ((x2025<<(x2026%x2027))*x2028);

	if (t91 != -137032490LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x2053 = 132;
	volatile uint32_t x2054 = UINT32_MAX;
	uint32_t x2055 = UINT32_MAX;
	uint8_t x2056 = UINT8_MAX;
	int32_t t92 = 18;

	t92 = ((x2053<<(x2054%x2055))*x2056);

	if (t92 != 33660) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x2098 = INT16_MIN;
	static volatile int16_t x2099 = INT16_MIN;
	int64_t x2100 = -9189LL;
	volatile uint64_t t93 = 366349009LLU;

	t93 = ((x2097<<(x2098%x2099))*x2100);

	if (t93 != 18446744073708880819LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x2125 = 18;
	uint8_t x2126 = 1U;
	int64_t x2127 = -1LL;
	uint8_t x2128 = 1U;
	int32_t t94 = -156327131;

	t94 = ((x2125<<(x2126%x2127))*x2128);

	if (t94 != 18) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x2153 = 2929275LL;
	volatile uint8_t x2154 = UINT8_MAX;
	uint8_t x2155 = UINT8_MAX;
	volatile int8_t x2156 = -1;

	t95 = ((x2153<<(x2154%x2155))*x2156);

	if (t95 != -2929275LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x2165 = UINT32_MAX;
	int16_t x2166 = 1793;
	int16_t x2167 = 13;
	static uint32_t t96 = 19U;

	t96 = ((x2165<<(x2166%x2167))*x2168);

	if (t96 != 37765120U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x2173 = 1801062555056LL;
	volatile int64_t x2174 = INT64_MIN;
	volatile int32_t x2175 = INT32_MIN;
	static volatile int64_t t97 = -2172755515045943LL;

	t97 = ((x2173<<(x2174%x2175))*x2176);

	if (t97 != 7204250220224LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x2193 = INT32_MAX;
	uint16_t x2195 = UINT16_MAX;
	volatile int32_t x2196 = -1;
	static int32_t t98 = 150058601;

	t98 = ((x2193<<(x2194%x2195))*x2196);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x2217 = 673;
	int16_t x2219 = INT16_MIN;
	volatile int32_t t99 = -21117476;

	t99 = ((x2217<<(x2218%x2219))*x2220);

	if (t99 != 0) { NG(); } else { ; }
	
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

