#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x40 = 7U;
int16_t x42 = -2;
uint16_t x259 = 142U;
volatile int32_t t5 = -218654299;
int16_t x398 = -22;
volatile int8_t x433 = -1;
uint8_t x456 = 3U;
uint32_t t9 = 155100U;
int16_t x559 = INT16_MIN;
int32_t x603 = 722955;
static volatile int8_t x605 = -22;
volatile uint64_t t14 = 26294943886LLU;
static int32_t x630 = INT32_MIN;
volatile uint64_t t15 = 1904LLU;
int64_t x698 = INT64_MIN;
uint16_t x699 = 5U;
int64_t t16 = 18787263572LL;
static uint8_t x913 = 12U;
volatile int8_t x917 = -1;
int8_t x1056 = 0;
volatile uint64_t t24 = 1259192LLU;
static volatile uint16_t x1175 = 355U;
static volatile uint64_t x1189 = 27000362135965LLU;
volatile uint8_t x1215 = 58U;
uint8_t x1250 = 4U;
static int32_t x1252 = 22;
int64_t x1270 = -1LL;
static uint64_t x1271 = UINT64_MAX;
uint32_t x1309 = 17U;
int8_t x1312 = 4;
static uint64_t x1317 = 48389LLU;
volatile uint64_t t33 = 498615491656915LLU;
volatile uint32_t x1327 = 2050050U;
uint8_t x1328 = 20U;
uint8_t x1545 = UINT8_MAX;
volatile uint32_t t35 = 1464116705U;
volatile uint64_t t37 = 51LLU;
volatile uint64_t x1679 = 5479765726139020439LLU;
int16_t x1750 = -2;
uint64_t x1814 = UINT64_MAX;
uint8_t x1816 = 3U;
uint64_t t41 = 1571LLU;
uint32_t x1835 = UINT32_MAX;
static int32_t x1925 = 3648251;
uint64_t t43 = 264367658435241555LLU;
uint64_t x1933 = UINT64_MAX;
static int8_t x1943 = INT8_MIN;
int64_t x2035 = INT64_MAX;
volatile int64_t t47 = 2771698870229575LL;
volatile uint64_t t49 = 116021940202LLU;
uint8_t x2085 = 5U;
uint32_t x2087 = 113626U;
uint16_t x2088 = 0U;
static uint32_t t50 = 27U;
volatile uint64_t t51 = 8484498858895834932LLU;
int8_t x2124 = 1;
volatile uint16_t x2221 = 2176U;
int32_t x2314 = 156;
volatile uint8_t x2316 = 0U;
int16_t x2317 = -1;
uint32_t x2369 = UINT32_MAX;
int8_t x2653 = INT8_MAX;
volatile int32_t x2654 = INT32_MIN;
int32_t t61 = -281264;
uint32_t x2739 = 779U;
volatile int16_t x2759 = -1;
volatile uint16_t x2760 = 1U;
static int16_t x2813 = -1;
volatile uint16_t x2815 = 2U;
uint64_t t64 = 15200285716935945LLU;
uint32_t t65 = 261U;
int64_t x2869 = 85101176138950LL;
int8_t x2871 = 20;
int32_t x2925 = 25935;
int32_t x3110 = INT32_MIN;
static int32_t x3119 = -1;
static int8_t x3120 = 10;
int8_t x3336 = 1;
volatile uint64_t t75 = 7469929497LLU;
static volatile int64_t t78 = 1LL;
int8_t x3685 = 13;
static uint32_t x3687 = UINT32_MAX;
uint64_t x3985 = UINT64_MAX;
static uint64_t x4097 = 4766LLU;
volatile uint32_t t89 = 7U;
uint64_t x4269 = 7915438039LLU;
int8_t x4272 = 4;
int64_t x4277 = 29349298LL;
int16_t x4278 = 20;
volatile uint64_t t92 = 13LLU;
volatile uint64_t t94 = 1256317050825LLU;
int16_t x4427 = INT16_MIN;
volatile int32_t x4434 = -1;
uint32_t x4436 = 0U;
static uint16_t x4440 = 20U;
volatile int16_t x4458 = -1;
int32_t x4459 = 987;
volatile int16_t x4460 = 6;
volatile uint64_t t99 = 3774721402346198LLU;


void f0(void) {
	int8_t x33 = INT8_MIN;
	static int32_t x34 = -1;
	int32_t x35 = INT32_MAX;
	uint8_t x36 = 5U;
	volatile int32_t t0 = 4691;

	t0 = (((x33/x34)|x35)>>x36);

	if (t0 != 67108863) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x37 = -1;
	int8_t x38 = -1;
	int32_t x39 = INT32_MAX;
	volatile int32_t t1 = 7737599;

	t1 = (((x37/x38)|x39)>>x40);

	if (t1 != 16777215) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x41 = -24564742;
	uint64_t x43 = UINT64_MAX;
	uint8_t x44 = 44U;
	uint64_t t2 = 284104LLU;

	t2 = (((x41/x42)|x43)>>x44);

	if (t2 != 1048575LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x105 = -1LL;
	int32_t x106 = INT32_MIN;
	int32_t x107 = 1757976;
	static uint16_t x108 = 2U;
	int64_t t3 = -3569257152255918LL;

	t3 = (((x105/x106)|x107)>>x108);

	if (t3 != 439494LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x149 = INT64_MAX;
	volatile uint32_t x150 = UINT32_MAX;
	int8_t x151 = 0;
	uint8_t x152 = 0U;
	static int64_t t4 = -5LL;

	t4 = (((x149/x150)|x151)>>x152);

	if (t4 != 2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x257 = 54;
	int8_t x258 = INT8_MAX;
	uint8_t x260 = 26U;

	t5 = (((x257/x258)|x259)>>x260);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x397 = UINT32_MAX;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 11U;
	static uint32_t t6 = 1312119116U;

	t6 = (((x397/x398)|x399)>>x400);

	if (t6 != 2097151U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x434 = 1U;
	static volatile uint16_t x435 = UINT16_MAX;
	uint8_t x436 = 1U;
	volatile uint32_t t7 = 333030U;

	t7 = (((x433/x434)|x435)>>x436);

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x453 = UINT8_MAX;
	static uint64_t x454 = UINT64_MAX;
	uint32_t x455 = UINT32_MAX;
	uint64_t t8 = 126212497LLU;

	t8 = (((x453/x454)|x455)>>x456);

	if (t8 != 536870911LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x497 = UINT32_MAX;
	int8_t x498 = INT8_MIN;
	volatile int32_t x499 = 83374417;
	int8_t x500 = 0;

	t9 = (((x497/x498)|x499)>>x500);

	if (t9 != 83374417U) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x505 = -1LL;
	volatile uint64_t x506 = 177681716LLU;
	uint8_t x507 = UINT8_MAX;
	uint8_t x508 = 0U;
	uint64_t t10 = 40883737374LLU;

	t10 = (((x505/x506)|x507)>>x508);

	if (t10 != 103819033855LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x553 = INT16_MAX;
	int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MAX;
	static uint32_t x556 = 2U;
	volatile int32_t t11 = 3033149;

	t11 = (((x553/x554)|x555)>>x556);

	if (t11 != 31) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x557 = 1921264310U;
	int16_t x558 = -84;
	int16_t x560 = 3;
	volatile uint32_t t12 = 87915U;

	t12 = (((x557/x558)|x559)>>x560);

	if (t12 != 536866816U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x601 = UINT64_MAX;
	static int64_t x602 = -1LL;
	uint8_t x604 = 3U;
	uint64_t t13 = 51536367062191563LLU;

	t13 = (((x601/x602)|x603)>>x604);

	if (t13 != 90369LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x606 = INT8_MIN;
	uint64_t x607 = 1350LLU;
	static uint8_t x608 = 13U;

	t14 = (((x605/x606)|x607)>>x608);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x629 = 1927586820LLU;
	uint32_t x631 = UINT32_MAX;
	uint8_t x632 = 0U;

	t15 = (((x629/x630)|x631)>>x632);

	if (t15 != 4294967295LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x697 = 1583;
	int16_t x700 = 1;

	t16 = (((x697/x698)|x699)>>x700);

	if (t16 != 2LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x717 = INT16_MAX;
	uint32_t x718 = 399U;
	static int8_t x719 = 1;
	int8_t x720 = 10;
	volatile uint32_t t17 = 194311U;

	t17 = (((x717/x718)|x719)>>x720);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x845 = 1062110489105335LLU;
	int16_t x846 = INT16_MIN;
	static int16_t x847 = INT16_MIN;
	int8_t x848 = 45;
	static uint64_t t18 = 1703993597801518LLU;

	t18 = (((x845/x846)|x847)>>x848);

	if (t18 != 524287LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x914 = INT16_MIN;
	volatile uint64_t x915 = 10698LLU;
	static int16_t x916 = 18;
	volatile uint64_t t19 = 2261150809101707LLU;

	t19 = (((x913/x914)|x915)>>x916);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x918 = UINT64_MAX;
	static int64_t x919 = INT64_MAX;
	static uint8_t x920 = 9U;
	uint64_t t20 = 5564553818058616814LLU;

	t20 = (((x917/x918)|x919)>>x920);

	if (t20 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x977 = 110U;
	uint8_t x978 = 5U;
	int16_t x979 = 13;
	int64_t x980 = 1LL;
	int32_t t21 = -1303200;

	t21 = (((x977/x978)|x979)>>x980);

	if (t21 != 15) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1009 = -1;
	uint8_t x1010 = UINT8_MAX;
	int32_t x1011 = 1;
	volatile int16_t x1012 = 8;
	int32_t t22 = 3543576;

	t22 = (((x1009/x1010)|x1011)>>x1012);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x1053 = INT16_MIN;
	static int8_t x1054 = INT8_MAX;
	uint64_t x1055 = 4111098229840800LLU;
	uint64_t t23 = 8350179LLU;

	t23 = (((x1053/x1054)|x1055)>>x1056);

	if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x1093 = UINT64_MAX;
	int64_t x1094 = -170710826669588LL;
	uint16_t x1095 = 1378U;
	int8_t x1096 = 0;

	t24 = (((x1093/x1094)|x1095)>>x1096);

	if (t24 != 1379LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x1157 = INT8_MIN;
	static int32_t x1158 = INT32_MAX;
	static int32_t x1159 = 188852;
	uint8_t x1160 = 0U;
	static volatile int32_t t25 = 10752472;

	t25 = (((x1157/x1158)|x1159)>>x1160);

	if (t25 != 188852) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x1173 = 3LLU;
	int16_t x1174 = INT16_MAX;
	int16_t x1176 = 1;
	volatile uint64_t t26 = 3LLU;

	t26 = (((x1173/x1174)|x1175)>>x1176);

	if (t26 != 177LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1190 = 1;
	uint32_t x1191 = 0U;
	uint8_t x1192 = 43U;
	uint64_t t27 = 1334000LLU;

	t27 = (((x1189/x1190)|x1191)>>x1192);

	if (t27 != 3LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x1213 = 24645224LLU;
	int16_t x1214 = INT16_MIN;
	uint8_t x1216 = 44U;
	uint64_t t28 = 1794LLU;

	t28 = (((x1213/x1214)|x1215)>>x1216);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x1249 = INT64_MIN;
	static volatile uint64_t x1251 = 459358744LLU;
	static volatile uint64_t t29 = 31487LLU;

	t29 = (((x1249/x1250)|x1251)>>x1252);

	if (t29 != 3848290697325LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x1261 = 975LLU;
	int16_t x1262 = INT16_MIN;
	int32_t x1263 = INT32_MIN;
	uint16_t x1264 = 0U;
	uint64_t t30 = 1553915LLU;

	t30 = (((x1261/x1262)|x1263)>>x1264);

	if (t30 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x1269 = INT8_MIN;
	volatile uint8_t x1272 = 44U;
	uint64_t t31 = 526218215058261LLU;

	t31 = (((x1269/x1270)|x1271)>>x1272);

	if (t31 != 1048575LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1310 = -1;
	int32_t x1311 = -5;
	uint32_t t32 = 709U;

	t32 = (((x1309/x1310)|x1311)>>x1312);

	if (t32 != 268435455U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x1318 = -1;
	volatile uint64_t x1319 = 11081610609863668LLU;
	uint8_t x1320 = 45U;

	t33 = (((x1317/x1318)|x1319)>>x1320);

	if (t33 != 314LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x1325 = 12908364LLU;
	uint8_t x1326 = UINT8_MAX;
	volatile uint64_t t34 = 244943301325227LLU;

	t34 = (((x1325/x1326)|x1327)>>x1328);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1546 = INT32_MIN;
	uint32_t x1547 = 515393860U;
	int8_t x1548 = 6;

	t35 = (((x1545/x1546)|x1547)>>x1548);

	if (t35 != 8053029U) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x1557 = 0;
	int16_t x1558 = -1;
	volatile int8_t x1559 = INT8_MAX;
	static int8_t x1560 = 0;
	int32_t t36 = 470689;

	t36 = (((x1557/x1558)|x1559)>>x1560);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x1657 = INT16_MIN;
	uint64_t x1658 = 2033870426352901452LLU;
	static int8_t x1659 = -42;
	uint8_t x1660 = 26U;

	t37 = (((x1657/x1658)|x1659)>>x1660);

	if (t37 != 274877906943LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x1677 = -588616852783LL;
	uint8_t x1678 = UINT8_MAX;
	volatile uint16_t x1680 = 1U;
	uint64_t t38 = 208750590905426LLU;

	t38 = (((x1677/x1678)|x1679)>>x1680);

	if (t38 != 9223372035704831711LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1749 = INT32_MAX;
	volatile uint32_t x1751 = UINT32_MAX;
	uint8_t x1752 = 29U;
	volatile uint32_t t39 = 119892U;

	t39 = (((x1749/x1750)|x1751)>>x1752);

	if (t39 != 7U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1813 = 233U;
	uint64_t x1815 = 41478LLU;
	volatile uint64_t t40 = 488811LLU;

	t40 = (((x1813/x1814)|x1815)>>x1816);

	if (t40 != 5184LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1829 = 55997175432LLU;
	int8_t x1830 = INT8_MIN;
	int32_t x1831 = INT32_MAX;
	volatile uint8_t x1832 = 2U;

	t41 = (((x1829/x1830)|x1831)>>x1832);

	if (t41 != 536870911LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x1833 = INT16_MAX;
	uint32_t x1834 = 1501U;
	volatile uint8_t x1836 = 2U;
	static volatile uint32_t t42 = 67865U;

	t42 = (((x1833/x1834)|x1835)>>x1836);

	if (t42 != 1073741823U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x1926 = UINT64_MAX;
	int8_t x1927 = INT8_MAX;
	volatile uint8_t x1928 = 0U;

	t43 = (((x1925/x1926)|x1927)>>x1928);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x1934 = 6U;
	static volatile int64_t x1935 = INT64_MAX;
	uint8_t x1936 = 0U;
	uint64_t t44 = 799794LLU;

	t44 = (((x1933/x1934)|x1935)>>x1936);

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x1941 = -6;
	uint32_t x1942 = 254U;
	uint8_t x1944 = 6U;
	volatile uint32_t t45 = 44327056U;

	t45 = (((x1941/x1942)|x1943)>>x1944);

	if (t45 != 67108862U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x1993 = -1;
	uint32_t x1994 = UINT32_MAX;
	int8_t x1995 = -1;
	volatile uint8_t x1996 = 30U;
	uint32_t t46 = 16U;

	t46 = (((x1993/x1994)|x1995)>>x1996);

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x2033 = 1;
	static int16_t x2034 = 4;
	int8_t x2036 = 3;

	t47 = (((x2033/x2034)|x2035)>>x2036);

	if (t47 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x2045 = INT8_MIN;
	int64_t x2046 = INT64_MIN;
	int64_t x2047 = 130LL;
	uint8_t x2048 = 10U;
	int64_t t48 = -120340762833LL;

	t48 = (((x2045/x2046)|x2047)>>x2048);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x2061 = 11667U;
	volatile int16_t x2062 = -6459;
	volatile uint64_t x2063 = 184261LLU;
	static int16_t x2064 = 1;

	t49 = (((x2061/x2062)|x2063)>>x2064);

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x2086 = INT16_MAX;

	t50 = (((x2085/x2086)|x2087)>>x2088);

	if (t50 != 113626U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x2101 = INT8_MIN;
	int16_t x2102 = INT16_MIN;
	volatile uint64_t x2103 = 1283414533350LLU;
	volatile uint8_t x2104 = 3U;

	t51 = (((x2101/x2102)|x2103)>>x2104);

	if (t51 != 160426816668LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x2121 = 26U;
	int16_t x2122 = INT16_MAX;
	uint8_t x2123 = UINT8_MAX;
	int32_t t52 = -280;

	t52 = (((x2121/x2122)|x2123)>>x2124);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x2173 = UINT64_MAX;
	uint32_t x2174 = UINT32_MAX;
	int16_t x2175 = INT16_MIN;
	uint8_t x2176 = 11U;
	uint64_t t53 = 29990054310061868LLU;

	t53 = (((x2173/x2174)|x2175)>>x2176);

	if (t53 != 9007199254740976LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2222 = UINT32_MAX;
	int16_t x2223 = INT16_MIN;
	volatile int16_t x2224 = 0;
	volatile uint32_t t54 = 0U;

	t54 = (((x2221/x2222)|x2223)>>x2224);

	if (t54 != 4294934528U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x2313 = INT8_MIN;
	uint64_t x2315 = 4LLU;
	volatile uint64_t t55 = 252899843LLU;

	t55 = (((x2313/x2314)|x2315)>>x2316);

	if (t55 != 4LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2318 = INT32_MAX;
	int64_t x2319 = 1578LL;
	int8_t x2320 = 24;
	int64_t t56 = -4653433818730804LL;

	t56 = (((x2317/x2318)|x2319)>>x2320);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x2353 = INT64_MIN;
	static int32_t x2354 = INT32_MIN;
	volatile int8_t x2355 = 0;
	int8_t x2356 = 1;
	static int64_t t57 = -7LL;

	t57 = (((x2353/x2354)|x2355)>>x2356);

	if (t57 != 2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x2370 = -731669413867943LL;
	volatile uint64_t x2371 = 2907440966476LLU;
	volatile uint8_t x2372 = 0U;
	volatile uint64_t t58 = 464568040975LLU;

	t58 = (((x2369/x2370)|x2371)>>x2372);

	if (t58 != 2907440966476LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2629 = 50;
	uint64_t x2630 = 520858101278758LLU;
	static int64_t x2631 = -1LL;
	uint8_t x2632 = 0U;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x2629/x2630)|x2631)>>x2632);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x2655 = 459;
	uint8_t x2656 = 1U;
	volatile int32_t t60 = -323697;

	t60 = (((x2653/x2654)|x2655)>>x2656);

	if (t60 != 229) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x2657 = -1;
	static uint16_t x2658 = 6U;
	static uint8_t x2659 = 2U;
	uint8_t x2660 = 0U;

	t61 = (((x2657/x2658)|x2659)>>x2660);

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x2737 = 123076802LL;
	uint16_t x2738 = 2245U;
	uint16_t x2740 = 5U;
	volatile int64_t t62 = 3556601675LL;

	t62 = (((x2737/x2738)|x2739)>>x2740);

	if (t62 != 1721LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x2757 = 97140LLU;
	static uint8_t x2758 = 6U;
	uint64_t t63 = 324919LLU;

	t63 = (((x2757/x2758)|x2759)>>x2760);

	if (t63 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x2814 = 1615LLU;
	uint16_t x2816 = 22U;

	t64 = (((x2813/x2814)|x2815)>>x2816);

	if (t64 != 2723248613LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x2857 = UINT32_MAX;
	static uint8_t x2858 = 25U;
	static volatile int32_t x2859 = -1;
	uint8_t x2860 = 5U;

	t65 = (((x2857/x2858)|x2859)>>x2860);

	if (t65 != 134217727U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x2870 = UINT8_MAX;
	uint8_t x2872 = 55U;
	int64_t t66 = -13578014LL;

	t66 = (((x2869/x2870)|x2871)>>x2872);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x2926 = 844860435;
	int8_t x2927 = INT8_MAX;
	int8_t x2928 = 3;
	int32_t t67 = 996;

	t67 = (((x2925/x2926)|x2927)>>x2928);

	if (t67 != 15) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x3061 = 2177LLU;
	int64_t x3062 = INT64_MAX;
	static int16_t x3063 = INT16_MAX;
	uint8_t x3064 = 6U;
	uint64_t t68 = 79LLU;

	t68 = (((x3061/x3062)|x3063)>>x3064);

	if (t68 != 511LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3109 = -21;
	uint64_t x3111 = 1026697208176LLU;
	int8_t x3112 = 7;
	uint64_t t69 = 275777436074LLU;

	t69 = (((x3109/x3110)|x3111)>>x3112);

	if (t69 != 8021071938LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x3117 = 3U;
	uint64_t x3118 = UINT64_MAX;
	volatile uint64_t t70 = 406840LLU;

	t70 = (((x3117/x3118)|x3119)>>x3120);

	if (t70 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x3333 = 349991850U;
	volatile int64_t x3334 = INT64_MIN;
	uint16_t x3335 = 0U;
	int64_t t71 = -948022697428065339LL;

	t71 = (((x3333/x3334)|x3335)>>x3336);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x3421 = INT64_MIN;
	uint64_t x3422 = UINT64_MAX;
	uint16_t x3423 = UINT16_MAX;
	static volatile int32_t x3424 = 0;
	uint64_t t72 = 31LLU;

	t72 = (((x3421/x3422)|x3423)>>x3424);

	if (t72 != 65535LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x3433 = -282;
	volatile int16_t x3434 = INT16_MIN;
	int16_t x3435 = 12;
	uint16_t x3436 = 0U;
	int32_t t73 = 16958;

	t73 = (((x3433/x3434)|x3435)>>x3436);

	if (t73 != 12) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x3473 = INT16_MIN;
	volatile uint32_t x3474 = UINT32_MAX;
	static volatile uint64_t x3475 = 2970217844829LLU;
	uint32_t x3476 = 1U;
	volatile uint64_t t74 = 1371426570556346LLU;

	t74 = (((x3473/x3474)|x3475)>>x3476);

	if (t74 != 1485108922414LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x3481 = 4306U;
	int16_t x3482 = INT16_MIN;
	static uint64_t x3483 = 5010920916LLU;
	uint16_t x3484 = 9U;

	t75 = (((x3481/x3482)|x3483)>>x3484);

	if (t75 != 9786954LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3505 = INT16_MAX;
	int32_t x3506 = INT32_MIN;
	int16_t x3507 = INT16_MAX;
	volatile uint8_t x3508 = 3U;
	volatile int32_t t76 = 32464162;

	t76 = (((x3505/x3506)|x3507)>>x3508);

	if (t76 != 4095) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x3549 = INT8_MIN;
	int64_t x3550 = 46221283191LL;
	static volatile int64_t x3551 = 173793484872859850LL;
	uint16_t x3552 = 29U;
	int64_t t77 = -10LL;

	t77 = (((x3549/x3550)|x3551)>>x3552);

	if (t77 != 323715591LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x3633 = -4343057151091906284LL;
	int64_t x3634 = INT64_MIN;
	volatile int64_t x3635 = 381896426910024LL;
	static int16_t x3636 = 0;

	t78 = (((x3633/x3634)|x3635)>>x3636);

	if (t78 != 381896426910024LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3686 = -1;
	static int16_t x3688 = 1;
	static uint32_t t79 = 176275083U;

	t79 = (((x3685/x3686)|x3687)>>x3688);

	if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x3709 = -34086LL;
	uint16_t x3710 = 13U;
	uint64_t x3711 = 49043649961542382LLU;
	uint64_t x3712 = 30LLU;
	volatile uint64_t t80 = 6790161252331312829LLU;

	t80 = (((x3709/x3710)|x3711)>>x3712);

	if (t80 != 17179869183LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x3757 = INT32_MIN;
	int8_t x3758 = INT8_MIN;
	static int32_t x3759 = INT32_MAX;
	static volatile uint64_t x3760 = 1LLU;
	int32_t t81 = 0;

	t81 = (((x3757/x3758)|x3759)>>x3760);

	if (t81 != 1073741823) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3813 = 10LLU;
	int32_t x3814 = -425;
	static int64_t x3815 = INT64_MIN;
	int8_t x3816 = 13;
	volatile uint64_t t82 = 1107858329062031LLU;

	t82 = (((x3813/x3814)|x3815)>>x3816);

	if (t82 != 1125899906842624LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3986 = UINT32_MAX;
	uint16_t x3987 = UINT16_MAX;
	uint8_t x3988 = 30U;
	volatile uint64_t t83 = 5044097965208LLU;

	t83 = (((x3985/x3986)|x3987)>>x3988);

	if (t83 != 4LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x4001 = UINT8_MAX;
	int16_t x4002 = 200;
	uint32_t x4003 = UINT32_MAX;
	uint8_t x4004 = 1U;
	uint32_t t84 = 260182062U;

	t84 = (((x4001/x4002)|x4003)>>x4004);

	if (t84 != 2147483647U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x4009 = UINT64_MAX;
	static uint32_t x4010 = UINT32_MAX;
	static int32_t x4011 = -6;
	static volatile uint8_t x4012 = 15U;
	volatile uint64_t t85 = 8653590478139468611LLU;

	t85 = (((x4009/x4010)|x4011)>>x4012);

	if (t85 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x4025 = INT32_MIN;
	int64_t x4026 = -1517LL;
	static uint8_t x4027 = UINT8_MAX;
	uint8_t x4028 = 23U;
	int64_t t86 = 5322532634LL;

	t86 = (((x4025/x4026)|x4027)>>x4028);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x4098 = INT8_MIN;
	int32_t x4099 = -1;
	uint16_t x4100 = 6U;
	volatile uint64_t t87 = 99681145395LLU;

	t87 = (((x4097/x4098)|x4099)>>x4100);

	if (t87 != 288230376151711743LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x4109 = INT32_MIN;
	static int64_t x4110 = INT64_MAX;
	int16_t x4111 = INT16_MAX;
	uint8_t x4112 = 5U;
	int64_t t88 = -1LL;

	t88 = (((x4109/x4110)|x4111)>>x4112);

	if (t88 != 1023LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x4185 = INT16_MAX;
	static volatile int8_t x4186 = INT8_MIN;
	static uint32_t x4187 = 141394442U;
	int32_t x4188 = 3;

	t89 = (((x4185/x4186)|x4187)>>x4188);

	if (t89 != 536870881U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4270 = -7;
	int32_t x4271 = -8813;
	static volatile uint64_t t90 = 8920066189376999710LLU;

	t90 = (((x4269/x4270)|x4271)>>x4272);

	if (t90 != 1152921504606846425LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4279 = INT16_MAX;
	static int8_t x4280 = 0;
	static int64_t t91 = 694713897835098058LL;

	t91 = (((x4277/x4278)|x4279)>>x4280);

	if (t91 != 1474559LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x4333 = 1050186717LLU;
	static int16_t x4334 = INT16_MIN;
	int64_t x4335 = -132430552978LL;
	static uint16_t x4336 = 4U;

	t92 = (((x4333/x4334)|x4335)>>x4336);

	if (t92 != 1152921496329937414LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x4337 = 949;
	static volatile int32_t x4338 = INT32_MIN;
	uint8_t x4339 = 2U;
	volatile uint16_t x4340 = 2U;
	volatile int32_t t93 = 22172;

	t93 = (((x4337/x4338)|x4339)>>x4340);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x4409 = -1;
	static uint64_t x4410 = 2LLU;
	uint32_t x4411 = 60653U;
	int8_t x4412 = 0;

	t94 = (((x4409/x4410)|x4411)>>x4412);

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x4425 = INT32_MIN;
	uint32_t x4426 = UINT32_MAX;
	static volatile uint8_t x4428 = 22U;
	uint32_t t95 = 1815U;

	t95 = (((x4425/x4426)|x4427)>>x4428);

	if (t95 != 1023U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4433 = 0LLU;
	uint8_t x4435 = 7U;
	volatile uint64_t t96 = 82151410LLU;

	t96 = (((x4433/x4434)|x4435)>>x4436);

	if (t96 != 7LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x4437 = UINT8_MAX;
	static int8_t x4438 = INT8_MAX;
	static uint64_t x4439 = 49711945238955914LLU;
	uint64_t t97 = 50780614968LLU;

	t97 = (((x4437/x4438)|x4439)>>x4440);

	if (t97 != 47409005392LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x4457 = 1074508863LLU;
	static uint64_t t98 = 1787053165LLU;

	t98 = (((x4457/x4458)|x4459)>>x4460);

	if (t98 != 15LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x4509 = 179LLU;
	uint16_t x4510 = UINT16_MAX;
	volatile uint8_t x4511 = 2U;
	int8_t x4512 = 7;

	t99 = (((x4509/x4510)|x4511)>>x4512);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

