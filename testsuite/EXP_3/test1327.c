#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 5896LLU;
volatile uint64_t t0 = 3717995LLU;
uint8_t x9 = 2U;
volatile int64_t t4 = -73901427442LL;
int32_t x24 = 40892;
static int8_t x38 = INT8_MIN;
uint16_t x39 = UINT16_MAX;
volatile int16_t x40 = 12;
int16_t x50 = INT16_MAX;
int8_t x53 = -4;
int32_t x56 = -43824;
volatile int32_t t13 = 0;
static int16_t x59 = INT16_MIN;
static int32_t t16 = -57390;
static int32_t x69 = -1739;
int8_t x70 = INT8_MIN;
int64_t x72 = INT64_MAX;
static volatile int8_t x85 = INT8_MAX;
int32_t x89 = -1;
int32_t x90 = -1;
int64_t x91 = INT64_MAX;
static int16_t x100 = INT16_MIN;
int8_t x106 = -15;
volatile uint8_t x108 = 15U;
int16_t x110 = -1;
volatile int16_t x112 = INT16_MAX;
static int8_t x123 = INT8_MAX;
volatile int8_t x129 = -1;
int32_t t31 = -14;
int16_t x135 = INT16_MIN;
volatile int64_t t32 = 89384534549LL;
int8_t x139 = INT8_MIN;
int16_t x140 = INT16_MIN;
int32_t t33 = 1;
uint32_t x141 = 23996U;
int64_t x143 = 2884861223032253LL;
int32_t x147 = -1;
volatile uint32_t x149 = UINT32_MAX;
uint16_t x167 = 2630U;
volatile int16_t x170 = INT16_MAX;
volatile uint64_t x178 = 1763203LLU;
volatile uint32_t x182 = 1837U;
volatile int32_t x185 = INT32_MIN;
int16_t x187 = INT16_MIN;
static volatile uint16_t x188 = 212U;
static int64_t x192 = -147LL;
static uint16_t x194 = 5U;
int32_t x199 = -897768852;
static int16_t x204 = 2645;
int32_t t49 = -10;
int8_t x205 = INT8_MAX;
int32_t x208 = INT32_MAX;
volatile int16_t x216 = INT16_MIN;
int64_t x218 = 5LL;
static uint64_t x219 = 1147485928248226704LLU;
volatile int64_t x228 = -1327918257596084LL;
uint32_t t60 = 7U;
int16_t x249 = INT16_MIN;
uint8_t x254 = 2U;
volatile int32_t t63 = INT32_MIN;
static int32_t t65 = 29;
int32_t t68 = -3;
static int32_t t70 = -9094422;
int32_t x292 = -1484;
static uint16_t x296 = UINT16_MAX;
int32_t t72 = 204845941;
volatile uint64_t x298 = 250187055543741075LLU;
volatile int8_t x302 = INT8_MIN;
static uint8_t x306 = 32U;
int32_t t75 = -14092827;
static int16_t x309 = INT16_MIN;
uint64_t x318 = 511161LLU;
uint64_t x325 = UINT64_MAX;
volatile uint32_t x334 = 799851U;
int8_t x335 = INT8_MIN;
uint32_t x336 = 787U;
int32_t x337 = -375080;
uint8_t x339 = 0U;
static volatile int16_t x341 = INT16_MAX;
volatile int32_t t86 = -3;
volatile int16_t x356 = -6;
uint16_t x358 = UINT16_MAX;
int64_t x359 = -1LL;
int8_t x363 = -37;
int32_t x364 = -405556;
volatile uint64_t t89 = 26683LLU;
static volatile int32_t x370 = INT32_MIN;
int16_t x372 = INT16_MIN;
volatile int32_t t91 = -15394;
static volatile int32_t x381 = INT32_MIN;
uint64_t x393 = 95143622636LLU;
uint64_t t97 = 1927LLU;
int32_t x399 = 656;


void f0(void) {
	volatile int32_t x2 = INT32_MIN;
	int64_t x3 = INT64_MIN;
	int64_t x4 = 0LL;

	t0 = ((x1|x2)+(x3==x4));

	if (t0 != 18446744071562073864LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 5090U;
	uint64_t x6 = 22938LLU;
	int32_t x7 = -1;
	static volatile uint16_t x8 = 1128U;
	static uint64_t t1 = 20391923757331392LLU;

	t1 = ((x5|x6)+(x7==x8));

	if (t1 != 23546LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = INT64_MAX;
	int32_t t2 = 7738129;

	t2 = ((x9|x10)+(x11==x12));

	if (t2 != -32766) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	int8_t x14 = -2;
	int8_t x15 = INT8_MAX;
	volatile uint64_t x16 = UINT64_MAX;
	int32_t t3 = -99560;

	t3 = ((x13|x14)+(x15==x16));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int64_t x18 = 1722479305585LL;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = UINT8_MAX;

	t4 = ((x17|x18)+(x19==x20));

	if (t4 != -15LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -11662055764552LL;
	volatile int8_t x22 = -2;
	int64_t x23 = -1LL;
	volatile int64_t t5 = 5204958747222786LL;

	t5 = ((x21|x22)+(x23==x24));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = 0;
	volatile uint32_t x27 = 76533690U;
	static int32_t x28 = -12173;
	volatile int64_t t6 = INT64_MAX;

	t6 = ((x25|x26)+(x27==x28));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int16_t x30 = 3;
	uint16_t x31 = UINT16_MAX;
	static uint8_t x32 = UINT8_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x29|x30)+(x31==x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = INT64_MAX;

	t8 = ((x33|x34)+(x35==x36));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int32_t t9 = -26;

	t9 = ((x37|x38)+(x39==x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	static int16_t x43 = -1;
	volatile int16_t x44 = 22;
	static volatile uint32_t t10 = UINT32_MAX;

	t10 = ((x41|x42)+(x43==x44));

	if (t10 != UINT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint32_t x46 = 27690U;
	int16_t x47 = INT16_MIN;
	uint32_t x48 = UINT32_MAX;
	static volatile uint32_t t11 = 327905801U;

	t11 = ((x45|x46)+(x47==x48));

	if (t11 != 27903U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 35;
	int8_t x51 = INT8_MAX;
	uint8_t x52 = 6U;
	volatile int32_t t12 = 0;

	t12 = ((x49|x50)+(x51==x52));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	static uint32_t x55 = UINT32_MAX;

	t13 = ((x53|x54)+(x55==x56));

	if (t13 != -4) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -133;
	uint32_t x58 = UINT32_MAX;
	uint64_t x60 = 159806LLU;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = ((x57|x58)+(x59==x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 1411515U;
	static int8_t x62 = 1;
	volatile int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	uint32_t t15 = 258592U;

	t15 = ((x61|x62)+(x63==x64));

	if (t15 != 1411515U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MAX;
	int32_t x66 = INT32_MIN;
	int8_t x67 = INT8_MAX;
	static uint32_t x68 = UINT32_MAX;

	t16 = ((x65|x66)+(x67==x68));

	if (t16 != -2147450881) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x71 = 703493031047815438LLU;
	static volatile int32_t t17 = 0;

	t17 = ((x69|x70)+(x71==x72));

	if (t17 != -75) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	volatile uint32_t x74 = 60U;
	uint16_t x75 = UINT16_MAX;
	uint8_t x76 = UINT8_MAX;
	volatile uint32_t t18 = 3U;

	t18 = ((x73|x74)+(x75==x76));

	if (t18 != 4294934588U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 210533975;
	int64_t x78 = 49LL;
	volatile uint8_t x79 = 92U;
	static int64_t x80 = 299906485695LL;
	volatile int64_t t19 = 4415466LL;

	t19 = ((x77|x78)+(x79==x80));

	if (t19 != 210534007LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	static int32_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = 149628433765585124LL;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = ((x81|x82)+(x83==x84));

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 757LL;
	int16_t x87 = 12;
	int8_t x88 = INT8_MIN;
	static volatile int64_t t21 = 20066761179LL;

	t21 = ((x85|x86)+(x87==x88));

	if (t21 != 767LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x92 = INT64_MAX;
	static int32_t t22 = -110;

	t22 = ((x89|x90)+(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x97 = -1;
	int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MIN;
	volatile int32_t t23 = -378;

	t23 = ((x97|x98)+(x99==x100));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	static int32_t x103 = INT32_MAX;
	volatile uint8_t x104 = 8U;
	static volatile int32_t t24 = -27;

	t24 = ((x101|x102)+(x103==x104));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	volatile int32_t t25 = -2490;

	t25 = ((x105|x106)+(x107==x108));

	if (t25 != -15) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x109 = INT8_MAX;
	volatile int32_t x111 = -1;
	int32_t t26 = -5;

	t26 = ((x109|x110)+(x111==x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -53;
	int16_t x114 = INT16_MIN;
	static volatile int16_t x115 = 13;
	int16_t x116 = -1;
	static int32_t t27 = 94147;

	t27 = ((x113|x114)+(x115==x116));

	if (t27 != -53) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 1U;
	int64_t x118 = INT64_MAX;
	static uint32_t x119 = 16488397U;
	int16_t x120 = INT16_MIN;
	static int64_t t28 = INT64_MAX;

	t28 = ((x117|x118)+(x119==x120));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	volatile int8_t x122 = -30;
	static int8_t x124 = INT8_MIN;
	int32_t t29 = -8089376;

	t29 = ((x121|x122)+(x123==x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1LL;
	volatile int64_t x126 = -1LL;
	uint16_t x127 = 13U;
	int16_t x128 = -2;
	int64_t t30 = 67458736945LL;

	t30 = ((x125|x126)+(x127==x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x130 = INT8_MIN;
	static int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;

	t31 = ((x129|x130)+(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 339201LL;
	int32_t x134 = 922;
	volatile int8_t x136 = INT8_MIN;

	t32 = ((x133|x134)+(x135==x136));

	if (t32 != 339867LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = 656U;
	static uint8_t x138 = 2U;

	t33 = ((x137|x138)+(x139==x140));

	if (t33 != 658) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x142 = -1;
	int16_t x144 = INT16_MAX;
	uint32_t t34 = UINT32_MAX;

	t34 = ((x141|x142)+(x143==x144));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = -1LL;
	int32_t x146 = INT32_MIN;
	int32_t x148 = INT32_MAX;
	volatile int64_t t35 = 1LL;

	t35 = ((x145|x146)+(x147==x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x150 = -1LL;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = UINT32_MAX;
	volatile int64_t t36 = -84207819LL;

	t36 = ((x149|x150)+(x151==x152));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = UINT16_MAX;
	static uint64_t x155 = 446259LLU;
	int8_t x156 = INT8_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x153|x154)+(x155==x156));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = 13012386279375LL;
	int16_t x158 = 1;
	uint32_t x159 = 454731U;
	volatile int64_t x160 = 342441840LL;
	volatile int64_t t38 = 1670333594778LL;

	t38 = ((x157|x158)+(x159==x160));

	if (t38 != 13012386279375LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	volatile uint64_t x162 = 28120776330LLU;
	volatile int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MAX;
	static volatile uint64_t t39 = 0LLU;

	t39 = ((x161|x162)+(x163==x164));

	if (t39 != 18446744071765556874LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	static volatile int32_t x166 = INT32_MIN;
	static volatile int8_t x168 = INT8_MIN;
	static int64_t t40 = 8856152197LL;

	t40 = ((x165|x166)+(x167==x168));

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x169 = UINT32_MAX;
	uint32_t x171 = 3U;
	static int32_t x172 = -1948606;
	uint32_t t41 = UINT32_MAX;

	t41 = ((x169|x170)+(x171==x172));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -758;
	int32_t x174 = INT32_MIN;
	static volatile uint32_t x175 = 511U;
	static uint64_t x176 = UINT64_MAX;
	static int32_t t42 = 6192;

	t42 = ((x173|x174)+(x175==x176));

	if (t42 != -758) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int16_t x179 = INT16_MIN;
	int64_t x180 = 453039699935LL;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x177|x178)+(x179==x180));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x181 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	static int16_t x184 = -1;
	volatile uint32_t t44 = 1255305091U;

	t44 = ((x181|x182)+(x183==x184));

	if (t44 != 65535U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x186 = INT8_MIN;
	int32_t t45 = -1473;

	t45 = ((x185|x186)+(x187==x188));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	uint8_t x191 = 10U;
	int64_t t46 = 5LL;

	t46 = ((x189|x190)+(x191==x192));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = 1U;
	volatile uint8_t x195 = 6U;
	uint64_t x196 = 13126456968316LLU;
	volatile uint32_t t47 = 981012U;

	t47 = ((x193|x194)+(x195==x196));

	if (t47 != 5U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 1U;
	static int32_t x198 = -14602;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t48 = 1;

	t48 = ((x197|x198)+(x199==x200));

	if (t48 != -14601) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = UINT8_MAX;
	static int32_t x202 = -93451314;
	uint32_t x203 = UINT32_MAX;

	t49 = ((x201|x202)+(x203==x204));

	if (t49 != -93451265) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x206 = UINT16_MAX;
	volatile int64_t x207 = INT64_MIN;
	volatile int32_t t50 = 366821512;

	t50 = ((x205|x206)+(x207==x208));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = -1LL;
	volatile int64_t x210 = INT64_MIN;
	volatile int32_t x211 = -5513306;
	int32_t x212 = INT32_MIN;
	int64_t t51 = -172502777LL;

	t51 = ((x209|x210)+(x211==x212));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	int32_t x214 = -201;
	int32_t x215 = INT32_MIN;
	volatile int32_t t52 = -208159;

	t52 = ((x213|x214)+(x215==x216));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 19337680982357LLU;
	static int16_t x220 = -1;
	volatile uint64_t t53 = 25830679276LLU;

	t53 = ((x217|x218)+(x219==x220));

	if (t53 != 19337680982357LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	int32_t x222 = INT32_MAX;
	uint32_t x223 = UINT32_MAX;
	static uint8_t x224 = 9U;
	volatile int32_t t54 = INT32_MAX;

	t54 = ((x221|x222)+(x223==x224));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	static uint32_t t55 = UINT32_MAX;

	t55 = ((x225|x226)+(x227==x228));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x229 = 1U;
	volatile int32_t x230 = INT32_MIN;
	volatile uint16_t x231 = UINT16_MAX;
	volatile uint16_t x232 = UINT16_MAX;
	int32_t t56 = -211;

	t56 = ((x229|x230)+(x231==x232));

	if (t56 != -2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 32340679LLU;
	uint64_t x234 = 14971385178815LLU;
	int16_t x235 = INT16_MIN;
	static uint32_t x236 = UINT32_MAX;
	uint64_t t57 = 28622381139LLU;

	t57 = ((x233|x234)+(x235==x236));

	if (t57 != 14971416967935LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = 1;
	uint32_t x240 = 104U;
	int32_t t58 = 6753;

	t58 = ((x237|x238)+(x239==x240));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x241 = UINT16_MAX;
	int16_t x242 = -9219;
	volatile int32_t x243 = INT32_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t59 = 3317;

	t59 = ((x241|x242)+(x243==x244));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x245 = 213U;
	uint32_t x246 = 1063808302U;
	int64_t x247 = 15012551991867857LL;
	static uint32_t x248 = 842861036U;

	t60 = ((x245|x246)+(x247==x248));

	if (t60 != 1063808511U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = UINT16_MAX;
	volatile int16_t x251 = -1;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t61 = -45251;

	t61 = ((x249|x250)+(x251==x252));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x253 = INT8_MAX;
	int8_t x255 = INT8_MAX;
	int32_t x256 = -1;
	volatile int32_t t62 = 114;

	t62 = ((x253|x254)+(x255==x256));

	if (t62 != 127) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MIN;
	uint16_t x258 = 0U;
	uint64_t x259 = 463876854178133LLU;
	static uint8_t x260 = 45U;

	t63 = ((x257|x258)+(x259==x260));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x261 = 9U;
	volatile int64_t x262 = -1LL;
	int64_t x263 = INT64_MIN;
	static volatile int8_t x264 = 1;
	volatile int64_t t64 = -124850236606870LL;

	t64 = ((x261|x262)+(x263==x264));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x265 = 1;
	int16_t x266 = -1;
	int32_t x267 = 301;
	static int16_t x268 = -1;

	t65 = ((x265|x266)+(x267==x268));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x269 = -1;
	int64_t x270 = INT64_MIN;
	uint8_t x271 = 116U;
	int32_t x272 = 51025205;
	volatile int64_t t66 = 1LL;

	t66 = ((x269|x270)+(x271==x272));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	static volatile uint8_t x274 = 6U;
	int16_t x275 = 0;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t67 = -1430042647693661LL;

	t67 = ((x273|x274)+(x275==x276));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 0U;
	int8_t x278 = -1;
	int8_t x279 = 43;
	volatile uint8_t x280 = UINT8_MAX;

	t68 = ((x277|x278)+(x279==x280));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x281 = -1;
	uint16_t x282 = 200U;
	int8_t x283 = -1;
	int64_t x284 = INT64_MIN;
	volatile int32_t t69 = 220460601;

	t69 = ((x281|x282)+(x283==x284));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	uint64_t x287 = 154LLU;
	int16_t x288 = -1;

	t70 = ((x285|x286)+(x287==x288));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x289 = 710267U;
	int32_t x290 = INT32_MAX;
	static int32_t x291 = -96602;
	static volatile uint32_t t71 = 100U;

	t71 = ((x289|x290)+(x291==x292));

	if (t71 != 2147483647U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x293 = 9U;
	volatile int8_t x294 = -3;
	int8_t x295 = 1;

	t72 = ((x293|x294)+(x295==x296));

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MAX;
	uint8_t x299 = 1U;
	int8_t x300 = -1;
	uint64_t t73 = 23510448LLU;

	t73 = ((x297|x298)+(x299==x300));

	if (t73 != 250187055543741183LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x301 = 73U;
	static uint16_t x303 = 812U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t74 = -3;

	t74 = ((x301|x302)+(x303==x304));

	if (t74 != -55) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MIN;
	static int64_t x307 = INT64_MAX;
	int64_t x308 = -129512176LL;

	t75 = ((x305|x306)+(x307==x308));

	if (t75 != -32736) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x310 = 19U;
	volatile uint16_t x311 = 1U;
	int32_t x312 = INT32_MIN;
	int32_t t76 = 416955;

	t76 = ((x309|x310)+(x311==x312));

	if (t76 != -32749) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 288762603U;
	volatile int32_t x314 = INT32_MIN;
	static uint16_t x315 = UINT16_MAX;
	int64_t x316 = -1LL;
	uint32_t t77 = 4949U;

	t77 = ((x313|x314)+(x315==x316));

	if (t77 != 2436246251U) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x317 = -1LL;
	int64_t x319 = 30417859490995717LL;
	volatile uint32_t x320 = UINT32_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = ((x317|x318)+(x319==x320));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x322 = 0U;
	int64_t x323 = -1LL;
	int8_t x324 = -6;
	volatile int32_t t79 = INT32_MIN;

	t79 = ((x321|x322)+(x323==x324));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x326 = 46;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 529354LLU;
	uint64_t t80 = UINT64_MAX;

	t80 = ((x325|x326)+(x327==x328));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x329 = INT64_MAX;
	volatile uint16_t x330 = 5205U;
	int64_t x331 = -99310LL;
	int64_t x332 = -1LL;
	int64_t t81 = INT64_MAX;

	t81 = ((x329|x330)+(x331==x332));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x333 = 853154LLU;
	volatile uint64_t t82 = 180500243900597942LLU;

	t82 = ((x333|x334)+(x335==x336));

	if (t82 != 865515LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x338 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	volatile int32_t t83 = 4124074;

	t83 = ((x337|x338)+(x339==x340));

	if (t83 != -14632) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x342 = 1;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	int32_t t84 = 5022986;

	t84 = ((x341|x342)+(x343==x344));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x345 = 4355267314664613900LLU;
	uint8_t x346 = 35U;
	int64_t x347 = INT64_MAX;
	int32_t x348 = 28698;
	uint64_t t85 = 3069822393787183897LLU;

	t85 = ((x345|x346)+(x347==x348));

	if (t85 != 4355267314664613935LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x349 = 47U;
	int16_t x350 = -1;
	int32_t x351 = INT32_MAX;
	static int64_t x352 = INT64_MAX;

	t86 = ((x349|x350)+(x351==x352));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x353 = INT8_MIN;
	static uint64_t x354 = 4966018590LLU;
	volatile int16_t x355 = -1;
	static volatile uint64_t t87 = 5LLU;

	t87 = ((x353|x354)+(x355==x356));

	if (t87 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MAX;
	uint64_t x360 = 83530666407275322LLU;
	volatile int32_t t88 = -11;

	t88 = ((x357|x358)+(x359==x360));

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = 5618LLU;
	int8_t x362 = INT8_MAX;

	t89 = ((x361|x362)+(x363==x364));

	if (t89 != 5631LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	static int16_t x367 = -29;
	int16_t x368 = -1;
	static volatile int64_t t90 = -1785478579550651LL;

	t90 = ((x365|x366)+(x367==x368));

	if (t90 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x369 = INT8_MAX;
	volatile int8_t x371 = 1;

	t91 = ((x369|x370)+(x371==x372));

	if (t91 != -2147483521) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x373 = 1594644913U;
	static int16_t x374 = INT16_MAX;
	static volatile int32_t x375 = 11439;
	static int64_t x376 = INT64_MIN;
	uint32_t t92 = 258705972U;

	t92 = ((x373|x374)+(x375==x376));

	if (t92 != 1594654719U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x377 = -1;
	uint16_t x378 = 3093U;
	volatile int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t93 = 0;

	t93 = ((x377|x378)+(x379==x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x382 = INT64_MIN;
	static int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MAX;
	volatile int64_t t94 = 14755988010369LL;

	t94 = ((x381|x382)+(x383==x384));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = 8;
	int16_t x386 = -1;
	static volatile int16_t x387 = INT16_MIN;
	uint8_t x388 = 58U;
	volatile int32_t t95 = -212;

	t95 = ((x385|x386)+(x387==x388));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -185LL;
	int64_t x390 = 146215815287464553LL;
	static int64_t x391 = INT64_MIN;
	static volatile uint32_t x392 = 232263U;
	static int64_t t96 = -2587LL;

	t96 = ((x389|x390)+(x391==x392));

	if (t96 != -145LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x394 = 71U;
	int8_t x395 = INT8_MIN;
	int8_t x396 = INT8_MIN;

	t97 = ((x393|x394)+(x395==x396));

	if (t97 != 95143622640LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = 3979769630LL;
	int64_t x398 = 8041842239358LL;
	uint64_t x400 = UINT64_MAX;
	static volatile int64_t t98 = 222LL;

	t98 = ((x397|x398)+(x399==x400));

	if (t98 != 8044192102270LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	int8_t x403 = -1;
	volatile uint64_t x404 = 24516LLU;
	int32_t t99 = -4;

	t99 = ((x401|x402)+(x403==x404));

	if (t99 != -1) { NG(); } else { ; }
	
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

