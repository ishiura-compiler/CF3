
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

static int64_t x5 = INT64_MIN;
static int32_t x7 = 123227;
volatile int64_t x17 = INT64_MAX;
volatile int64_t x19 = 200LL;
int8_t x24 = INT8_MIN;
volatile int32_t t3 = -240;
static int64_t x35 = -77078728650LL;
int16_t x41 = 13;
static int32_t x42 = -2099;
uint64_t x43 = UINT64_MAX;
static int8_t x44 = -1;
static int32_t x45 = -33403814;
volatile int64_t x46 = INT64_MAX;
static uint32_t x50 = 509173U;
volatile int32_t x51 = INT32_MIN;
uint64_t x52 = UINT64_MAX;
static uint64_t x53 = 34095425534676LLU;
static int8_t x58 = -61;
static uint32_t t11 = 94U;
volatile uint64_t t12 = 5908959LLU;
int32_t x68 = -732612;
int32_t x75 = INT32_MAX;
static volatile uint64_t t14 = 7135886540540LLU;
uint8_t x83 = 34U;
int8_t x98 = -9;
static int8_t x99 = INT8_MAX;
static volatile int64_t x105 = INT64_MAX;
static uint64_t x107 = 45340689620187295LLU;
static int64_t x109 = -200LL;
volatile int64_t t21 = -2LL;
uint64_t x123 = 0LLU;
static uint8_t x124 = UINT8_MAX;
volatile int32_t x126 = INT32_MAX;
static uint64_t x127 = UINT64_MAX;
int8_t x128 = 1;
uint64_t t24 = UINT64_MAX;
volatile uint32_t t26 = 44489309U;
static int64_t x150 = 121LL;
int64_t t29 = -3963LL;
uint8_t x178 = 1U;
uint16_t x180 = 0U;
volatile int64_t t34 = -64237149378953LL;
uint16_t x181 = UINT16_MAX;
int64_t x182 = -1LL;
static volatile uint64_t t36 = 126269886925LLU;
uint8_t x190 = UINT8_MAX;
static volatile uint8_t x194 = UINT8_MAX;
volatile int64_t x199 = INT64_MIN;
static uint64_t t41 = 516440LLU;
volatile int8_t x213 = INT8_MAX;
int8_t x215 = INT8_MIN;
static volatile int64_t t43 = 1057LL;
uint64_t x221 = 3LLU;
static volatile uint8_t x225 = 84U;
int32_t x226 = -41;
int32_t x228 = INT32_MIN;
uint64_t x234 = UINT64_MAX;
static int64_t t51 = 103479048LL;
uint8_t x255 = 16U;
volatile uint64_t t52 = 365221946699793011LLU;
int32_t x263 = -1;
int16_t x264 = 48;
static int32_t x278 = INT32_MIN;
int64_t x279 = INT64_MIN;
static int16_t x280 = INT16_MIN;
uint64_t t57 = 2813662322492253416LLU;
int64_t x285 = INT64_MAX;
uint64_t x287 = 1LLU;
int8_t x288 = -1;
uint64_t t58 = 223LLU;
volatile uint32_t t60 = 279723641U;
int32_t x298 = 8;
int8_t x305 = -1;
int8_t x312 = -1;
int64_t t63 = 6076423309396778LL;
volatile uint8_t x323 = UINT8_MAX;
int64_t x337 = INT64_MIN;
int64_t x339 = -1LL;
int32_t x340 = -6;
int32_t x353 = -84318091;
int64_t x359 = INT64_MIN;
int32_t x360 = INT32_MAX;
volatile int32_t x366 = INT32_MAX;
int8_t x369 = INT8_MAX;
volatile uint64_t t76 = 35713LLU;
static int64_t x375 = INT64_MAX;
static volatile int32_t x383 = INT32_MAX;
int32_t x384 = 539482;
uint16_t x386 = UINT16_MAX;
uint8_t x387 = 59U;
static int8_t x389 = INT8_MIN;
int32_t x392 = -1;
int32_t x400 = INT32_MAX;
int32_t x402 = 10139;
volatile int8_t x403 = -1;
uint16_t x411 = 2U;
uint64_t x414 = 272382940904078681LLU;
uint64_t x420 = 51307344896133685LLU;
int8_t x433 = -1;
volatile int64_t x435 = INT64_MIN;
volatile int64_t t93 = -193674681690500LL;
static int16_t x447 = -1;
int8_t x448 = -1;
uint8_t x450 = UINT8_MAX;
int16_t x455 = INT16_MIN;
int32_t x459 = INT32_MAX;
int16_t x462 = INT16_MIN;
uint16_t x473 = 185U;
static uint64_t x475 = 116LLU;
volatile int64_t x485 = -1LL;
static uint64_t x499 = 2406206464508LLU;
int32_t x506 = -9;
int64_t x509 = INT64_MAX;
volatile int64_t x510 = INT64_MIN;
int16_t x514 = INT16_MAX;
int32_t x515 = -1;
volatile int32_t t108 = 91280;
volatile uint8_t x517 = 1U;
static uint8_t x520 = UINT8_MAX;
static int32_t x527 = INT32_MIN;
static volatile int64_t t111 = 387249087LL;
uint8_t x534 = UINT8_MAX;
volatile int16_t x535 = -1;
int64_t t114 = -759578431LL;
uint64_t x542 = 4067370599LLU;
int64_t x547 = INT64_MAX;
uint64_t t117 = 1034215473198213794LLU;
static uint64_t x555 = 1736543148137202LLU;
int16_t x564 = INT16_MAX;
int64_t x587 = -20793LL;
static uint8_t x591 = 61U;
volatile int16_t x595 = INT16_MAX;
uint8_t x598 = UINT8_MAX;
uint32_t t127 = 0U;
int16_t x603 = -1;
volatile int8_t x616 = -1;
volatile int16_t x617 = -213;
static int64_t t132 = 119114LL;
uint64_t x621 = 0LLU;
volatile uint8_t x624 = 0U;
int64_t x641 = INT64_MIN;
volatile int32_t x646 = INT32_MAX;
static uint16_t x647 = 24614U;
volatile int32_t t137 = 437211876;
int16_t x652 = INT16_MIN;
int64_t x655 = INT64_MIN;
volatile int16_t x658 = INT16_MIN;
uint16_t x659 = 162U;
int8_t x662 = INT8_MAX;
int32_t x668 = -13519;
static uint64_t x675 = 483272LLU;
static int64_t x681 = -1LL;
volatile uint64_t x682 = 1164479093990094LLU;
int16_t x686 = -1;
int16_t x688 = INT16_MAX;
int64_t t146 = 6972093LL;
volatile int16_t x693 = -62;
static int16_t x697 = -600;
int8_t x699 = -3;
int16_t x700 = INT16_MAX;
uint64_t x705 = 121570736261LLU;
uint8_t x706 = 26U;
volatile uint8_t x711 = 1U;
volatile int32_t t152 = 1;
volatile int64_t t153 = -35LL;
static uint16_t x725 = UINT16_MAX;
volatile int16_t x727 = -1;
uint32_t x731 = UINT32_MAX;
uint64_t t157 = 6LLU;
static int64_t x734 = 47LL;
static volatile int16_t x735 = INT16_MIN;
volatile int64_t t158 = -949LL;
static volatile int8_t x738 = -53;
static int16_t x740 = INT16_MIN;
uint64_t x742 = UINT64_MAX;
volatile uint64_t x743 = 12LLU;
uint32_t t161 = 28388397U;
uint8_t x752 = 4U;
volatile uint16_t x755 = UINT16_MAX;
volatile int32_t x761 = INT32_MIN;
int16_t x767 = -1;
int16_t x768 = -108;
int16_t x773 = INT16_MIN;
int64_t x782 = INT64_MIN;
int16_t x789 = INT16_MIN;
int32_t x793 = 3153;
volatile uint64_t t173 = 71921849738583264LLU;
int32_t x818 = 23880395;
uint64_t x823 = UINT64_MAX;
uint64_t t176 = 1615044607229029LLU;
static int64_t t177 = 254653979766LL;
int32_t x829 = 4535;
uint8_t x833 = 0U;
int32_t x837 = INT32_MIN;
int16_t x839 = INT16_MIN;
static int32_t x850 = -3814;
int64_t x853 = 358902LL;
int32_t x860 = INT32_MAX;
static uint32_t t184 = 1784U;
static int64_t x861 = -499LL;
uint8_t x864 = 33U;
int16_t x866 = -3325;
uint32_t x868 = 3843193U;
uint8_t x869 = 13U;
volatile uint8_t x871 = UINT8_MAX;
static uint64_t x875 = UINT64_MAX;
static int16_t x877 = -3257;
volatile int32_t t191 = 19;
volatile int16_t x890 = INT16_MAX;
int64_t x892 = 420LL;
uint32_t x900 = 1600057813U;
volatile int32_t t196 = 2035;
uint64_t x924 = 133LLU;


void f0(void) {
    	volatile uint64_t x6 = 9114789946LLU;
	int32_t x8 = -1;
	uint64_t t0 = 1057391022025LLU;

    t0 = ((x5|(x6|x7))*x8);

    if (t0 != 9223372027739903621LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = 3U;
	volatile int8_t x15 = 8;
	static volatile uint64_t x16 = 0LLU;
	uint64_t t1 = 83053536LLU;

    t1 = ((x13|(x14|x15))*x16);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x18 = 188939LLU;
	int8_t x20 = INT8_MAX;
	uint64_t t2 = 36257330537925567LLU;

    t2 = ((x17|(x18|x19))*x20);

    if (t2 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MAX;
	int16_t x23 = -1;

    t3 = ((x21|(x22|x23))*x24);

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = 19;
	uint64_t x30 = UINT64_MAX;
	volatile int32_t x31 = -879441627;
	int8_t x32 = INT8_MAX;
	volatile uint64_t t4 = 9288778622LLU;

    t4 = ((x29|(x30|x31))*x32);

    if (t4 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = INT8_MAX;
	int16_t x34 = -10510;
	int64_t x36 = -1LL;
	static volatile int64_t t5 = 29567374072554LL;

    t5 = ((x33|(x34|x35))*x36);

    if (t5 != 2305LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x37 = -408364;
	uint8_t x38 = 5U;
	uint16_t x39 = 3U;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t6 = 127962852;

    t6 = ((x37|(x38|x39))*x40);

    if (t6 != 52270208) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t t7 = 1287082457LLU;

    t7 = ((x41|(x42|x43))*x44);

    if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x47 = 1;
	int8_t x48 = -1;
	int64_t t8 = -4LL;

    t8 = ((x45|(x46|x47))*x48);

    if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x49 = 4U;
	uint64_t t9 = 14052910581877LLU;

    t9 = ((x49|(x50|x51))*x52);

    if (t9 != 18446744071561558795LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x54 = INT64_MIN;
	static int16_t x55 = INT16_MAX;
	static int16_t x56 = INT16_MIN;
	static volatile uint64_t t10 = 115681366568308129LLU;

    t10 = ((x53|(x54|x55))*x56);

    if (t10 != 17329505169209065472LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = 2000U;
	volatile uint8_t x59 = UINT8_MAX;
	static volatile int32_t x60 = INT32_MIN;

    t11 = ((x57|(x58|x59))*x60);

    if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x61 = UINT64_MAX;
	volatile int16_t x62 = 2;
	uint8_t x63 = 8U;
	static volatile int16_t x64 = -1;

    t12 = ((x61|(x62|x63))*x64);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x65 = 132469294U;
	int32_t x66 = -1;
	volatile int32_t x67 = 30024687;
	uint32_t t13 = 206905614U;

    t13 = ((x65|(x66|x67))*x68);

    if (t13 != 732612U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x73 = 40U;
	uint64_t x74 = UINT64_MAX;
	volatile int64_t x76 = INT64_MAX;

    t14 = ((x73|(x74|x75))*x76);

    if (t14 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x77 = -6639495180735LL;
	int64_t x78 = 1LL;
	static int32_t x79 = INT32_MIN;
	uint16_t x80 = UINT16_MAX;
	volatile int64_t t15 = -573LL;

    t15 = ((x77|(x78|x79))*x80);

    if (t15 != -106378035105345LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = 60356896337977LL;
	int64_t x82 = -3691LL;
	int64_t x84 = 96092373527LL;
	int64_t t16 = -34792980LL;

    t16 = ((x81|(x82|x83))*x84);

    if (t16 != -350641071000023LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MIN;
	static int32_t x90 = INT32_MIN;
	int64_t x91 = 13931129416419660LL;
	static int16_t x92 = INT16_MIN;
	int64_t t17 = 31063058082472066LL;

    t17 = ((x89|(x90|x91))*x92);

    if (t17 != 1703936LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x97 = UINT32_MAX;
	volatile int16_t x100 = -1;
	volatile uint32_t t18 = 12U;

    t18 = ((x97|(x98|x99))*x100);

    if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	static int16_t x103 = 3;
	uint16_t x104 = 1U;
	uint32_t t19 = UINT32_MAX;

    t19 = ((x101|(x102|x103))*x104);

    if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x106 = INT8_MIN;
	int32_t x108 = -53153;
	uint64_t t20 = 8804263651010792LLU;

    t20 = ((x105|(x106|x107))*x108);

    if (t20 != 53153LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = INT16_MIN;

    t21 = ((x109|(x110|x111))*x112);

    if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x117 = 145171;
	volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = 949LLU;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t22 = 201LLU;

    t22 = ((x117|(x118|x119))*x120);

    if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x121 = INT16_MAX;
	volatile uint64_t x122 = UINT64_MAX;
	static uint64_t t23 = 2598041081230LLU;

    t23 = ((x121|(x122|x123))*x124);

    if (t23 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x125 = 16;

    t24 = ((x125|(x126|x127))*x128);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x129 = 1U;
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1834804;
	volatile int32_t t25 = 0;

    t25 = ((x129|(x130|x131))*x132);

    if (t25 != 233020108) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x137 = UINT32_MAX;
	static int32_t x138 = INT32_MIN;
	int8_t x139 = -1;
	int32_t x140 = -19046246;

    t26 = ((x137|(x138|x139))*x140);

    if (t26 != 19046246U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = -1;
	volatile int8_t x142 = INT8_MIN;
	int64_t x143 = -25464129537LL;
	int64_t x144 = -6LL;
	volatile int64_t t27 = 71356LL;

    t27 = ((x141|(x142|x143))*x144);

    if (t27 != 6LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x145 = UINT32_MAX;
	int16_t x146 = -3;
	int32_t x147 = -1;
	uint32_t x148 = 59568381U;
	volatile uint32_t t28 = 292947U;

    t28 = ((x145|(x146|x147))*x148);

    if (t28 != 4235398915U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x149 = INT16_MAX;
	int8_t x151 = INT8_MAX;
	int8_t x152 = 42;

    t29 = ((x149|(x150|x151))*x152);

    if (t29 != 1376214LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x153 = UINT8_MAX;
	int32_t x154 = INT32_MIN;
	volatile uint64_t x155 = 4910352722408752873LLU;
	uint64_t x156 = 54715LLU;
	volatile uint64_t t30 = 40689545LLU;

    t30 = ((x153|(x154|x155))*x156);

    if (t30 != 18446726674598627141LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x157 = 12;
	volatile int64_t x158 = -725014LL;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -1;
	int64_t t31 = 553577203132115LL;

    t31 = ((x157|(x158|x159))*x160);

    if (t31 != 720897LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x161 = 14U;
	int32_t x162 = INT32_MIN;
	static int16_t x163 = INT16_MAX;
	static int64_t x164 = -1LL;
	int64_t t32 = -26056859LL;

    t32 = ((x161|(x162|x163))*x164);

    if (t32 != 2147450881LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x165 = 0U;
	int32_t x166 = INT32_MAX;
	uint64_t x167 = 1948474140973LLU;
	uint32_t x168 = 1U;
	volatile uint64_t t33 = 5812LLU;

    t33 = ((x165|(x166|x167))*x168);

    if (t33 != 1949915152383LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x177 = INT8_MIN;
	static int64_t x179 = INT64_MAX;

    t34 = ((x177|(x178|x179))*x180);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	int64_t t35 = -452LL;

    t35 = ((x181|(x182|x183))*x184);

    if (t35 != 128LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x185 = INT8_MIN;
	int16_t x186 = -1;
	int16_t x187 = INT16_MAX;
	uint64_t x188 = 8LLU;

    t36 = ((x185|(x186|x187))*x188);

    if (t36 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x189 = UINT16_MAX;
	uint32_t x191 = 108582539U;
	volatile int8_t x192 = -1;
	uint32_t t37 = 399881080U;

    t37 = ((x189|(x190|x191))*x192);

    if (t37 != 4186374145U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x193 = 109LLU;
	volatile int8_t x195 = INT8_MIN;
	static int16_t x196 = INT16_MIN;
	uint64_t t38 = 16740771LLU;

    t38 = ((x193|(x194|x195))*x196);

    if (t38 != 32768LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	static volatile int64_t t39 = 42532537623185621LL;

    t39 = ((x197|(x198|x199))*x200);

    if (t39 != 2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x201 = INT64_MAX;
	uint8_t x202 = 15U;
	static int8_t x203 = INT8_MIN;
	int16_t x204 = INT16_MIN;
	volatile int64_t t40 = 12002281LL;

    t40 = ((x201|(x202|x203))*x204);

    if (t40 != 32768LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x205 = UINT64_MAX;
	static int32_t x206 = INT32_MAX;
	static uint32_t x207 = 31451108U;
	uint64_t x208 = 4805322LLU;

    t41 = ((x205|(x206|x207))*x208);

    if (t41 != 18446744073704746294LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	uint8_t x211 = UINT8_MAX;
	static volatile uint32_t x212 = 3837760U;
	volatile uint32_t t42 = 38U;

    t42 = ((x209|(x210|x211))*x212);

    if (t42 != 4291129536U) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x214 = 8919LL;
	static uint8_t x216 = 2U;

    t43 = ((x213|(x214|x215))*x216);

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x222 = 3960761054LLU;
	int16_t x223 = INT16_MIN;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t44 = 24689LLU;

    t44 = ((x221|(x222|x223))*x224);

    if (t44 != 5409LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x227 = UINT64_MAX;
	uint64_t t45 = 3668LLU;

    t45 = ((x225|(x226|x227))*x228);

    if (t45 != 2147483648LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x229 = -61;
	uint64_t x230 = 137599948198LLU;
	uint32_t x231 = 3U;
	int16_t x232 = -20;
	volatile uint64_t t46 = 7919633869439137706LLU;

    t46 = ((x229|(x230|x231))*x232);

    if (t46 != 500LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x233 = -76761382;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MAX;
	static uint64_t t47 = 49877LLU;

    t47 = ((x233|(x234|x235))*x236);

    if (t47 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x237 = 135283075597670455LLU;
	volatile uint64_t x238 = UINT64_MAX;
	int32_t x239 = INT32_MAX;
	int32_t x240 = 51325076;
	uint64_t t48 = 714967LLU;

    t48 = ((x237|(x238|x239))*x240);

    if (t48 != 18446744073658226540LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 45U;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;
	uint64_t t49 = 5648763427724085LLU;

    t49 = ((x241|(x242|x243))*x244);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x245 = 4U;
	int64_t x246 = 59624855913LL;
	int16_t x247 = -1;
	uint32_t x248 = 85377929U;
	static volatile int64_t t50 = -16087LL;

    t50 = ((x245|(x246|x247))*x248);

    if (t50 != -85377929LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x249 = 1011LL;
	uint8_t x250 = UINT8_MAX;
	volatile int16_t x251 = -12;
	int32_t x252 = INT32_MIN;

    t51 = ((x249|(x250|x251))*x252);

    if (t51 != 2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x253 = 1009;
	static int64_t x254 = -739406477LL;
	volatile uint64_t x256 = UINT64_MAX;

    t52 = ((x253|(x254|x255))*x256);

    if (t52 != 739405837LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x257 = -467984;
	static int64_t x258 = -307464123558221LL;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 2387;
	volatile int64_t t53 = -21LL;

    t53 = ((x257|(x258|x259))*x260);

    if (t53 != -19585335LL) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x261 = -1;
	static int16_t x262 = -52;
	volatile int32_t t54 = 192296;

    t54 = ((x261|(x262|x263))*x264);

    if (t54 != -48) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x273 = -3592756848602LL;
	uint8_t x274 = 29U;
	int32_t x275 = -32;
	volatile int8_t x276 = -1;
	volatile int64_t t55 = -156265915394493LL;

    t55 = ((x273|(x274|x275))*x276);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint64_t x277 = 347990LLU;
	volatile uint64_t t56 = 73796125705565LLU;

    t56 = ((x277|(x278|x279))*x280);

    if (t56 != 70357341241344LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x281 = 3315U;
	volatile int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	uint64_t x284 = UINT64_MAX;

    t57 = ((x281|(x282|x283))*x284);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x286 = 4U;

    t58 = ((x285|(x286|x287))*x288);

    if (t58 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x289 = INT8_MAX;
	volatile int64_t x290 = INT64_MIN;
	uint64_t x291 = 173LLU;
	static uint8_t x292 = UINT8_MAX;
	volatile uint64_t t59 = 2937LLU;

    t59 = ((x289|(x290|x291))*x292);

    if (t59 != 9223372036854840833LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x293 = -1;
	volatile uint32_t x294 = 10U;
	int8_t x295 = -1;
	int16_t x296 = -227;

    t60 = ((x293|(x294|x295))*x296);

    if (t60 != 227U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x297 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	static uint8_t x300 = 2U;
	int32_t t61 = 751022551;

    t61 = ((x297|(x298|x299))*x300);

    if (t61 != -240) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x306 = 6U;
	volatile int8_t x307 = INT8_MIN;
	uint8_t x308 = 21U;
	volatile int32_t t62 = -30460;

    t62 = ((x305|(x306|x307))*x308);

    if (t62 != -21) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x309 = 0U;
	uint16_t x310 = 15289U;
	static int64_t x311 = INT64_MIN;

    t63 = ((x309|(x310|x311))*x312);

    if (t63 != 9223372036854760519LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = INT8_MIN;
	uint16_t x314 = 3U;
	uint64_t x315 = UINT64_MAX;
	static int8_t x316 = INT8_MAX;
	uint64_t t64 = 531370701556377409LLU;

    t64 = ((x313|(x314|x315))*x316);

    if (t64 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x317 = 9257U;
	int32_t x318 = 1;
	uint8_t x319 = 44U;
	uint64_t x320 = UINT64_MAX;
	uint64_t t65 = 5599LLU;

    t65 = ((x317|(x318|x319))*x320);

    if (t65 != 18446744073709542355LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x321 = INT64_MIN;
	volatile int64_t x322 = INT64_MAX;
	int16_t x324 = -189;
	volatile int64_t t66 = -3506322LL;

    t66 = ((x321|(x322|x323))*x324);

    if (t66 != 189LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x325 = 1U;
	int8_t x326 = -1;
	uint32_t x327 = 51U;
	int32_t x328 = INT32_MIN;
	uint32_t t67 = 627385U;

    t67 = ((x325|(x326|x327))*x328);

    if (t67 != 2147483648U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x329 = 91189583U;
	volatile uint16_t x330 = 3U;
	int64_t x331 = INT64_MAX;
	int64_t x332 = -1LL;
	int64_t t68 = 55242136LL;

    t68 = ((x329|(x330|x331))*x332);

    if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x338 = -1;
	volatile int64_t t69 = -19640167964725LL;

    t69 = ((x337|(x338|x339))*x340);

    if (t69 != 6LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x341 = 49369770519839385LLU;
	int32_t x342 = -16807897;
	volatile int8_t x343 = INT8_MAX;
	uint32_t x344 = 9780U;
	uint64_t t70 = 154671422800LLU;

    t70 = ((x341|(x342|x343))*x344);

    if (t70 != 18446743909495674316LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x349 = INT16_MAX;
	int32_t x350 = INT32_MAX;
	int64_t x351 = INT64_MAX;
	int16_t x352 = -1;
	int64_t t71 = -310810654349LL;

    t71 = ((x349|(x350|x351))*x352);

    if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x354 = UINT64_MAX;
	uint8_t x355 = UINT8_MAX;
	static uint8_t x356 = 1U;
	uint64_t t72 = UINT64_MAX;

    t72 = ((x353|(x354|x355))*x356);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x357 = INT64_MIN;
	int64_t x358 = -226716LL;
	int64_t t73 = -31LL;

    t73 = ((x357|(x358|x359))*x360);

    if (t73 != -486868902513252LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x361 = 32544U;
	int16_t x362 = INT16_MIN;
	static int16_t x363 = INT16_MAX;
	static int16_t x364 = INT16_MIN;
	static int32_t t74 = -53242744;

    t74 = ((x361|(x362|x363))*x364);

    if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x365 = -1;
	volatile int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;
	int64_t t75 = 3LL;

    t75 = ((x365|(x366|x367))*x368);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x370 = INT64_MIN;
	volatile int32_t x371 = -1;
	volatile uint64_t x372 = 9LLU;

    t76 = ((x369|(x370|x371))*x372);

    if (t76 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x373 = UINT64_MAX;
	uint32_t x374 = 944332U;
	static int64_t x376 = INT64_MAX;
	uint64_t t77 = 417301LLU;

    t77 = ((x373|(x374|x375))*x376);

    if (t77 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x377 = -3659;
	volatile int8_t x378 = INT8_MAX;
	static uint8_t x379 = 20U;
	int16_t x380 = INT16_MAX;
	int32_t t78 = -5780972;

    t78 = ((x377|(x378|x379))*x380);

    if (t78 != -117469695) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x381 = INT32_MIN;
	uint32_t x382 = 101800U;
	volatile uint32_t t79 = 48135U;

    t79 = ((x381|(x382|x383))*x384);

    if (t79 != 4294427814U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x385 = 696U;
	static int64_t x388 = -1LL;
	int64_t t80 = -42LL;

    t80 = ((x385|(x386|x387))*x388);

    if (t80 != -65535LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x390 = 504941241142435194LL;
	volatile int8_t x391 = INT8_MAX;
	volatile int64_t t81 = 879140786508361LL;

    t81 = ((x389|(x390|x391))*x392);

    if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = INT16_MAX;
	uint16_t x394 = 1U;
	uint64_t x395 = 298LLU;
	uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t82 = 6637LLU;

    t82 = ((x393|(x394|x395))*x396);

    if (t82 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x397 = INT8_MIN;
	int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	static volatile int64_t t83 = 17057696502115875LL;

    t83 = ((x397|(x398|x399))*x400);

    if (t83 != -274877906816LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x401 = INT32_MIN;
	volatile uint32_t x404 = 32U;
	uint32_t t84 = 406384443U;

    t84 = ((x401|(x402|x403))*x404);

    if (t84 != 4294967264U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x405 = INT64_MIN;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 163092071237621735LLU;
	static uint64_t x408 = UINT64_MAX;
	volatile uint64_t t85 = 54910078538LLU;

    t85 = ((x405|(x406|x407))*x408);

    if (t85 != 26649LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x409 = -1;
	volatile int8_t x410 = INT8_MAX;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t86 = -113755;

    t86 = ((x409|(x410|x411))*x412);

    if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x413 = INT16_MIN;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MAX;
	volatile uint64_t t87 = 825015396LLU;

    t87 = ((x413|(x414|x415))*x416);

    if (t87 != 18446744073707384615LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MIN;
	static volatile uint32_t x419 = 3U;
	uint64_t t88 = 9152LLU;

    t88 = ((x417|(x418|x419))*x420);

    if (t88 != 14548316101352096799LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x421 = -1;
	volatile int8_t x422 = INT8_MAX;
	volatile int32_t x423 = 1817440;
	static int8_t x424 = INT8_MIN;
	int32_t t89 = -15;

    t89 = ((x421|(x422|x423))*x424);

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x425 = INT32_MAX;
	volatile int8_t x426 = -1;
	int64_t x427 = INT64_MIN;
	static int32_t x428 = INT32_MAX;
	volatile int64_t t90 = -1930138722982LL;

    t90 = ((x425|(x426|x427))*x428);

    if (t90 != -2147483647LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x434 = INT8_MIN;
	int16_t x436 = -1;
	int64_t t91 = -1776567LL;

    t91 = ((x433|(x434|x435))*x436);

    if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x437 = INT32_MIN;
	int16_t x438 = -1386;
	uint8_t x439 = 1U;
	int16_t x440 = 389;
	int32_t t92 = 248983589;

    t92 = ((x437|(x438|x439))*x440);

    if (t92 != -538765) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint8_t x441 = 14U;
	int8_t x442 = INT8_MIN;
	int32_t x443 = 1;
	volatile int64_t x444 = 10119897623LL;

    t93 = ((x441|(x442|x443))*x444);

    if (t93 != -1143548431399LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x445 = INT64_MIN;
	int16_t x446 = INT16_MIN;
	static volatile int64_t t94 = 69LL;

    t94 = ((x445|(x446|x447))*x448);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x449 = 60;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = UINT32_MAX;
	uint32_t t95 = 33362U;

    t95 = ((x449|(x450|x451))*x452);

    if (t95 != 2147483393U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x453 = INT8_MAX;
	int16_t x454 = -1;
	static uint64_t x456 = UINT64_MAX;
	volatile uint64_t t96 = 262339766969LLU;

    t96 = ((x453|(x454|x455))*x456);

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x457 = INT8_MAX;
	uint32_t x458 = UINT32_MAX;
	static int32_t x460 = INT32_MIN;
	uint32_t t97 = 1547U;

    t97 = ((x457|(x458|x459))*x460);

    if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x461 = -3LL;
	volatile uint64_t x463 = UINT64_MAX;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t98 = 25LLU;

    t98 = ((x461|(x462|x463))*x464);

    if (t98 != 128LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x469 = UINT16_MAX;
	int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MIN;
	uint16_t x472 = UINT16_MAX;
	int32_t t99 = -17;

    t99 = ((x469|(x470|x471))*x472);

    if (t99 != -65535) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x474 = 23U;
	volatile uint16_t x476 = UINT16_MAX;
	static volatile uint64_t t100 = 11410295358287LLU;

    t100 = ((x473|(x474|x475))*x476);

    if (t100 != 16711425LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x477 = 111U;
	volatile int8_t x478 = INT8_MIN;
	static int32_t x479 = -143244793;
	volatile int8_t x480 = INT8_MAX;
	static volatile int32_t t101 = -68707;

    t101 = ((x477|(x478|x479))*x480);

    if (t101 != -2159) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x486 = INT16_MIN;
	uint16_t x487 = 5U;
	uint16_t x488 = UINT16_MAX;
	int64_t t102 = -34LL;

    t102 = ((x485|(x486|x487))*x488);

    if (t102 != -65535LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x493 = 1;
	int8_t x494 = INT8_MIN;
	int16_t x495 = INT16_MIN;
	int32_t x496 = -6187595;
	static volatile int32_t t103 = -9784836;

    t103 = ((x493|(x494|x495))*x496);

    if (t103 != 785824565) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x497 = 30U;
	int8_t x498 = -1;
	static int16_t x500 = INT16_MAX;
	volatile uint64_t t104 = 552897625081770LLU;

    t104 = ((x497|(x498|x499))*x500);

    if (t104 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x502 = 1875124505757LLU;
	int8_t x503 = INT8_MIN;
	int16_t x504 = 35;
	uint64_t t105 = 1315976320LLU;

    t105 = ((x501|(x502|x503))*x504);

    if (t105 != 18446744073709548151LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint8_t x505 = UINT8_MAX;
	static int32_t x507 = INT32_MAX;
	int64_t x508 = -5886354862583LL;
	int64_t t106 = -1877LL;

    t106 = ((x505|(x506|x507))*x508);

    if (t106 != 5886354862583LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x511 = 699593684249LLU;
	volatile uint32_t x512 = 3243U;
	uint64_t t107 = 606013LLU;

    t107 = ((x509|(x510|x511))*x512);

    if (t107 != 18446744073709548373LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x513 = -1;
	int16_t x516 = -32;

    t108 = ((x513|(x514|x515))*x516);

    if (t108 != 32) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x518 = 6U;
	uint8_t x519 = UINT8_MAX;
	volatile int32_t t109 = -17557851;

    t109 = ((x517|(x518|x519))*x520);

    if (t109 != 65025) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x521 = -1LL;
	int16_t x522 = INT16_MIN;
	static int64_t x523 = 1LL;
	int16_t x524 = -1;
	volatile int64_t t110 = -8229489LL;

    t110 = ((x521|(x522|x523))*x524);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x525 = INT16_MAX;
	int8_t x526 = INT8_MIN;
	int64_t x528 = -48LL;

    t111 = ((x525|(x526|x527))*x528);

    if (t111 != 48LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x529 = INT16_MAX;
	int64_t x530 = -1LL;
	int32_t x531 = INT32_MAX;
	static uint16_t x532 = 20U;
	volatile int64_t t112 = -3539560497831861LL;

    t112 = ((x529|(x530|x531))*x532);

    if (t112 != -20LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x533 = INT16_MAX;
	uint8_t x536 = 10U;
	static int32_t t113 = 1341234;

    t113 = ((x533|(x534|x535))*x536);

    if (t113 != -10) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x537 = 16818251U;
	int16_t x538 = INT16_MAX;
	volatile uint32_t x539 = 2819967U;
	int64_t x540 = 31086994659LL;

    t114 = ((x537|(x538|x539))*x540);

    if (t114 != 611195153504672541LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x541 = INT16_MIN;
	int64_t x543 = 235LL;
	uint32_t x544 = UINT32_MAX;
	uint64_t t115 = 4844LLU;

    t115 = ((x541|(x542|x543))*x544);

    if (t115 != 18446646144160258321LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x545 = INT64_MIN;
	static uint64_t x546 = 265725LLU;
	int8_t x548 = -1;
	volatile uint64_t t116 = 1LLU;

    t116 = ((x545|(x546|x547))*x548);

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x549 = UINT64_MAX;
	int64_t x550 = -1LL;
	int64_t x551 = INT64_MIN;
	static int32_t x552 = -1;

    t117 = ((x549|(x550|x551))*x552);

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x553 = 124186952101LL;
	static int16_t x554 = INT16_MIN;
	uint16_t x556 = UINT16_MAX;
	volatile uint64_t t118 = 128111144758632LLU;

    t118 = ((x553|(x554|x555))*x556);

    if (t118 != 18446744073104991241LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x557 = 1034056LL;
	volatile uint64_t x558 = 57453846683155LLU;
	int8_t x559 = INT8_MIN;
	static int32_t x560 = INT32_MIN;
	volatile uint64_t t119 = 427154883170LLU;

    t119 = ((x557|(x558|x559))*x560);

    if (t119 != 79456894976LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	uint64_t x562 = 44249LLU;
	uint16_t x563 = 771U;
	static uint64_t t120 = 55095843127LLU;

    t120 = ((x561|(x562|x563))*x564);

    if (t120 != 2147385345LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x565 = INT32_MIN;
	volatile int16_t x566 = INT16_MIN;
	static int16_t x567 = INT16_MAX;
	static volatile int16_t x568 = INT16_MIN;
	static volatile int32_t t121 = 389270;

    t121 = ((x565|(x566|x567))*x568);

    if (t121 != 32768) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x569 = 7U;
	int32_t x570 = INT32_MIN;
	static uint16_t x571 = 9U;
	static volatile int32_t x572 = -1;
	volatile int32_t t122 = -2826885;

    t122 = ((x569|(x570|x571))*x572);

    if (t122 != 2147483633) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x577 = 220297724LLU;
	volatile uint8_t x578 = 71U;
	int8_t x579 = 49;
	uint16_t x580 = 110U;
	uint64_t t123 = 131601705535722LLU;

    t123 = ((x577|(x578|x579))*x580);

    if (t123 != 24232749970LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x585 = -1LL;
	int64_t x586 = -1325077667827215539LL;
	uint32_t x588 = 5685U;
	int64_t t124 = 91LL;

    t124 = ((x585|(x586|x587))*x588);

    if (t124 != -5685LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x589 = -4LL;
	int32_t x590 = INT32_MAX;
	uint16_t x592 = 144U;
	static int64_t t125 = 780LL;

    t125 = ((x589|(x590|x591))*x592);

    if (t125 != -144LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x593 = INT64_MIN;
	int16_t x594 = INT16_MIN;
	int16_t x596 = -297;
	volatile int64_t t126 = 1528567935009574114LL;

    t126 = ((x593|(x594|x595))*x596);

    if (t126 != 297LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x597 = 62U;
	volatile uint32_t x599 = UINT32_MAX;
	volatile int16_t x600 = INT16_MIN;

    t127 = ((x597|(x598|x599))*x600);

    if (t127 != 32768U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x601 = INT16_MIN;
	int8_t x602 = INT8_MIN;
	volatile uint16_t x604 = UINT16_MAX;
	volatile int32_t t128 = -12371900;

    t128 = ((x601|(x602|x603))*x604);

    if (t128 != -65535) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x605 = INT32_MIN;
	uint64_t x606 = 195243174LLU;
	int8_t x607 = INT8_MIN;
	uint64_t x608 = 3667860499183776617LLU;
	uint64_t t129 = 66754965557018161LLU;

    t129 = ((x605|(x606|x607))*x608);

    if (t129 != 1933948400232033558LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x609 = INT16_MAX;
	volatile uint8_t x610 = 21U;
	static uint32_t x611 = UINT32_MAX;
	volatile uint64_t x612 = UINT64_MAX;
	uint64_t t130 = 9460614412LLU;

    t130 = ((x609|(x610|x611))*x612);

    if (t130 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MAX;
	volatile int32_t t131 = 1;

    t131 = ((x613|(x614|x615))*x616);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x618 = INT16_MAX;
	static int32_t x619 = INT32_MIN;
	int64_t x620 = INT64_MAX;

    t132 = ((x617|(x618|x619))*x620);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x622 = INT32_MIN;
	int16_t x623 = INT16_MIN;
	volatile uint64_t t133 = 91031LLU;

    t133 = ((x621|(x622|x623))*x624);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x625 = UINT8_MAX;
	uint64_t x626 = UINT64_MAX;
	uint8_t x627 = 116U;
	uint8_t x628 = 6U;
	uint64_t t134 = 380034891818822600LLU;

    t134 = ((x625|(x626|x627))*x628);

    if (t134 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x633 = -1;
	static volatile int32_t x634 = 161050;
	volatile int32_t x635 = INT32_MIN;
	static int8_t x636 = INT8_MAX;
	volatile int32_t t135 = -241;

    t135 = ((x633|(x634|x635))*x636);

    if (t135 != -127) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x642 = 23151621305LL;
	static int8_t x643 = -19;
	int64_t x644 = -369083195098LL;
	static volatile int64_t t136 = 1684482879325330LL;

    t136 = ((x641|(x642|x643))*x644);

    if (t136 != 1107249585294LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x645 = INT16_MIN;
	volatile int16_t x648 = INT16_MIN;

    t137 = ((x645|(x646|x647))*x648);

    if (t137 != 32768) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x649 = UINT16_MAX;
	volatile uint64_t x650 = 1347871876LLU;
	int16_t x651 = -1;
	volatile uint64_t t138 = 191LLU;

    t138 = ((x649|(x650|x651))*x652);

    if (t138 != 32768LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = -1;
	uint64_t x656 = UINT64_MAX;
	static volatile uint64_t t139 = 2635627052541319LLU;

    t139 = ((x653|(x654|x655))*x656);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x657 = -1LL;
	static int64_t x660 = -1LL;
	int64_t t140 = -1006LL;

    t140 = ((x657|(x658|x659))*x660);

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint8_t x661 = UINT8_MAX;
	int16_t x663 = INT16_MIN;
	static int64_t x664 = -1LL;
	static volatile int64_t t141 = -53LL;

    t141 = ((x661|(x662|x663))*x664);

    if (t141 != 32513LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x665 = -1;
	static uint64_t x666 = 4249LLU;
	int8_t x667 = -1;
	volatile uint64_t t142 = 33307490263LLU;

    t142 = ((x665|(x666|x667))*x668);

    if (t142 != 13519LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x673 = UINT32_MAX;
	uint8_t x674 = 35U;
	int32_t x676 = -148432;
	volatile uint64_t t143 = 1LLU;

    t143 = ((x673|(x674|x675))*x676);

    if (t143 != 18446106563124020176LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x677 = INT32_MIN;
	static volatile int8_t x678 = INT8_MIN;
	int8_t x679 = -1;
	int8_t x680 = 0;
	int32_t t144 = -1;

    t144 = ((x677|(x678|x679))*x680);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int64_t x683 = INT64_MIN;
	static volatile int32_t x684 = 1;
	uint64_t t145 = UINT64_MAX;

    t145 = ((x681|(x682|x683))*x684);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x685 = INT16_MIN;
	int64_t x687 = -1LL;

    t146 = ((x685|(x686|x687))*x688);

    if (t146 != -32767LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x689 = 2956601696LL;
	static int64_t x690 = 12667438516373310LL;
	int16_t x691 = 2;
	static int64_t x692 = -1LL;
	int64_t t147 = 11670LL;

    t147 = ((x689|(x690|x691))*x692);

    if (t147 != -12667439053254526LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x694 = INT8_MIN;
	volatile int8_t x695 = -1;
	int16_t x696 = INT16_MAX;
	int32_t t148 = -61;

    t148 = ((x693|(x694|x695))*x696);

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x698 = 178;
	int32_t t149 = 0;

    t149 = ((x697|(x698|x699))*x700);

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x701 = -332;
	int16_t x702 = INT16_MAX;
	int8_t x703 = INT8_MIN;
	int32_t x704 = INT32_MAX;
	static int32_t t150 = 1322;

    t150 = ((x701|(x702|x703))*x704);

    if (t150 != -2147483647) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x707 = INT32_MIN;
	static uint16_t x708 = 126U;
	static uint64_t t151 = 20629572013282LLU;

    t151 = ((x705|(x706|x707))*x708);

    if (t151 != 18446743968394763842LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x709 = INT16_MIN;
	int16_t x710 = 0;
	int8_t x712 = -18;

    t152 = ((x709|(x710|x711))*x712);

    if (t152 != 589806) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x713 = -140289LL;
	volatile uint16_t x714 = UINT16_MAX;
	static volatile uint32_t x715 = 2U;
	static volatile uint32_t x716 = UINT32_MAX;

    t153 = ((x713|(x714|x715))*x716);

    if (t153 != -562954248257535LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x717 = INT64_MIN;
	uint64_t x718 = 2199721816538483673LLU;
	static uint16_t x719 = 3873U;
	int8_t x720 = -1;
	uint64_t t154 = 4205509166472453LLU;

    t154 = ((x717|(x718|x719))*x720);

    if (t154 != 7023650220316291079LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x721 = 31581106U;
	int32_t x722 = INT32_MAX;
	static int64_t x723 = INT64_MIN;
	int8_t x724 = -1;
	volatile int64_t t155 = 31013427857LL;

    t155 = ((x721|(x722|x723))*x724);

    if (t155 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x726 = INT64_MIN;
	uint16_t x728 = 247U;
	volatile int64_t t156 = -69090833LL;

    t156 = ((x725|(x726|x727))*x728);

    if (t156 != -247LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x729 = 458LLU;
	int64_t x730 = INT64_MIN;
	int8_t x732 = -1;

    t157 = ((x729|(x730|x731))*x732);

    if (t157 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x733 = INT64_MIN;
	static volatile int64_t x736 = 0LL;

    t158 = ((x733|(x734|x735))*x736);

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x737 = INT32_MAX;
	static int16_t x739 = -1;
	volatile int32_t t159 = -93094;

    t159 = ((x737|(x738|x739))*x740);

    if (t159 != 32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x741 = -1;
	uint32_t x744 = 755155U;
	uint64_t t160 = 26489637101708048LLU;

    t160 = ((x741|(x742|x743))*x744);

    if (t160 != 18446744073708796461LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x745 = INT8_MIN;
	uint16_t x746 = 1U;
	uint16_t x747 = 7U;
	uint32_t x748 = UINT32_MAX;

    t161 = ((x745|(x746|x747))*x748);

    if (t161 != 121U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x749 = 508U;
	int16_t x750 = -12;
	static volatile uint8_t x751 = 0U;
	volatile uint32_t t162 = 315686198U;

    t162 = ((x749|(x750|x751))*x752);

    if (t162 != 4294967280U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x753 = -65113LL;
	int16_t x754 = INT16_MAX;
	int8_t x756 = INT8_MAX;
	static int64_t t163 = 1726998053441481901LL;

    t163 = ((x753|(x754|x755))*x756);

    if (t163 != -127LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x762 = 438130LLU;
	static int32_t x763 = 10;
	volatile uint8_t x764 = UINT8_MAX;
	static volatile uint64_t t164 = 16643264778LLU;

    t164 = ((x761|(x762|x763))*x764);

    if (t164 != 18446743526212946566LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x765 = 2U;
	volatile int16_t x766 = INT16_MAX;
	int32_t t165 = 2383;

    t165 = ((x765|(x766|x767))*x768);

    if (t165 != 108) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x774 = INT64_MAX;
	uint64_t x775 = 1147524218541701596LLU;
	volatile int16_t x776 = -1;
	uint64_t t166 = 1031644039LLU;

    t166 = ((x773|(x774|x775))*x776);

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x777 = 1280209783LLU;
	int8_t x778 = 0;
	int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	uint64_t t167 = 16754467825652LLU;

    t167 = ((x777|(x778|x779))*x780);

    if (t167 != 1152LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x781 = INT64_MAX;
	int32_t x783 = INT32_MIN;
	int16_t x784 = -5;
	int64_t t168 = 219743783LL;

    t168 = ((x781|(x782|x783))*x784);

    if (t168 != 5LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x785 = 351332872;
	int16_t x786 = -17;
	int8_t x787 = 0;
	static int32_t x788 = -1;
	volatile int32_t t169 = 60;

    t169 = ((x785|(x786|x787))*x788);

    if (t169 != 17) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x790 = -1;
	int16_t x791 = INT16_MAX;
	int16_t x792 = 1;
	int32_t t170 = 4623086;

    t170 = ((x789|(x790|x791))*x792);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x794 = INT32_MIN;
	uint64_t x795 = 421598621033015703LLU;
	volatile int8_t x796 = 5;
	uint64_t t171 = 772147883722179LLU;

    t171 = ((x793|(x794|x795))*x796);

    if (t171 != 18446744069386691891LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x797 = 1;
	uint32_t x798 = UINT32_MAX;
	uint8_t x799 = UINT8_MAX;
	int16_t x800 = -1;
	volatile uint32_t t172 = 1781618U;

    t172 = ((x797|(x798|x799))*x800);

    if (t172 != 1U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x801 = 0;
	int16_t x802 = -9;
	static volatile uint8_t x803 = UINT8_MAX;
	volatile uint64_t x804 = UINT64_MAX;

    t173 = ((x801|(x802|x803))*x804);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint64_t x809 = UINT64_MAX;
	volatile int64_t x810 = 1117LL;
	int64_t x811 = INT64_MAX;
	int32_t x812 = 77442305;
	volatile uint64_t t174 = 179849936355756LLU;

    t174 = ((x809|(x810|x811))*x812);

    if (t174 != 18446744073632109311LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x817 = UINT8_MAX;
	volatile int8_t x819 = INT8_MAX;
	static uint32_t x820 = UINT32_MAX;
	static volatile uint32_t t175 = 262676047U;

    t175 = ((x817|(x818|x819))*x820);

    if (t175 != 4271086849U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x821 = 10U;
	uint16_t x822 = 212U;
	int8_t x824 = INT8_MIN;

    t176 = ((x821|(x822|x823))*x824);

    if (t176 != 128LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x825 = 6930LL;
	volatile int16_t x826 = INT16_MIN;
	uint32_t x827 = UINT32_MAX;
	static volatile int8_t x828 = INT8_MIN;

    t177 = ((x825|(x826|x827))*x828);

    if (t177 != -549755813760LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x830 = UINT64_MAX;
	volatile uint16_t x831 = UINT16_MAX;
	static int64_t x832 = INT64_MIN;
	volatile uint64_t t178 = 4256817287137210580LLU;

    t178 = ((x829|(x830|x831))*x832);

    if (t178 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x834 = INT64_MIN;
	volatile uint32_t x835 = 5U;
	static int64_t x836 = -1LL;
	volatile int64_t t179 = -109067227944605LL;

    t179 = ((x833|(x834|x835))*x836);

    if (t179 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x838 = 16U;
	static int16_t x840 = INT16_MIN;
	int32_t t180 = 1123;

    t180 = ((x837|(x838|x839))*x840);

    if (t180 != 1073217536) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x845 = -1;
	int16_t x846 = 196;
	volatile int16_t x847 = 15388;
	uint32_t x848 = 129603U;
	uint32_t t181 = 130765U;

    t181 = ((x845|(x846|x847))*x848);

    if (t181 != 4294837693U) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x849 = UINT32_MAX;
	uint32_t x851 = UINT32_MAX;
	int16_t x852 = INT16_MAX;
	uint32_t t182 = 586241117U;

    t182 = ((x849|(x850|x851))*x852);

    if (t182 != 4294934529U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x854 = 0;
	int16_t x855 = INT16_MIN;
	uint32_t x856 = UINT32_MAX;
	volatile int64_t t183 = 80938426237860LL;

    t183 = ((x853|(x854|x855))*x856);

    if (t183 != -6640019438070LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x857 = -1;
	uint32_t x858 = 1186707651U;
	static int32_t x859 = -13134;

    t184 = ((x857|(x858|x859))*x860);

    if (t184 != 2147483649U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x862 = 3U;
	static volatile uint64_t x863 = 12522LLU;
	static uint64_t t185 = 229175108963184LLU;

    t185 = ((x861|(x862|x863))*x864);

    if (t185 != 18446744073709542607LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x865 = 20U;
	static volatile uint8_t x867 = UINT8_MAX;
	volatile uint32_t t186 = 4U;

    t186 = ((x865|(x866|x867))*x868);

    if (t186 != 1074769799U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x870 = -1;
	volatile uint64_t x872 = 533214LLU;
	uint64_t t187 = 16920549765313LLU;

    t187 = ((x869|(x870|x871))*x872);

    if (t187 != 18446744073709018402LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x873 = 751294086956LLU;
	int16_t x874 = -1;
	int32_t x876 = INT32_MIN;
	volatile uint64_t t188 = 123736926500LLU;

    t188 = ((x873|(x874|x875))*x876);

    if (t188 != 2147483648LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x878 = 1U;
	static volatile uint16_t x879 = 0U;
	int16_t x880 = -1;
	volatile int32_t t189 = -11110238;

    t189 = ((x877|(x878|x879))*x880);

    if (t189 != 3257) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x881 = UINT16_MAX;
	volatile int64_t x882 = INT64_MIN;
	static int16_t x883 = -1;
	uint8_t x884 = 4U;
	static volatile int64_t t190 = -1170LL;

    t190 = ((x881|(x882|x883))*x884);

    if (t190 != -4LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x885 = INT16_MAX;
	static uint16_t x886 = 285U;
	int8_t x887 = INT8_MIN;
	volatile uint16_t x888 = UINT16_MAX;

    t191 = ((x885|(x886|x887))*x888);

    if (t191 != -65535) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x889 = 12023U;
	int64_t x891 = -1025491364LL;
	volatile int64_t t192 = 3922997551LL;

    t192 = ((x889|(x890|x891))*x892);

    if (t192 != -430699315620LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x893 = INT32_MIN;
	volatile int16_t x894 = INT16_MIN;
	uint64_t x895 = 471006093736513101LLU;
	int16_t x896 = -1404;
	static volatile uint64_t t193 = 2LLU;

    t193 = ((x893|(x894|x895))*x896);

    if (t193 != 40866228LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x897 = -3;
	uint64_t x898 = 14121LLU;
	uint32_t x899 = UINT32_MAX;
	volatile uint64_t t194 = 381LLU;

    t194 = ((x897|(x898|x899))*x900);

    if (t194 != 18446744072109493803LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x901 = UINT16_MAX;
	int32_t x902 = INT32_MAX;
	int32_t x903 = 1666;
	uint32_t x904 = 102862073U;
	volatile uint32_t t195 = 8048269U;

    t195 = ((x901|(x902|x903))*x904);

    if (t195 != 2044621575U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x905 = -986;
	int16_t x906 = 6721;
	volatile uint8_t x907 = 23U;
	int16_t x908 = -1;

    t196 = ((x905|(x906|x907))*x908);

    if (t196 != 393) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x909 = UINT8_MAX;
	uint8_t x910 = 5U;
	int8_t x911 = 1;
	volatile int16_t x912 = -2463;
	volatile int32_t t197 = 464;

    t197 = ((x909|(x910|x911))*x912);

    if (t197 != -628065) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x917 = -1;
	volatile int32_t x918 = INT32_MIN;
	int64_t x919 = INT64_MAX;
	uint32_t x920 = 10527U;
	int64_t t198 = 4046235087LL;

    t198 = ((x917|(x918|x919))*x920);

    if (t198 != -10527LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint32_t x921 = UINT32_MAX;
	volatile uint32_t x922 = UINT32_MAX;
	static int8_t x923 = INT8_MIN;
	static volatile uint64_t t199 = 41744132LLU;

    t199 = ((x921|(x922|x923))*x924);

    if (t199 != 571230650235LLU) { NG(); } else { ; }
	
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

