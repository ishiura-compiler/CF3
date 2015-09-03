#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 12775847LL;
uint8_t x83 = 123U;
uint8_t x84 = UINT8_MAX;
int32_t x95 = 2;
volatile uint32_t x113 = 15937110U;
uint16_t x114 = 15079U;
int16_t x123 = INT16_MIN;
uint32_t t6 = 0U;
int64_t x182 = INT64_MIN;
static volatile uint32_t t8 = 68010U;
static volatile int64_t x190 = 470421844410162LL;
volatile uint64_t x192 = UINT64_MAX;
volatile uint32_t t10 = 1884U;
volatile uint16_t x234 = UINT16_MAX;
int8_t x276 = INT8_MAX;
static uint64_t x293 = 2LLU;
int32_t x294 = 348725368;
uint64_t t15 = 15629LLU;
int8_t x327 = 1;
static int64_t x358 = 6LL;
static uint32_t x360 = UINT32_MAX;
volatile uint32_t t19 = 296896082U;
uint16_t x417 = 1764U;
uint16_t x418 = UINT16_MAX;
static volatile uint64_t t20 = 8973478897166883LLU;
uint64_t x421 = UINT64_MAX;
int8_t x423 = -1;
int64_t x442 = -11982851767294LL;
static uint64_t x457 = 426223056840466LLU;
uint32_t x469 = 7U;
int16_t x505 = INT16_MAX;
int16_t x628 = -1;
int8_t x736 = 4;
volatile int32_t x737 = INT32_MAX;
int64_t x740 = INT64_MIN;
volatile int32_t x778 = INT32_MAX;
int64_t x806 = 0LL;
static uint16_t x856 = 1994U;
volatile uint64_t x909 = UINT64_MAX;
uint64_t t38 = 79999294635LLU;
static int16_t x913 = INT16_MAX;
int64_t x914 = INT64_MIN;
uint16_t x931 = 1U;
uint8_t x1030 = 18U;
int32_t x1031 = -336804449;
static int32_t x1114 = -1;
volatile int32_t x1118 = INT32_MAX;
uint8_t x1185 = 53U;
volatile int8_t x1230 = INT8_MIN;
int8_t x1309 = INT8_MAX;
uint64_t x1311 = 908090960LLU;
int8_t x1313 = 62;
int32_t x1335 = 9;
uint64_t x1336 = UINT64_MAX;
volatile int16_t x1349 = 1745;
static volatile int32_t t57 = 420741406;
static int32_t x1377 = 0;
volatile int64_t x1390 = INT64_MIN;
int32_t x1392 = INT32_MIN;
int16_t x1409 = INT16_MAX;
static int32_t x1445 = INT32_MAX;
uint8_t x1453 = 21U;
int32_t x1555 = INT32_MIN;
uint16_t x1556 = UINT16_MAX;
static int64_t x1591 = -1LL;
int8_t x1595 = -1;
int64_t x1635 = INT64_MIN;
volatile int32_t t71 = -16002;
uint32_t t72 = 4U;
static uint8_t x1697 = UINT8_MAX;
static int32_t x1700 = INT32_MIN;
int8_t x1712 = INT8_MAX;
int8_t x1716 = 30;
uint64_t x1728 = UINT64_MAX;
uint64_t t76 = 5740470265986137458LLU;
static uint32_t x1739 = 1U;
int32_t x1825 = 11201629;
volatile int16_t x1827 = INT16_MIN;
static int32_t x1838 = INT32_MAX;
int32_t x1884 = INT32_MIN;
static uint8_t x1892 = 21U;
uint64_t x1897 = 60269740233026498LLU;
int32_t x1900 = INT32_MAX;
int8_t x1945 = INT8_MAX;
static volatile uint8_t x1947 = 15U;
uint16_t x1949 = 224U;
static int64_t x1954 = -1LL;
static volatile uint64_t t87 = 80848757786496712LLU;
volatile uint32_t x1973 = 1892U;
uint32_t x1976 = UINT32_MAX;
volatile int64_t x2002 = INT64_MAX;
uint64_t x2004 = 225949035252423LLU;
uint16_t x2048 = UINT16_MAX;
int16_t x2055 = INT16_MIN;
uint64_t x2081 = 121750768910259LLU;
uint32_t x2083 = UINT32_MAX;
static uint8_t x2110 = 2U;
static int32_t x2112 = INT32_MIN;
uint16_t x2129 = UINT16_MAX;
uint8_t x2130 = UINT8_MAX;
uint64_t x2162 = UINT64_MAX;
int64_t x2225 = INT64_MAX;
int8_t x2230 = 0;


void f0(void) {
	int16_t x13 = INT16_MAX;
	volatile int16_t x14 = INT16_MAX;
	int64_t x15 = -1LL;
	static int64_t x16 = 75436989LL;

	t0 = ((x13>>(x14%x15))+x16);

	if (t0 != 75469756LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	volatile uint32_t x22 = 5U;
	volatile int64_t x23 = INT64_MIN;
	int8_t x24 = -1;
	static int32_t t1 = 1225121;

	t1 = ((x21>>(x22%x23))+x24);

	if (t1 != 2046) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x81 = 0;
	int8_t x82 = 3;
	int32_t t2 = -31207;

	t2 = ((x81>>(x82%x83))+x84);

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int64_t x94 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t3 = 492;

	t3 = ((x93>>(x94%x95))+x96);

	if (t3 != 65662) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x115 = 1;
	volatile int64_t x116 = INT64_MIN;
	static int64_t t4 = -368869LL;

	t4 = ((x113>>(x114%x115))+x116);

	if (t4 != -9223372036838838698LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x121 = INT8_MAX;
	static uint8_t x122 = 6U;
	int32_t x124 = -1;
	int32_t t5 = -88559407;

	t5 = ((x121>>(x122%x123))+x124);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x145 = 460002715;
	int16_t x146 = 0;
	int16_t x147 = 301;
	static uint32_t x148 = UINT32_MAX;

	t6 = ((x145>>(x146%x147))+x148);

	if (t6 != 460002714U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MAX;
	int8_t x175 = -1;
	int32_t x176 = INT32_MIN;
	uint32_t t7 = 649854910U;

	t7 = ((x173>>(x174%x175))+x176);

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x181 = UINT32_MAX;
	uint16_t x183 = 1U;
	static int16_t x184 = INT16_MAX;

	t8 = ((x181>>(x182%x183))+x184);

	if (t8 != 32766U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x189 = INT8_MAX;
	int16_t x191 = -1;
	static uint64_t t9 = 6274260500LLU;

	t9 = ((x189>>(x190%x191))+x192);

	if (t9 != 126LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x193 = UINT32_MAX;
	volatile uint8_t x194 = 20U;
	int16_t x195 = -1;
	int32_t x196 = INT32_MIN;

	t10 = ((x193>>(x194%x195))+x196);

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x205 = 59U;
	int64_t x206 = -1LL;
	static uint64_t x207 = UINT64_MAX;
	static int32_t x208 = INT32_MIN;
	volatile int32_t t11 = 703;

	t11 = ((x205>>(x206%x207))+x208);

	if (t11 != -2147483589) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x233 = INT8_MAX;
	int16_t x235 = INT16_MAX;
	int64_t x236 = -1564695985418669LL;
	int64_t t12 = -10182697074268429LL;

	t12 = ((x233>>(x234%x235))+x236);

	if (t12 != -1564695985418606LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x273 = INT16_MAX;
	static int16_t x274 = INT16_MIN;
	static volatile int64_t x275 = -1LL;
	static volatile int32_t t13 = -56;

	t13 = ((x273>>(x274%x275))+x276);

	if (t13 != 32894) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x295 = 3U;
	int32_t x296 = INT32_MAX;
	uint64_t t14 = 62157473756395381LLU;

	t14 = ((x293>>(x294%x295))+x296);

	if (t14 != 2147483648LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x297 = 122LLU;
	volatile int16_t x298 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MAX;

	t15 = ((x297>>(x298%x299))+x300);

	if (t15 != 249LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x309 = 1U;
	uint16_t x310 = UINT16_MAX;
	int64_t x311 = -1LL;
	int16_t x312 = -215;
	int32_t t16 = -828589;

	t16 = ((x309>>(x310%x311))+x312);

	if (t16 != -214) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x325 = 1289U;
	int16_t x326 = 4;
	volatile int32_t x328 = INT32_MIN;
	int32_t t17 = -725;

	t17 = ((x325>>(x326%x327))+x328);

	if (t17 != -2147482359) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x353 = 138098217098476088LL;
	int8_t x354 = 0;
	volatile uint64_t x355 = 341134LLU;
	uint32_t x356 = 43910U;
	int64_t t18 = 419830LL;

	t18 = ((x353>>(x354%x355))+x356);

	if (t18 != 138098217098519998LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x357 = 18359;
	uint64_t x359 = 106175944678448556LLU;

	t19 = ((x357>>(x358%x359))+x360);

	if (t19 != 285U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x419 = -1LL;
	uint64_t x420 = 31293377779439LLU;

	t20 = ((x417>>(x418%x419))+x420);

	if (t20 != 31293377781203LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x422 = -308484126;
	static uint16_t x424 = UINT16_MAX;
	volatile uint64_t t21 = 70264627605LLU;

	t21 = ((x421>>(x422%x423))+x424);

	if (t21 != 65534LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x441 = INT16_MAX;
	int64_t x443 = -1LL;
	static int16_t x444 = INT16_MIN;
	int32_t t22 = -634162;

	t22 = ((x441>>(x442%x443))+x444);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x458 = INT32_MIN;
	int16_t x459 = -1;
	uint16_t x460 = UINT16_MAX;
	static volatile uint64_t t23 = 118238213LLU;

	t23 = ((x457>>(x458%x459))+x460);

	if (t23 != 426223056906001LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x470 = 1;
	int64_t x471 = 124295963175935561LL;
	int32_t x472 = -1;
	volatile uint32_t t24 = 110979789U;

	t24 = ((x469>>(x470%x471))+x472);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x473 = 488802U;
	int8_t x474 = INT8_MAX;
	uint64_t x475 = 3LLU;
	int8_t x476 = INT8_MAX;
	volatile uint32_t t25 = 4242U;

	t25 = ((x473>>(x474%x475))+x476);

	if (t25 != 244528U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x506 = 21156LL;
	volatile int16_t x507 = 7;
	int8_t x508 = 0;
	int32_t t26 = -1890049;

	t26 = ((x505>>(x506%x507))+x508);

	if (t26 != 8191) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x625 = 1927564137LLU;
	volatile uint8_t x626 = 3U;
	volatile uint64_t x627 = UINT64_MAX;
	volatile uint64_t t27 = 183681546953223LLU;

	t27 = ((x625>>(x626%x627))+x628);

	if (t27 != 240945516LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x637 = UINT8_MAX;
	uint8_t x638 = 1U;
	static int64_t x639 = INT64_MIN;
	volatile int64_t x640 = -1LL;
	int64_t t28 = 3434LL;

	t28 = ((x637>>(x638%x639))+x640);

	if (t28 != 126LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x673 = 30254689950LLU;
	int32_t x674 = 2;
	int64_t x675 = INT64_MIN;
	int64_t x676 = INT64_MAX;
	static volatile uint64_t t29 = 167357059975LLU;

	t29 = ((x673>>(x674%x675))+x676);

	if (t29 != 9223372044418448294LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x677 = INT16_MAX;
	volatile int16_t x678 = -100;
	int8_t x679 = -4;
	uint64_t x680 = 860163487009763LLU;
	uint64_t t30 = 1961378992LLU;

	t30 = ((x677>>(x678%x679))+x680);

	if (t30 != 860163487042530LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x733 = 192;
	volatile int64_t x734 = INT64_MAX;
	static uint8_t x735 = 14U;
	volatile int32_t t31 = -8114392;

	t31 = ((x733>>(x734%x735))+x736);

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x738 = 34U;
	volatile uint8_t x739 = 3U;
	static int64_t t32 = 54188LL;

	t32 = ((x737>>(x738%x739))+x740);

	if (t32 != -9223372035781033985LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x777 = 360896767336LLU;
	int8_t x779 = 13;
	static uint8_t x780 = 1U;
	uint64_t t33 = 5990LLU;

	t33 = ((x777>>(x778%x779))+x780);

	if (t33 != 352438250LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x805 = 1406758LLU;
	uint64_t x807 = 62385789130277LLU;
	static int8_t x808 = -20;
	uint64_t t34 = 3836833331256LLU;

	t34 = ((x805>>(x806%x807))+x808);

	if (t34 != 1406738LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x853 = 1;
	uint16_t x854 = 312U;
	int64_t x855 = -1LL;
	int32_t t35 = 658144068;

	t35 = ((x853>>(x854%x855))+x856);

	if (t35 != 1995) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x881 = 192;
	volatile int8_t x882 = INT8_MAX;
	static int8_t x883 = -1;
	int64_t x884 = INT64_MIN;
	int64_t t36 = 208596895070813106LL;

	t36 = ((x881>>(x882%x883))+x884);

	if (t36 != -9223372036854775616LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x897 = 3;
	int8_t x898 = -1;
	static int16_t x899 = -1;
	int16_t x900 = INT16_MIN;
	volatile int32_t t37 = -3604;

	t37 = ((x897>>(x898%x899))+x900);

	if (t37 != -32765) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x910 = 45U;
	uint8_t x911 = UINT8_MAX;
	volatile uint8_t x912 = 1U;

	t38 = ((x909>>(x910%x911))+x912);

	if (t38 != 524288LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x915 = INT8_MIN;
	int32_t x916 = 48404;
	volatile int32_t t39 = -933963389;

	t39 = ((x913>>(x914%x915))+x916);

	if (t39 != 81171) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x925 = 40U;
	int32_t x926 = INT32_MAX;
	int8_t x927 = -1;
	static int8_t x928 = INT8_MIN;
	static volatile int32_t t40 = -443195886;

	t40 = ((x925>>(x926%x927))+x928);

	if (t40 != -88) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x929 = 463748229844LLU;
	static uint32_t x930 = 1U;
	int8_t x932 = INT8_MIN;
	uint64_t t41 = 1204528503276645448LLU;

	t41 = ((x929>>(x930%x931))+x932);

	if (t41 != 463748229716LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x933 = 0U;
	int32_t x934 = 0;
	volatile int16_t x935 = -12604;
	int16_t x936 = 81;
	int32_t t42 = 422;

	t42 = ((x933>>(x934%x935))+x936);

	if (t42 != 81) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x1001 = 120LLU;
	static uint8_t x1002 = 2U;
	volatile int32_t x1003 = -520743477;
	volatile int8_t x1004 = INT8_MIN;
	volatile uint64_t t43 = 1888601401487213649LLU;

	t43 = ((x1001>>(x1002%x1003))+x1004);

	if (t43 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x1005 = 7;
	uint8_t x1006 = 1U;
	int16_t x1007 = -1;
	static int64_t x1008 = INT64_MIN;
	volatile int64_t t44 = -875730754LL;

	t44 = ((x1005>>(x1006%x1007))+x1008);

	if (t44 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x1013 = 8U;
	int64_t x1014 = INT64_MIN;
	int64_t x1015 = -1LL;
	int64_t x1016 = -1LL;
	int64_t t45 = 54166137LL;

	t45 = ((x1013>>(x1014%x1015))+x1016);

	if (t45 != 7LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1029 = 1558970821981LL;
	int16_t x1032 = INT16_MIN;
	static int64_t t46 = -58710095933LL;

	t46 = ((x1029>>(x1030%x1031))+x1032);

	if (t46 != 5914233LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x1113 = 54;
	int8_t x1115 = 1;
	int64_t x1116 = INT64_MIN;
	volatile int64_t t47 = 1LL;

	t47 = ((x1113>>(x1114%x1115))+x1116);

	if (t47 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1117 = 3581LL;
	uint16_t x1119 = 21U;
	uint8_t x1120 = 23U;
	volatile int64_t t48 = 384611627641LL;

	t48 = ((x1117>>(x1118%x1119))+x1120);

	if (t48 != 1813LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x1145 = 49183183034740LL;
	uint32_t x1146 = 13U;
	volatile uint64_t x1147 = 994185LLU;
	uint8_t x1148 = UINT8_MAX;
	int64_t t49 = -212832067LL;

	t49 = ((x1145>>(x1146%x1147))+x1148);

	if (t49 != 6003806777LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x1186 = INT64_MAX;
	static int8_t x1187 = INT8_MAX;
	int64_t x1188 = INT64_MIN;
	static volatile int64_t t50 = -21410LL;

	t50 = ((x1185>>(x1186%x1187))+x1188);

	if (t50 != -9223372036854775755LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x1229 = 1U;
	int8_t x1231 = -1;
	volatile int16_t x1232 = INT16_MIN;
	int32_t t51 = -56855489;

	t51 = ((x1229>>(x1230%x1231))+x1232);

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x1233 = 105445462050051561LLU;
	uint32_t x1234 = UINT32_MAX;
	int32_t x1235 = INT32_MAX;
	static uint16_t x1236 = UINT16_MAX;
	uint64_t t52 = 2812LLU;

	t52 = ((x1233>>(x1234%x1235))+x1236);

	if (t52 != 52722731025091315LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x1289 = UINT64_MAX;
	volatile uint8_t x1290 = 49U;
	static int16_t x1291 = -54;
	int32_t x1292 = INT32_MIN;
	uint64_t t53 = 2924250595588603618LLU;

	t53 = ((x1289>>(x1290%x1291))+x1292);

	if (t53 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x1310 = 3LLU;
	int16_t x1312 = INT16_MIN;
	static int32_t t54 = -5443191;

	t54 = ((x1309>>(x1310%x1311))+x1312);

	if (t54 != -32753) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x1314 = 5U;
	int8_t x1315 = INT8_MIN;
	int64_t x1316 = -1LL;
	volatile int64_t t55 = -1694LL;

	t55 = ((x1313>>(x1314%x1315))+x1316);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x1333 = 0U;
	uint8_t x1334 = UINT8_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = ((x1333>>(x1334%x1335))+x1336);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x1350 = 11826070173LLU;
	uint8_t x1351 = 4U;
	int8_t x1352 = INT8_MIN;

	t57 = ((x1349>>(x1350%x1351))+x1352);

	if (t57 != 744) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x1361 = UINT8_MAX;
	static uint8_t x1362 = 13U;
	static uint32_t x1363 = 943183U;
	uint32_t x1364 = UINT32_MAX;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x1361>>(x1362%x1363))+x1364);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x1378 = INT64_MIN;
	volatile uint8_t x1379 = 2U;
	uint64_t x1380 = 0LLU;
	volatile uint64_t t59 = 6774058788372823259LLU;

	t59 = ((x1377>>(x1378%x1379))+x1380);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x1389 = 22U;
	volatile uint32_t x1391 = 2U;
	int32_t t60 = 82;

	t60 = ((x1389>>(x1390%x1391))+x1392);

	if (t60 != -2147483626) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x1410 = UINT8_MAX;
	int8_t x1411 = -1;
	static uint64_t x1412 = UINT64_MAX;
	volatile uint64_t t61 = 273265597882521741LLU;

	t61 = ((x1409>>(x1410%x1411))+x1412);

	if (t61 != 32766LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x1437 = INT64_MAX;
	uint32_t x1438 = 86383U;
	int64_t x1439 = -8LL;
	volatile uint64_t x1440 = 2859330266LLU;
	volatile uint64_t t62 = 7458622875952LLU;

	t62 = ((x1437>>(x1438%x1439))+x1440);

	if (t62 != 72057596897258201LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x1446 = INT16_MIN;
	int8_t x1447 = 2;
	int64_t x1448 = INT64_MIN;
	volatile int64_t t63 = 1080074LL;

	t63 = ((x1445>>(x1446%x1447))+x1448);

	if (t63 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x1454 = INT32_MIN;
	int8_t x1455 = 1;
	int64_t x1456 = -832450LL;
	int64_t t64 = -4964785172940876LL;

	t64 = ((x1453>>(x1454%x1455))+x1456);

	if (t64 != -832429LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x1517 = 85LL;
	volatile int16_t x1518 = 0;
	int8_t x1519 = INT8_MIN;
	static volatile uint64_t x1520 = UINT64_MAX;
	uint64_t t65 = 148671262303476LLU;

	t65 = ((x1517>>(x1518%x1519))+x1520);

	if (t65 != 84LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x1553 = 61U;
	volatile int32_t x1554 = INT32_MIN;
	static int32_t t66 = 17776;

	t66 = ((x1553>>(x1554%x1555))+x1556);

	if (t66 != 65596) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1589 = 11259;
	int32_t x1590 = -1;
	static volatile uint16_t x1592 = 45U;
	static volatile int32_t t67 = -1612579;

	t67 = ((x1589>>(x1590%x1591))+x1592);

	if (t67 != 11304) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1593 = 14;
	int8_t x1594 = -1;
	static volatile int16_t x1596 = -403;
	int32_t t68 = -690;

	t68 = ((x1593>>(x1594%x1595))+x1596);

	if (t68 != -389) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x1605 = 119U;
	static int8_t x1606 = 0;
	static volatile int32_t x1607 = -187;
	int64_t x1608 = INT64_MIN;
	int64_t t69 = -15LL;

	t69 = ((x1605>>(x1606%x1607))+x1608);

	if (t69 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x1609 = UINT16_MAX;
	static int16_t x1610 = 28;
	uint32_t x1611 = 28U;
	static volatile int8_t x1612 = INT8_MAX;
	static int32_t t70 = 1424;

	t70 = ((x1609>>(x1610%x1611))+x1612);

	if (t70 != 65662) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1633 = UINT16_MAX;
	uint8_t x1634 = 4U;
	static uint16_t x1636 = 15U;

	t71 = ((x1633>>(x1634%x1635))+x1636);

	if (t71 != 4110) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x1685 = UINT16_MAX;
	int16_t x1686 = INT16_MAX;
	volatile uint32_t x1687 = 6U;
	static volatile uint32_t x1688 = 2U;

	t72 = ((x1685>>(x1686%x1687))+x1688);

	if (t72 != 32769U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x1698 = -1LL;
	volatile uint8_t x1699 = 1U;
	volatile int32_t t73 = 25;

	t73 = ((x1697>>(x1698%x1699))+x1700);

	if (t73 != -2147483393) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x1709 = UINT16_MAX;
	int8_t x1710 = INT8_MIN;
	volatile int8_t x1711 = -1;
	static volatile int32_t t74 = 0;

	t74 = ((x1709>>(x1710%x1711))+x1712);

	if (t74 != 65662) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x1713 = 1;
	volatile int8_t x1714 = INT8_MAX;
	static int64_t x1715 = -1LL;
	int32_t t75 = 387;

	t75 = ((x1713>>(x1714%x1715))+x1716);

	if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x1725 = 89U;
	uint32_t x1726 = UINT32_MAX;
	int32_t x1727 = -1;

	t76 = ((x1725>>(x1726%x1727))+x1728);

	if (t76 != 88LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x1737 = 559U;
	static int8_t x1738 = 0;
	int64_t x1740 = INT64_MIN;
	volatile int64_t t77 = -94400370500665LL;

	t77 = ((x1737>>(x1738%x1739))+x1740);

	if (t77 != -9223372036854775249LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x1785 = INT64_MAX;
	int8_t x1786 = INT8_MIN;
	volatile int32_t x1787 = -1;
	int64_t x1788 = INT64_MIN;
	static int64_t t78 = 1222149452LL;

	t78 = ((x1785>>(x1786%x1787))+x1788);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x1805 = INT16_MAX;
	uint64_t x1806 = UINT64_MAX;
	int8_t x1807 = 56;
	volatile uint16_t x1808 = 1U;
	static int32_t t79 = -7398;

	t79 = ((x1805>>(x1806%x1807))+x1808);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1826 = 1;
	volatile int16_t x1828 = INT16_MIN;
	int32_t t80 = -158;

	t80 = ((x1825>>(x1826%x1827))+x1828);

	if (t80 != 5568046) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1837 = UINT32_MAX;
	volatile int32_t x1839 = 5;
	volatile uint64_t x1840 = UINT64_MAX;
	static volatile uint64_t t81 = 33362982LLU;

	t81 = ((x1837>>(x1838%x1839))+x1840);

	if (t81 != 1073741822LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1881 = INT16_MAX;
	uint64_t x1882 = UINT64_MAX;
	uint64_t x1883 = UINT64_MAX;
	int32_t t82 = -208150300;

	t82 = ((x1881>>(x1882%x1883))+x1884);

	if (t82 != -2147450881) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x1889 = UINT32_MAX;
	int16_t x1890 = 2;
	int16_t x1891 = INT16_MIN;
	volatile uint32_t t83 = 469351140U;

	t83 = ((x1889>>(x1890%x1891))+x1892);

	if (t83 != 1073741844U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x1898 = 3267022U;
	uint8_t x1899 = 1U;
	volatile uint64_t t84 = 346721228LLU;

	t84 = ((x1897>>(x1898%x1899))+x1900);

	if (t84 != 60269742380510145LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1946 = 410389LLU;
	volatile int64_t x1948 = INT64_MIN;
	static int64_t t85 = -3777487408496LL;

	t85 = ((x1945>>(x1946%x1947))+x1948);

	if (t85 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x1950 = 8U;
	static int16_t x1951 = INT16_MAX;
	volatile uint16_t x1952 = 241U;
	int32_t t86 = -3524;

	t86 = ((x1949>>(x1950%x1951))+x1952);

	if (t86 != 241) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x1953 = 4863LLU;
	static int32_t x1955 = -1;
	uint16_t x1956 = UINT16_MAX;

	t87 = ((x1953>>(x1954%x1955))+x1956);

	if (t87 != 70398LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x1974 = INT32_MIN;
	volatile int8_t x1975 = -1;
	volatile uint32_t t88 = 909853117U;

	t88 = ((x1973>>(x1974%x1975))+x1976);

	if (t88 != 1891U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x2001 = INT8_MAX;
	static int16_t x2003 = INT16_MAX;
	uint64_t t89 = 95815LLU;

	t89 = ((x2001>>(x2002%x2003))+x2004);

	if (t89 != 225949035252423LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2025 = 3U;
	int8_t x2026 = INT8_MAX;
	int8_t x2027 = 6;
	static volatile int8_t x2028 = INT8_MIN;
	static volatile int32_t t90 = 28793404;

	t90 = ((x2025>>(x2026%x2027))+x2028);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x2045 = UINT8_MAX;
	static int16_t x2046 = INT16_MIN;
	int8_t x2047 = INT8_MIN;
	volatile int32_t t91 = 112392518;

	t91 = ((x2045>>(x2046%x2047))+x2048);

	if (t91 != 65790) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x2053 = 23;
	static int8_t x2054 = 2;
	uint8_t x2056 = 3U;
	static int32_t t92 = 7;

	t92 = ((x2053>>(x2054%x2055))+x2056);

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x2082 = 19U;
	uint8_t x2084 = 31U;
	volatile uint64_t t93 = 5748LLU;

	t93 = ((x2081>>(x2082%x2083))+x2084);

	if (t93 != 232221193LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x2109 = INT64_MAX;
	volatile int32_t x2111 = -5853201;
	volatile int64_t t94 = -416811754LL;

	t94 = ((x2109>>(x2110%x2111))+x2112);

	if (t94 != 2305843007066210303LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x2131 = UINT8_MAX;
	int16_t x2132 = -6;
	int32_t t95 = -10633663;

	t95 = ((x2129>>(x2130%x2131))+x2132);

	if (t95 != 65529) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x2161 = 0U;
	int16_t x2163 = -1;
	int8_t x2164 = -1;
	static int32_t t96 = -389;

	t96 = ((x2161>>(x2162%x2163))+x2164);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x2226 = -1;
	int8_t x2227 = -1;
	uint64_t x2228 = 28715LLU;
	static volatile uint64_t t97 = 1804LLU;

	t97 = ((x2225>>(x2226%x2227))+x2228);

	if (t97 != 9223372036854804522LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x2229 = UINT16_MAX;
	uint32_t x2231 = 1809026U;
	uint16_t x2232 = 15U;
	volatile int32_t t98 = -6465;

	t98 = ((x2229>>(x2230%x2231))+x2232);

	if (t98 != 65550) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x2253 = 2568962621770LLU;
	int8_t x2254 = INT8_MAX;
	volatile int16_t x2255 = -3;
	int16_t x2256 = INT16_MIN;
	uint64_t t99 = 2803451092189389LLU;

	t99 = ((x2253>>(x2254%x2255))+x2256);

	if (t99 != 1284481278117LLU) { NG(); } else { ; }
	
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

