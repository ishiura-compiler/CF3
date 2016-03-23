
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

int64_t x8 = -1LL;
int64_t t0 = -307LL;
int8_t x10 = INT8_MIN;
int8_t x12 = -1;
static int64_t x16 = INT64_MAX;
int8_t x25 = -1;
volatile int32_t x32 = INT32_MIN;
uint16_t x34 = 389U;
int16_t x36 = 5;
uint64_t x40 = 1641646760045200855LLU;
volatile int32_t x53 = INT32_MIN;
static volatile int64_t x55 = -4196165723648323LL;
uint64_t x59 = 20207787LLU;
volatile uint64_t t12 = 38LLU;
int32_t t13 = 240620;
volatile uint32_t t14 = 44169U;
int64_t x73 = INT64_MAX;
uint64_t x74 = UINT64_MAX;
int32_t x82 = INT32_MIN;
int16_t x83 = INT16_MAX;
static uint64_t x86 = UINT64_MAX;
static int16_t x98 = INT16_MAX;
int16_t x99 = 4567;
volatile int64_t x105 = INT64_MIN;
int8_t x108 = INT8_MIN;
int64_t x109 = -3680155091375795171LL;
uint32_t x112 = UINT32_MAX;
volatile int64_t t24 = 214304271015LL;
int16_t x113 = INT16_MIN;
volatile int16_t x122 = -1;
int8_t x123 = -1;
static uint8_t x128 = 84U;
uint64_t x130 = UINT64_MAX;
int32_t t30 = -3;
uint16_t x149 = UINT16_MAX;
static volatile int8_t x166 = INT8_MAX;
int64_t x173 = -53LL;
static uint32_t x174 = 557322U;
uint32_t x180 = 2434531U;
volatile uint32_t t40 = 88U;
static volatile uint64_t x181 = 19495463331395LLU;
static volatile int64_t t44 = -5197881LL;
uint64_t x199 = 284731286282383LLU;
uint32_t x205 = UINT32_MAX;
static uint32_t x206 = UINT32_MAX;
volatile int64_t x208 = -23712776147791LL;
int16_t x212 = INT16_MAX;
int8_t x222 = 1;
uint8_t x225 = 16U;
static int16_t x226 = INT16_MIN;
static uint16_t x227 = UINT16_MAX;
volatile int32_t t50 = -238805;
int8_t x229 = INT8_MIN;
int32_t t54 = 56799966;
static int16_t x247 = INT16_MAX;
int32_t x252 = INT32_MIN;
volatile int64_t x254 = INT64_MAX;
int64_t x259 = -1LL;
volatile uint64_t x268 = 90LLU;
static uint32_t x270 = 14848U;
int8_t x277 = -1;
int32_t x278 = -10;
int8_t x280 = 45;
static int64_t x281 = INT64_MAX;
uint32_t x295 = 350414440U;
volatile int32_t x301 = 24;
uint32_t x314 = 2292099U;
int16_t x321 = -3;
static uint32_t x328 = 108132342U;
volatile int32_t x334 = INT32_MIN;
volatile int8_t x335 = INT8_MIN;
int64_t x336 = 694309LL;
uint16_t x349 = 398U;
static int16_t x352 = -1;
volatile uint32_t x360 = 3427909U;
static int64_t x366 = -1LL;
uint16_t x371 = 1037U;
static int32_t x387 = INT32_MIN;
volatile uint64_t t88 = 7081LLU;
volatile int32_t x389 = -1;
volatile uint64_t x390 = 3976750LLU;
static int16_t x397 = 13070;
static volatile uint32_t x402 = 552924400U;
int16_t x405 = INT16_MAX;
static int32_t x406 = 2013393;
int8_t x413 = INT8_MIN;
uint32_t x420 = 87211U;
uint32_t x421 = UINT32_MAX;
uint64_t x426 = 946LLU;
static volatile int16_t x429 = INT16_MAX;
int16_t x436 = INT16_MIN;
int64_t t99 = 19030LL;
int16_t x439 = -1;
int16_t x442 = 200;
uint16_t x449 = 4277U;
uint16_t x455 = 0U;
int16_t x463 = 2091;
int64_t t106 = 617064920051LL;
uint64_t x468 = 2771416LLU;
uint64_t t107 = 142LLU;
int64_t x471 = 3973LL;
int16_t x479 = -1;
static volatile int8_t x488 = INT8_MIN;
int8_t x504 = -1;
volatile int8_t x510 = -1;
int16_t x513 = INT16_MIN;
volatile int64_t t119 = -817517553472LL;
uint64_t x524 = 3742865116LLU;
int32_t x533 = INT32_MIN;
static int64_t t126 = -207LL;
uint8_t x554 = UINT8_MAX;
int32_t x566 = -68972;
int16_t x567 = 1;
int64_t x576 = -1LL;
volatile int32_t x585 = 1485192;
static int16_t x590 = 1;
static volatile int64_t t135 = 127938001LL;
int8_t x593 = 1;
int8_t x595 = INT8_MIN;
int32_t x596 = INT32_MAX;
int8_t x599 = -1;
volatile uint64_t t137 = 1045783849LLU;
int64_t x604 = -14925053266LL;
int64_t t138 = 12531LL;
int32_t x613 = -3;
int8_t x627 = INT8_MAX;
volatile int32_t t143 = 1;
uint64_t x635 = UINT64_MAX;
uint32_t x636 = UINT32_MAX;
uint64_t x639 = UINT64_MAX;
volatile uint8_t x643 = 34U;
static int32_t x645 = -1;
static int16_t x651 = 1;
static uint32_t x654 = 88U;
int16_t x661 = INT16_MIN;
uint8_t x663 = 4U;
volatile int8_t x666 = -1;
volatile int32_t t152 = -51;
int16_t x676 = INT16_MIN;
volatile uint32_t t153 = 6U;
static int32_t t154 = 23432;
int64_t x686 = -123640520974014LL;
static volatile uint64_t x691 = 174649687LLU;
static int32_t t158 = 193131;
int64_t t159 = -531509045663204934LL;
volatile uint8_t x701 = UINT8_MAX;
int32_t x705 = -1;
int32_t x707 = 7;
volatile int16_t x708 = 5;
int16_t x712 = INT16_MIN;
int8_t x725 = -25;
int16_t x728 = -16079;
uint32_t t164 = 62231148U;
volatile int64_t t165 = -27827459215857LL;
static volatile uint32_t x734 = UINT32_MAX;
uint32_t t166 = 17U;
volatile uint64_t t169 = 207912659642LLU;
int16_t x750 = -1;
int64_t x759 = 299684207322LL;
int64_t t173 = -229547126087473LL;
uint8_t x772 = 5U;
volatile int32_t t175 = 3297599;
volatile int16_t x784 = -1;
volatile int32_t t178 = 2019507;
int16_t x791 = -1;
volatile int16_t x793 = 1;
volatile int64_t t183 = 18LL;
int64_t x813 = INT64_MIN;
int8_t x814 = -1;
int16_t x816 = 2950;
int8_t x820 = -1;
int32_t x821 = -4312;
uint16_t x823 = 22U;
int32_t x826 = -3872;
int32_t t187 = -287914;
uint32_t x829 = 109U;
volatile uint64_t t188 = 2178173751641011352LLU;
int8_t x842 = INT8_MIN;
int32_t x849 = INT32_MAX;
volatile int8_t x850 = INT8_MIN;
int64_t x858 = -941268951892986944LL;
int64_t t195 = -61246291LL;
int32_t x861 = INT32_MAX;
int16_t x869 = INT16_MIN;


void f0(void) {
    	int32_t x5 = -1;
	int32_t x6 = INT32_MAX;
	volatile int64_t x7 = 382529227LL;

    t0 = (x5^(x6*(x7%x8)));

    if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x9 = -1;
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (x9^(x10*(x11%x12)));

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	int8_t x14 = -1;
	int64_t x15 = 1951124949287LL;
	int64_t t2 = -1036880LL;

    t2 = (x13^(x14*(x15%x16)));

    if (t2 != 1951124977369LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int32_t x17 = INT32_MAX;
	int8_t x18 = 1;
	int32_t x19 = INT32_MAX;
	static volatile int64_t x20 = INT64_MIN;
	volatile int64_t t3 = -5182094635472LL;

    t3 = (x17^(x18*(x19%x20)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 7491048669597LLU;
	volatile uint8_t x22 = 1U;
	int16_t x23 = INT16_MIN;
	static int64_t x24 = INT64_MAX;
	uint64_t t4 = 2738397659LLU;

    t4 = (x21^(x22*(x23%x24)));

    if (t4 != 18446736582660850077LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = 7U;
	static volatile int64_t x27 = -1LL;
	int16_t x28 = 3777;
	volatile int64_t t5 = -95849197952670LL;

    t5 = (x25^(x26*(x27%x28)));

    if (t5 != 6LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	static uint32_t x30 = UINT32_MAX;
	int32_t x31 = -29409225;
	volatile uint32_t t6 = 32910991U;

    t6 = (x29^(x30*(x31%x32)));

    if (t6 != 4265558089U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	uint64_t x35 = UINT64_MAX;
	uint64_t t7 = 499LLU;

    t7 = (x33^(x34*(x35%x36)));

    if (t7 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x37 = 4462U;
	int16_t x38 = INT16_MIN;
	uint16_t x39 = 1075U;
	static uint64_t t8 = 2620LLU;

    t8 = (x37^(x38*(x39%x40)));

    if (t8 != 18446744073674330478LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	int16_t x42 = -179;
	volatile int64_t x43 = INT64_MIN;
	int16_t x44 = -15;
	volatile int64_t t9 = 412349219004736572LL;

    t9 = (x41^(x42*(x43%x44)));

    if (t9 != -2147482216LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x49 = 8078003U;
	volatile int64_t x50 = INT64_MAX;
	int16_t x51 = INT16_MIN;
	int8_t x52 = -1;
	volatile int64_t t10 = 5479895LL;

    t10 = (x49^(x50*(x51%x52)));

    if (t10 != 8078003LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = INT8_MIN;
	int8_t x56 = INT8_MIN;
	volatile int64_t t11 = -25698354194LL;

    t11 = (x53^(x54*(x55%x56)));

    if (t11 != -2147475072LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = INT64_MAX;
	int8_t x60 = INT8_MIN;

    t12 = (x57^(x58*(x59%x60)));

    if (t12 != 9223372038982051669LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x61 = 7;
	uint16_t x62 = 1806U;
	int8_t x63 = 4;
	int8_t x64 = INT8_MIN;

    t13 = (x61^(x62*(x63%x64)));

    if (t13 != 7231) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = -1;
	int16_t x66 = INT16_MAX;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = UINT32_MAX;

    t14 = (x65^(x66*(x67%x68)));

    if (t14 != 4194175U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	volatile int8_t x70 = INT8_MIN;
	static int32_t x71 = -1;
	uint16_t x72 = 13864U;
	int32_t t15 = -699453851;

    t15 = (x69^(x70*(x71%x72)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x75 = -291;
	int8_t x76 = -6;
	volatile uint64_t t16 = 1020607512LLU;

    t16 = (x73^(x74*(x75%x76)));

    if (t16 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = INT32_MAX;
	int16_t x84 = -1;
	static volatile int32_t t17 = INT32_MAX;

    t17 = (x81^(x82*(x83%x84)));

    if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x85 = 42U;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t18 = 154873843328972457LLU;

    t18 = (x85^(x86*(x87%x88)));

    if (t18 != 18446744073709551403LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x89 = INT8_MAX;
	static int32_t x90 = -231358;
	volatile int16_t x91 = 152;
	static int32_t x92 = INT32_MIN;
	int32_t t19 = 0;

    t19 = (x89^(x90*(x91%x92)));

    if (t19 != -35166385) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = -1775541LL;
	int64_t x94 = 4499LL;
	static volatile uint8_t x95 = 48U;
	uint32_t x96 = UINT32_MAX;
	int64_t t20 = -8LL;

    t20 = (x93^(x94*(x95%x96)));

    if (t20 != -1596453LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x97 = -1;
	volatile uint16_t x100 = 166U;
	int32_t t21 = 3;

    t21 = (x97^(x98*(x99%x100)));

    if (t21 != -2785196) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x101 = 15U;
	uint32_t x102 = 2983842U;
	int64_t x103 = -1LL;
	volatile int16_t x104 = -1;
	volatile int64_t t22 = 3522268894LL;

    t22 = (x101^(x102*(x103%x104)));

    if (t22 != 15LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x106 = 0U;
	int8_t x107 = INT8_MAX;
	volatile int64_t t23 = INT64_MIN;

    t23 = (x105^(x106*(x107%x108)));

    if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x110 = UINT16_MAX;
	int64_t x111 = -32755329973200LL;

    t24 = (x109^(x110*(x111%x112)));

    if (t24 != 3680276802699758983LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile uint16_t x114 = 14U;
	uint64_t x115 = 188024LLU;
	volatile int8_t x116 = -1;
	volatile uint64_t t25 = 5326LLU;

    t25 = (x113^(x114*(x115%x116)));

    if (t25 != 18446744073706908304LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x117 = 0U;
	volatile int64_t x118 = 0LL;
	uint32_t x119 = UINT32_MAX;
	int64_t x120 = 3688203308LL;
	volatile int64_t t26 = -106024005075875LL;

    t26 = (x117^(x118*(x119%x120)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int64_t x121 = INT64_MIN;
	volatile uint32_t x124 = 437U;
	int64_t t27 = 9815903LL;

    t27 = (x121^(x122*(x123%x124)));

    if (t27 != -9223372032559808707LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x125 = 2U;
	int64_t x126 = 1LL;
	int16_t x127 = 1;
	volatile int64_t t28 = -133945369932421LL;

    t28 = (x125^(x126*(x127%x128)));

    if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = -828;
	static int8_t x131 = INT8_MIN;
	volatile int32_t x132 = INT32_MIN;
	static volatile uint64_t t29 = 982006529LLU;

    t29 = (x129^(x130*(x131%x132)));

    if (t29 != 18446744073709550660LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = UINT8_MAX;
	int16_t x138 = INT16_MAX;
	int32_t x139 = 1;
	int16_t x140 = INT16_MIN;

    t30 = (x137^(x138*(x139%x140)));

    if (t30 != 32512) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x141 = 27133U;
	int32_t x142 = INT32_MAX;
	int8_t x143 = 7;
	volatile int64_t x144 = -494112236692LL;
	volatile int64_t t31 = 214134026641LL;

    t31 = (x141^(x142*(x143%x144)));

    if (t31 != 15032358404LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 4238944289LLU;
	uint64_t x146 = 9826754LLU;
	volatile uint32_t x147 = 84U;
	volatile int64_t x148 = 17243524LL;
	volatile uint64_t t32 = 3404077217524647LLU;

    t32 = (x145^(x146*(x147%x148)));

    if (t32 != 3449453449LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x150 = -1;
	int16_t x151 = INT16_MIN;
	int16_t x152 = 2;
	int32_t t33 = -389815971;

    t33 = (x149^(x150*(x151%x152)));

    if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x153 = 6817U;
	volatile uint64_t x154 = 71806684174036063LLU;
	static int8_t x155 = -23;
	volatile uint32_t x156 = 2388U;
	volatile uint64_t t34 = 181441590942965LLU;

    t34 = (x153^(x154*(x155%x156)));

    if (t34 != 13601758344963683646LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x157 = UINT32_MAX;
	static uint32_t x158 = 75397467U;
	volatile uint8_t x159 = UINT8_MAX;
	int32_t x160 = 13454110;
	uint32_t t35 = 10U;

    t35 = (x157^(x158*(x159%x160)));

    if (t35 != 2248482394U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint16_t x161 = 1U;
	uint8_t x162 = 14U;
	static int8_t x163 = 1;
	uint32_t x164 = 880923U;
	volatile uint32_t t36 = 39173337U;

    t36 = (x161^(x162*(x163%x164)));

    if (t36 != 15U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = INT64_MIN;
	volatile int16_t x167 = -1;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = 882114LL;

    t37 = (x165^(x166*(x167%x168)));

    if (t37 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x169 = -56LL;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = 9U;
	int64_t x172 = -94655410121184LL;
	static volatile int64_t t38 = 139296083865999669LL;

    t38 = (x169^(x170*(x171%x172)));

    if (t38 != -19327352769LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x175 = INT64_MIN;
	uint8_t x176 = UINT8_MAX;
	int64_t t39 = -580215LL;

    t39 = (x173^(x174*(x175%x176)));

    if (t39 != 71337163LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MAX;
	int8_t x179 = INT8_MIN;

    t40 = (x177^(x178*(x179%x180)));

    if (t40 != 4237247827U) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x182 = INT16_MIN;
	int32_t x183 = -770024;
	int8_t x184 = INT8_MAX;
	uint64_t t41 = 39182276690470LLU;

    t41 = (x181^(x182*(x183%x184)));

    if (t41 != 19495462708803LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = 24823LL;
	uint16_t x186 = 41U;
	int64_t x187 = -3472260984LL;
	volatile int8_t x188 = -22;
	int64_t t42 = -1582802695983LL;

    t42 = (x185^(x186*(x187%x188)));

    if (t42 != -25209LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x189 = UINT8_MAX;
	static volatile uint8_t x190 = UINT8_MAX;
	static volatile int8_t x191 = INT8_MIN;
	uint32_t x192 = 2U;
	static uint32_t t43 = 49U;

    t43 = (x189^(x190*(x191%x192)));

    if (t43 != 255U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x193 = INT16_MAX;
	static int32_t x194 = INT32_MAX;
	int64_t x195 = 3758873444724342435LL;
	volatile int8_t x196 = INT8_MAX;

    t44 = (x193^(x194*(x195%x196)));

    if (t44 != 154618789959LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint16_t x197 = UINT16_MAX;
	int8_t x198 = 1;
	int32_t x200 = -86;
	uint64_t t45 = 12917850LLU;

    t45 = (x197^(x198*(x199%x200)));

    if (t45 != 284731286232944LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = 13828;
	int16_t x203 = 868;
	int64_t x204 = INT64_MIN;
	volatile int64_t t46 = -185104LL;

    t46 = (x201^(x202*(x203%x204)));

    if (t46 != -12016240LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x207 = INT8_MIN;
	volatile int64_t t47 = 23587274LL;

    t47 = (x205^(x206*(x207%x208)));

    if (t47 != -545460846721LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = 627410;
	int8_t x210 = INT8_MIN;
	uint8_t x211 = 15U;
	volatile int32_t t48 = 38728;

    t48 = (x209^(x210*(x211%x212)));

    if (t48 != -628142) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x221 = 1U;
	volatile int32_t x223 = 16;
	static int16_t x224 = -910;
	uint32_t t49 = 1100188U;

    t49 = (x221^(x222*(x223%x224)));

    if (t49 != 17U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x228 = INT8_MIN;

    t50 = (x225^(x226*(x227%x228)));

    if (t50 != -4161520) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int8_t x230 = INT8_MIN;
	int8_t x231 = -28;
	int16_t x232 = 211;
	int32_t t51 = -496299;

    t51 = (x229^(x230*(x231%x232)));

    if (t51 != -3712) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MIN;
	volatile uint32_t x234 = 1392023U;
	int8_t x235 = INT8_MIN;
	int64_t x236 = INT64_MIN;
	volatile int64_t t52 = -568126903691192265LL;

    t52 = (x233^(x234*(x235%x236)));

    if (t52 != 178173056LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = -13;
	uint16_t x238 = UINT16_MAX;
	uint32_t x239 = 0U;
	int8_t x240 = 15;
	volatile uint32_t t53 = 15494U;

    t53 = (x237^(x238*(x239%x240)));

    if (t53 != 4294967283U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x241 = INT32_MIN;
	static int8_t x242 = -55;
	int32_t x243 = -2;
	volatile int16_t x244 = INT16_MIN;

    t54 = (x241^(x242*(x243%x244)));

    if (t54 != -2147483538) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x245 = 57901U;
	uint16_t x246 = 8404U;
	int8_t x248 = -1;
	volatile uint32_t t55 = 3032187U;

    t55 = (x245^(x246*(x247%x248)));

    if (t55 != 57901U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x249 = 145LLU;
	static uint64_t x250 = 23600072209717LLU;
	int8_t x251 = 0;
	volatile uint64_t t56 = 268341243647111LLU;

    t56 = (x249^(x250*(x251%x252)));

    if (t56 != 145LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x253 = 346690093773LL;
	volatile int64_t x255 = -13798LL;
	int16_t x256 = -1;
	volatile int64_t t57 = -1LL;

    t57 = (x253^(x254*(x255%x256)));

    if (t57 != 346690093773LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = -45523;
	static uint8_t x258 = 10U;
	int8_t x260 = INT8_MIN;
	volatile int64_t t58 = -25482092793LL;

    t58 = (x257^(x258*(x259%x260)));

    if (t58 != 45531LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile int32_t x261 = -458871628;
	volatile int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	volatile uint8_t x264 = 71U;
	volatile int32_t t59 = 687298;

    t59 = (x261^(x262*(x263%x264)));

    if (t59 != 458871661) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = 1;
	uint64_t t60 = 254LLU;

    t60 = (x265^(x266*(x267%x268)));

    if (t60 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x269 = INT16_MAX;
	uint8_t x271 = 1U;
	uint16_t x272 = 3U;
	volatile uint32_t t61 = 115063U;

    t61 = (x269^(x270*(x271%x272)));

    if (t61 != 17919U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x273 = 915U;
	static uint64_t x274 = UINT64_MAX;
	int64_t x275 = -112610936706LL;
	uint32_t x276 = UINT32_MAX;
	static volatile uint64_t t62 = 4091317LLU;

    t62 = (x273^(x274*(x275%x276)));

    if (t62 != 941786127LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x279 = 94U;
	int32_t t63 = -5271;

    t63 = (x277^(x278*(x279%x280)));

    if (t63 != 39) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x282 = -1;
	int16_t x283 = -2675;
	int64_t x284 = INT64_MIN;
	volatile int64_t t64 = -207182913907LL;

    t64 = (x281^(x282*(x283%x284)));

    if (t64 != 9223372036854773132LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x285 = 104U;
	volatile int64_t x286 = 77LL;
	int32_t x287 = INT32_MIN;
	volatile uint32_t x288 = UINT32_MAX;
	volatile int64_t t65 = 126LL;

    t65 = (x285^(x286*(x287%x288)));

    if (t65 != 165356241000LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x289 = 384896044961056240LLU;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	uint64_t t66 = 15270LLU;

    t66 = (x289^(x290*(x291%x292)));

    if (t66 != 384825676216878576LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MAX;
	volatile int8_t x296 = INT8_MIN;
	volatile uint32_t t67 = 8180U;

    t67 = (x293^(x294*(x295%x296)));

    if (t67 != 2742013336U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x302 = INT16_MIN;
	static uint16_t x303 = 1969U;
	int32_t x304 = INT32_MIN;
	int32_t t68 = 1;

    t68 = (x301^(x302*(x303%x304)));

    if (t68 != -64520168) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x305 = 48025764;
	volatile int64_t x306 = 16768489LL;
	volatile int32_t x307 = 3621;
	static int32_t x308 = -382469;
	volatile int64_t t69 = 3448103602LL;

    t69 = (x305^(x306*(x307%x308)));

    if (t69 != 60695838729LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x309 = 3U;
	static int8_t x310 = -8;
	static volatile int32_t x311 = -1;
	int8_t x312 = INT8_MIN;
	int32_t t70 = 114730;

    t70 = (x309^(x310*(x311%x312)));

    if (t70 != 11) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x313 = -2;
	int16_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	static volatile uint32_t t71 = 21681U;

    t71 = (x313^(x314*(x315%x316)));

    if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x317 = INT32_MIN;
	int32_t x318 = 4216;
	uint32_t x319 = 96290209U;
	int8_t x320 = 52;
	volatile uint32_t t72 = 2185940U;

    t72 = (x317^(x318*(x319%x320)));

    if (t72 != 2147656504U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x322 = INT16_MIN;
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	volatile int32_t t73 = 129170153;

    t73 = (x321^(x322*(x323%x324)));

    if (t73 != 4161533) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x325 = 18U;
	int8_t x326 = INT8_MIN;
	uint8_t x327 = UINT8_MAX;
	volatile uint32_t t74 = 934427U;

    t74 = (x325^(x326*(x327%x328)));

    if (t74 != 4294934674U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x329 = 428U;
	static int16_t x330 = -41;
	uint8_t x331 = 2U;
	uint16_t x332 = 877U;
	volatile int32_t t75 = 366;

    t75 = (x329^(x330*(x331%x332)));

    if (t75 != -510) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x333 = 64U;
	static volatile int64_t t76 = 50364LL;

    t76 = (x333^(x334*(x335%x336)));

    if (t76 != 274877907008LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x337 = 64LLU;
	uint32_t x338 = 186U;
	volatile int64_t x339 = -1LL;
	uint64_t x340 = 62912LLU;
	uint64_t t77 = 5465647510487226486LLU;

    t77 = (x337^(x338*(x339%x340)));

    if (t77 != 4487558LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = 24465049661892LL;
	int16_t x342 = INT16_MIN;
	static int32_t x343 = 8;
	uint8_t x344 = 97U;
	int64_t t78 = 134437592128269967LL;

    t78 = (x341^(x342*(x343%x344)));

    if (t78 != -24465049898556LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = INT32_MIN;
	int32_t x346 = 67154;
	uint16_t x347 = UINT16_MAX;
	int8_t x348 = -12;
	static int32_t t79 = -1865387;

    t79 = (x345^(x346*(x347%x348)));

    if (t79 != -2147282186) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x350 = 1945057U;
	int32_t x351 = -1;
	volatile uint32_t t80 = 226849U;

    t80 = (x349^(x350*(x351%x352)));

    if (t80 != 398U) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	int16_t x355 = -1;
	int32_t x356 = INT32_MAX;
	int64_t t81 = 1525197LL;

    t81 = (x353^(x354*(x355%x356)));

    if (t81 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x357 = 4U;
	int32_t x358 = INT32_MAX;
	static int32_t x359 = -6300;
	uint32_t t82 = 132770U;

    t82 = (x357^(x358*(x359%x360)));

    if (t82 != 4291748372U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x361 = -928;
	int16_t x362 = 12;
	volatile int8_t x363 = INT8_MAX;
	int64_t x364 = INT64_MAX;
	int64_t t83 = -97106LL;

    t83 = (x361^(x362*(x363%x364)));

    if (t83 != -1644LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x365 = INT16_MAX;
	static volatile uint64_t x367 = 365596110138922LLU;
	uint8_t x368 = 40U;
	uint64_t t84 = 34548802894432296LLU;

    t84 = (x365^(x366*(x367%x368)));

    if (t84 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int8_t x369 = INT8_MIN;
	int8_t x370 = 1;
	volatile uint8_t x372 = 98U;
	volatile int32_t t85 = 29931799;

    t85 = (x369^(x370*(x371%x372)));

    if (t85 != -71) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x377 = -372;
	static int32_t x378 = INT32_MIN;
	uint16_t x379 = 17U;
	static int8_t x380 = 1;
	int32_t t86 = 0;

    t86 = (x377^(x378*(x379%x380)));

    if (t86 != -372) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x381 = -1;
	int16_t x382 = INT16_MAX;
	static volatile int8_t x383 = INT8_MIN;
	int32_t x384 = INT32_MIN;
	static int32_t t87 = 701102;

    t87 = (x381^(x382*(x383%x384)));

    if (t87 != 4194175) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x385 = 989;
	static uint32_t x386 = 0U;
	uint64_t x388 = 2400339LLU;

    t88 = (x385^(x386*(x387%x388)));

    if (t88 != 989LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x391 = INT32_MAX;
	volatile uint16_t x392 = UINT16_MAX;
	uint64_t t89 = 7LLU;

    t89 = (x389^(x390*(x391%x392)));

    if (t89 != 18446743943403384365LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x398 = 13;
	uint8_t x399 = 1U;
	static int8_t x400 = INT8_MIN;
	int32_t t90 = -3477;

    t90 = (x397^(x398*(x399%x400)));

    if (t90 != 13059) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x401 = 74U;
	int64_t x403 = -17117183LL;
	static int32_t x404 = -4;
	volatile int64_t t91 = 3647078191186610645LL;

    t91 = (x401^(x402*(x403%x404)));

    if (t91 != -1658773126LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MAX;
	volatile int32_t t92 = -2286033;

    t92 = (x405^(x406*(x407%x408)));

    if (t92 != -4001375) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x409 = -71057576;
	volatile int32_t x410 = -20999;
	int16_t x411 = 1232;
	int64_t x412 = -1LL;
	int64_t t93 = 10526LL;

    t93 = (x409^(x410*(x411%x412)));

    if (t93 != -71057576LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x414 = 10983U;
	int32_t x415 = INT32_MIN;
	int64_t x416 = -1LL;
	int64_t t94 = 9LL;

    t94 = (x413^(x414*(x415%x416)));

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile int16_t x418 = 2274;
	int32_t x419 = INT32_MAX;
	uint32_t t95 = 138642U;

    t95 = (x417^(x418*(x419%x420)));

    if (t95 != 198279179U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x422 = -1;
	uint8_t x423 = 0U;
	uint64_t x424 = 993576507725LLU;
	static uint64_t t96 = 4290530322519LLU;

    t96 = (x421^(x422*(x423%x424)));

    if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x425 = 309448604519617LL;
	uint32_t x427 = 29U;
	int32_t x428 = 763063;
	static volatile uint64_t t97 = 6958276LLU;

    t97 = (x425^(x426*(x427%x428)));

    if (t97 != 309448604542955LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	uint64_t x432 = 319361019LLU;
	volatile uint64_t t98 = 1605127996923480LLU;

    t98 = (x429^(x430*(x431%x432)));

    if (t98 != 18446744049660087807LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x433 = -1;
	int64_t x434 = INT64_MAX;
	int16_t x435 = INT16_MIN;

    t99 = (x433^(x434*(x435%x436)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x437 = INT64_MIN;
	int64_t x438 = 2911655LL;
	int16_t x440 = -10;
	int64_t t100 = -14199286816994LL;

    t100 = (x437^(x438*(x439%x440)));

    if (t100 != 9223372036851864153LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x441 = INT64_MIN;
	uint8_t x443 = UINT8_MAX;
	uint8_t x444 = 11U;
	volatile int64_t t101 = -41725LL;

    t101 = (x441^(x442*(x443%x444)));

    if (t101 != -9223372036854775408LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x445 = -1;
	volatile int16_t x446 = 1;
	volatile uint64_t x447 = UINT64_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile uint64_t t102 = UINT64_MAX;

    t102 = (x445^(x446*(x447%x448)));

    if (t102 != UINT64_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x450 = 19U;
	int8_t x451 = 1;
	int16_t x452 = INT16_MIN;
	int32_t t103 = 7982214;

    t103 = (x449^(x450*(x451%x452)));

    if (t103 != 4262) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x453 = 57U;
	int16_t x454 = INT16_MAX;
	volatile int16_t x456 = INT16_MAX;
	static volatile int32_t t104 = -1361697;

    t104 = (x453^(x454*(x455%x456)));

    if (t104 != 57) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x457 = INT16_MAX;
	int8_t x458 = INT8_MIN;
	int8_t x459 = INT8_MIN;
	static uint32_t x460 = 665U;
	uint32_t t105 = 8790U;

    t105 = (x457^(x458*(x459%x460)));

    if (t105 != 4294955391U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = INT16_MAX;
	int8_t x462 = 19;
	int64_t x464 = INT64_MAX;

    t106 = (x461^(x462*(x463%x464)));

    if (t106 != 58574LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x465 = -8650201896543LL;
	uint16_t x466 = 13U;
	int16_t x467 = INT16_MAX;

    t107 = (x465^(x466*(x467%x468)));

    if (t107 != 18446735423508026962LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x469 = UINT32_MAX;
	uint64_t x470 = UINT64_MAX;
	uint16_t x472 = 56U;
	volatile uint64_t t108 = 1356503LLU;

    t108 = (x469^(x470*(x471%x472)));

    if (t108 != 18446744069414584372LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x473 = 143U;
	static volatile int8_t x474 = -1;
	volatile int32_t x475 = -159700542;
	volatile int8_t x476 = INT8_MIN;
	volatile uint32_t t109 = 960574178U;

    t109 = (x473^(x474*(x475%x476)));

    if (t109 != 177U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x477 = INT32_MAX;
	volatile int8_t x478 = -1;
	int8_t x480 = INT8_MAX;
	volatile int32_t t110 = -334787;

    t110 = (x477^(x478*(x479%x480)));

    if (t110 != 2147483646) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x481 = 4;
	int8_t x482 = 1;
	uint64_t x483 = 11283329321394643LLU;
	volatile uint8_t x484 = 9U;
	volatile uint64_t t111 = 2673131972728627LLU;

    t111 = (x481^(x482*(x483%x484)));

    if (t111 != 5LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x485 = 3U;
	int8_t x486 = INT8_MIN;
	volatile int8_t x487 = 40;
	volatile uint32_t t112 = 427413U;

    t112 = (x485^(x486*(x487%x488)));

    if (t112 != 4294962179U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x489 = UINT32_MAX;
	static int8_t x490 = -1;
	int16_t x491 = -2;
	uint32_t x492 = UINT32_MAX;
	volatile uint32_t t113 = 31U;

    t113 = (x489^(x490*(x491%x492)));

    if (t113 != 4294967293U) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = -1;
	static int64_t x499 = -1LL;
	int8_t x500 = 1;
	static volatile int64_t t114 = 1024LL;

    t114 = (x497^(x498*(x499%x500)));

    if (t114 != -128LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x501 = 368443614U;
	static int16_t x502 = -1;
	int16_t x503 = INT16_MIN;
	uint32_t t115 = 5000630U;

    t115 = (x501^(x502*(x503%x504)));

    if (t115 != 368443614U) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x505 = 8879;
	static uint64_t x506 = UINT64_MAX;
	uint64_t x507 = 2075842046LLU;
	int64_t x508 = INT64_MAX;
	volatile uint64_t t116 = 26213LLU;

    t116 = (x505^(x506*(x507%x508)));

    if (t116 != 18446744071633701037LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x509 = -1;
	volatile int8_t x511 = INT8_MAX;
	uint16_t x512 = 7U;
	volatile int32_t t117 = -1665;

    t117 = (x509^(x510*(x511%x512)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x514 = INT8_MIN;
	static volatile int16_t x515 = 37;
	int8_t x516 = INT8_MIN;
	int32_t t118 = 566436681;

    t118 = (x513^(x514*(x515%x516)));

    if (t118 != 28032) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x517 = -262483467625264206LL;
	static int8_t x518 = INT8_MAX;
	int16_t x519 = 260;
	static int32_t x520 = 13058;

    t119 = (x517^(x518*(x519%x520)));

    if (t119 != -262483467625297074LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint32_t x521 = UINT32_MAX;
	int16_t x522 = INT16_MIN;
	uint8_t x523 = UINT8_MAX;
	volatile uint64_t t120 = 1568505LLU;

    t120 = (x521^(x522*(x523%x524)));

    if (t120 != 18446744069422940159LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x529 = INT16_MIN;
	int16_t x530 = -14;
	static int8_t x531 = INT8_MIN;
	static int64_t x532 = -472610973661861280LL;
	int64_t t121 = 17217045344769182LL;

    t121 = (x529^(x530*(x531%x532)));

    if (t121 != -30976LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x534 = INT16_MAX;
	static volatile int64_t x535 = -1LL;
	static volatile int32_t x536 = 7;
	volatile int64_t t122 = -272378957936238353LL;

    t122 = (x533^(x534*(x535%x536)));

    if (t122 != 2147450881LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = -1;
	static volatile int64_t x539 = INT64_MAX;
	int64_t x540 = INT64_MIN;
	int64_t t123 = -571454265213LL;

    t123 = (x537^(x538*(x539%x540)));

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x541 = 449025LLU;
	static uint16_t x542 = 30U;
	volatile int64_t x543 = INT64_MIN;
	uint16_t x544 = 2451U;
	uint64_t t124 = 246100575575LLU;

    t124 = (x541^(x542*(x543%x544)));

    if (t124 != 18446744073709042405LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x545 = 78U;
	uint64_t x546 = 3429664LLU;
	int8_t x547 = INT8_MIN;
	volatile int16_t x548 = 67;
	volatile uint64_t t125 = 31LLU;

    t125 = (x545^(x546*(x547%x548)));

    if (t125 != 18446744073500342062LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x549 = -5332;
	int64_t x550 = 1024007017LL;
	static int64_t x551 = INT64_MIN;
	int8_t x552 = INT8_MIN;

    t126 = (x549^(x550*(x551%x552)));

    if (t126 != -5332LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x553 = -1;
	uint16_t x555 = 9U;
	int8_t x556 = -1;
	int32_t t127 = 7426993;

    t127 = (x553^(x554*(x555%x556)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x557 = -1;
	int16_t x558 = 0;
	int32_t x559 = INT32_MIN;
	volatile int8_t x560 = INT8_MIN;
	int32_t t128 = -254562258;

    t128 = (x557^(x558*(x559%x560)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x561 = INT32_MAX;
	uint64_t x562 = 37LLU;
	int64_t x563 = -1LL;
	int8_t x564 = 1;
	volatile uint64_t t129 = 238620288292538LLU;

    t129 = (x561^(x562*(x563%x564)));

    if (t129 != 2147483647LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x568 = 236130LLU;
	uint64_t t130 = 114703979LLU;

    t130 = (x565^(x566*(x567%x568)));

    if (t130 != 18446744073709423979LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x573 = UINT64_MAX;
	static volatile uint64_t x574 = 62LLU;
	int16_t x575 = INT16_MIN;
	volatile uint64_t t131 = UINT64_MAX;

    t131 = (x573^(x574*(x575%x576)));

    if (t131 != UINT64_MAX) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x577 = 75801U;
	int8_t x578 = -1;
	static volatile int16_t x579 = -1;
	int16_t x580 = INT16_MAX;
	static volatile uint32_t t132 = 6505U;

    t132 = (x577^(x578*(x579%x580)));

    if (t132 != 75800U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x581 = INT64_MIN;
	uint16_t x582 = UINT16_MAX;
	int32_t x583 = INT32_MIN;
	int64_t x584 = INT64_MIN;
	int64_t t133 = 1215730306622LL;

    t133 = (x581^(x582*(x583%x584)));

    if (t133 != 9223231301513904128LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x586 = INT64_MAX;
	uint64_t x587 = 24722LLU;
	static int32_t x588 = -989919;
	static uint64_t t134 = 619998903443361153LLU;

    t134 = (x585^(x586*(x587%x588)));

    if (t134 != 18446744073708058342LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x589 = 31052U;
	int64_t x591 = -768910LL;
	static uint16_t x592 = UINT16_MAX;

    t135 = (x589^(x590*(x591%x592)));

    if (t135 != -49877LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x594 = 1;
	volatile int32_t t136 = -20;

    t136 = (x593^(x594*(x595%x596)));

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x597 = 4193201073LLU;
	static volatile uint8_t x598 = UINT8_MAX;
	uint8_t x600 = 29U;

    t137 = (x597^(x598*(x599%x600)));

    if (t137 != 18446744069516350640LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x601 = INT32_MIN;
	int8_t x602 = -1;
	int64_t x603 = INT64_MAX;

    t138 = (x601^(x602*(x603%x604)));

    if (t138 != 7706078949LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x605 = INT16_MIN;
	int32_t x606 = INT32_MIN;
	int16_t x607 = 2052;
	int8_t x608 = -1;
	static volatile int32_t t139 = -29;

    t139 = (x605^(x606*(x607%x608)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int16_t x609 = -3190;
	static uint32_t x610 = 9951U;
	static uint64_t x611 = 368160LLU;
	uint64_t x612 = 1751035LLU;
	uint64_t t140 = 10892607062LLU;

    t140 = (x609^(x610*(x611%x612)));

    if (t140 != 18446744070045994602LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x614 = INT8_MIN;
	int16_t x615 = INT16_MAX;
	int16_t x616 = INT16_MIN;
	volatile int32_t t141 = 50;

    t141 = (x613^(x614*(x615%x616)));

    if (t141 != 4194173) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x625 = INT16_MIN;
	static int16_t x626 = 335;
	int64_t x628 = INT64_MAX;
	int64_t t142 = 602310LL;

    t142 = (x625^(x626*(x627%x628)));

    if (t142 != -55759LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x629 = UINT8_MAX;
	int32_t x630 = -1;
	volatile int16_t x631 = -1;
	volatile int32_t x632 = INT32_MAX;

    t143 = (x629^(x630*(x631%x632)));

    if (t143 != 254) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x633 = 931385LLU;
	volatile int16_t x634 = INT16_MIN;
	uint64_t t144 = 998520571171LLU;

    t144 = (x633^(x634*(x635%x636)));

    if (t144 != 931385LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x637 = 11931LLU;
	int32_t x638 = INT32_MAX;
	uint16_t x640 = UINT16_MAX;
	volatile uint64_t t145 = 181818275890467LLU;

    t145 = (x637^(x638*(x639%x640)));

    if (t145 != 11931LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x641 = INT8_MIN;
	static uint64_t x642 = 343170366838474LLU;
	uint8_t x644 = UINT8_MAX;
	uint64_t t146 = 18683107281018LLU;

    t146 = (x641^(x642*(x643%x644)));

    if (t146 != 18435076281237043540LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x646 = -12;
	int8_t x647 = -1;
	int32_t x648 = -4;
	int32_t t147 = -13487;

    t147 = (x645^(x646*(x647%x648)));

    if (t147 != -13) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x649 = -14;
	int32_t x650 = INT32_MIN;
	int16_t x652 = -1;
	volatile int32_t t148 = -8;

    t148 = (x649^(x650*(x651%x652)));

    if (t148 != -14) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x653 = INT32_MAX;
	uint64_t x655 = UINT64_MAX;
	int32_t x656 = -1029;
	volatile uint64_t t149 = 35494LLU;

    t149 = (x653^(x654*(x655%x656)));

    if (t149 != 2147393183LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x657 = 378242054LLU;
	uint32_t x658 = 383U;
	uint64_t x659 = 7109179149039123206LLU;
	static int32_t x660 = INT32_MIN;
	volatile uint64_t t150 = 1111490667490805LLU;

    t150 = (x657^(x658*(x659%x660)));

    if (t150 != 11144235246974323196LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x662 = 70U;
	int8_t x664 = INT8_MIN;
	int32_t t151 = 177;

    t151 = (x661^(x662*(x663%x664)));

    if (t151 != -32488) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x665 = UINT16_MAX;
	int32_t x667 = INT32_MIN;
	uint16_t x668 = UINT16_MAX;

    t152 = (x665^(x666*(x667%x668)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x673 = -3;
	uint32_t x674 = 1751251777U;
	static volatile uint8_t x675 = UINT8_MAX;

    t153 = (x673^(x674*(x675%x676)));

    if (t153 != 107395650U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x677 = 3U;
	int8_t x678 = -1;
	int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MIN;

    t154 = (x677^(x678*(x679%x680)));

    if (t154 != 131) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x681 = INT32_MIN;
	int64_t x682 = INT64_MAX;
	static uint64_t x683 = 824LLU;
	volatile int16_t x684 = INT16_MAX;
	uint64_t t155 = 1138761LLU;

    t155 = (x681^(x682*(x683%x684)));

    if (t155 != 2147482824LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x685 = 9026151U;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MIN;
	int64_t t156 = -15675196879164LL;

    t156 = (x685^(x686*(x687%x688)));

    if (t156 != 9026151LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x689 = UINT16_MAX;
	uint64_t x690 = 50039488LLU;
	volatile int8_t x692 = INT8_MAX;
	uint64_t t157 = 46180770462LLU;

    t157 = (x689^(x690*(x691%x692)));

    if (t157 != 2451927359LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x693 = 218922125;
	int16_t x694 = 0;
	uint8_t x695 = UINT8_MAX;
	volatile int32_t x696 = INT32_MAX;

    t158 = (x693^(x694*(x695%x696)));

    if (t158 != 218922125) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x697 = 239LL;
	int8_t x698 = -1;
	volatile uint16_t x699 = 26732U;
	int32_t x700 = -1;

    t159 = (x697^(x698*(x699%x700)));

    if (t159 != 239LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x702 = -1;
	static int16_t x703 = INT16_MAX;
	int16_t x704 = 1093;
	int32_t t160 = -127273828;

    t160 = (x701^(x702*(x703%x704)));

    if (t160 != -1235) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x706 = 250261871U;
	uint32_t t161 = 3727713U;

    t161 = (x705^(x706*(x707%x708)));

    if (t161 != 3794443553U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = -1;
	uint16_t x710 = UINT16_MAX;
	volatile int64_t x711 = -1LL;
	int64_t t162 = 2841LL;

    t162 = (x709^(x710*(x711%x712)));

    if (t162 != 65534LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x721 = 0U;
	int8_t x722 = INT8_MAX;
	int64_t x723 = INT64_MAX;
	uint32_t x724 = 1U;
	int64_t t163 = -1096894LL;

    t163 = (x721^(x722*(x723%x724)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x726 = INT16_MAX;
	static uint32_t x727 = 5U;

    t164 = (x725^(x726*(x727%x728)));

    if (t164 != 4294803484U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x729 = UINT16_MAX;
	uint8_t x730 = 112U;
	static int64_t x731 = INT64_MAX;
	static volatile int64_t x732 = INT64_MAX;

    t165 = (x729^(x730*(x731%x732)));

    if (t165 != 65535LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x733 = 9;
	int32_t x735 = INT32_MIN;
	int16_t x736 = 62;

    t166 = (x733^(x734*(x735%x736)));

    if (t166 != 11U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x737 = UINT8_MAX;
	volatile uint32_t x738 = 1549991970U;
	int8_t x739 = INT8_MIN;
	static uint16_t x740 = UINT16_MAX;
	uint32_t t167 = 35U;

    t167 = (x737^(x738*(x739%x740)));

    if (t167 != 3464491007U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x741 = 50089629535LLU;
	int8_t x742 = -1;
	int16_t x743 = 106;
	volatile int16_t x744 = 1;
	volatile uint64_t t168 = 2823075069LLU;

    t168 = (x741^(x742*(x743%x744)));

    if (t168 != 50089629535LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x745 = INT8_MIN;
	int16_t x746 = 991;
	uint64_t x747 = 62674755LLU;
	int8_t x748 = INT8_MIN;

    t169 = (x745^(x746*(x747%x748)));

    if (t169 != 18446744011598869469LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x749 = 26U;
	uint32_t x751 = 375U;
	int8_t x752 = -1;
	static volatile uint32_t t170 = 211665088U;

    t170 = (x749^(x750*(x751%x752)));

    if (t170 != 4294966931U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x753 = -2190;
	uint8_t x754 = UINT8_MAX;
	uint8_t x755 = 113U;
	static uint16_t x756 = 4U;
	int32_t t171 = 114;

    t171 = (x753^(x754*(x755%x756)));

    if (t171 != -2163) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x757 = INT32_MIN;
	uint16_t x758 = 1U;
	volatile uint64_t x760 = 668LLU;
	uint64_t t172 = 2632349909098894183LLU;

    t172 = (x757^(x758*(x759%x760)));

    if (t172 != 18446744071562068554LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x761 = -264273211710658LL;
	volatile int8_t x762 = INT8_MIN;
	static int8_t x763 = 14;
	int64_t x764 = -117LL;

    t173 = (x761^(x762*(x763%x764)));

    if (t173 != 264273211710014LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x765 = 0;
	int32_t x766 = 423597438;
	int16_t x767 = INT16_MAX;
	int64_t x768 = -3425769LL;
	int64_t t174 = -2193594LL;

    t174 = (x765^(x766*(x767%x768)));

    if (t174 != 13880017250946LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x769 = 7335U;
	int32_t x770 = INT32_MAX;
	static uint16_t x771 = 1U;

    t175 = (x769^(x770*(x771%x772)));

    if (t175 != 2147476312) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x773 = 220473117U;
	int16_t x774 = INT16_MIN;
	volatile int8_t x775 = -1;
	static int64_t x776 = -1784543342127177LL;
	int64_t t176 = -2LL;

    t176 = (x773^(x774*(x775%x776)));

    if (t176 != 220505885LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x777 = -1;
	volatile int64_t x778 = -168861458LL;
	uint16_t x779 = 714U;
	static int64_t x780 = 1772466LL;
	int64_t t177 = -638922730LL;

    t177 = (x777^(x778*(x779%x780)));

    if (t177 != 120567081011LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x781 = INT16_MAX;
	uint8_t x782 = 0U;
	int16_t x783 = -1;

    t178 = (x781^(x782*(x783%x784)));

    if (t178 != 32767) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x785 = UINT8_MAX;
	volatile int16_t x786 = INT16_MIN;
	static int8_t x787 = -1;
	int8_t x788 = -1;
	int32_t t179 = 517622;

    t179 = (x785^(x786*(x787%x788)));

    if (t179 != 255) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x789 = -18;
	int64_t x790 = -1LL;
	uint32_t x792 = 1561529040U;
	static int64_t t180 = 61683010LL;

    t180 = (x789^(x790*(x791%x792)));

    if (t180 != 1171909199LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x794 = -10855463;
	int16_t x795 = INT16_MAX;
	volatile uint32_t x796 = 9625775U;
	uint32_t t181 = 1U;

    t181 = (x793^(x794*(x795%x796)));

    if (t181 != 781329446U) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x797 = 84251867LL;
	static uint64_t x798 = UINT64_MAX;
	int8_t x799 = INT8_MIN;
	uint64_t x800 = 4022915616LLU;
	volatile uint64_t t182 = 3423476652LLU;

    t182 = (x797^(x798*(x799%x800)));

    if (t182 != 18446744070193218715LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x801 = -1;
	int16_t x802 = 1;
	int64_t x803 = INT64_MIN;
	static int16_t x804 = -112;

    t183 = (x801^(x802*(x803%x804)));

    if (t183 != 63LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x815 = INT64_MIN;
	volatile int64_t t184 = 4709LL;

    t184 = (x813^(x814*(x815%x816)));

    if (t184 != -9223372036854774950LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint8_t x817 = UINT8_MAX;
	int8_t x818 = INT8_MIN;
	int64_t x819 = INT64_MIN;
	static volatile int64_t t185 = 69955LL;

    t185 = (x817^(x818*(x819%x820)));

    if (t185 != 255LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x822 = INT64_MAX;
	static uint64_t x824 = 15443978029LLU;
	volatile uint64_t t186 = 17246909262130918LLU;

    t186 = (x821^(x822*(x823%x824)));

    if (t186 != 4290LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint16_t x825 = UINT16_MAX;
	static int32_t x827 = 1;
	uint8_t x828 = UINT8_MAX;

    t187 = (x825^(x826*(x827%x828)));

    if (t187 != -61665) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x830 = 1;
	uint64_t x831 = 1406LLU;
	int64_t x832 = -7478491903882388LL;

    t188 = (x829^(x830*(x831%x832)));

    if (t188 != 1299LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x833 = 715429U;
	int16_t x834 = -1;
	uint32_t x835 = 1U;
	uint64_t x836 = 26830LLU;
	static uint64_t t189 = 20LLU;

    t189 = (x833^(x834*(x835%x836)));

    if (t189 != 18446744073708836186LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x837 = 4355LLU;
	int32_t x838 = INT32_MIN;
	int32_t x839 = INT32_MIN;
	int32_t x840 = INT32_MIN;
	uint64_t t190 = 1548600744749474LLU;

    t190 = (x837^(x838*(x839%x840)));

    if (t190 != 4355LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x841 = 29;
	uint8_t x843 = 111U;
	static int32_t x844 = INT32_MAX;
	int32_t t191 = -2927631;

    t191 = (x841^(x842*(x843%x844)));

    if (t191 != -14179) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x845 = 784698311565875LLU;
	int8_t x846 = 0;
	int32_t x847 = -1;
	static int64_t x848 = INT64_MIN;
	volatile uint64_t t192 = 235470150012LLU;

    t192 = (x845^(x846*(x847%x848)));

    if (t192 != 784698311565875LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x851 = 13800U;
	int16_t x852 = INT16_MIN;
	volatile int32_t t193 = 1001134;

    t193 = (x849^(x850*(x851%x852)));

    if (t193 != -2145717249) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x853 = -14094;
	volatile uint64_t x854 = 107483933511986230LLU;
	uint16_t x855 = UINT16_MAX;
	uint32_t x856 = 682156U;
	volatile uint64_t t194 = 6LLU;

    t194 = (x853^(x854*(x855%x856)));

    if (t194 != 2696653449031129912LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x857 = 0U;
	int64_t x859 = -55295602LL;
	int64_t x860 = -1LL;

    t195 = (x857^(x858*(x859%x860)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x862 = INT8_MIN;
	uint32_t x863 = 1U;
	int8_t x864 = 3;
	volatile uint32_t t196 = 915508U;

    t196 = (x861^(x862*(x863%x864)));

    if (t196 != 2147483775U) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x865 = 58;
	int8_t x866 = INT8_MIN;
	static int64_t x867 = INT64_MIN;
	static volatile int8_t x868 = INT8_MIN;
	int64_t t197 = -1LL;

    t197 = (x865^(x866*(x867%x868)));

    if (t197 != 58LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x870 = 0;
	static int16_t x871 = INT16_MAX;
	volatile uint32_t x872 = 867080078U;
	uint32_t t198 = 18536U;

    t198 = (x869^(x870*(x871%x872)));

    if (t198 != 4294934528U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x873 = 1961U;
	uint8_t x874 = 60U;
	uint16_t x875 = 9U;
	static volatile int32_t x876 = INT32_MIN;
	volatile int32_t t199 = 44896363;

    t199 = (x873^(x874*(x875%x876)));

    if (t199 != 1461) { NG(); } else { ; }
	
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

