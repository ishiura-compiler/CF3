#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x143 = INT64_MAX;
int32_t x156 = 1;
static volatile int8_t x194 = 19;
uint8_t x208 = 0U;
uint32_t t3 = 256U;
int8_t x222 = -5;
int8_t x274 = INT8_MIN;
int32_t x275 = INT32_MIN;
volatile int32_t t5 = -665325;
uint32_t t6 = 668U;
int16_t x545 = INT16_MAX;
uint64_t t11 = 3819289109659LLU;
uint64_t t12 = 1908640956267LLU;
volatile int16_t x650 = INT16_MIN;
uint8_t x652 = 0U;
uint16_t x845 = 3784U;
int16_t x887 = INT16_MAX;
uint64_t t16 = 197327475904002625LLU;
volatile int64_t x892 = 23LL;
static int64_t x1030 = INT64_MAX;
uint8_t x1031 = UINT8_MAX;
static uint32_t x1032 = 3U;
int32_t x1053 = INT32_MIN;
int64_t x1077 = -1LL;
int32_t x1100 = 0;
volatile int64_t t24 = -67861797LL;
volatile int8_t x1126 = INT8_MIN;
int64_t t25 = 58636216030935LL;
static uint8_t x1188 = 0U;
volatile int32_t x1269 = INT32_MAX;
static volatile int8_t x1299 = INT8_MIN;
uint8_t x1300 = 4U;
int16_t x1444 = 2;
uint8_t x1569 = 106U;
static uint64_t t35 = 6090388145316670332LLU;
int32_t x1773 = 1;
int64_t x1775 = 2392LL;
static volatile int64_t t36 = 44049553966401282LL;
volatile uint32_t t37 = 86602U;
int16_t x1881 = INT16_MIN;
static uint64_t x1882 = 3301714846826974784LLU;
uint64_t x1941 = UINT64_MAX;
volatile int16_t x1943 = -14;
volatile uint32_t t40 = 545U;
volatile int8_t x2000 = 4;
volatile int32_t x2109 = INT32_MAX;
int32_t t46 = -1997;
int8_t x2210 = INT8_MAX;
int16_t x2364 = 0;
static int64_t x2381 = -13591LL;
static uint8_t x2384 = 1U;
volatile uint64_t x2429 = 68558235519LLU;
static uint64_t t52 = 460768LLU;
volatile int64_t x2530 = -1LL;
uint64_t x2531 = 3107LLU;
int64_t x2541 = INT64_MIN;
volatile int64_t t56 = 663048236436339LL;
volatile uint32_t t57 = 10889943U;
volatile int16_t x2712 = 1;
uint16_t x2882 = 22U;
uint8_t x2884 = 0U;
uint32_t t61 = 3U;
int16_t x2970 = INT16_MAX;
int64_t x2989 = INT64_MIN;
uint8_t x2990 = 11U;
static int16_t x2991 = INT16_MIN;
int64_t t67 = 3197425634760548904LL;
volatile uint64_t t71 = 9791LLU;
int8_t x3401 = INT8_MIN;
static int32_t t73 = -9317;
int8_t x3466 = 7;
int16_t x3521 = 4;
int16_t x3562 = 5508;
uint64_t t78 = 30250359509LLU;
int32_t x3589 = INT32_MAX;
int32_t x3595 = -6513;
uint32_t x3697 = UINT32_MAX;
int16_t x3699 = 1;
uint64_t x3700 = 2LLU;
uint32_t t82 = 24U;
int16_t x3882 = 2906;
uint16_t x3916 = 22U;
int32_t x3931 = INT32_MIN;
static uint8_t x3932 = 15U;
int32_t x3955 = INT32_MIN;
static int32_t t88 = -1;
volatile int16_t x3998 = -3454;
uint64_t x3999 = UINT64_MAX;
uint8_t x4016 = 0U;
volatile int64_t t90 = 10694LL;
int32_t x4045 = 304553;
int32_t x4069 = -1;
uint64_t x4072 = 0LLU;
static uint32_t x4131 = 386027885U;
static int16_t x4132 = 0;
int8_t x4250 = INT8_MIN;
static volatile int8_t x4251 = INT8_MIN;
volatile int32_t t95 = -13211944;
volatile uint32_t x4281 = 1496652U;
uint16_t x4284 = 12U;
int8_t x4321 = -1;
int16_t x4322 = INT16_MIN;


void f0(void) {
	uint64_t x141 = 30458910128105LLU;
	uint8_t x142 = UINT8_MAX;
	uint8_t x144 = 43U;
	static volatile uint64_t t0 = 3978305448LLU;

	t0 = (((x141+x142)^x143)>>x144);

	if (t0 != 1048572LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x153 = 1;
	int16_t x154 = INT16_MIN;
	int64_t x155 = -1LL;
	volatile int64_t t1 = -223661024229320LL;

	t1 = (((x153+x154)^x155)>>x156);

	if (t1 != 16383LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x193 = 772LLU;
	static int8_t x195 = -1;
	uint16_t x196 = 0U;
	uint64_t t2 = 2886416971017338LLU;

	t2 = (((x193+x194)^x195)>>x196);

	if (t2 != 18446744073709550824LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x205 = 0U;
	int32_t x206 = -1;
	volatile uint32_t x207 = 1U;

	t3 = (((x205+x206)^x207)>>x208);

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x221 = UINT32_MAX;
	static int8_t x223 = -16;
	static int32_t x224 = 0;
	uint32_t t4 = 81180380U;

	t4 = (((x221+x222)^x223)>>x224);

	if (t4 != 10U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x273 = INT8_MAX;
	static uint8_t x276 = 25U;

	t5 = (((x273+x274)^x275)>>x276);

	if (t5 != 63) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x277 = 3800U;
	uint32_t x278 = UINT32_MAX;
	uint8_t x279 = 8U;
	volatile int8_t x280 = 21;

	t6 = (((x277+x278)^x279)>>x280);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x317 = UINT64_MAX;
	static uint32_t x318 = 247975U;
	static int32_t x319 = INT32_MIN;
	uint8_t x320 = 26U;
	volatile uint64_t t7 = 64671289LLU;

	t7 = (((x317+x318)^x319)>>x320);

	if (t7 != 274877906912LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x413 = 4U;
	int16_t x414 = INT16_MIN;
	static volatile uint32_t x415 = 470714U;
	uint16_t x416 = 12U;
	static volatile uint32_t t8 = 69058644U;

	t8 = (((x413+x414)^x415)>>x416);

	if (t8 != 1048458U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x485 = 177U;
	static int8_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	int32_t x488 = 6;
	uint32_t t9 = 1539U;

	t9 = (((x485+x486)^x487)>>x488);

	if (t9 != 67108861U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x546 = -3;
	static int32_t x547 = 18087;
	uint8_t x548 = 2U;
	volatile int32_t t10 = -49;

	t10 = (((x545+x546)^x547)>>x548);

	if (t10 != 3670) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x605 = 4369617147139128LLU;
	uint64_t x606 = 2370LLU;
	int8_t x607 = INT8_MIN;
	static uint8_t x608 = 15U;

	t11 = (((x605+x606)^x607)>>x608);

	if (t11 != 562816603288647LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x621 = -103812;
	uint64_t x622 = 1108838740468447LLU;
	uint64_t x623 = UINT64_MAX;
	uint8_t x624 = 0U;

	t12 = (((x621+x622)^x623)>>x624);

	if (t12 != 18445635234969186980LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x649 = INT16_MAX;
	int8_t x651 = INT8_MIN;
	volatile int32_t t13 = 59719;

	t13 = (((x649+x650)^x651)>>x652);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x846 = UINT32_MAX;
	uint32_t x847 = 3U;
	int8_t x848 = 1;
	uint32_t t14 = 62U;

	t14 = (((x845+x846)^x847)>>x848);

	if (t14 != 1890U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x857 = 750U;
	static uint64_t x858 = 16314134385120195LLU;
	int64_t x859 = INT64_MIN;
	uint8_t x860 = 0U;
	uint64_t t15 = 57326953285953285LLU;

	t15 = (((x857+x858)^x859)>>x860);

	if (t15 != 9239686171239896753LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x885 = 1LLU;
	int32_t x886 = INT32_MIN;
	static uint8_t x888 = 9U;

	t16 = (((x885+x886)^x887)>>x888);

	if (t16 != 36028797014769727LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x889 = INT8_MAX;
	static uint16_t x890 = 0U;
	uint8_t x891 = 11U;
	volatile int32_t t17 = 3;

	t17 = (((x889+x890)^x891)>>x892);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x925 = 4U;
	static int32_t x926 = INT32_MIN;
	volatile int8_t x927 = INT8_MIN;
	uint8_t x928 = 7U;
	volatile int32_t t18 = 3900;

	t18 = (((x925+x926)^x927)>>x928);

	if (t18 != 16777215) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x1029 = INT8_MIN;
	volatile int64_t t19 = -62513427435LL;

	t19 = (((x1029+x1030)^x1031)>>x1032);

	if (t19 != 1152921504606846960LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1033 = INT8_MIN;
	static int8_t x1034 = INT8_MAX;
	int16_t x1035 = -1;
	uint32_t x1036 = 22U;
	static volatile int32_t t20 = -15513;

	t20 = (((x1033+x1034)^x1035)>>x1036);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x1054 = INT16_MAX;
	static volatile int32_t x1055 = INT32_MIN;
	volatile int16_t x1056 = 1;
	static volatile int32_t t21 = 246434;

	t21 = (((x1053+x1054)^x1055)>>x1056);

	if (t21 != 16383) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x1078 = 33U;
	uint16_t x1079 = 0U;
	int8_t x1080 = 1;
	int64_t t22 = 0LL;

	t22 = (((x1077+x1078)^x1079)>>x1080);

	if (t22 != 16LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x1097 = INT8_MIN;
	uint8_t x1098 = 0U;
	int32_t x1099 = -1;
	volatile int32_t t23 = 0;

	t23 = (((x1097+x1098)^x1099)>>x1100);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x1113 = INT8_MAX;
	int64_t x1114 = -564815276604459862LL;
	int64_t x1115 = -1LL;
	uint8_t x1116 = 0U;

	t24 = (((x1113+x1114)^x1115)>>x1116);

	if (t24 != 564815276604459734LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x1125 = -1;
	int64_t x1127 = INT64_MIN;
	uint64_t x1128 = 8LLU;

	t25 = (((x1125+x1126)^x1127)>>x1128);

	if (t25 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x1185 = INT32_MAX;
	int16_t x1186 = INT16_MIN;
	uint32_t x1187 = UINT32_MAX;
	volatile uint32_t t26 = 1394236421U;

	t26 = (((x1185+x1186)^x1187)>>x1188);

	if (t26 != 2147516416U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x1270 = 4865LLU;
	static int16_t x1271 = INT16_MIN;
	uint32_t x1272 = 1U;
	uint64_t t27 = 155208279LLU;

	t27 = (((x1269+x1270)^x1271)>>x1272);

	if (t27 != 9223372035781020032LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1273 = INT64_MIN;
	volatile uint32_t x1274 = 32067755U;
	int8_t x1275 = -1;
	volatile uint8_t x1276 = 24U;
	volatile int64_t t28 = -2640288669567LL;

	t28 = (((x1273+x1274)^x1275)>>x1276);

	if (t28 != 549755813886LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1297 = INT64_MAX;
	int64_t x1298 = INT64_MIN;
	volatile int64_t t29 = 2580026625429294LL;

	t29 = (((x1297+x1298)^x1299)>>x1300);

	if (t29 != 7LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x1325 = INT16_MIN;
	static int64_t x1326 = 11413011924244683LL;
	uint16_t x1327 = UINT16_MAX;
	volatile uint8_t x1328 = 2U;
	static volatile int64_t t30 = -5LL;

	t30 = (((x1325+x1326)^x1327)>>x1328);

	if (t30 != 2853252981057997LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1441 = 0U;
	static int64_t x1442 = -1LL;
	int8_t x1443 = INT8_MIN;
	static volatile int64_t t31 = -10896569781029253LL;

	t31 = (((x1441+x1442)^x1443)>>x1444);

	if (t31 != 31LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x1453 = 1560778458U;
	volatile int16_t x1454 = INT16_MIN;
	uint32_t x1455 = 148213767U;
	volatile int64_t x1456 = 2LL;
	volatile uint32_t t32 = 46241U;

	t32 = (((x1453+x1454)^x1455)>>x1456);

	if (t32 != 359965111U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x1481 = 58488239438838LL;
	uint16_t x1482 = 79U;
	uint64_t x1483 = 209326138071580LLU;
	volatile uint16_t x1484 = 0U;
	volatile uint64_t t33 = 1088748021281LLU;

	t33 = (((x1481+x1482)^x1483)>>x1484);

	if (t33 != 153177066710617LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1570 = UINT64_MAX;
	uint64_t x1571 = 1724413071LLU;
	uint8_t x1572 = 30U;
	volatile uint64_t t34 = 700LLU;

	t34 = (((x1569+x1570)^x1571)>>x1572);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x1573 = UINT64_MAX;
	int32_t x1574 = INT32_MIN;
	static int32_t x1575 = -1;
	int8_t x1576 = 1;

	t35 = (((x1573+x1574)^x1575)>>x1576);

	if (t35 != 1073741824LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1774 = -1;
	uint8_t x1776 = 9U;

	t36 = (((x1773+x1774)^x1775)>>x1776);

	if (t36 != 4LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1853 = INT16_MIN;
	static uint32_t x1854 = 98297U;
	int32_t x1855 = -1;
	int8_t x1856 = 31;

	t37 = (((x1853+x1854)^x1855)>>x1856);

	if (t37 != 1U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1883 = -107257LL;
	uint32_t x1884 = 4U;
	volatile uint64_t t38 = 1249093LLU;

	t38 = (((x1881+x1882)^x1883)>>x1884);

	if (t38 != 946564326680160564LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x1942 = UINT16_MAX;
	uint32_t x1944 = 38U;
	volatile uint64_t t39 = 24459LLU;

	t39 = (((x1941+x1942)^x1943)>>x1944);

	if (t39 != 67108863LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x1993 = -24;
	int16_t x1994 = INT16_MAX;
	volatile uint32_t x1995 = 518579682U;
	int8_t x1996 = 0;

	t40 = (((x1993+x1994)^x1995)>>x1996);

	if (t40 != 518560261U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x1997 = UINT64_MAX;
	uint32_t x1998 = UINT32_MAX;
	int32_t x1999 = 1;
	volatile uint64_t t41 = 9LLU;

	t41 = (((x1997+x1998)^x1999)>>x2000);

	if (t41 != 268435455LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x2017 = -1824569443LL;
	int16_t x2018 = INT16_MIN;
	int8_t x2019 = INT8_MIN;
	int8_t x2020 = 1;
	volatile int64_t t42 = -2941102911LL;

	t42 = (((x2017+x2018)^x2019)>>x2020);

	if (t42 != 912301070LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x2061 = INT16_MAX;
	static volatile uint64_t x2062 = 3443526LLU;
	int16_t x2063 = INT16_MAX;
	volatile int8_t x2064 = 13;
	volatile uint64_t t43 = 377384LLU;

	t43 = (((x2061+x2062)^x2063)>>x2064);

	if (t43 != 427LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2093 = -1;
	int16_t x2094 = 1;
	volatile uint16_t x2095 = 83U;
	int8_t x2096 = 10;
	volatile int32_t t44 = -5760845;

	t44 = (((x2093+x2094)^x2095)>>x2096);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2110 = INT64_MIN;
	static int16_t x2111 = -1;
	uint8_t x2112 = 3U;
	static int64_t t45 = -2116917176482317LL;

	t45 = (((x2109+x2110)^x2111)>>x2112);

	if (t45 != 1152921504338411520LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x2129 = INT8_MIN;
	uint16_t x2130 = 5U;
	static int16_t x2131 = INT16_MIN;
	volatile uint8_t x2132 = 30U;

	t46 = (((x2129+x2130)^x2131)>>x2132);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x2189 = INT64_MIN;
	int32_t x2190 = INT32_MAX;
	int32_t x2191 = INT32_MIN;
	uint8_t x2192 = 1U;
	int64_t t47 = 102311174LL;

	t47 = (((x2189+x2190)^x2191)>>x2192);

	if (t47 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x2209 = 0U;
	uint32_t x2211 = UINT32_MAX;
	uint64_t x2212 = 15LLU;
	volatile uint32_t t48 = 379726U;

	t48 = (((x2209+x2210)^x2211)>>x2212);

	if (t48 != 131071U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x2213 = 6LLU;
	volatile int32_t x2214 = 293811005;
	int32_t x2215 = -1;
	int8_t x2216 = 0;
	volatile uint64_t t49 = 4787829819LLU;

	t49 = (((x2213+x2214)^x2215)>>x2216);

	if (t49 != 18446744073415740604LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x2361 = INT64_MAX;
	int8_t x2362 = 0;
	int32_t x2363 = INT32_MAX;
	static int64_t t50 = -1045867587LL;

	t50 = (((x2361+x2362)^x2363)>>x2364);

	if (t50 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x2382 = 1497990U;
	uint32_t x2383 = 10562033U;
	int64_t t51 = -5686LL;

	t51 = (((x2381+x2382)^x2383)>>x2384);

	if (t51 != 6014927LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x2430 = INT16_MIN;
	volatile uint64_t x2431 = 186626908LLU;
	static uint16_t x2432 = 33U;

	t52 = (((x2429+x2430)^x2431)>>x2432);

	if (t52 != 7LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x2485 = INT64_MIN;
	static uint64_t x2486 = UINT64_MAX;
	volatile uint64_t x2487 = 15797561144086472LLU;
	int8_t x2488 = 0;
	volatile uint64_t t53 = 16LLU;

	t53 = (((x2485+x2486)^x2487)>>x2488);

	if (t53 != 9207574475710689335LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2521 = UINT64_MAX;
	uint32_t x2522 = 120129342U;
	int8_t x2523 = 13;
	uint16_t x2524 = 12U;
	uint64_t t54 = 409647814753LLU;

	t54 = (((x2521+x2522)^x2523)>>x2524);

	if (t54 != 29328LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2529 = 6161289319877LLU;
	uint8_t x2532 = 44U;
	volatile uint64_t t55 = 2028218889715714915LLU;

	t55 = (((x2529+x2530)^x2531)>>x2532);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x2542 = INT32_MAX;
	int8_t x2543 = INT8_MIN;
	volatile int8_t x2544 = 0;

	t56 = (((x2541+x2542)^x2543)>>x2544);

	if (t56 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2621 = -1;
	int8_t x2622 = INT8_MIN;
	uint32_t x2623 = UINT32_MAX;
	static uint32_t x2624 = 2U;

	t57 = (((x2621+x2622)^x2623)>>x2624);

	if (t57 != 32U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x2637 = INT64_MIN;
	uint64_t x2638 = 8832869488460864926LLU;
	volatile int32_t x2639 = INT32_MIN;
	static uint8_t x2640 = 19U;
	volatile uint64_t t58 = 488LLU;

	t58 = (((x2637+x2638)^x2639)>>x2640);

	if (t58 != 744824502755LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x2705 = 122468LL;
	int16_t x2706 = -10;
	int64_t x2707 = INT64_MAX;
	volatile uint8_t x2708 = 2U;
	int64_t t59 = -1690LL;

	t59 = (((x2705+x2706)^x2707)>>x2708);

	if (t59 != 2305843009213663337LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x2709 = 518U;
	uint64_t x2710 = UINT64_MAX;
	int8_t x2711 = INT8_MIN;
	volatile uint64_t t60 = 953318321694165302LLU;

	t60 = (((x2709+x2710)^x2711)>>x2712);

	if (t60 != 9223372036854775490LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x2881 = -6;
	volatile uint32_t x2883 = 6U;

	t61 = (((x2881+x2882)^x2883)>>x2884);

	if (t61 != 22U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2909 = UINT32_MAX;
	int32_t x2910 = INT32_MIN;
	uint32_t x2911 = 4031626U;
	static int32_t x2912 = 28;
	uint32_t t62 = 0U;

	t62 = (((x2909+x2910)^x2911)>>x2912);

	if (t62 != 7U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2953 = 1;
	int32_t x2954 = -1;
	volatile uint16_t x2955 = 214U;
	volatile int8_t x2956 = 4;
	int32_t t63 = 1;

	t63 = (((x2953+x2954)^x2955)>>x2956);

	if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x2969 = UINT32_MAX;
	volatile int32_t x2971 = INT32_MAX;
	uint16_t x2972 = 0U;
	uint32_t t64 = 1287932640U;

	t64 = (((x2969+x2970)^x2971)>>x2972);

	if (t64 != 2147450881U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x2992 = 52;
	volatile int64_t t65 = 20LL;

	t65 = (((x2989+x2990)^x2991)>>x2992);

	if (t65 != 2047LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3033 = INT16_MAX;
	volatile int8_t x3034 = 1;
	int32_t x3035 = 39659;
	uint16_t x3036 = 3U;
	int32_t t66 = 2;

	t66 = (((x3033+x3034)^x3035)>>x3036);

	if (t66 != 861) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3081 = -1LL;
	int16_t x3082 = INT16_MIN;
	static volatile int64_t x3083 = INT64_MIN;
	int8_t x3084 = 1;

	t67 = (((x3081+x3082)^x3083)>>x3084);

	if (t67 != 4611686018427371519LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x3085 = UINT32_MAX;
	int32_t x3086 = INT32_MAX;
	uint16_t x3087 = 7U;
	int8_t x3088 = 2;
	static uint32_t t68 = 959U;

	t68 = (((x3085+x3086)^x3087)>>x3088);

	if (t68 != 536870910U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3213 = UINT8_MAX;
	int16_t x3214 = -1;
	int16_t x3215 = 0;
	volatile int16_t x3216 = 30;
	int32_t t69 = -1016;

	t69 = (((x3213+x3214)^x3215)>>x3216);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x3217 = INT8_MIN;
	volatile uint16_t x3218 = 420U;
	uint32_t x3219 = 194260U;
	uint32_t x3220 = 4U;
	uint32_t t70 = 110965480U;

	t70 = (((x3217+x3218)^x3219)>>x3220);

	if (t70 != 12159U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3289 = 12LL;
	static uint64_t x3290 = 190632019123LLU;
	int32_t x3291 = INT32_MIN;
	uint64_t x3292 = 47LLU;

	t71 = (((x3289+x3290)^x3291)>>x3292);

	if (t71 != 131071LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3365 = UINT16_MAX;
	static uint32_t x3366 = 55U;
	int8_t x3367 = -1;
	uint8_t x3368 = 13U;
	uint32_t t72 = 223767914U;

	t72 = (((x3365+x3366)^x3367)>>x3368);

	if (t72 != 524279U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x3402 = 2904U;
	uint16_t x3403 = UINT16_MAX;
	int8_t x3404 = 19;

	t73 = (((x3401+x3402)^x3403)>>x3404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x3465 = UINT64_MAX;
	uint8_t x3467 = 0U;
	uint16_t x3468 = 11U;
	uint64_t t74 = 1348986499808LLU;

	t74 = (((x3465+x3466)^x3467)>>x3468);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x3481 = -1LL;
	int16_t x3482 = INT16_MAX;
	uint16_t x3483 = 1972U;
	volatile int8_t x3484 = 4;
	static int64_t t75 = 557LL;

	t75 = (((x3481+x3482)^x3483)>>x3484);

	if (t75 != 1924LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x3513 = INT16_MIN;
	volatile uint8_t x3514 = 54U;
	int64_t x3515 = INT64_MIN;
	int64_t x3516 = 6LL;
	int64_t t76 = 867LL;

	t76 = (((x3513+x3514)^x3515)>>x3516);

	if (t76 != 144115188075855360LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x3522 = 14103476807770LLU;
	static int64_t x3523 = -126751LL;
	uint8_t x3524 = 0U;
	static uint64_t t77 = 5456136264799LLU;

	t77 = (((x3521+x3522)^x3523)>>x3524);

	if (t77 != 18446729970232834239LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x3561 = UINT64_MAX;
	static volatile int64_t x3563 = INT64_MIN;
	uint16_t x3564 = 56U;

	t78 = (((x3561+x3562)^x3563)>>x3564);

	if (t78 != 128LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x3590 = INT16_MIN;
	volatile int32_t x3591 = INT32_MAX;
	int16_t x3592 = 14;
	int32_t t79 = -486291;

	t79 = (((x3589+x3590)^x3591)>>x3592);

	if (t79 != 2) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x3593 = 12438973LLU;
	uint8_t x3594 = UINT8_MAX;
	uint8_t x3596 = 12U;
	volatile uint64_t t80 = 7378816800LLU;

	t80 = (((x3593+x3594)^x3595)>>x3596);

	if (t80 != 4503599627367458LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x3698 = 916LLU;
	uint64_t t81 = 693319LLU;

	t81 = (((x3697+x3698)^x3699)>>x3700);

	if (t81 != 1073742052LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3873 = 3U;
	int16_t x3874 = 178;
	int32_t x3875 = 532175344;
	uint32_t x3876 = 15U;

	t82 = (((x3873+x3874)^x3875)>>x3876);

	if (t82 != 16240U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3881 = 1160875522U;
	uint16_t x3883 = 68U;
	static int16_t x3884 = 11;
	volatile uint32_t t83 = 913158U;

	t83 = (((x3881+x3882)^x3883)>>x3884);

	if (t83 != 566835U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x3897 = 2U;
	int8_t x3898 = INT8_MAX;
	uint16_t x3899 = 908U;
	volatile uint16_t x3900 = 7U;
	int32_t t84 = 1604976;

	t84 = (((x3897+x3898)^x3899)>>x3900);

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x3913 = INT8_MIN;
	volatile uint8_t x3914 = 116U;
	uint64_t x3915 = UINT64_MAX;
	volatile uint64_t t85 = 229641513572801520LLU;

	t85 = (((x3913+x3914)^x3915)>>x3916);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x3929 = -1;
	uint64_t x3930 = 1600595709LLU;
	volatile uint64_t t86 = 2160LLU;

	t86 = (((x3929+x3930)^x3931)>>x3932);

	if (t86 != 562949953404622LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x3953 = INT16_MIN;
	volatile int8_t x3954 = INT8_MIN;
	volatile int8_t x3956 = 14;
	volatile int32_t t87 = -1059257;

	t87 = (((x3953+x3954)^x3955)>>x3956);

	if (t87 != 131069) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x3977 = INT16_MIN;
	int8_t x3978 = 1;
	int8_t x3979 = INT8_MIN;
	volatile uint16_t x3980 = 4U;

	t88 = (((x3977+x3978)^x3979)>>x3980);

	if (t88 != 2040) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3997 = -1;
	volatile uint16_t x4000 = 45U;
	static volatile uint64_t t89 = 1820LLU;

	t89 = (((x3997+x3998)^x3999)>>x4000);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x4013 = 2326U;
	int64_t x4014 = -1LL;
	uint8_t x4015 = 3U;

	t90 = (((x4013+x4014)^x4015)>>x4016);

	if (t90 != 2326LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x4046 = 0U;
	int32_t x4047 = 0;
	uint8_t x4048 = 29U;
	int32_t t91 = 1219;

	t91 = (((x4045+x4046)^x4047)>>x4048);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x4070 = INT8_MIN;
	volatile int8_t x4071 = INT8_MIN;
	int32_t t92 = -9750;

	t92 = (((x4069+x4070)^x4071)>>x4072);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x4077 = UINT64_MAX;
	int16_t x4078 = 0;
	uint32_t x4079 = 147U;
	uint8_t x4080 = 2U;
	volatile uint64_t t93 = 68298663951850988LLU;

	t93 = (((x4077+x4078)^x4079)>>x4080);

	if (t93 != 4611686018427387867LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4129 = INT8_MAX;
	int16_t x4130 = INT16_MIN;
	uint32_t t94 = 65076801U;

	t94 = (((x4129+x4130)^x4131)>>x4132);

	if (t94 != 3908948242U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x4249 = 6U;
	uint16_t x4252 = 1U;

	t95 = (((x4249+x4250)^x4251)>>x4252);

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4282 = INT8_MIN;
	int32_t x4283 = INT32_MAX;
	uint32_t t96 = 1U;

	t96 = (((x4281+x4282)^x4283)>>x4284);

	if (t96 != 523922U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4323 = INT16_MIN;
	volatile uint32_t x4324 = 21U;
	volatile int32_t t97 = -108912635;

	t97 = (((x4321+x4322)^x4323)>>x4324);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4337 = 13U;
	volatile uint64_t x4338 = 1115LLU;
	int32_t x4339 = INT32_MIN;
	volatile int8_t x4340 = 3;
	volatile uint64_t t98 = 37295371LLU;

	t98 = (((x4337+x4338)^x4339)>>x4340);

	if (t98 != 2305843008945258637LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x4369 = 13948U;
	volatile int8_t x4370 = -3;
	uint8_t x4371 = 1U;
	static volatile int16_t x4372 = 3;
	int32_t t99 = 1452908;

	t99 = (((x4369+x4370)^x4371)>>x4372);

	if (t99 != 1743) { NG(); } else { ; }
	
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

