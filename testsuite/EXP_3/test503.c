
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

static uint8_t x7 = 0U;
volatile int16_t x14 = -1;
int64_t x23 = INT64_MIN;
uint64_t x24 = 139389834582032LLU;
uint8_t x33 = 96U;
static int16_t x35 = INT16_MIN;
int16_t x37 = INT16_MIN;
uint8_t x44 = 7U;
volatile int32_t t9 = -88;
static int8_t x53 = INT8_MIN;
int16_t x57 = 1888;
static int32_t x71 = -1;
int16_t x75 = INT16_MIN;
uint64_t t15 = 94053439831LLU;
int64_t x86 = -1LL;
int16_t x112 = 126;
volatile int64_t t25 = 160280446143038105LL;
int32_t x147 = -1;
int16_t x148 = -1;
int32_t x156 = -1;
static int8_t x167 = INT8_MAX;
int32_t t31 = 0;
int64_t x182 = INT64_MIN;
uint16_t x184 = UINT16_MAX;
int32_t x201 = INT32_MIN;
static int8_t x205 = INT8_MIN;
static uint16_t x206 = 5U;
uint8_t x213 = UINT8_MAX;
volatile int32_t x216 = 500996713;
int64_t x225 = -1LL;
static uint64_t t40 = 2579LLU;
volatile uint8_t x231 = 75U;
uint8_t x234 = UINT8_MAX;
int32_t t42 = 28601389;
int32_t x242 = -121732811;
static volatile int32_t t45 = -128456;
static int64_t x255 = 115246LL;
uint64_t x257 = 5318273902070LLU;
uint64_t x258 = UINT64_MAX;
uint32_t x264 = 0U;
uint32_t x265 = 3756414U;
static int32_t x267 = INT32_MIN;
int64_t x277 = -1LL;
int8_t x278 = INT8_MIN;
uint32_t x281 = UINT32_MAX;
int8_t x282 = -1;
uint16_t x292 = 109U;
uint32_t x299 = 782482417U;
uint8_t x300 = 2U;
uint64_t x308 = 1710LLU;
volatile int32_t t59 = -15384329;
int8_t x316 = INT8_MIN;
int64_t x320 = INT64_MAX;
uint64_t t61 = 3LLU;
uint16_t x324 = UINT16_MAX;
volatile uint32_t x339 = 438456738U;
int32_t t65 = -2431423;
uint32_t x354 = 6U;
int8_t x355 = INT8_MAX;
int32_t x402 = INT32_MIN;
volatile int32_t t73 = -258119;
int16_t x416 = INT16_MIN;
uint64_t x418 = 124260LLU;
volatile int8_t x421 = INT8_MIN;
volatile int32_t t76 = -6578;
int64_t x430 = 70LL;
uint64_t t79 = 7479263048572659LLU;
static int16_t x442 = -140;
static int64_t x444 = 463072612LL;
volatile int64_t t81 = 41962626LL;
int64_t x448 = 3129569824979897LL;
int64_t t82 = 17LL;
int8_t x455 = 0;
uint32_t t85 = 14983031U;
uint8_t x466 = 0U;
int8_t x468 = INT8_MIN;
int64_t x478 = -263LL;
int64_t x480 = -117265LL;
static uint64_t t91 = 3851715618LLU;
int8_t x491 = INT8_MAX;
int64_t x502 = INT64_MIN;
uint64_t x503 = 7063011984345563LLU;
int16_t x504 = -1;
volatile uint64_t t94 = 708856005244113LLU;
uint16_t x506 = UINT16_MAX;
uint64_t x507 = UINT64_MAX;
int32_t x517 = 6052;
uint64_t x519 = UINT64_MAX;
static volatile uint64_t t96 = 30035332535LLU;
static int8_t x527 = -6;
volatile int32_t t98 = -401588540;
int32_t x529 = 2;
volatile int32_t x530 = INT32_MIN;
uint64_t x531 = 8398123LLU;
int32_t x549 = INT32_MAX;
int64_t x551 = 0LL;
volatile int32_t t104 = -1623573;
int64_t x566 = -38042565596LL;
volatile uint8_t x571 = UINT8_MAX;
int32_t x572 = -1;
volatile int64_t x574 = INT64_MAX;
volatile uint32_t x576 = 86U;
uint32_t t107 = 5721U;
int16_t x586 = INT16_MAX;
static int64_t x597 = INT64_MAX;
uint64_t x598 = 3LLU;
static int16_t x617 = -1;
uint8_t x622 = UINT8_MAX;
int16_t x628 = INT16_MIN;
int8_t x633 = INT8_MIN;
int16_t x637 = INT16_MIN;
int16_t x640 = 0;
volatile int32_t x643 = 1;
uint16_t x644 = 4980U;
int8_t x647 = INT8_MIN;
uint8_t x650 = 14U;
int8_t x653 = INT8_MIN;
static int64_t x655 = -1LL;
volatile int64_t x663 = 1045185525827LL;
volatile uint32_t x671 = 60U;
volatile uint32_t t128 = 113966168U;
uint32_t x673 = UINT32_MAX;
int64_t t129 = -7729121646784LL;
uint64_t x681 = 302757LLU;
volatile int32_t x683 = -78292;
volatile int32_t t130 = -3705268;
uint32_t x691 = UINT32_MAX;
int32_t x697 = 27257916;
volatile uint32_t t133 = 930U;
int8_t x701 = INT8_MIN;
uint64_t x704 = UINT64_MAX;
uint64_t x706 = 100492834523LLU;
volatile uint32_t x710 = 704856U;
static int8_t x721 = INT8_MAX;
volatile int64_t t141 = -5608018887LL;
static volatile int32_t t143 = -497804181;
int64_t x757 = -1LL;
int64_t x760 = 52364LL;
int8_t x765 = 1;
uint32_t x766 = 1U;
int32_t x771 = -1;
int8_t x796 = INT8_MIN;
static int32_t x798 = -1;
static volatile int64_t x799 = INT64_MIN;
volatile int32_t x801 = -1;
volatile uint16_t x814 = 226U;
int64_t x817 = 182288LL;
volatile int8_t x818 = -39;
uint64_t t156 = 1076029851447199LLU;
volatile uint64_t x824 = UINT64_MAX;
int64_t x826 = INT64_MIN;
volatile uint16_t x829 = 4U;
int16_t x830 = INT16_MIN;
int8_t x836 = 3;
static int8_t x842 = INT8_MIN;
int64_t x847 = -1LL;
static uint32_t x848 = 132883U;
static int32_t t163 = 0;
int8_t x868 = INT8_MIN;
int32_t t166 = 672;
int64_t x872 = 1027827340LL;
uint64_t x884 = 1943LLU;
static volatile uint32_t x892 = 51U;
volatile uint64_t t171 = 1437490475LLU;
static volatile int8_t x909 = INT8_MAX;
int32_t t175 = -53;
volatile uint32_t x932 = 415614369U;
int32_t x935 = INT32_MAX;
int32_t x937 = INT32_MIN;
volatile uint64_t x941 = 3LLU;
int32_t x943 = -3;
int16_t x944 = -1;
static volatile int32_t t182 = -1581247;
int16_t x955 = INT16_MIN;
volatile int64_t t184 = 49349078948LL;
static uint8_t x961 = 7U;
static uint32_t t185 = 722294U;
static volatile int16_t x967 = INT16_MAX;
volatile int32_t t186 = 253049179;
static int8_t x970 = 4;
volatile int16_t x971 = -15543;
uint32_t x975 = UINT32_MAX;
volatile uint32_t t188 = 4U;
int64_t x979 = -62538LL;
uint64_t x984 = UINT64_MAX;
static volatile int64_t x987 = -1LL;
volatile uint32_t x989 = 77U;
uint64_t x991 = UINT64_MAX;
int16_t x1000 = INT16_MIN;
int32_t x1001 = 15907662;
static uint32_t t197 = 1772197U;
volatile int64_t x1022 = 384LL;
int32_t x1026 = INT32_MIN;
int8_t x1028 = INT8_MIN;


void f0(void) {
    	uint8_t x1 = 104U;
	int16_t x2 = -1;
	static uint64_t x3 = 36222693267LLU;
	uint32_t x4 = 14U;
	static uint64_t t0 = 1320LLU;

    t0 = ((x1==x2)|(x3*x4));

    if (t0 != 507117705738LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	static volatile uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 2853;

    t1 = ((x5==x6)|(x7*x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int8_t x13 = INT8_MIN;
	uint16_t x15 = UINT16_MAX;
	uint32_t x16 = UINT32_MAX;
	uint32_t t2 = 766U;

    t2 = ((x13==x14)|(x15*x16));

    if (t2 != 4294901761U) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int16_t x17 = -630;
	volatile int64_t x18 = INT64_MIN;
	uint8_t x19 = UINT8_MAX;
	static uint16_t x20 = 1942U;
	static int32_t t3 = -8096;

    t3 = ((x17==x18)|(x19*x20));

    if (t3 != 495210) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = -108;
	uint64_t t4 = 206688461299546LLU;

    t4 = ((x21==x22)|(x23*x24));

    if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x25 = INT64_MIN;
	volatile int8_t x26 = 1;
	int64_t x27 = 99374LL;
	static uint64_t x28 = 144524055649185983LLU;
	volatile uint64_t t5 = 843849LLU;

    t5 = ((x25==x26)|(x27*x28));

    if (t5 != 10366616736176717394LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = -3;
	volatile int16_t x30 = INT16_MIN;
	static uint32_t x31 = UINT32_MAX;
	volatile int32_t x32 = INT32_MIN;
	uint32_t t6 = 1U;

    t6 = ((x29==x30)|(x31*x32));

    if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x34 = 0U;
	int64_t x36 = -1LL;
	static int64_t t7 = 5350808LL;

    t7 = ((x33==x34)|(x35*x36));

    if (t7 != 32768LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x38 = INT64_MIN;
	int32_t x39 = -1;
	volatile uint8_t x40 = 8U;
	volatile int32_t t8 = -1756;

    t8 = ((x37==x38)|(x39*x40));

    if (t8 != -8) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = -7177;
	int16_t x42 = -4;
	int16_t x43 = INT16_MAX;

    t9 = ((x41==x42)|(x43*x44));

    if (t9 != 229369) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x54 = UINT16_MAX;
	int16_t x55 = -1107;
	uint32_t x56 = 557361U;
	volatile uint32_t t10 = 1166U;

    t10 = ((x53==x54)|(x55*x56));

    if (t10 != 3677968669U) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x58 = 3685;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = 0U;
	volatile int32_t t11 = -6192258;

    t11 = ((x57==x58)|(x59*x60));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x65 = 3;
	int8_t x66 = 1;
	int32_t x67 = 125;
	uint16_t x68 = 0U;
	static volatile int32_t t12 = 3;

    t12 = ((x65==x66)|(x67*x68));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -1LL;
	int16_t x70 = INT16_MAX;
	int64_t x72 = -258487845022228012LL;
	static int64_t t13 = -70292317732617LL;

    t13 = ((x69==x70)|(x71*x72));

    if (t13 != 258487845022228012LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x73 = INT8_MIN;
	int64_t x74 = -1892LL;
	int8_t x76 = -13;
	volatile int32_t t14 = 481338;

    t14 = ((x73==x74)|(x75*x76));

    if (t14 != 425984) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x77 = -1LL;
	uint16_t x78 = 12U;
	static uint64_t x79 = 14409559359LLU;
	int8_t x80 = INT8_MIN;

    t15 = ((x77==x78)|(x79*x80));

    if (t15 != 18446742229285953664LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x81 = 15U;
	uint8_t x82 = 47U;
	uint16_t x83 = 1U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t16 = -121503416;

    t16 = ((x81==x82)|(x83*x84));

    if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x85 = 7U;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = 118;
	int32_t t17 = 789039;

    t17 = ((x85==x86)|(x87*x88));

    if (t17 != -15104) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x89 = 16;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 4078U;
	volatile int16_t x92 = 1;
	volatile int32_t t18 = 11;

    t18 = ((x89==x90)|(x91*x92));

    if (t18 != 4078) { NG(); } else { ; }
	
}

void f19(void) {
    	static int8_t x97 = 18;
	volatile int8_t x98 = -12;
	volatile int64_t x99 = -1LL;
	uint16_t x100 = 6U;
	volatile int64_t t19 = 1501510698631848685LL;

    t19 = ((x97==x98)|(x99*x100));

    if (t19 != -6LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x101 = 177791683442LLU;
	static int32_t x102 = INT32_MIN;
	int32_t x103 = INT32_MAX;
	uint8_t x104 = 0U;
	int32_t t20 = 13615;

    t20 = ((x101==x102)|(x103*x104));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MIN;
	static int64_t x107 = 11830520384599LL;
	int8_t x108 = INT8_MAX;
	int64_t t21 = 1061016421134762LL;

    t21 = ((x105==x106)|(x107*x108));

    if (t21 != 1502476088844073LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x109 = 14384U;
	int8_t x110 = -1;
	int8_t x111 = 0;
	int32_t t22 = -6290619;

    t22 = ((x109==x110)|(x111*x112));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x121 = 14539497140563719LLU;
	static int32_t x122 = INT32_MAX;
	uint64_t x123 = UINT64_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile uint64_t t23 = 675LLU;

    t23 = ((x121==x122)|(x123*x124));

    if (t23 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x133 = INT8_MAX;
	static volatile uint8_t x134 = 3U;
	uint64_t x135 = 2188352965337936458LLU;
	int8_t x136 = INT8_MAX;
	uint64_t t24 = 110389066LLU;

    t24 = ((x133==x134)|(x135*x136));

    if (t24 != 1219665492274655926LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x137 = 15962LLU;
	int8_t x138 = -1;
	int64_t x139 = 20LL;
	static int8_t x140 = -44;

    t25 = ((x137==x138)|(x139*x140));

    if (t25 != -880LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x141 = INT32_MAX;
	volatile int64_t x142 = -66388840464602886LL;
	static uint32_t x143 = 16289U;
	int16_t x144 = INT16_MIN;
	static volatile uint32_t t26 = 388639660U;

    t26 = ((x141==x142)|(x143*x144));

    if (t26 != 3761209344U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	volatile int32_t t27 = -1065051;

    t27 = ((x145==x146)|(x147*x148));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x153 = 7U;
	static uint32_t x154 = 107U;
	int8_t x155 = -1;
	static volatile int32_t t28 = -32080;

    t28 = ((x153==x154)|(x155*x156));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x161 = 26403U;
	uint64_t x162 = 7506174724591LLU;
	uint8_t x163 = 8U;
	static int8_t x164 = INT8_MIN;
	int32_t t29 = -63262;

    t29 = ((x161==x162)|(x163*x164));

    if (t29 != -1024) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = -1;
	volatile uint8_t x168 = 17U;
	int32_t t30 = 5;

    t30 = ((x165==x166)|(x167*x168));

    if (t30 != 2159) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x177 = INT8_MAX;
	static int16_t x178 = INT16_MAX;
	static int8_t x179 = INT8_MIN;
	int16_t x180 = 339;

    t31 = ((x177==x178)|(x179*x180));

    if (t31 != -43392) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x181 = 19453U;
	static int32_t x183 = 3;
	static volatile int32_t t32 = -2265;

    t32 = ((x181==x182)|(x183*x184));

    if (t32 != 196605) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x185 = INT16_MIN;
	int32_t x186 = -3498;
	int8_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	static uint64_t t33 = 206654599345615466LLU;

    t33 = ((x185==x186)|(x187*x188));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint32_t x202 = 5665U;
	uint64_t x203 = 6LLU;
	int8_t x204 = INT8_MAX;
	static uint64_t t34 = 1023LLU;

    t34 = ((x201==x202)|(x203*x204));

    if (t34 != 762LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x207 = 1231367;
	static volatile uint16_t x208 = 2U;
	int32_t t35 = 3558989;

    t35 = ((x205==x206)|(x207*x208));

    if (t35 != 2462734) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x209 = INT64_MAX;
	int16_t x210 = -1;
	uint64_t x211 = 25368269LLU;
	int16_t x212 = INT16_MIN;
	static volatile uint64_t t36 = 5608251726651639626LLU;

    t36 = ((x209==x210)|(x211*x212));

    if (t36 != 18446743242442113024LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x214 = UINT64_MAX;
	uint64_t x215 = 26528985LLU;
	uint64_t t37 = 90LLU;

    t37 = ((x213==x214)|(x215*x216));

    if (t37 != 13290934284226305LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x217 = -25075633LL;
	uint32_t x218 = 20041541U;
	int8_t x219 = INT8_MIN;
	uint32_t x220 = 771690U;
	static uint32_t t38 = 0U;

    t38 = ((x217==x218)|(x219*x220));

    if (t38 != 4196190976U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x221 = 33;
	static int16_t x222 = INT16_MAX;
	static volatile int8_t x223 = INT8_MIN;
	static uint64_t x224 = UINT64_MAX;
	uint64_t t39 = 463818LLU;

    t39 = ((x221==x222)|(x223*x224));

    if (t39 != 128LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x226 = -6744;
	volatile uint64_t x227 = 60158728030LLU;
	volatile uint8_t x228 = 1U;

    t40 = ((x225==x226)|(x227*x228));

    if (t40 != 60158728030LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x229 = INT32_MAX;
	int8_t x230 = INT8_MAX;
	uint64_t x232 = 971326520591LLU;
	uint64_t t41 = 6048389755504429LLU;

    t41 = ((x229==x230)|(x231*x232));

    if (t41 != 72849489044325LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x233 = INT16_MAX;
	int16_t x235 = INT16_MIN;
	volatile int16_t x236 = INT16_MIN;

    t42 = ((x233==x234)|(x235*x236));

    if (t42 != 1073741824) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x241 = -1;
	int8_t x243 = INT8_MIN;
	int16_t x244 = 39;
	volatile int32_t t43 = 1;

    t43 = ((x241==x242)|(x243*x244));

    if (t43 != -4992) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x245 = UINT8_MAX;
	int64_t x246 = -1LL;
	int32_t x247 = 2093850;
	int64_t x248 = -1LL;
	int64_t t44 = 447900365516LL;

    t44 = ((x245==x246)|(x247*x248));

    if (t44 != -2093850LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = UINT16_MAX;
	static volatile uint16_t x252 = 17107U;

    t45 = ((x249==x250)|(x251*x252));

    if (t45 != 1121107245) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	int32_t x254 = -2876235;
	uint64_t x256 = 149117LLU;
	volatile uint64_t t46 = 130839LLU;

    t46 = ((x253==x254)|(x255*x256));

    if (t46 != 17185137782LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = -1;
	int32_t t47 = 871561;

    t47 = ((x257==x258)|(x259*x260));

    if (t47 != 128) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int16_t x261 = -831;
	volatile uint8_t x262 = 22U;
	int16_t x263 = INT16_MIN;
	uint32_t t48 = 1U;

    t48 = ((x261==x262)|(x263*x264));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint32_t x266 = UINT32_MAX;
	int64_t x268 = -757653964LL;
	volatile int64_t t49 = -3872853079LL;

    t49 = ((x265==x266)|(x267*x268));

    if (t49 != 1627049498532380672LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x269 = INT16_MIN;
	static volatile uint64_t x270 = UINT64_MAX;
	uint64_t x271 = 270987118980LLU;
	uint64_t x272 = 13024465LLU;
	uint64_t t50 = 60071823LLU;

    t50 = ((x269==x270)|(x271*x272));

    if (t50 != 3529462246605845700LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x273 = -1;
	int64_t x274 = INT64_MAX;
	volatile int32_t x275 = INT32_MIN;
	int64_t x276 = 70064LL;
	volatile int64_t t51 = 4391060637666LL;

    t51 = ((x273==x274)|(x275*x276));

    if (t51 != -150461294313472LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x279 = INT8_MIN;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t52 = -839404;

    t52 = ((x277==x278)|(x279*x280));

    if (t52 != 16384) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x283 = 3509426;
	volatile uint32_t x284 = UINT32_MAX;
	volatile uint32_t t53 = 59U;

    t53 = ((x281==x282)|(x283*x284));

    if (t53 != 4291457871U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x285 = -1;
	int64_t x286 = -29498LL;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 0U;
	static uint64_t t54 = 1961LLU;

    t54 = ((x285==x286)|(x287*x288));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x289 = 161986LLU;
	uint64_t x290 = 46793461LLU;
	uint8_t x291 = 14U;
	static volatile int32_t t55 = -1632;

    t55 = ((x289==x290)|(x291*x292));

    if (t55 != 1526) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x297 = 5907U;
	volatile int32_t x298 = INT32_MAX;
	static uint32_t t56 = 26035206U;

    t56 = ((x297==x298)|(x299*x300));

    if (t56 != 1564964834U) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint32_t x301 = UINT32_MAX;
	static volatile uint16_t x302 = 3573U;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MAX;
	static int32_t t57 = -11812;

    t57 = ((x301==x302)|(x303*x304));

    if (t57 != 8355585) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	static int32_t x307 = -1;
	uint64_t t58 = 27073356698LLU;

    t58 = ((x305==x306)|(x307*x308));

    if (t58 != 18446744073709549906LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x309 = 0;
	uint32_t x310 = 9449483U;
	uint8_t x311 = 0U;
	int16_t x312 = INT16_MIN;

    t59 = ((x309==x310)|(x311*x312));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x313 = -14LL;
	int16_t x314 = -1;
	uint8_t x315 = 16U;
	static volatile int32_t t60 = -7256553;

    t60 = ((x313==x314)|(x315*x316));

    if (t60 != -2048) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x317 = 6LL;
	int64_t x318 = 4000992919823LL;
	static uint64_t x319 = 20634876LLU;

    t61 = ((x317==x318)|(x319*x320));

    if (t61 != 18446744073688916740LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = -3400;
	volatile int8_t x322 = -1;
	int8_t x323 = -51;
	int32_t t62 = -139;

    t62 = ((x321==x322)|(x323*x324));

    if (t62 != -3342285) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 30616U;
	volatile uint8_t x331 = 87U;
	int16_t x332 = -47;
	static volatile int32_t t63 = 82443;

    t63 = ((x329==x330)|(x331*x332));

    if (t63 != -4089) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MAX;
	uint32_t x340 = 5U;
	static volatile uint32_t t64 = 71226734U;

    t64 = ((x337==x338)|(x339*x340));

    if (t64 != 2192283690U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x341 = UINT64_MAX;
	int16_t x342 = 2691;
	static int32_t x343 = 2061463;
	uint16_t x344 = 4U;

    t65 = ((x341==x342)|(x343*x344));

    if (t65 != 8245852) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x353 = -1;
	uint64_t x356 = UINT64_MAX;
	uint64_t t66 = 15340375LLU;

    t66 = ((x353==x354)|(x355*x356));

    if (t66 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	static int32_t x359 = INT32_MIN;
	int64_t x360 = -60LL;
	volatile int64_t t67 = 1505471092144LL;

    t67 = ((x357==x358)|(x359*x360));

    if (t67 != 128849018880LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x365 = 29;
	int8_t x366 = -1;
	volatile uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 268954U;
	volatile uint32_t t68 = 13U;

    t68 = ((x365==x366)|(x367*x368));

    if (t68 != 4294698342U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x377 = INT32_MAX;
	uint8_t x378 = 0U;
	static volatile uint32_t x379 = UINT32_MAX;
	volatile int8_t x380 = INT8_MIN;
	uint32_t t69 = 77315U;

    t69 = ((x377==x378)|(x379*x380));

    if (t69 != 128U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x381 = INT32_MIN;
	int64_t x382 = 10LL;
	int8_t x383 = -1;
	static uint16_t x384 = 6717U;
	volatile int32_t t70 = -3269;

    t70 = ((x381==x382)|(x383*x384));

    if (t70 != -6717) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x393 = 0U;
	int32_t x394 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	uint8_t x396 = 0U;
	volatile int32_t t71 = -92185449;

    t71 = ((x393==x394)|(x395*x396));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x401 = UINT8_MAX;
	volatile int32_t x403 = -1;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t72 = -753;

    t72 = ((x401==x402)|(x403*x404));

    if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x409 = UINT64_MAX;
	int64_t x410 = -1LL;
	uint16_t x411 = 1U;
	static int16_t x412 = 1772;

    t73 = ((x409==x410)|(x411*x412));

    if (t73 != 1773) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x413 = INT16_MIN;
	volatile int64_t x414 = -778LL;
	int64_t x415 = 318LL;
	static int64_t t74 = -46803370212541969LL;

    t74 = ((x413==x414)|(x415*x416));

    if (t74 != -10420224LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x417 = -628215166;
	uint64_t x419 = UINT64_MAX;
	static volatile uint32_t x420 = 1U;
	uint64_t t75 = UINT64_MAX;

    t75 = ((x417==x418)|(x419*x420));

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x422 = 60320494U;
	volatile int8_t x423 = INT8_MIN;
	int32_t x424 = -1;

    t76 = ((x421==x422)|(x423*x424));

    if (t76 != 128) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x425 = 23U;
	int16_t x426 = INT16_MAX;
	volatile int8_t x427 = -1;
	int32_t x428 = 193693364;
	volatile int32_t t77 = 198961;

    t77 = ((x425==x426)|(x427*x428));

    if (t77 != -193693364) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x429 = -1;
	uint8_t x431 = 31U;
	int16_t x432 = INT16_MIN;
	int32_t t78 = -61609189;

    t78 = ((x429==x430)|(x431*x432));

    if (t78 != -1015808) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x433 = INT8_MAX;
	uint8_t x434 = UINT8_MAX;
	static uint64_t x435 = UINT64_MAX;
	uint32_t x436 = 68U;

    t79 = ((x433==x434)|(x435*x436));

    if (t79 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x437 = 529524638339614413LLU;
	int64_t x438 = INT64_MIN;
	uint8_t x439 = 1U;
	static volatile int16_t x440 = INT16_MIN;
	volatile int32_t t80 = -30641;

    t80 = ((x437==x438)|(x439*x440));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x441 = -1LL;
	uint8_t x443 = 7U;

    t81 = ((x441==x442)|(x443*x444));

    if (t81 != 3241508284LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x445 = INT8_MAX;
	volatile uint8_t x446 = 1U;
	static int64_t x447 = -1LL;

    t82 = ((x445==x446)|(x447*x448));

    if (t82 != -3129569824979897LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x449 = INT64_MIN;
	uint8_t x450 = 0U;
	uint64_t x451 = 60799799809LLU;
	volatile int8_t x452 = INT8_MAX;
	uint64_t t83 = 383531261020LLU;

    t83 = ((x449==x450)|(x451*x452));

    if (t83 != 7721574575743LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x453 = INT32_MIN;
	static uint16_t x454 = 6U;
	int32_t x456 = 16;
	int32_t t84 = -2;

    t84 = ((x453==x454)|(x455*x456));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x457 = 1U;
	int64_t x458 = INT64_MIN;
	int16_t x459 = -13;
	static volatile uint32_t x460 = UINT32_MAX;

    t85 = ((x457==x458)|(x459*x460));

    if (t85 != 13U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x461 = 15;
	uint32_t x462 = UINT32_MAX;
	int64_t x463 = 226301LL;
	uint32_t x464 = 1778956998U;
	volatile int64_t t86 = 28165325639919082LL;

    t86 = ((x461==x462)|(x463*x464));

    if (t86 != 402579747604398LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x465 = -1;
	static uint32_t x467 = UINT32_MAX;
	static uint32_t t87 = 952U;

    t87 = ((x465==x466)|(x467*x468));

    if (t87 != 128U) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x469 = 3908734LLU;
	int8_t x470 = 8;
	int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MIN;
	int32_t t88 = -224;

    t88 = ((x469==x470)|(x471*x472));

    if (t88 != 1073741824) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x477 = INT16_MAX;
	int16_t x479 = INT16_MIN;
	int64_t t89 = 1LL;

    t89 = ((x477==x478)|(x479*x480));

    if (t89 != 3842539520LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x481 = 2U;
	int8_t x482 = INT8_MAX;
	int16_t x483 = -1;
	static uint32_t x484 = 1135527U;
	volatile uint32_t t90 = 398820U;

    t90 = ((x481==x482)|(x483*x484));

    if (t90 != 4293831769U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x485 = INT8_MIN;
	volatile int16_t x486 = INT16_MIN;
	static uint64_t x487 = 4801LLU;
	volatile int8_t x488 = INT8_MAX;

    t91 = ((x485==x486)|(x487*x488));

    if (t91 != 609727LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x489 = INT32_MIN;
	static int64_t x490 = -2LL;
	static int8_t x492 = 0;
	volatile int32_t t92 = 9114;

    t92 = ((x489==x490)|(x491*x492));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x493 = -343793834273618394LL;
	int8_t x494 = 0;
	int64_t x495 = -1LL;
	uint32_t x496 = UINT32_MAX;
	static int64_t t93 = 114LL;

    t93 = ((x493==x494)|(x495*x496));

    if (t93 != -4294967295LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x501 = -1;

    t94 = ((x501==x502)|(x503*x504));

    if (t94 != 18439681061725206053LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x505 = 22U;
	int8_t x508 = -27;
	volatile uint64_t t95 = 1304279LLU;

    t95 = ((x505==x506)|(x507*x508));

    if (t95 != 27LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x518 = INT64_MIN;
	static int16_t x520 = -1;

    t96 = ((x517==x518)|(x519*x520));

    if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x521 = INT16_MIN;
	static uint8_t x522 = 10U;
	uint8_t x523 = UINT8_MAX;
	int8_t x524 = INT8_MAX;
	int32_t t97 = 21;

    t97 = ((x521==x522)|(x523*x524));

    if (t97 != 32385) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = INT32_MAX;
	static volatile int16_t x528 = INT16_MIN;

    t98 = ((x525==x526)|(x527*x528));

    if (t98 != 196608) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x532 = 0;
	volatile uint64_t t99 = 5LLU;

    t99 = ((x529==x530)|(x531*x532));

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x537 = INT16_MAX;
	uint64_t x538 = 60466785625034268LLU;
	volatile int16_t x539 = 1;
	static volatile int32_t x540 = INT32_MIN;
	int32_t t100 = INT32_MIN;

    t100 = ((x537==x538)|(x539*x540));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x541 = -3696859385708LL;
	int64_t x542 = INT64_MAX;
	uint16_t x543 = 10U;
	uint8_t x544 = 85U;
	static int32_t t101 = -1043;

    t101 = ((x541==x542)|(x543*x544));

    if (t101 != 850) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x545 = 1U;
	volatile uint16_t x546 = 15U;
	int16_t x547 = INT16_MIN;
	volatile int16_t x548 = INT16_MIN;
	volatile int32_t t102 = 105834549;

    t102 = ((x545==x546)|(x547*x548));

    if (t102 != 1073741824) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x550 = -49;
	int64_t x552 = INT64_MAX;
	volatile int64_t t103 = 1266134469429LL;

    t103 = ((x549==x550)|(x551*x552));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile uint8_t x554 = UINT8_MAX;
	static uint8_t x555 = UINT8_MAX;
	int8_t x556 = 29;

    t104 = ((x553==x554)|(x555*x556));

    if (t104 != 7395) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x565 = INT32_MIN;
	int32_t x567 = 0;
	int16_t x568 = -1;
	static int32_t t105 = -56008203;

    t105 = ((x565==x566)|(x567*x568));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x569 = INT16_MAX;
	int64_t x570 = -1171LL;
	static volatile int32_t t106 = -471;

    t106 = ((x569==x570)|(x571*x572));

    if (t106 != -255) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x573 = -1LL;
	static uint32_t x575 = 14398297U;

    t107 = ((x573==x574)|(x575*x576));

    if (t107 != 1238253542U) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = -16;
	int32_t x579 = INT32_MIN;
	uint32_t x580 = 906521U;
	volatile uint32_t t108 = 140U;

    t108 = ((x577==x578)|(x579*x580));

    if (t108 != 2147483648U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x581 = UINT16_MAX;
	int16_t x582 = -1;
	int32_t x583 = -65138;
	volatile uint16_t x584 = 6U;
	int32_t t109 = -243;

    t109 = ((x581==x582)|(x583*x584));

    if (t109 != -390828) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x585 = 0;
	int16_t x587 = -1;
	static int32_t x588 = -20;
	volatile int32_t t110 = 13;

    t110 = ((x585==x586)|(x587*x588));

    if (t110 != 20) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x589 = 468U;
	int32_t x590 = -1;
	int64_t x591 = -2605420LL;
	uint8_t x592 = UINT8_MAX;
	int64_t t111 = 692139314LL;

    t111 = ((x589==x590)|(x591*x592));

    if (t111 != -664382100LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint8_t x593 = UINT8_MAX;
	volatile int32_t x594 = -1;
	int64_t x595 = INT64_MIN;
	uint16_t x596 = 0U;
	volatile int64_t t112 = 1LL;

    t112 = ((x593==x594)|(x595*x596));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x599 = INT16_MIN;
	int16_t x600 = -1;
	int32_t t113 = 19334625;

    t113 = ((x597==x598)|(x599*x600));

    if (t113 != 32768) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x605 = UINT64_MAX;
	uint32_t x606 = UINT32_MAX;
	uint32_t x607 = 43611U;
	int8_t x608 = -1;
	uint32_t t114 = 49U;

    t114 = ((x605==x606)|(x607*x608));

    if (t114 != 4294923685U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x609 = INT16_MIN;
	int64_t x610 = 136954788395291476LL;
	int16_t x611 = INT16_MAX;
	int8_t x612 = -60;
	int32_t t115 = -9744;

    t115 = ((x609==x610)|(x611*x612));

    if (t115 != -1966020) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x613 = INT64_MIN;
	int32_t x614 = -6354;
	uint8_t x615 = 3U;
	int16_t x616 = -1;
	static int32_t t116 = 1;

    t116 = ((x613==x614)|(x615*x616));

    if (t116 != -3) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x618 = 15U;
	uint16_t x619 = 1292U;
	int8_t x620 = INT8_MAX;
	int32_t t117 = -48798044;

    t117 = ((x617==x618)|(x619*x620));

    if (t117 != 164084) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x621 = INT8_MAX;
	int8_t x623 = INT8_MIN;
	int16_t x624 = INT16_MIN;
	int32_t t118 = -565871;

    t118 = ((x621==x622)|(x623*x624));

    if (t118 != 4194304) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x625 = INT16_MIN;
	static int64_t x626 = INT64_MAX;
	int16_t x627 = INT16_MIN;
	volatile int32_t t119 = 0;

    t119 = ((x625==x626)|(x627*x628));

    if (t119 != 1073741824) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x634 = 3100644U;
	static uint32_t x635 = 35649826U;
	static int8_t x636 = INT8_MAX;
	uint32_t t120 = 30563433U;

    t120 = ((x633==x634)|(x635*x636));

    if (t120 != 232560606U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x638 = UINT32_MAX;
	static uint8_t x639 = 7U;
	static volatile int32_t t121 = 35;

    t121 = ((x637==x638)|(x639*x640));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MIN;
	static int32_t t122 = -782279;

    t122 = ((x641==x642)|(x643*x644));

    if (t122 != 4980) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x645 = 10;
	int16_t x646 = INT16_MAX;
	volatile uint32_t x648 = UINT32_MAX;
	static volatile uint32_t t123 = 1236470460U;

    t123 = ((x645==x646)|(x647*x648));

    if (t123 != 128U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint16_t x649 = 57U;
	int32_t x651 = -1;
	int16_t x652 = 15186;
	int32_t t124 = 901518197;

    t124 = ((x649==x650)|(x651*x652));

    if (t124 != -15186) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x654 = -1;
	volatile int64_t x656 = INT64_MAX;
	volatile int64_t t125 = 21225LL;

    t125 = ((x653==x654)|(x655*x656));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x661 = 1844U;
	uint8_t x662 = 2U;
	uint8_t x664 = 2U;
	volatile int64_t t126 = 2961195167161039289LL;

    t126 = ((x661==x662)|(x663*x664));

    if (t126 != 2090371051654LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x665 = 94832016051332LL;
	uint64_t x666 = UINT64_MAX;
	int32_t x667 = 25580;
	static volatile int8_t x668 = INT8_MIN;
	static volatile int32_t t127 = 13305828;

    t127 = ((x665==x666)|(x667*x668));

    if (t127 != -3274240) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x669 = INT8_MIN;
	static volatile int64_t x670 = INT64_MAX;
	int8_t x672 = -18;

    t128 = ((x669==x670)|(x671*x672));

    if (t128 != 4294966216U) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x674 = INT64_MIN;
	volatile uint16_t x675 = UINT16_MAX;
	static int64_t x676 = -24857LL;

    t129 = ((x673==x674)|(x675*x676));

    if (t129 != -1629003495LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x682 = INT8_MIN;
	int8_t x684 = 2;

    t130 = ((x681==x682)|(x683*x684));

    if (t130 != -156584) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x685 = UINT32_MAX;
	int16_t x686 = INT16_MAX;
	uint32_t x687 = UINT32_MAX;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t131 = 4280385298480LLU;

    t131 = ((x685==x686)|(x687*x688));

    if (t131 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x689 = 11U;
	int16_t x690 = INT16_MIN;
	int16_t x692 = INT16_MIN;
	uint32_t t132 = 122U;

    t132 = ((x689==x690)|(x691*x692));

    if (t132 != 32768U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x698 = 4948372412LL;
	static int8_t x699 = INT8_MIN;
	uint32_t x700 = 359U;

    t133 = ((x697==x698)|(x699*x700));

    if (t133 != 4294921344U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x702 = -1LL;
	int16_t x703 = INT16_MAX;
	uint64_t t134 = 2415804469132LLU;

    t134 = ((x701==x702)|(x703*x704));

    if (t134 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x705 = -12517;
	static uint32_t x707 = 116224765U;
	static volatile int8_t x708 = -1;
	volatile uint32_t t135 = 131040856U;

    t135 = ((x705==x706)|(x707*x708));

    if (t135 != 4178742531U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x709 = 2063955U;
	int8_t x711 = 39;
	uint32_t x712 = UINT32_MAX;
	static volatile uint32_t t136 = 39354125U;

    t136 = ((x709==x710)|(x711*x712));

    if (t136 != 4294967257U) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x717 = -1;
	static int32_t x718 = -1;
	int32_t x719 = -1;
	static int32_t x720 = INT32_MAX;
	volatile int32_t t137 = -127920;

    t137 = ((x717==x718)|(x719*x720));

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x722 = -9;
	volatile int64_t x723 = 4LL;
	int32_t x724 = -5;
	static int64_t t138 = 29512965217LL;

    t138 = ((x721==x722)|(x723*x724));

    if (t138 != -20LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x725 = INT8_MAX;
	int16_t x726 = -1;
	int8_t x727 = INT8_MAX;
	volatile int32_t x728 = -1;
	int32_t t139 = -730751;

    t139 = ((x725==x726)|(x727*x728));

    if (t139 != -127) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MIN;
	static volatile int16_t x731 = -1;
	uint32_t x732 = 171U;
	static volatile uint32_t t140 = 30856U;

    t140 = ((x729==x730)|(x731*x732));

    if (t140 != 4294967125U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x733 = UINT64_MAX;
	uint16_t x734 = 6696U;
	int64_t x735 = 618992028876LL;
	static int16_t x736 = INT16_MIN;

    t141 = ((x733==x734)|(x735*x736));

    if (t141 != -20283130802208768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x741 = INT32_MIN;
	static int16_t x742 = INT16_MIN;
	int16_t x743 = 2231;
	uint64_t x744 = 30115LLU;
	uint64_t t142 = 669316LLU;

    t142 = ((x741==x742)|(x743*x744));

    if (t142 != 67186565LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x749 = -1;
	static volatile int8_t x750 = INT8_MIN;
	int16_t x751 = INT16_MAX;
	int16_t x752 = -2;

    t143 = ((x749==x750)|(x751*x752));

    if (t143 != -65534) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x754 = 1;
	uint8_t x755 = 31U;
	int8_t x756 = -1;
	int32_t t144 = -1007626066;

    t144 = ((x753==x754)|(x755*x756));

    if (t144 != -31) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x758 = INT32_MIN;
	int8_t x759 = -2;
	static volatile int64_t t145 = 28834815LL;

    t145 = ((x757==x758)|(x759*x760));

    if (t145 != -104728LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x767 = 281436LLU;
	int8_t x768 = INT8_MIN;
	static volatile uint64_t t146 = 330542413LLU;

    t146 = ((x765==x766)|(x767*x768));

    if (t146 != 18446744073673527809LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x769 = 22062U;
	static int64_t x770 = INT64_MIN;
	volatile int8_t x772 = -1;
	volatile int32_t t147 = 590;

    t147 = ((x769==x770)|(x771*x772));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x773 = UINT64_MAX;
	uint8_t x774 = 3U;
	static int16_t x775 = INT16_MAX;
	int16_t x776 = -1;
	volatile int32_t t148 = -14;

    t148 = ((x773==x774)|(x775*x776));

    if (t148 != -32767) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x777 = INT64_MIN;
	int64_t x778 = INT64_MAX;
	int8_t x779 = -1;
	uint8_t x780 = 18U;
	int32_t t149 = 40;

    t149 = ((x777==x778)|(x779*x780));

    if (t149 != -18) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x781 = INT32_MAX;
	int64_t x782 = INT64_MAX;
	uint16_t x783 = 444U;
	static uint16_t x784 = 111U;
	volatile int32_t t150 = 1785164;

    t150 = ((x781==x782)|(x783*x784));

    if (t150 != 49284) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x793 = INT64_MIN;
	uint64_t x794 = UINT64_MAX;
	int8_t x795 = -1;
	static volatile int32_t t151 = 62741;

    t151 = ((x793==x794)|(x795*x796));

    if (t151 != 128) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x797 = -1;
	uint64_t x800 = UINT64_MAX;
	uint64_t t152 = 330166000191LLU;

    t152 = ((x797==x798)|(x799*x800));

    if (t152 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x802 = UINT32_MAX;
	int8_t x803 = INT8_MIN;
	uint32_t x804 = 70U;
	volatile uint32_t t153 = 5469339U;

    t153 = ((x801==x802)|(x803*x804));

    if (t153 != 4294958337U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x809 = INT16_MAX;
	int64_t x810 = 3774LL;
	int64_t x811 = -14218416112LL;
	static uint64_t x812 = UINT64_MAX;
	uint64_t t154 = 228352LLU;

    t154 = ((x809==x810)|(x811*x812));

    if (t154 != 14218416112LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x813 = 966596818504LLU;
	int8_t x815 = 5;
	int16_t x816 = INT16_MIN;
	int32_t t155 = -123811511;

    t155 = ((x813==x814)|(x815*x816));

    if (t155 != -163840) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x819 = -1;
	uint64_t x820 = 9458803015060448LLU;

    t156 = ((x817==x818)|(x819*x820));

    if (t156 != 18437285270694491168LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x821 = -1;
	uint32_t x822 = UINT32_MAX;
	uint32_t x823 = 13U;
	uint64_t t157 = 6580504257258734LLU;

    t157 = ((x821==x822)|(x823*x824));

    if (t157 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x825 = 1605U;
	static uint64_t x827 = UINT64_MAX;
	static int16_t x828 = INT16_MAX;
	volatile uint64_t t158 = 3575325060240336LLU;

    t158 = ((x825==x826)|(x827*x828));

    if (t158 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x831 = -1;
	uint32_t x832 = 8169U;
	volatile uint32_t t159 = 75892293U;

    t159 = ((x829==x830)|(x831*x832));

    if (t159 != 4294959127U) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x833 = INT32_MIN;
	volatile uint16_t x834 = 1669U;
	static volatile int8_t x835 = INT8_MIN;
	volatile int32_t t160 = -86010618;

    t160 = ((x833==x834)|(x835*x836));

    if (t160 != -384) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x841 = 1663U;
	uint16_t x843 = 105U;
	int32_t x844 = 32;
	volatile int32_t t161 = 4166416;

    t161 = ((x841==x842)|(x843*x844));

    if (t161 != 3360) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x845 = INT32_MIN;
	static int16_t x846 = INT16_MIN;
	int64_t t162 = 309454LL;

    t162 = ((x845==x846)|(x847*x848));

    if (t162 != -132883LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint32_t x849 = UINT32_MAX;
	uint8_t x850 = 1U;
	int16_t x851 = -1;
	int32_t x852 = -1;

    t163 = ((x849==x850)|(x851*x852));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x857 = INT8_MAX;
	static int8_t x858 = INT8_MIN;
	int16_t x859 = 0;
	static int16_t x860 = INT16_MIN;
	int32_t t164 = -128;

    t164 = ((x857==x858)|(x859*x860));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x861 = 4906;
	volatile int8_t x862 = -1;
	int8_t x863 = 1;
	int16_t x864 = -20;
	volatile int32_t t165 = -32616634;

    t165 = ((x861==x862)|(x863*x864));

    if (t165 != -20) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x865 = 6986LLU;
	int8_t x866 = INT8_MIN;
	int8_t x867 = INT8_MIN;

    t166 = ((x865==x866)|(x867*x868));

    if (t166 != 16384) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x869 = UINT8_MAX;
	static int32_t x870 = INT32_MAX;
	volatile int32_t x871 = 142596421;
	int64_t t167 = 511228005LL;

    t167 = ((x869==x870)|(x871*x872));

    if (t167 != 146564500089950140LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x877 = INT8_MIN;
	volatile int64_t x878 = -2438036LL;
	uint8_t x879 = UINT8_MAX;
	volatile uint16_t x880 = 7502U;
	volatile int32_t t168 = -17399;

    t168 = ((x877==x878)|(x879*x880));

    if (t168 != 1913010) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x881 = INT64_MIN;
	uint32_t x882 = UINT32_MAX;
	int64_t x883 = INT64_MAX;
	volatile uint64_t t169 = 93762461066104LLU;

    t169 = ((x881==x882)|(x883*x884));

    if (t169 != 9223372036854773865LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x885 = INT16_MIN;
	int32_t x886 = INT32_MIN;
	int64_t x887 = INT64_MAX;
	uint64_t x888 = 211223252LLU;
	volatile uint64_t t170 = 118688LLU;

    t170 = ((x885==x886)|(x887*x888));

    if (t170 != 18446744073498328364LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x889 = INT32_MIN;
	int32_t x890 = -1;
	uint64_t x891 = UINT64_MAX;

    t171 = ((x889==x890)|(x891*x892));

    if (t171 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x897 = 88679481577160125LLU;
	int32_t x898 = -5434;
	volatile uint8_t x899 = 3U;
	int32_t x900 = -216;
	volatile int32_t t172 = 20;

    t172 = ((x897==x898)|(x899*x900));

    if (t172 != -648) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x905 = 1012893953623934090LLU;
	static int64_t x906 = INT64_MIN;
	static uint16_t x907 = UINT16_MAX;
	int16_t x908 = -13435;
	volatile int32_t t173 = -34;

    t173 = ((x905==x906)|(x907*x908));

    if (t173 != -880462725) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x910 = -7;
	int8_t x911 = INT8_MAX;
	volatile int8_t x912 = 0;
	volatile int32_t t174 = -139286435;

    t174 = ((x909==x910)|(x911*x912));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x913 = 3967U;
	int32_t x914 = -2522;
	uint16_t x915 = UINT16_MAX;
	volatile int32_t x916 = -11140;

    t175 = ((x913==x914)|(x915*x916));

    if (t175 != -730059900) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x917 = INT16_MIN;
	int16_t x918 = -1;
	uint8_t x919 = 0U;
	int8_t x920 = -1;
	static volatile int32_t t176 = -11;

    t176 = ((x917==x918)|(x919*x920));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x921 = -1;
	static int8_t x922 = 27;
	static uint16_t x923 = 1U;
	static int32_t x924 = INT32_MIN;
	volatile int32_t t177 = INT32_MIN;

    t177 = ((x921==x922)|(x923*x924));

    if (t177 != INT32_MIN) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile uint16_t x926 = 797U;
	volatile uint8_t x927 = 81U;
	int8_t x928 = -1;
	volatile int32_t t178 = 7;

    t178 = ((x925==x926)|(x927*x928));

    if (t178 != -81) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x929 = -46495945LL;
	int8_t x930 = -1;
	int16_t x931 = -1172;
	uint32_t t179 = 3003692U;

    t179 = ((x929==x930)|(x931*x932));

    if (t179 != 2526231276U) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x933 = -1;
	static int32_t x934 = -3506;
	uint32_t x936 = 1U;
	uint32_t t180 = 163871U;

    t180 = ((x933==x934)|(x935*x936));

    if (t180 != 2147483647U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x938 = UINT64_MAX;
	int64_t x939 = 131945287LL;
	int8_t x940 = -1;
	volatile int64_t t181 = -1LL;

    t181 = ((x937==x938)|(x939*x940));

    if (t181 != -131945287LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x942 = INT64_MIN;

    t182 = ((x941==x942)|(x943*x944));

    if (t182 != 3) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x953 = 3959466LLU;
	int64_t x954 = INT64_MAX;
	uint16_t x956 = 2U;
	int32_t t183 = 135884345;

    t183 = ((x953==x954)|(x955*x956));

    if (t183 != -65536) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x957 = 1705960U;
	uint32_t x958 = 6654U;
	int8_t x959 = INT8_MIN;
	int64_t x960 = -1LL;

    t184 = ((x957==x958)|(x959*x960));

    if (t184 != 128LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x962 = INT16_MIN;
	uint32_t x963 = 3807992U;
	int32_t x964 = -21455424;

    t185 = ((x961==x962)|(x963*x964));

    if (t185 != 1079923200U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x965 = -1;
	volatile int32_t x966 = INT32_MIN;
	int8_t x968 = INT8_MAX;

    t186 = ((x965==x966)|(x967*x968));

    if (t186 != 4161409) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x969 = 3U;
	int16_t x972 = INT16_MAX;
	volatile int32_t t187 = -1;

    t187 = ((x969==x970)|(x971*x972));

    if (t187 != -509297481) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x973 = INT16_MAX;
	int16_t x974 = INT16_MAX;
	int16_t x976 = -1;

    t188 = ((x973==x974)|(x975*x976));

    if (t188 != 1U) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x977 = -1;
	static int16_t x978 = INT16_MAX;
	uint16_t x980 = 6650U;
	int64_t t189 = 0LL;

    t189 = ((x977==x978)|(x979*x980));

    if (t189 != -415877700LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x981 = INT16_MIN;
	int8_t x982 = INT8_MIN;
	volatile int8_t x983 = INT8_MIN;
	volatile uint64_t t190 = 38407LLU;

    t190 = ((x981==x982)|(x983*x984));

    if (t190 != 128LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x985 = INT64_MAX;
	volatile int16_t x986 = -1;
	volatile uint64_t x988 = 2146683132LLU;
	static volatile uint64_t t191 = 256388LLU;

    t191 = ((x985==x986)|(x987*x988));

    if (t191 != 18446744071562868484LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x990 = -25071931;
	uint32_t x992 = UINT32_MAX;
	uint64_t t192 = 619648405932061LLU;

    t192 = ((x989==x990)|(x991*x992));

    if (t192 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x993 = UINT32_MAX;
	int16_t x994 = INT16_MIN;
	volatile int16_t x995 = INT16_MIN;
	int32_t x996 = 0;
	int32_t t193 = -1829292;

    t193 = ((x993==x994)|(x995*x996));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x997 = 707579;
	int16_t x998 = INT16_MIN;
	uint64_t x999 = 27350471348020LLU;
	volatile uint64_t t194 = 6083544225528520LLU;

    t194 = ((x997==x998)|(x999*x1000));

    if (t194 != 17550523828577632256LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1002 = -1;
	static uint64_t x1003 = 3LLU;
	int64_t x1004 = INT64_MAX;
	uint64_t t195 = 6581LLU;

    t195 = ((x1001==x1002)|(x1003*x1004));

    if (t195 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1005 = 0U;
	uint32_t x1006 = 957498U;
	int64_t x1007 = -1LL;
	uint64_t x1008 = UINT64_MAX;
	uint64_t t196 = 171LLU;

    t196 = ((x1005==x1006)|(x1007*x1008));

    if (t196 != 1LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1017 = 44U;
	static uint8_t x1018 = UINT8_MAX;
	uint32_t x1019 = 5091U;
	uint32_t x1020 = UINT32_MAX;

    t197 = ((x1017==x1018)|(x1019*x1020));

    if (t197 != 4294962205U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1021 = -8;
	uint32_t x1023 = 31922U;
	volatile uint8_t x1024 = 82U;
	volatile uint32_t t198 = 107U;

    t198 = ((x1021==x1022)|(x1023*x1024));

    if (t198 != 2617604U) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x1025 = -15;
	static uint16_t x1027 = UINT16_MAX;
	volatile int32_t t199 = 48098;

    t199 = ((x1025==x1026)|(x1027*x1028));

    if (t199 != -8388480) { NG(); } else { ; }
	
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

