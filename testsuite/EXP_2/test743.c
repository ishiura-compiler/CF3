
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

int16_t x5 = -52;
int16_t x7 = 7;
static int16_t x15 = INT16_MIN;
static uint32_t x21 = 7923U;
static volatile int32_t t5 = 223388016;
volatile int8_t x38 = -1;
volatile int64_t t7 = 181010556LL;
uint64_t x44 = 51769LLU;
int16_t x45 = 2;
static int32_t x48 = -1;
int32_t x51 = 103688302;
static volatile uint64_t x61 = UINT64_MAX;
uint8_t x63 = UINT8_MAX;
int16_t x71 = INT16_MAX;
volatile uint32_t x78 = UINT32_MAX;
volatile uint64_t x101 = 3445427596LLU;
uint32_t x104 = 1324U;
int64_t x106 = INT64_MAX;
uint32_t x113 = UINT32_MAX;
static uint32_t t25 = 17U;
volatile int16_t x118 = INT16_MIN;
uint16_t x128 = UINT16_MAX;
int64_t x131 = INT64_MIN;
uint64_t x135 = 3793LLU;
int16_t x141 = INT16_MIN;
static int8_t x142 = INT8_MIN;
volatile uint16_t x144 = UINT16_MAX;
uint32_t x145 = 71U;
uint32_t t33 = 327203U;
uint16_t x153 = UINT16_MAX;
static volatile int32_t t36 = -232602628;
int8_t x162 = INT8_MIN;
static int16_t x165 = INT16_MAX;
int64_t t40 = -6683508LL;
int8_t x186 = -1;
volatile int64_t t43 = -1918953981306609LL;
int8_t x195 = -1;
static uint32_t x203 = 7U;
volatile uint32_t t46 = 7U;
volatile int32_t x215 = -1;
int8_t x225 = INT8_MIN;
int64_t t52 = -10277804488465LL;
int32_t x229 = -1;
int16_t x232 = INT16_MAX;
static volatile uint64_t t55 = 3559LLU;
uint8_t x244 = UINT8_MAX;
int16_t x249 = 0;
static volatile int32_t x251 = INT32_MIN;
int64_t x257 = INT64_MAX;
int64_t x261 = INT64_MAX;
static int8_t x262 = INT8_MIN;
int32_t x264 = 6862576;
volatile int64_t t60 = 5003113168290LL;
int8_t x265 = -1;
uint64_t t61 = 1423LLU;
static int16_t x270 = INT16_MIN;
static uint16_t x277 = 1645U;
uint32_t x283 = UINT32_MAX;
uint64_t x285 = 6075444165973449678LLU;
int64_t x288 = INT64_MIN;
static uint64_t x289 = UINT64_MAX;
int64_t x290 = INT64_MAX;
int32_t x293 = 28242479;
static uint16_t x294 = UINT16_MAX;
int16_t x298 = -1;
uint64_t t69 = 306534LLU;
static int64_t x303 = -117810LL;
int64_t t70 = 35694377520103391LL;
uint16_t x308 = 32717U;
volatile int32_t t71 = 123;
volatile int64_t t72 = 24343386602514383LL;
volatile uint8_t x319 = 6U;
int8_t x321 = INT8_MIN;
volatile uint32_t x323 = UINT32_MAX;
volatile uint32_t x324 = 240341958U;
uint32_t t75 = 82657U;
int32_t x330 = INT32_MIN;
uint8_t x335 = 108U;
static int8_t x351 = INT8_MIN;
uint64_t x352 = UINT64_MAX;
uint8_t x355 = UINT8_MAX;
static int8_t x357 = INT8_MIN;
int16_t x362 = 12;
int8_t x364 = INT8_MIN;
uint16_t x373 = UINT16_MAX;
static int64_t x374 = 797295134122LL;
uint64_t x375 = 7555656774516941LLU;
int16_t x378 = -3;
static uint8_t x379 = 2U;
int32_t x396 = -1;
uint64_t x404 = 283131332148487567LLU;
volatile uint64_t t93 = 136246357912LLU;
static uint8_t x406 = 0U;
int16_t x407 = -4650;
int32_t x408 = 28526399;
uint32_t x410 = 0U;
uint16_t x411 = 133U;
int8_t x420 = INT8_MAX;
uint8_t x436 = 68U;
uint8_t x456 = UINT8_MAX;
volatile uint64_t t101 = 1470034320588241LLU;
volatile uint64_t t107 = UINT64_MAX;
static uint16_t x485 = 3U;
static volatile int64_t x487 = INT64_MIN;
int32_t x488 = -28283;
int16_t x491 = INT16_MIN;
uint32_t t109 = UINT32_MAX;
uint16_t x496 = UINT16_MAX;
int64_t x498 = INT64_MIN;
int8_t x500 = INT8_MAX;
uint16_t x504 = UINT16_MAX;
static volatile uint64_t t112 = 3LLU;
int16_t x508 = INT16_MIN;
int64_t x512 = INT64_MAX;
volatile int64_t t114 = INT64_MAX;
static int16_t x517 = INT16_MAX;
int8_t x519 = INT8_MIN;
static uint64_t t116 = 13187LLU;
volatile uint32_t x521 = UINT32_MAX;
int16_t x522 = INT16_MIN;
int32_t x527 = INT32_MIN;
int32_t x528 = -1;
int64_t x533 = -1LL;
uint8_t x538 = UINT8_MAX;
uint64_t x547 = 63458787LLU;
uint64_t t123 = 22194647LLU;
int32_t x553 = INT32_MAX;
uint32_t x563 = 131071113U;
int32_t x573 = -1;
uint32_t x578 = 31U;
volatile int32_t x587 = INT32_MIN;
uint64_t t131 = 116403LLU;
static int16_t x596 = -154;
static int16_t x598 = INT16_MIN;
int32_t t134 = 17703187;
int8_t x614 = -1;
static uint8_t x620 = 9U;
volatile uint32_t t139 = 298U;
int16_t x624 = 1;
static int16_t x625 = INT16_MAX;
static volatile uint32_t x634 = UINT32_MAX;
int64_t x635 = INT64_MIN;
int32_t x636 = INT32_MAX;
volatile int64_t t143 = 1493396547914LL;
int16_t x642 = -21;
int16_t x645 = INT16_MAX;
static int8_t x646 = INT8_MIN;
volatile int16_t x651 = -1;
static uint64_t x653 = 53099LLU;
int8_t x656 = 61;
volatile uint64_t t148 = 56LLU;
int64_t x661 = INT64_MIN;
volatile int64_t x666 = -2104450364209LL;
static int8_t x668 = -3;
int32_t x671 = -1;
static volatile int32_t t153 = INT32_MIN;
volatile int32_t x683 = -1159;
int16_t x688 = INT16_MIN;
uint32_t t156 = 5033810U;
uint64_t t157 = UINT64_MAX;
static int32_t x696 = INT32_MAX;
static int16_t x698 = 15;
uint64_t x699 = 31394992695LLU;
volatile uint64_t t159 = 4294420609746743LLU;
static int16_t x701 = -10907;
static uint32_t x703 = UINT32_MAX;
static uint64_t t160 = 18LLU;
uint16_t x707 = 99U;
uint16_t x712 = 1U;
volatile uint64_t t163 = 3233884276116383541LLU;
uint32_t x717 = 87110399U;
static volatile uint64_t t164 = 48046526310192LLU;
volatile int16_t x722 = 3;
int8_t x749 = INT8_MIN;
volatile int64_t t172 = -14314436615613654LL;
int32_t x759 = -1;
int64_t x760 = -1581265682078770LL;
static int64_t t174 = 138896LL;
volatile int64_t t175 = INT64_MIN;
int32_t x782 = 147;
static volatile uint32_t x791 = 769267732U;
uint64_t x793 = 577489LLU;
int32_t x799 = -639;
int16_t x812 = -1;
int64_t x815 = INT64_MIN;
uint64_t x816 = UINT64_MAX;
uint32_t x827 = UINT32_MAX;
volatile uint32_t t189 = 3U;
int16_t x833 = -12050;
int64_t x839 = -131985265137LL;
volatile int32_t x840 = INT32_MIN;
static int64_t t192 = 103620567124758LL;
volatile uint8_t x842 = UINT8_MAX;
static volatile int32_t t194 = -24;
int8_t x851 = INT8_MAX;
int64_t x856 = -3LL;
int16_t x860 = -1;
int64_t x861 = 2381050LL;
int32_t x864 = INT32_MAX;
volatile int64_t t199 = INT64_MIN;


void f0(void) {
    	static volatile uint32_t x6 = 5U;
	int8_t x8 = INT8_MIN;
	uint32_t t0 = 64752U;

    t0 = ((x5&(x6/x7))+x8);

    if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 12481U;
	volatile uint16_t x10 = 1185U;
	static int32_t x11 = INT32_MIN;
	uint8_t x12 = 4U;
	uint32_t t1 = 14113944U;

    t1 = ((x9&(x10/x11))+x12);

    if (t1 != 4U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = UINT16_MAX;
	volatile int64_t x14 = INT64_MIN;
	int64_t x16 = INT64_MAX;
	int64_t t2 = INT64_MAX;

    t2 = ((x13&(x14/x15))+x16);

    if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = 7U;
	volatile int8_t x18 = INT8_MAX;
	volatile uint64_t x19 = 3892088418589588651LLU;
	int16_t x20 = -114;
	uint64_t t3 = 825LLU;

    t3 = ((x17&(x18/x19))+x20);

    if (t3 != 18446744073709551502LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	static uint16_t x24 = 508U;
	static uint32_t t4 = 0U;

    t4 = ((x21&(x22/x23))+x24);

    if (t4 != 509U) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x25 = -3;
	int32_t x26 = INT32_MIN;
	uint16_t x27 = 3U;
	uint16_t x28 = UINT16_MAX;

    t5 = ((x25&(x26/x27))+x28);

    if (t5 != -715762349) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 9807198U;
	static int8_t x30 = INT8_MIN;
	uint64_t x31 = 499LLU;
	int8_t x32 = INT8_MIN;
	volatile uint64_t t6 = 652LLU;

    t6 = ((x29&(x30/x31))+x32);

    if (t6 != 8422618LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x37 = -509LL;
	int64_t x39 = -1LL;
	int16_t x40 = -1;

    t7 = ((x37&(x38/x39))+x40);

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = 216U;
	int32_t x42 = INT32_MAX;
	int8_t x43 = -22;
	volatile uint64_t t8 = 171LLU;

    t8 = ((x41&(x42/x43))+x44);

    if (t8 != 51897LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x46 = INT16_MIN;
	volatile int32_t x47 = INT32_MIN;
	volatile int32_t t9 = 509;

    t9 = ((x45&(x46/x47))+x48);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x49 = INT64_MAX;
	static int32_t x50 = INT32_MIN;
	volatile int64_t x52 = -33126489623616LL;
	static volatile int64_t t10 = 57559228251453LL;

    t10 = ((x49&(x50/x51))+x52);

    if (t10 != 9223338910365152172LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint8_t x53 = 5U;
	volatile uint8_t x54 = UINT8_MAX;
	static uint64_t x55 = 97177451370397008LLU;
	uint8_t x56 = 3U;
	volatile uint64_t t11 = 14LLU;

    t11 = ((x53&(x54/x55))+x56);

    if (t11 != 3LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	volatile uint32_t x59 = 183648U;
	int16_t x60 = -1;
	volatile int64_t t12 = -9851935221867417LL;

    t12 = ((x57&(x58/x59))+x60);

    if (t12 != -50223100919809LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x62 = UINT8_MAX;
	int64_t x64 = INT64_MIN;
	uint64_t t13 = 7446672474142LLU;

    t13 = ((x61&(x62/x63))+x64);

    if (t13 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x65 = 2LLU;
	int16_t x66 = INT16_MAX;
	uint8_t x67 = UINT8_MAX;
	static uint16_t x68 = UINT16_MAX;
	uint64_t t14 = 26083LLU;

    t14 = ((x65&(x66/x67))+x68);

    if (t14 != 65535LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = INT16_MIN;
	uint8_t x70 = 48U;
	int16_t x72 = INT16_MAX;
	int32_t t15 = -43767;

    t15 = ((x69&(x70/x71))+x72);

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x77 = -1;
	static volatile uint16_t x79 = 13253U;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t16 = 30400619U;

    t16 = ((x77&(x78/x79))+x80);

    if (t16 != 2147807723U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x81 = -974479;
	uint16_t x82 = 4115U;
	static int16_t x83 = -6826;
	uint64_t x84 = 5924885220013LLU;
	static uint64_t t17 = 55117LLU;

    t17 = ((x81&(x82/x83))+x84);

    if (t17 != 5924885220013LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x85 = 1LLU;
	volatile int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = 1;
	uint64_t t18 = 54808248722114LLU;

    t18 = ((x85&(x86/x87))+x88);

    if (t18 != 2LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x89 = 3719U;
	int16_t x90 = INT16_MAX;
	uint8_t x91 = 8U;
	uint32_t x92 = 1958545U;
	volatile uint32_t t19 = 1004818U;

    t19 = ((x89&(x90/x91))+x92);

    if (t19 != 1962264U) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x93 = UINT8_MAX;
	int8_t x94 = -1;
	int8_t x95 = -5;
	int8_t x96 = 1;
	static int32_t t20 = -12255;

    t20 = ((x93&(x94/x95))+x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x97 = 660359812111866LLU;
	volatile uint16_t x98 = 10U;
	static uint32_t x99 = 1815644955U;
	uint8_t x100 = UINT8_MAX;
	uint64_t t21 = 3LLU;

    t21 = ((x97&(x98/x99))+x100);

    if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint64_t x102 = UINT64_MAX;
	int64_t x103 = INT64_MAX;
	uint64_t t22 = 23956LLU;

    t22 = ((x101&(x102/x103))+x104);

    if (t22 != 1324LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint32_t x105 = UINT32_MAX;
	static int8_t x107 = INT8_MAX;
	static int8_t x108 = 0;
	static int64_t t23 = -8153915729LL;

    t23 = ((x105&(x106/x107))+x108);

    if (t23 != 270549121LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = 1;
	static uint16_t x110 = 241U;
	volatile uint32_t x111 = 1240870U;
	volatile int8_t x112 = -1;
	uint32_t t24 = UINT32_MAX;

    t24 = ((x109&(x110/x111))+x112);

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x114 = INT8_MIN;
	volatile uint32_t x115 = 16818U;
	int32_t x116 = -1;

    t25 = ((x113&(x114/x115))+x116);

    if (t25 != 255378U) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = INT32_MIN;
	volatile int32_t x119 = -1;
	int32_t x120 = -1;
	volatile int32_t t26 = 479372780;

    t26 = ((x117&(x118/x119))+x120);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x121 = -3;
	uint32_t x122 = 1128380719U;
	int32_t x123 = INT32_MIN;
	uint32_t x124 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

    t27 = ((x121&(x122/x123))+x124);

    if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = 51461184;
	uint8_t x127 = UINT8_MAX;
	int32_t t28 = -239496;

    t28 = ((x125&(x126/x127))+x128);

    if (t28 != 262143) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = 1897;
	uint8_t x130 = 124U;
	uint16_t x132 = 523U;
	volatile int64_t t29 = -1701LL;

    t29 = ((x129&(x130/x131))+x132);

    if (t29 != 523LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x133 = INT64_MIN;
	uint64_t x134 = 18212584683LLU;
	int8_t x136 = -22;
	volatile uint64_t t30 = 966960215737LLU;

    t30 = ((x133&(x134/x135))+x136);

    if (t30 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = -42;
	uint16_t x138 = 15820U;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	int64_t t31 = INT64_MIN;

    t31 = ((x137&(x138/x139))+x140);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x143 = INT16_MIN;
	int32_t t32 = -106275;

    t32 = ((x141&(x142/x143))+x144);

    if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x146 = INT8_MAX;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = 21854U;

    t33 = ((x145&(x146/x147))+x148);

    if (t33 != 21854U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = 245;
	static uint32_t x150 = 45U;
	static int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	static uint32_t t34 = UINT32_MAX;

    t34 = ((x149&(x150/x151))+x152);

    if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x154 = 142825985;
	int64_t x155 = 120808480986716147LL;
	int16_t x156 = INT16_MIN;
	int64_t t35 = 1LL;

    t35 = ((x153&(x154/x155))+x156);

    if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = -3;
	uint8_t x159 = 1U;
	int16_t x160 = INT16_MAX;

    t36 = ((x157&(x158/x159))+x160);

    if (t36 != 32639) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x161 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	static volatile uint16_t x164 = UINT16_MAX;
	int32_t t37 = 4383;

    t37 = ((x161&(x162/x163))+x164);

    if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x166 = 454;
	volatile int64_t x167 = -178064060912264LL;
	int8_t x168 = INT8_MIN;
	volatile int64_t t38 = 0LL;

    t38 = ((x165&(x166/x167))+x168);

    if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x169 = -9915704;
	int32_t x170 = INT32_MIN;
	int8_t x171 = -2;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t39 = 403178400801LLU;

    t39 = ((x169&(x170/x171))+x172);

    if (t39 != 1073741823LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = -12360;
	volatile int16_t x174 = INT16_MIN;
	volatile int64_t x175 = -1LL;
	volatile int8_t x176 = -3;

    t40 = ((x173&(x174/x175))+x176);

    if (t40 != 32765LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = -1LL;
	int32_t x178 = 6;
	static int64_t x179 = -1LL;
	int8_t x180 = INT8_MAX;
	volatile int64_t t41 = 5644691LL;

    t41 = ((x177&(x178/x179))+x180);

    if (t41 != 121LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MIN;
	int8_t x182 = -1;
	volatile uint32_t x183 = 26884U;
	uint64_t x184 = 1424221552217080LLU;
	uint64_t t42 = 191758442316705LLU;

    t42 = ((x181&(x182/x183))+x184);

    if (t42 != 1424221552348152LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = 3775U;
	uint16_t x187 = 1U;
	volatile int64_t x188 = INT64_MIN;

    t43 = ((x185&(x186/x187))+x188);

    if (t43 != -9223372036854772033LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x193 = 7467U;
	static int16_t x194 = INT16_MAX;
	uint16_t x196 = 67U;
	uint32_t t44 = 362U;

    t44 = ((x193&(x194/x195))+x196);

    if (t44 != 68U) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x197 = 190821;
	int16_t x198 = INT16_MAX;
	int8_t x199 = -1;
	volatile int16_t x200 = INT16_MIN;
	int32_t t45 = 4353;

    t45 = ((x197&(x198/x199))+x200);

    if (t45 != 131073) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = 6;
	static int16_t x202 = INT16_MIN;
	volatile int8_t x204 = INT8_MAX;

    t46 = ((x201&(x202/x203))+x204);

    if (t46 != 129U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x205 = -183;
	uint32_t x206 = UINT32_MAX;
	int16_t x207 = -1;
	volatile int64_t x208 = INT64_MIN;
	volatile int64_t t47 = 26141LL;

    t47 = ((x205&(x206/x207))+x208);

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x209 = 5523U;
	static int32_t x210 = INT32_MIN;
	int8_t x211 = -2;
	static volatile int16_t x212 = -1;
	volatile int32_t t48 = 25362577;

    t48 = ((x209&(x210/x211))+x212);

    if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x213 = INT64_MIN;
	static int8_t x214 = -39;
	int64_t x216 = -706734984317160547LL;
	volatile int64_t t49 = -2007735740212006853LL;

    t49 = ((x213&(x214/x215))+x216);

    if (t49 != -706734984317160547LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x217 = 0;
	int16_t x218 = INT16_MAX;
	int64_t x219 = 33628246673LL;
	uint8_t x220 = UINT8_MAX;
	int64_t t50 = -8LL;

    t50 = ((x217&(x218/x219))+x220);

    if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x221 = 48603179;
	uint8_t x222 = 27U;
	int64_t x223 = -1LL;
	int64_t x224 = INT64_MIN;
	volatile int64_t t51 = 9088753LL;

    t51 = ((x221&(x222/x223))+x224);

    if (t51 != -9223372036806172639LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x226 = INT32_MIN;
	uint16_t x227 = 30U;
	int64_t x228 = INT64_MAX;

    t52 = ((x225&(x226/x227))+x228);

    if (t52 != 9223372036783192959LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x230 = -2519LL;
	static volatile int16_t x231 = 129;
	volatile int64_t t53 = 35LL;

    t53 = ((x229&(x230/x231))+x232);

    if (t53 != 32748LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x233 = INT8_MIN;
	int32_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	uint64_t x236 = 424LLU;
	static uint64_t t54 = 6848893LLU;

    t54 = ((x233&(x234/x235))+x236);

    if (t54 != 424LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x237 = 22LLU;
	int32_t x238 = -7125481;
	static int8_t x239 = 19;
	volatile int16_t x240 = 15483;

    t55 = ((x237&(x238/x239))+x240);

    if (t55 != 15489LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x241 = 87301794836LLU;
	static int8_t x242 = INT8_MIN;
	uint8_t x243 = 3U;
	volatile uint64_t t56 = 2013943334430872900LLU;

    t56 = ((x241&(x242/x243))+x244);

    if (t56 != 87301795091LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x245 = UINT16_MAX;
	static uint8_t x246 = UINT8_MAX;
	static volatile uint64_t x247 = 4724535769037LLU;
	int8_t x248 = 0;
	uint64_t t57 = 102398LLU;

    t57 = ((x245&(x246/x247))+x248);

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x250 = -1;
	uint64_t x252 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

    t58 = ((x249&(x250/x251))+x252);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x258 = -1;
	uint32_t x259 = 377U;
	int8_t x260 = INT8_MIN;
	int64_t t59 = 745514374989514119LL;

    t59 = ((x257&(x258/x259))+x260);

    if (t59 != 11392358LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x263 = 417456U;

    t60 = ((x261&(x262/x263))+x264);

    if (t60 != 6872864LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x266 = 2069478LLU;
	int8_t x267 = -16;
	int16_t x268 = INT16_MAX;

    t61 = ((x265&(x266/x267))+x268);

    if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x269 = INT8_MIN;
	uint8_t x271 = 3U;
	int16_t x272 = 626;
	volatile int32_t t62 = 864033698;

    t62 = ((x269&(x270/x271))+x272);

    if (t62 != -10382) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x273 = -423;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -15965963;
	int8_t x276 = 0;
	static int32_t t63 = 60;

    t63 = ((x273&(x274/x275))+x276);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x278 = INT32_MIN;
	uint8_t x279 = 1U;
	volatile uint16_t x280 = 30U;
	int32_t t64 = -1;

    t64 = ((x277&(x278/x279))+x280);

    if (t64 != 30) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x281 = -1LL;
	static int8_t x282 = INT8_MIN;
	int16_t x284 = -15;
	int64_t t65 = 134570629671LL;

    t65 = ((x281&(x282/x283))+x284);

    if (t65 != -15LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x286 = INT16_MIN;
	int64_t x287 = INT64_MAX;
	uint64_t t66 = 673LLU;

    t66 = ((x285&(x286/x287))+x288);

    if (t66 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x291 = 7U;
	volatile uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t67 = 20128878742730LLU;

    t67 = ((x289&(x290/x291))+x292);

    if (t67 != 1317624576693539400LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x295 = 4792643220LLU;
	int32_t x296 = -1;
	volatile uint64_t t68 = UINT64_MAX;

    t68 = ((x293&(x294/x295))+x296);

    if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x297 = INT16_MAX;
	volatile uint16_t x299 = 792U;
	volatile uint64_t x300 = 3056159147886751108LLU;

    t69 = ((x297&(x298/x299))+x300);

    if (t69 != 3056159147886751108LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x301 = 230U;
	int32_t x302 = INT32_MAX;
	static uint16_t x304 = UINT16_MAX;

    t70 = ((x301&(x302/x303))+x304);

    if (t70 != 65731LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x305 = INT32_MIN;
	static int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;

    t71 = ((x305&(x306/x307))+x308);

    if (t71 != 32717) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x309 = INT32_MIN;
	static int8_t x310 = -1;
	volatile int64_t x311 = INT64_MAX;
	int8_t x312 = INT8_MAX;

    t72 = ((x309&(x310/x311))+x312);

    if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x313 = INT32_MIN;
	int64_t x314 = -10465LL;
	int16_t x315 = INT16_MAX;
	int16_t x316 = -1;
	volatile int64_t t73 = 78820LL;

    t73 = ((x313&(x314/x315))+x316);

    if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x317 = 5U;
	static uint64_t x318 = UINT64_MAX;
	static int64_t x320 = -314809472LL;
	volatile uint64_t t74 = 7590915954704LLU;

    t74 = ((x317&(x318/x319))+x320);

    if (t74 != 18446744073394742144LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x322 = INT32_MIN;

    t75 = ((x321&(x322/x323))+x324);

    if (t75 != 240341958U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x329 = UINT64_MAX;
	static uint16_t x331 = 59U;
	int8_t x332 = 41;
	volatile uint64_t t76 = 243445772473155929LLU;

    t76 = ((x329&(x330/x331))+x332);

    if (t76 != 18446744073673153630LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = -111;
	int16_t x334 = -15;
	uint16_t x336 = UINT16_MAX;
	static int32_t t77 = 7139505;

    t77 = ((x333&(x334/x335))+x336);

    if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x337 = 0;
	static volatile int64_t x338 = -379583LL;
	int16_t x339 = INT16_MIN;
	int8_t x340 = 1;
	volatile int64_t t78 = 3081854957LL;

    t78 = ((x337&(x338/x339))+x340);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = INT8_MIN;
	uint8_t x342 = 0U;
	uint16_t x343 = 71U;
	int8_t x344 = INT8_MIN;
	int32_t t79 = 108855;

    t79 = ((x341&(x342/x343))+x344);

    if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = 55;
	uint16_t x346 = UINT16_MAX;
	int64_t x347 = INT64_MAX;
	int16_t x348 = INT16_MIN;
	int64_t t80 = 1698362514LL;

    t80 = ((x345&(x346/x347))+x348);

    if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = -1817;
	int16_t x350 = 0;
	uint64_t t81 = UINT64_MAX;

    t81 = ((x349&(x350/x351))+x352);

    if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x353 = 3;
	int8_t x354 = INT8_MIN;
	int64_t x356 = INT64_MAX;
	volatile int64_t t82 = INT64_MAX;

    t82 = ((x353&(x354/x355))+x356);

    if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x358 = -6860;
	int64_t x359 = INT64_MIN;
	int32_t x360 = 14;
	volatile int64_t t83 = -13071681340377LL;

    t83 = ((x357&(x358/x359))+x360);

    if (t83 != 14LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x361 = -77614360;
	static uint16_t x363 = UINT16_MAX;
	int32_t t84 = 79125;

    t84 = ((x361&(x362/x363))+x364);

    if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x365 = UINT8_MAX;
	int64_t x366 = INT64_MIN;
	uint32_t x367 = 12555U;
	int32_t x368 = -227064;
	volatile int64_t t85 = -3136412LL;

    t85 = ((x365&(x366/x367))+x368);

    if (t85 != -226983LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x369 = INT16_MIN;
	uint32_t x370 = 88U;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -1807;
	uint32_t t86 = 53612295U;

    t86 = ((x369&(x370/x371))+x372);

    if (t86 != 4294965489U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x376 = INT64_MIN;
	volatile uint64_t t87 = 970486488517LLU;

    t87 = ((x373&(x374/x375))+x376);

    if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x377 = INT16_MIN;
	int8_t x380 = -1;
	volatile int32_t t88 = 2;

    t88 = ((x377&(x378/x379))+x380);

    if (t88 != -32769) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x385 = 681773089U;
	int8_t x386 = INT8_MAX;
	volatile int8_t x387 = -1;
	int64_t x388 = -95LL;
	int64_t t89 = -454701003278622251LL;

    t89 = ((x385&(x386/x387))+x388);

    if (t89 != 681772962LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = 1;
	int8_t x392 = INT8_MIN;
	static int32_t t90 = 885;

    t90 = ((x389&(x390/x391))+x392);

    if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = -1;
	uint32_t x394 = 4104U;
	uint8_t x395 = 84U;
	uint32_t t91 = 1136072699U;

    t91 = ((x393&(x394/x395))+x396);

    if (t91 != 47U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x397 = 1098715690LLU;
	static uint32_t x398 = 3U;
	static int64_t x399 = INT64_MIN;
	uint64_t x400 = 147249LLU;
	static volatile uint64_t t92 = 1310LLU;

    t92 = ((x397&(x398/x399))+x400);

    if (t92 != 147249LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x401 = UINT8_MAX;
	int32_t x402 = -2;
	uint16_t x403 = 1424U;

    t93 = ((x401&(x402/x403))+x404);

    if (t93 != 283131332148487567LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x405 = INT16_MAX;
	int32_t t94 = 4;

    t94 = ((x405&(x406/x407))+x408);

    if (t94 != 28526399) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int32_t x409 = INT32_MIN;
	static int64_t x412 = INT64_MIN;
	static int64_t t95 = INT64_MIN;

    t95 = ((x409&(x410/x411))+x412);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x413 = -307928505;
	static volatile int16_t x414 = INT16_MIN;
	int8_t x415 = -1;
	int8_t x416 = -15;
	int32_t t96 = 76378;

    t96 = ((x413&(x414/x415))+x416);

    if (t96 != -15) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x417 = INT32_MAX;
	int64_t x418 = 2746256LL;
	int32_t x419 = 500947120;
	volatile int64_t t97 = -1797178LL;

    t97 = ((x417&(x418/x419))+x420);

    if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x429 = -998378930352859LL;
	static uint8_t x430 = 37U;
	int16_t x431 = -3947;
	int32_t x432 = INT32_MIN;
	int64_t t98 = 1426LL;

    t98 = ((x429&(x430/x431))+x432);

    if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x433 = 22U;
	volatile uint64_t x434 = 3600012839519LLU;
	static int64_t x435 = -193298927404675518LL;
	static volatile uint64_t t99 = 2065595011036795LLU;

    t99 = ((x433&(x434/x435))+x436);

    if (t99 != 68LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x453 = 7;
	int32_t x454 = INT32_MIN;
	uint64_t x455 = 11LLU;
	volatile uint64_t t100 = 126LLU;

    t100 = ((x453&(x454/x455))+x456);

    if (t100 != 262LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x457 = 38U;
	int32_t x458 = -3682984;
	volatile uint64_t x459 = 1773161LLU;
	volatile int64_t x460 = -1LL;

    t101 = ((x457&(x458/x459))+x460);

    if (t101 != 5LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x461 = INT32_MIN;
	static volatile int32_t x462 = INT32_MIN;
	int32_t x463 = -198940;
	int8_t x464 = INT8_MAX;
	volatile int32_t t102 = -897489136;

    t102 = ((x461&(x462/x463))+x464);

    if (t102 != 127) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x465 = 1340086LLU;
	int32_t x466 = -4272;
	uint32_t x467 = UINT32_MAX;
	uint64_t x468 = UINT64_MAX;
	uint64_t t103 = UINT64_MAX;

    t103 = ((x465&(x466/x467))+x468);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x469 = -1;
	uint64_t x470 = 64684654851843LLU;
	static volatile uint64_t x471 = 11251864LLU;
	uint8_t x472 = 2U;
	uint64_t t104 = 29526584024LLU;

    t104 = ((x469&(x470/x471))+x472);

    if (t104 != 5748796LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x473 = INT8_MIN;
	uint64_t x474 = 4220195733900607878LLU;
	int32_t x475 = INT32_MIN;
	int8_t x476 = INT8_MIN;
	uint64_t t105 = 28188033346011508LLU;

    t105 = ((x473&(x474/x475))+x476);

    if (t105 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x477 = 10869785U;
	uint8_t x478 = 59U;
	int8_t x479 = -15;
	int8_t x480 = INT8_MIN;
	uint32_t t106 = 2U;

    t106 = ((x477&(x478/x479))+x480);

    if (t106 != 10869657U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x481 = -1;
	volatile int16_t x482 = 1;
	uint64_t x483 = 102927LLU;
	int32_t x484 = -1;

    t107 = ((x481&(x482/x483))+x484);

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x486 = 7351210;
	volatile int64_t t108 = 6318LL;

    t108 = ((x485&(x486/x487))+x488);

    if (t108 != -28283LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x489 = INT16_MIN;
	volatile uint32_t x490 = 3U;
	int8_t x492 = -1;

    t109 = ((x489&(x490/x491))+x492);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x493 = 25;
	static volatile uint16_t x494 = 7883U;
	int64_t x495 = 21LL;
	volatile int64_t t110 = -1920989486661271407LL;

    t110 = ((x493&(x494/x495))+x496);

    if (t110 != 65552LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x497 = UINT64_MAX;
	volatile uint8_t x499 = 5U;
	uint64_t t111 = 114947465016832217LLU;

    t111 = ((x497&(x498/x499))+x500);

    if (t111 != 16602069666338596582LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int32_t x501 = -88;
	uint64_t x502 = 1018232707309775LLU;
	int64_t x503 = -1LL;

    t112 = ((x501&(x502/x503))+x504);

    if (t112 != 65535LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x505 = UINT32_MAX;
	int32_t x506 = INT32_MAX;
	int8_t x507 = -1;
	uint32_t t113 = 322515302U;

    t113 = ((x505&(x506/x507))+x508);

    if (t113 != 2147450881U) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x509 = INT16_MIN;
	uint16_t x510 = 24U;
	uint16_t x511 = 182U;

    t114 = ((x509&(x510/x511))+x512);

    if (t114 != INT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x513 = INT32_MIN;
	int16_t x514 = -197;
	volatile uint32_t x515 = 8U;
	int16_t x516 = INT16_MAX;
	volatile uint32_t t115 = 8641U;

    t115 = ((x513&(x514/x515))+x516);

    if (t115 != 32767U) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x518 = 13LLU;
	int32_t x520 = 1468327;

    t116 = ((x517&(x518/x519))+x520);

    if (t116 != 1468327LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x523 = INT64_MAX;
	int32_t x524 = -1;
	static int64_t t117 = -3110675818976LL;

    t117 = ((x521&(x522/x523))+x524);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int32_t x525 = -1;
	volatile int32_t x526 = -116;
	static volatile int32_t t118 = -35;

    t118 = ((x525&(x526/x527))+x528);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x529 = INT32_MIN;
	int8_t x530 = -1;
	uint8_t x531 = 5U;
	int8_t x532 = -1;
	static int32_t t119 = -2;

    t119 = ((x529&(x530/x531))+x532);

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x534 = -1;
	int8_t x535 = INT8_MIN;
	int64_t x536 = 1630LL;
	volatile int64_t t120 = 129338LL;

    t120 = ((x533&(x534/x535))+x536);

    if (t120 != 1630LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint16_t x537 = 16U;
	volatile int64_t x539 = INT64_MAX;
	int16_t x540 = INT16_MIN;
	volatile int64_t t121 = -89851221LL;

    t121 = ((x537&(x538/x539))+x540);

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x541 = 8129U;
	int64_t x542 = INT64_MAX;
	int16_t x543 = INT16_MAX;
	uint64_t x544 = 174732859LLU;
	volatile uint64_t t122 = 450LLU;

    t122 = ((x541&(x542/x543))+x544);

    if (t122 != 174732859LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MAX;
	int64_t x548 = INT64_MIN;

    t123 = ((x545&(x546/x547))+x548);

    if (t123 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x549 = INT8_MIN;
	uint32_t x550 = 3003U;
	static int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;
	volatile uint32_t t124 = 1970U;

    t124 = ((x549&(x550/x551))+x552);

    if (t124 != 4294967168U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x554 = 0;
	int16_t x555 = INT16_MIN;
	int8_t x556 = -1;
	int32_t t125 = 8;

    t125 = ((x553&(x554/x555))+x556);

    if (t125 != -1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x561 = INT16_MAX;
	static int32_t x562 = -21802;
	int8_t x564 = -2;
	uint32_t t126 = 25944212U;

    t126 = ((x561&(x562/x563))+x564);

    if (t126 != 30U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x569 = 12925796U;
	int32_t x570 = INT32_MIN;
	uint16_t x571 = 135U;
	uint32_t x572 = 12633U;
	volatile uint32_t t127 = 55124U;

    t127 = ((x569&(x570/x571))+x572);

    if (t127 != 340857U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x574 = 941578953LLU;
	int8_t x575 = INT8_MIN;
	int64_t x576 = INT64_MIN;
	static uint64_t t128 = 47248722LLU;

    t128 = ((x573&(x574/x575))+x576);

    if (t128 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x577 = 2U;
	volatile int64_t x579 = INT64_MIN;
	int64_t x580 = -289086LL;
	volatile int64_t t129 = -864452281252738LL;

    t129 = ((x577&(x578/x579))+x580);

    if (t129 != -289086LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x581 = -26;
	int64_t x582 = -1LL;
	int64_t x583 = 417092LL;
	int8_t x584 = 30;
	volatile int64_t t130 = -24749462LL;

    t130 = ((x581&(x582/x583))+x584);

    if (t130 != 30LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x585 = -1;
	int16_t x586 = INT16_MIN;
	uint64_t x588 = 8491045808625LLU;

    t131 = ((x585&(x586/x587))+x588);

    if (t131 != 8491045808625LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x589 = INT32_MAX;
	int32_t x590 = INT32_MAX;
	int64_t x591 = INT64_MIN;
	int16_t x592 = -1;
	volatile int64_t t132 = -41957684864653LL;

    t132 = ((x589&(x590/x591))+x592);

    if (t132 != -1LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x593 = 46U;
	uint32_t x594 = UINT32_MAX;
	uint64_t x595 = 22383LLU;
	static volatile uint64_t t133 = 25LLU;

    t133 = ((x593&(x594/x595))+x596);

    if (t133 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x597 = UINT8_MAX;
	int8_t x599 = -2;
	uint16_t x600 = 1687U;

    t134 = ((x597&(x598/x599))+x600);

    if (t134 != 1687) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x601 = 0;
	volatile int32_t x602 = INT32_MAX;
	uint64_t x603 = 97LLU;
	int8_t x604 = -1;
	uint64_t t135 = UINT64_MAX;

    t135 = ((x601&(x602/x603))+x604);

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x605 = 836867;
	uint16_t x606 = 0U;
	volatile int8_t x607 = INT8_MIN;
	static int8_t x608 = -34;
	int32_t t136 = -201981103;

    t136 = ((x605&(x606/x607))+x608);

    if (t136 != -34) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x609 = -1;
	static int16_t x610 = 1988;
	static uint8_t x611 = 4U;
	static int64_t x612 = 6773LL;
	static volatile int64_t t137 = 37LL;

    t137 = ((x609&(x610/x611))+x612);

    if (t137 != 7270LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x613 = INT8_MIN;
	uint32_t x615 = 684387U;
	uint64_t x616 = 7LLU;
	uint64_t t138 = 1322033140771125165LLU;

    t138 = ((x613&(x614/x615))+x616);

    if (t138 != 6279LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x617 = 85901U;
	int8_t x618 = -1;
	uint8_t x619 = 1U;

    t139 = ((x617&(x618/x619))+x620);

    if (t139 != 85910U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x621 = -39;
	static uint64_t x622 = 153LLU;
	int32_t x623 = INT32_MAX;
	uint64_t t140 = 0LLU;

    t140 = ((x621&(x622/x623))+x624);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint32_t x626 = 1U;
	uint32_t x627 = 2117986144U;
	uint64_t x628 = 1746629LLU;
	volatile uint64_t t141 = 46339859344900LLU;

    t141 = ((x625&(x626/x627))+x628);

    if (t141 != 1746629LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x629 = -484758628;
	int32_t x630 = -57477;
	static uint64_t x631 = 2416LLU;
	volatile uint16_t x632 = 6U;
	volatile uint64_t t142 = 1006770163LLU;

    t142 = ((x629&(x630/x631))+x632);

    if (t142 != 7635241745776774LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x633 = 3;

    t143 = ((x633&(x634/x635))+x636);

    if (t143 != 2147483647LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x637 = -1;
	volatile int32_t x638 = INT32_MAX;
	int32_t x639 = 2362897;
	volatile int64_t x640 = INT64_MIN;
	volatile int64_t t144 = -1957LL;

    t144 = ((x637&(x638/x639))+x640);

    if (t144 != -9223372036854774900LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x641 = -55;
	int32_t x643 = INT32_MIN;
	int64_t x644 = -1530LL;
	volatile int64_t t145 = 3LL;

    t145 = ((x641&(x642/x643))+x644);

    if (t145 != -1530LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x647 = 473169222U;
	int16_t x648 = 586;
	static uint32_t t146 = 1U;

    t146 = ((x645&(x646/x647))+x648);

    if (t146 != 595U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = INT64_MAX;
	uint8_t x650 = UINT8_MAX;
	static int16_t x652 = -68;
	volatile int64_t t147 = 225126LL;

    t147 = ((x649&(x650/x651))+x652);

    if (t147 != 9223372036854775485LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x654 = 654921269585LL;
	int32_t x655 = -55380931;

    t148 = ((x653&(x654/x655))+x656);

    if (t148 != 49544LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x657 = -1;
	int32_t x658 = -35723;
	uint32_t x659 = 663842U;
	static volatile int8_t x660 = INT8_MAX;
	uint32_t t149 = 531298158U;

    t149 = ((x657&(x658/x659))+x660);

    if (t149 != 6596U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x662 = UINT16_MAX;
	int32_t x663 = 190;
	volatile int16_t x664 = INT16_MAX;
	volatile int64_t t150 = 743LL;

    t150 = ((x661&(x662/x663))+x664);

    if (t150 != 32767LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x665 = INT32_MIN;
	static int8_t x667 = -5;
	int64_t t151 = 2409350713969741LL;

    t151 = ((x665&(x666/x667))+x668);

    if (t151 != 418759311357LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x669 = INT16_MAX;
	int8_t x670 = INT8_MIN;
	uint64_t x672 = UINT64_MAX;
	uint64_t t152 = 121445527LLU;

    t152 = ((x669&(x670/x671))+x672);

    if (t152 != 127LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x673 = UINT16_MAX;
	static volatile int32_t x674 = INT32_MIN;
	static int16_t x675 = -8;
	static int32_t x676 = INT32_MIN;

    t153 = ((x673&(x674/x675))+x676);

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int16_t x677 = INT16_MIN;
	int8_t x678 = INT8_MAX;
	int32_t x679 = INT32_MIN;
	uint32_t x680 = 151U;
	uint32_t t154 = 2000453431U;

    t154 = ((x677&(x678/x679))+x680);

    if (t154 != 151U) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint16_t x681 = UINT16_MAX;
	volatile int16_t x682 = -2712;
	static int8_t x684 = 1;
	static int32_t t155 = -34;

    t155 = ((x681&(x682/x683))+x684);

    if (t155 != 3) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x685 = 528751034U;
	int32_t x686 = INT32_MIN;
	volatile int32_t x687 = INT32_MIN;

    t156 = ((x685&(x686/x687))+x688);

    if (t156 != 4294934528U) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint64_t x689 = 136186039674LLU;
	int64_t x690 = INT64_MAX;
	static int8_t x691 = INT8_MIN;
	int8_t x692 = -1;

    t157 = ((x689&(x690/x691))+x692);

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x693 = 20569U;
	int64_t x694 = 399LL;
	int32_t x695 = INT32_MAX;
	volatile int64_t t158 = -24260175079822560LL;

    t158 = ((x693&(x694/x695))+x696);

    if (t158 != 2147483647LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x697 = INT32_MIN;
	volatile int8_t x700 = 6;

    t159 = ((x697&(x698/x699))+x700);

    if (t159 != 6LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x702 = INT16_MIN;
	volatile uint64_t x704 = 647361632399284LLU;

    t160 = ((x701&(x702/x703))+x704);

    if (t160 != 647361632399284LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x705 = UINT8_MAX;
	volatile int32_t x706 = -1;
	static int8_t x708 = -1;
	static volatile int32_t t161 = -1;

    t161 = ((x705&(x706/x707))+x708);

    if (t161 != -1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x709 = INT16_MIN;
	int16_t x710 = INT16_MIN;
	uint64_t x711 = UINT64_MAX;
	uint64_t t162 = 2264605476484400684LLU;

    t162 = ((x709&(x710/x711))+x712);

    if (t162 != 1LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x713 = -1;
	static volatile int32_t x714 = INT32_MAX;
	volatile int16_t x715 = INT16_MIN;
	uint64_t x716 = 170220156719094LLU;

    t163 = ((x713&(x714/x715))+x716);

    if (t163 != 170220156653559LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x718 = INT16_MIN;
	uint64_t x719 = 146302751351LLU;
	int32_t x720 = INT32_MIN;

    t164 = ((x717&(x718/x719))+x720);

    if (t164 != 18446744071646028505LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x721 = INT64_MIN;
	int8_t x723 = INT8_MIN;
	volatile int8_t x724 = -1;
	int64_t t165 = 116530951682484248LL;

    t165 = ((x721&(x722/x723))+x724);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x725 = 1051U;
	static uint16_t x726 = 10U;
	uint64_t x727 = 15419LLU;
	uint64_t x728 = 213LLU;
	uint64_t t166 = 99564LLU;

    t166 = ((x725&(x726/x727))+x728);

    if (t166 != 213LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x733 = 15;
	volatile int16_t x734 = INT16_MIN;
	uint32_t x735 = UINT32_MAX;
	uint32_t x736 = UINT32_MAX;
	uint32_t t167 = UINT32_MAX;

    t167 = ((x733&(x734/x735))+x736);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x737 = UINT32_MAX;
	uint16_t x738 = 1760U;
	int16_t x739 = -138;
	static uint16_t x740 = 2U;
	uint32_t t168 = 35531U;

    t168 = ((x737&(x738/x739))+x740);

    if (t168 != 4294967286U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x741 = INT64_MAX;
	int16_t x742 = 2103;
	int32_t x743 = INT32_MAX;
	volatile int64_t x744 = -1LL;
	static int64_t t169 = 731LL;

    t169 = ((x741&(x742/x743))+x744);

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x745 = INT32_MIN;
	uint16_t x746 = UINT16_MAX;
	int32_t x747 = INT32_MIN;
	int32_t x748 = -7646;
	int32_t t170 = -31284;

    t170 = ((x745&(x746/x747))+x748);

    if (t170 != -7646) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x750 = -1;
	int64_t x751 = -5441028391LL;
	uint16_t x752 = UINT16_MAX;
	volatile int64_t t171 = 2231216LL;

    t171 = ((x749&(x750/x751))+x752);

    if (t171 != 65535LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x753 = 3250U;
	static volatile uint16_t x754 = 1055U;
	volatile int32_t x755 = -1;
	int64_t x756 = INT64_MIN;

    t172 = ((x753&(x754/x755))+x756);

    if (t172 != -9223372036854773600LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x757 = 9;
	uint64_t x758 = 82313LLU;
	volatile uint64_t t173 = 495667137688255LLU;

    t173 = ((x757&(x758/x759))+x760);

    if (t173 != 18445162808027472846LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x761 = -1;
	volatile int64_t x762 = INT64_MAX;
	volatile int8_t x763 = INT8_MIN;
	int8_t x764 = -1;

    t174 = ((x761&(x762/x763))+x764);

    if (t174 != -72057594037927936LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x765 = 8U;
	int32_t x766 = INT32_MAX;
	uint32_t x767 = 4013027U;
	static int64_t x768 = INT64_MIN;

    t175 = ((x765&(x766/x767))+x768);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x769 = INT32_MIN;
	static int8_t x770 = INT8_MAX;
	volatile int8_t x771 = INT8_MIN;
	int32_t x772 = -17;
	int32_t t176 = 750510010;

    t176 = ((x769&(x770/x771))+x772);

    if (t176 != -17) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x777 = 49U;
	uint32_t x778 = UINT32_MAX;
	int16_t x779 = INT16_MAX;
	int16_t x780 = -1;
	uint32_t t177 = UINT32_MAX;

    t177 = ((x777&(x778/x779))+x780);

    if (t177 != UINT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x781 = 1;
	volatile int8_t x783 = INT8_MIN;
	static uint8_t x784 = 65U;
	int32_t t178 = -27353503;

    t178 = ((x781&(x782/x783))+x784);

    if (t178 != 66) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x785 = INT64_MAX;
	int16_t x786 = INT16_MIN;
	volatile int16_t x787 = 28;
	int16_t x788 = 1;
	int64_t t179 = -42889275815LL;

    t179 = ((x785&(x786/x787))+x788);

    if (t179 != 9223372036854774639LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x789 = -5985;
	volatile int64_t x790 = INT64_MIN;
	volatile int32_t x792 = INT32_MIN;
	int64_t t180 = -1515LL;

    t180 = ((x789&(x790/x791))+x792);

    if (t180 != -14137292798LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x794 = UINT64_MAX;
	uint32_t x795 = UINT32_MAX;
	static int32_t x796 = INT32_MIN;
	static volatile uint64_t t181 = 13088228843278224LLU;

    t181 = ((x793&(x794/x795))+x796);

    if (t181 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x797 = INT16_MIN;
	volatile uint8_t x798 = 1U;
	int16_t x800 = INT16_MAX;
	static volatile int32_t t182 = -246609039;

    t182 = ((x797&(x798/x799))+x800);

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x801 = UINT16_MAX;
	int64_t x802 = INT64_MAX;
	int32_t x803 = 107;
	volatile uint64_t x804 = 44561LLU;
	uint64_t t183 = 45264343545723LLU;

    t183 = ((x801&(x802/x803))+x804);

    if (t183 != 47623LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x805 = UINT16_MAX;
	int64_t x806 = INT64_MIN;
	volatile uint64_t x807 = 45666360LLU;
	static uint32_t x808 = 13U;
	uint64_t t184 = 4877785494099309678LLU;

    t184 = ((x805&(x806/x807))+x808);

    if (t184 != 33202LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x809 = 13618995317LL;
	int32_t x810 = INT32_MAX;
	int8_t x811 = INT8_MAX;
	volatile int64_t t185 = -255LL;

    t185 = ((x809&(x810/x811))+x812);

    if (t185 != 16777215LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x813 = -11;
	int32_t x814 = 31;
	volatile uint64_t t186 = UINT64_MAX;

    t186 = ((x813&(x814/x815))+x816);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x817 = INT64_MAX;
	uint8_t x818 = 25U;
	int64_t x819 = 241688202LL;
	int16_t x820 = INT16_MIN;
	volatile int64_t t187 = 1LL;

    t187 = ((x817&(x818/x819))+x820);

    if (t187 != -32768LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x821 = -1;
	uint8_t x822 = 3U;
	int16_t x823 = INT16_MIN;
	uint64_t x824 = UINT64_MAX;
	volatile uint64_t t188 = UINT64_MAX;

    t188 = ((x821&(x822/x823))+x824);

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x825 = INT16_MIN;
	uint32_t x826 = 1540U;
	int32_t x828 = INT32_MIN;

    t189 = ((x825&(x826/x827))+x828);

    if (t189 != 2147483648U) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x829 = INT32_MAX;
	volatile int8_t x830 = -1;
	int32_t x831 = INT32_MAX;
	static uint64_t x832 = UINT64_MAX;
	static volatile uint64_t t190 = UINT64_MAX;

    t190 = ((x829&(x830/x831))+x832);

    if (t190 != UINT64_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x834 = -1;
	volatile uint16_t x835 = UINT16_MAX;
	volatile int16_t x836 = -39;
	volatile int32_t t191 = 2456;

    t191 = ((x833&(x834/x835))+x836);

    if (t191 != -39) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x837 = 1102408212U;
	int64_t x838 = INT64_MIN;

    t192 = ((x837&(x838/x839))+x840);

    if (t192 != -2145367548LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x841 = INT8_MIN;
	static uint8_t x843 = 1U;
	uint16_t x844 = UINT16_MAX;
	static volatile int32_t t193 = 11;

    t193 = ((x841&(x842/x843))+x844);

    if (t193 != 65663) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x845 = -702;
	int16_t x846 = -1;
	uint16_t x847 = 209U;
	int8_t x848 = -6;

    t194 = ((x845&(x846/x847))+x848);

    if (t194 != -6) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x849 = 2281887;
	static int8_t x850 = 4;
	static volatile int8_t x852 = INT8_MAX;
	volatile int32_t t195 = 251084;

    t195 = ((x849&(x850/x851))+x852);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x853 = UINT32_MAX;
	int16_t x854 = 1;
	static int32_t x855 = INT32_MAX;
	int64_t t196 = 7090586LL;

    t196 = ((x853&(x854/x855))+x856);

    if (t196 != -3LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x857 = -10387951442776LL;
	uint8_t x858 = UINT8_MAX;
	int32_t x859 = -1;
	int64_t t197 = -30760549759LL;

    t197 = ((x857&(x858/x859))+x860);

    if (t197 != -10387951442945LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int32_t x862 = 1878015;
	uint16_t x863 = 2039U;
	int64_t t198 = -817574790156425LL;

    t198 = ((x861&(x862/x863))+x864);

    if (t198 != 2147483799LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x865 = INT16_MAX;
	int16_t x866 = -1;
	static volatile int16_t x867 = 107;
	static int64_t x868 = INT64_MIN;

    t199 = ((x865&(x866/x867))+x868);

    if (t199 != INT64_MIN) { NG(); } else { ; }
	
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

