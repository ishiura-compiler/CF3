
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

static int64_t x2 = -1LL;
int8_t x3 = 34;
int32_t x6 = INT32_MIN;
int32_t t1 = 2503863;
uint16_t x9 = UINT16_MAX;
int32_t x18 = INT32_MIN;
uint64_t x24 = 3779164635LLU;
static int8_t x29 = -1;
int8_t x33 = -1;
uint32_t x44 = UINT32_MAX;
int32_t x48 = -2432;
volatile int64_t t11 = 504478LL;
static uint8_t x50 = 1U;
volatile int64_t t12 = 2682497LL;
volatile uint64_t t15 = 584813415777073LLU;
volatile uint32_t x65 = 800U;
uint32_t x66 = 4222324U;
int64_t x69 = -68847743LL;
static int8_t x70 = INT8_MAX;
int8_t x71 = INT8_MIN;
volatile int64_t x79 = -1LL;
int32_t x80 = -1;
uint64_t t21 = 11659823772LLU;
uint16_t x89 = 26859U;
volatile uint8_t x90 = 65U;
uint32_t x96 = 2544553U;
int64_t x99 = 3315248LL;
uint8_t x101 = 1U;
uint8_t x103 = 2U;
uint32_t t25 = 133823550U;
int32_t x105 = INT32_MIN;
int32_t x106 = INT32_MIN;
static int64_t x107 = INT64_MIN;
int64_t t26 = -114LL;
int64_t x111 = INT64_MAX;
volatile int32_t x115 = INT32_MAX;
int32_t t28 = 17;
uint32_t x124 = 1015472U;
int8_t x125 = -1;
uint32_t x130 = 283318598U;
volatile int8_t x131 = INT8_MIN;
static int64_t x132 = INT64_MAX;
volatile int8_t x133 = INT8_MAX;
int64_t x134 = INT64_MAX;
int32_t x142 = -1;
uint32_t x149 = 178U;
volatile int32_t x150 = -25221;
volatile int8_t x157 = INT8_MIN;
volatile int32_t x161 = INT32_MAX;
static volatile int32_t x170 = INT32_MAX;
volatile int64_t x171 = INT64_MIN;
int32_t t44 = -480556240;
int8_t x181 = INT8_MIN;
static int16_t x183 = INT16_MIN;
volatile int64_t t45 = -109309991642LL;
static int32_t x185 = -1;
int64_t x186 = INT64_MIN;
uint8_t x191 = UINT8_MAX;
uint32_t x194 = 1U;
static int64_t t49 = 11LL;
int16_t x205 = -1;
uint64_t t52 = 1824279328406479390LLU;
volatile uint64_t t54 = 14460LLU;
int64_t x221 = 6346513714448759LL;
int16_t x223 = -1;
int64_t x224 = -1LL;
uint32_t x229 = 25275U;
volatile int32_t x232 = INT32_MIN;
int32_t x233 = INT32_MAX;
static uint64_t x236 = 1141705LLU;
int8_t x237 = INT8_MAX;
uint8_t x239 = UINT8_MAX;
static int64_t x242 = -15715386LL;
static volatile int16_t x244 = -1;
int64_t x248 = -1LL;
int64_t t61 = 24LL;
int8_t x258 = INT8_MIN;
int64_t x262 = INT64_MIN;
int64_t t65 = 853165214215LL;
int8_t x265 = 1;
int16_t x267 = INT16_MAX;
uint16_t x277 = 25257U;
static int64_t x280 = 58885225LL;
int16_t x301 = 5966;
int8_t x305 = INT8_MIN;
int32_t x316 = -2047;
volatile int16_t x324 = -1;
int64_t x327 = -1LL;
uint8_t x329 = 78U;
static int64_t x331 = -1LL;
uint32_t x332 = UINT32_MAX;
static volatile uint32_t x353 = 65U;
uint64_t x364 = UINT64_MAX;
static int32_t x367 = -98315;
int32_t x370 = -1;
volatile int32_t x372 = -1;
volatile int8_t x374 = -24;
int32_t x376 = -1;
static uint32_t x377 = UINT32_MAX;
int64_t x381 = -1LL;
static int8_t x386 = 0;
static int32_t x387 = INT32_MAX;
uint16_t x389 = 4815U;
uint64_t x393 = 126728182822705321LLU;
int64_t x394 = INT64_MAX;
volatile uint64_t t94 = 1305LLU;
volatile int16_t x403 = -1909;
static volatile int32_t x404 = -1;
uint64_t x407 = 714131935991LLU;
int64_t x408 = -64898241715171LL;
uint16_t x409 = 0U;
static int32_t x410 = INT32_MIN;
volatile int64_t t98 = -1LL;
volatile int8_t x426 = -3;
static volatile uint64_t x432 = UINT64_MAX;
volatile uint64_t t103 = 903LLU;
uint16_t x435 = 29U;
static int16_t x436 = -1;
volatile uint64_t t104 = 24LLU;
uint8_t x440 = 3U;
int32_t x442 = -1;
static int32_t x454 = -4939;
uint64_t x456 = 649668563LLU;
uint16_t x459 = 25U;
volatile int16_t x468 = -1;
int32_t x474 = INT32_MIN;
volatile int64_t x478 = -34713031331LL;
int64_t t115 = 265099270107780LL;
int32_t x484 = -214205;
uint64_t x489 = UINT64_MAX;
static int64_t x494 = -125342LL;
int16_t x495 = -5880;
volatile int64_t x496 = INT64_MIN;
static int64_t x503 = INT64_MIN;
volatile uint32_t x505 = 251198590U;
volatile uint32_t t122 = 21111828U;
int8_t x510 = -5;
int8_t x517 = INT8_MIN;
uint8_t x520 = 38U;
static uint16_t x526 = 286U;
int8_t x527 = 0;
static uint8_t x529 = 32U;
int32_t x530 = -1;
uint64_t x533 = 1732805LLU;
uint8_t x536 = 0U;
static volatile uint64_t t129 = 327506486841LLU;
int64_t x537 = INT64_MAX;
int8_t x553 = -6;
volatile uint16_t x556 = 71U;
static int16_t x557 = -44;
static uint64_t t135 = 10686234778LLU;
int64_t x561 = -1LL;
volatile int8_t x565 = -1;
int16_t x568 = 468;
volatile int16_t x569 = -1;
int64_t x571 = -2225059354753LL;
volatile int64_t t138 = 554693025491778LL;
int64_t x575 = -1LL;
volatile int8_t x578 = -5;
int16_t x582 = -1;
uint64_t x584 = 128171LLU;
int32_t x585 = INT32_MIN;
volatile uint64_t t142 = 3498386013LLU;
static int32_t t143 = -686045936;
volatile uint32_t x595 = 11U;
int64_t x596 = -101941152658LL;
int64_t t144 = 129322LL;
uint64_t t147 = 5LLU;
int8_t x612 = INT8_MAX;
int8_t x613 = -1;
uint32_t x615 = 1U;
int32_t x620 = INT32_MIN;
uint64_t x621 = 50510171201915768LLU;
int64_t x623 = -1LL;
static uint64_t t151 = 2163LLU;
int32_t x625 = INT32_MIN;
uint16_t x632 = 4273U;
uint16_t x638 = 0U;
static int32_t x650 = -158;
int64_t x651 = INT64_MIN;
int64_t t157 = -2179338626891439LL;
int64_t x662 = -1LL;
static int32_t x671 = INT32_MAX;
uint16_t x673 = UINT16_MAX;
uint8_t x675 = 0U;
int64_t x679 = INT64_MIN;
static int64_t x682 = INT64_MIN;
volatile int32_t x685 = INT32_MIN;
volatile int64_t x686 = INT64_MIN;
uint64_t x687 = 172029LLU;
uint64_t x694 = 972659611LLU;
volatile uint64_t t167 = 9536865997LLU;
static uint8_t x697 = 43U;
int32_t x699 = INT32_MAX;
volatile uint32_t t168 = 0U;
uint16_t x712 = UINT16_MAX;
volatile uint64_t t171 = 299702648235469LLU;
int16_t x715 = INT16_MIN;
int16_t x716 = INT16_MIN;
uint64_t x717 = 179185674634LLU;
int8_t x720 = INT8_MAX;
uint64_t t175 = 8441947877384504422LLU;
uint32_t x747 = UINT32_MAX;
int64_t x748 = INT64_MAX;
volatile uint16_t x749 = 480U;
uint32_t t181 = 406612569U;
int8_t x758 = INT8_MAX;
volatile uint16_t x759 = UINT16_MAX;
uint32_t x763 = 28151469U;
uint64_t t184 = 9707373266LLU;
int32_t t186 = 954229551;
int8_t x781 = INT8_MIN;
int32_t x782 = INT32_MIN;
static int8_t x783 = INT8_MAX;
int32_t x785 = -187;
static uint32_t x787 = 8U;
volatile uint32_t t190 = 27U;
uint32_t t191 = 76U;
uint64_t x797 = 2LLU;
uint64_t x803 = 103712605279251451LLU;
uint32_t x807 = 1402083U;
static volatile int32_t x814 = -1;
volatile int64_t t197 = -55LL;
int64_t x824 = -2348LL;
int64_t t199 = -2111557926743948LL;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	static volatile uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = -226936LL;

    t0 = ((x1/(x2|x3))-x4);

    if (t0 != -65407LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x5 = INT8_MIN;
	int16_t x7 = 1833;
	int8_t x8 = -1;

    t1 = ((x5/(x6|x7))-x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint8_t x10 = 1U;
	int32_t x11 = INT32_MIN;
	static int32_t x12 = -73760617;
	int32_t t2 = -786229461;

    t2 = ((x9/(x10|x11))-x12);

    if (t2 != 73760617) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MAX;
	uint32_t x14 = 3748U;
	static volatile uint8_t x15 = UINT8_MAX;
	int16_t x16 = 11978;
	static uint32_t t3 = 250287U;

    t3 = ((x13/(x14|x15))-x16);

    if (t3 != 4294955318U) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1219;
	uint32_t x19 = 3291112U;
	static volatile int64_t x20 = INT64_MAX;
	int64_t t4 = 4054828495919982528LL;

    t4 = ((x17/(x18|x19))-x20);

    if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile uint32_t x21 = UINT32_MAX;
	static uint8_t x22 = 0U;
	int64_t x23 = -1LL;
	uint64_t t5 = 723LLU;

    t5 = ((x21/(x22|x23))-x24);

    if (t5 != 18446744065635419686LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = 2850;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -13090;

    t6 = ((x25/(x26|x27))-x28);

    if (t6 != 2147480798) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x30 = -1;
	volatile uint8_t x31 = 4U;
	uint64_t x32 = 6711181595096282LLU;
	volatile uint64_t t7 = 8453LLU;

    t7 = ((x29/(x30|x31))-x32);

    if (t7 != 18440032892114455335LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x34 = 238;
	uint64_t x35 = 542763472245LLU;
	volatile uint16_t x36 = UINT16_MAX;
	uint64_t t8 = 10584048LLU;

    t8 = ((x33/(x34|x35))-x36);

    if (t8 != 33921173LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x38 = INT16_MIN;
	int16_t x39 = INT16_MAX;
	uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 45644584LLU;

    t9 = ((x37/(x38|x39))-x40);

    if (t9 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = 77514489LL;
	int64_t x42 = 15056719269108891LL;
	uint32_t x43 = UINT32_MAX;
	int64_t t10 = 28593771264LL;

    t10 = ((x41/(x42|x43))-x44);

    if (t10 != -4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x45 = 1U;
	uint8_t x46 = 63U;
	static int64_t x47 = INT64_MIN;

    t11 = ((x45/(x46|x47))-x48);

    if (t11 != 2432LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = INT64_MIN;
	uint32_t x51 = UINT32_MAX;
	static volatile int8_t x52 = -1;

    t12 = ((x49/(x50|x51))-x52);

    if (t12 != -2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = 73;
	int64_t x54 = INT64_MIN;
	uint16_t x55 = UINT16_MAX;
	volatile int8_t x56 = 10;
	volatile int64_t t13 = 250265988LL;

    t13 = ((x53/(x54|x55))-x56);

    if (t13 != -10LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = 30U;
	volatile uint32_t x58 = UINT32_MAX;
	int16_t x59 = INT16_MIN;
	uint8_t x60 = 23U;
	uint32_t t14 = 8458627U;

    t14 = ((x57/(x58|x59))-x60);

    if (t14 != 4294967273U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x61 = 1811LLU;
	volatile uint16_t x62 = 23U;
	int64_t x63 = INT64_MIN;
	static int8_t x64 = 0;

    t15 = ((x61/(x62|x63))-x64);

    if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x67 = INT8_MIN;
	volatile uint16_t x68 = 3043U;
	uint32_t t16 = 673U;

    t16 = ((x65/(x66|x67))-x68);

    if (t16 != 4294964253U) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x72 = 0U;
	volatile int64_t t17 = -65371LL;

    t17 = ((x69/(x70|x71))-x72);

    if (t17 != 68847743LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x73 = -108718464810737805LL;
	volatile uint64_t x74 = 91038251441917390LLU;
	int8_t x75 = -1;
	int32_t x76 = -1;
	volatile uint64_t t18 = 1838796186209766623LLU;

    t18 = ((x73/(x74|x75))-x76);

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	uint16_t x78 = 628U;
	volatile int64_t t19 = -9LL;

    t19 = ((x77/(x78|x79))-x80);

    if (t19 != -254LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = -1;
	uint16_t x82 = 102U;
	int32_t x83 = -1;
	static volatile int32_t x84 = -1;
	int32_t t20 = 14;

    t20 = ((x81/(x82|x83))-x84);

    if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 22166U;
	static int8_t x86 = 14;
	volatile uint64_t x87 = 20LLU;
	uint8_t x88 = 39U;

    t21 = ((x85/(x86|x87))-x88);

    if (t21 != 699LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x91 = 1U;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t22 = 62630310;

    t22 = ((x89/(x90|x91))-x92);

    if (t22 != -32354) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 41386386LLU;
	int8_t x94 = INT8_MAX;
	int16_t x95 = INT16_MIN;
	volatile uint64_t t23 = 4806030LLU;

    t23 = ((x93/(x94|x95))-x96);

    if (t23 != 18446744073707007063LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = INT32_MIN;
	int16_t x98 = INT16_MIN;
	volatile int8_t x100 = INT8_MIN;
	static int64_t t24 = -2963361LL;

    t24 = ((x97/(x98|x99))-x100);

    if (t24 != 79406LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x102 = -1;
	volatile uint32_t x104 = UINT32_MAX;

    t25 = ((x101/(x102|x103))-x104);

    if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x108 = INT32_MIN;

    t26 = ((x105/(x106|x107))-x108);

    if (t26 != 2147483649LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = -1;
	volatile int16_t x110 = 297;
	uint32_t x112 = 31917U;
	int64_t t27 = 57134781688323770LL;

    t27 = ((x109/(x110|x111))-x112);

    if (t27 != -31917LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = -3769;
	int32_t x114 = INT32_MIN;
	static uint16_t x116 = 113U;

    t28 = ((x113/(x114|x115))-x116);

    if (t28 != 3656) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = 28;
	static int64_t x118 = 15741288706961LL;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 491737935272091LLU;
	static uint64_t t29 = 773171918924943804LLU;

    t29 = ((x117/(x118|x119))-x120);

    if (t29 != 18446252335774279525LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x121 = UINT32_MAX;
	int32_t x122 = 4233725;
	volatile int32_t x123 = -27;
	uint32_t t30 = 2804414U;

    t30 = ((x121/(x122|x123))-x124);

    if (t30 != 4293951825U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x126 = UINT8_MAX;
	volatile int64_t x127 = INT64_MIN;
	static uint32_t x128 = 1492797581U;
	volatile int64_t t31 = 101720732716748LL;

    t31 = ((x125/(x126|x127))-x128);

    if (t31 != -1492797581LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x129 = 31LLU;
	volatile uint64_t t32 = 472464LLU;

    t32 = ((x129/(x130|x131))-x132);

    if (t32 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x135 = INT8_MIN;
	uint8_t x136 = 1U;
	static int64_t t33 = -518844513981375781LL;

    t33 = ((x133/(x134|x135))-x136);

    if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 52862646072569786LLU;
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MAX;
	static volatile int8_t x140 = -1;
	volatile uint64_t t34 = 121641776LLU;

    t34 = ((x137/(x138|x139))-x140);

    if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x141 = 1453405171673LLU;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;
	static volatile uint64_t t35 = 130628LLU;

    t35 = ((x141/(x142|x143))-x144);

    if (t35 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x145 = INT64_MIN;
	volatile int64_t x146 = INT64_MIN;
	int64_t x147 = 12670LL;
	int8_t x148 = 3;
	int64_t t36 = 3503107356948990LL;

    t36 = ((x145/(x146|x147))-x148);

    if (t36 != -2LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	volatile uint32_t t37 = 920U;

    t37 = ((x149/(x150|x151))-x152);

    if (t37 != 32768U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 56327;
	static volatile int8_t x154 = -1;
	int16_t x155 = 85;
	volatile int8_t x156 = INT8_MIN;
	volatile int32_t t38 = -7;

    t38 = ((x153/(x154|x155))-x156);

    if (t38 != -56199) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x158 = 9;
	volatile int64_t x159 = 58182423275626897LL;
	int64_t x160 = INT64_MAX;
	volatile int64_t t39 = -6155828879LL;

    t39 = ((x157/(x158|x159))-x160);

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x162 = INT32_MIN;
	uint32_t x163 = 397555U;
	static volatile int64_t x164 = INT64_MAX;
	int64_t t40 = 67463233302939LL;

    t40 = ((x161/(x162|x163))-x164);

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MAX;
	int32_t x166 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -418;

    t41 = ((x165/(x166|x167))-x168);

    if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MAX;
	uint64_t x172 = 2221701476308231LLU;
	uint64_t t42 = 427LLU;

    t42 = ((x169/(x170|x171))-x172);

    if (t42 != 18444522372233243385LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x173 = 6531U;
	uint64_t x174 = UINT64_MAX;
	volatile uint16_t x175 = 1U;
	int64_t x176 = INT64_MIN;
	uint64_t t43 = 251632027LLU;

    t43 = ((x173/(x174|x175))-x176);

    if (t43 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x177 = 239;
	volatile int16_t x178 = INT16_MAX;
	uint8_t x179 = 1U;
	static uint8_t x180 = 0U;

    t44 = ((x177/(x178|x179))-x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x182 = INT64_MIN;
	int64_t x184 = -260819734282999512LL;

    t45 = ((x181/(x182|x183))-x184);

    if (t45 != 260819734282999512LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x187 = UINT8_MAX;
	int16_t x188 = 27;
	volatile int64_t t46 = 4LL;

    t46 = ((x185/(x186|x187))-x188);

    if (t46 != -27LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x189 = -1;
	volatile uint32_t x190 = 3U;
	static int8_t x192 = -1;
	volatile uint32_t t47 = 1060950397U;

    t47 = ((x189/(x190|x191))-x192);

    if (t47 != 16843010U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = -9;
	static int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MAX;
	uint32_t t48 = 23492U;

    t48 = ((x193/(x194|x195))-x196);

    if (t48 != 33818513U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 575719LL;
	int64_t x198 = INT64_MIN;
	static volatile int32_t x199 = -87842487;
	int16_t x200 = INT16_MIN;

    t49 = ((x197/(x198|x199))-x200);

    if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MIN;
	uint16_t x202 = 68U;
	uint64_t x203 = UINT64_MAX;
	static int16_t x204 = -12556;
	uint64_t t50 = 8727906778053LLU;

    t50 = ((x201/(x202|x203))-x204);

    if (t50 != 12556LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x206 = INT64_MIN;
	uint16_t x207 = 6U;
	static int16_t x208 = INT16_MIN;
	int64_t t51 = 8416LL;

    t51 = ((x205/(x206|x207))-x208);

    if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MAX;
	int8_t x211 = -63;
	volatile uint8_t x212 = UINT8_MAX;

    t52 = ((x209/(x210|x211))-x212);

    if (t52 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x213 = 10353963U;
	int16_t x214 = INT16_MAX;
	uint16_t x215 = UINT16_MAX;
	volatile int16_t x216 = INT16_MAX;
	volatile uint32_t t53 = 120091U;

    t53 = ((x213/(x214|x215))-x216);

    if (t53 != 4294934686U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = UINT64_MAX;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 1176U;
	volatile uint8_t x220 = 4U;

    t54 = ((x217/(x218|x219))-x220);

    if (t54 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = 0;
	int64_t t55 = -122830365217421LL;

    t55 = ((x221/(x222|x223))-x224);

    if (t55 != -6346513714448758LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x225 = 110522427880895496LLU;
	int16_t x226 = 3;
	int64_t x227 = INT64_MAX;
	int8_t x228 = -1;
	uint64_t t56 = 164LLU;

    t56 = ((x225/(x226|x227))-x228);

    if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x230 = INT16_MAX;
	static int8_t x231 = INT8_MIN;
	uint32_t t57 = 60282U;

    t57 = ((x229/(x230|x231))-x232);

    if (t57 != 2147483648U) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x234 = 11U;
	int64_t x235 = -1LL;
	static uint64_t t58 = 5252560766009LLU;

    t58 = ((x233/(x234|x235))-x236);

    if (t58 != 18446744071560926264LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x238 = -1;
	int64_t x240 = -23366645LL;
	int64_t t59 = -5194229LL;

    t59 = ((x237/(x238|x239))-x240);

    if (t59 != 23366518LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x241 = 972U;
	uint8_t x243 = UINT8_MAX;
	int64_t t60 = 52LL;

    t60 = ((x241/(x242|x243))-x244);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x245 = -1LL;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;

    t61 = ((x245/(x246|x247))-x248);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	volatile int32_t x250 = INT32_MIN;
	uint32_t x251 = UINT32_MAX;
	int8_t x252 = INT8_MAX;
	int64_t t62 = -5337568763913LL;

    t62 = ((x249/(x250|x251))-x252);

    if (t62 != -2147483775LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = INT64_MIN;
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 50LLU;
	int16_t x256 = INT16_MIN;
	uint64_t t63 = 4601884203319429093LLU;

    t63 = ((x253/(x254|x255))-x256);

    if (t63 != 32768LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x257 = -1;
	int64_t x259 = 19436356634088216LL;
	volatile int16_t x260 = 259;
	volatile int64_t t64 = -26965988LL;

    t64 = ((x257/(x258|x259))-x260);

    if (t64 != -259LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MAX;
	int32_t x263 = -1;
	int32_t x264 = -21463544;

    t65 = ((x261/(x262|x263))-x264);

    if (t65 != -2126020103LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x266 = 5;
	volatile uint8_t x268 = 13U;
	volatile int32_t t66 = 9061;

    t66 = ((x265/(x266|x267))-x268);

    if (t66 != -13) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x273 = 1765U;
	static int8_t x274 = -1;
	volatile int32_t x275 = 53189;
	static int16_t x276 = 6996;
	volatile int32_t t67 = 6;

    t67 = ((x273/(x274|x275))-x276);

    if (t67 != -8761) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x278 = 7U;
	int64_t x279 = -1LL;
	volatile int64_t t68 = -20393353306398LL;

    t68 = ((x277/(x278|x279))-x280);

    if (t68 != -58910482LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x281 = 474U;
	volatile int32_t x282 = INT32_MIN;
	static int8_t x283 = -1;
	static int8_t x284 = 25;
	static int32_t t69 = -1;

    t69 = ((x281/(x282|x283))-x284);

    if (t69 != -499) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x285 = 0;
	static int16_t x286 = -15915;
	volatile uint64_t x287 = 2079007854LLU;
	volatile uint64_t x288 = 113464606433097LLU;
	static volatile uint64_t t70 = 2477735443LLU;

    t70 = ((x285/(x286|x287))-x288);

    if (t70 != 18446630609103118519LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x289 = -33130523011730746LL;
	static volatile int64_t x290 = -798LL;
	int64_t x291 = -559LL;
	int64_t x292 = -1LL;
	volatile int64_t t71 = 185421335LL;

    t71 = ((x289/(x290|x291))-x292);

    if (t71 != 63105758117583LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = -1;
	int32_t x298 = INT32_MIN;
	int8_t x299 = 0;
	int8_t x300 = INT8_MIN;
	int32_t t72 = -26;

    t72 = ((x297/(x298|x299))-x300);

    if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x302 = INT32_MIN;
	int64_t x303 = -10LL;
	static volatile int32_t x304 = INT32_MAX;
	int64_t t73 = -3841LL;

    t73 = ((x301/(x302|x303))-x304);

    if (t73 != -2147484243LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x306 = -607561357164002022LL;
	int64_t x307 = -1LL;
	int16_t x308 = 0;
	int64_t t74 = -3238901131LL;

    t74 = ((x305/(x306|x307))-x308);

    if (t74 != 128LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x309 = UINT64_MAX;
	static int32_t x310 = -1;
	int64_t x311 = INT64_MAX;
	volatile uint16_t x312 = 58U;
	uint64_t t75 = 49LLU;

    t75 = ((x309/(x310|x311))-x312);

    if (t75 != 18446744073709551559LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = 0;
	volatile uint32_t x314 = 214U;
	static volatile int32_t x315 = -8376;
	volatile uint32_t t76 = 1983937247U;

    t76 = ((x313/(x314|x315))-x316);

    if (t76 != 2047U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint16_t x317 = 1U;
	static int32_t x318 = INT32_MIN;
	int32_t x319 = INT32_MIN;
	volatile int8_t x320 = INT8_MIN;
	volatile int32_t t77 = 1053775;

    t77 = ((x317/(x318|x319))-x320);

    if (t77 != 128) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x321 = 19648720U;
	static volatile uint32_t x322 = 43926709U;
	volatile int8_t x323 = -50;
	uint32_t t78 = 1933191226U;

    t78 = ((x321/(x322|x323))-x324);

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	static uint8_t x328 = 126U;
	int64_t t79 = -238284LL;

    t79 = ((x325/(x326|x327))-x328);

    if (t79 != -125LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x330 = 9U;
	volatile int64_t t80 = -95619LL;

    t80 = ((x329/(x330|x331))-x332);

    if (t80 != -4294967373LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MIN;
	uint64_t x339 = 4005LLU;
	static int8_t x340 = INT8_MIN;
	volatile uint64_t t81 = 6515482751479523212LLU;

    t81 = ((x337/(x338|x339))-x340);

    if (t81 != 128LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = 1812619569287LL;
	uint32_t x344 = 45366761U;
	static volatile int64_t t82 = -131037047726LL;

    t82 = ((x341/(x342|x343))-x344);

    if (t82 != -45366761LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x349 = 2LLU;
	int16_t x350 = 1;
	static uint16_t x351 = 3U;
	int16_t x352 = INT16_MIN;
	static volatile uint64_t t83 = 13346072LLU;

    t83 = ((x349/(x350|x351))-x352);

    if (t83 != 32768LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	uint8_t x356 = 77U;
	volatile uint32_t t84 = 57055082U;

    t84 = ((x353/(x354|x355))-x356);

    if (t84 != 4294967219U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x357 = 12U;
	uint16_t x358 = 6088U;
	int32_t x359 = -897750176;
	volatile uint8_t x360 = 2U;
	volatile int32_t t85 = -41240;

    t85 = ((x357/(x358|x359))-x360);

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x361 = 1200;
	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MIN;
	volatile uint64_t t86 = 364485LLU;

    t86 = ((x361/(x362|x363))-x364);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x365 = 5086;
	int64_t x366 = 82607950182LL;
	int64_t x368 = -240015116LL;
	static int64_t t87 = -5LL;

    t87 = ((x365/(x366|x367))-x368);

    if (t87 != 240015116LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MIN;
	volatile int64_t t88 = -326915081894LL;

    t88 = ((x369/(x370|x371))-x372);

    if (t88 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x373 = 8;
	int64_t x375 = -1LL;
	int64_t t89 = 90111177202366LL;

    t89 = ((x373/(x374|x375))-x376);

    if (t89 != -7LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x378 = -2;
	int8_t x379 = INT8_MAX;
	volatile int16_t x380 = -1;
	uint32_t t90 = 10U;

    t90 = ((x377/(x378|x379))-x380);

    if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x382 = INT8_MAX;
	int32_t x383 = -158;
	static int16_t x384 = INT16_MAX;
	volatile int64_t t91 = 33383216444918LL;

    t91 = ((x381/(x382|x383))-x384);

    if (t91 != -32767LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint16_t x385 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t92 = 199;

    t92 = ((x385/(x386|x387))-x388);

    if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x390 = INT16_MAX;
	static int32_t x391 = -1;
	static uint32_t x392 = 0U;
	uint32_t t93 = 30061382U;

    t93 = ((x389/(x390|x391))-x392);

    if (t93 != 4294962481U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x395 = INT64_MIN;
	uint8_t x396 = 13U;

    t94 = ((x393/(x394|x395))-x396);

    if (t94 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x397 = UINT32_MAX;
	int16_t x398 = -1;
	uint32_t x399 = UINT32_MAX;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t95 = 36U;

    t95 = ((x397/(x398|x399))-x400);

    if (t95 != 2U) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x401 = -1;
	static uint64_t x402 = 4160292LLU;
	volatile uint64_t t96 = 48021360LLU;

    t96 = ((x401/(x402|x403))-x404);

    if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x405 = 1088U;
	int32_t x406 = INT32_MIN;
	uint64_t t97 = 270LLU;

    t97 = ((x405/(x406|x407))-x408);

    if (t97 != 64898241715171LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x411 = -1;
	int64_t x412 = 1LL;

    t98 = ((x409/(x410|x411))-x412);

    if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x413 = INT8_MIN;
	static int16_t x414 = 984;
	int64_t x415 = INT64_MIN;
	int8_t x416 = 22;
	int64_t t99 = -24110LL;

    t99 = ((x413/(x414|x415))-x416);

    if (t99 != -22LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = 0;
	int8_t x418 = 1;
	volatile uint16_t x419 = UINT16_MAX;
	static int32_t x420 = 0;
	int32_t t100 = 16747;

    t100 = ((x417/(x418|x419))-x420);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x421 = -1;
	uint8_t x422 = UINT8_MAX;
	static uint16_t x423 = 53U;
	static volatile int32_t x424 = 5480;
	int32_t t101 = 0;

    t101 = ((x421/(x422|x423))-x424);

    if (t101 != -5480) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x425 = 11U;
	int8_t x427 = INT8_MAX;
	static int64_t x428 = INT64_MIN;
	volatile int64_t t102 = -513875LL;

    t102 = ((x425/(x426|x427))-x428);

    if (t102 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x429 = -44;
	int8_t x430 = 0;
	int32_t x431 = -50689;

    t103 = ((x429/(x430|x431))-x432);

    if (t103 != 1LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = -3;
	uint64_t x434 = 3463471563LLU;

    t104 = ((x433/(x434|x435))-x436);

    if (t104 != 5326085008LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = -60;
	uint64_t x438 = 1342693199LLU;
	volatile int16_t x439 = INT16_MIN;
	volatile uint64_t t105 = 5958163289869LLU;

    t105 = ((x437/(x438|x439))-x440);

    if (t105 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x441 = 5869713U;
	int32_t x443 = INT32_MIN;
	uint8_t x444 = 12U;
	uint32_t t106 = 582U;

    t106 = ((x441/(x442|x443))-x444);

    if (t106 != 4294967284U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x445 = 3586;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	uint8_t x448 = 3U;
	int32_t t107 = 287067;

    t107 = ((x445/(x446|x447))-x448);

    if (t107 != -31) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x449 = UINT16_MAX;
	int32_t x450 = INT32_MIN;
	static int64_t x451 = -213LL;
	int8_t x452 = 47;
	volatile int64_t t108 = 46649303445LL;

    t108 = ((x449/(x450|x451))-x452);

    if (t108 != -354LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x453 = 4U;
	int32_t x455 = -32;
	volatile uint64_t t109 = 3091339LLU;

    t109 = ((x453/(x454|x455))-x456);

    if (t109 != 18446744073059883053LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x457 = 2295U;
	uint32_t x458 = UINT32_MAX;
	uint16_t x460 = UINT16_MAX;
	uint32_t t110 = 558066U;

    t110 = ((x457/(x458|x459))-x460);

    if (t110 != 4294901761U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x461 = 217880U;
	volatile uint16_t x462 = UINT16_MAX;
	int8_t x463 = 61;
	uint16_t x464 = 15U;
	volatile uint32_t t111 = 4587U;

    t111 = ((x461/(x462|x463))-x464);

    if (t111 != 4294967284U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x465 = 4486159315473467233LLU;
	volatile int32_t x466 = INT32_MAX;
	int64_t x467 = -1LL;
	static volatile uint64_t t112 = 13932863853549032LLU;

    t112 = ((x465/(x466|x467))-x468);

    if (t112 != 1LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x469 = 16;
	uint32_t x470 = 18U;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = -1LL;
	static volatile uint64_t t113 = 190402000103LLU;

    t113 = ((x469/(x470|x471))-x472);

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x473 = 41U;
	static volatile uint8_t x475 = UINT8_MAX;
	uint32_t x476 = 10U;
	volatile uint32_t t114 = 3397U;

    t114 = ((x473/(x474|x475))-x476);

    if (t114 != 4294967286U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x477 = 2045LL;
	volatile int64_t x479 = -1LL;
	int32_t x480 = 418;

    t115 = ((x477/(x478|x479))-x480);

    if (t115 != -2463LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x481 = INT8_MAX;
	uint32_t x482 = 93208U;
	int16_t x483 = -1;
	uint32_t t116 = 339U;

    t116 = ((x481/(x482|x483))-x484);

    if (t116 != 214205U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x485 = -668669454;
	int8_t x486 = -29;
	static uint32_t x487 = UINT32_MAX;
	int16_t x488 = INT16_MAX;
	volatile uint32_t t117 = 1U;

    t117 = ((x485/(x486|x487))-x488);

    if (t117 != 4294934529U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x490 = INT64_MIN;
	volatile int8_t x491 = -1;
	int16_t x492 = 108;
	uint64_t t118 = 8662064619984689093LLU;

    t118 = ((x489/(x490|x491))-x492);

    if (t118 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x493 = UINT8_MAX;
	volatile int64_t t119 = INT64_MAX;

    t119 = ((x493/(x494|x495))-x496);

    if (t119 != INT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x497 = INT8_MIN;
	static int32_t x498 = 5383629;
	volatile uint16_t x499 = UINT16_MAX;
	volatile int8_t x500 = INT8_MIN;
	int32_t t120 = 22;

    t120 = ((x497/(x498|x499))-x500);

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x501 = INT8_MIN;
	int64_t x502 = 2426826736287541311LL;
	static uint64_t x504 = UINT64_MAX;
	static volatile uint64_t t121 = 2030866667293909LLU;

    t121 = ((x501/(x502|x503))-x504);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x506 = UINT32_MAX;
	volatile int16_t x507 = INT16_MIN;
	volatile int32_t x508 = -87;

    t122 = ((x505/(x506|x507))-x508);

    if (t122 != 87U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x509 = 110506388LL;
	int32_t x511 = 239;
	int64_t x512 = -58037660490LL;
	volatile int64_t t123 = 17488828311LL;

    t123 = ((x509/(x510|x511))-x512);

    if (t123 != 57927154102LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x513 = -1;
	int32_t x514 = INT32_MAX;
	int8_t x515 = 9;
	volatile int8_t x516 = 29;
	volatile int32_t t124 = -5806733;

    t124 = ((x513/(x514|x515))-x516);

    if (t124 != -29) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x518 = 3U;
	uint32_t x519 = UINT32_MAX;
	uint32_t t125 = 43154U;

    t125 = ((x517/(x518|x519))-x520);

    if (t125 != 4294967258U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x521 = INT8_MAX;
	int16_t x522 = -1;
	int8_t x523 = INT8_MIN;
	int8_t x524 = INT8_MAX;
	volatile int32_t t126 = -318;

    t126 = ((x521/(x522|x523))-x524);

    if (t126 != -254) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int8_t x525 = 5;
	int8_t x528 = INT8_MIN;
	int32_t t127 = 95875;

    t127 = ((x525/(x526|x527))-x528);

    if (t127 != 128) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x531 = 124LLU;
	int16_t x532 = INT16_MIN;
	uint64_t t128 = 355081LLU;

    t128 = ((x529/(x530|x531))-x532);

    if (t128 != 32768LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x534 = 4193LL;
	uint8_t x535 = UINT8_MAX;

    t129 = ((x533/(x534|x535))-x536);

    if (t129 != 398LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x538 = 911430;
	volatile int8_t x539 = 26;
	volatile int64_t x540 = 21535987670678LL;
	volatile int64_t t130 = -59194677958LL;

    t130 = ((x537/(x538|x539))-x540);

    if (t130 != -11416582811130LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x541 = 412U;
	int8_t x542 = INT8_MIN;
	uint64_t x543 = 29792073675LLU;
	int16_t x544 = -21;
	uint64_t t131 = 1627136808022098566LLU;

    t131 = ((x541/(x542|x543))-x544);

    if (t131 != 21LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x545 = -1;
	volatile int64_t x546 = INT64_MAX;
	volatile int32_t x547 = -1;
	static uint8_t x548 = 70U;
	volatile int64_t t132 = -2LL;

    t132 = ((x545/(x546|x547))-x548);

    if (t132 != -69LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x549 = -36;
	int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MIN;
	static int32_t x552 = INT32_MAX;
	static int32_t t133 = 7866;

    t133 = ((x549/(x550|x551))-x552);

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x554 = -1;
	uint32_t x555 = UINT32_MAX;
	uint32_t t134 = 33163149U;

    t134 = ((x553/(x554|x555))-x556);

    if (t134 != 4294967225U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x558 = 2209683962LLU;
	int16_t x559 = 9429;
	int32_t x560 = INT32_MAX;

    t135 = ((x557/(x558|x559))-x560);

    if (t135 != 6200618349LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x562 = INT64_MIN;
	int64_t x563 = -1LL;
	int32_t x564 = INT32_MAX;
	volatile int64_t t136 = -519716720663LL;

    t136 = ((x561/(x562|x563))-x564);

    if (t136 != -2147483646LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x566 = -179638195LL;
	int64_t x567 = INT64_MIN;
	volatile int64_t t137 = 8224478LL;

    t137 = ((x565/(x566|x567))-x568);

    if (t137 != -468LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x570 = 2791U;
	volatile int16_t x572 = INT16_MIN;

    t138 = ((x569/(x570|x571))-x572);

    if (t138 != 32768LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x573 = 4528646863392865LLU;
	int64_t x574 = INT64_MIN;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t139 = 44789419544LLU;

    t139 = ((x573/(x574|x575))-x576);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x577 = 358282413347012716LL;
	volatile uint64_t x579 = 46LLU;
	volatile int64_t x580 = INT64_MIN;
	uint64_t t140 = 440337270579623LLU;

    t140 = ((x577/(x578|x579))-x580);

    if (t140 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x581 = INT8_MIN;
	static int8_t x583 = -1;
	volatile uint64_t t141 = 7580631LLU;

    t141 = ((x581/(x582|x583))-x584);

    if (t141 != 18446744073709423573LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x586 = 11U;
	uint64_t x587 = 1938643972890811LLU;
	static uint8_t x588 = 1U;

    t142 = ((x585/(x586|x587))-x588);

    if (t142 != 9514LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x589 = INT8_MIN;
	volatile int16_t x590 = INT16_MIN;
	volatile int32_t x591 = INT32_MIN;
	int32_t x592 = INT32_MAX;

    t143 = ((x589/(x590|x591))-x592);

    if (t143 != -2147483647) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x593 = -1;
	static int8_t x594 = INT8_MAX;

    t144 = ((x593/(x594|x595))-x596);

    if (t144 != 101974971298LL) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x597 = INT16_MIN;
	uint16_t x598 = 53U;
	static uint64_t x599 = 391306LLU;
	int32_t x600 = -674;
	volatile uint64_t t145 = 20633443544913512LLU;

    t145 = ((x597/(x598|x599))-x600);

    if (t145 != 47135096098398LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x601 = INT64_MIN;
	int32_t x602 = -13790;
	uint16_t x603 = 31U;
	int16_t x604 = INT16_MIN;
	int64_t t146 = 95511833LL;

    t146 = ((x601/(x602|x603))-x604);

    if (t146 != 670254490030208LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x605 = 107U;
	int32_t x606 = INT32_MIN;
	static uint64_t x607 = 1722650327LLU;
	int32_t x608 = -2597;

    t147 = ((x605/(x606|x607))-x608);

    if (t147 != 2597LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x609 = UINT16_MAX;
	static uint32_t x610 = 176246110U;
	static int64_t x611 = INT64_MIN;
	int64_t t148 = -161LL;

    t148 = ((x609/(x610|x611))-x612);

    if (t148 != -127LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x614 = INT16_MIN;
	int16_t x616 = INT16_MAX;
	uint32_t t149 = 3388997U;

    t149 = ((x613/(x614|x615))-x616);

    if (t149 != 4294934530U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x617 = INT32_MIN;
	volatile int8_t x618 = 1;
	int64_t x619 = 4566076LL;
	int64_t t150 = -2476667806558LL;

    t150 = ((x617/(x618|x619))-x620);

    if (t150 != 2147483178LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x622 = INT8_MIN;
	static uint16_t x624 = UINT16_MAX;

    t151 = ((x621/(x622|x623))-x624);

    if (t151 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x626 = 13584670286067LLU;
	static volatile int16_t x627 = -14;
	volatile int8_t x628 = INT8_MIN;
	static uint64_t t152 = 64444484LLU;

    t152 = ((x625/(x626|x627))-x628);

    if (t152 != 128LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x629 = 27137U;
	uint16_t x630 = 76U;
	int64_t x631 = -1LL;
	int64_t t153 = -26450131LL;

    t153 = ((x629/(x630|x631))-x632);

    if (t153 != -31410LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x633 = 18411U;
	int8_t x634 = INT8_MIN;
	volatile uint32_t x635 = UINT32_MAX;
	int8_t x636 = INT8_MAX;
	static volatile uint32_t t154 = 6900U;

    t154 = ((x633/(x634|x635))-x636);

    if (t154 != 4294967169U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x637 = -1LL;
	volatile int8_t x639 = -1;
	int64_t x640 = INT64_MAX;
	static int64_t t155 = 105LL;

    t155 = ((x637/(x638|x639))-x640);

    if (t155 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x641 = 2060837U;
	static int64_t x642 = -1LL;
	uint64_t x643 = 22LLU;
	volatile int8_t x644 = INT8_MIN;
	uint64_t t156 = 2617LLU;

    t156 = ((x641/(x642|x643))-x644);

    if (t156 != 128LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x649 = UINT16_MAX;
	int8_t x652 = 46;

    t157 = ((x649/(x650|x651))-x652);

    if (t157 != -460LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x653 = UINT64_MAX;
	uint8_t x654 = 1U;
	uint8_t x655 = 2U;
	int8_t x656 = INT8_MIN;
	volatile uint64_t t158 = 114LLU;

    t158 = ((x653/(x654|x655))-x656);

    if (t158 != 6148914691236517333LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x661 = -1;
	static uint16_t x663 = UINT16_MAX;
	int64_t x664 = INT64_MAX;
	int64_t t159 = -1236312930326380704LL;

    t159 = ((x661/(x662|x663))-x664);

    if (t159 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x665 = 16575U;
	volatile uint64_t x666 = UINT64_MAX;
	int32_t x667 = 106;
	volatile uint32_t x668 = 69146400U;
	static volatile uint64_t t160 = 5148482674066433LLU;

    t160 = ((x665/(x666|x667))-x668);

    if (t160 != 18446744073640405216LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x669 = 4;
	volatile uint8_t x670 = UINT8_MAX;
	int32_t x672 = -1;
	int32_t t161 = 49085;

    t161 = ((x669/(x670|x671))-x672);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x674 = 5548U;
	static volatile int16_t x676 = -1599;
	volatile int32_t t162 = -1;

    t162 = ((x673/(x674|x675))-x676);

    if (t162 != 1610) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x677 = -1;
	int64_t x678 = 3421624995628371656LL;
	volatile int8_t x680 = INT8_MIN;
	int64_t t163 = 2551565323970LL;

    t163 = ((x677/(x678|x679))-x680);

    if (t163 != 128LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x681 = INT64_MAX;
	uint8_t x683 = 3U;
	static int16_t x684 = -1;
	int64_t t164 = 40466405LL;

    t164 = ((x681/(x682|x683))-x684);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x688 = -7;
	uint64_t t165 = 97925LLU;

    t165 = ((x685/(x686|x687))-x688);

    if (t165 != 8LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x689 = INT64_MIN;
	static uint32_t x690 = 3174378U;
	uint16_t x691 = 10647U;
	static int8_t x692 = 0;
	static volatile int64_t t166 = -126007811LL;

    t166 = ((x689/(x690|x691))-x692);

    if (t166 != -2905549061997LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x693 = 2U;
	static volatile int8_t x695 = INT8_MIN;
	static int64_t x696 = 3LL;

    t167 = ((x693/(x694|x695))-x696);

    if (t167 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x698 = 12723U;
	int8_t x700 = -9;

    t168 = ((x697/(x698|x699))-x700);

    if (t168 != 9U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x701 = -1;
	static uint8_t x702 = 113U;
	uint8_t x703 = UINT8_MAX;
	int64_t x704 = 18164674LL;
	volatile int64_t t169 = -365637LL;

    t169 = ((x701/(x702|x703))-x704);

    if (t169 != -18164674LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x705 = 1LL;
	uint64_t x706 = 28976285419650LLU;
	uint32_t x707 = 955697580U;
	int8_t x708 = INT8_MIN;
	uint64_t t170 = 15575925586244833LLU;

    t170 = ((x705/(x706|x707))-x708);

    if (t170 != 128LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x709 = 2928638933093LLU;
	uint32_t x710 = UINT32_MAX;
	int64_t x711 = -1LL;

    t171 = ((x709/(x710|x711))-x712);

    if (t171 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x713 = 83594LL;
	uint32_t x714 = 13U;
	int64_t t172 = -853287LL;

    t172 = ((x713/(x714|x715))-x716);

    if (t172 != 32768LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x718 = -3;
	uint8_t x719 = 8U;
	static volatile uint64_t t173 = 69977052964LLU;

    t173 = ((x717/(x718|x719))-x720);

    if (t173 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x721 = UINT32_MAX;
	int32_t x722 = -1;
	static int8_t x723 = -12;
	int64_t x724 = -1LL;
	int64_t t174 = 99LL;

    t174 = ((x721/(x722|x723))-x724);

    if (t174 != 2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x725 = INT64_MAX;
	int64_t x726 = 103943700480LL;
	uint64_t x727 = 823LLU;
	static int16_t x728 = INT16_MIN;

    t175 = ((x725/(x726|x727))-x728);

    if (t175 != 88767072LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x729 = UINT32_MAX;
	uint32_t x730 = 33107U;
	int16_t x731 = INT16_MAX;
	volatile int32_t x732 = 196517;
	volatile uint32_t t176 = 3U;

    t176 = ((x729/(x730|x731))-x732);

    if (t176 != 4294836316U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x733 = -1;
	static int16_t x734 = -1;
	uint8_t x735 = 73U;
	static volatile uint64_t x736 = UINT64_MAX;
	volatile uint64_t t177 = 6244672803LLU;

    t177 = ((x733/(x734|x735))-x736);

    if (t177 != 2LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x737 = 5260LLU;
	int8_t x738 = -1;
	int32_t x739 = INT32_MIN;
	int8_t x740 = -1;
	volatile uint64_t t178 = 4861LLU;

    t178 = ((x737/(x738|x739))-x740);

    if (t178 != 1LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x741 = 1711927LLU;
	uint16_t x742 = 52U;
	uint16_t x743 = 27824U;
	int8_t x744 = -1;
	uint64_t t179 = 24796489918LLU;

    t179 = ((x741/(x742|x743))-x744);

    if (t179 != 62LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x745 = UINT32_MAX;
	int16_t x746 = 875;
	int64_t t180 = -20073128LL;

    t180 = ((x745/(x746|x747))-x748);

    if (t180 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x750 = 26661U;
	volatile uint32_t x751 = UINT32_MAX;
	uint16_t x752 = 120U;

    t181 = ((x749/(x750|x751))-x752);

    if (t181 != 4294967176U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x753 = UINT64_MAX;
	int32_t x754 = -383521;
	static int16_t x755 = -1;
	volatile int16_t x756 = -1;
	static uint64_t t182 = 11LLU;

    t182 = ((x753/(x754|x755))-x756);

    if (t182 != 2LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x757 = 25377029124493257LLU;
	int64_t x760 = -1LL;
	uint64_t t183 = 6652387368LLU;

    t183 = ((x757/(x758|x759))-x760);

    if (t183 != 387228643084LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x761 = 7397LLU;
	static volatile int32_t x762 = INT32_MIN;
	int8_t x764 = INT8_MAX;

    t184 = ((x761/(x762|x763))-x764);

    if (t184 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x765 = -1867105554664LL;
	uint32_t x766 = 2062839U;
	uint64_t x767 = 219LLU;
	uint64_t x768 = 23LLU;
	uint64_t t185 = 24269896327455LLU;

    t185 = ((x765/(x766|x767))-x768);

    if (t185 != 8942370523144LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x769 = -46554153;
	int16_t x770 = INT16_MIN;
	int16_t x771 = -1;
	uint8_t x772 = 0U;

    t186 = ((x769/(x770|x771))-x772);

    if (t186 != 46554153) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x773 = 0U;
	static int64_t x774 = -1LL;
	int64_t x775 = 690739711002LL;
	static int16_t x776 = -1;
	int64_t t187 = 343329677LL;

    t187 = ((x773/(x774|x775))-x776);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x777 = 6434U;
	int32_t x778 = 147;
	int8_t x779 = -1;
	uint32_t x780 = UINT32_MAX;
	volatile uint32_t t188 = 569677U;

    t188 = ((x777/(x778|x779))-x780);

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x784 = INT8_MIN;
	static volatile int32_t t189 = 692;

    t189 = ((x781/(x782|x783))-x784);

    if (t189 != 128) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x786 = -31;
	static volatile uint32_t x788 = UINT32_MAX;

    t190 = ((x785/(x786|x787))-x788);

    if (t190 != 1U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x789 = -1;
	int16_t x790 = INT16_MIN;
	int16_t x791 = -1;
	uint32_t x792 = 9U;

    t191 = ((x789/(x790|x791))-x792);

    if (t191 != 4294967288U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x793 = 3U;
	uint32_t x794 = 36363785U;
	int64_t x795 = INT64_MIN;
	volatile int16_t x796 = -215;
	volatile int64_t t192 = -49282787324783LL;

    t192 = ((x793/(x794|x795))-x796);

    if (t192 != 215LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x798 = -1;
	int8_t x799 = INT8_MAX;
	static int8_t x800 = INT8_MIN;
	uint64_t t193 = 24570607LLU;

    t193 = ((x797/(x798|x799))-x800);

    if (t193 != 128LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x801 = 81LL;
	volatile int16_t x802 = 1400;
	static int8_t x804 = -1;
	uint64_t t194 = 371644086671178260LLU;

    t194 = ((x801/(x802|x803))-x804);

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x805 = INT8_MAX;
	int16_t x806 = INT16_MIN;
	volatile uint16_t x808 = 4363U;
	uint32_t t195 = 9238166U;

    t195 = ((x805/(x806|x807))-x808);

    if (t195 != 4294962933U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = -140260894499LL;
	volatile int64_t x810 = INT64_MIN;
	volatile int64_t x811 = INT64_MIN;
	uint32_t x812 = 26675U;
	int64_t t196 = 143278601667609976LL;

    t196 = ((x809/(x810|x811))-x812);

    if (t196 != -26675LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x813 = INT64_MIN;
	uint32_t x815 = 391878929U;
	int32_t x816 = INT32_MIN;

    t197 = ((x813/(x814|x815))-x816);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x817 = 1492U;
	int64_t x818 = INT64_MIN;
	int64_t x819 = -15738LL;
	static uint64_t x820 = UINT64_MAX;
	static uint64_t t198 = 16979424986906165LLU;

    t198 = ((x817/(x818|x819))-x820);

    if (t198 != 1LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x821 = -1;
	volatile int64_t x822 = INT64_MIN;
	int64_t x823 = INT64_MIN;

    t199 = ((x821/(x822|x823))-x824);

    if (t199 != 2348LL) { NG(); } else { ; }
	
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

