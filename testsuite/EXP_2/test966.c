
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

int16_t x2 = -1;
uint8_t x7 = 8U;
int64_t x11 = 13LL;
int64_t t2 = 654963634381489540LL;
volatile int16_t x14 = INT16_MIN;
uint32_t x25 = 70210U;
uint32_t x26 = UINT32_MAX;
int32_t x30 = INT32_MAX;
volatile uint32_t t7 = 107U;
uint64_t t12 = 11296258LLU;
uint32_t x55 = 4624361U;
int64_t t13 = 25189810LL;
int8_t x65 = INT8_MAX;
int8_t x73 = INT8_MIN;
volatile int64_t t19 = -7932730683LL;
static int16_t x84 = INT16_MAX;
int8_t x85 = -1;
int16_t x90 = INT16_MIN;
volatile int32_t t24 = 19230;
int8_t x102 = INT8_MAX;
int64_t x108 = INT64_MAX;
int64_t x109 = -1LL;
static volatile uint8_t x113 = 0U;
int8_t x117 = -8;
int64_t x120 = INT64_MIN;
int32_t x125 = INT32_MIN;
uint32_t x132 = 14U;
int16_t x136 = INT16_MIN;
static int16_t x141 = -201;
uint8_t x144 = UINT8_MAX;
volatile int64_t t36 = 31011LL;
static int8_t x150 = -1;
int8_t x155 = -1;
int32_t x156 = INT32_MIN;
int64_t t39 = 50206714215252920LL;
int16_t x161 = -90;
int16_t x162 = 49;
uint16_t x167 = 6U;
int8_t x174 = INT8_MIN;
volatile int64_t t44 = 4002LL;
int32_t x185 = INT32_MIN;
int16_t x187 = -1;
uint8_t x193 = 0U;
int32_t x194 = INT32_MAX;
uint64_t x195 = 5099429LLU;
int32_t x198 = INT32_MAX;
int64_t t51 = -730942643088002286LL;
static uint8_t x212 = 0U;
int32_t x218 = INT32_MAX;
uint64_t x223 = 174493396850LLU;
uint64_t x225 = 1LLU;
volatile int32_t x230 = INT32_MAX;
volatile int32_t t57 = 9;
int32_t x239 = INT32_MAX;
int64_t x240 = INT64_MIN;
uint32_t x243 = 2372U;
static volatile uint64_t x252 = UINT64_MAX;
volatile int64_t t63 = 82910982558268LL;
int16_t x257 = 0;
int32_t x262 = -3;
static uint16_t x267 = 50U;
int16_t x272 = INT16_MIN;
volatile uint64_t x273 = 123519304649LLU;
int64_t x277 = INT64_MIN;
uint8_t x278 = 16U;
int64_t x296 = INT64_MIN;
static int8_t x302 = -10;
int16_t x303 = -1;
int32_t x307 = INT32_MIN;
uint8_t x310 = UINT8_MAX;
static int32_t t77 = -106577560;
uint64_t x315 = UINT64_MAX;
int32_t x320 = 3298141;
uint8_t x322 = 11U;
int8_t x324 = -24;
int32_t x326 = -1;
static uint32_t t81 = 8358460U;
uint16_t x336 = 12839U;
int64_t x341 = INT64_MIN;
uint64_t x343 = UINT64_MAX;
uint16_t x344 = UINT16_MAX;
static int8_t x346 = INT8_MIN;
volatile uint32_t x360 = 45866517U;
uint32_t t89 = 5485099U;
volatile int64_t t90 = INT64_MAX;
int64_t x366 = -1LL;
int16_t x370 = INT16_MIN;
volatile uint32_t x375 = 10606193U;
volatile uint64_t t93 = 0LLU;
int16_t x380 = INT16_MAX;
volatile int32_t x384 = INT32_MIN;
int64_t x393 = 189205357965803LL;
int32_t x394 = INT32_MAX;
int16_t x398 = INT16_MAX;
static int64_t x419 = INT64_MIN;
int64_t x426 = INT64_MIN;
int32_t x427 = INT32_MIN;
int32_t x428 = -1;
int32_t x430 = 968041832;
int64_t x435 = 1746453043425LL;
uint8_t x450 = 4U;
volatile int64_t t111 = 1415647927410261392LL;
int32_t x461 = 0;
uint64_t t115 = 449LLU;
int64_t x472 = INT64_MIN;
uint64_t t117 = 9108LLU;
uint8_t x478 = 30U;
uint8_t x479 = 1U;
volatile uint32_t x480 = 166486718U;
static volatile uint32_t t118 = 11U;
volatile uint32_t t119 = 13U;
int16_t x491 = INT16_MAX;
volatile int32_t t120 = 2505;
int32_t x494 = 0;
int16_t x502 = INT16_MIN;
uint16_t x503 = UINT16_MAX;
static int32_t t123 = 0;
volatile uint16_t x506 = 10U;
int8_t x509 = -1;
volatile int32_t x510 = INT32_MAX;
volatile uint32_t t125 = 333121U;
uint16_t x515 = 12U;
int32_t x516 = 20923;
static int32_t t126 = 1;
int16_t x523 = INT16_MAX;
uint8_t x524 = 11U;
static int32_t x529 = -1;
int64_t t131 = 271255039LL;
int8_t x541 = 59;
static int16_t x542 = -31;
static volatile uint8_t x551 = UINT8_MAX;
int64_t x560 = 0LL;
static volatile uint16_t x561 = 22159U;
int32_t x567 = INT32_MAX;
volatile int32_t t137 = 1312133;
volatile int32_t x570 = 5042271;
static volatile int64_t t140 = -3LL;
int8_t x582 = INT8_MIN;
int16_t x586 = INT16_MIN;
int32_t x587 = 147815104;
uint64_t x591 = UINT64_MAX;
int8_t x594 = INT8_MIN;
volatile int32_t x595 = INT32_MIN;
uint64_t x597 = 2125256967115609942LLU;
uint32_t x598 = 296U;
uint8_t x603 = 63U;
static int64_t t146 = 7LL;
static int8_t x605 = 1;
static int16_t x610 = INT16_MAX;
int16_t x612 = 0;
static volatile int32_t t148 = -17161;
uint8_t x618 = 5U;
static uint8_t x619 = 2U;
int32_t t150 = -7;
volatile uint8_t x623 = UINT8_MAX;
int8_t x644 = -5;
volatile uint64_t x645 = 2527314088314052444LLU;
uint32_t x647 = UINT32_MAX;
static uint64_t t157 = 8102325040666524LLU;
int64_t x649 = 5454LL;
int64_t x655 = INT64_MIN;
int16_t x665 = -1;
volatile int8_t x671 = INT8_MAX;
int16_t x675 = -58;
uint32_t x683 = 174782854U;
static int32_t x685 = INT32_MIN;
int8_t x689 = -8;
static uint32_t x690 = UINT32_MAX;
static int8_t x693 = 1;
int8_t x694 = INT8_MIN;
static int8_t x696 = -9;
static int32_t t168 = -52;
int32_t x697 = INT32_MIN;
volatile int64_t x701 = -1LL;
int64_t x721 = -96984LL;
int64_t t175 = 3440665496679162LL;
static int8_t x726 = -19;
int64_t x728 = INT64_MIN;
static int16_t x730 = INT16_MAX;
int8_t x731 = INT8_MIN;
int16_t x736 = INT16_MAX;
volatile int32_t x740 = -30451425;
static uint16_t x741 = UINT16_MAX;
uint16_t x743 = UINT16_MAX;
uint16_t x744 = UINT16_MAX;
int8_t x749 = INT8_MIN;
volatile int8_t x752 = -1;
static int32_t x754 = -828501;
uint32_t t187 = 2U;
int64_t x779 = INT64_MIN;
int32_t x788 = INT32_MIN;
static volatile int32_t t190 = 51800194;
int16_t x789 = -1628;
static int8_t x809 = -1;


void f0(void) {
    	uint8_t x1 = 1U;
	uint16_t x3 = 55U;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -3;

    t0 = ((x1|(x2%x3))^x4);

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	int16_t x6 = -1;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -696278;

    t1 = ((x5|(x6%x7))^x8);

    if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 34;
	int32_t x10 = INT32_MAX;
	volatile uint32_t x12 = UINT32_MAX;

    t2 = ((x9|(x10%x11))^x12);

    if (t2 != 4294967253LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 971054511;

    t3 = ((x13|(x14%x15))^x16);

    if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = -6;
	int16_t x18 = 1;
	volatile int32_t x19 = -1;
	static uint64_t x20 = 1327036408LLU;
	volatile uint64_t t4 = 7003LLU;

    t4 = ((x17|(x18%x19))^x20);

    if (t4 != 18446744072382515202LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = 1127U;
	static uint8_t x22 = UINT8_MAX;
	uint64_t x23 = 133LLU;
	int32_t x24 = 0;
	static volatile uint64_t t5 = 3816461711808691LLU;

    t5 = ((x21|(x22%x23))^x24);

    if (t5 != 1151LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x27 = -1LL;
	uint64_t x28 = 2759535437354LLU;
	static uint64_t t6 = 20556139313935LLU;

    t6 = ((x25|(x26%x27))^x28);

    if (t6 != 2759535375464LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x29 = UINT8_MAX;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = UINT32_MAX;

    t7 = ((x29|(x30%x31))^x32);

    if (t7 != 4294934528U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 32826447LLU;
	volatile int32_t x34 = 837080;
	int32_t x35 = INT32_MAX;
	int8_t x36 = -2;
	uint64_t t8 = 63528LLU;

    t8 = ((x33|(x34%x35))^x36);

    if (t8 != 18446744073676200481LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int32_t x38 = INT32_MAX;
	static volatile int64_t x39 = -1LL;
	int32_t x40 = 64431;
	volatile int64_t t9 = -70313905372755894LL;

    t9 = ((x37|(x38%x39))^x40);

    if (t9 != -64432LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MAX;
	int64_t x42 = -1LL;
	static int64_t x43 = INT64_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int64_t t10 = -859818433352LL;

    t10 = ((x41|(x42%x43))^x44);

    if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	static int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 497763315LL;

    t11 = ((x45|(x46%x47))^x48);

    if (t11 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MIN;
	static volatile uint32_t x51 = 20584801U;
	static uint64_t x52 = 86663037668815846LLU;

    t12 = ((x49|(x50%x51))^x52);

    if (t12 != 18360081036040735769LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = -1;
	int32_t x54 = -1;
	int64_t x56 = INT64_MAX;

    t13 = ((x53|(x54%x55))^x56);

    if (t13 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x57 = 0;
	uint16_t x58 = UINT16_MAX;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = 95U;
	static int64_t t14 = 5792532121588LL;

    t14 = ((x57|(x58%x59))^x60);

    if (t14 != 65440LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x61 = 0U;
	uint8_t x62 = UINT8_MAX;
	uint32_t x63 = 67607U;
	volatile int64_t x64 = -18364539289LL;
	volatile int64_t t15 = 36LL;

    t15 = ((x61|(x62%x63))^x64);

    if (t15 != -18364539240LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x66 = 3U;
	uint8_t x67 = 15U;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = 4163806;

    t16 = ((x65|(x66%x67))^x68);

    if (t16 != -2147483521) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x69 = INT64_MAX;
	static int8_t x70 = 0;
	static volatile int8_t x71 = -1;
	int16_t x72 = 0;
	volatile int64_t t17 = INT64_MAX;

    t17 = ((x69|(x70%x71))^x72);

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x74 = 25U;
	int16_t x75 = 9694;
	int16_t x76 = -1008;
	static volatile int32_t t18 = -261525273;

    t18 = ((x73|(x74%x75))^x76);

    if (t18 != 905) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = 82362910LL;
	volatile int8_t x78 = 8;
	volatile int64_t x79 = 3062126LL;
	static volatile int16_t x80 = INT16_MIN;

    t19 = ((x77|(x78%x79))^x80);

    if (t19 != -82361826LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	int16_t x82 = -6;
	int16_t x83 = INT16_MAX;
	volatile int32_t t20 = 2090572;

    t20 = ((x81|(x82%x83))^x84);

    if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 112003U;
	int64_t x87 = INT64_MIN;
	static volatile int16_t x88 = INT16_MIN;
	int64_t t21 = 1440253031LL;

    t21 = ((x85|(x86%x87))^x88);

    if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	static int32_t x91 = INT32_MIN;
	int32_t x92 = -439136853;
	int32_t t22 = 8384771;

    t22 = ((x89|(x90%x91))^x92);

    if (t22 != 439136811) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x93 = -25;
	int8_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	static volatile int8_t x96 = INT8_MIN;
	volatile uint64_t t23 = 130563337705216LLU;

    t23 = ((x93|(x94%x95))^x96);

    if (t23 != 103LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 2U;
	int32_t x98 = INT32_MIN;
	int16_t x99 = 1;
	uint8_t x100 = 12U;

    t24 = ((x97|(x98%x99))^x100);

    if (t24 != 14) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static int64_t x103 = 268380582LL;
	uint32_t x104 = 23U;
	int64_t t25 = -82514LL;

    t25 = ((x101|(x102%x103))^x104);

    if (t25 != -24LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x105 = 172982808525051LLU;
	volatile int32_t x106 = 6894101;
	uint64_t x107 = 6351068211281761524LLU;
	static volatile uint64_t t26 = 419LLU;

    t26 = ((x105|(x106%x107))^x108);

    if (t26 != 9223199054044087552LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int64_t x110 = -1LL;
	volatile int64_t x111 = INT64_MAX;
	int32_t x112 = INT32_MIN;
	volatile int64_t t27 = 901920242373175LL;

    t27 = ((x109|(x110%x111))^x112);

    if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x114 = -118LL;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 11510180998LLU;
	uint64_t t28 = 5119466LLU;

    t28 = ((x113|(x114%x115))^x116);

    if (t28 != 18446744062199370508LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile uint16_t x118 = 12956U;
	static int32_t x119 = -1;
	int64_t t29 = 9749LL;

    t29 = ((x117|(x118%x119))^x120);

    if (t29 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = 5;
	int8_t x122 = INT8_MIN;
	int32_t x123 = INT32_MIN;
	int32_t x124 = 4184;
	volatile int32_t t30 = 31176;

    t30 = ((x121|(x122%x123))^x124);

    if (t30 != -4131) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile int64_t x126 = -480902004815LL;
	int64_t x127 = INT64_MAX;
	int64_t x128 = 47LL;
	volatile int64_t t31 = -474238771869344LL;

    t31 = ((x125|(x126%x127))^x128);

    if (t31 != -2013151330LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	volatile int8_t x131 = 1;
	volatile uint32_t t32 = 0U;

    t32 = ((x129|(x130%x131))^x132);

    if (t32 != 32753U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = INT32_MAX;
	static volatile int8_t x134 = INT8_MAX;
	volatile int16_t x135 = -1;
	volatile int32_t t33 = -2364344;

    t33 = ((x133|(x134%x135))^x136);

    if (t33 != -2147450881) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = UINT64_MAX;
	uint16_t x138 = 6497U;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = 1912197249930LLU;
	uint64_t t34 = 26357LLU;

    t34 = ((x137|(x138%x139))^x140);

    if (t34 != 18446742161512301685LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x142 = INT16_MAX;
	int64_t x143 = -1648046524453245LL;
	static int64_t t35 = 665079765LL;

    t35 = ((x141|(x142%x143))^x144);

    if (t35 != -256LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = -1;
	static int64_t x146 = INT64_MAX;
	volatile int8_t x147 = INT8_MIN;
	uint8_t x148 = 5U;

    t36 = ((x145|(x146%x147))^x148);

    if (t36 != -6LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x149 = -1;
	int16_t x151 = -1;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 23;

    t37 = ((x149|(x150%x151))^x152);

    if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = INT32_MIN;
	int32_t x154 = -1;
	static int32_t t38 = -22990535;

    t38 = ((x153|(x154%x155))^x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x157 = INT16_MAX;
	static volatile int32_t x158 = 150;
	int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;

    t39 = ((x157|(x158%x159))^x160);

    if (t39 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x163 = -33;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = 3984;

    t40 = ((x161|(x162%x163))^x164);

    if (t40 != -183) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MIN;
	int32_t x168 = -1;
	volatile int64_t t41 = -318493890295603578LL;

    t41 = ((x165|(x166%x167))^x168);

    if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MAX;
	static int64_t x172 = 224820437572368LL;
	int64_t t42 = -66386847LL;

    t42 = ((x169|(x170%x171))^x172);

    if (t42 != -224820437572369LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x173 = INT64_MAX;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = 2292;
	static volatile int64_t t43 = -78LL;

    t43 = ((x173|(x174%x175))^x176);

    if (t43 != -2293LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x177 = 44U;
	static int16_t x178 = -2631;
	int64_t x179 = INT64_MIN;
	volatile uint8_t x180 = UINT8_MAX;

    t44 = ((x177|(x178%x179))^x180);

    if (t44 != -2750LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	volatile int32_t x182 = -308956349;
	int8_t x183 = -41;
	static volatile uint16_t x184 = 7413U;
	volatile uint32_t t45 = 988U;

    t45 = ((x181|(x182%x183))^x184);

    if (t45 != 4294959882U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x186 = 8U;
	int16_t x188 = INT16_MIN;
	int32_t t46 = 23416432;

    t46 = ((x185|(x186%x187))^x188);

    if (t46 != 2147450880) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = INT16_MAX;
	int16_t x190 = 1435;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile int64_t t47 = 3940LL;

    t47 = ((x189|(x190%x191))^x192);

    if (t47 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x196 = -1;
	uint64_t t48 = 114LLU;

    t48 = ((x193|(x194%x195))^x196);

    if (t48 != 18446744073708927577LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 7;
	int8_t x199 = -21;
	int16_t x200 = -98;
	int32_t t49 = -237467;

    t49 = ((x197|(x198%x199))^x200);

    if (t49 != -103) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x201 = -594750270835439LL;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = -1;
	uint64_t x204 = 24720630468653013LLU;
	static uint64_t t50 = 61925955239LLU;

    t50 = ((x201|(x202%x203))^x204);

    if (t50 != 18422590395878038212LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x205 = UINT8_MAX;
	volatile int32_t x206 = INT32_MAX;
	volatile int8_t x207 = INT8_MIN;
	int64_t x208 = -80503866536LL;

    t51 = ((x205|(x206%x207))^x208);

    if (t51 != -80503866457LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x209 = UINT16_MAX;
	int16_t x210 = -1;
	int64_t x211 = -38109450LL;
	volatile int64_t t52 = -11836478659LL;

    t52 = ((x209|(x210%x211))^x212);

    if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x213 = 96U;
	int8_t x214 = INT8_MIN;
	static int64_t x215 = -1LL;
	int8_t x216 = INT8_MIN;
	volatile int64_t t53 = 4612881826235159LL;

    t53 = ((x213|(x214%x215))^x216);

    if (t53 != -32LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x217 = UINT16_MAX;
	int16_t x219 = INT16_MIN;
	volatile uint64_t x220 = UINT64_MAX;
	uint64_t t54 = 3059797LLU;

    t54 = ((x217|(x218%x219))^x220);

    if (t54 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x221 = UINT16_MAX;
	uint8_t x222 = 5U;
	int32_t x224 = 8829736;
	uint64_t t55 = 39064589223592LLU;

    t55 = ((x221|(x222%x223))^x224);

    if (t55 != 8799447LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x226 = INT32_MIN;
	uint8_t x227 = 72U;
	uint8_t x228 = UINT8_MAX;
	static volatile uint64_t t56 = 1421LLU;

    t56 = ((x225|(x226%x227))^x228);

    if (t56 != 18446744073709551414LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x229 = INT16_MAX;
	int8_t x231 = INT8_MAX;
	int8_t x232 = INT8_MIN;

    t57 = ((x229|(x230%x231))^x232);

    if (t57 != -32641) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	int64_t x234 = -56707326039880244LL;
	static uint16_t x235 = 1500U;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = 6LLU;

    t58 = ((x233|(x234%x235))^x236);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x237 = 1U;
	volatile int8_t x238 = -15;
	volatile int64_t t59 = 1363LL;

    t59 = ((x237|(x238%x239))^x240);

    if (t59 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x241 = 6149848038020LLU;
	static int32_t x242 = INT32_MAX;
	int32_t x244 = INT32_MAX;
	uint64_t t60 = 550LLU;

    t60 = ((x241|(x242%x243))^x244);

    if (t60 != 6148790814024LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x245 = -1;
	volatile int16_t x246 = INT16_MIN;
	uint8_t x247 = 51U;
	int16_t x248 = 47;
	int32_t t61 = 1420786;

    t61 = ((x245|(x246%x247))^x248);

    if (t61 != -48) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x249 = INT64_MIN;
	volatile int8_t x250 = -1;
	static int8_t x251 = INT8_MIN;
	volatile uint64_t t62 = 6719LLU;

    t62 = ((x249|(x250%x251))^x252);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 4;
	static int32_t x254 = INT32_MAX;
	volatile int64_t x255 = -2020LL;
	volatile uint16_t x256 = 0U;

    t63 = ((x253|(x254%x255))^x256);

    if (t63 != 1447LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x258 = 90U;
	uint16_t x259 = 28U;
	int64_t x260 = -120555296251834LL;
	volatile int64_t t64 = -4925261826598LL;

    t64 = ((x257|(x258%x259))^x260);

    if (t64 != -120555296251840LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = 2;
	int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	int32_t t65 = 110470599;

    t65 = ((x261|(x262%x263))^x264);

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = INT8_MIN;
	uint16_t x266 = 6910U;
	static int64_t x268 = 4036LL;
	volatile int64_t t66 = 89241LL;

    t66 = ((x265|(x266%x267))^x268);

    if (t66 != -4018LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x269 = INT16_MIN;
	volatile uint32_t x270 = 14U;
	uint32_t x271 = 530U;
	uint32_t t67 = 526U;

    t67 = ((x269|(x270%x271))^x272);

    if (t67 != 14U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int32_t x274 = INT32_MAX;
	uint16_t x275 = 2900U;
	volatile int16_t x276 = INT16_MIN;
	uint64_t t68 = 1081293407LLU;

    t68 = ((x273|(x274%x275))^x276);

    if (t68 != 18446743950190217179LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x279 = INT64_MIN;
	uint16_t x280 = 12U;
	volatile int64_t t69 = -3762609805188556LL;

    t69 = ((x277|(x278%x279))^x280);

    if (t69 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x281 = INT64_MAX;
	static int8_t x282 = INT8_MAX;
	static volatile uint16_t x283 = 968U;
	uint8_t x284 = 59U;
	volatile int64_t t70 = -5012LL;

    t70 = ((x281|(x282%x283))^x284);

    if (t70 != 9223372036854775748LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x285 = UINT16_MAX;
	int16_t x286 = INT16_MIN;
	uint16_t x287 = 52U;
	static int64_t x288 = -1LL;
	int64_t t71 = -191LL;

    t71 = ((x285|(x286%x287))^x288);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int64_t x289 = INT64_MIN;
	volatile int16_t x290 = INT16_MIN;
	static int8_t x291 = 29;
	static int16_t x292 = INT16_MIN;
	int64_t t72 = 12435915600867LL;

    t72 = ((x289|(x290%x291))^x292);

    if (t72 != 32741LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x293 = INT64_MAX;
	int64_t x294 = -3542844908LL;
	volatile uint32_t x295 = UINT32_MAX;
	int64_t t73 = INT64_MAX;

    t73 = ((x293|(x294%x295))^x296);

    if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x297 = 31474U;
	uint8_t x298 = 3U;
	static int16_t x299 = 435;
	int64_t x300 = -25064717703599058LL;
	int64_t t74 = -8997760LL;

    t74 = ((x297|(x298%x299))^x300);

    if (t74 != -25064717703588131LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	int32_t t75 = 56369114;

    t75 = ((x301|(x302%x303))^x304);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 15U;
	volatile uint16_t x306 = 5575U;
	int16_t x308 = 1;
	int32_t t76 = 741;

    t76 = ((x305|(x306%x307))^x308);

    if (t76 != 5582) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x309 = 70;
	volatile uint16_t x311 = 87U;
	uint16_t x312 = 0U;

    t77 = ((x309|(x310%x311))^x312);

    if (t77 != 87) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = UINT32_MAX;
	int8_t x314 = INT8_MAX;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t78 = 46866037923569LLU;

    t78 = ((x313|(x314%x315))^x316);

    if (t78 != 18446744069414584447LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x317 = 10;
	uint64_t x318 = 561230462012285244LLU;
	uint64_t x319 = 9654799088137903LLU;
	volatile uint64_t t79 = 1279222296376890031LLU;

    t79 = ((x317|(x318%x319))^x320);

    if (t79 != 1252114901446339LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x321 = INT32_MAX;
	static int8_t x323 = INT8_MIN;
	int32_t t80 = 517;

    t80 = ((x321|(x322%x323))^x324);

    if (t80 != -2147483625) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 48055U;
	static int8_t x327 = 19;
	int8_t x328 = -1;

    t81 = ((x325|(x326%x327))^x328);

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = -1253684277497207260LL;
	static volatile int64_t x330 = INT64_MIN;
	uint32_t x331 = 61863U;
	static int16_t x332 = -1;
	volatile int64_t t82 = 102741111LL;

    t82 = ((x329|(x330%x331))^x332);

    if (t82 != 2505LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x333 = 29913326LLU;
	static volatile int32_t x334 = INT32_MAX;
	int16_t x335 = -4;
	uint64_t t83 = 3604328123061720763LLU;

    t83 = ((x333|(x334%x335))^x336);

    if (t83 != 29901512LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 16U;
	static volatile int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MIN;
	volatile int64_t x340 = 0LL;
	static int64_t t84 = 7LL;

    t84 = ((x337|(x338%x339))^x340);

    if (t84 != 16LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x342 = 1;
	volatile uint64_t t85 = 21497981187917LLU;

    t85 = ((x341|(x342%x343))^x344);

    if (t85 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x345 = 14;
	int16_t x347 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	int64_t t86 = 464757241532460LL;

    t86 = ((x345|(x346%x347))^x348);

    if (t86 != 9223372036854775694LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x349 = 219U;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	int16_t x352 = INT16_MAX;
	int32_t t87 = -622;

    t87 = ((x349|(x350%x351))^x352);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = -1;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MIN;
	uint64_t t88 = 66867504287732561LLU;

    t88 = ((x353|(x354%x355))^x356);

    if (t88 != 32767LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MAX;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;

    t89 = ((x357|(x358%x359))^x360);

    if (t89 != 2101617130U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -1;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = INT64_MIN;

    t90 = ((x361|(x362%x363))^x364);

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x365 = INT16_MAX;
	volatile int64_t x367 = INT64_MIN;
	uint16_t x368 = UINT16_MAX;
	volatile int64_t t91 = -174809LL;

    t91 = ((x365|(x366%x367))^x368);

    if (t91 != -65536LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x369 = UINT8_MAX;
	static uint32_t x371 = 100U;
	int8_t x372 = INT8_MAX;
	uint32_t t92 = 1U;

    t92 = ((x369|(x370%x371))^x372);

    if (t92 != 128U) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x373 = UINT64_MAX;
	uint8_t x374 = 2U;
	int32_t x376 = 27754375;

    t93 = ((x373|(x374%x375))^x376);

    if (t93 != 18446744073681797240LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = 55900;
	int16_t x378 = INT16_MIN;
	int64_t x379 = -1LL;
	int64_t t94 = 432976328LL;

    t94 = ((x377|(x378%x379))^x380);

    if (t94 != 42403LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = -12;
	int16_t x382 = -5;
	int8_t x383 = INT8_MIN;
	int32_t t95 = INT32_MAX;

    t95 = ((x381|(x382%x383))^x384);

    if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MAX;
	int64_t x386 = -1LL;
	static uint64_t x387 = 1595LLU;
	int16_t x388 = 15;
	volatile uint64_t t96 = 41550578241LLU;

    t96 = ((x385|(x386%x387))^x388);

    if (t96 != 2147483632LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x389 = UINT16_MAX;
	uint16_t x390 = 3628U;
	static uint16_t x391 = 2458U;
	static volatile int64_t x392 = -1339916LL;
	int64_t t97 = 2618844919LL;

    t97 = ((x389|(x390%x391))^x392);

    if (t97 != -1347061LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x395 = UINT8_MAX;
	int8_t x396 = -1;
	volatile int64_t t98 = 1167916232024945LL;

    t98 = ((x393|(x394%x395))^x396);

    if (t98 != -189205357965824LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x397 = 124U;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 2113948670099561228LLU;
	uint64_t t99 = 27163LLU;

    t99 = ((x397|(x398%x399))^x400);

    if (t99 != 2113948670099561328LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MAX;
	volatile int8_t x402 = INT8_MAX;
	int32_t x403 = -931627467;
	volatile uint8_t x404 = UINT8_MAX;
	volatile int64_t t100 = 2LL;

    t100 = ((x401|(x402%x403))^x404);

    if (t100 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x405 = -2243959035875811LL;
	int16_t x406 = -220;
	int32_t x407 = INT32_MAX;
	volatile int16_t x408 = 1458;
	volatile int64_t t101 = 8992LL;

    t101 = ((x405|(x406%x407))^x408);

    if (t101 != -1393LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MIN;
	static int64_t x411 = -499LL;
	volatile uint32_t x412 = 24958U;
	int64_t t102 = 22691200071389LL;

    t102 = ((x409|(x410%x411))^x412);

    if (t102 != -24996LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x413 = 237714599LLU;
	int8_t x414 = INT8_MIN;
	uint32_t x415 = 11828815U;
	uint16_t x416 = UINT16_MAX;
	volatile uint64_t t103 = 7304207293054LLU;

    t103 = ((x413|(x414%x415))^x416);

    if (t103 != 238748160LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x417 = -1LL;
	int8_t x418 = -1;
	int8_t x420 = 62;
	int64_t t104 = 49540654557199742LL;

    t104 = ((x417|(x418%x419))^x420);

    if (t104 != -63LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile uint32_t x425 = 9790585U;
	volatile int64_t t105 = 1326613003246227680LL;

    t105 = ((x425|(x426%x427))^x428);

    if (t105 != -9790586LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x429 = 4128505U;
	static int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MIN;
	int64_t t106 = -214309841969928653LL;

    t106 = ((x429|(x430%x431))^x432);

    if (t106 != -9223372036850647047LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x433 = 2846;
	uint64_t x434 = 1758024LLU;
	int64_t x436 = -1LL;
	uint64_t t107 = 4LLU;

    t107 = ((x433|(x434%x435))^x436);

    if (t107 != 18446744073707791521LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x437 = UINT32_MAX;
	int64_t x438 = INT64_MIN;
	int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int64_t t108 = 547304914695LL;

    t108 = ((x437|(x438%x439))^x440);

    if (t108 != 4294967168LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x441 = INT8_MIN;
	uint32_t x442 = UINT32_MAX;
	static int16_t x443 = 3432;
	uint64_t x444 = 2LLU;
	static volatile uint64_t t109 = 165012324503482LLU;

    t109 = ((x441|(x442%x443))^x444);

    if (t109 != 4294967205LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x445 = -1;
	static int16_t x446 = INT16_MIN;
	static int32_t x447 = INT32_MIN;
	int32_t x448 = 58;
	volatile int32_t t110 = 6;

    t110 = ((x445|(x446%x447))^x448);

    if (t110 != -59) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x449 = -1LL;
	uint16_t x451 = 302U;
	uint8_t x452 = 3U;

    t111 = ((x449|(x450%x451))^x452);

    if (t111 != -4LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x453 = INT16_MAX;
	uint16_t x454 = 3471U;
	uint8_t x455 = 17U;
	int8_t x456 = -1;
	volatile int32_t t112 = -281489;

    t112 = ((x453|(x454%x455))^x456);

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x457 = -11;
	int32_t x458 = INT32_MIN;
	int64_t x459 = INT64_MAX;
	volatile uint32_t x460 = UINT32_MAX;
	int64_t t113 = -7139LL;

    t113 = ((x457|(x458%x459))^x460);

    if (t113 != -4294967286LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x462 = -1;
	int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MAX;
	int64_t t114 = INT64_MIN;

    t114 = ((x461|(x462%x463))^x464);

    if (t114 != INT64_MIN) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x465 = INT8_MIN;
	static int32_t x466 = INT32_MIN;
	static volatile uint64_t x467 = 580970917697418LLU;
	static int64_t x468 = INT64_MIN;

    t115 = ((x465|(x466%x467))^x468);

    if (t115 != 9223372036854775738LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x469 = 74U;
	uint64_t x470 = UINT64_MAX;
	int64_t x471 = -21693779LL;
	uint64_t t116 = 738245LLU;

    t116 = ((x469|(x470%x471))^x472);

    if (t116 != 9223372036876469594LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x473 = -1LL;
	static volatile int64_t x474 = INT64_MIN;
	int64_t x475 = INT64_MIN;
	uint64_t x476 = UINT64_MAX;

    t117 = ((x473|(x474%x475))^x476);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x477 = -1;

    t118 = ((x477|(x478%x479))^x480);

    if (t118 != 4128480577U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile uint16_t x481 = UINT16_MAX;
	int16_t x482 = -1235;
	uint32_t x483 = UINT32_MAX;
	int8_t x484 = INT8_MIN;

    t119 = ((x481|(x482%x483))^x484);

    if (t119 != 127U) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = 30;
	int8_t x490 = INT8_MIN;
	static int16_t x492 = INT16_MIN;

    t120 = ((x489|(x490%x491))^x492);

    if (t120 != 32670) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x493 = -125;
	int32_t x495 = 8826;
	int16_t x496 = INT16_MAX;
	volatile int32_t t121 = -32;

    t121 = ((x493|(x494%x495))^x496);

    if (t121 != -32644) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = INT64_MIN;
	int8_t x498 = INT8_MIN;
	static uint32_t x499 = UINT32_MAX;
	int16_t x500 = INT16_MAX;
	int64_t t122 = -13028LL;

    t122 = ((x497|(x498%x499))^x500);

    if (t122 != -9223372032559841153LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x501 = 0U;
	volatile uint16_t x504 = 1004U;

    t123 = ((x501|(x502%x503))^x504);

    if (t123 != -31764) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x505 = 199U;
	int16_t x507 = INT16_MIN;
	int32_t x508 = INT32_MAX;
	static int32_t t124 = 489322;

    t124 = ((x505|(x506%x507))^x508);

    if (t124 != 2147483440) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x511 = 392U;
	uint8_t x512 = UINT8_MAX;

    t125 = ((x509|(x510%x511))^x512);

    if (t125 != 4294967040U) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x513 = INT16_MIN;
	static volatile int8_t x514 = INT8_MIN;

    t126 = ((x513|(x514%x515))^x516);

    if (t126 != -20925) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x517 = INT32_MIN;
	static volatile uint16_t x518 = 326U;
	int8_t x519 = INT8_MIN;
	volatile int16_t x520 = INT16_MIN;
	int32_t t127 = -49;

    t127 = ((x517|(x518%x519))^x520);

    if (t127 != 2147450950) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = INT64_MAX;
	static int64_t t128 = -66833632122LL;

    t128 = ((x521|(x522%x523))^x524);

    if (t128 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x525 = UINT64_MAX;
	uint64_t x526 = 14391266LLU;
	static int16_t x527 = -1;
	int32_t x528 = INT32_MIN;
	uint64_t t129 = 243248LLU;

    t129 = ((x525|(x526%x527))^x528);

    if (t129 != 2147483647LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x530 = INT64_MIN;
	int32_t x531 = -1300;
	int64_t x532 = INT64_MAX;
	int64_t t130 = INT64_MIN;

    t130 = ((x529|(x530%x531))^x532);

    if (t130 != INT64_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x533 = -1LL;
	uint32_t x534 = 36756U;
	static uint8_t x535 = 39U;
	int8_t x536 = INT8_MIN;

    t131 = ((x533|(x534%x535))^x536);

    if (t131 != 127LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x537 = UINT8_MAX;
	int64_t x538 = -1859062032399364145LL;
	uint8_t x539 = 17U;
	uint8_t x540 = 2U;
	int64_t t132 = -6887902LL;

    t132 = ((x537|(x538%x539))^x540);

    if (t132 != -3LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x543 = INT32_MAX;
	int32_t x544 = 6466;
	static volatile int32_t t133 = -4;

    t133 = ((x541|(x542%x543))^x544);

    if (t133 != -6471) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x549 = -230;
	uint8_t x550 = UINT8_MAX;
	int16_t x552 = -1354;
	volatile int32_t t134 = -3690133;

    t134 = ((x549|(x550%x551))^x552);

    if (t134 != 1452) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x557 = 70LL;
	static uint64_t x558 = 469505036347581984LLU;
	int32_t x559 = -1;
	volatile uint64_t t135 = 2961395880373814158LLU;

    t135 = ((x557|(x558%x559))^x560);

    if (t135 != 469505036347582054LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x562 = 134209313;
	int64_t x563 = INT64_MIN;
	int8_t x564 = -1;
	volatile int64_t t136 = 115187310673823LL;

    t136 = ((x561|(x562%x563))^x564);

    if (t136 != -134209456LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x565 = 1;
	static int32_t x566 = -1;
	int32_t x568 = -1;

    t137 = ((x565|(x566%x567))^x568);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x569 = -1LL;
	static uint8_t x571 = UINT8_MAX;
	uint8_t x572 = 3U;
	volatile int64_t t138 = 250800LL;

    t138 = ((x569|(x570%x571))^x572);

    if (t138 != -4LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x573 = 1;
	volatile int16_t x574 = INT16_MAX;
	int16_t x575 = -1;
	int64_t x576 = -1LL;
	static int64_t t139 = -54699909LL;

    t139 = ((x573|(x574%x575))^x576);

    if (t139 != -2LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = -1LL;
	int8_t x578 = -29;
	static int64_t x579 = INT64_MAX;
	int16_t x580 = -1;

    t140 = ((x577|(x578%x579))^x580);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x581 = 14;
	int64_t x583 = -2112923547185LL;
	static int16_t x584 = 0;
	int64_t t141 = -1365438545806LL;

    t141 = ((x581|(x582%x583))^x584);

    if (t141 != -114LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x585 = UINT8_MAX;
	int8_t x588 = INT8_MIN;
	volatile int32_t t142 = -2074112;

    t142 = ((x585|(x586%x587))^x588);

    if (t142 != 32639) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x589 = UINT16_MAX;
	int32_t x590 = INT32_MAX;
	volatile uint64_t x592 = 995720981368661LLU;
	uint64_t t143 = 1462LLU;

    t143 = ((x589|(x590%x591))^x592);

    if (t143 != 995720062316714LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x593 = -158;
	int8_t x596 = -1;
	volatile int32_t t144 = 196681;

    t144 = ((x593|(x594%x595))^x596);

    if (t144 != 29) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x599 = 17663U;
	volatile uint16_t x600 = UINT16_MAX;
	volatile uint64_t t145 = 455108233140LLU;

    t145 = ((x597|(x598%x599))^x600);

    if (t145 != 2125256967115597953LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x601 = INT64_MIN;
	int16_t x602 = 0;
	int64_t x604 = INT64_MAX;

    t146 = ((x601|(x602%x603))^x604);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x606 = INT32_MAX;
	uint16_t x607 = UINT16_MAX;
	uint32_t x608 = 13437053U;
	uint32_t t147 = 930U;

    t147 = ((x605|(x606%x607))^x608);

    if (t147 != 13465474U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x609 = 4;
	int16_t x611 = INT16_MIN;

    t148 = ((x609|(x610%x611))^x612);

    if (t148 != 32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x613 = -14097400;
	static int16_t x614 = INT16_MIN;
	int64_t x615 = -1LL;
	int64_t x616 = 1546597LL;
	static int64_t t149 = -269748519039030040LL;

    t149 = ((x613|(x614%x615))^x616);

    if (t149 != -12616339LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x617 = INT32_MIN;
	volatile int8_t x620 = INT8_MAX;

    t150 = ((x617|(x618%x619))^x620);

    if (t150 != -2147483522) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x621 = UINT32_MAX;
	int16_t x622 = INT16_MIN;
	int16_t x624 = -1;
	volatile uint32_t t151 = 235937789U;

    t151 = ((x621|(x622%x623))^x624);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x625 = 15;
	int16_t x626 = INT16_MIN;
	volatile int8_t x627 = -1;
	int64_t x628 = INT64_MIN;
	volatile int64_t t152 = 484782549963830LL;

    t152 = ((x625|(x626%x627))^x628);

    if (t152 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x629 = INT32_MIN;
	int16_t x630 = -3969;
	int64_t x631 = -94684LL;
	static int32_t x632 = -1;
	volatile int64_t t153 = 2715807992LL;

    t153 = ((x629|(x630%x631))^x632);

    if (t153 != 3968LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x633 = INT16_MIN;
	int8_t x634 = INT8_MIN;
	int64_t x635 = INT64_MAX;
	int32_t x636 = INT32_MIN;
	int64_t t154 = 49801304LL;

    t154 = ((x633|(x634%x635))^x636);

    if (t154 != 2147483520LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x637 = INT16_MAX;
	static int16_t x638 = INT16_MIN;
	uint16_t x639 = 5129U;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t155 = 3LLU;

    t155 = ((x637|(x638%x639))^x640);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int16_t x641 = -2731;
	int8_t x642 = -1;
	int16_t x643 = INT16_MIN;
	int32_t t156 = 1;

    t156 = ((x641|(x642%x643))^x644);

    if (t156 != 4) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x646 = UINT32_MAX;
	uint16_t x648 = UINT16_MAX;

    t157 = ((x645|(x646%x647))^x648);

    if (t157 != 2527314088314036387LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x650 = 1104U;
	volatile uint64_t x651 = UINT64_MAX;
	int16_t x652 = INT16_MIN;
	uint64_t t158 = 141145832LLU;

    t158 = ((x649|(x650%x651))^x652);

    if (t158 != 18446744073709524318LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x653 = 1338001717372289LLU;
	static volatile int32_t x654 = -1;
	int32_t x656 = -1;
	volatile uint64_t t159 = 260419044020552LLU;

    t159 = ((x653|(x654%x655))^x656);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x657 = -1;
	int32_t x658 = 259090;
	int64_t x659 = -15480LL;
	uint64_t x660 = 1951LLU;
	uint64_t t160 = 2LLU;

    t160 = ((x657|(x658%x659))^x660);

    if (t160 != 18446744073709549664LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x661 = INT32_MIN;
	int64_t x662 = INT64_MIN;
	int32_t x663 = -3461;
	int8_t x664 = INT8_MAX;
	volatile int64_t t161 = -900124900461394424LL;

    t161 = ((x661|(x662%x663))^x664);

    if (t161 != -1225LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x666 = INT64_MAX;
	volatile uint32_t x667 = 233176728U;
	int32_t x668 = -234504;
	static volatile int64_t t162 = 399136797LL;

    t162 = ((x665|(x666%x667))^x668);

    if (t162 != 234503LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x669 = INT64_MIN;
	uint16_t x670 = 6118U;
	int64_t x672 = -1LL;
	volatile int64_t t163 = 80750071475031LL;

    t163 = ((x669|(x670%x671))^x672);

    if (t163 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x673 = INT64_MAX;
	int8_t x674 = INT8_MAX;
	volatile int64_t x676 = -1LL;
	int64_t t164 = INT64_MIN;

    t164 = ((x673|(x674%x675))^x676);

    if (t164 != INT64_MIN) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile int64_t x682 = -2300288040782923LL;
	uint16_t x684 = 872U;
	volatile uint64_t t165 = 1005756113134LLU;

    t165 = ((x681|(x682%x683))^x684);

    if (t165 != 18446744073709550743LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint32_t x686 = UINT32_MAX;
	int32_t x687 = INT32_MIN;
	uint8_t x688 = 23U;
	volatile uint32_t t166 = 373079144U;

    t166 = ((x685|(x686%x687))^x688);

    if (t166 != 4294967272U) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x691 = INT8_MIN;
	static int32_t x692 = INT32_MAX;
	volatile uint32_t t167 = 4840001U;

    t167 = ((x689|(x690%x691))^x692);

    if (t167 != 2147483648U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x695 = INT16_MIN;

    t168 = ((x693|(x694%x695))^x696);

    if (t168 != 118) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x698 = 926U;
	volatile int32_t x699 = -1;
	int16_t x700 = -1;
	uint32_t t169 = 0U;

    t169 = ((x697|(x698%x699))^x700);

    if (t169 != 2147482721U) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x702 = INT8_MAX;
	uint64_t x703 = UINT64_MAX;
	int32_t x704 = INT32_MAX;
	volatile uint64_t t170 = 2208LLU;

    t170 = ((x701|(x702%x703))^x704);

    if (t170 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = -1;
	int8_t x706 = INT8_MAX;
	int16_t x707 = -2;
	volatile uint32_t x708 = 322U;
	uint32_t t171 = 7U;

    t171 = ((x705|(x706%x707))^x708);

    if (t171 != 4294966973U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x709 = -1;
	volatile int32_t x710 = -1;
	int8_t x711 = 13;
	int16_t x712 = 742;
	volatile int32_t t172 = -5;

    t172 = ((x709|(x710%x711))^x712);

    if (t172 != -743) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x713 = -114;
	uint16_t x714 = UINT16_MAX;
	int8_t x715 = INT8_MAX;
	int16_t x716 = INT16_MIN;
	int32_t t173 = -1;

    t173 = ((x713|(x714%x715))^x716);

    if (t173 != 32655) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x717 = 3U;
	volatile uint32_t x718 = UINT32_MAX;
	static int16_t x719 = INT16_MAX;
	uint8_t x720 = UINT8_MAX;
	uint32_t t174 = 5176442U;

    t174 = ((x717|(x718%x719))^x720);

    if (t174 != 252U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x722 = 407U;
	static uint8_t x723 = 115U;
	volatile uint16_t x724 = 2U;

    t175 = ((x721|(x722%x723))^x724);

    if (t175 != -96964LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x727 = -1;
	volatile int64_t t176 = -13LL;

    t176 = ((x725|(x726%x727))^x728);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x729 = 228969LLU;
	volatile int16_t x732 = INT16_MIN;
	uint64_t t177 = 60358908074889LLU;

    t177 = ((x729|(x730%x731))^x732);

    if (t177 != 18446744073709354623LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x733 = -948415;
	uint64_t x734 = 22436737LLU;
	uint16_t x735 = UINT16_MAX;
	static uint64_t t178 = 3440LLU;

    t178 = ((x733|(x734%x735))^x736);

    if (t178 != 18446744073708609576LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x737 = INT32_MIN;
	int16_t x738 = INT16_MIN;
	uint64_t x739 = 938069LLU;
	volatile uint64_t t179 = 224LLU;

    t179 = ((x737|(x738%x739))^x740);

    if (t179 != 2116329059LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x742 = -1LL;
	int64_t t180 = 71270538304LL;

    t180 = ((x741|(x742%x743))^x744);

    if (t180 != -65536LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x745 = 51;
	int8_t x746 = 1;
	static int32_t x747 = INT32_MIN;
	uint64_t x748 = 3786063451LLU;
	volatile uint64_t t181 = 19391LLU;

    t181 = ((x745|(x746%x747))^x748);

    if (t181 != 3786063464LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x750 = 13U;
	volatile uint16_t x751 = UINT16_MAX;
	volatile uint32_t t182 = 117444613U;

    t182 = ((x749|(x750%x751))^x752);

    if (t182 != 114U) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x753 = -1;
	static volatile uint64_t x755 = 33031LLU;
	uint32_t x756 = 607737860U;
	static volatile uint64_t t183 = 828080855846592689LLU;

    t183 = ((x753|(x754%x755))^x756);

    if (t183 != 18446744073101813755LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x757 = UINT64_MAX;
	int16_t x758 = -1;
	int32_t x759 = -2325669;
	static int16_t x760 = 72;
	uint64_t t184 = 1986LLU;

    t184 = ((x757|(x758%x759))^x760);

    if (t184 != 18446744073709551543LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x761 = 13942818LL;
	int8_t x762 = INT8_MIN;
	int32_t x763 = -1;
	int32_t x764 = -1;
	int64_t t185 = -94LL;

    t185 = ((x761|(x762%x763))^x764);

    if (t185 != -13942819LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x769 = INT16_MIN;
	volatile int16_t x770 = -15;
	uint64_t x771 = UINT64_MAX;
	volatile int32_t x772 = INT32_MAX;
	uint64_t t186 = 8812560008LLU;

    t186 = ((x769|(x770%x771))^x772);

    if (t186 != 18446744071562067982LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x773 = 124U;
	uint32_t x774 = UINT32_MAX;
	int8_t x775 = INT8_MAX;
	int16_t x776 = INT16_MIN;

    t187 = ((x773|(x774%x775))^x776);

    if (t187 != 4294934655U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x777 = -1;
	static int64_t x778 = INT64_MAX;
	uint16_t x780 = 3013U;
	static int64_t t188 = -540365897LL;

    t188 = ((x777|(x778%x779))^x780);

    if (t188 != -3014LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x781 = INT8_MAX;
	int16_t x782 = INT16_MIN;
	int64_t x783 = -1LL;
	uint64_t x784 = UINT64_MAX;
	static volatile uint64_t t189 = 23407LLU;

    t189 = ((x781|(x782%x783))^x784);

    if (t189 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x785 = INT16_MAX;
	static volatile int8_t x786 = INT8_MAX;
	int32_t x787 = INT32_MAX;

    t190 = ((x785|(x786%x787))^x788);

    if (t190 != -2147450881) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x790 = UINT32_MAX;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = -1;
	uint32_t t191 = 20907U;

    t191 = ((x789|(x790%x791))^x792);

    if (t191 != 1627U) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x793 = INT8_MAX;
	volatile int16_t x794 = 45;
	int32_t x795 = -55343109;
	int64_t x796 = 7381852338751LL;
	static int64_t t192 = 3237LL;

    t192 = ((x793|(x794%x795))^x796);

    if (t192 != 7381852338752LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x797 = 64825638LL;
	static uint64_t x798 = 171882372723422121LLU;
	volatile int32_t x799 = INT32_MIN;
	uint16_t x800 = UINT16_MAX;
	uint64_t t193 = 169115062LLU;

    t193 = ((x797|(x798%x799))^x800);

    if (t193 != 171882372765926480LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x801 = INT8_MIN;
	int64_t x802 = INT64_MIN;
	int32_t x803 = -3;
	uint32_t x804 = 21U;
	int64_t t194 = 381992LL;

    t194 = ((x801|(x802%x803))^x804);

    if (t194 != -21LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x805 = INT8_MIN;
	int32_t x806 = 38;
	uint64_t x807 = 412LLU;
	static int8_t x808 = -1;
	uint64_t t195 = 412699900100LLU;

    t195 = ((x805|(x806%x807))^x808);

    if (t195 != 89LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x810 = 13875779700531LLU;
	int16_t x811 = 188;
	static int16_t x812 = -1;
	volatile uint64_t t196 = 14763410570LLU;

    t196 = ((x809|(x810%x811))^x812);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int64_t x813 = INT64_MAX;
	int32_t x814 = 6;
	static uint32_t x815 = 1015834U;
	volatile int16_t x816 = INT16_MIN;
	static volatile int64_t t197 = 1268LL;

    t197 = ((x813|(x814%x815))^x816);

    if (t197 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x817 = 7;
	int32_t x818 = INT32_MIN;
	int64_t x819 = -1LL;
	int32_t x820 = INT32_MIN;
	volatile int64_t t198 = -38562LL;

    t198 = ((x817|(x818%x819))^x820);

    if (t198 != -2147483641LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = INT32_MAX;
	int8_t x822 = 7;
	int64_t x823 = INT64_MIN;
	int64_t x824 = -97LL;
	int64_t t199 = 15LL;

    t199 = ((x821|(x822%x823))^x824);

    if (t199 != -2147483552LL) { NG(); } else { ; }
	
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

