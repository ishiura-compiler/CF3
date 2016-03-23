
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x16 = INT16_MIN;
static int16_t x19 = -1;
int16_t x20 = 11;
static volatile uint32_t t1 = 114U;
static uint16_t x25 = 12883U;
uint32_t x30 = 21U;
uint8_t x32 = 48U;
uint8_t x51 = UINT8_MAX;
static int8_t x57 = 8;
uint64_t x61 = 3527LLU;
uint16_t x65 = 462U;
int8_t x90 = INT8_MIN;
volatile uint64_t t10 = 4193870538964LLU;
int32_t t11 = -6703;
volatile int32_t t12 = 231084703;
static int64_t x120 = INT64_MIN;
volatile uint32_t x141 = UINT32_MAX;
int64_t x155 = 211659LL;
volatile int32_t t18 = -1330824;
volatile int8_t x187 = -40;
static uint64_t x191 = 9814420913697740LLU;
volatile uint64_t t22 = 1962950285963LLU;
int32_t t23 = -467;
volatile int64_t t24 = -512314620LL;
int32_t x214 = 17072;
int16_t x229 = 1652;
int8_t x234 = -25;
uint64_t x248 = UINT64_MAX;
uint16_t x297 = UINT16_MAX;
uint64_t x298 = 4161LLU;
uint8_t x302 = 11U;
volatile uint16_t x303 = UINT16_MAX;
int8_t x334 = -1;
volatile int32_t t41 = -81713;
uint8_t x358 = UINT8_MAX;
int8_t x359 = INT8_MIN;
int64_t x360 = INT64_MIN;
static uint64_t t46 = 144865045LLU;
volatile int32_t t49 = -11473530;
static int8_t x416 = INT8_MIN;
volatile int32_t x418 = -1;
static int64_t x427 = INT64_MIN;
int32_t x428 = -1;
volatile uint32_t x432 = 117345151U;
static int64_t x434 = INT64_MAX;
volatile int64_t x443 = -10LL;
int64_t x446 = -1LL;
int32_t t56 = 82347449;
int16_t x454 = INT16_MIN;
int32_t x456 = INT32_MIN;
int64_t t63 = -9381804LL;
uint16_t x505 = 2823U;
volatile int32_t x533 = 0;
static uint16_t x536 = 539U;
volatile uint64_t x541 = 1545520445742061320LLU;
uint32_t x544 = UINT32_MAX;
uint64_t x550 = UINT64_MAX;
volatile uint16_t x553 = UINT16_MAX;
uint8_t x571 = 9U;
static int8_t x572 = -27;
static volatile int32_t t69 = -101398539;
uint64_t x581 = 7212LLU;
volatile uint32_t x585 = 44U;
int8_t x587 = 7;
static uint32_t t71 = 536U;
uint16_t x590 = 2315U;
uint64_t x602 = 541008034936LLU;
static int32_t x614 = -10840455;
uint64_t x616 = UINT64_MAX;
volatile int8_t x635 = -1;
int8_t x655 = INT8_MIN;
uint64_t x656 = UINT64_MAX;
static int32_t t79 = -1;
int32_t x658 = INT32_MIN;
static uint8_t x661 = 9U;
uint16_t x662 = 3735U;
volatile uint16_t x677 = 18U;
static int64_t x678 = INT64_MAX;
int32_t x682 = INT32_MIN;
uint8_t x684 = UINT8_MAX;
int64_t x691 = -1LL;
volatile int8_t x692 = 27;
uint16_t x717 = 1U;
uint32_t t86 = 68U;
volatile int32_t t88 = 241643;
uint16_t x759 = UINT16_MAX;
int8_t x767 = -2;
volatile int64_t x783 = INT64_MAX;
int16_t x806 = INT16_MIN;
int64_t x807 = INT64_MIN;
uint8_t x809 = UINT8_MAX;
uint32_t x810 = 88657U;
int32_t x811 = -1;
int8_t x812 = INT8_MIN;
int32_t t96 = 206;
uint64_t x813 = UINT64_MAX;
int32_t x814 = INT32_MIN;
uint32_t x815 = UINT32_MAX;
static int8_t x822 = INT8_MIN;
int32_t t101 = -7;
volatile int16_t x846 = INT16_MIN;
int64_t x851 = 87400248477LL;
volatile int32_t t103 = -825;
int16_t x866 = INT16_MAX;
volatile int32_t t104 = -39185;
int64_t x874 = -1LL;
int16_t x876 = -1;
int32_t t106 = 9083816;
volatile int64_t x890 = INT64_MAX;
int32_t x902 = 0;
uint32_t x929 = 12729507U;
volatile uint32_t t110 = 832076U;
static int64_t x948 = -36434LL;
static uint32_t x954 = 91392U;
uint64_t x977 = 5LLU;
uint8_t x979 = 108U;
static volatile uint64_t t117 = 23611758075953LLU;
int32_t x988 = 65181;
uint64_t x1015 = 26412745741237LLU;
static volatile int32_t t120 = 244686688;
int8_t x1020 = INT8_MIN;
static uint32_t t121 = 60670921U;
int8_t x1021 = 21;
static int64_t x1027 = -1LL;
uint32_t x1031 = 10U;
uint32_t x1037 = UINT32_MAX;
uint32_t x1038 = 15U;
int8_t x1059 = -1;
uint8_t x1061 = UINT8_MAX;
uint32_t t130 = 5047U;
static uint8_t x1085 = 21U;
uint8_t x1097 = 29U;
uint32_t x1099 = 22U;
volatile uint64_t t137 = 23765504581547LLU;
int8_t x1156 = -1;
uint8_t x1173 = UINT8_MAX;
int32_t t139 = 6063255;
int64_t x1183 = INT64_MIN;
int16_t x1184 = -1;
volatile int32_t t141 = 811513;
int64_t x1200 = -42061555378534842LL;
volatile int8_t x1202 = INT8_MAX;
int32_t t144 = -175097;
volatile uint32_t x1226 = UINT32_MAX;
volatile uint64_t t145 = 12077813732LLU;
int32_t x1237 = 110;
int16_t x1240 = 17;
static uint64_t x1241 = 33137587602890LLU;
uint32_t x1244 = UINT32_MAX;
int8_t x1246 = INT8_MAX;
int8_t x1254 = INT8_MAX;
volatile int32_t x1258 = INT32_MIN;
volatile uint64_t t150 = 2519070721LLU;
uint32_t x1274 = 113U;
uint32_t x1276 = UINT32_MAX;
volatile int8_t x1297 = INT8_MAX;
volatile int16_t x1298 = INT16_MAX;
int32_t x1299 = INT32_MAX;
volatile uint8_t x1301 = 13U;
uint16_t x1304 = 38U;
uint32_t x1307 = UINT32_MAX;
uint8_t x1308 = 0U;
volatile int32_t t155 = 13959;
static volatile int8_t x1320 = -14;
int64_t x1328 = -1LL;
volatile int64_t t157 = 1289425524890087691LL;
int8_t x1347 = INT8_MAX;
int16_t x1365 = INT16_MAX;
volatile uint16_t x1367 = 7U;
int32_t t161 = 646056;
static int8_t x1378 = -1;
static uint32_t x1403 = UINT32_MAX;
int32_t x1404 = -91165;
volatile uint16_t x1409 = 18U;
static uint32_t x1417 = 26U;
int8_t x1422 = INT8_MIN;
uint16_t x1443 = 980U;
int32_t t169 = 2242456;
int64_t x1457 = 40LL;
volatile uint16_t x1461 = UINT16_MAX;
int16_t x1463 = 0;
static int8_t x1464 = INT8_MAX;
int16_t x1472 = -1;
static int16_t x1475 = -12549;
volatile uint64_t x1477 = UINT64_MAX;
int32_t x1482 = 1;
volatile int8_t x1483 = 22;
static volatile int16_t x1488 = -1;
static uint64_t t178 = 261595330356554LLU;
int32_t t181 = 1930;
static int64_t x1510 = INT64_MIN;
int32_t t182 = -248759;
int32_t t183 = 264541;
uint16_t x1525 = 18U;
static volatile uint8_t x1531 = 0U;
int16_t x1537 = INT16_MAX;
uint64_t x1547 = 1061LLU;
int32_t x1558 = -142766070;
uint64_t x1559 = 187051LLU;
uint32_t x1561 = UINT32_MAX;
static uint64_t x1584 = 24077229879671LLU;
static volatile int32_t t192 = -14975;
int8_t x1605 = 1;
int32_t x1612 = -1;
int64_t x1618 = INT64_MIN;
static volatile int32_t t197 = 165;
int32_t t198 = 137023;
uint16_t x1629 = 0U;
volatile int16_t x1631 = 1;


void f0(void) {
    	uint32_t x13 = UINT32_MAX;
	uint16_t x14 = UINT16_MAX;
	int16_t x15 = INT16_MIN;
	uint32_t t0 = 0U;

    t0 = (x13<<(x14!=(x15!=x16)));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x17 = 1074970889U;
	volatile int8_t x18 = INT8_MIN;

    t1 = (x17<<(x18!=(x19!=x20)));

    if (t1 != 2149941778U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x26 = 48U;
	volatile int64_t x27 = INT64_MAX;
	uint64_t x28 = 0LLU;
	int32_t t2 = 23;

    t2 = (x25<<(x26!=(x27!=x28)));

    if (t2 != 25766) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint64_t x29 = 2478LLU;
	volatile uint8_t x31 = UINT8_MAX;
	volatile uint64_t t3 = 58418859799LLU;

    t3 = (x29<<(x30!=(x31!=x32)));

    if (t3 != 4956LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x45 = 62LLU;
	int8_t x46 = -7;
	volatile int16_t x47 = INT16_MIN;
	static int8_t x48 = -42;
	volatile uint64_t t4 = 8077094LLU;

    t4 = (x45<<(x46!=(x47!=x48)));

    if (t4 != 124LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint64_t x49 = 569084448421617LLU;
	static volatile uint16_t x50 = 3U;
	int8_t x52 = 9;
	static volatile uint64_t t5 = 4029690LLU;

    t5 = (x49<<(x50!=(x51!=x52)));

    if (t5 != 1138168896843234LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x58 = 0;
	static uint64_t x59 = UINT64_MAX;
	int16_t x60 = -24;
	int32_t t6 = 4;

    t6 = (x57<<(x58!=(x59!=x60)));

    if (t6 != 16) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x62 = 8U;
	int8_t x63 = INT8_MAX;
	static uint16_t x64 = 17U;
	volatile uint64_t t7 = 7143128039411LLU;

    t7 = (x61<<(x62!=(x63!=x64)));

    if (t7 != 7054LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x66 = INT8_MIN;
	int32_t x67 = 355293;
	int32_t x68 = -1;
	int32_t t8 = -4385453;

    t8 = (x65<<(x66!=(x67!=x68)));

    if (t8 != 924) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x77 = 4LLU;
	int8_t x78 = INT8_MIN;
	static volatile int8_t x79 = INT8_MAX;
	uint8_t x80 = UINT8_MAX;
	uint64_t t9 = 312324133684LLU;

    t9 = (x77<<(x78!=(x79!=x80)));

    if (t9 != 8LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x89 = 497652877794511LLU;
	int8_t x91 = -1;
	static int8_t x92 = INT8_MIN;

    t10 = (x89<<(x90!=(x91!=x92)));

    if (t10 != 995305755589022LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x101 = 55;
	static int8_t x102 = -1;
	int16_t x103 = INT16_MAX;
	static int16_t x104 = INT16_MAX;

    t11 = (x101<<(x102!=(x103!=x104)));

    if (t11 != 110) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x113 = 1U;
	uint16_t x114 = 5193U;
	uint8_t x115 = 0U;
	int32_t x116 = -6;

    t12 = (x113<<(x114!=(x115!=x116)));

    if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x117 = 17U;
	int16_t x118 = 857;
	static volatile int32_t x119 = INT32_MIN;
	static int32_t t13 = 131;

    t13 = (x117<<(x118!=(x119!=x120)));

    if (t13 != 34) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x121 = 27485LLU;
	static int16_t x122 = INT16_MAX;
	int8_t x123 = 3;
	static uint16_t x124 = UINT16_MAX;
	volatile uint64_t t14 = 75305786117897954LLU;

    t14 = (x121<<(x122!=(x123!=x124)));

    if (t14 != 54970LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	volatile uint64_t x127 = UINT64_MAX;
	static int64_t x128 = INT64_MIN;
	static volatile int32_t t15 = 513397313;

    t15 = (x125<<(x126!=(x127!=x128)));

    if (t15 != 510) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x129 = 2U;
	uint8_t x130 = 0U;
	volatile int32_t x131 = -5959764;
	int16_t x132 = INT16_MIN;
	volatile int32_t t16 = -88;

    t16 = (x129<<(x130!=(x131!=x132)));

    if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x142 = INT8_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	int64_t x144 = INT64_MAX;
	static uint32_t t17 = 31557238U;

    t17 = (x141<<(x142!=(x143!=x144)));

    if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 1566016809680565LLU;
	volatile uint32_t x156 = 92U;

    t18 = (x153<<(x154!=(x155!=x156)));

    if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x157 = 1U;
	int8_t x158 = INT8_MIN;
	static uint32_t x159 = UINT32_MAX;
	static int8_t x160 = -1;
	volatile int32_t t19 = -3397;

    t19 = (x157<<(x158!=(x159!=x160)));

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x165 = 33617664LL;
	static uint8_t x166 = 100U;
	uint32_t x167 = UINT32_MAX;
	static volatile int8_t x168 = INT8_MAX;
	int64_t t20 = 26088148106LL;

    t20 = (x165<<(x166!=(x167!=x168)));

    if (t20 != 67235328LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x185 = 1U;
	static uint16_t x186 = UINT16_MAX;
	uint32_t x188 = UINT32_MAX;
	volatile int32_t t21 = -864684;

    t21 = (x185<<(x186!=(x187!=x188)));

    if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x189 = 856LLU;
	uint64_t x190 = 1786LLU;
	uint8_t x192 = UINT8_MAX;

    t22 = (x189<<(x190!=(x191!=x192)));

    if (t22 != 1712LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x193 = UINT8_MAX;
	int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	int64_t x196 = -170329702LL;

    t23 = (x193<<(x194!=(x195!=x196)));

    if (t23 != 510) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x197 = 0LL;
	int8_t x198 = INT8_MIN;
	volatile int32_t x199 = INT32_MAX;
	volatile int32_t x200 = -1;

    t24 = (x197<<(x198!=(x199!=x200)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x201 = 503U;
	uint8_t x202 = UINT8_MAX;
	uint32_t x203 = UINT32_MAX;
	static int16_t x204 = -1;
	int32_t t25 = 1;

    t25 = (x201<<(x202!=(x203!=x204)));

    if (t25 != 1006) { NG(); } else { ; }
	
}

void f26(void) {
    	static int64_t x205 = 437738916652535671LL;
	volatile uint8_t x206 = 1U;
	int8_t x207 = -54;
	int32_t x208 = INT32_MIN;
	volatile int64_t t26 = 91550911854100LL;

    t26 = (x205<<(x206!=(x207!=x208)));

    if (t26 != 437738916652535671LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x209 = 32946218U;
	volatile uint64_t x210 = 730LLU;
	int16_t x211 = INT16_MAX;
	static int64_t x212 = INT64_MIN;
	volatile uint32_t t27 = 100045360U;

    t27 = (x209<<(x210!=(x211!=x212)));

    if (t27 != 65892436U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x213 = INT16_MAX;
	volatile int64_t x215 = INT64_MIN;
	int8_t x216 = 1;
	static int32_t t28 = -199655003;

    t28 = (x213<<(x214!=(x215!=x216)));

    if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x230 = -1802;
	volatile int16_t x231 = INT16_MIN;
	uint64_t x232 = 1843383295527LLU;
	volatile int32_t t29 = 251526;

    t29 = (x229<<(x230!=(x231!=x232)));

    if (t29 != 3304) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x233 = 0U;
	int16_t x235 = 0;
	volatile int64_t x236 = 705941444061685090LL;
	volatile uint32_t t30 = 859U;

    t30 = (x233<<(x234!=(x235!=x236)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x241 = 300;
	uint16_t x242 = 4020U;
	int64_t x243 = -1606437LL;
	int32_t x244 = -1;
	int32_t t31 = 24758;

    t31 = (x241<<(x242!=(x243!=x244)));

    if (t31 != 600) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	int8_t x246 = INT8_MIN;
	int32_t x247 = -1;
	static uint64_t t32 = 651909016LLU;

    t32 = (x245<<(x246!=(x247!=x248)));

    if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x257 = 4U;
	static uint8_t x258 = 1U;
	int64_t x259 = -253469792828418277LL;
	int64_t x260 = -2244954505590582835LL;
	int32_t t33 = -14482;

    t33 = (x257<<(x258!=(x259!=x260)));

    if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x265 = UINT16_MAX;
	uint64_t x266 = 26767506LLU;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	int32_t t34 = -8283861;

    t34 = (x265<<(x266!=(x267!=x268)));

    if (t34 != 131070) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x277 = UINT64_MAX;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MIN;
	volatile int32_t x280 = 9190;
	uint64_t t35 = 36459LLU;

    t35 = (x277<<(x278!=(x279!=x280)));

    if (t35 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x289 = 13321650;
	volatile int64_t x290 = -1LL;
	int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MAX;
	int32_t t36 = -188381475;

    t36 = (x289<<(x290!=(x291!=x292)));

    if (t36 != 26643300) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x299 = INT16_MAX;
	uint16_t x300 = UINT16_MAX;
	static int32_t t37 = -31203;

    t37 = (x297<<(x298!=(x299!=x300)));

    if (t37 != 131070) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x301 = 354144371229403LL;
	int64_t x304 = 119594930LL;
	volatile int64_t t38 = 672544649264847LL;

    t38 = (x301<<(x302!=(x303!=x304)));

    if (t38 != 708288742458806LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x313 = 58U;
	static int32_t x314 = 1;
	int8_t x315 = -1;
	int16_t x316 = INT16_MIN;
	static volatile int32_t t39 = -20663334;

    t39 = (x313<<(x314!=(x315!=x316)));

    if (t39 != 58) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x333 = 79U;
	uint64_t x335 = 4419369133269630LLU;
	static uint16_t x336 = 86U;
	int32_t t40 = -1773240;

    t40 = (x333<<(x334!=(x335!=x336)));

    if (t40 != 158) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x345 = 1U;
	int32_t x346 = 378;
	static volatile uint16_t x347 = 439U;
	uint32_t x348 = 22046U;

    t41 = (x345<<(x346!=(x347!=x348)));

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x357 = 19U;
	int32_t t42 = 0;

    t42 = (x357<<(x358!=(x359!=x360)));

    if (t42 != 38) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x365 = 2U;
	volatile uint16_t x366 = UINT16_MAX;
	uint16_t x367 = UINT16_MAX;
	static int64_t x368 = INT64_MIN;
	static int32_t t43 = 0;

    t43 = (x365<<(x366!=(x367!=x368)));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x377 = UINT64_MAX;
	static int16_t x378 = INT16_MIN;
	int16_t x379 = 454;
	uint16_t x380 = 91U;
	uint64_t t44 = 6987LLU;

    t44 = (x377<<(x378!=(x379!=x380)));

    if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x381 = INT16_MAX;
	uint16_t x382 = 4157U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MAX;
	volatile int32_t t45 = 3457838;

    t45 = (x381<<(x382!=(x383!=x384)));

    if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x385 = UINT64_MAX;
	volatile int16_t x386 = 348;
	int32_t x387 = 328715610;
	volatile uint8_t x388 = 0U;

    t46 = (x385<<(x386!=(x387!=x388)));

    if (t46 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x389 = 7U;
	int8_t x390 = -1;
	int8_t x391 = 12;
	int16_t x392 = INT16_MAX;
	volatile int32_t t47 = -1641;

    t47 = (x389<<(x390!=(x391!=x392)));

    if (t47 != 14) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x401 = 1865354461594206865LLU;
	static volatile int8_t x402 = INT8_MAX;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	uint64_t t48 = 449400348905437514LLU;

    t48 = (x401<<(x402!=(x403!=x404)));

    if (t48 != 3730708923188413730LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x405 = 0U;
	static int32_t x406 = INT32_MIN;
	static uint16_t x407 = UINT16_MAX;
	volatile uint8_t x408 = 98U;

    t49 = (x405<<(x406!=(x407!=x408)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x413 = UINT64_MAX;
	uint64_t x414 = 195301040178763LLU;
	volatile uint8_t x415 = UINT8_MAX;
	volatile uint64_t t50 = 50LLU;

    t50 = (x413<<(x414!=(x415!=x416)));

    if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x417 = 2948LLU;
	int8_t x419 = INT8_MAX;
	int8_t x420 = INT8_MAX;
	volatile uint64_t t51 = 105168274183453LLU;

    t51 = (x417<<(x418!=(x419!=x420)));

    if (t51 != 5896LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x425 = 1U;
	int32_t x426 = -1;
	int32_t t52 = 9;

    t52 = (x425<<(x426!=(x427!=x428)));

    if (t52 != 2) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x429 = 33346936192LLU;
	volatile uint16_t x430 = UINT16_MAX;
	int64_t x431 = INT64_MIN;
	volatile uint64_t t53 = 116657295659LLU;

    t53 = (x429<<(x430!=(x431!=x432)));

    if (t53 != 66693872384LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x433 = INT16_MAX;
	uint16_t x435 = UINT16_MAX;
	volatile int8_t x436 = INT8_MIN;
	static volatile int32_t t54 = -3114;

    t54 = (x433<<(x434!=(x435!=x436)));

    if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x441 = 7U;
	int8_t x442 = INT8_MAX;
	int16_t x444 = 10458;
	volatile uint32_t t55 = 77652496U;

    t55 = (x441<<(x442!=(x443!=x444)));

    if (t55 != 14U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x445 = INT16_MAX;
	uint8_t x447 = UINT8_MAX;
	static uint16_t x448 = UINT16_MAX;

    t56 = (x445<<(x446!=(x447!=x448)));

    if (t56 != 65534) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x449 = 1LLU;
	int32_t x450 = INT32_MAX;
	volatile int16_t x451 = 1;
	volatile int8_t x452 = -18;
	uint64_t t57 = 2203013LLU;

    t57 = (x449<<(x450!=(x451!=x452)));

    if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x453 = INT8_MAX;
	static int16_t x455 = INT16_MIN;
	volatile int32_t t58 = 2532553;

    t58 = (x453<<(x454!=(x455!=x456)));

    if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x457 = 8U;
	volatile uint64_t x458 = 708521842560462LLU;
	uint8_t x459 = 16U;
	volatile int32_t x460 = -2721;
	volatile uint32_t t59 = 16255064U;

    t59 = (x457<<(x458!=(x459!=x460)));

    if (t59 != 16U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x461 = 2;
	int16_t x462 = 23;
	static volatile int32_t x463 = 59083;
	int16_t x464 = INT16_MIN;
	int32_t t60 = -100096;

    t60 = (x461<<(x462!=(x463!=x464)));

    if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x481 = UINT16_MAX;
	uint16_t x482 = 1072U;
	static int16_t x483 = -1;
	int64_t x484 = 6826776120LL;
	int32_t t61 = 175348384;

    t61 = (x481<<(x482!=(x483!=x484)));

    if (t61 != 131070) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x493 = 63U;
	int32_t x494 = -2055;
	int64_t x495 = 440817123144LL;
	int64_t x496 = -146373LL;
	int32_t t62 = -12892541;

    t62 = (x493<<(x494!=(x495!=x496)));

    if (t62 != 126) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x501 = 42634456LL;
	uint32_t x502 = 148612665U;
	uint32_t x503 = 24U;
	int8_t x504 = INT8_MIN;

    t63 = (x501<<(x502!=(x503!=x504)));

    if (t63 != 85268912LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x506 = 1;
	int64_t x507 = -1LL;
	int32_t x508 = -7097;
	int32_t t64 = 240615894;

    t64 = (x505<<(x506!=(x507!=x508)));

    if (t64 != 2823) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x534 = 6223886LL;
	int8_t x535 = INT8_MIN;
	volatile int32_t t65 = 26;

    t65 = (x533<<(x534!=(x535!=x536)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x542 = 126U;
	int16_t x543 = INT16_MIN;
	uint64_t t66 = 12529691089LLU;

    t66 = (x541<<(x542!=(x543!=x544)));

    if (t66 != 3091040891484122640LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x549 = 3035754LL;
	volatile uint16_t x551 = 6756U;
	int8_t x552 = 0;
	static int64_t t67 = 884LL;

    t67 = (x549<<(x550!=(x551!=x552)));

    if (t67 != 6071508LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int64_t x554 = INT64_MIN;
	int64_t x555 = INT64_MIN;
	uint32_t x556 = 1899344U;
	static volatile int32_t t68 = -8;

    t68 = (x553<<(x554!=(x555!=x556)));

    if (t68 != 131070) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x569 = 13U;
	uint16_t x570 = 2U;

    t69 = (x569<<(x570!=(x571!=x572)));

    if (t69 != 26) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x582 = -63998;
	uint64_t x583 = 1696LLU;
	static volatile int64_t x584 = INT64_MAX;
	volatile uint64_t t70 = 0LLU;

    t70 = (x581<<(x582!=(x583!=x584)));

    if (t70 != 14424LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x586 = -213621LL;
	int32_t x588 = 166610;

    t71 = (x585<<(x586!=(x587!=x588)));

    if (t71 != 88U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x589 = UINT16_MAX;
	int64_t x591 = INT64_MIN;
	volatile int16_t x592 = INT16_MAX;
	volatile int32_t t72 = 0;

    t72 = (x589<<(x590!=(x591!=x592)));

    if (t72 != 131070) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x601 = INT8_MAX;
	int64_t x603 = INT64_MIN;
	static uint16_t x604 = UINT16_MAX;
	static int32_t t73 = 26790259;

    t73 = (x601<<(x602!=(x603!=x604)));

    if (t73 != 254) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint32_t x613 = UINT32_MAX;
	int64_t x615 = -445472414226LL;
	static uint32_t t74 = 213933U;

    t74 = (x613<<(x614!=(x615!=x616)));

    if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x617 = 528995731976580LL;
	int8_t x618 = -11;
	int64_t x619 = 2200409176472438693LL;
	int64_t x620 = INT64_MIN;
	int64_t t75 = -55086LL;

    t75 = (x617<<(x618!=(x619!=x620)));

    if (t75 != 1057991463953160LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x633 = 7251;
	volatile int64_t x634 = INT64_MIN;
	uint32_t x636 = 5617U;
	volatile int32_t t76 = 1;

    t76 = (x633<<(x634!=(x635!=x636)));

    if (t76 != 14502) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x637 = 3U;
	volatile int32_t x638 = -1;
	int32_t x639 = INT32_MIN;
	volatile uint8_t x640 = UINT8_MAX;
	volatile int32_t t77 = -274;

    t77 = (x637<<(x638!=(x639!=x640)));

    if (t77 != 6) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x641 = INT16_MAX;
	int32_t x642 = 7344;
	int32_t x643 = -1;
	int16_t x644 = -1;
	int32_t t78 = -535083850;

    t78 = (x641<<(x642!=(x643!=x644)));

    if (t78 != 65534) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x653 = 54U;
	uint64_t x654 = 70126LLU;

    t79 = (x653<<(x654!=(x655!=x656)));

    if (t79 != 108) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x657 = UINT32_MAX;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = -5653594;
	volatile uint32_t t80 = 222195U;

    t80 = (x657<<(x658!=(x659!=x660)));

    if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x663 = INT32_MIN;
	int16_t x664 = INT16_MAX;
	int32_t t81 = 256814562;

    t81 = (x661<<(x662!=(x663!=x664)));

    if (t81 != 18) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x679 = INT16_MIN;
	static int64_t x680 = -92672702865LL;
	int32_t t82 = 1174;

    t82 = (x677<<(x678!=(x679!=x680)));

    if (t82 != 36) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x681 = INT16_MAX;
	static int32_t x683 = -1;
	static int32_t t83 = 0;

    t83 = (x681<<(x682!=(x683!=x684)));

    if (t83 != 65534) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x689 = 2372U;
	uint32_t x690 = 1128U;
	volatile int32_t t84 = -35343779;

    t84 = (x689<<(x690!=(x691!=x692)));

    if (t84 != 4744) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x718 = 2086090LLU;
	volatile int8_t x719 = -1;
	int64_t x720 = INT64_MIN;
	static volatile int32_t t85 = -19707209;

    t85 = (x717<<(x718!=(x719!=x720)));

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x721 = UINT32_MAX;
	int8_t x722 = -1;
	volatile int16_t x723 = INT16_MIN;
	static int32_t x724 = 6624;

    t86 = (x721<<(x722!=(x723!=x724)));

    if (t86 != 4294967294U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x725 = 1051890311292LL;
	static int8_t x726 = INT8_MAX;
	uint32_t x727 = 3754U;
	int16_t x728 = 1;
	int64_t t87 = 17052523454LL;

    t87 = (x725<<(x726!=(x727!=x728)));

    if (t87 != 2103780622584LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint8_t x737 = UINT8_MAX;
	static int64_t x738 = -1LL;
	int64_t x739 = INT64_MAX;
	uint8_t x740 = UINT8_MAX;

    t88 = (x737<<(x738!=(x739!=x740)));

    if (t88 != 510) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x741 = UINT8_MAX;
	uint64_t x742 = 70922202537LLU;
	volatile uint32_t x743 = UINT32_MAX;
	volatile int8_t x744 = INT8_MAX;
	volatile int32_t t89 = -2;

    t89 = (x741<<(x742!=(x743!=x744)));

    if (t89 != 510) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x753 = 3;
	int16_t x754 = -1;
	int16_t x755 = INT16_MAX;
	static uint64_t x756 = UINT64_MAX;
	volatile int32_t t90 = -121347653;

    t90 = (x753<<(x754!=(x755!=x756)));

    if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x757 = 1;
	static int32_t x758 = INT32_MIN;
	int32_t x760 = INT32_MAX;
	volatile int32_t t91 = -10170543;

    t91 = (x757<<(x758!=(x759!=x760)));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x765 = 4;
	static int8_t x766 = -1;
	int16_t x768 = INT16_MIN;
	int32_t t92 = 296316;

    t92 = (x765<<(x766!=(x767!=x768)));

    if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x781 = UINT16_MAX;
	int8_t x782 = -4;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t93 = -8132838;

    t93 = (x781<<(x782!=(x783!=x784)));

    if (t93 != 131070) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x789 = 3298U;
	volatile int64_t x790 = 333270LL;
	static uint8_t x791 = UINT8_MAX;
	uint64_t x792 = UINT64_MAX;
	volatile int32_t t94 = 3418;

    t94 = (x789<<(x790!=(x791!=x792)));

    if (t94 != 6596) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x805 = 1;
	int64_t x808 = -1LL;
	static int32_t t95 = -692174491;

    t95 = (x805<<(x806!=(x807!=x808)));

    if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
    

    t96 = (x809<<(x810!=(x811!=x812)));

    if (t96 != 510) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x816 = -453107836214120948LL;
	volatile uint64_t t97 = 253433361852631825LLU;

    t97 = (x813<<(x814!=(x815!=x816)));

    if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x821 = 0;
	int16_t x823 = -3;
	volatile int64_t x824 = 3319468826LL;
	volatile int32_t t98 = 233;

    t98 = (x821<<(x822!=(x823!=x824)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x833 = UINT64_MAX;
	uint32_t x834 = UINT32_MAX;
	int8_t x835 = INT8_MAX;
	int8_t x836 = 0;
	static volatile uint64_t t99 = 389098028171296814LLU;

    t99 = (x833<<(x834!=(x835!=x836)));

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x837 = 231355LL;
	int16_t x838 = 0;
	uint64_t x839 = 149716959211048LLU;
	uint32_t x840 = 14U;
	int64_t t100 = 12271507649372316LL;

    t100 = (x837<<(x838!=(x839!=x840)));

    if (t100 != 462710LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint16_t x841 = 23389U;
	int64_t x842 = INT64_MIN;
	static uint8_t x843 = UINT8_MAX;
	static uint16_t x844 = 46U;

    t101 = (x841<<(x842!=(x843!=x844)));

    if (t101 != 46778) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x845 = 3;
	uint16_t x847 = 1U;
	int8_t x848 = -1;
	int32_t t102 = 1;

    t102 = (x845<<(x846!=(x847!=x848)));

    if (t102 != 6) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x849 = 379478680;
	uint8_t x850 = UINT8_MAX;
	volatile uint16_t x852 = 81U;

    t103 = (x849<<(x850!=(x851!=x852)));

    if (t103 != 758957360) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint8_t x865 = 2U;
	int32_t x867 = INT32_MAX;
	int16_t x868 = INT16_MIN;

    t104 = (x865<<(x866!=(x867!=x868)));

    if (t104 != 4) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x873 = 0;
	static int8_t x875 = INT8_MAX;
	volatile int32_t t105 = 12;

    t105 = (x873<<(x874!=(x875!=x876)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x881 = INT16_MAX;
	static int64_t x882 = INT64_MAX;
	volatile int8_t x883 = -1;
	int64_t x884 = 839LL;

    t106 = (x881<<(x882!=(x883!=x884)));

    if (t106 != 65534) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x889 = 40U;
	uint8_t x891 = 49U;
	int32_t x892 = -1;
	volatile int32_t t107 = 2;

    t107 = (x889<<(x890!=(x891!=x892)));

    if (t107 != 80) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x901 = 19U;
	static uint16_t x903 = 249U;
	static int8_t x904 = -1;
	int32_t t108 = 55153;

    t108 = (x901<<(x902!=(x903!=x904)));

    if (t108 != 38) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x909 = UINT64_MAX;
	uint32_t x910 = 238601786U;
	uint16_t x911 = 9263U;
	int8_t x912 = INT8_MIN;
	static volatile uint64_t t109 = 609LLU;

    t109 = (x909<<(x910!=(x911!=x912)));

    if (t109 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint32_t x930 = 941U;
	uint64_t x931 = 35154731583LLU;
	int64_t x932 = INT64_MAX;

    t110 = (x929<<(x930!=(x931!=x932)));

    if (t110 != 25459014U) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x937 = 0LL;
	int64_t x938 = -183LL;
	int16_t x939 = INT16_MIN;
	uint16_t x940 = 203U;
	static int64_t t111 = -913994441982LL;

    t111 = (x937<<(x938!=(x939!=x940)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x945 = UINT32_MAX;
	uint16_t x946 = UINT16_MAX;
	int16_t x947 = -1;
	uint32_t t112 = 0U;

    t112 = (x945<<(x946!=(x947!=x948)));

    if (t112 != 4294967294U) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x949 = 8954283438935408LL;
	int32_t x950 = -961587787;
	int32_t x951 = INT32_MIN;
	volatile int32_t x952 = 114;
	int64_t t113 = 1088245LL;

    t113 = (x949<<(x950!=(x951!=x952)));

    if (t113 != 17908566877870816LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x953 = UINT16_MAX;
	uint8_t x955 = UINT8_MAX;
	static int64_t x956 = INT64_MIN;
	static int32_t t114 = 0;

    t114 = (x953<<(x954!=(x955!=x956)));

    if (t114 != 131070) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x973 = 10;
	uint64_t x974 = 515080621LLU;
	static uint64_t x975 = 192546824955141598LLU;
	int16_t x976 = -1;
	static int32_t t115 = -20801;

    t115 = (x973<<(x974!=(x975!=x976)));

    if (t115 != 20) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint16_t x978 = 211U;
	int64_t x980 = -382864488364LL;
	volatile uint64_t t116 = 20LLU;

    t116 = (x977<<(x978!=(x979!=x980)));

    if (t116 != 10LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint64_t x981 = 30650529LLU;
	static int16_t x982 = -1;
	int16_t x983 = INT16_MIN;
	int16_t x984 = -44;

    t117 = (x981<<(x982!=(x983!=x984)));

    if (t117 != 61301058LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x985 = 250708051U;
	volatile int16_t x986 = INT16_MIN;
	int64_t x987 = -13LL;
	uint32_t t118 = 8218U;

    t118 = (x985<<(x986!=(x987!=x988)));

    if (t118 != 501416102U) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x1001 = 42U;
	uint8_t x1002 = UINT8_MAX;
	int16_t x1003 = 1;
	volatile uint16_t x1004 = 404U;
	volatile int32_t t119 = 11337;

    t119 = (x1001<<(x1002!=(x1003!=x1004)));

    if (t119 != 84) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x1013 = 2;
	volatile int8_t x1014 = 22;
	int32_t x1016 = INT32_MIN;

    t120 = (x1013<<(x1014!=(x1015!=x1016)));

    if (t120 != 4) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x1017 = 214303U;
	int16_t x1018 = 1;
	uint8_t x1019 = 6U;

    t121 = (x1017<<(x1018!=(x1019!=x1020)));

    if (t121 != 214303U) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x1022 = 24U;
	uint32_t x1023 = UINT32_MAX;
	int64_t x1024 = -1LL;
	int32_t t122 = -123460;

    t122 = (x1021<<(x1022!=(x1023!=x1024)));

    if (t122 != 42) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	static int16_t x1026 = INT16_MAX;
	int32_t x1028 = INT32_MIN;
	volatile int32_t t123 = -128779090;

    t123 = (x1025<<(x1026!=(x1027!=x1028)));

    if (t123 != 510) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1029 = 2U;
	int16_t x1030 = INT16_MAX;
	static int16_t x1032 = INT16_MAX;
	static int32_t t124 = -1964491;

    t124 = (x1029<<(x1030!=(x1031!=x1032)));

    if (t124 != 4) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x1039 = -2;
	volatile int64_t x1040 = INT64_MIN;
	volatile uint32_t t125 = 10U;

    t125 = (x1037<<(x1038!=(x1039!=x1040)));

    if (t125 != 4294967294U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x1041 = 3U;
	int8_t x1042 = 14;
	int64_t x1043 = -1LL;
	volatile int8_t x1044 = -1;
	static uint32_t t126 = 13162274U;

    t126 = (x1041<<(x1042!=(x1043!=x1044)));

    if (t126 != 6U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x1045 = UINT64_MAX;
	uint32_t x1046 = 6811U;
	volatile int32_t x1047 = INT32_MIN;
	int16_t x1048 = INT16_MAX;
	volatile uint64_t t127 = 7915545573LLU;

    t127 = (x1045<<(x1046!=(x1047!=x1048)));

    if (t127 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1057 = 121144369300311LL;
	volatile int8_t x1058 = -1;
	int32_t x1060 = INT32_MIN;
	volatile int64_t t128 = 3993981087LL;

    t128 = (x1057<<(x1058!=(x1059!=x1060)));

    if (t128 != 242288738600622LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x1062 = 437526886192594LLU;
	int8_t x1063 = 31;
	uint16_t x1064 = UINT16_MAX;
	static int32_t t129 = 59802;

    t129 = (x1061<<(x1062!=(x1063!=x1064)));

    if (t129 != 510) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1077 = 887U;
	int8_t x1078 = 28;
	volatile int16_t x1079 = INT16_MIN;
	int64_t x1080 = -1787119117430514LL;

    t130 = (x1077<<(x1078!=(x1079!=x1080)));

    if (t130 != 1774U) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x1086 = INT32_MIN;
	static int32_t x1087 = -65153;
	int32_t x1088 = -1;
	int32_t t131 = 171220948;

    t131 = (x1085<<(x1086!=(x1087!=x1088)));

    if (t131 != 42) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1098 = 6;
	uint8_t x1100 = UINT8_MAX;
	static int32_t t132 = -10;

    t132 = (x1097<<(x1098!=(x1099!=x1100)));

    if (t132 != 58) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1101 = 0;
	volatile int64_t x1102 = INT64_MAX;
	static int16_t x1103 = 0;
	int64_t x1104 = INT64_MIN;
	int32_t t133 = -1;

    t133 = (x1101<<(x1102!=(x1103!=x1104)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint32_t x1105 = 334197U;
	int32_t x1106 = -12372390;
	volatile int32_t x1107 = -1;
	volatile int32_t x1108 = -1;
	uint32_t t134 = 423U;

    t134 = (x1105<<(x1106!=(x1107!=x1108)));

    if (t134 != 668394U) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x1117 = 17706;
	uint64_t x1118 = 675568LLU;
	int8_t x1119 = INT8_MIN;
	uint32_t x1120 = 7U;
	volatile int32_t t135 = -116095936;

    t135 = (x1117<<(x1118!=(x1119!=x1120)));

    if (t135 != 35412) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1125 = UINT64_MAX;
	int16_t x1126 = -344;
	volatile uint16_t x1127 = 7U;
	uint64_t x1128 = UINT64_MAX;
	volatile uint64_t t136 = 5LLU;

    t136 = (x1125<<(x1126!=(x1127!=x1128)));

    if (t136 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x1133 = UINT64_MAX;
	int32_t x1134 = INT32_MIN;
	volatile int8_t x1135 = -1;
	volatile int64_t x1136 = INT64_MIN;

    t137 = (x1133<<(x1134!=(x1135!=x1136)));

    if (t137 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint64_t x1153 = UINT64_MAX;
	volatile uint32_t x1154 = 27308U;
	static uint8_t x1155 = UINT8_MAX;
	uint64_t t138 = 6425159685529529289LLU;

    t138 = (x1153<<(x1154!=(x1155!=x1156)));

    if (t138 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1174 = -17565133162586LL;
	int64_t x1175 = -3251134185705999LL;
	static int8_t x1176 = -1;

    t139 = (x1173<<(x1174!=(x1175!=x1176)));

    if (t139 != 510) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1181 = 3U;
	static int8_t x1182 = INT8_MIN;
	int32_t t140 = -56909779;

    t140 = (x1181<<(x1182!=(x1183!=x1184)));

    if (t140 != 6) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint8_t x1185 = 3U;
	static int16_t x1186 = -2;
	uint32_t x1187 = 138451U;
	static int8_t x1188 = INT8_MIN;

    t141 = (x1185<<(x1186!=(x1187!=x1188)));

    if (t141 != 6) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x1197 = 106756LLU;
	static uint16_t x1198 = 1308U;
	int32_t x1199 = INT32_MAX;
	volatile uint64_t t142 = 3287601346140188LLU;

    t142 = (x1197<<(x1198!=(x1199!=x1200)));

    if (t142 != 213512LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1201 = 1LL;
	int8_t x1203 = -27;
	int16_t x1204 = INT16_MAX;
	volatile int64_t t143 = -295LL;

    t143 = (x1201<<(x1202!=(x1203!=x1204)));

    if (t143 != 2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1213 = 8U;
	uint8_t x1214 = 6U;
	uint32_t x1215 = 6447509U;
	int32_t x1216 = INT32_MIN;

    t144 = (x1213<<(x1214!=(x1215!=x1216)));

    if (t144 != 16) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1225 = 1817444222LLU;
	int16_t x1227 = INT16_MIN;
	static int32_t x1228 = -1;

    t145 = (x1225<<(x1226!=(x1227!=x1228)));

    if (t145 != 3634888444LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1238 = -1LL;
	uint8_t x1239 = 43U;
	int32_t t146 = -3016;

    t146 = (x1237<<(x1238!=(x1239!=x1240)));

    if (t146 != 220) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1242 = 3040U;
	uint32_t x1243 = 396460771U;
	uint64_t t147 = 57357631071775145LLU;

    t147 = (x1241<<(x1242!=(x1243!=x1244)));

    if (t147 != 66275175205780LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1245 = 2937U;
	int32_t x1247 = 11742851;
	volatile int32_t x1248 = 436008053;
	int32_t t148 = -209898919;

    t148 = (x1245<<(x1246!=(x1247!=x1248)));

    if (t148 != 5874) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1253 = 8016U;
	int64_t x1255 = -1LL;
	volatile int32_t x1256 = -1;
	volatile int32_t t149 = -1;

    t149 = (x1253<<(x1254!=(x1255!=x1256)));

    if (t149 != 16032) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint64_t x1257 = 688251923414090869LLU;
	volatile int16_t x1259 = INT16_MAX;
	uint64_t x1260 = UINT64_MAX;

    t150 = (x1257<<(x1258!=(x1259!=x1260)));

    if (t150 != 1376503846828181738LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1261 = UINT32_MAX;
	int64_t x1262 = INT64_MIN;
	uint64_t x1263 = 106960721010LLU;
	static int32_t x1264 = -13372;
	uint32_t t151 = 108U;

    t151 = (x1261<<(x1262!=(x1263!=x1264)));

    if (t151 != 4294967294U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x1273 = INT16_MAX;
	int8_t x1275 = INT8_MIN;
	int32_t t152 = -16820054;

    t152 = (x1273<<(x1274!=(x1275!=x1276)));

    if (t152 != 65534) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1300 = INT8_MIN;
	int32_t t153 = 220472354;

    t153 = (x1297<<(x1298!=(x1299!=x1300)));

    if (t153 != 254) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1302 = UINT16_MAX;
	int64_t x1303 = -7LL;
	int32_t t154 = 0;

    t154 = (x1301<<(x1302!=(x1303!=x1304)));

    if (t154 != 26) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x1305 = UINT8_MAX;
	volatile uint8_t x1306 = 11U;

    t155 = (x1305<<(x1306!=(x1307!=x1308)));

    if (t155 != 510) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x1317 = UINT16_MAX;
	uint64_t x1318 = UINT64_MAX;
	uint8_t x1319 = 2U;
	volatile int32_t t156 = -23;

    t156 = (x1317<<(x1318!=(x1319!=x1320)));

    if (t156 != 131070) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x1325 = 3458848737LL;
	uint8_t x1326 = 4U;
	int16_t x1327 = -1;

    t157 = (x1325<<(x1326!=(x1327!=x1328)));

    if (t157 != 6917697474LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1333 = 892681LLU;
	static volatile uint64_t x1334 = 27714492667LLU;
	volatile int32_t x1335 = -1;
	uint16_t x1336 = UINT16_MAX;
	uint64_t t158 = 109911288LLU;

    t158 = (x1333<<(x1334!=(x1335!=x1336)));

    if (t158 != 1785362LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x1341 = 37U;
	static int64_t x1342 = INT64_MAX;
	uint32_t x1343 = 695779U;
	uint64_t x1344 = 7242747518870LLU;
	int32_t t159 = 22911;

    t159 = (x1341<<(x1342!=(x1343!=x1344)));

    if (t159 != 74) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1345 = INT16_MAX;
	int64_t x1346 = INT64_MIN;
	uint32_t x1348 = 464122642U;
	volatile int32_t t160 = -134829965;

    t160 = (x1345<<(x1346!=(x1347!=x1348)));

    if (t160 != 65534) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1366 = -25104082405LL;
	int64_t x1368 = INT64_MIN;

    t161 = (x1365<<(x1366!=(x1367!=x1368)));

    if (t161 != 65534) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1377 = 42U;
	uint16_t x1379 = 3U;
	uint64_t x1380 = 218538716953545575LLU;
	uint32_t t162 = 1U;

    t162 = (x1377<<(x1378!=(x1379!=x1380)));

    if (t162 != 84U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1393 = INT8_MAX;
	static int64_t x1394 = INT64_MAX;
	static int8_t x1395 = 53;
	volatile int64_t x1396 = 1827932335LL;
	int32_t t163 = 8173578;

    t163 = (x1393<<(x1394!=(x1395!=x1396)));

    if (t163 != 254) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x1397 = 398LLU;
	volatile int32_t x1398 = INT32_MIN;
	int8_t x1399 = 16;
	uint8_t x1400 = UINT8_MAX;
	uint64_t t164 = 21196599169338LLU;

    t164 = (x1397<<(x1398!=(x1399!=x1400)));

    if (t164 != 796LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1401 = 207932424;
	static uint16_t x1402 = 11978U;
	int32_t t165 = 615224509;

    t165 = (x1401<<(x1402!=(x1403!=x1404)));

    if (t165 != 415864848) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1410 = 14967893423551584LLU;
	static int8_t x1411 = -12;
	int64_t x1412 = INT64_MAX;
	volatile int32_t t166 = -10;

    t166 = (x1409<<(x1410!=(x1411!=x1412)));

    if (t166 != 36) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1418 = -8;
	uint64_t x1419 = 340608677109199178LLU;
	static uint16_t x1420 = UINT16_MAX;
	volatile uint32_t t167 = 215661U;

    t167 = (x1417<<(x1418!=(x1419!=x1420)));

    if (t167 != 52U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1421 = 452758546635006LL;
	int16_t x1423 = -1;
	int16_t x1424 = -1;
	static int64_t t168 = -226184LL;

    t168 = (x1421<<(x1422!=(x1423!=x1424)));

    if (t168 != 905517093270012LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1441 = 299U;
	int64_t x1442 = -1LL;
	int8_t x1444 = -1;

    t169 = (x1441<<(x1442!=(x1443!=x1444)));

    if (t169 != 598) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1445 = UINT8_MAX;
	int16_t x1446 = INT16_MAX;
	int32_t x1447 = -1;
	int64_t x1448 = 1473839604LL;
	int32_t t170 = 56721797;

    t170 = (x1445<<(x1446!=(x1447!=x1448)));

    if (t170 != 510) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1458 = 36LL;
	int8_t x1459 = INT8_MIN;
	static volatile int8_t x1460 = INT8_MIN;
	int64_t t171 = -11981176LL;

    t171 = (x1457<<(x1458!=(x1459!=x1460)));

    if (t171 != 80LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1462 = UINT8_MAX;
	static int32_t t172 = 1;

    t172 = (x1461<<(x1462!=(x1463!=x1464)));

    if (t172 != 131070) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1465 = 836559LLU;
	int64_t x1466 = -1LL;
	int8_t x1467 = -2;
	uint16_t x1468 = UINT16_MAX;
	static volatile uint64_t t173 = 7087905290LLU;

    t173 = (x1465<<(x1466!=(x1467!=x1468)));

    if (t173 != 1673118LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1469 = 1U;
	static uint64_t x1470 = UINT64_MAX;
	static int16_t x1471 = INT16_MIN;
	static volatile int32_t t174 = 0;

    t174 = (x1469<<(x1470!=(x1471!=x1472)));

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1473 = 4;
	volatile int32_t x1474 = -41270006;
	uint8_t x1476 = UINT8_MAX;
	volatile int32_t t175 = -244972001;

    t175 = (x1473<<(x1474!=(x1475!=x1476)));

    if (t175 != 8) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1478 = INT8_MIN;
	static int16_t x1479 = INT16_MAX;
	static uint32_t x1480 = 822156U;
	uint64_t t176 = 1326379486785LLU;

    t176 = (x1477<<(x1478!=(x1479!=x1480)));

    if (t176 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x1481 = INT8_MAX;
	volatile int16_t x1484 = INT16_MIN;
	int32_t t177 = -28824;

    t177 = (x1481<<(x1482!=(x1483!=x1484)));

    if (t177 != 127) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x1485 = 3607325236LLU;
	uint16_t x1486 = 32U;
	int64_t x1487 = INT64_MIN;

    t178 = (x1485<<(x1486!=(x1487!=x1488)));

    if (t178 != 7214650472LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1489 = 1U;
	int32_t x1490 = 2603;
	static int32_t x1491 = INT32_MIN;
	uint64_t x1492 = 204372956968040096LLU;
	volatile int32_t t179 = 1;

    t179 = (x1489<<(x1490!=(x1491!=x1492)));

    if (t179 != 2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1493 = 2U;
	uint16_t x1494 = UINT16_MAX;
	int32_t x1495 = INT32_MIN;
	static int64_t x1496 = 28573723750LL;
	int32_t t180 = 0;

    t180 = (x1493<<(x1494!=(x1495!=x1496)));

    if (t180 != 4) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x1501 = 1U;
	static int16_t x1502 = INT16_MIN;
	volatile uint32_t x1503 = 79U;
	uint64_t x1504 = 407275922186LLU;

    t181 = (x1501<<(x1502!=(x1503!=x1504)));

    if (t181 != 2) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint8_t x1509 = 6U;
	int8_t x1511 = INT8_MAX;
	volatile int32_t x1512 = -1;

    t182 = (x1509<<(x1510!=(x1511!=x1512)));

    if (t182 != 12) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x1521 = 81U;
	static int16_t x1522 = INT16_MIN;
	uint16_t x1523 = 7607U;
	uint8_t x1524 = UINT8_MAX;

    t183 = (x1521<<(x1522!=(x1523!=x1524)));

    if (t183 != 162) { NG(); } else { ; }
	
}

void f184(void) {
    	static int16_t x1526 = INT16_MIN;
	static uint16_t x1527 = 408U;
	int8_t x1528 = -1;
	int32_t t184 = -1;

    t184 = (x1525<<(x1526!=(x1527!=x1528)));

    if (t184 != 36) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1529 = INT8_MAX;
	int64_t x1530 = INT64_MIN;
	volatile int32_t x1532 = -1;
	volatile int32_t t185 = -1640919;

    t185 = (x1529<<(x1530!=(x1531!=x1532)));

    if (t185 != 254) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x1538 = INT64_MIN;
	uint16_t x1539 = UINT16_MAX;
	int32_t x1540 = INT32_MAX;
	int32_t t186 = -5760540;

    t186 = (x1537<<(x1538!=(x1539!=x1540)));

    if (t186 != 65534) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1541 = 509713121U;
	int32_t x1542 = -1;
	static int32_t x1543 = INT32_MIN;
	uint8_t x1544 = 3U;
	uint32_t t187 = 178U;

    t187 = (x1541<<(x1542!=(x1543!=x1544)));

    if (t187 != 1019426242U) { NG(); } else { ; }
	
}

void f188(void) {
    	static int8_t x1545 = INT8_MAX;
	uint16_t x1546 = UINT16_MAX;
	int16_t x1548 = INT16_MIN;
	volatile int32_t t188 = 110;

    t188 = (x1545<<(x1546!=(x1547!=x1548)));

    if (t188 != 254) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x1557 = 7189523606718361LLU;
	uint32_t x1560 = 4828U;
	uint64_t t189 = 4297163165346447LLU;

    t189 = (x1557<<(x1558!=(x1559!=x1560)));

    if (t189 != 14379047213436722LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1562 = 3U;
	volatile int32_t x1563 = INT32_MIN;
	uint8_t x1564 = 35U;
	uint32_t t190 = 247U;

    t190 = (x1561<<(x1562!=(x1563!=x1564)));

    if (t190 != 4294967294U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1577 = 8;
	uint16_t x1578 = 65U;
	uint16_t x1579 = 495U;
	int64_t x1580 = INT64_MIN;
	volatile int32_t t191 = -136973;

    t191 = (x1577<<(x1578!=(x1579!=x1580)));

    if (t191 != 16) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x1581 = 39;
	int64_t x1582 = INT64_MIN;
	static int32_t x1583 = INT32_MIN;

    t192 = (x1581<<(x1582!=(x1583!=x1584)));

    if (t192 != 78) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1593 = UINT64_MAX;
	int16_t x1594 = -1;
	static uint16_t x1595 = 5062U;
	int16_t x1596 = -1;
	volatile uint64_t t193 = 13234390561014LLU;

    t193 = (x1593<<(x1594!=(x1595!=x1596)));

    if (t193 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1597 = 446LLU;
	int8_t x1598 = INT8_MIN;
	int8_t x1599 = -1;
	volatile int16_t x1600 = INT16_MAX;
	volatile uint64_t t194 = 135960919704425593LLU;

    t194 = (x1597<<(x1598!=(x1599!=x1600)));

    if (t194 != 892LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1606 = 54U;
	int32_t x1607 = 298106645;
	int64_t x1608 = -4051976805074907LL;
	int32_t t195 = -33;

    t195 = (x1605<<(x1606!=(x1607!=x1608)));

    if (t195 != 2) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1609 = 1277933849LLU;
	int16_t x1610 = -1;
	static int64_t x1611 = INT64_MIN;
	static uint64_t t196 = 35202697215352618LLU;

    t196 = (x1609<<(x1610!=(x1611!=x1612)));

    if (t196 != 2555867698LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1617 = 74U;
	uint8_t x1619 = 14U;
	int16_t x1620 = -28;

    t197 = (x1617<<(x1618!=(x1619!=x1620)));

    if (t197 != 148) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1625 = 1U;
	int16_t x1626 = INT16_MAX;
	static int32_t x1627 = INT32_MIN;
	int16_t x1628 = INT16_MIN;

    t198 = (x1625<<(x1626!=(x1627!=x1628)));

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1630 = 969914018;
	uint16_t x1632 = UINT16_MAX;
	int32_t t199 = -99;

    t199 = (x1629<<(x1630!=(x1631!=x1632)));

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

