
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

static int16_t x1 = 3;
uint8_t x8 = 82U;
static volatile int32_t x11 = -1;
volatile int8_t x14 = INT8_MIN;
volatile int32_t x17 = INT32_MIN;
volatile uint8_t x18 = 43U;
int16_t x24 = INT16_MAX;
int32_t x27 = INT32_MIN;
static int16_t x29 = -1;
uint8_t x39 = 2U;
volatile int32_t t10 = 49435;
int32_t x55 = -10274;
int32_t t12 = -2164215;
static volatile int32_t t14 = -262763;
int64_t x70 = -215369469110989LL;
static volatile uint16_t x73 = UINT16_MAX;
uint16_t x80 = 1U;
static int32_t x81 = INT32_MAX;
int16_t x84 = INT16_MAX;
volatile int32_t t18 = 243;
volatile int16_t x99 = INT16_MIN;
volatile uint64_t x112 = UINT64_MAX;
int16_t x118 = INT16_MIN;
uint16_t x119 = 1056U;
uint8_t x120 = 0U;
static volatile int32_t t25 = 46094;
int32_t t27 = -260335;
uint32_t x133 = UINT32_MAX;
int64_t x141 = INT64_MIN;
static int16_t x144 = 106;
uint32_t x146 = 1U;
int8_t x152 = INT8_MIN;
volatile int32_t t33 = 1134;
int64_t x158 = 1LL;
volatile int64_t x160 = 128195112430LL;
static uint32_t x162 = UINT32_MAX;
int16_t x166 = -1;
static volatile uint8_t x175 = 37U;
static volatile int8_t x182 = -1;
int32_t t38 = -1149022;
static uint16_t x185 = 1820U;
uint32_t x188 = UINT32_MAX;
static volatile int32_t x190 = -1;
uint16_t x199 = 2U;
volatile int32_t t42 = -6505764;
static volatile int32_t t43 = 1032824185;
static volatile uint32_t x208 = 1648293352U;
uint32_t x213 = 1U;
uint32_t x217 = 33336107U;
uint8_t x225 = 3U;
static int16_t x231 = -1;
static volatile uint8_t x232 = UINT8_MAX;
volatile int32_t t50 = 2;
int32_t x242 = INT32_MIN;
static uint32_t x243 = 2U;
int32_t t55 = 27524;
volatile int32_t t57 = -8239492;
uint64_t x277 = 250454945182LLU;
uint16_t x282 = 14U;
int64_t x284 = -6982677500472706LL;
static uint8_t x290 = 7U;
static uint16_t x299 = 103U;
volatile uint16_t x303 = UINT16_MAX;
volatile int32_t x314 = -109;
static int64_t x316 = INT64_MIN;
volatile int8_t x321 = INT8_MIN;
volatile uint32_t x324 = UINT32_MAX;
static int64_t x333 = 5102LL;
static int32_t x339 = INT32_MIN;
int64_t x340 = -67126390413LL;
int32_t t71 = 0;
volatile int32_t x343 = 554;
int8_t x350 = -1;
uint64_t x352 = UINT64_MAX;
volatile int32_t t74 = -28783388;
static uint8_t x358 = UINT8_MAX;
static uint8_t x360 = 14U;
volatile int64_t x363 = -1LL;
static int8_t x365 = -1;
int32_t t78 = 9;
int16_t x375 = INT16_MAX;
static uint64_t x377 = UINT64_MAX;
int32_t x378 = INT32_MIN;
int64_t x384 = INT64_MIN;
static int8_t x394 = 1;
int32_t t83 = -9;
uint32_t x398 = 5847U;
static int32_t x400 = INT32_MIN;
static int16_t x407 = INT16_MIN;
static int64_t x410 = -5761LL;
int8_t x411 = -3;
volatile int32_t t87 = -222541279;
int32_t t88 = -320;
static volatile int32_t t89 = -16476846;
int64_t x422 = 155026185376LL;
int8_t x433 = INT8_MIN;
int64_t x435 = -26949361878892LL;
int64_t x439 = 1020266679731788342LL;
uint8_t x442 = 4U;
volatile int32_t x447 = 30489;
volatile int32_t x455 = INT32_MIN;
int16_t x456 = INT16_MAX;
int32_t x458 = INT32_MIN;
volatile int32_t t98 = 108673735;
uint64_t x474 = 20LLU;
int32_t x477 = INT32_MIN;
static volatile uint16_t x480 = 16U;
int8_t x486 = INT8_MIN;
int16_t x487 = INT16_MIN;
int32_t t103 = 187433;
uint16_t x490 = 2129U;
static uint32_t x495 = 1766884U;
volatile int32_t t105 = 0;
volatile int32_t t106 = -12543516;
int64_t x501 = 26725LL;
int64_t x503 = 1005850615116246212LL;
int32_t x504 = INT32_MIN;
int16_t x505 = INT16_MAX;
int8_t x516 = -1;
volatile uint32_t x529 = 85U;
uint16_t x531 = UINT16_MAX;
volatile int32_t t112 = 360;
int16_t x535 = -1;
volatile int8_t x538 = INT8_MIN;
int32_t x539 = -21153;
volatile int32_t t114 = -1;
volatile uint64_t x541 = 327LLU;
static int32_t t115 = -39;
volatile int32_t t116 = -15665667;
int16_t x561 = INT16_MIN;
int8_t x562 = INT8_MIN;
volatile int8_t x563 = 15;
static int16_t x588 = INT16_MAX;
int32_t t126 = -2618218;
int16_t x608 = 210;
int32_t x612 = -12313;
uint64_t x615 = UINT64_MAX;
int32_t t132 = -215627690;
static int64_t x618 = 1770LL;
volatile int32_t x622 = -621307306;
uint8_t x634 = 119U;
int16_t x637 = INT16_MIN;
int64_t x638 = -14275102892LL;
uint8_t x642 = UINT8_MAX;
volatile int32_t t139 = -39231408;
volatile int32_t x647 = -237363804;
static int64_t x653 = -1LL;
int16_t x655 = INT16_MIN;
int16_t x660 = -1;
int32_t x664 = INT32_MAX;
uint32_t x673 = UINT32_MAX;
volatile int32_t t146 = -12;
static uint8_t x693 = 53U;
static int64_t x705 = INT64_MAX;
volatile int16_t x706 = 0;
int32_t x713 = -1;
int16_t x715 = 3;
int64_t x717 = 130124670052400LL;
volatile int32_t t155 = -7795;
int32_t x728 = INT32_MAX;
uint16_t x733 = 3U;
volatile uint64_t x737 = UINT64_MAX;
static volatile int8_t x740 = INT8_MAX;
volatile int32_t t160 = 47491;
uint64_t x751 = 2043279996252448LLU;
int64_t x758 = INT64_MIN;
static int64_t x762 = INT64_MIN;
static volatile int64_t x766 = -11248127918527304LL;
int16_t x776 = -162;
int8_t x777 = INT8_MIN;
static int8_t x778 = INT8_MIN;
int64_t x782 = INT64_MAX;
static uint32_t x783 = 216095452U;
int32_t t169 = 42804890;
int8_t x789 = INT8_MIN;
uint64_t x791 = 572654553796LLU;
volatile int32_t t170 = -26391353;
volatile int32_t x793 = INT32_MAX;
static int32_t x796 = INT32_MAX;
int8_t x798 = INT8_MAX;
int32_t t172 = -162956;
int8_t x801 = INT8_MAX;
uint16_t x803 = 47U;
int16_t x810 = INT16_MIN;
int8_t x813 = INT8_MAX;
uint8_t x818 = 0U;
int8_t x820 = -1;
uint8_t x831 = UINT8_MAX;
int32_t x837 = -1;
int32_t x847 = 259637902;
static volatile int8_t x848 = 0;
int8_t x849 = INT8_MAX;
volatile uint16_t x859 = 7U;
volatile int8_t x869 = INT8_MIN;
volatile int32_t x871 = -3;
int32_t t188 = -1704;
static volatile int64_t x880 = -1LL;
int32_t x882 = -1;
int8_t x898 = INT8_MAX;
uint8_t x899 = 49U;
int32_t t194 = -233202586;
volatile uint16_t x902 = 1704U;
int16_t x904 = 1510;
static int32_t x907 = -10704435;
volatile int32_t t196 = 19;
volatile uint32_t x911 = 5414726U;
int64_t x913 = -1LL;
volatile uint32_t x915 = UINT32_MAX;
int32_t t198 = -132025;
uint8_t x917 = 1U;
int8_t x919 = -1;
int8_t x920 = INT8_MAX;


void f0(void) {
    	int32_t x2 = 454644260;
	int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -30396724;

    t0 = (x1==(x2!=(x3+x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	volatile int8_t x6 = INT8_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile int32_t t1 = 4313;

    t1 = (x5==(x6!=(x7+x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x9 = UINT32_MAX;
	volatile int64_t x10 = INT64_MIN;
	int16_t x12 = -1;
	volatile int32_t t2 = 115661;

    t2 = (x9==(x10!=(x11+x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -1LL;
	int16_t x15 = INT16_MAX;
	static volatile uint8_t x16 = 12U;
	int32_t t3 = -178;

    t3 = (x13==(x14!=(x15+x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x19 = 2U;
	int32_t x20 = 0;
	volatile int32_t t4 = -1427830;

    t4 = (x17==(x18!=(x19+x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = -1;
	uint32_t x22 = 301502U;
	volatile int16_t x23 = -3396;
	int32_t t5 = -39446;

    t5 = (x21==(x22!=(x23+x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = -86847963517692458LL;
	int8_t x26 = -27;
	volatile uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -10;

    t6 = (x25==(x26!=(x27+x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x30 = INT8_MIN;
	uint16_t x31 = UINT16_MAX;
	uint16_t x32 = 261U;
	int32_t t7 = 53580834;

    t7 = (x29==(x30!=(x31+x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 9858U;
	int32_t x34 = -1;
	static int16_t x35 = INT16_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	int32_t t8 = 634056933;

    t8 = (x33==(x34!=(x35+x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = 41;
	volatile int64_t x38 = -1LL;
	uint16_t x40 = 29455U;
	int32_t t9 = 2443062;

    t9 = (x37==(x38!=(x39+x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -1;
	static int32_t x42 = 1056139;
	int32_t x43 = -1;
	uint16_t x44 = 3U;

    t10 = (x41==(x42!=(x43+x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int8_t x45 = INT8_MAX;
	uint32_t x46 = 26244U;
	volatile int8_t x47 = INT8_MIN;
	uint8_t x48 = 7U;
	int32_t t11 = 122;

    t11 = (x45==(x46!=(x47+x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x53 = 1805118329121724754LLU;
	int64_t x54 = -1581347LL;
	volatile int8_t x56 = -1;

    t12 = (x53==(x54!=(x55+x56)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 1;
	volatile int32_t x58 = INT32_MAX;
	int32_t x59 = -603;
	static uint8_t x60 = 5U;
	int32_t t13 = -4040559;

    t13 = (x57==(x58!=(x59+x60)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x61 = -23;
	int16_t x62 = INT16_MIN;
	int64_t x63 = -1956663606711LL;
	uint8_t x64 = 4U;

    t14 = (x61==(x62!=(x63+x64)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x71 = UINT32_MAX;
	static volatile int8_t x72 = INT8_MAX;
	int32_t t15 = 10737;

    t15 = (x69==(x70!=(x71+x72)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x74 = 36U;
	static volatile uint16_t x75 = 10963U;
	int16_t x76 = INT16_MIN;
	volatile int32_t t16 = 30237271;

    t16 = (x73==(x74!=(x75+x76)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x77 = 944U;
	uint32_t x78 = 30746610U;
	int32_t x79 = -3;
	volatile int32_t t17 = 0;

    t17 = (x77==(x78!=(x79+x80)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x82 = UINT8_MAX;
	uint64_t x83 = 464280103LLU;

    t18 = (x81==(x82!=(x83+x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MIN;
	static int64_t x86 = 58LL;
	static int16_t x87 = INT16_MIN;
	static uint32_t x88 = 18424U;
	volatile int32_t t19 = 150;

    t19 = (x85==(x86!=(x87+x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x97 = INT64_MIN;
	int8_t x98 = 5;
	int16_t x100 = INT16_MIN;
	volatile int32_t t20 = 27003;

    t20 = (x97==(x98!=(x99+x100)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x101 = 84;
	volatile uint8_t x102 = 55U;
	volatile uint8_t x103 = UINT8_MAX;
	int64_t x104 = INT64_MIN;
	int32_t t21 = 412560460;

    t21 = (x101==(x102!=(x103+x104)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = -764654607582LL;
	int64_t x106 = INT64_MAX;
	uint8_t x107 = 74U;
	static int16_t x108 = 1;
	volatile int32_t t22 = -58;

    t22 = (x105==(x106!=(x107+x108)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x109 = UINT8_MAX;
	volatile int16_t x110 = -7429;
	uint8_t x111 = 0U;
	volatile int32_t t23 = 0;

    t23 = (x109==(x110!=(x111+x112)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MIN;
	volatile int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MIN;
	uint16_t x116 = UINT16_MAX;
	int32_t t24 = -419;

    t24 = (x113==(x114!=(x115+x116)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x117 = 56U;

    t25 = (x117==(x118!=(x119+x120)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x121 = UINT64_MAX;
	int32_t x122 = INT32_MIN;
	volatile uint64_t x123 = UINT64_MAX;
	int8_t x124 = -6;
	int32_t t26 = 1;

    t26 = (x121==(x122!=(x123+x124)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = -350;
	volatile int8_t x126 = -1;
	int16_t x127 = -1;
	int32_t x128 = INT32_MAX;

    t27 = (x125==(x126!=(x127+x128)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x129 = UINT8_MAX;
	uint64_t x130 = UINT64_MAX;
	static int8_t x131 = -1;
	int64_t x132 = 901901LL;
	volatile int32_t t28 = -1;

    t28 = (x129==(x130!=(x131+x132)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = UINT16_MAX;
	static int32_t x136 = -1;
	int32_t t29 = -865;

    t29 = (x133==(x134!=(x135+x136)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x137 = -1;
	volatile int32_t x138 = INT32_MIN;
	uint16_t x139 = 19519U;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t30 = 1;

    t30 = (x137==(x138!=(x139+x140)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x142 = INT16_MAX;
	static int32_t x143 = 0;
	volatile int32_t t31 = 8;

    t31 = (x141==(x142!=(x143+x144)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x145 = -1;
	int8_t x147 = -1;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t32 = 6948;

    t32 = (x145==(x146!=(x147+x148)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = -31;
	uint8_t x150 = 7U;
	int16_t x151 = -110;

    t33 = (x149==(x150!=(x151+x152)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = INT64_MAX;
	uint8_t x159 = 58U;
	int32_t t34 = 1;

    t34 = (x157==(x158!=(x159+x160)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int8_t x161 = INT8_MIN;
	uint8_t x163 = 41U;
	static int16_t x164 = -1879;
	volatile int32_t t35 = -59888;

    t35 = (x161==(x162!=(x163+x164)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x165 = 0U;
	static volatile int8_t x167 = -7;
	uint32_t x168 = 1633029U;
	int32_t t36 = 3;

    t36 = (x165==(x166!=(x167+x168)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x173 = 6306U;
	int64_t x174 = 562348224825178LL;
	volatile int32_t x176 = -1;
	static volatile int32_t t37 = -105;

    t37 = (x173==(x174!=(x175+x176)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x181 = 61U;
	static int16_t x183 = 1691;
	int16_t x184 = -1;

    t38 = (x181==(x182!=(x183+x184)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x186 = INT16_MIN;
	int64_t x187 = -1LL;
	int32_t t39 = -230372849;

    t39 = (x185==(x186!=(x187+x188)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x189 = UINT16_MAX;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 0U;
	volatile int32_t t40 = -3235784;

    t40 = (x189==(x190!=(x191+x192)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint8_t x193 = 72U;
	uint8_t x194 = 1U;
	int8_t x195 = INT8_MIN;
	int8_t x196 = 26;
	volatile int32_t t41 = 135314164;

    t41 = (x193==(x194!=(x195+x196)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x197 = 153049U;
	int8_t x198 = -1;
	volatile int8_t x200 = INT8_MAX;

    t42 = (x197==(x198!=(x199+x200)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x201 = INT64_MAX;
	int8_t x202 = INT8_MIN;
	uint8_t x203 = 1U;
	int8_t x204 = INT8_MAX;

    t43 = (x201==(x202!=(x203+x204)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x205 = 1LL;
	int64_t x206 = -1LL;
	uint16_t x207 = UINT16_MAX;
	int32_t t44 = 341751;

    t44 = (x205==(x206!=(x207+x208)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x209 = 332033480U;
	volatile int64_t x210 = 5207919669608LL;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int32_t t45 = -59;

    t45 = (x209==(x210!=(x211+x212)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x214 = 4U;
	static volatile int64_t x215 = INT64_MAX;
	int8_t x216 = -5;
	volatile int32_t t46 = 3172412;

    t46 = (x213==(x214!=(x215+x216)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x218 = INT8_MIN;
	static uint8_t x219 = 101U;
	int64_t x220 = INT64_MIN;
	static volatile int32_t t47 = 870798;

    t47 = (x217==(x218!=(x219+x220)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x221 = UINT32_MAX;
	int8_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile int16_t x224 = INT16_MIN;
	int32_t t48 = -159037745;

    t48 = (x221==(x222!=(x223+x224)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x226 = 6;
	int64_t x227 = -1LL;
	int32_t x228 = -612;
	volatile int32_t t49 = 262631814;

    t49 = (x225==(x226!=(x227+x228)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x229 = 1;
	int8_t x230 = -1;

    t50 = (x229==(x230!=(x231+x232)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x233 = INT64_MAX;
	volatile int64_t x234 = INT64_MAX;
	volatile int64_t x235 = 2018529494487244389LL;
	int64_t x236 = INT64_MIN;
	volatile int32_t t51 = -1;

    t51 = (x233==(x234!=(x235+x236)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = 337999934U;
	uint8_t x238 = 7U;
	uint64_t x239 = UINT64_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t52 = 10;

    t52 = (x237==(x238!=(x239+x240)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MIN;
	int32_t x244 = 191276553;
	int32_t t53 = 114237792;

    t53 = (x241==(x242!=(x243+x244)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x245 = 3552071768099LLU;
	static volatile int32_t x246 = INT32_MAX;
	int64_t x247 = -4910770256LL;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t54 = -28;

    t54 = (x245==(x246!=(x247+x248)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x265 = 10;
	int64_t x266 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	uint64_t x268 = UINT64_MAX;

    t55 = (x265==(x266!=(x267+x268)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = INT64_MAX;
	int32_t x270 = -32333795;
	int32_t x271 = -1;
	uint64_t x272 = 125987523234083LLU;
	int32_t t56 = -1015027870;

    t56 = (x269==(x270!=(x271+x272)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x273 = INT32_MAX;
	uint32_t x274 = 1243U;
	uint8_t x275 = 3U;
	static int64_t x276 = 162489255LL;

    t57 = (x273==(x274!=(x275+x276)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x278 = INT32_MAX;
	static uint64_t x279 = 242581903LLU;
	volatile int16_t x280 = -116;
	int32_t t58 = -26471;

    t58 = (x277==(x278!=(x279+x280)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x281 = INT8_MIN;
	int16_t x283 = -10370;
	int32_t t59 = -1491;

    t59 = (x281==(x282!=(x283+x284)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int64_t x285 = INT64_MIN;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = 62LLU;
	volatile int16_t x288 = INT16_MAX;
	static int32_t t60 = -26;

    t60 = (x285==(x286!=(x287+x288)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x289 = -225245701326LL;
	int16_t x291 = INT16_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t61 = -597;

    t61 = (x289==(x290!=(x291+x292)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x293 = UINT32_MAX;
	static int16_t x294 = -10092;
	static uint16_t x295 = UINT16_MAX;
	static int8_t x296 = -3;
	volatile int32_t t62 = -573660;

    t62 = (x293==(x294!=(x295+x296)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MAX;
	int16_t x300 = 7597;
	volatile int32_t t63 = -114383;

    t63 = (x297==(x298!=(x299+x300)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x301 = 718126132022651709LLU;
	static int32_t x302 = INT32_MIN;
	uint64_t x304 = 4164578437LLU;
	volatile int32_t t64 = -6;

    t64 = (x301==(x302!=(x303+x304)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x305 = -3;
	int8_t x306 = -1;
	volatile int8_t x307 = 1;
	volatile int32_t x308 = -1;
	int32_t t65 = 18648;

    t65 = (x305==(x306!=(x307+x308)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x309 = 108LLU;
	int64_t x310 = INT64_MAX;
	volatile int32_t x311 = 15387;
	volatile int16_t x312 = -1;
	volatile int32_t t66 = -28928;

    t66 = (x309==(x310!=(x311+x312)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x313 = UINT8_MAX;
	int8_t x315 = INT8_MAX;
	volatile int32_t t67 = 1234130;

    t67 = (x313==(x314!=(x315+x316)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x322 = -20;
	volatile int32_t x323 = 3404;
	int32_t t68 = -770632;

    t68 = (x321==(x322!=(x323+x324)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x325 = -15820843;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 43663201818749664LLU;
	int16_t x328 = -1;
	int32_t t69 = 970;

    t69 = (x325==(x326!=(x327+x328)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x334 = UINT64_MAX;
	static volatile uint16_t x335 = UINT16_MAX;
	int16_t x336 = 1;
	volatile int32_t t70 = 65754;

    t70 = (x333==(x334!=(x335+x336)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x337 = INT16_MAX;
	static volatile int64_t x338 = -1LL;

    t71 = (x337==(x338!=(x339+x340)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x341 = -1;
	static int64_t x342 = -1LL;
	static uint16_t x344 = 208U;
	volatile int32_t t72 = -58888355;

    t72 = (x341==(x342!=(x343+x344)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x345 = 120U;
	int8_t x346 = -10;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t73 = 214318;

    t73 = (x345==(x346!=(x347+x348)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x349 = UINT16_MAX;
	static uint8_t x351 = UINT8_MAX;

    t74 = (x349==(x350!=(x351+x352)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x353 = 0;
	int32_t x354 = INT32_MIN;
	volatile int16_t x355 = 13964;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t75 = -3205600;

    t75 = (x353==(x354!=(x355+x356)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x357 = 0;
	uint64_t x359 = 31136LLU;
	int32_t t76 = -432981337;

    t76 = (x357==(x358!=(x359+x360)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	int32_t t77 = 1793;

    t77 = (x361==(x362!=(x363+x364)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x366 = 0;
	volatile int32_t x367 = INT32_MAX;
	int64_t x368 = INT64_MIN;

    t78 = (x365==(x366!=(x367+x368)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x369 = INT32_MIN;
	int8_t x370 = 5;
	uint8_t x371 = UINT8_MAX;
	volatile int8_t x372 = 0;
	int32_t t79 = 0;

    t79 = (x369==(x370!=(x371+x372)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x373 = 205U;
	static uint32_t x374 = 3651U;
	int8_t x376 = 1;
	volatile int32_t t80 = -1003084;

    t80 = (x373==(x374!=(x375+x376)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x379 = INT8_MIN;
	volatile int64_t x380 = -1LL;
	int32_t t81 = 695291;

    t81 = (x377==(x378!=(x379+x380)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x381 = -1;
	static uint8_t x382 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int32_t t82 = -722;

    t82 = (x381==(x382!=(x383+x384)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x393 = INT8_MAX;
	static int32_t x395 = INT32_MAX;
	uint32_t x396 = 65108977U;

    t83 = (x393==(x394!=(x395+x396)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x397 = INT32_MIN;
	uint32_t x399 = UINT32_MAX;
	int32_t t84 = -4148974;

    t84 = (x397==(x398!=(x399+x400)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x401 = INT64_MIN;
	uint16_t x402 = 122U;
	static uint16_t x403 = UINT16_MAX;
	static uint8_t x404 = UINT8_MAX;
	int32_t t85 = -74;

    t85 = (x401==(x402!=(x403+x404)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x405 = 7;
	int16_t x406 = INT16_MAX;
	uint32_t x408 = UINT32_MAX;
	int32_t t86 = 547578;

    t86 = (x405==(x406!=(x407+x408)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x409 = 35U;
	uint8_t x412 = 2U;

    t87 = (x409==(x410!=(x411+x412)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x413 = -1;
	int32_t x414 = INT32_MIN;
	int64_t x415 = 185LL;
	volatile uint16_t x416 = 2U;

    t88 = (x413==(x414!=(x415+x416)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x417 = 7162U;
	uint64_t x418 = 1LLU;
	volatile uint16_t x419 = UINT16_MAX;
	int64_t x420 = INT64_MIN;

    t89 = (x417==(x418!=(x419+x420)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x421 = 15U;
	int64_t x423 = -1LL;
	uint8_t x424 = 0U;
	int32_t t90 = -101174696;

    t90 = (x421==(x422!=(x423+x424)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x425 = 1;
	static uint16_t x426 = UINT16_MAX;
	uint32_t x427 = 306464U;
	int16_t x428 = -1;
	int32_t t91 = 2047107;

    t91 = (x425==(x426!=(x427+x428)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x434 = INT16_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile int32_t t92 = 3;

    t92 = (x433==(x434!=(x435+x436)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	uint64_t x440 = 29563003230341985LLU;
	int32_t t93 = -262441;

    t93 = (x437==(x438!=(x439+x440)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x441 = 50LLU;
	int64_t x443 = -60196658921LL;
	volatile uint32_t x444 = 7U;
	volatile int32_t t94 = -1;

    t94 = (x441==(x442!=(x443+x444)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x445 = 11LL;
	uint64_t x446 = UINT64_MAX;
	int16_t x448 = -1558;
	int32_t t95 = -5016883;

    t95 = (x445==(x446!=(x447+x448)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x453 = 1;
	uint32_t x454 = 11U;
	int32_t t96 = 514724;

    t96 = (x453==(x454!=(x455+x456)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x457 = 2U;
	int8_t x459 = INT8_MIN;
	int64_t x460 = 225496341948LL;
	int32_t t97 = 0;

    t97 = (x457==(x458!=(x459+x460)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x465 = INT64_MIN;
	volatile int32_t x466 = INT32_MIN;
	uint16_t x467 = 3584U;
	volatile int8_t x468 = -6;

    t98 = (x465==(x466!=(x467+x468)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x469 = INT64_MIN;
	static uint8_t x470 = 2U;
	uint32_t x471 = 21967U;
	int8_t x472 = -7;
	static int32_t t99 = 1407577;

    t99 = (x469==(x470!=(x471+x472)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x473 = 14;
	uint16_t x475 = 9U;
	uint64_t x476 = 123418LLU;
	static volatile int32_t t100 = -18;

    t100 = (x473==(x474!=(x475+x476)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x478 = 0;
	uint32_t x479 = 15U;
	int32_t t101 = -551;

    t101 = (x477==(x478!=(x479+x480)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x481 = INT8_MAX;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MAX;
	int8_t x484 = INT8_MIN;
	volatile int32_t t102 = 0;

    t102 = (x481==(x482!=(x483+x484)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x485 = 7853;
	int64_t x488 = -1LL;

    t103 = (x485==(x486!=(x487+x488)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x489 = 0;
	uint32_t x491 = 32U;
	uint64_t x492 = 233067829214LLU;
	int32_t t104 = 1555;

    t104 = (x489==(x490!=(x491+x492)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x493 = INT16_MIN;
	static uint64_t x494 = 72241LLU;
	volatile int8_t x496 = INT8_MIN;

    t105 = (x493==(x494!=(x495+x496)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x497 = 987218;
	int8_t x498 = -1;
	int16_t x499 = 28;
	uint64_t x500 = UINT64_MAX;

    t106 = (x497==(x498!=(x499+x500)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x502 = INT16_MAX;
	volatile int32_t t107 = -2528856;

    t107 = (x501==(x502!=(x503+x504)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x506 = INT64_MIN;
	static int64_t x507 = 20759033LL;
	uint8_t x508 = 0U;
	volatile int32_t t108 = 1;

    t108 = (x505==(x506!=(x507+x508)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x513 = UINT8_MAX;
	static uint8_t x514 = 6U;
	int32_t x515 = 1701;
	volatile int32_t t109 = 584811;

    t109 = (x513==(x514!=(x515+x516)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x521 = 206U;
	static int8_t x522 = INT8_MIN;
	static uint16_t x523 = 5U;
	uint64_t x524 = UINT64_MAX;
	int32_t t110 = 1;

    t110 = (x521==(x522!=(x523+x524)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x525 = INT64_MIN;
	int16_t x526 = 687;
	int8_t x527 = INT8_MAX;
	int16_t x528 = INT16_MAX;
	int32_t t111 = 11;

    t111 = (x525==(x526!=(x527+x528)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int8_t x530 = INT8_MAX;
	uint8_t x532 = 1U;

    t112 = (x529==(x530!=(x531+x532)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x533 = INT32_MIN;
	uint16_t x534 = 455U;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t113 = 25;

    t113 = (x533==(x534!=(x535+x536)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x537 = 1368530558805LLU;
	int32_t x540 = INT32_MAX;

    t114 = (x537==(x538!=(x539+x540)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x542 = -6;
	uint8_t x543 = 0U;
	int8_t x544 = INT8_MAX;

    t115 = (x541==(x542!=(x543+x544)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x545 = -90732;
	static int32_t x546 = -618669;
	static volatile int16_t x547 = INT16_MIN;
	static volatile int32_t x548 = -1;

    t116 = (x545==(x546!=(x547+x548)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x549 = -83871459589947830LL;
	int16_t x550 = INT16_MAX;
	int16_t x551 = -1;
	int8_t x552 = INT8_MAX;
	static volatile int32_t t117 = 803;

    t117 = (x549==(x550!=(x551+x552)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x558 = -1;
	int64_t x559 = INT64_MIN;
	volatile int8_t x560 = 0;
	int32_t t118 = 29;

    t118 = (x557==(x558!=(x559+x560)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x564 = -1;
	volatile int32_t t119 = 1;

    t119 = (x561==(x562!=(x563+x564)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x565 = -27;
	uint64_t x566 = 2240417811138724727LLU;
	int64_t x567 = INT64_MIN;
	uint8_t x568 = 102U;
	volatile int32_t t120 = -1;

    t120 = (x565==(x566!=(x567+x568)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x569 = -17139;
	static uint8_t x570 = UINT8_MAX;
	static volatile int64_t x571 = 727113LL;
	int64_t x572 = 1931528359758LL;
	int32_t t121 = -56;

    t121 = (x569==(x570!=(x571+x572)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x573 = 4367U;
	int64_t x574 = INT64_MAX;
	int8_t x575 = INT8_MIN;
	int8_t x576 = 45;
	static volatile int32_t t122 = 9491;

    t122 = (x573==(x574!=(x575+x576)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x577 = -1;
	uint16_t x578 = 985U;
	int64_t x579 = 353LL;
	static int8_t x580 = INT8_MAX;
	static volatile int32_t t123 = 395333312;

    t123 = (x577==(x578!=(x579+x580)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x581 = INT16_MAX;
	uint16_t x582 = 9418U;
	volatile int64_t x583 = -9642LL;
	static volatile uint16_t x584 = 615U;
	volatile int32_t t124 = -4201;

    t124 = (x581==(x582!=(x583+x584)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x585 = 0;
	volatile int64_t x586 = INT64_MAX;
	static int16_t x587 = INT16_MIN;
	volatile int32_t t125 = 406057;

    t125 = (x585==(x586!=(x587+x588)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x589 = 1836;
	int32_t x590 = INT32_MIN;
	volatile int64_t x591 = -11502955LL;
	static int32_t x592 = -373282;

    t126 = (x589==(x590!=(x591+x592)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x593 = INT8_MIN;
	static int64_t x594 = INT64_MIN;
	static int32_t x595 = INT32_MAX;
	int64_t x596 = 85LL;
	int32_t t127 = 7301;

    t127 = (x593==(x594!=(x595+x596)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x597 = -1;
	int32_t x598 = -1;
	static uint64_t x599 = UINT64_MAX;
	int8_t x600 = INT8_MAX;
	volatile int32_t t128 = 260598;

    t128 = (x597==(x598!=(x599+x600)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x601 = INT8_MIN;
	static volatile int16_t x602 = INT16_MIN;
	volatile int8_t x603 = INT8_MIN;
	volatile int8_t x604 = INT8_MAX;
	volatile int32_t t129 = -42;

    t129 = (x601==(x602!=(x603+x604)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint32_t x605 = UINT32_MAX;
	static uint16_t x606 = 259U;
	int64_t x607 = INT64_MIN;
	volatile int32_t t130 = 38;

    t130 = (x605==(x606!=(x607+x608)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x609 = INT16_MIN;
	uint8_t x610 = UINT8_MAX;
	int64_t x611 = 133962521435014780LL;
	int32_t t131 = 395;

    t131 = (x609==(x610!=(x611+x612)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x613 = INT16_MIN;
	uint8_t x614 = 27U;
	int32_t x616 = 117;

    t132 = (x613==(x614!=(x615+x616)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x617 = INT32_MIN;
	int64_t x619 = -1LL;
	static int8_t x620 = INT8_MIN;
	int32_t t133 = 3630;

    t133 = (x617==(x618!=(x619+x620)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x621 = INT16_MIN;
	int16_t x623 = INT16_MIN;
	int32_t x624 = INT32_MAX;
	volatile int32_t t134 = 44236293;

    t134 = (x621==(x622!=(x623+x624)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x625 = 86U;
	int64_t x626 = INT64_MIN;
	uint64_t x627 = 749476798276556LLU;
	int8_t x628 = INT8_MIN;
	volatile int32_t t135 = 2153;

    t135 = (x625==(x626!=(x627+x628)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x629 = INT16_MAX;
	int8_t x630 = -34;
	static int16_t x631 = INT16_MAX;
	int16_t x632 = INT16_MIN;
	int32_t t136 = -34829099;

    t136 = (x629==(x630!=(x631+x632)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x633 = 23249347U;
	uint32_t x635 = 11U;
	int16_t x636 = INT16_MAX;
	volatile int32_t t137 = 457306;

    t137 = (x633==(x634!=(x635+x636)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x639 = INT64_MIN;
	uint16_t x640 = UINT16_MAX;
	int32_t t138 = -825;

    t138 = (x637==(x638!=(x639+x640)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x641 = 0;
	int16_t x643 = -3;
	static uint16_t x644 = 6250U;

    t139 = (x641==(x642!=(x643+x644)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x645 = 775387702U;
	int32_t x646 = -266245511;
	volatile uint8_t x648 = 2U;
	static volatile int32_t t140 = 461;

    t140 = (x645==(x646!=(x647+x648)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x649 = INT32_MIN;
	static uint16_t x650 = 742U;
	uint16_t x651 = 324U;
	uint64_t x652 = 80LLU;
	volatile int32_t t141 = 1189769;

    t141 = (x649==(x650!=(x651+x652)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x654 = INT64_MIN;
	static int16_t x656 = 29;
	static int32_t t142 = 1043854;

    t142 = (x653==(x654!=(x655+x656)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x657 = INT64_MIN;
	int64_t x658 = 3377419LL;
	uint64_t x659 = UINT64_MAX;
	volatile int32_t t143 = -500217899;

    t143 = (x657==(x658!=(x659+x660)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x661 = 1U;
	int32_t x662 = INT32_MIN;
	static int32_t x663 = INT32_MIN;
	static int32_t t144 = 1864939;

    t144 = (x661==(x662!=(x663+x664)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x669 = INT16_MIN;
	uint16_t x670 = 29045U;
	static int8_t x671 = 11;
	int32_t x672 = -1;
	volatile int32_t t145 = -104990;

    t145 = (x669==(x670!=(x671+x672)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x674 = 462;
	int32_t x675 = INT32_MIN;
	int64_t x676 = -1LL;

    t146 = (x673==(x674!=(x675+x676)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x677 = -15;
	int64_t x678 = INT64_MIN;
	volatile int8_t x679 = -1;
	int8_t x680 = -1;
	static int32_t t147 = 76;

    t147 = (x677==(x678!=(x679+x680)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x685 = 22;
	uint64_t x686 = 1359001123207973368LLU;
	uint32_t x687 = UINT32_MAX;
	uint64_t x688 = UINT64_MAX;
	int32_t t148 = 772797;

    t148 = (x685==(x686!=(x687+x688)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x689 = INT64_MIN;
	static int64_t x690 = 1632399LL;
	int16_t x691 = INT16_MIN;
	int8_t x692 = INT8_MIN;
	static volatile int32_t t149 = -941423;

    t149 = (x689==(x690!=(x691+x692)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x694 = -1;
	uint64_t x695 = 459759167LLU;
	int8_t x696 = INT8_MIN;
	int32_t t150 = -3155;

    t150 = (x693==(x694!=(x695+x696)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x701 = -27208450;
	static volatile int16_t x702 = -1;
	int64_t x703 = -1LL;
	int8_t x704 = -39;
	int32_t t151 = 4184276;

    t151 = (x701==(x702!=(x703+x704)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x707 = UINT64_MAX;
	uint64_t x708 = 102350773045LLU;
	int32_t t152 = -394776181;

    t152 = (x705==(x706!=(x707+x708)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x709 = 0LLU;
	uint32_t x710 = 50183U;
	int64_t x711 = 30046242LL;
	int64_t x712 = INT64_MIN;
	volatile int32_t t153 = 0;

    t153 = (x709==(x710!=(x711+x712)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x714 = 119U;
	int8_t x716 = INT8_MAX;
	volatile int32_t t154 = -6;

    t154 = (x713==(x714!=(x715+x716)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int32_t x718 = INT32_MAX;
	int32_t x719 = -1;
	static uint8_t x720 = 46U;

    t155 = (x717==(x718!=(x719+x720)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x725 = INT8_MAX;
	int32_t x726 = INT32_MIN;
	int64_t x727 = INT64_MIN;
	volatile int32_t t156 = -12355892;

    t156 = (x725==(x726!=(x727+x728)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x729 = INT16_MAX;
	int16_t x730 = 57;
	volatile int8_t x731 = INT8_MAX;
	int16_t x732 = INT16_MIN;
	int32_t t157 = 12773097;

    t157 = (x729==(x730!=(x731+x732)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x734 = -4;
	uint32_t x735 = UINT32_MAX;
	volatile int8_t x736 = INT8_MAX;
	static volatile int32_t t158 = 256837;

    t158 = (x733==(x734!=(x735+x736)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x738 = -1LL;
	int16_t x739 = INT16_MAX;
	static int32_t t159 = -1;

    t159 = (x737==(x738!=(x739+x740)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint8_t x741 = UINT8_MAX;
	int16_t x742 = INT16_MAX;
	int8_t x743 = INT8_MIN;
	volatile int8_t x744 = INT8_MIN;

    t160 = (x741==(x742!=(x743+x744)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int16_t x749 = 54;
	int16_t x750 = INT16_MIN;
	static int64_t x752 = -1LL;
	static volatile int32_t t161 = 1040812;

    t161 = (x749==(x750!=(x751+x752)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x757 = -306392189604LL;
	static uint32_t x759 = 6U;
	uint32_t x760 = UINT32_MAX;
	static int32_t t162 = 243;

    t162 = (x757==(x758!=(x759+x760)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x761 = 97LLU;
	int64_t x763 = -4605402156241299LL;
	int16_t x764 = -1;
	volatile int32_t t163 = -7;

    t163 = (x761==(x762!=(x763+x764)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x765 = 43;
	uint64_t x767 = 57036903638LLU;
	static uint8_t x768 = 14U;
	int32_t t164 = -528519;

    t164 = (x765==(x766!=(x767+x768)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x769 = INT8_MIN;
	uint64_t x770 = 1765155048462703LLU;
	static uint16_t x771 = 0U;
	int32_t x772 = -51;
	volatile int32_t t165 = 2924;

    t165 = (x769==(x770!=(x771+x772)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x773 = INT32_MIN;
	uint16_t x774 = 3U;
	int32_t x775 = -1;
	int32_t t166 = 9512;

    t166 = (x773==(x774!=(x775+x776)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x779 = INT32_MAX;
	volatile int8_t x780 = INT8_MIN;
	volatile int32_t t167 = -88320080;

    t167 = (x777==(x778!=(x779+x780)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x781 = -1;
	int64_t x784 = INT64_MIN;
	int32_t t168 = 111095574;

    t168 = (x781==(x782!=(x783+x784)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x785 = 108U;
	uint64_t x786 = 418615LLU;
	volatile uint16_t x787 = UINT16_MAX;
	uint32_t x788 = 15U;

    t169 = (x785==(x786!=(x787+x788)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x790 = 11140189LLU;
	uint64_t x792 = 97LLU;

    t170 = (x789==(x790!=(x791+x792)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x794 = 10;
	int32_t x795 = INT32_MIN;
	volatile int32_t t171 = -19811;

    t171 = (x793==(x794!=(x795+x796)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x797 = 35;
	volatile int16_t x799 = INT16_MIN;
	int16_t x800 = -1;

    t172 = (x797==(x798!=(x799+x800)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x802 = -26301861;
	int8_t x804 = -34;
	int32_t t173 = -24825;

    t173 = (x801==(x802!=(x803+x804)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x805 = 936853LLU;
	uint16_t x806 = 142U;
	uint16_t x807 = 3U;
	volatile int16_t x808 = -1;
	int32_t t174 = 12;

    t174 = (x805==(x806!=(x807+x808)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x809 = 2U;
	volatile int16_t x811 = 109;
	volatile uint16_t x812 = UINT16_MAX;
	volatile int32_t t175 = 1288427;

    t175 = (x809==(x810!=(x811+x812)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x814 = 0;
	uint32_t x815 = UINT32_MAX;
	int8_t x816 = INT8_MAX;
	int32_t t176 = -45093;

    t176 = (x813==(x814!=(x815+x816)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x817 = 5915164640LL;
	volatile uint16_t x819 = 401U;
	int32_t t177 = -60;

    t177 = (x817==(x818!=(x819+x820)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x825 = -1;
	static uint16_t x826 = UINT16_MAX;
	int32_t x827 = INT32_MAX;
	int32_t x828 = INT32_MIN;
	int32_t t178 = -1;

    t178 = (x825==(x826!=(x827+x828)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x829 = INT16_MIN;
	uint32_t x830 = 2U;
	int8_t x832 = INT8_MIN;
	int32_t t179 = -18498002;

    t179 = (x829==(x830!=(x831+x832)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x833 = 5U;
	int64_t x834 = INT64_MIN;
	uint64_t x835 = 7798123125305LLU;
	int64_t x836 = -1LL;
	int32_t t180 = -4777574;

    t180 = (x833==(x834!=(x835+x836)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x838 = 633872U;
	uint8_t x839 = 31U;
	static int32_t x840 = -1;
	int32_t t181 = 79;

    t181 = (x837==(x838!=(x839+x840)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint8_t x841 = 120U;
	int32_t x842 = INT32_MIN;
	volatile uint16_t x843 = 0U;
	volatile uint8_t x844 = 1U;
	volatile int32_t t182 = -28;

    t182 = (x841==(x842!=(x843+x844)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x845 = 9378;
	int64_t x846 = -36978866166LL;
	volatile int32_t t183 = -7189411;

    t183 = (x845==(x846!=(x847+x848)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x850 = -1;
	int64_t x851 = 546239072LL;
	int64_t x852 = INT64_MIN;
	int32_t t184 = -20338;

    t184 = (x849==(x850!=(x851+x852)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x857 = -1LL;
	int32_t x858 = INT32_MAX;
	volatile int16_t x860 = -1;
	int32_t t185 = -4;

    t185 = (x857==(x858!=(x859+x860)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x861 = 5U;
	int16_t x862 = INT16_MAX;
	uint64_t x863 = 15183352LLU;
	volatile uint32_t x864 = UINT32_MAX;
	int32_t t186 = 3;

    t186 = (x861==(x862!=(x863+x864)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x865 = INT32_MIN;
	int16_t x866 = INT16_MIN;
	int16_t x867 = -2;
	uint16_t x868 = UINT16_MAX;
	volatile int32_t t187 = 2083195;

    t187 = (x865==(x866!=(x867+x868)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x870 = -1;
	static volatile int8_t x872 = INT8_MAX;

    t188 = (x869==(x870!=(x871+x872)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x873 = -1;
	int8_t x874 = -1;
	static uint32_t x875 = 20680U;
	uint64_t x876 = UINT64_MAX;
	int32_t t189 = -1;

    t189 = (x873==(x874!=(x875+x876)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x877 = -26LL;
	int16_t x878 = -1;
	int32_t x879 = INT32_MIN;
	int32_t t190 = 0;

    t190 = (x877==(x878!=(x879+x880)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x881 = 988634449;
	int64_t x883 = -24LL;
	int32_t x884 = INT32_MIN;
	volatile int32_t t191 = -235793;

    t191 = (x881==(x882!=(x883+x884)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x885 = UINT16_MAX;
	static uint8_t x886 = UINT8_MAX;
	int32_t x887 = -32031015;
	int32_t x888 = -4031;
	int32_t t192 = 28;

    t192 = (x885==(x886!=(x887+x888)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x893 = INT8_MIN;
	static volatile int32_t x894 = 19497;
	uint64_t x895 = 240263403614570021LLU;
	static int64_t x896 = -1771LL;
	volatile int32_t t193 = 15;

    t193 = (x893==(x894!=(x895+x896)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x897 = 1205596244LLU;
	int64_t x900 = 121176089298400598LL;

    t194 = (x897==(x898!=(x899+x900)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x901 = 2026582363LLU;
	volatile uint32_t x903 = 12825U;
	volatile int32_t t195 = -76728020;

    t195 = (x901==(x902!=(x903+x904)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint8_t x905 = 0U;
	volatile int8_t x906 = INT8_MAX;
	static int8_t x908 = 22;

    t196 = (x905==(x906!=(x907+x908)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x909 = 0U;
	volatile int64_t x910 = -1LL;
	int32_t x912 = 239;
	int32_t t197 = 725;

    t197 = (x909==(x910!=(x911+x912)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile uint8_t x914 = 3U;
	int32_t x916 = -87;

    t198 = (x913==(x914!=(x915+x916)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x918 = INT64_MAX;
	volatile int32_t t199 = -24358;

    t199 = (x917==(x918!=(x919+x920)));

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

