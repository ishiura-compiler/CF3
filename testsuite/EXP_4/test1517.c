
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

volatile uint32_t x13 = 0U;
volatile uint16_t x14 = UINT16_MAX;
int32_t x19 = INT32_MAX;
uint16_t x20 = 444U;
static int16_t x32 = INT16_MAX;
int16_t x37 = INT16_MIN;
volatile int64_t x39 = 1LL;
static uint64_t t6 = 2668182LLU;
int64_t t7 = 141457LL;
volatile uint8_t x57 = 1U;
int8_t x71 = 58;
volatile int32_t t10 = -12307;
uint64_t t11 = 72095482842415LLU;
int64_t x77 = -1LL;
int16_t x81 = INT16_MIN;
volatile uint8_t x82 = 9U;
static uint64_t x85 = UINT64_MAX;
static volatile uint16_t x98 = 22U;
static int8_t x100 = -1;
volatile int32_t t15 = 10;
int64_t x103 = 123550692270LL;
uint32_t t17 = 0U;
static volatile int16_t x135 = INT16_MIN;
uint64_t x158 = 2394942851542LLU;
int64_t x168 = -1LL;
volatile int32_t t21 = -1;
int8_t x177 = 1;
uint16_t x181 = 0U;
volatile uint64_t x187 = UINT64_MAX;
int32_t t24 = 24600;
int16_t x197 = INT16_MIN;
static volatile uint16_t x200 = 15U;
uint64_t t26 = 13096631028LLU;
uint64_t x201 = UINT64_MAX;
int32_t x206 = 9208;
static int8_t x214 = 44;
volatile int32_t x215 = -1;
uint32_t x232 = 4U;
volatile uint64_t t33 = 4306488125286LLU;
int16_t x249 = 74;
static int16_t x251 = INT16_MIN;
int64_t x252 = INT64_MIN;
int8_t x265 = 0;
int8_t x268 = 1;
int16_t x286 = 14;
uint8_t x297 = 108U;
int8_t x299 = 6;
uint16_t x302 = UINT16_MAX;
int64_t x309 = INT64_MIN;
int64_t x311 = INT64_MIN;
uint8_t x315 = 114U;
uint16_t x326 = UINT16_MAX;
int32_t x344 = INT32_MAX;
int64_t x349 = -1LL;
int64_t x352 = -246LL;
volatile int64_t x385 = INT64_MIN;
int32_t x387 = INT32_MIN;
int64_t x388 = INT64_MAX;
uint64_t x392 = UINT64_MAX;
int8_t x396 = INT8_MIN;
static int64_t t50 = 998373LL;
int16_t x408 = -1;
int16_t x410 = 6;
int16_t x421 = INT16_MIN;
uint16_t x426 = 14U;
int64_t x427 = INT64_MIN;
int8_t x433 = INT8_MIN;
uint16_t x434 = 64U;
volatile int32_t t56 = -4;
volatile int64_t x459 = INT64_MAX;
volatile uint16_t x467 = UINT16_MAX;
volatile int16_t x473 = -36;
volatile int32_t x475 = -325063;
int8_t x476 = -1;
uint64_t t62 = 3713LLU;
uint32_t x487 = UINT32_MAX;
uint16_t x488 = UINT16_MAX;
int8_t x491 = -1;
uint32_t x502 = 763774697U;
static uint16_t x546 = 44U;
int8_t x577 = -1;
int64_t x581 = INT64_MAX;
volatile uint8_t x582 = 14U;
volatile int32_t x585 = 3703885;
int8_t x588 = INT8_MAX;
int64_t t75 = 1675LL;
int64_t x621 = INT64_MIN;
uint16_t x622 = UINT16_MAX;
volatile uint16_t x634 = 620U;
volatile int16_t x636 = INT16_MAX;
volatile int32_t t77 = -184234567;
volatile uint8_t x638 = 80U;
int8_t x640 = -1;
static volatile int32_t t79 = 21635;
int32_t x659 = INT32_MAX;
volatile int32_t t80 = -18425;
int16_t x673 = INT16_MAX;
static int32_t x675 = INT32_MIN;
uint32_t x676 = 8652330U;
volatile uint64_t t82 = 1755008015024430790LLU;
volatile int16_t x682 = 7;
uint32_t x694 = 7U;
volatile int32_t t85 = -1;
int16_t x702 = INT16_MAX;
int8_t x715 = 21;
int8_t x716 = INT8_MIN;
uint64_t x731 = UINT64_MAX;
uint32_t t89 = 0U;
static int16_t x737 = -4;
static uint32_t x738 = UINT32_MAX;
static uint64_t x740 = UINT64_MAX;
uint16_t x750 = 116U;
int32_t x755 = INT32_MAX;
uint16_t x756 = UINT16_MAX;
int16_t x758 = INT16_MAX;
uint8_t x759 = 93U;
int16_t x787 = 4582;
static int16_t x789 = 57;
volatile int8_t x790 = INT8_MAX;
volatile int32_t t98 = 102;
volatile uint32_t x793 = 339670218U;
volatile uint32_t t99 = 873770U;
static uint8_t x807 = 0U;
int16_t x814 = INT16_MAX;
volatile uint64_t x820 = 226LLU;
uint64_t x822 = 1426739172311433LLU;
int8_t x835 = -1;
static int32_t x836 = 3214954;
volatile int8_t x839 = -1;
volatile int32_t t106 = 1205;
int8_t x845 = -1;
int8_t x848 = INT8_MAX;
uint8_t x849 = UINT8_MAX;
uint16_t x851 = 52U;
volatile int16_t x854 = INT16_MAX;
static volatile uint32_t x855 = UINT32_MAX;
uint32_t x859 = 108465U;
static int32_t x860 = INT32_MIN;
int16_t x861 = 31;
uint64_t x865 = 4905LLU;
volatile uint64_t t112 = 26062136LLU;
static volatile uint32_t x873 = 41285U;
uint32_t t114 = 368U;
int32_t t115 = -12;
int32_t x897 = -4;
int32_t x900 = INT32_MIN;
uint16_t x904 = 505U;
uint8_t x906 = UINT8_MAX;
uint8_t x923 = 1U;
volatile int32_t t120 = 105818;
uint16_t x941 = UINT16_MAX;
static uint8_t x944 = 91U;
volatile uint8_t x948 = 62U;
int8_t x971 = 3;
volatile uint8_t x984 = 103U;
int32_t x1005 = -1;
int16_t x1027 = -1;
static uint32_t t130 = 103349142U;
int8_t x1029 = INT8_MAX;
int64_t x1033 = INT64_MAX;
static uint8_t x1038 = 4U;
int32_t x1047 = -1304730;
volatile int8_t x1053 = INT8_MAX;
static volatile int64_t x1061 = INT64_MAX;
int64_t x1085 = INT64_MIN;
volatile int16_t x1102 = INT16_MAX;
static int16_t x1104 = -1;
uint16_t x1110 = 3U;
static int16_t x1121 = INT16_MIN;
int16_t x1125 = -7971;
volatile uint8_t x1138 = 8U;
int32_t t145 = -117649714;
static int64_t x1145 = INT64_MIN;
volatile uint32_t x1147 = UINT32_MAX;
uint64_t x1150 = 313153LLU;
int32_t x1151 = INT32_MAX;
volatile int32_t x1157 = -1;
volatile uint8_t x1190 = 23U;
int32_t x1196 = -1;
static uint64_t x1202 = 18117596725552LLU;
int64_t x1212 = INT64_MIN;
uint32_t x1214 = 474799024U;
volatile uint16_t x1225 = UINT16_MAX;
volatile int32_t t156 = 0;
int64_t x1231 = INT64_MIN;
int16_t x1232 = 0;
static volatile uint64_t t157 = 8795LLU;
static uint64_t x1235 = UINT64_MAX;
static int16_t x1241 = -1;
int32_t x1244 = 201343728;
static int32_t x1259 = INT32_MIN;
uint8_t x1276 = 11U;
volatile int16_t x1277 = INT16_MIN;
int8_t x1289 = -1;
uint16_t x1295 = 2658U;
uint64_t t166 = 6262576077881037LLU;
int16_t x1299 = -1;
static uint64_t x1313 = 183999433LLU;
int8_t x1316 = INT8_MAX;
static int64_t x1337 = INT64_MAX;
volatile int64_t t169 = -1577318583LL;
static uint8_t x1346 = UINT8_MAX;
uint16_t x1361 = 68U;
int8_t x1363 = 0;
volatile uint64_t x1402 = UINT64_MAX;
int8_t x1417 = -1;
volatile int8_t x1419 = INT8_MIN;
int64_t x1425 = INT64_MIN;
uint32_t t182 = 2U;
int32_t x1437 = -6867760;
int32_t t184 = -2;
int64_t x1454 = INT64_MAX;
static uint8_t x1466 = 3U;
uint64_t t189 = 59944LLU;
int16_t x1495 = 13;
volatile int32_t x1496 = -1;
int8_t x1521 = INT8_MAX;
volatile int32_t t193 = -514609;
uint8_t x1534 = UINT8_MAX;
uint16_t x1542 = 53U;
uint8_t x1544 = 1U;
volatile int32_t t196 = 422456031;
volatile uint64_t x1547 = 6810894645094845423LLU;
volatile uint32_t x1558 = 25U;
volatile int32_t t199 = 12207;


void f0(void) {
    	volatile int16_t x9 = INT16_MAX;
	uint16_t x10 = UINT16_MAX;
	uint8_t x11 = UINT8_MAX;
	uint8_t x12 = 1U;
	volatile int32_t t0 = 4;

    t0 = (x9%(x10>>(x11==x12)));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x15 = 108U;
	int32_t x16 = INT32_MAX;
	volatile uint32_t t1 = 7U;

    t1 = (x13%(x14>>(x15==x16)));

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -1;
	uint64_t x18 = 2719884LLU;
	volatile uint64_t t2 = 69641617384LLU;

    t2 = (x17%(x18>>(x19==x20)));

    if (t2 != 51303LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x21 = 4638U;
	static uint16_t x22 = 23740U;
	uint8_t x23 = 15U;
	uint32_t x24 = 534U;
	int32_t t3 = -161708;

    t3 = (x21%(x22>>(x23==x24)));

    if (t3 != 4638) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x29 = 30U;
	static uint32_t x30 = 329646U;
	static uint64_t x31 = UINT64_MAX;
	volatile uint32_t t4 = 27478432U;

    t4 = (x29%(x30>>(x31==x32)));

    if (t4 != 30U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x38 = 2U;
	uint32_t x40 = 391U;
	int32_t t5 = 12086102;

    t5 = (x37%(x38>>(x39==x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x41 = 28;
	volatile uint64_t x42 = UINT64_MAX;
	uint8_t x43 = 2U;
	uint64_t x44 = 69LLU;

    t6 = (x41%(x42>>(x43==x44)));

    if (t6 != 28LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x49 = UINT8_MAX;
	int64_t x50 = 538860161437598830LL;
	uint8_t x51 = 11U;
	uint64_t x52 = 73LLU;

    t7 = (x49%(x50>>(x51==x52)));

    if (t7 != 255LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x58 = INT64_MAX;
	int16_t x59 = 26;
	uint16_t x60 = 375U;
	int64_t t8 = 530895573896732LL;

    t8 = (x57%(x58>>(x59==x60)));

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x61 = INT64_MAX;
	uint16_t x62 = 4U;
	int64_t x63 = -1LL;
	int64_t x64 = INT64_MIN;
	int64_t t9 = -128535517741982729LL;

    t9 = (x61%(x62>>(x63==x64)));

    if (t9 != 3LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint16_t x69 = 7U;
	uint16_t x70 = 512U;
	int64_t x72 = INT64_MIN;

    t10 = (x69%(x70>>(x71==x72)));

    if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x73 = -1;
	volatile uint64_t x74 = 2196LLU;
	int32_t x75 = -1;
	static uint32_t x76 = 130342312U;

    t11 = (x73%(x74>>(x75==x76)));

    if (t11 != 15LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x78 = INT16_MAX;
	int32_t x79 = INT32_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t12 = 425279LL;

    t12 = (x77%(x78>>(x79==x80)));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x83 = UINT8_MAX;
	volatile uint8_t x84 = 2U;
	int32_t t13 = 0;

    t13 = (x81%(x82>>(x83==x84)));

    if (t13 != -8) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x86 = 10;
	int32_t x87 = -1;
	static int32_t x88 = -1;
	volatile uint64_t t14 = 2LLU;

    t14 = (x85%(x86>>(x87==x88)));

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x97 = INT16_MAX;
	int64_t x99 = INT64_MIN;

    t15 = (x97%(x98>>(x99==x100)));

    if (t15 != 9) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x101 = 112144457;
	static uint8_t x102 = UINT8_MAX;
	volatile int16_t x104 = INT16_MIN;
	static int32_t t16 = 27706631;

    t16 = (x101%(x102>>(x103==x104)));

    if (t16 != 47) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x113 = -9;
	uint32_t x114 = 699U;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = 46U;

    t17 = (x113%(x114>>(x115==x116)));

    if (t17 != 232U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x133 = 438LLU;
	volatile uint16_t x134 = UINT16_MAX;
	static volatile int32_t x136 = -1;
	uint64_t t18 = 1511LLU;

    t18 = (x133%(x134>>(x135==x136)));

    if (t18 != 438LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x157 = INT32_MAX;
	uint32_t x159 = UINT32_MAX;
	int8_t x160 = INT8_MAX;
	uint64_t t19 = 44992889LLU;

    t19 = (x157%(x158>>(x159==x160)));

    if (t19 != 2147483647LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = 37571;
	int64_t x163 = -126408772228750218LL;
	int16_t x164 = -1;
	int32_t t20 = -24147;

    t20 = (x161%(x162>>(x163==x164)));

    if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x165 = -265;
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = INT64_MIN;

    t21 = (x165%(x166>>(x167==x168)));

    if (t21 != -10) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x178 = 734065U;
	int8_t x179 = 1;
	int8_t x180 = -9;
	static uint32_t t22 = 1U;

    t22 = (x177%(x178>>(x179==x180)));

    if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x182 = 300235U;
	int16_t x183 = -1;
	int8_t x184 = INT8_MIN;
	uint32_t t23 = 104158U;

    t23 = (x181%(x182>>(x183==x184)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	int8_t x188 = INT8_MAX;

    t24 = (x185%(x186>>(x187==x188)));

    if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x193 = 125U;
	int16_t x194 = 129;
	int32_t x195 = -1;
	int64_t x196 = INT64_MIN;
	static int32_t t25 = -2126;

    t25 = (x193%(x194>>(x195==x196)));

    if (t25 != 125) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x198 = 16LLU;
	volatile int8_t x199 = 0;

    t26 = (x197%(x198>>(x199==x200)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x202 = 3731990;
	int64_t x203 = INT64_MIN;
	volatile uint64_t x204 = 67LLU;
	uint64_t t27 = 6767944607143LLU;

    t27 = (x201%(x202>>(x203==x204)));

    if (t27 != 421635LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	uint16_t x207 = 4U;
	static int8_t x208 = INT8_MIN;
	volatile uint32_t t28 = 3U;

    t28 = (x205%(x206>>(x207==x208)));

    if (t28 != 6191U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x213 = -1;
	int64_t x216 = -1LL;
	int32_t t29 = 3;

    t29 = (x213%(x214>>(x215==x216)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x217 = INT8_MIN;
	int16_t x218 = INT16_MAX;
	int64_t x219 = -35LL;
	static int8_t x220 = INT8_MIN;
	int32_t t30 = 103;

    t30 = (x217%(x218>>(x219==x220)));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x221 = 203;
	static int32_t x222 = INT32_MAX;
	volatile int8_t x223 = INT8_MIN;
	static int8_t x224 = 0;
	volatile int32_t t31 = 1891;

    t31 = (x221%(x222>>(x223==x224)));

    if (t31 != 203) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x229 = 89867LL;
	int64_t x230 = 1644010606939768LL;
	uint16_t x231 = 0U;
	int64_t t32 = -1608803356244971280LL;

    t32 = (x229%(x230>>(x231==x232)));

    if (t32 != 89867LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x233 = UINT16_MAX;
	uint64_t x234 = 46544411312LLU;
	uint32_t x235 = 29U;
	static volatile int16_t x236 = -51;

    t33 = (x233%(x234>>(x235==x236)));

    if (t33 != 65535LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x250 = 591326856487LLU;
	uint64_t t34 = 4473124760937252450LLU;

    t34 = (x249%(x250>>(x251==x252)));

    if (t34 != 74LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 57180748U;
	uint64_t t35 = 25886284LLU;

    t35 = (x265%(x266>>(x267==x268)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x277 = 34U;
	int8_t x278 = 1;
	static int64_t x279 = -1LL;
	volatile uint16_t x280 = 4533U;
	volatile int32_t t36 = -9;

    t36 = (x277%(x278>>(x279==x280)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x285 = 2947;
	volatile uint32_t x287 = UINT32_MAX;
	int32_t x288 = -1;
	volatile int32_t t37 = -1;

    t37 = (x285%(x286>>(x287==x288)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MAX;
	int8_t x295 = INT8_MIN;
	int64_t x296 = -144269358679874LL;
	int32_t t38 = 29240096;

    t38 = (x293%(x294>>(x295==x296)));

    if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x298 = INT64_MAX;
	static int32_t x300 = -124;
	volatile int64_t t39 = -25328514232785LL;

    t39 = (x297%(x298>>(x299==x300)));

    if (t39 != 108LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x301 = -2;
	int16_t x303 = -1;
	volatile int8_t x304 = INT8_MAX;
	int32_t t40 = 0;

    t40 = (x301%(x302>>(x303==x304)));

    if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x310 = 3U;
	uint16_t x312 = 13740U;
	volatile int64_t t41 = -279LL;

    t41 = (x309%(x310>>(x311==x312)));

    if (t41 != -2LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x313 = INT8_MAX;
	uint32_t x314 = 3025U;
	int8_t x316 = -22;
	volatile uint32_t t42 = 502867U;

    t42 = (x313%(x314>>(x315==x316)));

    if (t42 != 127U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x325 = -66557824583153205LL;
	int8_t x327 = INT8_MIN;
	static uint32_t x328 = 66458210U;
	volatile int64_t t43 = -24731618360LL;

    t43 = (x325%(x326>>(x327==x328)));

    if (t43 != -53355LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x341 = INT16_MIN;
	static int32_t x342 = 266486117;
	static int8_t x343 = INT8_MAX;
	static int32_t t44 = 0;

    t44 = (x341%(x342>>(x343==x344)));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x350 = 2;
	volatile uint8_t x351 = 0U;
	volatile int64_t t45 = 157008480333569LL;

    t45 = (x349%(x350>>(x351==x352)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x357 = 2709554868LLU;
	int8_t x358 = INT8_MAX;
	int16_t x359 = -94;
	int64_t x360 = INT64_MIN;
	uint64_t t46 = 1034212838LLU;

    t46 = (x357%(x358>>(x359==x360)));

    if (t46 != 89LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x386 = UINT8_MAX;
	volatile int64_t t47 = -4085073963055202243LL;

    t47 = (x385%(x386>>(x387==x388)));

    if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x389 = -1;
	int16_t x390 = INT16_MAX;
	uint32_t x391 = 413U;
	static volatile int32_t t48 = -9;

    t48 = (x389%(x390>>(x391==x392)));

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x393 = 27U;
	volatile uint16_t x394 = 6185U;
	uint32_t x395 = 445193346U;
	int32_t t49 = 2028078;

    t49 = (x393%(x394>>(x395==x396)));

    if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x397 = -21813635LL;
	uint16_t x398 = 8902U;
	uint32_t x399 = 1342275U;
	int8_t x400 = INT8_MAX;

    t50 = (x397%(x398>>(x399==x400)));

    if (t50 != -3735LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x405 = INT64_MIN;
	uint8_t x406 = UINT8_MAX;
	static uint8_t x407 = 1U;
	volatile int64_t t51 = 2795LL;

    t51 = (x405%(x406>>(x407==x408)));

    if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x409 = -237615152;
	static uint8_t x411 = 61U;
	static uint64_t x412 = UINT64_MAX;
	volatile int32_t t52 = 101288;

    t52 = (x409%(x410>>(x411==x412)));

    if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x413 = 2452530050634LL;
	static int32_t x414 = INT32_MAX;
	static int32_t x415 = -481;
	int64_t x416 = INT64_MIN;
	int64_t t53 = 4LL;

    t53 = (x413%(x414>>(x415==x416)));

    if (t53 != 103725760LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x422 = 11U;
	volatile uint8_t x423 = UINT8_MAX;
	static volatile int64_t x424 = INT64_MIN;
	volatile int32_t t54 = 2405652;

    t54 = (x421%(x422>>(x423==x424)));

    if (t54 != -10) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x425 = UINT8_MAX;
	uint64_t x428 = UINT64_MAX;
	int32_t t55 = -48149149;

    t55 = (x425%(x426>>(x427==x428)));

    if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x435 = INT16_MAX;
	volatile int64_t x436 = 5832008041919650LL;

    t56 = (x433%(x434>>(x435==x436)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x441 = INT16_MIN;
	int8_t x442 = 5;
	int64_t x443 = -1LL;
	int64_t x444 = INT64_MIN;
	volatile int32_t t57 = 1;

    t57 = (x441%(x442>>(x443==x444)));

    if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x445 = INT32_MIN;
	volatile uint64_t x446 = 3806991613315LLU;
	volatile uint8_t x447 = UINT8_MAX;
	static int32_t x448 = 229632;
	uint64_t t58 = 902638808620LLU;

    t58 = (x445%(x446>>(x447==x448)));

    if (t58 != 472168755303LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int16_t x457 = -1;
	volatile uint32_t x458 = UINT32_MAX;
	uint16_t x460 = 3407U;
	uint32_t t59 = 2791U;

    t59 = (x457%(x458>>(x459==x460)));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x465 = INT64_MIN;
	int64_t x466 = 2613LL;
	volatile uint64_t x468 = UINT64_MAX;
	int64_t t60 = -54LL;

    t60 = (x465%(x466>>(x467==x468)));

    if (t60 != -2387LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x469 = 51973LL;
	int32_t x470 = 224344966;
	static int8_t x471 = -1;
	static uint8_t x472 = UINT8_MAX;
	static volatile int64_t t61 = -3634594444LL;

    t61 = (x469%(x470>>(x471==x472)));

    if (t61 != 51973LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x474 = 179311502507109057LLU;

    t62 = (x473%(x474>>(x475==x476)));

    if (t62 != 156970817984427766LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x485 = -37850LL;
	volatile uint16_t x486 = 32441U;
	int64_t t63 = 1LL;

    t63 = (x485%(x486>>(x487==x488)));

    if (t63 != -5409LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x489 = -1;
	uint64_t x490 = UINT64_MAX;
	int32_t x492 = -143107;
	volatile uint64_t t64 = 116876664172LLU;

    t64 = (x489%(x490>>(x491==x492)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x501 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	int64_t x504 = -253LL;
	static volatile uint32_t t65 = 2386U;

    t65 = (x501%(x502>>(x503==x504)));

    if (t65 != 476093683U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x521 = 6U;
	static uint16_t x522 = 3U;
	int32_t x523 = INT32_MIN;
	static int64_t x524 = INT64_MAX;
	int32_t t66 = 3719734;

    t66 = (x521%(x522>>(x523==x524)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x533 = UINT8_MAX;
	int8_t x534 = INT8_MAX;
	static int16_t x535 = -1;
	volatile uint32_t x536 = UINT32_MAX;
	volatile int32_t t67 = -1;

    t67 = (x533%(x534>>(x535==x536)));

    if (t67 != 3) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x541 = -1;
	volatile uint32_t x542 = 251861U;
	int64_t x543 = -1LL;
	int64_t x544 = -849973726288190706LL;
	uint32_t t68 = 15726U;

    t68 = (x541%(x542>>(x543==x544)));

    if (t68 != 233523U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x545 = 0;
	volatile int64_t x547 = INT64_MIN;
	static int16_t x548 = -1;
	volatile int32_t t69 = -5;

    t69 = (x545%(x546>>(x547==x548)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x569 = INT64_MIN;
	int64_t x570 = INT64_MAX;
	int32_t x571 = 1107;
	uint16_t x572 = 705U;
	int64_t t70 = 294388780783LL;

    t70 = (x569%(x570>>(x571==x572)));

    if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x578 = UINT8_MAX;
	int8_t x579 = INT8_MAX;
	int16_t x580 = -1;
	volatile int32_t t71 = -33;

    t71 = (x577%(x578>>(x579==x580)));

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x583 = -1LL;
	int8_t x584 = -1;
	static volatile int64_t t72 = 178348159LL;

    t72 = (x581%(x582>>(x583==x584)));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x586 = 30U;
	static int64_t x587 = INT64_MIN;
	volatile int32_t t73 = 196;

    t73 = (x585%(x586>>(x587==x588)));

    if (t73 != 25) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x593 = -1;
	uint16_t x594 = 56U;
	int32_t x595 = INT32_MAX;
	int64_t x596 = INT64_MIN;
	int32_t t74 = 2976;

    t74 = (x593%(x594>>(x595==x596)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x605 = -3;
	static int64_t x606 = INT64_MAX;
	uint8_t x607 = 62U;
	volatile int64_t x608 = INT64_MAX;

    t75 = (x605%(x606>>(x607==x608)));

    if (t75 != -3LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MAX;
	static int64_t t76 = -6106100608453LL;

    t76 = (x621%(x622>>(x623==x624)));

    if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x633 = 27U;
	uint32_t x635 = UINT32_MAX;

    t77 = (x633%(x634>>(x635==x636)));

    if (t77 != 27) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x637 = 13785U;
	volatile int64_t x639 = -177374256890906299LL;
	int32_t t78 = -2537;

    t78 = (x637%(x638>>(x639==x640)));

    if (t78 != 25) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x641 = UINT16_MAX;
	int32_t x642 = INT32_MAX;
	static int32_t x643 = INT32_MIN;
	int8_t x644 = INT8_MIN;

    t79 = (x641%(x642>>(x643==x644)));

    if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x657 = 8809;
	static volatile uint8_t x658 = 24U;
	int16_t x660 = INT16_MIN;

    t80 = (x657%(x658>>(x659==x660)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x674 = 20235U;
	int32_t t81 = 7;

    t81 = (x673%(x674>>(x675==x676)));

    if (t81 != 12532) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int8_t x677 = INT8_MAX;
	volatile uint64_t x678 = 1840865878415411304LLU;
	int64_t x679 = INT64_MIN;
	int16_t x680 = INT16_MAX;

    t82 = (x677%(x678>>(x679==x680)));

    if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x681 = UINT16_MAX;
	uint16_t x683 = UINT16_MAX;
	int16_t x684 = -1;
	volatile int32_t t83 = -509050;

    t83 = (x681%(x682>>(x683==x684)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x693 = 187756205LLU;
	uint8_t x695 = 3U;
	uint16_t x696 = 398U;
	static uint64_t t84 = 11192508944LLU;

    t84 = (x693%(x694>>(x695==x696)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x697 = INT16_MIN;
	uint8_t x698 = 12U;
	volatile int8_t x699 = -1;
	int16_t x700 = INT16_MAX;

    t85 = (x697%(x698>>(x699==x700)));

    if (t85 != -8) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x701 = 1806U;
	int8_t x703 = INT8_MIN;
	int32_t x704 = -1;
	int32_t t86 = -101;

    t86 = (x701%(x702>>(x703==x704)));

    if (t86 != 1806) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x705 = -5;
	uint32_t x706 = UINT32_MAX;
	int16_t x707 = INT16_MAX;
	int64_t x708 = INT64_MIN;
	static volatile uint32_t t87 = 23801065U;

    t87 = (x705%(x706>>(x707==x708)));

    if (t87 != 4294967291U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x713 = 0U;
	uint16_t x714 = 2764U;
	int32_t t88 = 98989732;

    t88 = (x713%(x714>>(x715==x716)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int32_t x729 = INT32_MIN;
	uint32_t x730 = UINT32_MAX;
	static volatile int64_t x732 = -1LL;

    t89 = (x729%(x730>>(x731==x732)));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x733 = 0;
	static uint8_t x734 = UINT8_MAX;
	static int8_t x735 = INT8_MAX;
	int64_t x736 = INT64_MIN;
	volatile int32_t t90 = -21;

    t90 = (x733%(x734>>(x735==x736)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x739 = INT8_MIN;
	uint32_t t91 = 1992000U;

    t91 = (x737%(x738>>(x739==x740)));

    if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x745 = INT64_MAX;
	static int8_t x746 = INT8_MAX;
	uint64_t x747 = UINT64_MAX;
	int64_t x748 = 949692LL;
	volatile int64_t t92 = -252126386123642LL;

    t92 = (x745%(x746>>(x747==x748)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x749 = 1;
	uint8_t x751 = 49U;
	int32_t x752 = 146;
	int32_t t93 = 12;

    t93 = (x749%(x750>>(x751==x752)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x753 = -4019491908015LL;
	int8_t x754 = 61;
	int64_t t94 = 360051178001950LL;

    t94 = (x753%(x754>>(x755==x756)));

    if (t94 != -28LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	uint8_t x760 = UINT8_MAX;
	int32_t t95 = 13195964;

    t95 = (x757%(x758>>(x759==x760)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x777 = INT16_MAX;
	int32_t x778 = 7803;
	int32_t x779 = -70097;
	static int64_t x780 = INT64_MIN;
	volatile int32_t t96 = 501861570;

    t96 = (x777%(x778>>(x779==x780)));

    if (t96 != 1555) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x785 = -1;
	uint8_t x786 = 12U;
	volatile int8_t x788 = 14;
	volatile int32_t t97 = 31099;

    t97 = (x785%(x786>>(x787==x788)));

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MIN;

    t98 = (x789%(x790>>(x791==x792)));

    if (t98 != 57) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x794 = INT8_MAX;
	int32_t x795 = -9482;
	static int32_t x796 = -1;

    t99 = (x793%(x794>>(x795==x796)));

    if (t99 != 82U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x801 = 132655LLU;
	int64_t x802 = INT64_MAX;
	int64_t x803 = INT64_MIN;
	uint8_t x804 = 13U;
	uint64_t t100 = 56841169664666504LLU;

    t100 = (x801%(x802>>(x803==x804)));

    if (t100 != 132655LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x805 = 25LLU;
	int64_t x806 = 443654668707LL;
	static int8_t x808 = 0;
	uint64_t t101 = 7051134379LLU;

    t101 = (x805%(x806>>(x807==x808)));

    if (t101 != 25LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x813 = UINT8_MAX;
	static int8_t x815 = -1;
	int64_t x816 = INT64_MIN;
	static int32_t t102 = -217;

    t102 = (x813%(x814>>(x815==x816)));

    if (t102 != 255) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x817 = 4873406U;
	uint32_t x818 = 2U;
	int16_t x819 = INT16_MIN;
	static volatile uint32_t t103 = 984U;

    t103 = (x817%(x818>>(x819==x820)));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int16_t x821 = INT16_MAX;
	int16_t x823 = INT16_MIN;
	uint16_t x824 = 2U;
	uint64_t t104 = 764048738169LLU;

    t104 = (x821%(x822>>(x823==x824)));

    if (t104 != 32767LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x833 = -1LL;
	uint32_t x834 = 91697497U;
	volatile int64_t t105 = -1025807523LL;

    t105 = (x833%(x834>>(x835==x836)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x837 = INT8_MAX;
	int16_t x838 = 5;
	static int32_t x840 = INT32_MIN;

    t106 = (x837%(x838>>(x839==x840)));

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x846 = 51146795337LL;
	volatile uint32_t x847 = 5184073U;
	int64_t t107 = -16096284324465LL;

    t107 = (x845%(x846>>(x847==x848)));

    if (t107 != -1LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint16_t x850 = 13U;
	volatile int8_t x852 = 8;
	int32_t t108 = -3;

    t108 = (x849%(x850>>(x851==x852)));

    if (t108 != 8) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x853 = 0;
	int64_t x856 = -1LL;
	int32_t t109 = 0;

    t109 = (x853%(x854>>(x855==x856)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x857 = 25072;
	uint64_t x858 = 10103376906LLU;
	static uint64_t t110 = 265243823861553LLU;

    t110 = (x857%(x858>>(x859==x860)));

    if (t110 != 25072LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint64_t x862 = 68769800LLU;
	int16_t x863 = -12577;
	static volatile int64_t x864 = -1LL;
	volatile uint64_t t111 = 17376520LLU;

    t111 = (x861%(x862>>(x863==x864)));

    if (t111 != 31LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x866 = 74014242U;
	int64_t x867 = INT64_MIN;
	uint32_t x868 = UINT32_MAX;

    t112 = (x865%(x866>>(x867==x868)));

    if (t112 != 4905LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x869 = 4U;
	volatile uint64_t x870 = 385622217LLU;
	volatile int16_t x871 = INT16_MAX;
	static int32_t x872 = INT32_MIN;
	uint64_t t113 = 90277487975LLU;

    t113 = (x869%(x870>>(x871==x872)));

    if (t113 != 4LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x874 = 1168U;
	int16_t x875 = INT16_MAX;
	int16_t x876 = INT16_MIN;

    t114 = (x873%(x874>>(x875==x876)));

    if (t114 != 405U) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x877 = INT16_MAX;
	int32_t x878 = 1135909;
	static int32_t x879 = 184211606;
	int16_t x880 = -1;

    t115 = (x877%(x878>>(x879==x880)));

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x881 = -1;
	int8_t x882 = 1;
	uint32_t x883 = 28223U;
	int8_t x884 = -2;
	int32_t t116 = -1;

    t116 = (x881%(x882>>(x883==x884)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x898 = INT16_MAX;
	uint16_t x899 = 451U;
	static volatile int32_t t117 = 10069006;

    t117 = (x897%(x898>>(x899==x900)));

    if (t117 != -4) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x901 = INT16_MIN;
	uint8_t x902 = UINT8_MAX;
	static volatile uint64_t x903 = UINT64_MAX;
	static int32_t t118 = -28969;

    t118 = (x901%(x902>>(x903==x904)));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x905 = UINT8_MAX;
	int16_t x907 = 3;
	volatile int64_t x908 = -967564053LL;
	volatile int32_t t119 = -16374480;

    t119 = (x905%(x906>>(x907==x908)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x921 = INT8_MIN;
	uint16_t x922 = UINT16_MAX;
	static volatile int64_t x924 = INT64_MIN;

    t120 = (x921%(x922>>(x923==x924)));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x925 = 1748U;
	uint8_t x926 = 6U;
	static int64_t x927 = -1LL;
	uint16_t x928 = 5761U;
	static uint32_t t121 = 2079597632U;

    t121 = (x925%(x926>>(x927==x928)));

    if (t121 != 2U) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x937 = -1;
	uint16_t x938 = 13788U;
	int32_t x939 = -1;
	volatile int64_t x940 = 201629755026362465LL;
	static volatile int32_t t122 = -1;

    t122 = (x937%(x938>>(x939==x940)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x942 = 7U;
	volatile int32_t x943 = -1;
	volatile int32_t t123 = -46427140;

    t123 = (x941%(x942>>(x943==x944)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x945 = INT16_MAX;
	static int8_t x946 = INT8_MAX;
	static int16_t x947 = INT16_MIN;
	volatile int32_t t124 = -21;

    t124 = (x945%(x946>>(x947==x948)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x949 = -1;
	uint16_t x950 = 14U;
	int32_t x951 = -1;
	int8_t x952 = -51;
	int32_t t125 = -146448289;

    t125 = (x949%(x950>>(x951==x952)));

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x969 = INT8_MIN;
	uint64_t x970 = 686LLU;
	int8_t x972 = INT8_MIN;
	uint64_t t126 = 7329013003LLU;

    t126 = (x969%(x970>>(x971==x972)));

    if (t126 != 168LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x981 = -1;
	uint64_t x982 = 1LLU;
	uint64_t x983 = 3LLU;
	uint64_t t127 = 9102210998552453483LLU;

    t127 = (x981%(x982>>(x983==x984)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x1006 = 1LLU;
	static uint16_t x1007 = UINT16_MAX;
	static int8_t x1008 = -3;
	volatile uint64_t t128 = 1055610124LLU;

    t128 = (x1005%(x1006>>(x1007==x1008)));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x1017 = 16335386414LLU;
	uint64_t x1018 = 114661LLU;
	static int16_t x1019 = INT16_MIN;
	int16_t x1020 = INT16_MAX;
	uint64_t t129 = 32030350980329527LLU;

    t129 = (x1017%(x1018>>(x1019==x1020)));

    if (t129 != 92388LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x1025 = 428223U;
	volatile uint8_t x1026 = UINT8_MAX;
	int16_t x1028 = -362;

    t130 = (x1025%(x1026>>(x1027==x1028)));

    if (t130 != 78U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x1030 = 7U;
	static int32_t x1031 = INT32_MAX;
	static uint16_t x1032 = 429U;
	int32_t t131 = -2738;

    t131 = (x1029%(x1030>>(x1031==x1032)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x1034 = 139515774216186LLU;
	uint8_t x1035 = 12U;
	uint64_t x1036 = UINT64_MAX;
	uint64_t t132 = 1LLU;

    t132 = (x1033%(x1034>>(x1035==x1036)));

    if (t132 != 123719196935533LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x1037 = INT16_MIN;
	static volatile int8_t x1039 = -1;
	volatile int64_t x1040 = 241LL;
	volatile int32_t t133 = 7158;

    t133 = (x1037%(x1038>>(x1039==x1040)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x1045 = 1691450042062879495LLU;
	static uint64_t x1046 = 14966LLU;
	int16_t x1048 = INT16_MIN;
	volatile uint64_t t134 = 29343845179139588LLU;

    t134 = (x1045%(x1046>>(x1047==x1048)));

    if (t134 != 4639LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x1049 = INT32_MAX;
	static uint16_t x1050 = UINT16_MAX;
	int8_t x1051 = 1;
	uint32_t x1052 = 81U;
	volatile int32_t t135 = 186016757;

    t135 = (x1049%(x1050>>(x1051==x1052)));

    if (t135 != 32767) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x1054 = UINT16_MAX;
	uint16_t x1055 = 39U;
	int64_t x1056 = -112133LL;
	int32_t t136 = 835;

    t136 = (x1053%(x1054>>(x1055==x1056)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1062 = 19;
	uint8_t x1063 = UINT8_MAX;
	int32_t x1064 = INT32_MAX;
	static volatile int64_t t137 = -26713697035LL;

    t137 = (x1061%(x1062>>(x1063==x1064)));

    if (t137 != 17LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1081 = -1;
	volatile uint32_t x1082 = UINT32_MAX;
	uint16_t x1083 = UINT16_MAX;
	static int8_t x1084 = -1;
	uint32_t t138 = 122547951U;

    t138 = (x1081%(x1082>>(x1083==x1084)));

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x1086 = UINT8_MAX;
	uint16_t x1087 = 507U;
	int64_t x1088 = INT64_MIN;
	volatile int64_t t139 = -8420788595LL;

    t139 = (x1085%(x1086>>(x1087==x1088)));

    if (t139 != -128LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x1097 = -1;
	uint16_t x1098 = 815U;
	int8_t x1099 = INT8_MIN;
	int64_t x1100 = INT64_MIN;
	volatile int32_t t140 = -1;

    t140 = (x1097%(x1098>>(x1099==x1100)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x1101 = 9739645017577LL;
	int64_t x1103 = INT64_MIN;
	volatile int64_t t141 = 85LL;

    t141 = (x1101%(x1102>>(x1103==x1104)));

    if (t141 != 24961LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x1109 = 10U;
	int16_t x1111 = -1;
	volatile uint64_t x1112 = UINT64_MAX;
	volatile int32_t t142 = 3739;

    t142 = (x1109%(x1110>>(x1111==x1112)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x1122 = 29;
	int32_t x1123 = INT32_MAX;
	int16_t x1124 = INT16_MAX;
	volatile int32_t t143 = 1165432;

    t143 = (x1121%(x1122>>(x1123==x1124)));

    if (t143 != -27) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x1126 = 19LLU;
	int16_t x1127 = 210;
	volatile int64_t x1128 = INT64_MIN;
	uint64_t t144 = 789LLU;

    t144 = (x1125%(x1126>>(x1127==x1128)));

    if (t144 != 7LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint8_t x1137 = 2U;
	static int16_t x1139 = INT16_MIN;
	uint16_t x1140 = 230U;

    t145 = (x1137%(x1138>>(x1139==x1140)));

    if (t145 != 2) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x1146 = 510LLU;
	int8_t x1148 = 1;
	volatile uint64_t t146 = 128858745227LLU;

    t146 = (x1145%(x1146>>(x1147==x1148)));

    if (t146 != 128LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x1149 = INT16_MIN;
	static volatile int8_t x1152 = -1;
	uint64_t t147 = 56622724LLU;

    t147 = (x1149%(x1150>>(x1151==x1152)));

    if (t147 != 249866LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1158 = 27U;
	uint64_t x1159 = 2349876643528530LLU;
	static uint16_t x1160 = UINT16_MAX;
	volatile int32_t t148 = 42353;

    t148 = (x1157%(x1158>>(x1159==x1160)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x1165 = 442LL;
	uint16_t x1166 = 12U;
	int64_t x1167 = 1070579276LL;
	static int64_t x1168 = INT64_MAX;
	volatile int64_t t149 = -128LL;

    t149 = (x1165%(x1166>>(x1167==x1168)));

    if (t149 != 10LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint8_t x1173 = 6U;
	static uint64_t x1174 = 618191LLU;
	int16_t x1175 = -64;
	static int16_t x1176 = 45;
	uint64_t t150 = 4LLU;

    t150 = (x1173%(x1174>>(x1175==x1176)));

    if (t150 != 6LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x1189 = INT64_MIN;
	volatile int64_t x1191 = INT64_MAX;
	uint64_t x1192 = 3878096080583228116LLU;
	static int64_t t151 = -1856925335324305298LL;

    t151 = (x1189%(x1190>>(x1191==x1192)));

    if (t151 != -3LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x1193 = INT64_MIN;
	static uint64_t x1194 = 7LLU;
	static int32_t x1195 = INT32_MIN;
	uint64_t t152 = 96642LLU;

    t152 = (x1193%(x1194>>(x1195==x1196)));

    if (t152 != 1LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x1201 = INT8_MAX;
	volatile uint32_t x1203 = 3U;
	static volatile uint32_t x1204 = 2142391U;
	volatile uint64_t t153 = 2039019458225LLU;

    t153 = (x1201%(x1202>>(x1203==x1204)));

    if (t153 != 127LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x1209 = -18;
	static volatile uint8_t x1210 = UINT8_MAX;
	uint32_t x1211 = 5083264U;
	int32_t t154 = 5;

    t154 = (x1209%(x1210>>(x1211==x1212)));

    if (t154 != -18) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1213 = -1LL;
	int16_t x1215 = -256;
	uint8_t x1216 = UINT8_MAX;
	volatile int64_t t155 = 42LL;

    t155 = (x1213%(x1214>>(x1215==x1216)));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x1226 = INT16_MAX;
	uint32_t x1227 = UINT32_MAX;
	uint8_t x1228 = 2U;

    t156 = (x1225%(x1226>>(x1227==x1228)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1229 = 28974852366534465LLU;
	uint16_t x1230 = UINT16_MAX;

    t157 = (x1229%(x1230>>(x1231==x1232)));

    if (t157 != 32475LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1233 = INT64_MIN;
	int32_t x1234 = INT32_MAX;
	uint64_t x1236 = 80213702LLU;
	static int64_t t158 = -772264LL;

    t158 = (x1233%(x1234>>(x1235==x1236)));

    if (t158 != -2LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1242 = 2840465662775615557LLU;
	static int64_t x1243 = -1LL;
	volatile uint64_t t159 = 2642445497LLU;

    t159 = (x1241%(x1242>>(x1243==x1244)));

    if (t159 != 1403950097055858273LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x1257 = 6;
	uint16_t x1258 = 15U;
	int64_t x1260 = INT64_MIN;
	volatile int32_t t160 = -23281084;

    t160 = (x1257%(x1258>>(x1259==x1260)));

    if (t160 != 6) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x1265 = -1;
	volatile uint8_t x1266 = 1U;
	volatile int16_t x1267 = -1;
	int16_t x1268 = 10;
	int32_t t161 = 0;

    t161 = (x1265%(x1266>>(x1267==x1268)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1273 = 40;
	int32_t x1274 = 112;
	int16_t x1275 = INT16_MIN;
	volatile int32_t t162 = -2559076;

    t162 = (x1273%(x1274>>(x1275==x1276)));

    if (t162 != 40) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x1278 = 29U;
	int64_t x1279 = 335680LL;
	int16_t x1280 = -30;
	volatile int32_t t163 = 930432;

    t163 = (x1277%(x1278>>(x1279==x1280)));

    if (t163 != -27) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x1285 = INT32_MIN;
	uint16_t x1286 = 12U;
	static int16_t x1287 = INT16_MAX;
	uint64_t x1288 = 960068LLU;
	volatile int32_t t164 = -68420;

    t164 = (x1285%(x1286>>(x1287==x1288)));

    if (t164 != -8) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x1290 = UINT8_MAX;
	int16_t x1291 = 32;
	volatile int16_t x1292 = -1;
	volatile int32_t t165 = 14436;

    t165 = (x1289%(x1290>>(x1291==x1292)));

    if (t165 != -1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1293 = INT64_MIN;
	static uint64_t x1294 = UINT64_MAX;
	static volatile int32_t x1296 = -207261772;

    t166 = (x1293%(x1294>>(x1295==x1296)));

    if (t166 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1297 = INT64_MIN;
	uint8_t x1298 = UINT8_MAX;
	int8_t x1300 = -14;
	int64_t t167 = -3363974907LL;

    t167 = (x1297%(x1298>>(x1299==x1300)));

    if (t167 != -128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x1314 = 2;
	volatile int64_t x1315 = 1480076459170330LL;
	volatile uint64_t t168 = 418127LLU;

    t168 = (x1313%(x1314>>(x1315==x1316)));

    if (t168 != 1LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x1338 = UINT8_MAX;
	int64_t x1339 = -1LL;
	int32_t x1340 = 23192150;

    t169 = (x1337%(x1338>>(x1339==x1340)));

    if (t169 != 127LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1345 = -118;
	uint32_t x1347 = 134053804U;
	int32_t x1348 = 194338061;
	volatile int32_t t170 = -3217;

    t170 = (x1345%(x1346>>(x1347==x1348)));

    if (t170 != -118) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x1349 = INT16_MIN;
	int8_t x1350 = 2;
	volatile int32_t x1351 = 189149557;
	int64_t x1352 = 31903244281250LL;
	volatile int32_t t171 = -9;

    t171 = (x1349%(x1350>>(x1351==x1352)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x1362 = INT64_MAX;
	uint64_t x1364 = 574LLU;
	volatile int64_t t172 = 33549759582514350LL;

    t172 = (x1361%(x1362>>(x1363==x1364)));

    if (t172 != 68LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1377 = INT8_MIN;
	int16_t x1378 = 8432;
	uint16_t x1379 = 28031U;
	volatile int64_t x1380 = INT64_MAX;
	volatile int32_t t173 = 27699367;

    t173 = (x1377%(x1378>>(x1379==x1380)));

    if (t173 != -128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1381 = INT8_MAX;
	static uint64_t x1382 = UINT64_MAX;
	int32_t x1383 = 223249;
	int8_t x1384 = -1;
	volatile uint64_t t174 = 530LLU;

    t174 = (x1381%(x1382>>(x1383==x1384)));

    if (t174 != 127LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1385 = -1718LL;
	int16_t x1386 = 2;
	int16_t x1387 = INT16_MIN;
	volatile uint16_t x1388 = 719U;
	int64_t t175 = -1049328480LL;

    t175 = (x1385%(x1386>>(x1387==x1388)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x1393 = -1LL;
	int16_t x1394 = INT16_MAX;
	uint64_t x1395 = UINT64_MAX;
	int16_t x1396 = -1;
	int64_t t176 = 135748994366800744LL;

    t176 = (x1393%(x1394>>(x1395==x1396)));

    if (t176 != -1LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1401 = UINT16_MAX;
	uint32_t x1403 = 9653U;
	static int32_t x1404 = -225;
	volatile uint64_t t177 = 2134562113028824LLU;

    t177 = (x1401%(x1402>>(x1403==x1404)));

    if (t177 != 65535LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1413 = -4LL;
	uint16_t x1414 = 1U;
	int32_t x1415 = INT32_MIN;
	volatile int16_t x1416 = INT16_MAX;
	volatile int64_t t178 = -100969638009967LL;

    t178 = (x1413%(x1414>>(x1415==x1416)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1418 = UINT8_MAX;
	uint16_t x1420 = 9471U;
	volatile int32_t t179 = 200700746;

    t179 = (x1417%(x1418>>(x1419==x1420)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1421 = 121;
	uint8_t x1422 = UINT8_MAX;
	int32_t x1423 = -2531270;
	int16_t x1424 = -1;
	int32_t t180 = 24730;

    t180 = (x1421%(x1422>>(x1423==x1424)));

    if (t180 != 121) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1426 = INT32_MAX;
	static int16_t x1427 = INT16_MIN;
	volatile int8_t x1428 = INT8_MAX;
	volatile int64_t t181 = -7LL;

    t181 = (x1425%(x1426>>(x1427==x1428)));

    if (t181 != -2LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile uint32_t x1429 = 260792U;
	static volatile int32_t x1430 = 15;
	static int64_t x1431 = -3386515LL;
	uint16_t x1432 = 81U;

    t182 = (x1429%(x1430>>(x1431==x1432)));

    if (t182 != 2U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1433 = UINT32_MAX;
	int64_t x1434 = 3111519207LL;
	int64_t x1435 = INT64_MIN;
	volatile int16_t x1436 = INT16_MIN;
	int64_t t183 = 320406904223679LL;

    t183 = (x1433%(x1434>>(x1435==x1436)));

    if (t183 != 1183448088LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1438 = INT16_MAX;
	int8_t x1439 = INT8_MIN;
	uint16_t x1440 = UINT16_MAX;

    t184 = (x1437%(x1438>>(x1439==x1440)));

    if (t184 != -19457) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1445 = 50339344291187LLU;
	uint32_t x1446 = UINT32_MAX;
	int32_t x1447 = 0;
	uint8_t x1448 = 84U;
	volatile uint64_t t185 = 452507LLU;

    t185 = (x1445%(x1446>>(x1447==x1448)));

    if (t185 != 2327593787LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1453 = INT8_MAX;
	static int32_t x1455 = INT32_MIN;
	volatile uint8_t x1456 = 3U;
	int64_t t186 = -4316973LL;

    t186 = (x1453%(x1454>>(x1455==x1456)));

    if (t186 != 127LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x1465 = 1U;
	volatile uint32_t x1467 = 59123U;
	int16_t x1468 = -1;
	volatile int32_t t187 = 42886928;

    t187 = (x1465%(x1466>>(x1467==x1468)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1469 = UINT16_MAX;
	static uint64_t x1470 = 579LLU;
	uint8_t x1471 = UINT8_MAX;
	int64_t x1472 = -1LL;
	uint64_t t188 = 3489354961839765LLU;

    t188 = (x1469%(x1470>>(x1471==x1472)));

    if (t188 != 108LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1473 = UINT64_MAX;
	uint32_t x1474 = 12427623U;
	uint8_t x1475 = UINT8_MAX;
	static int8_t x1476 = -1;

    t189 = (x1473%(x1474>>(x1475==x1476)));

    if (t189 != 7736406LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1493 = 166735LL;
	int8_t x1494 = INT8_MAX;
	static volatile int64_t t190 = 6687LL;

    t190 = (x1493%(x1494>>(x1495==x1496)));

    if (t190 != 111LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1505 = 424651201LL;
	static int64_t x1506 = 15386499LL;
	static int8_t x1507 = INT8_MAX;
	static volatile int8_t x1508 = INT8_MIN;
	int64_t t191 = -48783454LL;

    t191 = (x1505%(x1506>>(x1507==x1508)));

    if (t191 != 9215728LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1509 = -1134LL;
	static uint8_t x1510 = UINT8_MAX;
	static uint32_t x1511 = UINT32_MAX;
	static int32_t x1512 = 907225;
	int64_t t192 = 125708300810300LL;

    t192 = (x1509%(x1510>>(x1511==x1512)));

    if (t192 != -114LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1522 = INT16_MAX;
	volatile uint64_t x1523 = 3567819770621LLU;
	uint32_t x1524 = 76363U;

    t193 = (x1521%(x1522>>(x1523==x1524)));

    if (t193 != 127) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x1533 = -6;
	int64_t x1535 = INT64_MIN;
	int32_t x1536 = INT32_MIN;
	volatile int32_t t194 = -163324944;

    t194 = (x1533%(x1534>>(x1535==x1536)));

    if (t194 != -6) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x1537 = INT32_MIN;
	static int32_t x1538 = INT32_MAX;
	static int64_t x1539 = 18624094287491LL;
	int16_t x1540 = -1;
	volatile int32_t t195 = -2471044;

    t195 = (x1537%(x1538>>(x1539==x1540)));

    if (t195 != -1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1541 = -1;
	static volatile uint8_t x1543 = 26U;

    t196 = (x1541%(x1542>>(x1543==x1544)));

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1545 = INT32_MIN;
	int64_t x1546 = INT64_MAX;
	int16_t x1548 = INT16_MIN;
	int64_t t197 = -1015743554098246LL;

    t197 = (x1545%(x1546>>(x1547==x1548)));

    if (t197 != -2147483648LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1557 = 1;
	int16_t x1559 = INT16_MIN;
	int32_t x1560 = 6478;
	volatile uint32_t t198 = 656926U;

    t198 = (x1557%(x1558>>(x1559==x1560)));

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1573 = 75U;
	uint8_t x1574 = 1U;
	uint64_t x1575 = UINT64_MAX;
	uint64_t x1576 = 21845340624LLU;

    t199 = (x1573%(x1574>>(x1575==x1576)));

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

