
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

int64_t x15 = INT64_MIN;
volatile int8_t x16 = INT8_MIN;
int32_t x33 = INT32_MAX;
uint32_t x34 = UINT32_MAX;
volatile int16_t x35 = -7128;
uint8_t x43 = 0U;
static int32_t x44 = INT32_MIN;
static volatile int32_t t2 = -21;
int32_t x46 = 0;
static int8_t x53 = INT8_MIN;
static volatile int64_t x60 = -1LL;
uint8_t x66 = 23U;
int32_t t6 = -83594193;
volatile uint64_t x86 = 18440159013LLU;
int32_t t8 = -54;
static uint16_t x109 = 150U;
volatile uint32_t x110 = UINT32_MAX;
int32_t t9 = 1;
int32_t x120 = INT32_MIN;
uint32_t x125 = 5U;
static int32_t x132 = 953143;
int8_t x145 = INT8_MIN;
volatile uint64_t x163 = 36334700972455LLU;
volatile int32_t t15 = 167;
static int32_t x181 = INT32_MAX;
uint16_t x184 = 1006U;
int32_t t16 = -7671;
static int32_t t17 = -76;
volatile uint8_t x199 = 25U;
static int8_t x206 = INT8_MAX;
int16_t x208 = INT16_MIN;
int16_t x209 = -27;
int32_t x212 = 114192;
static uint64_t x218 = UINT64_MAX;
static volatile uint16_t x241 = UINT16_MAX;
uint32_t x243 = 30038387U;
uint64_t x244 = UINT64_MAX;
int64_t x249 = INT64_MIN;
int32_t x252 = -1;
int16_t x255 = 15233;
int32_t t30 = -46924;
int32_t x266 = 20050400;
static int8_t x299 = 1;
static uint16_t x308 = 1U;
volatile int32_t t34 = 121765;
int32_t x315 = INT32_MAX;
volatile int32_t t35 = -250631;
static int64_t x327 = 124LL;
static int16_t x350 = 4;
int32_t t38 = 711851279;
uint32_t x354 = 21365525U;
int32_t x356 = 166061177;
volatile int32_t t39 = -2713611;
int16_t x365 = INT16_MIN;
uint16_t x370 = UINT16_MAX;
int64_t x372 = INT64_MIN;
static uint32_t x382 = UINT32_MAX;
static volatile int32_t t44 = 16;
int8_t x399 = INT8_MIN;
int32_t x400 = -31;
int32_t t46 = 0;
int32_t t47 = 247914752;
uint64_t x410 = 34908169154639219LLU;
int32_t x420 = -1;
volatile int32_t t53 = -328;
volatile int32_t x473 = INT32_MIN;
uint32_t x474 = 0U;
uint64_t x475 = UINT64_MAX;
volatile int32_t x476 = INT32_MAX;
uint64_t x481 = 290897500LLU;
int8_t x488 = INT8_MAX;
uint64_t x526 = 15491486134338075LLU;
static volatile int32_t x528 = -4;
uint16_t x554 = UINT16_MAX;
volatile int8_t x575 = 1;
uint64_t x576 = UINT64_MAX;
static volatile int16_t x596 = 2095;
int32_t t67 = 8316614;
static int32_t x601 = -6573315;
int16_t x603 = 789;
static int8_t x608 = INT8_MAX;
int32_t x616 = -1;
static volatile int32_t t70 = 789158;
int8_t x617 = -17;
int32_t t71 = -82525;
volatile uint8_t x623 = 1U;
int32_t t73 = -94;
volatile int32_t t74 = 19;
int16_t x641 = -1269;
static uint16_t x644 = 7U;
int32_t x656 = INT32_MAX;
int8_t x667 = INT8_MAX;
int16_t x671 = -1;
uint8_t x675 = 25U;
int16_t x677 = INT16_MAX;
uint32_t x678 = 44U;
static int32_t x705 = 113710076;
volatile uint16_t x708 = 3233U;
static uint8_t x709 = 94U;
static volatile int64_t x739 = -1LL;
uint32_t x742 = 180215519U;
int16_t x743 = INT16_MIN;
int32_t x757 = INT32_MIN;
volatile uint32_t x758 = 2U;
volatile uint8_t x774 = 23U;
int8_t x776 = INT8_MIN;
volatile int32_t t97 = 25827370;
uint32_t x800 = 1278U;
static volatile int32_t t100 = -1038446;
int64_t x813 = 3738331393524LL;
int8_t x816 = INT8_MIN;
static int32_t t102 = 190910263;
int32_t x821 = INT32_MIN;
static volatile int64_t x824 = 3516115LL;
static uint8_t x831 = UINT8_MAX;
static int16_t x833 = INT16_MIN;
static int32_t t106 = -58;
uint8_t x851 = 31U;
static int64_t x852 = INT64_MIN;
int32_t t107 = -729380269;
int64_t x853 = INT64_MIN;
int16_t x860 = 14;
volatile int32_t t109 = 9330420;
static int32_t t110 = -108658084;
volatile uint32_t x884 = 3U;
int8_t x897 = 1;
uint8_t x903 = UINT8_MAX;
uint64_t x918 = 862351507641LLU;
int32_t x941 = INT32_MIN;
int16_t x945 = INT16_MIN;
uint64_t x947 = 5819114443293433LLU;
static volatile uint32_t x952 = UINT32_MAX;
int8_t x964 = INT8_MAX;
volatile uint8_t x969 = 47U;
uint32_t x971 = UINT32_MAX;
static int64_t x975 = -1LL;
int64_t x990 = 2220353707164789LL;
volatile int64_t x991 = 443180804804547LL;
uint16_t x992 = 14U;
static int8_t x997 = INT8_MIN;
volatile uint16_t x1000 = 434U;
static int8_t x1004 = -11;
volatile int32_t t131 = -1451727;
static volatile int64_t x1006 = 3533719LL;
static int32_t x1007 = INT32_MAX;
static int32_t x1027 = INT32_MAX;
static volatile uint8_t x1034 = 19U;
uint16_t x1040 = 5074U;
volatile int32_t t137 = 2033967;
int32_t t138 = -5601074;
int64_t x1060 = INT64_MIN;
int32_t t139 = -39017;
static volatile int32_t t140 = 1;
volatile int32_t x1073 = INT32_MIN;
int64_t x1076 = 1LL;
uint64_t x1077 = 883796LLU;
uint16_t x1080 = 166U;
int64_t x1104 = INT64_MAX;
volatile int8_t x1107 = INT8_MIN;
int64_t x1108 = 28769315156LL;
volatile int8_t x1122 = 58;
static int16_t x1125 = INT16_MIN;
uint8_t x1149 = 5U;
int32_t x1151 = INT32_MIN;
volatile uint32_t x1152 = 0U;
static uint64_t x1165 = 67606594539359LLU;
volatile int32_t x1167 = INT32_MIN;
uint8_t x1177 = UINT8_MAX;
uint8_t x1180 = UINT8_MAX;
int16_t x1181 = -1;
volatile uint16_t x1206 = 9180U;
static uint16_t x1240 = 9U;
static uint16_t x1250 = 61U;
static volatile int32_t t161 = -1;
uint16_t x1261 = 269U;
static int32_t x1263 = 14;
static int64_t x1273 = -1LL;
int64_t x1294 = 1LL;
int32_t x1295 = INT32_MAX;
static int16_t x1305 = -13348;
int32_t x1308 = -1;
uint64_t x1330 = 180912035LLU;
int16_t x1331 = INT16_MIN;
volatile int64_t x1335 = INT64_MIN;
int32_t t171 = 70;
uint64_t x1345 = UINT64_MAX;
volatile int32_t t173 = 2577025;
uint16_t x1358 = UINT16_MAX;
int64_t x1360 = INT64_MAX;
volatile int32_t t178 = -105564944;
int16_t x1403 = -5;
int8_t x1423 = 3;
int32_t t182 = 7916310;
static int16_t x1427 = INT16_MIN;
volatile int32_t t184 = -116588317;
volatile uint8_t x1449 = 4U;
int32_t t187 = -1;
int64_t x1457 = 190163386LL;
int8_t x1460 = INT8_MIN;
int32_t x1463 = INT32_MIN;
int32_t t189 = 50583;
int32_t x1471 = -1;
int16_t x1498 = 4;
volatile int32_t x1499 = INT32_MIN;
static int16_t x1508 = INT16_MAX;
static volatile int32_t t194 = -191201;
uint64_t x1514 = 61768075479LLU;
uint16_t x1526 = 213U;
int32_t t196 = 14;
volatile int8_t x1533 = -26;
uint16_t x1539 = 20090U;


void f0(void) {
    	int32_t x13 = INT32_MAX;
	static uint16_t x14 = 7360U;
	volatile int32_t t0 = 21;

    t0 = (x13!=(x14<<(x15!=x16)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x36 = INT8_MIN;
	volatile int32_t t1 = -164233;

    t1 = (x33!=(x34<<(x35!=x36)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x41 = 0;
	uint16_t x42 = 239U;

    t2 = (x41!=(x42<<(x43!=x44)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x45 = 3;
	static int64_t x47 = INT64_MAX;
	uint8_t x48 = 13U;
	int32_t t3 = 468318;

    t3 = (x45!=(x46<<(x47!=x48)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x54 = 0;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = -5519;
	volatile int32_t t4 = 2;

    t4 = (x53!=(x54<<(x55!=x56)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x57 = INT16_MAX;
	uint64_t x58 = 22643548131LLU;
	volatile int64_t x59 = INT64_MIN;
	int32_t t5 = 62;

    t5 = (x57!=(x58<<(x59!=x60)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x65 = INT16_MIN;
	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MAX;

    t6 = (x65!=(x66<<(x67!=x68)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x85 = INT16_MIN;
	int32_t x87 = -1;
	volatile int64_t x88 = INT64_MIN;
	static int32_t t7 = 72899581;

    t7 = (x85!=(x86<<(x87!=x88)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x89 = INT16_MIN;
	static int16_t x90 = 0;
	int32_t x91 = -254705;
	volatile int32_t x92 = INT32_MIN;

    t8 = (x89!=(x90<<(x91!=x92)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MIN;

    t9 = (x109!=(x110<<(x111!=x112)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x117 = 153440LL;
	static volatile uint16_t x118 = 55U;
	uint16_t x119 = 688U;
	int32_t t10 = 2;

    t10 = (x117!=(x118<<(x119!=x120)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x126 = 419779650788702LL;
	volatile int32_t x127 = INT32_MIN;
	uint32_t x128 = 0U;
	static int32_t t11 = -17567803;

    t11 = (x125!=(x126<<(x127!=x128)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x129 = -1;
	static uint16_t x130 = UINT16_MAX;
	static volatile uint8_t x131 = 54U;
	int32_t t12 = -23003;

    t12 = (x129!=(x130<<(x131!=x132)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x133 = INT32_MAX;
	int16_t x134 = 481;
	int32_t x135 = -1;
	int64_t x136 = 377359539144244687LL;
	volatile int32_t t13 = 13102525;

    t13 = (x133!=(x134<<(x135!=x136)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x146 = 4U;
	uint64_t x147 = 202526992405LLU;
	int32_t x148 = -3;
	volatile int32_t t14 = 183744653;

    t14 = (x145!=(x146<<(x147!=x148)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x161 = INT32_MIN;
	uint16_t x162 = 0U;
	volatile int16_t x164 = 21;

    t15 = (x161!=(x162<<(x163!=x164)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x182 = 2U;
	int16_t x183 = -1;

    t16 = (x181!=(x182<<(x183!=x184)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x189 = 6642182U;
	uint32_t x190 = 15256564U;
	int32_t x191 = INT32_MIN;
	static int16_t x192 = -1;

    t17 = (x189!=(x190<<(x191!=x192)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MAX;
	int64_t x200 = INT64_MIN;
	static volatile int32_t t18 = -26;

    t18 = (x197!=(x198<<(x199!=x200)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x201 = INT32_MIN;
	uint16_t x202 = 1U;
	int64_t x203 = INT64_MAX;
	uint64_t x204 = 1619114169LLU;
	int32_t t19 = 260;

    t19 = (x201!=(x202<<(x203!=x204)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x205 = 3LLU;
	uint32_t x207 = 4898685U;
	int32_t t20 = -1282;

    t20 = (x205!=(x206<<(x207!=x208)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x210 = 8U;
	uint64_t x211 = 14731234LLU;
	volatile int32_t t21 = 243779247;

    t21 = (x209!=(x210<<(x211!=x212)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x217 = 132570LL;
	static uint32_t x219 = 6U;
	uint8_t x220 = 41U;
	int32_t t22 = 400;

    t22 = (x217!=(x218<<(x219!=x220)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x221 = UINT16_MAX;
	int16_t x222 = 0;
	uint64_t x223 = 2832LLU;
	int8_t x224 = 57;
	volatile int32_t t23 = -4788037;

    t23 = (x221!=(x222<<(x223!=x224)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int32_t x225 = INT32_MIN;
	static uint32_t x226 = 132967209U;
	int8_t x227 = -4;
	uint32_t x228 = 1U;
	volatile int32_t t24 = -53145;

    t24 = (x225!=(x226<<(x227!=x228)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x229 = 16;
	static int16_t x230 = INT16_MAX;
	static volatile int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t25 = -10;

    t25 = (x229!=(x230<<(x231!=x232)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 19389778240504073LLU;
	volatile int16_t x239 = 3883;
	volatile uint32_t x240 = 379U;
	volatile int32_t t26 = 144387;

    t26 = (x237!=(x238<<(x239!=x240)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x242 = 15914LLU;
	static volatile int32_t t27 = -282692089;

    t27 = (x241!=(x242<<(x243!=x244)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x250 = 5U;
	int64_t x251 = 6100831128808784LL;
	static int32_t t28 = 2;

    t28 = (x249!=(x250<<(x251!=x252)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x253 = -466;
	uint32_t x254 = UINT32_MAX;
	int64_t x256 = 841427457LL;
	int32_t t29 = 974430;

    t29 = (x253!=(x254<<(x255!=x256)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = INT32_MAX;
	static int16_t x260 = -1089;

    t30 = (x257!=(x258<<(x259!=x260)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x265 = -26;
	int32_t x267 = INT32_MIN;
	volatile int8_t x268 = INT8_MAX;
	volatile int32_t t31 = 931152;

    t31 = (x265!=(x266<<(x267!=x268)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x293 = INT64_MAX;
	uint8_t x294 = 75U;
	uint32_t x295 = 218091476U;
	uint8_t x296 = UINT8_MAX;
	int32_t t32 = -45938;

    t32 = (x293!=(x294<<(x295!=x296)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x297 = 5U;
	volatile uint8_t x298 = UINT8_MAX;
	int32_t x300 = INT32_MIN;
	int32_t t33 = 11;

    t33 = (x297!=(x298<<(x299!=x300)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x305 = 55;
	static uint16_t x306 = UINT16_MAX;
	int64_t x307 = INT64_MIN;

    t34 = (x305!=(x306<<(x307!=x308)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x313 = 7;
	static uint16_t x314 = UINT16_MAX;
	static volatile int8_t x316 = INT8_MAX;

    t35 = (x313!=(x314<<(x315!=x316)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint16_t x325 = 168U;
	uint8_t x326 = 1U;
	int8_t x328 = INT8_MIN;
	volatile int32_t t36 = -1;

    t36 = (x325!=(x326<<(x327!=x328)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x329 = 9U;
	uint8_t x330 = 5U;
	uint8_t x331 = 31U;
	int32_t x332 = INT32_MAX;
	int32_t t37 = 357;

    t37 = (x329!=(x330<<(x331!=x332)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x349 = 323U;
	volatile int64_t x351 = 66552400034LL;
	int16_t x352 = INT16_MIN;

    t38 = (x349!=(x350<<(x351!=x352)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x353 = 4U;
	static volatile uint64_t x355 = UINT64_MAX;

    t39 = (x353!=(x354<<(x355!=x356)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x361 = INT8_MIN;
	volatile uint8_t x362 = 0U;
	uint32_t x363 = UINT32_MAX;
	static int16_t x364 = INT16_MIN;
	static volatile int32_t t40 = -88163530;

    t40 = (x361!=(x362<<(x363!=x364)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x366 = 28;
	int8_t x367 = -30;
	static int16_t x368 = INT16_MAX;
	static volatile int32_t t41 = 1664;

    t41 = (x365!=(x366<<(x367!=x368)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x369 = -1;
	volatile int32_t x371 = -241977;
	int32_t t42 = -2057026;

    t42 = (x369!=(x370<<(x371!=x372)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x381 = INT64_MAX;
	uint32_t x383 = 1928765710U;
	static uint32_t x384 = 992179U;
	int32_t t43 = -5;

    t43 = (x381!=(x382<<(x383!=x384)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x385 = 82;
	uint8_t x386 = UINT8_MAX;
	static int32_t x387 = INT32_MIN;
	int16_t x388 = -2721;

    t44 = (x385!=(x386<<(x387!=x388)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x389 = 7636791LLU;
	uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = -389419607935LL;
	int32_t x392 = INT32_MIN;
	int32_t t45 = 4;

    t45 = (x389!=(x390<<(x391!=x392)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x397 = INT64_MIN;
	uint8_t x398 = UINT8_MAX;

    t46 = (x397!=(x398<<(x399!=x400)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x405 = 3U;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = 4495;
	uint32_t x408 = 5780547U;

    t47 = (x405!=(x406<<(x407!=x408)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x409 = 8062331U;
	int64_t x411 = INT64_MIN;
	static int16_t x412 = -103;
	volatile int32_t t48 = -5665543;

    t48 = (x409!=(x410<<(x411!=x412)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x413 = INT8_MIN;
	int32_t x414 = 70;
	int16_t x415 = -214;
	static int16_t x416 = INT16_MIN;
	volatile int32_t t49 = -24774;

    t49 = (x413!=(x414<<(x415!=x416)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x417 = INT16_MAX;
	uint64_t x418 = 1437130LLU;
	uint16_t x419 = 18252U;
	volatile int32_t t50 = -10969012;

    t50 = (x417!=(x418<<(x419!=x420)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x437 = 19U;
	volatile uint32_t x438 = 59U;
	uint64_t x439 = 189221LLU;
	static uint8_t x440 = UINT8_MAX;
	volatile int32_t t51 = -4737291;

    t51 = (x437!=(x438<<(x439!=x440)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	uint8_t x454 = 24U;
	uint64_t x455 = 250222649508763054LLU;
	int32_t x456 = 1276;
	volatile int32_t t52 = -1717;

    t52 = (x453!=(x454<<(x455!=x456)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x461 = -1;
	static int64_t x462 = INT64_MAX;
	int32_t x463 = INT32_MIN;
	volatile int32_t x464 = INT32_MIN;

    t53 = (x461!=(x462<<(x463!=x464)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t t54 = -1;

    t54 = (x473!=(x474<<(x475!=x476)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x482 = 2621;
	static int16_t x483 = 86;
	static volatile int32_t x484 = INT32_MAX;
	int32_t t55 = -912799;

    t55 = (x481!=(x482<<(x483!=x484)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x485 = INT16_MAX;
	int8_t x486 = INT8_MAX;
	uint32_t x487 = 14U;
	static int32_t t56 = 88020;

    t56 = (x485!=(x486<<(x487!=x488)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x489 = 0U;
	static uint64_t x490 = 37000185955105LLU;
	static volatile int16_t x491 = INT16_MIN;
	int32_t x492 = 107577;
	volatile int32_t t57 = -15;

    t57 = (x489!=(x490<<(x491!=x492)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x501 = INT16_MIN;
	volatile uint64_t x502 = UINT64_MAX;
	uint64_t x503 = 76LLU;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t58 = 75;

    t58 = (x501!=(x502<<(x503!=x504)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x525 = INT32_MAX;
	uint32_t x527 = UINT32_MAX;
	static volatile int32_t t59 = 715373;

    t59 = (x525!=(x526<<(x527!=x528)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x533 = -1;
	volatile uint64_t x534 = 3106066347126089319LLU;
	uint16_t x535 = 15U;
	static int32_t x536 = 226;
	volatile int32_t t60 = -68;

    t60 = (x533!=(x534<<(x535!=x536)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x553 = -180057086698779362LL;
	int64_t x555 = -1LL;
	int32_t x556 = INT32_MAX;
	volatile int32_t t61 = 1396488;

    t61 = (x553!=(x554<<(x555!=x556)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x561 = 10109173380192LL;
	uint16_t x562 = 2U;
	uint32_t x563 = 13U;
	static int8_t x564 = INT8_MIN;
	int32_t t62 = 1565;

    t62 = (x561!=(x562<<(x563!=x564)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x573 = UINT8_MAX;
	int8_t x574 = 9;
	volatile int32_t t63 = 31069;

    t63 = (x573!=(x574<<(x575!=x576)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x577 = INT64_MAX;
	uint32_t x578 = 33U;
	int64_t x579 = -1LL;
	int32_t x580 = INT32_MAX;
	int32_t t64 = 1;

    t64 = (x577!=(x578<<(x579!=x580)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x585 = -1;
	volatile uint64_t x586 = 10593075513490LLU;
	int16_t x587 = INT16_MAX;
	volatile int16_t x588 = INT16_MIN;
	volatile int32_t t65 = -4722;

    t65 = (x585!=(x586<<(x587!=x588)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x593 = UINT64_MAX;
	uint8_t x594 = 121U;
	int32_t x595 = INT32_MIN;
	int32_t t66 = -5714;

    t66 = (x593!=(x594<<(x595!=x596)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x597 = INT32_MIN;
	static uint32_t x598 = 1071729810U;
	volatile int8_t x599 = -1;
	static int32_t x600 = INT32_MAX;

    t67 = (x597!=(x598<<(x599!=x600)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x602 = 184U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t68 = -33832538;

    t68 = (x601!=(x602<<(x603!=x604)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x605 = -1610;
	int32_t x606 = 1;
	int32_t x607 = -1342;
	int32_t t69 = -1891524;

    t69 = (x605!=(x606<<(x607!=x608)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x613 = INT8_MIN;
	static uint32_t x614 = UINT32_MAX;
	uint8_t x615 = 1U;

    t70 = (x613!=(x614<<(x615!=x616)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x618 = 21U;
	uint32_t x619 = 9U;
	int32_t x620 = INT32_MIN;

    t71 = (x617!=(x618<<(x619!=x620)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x621 = -1;
	uint8_t x622 = 93U;
	int16_t x624 = 8;
	static volatile int32_t t72 = -148233319;

    t72 = (x621!=(x622<<(x623!=x624)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x625 = -1;
	int8_t x626 = INT8_MAX;
	int16_t x627 = -1740;
	static uint8_t x628 = 16U;

    t73 = (x625!=(x626<<(x627!=x628)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x633 = 961291298U;
	uint32_t x634 = 28398452U;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = 143647LL;

    t74 = (x633!=(x634<<(x635!=x636)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x642 = 6LLU;
	int32_t x643 = -30;
	volatile int32_t t75 = -15671998;

    t75 = (x641!=(x642<<(x643!=x644)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x653 = 5955LLU;
	volatile uint64_t x654 = 23LLU;
	int16_t x655 = -5;
	volatile int32_t t76 = -26860;

    t76 = (x653!=(x654<<(x655!=x656)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x661 = 972835679509986LLU;
	volatile int16_t x662 = 11587;
	int64_t x663 = INT64_MIN;
	int16_t x664 = INT16_MAX;
	volatile int32_t t77 = -7667;

    t77 = (x661!=(x662<<(x663!=x664)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x665 = INT64_MIN;
	int8_t x666 = 4;
	int16_t x668 = INT16_MIN;
	volatile int32_t t78 = 1;

    t78 = (x665!=(x666<<(x667!=x668)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x669 = -3;
	uint32_t x670 = UINT32_MAX;
	int64_t x672 = INT64_MIN;
	int32_t t79 = -3656110;

    t79 = (x669!=(x670<<(x671!=x672)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x673 = -456;
	int8_t x674 = INT8_MAX;
	volatile int8_t x676 = INT8_MIN;
	int32_t t80 = -1262705;

    t80 = (x673!=(x674<<(x675!=x676)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x679 = 40;
	int8_t x680 = INT8_MIN;
	static int32_t t81 = -5547383;

    t81 = (x677!=(x678<<(x679!=x680)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x685 = 1;
	int8_t x686 = INT8_MAX;
	volatile int32_t x687 = INT32_MIN;
	uint64_t x688 = UINT64_MAX;
	int32_t t82 = 103;

    t82 = (x685!=(x686<<(x687!=x688)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x689 = -1;
	uint8_t x690 = UINT8_MAX;
	int64_t x691 = INT64_MAX;
	int64_t x692 = INT64_MAX;
	volatile int32_t t83 = 4;

    t83 = (x689!=(x690<<(x691!=x692)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x697 = INT64_MIN;
	uint8_t x698 = 7U;
	static int64_t x699 = -420468848443830LL;
	int32_t x700 = INT32_MAX;
	int32_t t84 = 113;

    t84 = (x697!=(x698<<(x699!=x700)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x701 = INT16_MIN;
	volatile int32_t x702 = 18347;
	int8_t x703 = INT8_MIN;
	int32_t x704 = 59584;
	int32_t t85 = -14538168;

    t85 = (x701!=(x702<<(x703!=x704)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x706 = 971;
	int16_t x707 = INT16_MIN;
	volatile int32_t t86 = -119624852;

    t86 = (x705!=(x706<<(x707!=x708)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x710 = 127U;
	static volatile int32_t x711 = 82846;
	static volatile int16_t x712 = -1;
	int32_t t87 = -396723546;

    t87 = (x709!=(x710<<(x711!=x712)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x713 = INT8_MAX;
	uint32_t x714 = 4U;
	int64_t x715 = 15924LL;
	int8_t x716 = -1;
	volatile int32_t t88 = -124596;

    t88 = (x713!=(x714<<(x715!=x716)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x721 = -148;
	int8_t x722 = INT8_MAX;
	volatile uint32_t x723 = 84079199U;
	int8_t x724 = INT8_MIN;
	volatile int32_t t89 = 145;

    t89 = (x721!=(x722<<(x723!=x724)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x729 = INT16_MIN;
	static int16_t x730 = INT16_MAX;
	int32_t x731 = INT32_MIN;
	uint16_t x732 = 114U;
	static int32_t t90 = 52;

    t90 = (x729!=(x730<<(x731!=x732)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x733 = 162U;
	static uint64_t x734 = 6214900516LLU;
	int8_t x735 = INT8_MAX;
	uint64_t x736 = 32690249052LLU;
	static volatile int32_t t91 = 95718156;

    t91 = (x733!=(x734<<(x735!=x736)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	int16_t x738 = 0;
	uint16_t x740 = 269U;
	int32_t t92 = 12283;

    t92 = (x737!=(x738<<(x739!=x740)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x741 = 1LL;
	volatile int64_t x744 = -6622406453120LL;
	volatile int32_t t93 = -34;

    t93 = (x741!=(x742<<(x743!=x744)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x759 = INT16_MIN;
	volatile uint8_t x760 = 6U;
	int32_t t94 = -1090770;

    t94 = (x757!=(x758<<(x759!=x760)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x761 = INT32_MIN;
	uint8_t x762 = 1U;
	static int32_t x763 = 2476729;
	volatile int16_t x764 = INT16_MIN;
	int32_t t95 = -94235;

    t95 = (x761!=(x762<<(x763!=x764)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x765 = UINT32_MAX;
	uint64_t x766 = UINT64_MAX;
	uint16_t x767 = UINT16_MAX;
	volatile int32_t x768 = INT32_MIN;
	volatile int32_t t96 = 111;

    t96 = (x765!=(x766<<(x767!=x768)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x773 = 45400885LLU;
	uint16_t x775 = UINT16_MAX;

    t97 = (x773!=(x774<<(x775!=x776)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x785 = 18692U;
	uint16_t x786 = UINT16_MAX;
	int16_t x787 = INT16_MIN;
	static volatile uint32_t x788 = UINT32_MAX;
	int32_t t98 = -269890827;

    t98 = (x785!=(x786<<(x787!=x788)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x789 = 1U;
	uint8_t x790 = 6U;
	int16_t x791 = INT16_MAX;
	static int64_t x792 = INT64_MIN;
	volatile int32_t t99 = -961;

    t99 = (x789!=(x790<<(x791!=x792)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x797 = -1;
	int8_t x798 = 51;
	int32_t x799 = INT32_MIN;

    t100 = (x797!=(x798<<(x799!=x800)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x805 = 894U;
	uint8_t x806 = 113U;
	int64_t x807 = -64435750LL;
	int16_t x808 = -1;
	int32_t t101 = -54706693;

    t101 = (x805!=(x806<<(x807!=x808)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x814 = UINT8_MAX;
	int32_t x815 = -30;

    t102 = (x813!=(x814<<(x815!=x816)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x822 = UINT32_MAX;
	volatile uint64_t x823 = 421116428777686513LLU;
	int32_t t103 = 130518210;

    t103 = (x821!=(x822<<(x823!=x824)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x825 = 6U;
	uint8_t x826 = UINT8_MAX;
	volatile int32_t x827 = INT32_MIN;
	static int16_t x828 = INT16_MAX;
	static volatile int32_t t104 = 1404254;

    t104 = (x825!=(x826<<(x827!=x828)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x829 = INT16_MAX;
	int16_t x830 = 1791;
	uint64_t x832 = 6799482944LLU;
	volatile int32_t t105 = 1591207;

    t105 = (x829!=(x830<<(x831!=x832)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x834 = 0U;
	static uint32_t x835 = UINT32_MAX;
	uint16_t x836 = 649U;

    t106 = (x833!=(x834<<(x835!=x836)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x849 = INT32_MIN;
	uint16_t x850 = 0U;

    t107 = (x849!=(x850<<(x851!=x852)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint64_t x854 = 419495825397973LLU;
	int64_t x855 = INT64_MAX;
	static int16_t x856 = INT16_MIN;
	int32_t t108 = 3;

    t108 = (x853!=(x854<<(x855!=x856)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x857 = -1LL;
	static uint16_t x858 = 1U;
	int16_t x859 = INT16_MAX;

    t109 = (x857!=(x858<<(x859!=x860)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x861 = UINT16_MAX;
	uint32_t x862 = UINT32_MAX;
	volatile int64_t x863 = INT64_MAX;
	int32_t x864 = INT32_MIN;

    t110 = (x861!=(x862<<(x863!=x864)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x881 = 92182366986LL;
	uint32_t x882 = UINT32_MAX;
	volatile int8_t x883 = 2;
	int32_t t111 = -1;

    t111 = (x881!=(x882<<(x883!=x884)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x885 = 45928184U;
	volatile uint32_t x886 = 157U;
	int32_t x887 = 15072852;
	int32_t x888 = INT32_MIN;
	int32_t t112 = -441030;

    t112 = (x885!=(x886<<(x887!=x888)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x889 = 28U;
	uint16_t x890 = 23439U;
	int16_t x891 = -6727;
	uint32_t x892 = 154090U;
	volatile int32_t t113 = -194283;

    t113 = (x889!=(x890<<(x891!=x892)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x893 = 38U;
	volatile uint64_t x894 = UINT64_MAX;
	static int8_t x895 = INT8_MIN;
	uint32_t x896 = 914375U;
	volatile int32_t t114 = -12016;

    t114 = (x893!=(x894<<(x895!=x896)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x898 = UINT64_MAX;
	int64_t x899 = INT64_MAX;
	int8_t x900 = -5;
	volatile int32_t t115 = -45458;

    t115 = (x897!=(x898<<(x899!=x900)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x901 = INT32_MAX;
	uint8_t x902 = UINT8_MAX;
	int16_t x904 = INT16_MAX;
	int32_t t116 = 203728;

    t116 = (x901!=(x902<<(x903!=x904)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x905 = -1;
	uint8_t x906 = 5U;
	int8_t x907 = -1;
	int32_t x908 = INT32_MIN;
	int32_t t117 = -64558666;

    t117 = (x905!=(x906<<(x907!=x908)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x917 = 2U;
	uint16_t x919 = 48U;
	volatile uint16_t x920 = 16U;
	volatile int32_t t118 = -27740497;

    t118 = (x917!=(x918<<(x919!=x920)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x925 = INT8_MAX;
	uint32_t x926 = 2391433U;
	int16_t x927 = -1;
	static volatile uint64_t x928 = 1573697606186616LLU;
	int32_t t119 = 30;

    t119 = (x925!=(x926<<(x927!=x928)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x929 = INT16_MIN;
	volatile uint32_t x930 = 353U;
	volatile int32_t x931 = INT32_MIN;
	int8_t x932 = INT8_MIN;
	static volatile int32_t t120 = 0;

    t120 = (x929!=(x930<<(x931!=x932)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x937 = 13192LLU;
	uint16_t x938 = UINT16_MAX;
	int16_t x939 = 5181;
	int64_t x940 = 78585076223143396LL;
	int32_t t121 = -1;

    t121 = (x937!=(x938<<(x939!=x940)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x942 = 1U;
	static uint64_t x943 = 29732592477643LLU;
	int32_t x944 = 459046668;
	int32_t t122 = 0;

    t122 = (x941!=(x942<<(x943!=x944)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x946 = 380728935292894929LL;
	int64_t x948 = -3929672812332LL;
	static int32_t t123 = -956649;

    t123 = (x945!=(x946<<(x947!=x948)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x949 = UINT16_MAX;
	uint16_t x950 = 192U;
	uint64_t x951 = UINT64_MAX;
	volatile int32_t t124 = 5134341;

    t124 = (x949!=(x950<<(x951!=x952)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x957 = INT8_MAX;
	uint64_t x958 = 51720087600048LLU;
	uint64_t x959 = 1024613969693117LLU;
	static int8_t x960 = -1;
	int32_t t125 = -152;

    t125 = (x957!=(x958<<(x959!=x960)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x961 = 4;
	uint64_t x962 = 27448LLU;
	volatile int64_t x963 = -152346998402LL;
	int32_t t126 = 2;

    t126 = (x961!=(x962<<(x963!=x964)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x970 = 7272LL;
	static uint32_t x972 = 2414U;
	volatile int32_t t127 = -173788;

    t127 = (x969!=(x970<<(x971!=x972)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x973 = INT8_MAX;
	static int64_t x974 = 9453078040LL;
	volatile int16_t x976 = INT16_MAX;
	static int32_t t128 = 1671037;

    t128 = (x973!=(x974<<(x975!=x976)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x989 = UINT16_MAX;
	int32_t t129 = 12479111;

    t129 = (x989!=(x990<<(x991!=x992)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x998 = 7U;
	volatile int16_t x999 = INT16_MAX;
	int32_t t130 = -258831;

    t130 = (x997!=(x998<<(x999!=x1000)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x1001 = -1;
	static int8_t x1002 = 21;
	uint32_t x1003 = 5666008U;

    t131 = (x1001!=(x1002<<(x1003!=x1004)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1005 = INT16_MIN;
	uint64_t x1008 = 580765LLU;
	static int32_t t132 = 4823502;

    t132 = (x1005!=(x1006<<(x1007!=x1008)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x1009 = 21;
	static int32_t x1010 = 0;
	static uint16_t x1011 = 4U;
	uint32_t x1012 = 1U;
	static int32_t t133 = 5561010;

    t133 = (x1009!=(x1010<<(x1011!=x1012)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1025 = INT32_MAX;
	int32_t x1026 = 2572964;
	int64_t x1028 = -1LL;
	volatile int32_t t134 = -26;

    t134 = (x1025!=(x1026<<(x1027!=x1028)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x1029 = 1;
	uint16_t x1030 = 40U;
	int32_t x1031 = INT32_MIN;
	static volatile int16_t x1032 = -1001;
	static int32_t t135 = 3758;

    t135 = (x1029!=(x1030<<(x1031!=x1032)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x1033 = 1848U;
	static int16_t x1035 = -1;
	int32_t x1036 = -1204594;
	volatile int32_t t136 = 129142306;

    t136 = (x1033!=(x1034<<(x1035!=x1036)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1037 = INT32_MIN;
	static int16_t x1038 = 119;
	uint64_t x1039 = 112406132409LLU;

    t137 = (x1037!=(x1038<<(x1039!=x1040)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1049 = -1LL;
	uint16_t x1050 = UINT16_MAX;
	static int16_t x1051 = -6;
	uint32_t x1052 = 3494U;

    t138 = (x1049!=(x1050<<(x1051!=x1052)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x1057 = 1759;
	static uint8_t x1058 = 92U;
	uint32_t x1059 = 1156374932U;

    t139 = (x1057!=(x1058<<(x1059!=x1060)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1061 = INT8_MAX;
	int16_t x1062 = INT16_MAX;
	volatile int8_t x1063 = INT8_MIN;
	volatile uint16_t x1064 = 2063U;

    t140 = (x1061!=(x1062<<(x1063!=x1064)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x1065 = UINT8_MAX;
	static int8_t x1066 = 1;
	int16_t x1067 = 47;
	uint64_t x1068 = UINT64_MAX;
	volatile int32_t t141 = 3438;

    t141 = (x1065!=(x1066<<(x1067!=x1068)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int8_t x1069 = INT8_MIN;
	static uint32_t x1070 = 3611U;
	static int16_t x1071 = INT16_MIN;
	static volatile int16_t x1072 = -1;
	volatile int32_t t142 = -1399781;

    t142 = (x1069!=(x1070<<(x1071!=x1072)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1074 = UINT16_MAX;
	int32_t x1075 = -225421;
	volatile int32_t t143 = -922;

    t143 = (x1073!=(x1074<<(x1075!=x1076)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x1078 = 89U;
	uint16_t x1079 = 16235U;
	volatile int32_t t144 = -1468011;

    t144 = (x1077!=(x1078<<(x1079!=x1080)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1093 = -1515536654LL;
	uint32_t x1094 = UINT32_MAX;
	int64_t x1095 = -1LL;
	int8_t x1096 = 1;
	int32_t t145 = -138;

    t145 = (x1093!=(x1094<<(x1095!=x1096)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x1097 = UINT8_MAX;
	static volatile int32_t x1098 = 101;
	int16_t x1099 = INT16_MAX;
	int32_t x1100 = 1;
	static volatile int32_t t146 = 35841;

    t146 = (x1097!=(x1098<<(x1099!=x1100)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1101 = INT8_MAX;
	static uint32_t x1102 = 30U;
	int16_t x1103 = 610;
	volatile int32_t t147 = -18;

    t147 = (x1101!=(x1102<<(x1103!=x1104)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x1105 = -1LL;
	uint32_t x1106 = UINT32_MAX;
	int32_t t148 = -540043387;

    t148 = (x1105!=(x1106<<(x1107!=x1108)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1121 = INT64_MIN;
	uint8_t x1123 = 26U;
	int32_t x1124 = INT32_MAX;
	static int32_t t149 = -1158;

    t149 = (x1121!=(x1122<<(x1123!=x1124)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1126 = INT8_MAX;
	uint16_t x1127 = UINT16_MAX;
	uint64_t x1128 = 7624057775923LLU;
	int32_t t150 = -6;

    t150 = (x1125!=(x1126<<(x1127!=x1128)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1150 = 0U;
	volatile int32_t t151 = 32604;

    t151 = (x1149!=(x1150<<(x1151!=x1152)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x1166 = INT8_MAX;
	static int64_t x1168 = INT64_MIN;
	volatile int32_t t152 = 1496;

    t152 = (x1165!=(x1166<<(x1167!=x1168)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x1178 = UINT32_MAX;
	int16_t x1179 = INT16_MIN;
	int32_t t153 = -118;

    t153 = (x1177!=(x1178<<(x1179!=x1180)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1182 = 21U;
	int8_t x1183 = INT8_MIN;
	int32_t x1184 = INT32_MIN;
	int32_t t154 = -547;

    t154 = (x1181!=(x1182<<(x1183!=x1184)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x1197 = INT16_MIN;
	uint32_t x1198 = 10246U;
	int8_t x1199 = -1;
	int8_t x1200 = INT8_MIN;
	int32_t t155 = -247286484;

    t155 = (x1197!=(x1198<<(x1199!=x1200)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1205 = INT32_MIN;
	static int16_t x1207 = -1;
	uint64_t x1208 = UINT64_MAX;
	static volatile int32_t t156 = 7;

    t156 = (x1205!=(x1206<<(x1207!=x1208)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1209 = INT64_MIN;
	volatile uint32_t x1210 = UINT32_MAX;
	int16_t x1211 = -1;
	static uint64_t x1212 = UINT64_MAX;
	volatile int32_t t157 = -1501651;

    t157 = (x1209!=(x1210<<(x1211!=x1212)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1217 = 1;
	int64_t x1218 = 0LL;
	int32_t x1219 = INT32_MAX;
	uint32_t x1220 = UINT32_MAX;
	volatile int32_t t158 = -62;

    t158 = (x1217!=(x1218<<(x1219!=x1220)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1237 = -1;
	uint64_t x1238 = 20457LLU;
	uint8_t x1239 = UINT8_MAX;
	int32_t t159 = 951388719;

    t159 = (x1237!=(x1238<<(x1239!=x1240)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x1241 = -1390;
	int32_t x1242 = 4248;
	volatile int16_t x1243 = INT16_MIN;
	volatile uint32_t x1244 = 172U;
	int32_t t160 = 1727;

    t160 = (x1241!=(x1242<<(x1243!=x1244)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1249 = -448452371829LL;
	uint16_t x1251 = 2392U;
	int16_t x1252 = 12;

    t161 = (x1249!=(x1250<<(x1251!=x1252)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x1262 = 200595563U;
	static int32_t x1264 = -389;
	volatile int32_t t162 = -383670025;

    t162 = (x1261!=(x1262<<(x1263!=x1264)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1274 = UINT32_MAX;
	volatile uint16_t x1275 = 17953U;
	uint8_t x1276 = 12U;
	volatile int32_t t163 = -6233908;

    t163 = (x1273!=(x1274<<(x1275!=x1276)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x1289 = 8138;
	static int16_t x1290 = 1;
	int16_t x1291 = -10135;
	int64_t x1292 = INT64_MIN;
	volatile int32_t t164 = -1;

    t164 = (x1289!=(x1290<<(x1291!=x1292)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1293 = -1;
	int32_t x1296 = -94611;
	volatile int32_t t165 = -191;

    t165 = (x1293!=(x1294<<(x1295!=x1296)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x1297 = INT16_MIN;
	uint16_t x1298 = 483U;
	int64_t x1299 = INT64_MAX;
	int8_t x1300 = 5;
	int32_t t166 = -9222736;

    t166 = (x1297!=(x1298<<(x1299!=x1300)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1306 = 4074LL;
	int16_t x1307 = INT16_MIN;
	volatile int32_t t167 = 103708057;

    t167 = (x1305!=(x1306<<(x1307!=x1308)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x1313 = -1;
	uint16_t x1314 = 416U;
	int64_t x1315 = INT64_MIN;
	static int8_t x1316 = -14;
	static int32_t t168 = 182345;

    t168 = (x1313!=(x1314<<(x1315!=x1316)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x1317 = 6U;
	uint32_t x1318 = 1481117234U;
	uint64_t x1319 = 177657990424011LLU;
	volatile int16_t x1320 = INT16_MIN;
	volatile int32_t t169 = 6609;

    t169 = (x1317!=(x1318<<(x1319!=x1320)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1329 = INT32_MIN;
	volatile int16_t x1332 = INT16_MAX;
	static int32_t t170 = -14334773;

    t170 = (x1329!=(x1330<<(x1331!=x1332)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1333 = 19U;
	static uint16_t x1334 = UINT16_MAX;
	static volatile int16_t x1336 = INT16_MAX;

    t171 = (x1333!=(x1334<<(x1335!=x1336)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x1337 = INT64_MIN;
	uint32_t x1338 = 3U;
	uint8_t x1339 = 2U;
	volatile uint8_t x1340 = 3U;
	volatile int32_t t172 = 1;

    t172 = (x1337!=(x1338<<(x1339!=x1340)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1346 = 128689470863167LLU;
	int32_t x1347 = INT32_MIN;
	uint64_t x1348 = 35834357102LLU;

    t173 = (x1345!=(x1346<<(x1347!=x1348)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1353 = -17;
	static uint64_t x1354 = UINT64_MAX;
	int64_t x1355 = -237834909163060592LL;
	static uint32_t x1356 = 2U;
	int32_t t174 = -1991087;

    t174 = (x1353!=(x1354<<(x1355!=x1356)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1357 = 6948150111368074LLU;
	int8_t x1359 = INT8_MAX;
	int32_t t175 = -265527;

    t175 = (x1357!=(x1358<<(x1359!=x1360)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1361 = 592U;
	volatile uint32_t x1362 = 11U;
	uint16_t x1363 = 797U;
	uint32_t x1364 = 36646U;
	int32_t t176 = -20971;

    t176 = (x1361!=(x1362<<(x1363!=x1364)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x1385 = 31;
	int64_t x1386 = 289075714284LL;
	int32_t x1387 = 6442;
	uint64_t x1388 = 12355914260233299LLU;
	volatile int32_t t177 = -3673385;

    t177 = (x1385!=(x1386<<(x1387!=x1388)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x1393 = -2;
	static uint16_t x1394 = 5U;
	int64_t x1395 = 11432453728646830LL;
	volatile int32_t x1396 = INT32_MAX;

    t178 = (x1393!=(x1394<<(x1395!=x1396)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1397 = 20309U;
	uint16_t x1398 = 2U;
	int8_t x1399 = INT8_MAX;
	uint16_t x1400 = 3267U;
	int32_t t179 = 1069;

    t179 = (x1397!=(x1398<<(x1399!=x1400)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint8_t x1401 = 9U;
	static int16_t x1402 = INT16_MAX;
	int16_t x1404 = INT16_MAX;
	static int32_t t180 = 0;

    t180 = (x1401!=(x1402<<(x1403!=x1404)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x1409 = -1;
	volatile int32_t x1410 = 22;
	uint16_t x1411 = UINT16_MAX;
	uint16_t x1412 = 121U;
	static int32_t t181 = 297429;

    t181 = (x1409!=(x1410<<(x1411!=x1412)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1421 = -131929900036894728LL;
	uint8_t x1422 = UINT8_MAX;
	int32_t x1424 = INT32_MIN;

    t182 = (x1421!=(x1422<<(x1423!=x1424)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1425 = 27808959847768LLU;
	int16_t x1426 = INT16_MAX;
	uint64_t x1428 = UINT64_MAX;
	volatile int32_t t183 = -32169128;

    t183 = (x1425!=(x1426<<(x1427!=x1428)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1429 = INT64_MAX;
	int16_t x1430 = 2;
	int32_t x1431 = -1;
	static volatile int16_t x1432 = 0;

    t184 = (x1429!=(x1430<<(x1431!=x1432)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1437 = -1;
	int8_t x1438 = INT8_MAX;
	int64_t x1439 = INT64_MIN;
	static uint8_t x1440 = 55U;
	static volatile int32_t t185 = -8182;

    t185 = (x1437!=(x1438<<(x1439!=x1440)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1441 = 4;
	uint64_t x1442 = 10799880245373651LLU;
	static volatile int8_t x1443 = -1;
	volatile uint16_t x1444 = 0U;
	volatile int32_t t186 = -8393;

    t186 = (x1441!=(x1442<<(x1443!=x1444)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1450 = 1411624550840622842LLU;
	volatile int32_t x1451 = 0;
	int32_t x1452 = -1;

    t187 = (x1449!=(x1450<<(x1451!=x1452)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1458 = UINT8_MAX;
	static int8_t x1459 = INT8_MIN;
	volatile int32_t t188 = 23569;

    t188 = (x1457!=(x1458<<(x1459!=x1460)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x1461 = 188829LLU;
	volatile int8_t x1462 = INT8_MAX;
	int64_t x1464 = INT64_MAX;

    t189 = (x1461!=(x1462<<(x1463!=x1464)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1465 = INT8_MAX;
	uint8_t x1466 = 0U;
	uint64_t x1467 = 394286658LLU;
	uint8_t x1468 = UINT8_MAX;
	static volatile int32_t t190 = 113285789;

    t190 = (x1465!=(x1466<<(x1467!=x1468)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1469 = 2LL;
	uint8_t x1470 = 6U;
	int8_t x1472 = INT8_MIN;
	static volatile int32_t t191 = 21;

    t191 = (x1469!=(x1470<<(x1471!=x1472)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1481 = -1;
	int8_t x1482 = INT8_MAX;
	int16_t x1483 = 215;
	int8_t x1484 = 31;
	volatile int32_t t192 = -126216633;

    t192 = (x1481!=(x1482<<(x1483!=x1484)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1497 = 439301618U;
	int64_t x1500 = -1LL;
	int32_t t193 = 411706;

    t193 = (x1497!=(x1498<<(x1499!=x1500)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1505 = 15;
	uint32_t x1506 = 173U;
	volatile int16_t x1507 = -1;

    t194 = (x1505!=(x1506<<(x1507!=x1508)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1513 = 0U;
	static int8_t x1515 = 16;
	int8_t x1516 = INT8_MAX;
	volatile int32_t t195 = 16;

    t195 = (x1513!=(x1514<<(x1515!=x1516)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1525 = 1;
	static uint32_t x1527 = 1131403U;
	int32_t x1528 = -29857446;

    t196 = (x1525!=(x1526<<(x1527!=x1528)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1534 = 455U;
	static volatile int32_t x1535 = INT32_MIN;
	int8_t x1536 = INT8_MIN;
	int32_t t197 = 95362;

    t197 = (x1533!=(x1534<<(x1535!=x1536)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1537 = -1;
	uint8_t x1538 = UINT8_MAX;
	uint16_t x1540 = 974U;
	static volatile int32_t t198 = 0;

    t198 = (x1537!=(x1538<<(x1539!=x1540)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1545 = 7195U;
	volatile uint8_t x1546 = 1U;
	int16_t x1547 = INT16_MIN;
	int8_t x1548 = INT8_MIN;
	volatile int32_t t199 = 15745292;

    t199 = (x1545!=(x1546<<(x1547!=x1548)));

    if (t199 != 1) { NG(); } else { ; }
	
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

