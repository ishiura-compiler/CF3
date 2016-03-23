
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

static int8_t x12 = INT8_MAX;
uint8_t x22 = 4U;
int32_t x38 = INT32_MAX;
uint8_t x43 = UINT8_MAX;
int32_t t6 = -51503;
static int64_t t7 = 979417317776558LL;
int32_t x63 = -220;
int16_t x64 = INT16_MIN;
uint16_t x89 = 205U;
uint64_t x90 = 335031115646177356LLU;
int32_t t13 = -1;
uint32_t x102 = UINT32_MAX;
int64_t x115 = 781LL;
int64_t x118 = 269LL;
volatile int64_t t16 = -146849863LL;
volatile uint32_t x134 = 14951977U;
static int32_t x136 = INT32_MAX;
volatile uint32_t t18 = 991U;
uint64_t x141 = 8917644510807326LLU;
static uint32_t x151 = UINT32_MAX;
volatile uint32_t x167 = UINT32_MAX;
int16_t x168 = INT16_MIN;
uint64_t x184 = UINT64_MAX;
static volatile uint64_t t25 = 26764LLU;
int16_t x190 = 4481;
uint8_t x201 = 3U;
uint8_t x210 = 22U;
volatile uint64_t t29 = 43431571947257450LLU;
int16_t x221 = -754;
int16_t x224 = -110;
int32_t x233 = INT32_MIN;
int8_t x234 = 1;
uint16_t x239 = 2436U;
static uint64_t t32 = 790295933960068896LLU;
volatile uint64_t x241 = 59276831343LLU;
int16_t x242 = 3;
uint64_t x262 = 37771874647041LLU;
int8_t x269 = INT8_MIN;
volatile uint64_t x272 = 28LLU;
int32_t t37 = -789404703;
volatile int32_t t38 = -2413208;
int32_t x296 = INT32_MIN;
volatile int16_t x302 = INT16_MAX;
uint8_t x319 = UINT8_MAX;
int8_t x323 = INT8_MAX;
uint8_t x334 = 70U;
int8_t x335 = INT8_MIN;
int32_t t45 = -1101;
uint16_t x364 = UINT16_MAX;
volatile int64_t x435 = 7266735LL;
uint16_t x438 = 23743U;
int16_t x439 = INT16_MIN;
int64_t x465 = -65568238677077LL;
int16_t x487 = 4352;
volatile uint32_t t59 = 1U;
volatile int8_t x554 = 16;
int32_t x556 = -1;
volatile int32_t t62 = -32041;
int8_t x564 = INT8_MAX;
static volatile uint8_t x573 = 13U;
uint16_t x581 = 0U;
static int16_t x584 = INT16_MIN;
int8_t x590 = 3;
static int16_t x614 = 606;
static uint64_t x621 = 574417174145966742LLU;
uint64_t x622 = 43736LLU;
int8_t x623 = 11;
int64_t x624 = INT64_MIN;
int8_t x637 = 0;
int8_t x638 = INT8_MAX;
volatile uint32_t x644 = 6940U;
int32_t t73 = 7542240;
volatile int16_t x653 = INT16_MIN;
static uint16_t x654 = 221U;
static volatile int64_t t77 = 2884352LL;
int32_t x711 = INT32_MAX;
uint64_t t79 = 5586867379481942973LLU;
static int32_t x714 = 732;
static volatile int64_t t81 = 15496732LL;
int32_t x730 = 18;
int32_t x732 = INT32_MIN;
int16_t x738 = INT16_MAX;
int16_t x740 = -13;
int8_t x741 = 1;
int64_t x747 = INT64_MAX;
uint32_t x748 = 7786U;
uint8_t x770 = 1U;
int32_t x771 = 227;
static uint64_t x772 = 16442569951147029LLU;
volatile int16_t x791 = INT16_MIN;
static int8_t x809 = 1;
int64_t x836 = -1LL;
int32_t t92 = 688219142;
static int16_t x845 = INT16_MAX;
uint8_t x846 = 14U;
int16_t x849 = -1;
uint32_t x870 = 815155014U;
int8_t x880 = INT8_MIN;
uint64_t t96 = 20563963180LLU;
static uint64_t x930 = 30753055625089419LLU;
uint64_t x931 = 526LLU;
volatile uint64_t t100 = 9111287157LLU;
int16_t x943 = 2849;
uint8_t x951 = UINT8_MAX;
static uint8_t x974 = 2U;
uint8_t x975 = 17U;
uint16_t x976 = 24U;
uint8_t x978 = 1U;
static int64_t t105 = 42247743821989LL;
static int8_t x985 = -1;
int16_t x986 = 484;
int32_t x987 = -58;
static volatile uint64_t x988 = 4781LLU;
uint16_t x1006 = 26U;
int32_t t107 = 521943160;
int16_t x1009 = INT16_MIN;
int32_t t109 = -25371;
int16_t x1037 = INT16_MIN;
static int16_t x1057 = INT16_MIN;
int16_t x1061 = INT16_MIN;
uint16_t x1062 = UINT16_MAX;
static uint32_t x1065 = 7898276U;
static uint32_t t114 = 106726U;
int32_t x1071 = INT32_MIN;
volatile int8_t x1081 = 0;
uint64_t x1083 = UINT64_MAX;
volatile int32_t t116 = 62;
static int32_t x1091 = INT32_MIN;
static volatile int64_t t118 = 312LL;
uint64_t x1122 = 9950LLU;
int32_t x1123 = INT32_MIN;
static int8_t x1152 = -1;
int32_t x1154 = 198332080;
int32_t x1156 = INT32_MIN;
uint8_t x1160 = 105U;
int8_t x1192 = 3;
int8_t x1199 = INT8_MIN;
uint8_t x1226 = 59U;
volatile int16_t x1235 = -1006;
uint8_t x1239 = 43U;
int16_t x1256 = INT16_MIN;
int8_t x1259 = INT8_MAX;
static int32_t t132 = -389818186;
static volatile int16_t x1265 = -1;
uint16_t x1270 = 21U;
volatile int64_t x1271 = INT64_MIN;
static volatile int32_t t135 = 100233623;
uint16_t x1283 = UINT16_MAX;
volatile int32_t x1304 = -1;
int16_t x1305 = INT16_MIN;
volatile int16_t x1308 = INT16_MIN;
static int16_t x1315 = -1;
static int64_t x1319 = INT64_MIN;
uint64_t t141 = 67378LLU;
int8_t x1327 = 21;
int32_t x1355 = INT32_MIN;
int8_t x1356 = 46;
int64_t t145 = 385147LL;
int16_t x1369 = INT16_MIN;
int64_t x1371 = INT64_MAX;
volatile uint32_t x1402 = 1838199U;
static uint64_t x1411 = 164622268917LLU;
int16_t x1412 = INT16_MIN;
volatile int32_t t152 = 9414953;
int32_t t153 = 105;
uint64_t x1426 = 464914854352778LLU;
uint16_t x1434 = UINT16_MAX;
uint32_t x1446 = UINT32_MAX;
volatile uint32_t x1448 = 156682521U;
static uint64_t x1450 = UINT64_MAX;
uint16_t x1473 = UINT16_MAX;
int32_t t158 = 158561;
static int8_t x1478 = 5;
static uint64_t t160 = 2587146450LLU;
int16_t x1492 = INT16_MIN;
uint8_t x1493 = 12U;
volatile int8_t x1505 = INT8_MIN;
uint32_t x1532 = UINT32_MAX;
volatile int32_t t166 = 8903298;
volatile int32_t x1536 = INT32_MAX;
int16_t x1557 = -1;
static uint64_t t171 = 45407946LLU;
static uint32_t x1578 = 785365854U;
volatile uint64_t x1583 = 287227548066980892LLU;
uint32_t x1612 = 88882317U;
volatile int32_t x1622 = INT32_MAX;
int32_t x1623 = INT32_MIN;
int8_t x1624 = -1;
volatile int32_t x1644 = INT32_MIN;
int8_t x1655 = INT8_MAX;
int32_t t181 = 1;
int64_t x1674 = 830LL;
uint64_t x1675 = 18619643370LLU;
int64_t x1728 = -1LL;
volatile int16_t x1743 = INT16_MIN;
static uint64_t x1744 = UINT64_MAX;
int32_t x1755 = 53;
uint16_t x1769 = UINT16_MAX;
uint8_t x1770 = 4U;
int16_t x1777 = INT16_MIN;
volatile int8_t x1779 = INT8_MIN;
int64_t x1787 = INT64_MIN;
int32_t x1788 = INT32_MIN;
uint8_t x1798 = 114U;
int8_t x1800 = INT8_MAX;
volatile int8_t x1804 = INT8_MIN;
volatile int32_t t198 = 25531016;
uint64_t x1817 = 278048491510636411LLU;


void f0(void) {
    	uint8_t x1 = 27U;
	volatile uint16_t x2 = 18111U;
	uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 8426212;

    t0 = (x1*(x2<<(x3>x4)));

    if (t0 != 977994) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 8LL;
	int32_t x6 = 2990181;
	int16_t x7 = INT16_MIN;
	static volatile uint8_t x8 = 1U;
	volatile int64_t t1 = 2729457LL;

    t1 = (x5*(x6<<(x7>x8)));

    if (t1 != 23921448LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	uint32_t x10 = UINT32_MAX;
	static int16_t x11 = -26;
	uint32_t t2 = 437991737U;

    t2 = (x9*(x10<<(x11>x12)));

    if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x17 = -1279227;
	uint16_t x18 = 1U;
	int8_t x19 = 11;
	static int64_t x20 = INT64_MAX;
	int32_t t3 = 449;

    t3 = (x17*(x18<<(x19>x20)));

    if (t3 != -1279227) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int32_t x23 = 352;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -3031188;

    t4 = (x21*(x22<<(x23>x24)));

    if (t4 != -1024) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x37 = -1;
	int64_t x39 = INT64_MIN;
	int16_t x40 = -1;
	int32_t t5 = -962462;

    t5 = (x37*(x38<<(x39>x40)));

    if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x41 = 1425U;
	int16_t x42 = INT16_MAX;
	int64_t x44 = -264675093902302741LL;

    t6 = (x41*(x42<<(x43>x44)));

    if (t6 != 93385950) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint32_t x45 = 13U;
	int64_t x46 = 5479534434LL;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t x48 = -1;

    t7 = (x45*(x46<<(x47>x48)));

    if (t7 != 142467895284LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x53 = UINT64_MAX;
	uint64_t x54 = 157825699927LLU;
	int32_t x55 = 485;
	volatile uint64_t x56 = 452LLU;
	uint64_t t8 = 17027080613307679LLU;

    t8 = (x53*(x54<<(x55>x56)));

    if (t8 != 18446743758058151762LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x57 = INT16_MIN;
	uint32_t x58 = 324U;
	static int32_t x59 = 3177;
	uint16_t x60 = UINT16_MAX;
	uint32_t t9 = 368179288U;

    t9 = (x57*(x58<<(x59>x60)));

    if (t9 != 4284350464U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x61 = 1U;
	volatile uint16_t x62 = 124U;
	int32_t t10 = 17228;

    t10 = (x61*(x62<<(x63>x64)));

    if (t10 != 248) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x77 = -1;
	uint32_t x78 = 60U;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MAX;
	volatile uint32_t t11 = 21496278U;

    t11 = (x77*(x78<<(x79>x80)));

    if (t11 != 4294967236U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x91 = 31U;
	int32_t x92 = 8676;
	volatile uint64_t t12 = 922102LLU;

    t12 = (x89*(x90<<(x91>x92)));

    if (t12 != 13341146486337703132LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x97 = 264U;
	static uint16_t x98 = 16U;
	int16_t x99 = INT16_MIN;
	volatile uint16_t x100 = 10U;

    t13 = (x97*(x98<<(x99>x100)));

    if (t13 != 4224) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x101 = -1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	static volatile uint32_t t14 = 22U;

    t14 = (x101*(x102<<(x103>x104)));

    if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x113 = -106;
	uint8_t x114 = UINT8_MAX;
	volatile uint64_t x116 = 631255463182073063LLU;
	static int32_t t15 = 0;

    t15 = (x113*(x114<<(x115>x116)));

    if (t15 != -27030) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x117 = -12;
	static volatile uint32_t x119 = 62U;
	volatile int16_t x120 = 0;

    t16 = (x117*(x118<<(x119>x120)));

    if (t16 != -6456LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x129 = INT16_MIN;
	uint8_t x130 = UINT8_MAX;
	static volatile uint8_t x131 = UINT8_MAX;
	static int16_t x132 = INT16_MIN;
	int32_t t17 = 937987290;

    t17 = (x129*(x130<<(x131>x132)));

    if (t17 != -16711680) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x133 = INT16_MAX;
	int32_t x135 = -1;

    t18 = (x133*(x134<<(x135>x136)));

    if (t18 != 305158615U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x137 = 5U;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = 38;
	int16_t x140 = INT16_MIN;
	static int32_t t19 = -1;

    t19 = (x137*(x138<<(x139>x140)));

    if (t19 != 655350) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x142 = 11;
	static int16_t x143 = INT16_MIN;
	static int32_t x144 = 29217287;
	volatile uint64_t t20 = 5925284827LLU;

    t20 = (x141*(x142<<(x143>x144)));

    if (t20 != 98094089618880586LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x149 = -29;
	uint64_t x150 = UINT64_MAX;
	int32_t x152 = INT32_MIN;
	volatile uint64_t t21 = 67410049LLU;

    t21 = (x149*(x150<<(x151>x152)));

    if (t21 != 58LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x153 = 36U;
	uint16_t x154 = 3059U;
	int64_t x155 = INT64_MIN;
	int64_t x156 = -497150823LL;
	int32_t t22 = 2;

    t22 = (x153*(x154<<(x155>x156)));

    if (t22 != 110124) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x165 = INT16_MIN;
	uint64_t x166 = UINT64_MAX;
	volatile uint64_t t23 = 1170412383991LLU;

    t23 = (x165*(x166<<(x167>x168)));

    if (t23 != 65536LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x169 = INT32_MAX;
	static uint32_t x170 = 42335U;
	int64_t x171 = 333LL;
	uint8_t x172 = 19U;
	uint32_t t24 = 654U;

    t24 = (x169*(x170<<(x171>x172)));

    if (t24 != 4294882626U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x181 = UINT64_MAX;
	static volatile int32_t x182 = INT32_MAX;
	static uint8_t x183 = 0U;

    t25 = (x181*(x182<<(x183>x184)));

    if (t25 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint16_t x189 = 1U;
	int64_t x191 = INT64_MAX;
	uint64_t x192 = 80290710001LLU;
	int32_t t26 = 41172;

    t26 = (x189*(x190<<(x191>x192)));

    if (t26 != 8962) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x193 = 3LLU;
	int64_t x194 = 690642LL;
	volatile uint64_t x195 = UINT64_MAX;
	uint64_t x196 = 8568LLU;
	volatile uint64_t t27 = 13276LLU;

    t27 = (x193*(x194<<(x195>x196)));

    if (t27 != 4143852LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x202 = UINT16_MAX;
	uint16_t x203 = 28700U;
	int16_t x204 = -1;
	volatile int32_t t28 = 77526;

    t28 = (x201*(x202<<(x203>x204)));

    if (t28 != 393210) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x209 = UINT64_MAX;
	volatile uint16_t x211 = 4767U;
	uint32_t x212 = UINT32_MAX;

    t29 = (x209*(x210<<(x211>x212)));

    if (t29 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint8_t x222 = 17U;
	int16_t x223 = INT16_MIN;
	int32_t t30 = -22890;

    t30 = (x221*(x222<<(x223>x224)));

    if (t30 != -12818) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x235 = 0LLU;
	static volatile int32_t x236 = -1;
	volatile int32_t t31 = INT32_MIN;

    t31 = (x233*(x234<<(x235>x236)));

    if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x237 = -63;
	uint64_t x238 = 102492LLU;
	int16_t x240 = 7541;

    t32 = (x237*(x238<<(x239>x240)));

    if (t32 != 18446744073703094620LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x243 = 52U;
	uint64_t x244 = 31441LLU;
	static volatile uint64_t t33 = 44192983877428360LLU;

    t33 = (x241*(x242<<(x243>x244)));

    if (t33 != 177830494029LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x249 = UINT16_MAX;
	volatile uint64_t x250 = 638906822406618491LLU;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MAX;
	volatile uint64_t t34 = 9190288376456710545LLU;

    t34 = (x249*(x250<<(x251>x252)));

    if (t34 != 15096303170770190981LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x253 = -1;
	static int16_t x254 = 0;
	static uint8_t x255 = 115U;
	int16_t x256 = INT16_MAX;
	int32_t t35 = 68095;

    t35 = (x253*(x254<<(x255>x256)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x261 = -1422;
	uint8_t x263 = 2U;
	static uint64_t x264 = 16788111488LLU;
	volatile uint64_t t36 = 1994LLU;

    t36 = (x261*(x262<<(x263>x264)));

    if (t36 != 18393032467961459314LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x270 = 1U;
	static int64_t x271 = INT64_MAX;

    t37 = (x269*(x270<<(x271>x272)));

    if (t37 != -256) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x277 = INT8_MIN;
	volatile int16_t x278 = 0;
	static int64_t x279 = -5921244LL;
	int64_t x280 = -1LL;

    t38 = (x277*(x278<<(x279>x280)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x281 = -1;
	int16_t x282 = INT16_MAX;
	static int64_t x283 = INT64_MAX;
	uint8_t x284 = 16U;
	int32_t t39 = -7801;

    t39 = (x281*(x282<<(x283>x284)));

    if (t39 != -65534) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 86142U;
	int16_t x291 = -1;
	int8_t x292 = -1;
	uint32_t t40 = 30U;

    t40 = (x289*(x290<<(x291>x292)));

    if (t40 != 1350348674U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MAX;
	uint16_t x295 = UINT16_MAX;
	volatile int32_t t41 = 14599149;

    t41 = (x293*(x294<<(x295>x296)));

    if (t41 != 8322818) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x301 = 47330277LLU;
	int8_t x303 = -1;
	volatile int32_t x304 = INT32_MIN;
	uint64_t t42 = 1189670109LLU;

    t42 = (x301*(x302<<(x303>x304)));

    if (t42 != 3101742372918LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x317 = -1LL;
	volatile int16_t x318 = INT16_MAX;
	int32_t x320 = 786618;
	volatile int64_t t43 = 23129167394LL;

    t43 = (x317*(x318<<(x319>x320)));

    if (t43 != -32767LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x321 = INT16_MAX;
	static uint32_t x322 = 85U;
	int8_t x324 = 0;
	static uint32_t t44 = 917U;

    t44 = (x321*(x322<<(x323>x324)));

    if (t44 != 5570390U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x333 = UINT8_MAX;
	volatile int8_t x336 = INT8_MIN;

    t45 = (x333*(x334<<(x335>x336)));

    if (t45 != 17850) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x337 = 1728448U;
	uint8_t x338 = 1U;
	int32_t x339 = 553;
	volatile int64_t x340 = -1LL;
	static uint32_t t46 = 10633493U;

    t46 = (x337*(x338<<(x339>x340)));

    if (t46 != 3456896U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x353 = 1726747980385LLU;
	volatile uint64_t x354 = 195365LLU;
	volatile int32_t x355 = INT32_MIN;
	int16_t x356 = -1;
	uint64_t t47 = 47232005LLU;

    t47 = (x353*(x354<<(x355>x356)));

    if (t47 != 337346119187915525LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x361 = 5U;
	static int8_t x362 = 22;
	uint32_t x363 = 5U;
	volatile int32_t t48 = 121;

    t48 = (x361*(x362<<(x363>x364)));

    if (t48 != 110) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint8_t x369 = 5U;
	int16_t x370 = 1;
	uint64_t x371 = 116816732615LLU;
	static volatile uint32_t x372 = 170391U;
	volatile int32_t t49 = 2208;

    t49 = (x369*(x370<<(x371>x372)));

    if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint8_t x374 = 2U;
	int16_t x375 = -1;
	int8_t x376 = -15;
	volatile int32_t t50 = 10221;

    t50 = (x373*(x374<<(x375>x376)));

    if (t50 != -512) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x377 = INT64_MIN;
	volatile int8_t x378 = 0;
	static int32_t x379 = -5165423;
	static volatile int64_t x380 = 7407045738967LL;
	volatile int64_t t51 = -23101126851118299LL;

    t51 = (x377*(x378<<(x379>x380)));

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint32_t x381 = 0U;
	static volatile uint8_t x382 = 0U;
	volatile uint64_t x383 = UINT64_MAX;
	static uint16_t x384 = 246U;
	volatile uint32_t t52 = 16200465U;

    t52 = (x381*(x382<<(x383>x384)));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x389 = -130;
	static volatile uint64_t x390 = 489605LLU;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = 4262U;
	uint64_t t53 = 7469389151LLU;

    t53 = (x389*(x390<<(x391>x392)));

    if (t53 != 18446744073645902966LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = 3251U;
	int64_t x436 = INT64_MIN;
	static int32_t t54 = -411442;

    t54 = (x433*(x434<<(x435>x436)));

    if (t54 != -832256) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x437 = INT16_MIN;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t55 = 1;

    t55 = (x437*(x438<<(x439>x440)));

    if (t55 != -778010624) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x466 = 10477;
	int32_t x467 = INT32_MAX;
	uint32_t x468 = 5117816U;
	static int64_t t56 = -9818675LL;

    t56 = (x465*(x466<<(x467>x468)));

    if (t56 != -1373916873239471458LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x470 = UINT64_MAX;
	volatile int8_t x471 = INT8_MIN;
	int64_t x472 = INT64_MAX;
	volatile uint64_t t57 = 61069094315LLU;

    t57 = (x469*(x470<<(x471>x472)));

    if (t57 != 2147483648LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x485 = -1LL;
	static volatile int16_t x486 = INT16_MAX;
	volatile uint8_t x488 = UINT8_MAX;
	int64_t t58 = -883130649874977LL;

    t58 = (x485*(x486<<(x487>x488)));

    if (t58 != -65534LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x501 = UINT32_MAX;
	volatile uint32_t x502 = UINT32_MAX;
	static int8_t x503 = 13;
	uint32_t x504 = 1U;

    t59 = (x501*(x502<<(x503>x504)));

    if (t59 != 2U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x513 = INT16_MAX;
	static uint64_t x514 = 14347LLU;
	int64_t x515 = INT64_MIN;
	volatile uint32_t x516 = 589488212U;
	uint64_t t60 = 153208543029798827LLU;

    t60 = (x513*(x514<<(x515>x516)));

    if (t60 != 470108149LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x545 = 602916U;
	uint8_t x546 = 23U;
	int32_t x547 = INT32_MAX;
	int32_t x548 = -1;
	volatile uint32_t t61 = 14177842U;

    t61 = (x545*(x546<<(x547>x548)));

    if (t61 != 27734136U) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x553 = INT16_MAX;
	uint64_t x555 = 28277LLU;

    t62 = (x553*(x554<<(x555>x556)));

    if (t62 != 524272) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x561 = -1;
	uint16_t x562 = 3U;
	uint32_t x563 = 3159884U;
	static volatile int32_t t63 = 6489;

    t63 = (x561*(x562<<(x563>x564)));

    if (t63 != -6) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = INT8_MAX;
	static uint8_t x571 = 4U;
	int16_t x572 = INT16_MIN;
	int32_t t64 = 29139;

    t64 = (x569*(x570<<(x571>x572)));

    if (t64 != 32258) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x574 = UINT8_MAX;
	static int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MAX;
	volatile int32_t t65 = 24;

    t65 = (x573*(x574<<(x575>x576)));

    if (t65 != 3315) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x577 = 516987499632717LL;
	uint16_t x578 = 0U;
	uint8_t x579 = 22U;
	uint8_t x580 = 4U;
	volatile int64_t t66 = -31LL;

    t66 = (x577*(x578<<(x579>x580)));

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int64_t x582 = 9330437300LL;
	int8_t x583 = INT8_MIN;
	volatile int64_t t67 = 1120549647360378LL;

    t67 = (x581*(x582<<(x583>x584)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x589 = -1;
	int32_t x591 = INT32_MAX;
	int32_t x592 = -1;
	volatile int32_t t68 = 126;

    t68 = (x589*(x590<<(x591>x592)));

    if (t68 != -6) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x609 = INT8_MAX;
	static int16_t x610 = INT16_MAX;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MAX;
	volatile int32_t t69 = -1;

    t69 = (x609*(x610<<(x611>x612)));

    if (t69 != 4161409) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x613 = 1500251U;
	static int16_t x615 = INT16_MIN;
	uint32_t x616 = 1569773708U;
	uint32_t t70 = 961837358U;

    t70 = (x613*(x614<<(x615>x616)));

    if (t70 != 1818304212U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t t71 = 127899LLU;

    t71 = (x621*(x622<<(x623>x624)));

    if (t71 != 14934944184893805856LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MIN;
	static int32_t t72 = -7;

    t72 = (x637*(x638<<(x639>x640)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x641 = INT8_MIN;
	uint16_t x642 = UINT16_MAX;
	uint64_t x643 = 0LLU;

    t73 = (x641*(x642<<(x643>x644)));

    if (t73 != -8388480) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x645 = UINT8_MAX;
	static int32_t x646 = 624;
	int32_t x647 = INT32_MAX;
	uint8_t x648 = UINT8_MAX;
	volatile int32_t t74 = -69030960;

    t74 = (x645*(x646<<(x647>x648)));

    if (t74 != 318240) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x655 = 10967LLU;
	int64_t x656 = INT64_MAX;
	int32_t t75 = 290549;

    t75 = (x653*(x654<<(x655>x656)));

    if (t75 != -7241728) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x669 = -66902306;
	uint8_t x670 = 1U;
	volatile uint16_t x671 = 31523U;
	uint64_t x672 = 1670632LLU;
	int32_t t76 = 1655;

    t76 = (x669*(x670<<(x671>x672)));

    if (t76 != -66902306) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x693 = -1;
	int64_t x694 = 547631531482285895LL;
	volatile int8_t x695 = INT8_MIN;
	uint8_t x696 = 12U;

    t77 = (x693*(x694<<(x695>x696)));

    if (t77 != -547631531482285895LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x705 = -1;
	int8_t x706 = INT8_MAX;
	int8_t x707 = INT8_MIN;
	int16_t x708 = 2181;
	int32_t t78 = -37;

    t78 = (x705*(x706<<(x707>x708)));

    if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x709 = UINT64_MAX;
	uint16_t x710 = 57U;
	volatile int16_t x712 = INT16_MAX;

    t79 = (x709*(x710<<(x711>x712)));

    if (t79 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x713 = -1;
	volatile uint16_t x715 = 3U;
	int16_t x716 = INT16_MIN;
	volatile int32_t t80 = -131;

    t80 = (x713*(x714<<(x715>x716)));

    if (t80 != -1464) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x725 = -622LL;
	static uint8_t x726 = 46U;
	static uint16_t x727 = 1U;
	uint64_t x728 = 1633549LLU;

    t81 = (x725*(x726<<(x727>x728)));

    if (t81 != -28612LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int32_t x729 = -1;
	volatile int64_t x731 = 0LL;
	int32_t t82 = -17;

    t82 = (x729*(x730<<(x731>x732)));

    if (t82 != -36) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x737 = INT8_MIN;
	int64_t x739 = INT64_MIN;
	int32_t t83 = 4245;

    t83 = (x737*(x738<<(x739>x740)));

    if (t83 != -4194176) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x742 = INT8_MAX;
	uint8_t x743 = 85U;
	static uint8_t x744 = UINT8_MAX;
	volatile int32_t t84 = 246273150;

    t84 = (x741*(x742<<(x743>x744)));

    if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x745 = UINT16_MAX;
	uint64_t x746 = UINT64_MAX;
	uint64_t t85 = 6781662486251LLU;

    t85 = (x745*(x746<<(x747>x748)));

    if (t85 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x765 = -1;
	int8_t x766 = INT8_MAX;
	uint16_t x767 = UINT16_MAX;
	volatile int32_t x768 = INT32_MIN;
	int32_t t86 = 336;

    t86 = (x765*(x766<<(x767>x768)));

    if (t86 != -254) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x769 = INT32_MAX;
	volatile int32_t t87 = INT32_MAX;

    t87 = (x769*(x770<<(x771>x772)));

    if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x789 = -11;
	uint8_t x790 = 1U;
	static uint8_t x792 = UINT8_MAX;
	int32_t t88 = -1;

    t88 = (x789*(x790<<(x791>x792)));

    if (t88 != -11) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x793 = 9565455LLU;
	uint32_t x794 = UINT32_MAX;
	static int16_t x795 = 5;
	static int64_t x796 = -1LL;
	static volatile uint64_t t89 = 90588768025940LLU;

    t89 = (x793*(x794<<(x795>x796)));

    if (t89 != 41083316377228770LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x801 = INT16_MAX;
	uint32_t x802 = 1262U;
	int8_t x803 = -2;
	static int64_t x804 = INT64_MIN;
	volatile uint32_t t90 = 6537U;

    t90 = (x801*(x802<<(x803>x804)));

    if (t90 != 82703908U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x810 = 52U;
	int16_t x811 = -1;
	int8_t x812 = INT8_MIN;
	int32_t t91 = -3986;

    t91 = (x809*(x810<<(x811>x812)));

    if (t91 != 104) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x833 = -1;
	static int16_t x834 = INT16_MAX;
	int8_t x835 = INT8_MAX;

    t92 = (x833*(x834<<(x835>x836)));

    if (t92 != -65534) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x847 = -1;
	uint16_t x848 = 7978U;
	int32_t t93 = 43;

    t93 = (x845*(x846<<(x847>x848)));

    if (t93 != 458738) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x850 = 84U;
	int32_t x851 = -1;
	static uint16_t x852 = 18U;
	volatile int32_t t94 = -16536;

    t94 = (x849*(x850<<(x851>x852)));

    if (t94 != -84) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x869 = 2;
	int64_t x871 = INT64_MAX;
	int16_t x872 = INT16_MIN;
	static volatile uint32_t t95 = 23207U;

    t95 = (x869*(x870<<(x871>x872)));

    if (t95 != 3260620056U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x877 = UINT64_MAX;
	volatile uint8_t x878 = 13U;
	int32_t x879 = 1;

    t96 = (x877*(x878<<(x879>x880)));

    if (t96 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x881 = INT16_MAX;
	static uint16_t x882 = UINT16_MAX;
	static volatile int64_t x883 = INT64_MIN;
	static int64_t x884 = 87582405381306LL;
	int32_t t97 = 169;

    t97 = (x881*(x882<<(x883>x884)));

    if (t97 != 2147385345) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x917 = INT8_MIN;
	volatile uint8_t x918 = 37U;
	int8_t x919 = INT8_MAX;
	uint32_t x920 = 12U;
	volatile int32_t t98 = -934101;

    t98 = (x917*(x918<<(x919>x920)));

    if (t98 != -9472) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x929 = 1;
	volatile int8_t x932 = -13;
	volatile uint64_t t99 = 343019014469854660LLU;

    t99 = (x929*(x930<<(x931>x932)));

    if (t99 != 30753055625089419LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x933 = INT64_MIN;
	uint64_t x934 = 231518LLU;
	static int32_t x935 = INT32_MIN;
	volatile int64_t x936 = 132018387265401LL;

    t100 = (x933*(x934<<(x935>x936)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x941 = -1;
	uint16_t x942 = 42U;
	int16_t x944 = INT16_MIN;
	int32_t t101 = -2;

    t101 = (x941*(x942<<(x943>x944)));

    if (t101 != -84) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x949 = 377111233943090965LLU;
	static int64_t x950 = 9892LL;
	uint32_t x952 = 62346766U;
	uint64_t t102 = 193LLU;

    t102 = (x949*(x950<<(x951>x952)));

    if (t102 != 4142023275726399348LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x973 = 4722U;
	uint32_t t103 = 2U;

    t103 = (x973*(x974<<(x975>x976)));

    if (t103 != 9444U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x977 = UINT8_MAX;
	int64_t x979 = 6717856140577594LL;
	uint16_t x980 = 18U;
	volatile int32_t t104 = -3;

    t104 = (x977*(x978<<(x979>x980)));

    if (t104 != 510) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x981 = -3551627943685454LL;
	static int8_t x982 = 1;
	uint64_t x983 = UINT64_MAX;
	int8_t x984 = INT8_MIN;

    t105 = (x981*(x982<<(x983>x984)));

    if (t105 != -7103255887370908LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t t106 = 5;

    t106 = (x985*(x986<<(x987>x988)));

    if (t106 != -968) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x1005 = INT16_MAX;
	int8_t x1007 = INT8_MIN;
	int64_t x1008 = INT64_MAX;

    t107 = (x1005*(x1006<<(x1007>x1008)));

    if (t107 != 851942) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x1010 = 0U;
	int16_t x1011 = INT16_MAX;
	uint64_t x1012 = UINT64_MAX;
	uint32_t t108 = 1U;

    t108 = (x1009*(x1010<<(x1011>x1012)));

    if (t108 != 0U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x1021 = -1;
	static int32_t x1022 = INT32_MAX;
	static int32_t x1023 = -24784515;
	int64_t x1024 = INT64_MAX;

    t109 = (x1021*(x1022<<(x1023>x1024)));

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x1033 = INT32_MAX;
	volatile uint64_t x1034 = UINT64_MAX;
	int64_t x1035 = INT64_MAX;
	static int64_t x1036 = 148394LL;
	volatile uint64_t t110 = 39084LLU;

    t110 = (x1033*(x1034<<(x1035>x1036)));

    if (t110 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x1038 = 3806U;
	volatile int16_t x1039 = INT16_MAX;
	static int32_t x1040 = 26819844;
	volatile uint32_t t111 = 14312691U;

    t111 = (x1037*(x1038<<(x1039>x1040)));

    if (t111 != 4170252288U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x1058 = UINT64_MAX;
	int8_t x1059 = INT8_MIN;
	static int64_t x1060 = -1LL;
	volatile uint64_t t112 = 978548LLU;

    t112 = (x1057*(x1058<<(x1059>x1060)));

    if (t112 != 32768LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x1063 = -1;
	static int16_t x1064 = 1;
	volatile int32_t t113 = -2222;

    t113 = (x1061*(x1062<<(x1063>x1064)));

    if (t113 != -2147450880) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x1066 = 0U;
	uint8_t x1067 = 1U;
	int32_t x1068 = -85;

    t114 = (x1065*(x1066<<(x1067>x1068)));

    if (t114 != 0U) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x1069 = -1;
	uint8_t x1070 = UINT8_MAX;
	static int16_t x1072 = -1;
	volatile int32_t t115 = -5;

    t115 = (x1069*(x1070<<(x1071>x1072)));

    if (t115 != -255) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x1082 = 670U;
	int64_t x1084 = -1355492757LL;

    t116 = (x1081*(x1082<<(x1083>x1084)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x1089 = 376633185888027LL;
	int8_t x1090 = INT8_MAX;
	int16_t x1092 = INT16_MIN;
	volatile int64_t t117 = -10656766LL;

    t117 = (x1089*(x1090<<(x1091>x1092)));

    if (t117 != 47832414607779429LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x1101 = -1LL;
	int16_t x1102 = 28;
	int8_t x1103 = INT8_MIN;
	uint64_t x1104 = 12650285LLU;

    t118 = (x1101*(x1102<<(x1103>x1104)));

    if (t118 != -56LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x1113 = 3049U;
	int16_t x1114 = INT16_MAX;
	static int64_t x1115 = INT64_MAX;
	static int16_t x1116 = INT16_MAX;
	volatile int32_t t119 = -19834969;

    t119 = (x1113*(x1114<<(x1115>x1116)));

    if (t119 != 199813166) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x1121 = INT8_MAX;
	int16_t x1124 = -1;
	volatile uint64_t t120 = 28LLU;

    t120 = (x1121*(x1122<<(x1123>x1124)));

    if (t120 != 1263650LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x1149 = UINT32_MAX;
	uint32_t x1150 = UINT32_MAX;
	volatile uint16_t x1151 = UINT16_MAX;
	static uint32_t t121 = 65U;

    t121 = (x1149*(x1150<<(x1151>x1152)));

    if (t121 != 2U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x1153 = -1LL;
	static uint8_t x1155 = UINT8_MAX;
	int64_t t122 = -1031514155998142718LL;

    t122 = (x1153*(x1154<<(x1155>x1156)));

    if (t122 != -396664160LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x1157 = -1;
	uint64_t x1158 = UINT64_MAX;
	int32_t x1159 = INT32_MIN;
	uint64_t t123 = 35402438213LLU;

    t123 = (x1157*(x1158<<(x1159>x1160)));

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x1177 = 841608821LL;
	volatile int8_t x1178 = 16;
	int32_t x1179 = -1;
	uint32_t x1180 = 2504U;
	int64_t t124 = 2270035087704473943LL;

    t124 = (x1177*(x1178<<(x1179>x1180)));

    if (t124 != 26931482272LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1189 = -1;
	int16_t x1190 = INT16_MAX;
	uint8_t x1191 = UINT8_MAX;
	static volatile int32_t t125 = -649574;

    t125 = (x1189*(x1190<<(x1191>x1192)));

    if (t125 != -65534) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x1197 = 9;
	static volatile uint8_t x1198 = 5U;
	int32_t x1200 = INT32_MIN;
	int32_t t126 = -14671;

    t126 = (x1197*(x1198<<(x1199>x1200)));

    if (t126 != 90) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x1225 = 98896735LL;
	volatile int32_t x1227 = INT32_MIN;
	int64_t x1228 = -46LL;
	volatile int64_t t127 = 19LL;

    t127 = (x1225*(x1226<<(x1227>x1228)));

    if (t127 != 5834907365LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x1229 = INT64_MAX;
	int8_t x1230 = 0;
	int32_t x1231 = INT32_MAX;
	static int32_t x1232 = INT32_MIN;
	volatile int64_t t128 = -50399280LL;

    t128 = (x1229*(x1230<<(x1231>x1232)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1233 = -1;
	uint16_t x1234 = UINT16_MAX;
	int32_t x1236 = 123647302;
	volatile int32_t t129 = 393868152;

    t129 = (x1233*(x1234<<(x1235>x1236)));

    if (t129 != -65535) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1237 = 218625;
	static volatile uint8_t x1238 = 8U;
	int16_t x1240 = -1;
	int32_t t130 = -3;

    t130 = (x1237*(x1238<<(x1239>x1240)));

    if (t130 != 3498000) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x1253 = INT8_MIN;
	uint64_t x1254 = 125185065LLU;
	int64_t x1255 = INT64_MIN;
	volatile uint64_t t131 = 18696068272163LLU;

    t131 = (x1253*(x1254<<(x1255>x1256)));

    if (t131 != 18446744057685863296LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x1257 = 31U;
	volatile int8_t x1258 = INT8_MAX;
	uint32_t x1260 = 1208454771U;

    t132 = (x1257*(x1258<<(x1259>x1260)));

    if (t132 != 3937) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x1261 = UINT64_MAX;
	int32_t x1262 = 5592;
	static volatile int16_t x1263 = 247;
	static int64_t x1264 = 805LL;
	volatile uint64_t t133 = 7836LLU;

    t133 = (x1261*(x1262<<(x1263>x1264)));

    if (t133 != 18446744073709546024LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1266 = 117;
	volatile int16_t x1267 = INT16_MIN;
	volatile uint32_t x1268 = 3136071U;
	int32_t t134 = -5342;

    t134 = (x1265*(x1266<<(x1267>x1268)));

    if (t134 != -234) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x1269 = INT16_MIN;
	uint16_t x1272 = UINT16_MAX;

    t135 = (x1269*(x1270<<(x1271>x1272)));

    if (t135 != -688128) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x1273 = UINT32_MAX;
	static int32_t x1274 = 473;
	int64_t x1275 = -1LL;
	static int8_t x1276 = -1;
	uint32_t t136 = 997U;

    t136 = (x1273*(x1274<<(x1275>x1276)));

    if (t136 != 4294966823U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x1281 = -1;
	uint32_t x1282 = 0U;
	int8_t x1284 = INT8_MIN;
	volatile uint32_t t137 = 7U;

    t137 = (x1281*(x1282<<(x1283>x1284)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1301 = -1;
	static uint64_t x1302 = 97697411435LLU;
	int64_t x1303 = INT64_MIN;
	uint64_t t138 = 871029920LLU;

    t138 = (x1301*(x1302<<(x1303>x1304)));

    if (t138 != 18446743976012140181LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1306 = 62;
	uint64_t x1307 = 13895610342LLU;
	int32_t t139 = -1507231;

    t139 = (x1305*(x1306<<(x1307>x1308)));

    if (t139 != -2031616) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1313 = -1;
	uint8_t x1314 = 120U;
	volatile int8_t x1316 = -1;
	volatile int32_t t140 = -12;

    t140 = (x1313*(x1314<<(x1315>x1316)));

    if (t140 != -120) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1317 = 1920U;
	uint64_t x1318 = 350050LLU;
	volatile uint8_t x1320 = UINT8_MAX;

    t141 = (x1317*(x1318<<(x1319>x1320)));

    if (t141 != 672096000LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1325 = -1;
	int16_t x1326 = 18;
	int32_t x1328 = INT32_MIN;
	int32_t t142 = 423;

    t142 = (x1325*(x1326<<(x1327>x1328)));

    if (t142 != -36) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1329 = INT8_MAX;
	int8_t x1330 = INT8_MAX;
	int32_t x1331 = 46358;
	uint32_t x1332 = 144351141U;
	int32_t t143 = 18;

    t143 = (x1329*(x1330<<(x1331>x1332)));

    if (t143 != 16129) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x1341 = INT64_MIN;
	uint8_t x1342 = 0U;
	int8_t x1343 = INT8_MIN;
	static volatile int8_t x1344 = INT8_MIN;
	volatile int64_t t144 = 111844LL;

    t144 = (x1341*(x1342<<(x1343>x1344)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1353 = -127670177559LL;
	volatile uint16_t x1354 = 196U;

    t145 = (x1353*(x1354<<(x1355>x1356)));

    if (t145 != -25023354801564LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x1361 = -1;
	static uint64_t x1362 = UINT64_MAX;
	int8_t x1363 = -1;
	volatile int16_t x1364 = -1;
	uint64_t t146 = 55967818472947LLU;

    t146 = (x1361*(x1362<<(x1363>x1364)));

    if (t146 != 1LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1370 = 5891;
	int32_t x1372 = -1;
	int32_t t147 = 8364;

    t147 = (x1369*(x1370<<(x1371>x1372)));

    if (t147 != -386072576) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1385 = UINT16_MAX;
	static uint8_t x1386 = 26U;
	volatile int16_t x1387 = INT16_MIN;
	static int8_t x1388 = INT8_MAX;
	static int32_t t148 = -30033;

    t148 = (x1385*(x1386<<(x1387>x1388)));

    if (t148 != 1703910) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x1397 = 19U;
	static int16_t x1398 = INT16_MAX;
	static uint64_t x1399 = 0LLU;
	int32_t x1400 = INT32_MIN;
	static volatile int32_t t149 = 0;

    t149 = (x1397*(x1398<<(x1399>x1400)));

    if (t149 != 622573) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1401 = 61;
	uint32_t x1403 = 121283202U;
	int8_t x1404 = INT8_MAX;
	volatile uint32_t t150 = 1446U;

    t150 = (x1401*(x1402<<(x1403>x1404)));

    if (t150 != 224260278U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x1409 = -1;
	volatile int8_t x1410 = 36;
	static volatile int32_t t151 = -324138;

    t151 = (x1409*(x1410<<(x1411>x1412)));

    if (t151 != -36) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x1417 = INT8_MIN;
	static uint8_t x1418 = 0U;
	volatile int32_t x1419 = -1;
	uint16_t x1420 = UINT16_MAX;

    t152 = (x1417*(x1418<<(x1419>x1420)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x1421 = -23;
	volatile uint8_t x1422 = 1U;
	static int64_t x1423 = INT64_MIN;
	uint16_t x1424 = UINT16_MAX;

    t153 = (x1421*(x1422<<(x1423>x1424)));

    if (t153 != -23) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1425 = 23;
	int8_t x1427 = INT8_MIN;
	int32_t x1428 = INT32_MIN;
	volatile uint64_t t154 = 11264943397LLU;

    t154 = (x1425*(x1426<<(x1427>x1428)));

    if (t154 != 21386083300227788LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x1433 = -1;
	int64_t x1435 = INT64_MAX;
	int32_t x1436 = INT32_MIN;
	volatile int32_t t155 = 70034883;

    t155 = (x1433*(x1434<<(x1435>x1436)));

    if (t155 != -131070) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1445 = INT8_MAX;
	uint64_t x1447 = UINT64_MAX;
	uint32_t t156 = 6479U;

    t156 = (x1445*(x1446<<(x1447>x1448)));

    if (t156 != 4294967042U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x1449 = 3U;
	int8_t x1451 = -1;
	static int32_t x1452 = INT32_MIN;
	static uint64_t t157 = 854793531448LLU;

    t157 = (x1449*(x1450<<(x1451>x1452)));

    if (t157 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1474 = INT8_MAX;
	uint16_t x1475 = 162U;
	volatile uint8_t x1476 = 0U;

    t158 = (x1473*(x1474<<(x1475>x1476)));

    if (t158 != 16645890) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1477 = -7;
	int64_t x1479 = INT64_MIN;
	uint64_t x1480 = UINT64_MAX;
	volatile int32_t t159 = -21;

    t159 = (x1477*(x1478<<(x1479>x1480)));

    if (t159 != -35) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1485 = 38407177044LL;
	static volatile uint64_t x1486 = 1677644233594936LLU;
	static uint64_t x1487 = 39LLU;
	uint32_t x1488 = 108U;

    t160 = (x1485*(x1486<<(x1487>x1488)));

    if (t160 != 5937518547507190368LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x1489 = -1;
	uint64_t x1490 = UINT64_MAX;
	uint16_t x1491 = 16U;
	uint64_t t161 = 14209751230LLU;

    t161 = (x1489*(x1490<<(x1491>x1492)));

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1494 = 1U;
	int64_t x1495 = 3693LL;
	static int8_t x1496 = INT8_MIN;
	volatile int32_t t162 = -55346773;

    t162 = (x1493*(x1494<<(x1495>x1496)));

    if (t162 != 24) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x1497 = INT8_MIN;
	volatile int8_t x1498 = INT8_MAX;
	int8_t x1499 = INT8_MIN;
	volatile int16_t x1500 = -1;
	volatile int32_t t163 = -301;

    t163 = (x1497*(x1498<<(x1499>x1500)));

    if (t163 != -16256) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1506 = UINT32_MAX;
	uint32_t x1507 = UINT32_MAX;
	volatile uint32_t x1508 = 2U;
	volatile uint32_t t164 = 11U;

    t164 = (x1505*(x1506<<(x1507>x1508)));

    if (t164 != 256U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1517 = 1964974U;
	uint64_t x1518 = 1991613LLU;
	int64_t x1519 = -26556485191958680LL;
	int16_t x1520 = INT16_MIN;
	volatile uint64_t t165 = 23560194619967LLU;

    t165 = (x1517*(x1518<<(x1519>x1520)));

    if (t165 != 3913467763062LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x1529 = 56;
	static int8_t x1530 = INT8_MAX;
	uint8_t x1531 = 1U;

    t166 = (x1529*(x1530<<(x1531>x1532)));

    if (t166 != 7112) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x1533 = 26LLU;
	uint32_t x1534 = UINT32_MAX;
	static uint64_t x1535 = 24788688LLU;
	uint64_t t167 = 32253903003091LLU;

    t167 = (x1533*(x1534<<(x1535>x1536)));

    if (t167 != 111669149670LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1541 = INT8_MAX;
	int64_t x1542 = 314190916710LL;
	int32_t x1543 = -1;
	int16_t x1544 = INT16_MIN;
	volatile int64_t t168 = 131911102711370LL;

    t168 = (x1541*(x1542<<(x1543>x1544)));

    if (t168 != 79804492844340LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x1558 = UINT16_MAX;
	static volatile int64_t x1559 = -532274860702315LL;
	int8_t x1560 = -7;
	static int32_t t169 = -520;

    t169 = (x1557*(x1558<<(x1559>x1560)));

    if (t169 != -65535) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1561 = UINT16_MAX;
	uint8_t x1562 = UINT8_MAX;
	uint64_t x1563 = UINT64_MAX;
	int16_t x1564 = 5149;
	volatile int32_t t170 = 29765;

    t170 = (x1561*(x1562<<(x1563>x1564)));

    if (t170 != 33422850) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1565 = INT64_MAX;
	volatile uint64_t x1566 = 218LLU;
	int16_t x1567 = INT16_MIN;
	volatile int8_t x1568 = INT8_MIN;

    t171 = (x1565*(x1566<<(x1567>x1568)));

    if (t171 != 18446744073709551398LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1577 = -451639;
	int64_t x1579 = 9207LL;
	volatile int32_t x1580 = INT32_MIN;
	volatile uint32_t t172 = 45U;

    t172 = (x1577*(x1578<<(x1579>x1580)));

    if (t172 != 345378204U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1581 = 3U;
	volatile uint32_t x1582 = 12000U;
	int8_t x1584 = INT8_MAX;
	static volatile uint32_t t173 = 273045U;

    t173 = (x1581*(x1582<<(x1583>x1584)));

    if (t173 != 72000U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1605 = 0;
	int64_t x1606 = 5640LL;
	int16_t x1607 = -1;
	uint32_t x1608 = 40U;
	volatile int64_t t174 = 3191268701722224LL;

    t174 = (x1605*(x1606<<(x1607>x1608)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x1609 = -1;
	uint64_t x1610 = 251810LLU;
	uint8_t x1611 = 17U;
	uint64_t t175 = 129677800LLU;

    t175 = (x1609*(x1610<<(x1611>x1612)));

    if (t175 != 18446744073709299806LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1617 = 681U;
	volatile uint16_t x1618 = 5U;
	uint64_t x1619 = 135096711225LLU;
	static int32_t x1620 = -269;
	static uint32_t t176 = 6520310U;

    t176 = (x1617*(x1618<<(x1619>x1620)));

    if (t176 != 3405U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1621 = -1;
	static volatile int32_t t177 = 7079018;

    t177 = (x1621*(x1622<<(x1623>x1624)));

    if (t177 != -2147483647) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1629 = 5696U;
	uint64_t x1630 = 716249LLU;
	int32_t x1631 = INT32_MAX;
	volatile int16_t x1632 = INT16_MAX;
	static volatile uint64_t t178 = 308956512821971LLU;

    t178 = (x1629*(x1630<<(x1631>x1632)));

    if (t178 != 8159508608LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1641 = 613U;
	static uint16_t x1642 = 182U;
	int32_t x1643 = -107511;
	volatile uint32_t t179 = 17154U;

    t179 = (x1641*(x1642<<(x1643>x1644)));

    if (t179 != 223132U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1653 = -1;
	uint8_t x1654 = 56U;
	int32_t x1656 = -1;
	volatile int32_t t180 = 1024276;

    t180 = (x1653*(x1654<<(x1655>x1656)));

    if (t180 != -112) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1657 = INT8_MAX;
	static int16_t x1658 = INT16_MAX;
	static int32_t x1659 = INT32_MIN;
	int16_t x1660 = -1;

    t181 = (x1657*(x1658<<(x1659>x1660)));

    if (t181 != 4161409) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1673 = INT8_MIN;
	uint8_t x1676 = UINT8_MAX;
	volatile int64_t t182 = 502566086111LL;

    t182 = (x1673*(x1674<<(x1675>x1676)));

    if (t182 != -212480LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1697 = INT16_MIN;
	int8_t x1698 = 7;
	uint16_t x1699 = UINT16_MAX;
	int32_t x1700 = INT32_MAX;
	int32_t t183 = -250194622;

    t183 = (x1697*(x1698<<(x1699>x1700)));

    if (t183 != -229376) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1705 = 148753919LLU;
	int16_t x1706 = 0;
	int16_t x1707 = INT16_MAX;
	volatile uint16_t x1708 = 97U;
	static volatile uint64_t t184 = 2726786LLU;

    t184 = (x1705*(x1706<<(x1707>x1708)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1709 = UINT64_MAX;
	volatile uint64_t x1710 = UINT64_MAX;
	volatile uint64_t x1711 = 97086593045LLU;
	int32_t x1712 = 46;
	static volatile uint64_t t185 = 1627LLU;

    t185 = (x1709*(x1710<<(x1711>x1712)));

    if (t185 != 2LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1725 = -1;
	uint64_t x1726 = 0LLU;
	volatile int64_t x1727 = -1LL;
	static volatile uint64_t t186 = 1LLU;

    t186 = (x1725*(x1726<<(x1727>x1728)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1733 = 568904U;
	uint32_t x1734 = UINT32_MAX;
	int64_t x1735 = INT64_MIN;
	static int64_t x1736 = -1LL;
	static uint32_t t187 = 174U;

    t187 = (x1733*(x1734<<(x1735>x1736)));

    if (t187 != 4294398392U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1741 = 19U;
	uint8_t x1742 = 98U;
	int32_t t188 = 13;

    t188 = (x1741*(x1742<<(x1743>x1744)));

    if (t188 != 1862) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1749 = 1LL;
	int64_t x1750 = 192041077230156LL;
	volatile int16_t x1751 = -1;
	volatile int8_t x1752 = INT8_MAX;
	int64_t t189 = 565838640081847407LL;

    t189 = (x1749*(x1750<<(x1751>x1752)));

    if (t189 != 192041077230156LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x1753 = INT8_MIN;
	int8_t x1754 = 1;
	int32_t x1756 = INT32_MAX;
	int32_t t190 = 984072;

    t190 = (x1753*(x1754<<(x1755>x1756)));

    if (t190 != -128) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1771 = 9025643671968LLU;
	int64_t x1772 = 116798LL;
	int32_t t191 = -303900;

    t191 = (x1769*(x1770<<(x1771>x1772)));

    if (t191 != 524280) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1778 = 1;
	static uint64_t x1780 = 67789111491822818LLU;
	volatile int32_t t192 = -43181;

    t192 = (x1777*(x1778<<(x1779>x1780)));

    if (t192 != -65536) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1785 = 26U;
	static volatile uint16_t x1786 = 331U;
	int32_t t193 = -11619;

    t193 = (x1785*(x1786<<(x1787>x1788)));

    if (t193 != 8606) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x1793 = UINT32_MAX;
	volatile uint16_t x1794 = UINT16_MAX;
	int32_t x1795 = INT32_MAX;
	static volatile int32_t x1796 = INT32_MAX;
	uint32_t t194 = 21376289U;

    t194 = (x1793*(x1794<<(x1795>x1796)));

    if (t194 != 4294901761U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1797 = -1;
	int16_t x1799 = 3;
	int32_t t195 = -15367253;

    t195 = (x1797*(x1798<<(x1799>x1800)));

    if (t195 != -114) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1801 = 39U;
	uint64_t x1802 = UINT64_MAX;
	int16_t x1803 = 1338;
	uint64_t t196 = 1892656360707LLU;

    t196 = (x1801*(x1802<<(x1803>x1804)));

    if (t196 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1805 = INT16_MIN;
	uint32_t x1806 = UINT32_MAX;
	static uint32_t x1807 = 557356547U;
	static int16_t x1808 = INT16_MAX;
	uint32_t t197 = 476U;

    t197 = (x1805*(x1806<<(x1807>x1808)));

    if (t197 != 65536U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1813 = 3U;
	volatile uint8_t x1814 = 7U;
	uint8_t x1815 = 25U;
	uint64_t x1816 = 29790559325359LLU;

    t198 = (x1813*(x1814<<(x1815>x1816)));

    if (t198 != 21) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1818 = 110U;
	int32_t x1819 = INT32_MIN;
	volatile int32_t x1820 = -1;
	volatile uint64_t t199 = 44146152700883LLU;

    t199 = (x1817*(x1818<<(x1819>x1820)));

    if (t199 != 12138589992460453594LLU) { NG(); } else { ; }
	
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

