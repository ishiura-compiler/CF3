
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

uint32_t x1 = 49U;
volatile uint32_t t0 = 0U;
int32_t x7 = 0;
volatile int32_t t2 = 24250;
volatile int8_t x16 = INT8_MIN;
static int64_t x34 = INT64_MIN;
int32_t x38 = INT32_MAX;
int32_t x42 = 66850050;
int8_t x43 = INT8_MIN;
uint16_t x45 = UINT16_MAX;
static uint16_t x49 = 105U;
uint64_t x52 = UINT64_MAX;
volatile uint64_t x57 = 51865273305LLU;
static int16_t x64 = INT16_MIN;
volatile int32_t x67 = INT32_MAX;
int8_t x71 = -43;
int64_t x80 = -17LL;
uint64_t x83 = UINT64_MAX;
static int16_t x84 = 1;
int8_t x87 = INT8_MIN;
uint64_t x98 = UINT64_MAX;
int16_t x103 = INT16_MIN;
volatile uint64_t t23 = 39LLU;
volatile int32_t t24 = 41;
int16_t x121 = -181;
int32_t x122 = -1;
int64_t x123 = INT64_MIN;
static int32_t t26 = 527784580;
int32_t x127 = INT32_MIN;
static volatile int32_t t27 = 82;
uint64_t x130 = 842307004142445186LLU;
int8_t x134 = INT8_MAX;
static uint16_t x141 = 1315U;
static uint32_t x142 = 2121012U;
uint64_t x144 = UINT64_MAX;
volatile int32_t t31 = -4;
int64_t x152 = 3958160125059LL;
volatile int32_t t32 = -650113;
static uint8_t x156 = 0U;
int16_t x161 = INT16_MIN;
int16_t x167 = -3443;
int16_t x169 = -2;
int64_t x175 = INT64_MIN;
int16_t x182 = INT16_MAX;
volatile int32_t t39 = -10365189;
int32_t t40 = 1;
static int16_t x198 = INT16_MIN;
static int16_t x205 = -1;
int64_t x210 = -1LL;
uint64_t x211 = 385982LLU;
int64_t x218 = -419LL;
static int16_t x220 = INT16_MIN;
int32_t t46 = -4111264;
int32_t t47 = 9;
uint32_t x240 = 807264U;
int16_t x263 = 0;
int8_t x264 = -22;
int32_t t54 = -451050063;
static int32_t x274 = 686473;
int16_t x275 = -55;
static volatile uint16_t x276 = 387U;
int64_t t56 = -1403690500LL;
static volatile int16_t x281 = INT16_MIN;
int32_t t58 = 4;
uint32_t x289 = 2U;
volatile uint32_t t59 = 491759U;
uint64_t x300 = 41874646359704734LLU;
int8_t x306 = INT8_MIN;
volatile int32_t t63 = -2;
uint8_t x322 = 44U;
static uint16_t x326 = 108U;
uint32_t x332 = 10386503U;
static uint16_t x339 = UINT16_MAX;
uint8_t x351 = 111U;
static int8_t x352 = -21;
int16_t x362 = INT16_MIN;
int8_t x376 = -1;
int32_t t72 = 15;
int16_t x386 = INT16_MAX;
int8_t x387 = INT8_MAX;
volatile uint32_t x388 = 872466U;
int32_t x389 = -1;
int8_t x392 = 6;
volatile int32_t t76 = 18496146;
uint8_t x395 = 0U;
uint64_t x397 = UINT64_MAX;
int16_t x399 = INT16_MIN;
volatile uint32_t x401 = UINT32_MAX;
static uint16_t x403 = 47U;
volatile uint64_t x407 = 33785LLU;
static volatile int8_t x411 = INT8_MIN;
int64_t t81 = 601599476462643607LL;
int16_t x432 = INT16_MIN;
uint64_t x440 = 16806758009778243LLU;
int64_t x444 = -23369971837LL;
uint8_t x447 = 25U;
static uint8_t x465 = 3U;
static int8_t x475 = -1;
int16_t x483 = INT16_MAX;
volatile int64_t x490 = INT64_MAX;
int16_t x492 = INT16_MAX;
volatile int32_t t94 = -1325572;
uint16_t x517 = 539U;
uint32_t x524 = UINT32_MAX;
static int8_t x526 = INT8_MIN;
int8_t x528 = INT8_MIN;
static int16_t x541 = INT16_MIN;
uint64_t x542 = UINT64_MAX;
int64_t x543 = 4714LL;
volatile int64_t t104 = 40031LL;
uint64_t x555 = 705LLU;
static uint16_t x564 = UINT16_MAX;
uint8_t x565 = 54U;
volatile uint64_t x566 = 3227819044LLU;
volatile uint8_t x568 = 2U;
int16_t x578 = -1;
int32_t x580 = INT32_MIN;
static int16_t x595 = INT16_MIN;
int32_t t110 = -7695;
volatile int16_t x599 = 1;
int32_t t111 = -3714;
int32_t x601 = -1;
static int8_t x604 = 4;
int32_t t112 = -47237937;
volatile int64_t x606 = INT64_MAX;
uint32_t x613 = 52786U;
uint16_t x616 = UINT16_MAX;
int8_t x620 = -1;
static int32_t x626 = INT32_MIN;
static int16_t x630 = 4446;
int64_t t120 = 4778851113325858LL;
int32_t t122 = -4995;
static int8_t x653 = INT8_MIN;
volatile int64_t x655 = -1LL;
static volatile uint32_t t125 = 130325U;
int32_t x671 = 3;
int8_t x677 = INT8_MAX;
uint8_t x681 = UINT8_MAX;
volatile int64_t x688 = 9710439458LL;
static uint64_t x708 = UINT64_MAX;
int32_t t132 = -47;
static int32_t x709 = INT32_MIN;
static volatile int32_t t133 = -45;
uint64_t x713 = UINT64_MAX;
int32_t x716 = -32817617;
uint64_t t134 = 2419868LLU;
static volatile int32_t x724 = 345591;
int64_t x745 = 0LL;
static uint64_t x747 = 4154062289003073LLU;
int32_t x748 = INT32_MAX;
int64_t t138 = 9846651796955428LL;
uint16_t x749 = 0U;
int16_t x758 = INT16_MAX;
volatile int32_t t140 = 5;
static volatile int32_t t143 = -211;
volatile uint16_t x785 = 15U;
int8_t x786 = INT8_MIN;
int32_t t145 = -191804436;
int64_t x802 = -118LL;
static int64_t x805 = -12LL;
volatile int64_t t149 = 0LL;
uint16_t x809 = 126U;
volatile int64_t x814 = -5LL;
uint16_t x819 = 5U;
uint32_t x821 = UINT32_MAX;
uint64_t x824 = UINT64_MAX;
volatile int64_t x826 = -284411080320906LL;
int32_t t154 = 8;
int8_t x831 = INT8_MAX;
uint16_t x835 = 1U;
volatile int8_t x845 = INT8_MIN;
int16_t x849 = INT16_MIN;
int32_t x852 = 0;
static uint32_t x858 = UINT32_MAX;
int64_t x859 = INT64_MIN;
volatile int8_t x864 = 1;
static int8_t x866 = 29;
volatile uint64_t x868 = 1478770945917015035LLU;
static int32_t t163 = -11;
int8_t x880 = 1;
volatile int8_t x892 = INT8_MIN;
uint16_t x905 = 2166U;
volatile uint32_t x909 = 23U;
uint64_t x929 = 106443084929272892LLU;
int8_t x935 = INT8_MIN;
int32_t x938 = -1;
int32_t t175 = 2079624;
uint64_t x953 = UINT64_MAX;
static uint64_t t176 = 5072190LLU;
int16_t x974 = INT16_MIN;
int32_t t180 = 64;
static volatile int32_t t181 = -89322321;
static int8_t x995 = 1;
uint16_t x999 = 3415U;
static volatile int8_t x1006 = 7;
uint64_t t187 = 1065060451489665062LLU;
volatile int16_t x1022 = -339;
int8_t x1028 = INT8_MAX;
static volatile int8_t x1032 = INT8_MIN;
int16_t x1048 = 0;
int64_t x1049 = -7552691725947LL;
int16_t x1053 = -1;
volatile int32_t t194 = 20706556;
int64_t x1063 = -1LL;
uint8_t x1068 = 24U;
static uint8_t x1085 = 31U;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = 0U;
	volatile int8_t x4 = INT8_MIN;

    t0 = (x1+(x2!=(x3*x4)));

    if (t0 != 50U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	uint16_t x6 = 5U;
	volatile int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -113842;

    t1 = (x5+(x6!=(x7*x8)));

    if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int8_t x10 = 17;
	volatile int64_t x11 = -1LL;
	static int64_t x12 = -8523615925LL;

    t2 = (x9+(x10!=(x11*x12)));

    if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int64_t x14 = INT64_MIN;
	int32_t x15 = -1;
	int32_t t3 = 90;

    t3 = (x13+(x14!=(x15*x16)));

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x17 = 178U;
	uint16_t x18 = 8028U;
	uint64_t x19 = 49534630654603LLU;
	volatile int16_t x20 = INT16_MAX;
	int32_t t4 = 58;

    t4 = (x17+(x18!=(x19*x20)));

    if (t4 != 179) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = 8;
	static int64_t x22 = INT64_MAX;
	volatile int64_t x23 = -1LL;
	int16_t x24 = -1;
	int32_t t5 = -485;

    t5 = (x21+(x22!=(x23*x24)));

    if (t5 != 9) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -103;
	int8_t x26 = 29;
	static volatile int32_t x27 = -116012;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -62;

    t6 = (x25+(x26!=(x27*x28)));

    if (t6 != -102) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x33 = 1U;
	static int16_t x35 = -1;
	int64_t x36 = -41732037703025121LL;
	volatile int32_t t7 = -212933401;

    t7 = (x33+(x34!=(x35*x36)));

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x37 = INT32_MIN;
	int8_t x39 = INT8_MIN;
	static uint32_t x40 = 194U;
	volatile int32_t t8 = 1;

    t8 = (x37+(x38!=(x39*x40)));

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x41 = 1U;
	int8_t x44 = -18;
	volatile int32_t t9 = 6377;

    t9 = (x41+(x42!=(x43*x44)));

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x46 = 59;
	int32_t x47 = 3991455;
	int32_t x48 = -1;
	static volatile int32_t t10 = -113;

    t10 = (x45+(x46!=(x47*x48)));

    if (t10 != 65536) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x50 = 225527LLU;
	uint32_t x51 = 3U;
	int32_t t11 = 15346720;

    t11 = (x49+(x50!=(x51*x52)));

    if (t11 != 106) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	static uint16_t x54 = 1950U;
	int64_t x55 = -1LL;
	int16_t x56 = -1;
	int32_t t12 = -2087;

    t12 = (x53+(x54!=(x55*x56)));

    if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x58 = INT16_MAX;
	uint8_t x59 = 30U;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t13 = 1452436LLU;

    t13 = (x57+(x58!=(x59*x60)));

    if (t13 != 51865273306LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x61 = 35;
	uint16_t x62 = 0U;
	uint16_t x63 = 0U;
	int32_t t14 = 784135825;

    t14 = (x61+(x62!=(x63*x64)));

    if (t14 != 35) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x65 = 0U;
	static int64_t x66 = INT64_MAX;
	int64_t x68 = -1LL;
	int32_t t15 = -155583898;

    t15 = (x65+(x66!=(x67*x68)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x69 = UINT8_MAX;
	static int16_t x70 = INT16_MIN;
	volatile int8_t x72 = -1;
	int32_t t16 = 5197;

    t16 = (x69+(x70!=(x71*x72)));

    if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x77 = 59929382U;
	uint64_t x78 = 236062941LLU;
	int16_t x79 = -1;
	volatile uint32_t t17 = 1U;

    t17 = (x77+(x78!=(x79*x80)));

    if (t17 != 59929383U) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x81 = 25339527LLU;
	int16_t x82 = INT16_MIN;
	static volatile uint64_t t18 = 103345750LLU;

    t18 = (x81+(x82!=(x83*x84)));

    if (t18 != 25339528LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	static uint8_t x86 = 119U;
	int16_t x88 = INT16_MAX;
	int64_t t19 = 207527003LL;

    t19 = (x85+(x86!=(x87*x88)));

    if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 15U;
	int32_t x99 = -1;
	int32_t x100 = 200;
	static int32_t t20 = -108;

    t20 = (x97+(x98!=(x99*x100)));

    if (t20 != 16) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = INT16_MIN;
	static int64_t x102 = -1LL;
	static int16_t x104 = 7;
	int32_t t21 = -1;

    t21 = (x101+(x102!=(x103*x104)));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x105 = 0U;
	uint32_t x106 = 356374U;
	uint8_t x107 = 1U;
	int64_t x108 = 3494178583LL;
	int32_t t22 = -181317286;

    t22 = (x105+(x106!=(x107*x108)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint64_t x109 = 220374742363LLU;
	int64_t x110 = INT64_MIN;
	static int8_t x111 = INT8_MIN;
	static int8_t x112 = INT8_MIN;

    t23 = (x109+(x110!=(x111*x112)));

    if (t23 != 220374742364LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x113 = 79069632;
	volatile int16_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 27558937180708137LLU;

    t24 = (x113+(x114!=(x115*x116)));

    if (t24 != 79069633) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 11042030U;
	uint64_t x118 = 169916439853746LLU;
	volatile int8_t x119 = INT8_MIN;
	volatile int8_t x120 = INT8_MIN;
	volatile uint32_t t25 = 9U;

    t25 = (x117+(x118!=(x119*x120)));

    if (t25 != 11042031U) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x124 = 2865836LLU;

    t26 = (x121+(x122!=(x123*x124)));

    if (t26 != -180) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x125 = UINT8_MAX;
	int64_t x126 = -315036985797606442LL;
	uint64_t x128 = 2327026412878814287LLU;

    t27 = (x125+(x126!=(x127*x128)));

    if (t27 != 256) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = 3329320LL;
	static uint32_t x131 = 3282036U;
	uint64_t x132 = 60907132723287601LLU;
	volatile int64_t t28 = -29484048LL;

    t28 = (x129+(x130!=(x131*x132)));

    if (t28 != 3329321LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x133 = 58;
	uint8_t x135 = 46U;
	static int8_t x136 = INT8_MAX;
	volatile int32_t t29 = -549484651;

    t29 = (x133+(x134!=(x135*x136)));

    if (t29 != 59) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x137 = -1;
	volatile int16_t x138 = 9935;
	int64_t x139 = INT64_MIN;
	uint64_t x140 = 5LLU;
	volatile int32_t t30 = -3;

    t30 = (x137+(x138!=(x139*x140)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int64_t x143 = INT64_MIN;

    t31 = (x141+(x142!=(x143*x144)));

    if (t31 != 1316) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = 0;
	volatile int8_t x150 = INT8_MAX;
	static volatile int16_t x151 = INT16_MAX;

    t32 = (x149+(x150!=(x151*x152)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = INT8_MIN;
	int8_t x154 = 0;
	int64_t x155 = -1777961983115LL;
	static volatile int32_t t33 = 2716383;

    t33 = (x153+(x154!=(x155*x156)));

    if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x162 = INT32_MAX;
	volatile int32_t x163 = 1651;
	int64_t x164 = -1LL;
	int32_t t34 = -60009476;

    t34 = (x161+(x162!=(x163*x164)));

    if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = -1;
	int64_t x166 = -16149130981LL;
	int8_t x168 = INT8_MIN;
	volatile int32_t t35 = -8319669;

    t35 = (x165+(x166!=(x167*x168)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x170 = 19010074410552788LL;
	uint32_t x171 = UINT32_MAX;
	uint64_t x172 = 3373333613839931LLU;
	volatile int32_t t36 = 759121603;

    t36 = (x169+(x170!=(x171*x172)));

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = -1;
	uint32_t x174 = UINT32_MAX;
	static uint64_t x176 = 170595208166782LLU;
	volatile int32_t t37 = -24139305;

    t37 = (x173+(x174!=(x175*x176)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x181 = 56LLU;
	int8_t x183 = -1;
	static int64_t x184 = -1LL;
	volatile uint64_t t38 = 322784059LLU;

    t38 = (x181+(x182!=(x183*x184)));

    if (t38 != 57LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	static volatile int64_t x191 = -526LL;
	volatile int8_t x192 = INT8_MAX;

    t39 = (x189+(x190!=(x191*x192)));

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x193 = UINT16_MAX;
	int32_t x194 = 3;
	static uint32_t x195 = 345338U;
	int16_t x196 = -21;

    t40 = (x193+(x194!=(x195*x196)));

    if (t40 != 65536) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x197 = 217593184LL;
	volatile uint64_t x199 = UINT64_MAX;
	int32_t x200 = 967;
	int64_t t41 = 2LL;

    t41 = (x197+(x198!=(x199*x200)));

    if (t41 != 217593185LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x206 = INT8_MIN;
	int8_t x207 = 1;
	int8_t x208 = INT8_MIN;
	static int32_t t42 = 53950;

    t42 = (x205+(x206!=(x207*x208)));

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x209 = 45887U;
	static int64_t x212 = 19586LL;
	volatile uint32_t t43 = 13313878U;

    t43 = (x209+(x210!=(x211*x212)));

    if (t43 != 45888U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x213 = 297U;
	int16_t x214 = INT16_MIN;
	static int16_t x215 = -6956;
	static volatile int8_t x216 = INT8_MAX;
	volatile uint32_t t44 = 91U;

    t44 = (x213+(x214!=(x215*x216)));

    if (t44 != 298U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = -12188104077LL;
	int8_t x219 = 2;
	volatile int64_t t45 = -41452LL;

    t45 = (x217+(x218!=(x219*x220)));

    if (t45 != -12188104076LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x229 = -1;
	static int32_t x230 = -2;
	volatile uint16_t x231 = UINT16_MAX;
	uint8_t x232 = 1U;

    t46 = (x229+(x230!=(x231*x232)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x233 = UINT16_MAX;
	int8_t x234 = INT8_MAX;
	int8_t x235 = -1;
	static int64_t x236 = INT64_MAX;

    t47 = (x233+(x234!=(x235*x236)));

    if (t47 != 65536) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x237 = UINT64_MAX;
	int16_t x238 = -1;
	volatile int16_t x239 = INT16_MIN;
	static volatile uint64_t t48 = 8310296834779LLU;

    t48 = (x237+(x238!=(x239*x240)));

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 2364U;
	int16_t x243 = INT16_MAX;
	int64_t x244 = -1LL;
	int32_t t49 = 514;

    t49 = (x241+(x242!=(x243*x244)));

    if (t49 != 256) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x253 = INT8_MAX;
	static uint64_t x254 = 623297657125LLU;
	int32_t x255 = INT32_MAX;
	uint32_t x256 = 1514862U;
	static volatile int32_t t50 = -3;

    t50 = (x253+(x254!=(x255*x256)));

    if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x257 = 26;
	static int64_t x258 = 964787236004289585LL;
	int8_t x259 = INT8_MIN;
	uint64_t x260 = 487706LLU;
	int32_t t51 = -111;

    t51 = (x257+(x258!=(x259*x260)));

    if (t51 != 27) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x261 = 772978;
	static int8_t x262 = -1;
	volatile int32_t t52 = 0;

    t52 = (x261+(x262!=(x263*x264)));

    if (t52 != 772979) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x265 = UINT32_MAX;
	int16_t x266 = 7;
	uint32_t x267 = 31849U;
	int16_t x268 = 381;
	uint32_t t53 = 4074U;

    t53 = (x265+(x266!=(x267*x268)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x269 = 7U;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = 1U;

    t54 = (x269+(x270!=(x271*x272)));

    if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x273 = INT32_MIN;
	static volatile int32_t t55 = 848880110;

    t55 = (x273+(x274!=(x275*x276)));

    if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x277 = -24080203046501LL;
	uint64_t x278 = UINT64_MAX;
	static volatile uint32_t x279 = 126U;
	int16_t x280 = 0;

    t56 = (x277+(x278!=(x279*x280)));

    if (t56 != -24080203046500LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x282 = 3U;
	volatile uint64_t x283 = 529028408683718043LLU;
	int32_t x284 = INT32_MAX;
	int32_t t57 = 1;

    t57 = (x281+(x282!=(x283*x284)));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = INT8_MAX;
	uint16_t x286 = UINT16_MAX;
	static int8_t x287 = -1;
	int8_t x288 = INT8_MAX;

    t58 = (x285+(x286!=(x287*x288)));

    if (t58 != 128) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x290 = 61572LLU;
	uint16_t x291 = UINT16_MAX;
	int16_t x292 = INT16_MAX;

    t59 = (x289+(x290!=(x291*x292)));

    if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x297 = 621669U;
	uint8_t x298 = 126U;
	int64_t x299 = 10840LL;
	volatile uint32_t t60 = 116312441U;

    t60 = (x297+(x298!=(x299*x300)));

    if (t60 != 621670U) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x301 = INT64_MIN;
	int64_t x302 = INT64_MAX;
	uint64_t x303 = 154407LLU;
	int16_t x304 = INT16_MIN;
	volatile int64_t t61 = -3826436266LL;

    t61 = (x301+(x302!=(x303*x304)));

    if (t61 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x305 = -5LL;
	int16_t x307 = INT16_MIN;
	uint64_t x308 = 7608836LLU;
	volatile int64_t t62 = -15305717LL;

    t62 = (x305+(x306!=(x307*x308)));

    if (t62 != -4LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x314 = 1;
	int16_t x315 = INT16_MAX;
	int16_t x316 = 1;

    t63 = (x313+(x314!=(x315*x316)));

    if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x317 = 261LL;
	volatile int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int64_t t64 = 2047555845LL;

    t64 = (x317+(x318!=(x319*x320)));

    if (t64 != 262LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x321 = UINT32_MAX;
	static volatile int8_t x323 = -1;
	int8_t x324 = INT8_MIN;
	uint32_t t65 = 97440581U;

    t65 = (x321+(x322!=(x323*x324)));

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x325 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	static int8_t x328 = INT8_MIN;
	int64_t t66 = -1326273502270961LL;

    t66 = (x325+(x326!=(x327*x328)));

    if (t66 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 7503U;
	volatile int32_t x331 = -3040;
	volatile int32_t t67 = 51;

    t67 = (x329+(x330!=(x331*x332)));

    if (t67 != 65536) { NG(); } else { ; }
	
}

void f68(void) {
    	static volatile int16_t x337 = INT16_MIN;
	int64_t x338 = -1LL;
	int8_t x340 = -1;
	volatile int32_t t68 = 2061000;

    t68 = (x337+(x338!=(x339*x340)));

    if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x349 = 4U;
	int64_t x350 = -1LL;
	volatile int32_t t69 = -172;

    t69 = (x349+(x350!=(x351*x352)));

    if (t69 != 5) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x361 = -1;
	volatile int64_t x363 = -16958146522LL;
	uint32_t x364 = 305614180U;
	static int32_t t70 = -45;

    t70 = (x361+(x362!=(x363*x364)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x369 = 56U;
	int16_t x370 = -1;
	int64_t x371 = 3263955852LL;
	int16_t x372 = -1;
	int32_t t71 = 1;

    t71 = (x369+(x370!=(x371*x372)));

    if (t71 != 57) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x373 = 12U;
	uint16_t x374 = 3U;
	int8_t x375 = INT8_MIN;

    t72 = (x373+(x374!=(x375*x376)));

    if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x377 = UINT8_MAX;
	static int16_t x378 = -1;
	volatile int32_t x379 = -185642;
	volatile int32_t x380 = 49;
	int32_t t73 = 39;

    t73 = (x377+(x378!=(x379*x380)));

    if (t73 != 256) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x381 = 0;
	volatile int32_t x382 = INT32_MIN;
	int8_t x383 = INT8_MIN;
	volatile int32_t x384 = -402956;
	volatile int32_t t74 = -3713;

    t74 = (x381+(x382!=(x383*x384)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x385 = INT16_MAX;
	int32_t t75 = 388542;

    t75 = (x385+(x386!=(x387*x388)));

    if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x390 = INT64_MIN;
	int64_t x391 = -2930530046753530LL;

    t76 = (x389+(x390!=(x391*x392)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x393 = -1;
	int64_t x394 = -1LL;
	int16_t x396 = 7;
	int32_t t77 = 33831;

    t77 = (x393+(x394!=(x395*x396)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x398 = 22055655LLU;
	volatile int64_t x400 = -1395LL;
	uint64_t t78 = 16337311331LLU;

    t78 = (x397+(x398!=(x399*x400)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x402 = -1;
	static int16_t x404 = -1;
	uint32_t t79 = 85U;

    t79 = (x401+(x402!=(x403*x404)));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x405 = -1;
	uint8_t x406 = UINT8_MAX;
	volatile uint64_t x408 = 2957548556LLU;
	volatile int32_t t80 = 9276460;

    t80 = (x405+(x406!=(x407*x408)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x409 = -1LL;
	volatile int64_t x410 = 4151532806400836LL;
	int8_t x412 = -1;

    t81 = (x409+(x410!=(x411*x412)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x413 = -957603;
	volatile int32_t x414 = INT32_MIN;
	uint8_t x415 = UINT8_MAX;
	int32_t x416 = -46489;
	static volatile int32_t t82 = 777765829;

    t82 = (x413+(x414!=(x415*x416)));

    if (t82 != -957602) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x417 = 3151161U;
	int32_t x418 = INT32_MAX;
	volatile uint64_t x419 = 10913857597679LLU;
	int8_t x420 = INT8_MAX;
	volatile uint32_t t83 = 2325U;

    t83 = (x417+(x418!=(x419*x420)));

    if (t83 != 3151162U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x425 = 90U;
	static uint8_t x426 = UINT8_MAX;
	volatile uint8_t x427 = 125U;
	int32_t x428 = -3103332;
	volatile int32_t t84 = 26987;

    t84 = (x425+(x426!=(x427*x428)));

    if (t84 != 91) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x429 = -1;
	volatile int8_t x430 = INT8_MIN;
	static volatile int8_t x431 = INT8_MIN;
	static volatile int32_t t85 = -5;

    t85 = (x429+(x430!=(x431*x432)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x433 = 0U;
	int32_t x434 = INT32_MAX;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = -1LL;
	static volatile int32_t t86 = 11;

    t86 = (x433+(x434!=(x435*x436)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x437 = -1;
	int16_t x438 = INT16_MIN;
	int64_t x439 = INT64_MAX;
	int32_t t87 = -460062697;

    t87 = (x437+(x438!=(x439*x440)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x441 = UINT32_MAX;
	volatile uint32_t x442 = 6096445U;
	uint64_t x443 = 761534LLU;
	static volatile uint32_t t88 = 78910U;

    t88 = (x441+(x442!=(x443*x444)));

    if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = 0U;
	static volatile uint16_t x448 = 2U;
	int32_t t89 = 32;

    t89 = (x445+(x446!=(x447*x448)));

    if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x453 = INT16_MAX;
	int64_t x454 = INT64_MAX;
	int8_t x455 = -1;
	volatile int32_t x456 = -46;
	int32_t t90 = 2;

    t90 = (x453+(x454!=(x455*x456)));

    if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x466 = INT32_MIN;
	volatile uint16_t x467 = 11622U;
	volatile int8_t x468 = -1;
	volatile int32_t t91 = 167930450;

    t91 = (x465+(x466!=(x467*x468)));

    if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x473 = -1;
	int8_t x474 = INT8_MIN;
	uint16_t x476 = 31U;
	static int32_t t92 = -619457;

    t92 = (x473+(x474!=(x475*x476)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x481 = 3258617614847890745LLU;
	int16_t x482 = INT16_MIN;
	static volatile int8_t x484 = INT8_MAX;
	uint64_t t93 = 104429285958LLU;

    t93 = (x481+(x482!=(x483*x484)));

    if (t93 != 3258617614847890746LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x489 = INT32_MIN;
	static uint64_t x491 = 10LLU;

    t94 = (x489+(x490!=(x491*x492)));

    if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x497 = 10168LL;
	int16_t x498 = -5;
	static volatile int64_t x499 = 1962469093LL;
	static int32_t x500 = INT32_MAX;
	static volatile int64_t t95 = -155038973LL;

    t95 = (x497+(x498!=(x499*x500)));

    if (t95 != 10169LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x505 = 5LLU;
	uint16_t x506 = 2728U;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 6U;
	volatile uint64_t t96 = 1964226416971LLU;

    t96 = (x505+(x506!=(x507*x508)));

    if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	uint32_t x510 = UINT32_MAX;
	int16_t x511 = -27;
	static uint32_t x512 = 208U;
	static int32_t t97 = 6158;

    t97 = (x509+(x510!=(x511*x512)));

    if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x513 = INT8_MAX;
	static int16_t x514 = INT16_MAX;
	static uint8_t x515 = UINT8_MAX;
	uint32_t x516 = 21U;
	int32_t t98 = -460;

    t98 = (x513+(x514!=(x515*x516)));

    if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x518 = 377;
	int8_t x519 = INT8_MIN;
	volatile int8_t x520 = INT8_MAX;
	static volatile int32_t t99 = 3815;

    t99 = (x517+(x518!=(x519*x520)));

    if (t99 != 540) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x521 = 5U;
	int32_t x522 = 1;
	int32_t x523 = INT32_MIN;
	uint32_t t100 = 267833827U;

    t100 = (x521+(x522!=(x523*x524)));

    if (t100 != 6U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x525 = INT16_MAX;
	static int32_t x527 = 13644965;
	static volatile int32_t t101 = -5342836;

    t101 = (x525+(x526!=(x527*x528)));

    if (t101 != 32768) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x537 = -1LL;
	uint32_t x538 = 500292U;
	volatile int8_t x539 = -2;
	static volatile int16_t x540 = INT16_MIN;
	int64_t t102 = 19522LL;

    t102 = (x537+(x538!=(x539*x540)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x544 = UINT16_MAX;
	int32_t t103 = -9;

    t103 = (x541+(x542!=(x543*x544)));

    if (t103 != -32767) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x549 = INT64_MIN;
	volatile int32_t x550 = INT32_MIN;
	uint64_t x551 = UINT64_MAX;
	static int32_t x552 = -1;

    t104 = (x549+(x550!=(x551*x552)));

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x553 = UINT32_MAX;
	uint32_t x554 = 32U;
	int32_t x556 = INT32_MIN;
	uint32_t t105 = 5291464U;

    t105 = (x553+(x554!=(x555*x556)));

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x557 = -134LL;
	int64_t x558 = INT64_MIN;
	int64_t x559 = -1361548800LL;
	int64_t x560 = 270437LL;
	volatile int64_t t106 = 468940258316602265LL;

    t106 = (x557+(x558!=(x559*x560)));

    if (t106 != -133LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MAX;
	uint32_t x563 = 251540U;
	int64_t t107 = -37LL;

    t107 = (x561+(x562!=(x563*x564)));

    if (t107 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x567 = 184900U;
	int32_t t108 = 1189;

    t108 = (x565+(x566!=(x567*x568)));

    if (t108 != 55) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x577 = INT64_MIN;
	uint64_t x579 = 3430851891LLU;
	volatile int64_t t109 = -3415LL;

    t109 = (x577+(x578!=(x579*x580)));

    if (t109 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int16_t x593 = INT16_MIN;
	static int16_t x594 = INT16_MIN;
	int16_t x596 = INT16_MAX;

    t110 = (x593+(x594!=(x595*x596)));

    if (t110 != -32767) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x597 = INT32_MIN;
	static uint32_t x598 = 27859590U;
	uint16_t x600 = 3U;

    t111 = (x597+(x598!=(x599*x600)));

    if (t111 != -2147483647) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x602 = 23U;
	uint8_t x603 = 7U;

    t112 = (x601+(x602!=(x603*x604)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x605 = INT16_MIN;
	static uint64_t x607 = 53LLU;
	static int8_t x608 = INT8_MIN;
	volatile int32_t t113 = 3;

    t113 = (x605+(x606!=(x607*x608)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x614 = INT32_MIN;
	uint64_t x615 = UINT64_MAX;
	uint32_t t114 = 17984U;

    t114 = (x613+(x614!=(x615*x616)));

    if (t114 != 52787U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x617 = INT64_MIN;
	int32_t x618 = 114172463;
	int16_t x619 = INT16_MIN;
	int64_t t115 = -6LL;

    t115 = (x617+(x618!=(x619*x620)));

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x621 = 3871115206884LLU;
	int16_t x622 = -1;
	int64_t x623 = 61272478610845868LL;
	static int8_t x624 = -1;
	volatile uint64_t t116 = 173302246059906LLU;

    t116 = (x621+(x622!=(x623*x624)));

    if (t116 != 3871115206885LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x625 = 151199442862LL;
	int32_t x627 = INT32_MAX;
	int8_t x628 = -1;
	int64_t t117 = -7910183157530LL;

    t117 = (x625+(x626!=(x627*x628)));

    if (t117 != 151199442863LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	uint16_t x631 = UINT16_MAX;
	volatile int16_t x632 = INT16_MIN;
	int32_t t118 = -178231579;

    t118 = (x629+(x630!=(x631*x632)));

    if (t118 != 256) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x633 = 1015011260LLU;
	int16_t x634 = INT16_MIN;
	static uint64_t x635 = 1502760LLU;
	uint32_t x636 = UINT32_MAX;
	uint64_t t119 = 503151636117LLU;

    t119 = (x633+(x634!=(x635*x636)));

    if (t119 != 1015011261LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x637 = 218751050024294560LL;
	int32_t x638 = INT32_MAX;
	int16_t x639 = INT16_MIN;
	int8_t x640 = -1;

    t120 = (x637+(x638!=(x639*x640)));

    if (t120 != 218751050024294561LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x641 = UINT64_MAX;
	static int8_t x642 = -1;
	volatile int64_t x643 = -1LL;
	int16_t x644 = INT16_MIN;
	uint64_t t121 = 27401504411917LLU;

    t121 = (x641+(x642!=(x643*x644)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x649 = 0;
	int32_t x650 = INT32_MIN;
	static uint16_t x651 = 12U;
	int64_t x652 = -1LL;

    t122 = (x649+(x650!=(x651*x652)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x654 = -1LL;
	volatile int8_t x656 = INT8_MIN;
	int32_t t123 = -248;

    t123 = (x653+(x654!=(x655*x656)));

    if (t123 != -127) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x657 = -1LL;
	static uint64_t x658 = UINT64_MAX;
	int8_t x659 = INT8_MIN;
	int8_t x660 = -1;
	int64_t t124 = 68632485907011LL;

    t124 = (x657+(x658!=(x659*x660)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x661 = 9933U;
	volatile int32_t x662 = INT32_MIN;
	static volatile int16_t x663 = INT16_MAX;
	static int8_t x664 = INT8_MAX;

    t125 = (x661+(x662!=(x663*x664)));

    if (t125 != 9934U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x669 = -24;
	static uint32_t x670 = 88U;
	static uint64_t x672 = UINT64_MAX;
	int32_t t126 = -1820;

    t126 = (x669+(x670!=(x671*x672)));

    if (t126 != -23) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	static uint64_t x674 = 2714599440793LLU;
	uint8_t x675 = 1U;
	static int8_t x676 = INT8_MIN;
	volatile uint32_t t127 = 11791878U;

    t127 = (x673+(x674!=(x675*x676)));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x678 = INT8_MIN;
	volatile uint16_t x679 = UINT16_MAX;
	uint8_t x680 = UINT8_MAX;
	static volatile int32_t t128 = -12458;

    t128 = (x677+(x678!=(x679*x680)));

    if (t128 != 128) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x682 = INT16_MIN;
	volatile int32_t x683 = -107537191;
	uint64_t x684 = UINT64_MAX;
	volatile int32_t t129 = -40105;

    t129 = (x681+(x682!=(x683*x684)));

    if (t129 != 256) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x685 = INT32_MIN;
	volatile uint64_t x686 = 38LLU;
	volatile uint8_t x687 = 75U;
	volatile int32_t t130 = 1;

    t130 = (x685+(x686!=(x687*x688)));

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x693 = 37U;
	volatile int16_t x694 = INT16_MIN;
	uint8_t x695 = 3U;
	int32_t x696 = -75391;
	uint32_t t131 = 1566599U;

    t131 = (x693+(x694!=(x695*x696)));

    if (t131 != 38U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x705 = INT8_MIN;
	uint8_t x706 = 30U;
	int16_t x707 = -1;

    t132 = (x705+(x706!=(x707*x708)));

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint8_t x710 = UINT8_MAX;
	uint64_t x711 = 827409212684085LLU;
	int32_t x712 = -1;

    t133 = (x709+(x710!=(x711*x712)));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x714 = 227352685U;
	int64_t x715 = -4261LL;

    t134 = (x713+(x714!=(x715*x716)));

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x721 = UINT16_MAX;
	int8_t x722 = INT8_MIN;
	uint16_t x723 = 3781U;
	int32_t t135 = -67259;

    t135 = (x721+(x722!=(x723*x724)));

    if (t135 != 65536) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MIN;
	uint8_t x727 = 20U;
	uint16_t x728 = UINT16_MAX;
	int64_t t136 = 1857022921546727LL;

    t136 = (x725+(x726!=(x727*x728)));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x741 = -17;
	uint8_t x742 = 0U;
	static int8_t x743 = INT8_MIN;
	static uint16_t x744 = 46U;
	volatile int32_t t137 = -72515711;

    t137 = (x741+(x742!=(x743*x744)));

    if (t137 != -16) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x746 = INT8_MIN;

    t138 = (x745+(x746!=(x747*x748)));

    if (t138 != 1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x750 = INT16_MIN;
	int64_t x751 = INT64_MAX;
	uint64_t x752 = 1056LLU;
	volatile int32_t t139 = -6478220;

    t139 = (x749+(x750!=(x751*x752)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x757 = INT16_MIN;
	uint64_t x759 = 3862LLU;
	static volatile int64_t x760 = -1LL;

    t140 = (x757+(x758!=(x759*x760)));

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile int64_t x769 = INT64_MIN;
	int64_t x770 = INT64_MAX;
	uint64_t x771 = UINT64_MAX;
	uint8_t x772 = UINT8_MAX;
	int64_t t141 = -1846882796723LL;

    t141 = (x769+(x770!=(x771*x772)));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x773 = 31;
	uint8_t x774 = 18U;
	int32_t x775 = 2194;
	volatile int8_t x776 = -1;
	volatile int32_t t142 = 7763;

    t142 = (x773+(x774!=(x775*x776)));

    if (t142 != 32) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x777 = INT16_MIN;
	static int8_t x778 = -1;
	volatile int64_t x779 = -1LL;
	int64_t x780 = -1733528712LL;

    t143 = (x777+(x778!=(x779*x780)));

    if (t143 != -32767) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int16_t x781 = 59;
	uint16_t x782 = UINT16_MAX;
	uint64_t x783 = 17LLU;
	int16_t x784 = INT16_MIN;
	volatile int32_t t144 = -124979280;

    t144 = (x781+(x782!=(x783*x784)));

    if (t144 != 60) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x787 = UINT64_MAX;
	volatile int8_t x788 = -1;

    t145 = (x785+(x786!=(x787*x788)));

    if (t145 != 16) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x793 = UINT16_MAX;
	int32_t x794 = INT32_MAX;
	uint16_t x795 = 7U;
	int8_t x796 = -1;
	int32_t t146 = 30140974;

    t146 = (x793+(x794!=(x795*x796)));

    if (t146 != 65536) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x797 = UINT8_MAX;
	int16_t x798 = -1;
	static uint16_t x799 = 3377U;
	uint64_t x800 = 13089143002975LLU;
	volatile int32_t t147 = 834905;

    t147 = (x797+(x798!=(x799*x800)));

    if (t147 != 256) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x801 = UINT16_MAX;
	volatile int32_t x803 = INT32_MAX;
	int8_t x804 = -1;
	static volatile int32_t t148 = -37253214;

    t148 = (x801+(x802!=(x803*x804)));

    if (t148 != 65536) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x806 = -3861437588509163298LL;
	static uint64_t x807 = 66LLU;
	int64_t x808 = INT64_MIN;

    t149 = (x805+(x806!=(x807*x808)));

    if (t149 != -11LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x810 = INT32_MAX;
	volatile uint64_t x811 = 89002874LLU;
	static volatile int32_t x812 = INT32_MIN;
	volatile int32_t t150 = -286970;

    t150 = (x809+(x810!=(x811*x812)));

    if (t150 != 127) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x813 = 28LLU;
	uint16_t x815 = 13U;
	static int8_t x816 = INT8_MAX;
	uint64_t t151 = 1922211LLU;

    t151 = (x813+(x814!=(x815*x816)));

    if (t151 != 29LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x817 = -44;
	volatile int8_t x818 = -18;
	uint64_t x820 = 148832812455989867LLU;
	int32_t t152 = -13001;

    t152 = (x817+(x818!=(x819*x820)));

    if (t152 != -43) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x822 = 22618103LLU;
	static uint64_t x823 = 429229017LLU;
	static volatile uint32_t t153 = 247U;

    t153 = (x821+(x822!=(x823*x824)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x825 = 1184U;
	uint32_t x827 = UINT32_MAX;
	uint16_t x828 = 8U;

    t154 = (x825+(x826!=(x827*x828)));

    if (t154 != 1185) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x829 = INT16_MAX;
	static int8_t x830 = INT8_MIN;
	int32_t x832 = -1;
	int32_t t155 = -66;

    t155 = (x829+(x830!=(x831*x832)));

    if (t155 != 32768) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x833 = -1873555;
	volatile int32_t x834 = INT32_MAX;
	int64_t x836 = INT64_MAX;
	volatile int32_t t156 = -4;

    t156 = (x833+(x834!=(x835*x836)));

    if (t156 != -1873554) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x837 = 815393870238582LLU;
	static volatile int64_t x838 = -110804316029153187LL;
	int32_t x839 = INT32_MAX;
	int8_t x840 = -1;
	static volatile uint64_t t157 = 24915159994349LLU;

    t157 = (x837+(x838!=(x839*x840)));

    if (t157 != 815393870238583LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x846 = 25;
	int16_t x847 = INT16_MIN;
	uint32_t x848 = UINT32_MAX;
	int32_t t158 = -7;

    t158 = (x845+(x846!=(x847*x848)));

    if (t158 != -127) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x850 = 35U;
	uint16_t x851 = 0U;
	volatile int32_t t159 = -475917;

    t159 = (x849+(x850!=(x851*x852)));

    if (t159 != -32767) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x857 = -796;
	uint64_t x860 = 1353494586LLU;
	volatile int32_t t160 = -14878;

    t160 = (x857+(x858!=(x859*x860)));

    if (t160 != -795) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x861 = INT16_MAX;
	static uint64_t x862 = 519892LLU;
	uint32_t x863 = 552702U;
	static volatile int32_t t161 = 24273;

    t161 = (x861+(x862!=(x863*x864)));

    if (t161 != 32768) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x865 = -31;
	int32_t x867 = INT32_MIN;
	volatile int32_t t162 = -207;

    t162 = (x865+(x866!=(x867*x868)));

    if (t162 != -30) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x869 = -1;
	static int64_t x870 = -1850727151496973LL;
	static int64_t x871 = -561065814LL;
	int32_t x872 = INT32_MAX;

    t163 = (x869+(x870!=(x871*x872)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x877 = INT16_MIN;
	uint8_t x878 = UINT8_MAX;
	uint32_t x879 = 580U;
	volatile int32_t t164 = -13;

    t164 = (x877+(x878!=(x879*x880)));

    if (t164 != -32767) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x889 = -1;
	int32_t x890 = 3730920;
	volatile int64_t x891 = -1LL;
	static volatile int32_t t165 = 3594531;

    t165 = (x889+(x890!=(x891*x892)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x906 = INT16_MIN;
	uint8_t x907 = 19U;
	volatile int8_t x908 = -1;
	int32_t t166 = -257611009;

    t166 = (x905+(x906!=(x907*x908)));

    if (t166 != 2167) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x910 = -37119LL;
	static uint32_t x911 = 611657U;
	int8_t x912 = INT8_MAX;
	uint32_t t167 = 3068595U;

    t167 = (x909+(x910!=(x911*x912)));

    if (t167 != 24U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x913 = 0U;
	static int32_t x914 = INT32_MAX;
	int16_t x915 = INT16_MAX;
	static uint16_t x916 = 22470U;
	static int32_t t168 = -4;

    t168 = (x913+(x914!=(x915*x916)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int64_t x917 = 776573LL;
	uint8_t x918 = 3U;
	volatile int16_t x919 = -1;
	volatile int16_t x920 = 7229;
	int64_t t169 = -372151045LL;

    t169 = (x917+(x918!=(x919*x920)));

    if (t169 != 776574LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x921 = -16053;
	volatile int8_t x922 = INT8_MIN;
	int64_t x923 = 691617803669151914LL;
	uint64_t x924 = 972146656576815175LLU;
	volatile int32_t t170 = -10165;

    t170 = (x921+(x922!=(x923*x924)));

    if (t170 != -16052) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x930 = 35;
	volatile int64_t x931 = -52LL;
	uint32_t x932 = UINT32_MAX;
	volatile uint64_t t171 = 17796717717386459LLU;

    t171 = (x929+(x930!=(x931*x932)));

    if (t171 != 106443084929272893LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x933 = -1;
	int16_t x934 = INT16_MIN;
	uint64_t x936 = UINT64_MAX;
	int32_t t172 = 783;

    t172 = (x933+(x934!=(x935*x936)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x937 = INT64_MIN;
	volatile int8_t x939 = -1;
	int64_t x940 = -1LL;
	volatile int64_t t173 = -2531607044LL;

    t173 = (x937+(x938!=(x939*x940)));

    if (t173 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x941 = -1;
	int8_t x942 = INT8_MIN;
	volatile uint32_t x943 = 233326164U;
	int32_t x944 = -1;
	static volatile int32_t t174 = -217057409;

    t174 = (x941+(x942!=(x943*x944)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x949 = INT16_MIN;
	int16_t x950 = -3377;
	int8_t x951 = -1;
	int8_t x952 = INT8_MAX;

    t175 = (x949+(x950!=(x951*x952)));

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x954 = INT64_MIN;
	int64_t x955 = 1060559487LL;
	static int32_t x956 = 90964;

    t176 = (x953+(x954!=(x955*x956)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x957 = -1;
	int16_t x958 = 5610;
	static int8_t x959 = -1;
	uint64_t x960 = 1833135863604351996LLU;
	int32_t t177 = -122383;

    t177 = (x957+(x958!=(x959*x960)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x965 = UINT16_MAX;
	volatile int64_t x966 = INT64_MAX;
	uint64_t x967 = UINT64_MAX;
	int8_t x968 = 4;
	int32_t t178 = 0;

    t178 = (x965+(x966!=(x967*x968)));

    if (t178 != 65536) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x969 = -1LL;
	int16_t x970 = INT16_MIN;
	static volatile int8_t x971 = -31;
	uint32_t x972 = 1347477018U;
	int64_t t179 = 12078323LL;

    t179 = (x969+(x970!=(x971*x972)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x973 = 269U;
	int32_t x975 = -1;
	uint8_t x976 = 1U;

    t180 = (x973+(x974!=(x975*x976)));

    if (t180 != 270) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x977 = -1;
	int16_t x978 = INT16_MIN;
	uint8_t x979 = UINT8_MAX;
	uint8_t x980 = 4U;

    t181 = (x977+(x978!=(x979*x980)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x989 = -25933897969LL;
	volatile int8_t x990 = 3;
	volatile int64_t x991 = -15929922645982793LL;
	volatile uint16_t x992 = 287U;
	volatile int64_t t182 = 1309969112LL;

    t182 = (x989+(x990!=(x991*x992)));

    if (t182 != -25933897968LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x993 = INT8_MAX;
	int8_t x994 = INT8_MAX;
	int32_t x996 = INT32_MIN;
	static volatile int32_t t183 = 506011679;

    t183 = (x993+(x994!=(x995*x996)));

    if (t183 != 128) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x997 = 32U;
	volatile uint8_t x998 = 6U;
	volatile uint8_t x1000 = 5U;
	int32_t t184 = -21344;

    t184 = (x997+(x998!=(x999*x1000)));

    if (t184 != 33) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1001 = 27751U;
	int64_t x1002 = -1LL;
	volatile int8_t x1003 = 28;
	static uint16_t x1004 = 2616U;
	volatile int32_t t185 = -176;

    t185 = (x1001+(x1002!=(x1003*x1004)));

    if (t185 != 27752) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x1005 = 8759962U;
	uint64_t x1007 = UINT64_MAX;
	int32_t x1008 = 981045537;
	volatile uint32_t t186 = 13608U;

    t186 = (x1005+(x1006!=(x1007*x1008)));

    if (t186 != 8759963U) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x1013 = UINT64_MAX;
	uint16_t x1014 = 28806U;
	int16_t x1015 = INT16_MIN;
	static volatile uint16_t x1016 = 695U;

    t187 = (x1013+(x1014!=(x1015*x1016)));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1017 = UINT32_MAX;
	int8_t x1018 = -6;
	int16_t x1019 = INT16_MIN;
	volatile uint32_t x1020 = 81839812U;
	uint32_t t188 = 16259594U;

    t188 = (x1017+(x1018!=(x1019*x1020)));

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1021 = INT64_MIN;
	static int32_t x1023 = 4;
	int16_t x1024 = INT16_MAX;
	int64_t t189 = -219592LL;

    t189 = (x1021+(x1022!=(x1023*x1024)));

    if (t189 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1025 = INT8_MAX;
	int16_t x1026 = 1;
	int16_t x1027 = -1;
	volatile int32_t t190 = 1472671;

    t190 = (x1025+(x1026!=(x1027*x1028)));

    if (t190 != 128) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1029 = -17194585;
	uint64_t x1030 = 574LLU;
	static int8_t x1031 = -24;
	int32_t t191 = -113575886;

    t191 = (x1029+(x1030!=(x1031*x1032)));

    if (t191 != -17194584) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1045 = -1LL;
	uint32_t x1046 = 2U;
	uint16_t x1047 = 96U;
	static volatile int64_t t192 = 42LL;

    t192 = (x1045+(x1046!=(x1047*x1048)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1050 = UINT32_MAX;
	static int32_t x1051 = -1;
	int32_t x1052 = 6837818;
	static int64_t t193 = -5603684716416345LL;

    t193 = (x1049+(x1050!=(x1051*x1052)));

    if (t193 != -7552691725946LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1054 = -1;
	static int16_t x1055 = INT16_MIN;
	int8_t x1056 = -1;

    t194 = (x1053+(x1054!=(x1055*x1056)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1061 = -208505287;
	static int32_t x1062 = -38035;
	int64_t x1064 = -1583129667688240LL;
	int32_t t195 = -745007351;

    t195 = (x1061+(x1062!=(x1063*x1064)));

    if (t195 != -208505286) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1065 = 2U;
	volatile int32_t x1066 = -1;
	int8_t x1067 = -1;
	volatile int32_t t196 = 4091483;

    t196 = (x1065+(x1066!=(x1067*x1068)));

    if (t196 != 3) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1073 = -5;
	uint16_t x1074 = 1368U;
	int32_t x1075 = -1;
	uint32_t x1076 = 12U;
	static volatile int32_t t197 = -58742;

    t197 = (x1073+(x1074!=(x1075*x1076)));

    if (t197 != -4) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1077 = -1;
	static uint8_t x1078 = 7U;
	volatile uint64_t x1079 = 486439927137426LLU;
	static int64_t x1080 = -188590845415768LL;
	volatile int32_t t198 = 1037415;

    t198 = (x1077+(x1078!=(x1079*x1080)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x1086 = INT64_MIN;
	volatile int32_t x1087 = -1566831;
	uint32_t x1088 = 42U;
	volatile int32_t t199 = 48119;

    t199 = (x1085+(x1086!=(x1087*x1088)));

    if (t199 != 32) { NG(); } else { ; }
	
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

