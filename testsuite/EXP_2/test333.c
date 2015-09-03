#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 127601344;
int16_t x11 = -1;
int8_t x14 = INT8_MIN;
static int8_t x16 = -1;
static int32_t t3 = 45816030;
volatile int64_t x24 = INT64_MIN;
volatile int8_t x28 = 1;
static uint64_t x33 = UINT64_MAX;
uint16_t x45 = 407U;
uint64_t x46 = 158339840692940LLU;
volatile int32_t t11 = 0;
volatile uint64_t x52 = UINT64_MAX;
static int32_t t13 = -1067448189;
static uint32_t x57 = 20U;
volatile int64_t x76 = -1173450LL;
uint32_t x79 = UINT32_MAX;
static int32_t t19 = 161;
int32_t t21 = 852;
static volatile int32_t t22 = 1;
uint16_t x126 = 1606U;
uint8_t x127 = UINT8_MAX;
volatile uint64_t x134 = 93790LLU;
volatile uint8_t x137 = 14U;
int64_t x145 = -999460281LL;
int32_t x146 = INT32_MIN;
volatile uint8_t x151 = 2U;
uint8_t x157 = 1U;
int32_t t36 = 5111293;
int8_t x171 = INT8_MAX;
int64_t x173 = -6929680957644LL;
static int16_t x181 = 1907;
int32_t x184 = -447184;
static int32_t x185 = -1;
static int64_t x187 = -1348738742328856052LL;
volatile uint8_t x190 = 1U;
static int32_t x191 = -44;
uint64_t x192 = UINT64_MAX;
volatile int32_t t43 = 150121515;
volatile int32_t t45 = -27;
int32_t t46 = 13636979;
uint16_t x207 = 1U;
int64_t x209 = INT64_MIN;
volatile int32_t t48 = -13290;
uint16_t x213 = UINT16_MAX;
volatile uint32_t x220 = 13018608U;
volatile int32_t t50 = -5;
int64_t x226 = INT64_MIN;
int32_t t53 = 1251732;
volatile uint64_t x237 = 114029188747211794LLU;
int64_t x240 = 1640070580032195859LL;
volatile int8_t x241 = -2;
uint16_t x244 = UINT16_MAX;
uint32_t x249 = 58826780U;
uint32_t x252 = 61U;
int32_t x257 = INT32_MIN;
int64_t x259 = -1LL;
int8_t x269 = INT8_MAX;
static int16_t x270 = INT16_MIN;
static volatile uint16_t x272 = UINT16_MAX;
int32_t x274 = -1;
uint32_t x277 = 1080673730U;
int32_t t62 = 46486492;
uint8_t x282 = 11U;
volatile uint64_t x285 = 6437324682318542LLU;
volatile int32_t t64 = -499523;
int8_t x294 = -1;
static uint8_t x296 = 13U;
int32_t t67 = -540174069;
int16_t x303 = INT16_MIN;
int16_t x306 = -2615;
static int64_t x308 = INT64_MAX;
uint16_t x309 = 5958U;
uint16_t x311 = UINT16_MAX;
static volatile int64_t x312 = INT64_MIN;
volatile int32_t t70 = -1;
int64_t x327 = INT64_MIN;
uint64_t x328 = 45LLU;
static int32_t t74 = -8023;
volatile int64_t x332 = -1LL;
int32_t x340 = -20551251;
int8_t x341 = INT8_MIN;
int32_t x343 = -1;
int8_t x345 = -1;
uint8_t x350 = UINT8_MAX;
int64_t x360 = INT64_MIN;
int8_t x363 = INT8_MIN;
volatile uint16_t x366 = 14582U;
int64_t x368 = -29LL;
volatile uint64_t x369 = UINT64_MAX;
static int8_t x370 = INT8_MAX;
int16_t x371 = -1;
uint16_t x374 = 165U;
static volatile int32_t t86 = 26778513;
uint32_t x381 = UINT32_MAX;
volatile int32_t t87 = -1868;
volatile uint8_t x392 = UINT8_MAX;
static volatile int32_t t89 = 146904;
volatile int32_t t91 = -1;
uint32_t x403 = UINT32_MAX;
static int32_t t92 = -43;
int64_t x411 = -1LL;
int64_t x420 = 86580232743LL;
volatile int32_t t97 = -6598;
volatile int64_t x429 = 1696530472LL;
volatile uint16_t x432 = UINT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x2 = UINT16_MAX;
	uint8_t x3 = 0U;
	static int64_t x4 = -1LL;

	t0 = ((x1^(x2-x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 648;
	int8_t x6 = INT8_MAX;
	volatile uint8_t x7 = 0U;
	uint32_t x8 = 2233U;
	int32_t t1 = 38;

	t1 = ((x5^(x6-x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static volatile int32_t x10 = -1;
	uint64_t x12 = UINT64_MAX;
	static int32_t t2 = -1286;

	t2 = ((x9^(x10-x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 157U;
	uint64_t x15 = UINT64_MAX;

	t3 = ((x13^(x14-x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 3341389LLU;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MIN;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 1494;

	t4 = ((x17^(x18-x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static int16_t x22 = -1;
	int64_t x23 = -8680529106817399LL;
	int32_t t5 = -1687;

	t5 = ((x21^(x22-x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MIN;
	int64_t x26 = INT64_MIN;
	static volatile int64_t x27 = 0LL;
	int32_t t6 = -1;

	t6 = ((x25^(x26-x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile uint64_t x30 = 0LLU;
	static volatile int32_t x31 = 197;
	int16_t x32 = -7;
	static volatile int32_t t7 = -209865;

	t7 = ((x29^(x30-x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 12086125;
	int16_t x35 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -206659497;

	t8 = ((x33^(x34-x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 14825U;
	static uint8_t x38 = 1U;
	uint64_t x39 = 4361001698954422594LLU;
	uint8_t x40 = 12U;
	int32_t t9 = 141;

	t9 = ((x37^(x38-x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 1713836517905211LLU;
	uint64_t x42 = 280706LLU;
	int64_t x43 = 327235384115794631LL;
	static int16_t x44 = -122;
	int32_t t10 = 124445;

	t10 = ((x41^(x42-x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x47 = 201U;
	volatile int32_t x48 = INT32_MIN;

	t11 = ((x45^(x46-x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -8159223;
	volatile uint8_t x50 = 13U;
	uint8_t x51 = UINT8_MAX;
	int32_t t12 = -33860;

	t12 = ((x49^(x50-x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = -1;
	volatile int64_t x56 = INT64_MIN;

	t13 = ((x53^(x54-x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	static uint16_t x59 = 1U;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 16;

	t14 = ((x57^(x58-x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MAX;
	uint8_t x63 = 4U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t15 = -2059;

	t15 = ((x61^(x62-x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 7U;
	int64_t x66 = 611098295LL;
	uint16_t x67 = 1U;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t16 = -57;

	t16 = ((x65^(x66-x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static volatile int16_t x70 = 704;
	int64_t x71 = -27898115527431LL;
	uint8_t x72 = 1U;
	int32_t t17 = -7;

	t17 = ((x69^(x70-x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = 72LL;
	int16_t x74 = -1;
	volatile uint8_t x75 = 7U;
	int32_t t18 = -29;

	t18 = ((x73^(x74-x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	volatile uint32_t x78 = 1420666U;
	uint32_t x80 = UINT32_MAX;

	t19 = ((x77^(x78-x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	uint8_t x86 = 12U;
	int64_t x87 = -1LL;
	uint32_t x88 = 4U;
	volatile int32_t t20 = 46;

	t20 = ((x85^(x86-x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int8_t x90 = 60;
	static int8_t x91 = INT8_MIN;
	uint8_t x92 = 3U;

	t21 = ((x89^(x90-x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	uint32_t x98 = 198178587U;
	int8_t x99 = 6;
	int8_t x100 = -1;

	t22 = ((x97^(x98-x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 22U;
	int32_t x106 = 56537555;
	static volatile uint64_t x107 = 5307284941073494LLU;
	static volatile uint16_t x108 = 13002U;
	int32_t t23 = 4;

	t23 = ((x105^(x106-x107))==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 0U;
	int16_t x110 = -107;
	static volatile uint16_t x111 = 16455U;
	int64_t x112 = -1LL;
	volatile int32_t t24 = 415032;

	t24 = ((x109^(x110-x111))==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	uint32_t x115 = 87122U;
	volatile uint32_t x116 = 34U;
	volatile int32_t t25 = 24324633;

	t25 = ((x113^(x114-x115))==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -1;
	uint8_t x118 = 5U;
	int8_t x119 = INT8_MAX;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t26 = 960634659;

	t26 = ((x117^(x118-x119))==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = 3;
	uint32_t x122 = 32264U;
	uint32_t x123 = UINT32_MAX;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t27 = -440;

	t27 = ((x121^(x122-x123))==x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	static int16_t x128 = -1;
	int32_t t28 = -213805;

	t28 = ((x125^(x126-x127))==x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x129 = 11537U;
	int16_t x130 = -1;
	uint16_t x131 = UINT16_MAX;
	int16_t x132 = -1;
	static int32_t t29 = -13040969;

	t29 = ((x129^(x130-x131))==x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -1;
	int64_t x135 = INT64_MIN;
	uint64_t x136 = UINT64_MAX;
	int32_t t30 = -8;

	t30 = ((x133^(x134-x135))==x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MIN;
	int16_t x140 = INT16_MIN;
	static volatile int32_t t31 = 7608;

	t31 = ((x137^(x138-x139))==x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x141 = -1;
	int8_t x142 = -1;
	volatile int32_t x143 = -6232081;
	int64_t x144 = INT64_MIN;
	static int32_t t32 = 6775979;

	t32 = ((x141^(x142-x143))==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x147 = -4;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t33 = 21;

	t33 = ((x145^(x146-x147))==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MAX;
	uint32_t x152 = UINT32_MAX;
	int32_t t34 = 2007;

	t34 = ((x149^(x150-x151))==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x158 = -131LL;
	static int64_t x159 = INT64_MIN;
	int8_t x160 = -1;
	volatile int32_t t35 = -165;

	t35 = ((x157^(x158-x159))==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -86413244891LL;
	int64_t x162 = -1LL;
	int16_t x163 = INT16_MIN;
	int8_t x164 = -25;

	t36 = ((x161^(x162-x163))==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MIN;
	int32_t t37 = -69;

	t37 = ((x165^(x166-x167))==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x169 = UINT64_MAX;
	uint32_t x170 = 2064240077U;
	int16_t x172 = -7;
	int32_t t38 = -30993888;

	t38 = ((x169^(x170-x171))==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = 3704LL;
	int8_t x175 = 1;
	static volatile int8_t x176 = INT8_MAX;
	volatile int32_t t39 = -9320;

	t39 = ((x173^(x174-x175))==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x178 = 385LLU;
	static volatile int64_t x179 = INT64_MIN;
	uint8_t x180 = 20U;
	volatile int32_t t40 = 5686494;

	t40 = ((x177^(x178-x179))==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x182 = -2;
	volatile int8_t x183 = INT8_MIN;
	int32_t t41 = -1;

	t41 = ((x181^(x182-x183))==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x186 = 3311577689338LLU;
	int8_t x188 = -1;
	static int32_t t42 = -12709;

	t42 = ((x185^(x186-x187))==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = -525492898;

	t43 = ((x189^(x190-x191))==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 2648301U;
	static int32_t x194 = -1;
	uint32_t x195 = UINT32_MAX;
	static uint64_t x196 = 0LLU;
	int32_t t44 = -356210;

	t44 = ((x193^(x194-x195))==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x197 = -1;
	uint64_t x198 = 33251777LLU;
	uint32_t x199 = UINT32_MAX;
	uint16_t x200 = 20U;

	t45 = ((x197^(x198-x199))==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MIN;
	int64_t x202 = 528125LL;
	uint64_t x203 = UINT64_MAX;
	static uint8_t x204 = UINT8_MAX;

	t46 = ((x201^(x202-x203))==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = INT16_MIN;
	volatile int16_t x206 = -1;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t47 = 639585423;

	t47 = ((x205^(x206-x207))==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x210 = 707;
	static uint32_t x211 = 2U;
	int32_t x212 = INT32_MIN;

	t48 = ((x209^(x210-x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = -1LL;
	int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	static volatile int32_t t49 = -59;

	t49 = ((x213^(x214-x215))==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MAX;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 34U;

	t50 = ((x217^(x218-x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 45058261U;
	volatile int64_t x222 = -1LL;
	int16_t x223 = -96;
	uint64_t x224 = 12482LLU;
	volatile int32_t t51 = 964;

	t51 = ((x221^(x222-x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = 2014U;
	int32_t x227 = -1;
	static uint8_t x228 = UINT8_MAX;
	static int32_t t52 = -850;

	t52 = ((x225^(x226-x227))==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = 150746687U;
	uint64_t x234 = 3546069455763LLU;
	int16_t x235 = INT16_MIN;
	int16_t x236 = INT16_MIN;

	t53 = ((x233^(x234-x235))==x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x238 = INT16_MAX;
	static int16_t x239 = INT16_MIN;
	int32_t t54 = 19235;

	t54 = ((x237^(x238-x239))==x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	int32_t t55 = -93203;

	t55 = ((x241^(x242-x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x250 = INT64_MIN;
	volatile int32_t x251 = INT32_MIN;
	volatile int32_t t56 = 0;

	t56 = ((x249^(x250-x251))==x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x258 = -4;
	int16_t x260 = -154;
	int32_t t57 = 913;

	t57 = ((x257^(x258-x259))==x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int64_t x262 = -27463LL;
	int32_t x263 = 144670110;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t58 = 39;

	t58 = ((x261^(x262-x263))==x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = -12876933426LL;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = -1LL;
	int32_t t59 = 0;

	t59 = ((x265^(x266-x267))==x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x271 = -1;
	volatile int32_t t60 = 198707655;

	t60 = ((x269^(x270-x271))==x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x273 = -54568643LL;
	int64_t x275 = INT64_MIN;
	int32_t x276 = -121848;
	volatile int32_t t61 = -445867;

	t61 = ((x273^(x274-x275))==x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = 1;
	volatile uint64_t x280 = UINT64_MAX;

	t62 = ((x277^(x278-x279))==x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x283 = 25U;
	uint64_t x284 = 8832743291LLU;
	volatile int32_t t63 = 126035184;

	t63 = ((x281^(x282-x283))==x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = 103422699;
	int64_t x287 = -25388935LL;
	int32_t x288 = -1;

	t64 = ((x285^(x286-x287))==x288);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x289 = INT16_MAX;
	int64_t x290 = 15902995167617575LL;
	int32_t x291 = INT32_MIN;
	static int8_t x292 = INT8_MIN;
	static int32_t t65 = 147;

	t65 = ((x289^(x290-x291))==x292);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x293 = UINT64_MAX;
	static int16_t x295 = -1;
	static int32_t t66 = -3918811;

	t66 = ((x293^(x294-x295))==x296);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MIN;
	volatile uint16_t x298 = 13U;
	volatile int8_t x299 = INT8_MIN;
	uint16_t x300 = 2982U;

	t67 = ((x297^(x298-x299))==x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x301 = 293684U;
	uint64_t x302 = 5323LLU;
	int16_t x304 = -1;
	int32_t t68 = -122637767;

	t68 = ((x301^(x302-x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x305 = INT64_MIN;
	static int16_t x307 = -398;
	static volatile int32_t t69 = 20;

	t69 = ((x305^(x306-x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x310 = UINT64_MAX;

	t70 = ((x309^(x310-x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = -97;
	static int16_t x314 = INT16_MAX;
	int32_t x315 = -9400;
	uint8_t x316 = UINT8_MAX;
	int32_t t71 = -29785;

	t71 = ((x313^(x314-x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 116U;
	int32_t x318 = INT32_MIN;
	int64_t x319 = 65009929LL;
	int16_t x320 = -1;
	volatile int32_t t72 = -85768;

	t72 = ((x317^(x318-x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	int32_t x323 = -402089;
	uint8_t x324 = UINT8_MAX;
	static volatile int32_t t73 = -68;

	t73 = ((x321^(x322-x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x325 = -1;
	static volatile int8_t x326 = INT8_MIN;

	t74 = ((x325^(x326-x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int32_t x330 = INT32_MIN;
	uint16_t x331 = 0U;
	volatile int32_t t75 = -1801074;

	t75 = ((x329^(x330-x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x333 = UINT32_MAX;
	int64_t x334 = -1LL;
	uint32_t x335 = 114U;
	int64_t x336 = -1LL;
	int32_t t76 = -201;

	t76 = ((x333^(x334-x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = -11;
	uint32_t x338 = 1142891U;
	int64_t x339 = -1LL;
	int32_t t77 = 352;

	t77 = ((x337^(x338-x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x342 = 602566919566775965LLU;
	int32_t x344 = -69880;
	int32_t t78 = -226585345;

	t78 = ((x341^(x342-x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x346 = INT8_MIN;
	uint64_t x347 = 13LLU;
	int8_t x348 = INT8_MIN;
	int32_t t79 = 101391669;

	t79 = ((x345^(x346-x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = UINT8_MAX;
	int8_t x351 = 1;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t80 = 12;

	t80 = ((x349^(x350-x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = -1LL;
	int32_t x355 = -1;
	int32_t x356 = -532938;
	volatile int32_t t81 = -148;

	t81 = ((x353^(x354-x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = 1042097488;
	static int8_t x359 = INT8_MIN;
	int32_t t82 = 119692349;

	t82 = ((x357^(x358-x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x361 = UINT32_MAX;
	static int16_t x362 = 3;
	int64_t x364 = 257568020048LL;
	static int32_t t83 = 4;

	t83 = ((x361^(x362-x363))==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MIN;
	int8_t x367 = INT8_MIN;
	int32_t t84 = -340;

	t84 = ((x365^(x366-x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x372 = 14132116852165396LLU;
	int32_t t85 = 46054;

	t85 = ((x369^(x370-x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x373 = UINT8_MAX;
	static volatile int32_t x375 = -1;
	int8_t x376 = -1;

	t86 = ((x373^(x374-x375))==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x382 = 11U;
	uint16_t x383 = 1U;
	uint16_t x384 = 853U;

	t87 = ((x381^(x382-x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x385 = 420312893338904LLU;
	uint32_t x386 = 56U;
	static int32_t x387 = -847169353;
	int64_t x388 = -250630963065LL;
	int32_t t88 = -1829;

	t88 = ((x385^(x386-x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = -3600660093301LL;
	int16_t x390 = INT16_MIN;
	static int8_t x391 = -1;

	t89 = ((x389^(x390-x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x393 = INT16_MAX;
	int32_t x394 = INT32_MAX;
	int64_t x395 = 4114918213LL;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t90 = -98433;

	t90 = ((x393^(x394-x395))==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x397 = INT16_MIN;
	uint16_t x398 = 1359U;
	int16_t x399 = INT16_MAX;
	static int16_t x400 = -1;

	t91 = ((x397^(x398-x399))==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x401 = 853699747384383LLU;
	uint16_t x402 = 11U;
	int64_t x404 = 240675044088331930LL;

	t92 = ((x401^(x402-x403))==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = 658892159568LLU;
	uint16_t x406 = 2U;
	int64_t x407 = -534028587001331LL;
	uint8_t x408 = 9U;
	int32_t t93 = -47307;

	t93 = ((x405^(x406-x407))==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x409 = 346;
	int8_t x410 = -36;
	int8_t x412 = -13;
	static volatile int32_t t94 = 25490164;

	t94 = ((x409^(x410-x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = -1LL;
	volatile int8_t x418 = -1;
	static uint8_t x419 = UINT8_MAX;
	int32_t t95 = -159355435;

	t95 = ((x417^(x418-x419))==x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = -24;
	int16_t x422 = INT16_MIN;
	static int64_t x423 = INT64_MIN;
	static int32_t x424 = 79966546;
	int32_t t96 = 1386;

	t96 = ((x421^(x422-x423))==x424);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MAX;
	int64_t x426 = -1LL;
	static int64_t x427 = INT64_MIN;
	uint64_t x428 = 7709613991263280875LLU;

	t97 = ((x425^(x426-x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x430 = 6U;
	int32_t x431 = INT32_MAX;
	volatile int32_t t98 = -900124110;

	t98 = ((x429^(x430-x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x433 = 552;
	uint32_t x434 = UINT32_MAX;
	volatile uint16_t x435 = 12U;
	uint8_t x436 = 6U;
	int32_t t99 = -1;

	t99 = ((x433^(x434-x435))==x436);

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

