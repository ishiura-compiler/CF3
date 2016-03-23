
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

static uint32_t x1 = 12789659U;
uint8_t x2 = UINT8_MAX;
static volatile int64_t x8 = 66242LL;
int64_t t1 = 2778183164LL;
int32_t t3 = 2;
uint64_t x27 = 253472347625922267LLU;
int8_t x28 = 1;
uint64_t x46 = UINT64_MAX;
int64_t x56 = INT64_MIN;
int32_t t8 = 4435;
uint8_t x63 = UINT8_MAX;
volatile int32_t t9 = 8752;
int32_t x65 = 218;
static volatile int64_t t11 = 11730370LL;
static uint32_t x82 = UINT32_MAX;
int32_t x92 = -61;
static int32_t t13 = 195644822;
volatile int64_t x97 = -1LL;
int16_t x98 = -1;
int64_t x102 = 7805874415566903LL;
volatile int64_t x103 = 19LL;
uint64_t t15 = 58284469634LLU;
int64_t x118 = -1LL;
int32_t x119 = -1;
int16_t x128 = INT16_MAX;
static uint16_t x130 = 18643U;
int8_t x131 = -1;
int32_t t20 = 11643;
volatile int8_t x136 = INT8_MAX;
uint32_t x142 = UINT32_MAX;
uint16_t x143 = 18U;
static volatile int64_t x147 = -1LL;
int8_t x150 = INT8_MIN;
uint64_t x151 = 172055807082675LLU;
int64_t x156 = -16646814146689LL;
volatile uint16_t x161 = UINT16_MAX;
static volatile uint32_t x165 = 22700363U;
int16_t x170 = 1;
int8_t x183 = INT8_MIN;
volatile int64_t x184 = -35571900718606LL;
int32_t x194 = -1;
static volatile int64_t t35 = -49966124209861LL;
static int64_t x203 = -1181332418LL;
volatile int32_t t38 = 0;
volatile int64_t x228 = INT64_MIN;
int16_t x237 = 57;
int8_t x251 = 0;
volatile int32_t t45 = 3834982;
uint64_t x259 = 28LLU;
int16_t x262 = INT16_MIN;
uint32_t x264 = UINT32_MAX;
static int8_t x267 = 15;
int32_t t49 = 0;
static int16_t x277 = -1;
int8_t x294 = 5;
volatile int16_t x304 = INT16_MIN;
int64_t x307 = -29LL;
int16_t x308 = INT16_MIN;
int16_t x310 = -10394;
static volatile uint8_t x316 = UINT8_MAX;
static uint32_t x325 = 1353256U;
static uint32_t x335 = UINT32_MAX;
uint32_t x336 = 88924U;
static int32_t x337 = -13647231;
static uint32_t x338 = 122795U;
int64_t t64 = -130924896501938LL;
static int64_t x347 = INT64_MIN;
int32_t x352 = INT32_MIN;
volatile int32_t t66 = 2760108;
int16_t x361 = INT16_MIN;
static uint32_t x374 = 4U;
int32_t x385 = -229428;
static volatile int64_t x388 = INT64_MIN;
static volatile int64_t t73 = 222689660LL;
int32_t x392 = INT32_MIN;
uint64_t x396 = 14LLU;
int32_t x401 = 664971895;
volatile int16_t x402 = INT16_MAX;
int32_t t76 = 0;
static int64_t x422 = INT64_MAX;
uint8_t x435 = 112U;
static int32_t t83 = -10;
volatile int8_t x456 = -13;
volatile int32_t t86 = -96094;
int8_t x466 = INT8_MIN;
int8_t x480 = INT8_MIN;
volatile uint32_t x487 = 146862670U;
int8_t x488 = INT8_MIN;
int32_t x495 = -53;
static volatile int32_t x496 = -1;
volatile int32_t t94 = -18992289;
int32_t t95 = 14817830;
static int8_t x513 = -27;
int64_t x516 = -1LL;
int32_t x517 = -1524048;
static int16_t x521 = INT16_MIN;
static int32_t x523 = INT32_MIN;
static volatile uint32_t t100 = 3570U;
int32_t t102 = -111560496;
uint64_t x539 = 105213LLU;
volatile int8_t x543 = INT8_MIN;
int64_t x547 = -19471161871292LL;
uint64_t x557 = 5141525095710LLU;
uint32_t x563 = 384U;
uint16_t x573 = UINT16_MAX;
int32_t t111 = 15862;
int64_t x593 = 134398504676LL;
volatile int8_t x603 = INT8_MIN;
int16_t x604 = INT16_MIN;
uint8_t x607 = 55U;
int16_t x609 = INT16_MIN;
volatile int32_t x622 = -1253234;
volatile uint32_t t120 = 595007068U;
int32_t x633 = INT32_MIN;
volatile int32_t t125 = 3387;
int16_t x657 = INT16_MAX;
int8_t x658 = -4;
int16_t x659 = INT16_MAX;
volatile uint16_t x666 = 1U;
volatile int8_t x670 = INT8_MAX;
int8_t x671 = -1;
uint8_t x676 = 7U;
static int32_t x678 = -1828;
int32_t t132 = 542;
int8_t x690 = INT8_MAX;
uint8_t x703 = UINT8_MAX;
uint16_t x707 = 10U;
volatile int64_t x708 = INT64_MIN;
uint64_t x711 = 416405LLU;
static uint32_t x712 = UINT32_MAX;
uint32_t t137 = 15692472U;
static uint16_t x722 = UINT16_MAX;
uint8_t x723 = 0U;
volatile int8_t x724 = INT8_MAX;
volatile uint8_t x738 = 63U;
uint16_t x739 = UINT16_MAX;
int16_t x770 = INT16_MAX;
uint64_t x772 = 35651999238949421LLU;
static uint16_t x778 = UINT16_MAX;
int32_t x782 = INT32_MIN;
int32_t t147 = 9368293;
volatile int16_t x785 = INT16_MIN;
volatile int64_t t148 = 15349454LL;
int8_t x790 = 1;
volatile int64_t t149 = 3LL;
static uint16_t x795 = 15U;
int32_t t151 = 530232495;
volatile uint8_t x806 = 0U;
static uint64_t x817 = 441LLU;
volatile uint32_t t155 = 681927U;
volatile uint64_t x824 = 31LLU;
static int64_t x830 = 497226786573389LL;
static volatile int32_t x833 = INT32_MAX;
volatile uint64_t x838 = 861451198LLU;
int32_t x841 = -1;
uint16_t x842 = 32U;
static volatile uint32_t x847 = 702U;
int64_t x850 = INT64_MAX;
static uint64_t x852 = 3746LLU;
int16_t x866 = -3;
int8_t x876 = -49;
int32_t x878 = -1;
int64_t x880 = INT64_MAX;
uint64_t t168 = 480130LLU;
int8_t x888 = 0;
static volatile uint32_t x894 = UINT32_MAX;
int32_t x896 = INT32_MIN;
static int16_t x911 = -1;
uint8_t x914 = UINT8_MAX;
volatile int64_t x917 = INT64_MIN;
static uint32_t x927 = 1U;
int32_t x929 = INT32_MIN;
volatile uint16_t x932 = UINT16_MAX;
static uint32_t x943 = 89U;
uint32_t x944 = UINT32_MAX;
int32_t x946 = -1;
int8_t x948 = -13;
int32_t t181 = 5112640;
static uint16_t x953 = 5U;
static uint32_t x958 = 846503U;
int16_t x984 = -33;
volatile uint32_t x988 = 10054U;
static int16_t x996 = -1;
int64_t x1004 = INT64_MIN;
static volatile uint16_t x1008 = 746U;
uint16_t x1017 = 1U;
int8_t x1021 = -1;
volatile uint8_t x1022 = UINT8_MAX;
int64_t x1028 = INT64_MIN;
volatile int16_t x1031 = INT16_MIN;
volatile int32_t t196 = 0;
uint32_t x1039 = 266U;
int32_t t197 = 0;
uint16_t x1041 = 789U;
uint8_t x1042 = 0U;
int64_t x1048 = INT64_MIN;
int64_t t199 = -15190LL;


void f0(void) {
    	static int8_t x3 = 0;
	volatile int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = -336358979392LL;

    t0 = ((x1!=(x2*x3))^x4);

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1605601;
	uint8_t x6 = UINT8_MAX;
	uint64_t x7 = UINT64_MAX;

    t1 = ((x5!=(x6*x7))^x8);

    if (t1 != 66243LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 167113U;
	static int64_t x10 = -17LL;
	uint64_t x11 = 19641924089435131LLU;
	uint8_t x12 = 31U;
	int32_t t2 = -733994;

    t2 = ((x9!=(x10*x11))^x12);

    if (t2 != 30) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MAX;
	int32_t x14 = -1078519;
	int8_t x15 = INT8_MIN;
	uint8_t x16 = UINT8_MAX;

    t3 = ((x13!=(x14*x15))^x16);

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -425857197LL;
	volatile uint16_t x18 = 1U;
	int16_t x19 = -1;
	static int8_t x20 = -1;
	static volatile int32_t t4 = -10098;

    t4 = ((x17!=(x18*x19))^x20);

    if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x25 = 1584U;
	int32_t x26 = INT32_MAX;
	int32_t t5 = 12;

    t5 = ((x25!=(x26*x27))^x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x45 = 5LLU;
	int8_t x47 = 5;
	volatile int16_t x48 = INT16_MAX;
	int32_t t6 = -1388;

    t6 = ((x45!=(x46*x47))^x48);

    if (t6 != 32766) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x53 = -443LL;
	int32_t x54 = 225;
	uint64_t x55 = UINT64_MAX;
	static volatile int64_t t7 = 2041635769LL;

    t7 = ((x53!=(x54*x55))^x56);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x57 = 364LL;
	static int8_t x58 = 0;
	int8_t x59 = -39;
	int16_t x60 = INT16_MIN;

    t8 = ((x57!=(x58*x59))^x60);

    if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = -1;
	int8_t x62 = -1;
	int16_t x64 = -1;

    t9 = ((x61!=(x62*x63))^x64);

    if (t9 != -2) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x66 = 4477LLU;
	volatile int16_t x67 = -3452;
	uint8_t x68 = UINT8_MAX;
	int32_t t10 = 0;

    t10 = ((x65!=(x66*x67))^x68);

    if (t10 != 254) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x73 = UINT64_MAX;
	volatile int16_t x74 = -1;
	int8_t x75 = 3;
	int64_t x76 = INT64_MIN;

    t11 = ((x73!=(x74*x75))^x76);

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x81 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;
	uint32_t x84 = UINT32_MAX;
	uint32_t t12 = 2580304U;

    t12 = ((x81!=(x82*x83))^x84);

    if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x89 = 2;
	int8_t x90 = -1;
	int32_t x91 = INT32_MAX;

    t13 = ((x89!=(x90*x91))^x92);

    if (t13 != -62) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x99 = 13U;
	int32_t x100 = -3442736;
	volatile int32_t t14 = 1249;

    t14 = ((x97!=(x98*x99))^x100);

    if (t14 != -3442735) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x101 = INT8_MIN;
	uint64_t x104 = 61688LLU;

    t15 = ((x101!=(x102*x103))^x104);

    if (t15 != 61689LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x113 = 13U;
	volatile int16_t x114 = 2;
	uint64_t x115 = UINT64_MAX;
	static volatile int8_t x116 = INT8_MAX;
	volatile int32_t t16 = 2025;

    t16 = ((x113!=(x114*x115))^x116);

    if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x117 = -13;
	int16_t x120 = INT16_MIN;
	int32_t t17 = -1763487;

    t17 = ((x117!=(x118*x119))^x120);

    if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x121 = 128U;
	static uint32_t x122 = 36U;
	int16_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	static volatile int32_t t18 = -5756;

    t18 = ((x121!=(x122*x123))^x124);

    if (t18 != 254) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x125 = 22;
	volatile int64_t x126 = -125684429296858158LL;
	int8_t x127 = -38;
	int32_t t19 = 79;

    t19 = ((x125!=(x126*x127))^x128);

    if (t19 != 32766) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x129 = 317704905U;
	int8_t x132 = INT8_MIN;

    t20 = ((x129!=(x130*x131))^x132);

    if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x133 = 332U;
	uint8_t x134 = 3U;
	static uint16_t x135 = UINT16_MAX;
	static int32_t t21 = 97568035;

    t21 = ((x133!=(x134*x135))^x136);

    if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x137 = 15;
	static uint16_t x138 = 3479U;
	uint16_t x139 = 5U;
	uint64_t x140 = 309129642915LLU;
	volatile uint64_t t22 = 66893082395091LLU;

    t22 = ((x137!=(x138*x139))^x140);

    if (t22 != 309129642914LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x141 = 42224730297LL;
	uint32_t x144 = 647209360U;
	volatile uint32_t t23 = 1866403U;

    t23 = ((x141!=(x142*x143))^x144);

    if (t23 != 647209361U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x145 = -1LL;
	int32_t x146 = -127179;
	volatile int16_t x148 = -34;
	int32_t t24 = -596;

    t24 = ((x145!=(x146*x147))^x148);

    if (t24 != -33) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x149 = 100723U;
	static uint8_t x152 = UINT8_MAX;
	int32_t t25 = -46;

    t25 = ((x149!=(x150*x151))^x152);

    if (t25 != 254) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x153 = -18;
	int16_t x154 = INT16_MAX;
	int8_t x155 = INT8_MIN;
	volatile int64_t t26 = -54682561761272LL;

    t26 = ((x153!=(x154*x155))^x156);

    if (t26 != -16646814146690LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x157 = INT32_MIN;
	uint64_t x158 = 1926925040625561579LLU;
	static int64_t x159 = 245247868LL;
	int8_t x160 = INT8_MAX;
	int32_t t27 = -11938;

    t27 = ((x157!=(x158*x159))^x160);

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x162 = 140912049932517873LLU;
	static int16_t x163 = -1798;
	volatile uint8_t x164 = UINT8_MAX;
	volatile int32_t t28 = 10054097;

    t28 = ((x161!=(x162*x163))^x164);

    if (t28 != 254) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x166 = 12;
	int32_t x167 = -1;
	int64_t x168 = INT64_MAX;
	int64_t t29 = -143117LL;

    t29 = ((x165!=(x166*x167))^x168);

    if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x169 = UINT64_MAX;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = 2170;
	int32_t t30 = 2741796;

    t30 = ((x169!=(x170*x171))^x172);

    if (t30 != 2171) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x181 = INT64_MAX;
	int8_t x182 = -1;
	int64_t t31 = 7LL;

    t31 = ((x181!=(x182*x183))^x184);

    if (t31 != -35571900718605LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x185 = 20053838U;
	static uint32_t x186 = UINT32_MAX;
	volatile uint16_t x187 = 3560U;
	static int16_t x188 = INT16_MIN;
	int32_t t32 = -19266019;

    t32 = ((x185!=(x186*x187))^x188);

    if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x189 = INT16_MAX;
	int8_t x190 = -1;
	static volatile int64_t x191 = -1LL;
	static int32_t x192 = 47715890;
	volatile int32_t t33 = 940436;

    t33 = ((x189!=(x190*x191))^x192);

    if (t33 != 47715891) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x193 = INT64_MAX;
	int16_t x195 = -1;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t34 = -1780;

    t34 = ((x193!=(x194*x195))^x196);

    if (t34 != 126) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = UINT64_MAX;
	volatile uint64_t x199 = 165187541930LLU;
	int64_t x200 = INT64_MAX;

    t35 = ((x197!=(x198*x199))^x200);

    if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x201 = -29;
	int32_t x202 = INT32_MIN;
	volatile int64_t x204 = INT64_MIN;
	int64_t t36 = -5073817215038006LL;

    t36 = ((x201!=(x202*x203))^x204);

    if (t36 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x213 = INT64_MAX;
	uint8_t x214 = 12U;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = 1;
	int32_t t37 = -84610;

    t37 = ((x213!=(x214*x215))^x216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x221 = INT32_MAX;
	int64_t x222 = -1LL;
	int8_t x223 = INT8_MAX;
	volatile int8_t x224 = INT8_MIN;

    t38 = ((x221!=(x222*x223))^x224);

    if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x225 = UINT32_MAX;
	uint64_t x226 = 179423345706771190LLU;
	uint32_t x227 = 53U;
	static int64_t t39 = -90LL;

    t39 = ((x225!=(x226*x227))^x228);

    if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x229 = 977821404;
	int16_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	int16_t x232 = 3266;
	static volatile int32_t t40 = 0;

    t40 = ((x229!=(x230*x231))^x232);

    if (t40 != 3267) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x233 = INT8_MAX;
	volatile uint16_t x234 = 285U;
	static int16_t x235 = 7;
	int8_t x236 = 3;
	volatile int32_t t41 = -1;

    t41 = ((x233!=(x234*x235))^x236);

    if (t41 != 2) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x238 = -1;
	static int64_t x239 = 14104708227LL;
	int32_t x240 = 7;
	volatile int32_t t42 = 6;

    t42 = ((x237!=(x238*x239))^x240);

    if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x241 = 1U;
	int16_t x242 = INT16_MAX;
	uint32_t x243 = UINT32_MAX;
	static int16_t x244 = 2;
	static int32_t t43 = -114;

    t43 = ((x241!=(x242*x243))^x244);

    if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x245 = 2U;
	int16_t x246 = 744;
	volatile int8_t x247 = INT8_MAX;
	int32_t x248 = INT32_MAX;
	int32_t t44 = -1;

    t44 = ((x245!=(x246*x247))^x248);

    if (t44 != 2147483646) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x249 = INT32_MIN;
	static uint64_t x250 = 183878LLU;
	uint16_t x252 = 886U;

    t45 = ((x249!=(x250*x251))^x252);

    if (t45 != 887) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x257 = -1;
	uint32_t x258 = UINT32_MAX;
	int8_t x260 = INT8_MAX;
	int32_t t46 = -125687936;

    t46 = ((x257!=(x258*x259))^x260);

    if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x261 = -6;
	uint64_t x263 = 25260LLU;
	volatile uint32_t t47 = 0U;

    t47 = ((x261!=(x262*x263))^x264);

    if (t47 != 4294967294U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x265 = INT32_MAX;
	static volatile int8_t x266 = INT8_MIN;
	uint64_t x268 = 955335LLU;
	uint64_t t48 = 41785LLU;

    t48 = ((x265!=(x266*x267))^x268);

    if (t48 != 955334LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x269 = 245218539256158LL;
	uint64_t x270 = 321765614456LLU;
	int64_t x271 = -30LL;
	int16_t x272 = -1;

    t49 = ((x269!=(x270*x271))^x272);

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x273 = -1;
	volatile int64_t x274 = INT64_MAX;
	static uint64_t x275 = 73006856LLU;
	uint8_t x276 = 54U;
	volatile int32_t t50 = 14014957;

    t50 = ((x273!=(x274*x275))^x276);

    if (t50 != 55) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x278 = -1638;
	int16_t x279 = INT16_MIN;
	static uint16_t x280 = 891U;
	int32_t t51 = 234581;

    t51 = ((x277!=(x278*x279))^x280);

    if (t51 != 890) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x281 = INT64_MAX;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	int32_t t52 = 4;

    t52 = ((x281!=(x282*x283))^x284);

    if (t52 != 65534) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint64_t x289 = UINT64_MAX;
	int8_t x290 = INT8_MIN;
	int32_t x291 = -1;
	uint32_t x292 = 109388U;
	uint32_t t53 = 10553U;

    t53 = ((x289!=(x290*x291))^x292);

    if (t53 != 109389U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x293 = 176319LLU;
	volatile int8_t x295 = INT8_MIN;
	int32_t x296 = 26510365;
	int32_t t54 = 368945;

    t54 = ((x293!=(x294*x295))^x296);

    if (t54 != 26510364) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x297 = UINT64_MAX;
	int64_t x298 = -6128210766620699LL;
	int8_t x299 = INT8_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t55 = -2971342288310LL;

    t55 = ((x297!=(x298*x299))^x300);

    if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int8_t x301 = INT8_MIN;
	uint16_t x302 = 28U;
	volatile int8_t x303 = -1;
	volatile int32_t t56 = 1244;

    t56 = ((x301!=(x302*x303))^x304);

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x305 = INT16_MIN;
	int8_t x306 = -28;
	volatile int32_t t57 = 0;

    t57 = ((x305!=(x306*x307))^x308);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x309 = 49U;
	int64_t x311 = 24469998091960LL;
	int64_t x312 = -1LL;
	int64_t t58 = 39086LL;

    t58 = ((x309!=(x310*x311))^x312);

    if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x313 = UINT64_MAX;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 106906LLU;
	volatile int32_t t59 = 8597;

    t59 = ((x313!=(x314*x315))^x316);

    if (t59 != 254) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x317 = UINT8_MAX;
	int32_t x318 = -59;
	uint32_t x319 = 31202U;
	int32_t x320 = -1;
	static volatile int32_t t60 = 18332;

    t60 = ((x317!=(x318*x319))^x320);

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x321 = 256U;
	int16_t x322 = -1;
	volatile int8_t x323 = INT8_MIN;
	static int64_t x324 = -200210360284486452LL;
	int64_t t61 = 14724161535213752LL;

    t61 = ((x321!=(x322*x323))^x324);

    if (t61 != -200210360284486451LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 31U;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t62 = 3U;

    t62 = ((x325!=(x326*x327))^x328);

    if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 0LLU;
	volatile uint32_t t63 = 3U;

    t63 = ((x333!=(x334*x335))^x336);

    if (t63 != 88925U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x339 = -292;
	int64_t x340 = INT64_MIN;

    t64 = ((x337!=(x338*x339))^x340);

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x345 = -415743242LL;
	uint64_t x346 = UINT64_MAX;
	int64_t x348 = -1LL;
	int64_t t65 = 171LL;

    t65 = ((x345!=(x346*x347))^x348);

    if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MIN;
	uint16_t x351 = 1U;

    t66 = ((x349!=(x350*x351))^x352);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x353 = 60U;
	uint64_t x354 = UINT64_MAX;
	uint8_t x355 = 49U;
	static int32_t x356 = INT32_MAX;
	volatile int32_t t67 = -1;

    t67 = ((x353!=(x354*x355))^x356);

    if (t67 != 2147483646) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x357 = INT64_MIN;
	int8_t x358 = 21;
	volatile uint16_t x359 = UINT16_MAX;
	int64_t x360 = -1LL;
	volatile int64_t t68 = -135802657598727602LL;

    t68 = ((x357!=(x358*x359))^x360);

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x362 = -229;
	static volatile int8_t x363 = INT8_MAX;
	int64_t x364 = -1LL;
	int64_t t69 = 2019LL;

    t69 = ((x361!=(x362*x363))^x364);

    if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MAX;
	int16_t x367 = 1;
	static uint32_t x368 = 4921248U;
	volatile uint32_t t70 = 525624461U;

    t70 = ((x365!=(x366*x367))^x368);

    if (t70 != 4921248U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x373 = 1;
	volatile int8_t x375 = -1;
	int32_t x376 = -1;
	volatile int32_t t71 = 29018;

    t71 = ((x373!=(x374*x375))^x376);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x377 = UINT8_MAX;
	volatile int8_t x378 = 0;
	uint64_t x379 = 592966LLU;
	static uint8_t x380 = UINT8_MAX;
	static volatile int32_t t72 = 4;

    t72 = ((x377!=(x378*x379))^x380);

    if (t72 != 254) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x386 = -1;
	uint16_t x387 = UINT16_MAX;

    t73 = ((x385!=(x386*x387))^x388);

    if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x389 = INT8_MIN;
	uint8_t x390 = UINT8_MAX;
	static int64_t x391 = 1LL;
	int32_t t74 = -6578;

    t74 = ((x389!=(x390*x391))^x392);

    if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint32_t x393 = 82U;
	volatile int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	volatile uint64_t t75 = 11826LLU;

    t75 = ((x393!=(x394*x395))^x396);

    if (t75 != 15LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x403 = INT8_MIN;
	int32_t x404 = 11;

    t76 = ((x401!=(x402*x403))^x404);

    if (t76 != 10) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	static int8_t x407 = -1;
	int64_t x408 = INT64_MAX;
	int64_t t77 = -8899446384927LL;

    t77 = ((x405!=(x406*x407))^x408);

    if (t77 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x413 = -4LL;
	volatile int8_t x414 = 5;
	uint64_t x415 = UINT64_MAX;
	uint8_t x416 = 4U;
	static int32_t t78 = -171;

    t78 = ((x413!=(x414*x415))^x416);

    if (t78 != 5) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x417 = INT16_MIN;
	static volatile uint64_t x418 = UINT64_MAX;
	volatile uint8_t x419 = UINT8_MAX;
	int8_t x420 = -1;
	int32_t t79 = 3481;

    t79 = ((x417!=(x418*x419))^x420);

    if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x421 = UINT64_MAX;
	int64_t x423 = -1LL;
	volatile int64_t x424 = INT64_MIN;
	static int64_t t80 = 835LL;

    t80 = ((x421!=(x422*x423))^x424);

    if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x425 = 1;
	int8_t x426 = 20;
	int32_t x427 = 12028892;
	int32_t x428 = INT32_MAX;
	int32_t t81 = 6808185;

    t81 = ((x425!=(x426*x427))^x428);

    if (t81 != 2147483646) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x433 = INT64_MAX;
	uint8_t x434 = 24U;
	int32_t x436 = -1;
	int32_t t82 = -105;

    t82 = ((x433!=(x434*x435))^x436);

    if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x437 = -1;
	volatile int32_t x438 = -1;
	volatile uint32_t x439 = 3266U;
	int8_t x440 = -2;

    t83 = ((x437!=(x438*x439))^x440);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x441 = -112;
	int32_t x442 = -1;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = INT32_MIN;
	int32_t t84 = 1917752;

    t84 = ((x441!=(x442*x443))^x444);

    if (t84 != -2147483647) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x453 = 43;
	static int16_t x454 = -1;
	volatile int32_t x455 = INT32_MAX;
	int32_t t85 = 0;

    t85 = ((x453!=(x454*x455))^x456);

    if (t85 != -14) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x461 = 1309U;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	int8_t x464 = INT8_MIN;

    t86 = ((x461!=(x462*x463))^x464);

    if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x465 = 5U;
	int32_t x467 = -1;
	static uint32_t x468 = 130U;
	volatile uint32_t t87 = 35U;

    t87 = ((x465!=(x466*x467))^x468);

    if (t87 != 131U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x469 = -1;
	static int8_t x470 = -1;
	uint64_t x471 = 1004149LLU;
	int32_t x472 = -1;
	volatile int32_t t88 = -1554132;

    t88 = ((x469!=(x470*x471))^x472);

    if (t88 != -2) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x477 = 51763760;
	volatile uint16_t x478 = 104U;
	static int32_t x479 = -1;
	static volatile int32_t t89 = -1;

    t89 = ((x477!=(x478*x479))^x480);

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x481 = INT16_MIN;
	int32_t x482 = -1;
	volatile int16_t x483 = INT16_MAX;
	static volatile uint8_t x484 = UINT8_MAX;
	int32_t t90 = -2110985;

    t90 = ((x481!=(x482*x483))^x484);

    if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x485 = -16;
	uint32_t x486 = 7700934U;
	static volatile int32_t t91 = 80;

    t91 = ((x485!=(x486*x487))^x488);

    if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x489 = INT32_MAX;
	volatile int16_t x490 = -1;
	int16_t x491 = 57;
	static uint16_t x492 = 84U;
	static int32_t t92 = 3;

    t92 = ((x489!=(x490*x491))^x492);

    if (t92 != 85) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x493 = INT8_MIN;
	uint16_t x494 = 3565U;
	volatile int32_t t93 = -644582001;

    t93 = ((x493!=(x494*x495))^x496);

    if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x497 = 32735884881103368LLU;
	uint8_t x498 = UINT8_MAX;
	volatile uint32_t x499 = 161U;
	uint8_t x500 = UINT8_MAX;

    t94 = ((x497!=(x498*x499))^x500);

    if (t94 != 254) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x501 = 38746;
	int32_t x502 = -1;
	static int8_t x503 = INT8_MIN;
	int8_t x504 = INT8_MAX;

    t95 = ((x501!=(x502*x503))^x504);

    if (t95 != 126) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x505 = INT64_MIN;
	static int16_t x506 = INT16_MAX;
	volatile uint16_t x507 = UINT16_MAX;
	uint16_t x508 = UINT16_MAX;
	static volatile int32_t t96 = 12384;

    t96 = ((x505!=(x506*x507))^x508);

    if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x509 = -1;
	uint32_t x510 = UINT32_MAX;
	int16_t x511 = INT16_MIN;
	int16_t x512 = INT16_MIN;
	int32_t t97 = 50748;

    t97 = ((x509!=(x510*x511))^x512);

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x514 = -1LL;
	uint32_t x515 = 98909537U;
	int64_t t98 = -37326LL;

    t98 = ((x513!=(x514*x515))^x516);

    if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x518 = -3;
	uint16_t x519 = 158U;
	uint64_t x520 = 87758425368LLU;
	uint64_t t99 = 50228648LLU;

    t99 = ((x517!=(x518*x519))^x520);

    if (t99 != 87758425369LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x522 = -143LL;
	uint32_t x524 = 2468167U;

    t100 = ((x521!=(x522*x523))^x524);

    if (t100 != 2468166U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x525 = INT64_MIN;
	int64_t x526 = 1916944784522194LL;
	int16_t x527 = -1;
	static int8_t x528 = INT8_MIN;
	volatile int32_t t101 = -422001;

    t101 = ((x525!=(x526*x527))^x528);

    if (t101 != -127) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x529 = 72700146U;
	static int16_t x530 = -386;
	int32_t x531 = -1;
	uint8_t x532 = 65U;

    t102 = ((x529!=(x530*x531))^x532);

    if (t102 != 64) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x537 = INT16_MIN;
	int16_t x538 = INT16_MAX;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t103 = 909;

    t103 = ((x537!=(x538*x539))^x540);

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x541 = INT32_MIN;
	int8_t x542 = INT8_MIN;
	uint16_t x544 = 40U;
	static int32_t t104 = 247;

    t104 = ((x541!=(x542*x543))^x544);

    if (t104 != 41) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x545 = 37U;
	int16_t x546 = -1;
	uint64_t x548 = 441871200366926LLU;
	volatile uint64_t t105 = 2693070427078169LLU;

    t105 = ((x545!=(x546*x547))^x548);

    if (t105 != 441871200366927LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x549 = INT32_MAX;
	int8_t x550 = 0;
	int16_t x551 = -6;
	int64_t x552 = -1LL;
	int64_t t106 = -446LL;

    t106 = ((x549!=(x550*x551))^x552);

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x558 = INT8_MIN;
	volatile int8_t x559 = -1;
	int32_t x560 = INT32_MIN;
	volatile int32_t t107 = -379614563;

    t107 = ((x557!=(x558*x559))^x560);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x561 = INT8_MAX;
	int16_t x562 = -1;
	uint16_t x564 = UINT16_MAX;
	static int32_t t108 = 11024995;

    t108 = ((x561!=(x562*x563))^x564);

    if (t108 != 65534) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x565 = 191U;
	volatile uint8_t x566 = 58U;
	uint32_t x567 = UINT32_MAX;
	static uint32_t x568 = UINT32_MAX;
	uint32_t t109 = 5449U;

    t109 = ((x565!=(x566*x567))^x568);

    if (t109 != 4294967294U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x569 = 1;
	static int16_t x570 = -1;
	static int64_t x571 = -1LL;
	static int8_t x572 = INT8_MAX;
	int32_t t110 = -311258;

    t110 = ((x569!=(x570*x571))^x572);

    if (t110 != 127) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x574 = 793U;
	static int64_t x575 = 12048LL;
	static int8_t x576 = -2;

    t111 = ((x573!=(x574*x575))^x576);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x577 = 3U;
	uint8_t x578 = 6U;
	int32_t x579 = -1;
	uint32_t x580 = 1983U;
	uint32_t t112 = 31257U;

    t112 = ((x577!=(x578*x579))^x580);

    if (t112 != 1982U) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x581 = -645783955075458021LL;
	volatile int32_t x582 = -130983;
	int8_t x583 = -1;
	int32_t x584 = INT32_MAX;
	volatile int32_t t113 = 38;

    t113 = ((x581!=(x582*x583))^x584);

    if (t113 != 2147483646) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x594 = INT16_MIN;
	volatile uint8_t x595 = 0U;
	uint64_t x596 = UINT64_MAX;
	uint64_t t114 = 31903509769LLU;

    t114 = ((x593!=(x594*x595))^x596);

    if (t114 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x601 = 0;
	volatile uint32_t x602 = UINT32_MAX;
	static int32_t t115 = 1003555804;

    t115 = ((x601!=(x602*x603))^x604);

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x605 = INT64_MIN;
	uint32_t x606 = 141710949U;
	int32_t x608 = INT32_MIN;
	int32_t t116 = -22038;

    t116 = ((x605!=(x606*x607))^x608);

    if (t116 != -2147483647) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x610 = 7294364778LL;
	uint64_t x611 = 59011531LLU;
	int64_t x612 = INT64_MIN;
	static int64_t t117 = -2LL;

    t117 = ((x609!=(x610*x611))^x612);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x613 = 3U;
	volatile int16_t x614 = -1;
	volatile int8_t x615 = -1;
	int16_t x616 = -1;
	volatile int32_t t118 = -2081199;

    t118 = ((x613!=(x614*x615))^x616);

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x617 = 16748U;
	int64_t x618 = -1LL;
	static int16_t x619 = 9376;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t119 = 49;

    t119 = ((x617!=(x618*x619))^x620);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int8_t x621 = INT8_MIN;
	int16_t x623 = -172;
	static uint32_t x624 = 296U;

    t120 = ((x621!=(x622*x623))^x624);

    if (t120 != 297U) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x625 = -2LL;
	int16_t x626 = INT16_MAX;
	uint64_t x627 = 99197230799LLU;
	int32_t x628 = 40616;
	volatile int32_t t121 = 103053;

    t121 = ((x625!=(x626*x627))^x628);

    if (t121 != 40617) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x629 = INT64_MIN;
	uint16_t x630 = 1U;
	int16_t x631 = INT16_MAX;
	volatile uint64_t x632 = UINT64_MAX;
	volatile uint64_t t122 = 2831410853901201771LLU;

    t122 = ((x629!=(x630*x631))^x632);

    if (t122 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x634 = 26758U;
	static uint16_t x635 = 1041U;
	volatile int8_t x636 = INT8_MAX;
	int32_t t123 = -5330;

    t123 = ((x633!=(x634*x635))^x636);

    if (t123 != 126) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x641 = INT8_MIN;
	static volatile uint16_t x642 = 1U;
	uint16_t x643 = 3195U;
	volatile int8_t x644 = INT8_MIN;
	volatile int32_t t124 = 1415515;

    t124 = ((x641!=(x642*x643))^x644);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x653 = 1693;
	uint64_t x654 = 0LLU;
	int64_t x655 = INT64_MIN;
	volatile int32_t x656 = 502;

    t125 = ((x653!=(x654*x655))^x656);

    if (t125 != 503) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x660 = INT32_MIN;
	volatile int32_t t126 = -1215069;

    t126 = ((x657!=(x658*x659))^x660);

    if (t126 != -2147483647) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x661 = INT32_MIN;
	static int8_t x662 = INT8_MIN;
	static uint8_t x663 = UINT8_MAX;
	int64_t x664 = INT64_MAX;
	volatile int64_t t127 = -977248645725596LL;

    t127 = ((x661!=(x662*x663))^x664);

    if (t127 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x665 = INT16_MAX;
	uint32_t x667 = 228U;
	uint64_t x668 = 43116393630529629LLU;
	volatile uint64_t t128 = 45939LLU;

    t128 = ((x665!=(x666*x667))^x668);

    if (t128 != 43116393630529628LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x669 = INT16_MIN;
	uint8_t x672 = 45U;
	static int32_t t129 = 486073;

    t129 = ((x669!=(x670*x671))^x672);

    if (t129 != 44) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x673 = INT64_MAX;
	uint16_t x674 = 3U;
	uint8_t x675 = 2U;
	static volatile int32_t t130 = 10;

    t130 = ((x673!=(x674*x675))^x676);

    if (t130 != 6) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x677 = INT64_MIN;
	static uint64_t x679 = UINT64_MAX;
	uint16_t x680 = 1U;
	int32_t t131 = -43786943;

    t131 = ((x677!=(x678*x679))^x680);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x681 = INT16_MIN;
	static uint8_t x682 = 18U;
	static int16_t x683 = INT16_MIN;
	volatile int16_t x684 = INT16_MIN;

    t132 = ((x681!=(x682*x683))^x684);

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x685 = 1U;
	int32_t x686 = 1;
	int64_t x687 = -59349267785740989LL;
	int8_t x688 = -1;
	int32_t t133 = -65506916;

    t133 = ((x685!=(x686*x687))^x688);

    if (t133 != -2) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x689 = UINT8_MAX;
	static int8_t x691 = -1;
	volatile int16_t x692 = -1;
	static int32_t t134 = 622112478;

    t134 = ((x689!=(x690*x691))^x692);

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x701 = -4;
	int32_t x702 = -1;
	int8_t x704 = INT8_MAX;
	volatile int32_t t135 = -1;

    t135 = ((x701!=(x702*x703))^x704);

    if (t135 != 126) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x705 = INT64_MIN;
	uint32_t x706 = UINT32_MAX;
	volatile int64_t t136 = -2481007LL;

    t136 = ((x705!=(x706*x707))^x708);

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x709 = 40980280982LLU;
	int16_t x710 = -1;

    t137 = ((x709!=(x710*x711))^x712);

    if (t137 != 4294967294U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x721 = -1160LL;
	static volatile int32_t t138 = 671;

    t138 = ((x721!=(x722*x723))^x724);

    if (t138 != 126) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x725 = -36;
	int16_t x726 = -1;
	int16_t x727 = INT16_MAX;
	uint8_t x728 = UINT8_MAX;
	volatile int32_t t139 = 5453;

    t139 = ((x725!=(x726*x727))^x728);

    if (t139 != 254) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x737 = 4839U;
	int32_t x740 = INT32_MAX;
	volatile int32_t t140 = 884121386;

    t140 = ((x737!=(x738*x739))^x740);

    if (t140 != 2147483646) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x745 = INT32_MIN;
	uint8_t x746 = 11U;
	int16_t x747 = INT16_MIN;
	volatile int8_t x748 = -5;
	static int32_t t141 = -14863;

    t141 = ((x745!=(x746*x747))^x748);

    if (t141 != -6) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x753 = 13119382807LLU;
	int16_t x754 = 5747;
	int64_t x755 = -1LL;
	int8_t x756 = INT8_MIN;
	volatile int32_t t142 = 18;

    t142 = ((x753!=(x754*x755))^x756);

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x757 = 2935U;
	uint8_t x758 = 30U;
	uint32_t x759 = UINT32_MAX;
	uint8_t x760 = 1U;
	static int32_t t143 = 108142790;

    t143 = ((x757!=(x758*x759))^x760);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x769 = INT8_MAX;
	uint32_t x771 = 7027U;
	volatile uint64_t t144 = 23585166818564069LLU;

    t144 = ((x769!=(x770*x771))^x772);

    if (t144 != 35651999238949420LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x773 = INT64_MAX;
	uint64_t x774 = 3166960874LLU;
	int32_t x775 = INT32_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t145 = 15;

    t145 = ((x773!=(x774*x775))^x776);

    if (t145 != -127) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x777 = 900U;
	uint8_t x779 = UINT8_MAX;
	uint8_t x780 = UINT8_MAX;
	static volatile int32_t t146 = -239;

    t146 = ((x777!=(x778*x779))^x780);

    if (t146 != 254) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x781 = 1U;
	int64_t x783 = 24087249LL;
	int16_t x784 = INT16_MAX;

    t147 = ((x781!=(x782*x783))^x784);

    if (t147 != 32766) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x786 = -1;
	uint8_t x787 = 13U;
	int64_t x788 = 11463LL;

    t148 = ((x785!=(x786*x787))^x788);

    if (t148 != 11462LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x789 = INT8_MIN;
	static int64_t x791 = INT64_MAX;
	int64_t x792 = INT64_MAX;

    t149 = ((x789!=(x790*x791))^x792);

    if (t149 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x793 = UINT16_MAX;
	static int8_t x794 = INT8_MAX;
	int16_t x796 = INT16_MIN;
	int32_t t150 = 1;

    t150 = ((x793!=(x794*x795))^x796);

    if (t150 != -32767) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x801 = INT64_MAX;
	volatile int16_t x802 = INT16_MIN;
	int16_t x803 = INT16_MAX;
	int16_t x804 = -707;

    t151 = ((x801!=(x802*x803))^x804);

    if (t151 != -708) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x805 = INT32_MAX;
	static int16_t x807 = INT16_MIN;
	volatile int32_t x808 = INT32_MAX;
	int32_t t152 = 3504;

    t152 = ((x805!=(x806*x807))^x808);

    if (t152 != 2147483646) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x809 = 472619245911504LLU;
	int16_t x810 = 15780;
	volatile uint64_t x811 = 52771780291LLU;
	int8_t x812 = -1;
	int32_t t153 = 1047;

    t153 = ((x809!=(x810*x811))^x812);

    if (t153 != -2) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x813 = INT64_MAX;
	int64_t x814 = 8LL;
	int8_t x815 = INT8_MAX;
	int16_t x816 = INT16_MAX;
	int32_t t154 = 6865617;

    t154 = ((x813!=(x814*x815))^x816);

    if (t154 != 32766) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x818 = 29;
	uint32_t x819 = UINT32_MAX;
	uint32_t x820 = UINT32_MAX;

    t155 = ((x817!=(x818*x819))^x820);

    if (t155 != 4294967294U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x821 = 15;
	int8_t x822 = 3;
	int32_t x823 = -1;
	static volatile uint64_t t156 = 0LLU;

    t156 = ((x821!=(x822*x823))^x824);

    if (t156 != 30LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x829 = INT32_MIN;
	static int64_t x831 = -1LL;
	int32_t x832 = INT32_MIN;
	int32_t t157 = 1528;

    t157 = ((x829!=(x830*x831))^x832);

    if (t157 != -2147483647) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x834 = UINT32_MAX;
	uint64_t x835 = 5028302186817697235LLU;
	volatile int8_t x836 = -2;
	volatile int32_t t158 = 16;

    t158 = ((x833!=(x834*x835))^x836);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x837 = -2047;
	int16_t x839 = INT16_MIN;
	volatile int64_t x840 = -14180255LL;
	int64_t t159 = 11309LL;

    t159 = ((x837!=(x838*x839))^x840);

    if (t159 != -14180256LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile uint16_t x843 = UINT16_MAX;
	uint8_t x844 = 63U;
	static int32_t t160 = 65;

    t160 = ((x841!=(x842*x843))^x844);

    if (t160 != 62) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x845 = 1446401411U;
	int8_t x846 = INT8_MIN;
	int64_t x848 = -1LL;
	volatile int64_t t161 = -8574LL;

    t161 = ((x845!=(x846*x847))^x848);

    if (t161 != -2LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x849 = UINT8_MAX;
	int8_t x851 = -1;
	volatile uint64_t t162 = 850717LLU;

    t162 = ((x849!=(x850*x851))^x852);

    if (t162 != 3747LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x853 = -8;
	static int64_t x854 = -1LL;
	int32_t x855 = INT32_MAX;
	static int16_t x856 = INT16_MIN;
	int32_t t163 = -9595;

    t163 = ((x853!=(x854*x855))^x856);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x857 = -1;
	uint32_t x858 = 11526379U;
	int32_t x859 = INT32_MIN;
	uint32_t x860 = UINT32_MAX;
	volatile uint32_t t164 = 11U;

    t164 = ((x857!=(x858*x859))^x860);

    if (t164 != 4294967294U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x865 = INT16_MIN;
	uint8_t x867 = 113U;
	int64_t x868 = INT64_MIN;
	volatile int64_t t165 = 11876945926LL;

    t165 = ((x865!=(x866*x867))^x868);

    if (t165 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x873 = INT8_MAX;
	static int8_t x874 = INT8_MIN;
	volatile uint16_t x875 = UINT16_MAX;
	int32_t t166 = 2;

    t166 = ((x873!=(x874*x875))^x876);

    if (t166 != -50) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile uint32_t x877 = 193U;
	int32_t x879 = -1;
	int64_t t167 = -1844333LL;

    t167 = ((x877!=(x878*x879))^x880);

    if (t167 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x881 = INT64_MAX;
	uint64_t x882 = UINT64_MAX;
	volatile int32_t x883 = -3029;
	uint64_t x884 = 1853LLU;

    t168 = ((x881!=(x882*x883))^x884);

    if (t168 != 1852LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x885 = INT8_MIN;
	int8_t x886 = INT8_MIN;
	int16_t x887 = INT16_MIN;
	volatile int32_t t169 = -28856383;

    t169 = ((x885!=(x886*x887))^x888);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x893 = UINT32_MAX;
	uint8_t x895 = 3U;
	volatile int32_t t170 = -144017728;

    t170 = ((x893!=(x894*x895))^x896);

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x901 = -2583043637351159LL;
	int32_t x902 = 789890042;
	int64_t x903 = -1LL;
	int16_t x904 = INT16_MAX;
	int32_t t171 = 2;

    t171 = ((x901!=(x902*x903))^x904);

    if (t171 != 32766) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x905 = INT64_MAX;
	uint32_t x906 = 142793871U;
	static uint8_t x907 = 71U;
	static uint8_t x908 = 0U;
	volatile int32_t t172 = 76;

    t172 = ((x905!=(x906*x907))^x908);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint64_t x909 = 4LLU;
	uint64_t x910 = UINT64_MAX;
	uint64_t x912 = UINT64_MAX;
	uint64_t t173 = 15032133845457LLU;

    t173 = ((x909!=(x910*x911))^x912);

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x913 = INT8_MAX;
	uint64_t x915 = 70878919LLU;
	int8_t x916 = -1;
	int32_t t174 = 245;

    t174 = ((x913!=(x914*x915))^x916);

    if (t174 != -2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x918 = 0;
	volatile int32_t x919 = -1;
	int64_t x920 = INT64_MAX;
	volatile int64_t t175 = 1LL;

    t175 = ((x917!=(x918*x919))^x920);

    if (t175 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x921 = 18U;
	static int32_t x922 = -96060929;
	int16_t x923 = -1;
	uint64_t x924 = UINT64_MAX;
	uint64_t t176 = 1LLU;

    t176 = ((x921!=(x922*x923))^x924);

    if (t176 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x925 = 1;
	uint8_t x926 = 1U;
	uint32_t x928 = 95659405U;
	volatile uint32_t t177 = 82190186U;

    t177 = ((x925!=(x926*x927))^x928);

    if (t177 != 95659405U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x930 = 1032747027510783612LLU;
	volatile int64_t x931 = INT64_MAX;
	int32_t t178 = -887;

    t178 = ((x929!=(x930*x931))^x932);

    if (t178 != 65534) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x933 = -1LL;
	uint16_t x934 = 0U;
	int32_t x935 = INT32_MIN;
	volatile int8_t x936 = -5;
	volatile int32_t t179 = 343515069;

    t179 = ((x933!=(x934*x935))^x936);

    if (t179 != -6) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x941 = UINT16_MAX;
	uint8_t x942 = 20U;
	volatile uint32_t t180 = 7U;

    t180 = ((x941!=(x942*x943))^x944);

    if (t180 != 4294967294U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x945 = INT8_MIN;
	int16_t x947 = INT16_MAX;

    t181 = ((x945!=(x946*x947))^x948);

    if (t181 != -14) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x949 = INT32_MIN;
	static int16_t x950 = INT16_MIN;
	int8_t x951 = INT8_MIN;
	static int64_t x952 = INT64_MAX;
	volatile int64_t t182 = -82300LL;

    t182 = ((x949!=(x950*x951))^x952);

    if (t182 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x954 = 6;
	volatile int8_t x955 = -1;
	int16_t x956 = INT16_MAX;
	volatile int32_t t183 = -29;

    t183 = ((x953!=(x954*x955))^x956);

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x957 = INT32_MIN;
	static uint16_t x959 = UINT16_MAX;
	uint32_t x960 = 2U;
	static volatile uint32_t t184 = 170U;

    t184 = ((x957!=(x958*x959))^x960);

    if (t184 != 3U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x961 = -2955385547368703054LL;
	static int32_t x962 = 0;
	int32_t x963 = INT32_MIN;
	volatile int64_t x964 = 69477671830010372LL;
	int64_t t185 = 8107112709010LL;

    t185 = ((x961!=(x962*x963))^x964);

    if (t185 != 69477671830010373LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x981 = 205U;
	uint64_t x982 = 64781344038797896LLU;
	uint64_t x983 = UINT64_MAX;
	volatile int32_t t186 = 12;

    t186 = ((x981!=(x982*x983))^x984);

    if (t186 != -34) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x985 = 1572898225895LLU;
	volatile uint8_t x986 = UINT8_MAX;
	volatile uint8_t x987 = 0U;
	volatile uint32_t t187 = 1093U;

    t187 = ((x985!=(x986*x987))^x988);

    if (t187 != 10055U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x993 = 528981835531023LL;
	volatile int8_t x994 = INT8_MIN;
	uint16_t x995 = 11U;
	static int32_t t188 = 815423;

    t188 = ((x993!=(x994*x995))^x996);

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x997 = 754;
	volatile uint8_t x998 = 10U;
	int8_t x999 = 27;
	int64_t x1000 = INT64_MAX;
	int64_t t189 = -66233LL;

    t189 = ((x997!=(x998*x999))^x1000);

    if (t189 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1001 = 3;
	int32_t x1002 = INT32_MAX;
	int64_t x1003 = -793144814LL;
	volatile int64_t t190 = 252LL;

    t190 = ((x1001!=(x1002*x1003))^x1004);

    if (t190 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1005 = -1;
	int16_t x1006 = -1;
	uint32_t x1007 = 2087U;
	int32_t t191 = -495777;

    t191 = ((x1005!=(x1006*x1007))^x1008);

    if (t191 != 747) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1013 = -367996;
	static volatile int32_t x1014 = -1;
	static uint64_t x1015 = UINT64_MAX;
	uint32_t x1016 = 57196U;
	static uint32_t t192 = 158473U;

    t192 = ((x1013!=(x1014*x1015))^x1016);

    if (t192 != 57197U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1018 = -30;
	volatile uint64_t x1019 = 2546898290345LLU;
	int8_t x1020 = INT8_MIN;
	volatile int32_t t193 = -173136;

    t193 = ((x1017!=(x1018*x1019))^x1020);

    if (t193 != -127) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1023 = 1U;
	int64_t x1024 = 461619LL;
	int64_t t194 = 36307LL;

    t194 = ((x1021!=(x1022*x1023))^x1024);

    if (t194 != 461618LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x1025 = 2U;
	static uint16_t x1026 = 653U;
	int64_t x1027 = -181491LL;
	volatile int64_t t195 = -403LL;

    t195 = ((x1025!=(x1026*x1027))^x1028);

    if (t195 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1029 = INT32_MIN;
	uint32_t x1030 = 227957914U;
	int32_t x1032 = INT32_MIN;

    t196 = ((x1029!=(x1030*x1031))^x1032);

    if (t196 != -2147483647) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x1037 = 1U;
	int16_t x1038 = INT16_MIN;
	static int16_t x1040 = INT16_MAX;

    t197 = ((x1037!=(x1038*x1039))^x1040);

    if (t197 != 32766) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1043 = 10852;
	uint16_t x1044 = UINT16_MAX;
	static int32_t t198 = 502;

    t198 = ((x1041!=(x1042*x1043))^x1044);

    if (t198 != 65534) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1045 = -1;
	uint64_t x1046 = 1825239910369LLU;
	static uint32_t x1047 = 994475590U;

    t199 = ((x1045!=(x1046*x1047))^x1048);

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

