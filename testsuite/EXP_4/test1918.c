
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

static uint16_t x9 = 6U;
int64_t x10 = 1LL;
static int8_t x11 = 0;
int16_t x20 = INT16_MIN;
uint16_t x26 = UINT16_MAX;
static uint16_t x28 = 31U;
int16_t x29 = -1;
uint64_t x30 = 16159638557859674LLU;
int8_t x31 = INT8_MIN;
static uint32_t x40 = 1778950U;
int32_t x59 = -1;
uint64_t t10 = 54347LLU;
uint16_t x104 = 24U;
uint16_t x105 = 10728U;
static volatile int32_t t15 = -4;
int32_t x109 = INT32_MAX;
uint32_t t16 = 345517U;
int64_t t20 = 1LL;
static int32_t t21 = -12293;
uint32_t x145 = 0U;
int8_t x147 = 1;
int64_t x159 = 13506LL;
volatile int32_t t24 = INT32_MAX;
volatile int8_t x165 = 13;
uint32_t x170 = UINT32_MAX;
volatile uint32_t t26 = 685U;
volatile uint32_t x184 = 5U;
int64_t x216 = -1LL;
int64_t x220 = 6309872703093196LL;
int64_t x227 = INT64_MAX;
static volatile int64_t t33 = -1575LL;
static uint16_t x243 = UINT16_MAX;
static int16_t x248 = INT16_MAX;
volatile uint64_t t36 = 595464820LLU;
int32_t x253 = -1;
int8_t x256 = INT8_MIN;
volatile int32_t t38 = 23;
volatile int32_t t40 = -4018815;
int8_t x269 = INT8_MIN;
uint32_t x283 = 67U;
int16_t x292 = INT16_MIN;
uint8_t x294 = 99U;
uint64_t t46 = 34131998LLU;
uint64_t x305 = 1246LLU;
static int8_t x306 = INT8_MAX;
static volatile uint64_t t48 = 2097695947803786016LLU;
int64_t x331 = INT64_MIN;
int64_t x332 = INT64_MIN;
volatile int32_t t49 = 5;
volatile uint16_t x333 = UINT16_MAX;
int32_t x336 = INT32_MAX;
volatile int32_t t50 = 59;
uint64_t x339 = UINT64_MAX;
int64_t t52 = -2720155680LL;
int16_t x376 = INT16_MAX;
volatile uint64_t t56 = 3341337603280091174LLU;
volatile int64_t x387 = 31769526119285758LL;
static uint32_t x389 = 1U;
int16_t x396 = 4776;
volatile int32_t t60 = 2;
volatile int16_t x417 = -1;
volatile int32_t x419 = -1;
volatile uint32_t t61 = 505255U;
static int8_t x423 = INT8_MAX;
int32_t x424 = INT32_MAX;
int8_t x425 = 31;
static int16_t x434 = 8722;
uint32_t x435 = 253U;
static uint16_t x438 = UINT16_MAX;
uint64_t x439 = 287LLU;
volatile int32_t t65 = -34390;
static int8_t x442 = INT8_MAX;
static uint8_t x444 = UINT8_MAX;
int32_t x449 = INT32_MIN;
static volatile uint16_t x450 = 143U;
static uint8_t x452 = 0U;
int16_t x453 = INT16_MIN;
volatile int32_t x464 = -486461;
int32_t t70 = 7373875;
int8_t x484 = INT8_MIN;
int8_t x486 = INT8_MAX;
int32_t x488 = INT32_MAX;
uint8_t x511 = 1U;
int8_t x515 = 44;
static uint32_t x518 = 57495441U;
static uint32_t x531 = 3049U;
volatile int32_t x539 = INT32_MIN;
uint32_t x540 = 305043U;
uint16_t x549 = 91U;
int16_t x550 = INT16_MAX;
uint64_t x551 = 7LLU;
int16_t x552 = -1541;
int64_t x561 = 14LL;
static volatile uint16_t x563 = UINT16_MAX;
uint64_t x622 = 1LLU;
static volatile uint64_t t86 = 33285437LLU;
static uint16_t x655 = 3U;
static int32_t x664 = INT32_MIN;
int64_t t91 = 5422683534624LL;
uint16_t x682 = UINT16_MAX;
uint64_t x685 = 2279892928831LLU;
uint32_t x686 = UINT32_MAX;
uint16_t x695 = 29U;
uint32_t x710 = UINT32_MAX;
volatile int64_t x711 = -1LL;
uint64_t x713 = UINT64_MAX;
static int32_t t98 = -6307;
static uint8_t x761 = 4U;
int16_t x768 = -1;
uint64_t t102 = 124LLU;
uint32_t x803 = 228U;
int8_t x804 = -18;
int32_t t105 = 10269;
static uint32_t t106 = 308963265U;
int16_t x822 = 1462;
int16_t x826 = 0;
static uint32_t x830 = 9U;
int32_t x831 = -876509;
int32_t x876 = INT32_MIN;
int64_t x881 = -1LL;
static uint64_t x882 = 25996LLU;
int16_t x885 = -13383;
static volatile uint32_t x899 = 4708U;
int8_t x900 = 8;
int64_t x902 = INT64_MAX;
int64_t x904 = 129382266825LL;
uint8_t x914 = 79U;
volatile int32_t t117 = -20;
static uint64_t x934 = 797015195677994418LLU;
int64_t x935 = INT64_MAX;
static uint32_t x954 = 5U;
uint16_t x956 = 146U;
uint16_t x957 = 134U;
int64_t x958 = 3916521228714849LL;
static uint8_t x986 = 1U;
int64_t x988 = 13194339352281LL;
int64_t x1003 = INT64_MAX;
uint64_t x1005 = UINT64_MAX;
static int8_t x1011 = 21;
static int8_t x1028 = -1;
volatile int32_t t132 = -378;
uint16_t x1047 = 6U;
uint64_t t136 = 26LLU;
int8_t x1062 = INT8_MAX;
int8_t x1069 = -1;
uint32_t x1070 = 106U;
static int16_t x1080 = INT16_MIN;
static uint32_t t140 = 872U;
uint32_t x1086 = 179989U;
volatile int64_t x1088 = INT64_MIN;
static volatile int32_t t143 = 552808649;
uint64_t x1109 = 1053748433273LLU;
int16_t x1113 = INT16_MIN;
static volatile int16_t x1116 = INT16_MIN;
uint8_t x1122 = UINT8_MAX;
uint8_t x1130 = 34U;
static int64_t x1131 = -752LL;
uint64_t x1133 = 1508LLU;
volatile uint64_t t149 = 1LLU;
volatile uint64_t x1154 = UINT64_MAX;
uint32_t x1155 = 49U;
uint64_t t152 = 73LLU;
uint8_t x1177 = 72U;
static uint16_t x1178 = UINT16_MAX;
uint16_t x1179 = 24U;
int32_t t156 = -8219;
uint64_t x1188 = 976LLU;
int16_t x1209 = INT16_MAX;
static uint32_t x1215 = 102808122U;
volatile int32_t t163 = 902706;
uint32_t x1217 = UINT32_MAX;
static uint64_t x1225 = UINT64_MAX;
uint32_t x1227 = UINT32_MAX;
volatile int32_t t171 = -406995;
static volatile int16_t x1277 = -298;
uint32_t x1284 = UINT32_MAX;
uint64_t x1286 = UINT64_MAX;
volatile uint8_t x1287 = 52U;
int16_t x1288 = INT16_MIN;
int64_t x1289 = -1LL;
volatile int32_t x1291 = -18044773;
volatile uint32_t t179 = 68U;
int8_t x1312 = INT8_MAX;
int32_t x1313 = INT32_MAX;
volatile int32_t t184 = 63357;
volatile int32_t t185 = 207052024;
volatile uint64_t t188 = 257098819506899795LLU;
volatile int16_t x1366 = 2;
static volatile uint8_t x1367 = UINT8_MAX;
int32_t t189 = -245;
static int8_t x1371 = -49;
int16_t x1383 = -1;
int16_t x1388 = INT16_MIN;
int64_t t193 = -14051786LL;
static volatile uint64_t t194 = 2332027546232418LLU;
uint32_t x1394 = 12172555U;
int64_t x1395 = 69761958870LL;
volatile uint32_t t195 = 30139U;
int8_t x1423 = INT8_MIN;
int64_t t197 = 25721584LL;
uint16_t x1426 = 1U;
int16_t x1437 = -393;
uint16_t x1440 = 238U;
volatile uint32_t t199 = 5U;


void f0(void) {
    	static volatile int16_t x1 = INT16_MIN;
	volatile int32_t x2 = INT32_MAX;
	int32_t x3 = -1;
	uint64_t x4 = 1610019961802676LLU;
	int32_t t0 = -3051;

    t0 = (x1^(x2>>(x3<=x4)));

    if (t0 != -2147450881) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x12 = UINT32_MAX;
	volatile int64_t t1 = 7441727LL;

    t1 = (x9^(x10>>(x11<=x12)));

    if (t1 != 6LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x17 = UINT32_MAX;
	uint16_t x18 = UINT16_MAX;
	int16_t x19 = INT16_MIN;
	uint32_t t2 = 1077987U;

    t2 = (x17^(x18>>(x19<=x20)));

    if (t2 != 4294934528U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MAX;
	static int32_t x22 = 4096;
	uint16_t x23 = 10750U;
	static volatile int16_t x24 = INT16_MIN;
	int64_t t3 = -813LL;

    t3 = (x21^(x22>>(x23<=x24)));

    if (t3 != 9223372036854771711LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -5;
	volatile uint16_t x27 = 90U;
	volatile int32_t t4 = -63606086;

    t4 = (x25^(x26>>(x27<=x28)));

    if (t4 != -65532) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x32 = INT64_MIN;
	uint64_t t5 = 14228542672912915LLU;

    t5 = (x29^(x30>>(x31<=x32)));

    if (t5 != 18430584435151691941LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint16_t x37 = 2895U;
	int64_t x38 = INT64_MAX;
	int32_t x39 = INT32_MIN;
	static volatile int64_t t6 = -36LL;

    t6 = (x37^(x38>>(x39<=x40)));

    if (t6 != 9223372036854772912LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x45 = 669U;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = 56;
	volatile int16_t x48 = INT16_MIN;
	uint32_t t7 = 2U;

    t7 = (x45^(x46>>(x47<=x48)));

    if (t7 != 610U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x57 = 11760U;
	uint8_t x58 = 1U;
	volatile int64_t x60 = INT64_MIN;
	int32_t t8 = -126;

    t8 = (x57^(x58>>(x59<=x60)));

    if (t8 != 11761) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x61 = 43927U;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1LL;
	int32_t x64 = 3930482;
	uint32_t t9 = 27238785U;

    t9 = (x61^(x62>>(x63<=x64)));

    if (t9 != 2147439720U) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x77 = -1;
	uint64_t x78 = 70796299LLU;
	int32_t x79 = -1;
	static volatile int64_t x80 = -3LL;

    t10 = (x77^(x78>>(x79<=x80)));

    if (t10 != 18446744073638755316LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x85 = INT64_MIN;
	uint32_t x86 = UINT32_MAX;
	uint16_t x87 = 26U;
	uint16_t x88 = 162U;
	volatile int64_t t11 = -86815726330LL;

    t11 = (x85^(x86>>(x87<=x88)));

    if (t11 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x93 = 6U;
	int32_t x94 = 5473;
	int16_t x95 = INT16_MIN;
	uint8_t x96 = 19U;
	static volatile int32_t t12 = 638005;

    t12 = (x93^(x94>>(x95<=x96)));

    if (t12 != 2742) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x97 = 85723588LL;
	uint8_t x98 = 74U;
	int64_t x99 = INT64_MIN;
	static int64_t x100 = INT64_MAX;
	volatile int64_t t13 = 68206394491569LL;

    t13 = (x97^(x98>>(x99<=x100)));

    if (t13 != 85723617LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x101 = UINT16_MAX;
	volatile uint8_t x102 = 19U;
	int16_t x103 = INT16_MAX;
	volatile int32_t t14 = 65748;

    t14 = (x101^(x102>>(x103<=x104)));

    if (t14 != 65516) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x106 = 54U;
	uint8_t x107 = UINT8_MAX;
	static int64_t x108 = INT64_MAX;

    t15 = (x105^(x106>>(x107<=x108)));

    if (t15 != 10739) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x110 = 59U;
	static volatile int32_t x111 = INT32_MIN;
	int8_t x112 = -1;

    t16 = (x109^(x110>>(x111<=x112)));

    if (t16 != 2147483618U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x113 = -1;
	int64_t x114 = 3LL;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = INT8_MAX;
	int64_t t17 = 15798299LL;

    t17 = (x113^(x114>>(x115<=x116)));

    if (t17 != -4LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x117 = 5;
	uint8_t x118 = 6U;
	int16_t x119 = INT16_MIN;
	static uint8_t x120 = 1U;
	volatile int32_t t18 = 34165739;

    t18 = (x117^(x118>>(x119<=x120)));

    if (t18 != 6) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = 1153U;
	int16_t x131 = 0;
	uint64_t x132 = 2040264093755018313LLU;
	volatile int32_t t19 = -32706;

    t19 = (x129^(x130>>(x131<=x132)));

    if (t19 != 703) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x133 = -1LL;
	volatile int16_t x134 = INT16_MAX;
	uint8_t x135 = 5U;
	int8_t x136 = -1;

    t20 = (x133^(x134>>(x135<=x136)));

    if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x137 = 3U;
	static int8_t x138 = 0;
	uint32_t x139 = 15945262U;
	int16_t x140 = -12245;

    t21 = (x137^(x138>>(x139<=x140)));

    if (t21 != 3) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x146 = INT32_MAX;
	uint8_t x148 = UINT8_MAX;
	uint32_t t22 = 2518U;

    t22 = (x145^(x146>>(x147<=x148)));

    if (t22 != 1073741823U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x149 = 93U;
	volatile uint16_t x150 = UINT16_MAX;
	int32_t x151 = -14473249;
	uint32_t x152 = 18U;
	volatile int32_t t23 = -127696904;

    t23 = (x149^(x150>>(x151<=x152)));

    if (t23 != 65442) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x157 = 0;
	static int32_t x158 = INT32_MAX;
	uint8_t x160 = 13U;

    t24 = (x157^(x158>>(x159<=x160)));

    if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x166 = 1319216432053LLU;
	static int8_t x167 = 16;
	volatile uint16_t x168 = UINT16_MAX;
	uint64_t t25 = 542200955489224LLU;

    t25 = (x165^(x166>>(x167<=x168)));

    if (t25 != 659608216023LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x169 = 118U;
	uint8_t x171 = 10U;
	static volatile uint32_t x172 = 3U;

    t26 = (x169^(x170>>(x171<=x172)));

    if (t26 != 4294967177U) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = UINT64_MAX;
	uint8_t x179 = 14U;
	int32_t x180 = -1;
	volatile uint64_t t27 = 196LLU;

    t27 = (x177^(x178>>(x179<=x180)));

    if (t27 != 127LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x181 = 2145LL;
	uint16_t x182 = UINT16_MAX;
	static volatile int16_t x183 = 51;
	static volatile int64_t t28 = 1844765962284983LL;

    t28 = (x181^(x182>>(x183<=x184)));

    if (t28 != 63390LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x185 = -113LL;
	static volatile uint32_t x186 = 65202680U;
	static int32_t x187 = INT32_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t29 = 5739287565LL;

    t29 = (x185^(x186>>(x187<=x188)));

    if (t29 != -32601229LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x201 = 409400299132506LLU;
	uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 54408LLU;
	static int64_t x204 = -1LL;
	volatile uint64_t t30 = 45325464107553962LLU;

    t30 = (x201^(x202>>(x203<=x204)));

    if (t30 != 409400299132453LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x213 = 54U;
	volatile int32_t x214 = INT32_MAX;
	uint8_t x215 = 8U;
	volatile int32_t t31 = -4371;

    t31 = (x213^(x214>>(x215<=x216)));

    if (t31 != 2147483593) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x217 = 52U;
	volatile int16_t x218 = 16005;
	static uint16_t x219 = 12506U;
	uint32_t t32 = 217051U;

    t32 = (x217^(x218>>(x219<=x220)));

    if (t32 != 8054U) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x225 = INT64_MIN;
	int64_t x226 = 3123790106339LL;
	uint16_t x228 = 19U;

    t33 = (x225^(x226>>(x227<=x228)));

    if (t33 != -9223368913064669469LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x229 = UINT8_MAX;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t34 = 394598;

    t34 = (x229^(x230>>(x231<=x232)));

    if (t34 != 1073741568) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x241 = 47U;
	uint32_t x242 = 59220U;
	uint8_t x244 = UINT8_MAX;
	uint32_t t35 = 0U;

    t35 = (x241^(x242>>(x243<=x244)));

    if (t35 != 59259U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x245 = 26805549607LLU;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = -873024;

    t36 = (x245^(x246>>(x247<=x248)));

    if (t36 != 26881541592LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x249 = 12582;
	static uint16_t x250 = 3U;
	volatile int64_t x251 = 1015247956685114171LL;
	volatile uint64_t x252 = UINT64_MAX;
	static volatile int32_t t37 = 0;

    t37 = (x249^(x250>>(x251<=x252)));

    if (t37 != 12583) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x254 = 3U;
	int16_t x255 = INT16_MAX;

    t38 = (x253^(x254>>(x255<=x256)));

    if (t38 != -4) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x257 = 765626;
	volatile int64_t x258 = 103212467LL;
	int8_t x259 = -3;
	int8_t x260 = -3;
	int64_t t39 = 0LL;

    t39 = (x257^(x258>>(x259<=x260)));

    if (t39 != 51960931LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int16_t x261 = INT16_MAX;
	uint16_t x262 = 27U;
	volatile uint64_t x263 = 15LLU;
	int32_t x264 = -25;

    t40 = (x261^(x262>>(x263<=x264)));

    if (t40 != 32754) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 25U;
	int8_t x272 = INT8_MIN;
	uint64_t t41 = 7939339705LLU;

    t41 = (x269^(x270>>(x271<=x272)));

    if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x277 = -13698LL;
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = 29U;
	static uint64_t x280 = UINT64_MAX;
	static volatile int64_t t42 = 2102LL;

    t42 = (x277^(x278>>(x279<=x280)));

    if (t42 != -2147469951LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x281 = INT32_MIN;
	volatile uint64_t x282 = 3315LLU;
	uint16_t x284 = UINT16_MAX;
	volatile uint64_t t43 = 723074LLU;

    t43 = (x281^(x282>>(x283<=x284)));

    if (t43 != 18446744071562069625LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x289 = -1847585;
	uint8_t x290 = 1U;
	static uint16_t x291 = 1646U;
	volatile int32_t t44 = -2206430;

    t44 = (x289^(x290>>(x291<=x292)));

    if (t44 != -1847586) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x293 = -1LL;
	volatile uint16_t x295 = 3U;
	uint32_t x296 = UINT32_MAX;
	volatile int64_t t45 = 55048LL;

    t45 = (x293^(x294>>(x295<=x296)));

    if (t45 != -50LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x297 = INT32_MIN;
	uint64_t x298 = 124411LLU;
	uint64_t x299 = UINT64_MAX;
	int8_t x300 = INT8_MAX;

    t46 = (x297^(x298>>(x299<=x300)));

    if (t46 != 18446744071562192379LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x307 = INT16_MIN;
	volatile int64_t x308 = -1LL;
	uint64_t t47 = 1357940195338091393LLU;

    t47 = (x305^(x306>>(x307<=x308)));

    if (t47 != 1249LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x309 = 110553U;
	uint64_t x310 = 119140704LLU;
	volatile int8_t x311 = INT8_MIN;
	static int8_t x312 = INT8_MIN;

    t48 = (x309^(x310>>(x311<=x312)));

    if (t48 != 59594601LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x329 = INT16_MIN;
	uint8_t x330 = 17U;

    t49 = (x329^(x330>>(x331<=x332)));

    if (t49 != -32760) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x334 = 5;
	int8_t x335 = 4;

    t50 = (x333^(x334>>(x335<=x336)));

    if (t50 != 65533) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x337 = INT16_MIN;
	uint64_t x338 = 2354970394812203493LLU;
	volatile int64_t x340 = 157507828762478LL;
	static uint64_t t51 = 112949422680385LLU;

    t51 = (x337^(x338>>(x339<=x340)));

    if (t51 != 16091773678897349093LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x341 = INT16_MIN;
	int64_t x342 = 4975779LL;
	int64_t x343 = -1LL;
	int8_t x344 = 35;

    t52 = (x341^(x342>>(x343<=x344)));

    if (t52 != -2460079LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x357 = 0;
	int64_t x358 = 257LL;
	volatile uint32_t x359 = 108971U;
	int16_t x360 = -1;
	volatile int64_t t53 = 199865077LL;

    t53 = (x357^(x358>>(x359<=x360)));

    if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x373 = -1;
	int32_t x374 = INT32_MAX;
	uint16_t x375 = 203U;
	volatile int32_t t54 = -1;

    t54 = (x373^(x374>>(x375<=x376)));

    if (t54 != -1073741824) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x377 = UINT64_MAX;
	uint16_t x378 = 12U;
	int8_t x379 = INT8_MIN;
	static int16_t x380 = 169;
	volatile uint64_t t55 = 7276LLU;

    t55 = (x377^(x378>>(x379<=x380)));

    if (t55 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x381 = INT32_MIN;
	uint64_t x382 = 15275577LLU;
	static uint8_t x383 = 96U;
	volatile int16_t x384 = INT16_MIN;

    t56 = (x381^(x382>>(x383<=x384)));

    if (t56 != 18446744071577343545LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x385 = -1;
	uint32_t x386 = 32287477U;
	int64_t x388 = -1LL;
	uint32_t t57 = 1531050U;

    t57 = (x385^(x386>>(x387<=x388)));

    if (t57 != 4262679818U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x390 = 316U;
	int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile uint32_t t58 = 272U;

    t58 = (x389^(x390>>(x391<=x392)));

    if (t58 != 159U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int8_t x393 = INT8_MIN;
	volatile int8_t x394 = INT8_MAX;
	int32_t x395 = 1;
	volatile int32_t t59 = 64873572;

    t59 = (x393^(x394>>(x395<=x396)));

    if (t59 != -65) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x409 = 95U;
	uint8_t x410 = UINT8_MAX;
	int16_t x411 = -145;
	int64_t x412 = INT64_MIN;

    t60 = (x409^(x410>>(x411<=x412)));

    if (t60 != 160) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x418 = 171746430U;
	static int8_t x420 = -21;

    t61 = (x417^(x418>>(x419<=x420)));

    if (t61 != 4123220865U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile uint8_t x422 = 1U;
	int32_t t62 = 1;

    t62 = (x421^(x422>>(x423<=x424)));

    if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x426 = 0;
	int16_t x427 = INT16_MAX;
	volatile int64_t x428 = -15LL;
	int32_t t63 = 15273;

    t63 = (x425^(x426>>(x427<=x428)));

    if (t63 != 31) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x433 = 751;
	static int32_t x436 = INT32_MIN;
	volatile int32_t t64 = -1047040168;

    t64 = (x433^(x434>>(x435<=x436)));

    if (t64 != 5094) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x437 = -2;
	volatile uint8_t x440 = 106U;

    t65 = (x437^(x438>>(x439<=x440)));

    if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x441 = 3;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t t66 = -474618;

    t66 = (x441^(x442>>(x443<=x444)));

    if (t66 != 124) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x451 = INT8_MIN;
	int32_t t67 = 4275831;

    t67 = (x449^(x450>>(x451<=x452)));

    if (t67 != -2147483577) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x454 = INT16_MAX;
	volatile int16_t x455 = INT16_MIN;
	volatile uint8_t x456 = UINT8_MAX;
	int32_t t68 = -1;

    t68 = (x453^(x454>>(x455<=x456)));

    if (t68 != -16385) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int32_t x461 = INT32_MIN;
	static uint8_t x462 = 20U;
	int64_t x463 = -1LL;
	static volatile int32_t t69 = 3897;

    t69 = (x461^(x462>>(x463<=x464)));

    if (t69 != -2147483628) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x473 = -416;
	static volatile uint16_t x474 = 5U;
	uint64_t x475 = UINT64_MAX;
	uint8_t x476 = 16U;

    t70 = (x473^(x474>>(x475<=x476)));

    if (t70 != -411) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x481 = 62U;
	int32_t x482 = INT32_MAX;
	int64_t x483 = INT64_MAX;
	int32_t t71 = 129791;

    t71 = (x481^(x482>>(x483<=x484)));

    if (t71 != 2147483585) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x485 = 0U;
	int32_t x487 = 2182101;
	int32_t t72 = 29981232;

    t72 = (x485^(x486>>(x487<=x488)));

    if (t72 != 63) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x509 = -7762;
	uint8_t x510 = UINT8_MAX;
	int64_t x512 = 1229428601679166LL;
	volatile int32_t t73 = -60945887;

    t73 = (x509^(x510>>(x511<=x512)));

    if (t73 != -7727) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x513 = 13;
	uint8_t x514 = 71U;
	int8_t x516 = INT8_MIN;
	int32_t t74 = 138380400;

    t74 = (x513^(x514>>(x515<=x516)));

    if (t74 != 74) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x517 = INT32_MAX;
	int8_t x519 = INT8_MIN;
	uint32_t x520 = 83825938U;
	uint32_t t75 = 107507247U;

    t75 = (x517^(x518>>(x519<=x520)));

    if (t75 != 2089988206U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x529 = INT16_MIN;
	static uint16_t x530 = 26U;
	static int64_t x532 = INT64_MAX;
	volatile int32_t t76 = -78206;

    t76 = (x529^(x530>>(x531<=x532)));

    if (t76 != -32755) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x537 = UINT64_MAX;
	static uint32_t x538 = 61202153U;
	uint64_t t77 = 11500074LLU;

    t77 = (x537^(x538>>(x539<=x540)));

    if (t77 != 18446744073648349462LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x541 = INT64_MIN;
	static uint32_t x542 = UINT32_MAX;
	int64_t x543 = INT64_MIN;
	uint64_t x544 = 266LLU;
	volatile int64_t t78 = 1105938341447826LL;

    t78 = (x541^(x542>>(x543<=x544)));

    if (t78 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t t79 = 1706450;

    t79 = (x549^(x550>>(x551<=x552)));

    if (t79 != 16292) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x557 = 68006LLU;
	static int64_t x558 = 1LL;
	static int32_t x559 = INT32_MIN;
	int8_t x560 = INT8_MAX;
	volatile uint64_t t80 = 67889916825LLU;

    t80 = (x557^(x558>>(x559<=x560)));

    if (t80 != 68006LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x562 = INT8_MAX;
	uint32_t x564 = UINT32_MAX;
	static volatile int64_t t81 = 306329LL;

    t81 = (x561^(x562>>(x563<=x564)));

    if (t81 != 49LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x569 = -74991179834822LL;
	volatile int8_t x570 = 0;
	int16_t x571 = -1;
	uint32_t x572 = 693967691U;
	int64_t t82 = 32033689685586LL;

    t82 = (x569^(x570>>(x571<=x572)));

    if (t82 != -74991179834822LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x581 = 3786025U;
	static uint32_t x582 = 22U;
	uint64_t x583 = UINT64_MAX;
	uint8_t x584 = UINT8_MAX;
	uint32_t t83 = 436974U;

    t83 = (x581^(x582>>(x583<=x584)));

    if (t83 != 3786047U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x589 = 6U;
	uint16_t x590 = 2U;
	int16_t x591 = INT16_MAX;
	static int64_t x592 = INT64_MIN;
	volatile uint32_t t84 = 14U;

    t84 = (x589^(x590>>(x591<=x592)));

    if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x621 = INT8_MAX;
	int16_t x623 = INT16_MAX;
	static int16_t x624 = INT16_MAX;
	volatile uint64_t t85 = 7050658319034405LLU;

    t85 = (x621^(x622>>(x623<=x624)));

    if (t85 != 127LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x641 = -1;
	uint64_t x642 = 12LLU;
	volatile int32_t x643 = INT32_MIN;
	uint16_t x644 = UINT16_MAX;

    t86 = (x641^(x642>>(x643<=x644)));

    if (t86 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x653 = UINT8_MAX;
	uint64_t x654 = 388810LLU;
	int64_t x656 = -1LL;
	volatile uint64_t t87 = 121801LLU;

    t87 = (x653^(x654>>(x655<=x656)));

    if (t87 != 388661LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x657 = UINT8_MAX;
	int8_t x658 = INT8_MAX;
	static uint64_t x659 = UINT64_MAX;
	uint64_t x660 = 317171677679931LLU;
	volatile int32_t t88 = 8;

    t88 = (x657^(x658>>(x659<=x660)));

    if (t88 != 128) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x661 = UINT8_MAX;
	uint8_t x662 = 1U;
	int32_t x663 = 186714;
	volatile int32_t t89 = -31448227;

    t89 = (x661^(x662>>(x663<=x664)));

    if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x669 = -1;
	volatile int32_t x670 = 140;
	uint32_t x671 = UINT32_MAX;
	int16_t x672 = 84;
	volatile int32_t t90 = -34012;

    t90 = (x669^(x670>>(x671<=x672)));

    if (t90 != -141) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x677 = 226U;
	int64_t x678 = 1549681LL;
	volatile uint8_t x679 = UINT8_MAX;
	int32_t x680 = -2147948;

    t91 = (x677^(x678>>(x679<=x680)));

    if (t91 != 1549715LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x681 = 2027654;
	static int64_t x683 = INT64_MIN;
	uint32_t x684 = 394U;
	volatile int32_t t92 = -17796829;

    t92 = (x681^(x682>>(x683<=x684)));

    if (t92 != 2002809) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x687 = INT64_MIN;
	int16_t x688 = INT16_MAX;
	volatile uint64_t t93 = 6292152LLU;

    t93 = (x685^(x686>>(x687<=x688)));

    if (t93 != 2279214855872LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x693 = INT8_MIN;
	uint64_t x694 = 18719440181LLU;
	volatile int8_t x696 = INT8_MIN;
	uint64_t t94 = 27003679LLU;

    t94 = (x693^(x694>>(x695<=x696)));

    if (t94 != 18446744054990111413LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x709 = 43966U;
	volatile uint32_t x712 = 183U;
	uint32_t t95 = 2U;

    t95 = (x709^(x710>>(x711<=x712)));

    if (t95 != 2147439681U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x714 = UINT64_MAX;
	static int32_t x715 = INT32_MAX;
	volatile uint64_t x716 = 127876702477405LLU;
	uint64_t t96 = 8940365953098LLU;

    t96 = (x713^(x714>>(x715<=x716)));

    if (t96 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x745 = 7;
	volatile uint32_t x746 = 1010418151U;
	static int32_t x747 = -1;
	static volatile int64_t x748 = -1LL;
	volatile uint32_t t97 = 2849870U;

    t97 = (x745^(x746>>(x747<=x748)));

    if (t97 != 505209076U) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint16_t x749 = UINT16_MAX;
	uint8_t x750 = UINT8_MAX;
	int32_t x751 = -1;
	uint8_t x752 = 60U;

    t98 = (x749^(x750>>(x751<=x752)));

    if (t98 != 65408) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x753 = INT8_MAX;
	static uint32_t x754 = UINT32_MAX;
	volatile int16_t x755 = INT16_MIN;
	volatile int32_t x756 = -1;
	volatile uint32_t t99 = 4448646U;

    t99 = (x753^(x754>>(x755<=x756)));

    if (t99 != 2147483520U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x757 = -432295630LL;
	uint8_t x758 = 2U;
	uint64_t x759 = 6LLU;
	static int64_t x760 = INT64_MIN;
	int64_t t100 = -19LL;

    t100 = (x757^(x758>>(x759<=x760)));

    if (t100 != -432295629LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x762 = INT8_MAX;
	uint16_t x763 = 11U;
	static volatile int16_t x764 = -1;
	int32_t t101 = 234543;

    t101 = (x761^(x762>>(x763<=x764)));

    if (t101 != 123) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x765 = 0LLU;
	static volatile uint32_t x766 = UINT32_MAX;
	volatile uint32_t x767 = UINT32_MAX;

    t102 = (x765^(x766>>(x767<=x768)));

    if (t102 != 2147483647LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x769 = -1;
	static int32_t x770 = 180864336;
	volatile int32_t x771 = 16058;
	volatile uint32_t x772 = UINT32_MAX;
	int32_t t103 = -24533;

    t103 = (x769^(x770>>(x771<=x772)));

    if (t103 != -90432169) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = 60962233LL;
	int32_t x799 = -1;
	int8_t x800 = INT8_MIN;
	int64_t t104 = 1LL;

    t104 = (x797^(x798>>(x799<=x800)));

    if (t104 != -2086521415LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x801 = 6948U;
	volatile uint8_t x802 = 55U;

    t105 = (x801^(x802>>(x803<=x804)));

    if (t105 != 6975) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x817 = 513403U;
	int16_t x818 = 7849;
	static uint64_t x819 = 16456613LLU;
	int64_t x820 = INT64_MAX;

    t106 = (x817^(x818>>(x819<=x820)));

    if (t106 != 514607U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x821 = 3177U;
	int8_t x823 = -1;
	int16_t x824 = INT16_MIN;
	volatile uint32_t t107 = 81551U;

    t107 = (x821^(x822>>(x823<=x824)));

    if (t107 != 2527U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x825 = -167;
	uint64_t x827 = UINT64_MAX;
	int32_t x828 = 194;
	volatile int32_t t108 = -23790;

    t108 = (x825^(x826>>(x827<=x828)));

    if (t108 != -167) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x829 = -1LL;
	int16_t x832 = -1;
	volatile int64_t t109 = -4236355LL;

    t109 = (x829^(x830>>(x831<=x832)));

    if (t109 != -5LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x845 = UINT8_MAX;
	uint64_t x846 = 9284LLU;
	int64_t x847 = INT64_MIN;
	uint32_t x848 = UINT32_MAX;
	uint64_t t110 = 13408752456363LLU;

    t110 = (x845^(x846>>(x847<=x848)));

    if (t110 != 4829LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x873 = 68U;
	static uint16_t x874 = 4319U;
	volatile uint64_t x875 = UINT64_MAX;
	int32_t t111 = 13;

    t111 = (x873^(x874>>(x875<=x876)));

    if (t111 != 4251) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x883 = -1LL;
	uint32_t x884 = 35618U;
	uint64_t t112 = 439355987LLU;

    t112 = (x881^(x882>>(x883<=x884)));

    if (t112 != 18446744073709538617LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x886 = 3;
	volatile uint16_t x887 = 0U;
	int8_t x888 = INT8_MIN;
	int32_t t113 = -460;

    t113 = (x885^(x886>>(x887<=x888)));

    if (t113 != -13382) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x897 = -1LL;
	uint8_t x898 = 7U;
	volatile int64_t t114 = 88773717192718501LL;

    t114 = (x897^(x898>>(x899<=x900)));

    if (t114 != -8LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x901 = -1;
	volatile int8_t x903 = INT8_MIN;
	volatile int64_t t115 = 28LL;

    t115 = (x901^(x902>>(x903<=x904)));

    if (t115 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x913 = INT8_MIN;
	int32_t x915 = INT32_MIN;
	volatile int16_t x916 = 1;
	static volatile int32_t t116 = -131933639;

    t116 = (x913^(x914>>(x915<=x916)));

    if (t116 != -89) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x929 = 43;
	uint16_t x930 = UINT16_MAX;
	uint8_t x931 = 5U;
	int16_t x932 = INT16_MAX;

    t117 = (x929^(x930>>(x931<=x932)));

    if (t117 != 32724) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x933 = INT16_MIN;
	int16_t x936 = 2422;
	uint64_t t118 = 119524786259LLU;

    t118 = (x933^(x934>>(x935<=x936)));

    if (t118 != 17649728878031547826LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int32_t x941 = INT32_MIN;
	static volatile uint64_t x942 = 50259181480LLU;
	volatile uint64_t x943 = UINT64_MAX;
	static int32_t x944 = -724833137;
	volatile uint64_t t119 = 2963754767396854442LLU;

    t119 = (x941^(x942>>(x943<=x944)));

    if (t119 != 18446744023037001640LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x945 = -1;
	volatile int64_t x946 = INT64_MAX;
	int64_t x947 = INT64_MIN;
	static int64_t x948 = INT64_MIN;
	static int64_t t120 = 46010984000090LL;

    t120 = (x945^(x946>>(x947<=x948)));

    if (t120 != -4611686018427387904LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x953 = 35112U;
	volatile uint32_t x955 = UINT32_MAX;
	volatile uint32_t t121 = 195763669U;

    t121 = (x953^(x954>>(x955<=x956)));

    if (t121 != 35117U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x959 = 1267656186366454524LL;
	int32_t x960 = INT32_MAX;
	int64_t t122 = 726774LL;

    t122 = (x957^(x958>>(x959<=x960)));

    if (t122 != 3916521228714983LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x961 = UINT32_MAX;
	uint8_t x962 = 110U;
	static int64_t x963 = -230943LL;
	int8_t x964 = -1;
	uint32_t t123 = 2U;

    t123 = (x961^(x962>>(x963<=x964)));

    if (t123 != 4294967240U) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x985 = INT8_MIN;
	uint8_t x987 = UINT8_MAX;
	static volatile int32_t t124 = 15;

    t124 = (x985^(x986>>(x987<=x988)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x993 = 3;
	int8_t x994 = INT8_MAX;
	volatile int16_t x995 = 763;
	int64_t x996 = 2246786690819480131LL;
	int32_t t125 = -379627981;

    t125 = (x993^(x994>>(x995<=x996)));

    if (t125 != 60) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x1001 = INT8_MIN;
	uint64_t x1002 = UINT64_MAX;
	static int64_t x1004 = INT64_MIN;
	volatile uint64_t t126 = 24299919LLU;

    t126 = (x1001^(x1002>>(x1003<=x1004)));

    if (t126 != 127LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x1006 = UINT64_MAX;
	uint32_t x1007 = 8U;
	int32_t x1008 = INT32_MIN;
	uint64_t t127 = 2707148668LLU;

    t127 = (x1005^(x1006>>(x1007<=x1008)));

    if (t127 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1009 = INT64_MIN;
	static uint32_t x1010 = 30438024U;
	int16_t x1012 = INT16_MIN;
	volatile int64_t t128 = 27209LL;

    t128 = (x1009^(x1010>>(x1011<=x1012)));

    if (t128 != -9223372036824337784LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x1017 = 1095U;
	int64_t x1018 = 6404LL;
	int32_t x1019 = INT32_MIN;
	volatile int16_t x1020 = 3281;
	int64_t t129 = 17317609316020323LL;

    t129 = (x1017^(x1018>>(x1019<=x1020)));

    if (t129 != 2245LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1021 = INT16_MIN;
	uint8_t x1022 = 119U;
	int32_t x1023 = -1;
	uint32_t x1024 = UINT32_MAX;
	volatile int32_t t130 = 7;

    t130 = (x1021^(x1022>>(x1023<=x1024)));

    if (t130 != -32709) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x1025 = -1;
	volatile uint8_t x1026 = 20U;
	static int32_t x1027 = INT32_MIN;
	int32_t t131 = -933989;

    t131 = (x1025^(x1026>>(x1027<=x1028)));

    if (t131 != -11) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1029 = INT16_MIN;
	uint8_t x1030 = 47U;
	static int32_t x1031 = -444191;
	int8_t x1032 = INT8_MIN;

    t132 = (x1029^(x1030>>(x1031<=x1032)));

    if (t132 != -32745) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1045 = INT8_MIN;
	int8_t x1046 = 14;
	static int64_t x1048 = -23LL;
	static int32_t t133 = 225201;

    t133 = (x1045^(x1046>>(x1047<=x1048)));

    if (t133 != -114) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x1049 = 31279LLU;
	static int16_t x1050 = 1;
	uint64_t x1051 = 1008002960285641LLU;
	int32_t x1052 = -7679596;
	static uint64_t t134 = 235259006700LLU;

    t134 = (x1049^(x1050>>(x1051<=x1052)));

    if (t134 != 31279LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x1053 = UINT8_MAX;
	int32_t x1054 = INT32_MAX;
	static int16_t x1055 = INT16_MIN;
	static uint32_t x1056 = UINT32_MAX;
	volatile int32_t t135 = -5;

    t135 = (x1053^(x1054>>(x1055<=x1056)));

    if (t135 != 1073741568) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x1057 = 4LLU;
	uint16_t x1058 = 7967U;
	static int8_t x1059 = INT8_MIN;
	int16_t x1060 = INT16_MAX;

    t136 = (x1057^(x1058>>(x1059<=x1060)));

    if (t136 != 3979LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1061 = INT32_MIN;
	uint8_t x1063 = 2U;
	uint32_t x1064 = 69515201U;
	int32_t t137 = 4798;

    t137 = (x1061^(x1062>>(x1063<=x1064)));

    if (t137 != -2147483585) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x1071 = 3U;
	int64_t x1072 = 30LL;
	volatile uint32_t t138 = 582058814U;

    t138 = (x1069^(x1070>>(x1071<=x1072)));

    if (t138 != 4294967242U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1077 = INT32_MIN;
	int16_t x1078 = INT16_MAX;
	volatile uint16_t x1079 = 0U;
	volatile int32_t t139 = 95;

    t139 = (x1077^(x1078>>(x1079<=x1080)));

    if (t139 != -2147450881) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x1081 = -21;
	uint32_t x1082 = 141082136U;
	static int16_t x1083 = -12528;
	int64_t x1084 = INT64_MIN;

    t140 = (x1081^(x1082>>(x1083<=x1084)));

    if (t140 != 4153885171U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1085 = -8763;
	uint64_t x1087 = 4432687936387765LLU;
	uint32_t t141 = 553874675U;

    t141 = (x1085^(x1086>>(x1087<=x1088)));

    if (t141 != 4294869583U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint32_t x1097 = UINT32_MAX;
	static uint16_t x1098 = UINT16_MAX;
	int32_t x1099 = 236;
	volatile uint32_t x1100 = 8471U;
	uint32_t t142 = 33911232U;

    t142 = (x1097^(x1098>>(x1099<=x1100)));

    if (t142 != 4294934528U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x1101 = INT32_MIN;
	uint8_t x1102 = 1U;
	int32_t x1103 = -9;
	int16_t x1104 = INT16_MIN;

    t143 = (x1101^(x1102>>(x1103<=x1104)));

    if (t143 != -2147483647) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1110 = 111U;
	static int16_t x1111 = -1;
	uint64_t x1112 = 1LLU;
	volatile uint64_t t144 = 7285715789490260LLU;

    t144 = (x1109^(x1110>>(x1111<=x1112)));

    if (t144 != 1053748433174LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1114 = 341251013962876649LLU;
	int8_t x1115 = INT8_MIN;
	volatile uint64_t t145 = 0LLU;

    t145 = (x1113^(x1114>>(x1115<=x1116)));

    if (t145 != 18105493059746678505LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1121 = -13;
	static int64_t x1123 = -1LL;
	volatile int32_t x1124 = INT32_MIN;
	int32_t t146 = 9708;

    t146 = (x1121^(x1122>>(x1123<=x1124)));

    if (t146 != -244) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1125 = -1;
	volatile uint32_t x1126 = UINT32_MAX;
	volatile int16_t x1127 = INT16_MIN;
	static uint32_t x1128 = 13180555U;
	volatile uint32_t t147 = 305868429U;

    t147 = (x1125^(x1126>>(x1127<=x1128)));

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x1129 = -1;
	int8_t x1132 = INT8_MIN;
	volatile int32_t t148 = -97;

    t148 = (x1129^(x1130>>(x1131<=x1132)));

    if (t148 != -18) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1134 = INT64_MAX;
	int8_t x1135 = INT8_MAX;
	volatile uint16_t x1136 = UINT16_MAX;

    t149 = (x1133^(x1134>>(x1135<=x1136)));

    if (t149 != 4611686018427386395LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x1137 = 523758144U;
	static volatile int16_t x1138 = INT16_MAX;
	static uint32_t x1139 = 10511711U;
	static int64_t x1140 = -10113953LL;
	uint32_t t150 = 1406588U;

    t150 = (x1137^(x1138>>(x1139<=x1140)));

    if (t150 != 523736511U) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x1145 = -1;
	volatile uint16_t x1146 = 6290U;
	static int8_t x1147 = -1;
	uint64_t x1148 = UINT64_MAX;
	int32_t t151 = -90;

    t151 = (x1145^(x1146>>(x1147<=x1148)));

    if (t151 != -3146) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x1153 = 25640468428LLU;
	static uint16_t x1156 = 62U;

    t152 = (x1153^(x1154>>(x1155<=x1156)));

    if (t152 != 9223372011214307379LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x1161 = INT64_MIN;
	uint64_t x1162 = UINT64_MAX;
	int8_t x1163 = INT8_MAX;
	int32_t x1164 = INT32_MIN;
	volatile uint64_t t153 = 80837LLU;

    t153 = (x1161^(x1162>>(x1163<=x1164)));

    if (t153 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int64_t x1169 = INT64_MAX;
	uint64_t x1170 = UINT64_MAX;
	volatile uint16_t x1171 = 115U;
	static int64_t x1172 = INT64_MAX;
	static volatile uint64_t t154 = 760LLU;

    t154 = (x1169^(x1170>>(x1171<=x1172)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x1173 = -1;
	static uint8_t x1174 = UINT8_MAX;
	static int64_t x1175 = -4390131175316LL;
	uint16_t x1176 = 4U;
	int32_t t155 = -313;

    t155 = (x1173^(x1174>>(x1175<=x1176)));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x1180 = UINT8_MAX;

    t156 = (x1177^(x1178>>(x1179<=x1180)));

    if (t156 != 32695) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x1185 = -1;
	uint8_t x1186 = 10U;
	volatile int8_t x1187 = INT8_MAX;
	static int32_t t157 = 248429295;

    t157 = (x1185^(x1186>>(x1187<=x1188)));

    if (t157 != -6) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x1189 = -141;
	uint32_t x1190 = UINT32_MAX;
	uint64_t x1191 = 10678LLU;
	volatile uint32_t x1192 = 21983686U;
	volatile uint32_t t158 = 18797079U;

    t158 = (x1189^(x1190>>(x1191<=x1192)));

    if (t158 != 2147483788U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1193 = UINT64_MAX;
	uint32_t x1194 = UINT32_MAX;
	uint32_t x1195 = UINT32_MAX;
	volatile int8_t x1196 = INT8_MIN;
	volatile uint64_t t159 = 546LLU;

    t159 = (x1193^(x1194>>(x1195<=x1196)));

    if (t159 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1197 = -7267920917524LL;
	int16_t x1198 = 71;
	int64_t x1199 = INT64_MIN;
	uint64_t x1200 = 1114344LLU;
	static volatile int64_t t160 = 457LL;

    t160 = (x1197^(x1198>>(x1199<=x1200)));

    if (t160 != -7267920917589LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1205 = -535013418;
	int32_t x1206 = INT32_MAX;
	int32_t x1207 = -4844620;
	int16_t x1208 = -15110;
	volatile int32_t t161 = -15127;

    t161 = (x1205^(x1206>>(x1207<=x1208)));

    if (t161 != -538728407) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1210 = 352U;
	static volatile int32_t x1211 = -612;
	volatile int8_t x1212 = INT8_MIN;
	volatile uint32_t t162 = 361U;

    t162 = (x1209^(x1210>>(x1211<=x1212)));

    if (t162 != 32591U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x1213 = -2;
	uint8_t x1214 = 2U;
	uint32_t x1216 = 113U;

    t163 = (x1213^(x1214>>(x1215<=x1216)));

    if (t163 != -4) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1218 = 26148207248868813LLU;
	uint64_t x1219 = 128280302857LLU;
	int64_t x1220 = -1LL;
	uint64_t t164 = 3488179456315LLU;

    t164 = (x1217^(x1218>>(x1219<=x1220)));

    if (t164 != 13074099655245081LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1221 = INT8_MAX;
	int32_t x1222 = 3204325;
	int8_t x1223 = INT8_MIN;
	volatile int32_t x1224 = -1;
	volatile int32_t t165 = 505;

    t165 = (x1221^(x1222>>(x1223<=x1224)));

    if (t165 != 1602061) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1226 = 0U;
	volatile int64_t x1228 = -40218489769842346LL;
	static uint64_t t166 = UINT64_MAX;

    t166 = (x1225^(x1226>>(x1227<=x1228)));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1229 = -260794913;
	volatile uint32_t x1230 = 14547U;
	static uint32_t x1231 = 95882U;
	static uint8_t x1232 = 34U;
	volatile uint32_t t167 = 43198808U;

    t167 = (x1229^(x1230>>(x1231<=x1232)));

    if (t167 != 4034178316U) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1233 = INT64_MIN;
	int8_t x1234 = 0;
	static int32_t x1235 = INT32_MIN;
	int64_t x1236 = 22627300104969LL;
	static int64_t t168 = INT64_MIN;

    t168 = (x1233^(x1234>>(x1235<=x1236)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1249 = -1;
	static uint8_t x1250 = 3U;
	volatile int32_t x1251 = INT32_MAX;
	int8_t x1252 = -9;
	int32_t t169 = 10256444;

    t169 = (x1249^(x1250>>(x1251<=x1252)));

    if (t169 != -4) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1253 = 1442U;
	uint16_t x1254 = UINT16_MAX;
	uint32_t x1255 = 2264U;
	static volatile uint8_t x1256 = UINT8_MAX;
	volatile int32_t t170 = 695741174;

    t170 = (x1253^(x1254>>(x1255<=x1256)));

    if (t170 != 64093) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1257 = INT32_MAX;
	uint8_t x1258 = 7U;
	int32_t x1259 = -2963;
	volatile uint16_t x1260 = 11U;

    t171 = (x1257^(x1258>>(x1259<=x1260)));

    if (t171 != 2147483644) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1265 = 7112745773904396LLU;
	volatile int8_t x1266 = INT8_MAX;
	volatile int64_t x1267 = INT64_MIN;
	uint64_t x1268 = UINT64_MAX;
	volatile uint64_t t172 = 838LLU;

    t172 = (x1265^(x1266>>(x1267<=x1268)));

    if (t172 != 7112745773904435LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x1269 = -1;
	uint8_t x1270 = UINT8_MAX;
	int32_t x1271 = INT32_MIN;
	static int64_t x1272 = INT64_MIN;
	static volatile int32_t t173 = -322171;

    t173 = (x1269^(x1270>>(x1271<=x1272)));

    if (t173 != -256) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1278 = INT32_MAX;
	static int64_t x1279 = INT64_MIN;
	int32_t x1280 = INT32_MIN;
	static int32_t t174 = 271636829;

    t174 = (x1277^(x1278>>(x1279<=x1280)));

    if (t174 != -1073741527) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x1281 = -100LL;
	uint8_t x1282 = 1U;
	static uint64_t x1283 = 59361996LLU;
	int64_t t175 = -6770736002547LL;

    t175 = (x1281^(x1282>>(x1283<=x1284)));

    if (t175 != -100LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1285 = 15U;
	uint64_t t176 = 15839375302LLU;

    t176 = (x1285^(x1286>>(x1287<=x1288)));

    if (t176 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x1290 = 11;
	static int32_t x1292 = INT32_MAX;
	int64_t t177 = -13380694LL;

    t177 = (x1289^(x1290>>(x1291<=x1292)));

    if (t177 != -6LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1297 = INT32_MIN;
	int8_t x1298 = 14;
	int8_t x1299 = -1;
	int8_t x1300 = 51;
	volatile int32_t t178 = -6;

    t178 = (x1297^(x1298>>(x1299<=x1300)));

    if (t178 != -2147483641) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x1301 = INT16_MIN;
	uint32_t x1302 = 45U;
	uint16_t x1303 = 29U;
	uint64_t x1304 = 2313LLU;

    t179 = (x1301^(x1302>>(x1303<=x1304)));

    if (t179 != 4294934550U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1305 = 8024386520668LLU;
	volatile uint64_t x1306 = UINT64_MAX;
	int64_t x1307 = -20031977756705820LL;
	int64_t x1308 = -1LL;
	volatile uint64_t t180 = 752954849047344LLU;

    t180 = (x1305^(x1306>>(x1307<=x1308)));

    if (t180 != 9223364012468255139LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1309 = -29;
	static uint16_t x1310 = UINT16_MAX;
	uint32_t x1311 = UINT32_MAX;
	volatile int32_t t181 = -523814;

    t181 = (x1309^(x1310>>(x1311<=x1312)));

    if (t181 != -65508) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1314 = 663;
	static volatile int64_t x1315 = 426LL;
	int32_t x1316 = 6;
	volatile int32_t t182 = -1659916;

    t182 = (x1313^(x1314>>(x1315<=x1316)));

    if (t182 != 2147482984) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x1317 = UINT8_MAX;
	volatile uint32_t x1318 = 98160721U;
	uint16_t x1319 = 0U;
	static int32_t x1320 = -1;
	uint32_t t183 = 343961182U;

    t183 = (x1317^(x1318>>(x1319<=x1320)));

    if (t183 != 98160814U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1321 = INT8_MAX;
	static uint8_t x1322 = 4U;
	static volatile int16_t x1323 = -1;
	int32_t x1324 = -303576;

    t184 = (x1321^(x1322>>(x1323<=x1324)));

    if (t184 != 123) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x1329 = 1U;
	int8_t x1330 = 35;
	uint8_t x1331 = 3U;
	int32_t x1332 = INT32_MAX;

    t185 = (x1329^(x1330>>(x1331<=x1332)));

    if (t185 != 16) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint8_t x1337 = UINT8_MAX;
	int32_t x1338 = 440431338;
	static uint16_t x1339 = 47U;
	uint8_t x1340 = 1U;
	int32_t t186 = -67708898;

    t186 = (x1337^(x1338>>(x1339<=x1340)));

    if (t186 != 440431125) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1341 = 670608;
	uint8_t x1342 = UINT8_MAX;
	int8_t x1343 = 6;
	uint64_t x1344 = 2LLU;
	int32_t t187 = -132;

    t187 = (x1341^(x1342>>(x1343<=x1344)));

    if (t187 != 670575) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1349 = 0LLU;
	volatile int16_t x1350 = 2455;
	int8_t x1351 = 1;
	uint64_t x1352 = 510LLU;

    t188 = (x1349^(x1350>>(x1351<=x1352)));

    if (t188 != 1227LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1365 = INT32_MIN;
	int8_t x1368 = 0;

    t189 = (x1365^(x1366>>(x1367<=x1368)));

    if (t189 != -2147483646) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1369 = 359789737093351LLU;
	static volatile int8_t x1370 = INT8_MAX;
	uint16_t x1372 = 28094U;
	static uint64_t t190 = 4LLU;

    t190 = (x1369^(x1370>>(x1371<=x1372)));

    if (t190 != 359789737093336LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x1377 = 1U;
	uint8_t x1378 = UINT8_MAX;
	static uint32_t x1379 = 0U;
	int16_t x1380 = INT16_MAX;
	static volatile int32_t t191 = 2374049;

    t191 = (x1377^(x1378>>(x1379<=x1380)));

    if (t191 != 126) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1381 = INT16_MIN;
	uint8_t x1382 = UINT8_MAX;
	uint8_t x1384 = 0U;
	static volatile int32_t t192 = 113261095;

    t192 = (x1381^(x1382>>(x1383<=x1384)));

    if (t192 != -32641) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x1385 = UINT16_MAX;
	static int64_t x1386 = 9LL;
	static int64_t x1387 = INT64_MIN;

    t193 = (x1385^(x1386>>(x1387<=x1388)));

    if (t193 != 65531LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1389 = INT64_MIN;
	static uint64_t x1390 = 1472634103283030LLU;
	int8_t x1391 = -1;
	int32_t x1392 = -1;

    t194 = (x1389^(x1390>>(x1391<=x1392)));

    if (t194 != 9224108353906417323LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1393 = -1880;
	volatile int64_t x1396 = INT64_MAX;

    t195 = (x1393^(x1394>>(x1395<=x1396)));

    if (t195 != 4288882221U) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint16_t x1405 = UINT16_MAX;
	volatile uint64_t x1406 = 259LLU;
	static uint16_t x1407 = 68U;
	static int64_t x1408 = -1LL;
	static volatile uint64_t t196 = 27LLU;

    t196 = (x1405^(x1406>>(x1407<=x1408)));

    if (t196 != 65276LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x1421 = INT32_MIN;
	int64_t x1422 = INT64_MAX;
	uint16_t x1424 = UINT16_MAX;

    t197 = (x1421^(x1422>>(x1423<=x1424)));

    if (t197 != -4611686016279904257LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x1425 = -85;
	static int8_t x1427 = 6;
	uint64_t x1428 = 575333537046LLU;
	int32_t t198 = -1113863;

    t198 = (x1425^(x1426>>(x1427<=x1428)));

    if (t198 != -85) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1438 = 5348U;
	uint8_t x1439 = 3U;

    t199 = (x1437^(x1438>>(x1439<=x1440)));

    if (t199 != 4294964229U) { NG(); } else { ; }
	
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

