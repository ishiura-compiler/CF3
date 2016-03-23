
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

int8_t x12 = 1;
uint16_t x22 = 8U;
static int8_t x24 = INT8_MAX;
uint64_t x30 = UINT64_MAX;
volatile int8_t x31 = -54;
uint16_t x33 = UINT16_MAX;
uint32_t x36 = UINT32_MAX;
uint8_t x38 = 104U;
static volatile int32_t x40 = -318701660;
static int16_t x43 = -1;
int8_t x56 = INT8_MIN;
uint64_t x63 = 223LLU;
uint64_t x64 = 152462707110695581LLU;
int64_t x71 = INT64_MIN;
int32_t x77 = INT32_MAX;
uint16_t x82 = 20479U;
uint32_t x84 = 6895U;
int32_t x88 = -3830704;
uint8_t x98 = UINT8_MAX;
int32_t t19 = 2140;
int8_t x103 = INT8_MIN;
int16_t x114 = -1648;
volatile uint32_t t22 = 26344U;
static volatile uint16_t x124 = UINT16_MAX;
int32_t t24 = 50944232;
uint8_t x125 = 115U;
uint32_t x139 = 162U;
static int8_t x144 = -1;
volatile int32_t t29 = -445578757;
int32_t t30 = -237423;
static int64_t x150 = INT64_MIN;
uint64_t t31 = 694379LLU;
uint16_t x160 = 223U;
volatile int32_t t33 = 164;
int16_t x166 = INT16_MIN;
int8_t x169 = INT8_MIN;
volatile int32_t t37 = -136159;
int8_t x181 = INT8_MIN;
volatile uint32_t x184 = 18U;
uint32_t x189 = 1611U;
static int16_t x196 = INT16_MAX;
uint8_t x200 = 0U;
uint64_t x204 = 2LLU;
static uint16_t x207 = UINT16_MAX;
int8_t x210 = 51;
uint8_t x212 = UINT8_MAX;
int32_t t44 = -49595;
volatile int32_t t45 = -20848;
int64_t x222 = 199091LL;
uint8_t x226 = 0U;
static volatile int8_t x230 = INT8_MIN;
uint16_t x237 = 11U;
uint16_t x239 = UINT16_MAX;
static volatile uint32_t x247 = 89745U;
volatile uint8_t x250 = UINT8_MAX;
volatile uint32_t t53 = 1U;
static volatile int8_t x259 = -1;
static volatile int32_t t54 = -13416458;
volatile int64_t t55 = -7090455523533253LL;
uint8_t x269 = 7U;
int8_t x271 = -1;
int16_t x272 = INT16_MIN;
volatile int16_t x279 = INT16_MIN;
int16_t x280 = -1;
static int32_t x290 = INT32_MIN;
static int32_t t60 = 326431216;
volatile int16_t x300 = -71;
int32_t x304 = 173918263;
int16_t x308 = 1;
int32_t t66 = 4478;
int8_t x319 = INT8_MIN;
static uint32_t x320 = 240693U;
int16_t x331 = INT16_MAX;
volatile int32_t x335 = INT32_MAX;
volatile uint16_t x337 = 66U;
static int32_t x340 = -1;
int32_t x343 = -1;
uint32_t x347 = 1263731344U;
int16_t x349 = INT16_MIN;
volatile uint16_t x354 = UINT16_MAX;
int32_t x355 = -1;
static uint64_t x357 = 544564LLU;
uint16_t x372 = UINT16_MAX;
int8_t x377 = INT8_MAX;
int32_t t80 = 416337;
volatile int32_t t81 = -16507392;
int8_t x393 = INT8_MIN;
volatile uint16_t x394 = 15649U;
volatile int32_t x402 = INT32_MIN;
static uint16_t x404 = 446U;
int32_t t83 = 7;
volatile int32_t t84 = 1917;
static int16_t x421 = -5568;
uint8_t x427 = 1U;
int64_t x432 = 29875159795511LL;
int32_t t89 = 0;
int32_t x438 = -239234418;
static volatile int32_t t91 = 39096023;
int64_t x443 = -375450513065817498LL;
int64_t x450 = -43707323LL;
int64_t x451 = -58985271222LL;
int16_t x456 = -1;
int8_t x460 = INT8_MAX;
volatile int8_t x466 = INT8_MIN;
static volatile int32_t t99 = 1063300199;
int32_t x477 = 238906;
uint64_t x482 = 26687146814LLU;
static int64_t x489 = INT64_MIN;
int64_t t104 = -93099516071441LL;
int32_t t105 = 19953252;
static int8_t x505 = -1;
int32_t x510 = INT32_MAX;
volatile int8_t x511 = INT8_MIN;
volatile int64_t t108 = 488221028133521LL;
int16_t x518 = 7959;
volatile int16_t x519 = INT16_MAX;
volatile int32_t x520 = -1;
static volatile int32_t t111 = -169337;
int8_t x537 = INT8_MIN;
volatile int64_t x538 = INT64_MIN;
volatile uint32_t t115 = 0U;
int64_t x545 = INT64_MAX;
uint64_t x548 = UINT64_MAX;
static int32_t x551 = INT32_MAX;
static int16_t x553 = -1;
static int64_t x557 = 60778186LL;
uint64_t x558 = 560LLU;
int64_t x560 = INT64_MIN;
static int32_t x566 = INT32_MIN;
int8_t x568 = INT8_MIN;
int32_t t122 = 3816603;
static volatile int32_t x578 = INT32_MIN;
uint8_t x579 = 0U;
int64_t x589 = INT64_MIN;
int16_t x596 = INT16_MAX;
int64_t x604 = -2232245817LL;
static volatile uint64_t x620 = 743716185954439LLU;
static volatile int32_t t131 = -1;
int32_t x622 = INT32_MAX;
static int64_t x623 = INT64_MAX;
int16_t x624 = -1;
int64_t x634 = -1LL;
uint8_t x636 = UINT8_MAX;
volatile int32_t t134 = -3;
int16_t x645 = -1;
uint64_t x646 = 1077856264938095LLU;
uint32_t x654 = 148U;
int32_t x656 = INT32_MIN;
int16_t x665 = -3690;
static int32_t x666 = INT32_MIN;
int64_t x673 = INT64_MAX;
int32_t x674 = -5891;
static int8_t x675 = -1;
int8_t x676 = INT8_MIN;
volatile uint64_t x681 = 104596608629415973LLU;
uint32_t x694 = 133288686U;
int16_t x696 = INT16_MIN;
static int16_t x697 = -1;
static int16_t x698 = INT16_MAX;
uint16_t x699 = UINT16_MAX;
int8_t x704 = -42;
uint8_t x708 = 0U;
int8_t x710 = INT8_MAX;
int32_t t151 = 215080151;
uint8_t x718 = UINT8_MAX;
int64_t x719 = INT64_MIN;
int16_t x737 = -144;
uint64_t x739 = 281669LLU;
static int8_t x740 = 5;
int16_t x750 = INT16_MIN;
int32_t x751 = 21;
int32_t t157 = 79314230;
int16_t x755 = -9;
int32_t x756 = INT32_MAX;
int64_t x761 = INT64_MIN;
int64_t t160 = 54145393696LL;
int64_t x775 = INT64_MAX;
int64_t x785 = INT64_MIN;
volatile int64_t t166 = 21969LL;
volatile int8_t x809 = INT8_MAX;
int64_t x810 = 811LL;
static volatile int64_t x815 = INT64_MIN;
volatile int32_t t171 = 17275933;
uint16_t x823 = 0U;
volatile int64_t t175 = -600LL;
static int64_t x843 = 3LL;
int64_t x849 = INT64_MIN;
int16_t x865 = INT16_MAX;
int32_t t181 = -227;
uint8_t x880 = 5U;
volatile int32_t x886 = -1;
int64_t x890 = -1LL;
volatile uint16_t x893 = UINT16_MAX;
uint32_t x899 = UINT32_MAX;
static int16_t x900 = INT16_MIN;
int8_t x901 = INT8_MIN;
uint32_t x904 = 25U;
volatile int32_t t188 = -12349;
int32_t x905 = INT32_MAX;
int64_t x906 = 340111517409356LL;
int32_t t189 = 32628286;
int32_t t190 = -314183995;
int8_t x914 = 57;
volatile uint64_t t192 = UINT64_MAX;
uint64_t x923 = 1LLU;
uint32_t x926 = 1228U;
int32_t x929 = 6553;
int64_t x937 = 2548872540653074LL;
int16_t x959 = INT16_MIN;
int16_t x962 = INT16_MAX;
int32_t x964 = INT32_MIN;


void f0(void) {
    	static int16_t x9 = INT16_MIN;
	int16_t x10 = -1264;
	uint8_t x11 = 0U;
	volatile int32_t t0 = -1;

    t0 = (x9*(x10==(x11+x12)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x17 = INT32_MAX;
	uint64_t x18 = UINT64_MAX;
	volatile int8_t x19 = 6;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t1 = -858;

    t1 = (x17*(x18==(x19+x20)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x21 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	int64_t t2 = -5798331125319833LL;

    t2 = (x21*(x22==(x23+x24)));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = UINT32_MAX;
	int64_t x26 = INT64_MAX;
	int32_t x27 = INT32_MAX;
	static volatile uint64_t x28 = 3970950541511LLU;
	static uint32_t t3 = 4U;

    t3 = (x25*(x26==(x27+x28)));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x29 = UINT64_MAX;
	uint64_t x32 = 14992LLU;
	static volatile uint64_t t4 = 7660940410046930LLU;

    t4 = (x29*(x30==(x31+x32)));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x34 = -14028624;
	int16_t x35 = INT16_MIN;
	volatile int32_t t5 = 97979;

    t5 = (x33*(x34==(x35+x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x37 = 1029;
	volatile int32_t x39 = -36398462;
	volatile int32_t t6 = 114;

    t6 = (x37*(x38==(x39+x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x41 = INT64_MIN;
	int64_t x42 = 9566227654371LL;
	uint8_t x44 = 15U;
	int64_t t7 = 1726638580982LL;

    t7 = (x41*(x42==(x43+x44)));

    if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x45 = 31U;
	int16_t x46 = -8378;
	volatile int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	int32_t t8 = 0;

    t8 = (x45*(x46==(x47+x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	static int16_t x51 = INT16_MIN;
	static int64_t x52 = -1LL;
	volatile int32_t t9 = 1923;

    t9 = (x49*(x50==(x51+x52)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x53 = UINT64_MAX;
	static int8_t x54 = -1;
	int8_t x55 = -38;
	volatile uint64_t t10 = 102LLU;

    t10 = (x53*(x54==(x55+x56)));

    if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x57 = 25;
	volatile int8_t x58 = INT8_MIN;
	int32_t x59 = -1;
	volatile int64_t x60 = -78340515649432LL;
	int32_t t11 = -6810;

    t11 = (x57*(x58==(x59+x60)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x61 = 70U;
	uint8_t x62 = 12U;
	volatile uint32_t t12 = 61U;

    t12 = (x61*(x62==(x63+x64)));

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint64_t x65 = 287829911599698LLU;
	int16_t x66 = -6168;
	int8_t x67 = -1;
	int64_t x68 = INT64_MAX;
	uint64_t t13 = 937008510529387674LLU;

    t13 = (x65*(x66==(x67+x68)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	int8_t x70 = -48;
	volatile int16_t x72 = 126;
	static int32_t t14 = -372;

    t14 = (x69*(x70==(x71+x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = -110117LL;
	int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	volatile int32_t t15 = 266990;

    t15 = (x73*(x74==(x75+x76)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int8_t x78 = 0;
	volatile int16_t x79 = INT16_MIN;
	static volatile uint16_t x80 = 3941U;
	volatile int32_t t16 = 39;

    t16 = (x77*(x78==(x79+x80)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = -57319662;
	volatile uint8_t x83 = 2U;
	static volatile int32_t t17 = -18203;

    t17 = (x81*(x82==(x83+x84)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x85 = -1;
	static int32_t x86 = -1;
	int64_t x87 = -71857987193586321LL;
	volatile int32_t t18 = -105672701;

    t18 = (x85*(x86==(x87+x88)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = INT8_MAX;
	volatile int16_t x99 = INT16_MIN;
	int32_t x100 = 631;

    t19 = (x97*(x98==(x99+x100)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x101 = 18586410LL;
	uint32_t x102 = UINT32_MAX;
	uint64_t x104 = UINT64_MAX;
	int64_t t20 = -4701277534736LL;

    t20 = (x101*(x102==(x103+x104)));

    if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MAX;
	static int32_t x107 = INT32_MAX;
	static volatile int64_t x108 = 8993069594LL;
	static int32_t t21 = -1953138;

    t21 = (x105*(x106==(x107+x108)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x113 = 195U;
	uint8_t x115 = 7U;
	int8_t x116 = -1;

    t22 = (x113*(x114==(x115+x116)));

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = INT8_MAX;
	int16_t x118 = -1;
	static volatile int8_t x119 = -1;
	int64_t x120 = 0LL;
	volatile int32_t t23 = -837937618;

    t23 = (x117*(x118==(x119+x120)));

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x121 = INT32_MAX;
	static int8_t x122 = -4;
	static volatile int32_t x123 = -1;

    t24 = (x121*(x122==(x123+x124)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x126 = 1U;
	uint32_t x127 = 708U;
	volatile uint64_t x128 = UINT64_MAX;
	volatile int32_t t25 = 7910;

    t25 = (x125*(x126==(x127+x128)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x129 = INT64_MIN;
	static uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MIN;
	static int32_t x132 = 362721975;
	static volatile int64_t t26 = 877637004512LL;

    t26 = (x129*(x130==(x131+x132)));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x133 = 16U;
	volatile int8_t x134 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	int64_t x136 = -1LL;
	volatile uint32_t t27 = 31U;

    t27 = (x133*(x134==(x135+x136)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x137 = 15261U;
	int16_t x138 = -1;
	volatile int16_t x140 = -494;
	volatile int32_t t28 = -1;

    t28 = (x137*(x138==(x139+x140)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x141 = -1;
	volatile int64_t x142 = 13541737723348369LL;
	uint32_t x143 = UINT32_MAX;

    t29 = (x141*(x142==(x143+x144)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x145 = -92303;
	uint8_t x146 = 27U;
	int32_t x147 = INT32_MAX;
	volatile int64_t x148 = INT64_MIN;

    t30 = (x145*(x146==(x147+x148)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint64_t x149 = 45223LLU;
	int16_t x151 = INT16_MIN;
	int16_t x152 = -1;

    t31 = (x149*(x150==(x151+x152)));

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x153 = 10U;
	static int16_t x154 = INT16_MAX;
	int64_t x155 = -1LL;
	uint16_t x156 = UINT16_MAX;
	int32_t t32 = -437;

    t32 = (x153*(x154==(x155+x156)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x157 = -1;
	uint32_t x158 = 540354U;
	static int16_t x159 = INT16_MIN;

    t33 = (x157*(x158==(x159+x160)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = INT32_MAX;
	int16_t x167 = INT16_MAX;
	volatile int32_t x168 = -1;
	int32_t t34 = -228;

    t34 = (x165*(x166==(x167+x168)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x170 = 848282028LL;
	uint16_t x171 = 2828U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t35 = 1018;

    t35 = (x169*(x170==(x171+x172)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x173 = -43954990;
	static int64_t x174 = -3873906863LL;
	uint64_t x175 = 163LLU;
	int16_t x176 = INT16_MIN;
	volatile int32_t t36 = 5002919;

    t36 = (x173*(x174==(x175+x176)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x177 = -1;
	static int8_t x178 = -1;
	volatile int8_t x179 = INT8_MIN;
	volatile int32_t x180 = -1;

    t37 = (x177*(x178==(x179+x180)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x182 = INT8_MIN;
	uint64_t x183 = UINT64_MAX;
	static int32_t t38 = -1190484;

    t38 = (x181*(x182==(x183+x184)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x190 = -2;
	int8_t x191 = INT8_MIN;
	volatile int16_t x192 = -536;
	uint32_t t39 = 238553U;

    t39 = (x189*(x190==(x191+x192)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = 26862936;
	static volatile int32_t x194 = INT32_MIN;
	int8_t x195 = -56;
	int32_t t40 = -1129;

    t40 = (x193*(x194==(x195+x196)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	uint32_t x198 = UINT32_MAX;
	int16_t x199 = -1;
	volatile int32_t t41 = 3465;

    t41 = (x197*(x198==(x199+x200)));

    if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x201 = 496U;
	int64_t x202 = 19057LL;
	static uint8_t x203 = 5U;
	volatile uint32_t t42 = 94U;

    t42 = (x201*(x202==(x203+x204)));

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x205 = 12U;
	int16_t x206 = INT16_MAX;
	static uint16_t x208 = 91U;
	static uint32_t t43 = 843559667U;

    t43 = (x205*(x206==(x207+x208)));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	static int64_t x211 = INT64_MIN;

    t44 = (x209*(x210==(x211+x212)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x213 = UINT8_MAX;
	uint8_t x214 = 54U;
	static int64_t x215 = -1LL;
	int32_t x216 = INT32_MAX;

    t45 = (x213*(x214==(x215+x216)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x217 = 25;
	volatile uint8_t x218 = UINT8_MAX;
	volatile int16_t x219 = INT16_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t46 = 3;

    t46 = (x217*(x218==(x219+x220)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x221 = 189061;
	int16_t x223 = 5299;
	uint8_t x224 = UINT8_MAX;
	int32_t t47 = -7;

    t47 = (x221*(x222==(x223+x224)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x225 = -1LL;
	int32_t x227 = 8028;
	volatile uint8_t x228 = 0U;
	volatile int64_t t48 = -55695LL;

    t48 = (x225*(x226==(x227+x228)));

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x229 = INT64_MAX;
	int16_t x231 = 1;
	uint32_t x232 = 384U;
	static volatile int64_t t49 = 207580LL;

    t49 = (x229*(x230==(x231+x232)));

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x238 = INT8_MIN;
	volatile uint8_t x240 = 18U;
	int32_t t50 = -109932316;

    t50 = (x237*(x238==(x239+x240)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x241 = 41;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 0U;
	volatile int32_t t51 = -231;

    t51 = (x241*(x242==(x243+x244)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x245 = -1;
	int16_t x246 = -700;
	int16_t x248 = -1;
	int32_t t52 = 14;

    t52 = (x245*(x246==(x247+x248)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x249 = UINT32_MAX;
	static int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MIN;

    t53 = (x249*(x250==(x251+x252)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x257 = -1;
	uint64_t x258 = UINT64_MAX;
	int8_t x260 = -33;

    t54 = (x257*(x258==(x259+x260)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x261 = -1LL;
	int64_t x262 = 1120388074501529LL;
	volatile int32_t x263 = -1;
	static int16_t x264 = -1;

    t55 = (x261*(x262==(x263+x264)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x270 = INT32_MIN;
	static volatile int32_t t56 = -71883;

    t56 = (x269*(x270==(x271+x272)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x277 = -1;
	volatile int8_t x278 = INT8_MIN;
	static int32_t t57 = 0;

    t57 = (x277*(x278==(x279+x280)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x281 = 28040105499716LL;
	volatile uint64_t x282 = 5032162452085471090LLU;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = 1896168961349936823LLU;
	volatile int64_t t58 = -485425488LL;

    t58 = (x281*(x282==(x283+x284)));

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x285 = UINT64_MAX;
	int64_t x286 = INT64_MAX;
	static volatile int8_t x287 = INT8_MIN;
	static uint16_t x288 = 2358U;
	uint64_t t59 = 2036LLU;

    t59 = (x285*(x286==(x287+x288)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x289 = -1;
	static int64_t x291 = INT64_MIN;
	uint8_t x292 = 4U;

    t60 = (x289*(x290==(x291+x292)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x293 = INT32_MIN;
	uint64_t x294 = 2455216137LLU;
	volatile int16_t x295 = INT16_MIN;
	volatile int64_t x296 = -7565540LL;
	volatile int32_t t61 = 1;

    t61 = (x293*(x294==(x295+x296)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x297 = INT32_MAX;
	uint16_t x298 = UINT16_MAX;
	static volatile int16_t x299 = INT16_MAX;
	volatile int32_t t62 = 31818;

    t62 = (x297*(x298==(x299+x300)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x301 = UINT8_MAX;
	int32_t x302 = -5110;
	volatile int32_t x303 = -1;
	int32_t t63 = 323521;

    t63 = (x301*(x302==(x303+x304)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x307 = -4516;
	static volatile int32_t t64 = 451;

    t64 = (x305*(x306==(x307+x308)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x309 = -28;
	int32_t x310 = INT32_MAX;
	volatile uint16_t x311 = UINT16_MAX;
	static volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t65 = 15;

    t65 = (x309*(x310==(x311+x312)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x313 = -1;
	volatile int64_t x314 = 603LL;
	volatile uint32_t x315 = 18U;
	int32_t x316 = -1;

    t66 = (x313*(x314==(x315+x316)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x317 = INT32_MIN;
	volatile int32_t x318 = -22922605;
	static volatile int32_t t67 = 41;

    t67 = (x317*(x318==(x319+x320)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = -149605;
	uint8_t x326 = 37U;
	int8_t x327 = INT8_MIN;
	int64_t x328 = INT64_MAX;
	int32_t t68 = 83459729;

    t68 = (x325*(x326==(x327+x328)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x329 = INT64_MIN;
	volatile int16_t x330 = INT16_MIN;
	int64_t x332 = 5528644182LL;
	static volatile int64_t t69 = 3630LL;

    t69 = (x329*(x330==(x331+x332)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x333 = 108LL;
	volatile int16_t x334 = INT16_MIN;
	int16_t x336 = -24;
	int64_t t70 = -2361765617LL;

    t70 = (x333*(x334==(x335+x336)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x338 = INT16_MAX;
	int16_t x339 = 1;
	static int32_t t71 = 48351;

    t71 = (x337*(x338==(x339+x340)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x341 = -1;
	int64_t x342 = INT64_MAX;
	int64_t x344 = INT64_MAX;
	volatile int32_t t72 = 232353347;

    t72 = (x341*(x342==(x343+x344)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x345 = -1;
	static int64_t x346 = 59126260698357LL;
	volatile int32_t x348 = 48561422;
	int32_t t73 = 7;

    t73 = (x345*(x346==(x347+x348)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x350 = 8448U;
	uint16_t x351 = 19861U;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t74 = 75421;

    t74 = (x349*(x350==(x351+x352)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x353 = 104U;
	int32_t x356 = -499791106;
	volatile int32_t t75 = 1;

    t75 = (x353*(x354==(x355+x356)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x358 = INT64_MAX;
	volatile int32_t x359 = 1869;
	volatile uint16_t x360 = 186U;
	volatile uint64_t t76 = 24026650620LLU;

    t76 = (x357*(x358==(x359+x360)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x361 = 9742LLU;
	uint32_t x362 = 184583708U;
	volatile uint64_t x363 = 474050807LLU;
	int8_t x364 = 0;
	volatile uint64_t t77 = 130147724842657405LLU;

    t77 = (x361*(x362==(x363+x364)));

    if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x369 = 2468U;
	int32_t x370 = -1;
	volatile int64_t x371 = INT64_MIN;
	volatile uint32_t t78 = 169899U;

    t78 = (x369*(x370==(x371+x372)));

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x373 = -19158107611LL;
	int32_t x374 = 411791664;
	volatile int16_t x375 = -73;
	static int32_t x376 = -1;
	volatile int64_t t79 = -104LL;

    t79 = (x373*(x374==(x375+x376)));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x378 = -50551777065LL;
	int64_t x379 = -274234LL;
	uint64_t x380 = UINT64_MAX;

    t80 = (x377*(x378==(x379+x380)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x385 = 0;
	int16_t x386 = INT16_MIN;
	static volatile uint32_t x387 = UINT32_MAX;
	volatile uint8_t x388 = 1U;

    t81 = (x385*(x386==(x387+x388)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x395 = INT64_MIN;
	uint32_t x396 = 17370U;
	int32_t t82 = -5779531;

    t82 = (x393*(x394==(x395+x396)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int32_t x401 = INT32_MAX;
	uint8_t x403 = 53U;

    t83 = (x401*(x402==(x403+x404)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x409 = 0U;
	uint16_t x410 = 10U;
	int16_t x411 = INT16_MAX;
	int8_t x412 = -9;

    t84 = (x409*(x410==(x411+x412)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x413 = 3;
	uint16_t x414 = 473U;
	uint32_t x415 = UINT32_MAX;
	uint16_t x416 = UINT16_MAX;
	volatile int32_t t85 = 17;

    t85 = (x413*(x414==(x415+x416)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x417 = INT8_MIN;
	uint16_t x418 = 6151U;
	volatile uint8_t x419 = 7U;
	int8_t x420 = INT8_MIN;
	int32_t t86 = 23564;

    t86 = (x417*(x418==(x419+x420)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x422 = INT8_MAX;
	volatile uint16_t x423 = UINT16_MAX;
	volatile uint16_t x424 = UINT16_MAX;
	volatile int32_t t87 = 0;

    t87 = (x421*(x422==(x423+x424)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x425 = INT64_MAX;
	volatile int64_t x426 = INT64_MIN;
	uint32_t x428 = 6997003U;
	volatile int64_t t88 = 659010991117293LL;

    t88 = (x425*(x426==(x427+x428)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x429 = INT32_MIN;
	int16_t x430 = INT16_MAX;
	static int64_t x431 = -1LL;

    t89 = (x429*(x430==(x431+x432)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MAX;
	int8_t x435 = INT8_MIN;
	int64_t x436 = 165743912110780LL;
	int32_t t90 = 4127245;

    t90 = (x433*(x434==(x435+x436)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x437 = INT8_MIN;
	int64_t x439 = INT64_MIN;
	uint8_t x440 = 27U;

    t91 = (x437*(x438==(x439+x440)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x441 = 0;
	uint64_t x442 = 54386342608LLU;
	int8_t x444 = INT8_MAX;
	volatile int32_t t92 = -1554993;

    t92 = (x441*(x442==(x443+x444)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x445 = -1LL;
	int8_t x446 = INT8_MAX;
	uint16_t x447 = 8U;
	int8_t x448 = -3;
	int64_t t93 = -904LL;

    t93 = (x445*(x446==(x447+x448)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x449 = -6309608;
	uint32_t x452 = 0U;
	static int32_t t94 = -6;

    t94 = (x449*(x450==(x451+x452)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x453 = 61346U;
	int64_t x454 = -13349492499574329LL;
	uint64_t x455 = 5945563361152517LLU;
	static volatile uint32_t t95 = 7U;

    t95 = (x453*(x454==(x455+x456)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x457 = INT64_MAX;
	int64_t x458 = INT64_MIN;
	int8_t x459 = INT8_MIN;
	volatile int64_t t96 = -150LL;

    t96 = (x457*(x458==(x459+x460)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x465 = -464LL;
	int16_t x467 = INT16_MAX;
	uint8_t x468 = 5U;
	volatile int64_t t97 = -40116361315133LL;

    t97 = (x465*(x466==(x467+x468)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x469 = -1;
	int64_t x470 = -339866LL;
	uint16_t x471 = 57U;
	int8_t x472 = -1;
	static volatile int32_t t98 = -751;

    t98 = (x469*(x470==(x471+x472)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = 23;
	int16_t x474 = 1733;
	volatile uint8_t x475 = UINT8_MAX;
	int64_t x476 = -1LL;

    t99 = (x473*(x474==(x475+x476)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint16_t x478 = UINT16_MAX;
	uint32_t x479 = 6322561U;
	uint8_t x480 = 3U;
	int32_t t100 = 115886486;

    t100 = (x477*(x478==(x479+x480)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x481 = -1234709404LL;
	int64_t x483 = INT64_MIN;
	int32_t x484 = INT32_MAX;
	int64_t t101 = -12796182LL;

    t101 = (x481*(x482==(x483+x484)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint64_t x485 = 1298180192809LLU;
	int8_t x486 = INT8_MIN;
	static int16_t x487 = INT16_MIN;
	uint64_t x488 = 14471LLU;
	volatile uint64_t t102 = 2470227LLU;

    t102 = (x485*(x486==(x487+x488)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x490 = INT16_MIN;
	int64_t x491 = -1LL;
	volatile int32_t x492 = -2;
	int64_t t103 = 3376458733LL;

    t103 = (x489*(x490==(x491+x492)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x493 = -1LL;
	uint32_t x494 = 1180U;
	uint64_t x495 = 19569641595746LLU;
	volatile int32_t x496 = 39;

    t104 = (x493*(x494==(x495+x496)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x497 = INT8_MIN;
	volatile int64_t x498 = INT64_MIN;
	static uint16_t x499 = 68U;
	uint16_t x500 = 36U;

    t105 = (x497*(x498==(x499+x500)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x501 = 827U;
	volatile int64_t x502 = -1LL;
	int8_t x503 = -6;
	uint16_t x504 = 0U;
	int32_t t106 = 0;

    t106 = (x501*(x502==(x503+x504)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x506 = 42280U;
	static uint16_t x507 = 5538U;
	int64_t x508 = INT64_MIN;
	static int32_t t107 = 15547;

    t107 = (x505*(x506==(x507+x508)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x509 = INT64_MIN;
	int8_t x512 = -1;

    t108 = (x509*(x510==(x511+x512)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x513 = 64699964;
	int32_t x514 = INT32_MIN;
	uint16_t x515 = 806U;
	int8_t x516 = -1;
	volatile int32_t t109 = 4791541;

    t109 = (x513*(x514==(x515+x516)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x517 = 276U;
	static int32_t t110 = -155;

    t110 = (x517*(x518==(x519+x520)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x525 = INT16_MIN;
	uint32_t x526 = UINT32_MAX;
	uint32_t x527 = 30779U;
	int16_t x528 = INT16_MIN;

    t111 = (x525*(x526==(x527+x528)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x529 = UINT32_MAX;
	int32_t x530 = -1;
	int8_t x531 = INT8_MAX;
	static int32_t x532 = 4836;
	volatile uint32_t t112 = 21912U;

    t112 = (x529*(x530==(x531+x532)));

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x533 = UINT64_MAX;
	int64_t x534 = INT64_MIN;
	int16_t x535 = INT16_MIN;
	uint16_t x536 = 56U;
	uint64_t t113 = 1639076LLU;

    t113 = (x533*(x534==(x535+x536)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x539 = INT32_MAX;
	volatile int8_t x540 = INT8_MIN;
	static volatile int32_t t114 = 21980;

    t114 = (x537*(x538==(x539+x540)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x541 = 3563559U;
	static int8_t x542 = INT8_MAX;
	static int32_t x543 = 8650866;
	int16_t x544 = INT16_MAX;

    t115 = (x541*(x542==(x543+x544)));

    if (t115 != 0U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x546 = INT16_MIN;
	uint8_t x547 = 4U;
	int64_t t116 = -9482812850603995LL;

    t116 = (x545*(x546==(x547+x548)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x549 = -1LL;
	int16_t x550 = -109;
	static int64_t x552 = INT64_MIN;
	int64_t t117 = -361861398035855LL;

    t117 = (x549*(x550==(x551+x552)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x554 = -8759;
	volatile int64_t x555 = 0LL;
	uint16_t x556 = UINT16_MAX;
	int32_t t118 = 0;

    t118 = (x553*(x554==(x555+x556)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x559 = 127067239;
	int64_t t119 = 11565617160177LL;

    t119 = (x557*(x558==(x559+x560)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x561 = INT32_MIN;
	int64_t x562 = INT64_MIN;
	int8_t x563 = INT8_MAX;
	int8_t x564 = INT8_MAX;
	volatile int32_t t120 = -119351504;

    t120 = (x561*(x562==(x563+x564)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x565 = -30357201637781LL;
	int16_t x567 = 0;
	int64_t t121 = 908368093LL;

    t121 = (x565*(x566==(x567+x568)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x569 = 42U;
	int16_t x570 = INT16_MIN;
	static int64_t x571 = -1LL;
	int8_t x572 = INT8_MIN;

    t122 = (x569*(x570==(x571+x572)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x577 = 190400LLU;
	int16_t x580 = INT16_MIN;
	static volatile uint64_t t123 = 3845LLU;

    t123 = (x577*(x578==(x579+x580)));

    if (t123 != 0LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x585 = INT64_MAX;
	volatile uint8_t x586 = 8U;
	volatile int16_t x587 = INT16_MIN;
	static volatile int16_t x588 = 1;
	int64_t t124 = 2995728466601873768LL;

    t124 = (x585*(x586==(x587+x588)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x590 = INT16_MAX;
	uint64_t x591 = 15327418LLU;
	int32_t x592 = -1;
	volatile int64_t t125 = 4212531608LL;

    t125 = (x589*(x590==(x591+x592)));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x593 = INT8_MIN;
	int16_t x594 = 4315;
	uint8_t x595 = 1U;
	volatile int32_t t126 = 318541669;

    t126 = (x593*(x594==(x595+x596)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x597 = UINT64_MAX;
	int16_t x598 = INT16_MIN;
	volatile uint32_t x599 = UINT32_MAX;
	int8_t x600 = INT8_MAX;
	uint64_t t127 = 73LLU;

    t127 = (x597*(x598==(x599+x600)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x601 = UINT8_MAX;
	uint8_t x602 = 35U;
	uint16_t x603 = 1401U;
	volatile int32_t t128 = -18811606;

    t128 = (x601*(x602==(x603+x604)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x605 = 13;
	int64_t x606 = 7698925879513819LL;
	int16_t x607 = -114;
	volatile uint16_t x608 = 2U;
	int32_t t129 = 0;

    t129 = (x605*(x606==(x607+x608)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x613 = 214252279LLU;
	static int64_t x614 = INT64_MAX;
	uint32_t x615 = UINT32_MAX;
	int64_t x616 = INT64_MIN;
	static uint64_t t130 = 800463668LLU;

    t130 = (x613*(x614==(x615+x616)));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x617 = INT32_MIN;
	static int32_t x618 = INT32_MAX;
	static int8_t x619 = 1;

    t131 = (x617*(x618==(x619+x620)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x621 = -1;
	volatile int32_t t132 = 78539;

    t132 = (x621*(x622==(x623+x624)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x625 = UINT32_MAX;
	uint32_t x626 = UINT32_MAX;
	int64_t x627 = 12054812LL;
	int16_t x628 = -1;
	uint32_t t133 = 627022849U;

    t133 = (x625*(x626==(x627+x628)));

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x633 = 1;
	volatile uint64_t x635 = 1524LLU;

    t134 = (x633*(x634==(x635+x636)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x637 = INT8_MAX;
	int8_t x638 = INT8_MAX;
	static int16_t x639 = INT16_MIN;
	int8_t x640 = INT8_MAX;
	static int32_t t135 = -1626593;

    t135 = (x637*(x638==(x639+x640)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x641 = INT16_MAX;
	int64_t x642 = INT64_MIN;
	volatile uint64_t x643 = UINT64_MAX;
	int32_t x644 = 122989;
	volatile int32_t t136 = 140899886;

    t136 = (x641*(x642==(x643+x644)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x647 = 7LLU;
	int32_t x648 = INT32_MIN;
	volatile int32_t t137 = -779552699;

    t137 = (x645*(x646==(x647+x648)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x653 = UINT16_MAX;
	uint64_t x655 = 489113266LLU;
	static volatile int32_t t138 = 220;

    t138 = (x653*(x654==(x655+x656)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x661 = 24U;
	uint8_t x662 = UINT8_MAX;
	volatile int16_t x663 = -1;
	int16_t x664 = -1;
	int32_t t139 = -21531857;

    t139 = (x661*(x662==(x663+x664)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x667 = -1;
	int64_t x668 = -1115640558LL;
	volatile int32_t t140 = 1489815;

    t140 = (x665*(x666==(x667+x668)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x669 = 3;
	uint16_t x670 = 85U;
	static int16_t x671 = INT16_MAX;
	static volatile int32_t x672 = -1;
	volatile int32_t t141 = -235585;

    t141 = (x669*(x670==(x671+x672)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t t142 = -2438444831126368165LL;

    t142 = (x673*(x674==(x675+x676)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x677 = INT16_MIN;
	uint8_t x678 = UINT8_MAX;
	volatile uint64_t x679 = 20320942LLU;
	static int16_t x680 = INT16_MIN;
	int32_t t143 = 6764;

    t143 = (x677*(x678==(x679+x680)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x682 = -1;
	int8_t x683 = -1;
	uint16_t x684 = 4U;
	uint64_t t144 = 2227481446834302LLU;

    t144 = (x681*(x682==(x683+x684)));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x685 = 165U;
	int64_t x686 = INT64_MAX;
	uint32_t x687 = 21U;
	static volatile int16_t x688 = 1;
	int32_t t145 = -37559;

    t145 = (x685*(x686==(x687+x688)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x693 = 85U;
	volatile int16_t x695 = INT16_MAX;
	volatile int32_t t146 = -89111;

    t146 = (x693*(x694==(x695+x696)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x700 = 1;
	int32_t t147 = -129;

    t147 = (x697*(x698==(x699+x700)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x701 = INT32_MAX;
	int16_t x702 = INT16_MIN;
	static volatile uint16_t x703 = 4U;
	static volatile int32_t t148 = 6051;

    t148 = (x701*(x702==(x703+x704)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x705 = INT32_MIN;
	int64_t x706 = -1LL;
	int64_t x707 = -1LL;
	int32_t t149 = INT32_MIN;

    t149 = (x705*(x706==(x707+x708)));

    if (t149 != INT32_MIN) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x709 = INT8_MIN;
	static int8_t x711 = INT8_MAX;
	volatile uint8_t x712 = 35U;
	volatile int32_t t150 = -57058;

    t150 = (x709*(x710==(x711+x712)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x713 = -1;
	uint64_t x714 = 15181LLU;
	int64_t x715 = INT64_MIN;
	uint32_t x716 = UINT32_MAX;

    t151 = (x713*(x714==(x715+x716)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x717 = INT8_MAX;
	static int16_t x720 = INT16_MAX;
	static int32_t t152 = -46752252;

    t152 = (x717*(x718==(x719+x720)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x721 = INT16_MIN;
	int8_t x722 = INT8_MAX;
	uint64_t x723 = 2625LLU;
	int64_t x724 = INT64_MIN;
	volatile int32_t t153 = -902;

    t153 = (x721*(x722==(x723+x724)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x725 = 39689447;
	uint16_t x726 = 5447U;
	uint8_t x727 = UINT8_MAX;
	static int8_t x728 = INT8_MAX;
	int32_t t154 = -3968076;

    t154 = (x725*(x726==(x727+x728)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x729 = INT32_MIN;
	int16_t x730 = INT16_MAX;
	int8_t x731 = INT8_MIN;
	int16_t x732 = 33;
	int32_t t155 = -54;

    t155 = (x729*(x730==(x731+x732)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x738 = INT32_MAX;
	static int32_t t156 = -714;

    t156 = (x737*(x738==(x739+x740)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x749 = 4;
	int16_t x752 = INT16_MAX;

    t157 = (x749*(x750==(x751+x752)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x753 = UINT8_MAX;
	uint16_t x754 = 48U;
	int32_t t158 = -1756484;

    t158 = (x753*(x754==(x755+x756)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x757 = 4U;
	volatile uint16_t x758 = 2U;
	static uint32_t x759 = 2548556U;
	int32_t x760 = INT32_MIN;
	uint32_t t159 = 3441U;

    t159 = (x757*(x758==(x759+x760)));

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x762 = 0U;
	uint64_t x763 = 35680131740561LLU;
	volatile uint16_t x764 = UINT16_MAX;

    t160 = (x761*(x762==(x763+x764)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x765 = 641U;
	uint32_t x766 = UINT32_MAX;
	volatile int64_t x767 = -344327799013283197LL;
	int64_t x768 = -1LL;
	uint32_t t161 = 25400500U;

    t161 = (x765*(x766==(x767+x768)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x769 = INT32_MIN;
	volatile int32_t x770 = 823;
	int32_t x771 = 86;
	int16_t x772 = INT16_MAX;
	volatile int32_t t162 = 1601691;

    t162 = (x769*(x770==(x771+x772)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x773 = INT8_MIN;
	int16_t x774 = INT16_MIN;
	volatile uint64_t x776 = 1LLU;
	int32_t t163 = 1642552;

    t163 = (x773*(x774==(x775+x776)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x777 = 2123U;
	int64_t x778 = 39130983634228LL;
	static uint64_t x779 = UINT64_MAX;
	static int16_t x780 = 251;
	volatile int32_t t164 = 630;

    t164 = (x777*(x778==(x779+x780)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x781 = 3919868297851066LLU;
	static int8_t x782 = INT8_MAX;
	uint16_t x783 = 1U;
	int64_t x784 = INT64_MIN;
	static uint64_t t165 = 7828344163LLU;

    t165 = (x781*(x782==(x783+x784)));

    if (t165 != 0LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x786 = 2;
	int64_t x787 = -11742133034857LL;
	volatile int16_t x788 = INT16_MAX;

    t166 = (x785*(x786==(x787+x788)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x797 = INT64_MIN;
	int16_t x798 = -1300;
	int32_t x799 = INT32_MIN;
	static uint64_t x800 = UINT64_MAX;
	static volatile int64_t t167 = 1658405LL;

    t167 = (x797*(x798==(x799+x800)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x801 = INT32_MIN;
	volatile uint32_t x802 = 53163258U;
	volatile int32_t x803 = INT32_MAX;
	static uint32_t x804 = 14609U;
	volatile int32_t t168 = -1023514;

    t168 = (x801*(x802==(x803+x804)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x805 = 3700LL;
	int16_t x806 = 15702;
	uint64_t x807 = 7171368026740LLU;
	uint64_t x808 = UINT64_MAX;
	volatile int64_t t169 = -4LL;

    t169 = (x805*(x806==(x807+x808)));

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x811 = 57745758U;
	static int64_t x812 = INT64_MIN;
	volatile int32_t t170 = 1;

    t170 = (x809*(x810==(x811+x812)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x813 = INT8_MIN;
	uint16_t x814 = UINT16_MAX;
	uint64_t x816 = 4479964883059274803LLU;

    t171 = (x813*(x814==(x815+x816)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x817 = INT32_MIN;
	volatile int8_t x818 = -1;
	volatile int8_t x819 = INT8_MIN;
	uint32_t x820 = 36U;
	volatile int32_t t172 = 21;

    t172 = (x817*(x818==(x819+x820)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x821 = -87;
	uint8_t x822 = 5U;
	uint8_t x824 = UINT8_MAX;
	volatile int32_t t173 = 946588279;

    t173 = (x821*(x822==(x823+x824)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x825 = INT32_MIN;
	int8_t x826 = 40;
	static int16_t x827 = 5393;
	uint32_t x828 = UINT32_MAX;
	int32_t t174 = -1;

    t174 = (x825*(x826==(x827+x828)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x833 = -116LL;
	volatile int64_t x834 = INT64_MAX;
	int64_t x835 = INT64_MIN;
	int16_t x836 = 0;

    t175 = (x833*(x834==(x835+x836)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x837 = INT16_MAX;
	uint8_t x838 = 92U;
	int16_t x839 = 99;
	int8_t x840 = -1;
	volatile int32_t t176 = 973488770;

    t176 = (x837*(x838==(x839+x840)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x841 = INT64_MIN;
	static int32_t x842 = INT32_MIN;
	uint8_t x844 = 17U;
	int64_t t177 = -93086954653295LL;

    t177 = (x841*(x842==(x843+x844)));

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x850 = 106;
	int32_t x851 = -1;
	volatile uint64_t x852 = 9682375085LLU;
	static int64_t t178 = 0LL;

    t178 = (x849*(x850==(x851+x852)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x853 = 1285U;
	static volatile int32_t x854 = INT32_MAX;
	int16_t x855 = INT16_MAX;
	int8_t x856 = -1;
	static volatile uint32_t t179 = 0U;

    t179 = (x853*(x854==(x855+x856)));

    if (t179 != 0U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x857 = 9U;
	int32_t x858 = INT32_MAX;
	uint16_t x859 = UINT16_MAX;
	volatile uint64_t x860 = UINT64_MAX;
	volatile int32_t t180 = -13;

    t180 = (x857*(x858==(x859+x860)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x866 = -10;
	int32_t x867 = INT32_MAX;
	volatile int16_t x868 = INT16_MIN;

    t181 = (x865*(x866==(x867+x868)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x869 = 6233LLU;
	static volatile int16_t x870 = INT16_MAX;
	static volatile int64_t x871 = -230LL;
	int64_t x872 = -209348041LL;
	static uint64_t t182 = 53866990667768642LLU;

    t182 = (x869*(x870==(x871+x872)));

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x877 = -5LL;
	int16_t x878 = INT16_MIN;
	int64_t x879 = -919LL;
	int64_t t183 = -132912LL;

    t183 = (x877*(x878==(x879+x880)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x885 = 49LLU;
	int32_t x887 = INT32_MIN;
	int64_t x888 = -8LL;
	uint64_t t184 = 8442993215LLU;

    t184 = (x885*(x886==(x887+x888)));

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x889 = 89019381U;
	int16_t x891 = -4003;
	int64_t x892 = -1LL;
	static volatile uint32_t t185 = 1353667616U;

    t185 = (x889*(x890==(x891+x892)));

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x894 = 19533LLU;
	uint16_t x895 = UINT16_MAX;
	int16_t x896 = 0;
	volatile int32_t t186 = 2685713;

    t186 = (x893*(x894==(x895+x896)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x897 = 59;
	int8_t x898 = INT8_MIN;
	volatile int32_t t187 = 0;

    t187 = (x897*(x898==(x899+x900)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x902 = -1;
	static volatile int16_t x903 = INT16_MIN;

    t188 = (x901*(x902==(x903+x904)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x907 = INT16_MIN;
	int64_t x908 = 7591LL;

    t189 = (x905*(x906==(x907+x908)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x909 = UINT8_MAX;
	int64_t x910 = 21672LL;
	static int16_t x911 = INT16_MIN;
	int16_t x912 = -1;

    t190 = (x909*(x910==(x911+x912)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x913 = 0U;
	static uint8_t x915 = 50U;
	int16_t x916 = INT16_MIN;
	static int32_t t191 = -6331276;

    t191 = (x913*(x914==(x915+x916)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x917 = UINT64_MAX;
	int64_t x918 = -1LL;
	volatile int8_t x919 = -1;
	volatile uint16_t x920 = 0U;

    t192 = (x917*(x918==(x919+x920)));

    if (t192 != UINT64_MAX) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x921 = INT64_MIN;
	volatile int32_t x922 = -618114943;
	volatile int16_t x924 = -1;
	int64_t t193 = 28LL;

    t193 = (x921*(x922==(x923+x924)));

    if (t193 != 0LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x925 = -31071144178LL;
	int8_t x927 = INT8_MAX;
	volatile uint32_t x928 = 3916U;
	static volatile int64_t t194 = -1046049LL;

    t194 = (x925*(x926==(x927+x928)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x930 = 1U;
	volatile int32_t x931 = -1;
	uint32_t x932 = UINT32_MAX;
	int32_t t195 = 94;

    t195 = (x929*(x930==(x931+x932)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x938 = INT8_MIN;
	volatile uint16_t x939 = 1736U;
	volatile uint64_t x940 = 62376877285190638LLU;
	volatile int64_t t196 = 977601703265105862LL;

    t196 = (x937*(x938==(x939+x940)));

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x949 = 0;
	static volatile uint64_t x950 = UINT64_MAX;
	int16_t x951 = INT16_MIN;
	uint64_t x952 = 3855318739144074749LLU;
	volatile int32_t t197 = -50101;

    t197 = (x949*(x950==(x951+x952)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x957 = -1;
	uint64_t x958 = 7387198958923LLU;
	int8_t x960 = 5;
	static int32_t t198 = 67713279;

    t198 = (x957*(x958==(x959+x960)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x961 = 234431295;
	uint32_t x963 = 7U;
	int32_t t199 = -36462119;

    t199 = (x961*(x962==(x963+x964)));

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

