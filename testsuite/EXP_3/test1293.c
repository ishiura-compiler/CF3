#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 3U;
int64_t x5 = -1LL;
volatile int32_t t1 = -335972526;
uint8_t x9 = UINT8_MAX;
int64_t x14 = INT64_MIN;
volatile int32_t t3 = 183857;
volatile int32_t t5 = 21;
int32_t t6 = 403120231;
static int32_t x29 = INT32_MAX;
uint8_t x30 = UINT8_MAX;
int32_t t8 = -7;
static int64_t x44 = -1LL;
int32_t t10 = -41;
int8_t x58 = -1;
uint16_t x64 = UINT16_MAX;
int32_t x69 = INT32_MIN;
volatile int32_t t17 = -2291050;
int16_t x73 = 4;
int16_t x75 = INT16_MIN;
volatile int8_t x76 = INT8_MAX;
static int16_t x79 = -1;
int32_t t19 = -33394;
int16_t x84 = -1;
static int32_t x88 = INT32_MIN;
int8_t x89 = INT8_MIN;
uint16_t x91 = 57U;
int16_t x96 = -1;
int8_t x103 = 8;
uint16_t x104 = UINT16_MAX;
volatile int32_t x105 = -1;
int8_t x111 = INT8_MIN;
int8_t x112 = 1;
int32_t x115 = -1;
int16_t x124 = INT16_MIN;
int32_t x125 = -279;
int64_t x126 = INT64_MIN;
volatile uint8_t x127 = UINT8_MAX;
int32_t x128 = INT32_MIN;
int32_t x130 = 1;
uint16_t x134 = 175U;
int8_t x137 = -1;
volatile uint16_t x138 = 205U;
int32_t t34 = -965959388;
int32_t x142 = -1;
int16_t x144 = INT16_MAX;
int8_t x147 = 0;
int16_t x163 = INT16_MIN;
volatile int16_t x169 = -1;
uint64_t x174 = 228075760138LLU;
uint8_t x177 = 17U;
volatile int8_t x179 = INT8_MIN;
volatile uint64_t x181 = 120631LLU;
int16_t x186 = INT16_MIN;
static volatile int32_t t47 = 0;
uint32_t x194 = UINT32_MAX;
static volatile uint16_t x195 = 16602U;
uint16_t x197 = UINT16_MAX;
uint64_t x205 = 2553862662050LLU;
int64_t x206 = INT64_MIN;
int64_t x214 = INT64_MAX;
int8_t x220 = INT8_MAX;
static uint32_t x224 = UINT32_MAX;
int8_t x229 = 1;
uint32_t x230 = 3843456U;
int32_t t59 = -20995;
volatile int32_t t60 = -191200135;
uint32_t x246 = 46U;
int64_t x248 = -214565672LL;
int16_t x258 = -1933;
static uint16_t x264 = UINT16_MAX;
int32_t x265 = INT32_MAX;
static volatile int8_t x266 = INT8_MAX;
int16_t x270 = INT16_MIN;
volatile int32_t t67 = 1;
volatile int32_t t68 = 125894;
int64_t x288 = INT64_MIN;
int8_t x291 = INT8_MAX;
volatile int8_t x296 = INT8_MAX;
int16_t x307 = 233;
int64_t x309 = -58413045LL;
int32_t x310 = INT32_MAX;
volatile uint16_t x311 = 635U;
int8_t x318 = INT8_MIN;
int16_t x322 = -1;
int8_t x326 = INT8_MAX;
volatile int16_t x327 = 33;
uint8_t x330 = 32U;
static int32_t t82 = 1408096;
volatile uint32_t x333 = UINT32_MAX;
static uint8_t x335 = 2U;
int8_t x347 = -1;
uint16_t x348 = 1654U;
int64_t x357 = INT64_MAX;
int8_t x358 = INT8_MIN;
int32_t x359 = -1;
uint8_t x361 = 26U;
int32_t x364 = INT32_MIN;
uint64_t x365 = UINT64_MAX;
volatile int32_t t91 = -19874;
static int32_t x369 = -9381;
static volatile int16_t x370 = INT16_MIN;
int64_t x373 = INT64_MIN;
volatile int32_t t93 = -139632127;
int64_t x381 = -1LL;
uint16_t x382 = 2141U;
static uint8_t x395 = UINT8_MAX;
uint16_t x397 = UINT16_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	int32_t x3 = -1;
	static volatile int32_t x4 = -3;
	static volatile int32_t t0 = -50830712;

	t0 = ((x1<x2)<<(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = 11U;
	int32_t x7 = INT32_MIN;
	static int32_t x8 = 71;

	t1 = ((x5<x6)<<(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile uint16_t x11 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = 110570071;

	t2 = ((x9<x10)<<(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 813201U;
	static int8_t x15 = 3;
	uint16_t x16 = 3U;

	t3 = ((x13<x14)<<(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	volatile uint8_t x18 = 91U;
	uint64_t x19 = UINT64_MAX;
	int32_t x20 = 4358229;
	volatile int32_t t4 = -114774321;

	t4 = ((x17<x18)<<(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	static uint8_t x24 = 14U;

	t5 = ((x21<x22)<<(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 29U;
	int16_t x26 = -1;
	int64_t x27 = -310640825901550510LL;
	volatile int32_t x28 = -2;

	t6 = ((x25<x26)<<(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = -2423;
	static int16_t x32 = -1;
	volatile int32_t t7 = 251;

	t7 = ((x29<x30)<<(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -31;
	volatile int64_t x34 = INT64_MIN;
	int32_t x35 = -1;
	volatile int16_t x36 = -1;

	t8 = ((x33<x34)<<(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	volatile int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 446061;

	t9 = ((x37<x38)<<(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	static int8_t x42 = -2;
	volatile int8_t x43 = INT8_MIN;

	t10 = ((x41<x42)<<(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 479877853495473LL;
	int8_t x46 = INT8_MAX;
	volatile int8_t x47 = 1;
	int32_t x48 = 1;
	int32_t t11 = 224;

	t11 = ((x45<x46)<<(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = UINT64_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -1;
	int64_t x52 = INT64_MAX;
	volatile int32_t t12 = -6560525;

	t12 = ((x49<x50)<<(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 28276U;
	volatile int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	uint32_t x56 = UINT32_MAX;
	static int32_t t13 = -1271;

	t13 = ((x53<x54)<<(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 51U;
	static int8_t x59 = -1;
	int64_t x60 = INT64_MIN;
	static int32_t t14 = -105;

	t14 = ((x57<x58)<<(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	volatile int16_t x62 = -23;
	int64_t x63 = INT64_MAX;
	volatile int32_t t15 = 0;

	t15 = ((x61<x62)<<(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 15580822;
	int32_t x66 = INT32_MIN;
	static uint16_t x67 = 12432U;
	uint32_t x68 = UINT32_MAX;
	static volatile int32_t t16 = -4;

	t16 = ((x65<x66)<<(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MAX;
	int16_t x71 = -35;
	uint8_t x72 = UINT8_MAX;

	t17 = ((x69<x70)<<(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	int32_t t18 = 1;

	t18 = ((x73<x74)<<(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int64_t x78 = 168705LL;
	int32_t x80 = INT32_MIN;

	t19 = ((x77<x78)<<(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	uint8_t x82 = UINT8_MAX;
	static volatile int32_t x83 = INT32_MAX;
	static int32_t t20 = 1723;

	t20 = ((x81<x82)<<(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = INT16_MIN;
	static int32_t x86 = INT32_MIN;
	uint32_t x87 = 24208U;
	static int32_t t21 = -6;

	t21 = ((x85<x86)<<(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x90 = INT8_MIN;
	static int16_t x92 = -7;
	static volatile int32_t t22 = 999;

	t22 = ((x89<x90)<<(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = UINT32_MAX;
	static volatile int16_t x95 = -1;
	int32_t t23 = -366;

	t23 = ((x93<x94)<<(x95==x96));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int64_t x100 = 3672527845457246LL;
	volatile int32_t t24 = 106851253;

	t24 = ((x97<x98)<<(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 26427U;
	int8_t x102 = 0;
	int32_t t25 = -276;

	t25 = ((x101<x102)<<(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 1U;
	int32_t x108 = INT32_MAX;
	static int32_t t26 = 1;

	t26 = ((x105<x106)<<(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 3;
	static int8_t x110 = -1;
	int32_t t27 = 195179;

	t27 = ((x109<x110)<<(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 8;
	int32_t x114 = INT32_MIN;
	static int16_t x116 = 315;
	int32_t t28 = 977749;

	t28 = ((x113<x114)<<(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int16_t x118 = INT16_MIN;
	int16_t x119 = -1;
	int64_t x120 = INT64_MAX;
	int32_t t29 = 2400772;

	t29 = ((x117<x118)<<(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	uint64_t x122 = UINT64_MAX;
	volatile uint32_t x123 = 5034U;
	volatile int32_t t30 = 46;

	t30 = ((x121<x122)<<(x123==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t t31 = 72055;

	t31 = ((x125<x126)<<(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 11055U;
	static volatile int64_t x131 = INT64_MIN;
	volatile int64_t x132 = INT64_MIN;
	static int32_t t32 = 235416220;

	t32 = ((x129<x130)<<(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	uint16_t x135 = 2446U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -1264;

	t33 = ((x133<x134)<<(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x139 = -1LL;
	uint8_t x140 = 0U;

	t34 = ((x137<x138)<<(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -4987800566507918LL;
	int32_t x143 = -1;
	static int32_t t35 = -10692;

	t35 = ((x141<x142)<<(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 5U;
	int64_t x146 = INT64_MIN;
	uint8_t x148 = UINT8_MAX;
	int32_t t36 = -1784319;

	t36 = ((x145<x146)<<(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = 3747135LLU;
	uint32_t x151 = UINT32_MAX;
	uint32_t x152 = UINT32_MAX;
	static int32_t t37 = -4;

	t37 = ((x149<x150)<<(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 1246LL;
	volatile int16_t x154 = INT16_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int32_t x156 = INT32_MIN;
	int32_t t38 = 7659;

	t38 = ((x153<x154)<<(x155==x156));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MAX;
	int8_t x158 = -1;
	static int8_t x159 = 32;
	volatile int64_t x160 = 33650LL;
	volatile int32_t t39 = 0;

	t39 = ((x157<x158)<<(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	int64_t x162 = INT64_MIN;
	int16_t x164 = -4402;
	static volatile int32_t t40 = 146;

	t40 = ((x161<x162)<<(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = 2U;
	int64_t x167 = INT64_MIN;
	volatile uint64_t x168 = 472422115217291LLU;
	int32_t t41 = 727343975;

	t41 = ((x165<x166)<<(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = -1LL;
	int32_t t42 = -541;

	t42 = ((x169<x170)<<(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -2578834LL;
	int32_t x175 = -2;
	static int32_t x176 = INT32_MAX;
	int32_t t43 = 423;

	t43 = ((x173<x174)<<(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x178 = 418149U;
	int32_t x180 = -1;
	int32_t t44 = 9138;

	t44 = ((x177<x178)<<(x179==x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 3730832722LLU;
	int64_t x184 = -1LL;
	int32_t t45 = 63025;

	t45 = ((x181<x182)<<(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 3789;
	int8_t x187 = -1;
	int64_t x188 = 29857848674672240LL;
	static int32_t t46 = -2;

	t46 = ((x185<x186)<<(x187==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x189 = 61U;
	int8_t x190 = INT8_MIN;
	static int32_t x191 = -8113312;
	int16_t x192 = -24;

	t47 = ((x189<x190)<<(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile int8_t x196 = 0;
	volatile int32_t t48 = 1023694930;

	t48 = ((x193<x194)<<(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x198 = 30;
	volatile int8_t x199 = -1;
	int8_t x200 = -1;
	volatile int32_t t49 = -1;

	t49 = ((x197<x198)<<(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -1;
	int64_t x202 = INT64_MAX;
	int32_t x203 = 90418;
	uint16_t x204 = UINT16_MAX;
	int32_t t50 = -379449;

	t50 = ((x201<x202)<<(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x207 = INT64_MIN;
	uint8_t x208 = 8U;
	static volatile int32_t t51 = -59763721;

	t51 = ((x205<x206)<<(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	uint32_t x210 = 14918625U;
	volatile uint32_t x211 = 233876U;
	static int32_t x212 = INT32_MIN;
	int32_t t52 = 107513;

	t52 = ((x209<x210)<<(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	static int32_t x215 = INT32_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 189;

	t53 = ((x213<x214)<<(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 21U;
	uint16_t x218 = UINT16_MAX;
	volatile int8_t x219 = -1;
	int32_t t54 = -1217998;

	t54 = ((x217<x218)<<(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 0U;
	uint32_t x222 = UINT32_MAX;
	uint16_t x223 = UINT16_MAX;
	volatile int32_t t55 = 134127;

	t55 = ((x221<x222)<<(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = 15;
	static int8_t x227 = INT8_MIN;
	uint16_t x228 = UINT16_MAX;
	static int32_t t56 = -93;

	t56 = ((x225<x226)<<(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x231 = INT8_MIN;
	int8_t x232 = -1;
	int32_t t57 = -64757;

	t57 = ((x229<x230)<<(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = UINT32_MAX;
	int16_t x234 = -1;
	volatile int64_t x235 = -1LL;
	int64_t x236 = -1LL;
	static int32_t t58 = -22623045;

	t58 = ((x233<x234)<<(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 165581LLU;
	volatile uint8_t x238 = 2U;
	int16_t x239 = 0;
	uint64_t x240 = UINT64_MAX;

	t59 = ((x237<x238)<<(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 119U;
	volatile int16_t x242 = -10;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 3U;

	t60 = ((x241<x242)<<(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	static volatile int32_t t61 = -746;

	t61 = ((x245<x246)<<(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 22483U;
	int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 1055718272584386663LLU;
	int32_t t62 = -621837049;

	t62 = ((x249<x250)<<(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = -1;
	int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -171931;

	t63 = ((x253<x254)<<(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	static int16_t x259 = -367;
	uint16_t x260 = UINT16_MAX;
	static int32_t t64 = -32952;

	t64 = ((x257<x258)<<(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	static int16_t x262 = INT16_MIN;
	volatile uint8_t x263 = 1U;
	volatile int32_t t65 = -59;

	t65 = ((x261<x262)<<(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x267 = -1;
	uint32_t x268 = 7715002U;
	volatile int32_t t66 = 718665;

	t66 = ((x265<x266)<<(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = 16051248186LLU;
	int32_t x271 = INT32_MAX;
	int8_t x272 = 62;

	t67 = ((x269<x270)<<(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = 2U;

	t68 = ((x273<x274)<<(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint16_t x278 = UINT16_MAX;
	int64_t x279 = -1LL;
	uint16_t x280 = 1U;
	int32_t t69 = -998;

	t69 = ((x277<x278)<<(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint8_t x282 = UINT8_MAX;
	static volatile uint32_t x283 = 904U;
	volatile int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 30732;

	t70 = ((x281<x282)<<(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 95948LL;
	int8_t x286 = 0;
	int16_t x287 = 0;
	int32_t t71 = -10;

	t71 = ((x285<x286)<<(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x289 = INT32_MIN;
	uint8_t x290 = UINT8_MAX;
	volatile int16_t x292 = -1;
	static volatile int32_t t72 = 773405;

	t72 = ((x289<x290)<<(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	static int64_t x294 = -337550457991LL;
	volatile int64_t x295 = INT64_MIN;
	static volatile int32_t t73 = -189;

	t73 = ((x293<x294)<<(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x297 = INT64_MAX;
	int32_t x298 = -27614;
	int64_t x299 = -12711422948LL;
	uint16_t x300 = UINT16_MAX;
	int32_t t74 = 1;

	t74 = ((x297<x298)<<(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MIN;
	static int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 6464;

	t75 = ((x301<x302)<<(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int32_t x306 = -1;
	int32_t x308 = INT32_MAX;
	int32_t t76 = -80015;

	t76 = ((x305<x306)<<(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x312 = 4534978LLU;
	int32_t t77 = 0;

	t77 = ((x309<x310)<<(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -49233864;
	int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	volatile uint64_t x316 = UINT64_MAX;
	int32_t t78 = 1;

	t78 = ((x313<x314)<<(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int32_t x319 = -2631631;
	static volatile int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 31366915;

	t79 = ((x317<x318)<<(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint64_t x323 = UINT64_MAX;
	static int32_t x324 = 1514;
	static volatile int32_t t80 = 3544;

	t80 = ((x321<x322)<<(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 8804864;

	t81 = ((x325<x326)<<(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MIN;
	volatile int32_t x331 = -119472;
	int64_t x332 = 547476986560445608LL;

	t82 = ((x329<x330)<<(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = -713;
	static int64_t x336 = 44928389LL;
	int32_t t83 = -8433654;

	t83 = ((x333<x334)<<(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	volatile int64_t x338 = -1LL;
	int16_t x339 = -552;
	static int8_t x340 = -1;
	volatile int32_t t84 = -6;

	t84 = ((x337<x338)<<(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = -7802LL;
	volatile int8_t x342 = INT8_MIN;
	volatile int8_t x343 = -7;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 13;

	t85 = ((x341<x342)<<(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MIN;
	int32_t t86 = 2557611;

	t86 = ((x345<x346)<<(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -50315LL;
	int64_t x350 = INT64_MIN;
	volatile uint16_t x351 = 80U;
	uint8_t x352 = 6U;
	int32_t t87 = -123179;

	t87 = ((x349<x350)<<(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x353 = 117U;
	int64_t x354 = -161145561735863LL;
	int16_t x355 = 2001;
	static int32_t x356 = INT32_MIN;
	static int32_t t88 = -1059223;

	t88 = ((x353<x354)<<(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x360 = INT32_MIN;
	int32_t t89 = 4;

	t89 = ((x357<x358)<<(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 725624556183820932LLU;
	static int32_t x363 = INT32_MIN;
	static int32_t t90 = 2308;

	t90 = ((x361<x362)<<(x363==x364));

	if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	int32_t x367 = -1;
	uint64_t x368 = 822771579098081966LLU;

	t91 = ((x365<x366)<<(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = 134339;
	volatile int16_t x372 = INT16_MAX;
	static int32_t t92 = -62;

	t92 = ((x369<x370)<<(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 1LLU;
	int16_t x375 = INT16_MIN;
	uint8_t x376 = UINT8_MAX;

	t93 = ((x373<x374)<<(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static uint64_t x378 = UINT64_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	int8_t x380 = -1;
	volatile int32_t t94 = -263549476;

	t94 = ((x377<x378)<<(x379==x380));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x383 = INT32_MIN;
	static uint64_t x384 = 467511702936690LLU;
	volatile int32_t t95 = -1929054;

	t95 = ((x381<x382)<<(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	int8_t x387 = 26;
	int64_t x388 = -1LL;
	volatile int32_t t96 = -143276;

	t96 = ((x385<x386)<<(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	volatile int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MAX;
	uint32_t x392 = 28U;
	static int32_t t97 = 10431;

	t97 = ((x389<x390)<<(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = -1;
	uint64_t x394 = 24LLU;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t98 = -185;

	t98 = ((x393<x394)<<(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 109U;
	volatile int32_t x400 = INT32_MAX;
	int32_t t99 = 24312444;

	t99 = ((x397<x398)<<(x399==x400));

	if (t99 != 0) { NG(); } else { ; }
	
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


    return 0;
}

