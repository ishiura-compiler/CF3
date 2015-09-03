#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 25U;
static int32_t x3 = INT32_MIN;
static int32_t x8 = -1;
volatile uint32_t x10 = 23328772U;
int64_t x14 = -1352546507689393924LL;
static int64_t x17 = 2361438734578731121LL;
int16_t x25 = INT16_MIN;
uint16_t x28 = 1U;
volatile int32_t t6 = -13171;
volatile int64_t x30 = -1LL;
int32_t x32 = INT32_MIN;
static int64_t x33 = INT64_MIN;
int32_t t11 = 14;
static int32_t x50 = INT32_MAX;
int32_t x54 = -13992085;
static int16_t x56 = 2263;
int32_t x61 = INT32_MIN;
volatile uint8_t x62 = 0U;
int32_t x67 = INT32_MAX;
static uint16_t x73 = UINT16_MAX;
uint8_t x74 = 91U;
int16_t x75 = -1;
volatile uint32_t t19 = 29762U;
uint64_t x84 = UINT64_MAX;
uint64_t t20 = UINT64_MAX;
int64_t x86 = 2334286271LL;
uint32_t t22 = 29257543U;
static int64_t x94 = 47138LL;
int64_t x98 = -1LL;
int32_t x99 = INT32_MIN;
volatile int32_t t24 = 17514480;
volatile int64_t t25 = -2316939723866634601LL;
int32_t t26 = INT32_MIN;
static int8_t x110 = -1;
static int8_t x113 = -5;
int16_t x114 = 105;
volatile int32_t t28 = 1;
static uint32_t x119 = 1U;
static int8_t x122 = -7;
static int8_t x124 = 4;
int8_t x125 = -1;
int64_t x126 = INT64_MAX;
uint16_t x130 = UINT16_MAX;
int16_t x137 = -1;
volatile int32_t x141 = INT32_MIN;
int16_t x144 = INT16_MIN;
int32_t x150 = INT32_MIN;
int64_t x162 = -1LL;
uint8_t x167 = 7U;
int16_t x168 = INT16_MAX;
volatile uint64_t x170 = UINT64_MAX;
static int16_t x175 = -1;
static int64_t x177 = INT64_MIN;
volatile int64_t t44 = -31123944LL;
int32_t t46 = -3;
volatile int32_t t47 = 512500525;
int32_t x201 = INT32_MIN;
volatile uint16_t x202 = 26061U;
volatile uint64_t x204 = 200037933945962254LLU;
int32_t x211 = 0;
uint32_t t52 = 2551U;
static int8_t x227 = INT8_MAX;
static volatile int64_t t55 = 15315LL;
uint64_t x229 = 59110485LLU;
uint64_t x238 = 7383371LLU;
uint64_t x240 = 18409888LLU;
int32_t t59 = -22753390;
static uint64_t x249 = UINT64_MAX;
int32_t x251 = INT32_MIN;
int32_t t62 = 7359;
volatile uint16_t x257 = 69U;
int16_t x263 = -2;
int32_t x266 = INT32_MAX;
int32_t x273 = INT32_MIN;
volatile int32_t t68 = -259002;
uint32_t x284 = 2U;
static uint32_t x288 = 9068U;
static int32_t x308 = -1;
int32_t x320 = 1580530;
int8_t x322 = INT8_MAX;
volatile int64_t x327 = 12433347931372LL;
int32_t x328 = -1;
int16_t x334 = INT16_MIN;
uint16_t x335 = UINT16_MAX;
volatile int32_t t81 = 129214;
volatile int64_t x338 = INT64_MIN;
uint16_t x344 = 2U;
volatile int64_t t83 = 4337267990554605114LL;
static int32_t t84 = 6356118;
volatile int64_t t85 = INT64_MAX;
int64_t x353 = -25053820879309LL;
int32_t x354 = -1;
uint32_t x355 = UINT32_MAX;
static uint32_t x357 = UINT32_MAX;
int8_t x362 = INT8_MIN;
static int64_t x365 = -1LL;
volatile uint16_t x372 = 13113U;
static volatile uint64_t x378 = 39913126LLU;
static int64_t t92 = -51663LL;
uint8_t x385 = 17U;
int32_t t93 = -71;
int32_t x389 = 5024;
int16_t x391 = INT16_MIN;
static uint64_t x392 = 546770709345LLU;
int64_t x393 = -28472004871128LL;
int64_t t95 = -14LL;
static uint16_t x400 = 30034U;
uint8_t x405 = UINT8_MAX;
int64_t x407 = -3427511697247512932LL;
int32_t t98 = -913777;
int32_t x411 = INT32_MIN;


void f0(void) {
	static int64_t x2 = -1LL;
	int16_t x4 = INT16_MAX;
	uint32_t t0 = 0U;

	t0 = (x1-((x2<=x3)/x4));

	if (t0 != 25U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = -15693;
	int32_t x6 = INT32_MIN;
	uint16_t x7 = 14483U;
	volatile int32_t t1 = 1;

	t1 = (x5-((x6<=x7)/x8));

	if (t1 != -15692) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -13;
	static uint64_t x11 = UINT64_MAX;
	static int8_t x12 = -28;
	int32_t t2 = 811831;

	t2 = (x9-((x10<=x11)/x12));

	if (t2 != -13) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	volatile int16_t x15 = INT16_MIN;
	static int64_t x16 = -1LL;
	int64_t t3 = -24382623182237698LL;

	t3 = (x13-((x14<=x15)/x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int8_t x19 = 1;
	static volatile uint32_t x20 = UINT32_MAX;
	int64_t t4 = -2026272790263051LL;

	t4 = (x17-((x18<=x19)/x20));

	if (t4 != 2361438734578731121LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 173904234LLU;
	uint32_t x22 = 257475805U;
	volatile uint64_t x23 = 28LLU;
	int64_t x24 = INT64_MIN;
	volatile uint64_t t5 = 3LLU;

	t5 = (x21-((x22<=x23)/x24));

	if (t5 != 173904234LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = UINT16_MAX;
	uint64_t x27 = 234272665050LLU;

	t6 = (x25-((x26<=x27)/x28));

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	volatile int32_t x31 = -1;
	int64_t t7 = -129511134424LL;

	t7 = (x29-((x30<=x31)/x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	int32_t x36 = -1;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33-((x34<=x35)/x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint64_t x38 = UINT64_MAX;
	uint64_t x39 = UINT64_MAX;
	uint64_t x40 = 27112LLU;
	volatile uint64_t t9 = 46570731957094LLU;

	t9 = (x37-((x38<=x39)/x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile uint64_t x42 = 240276172006LLU;
	static int32_t x43 = INT32_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -33996189;

	t10 = (x41-((x42<=x43)/x44));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	volatile int32_t x46 = INT32_MIN;
	int8_t x47 = -1;
	int32_t x48 = -405725;

	t11 = (x45-((x46<=x47)/x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 6U;
	uint8_t x51 = UINT8_MAX;
	uint32_t x52 = UINT32_MAX;
	uint32_t t12 = 0U;

	t12 = (x49-((x50<=x51)/x52));

	if (t12 != 6U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 27LLU;
	int64_t x55 = INT64_MIN;
	volatile uint64_t t13 = 949LLU;

	t13 = (x53-((x54<=x55)/x56));

	if (t13 != 27LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x57 = -3481;
	uint16_t x58 = 57U;
	int16_t x59 = -722;
	int64_t x60 = -1LL;
	volatile int64_t t14 = -14019694767787685LL;

	t14 = (x57-((x58<=x59)/x60));

	if (t14 != -3481LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	volatile int32_t t15 = INT32_MIN;

	t15 = (x61-((x62<=x63)/x64));

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 21742032U;
	uint16_t x66 = 617U;
	int32_t x68 = INT32_MIN;
	uint32_t t16 = 0U;

	t16 = (x65-((x66<=x67)/x68));

	if (t16 != 21742032U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	int64_t x70 = INT64_MAX;
	static int32_t x71 = INT32_MIN;
	int8_t x72 = -1;
	volatile int64_t t17 = INT64_MAX;

	t17 = (x69-((x70<=x71)/x72));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x76 = -1;
	volatile int32_t t18 = 10247506;

	t18 = (x73-((x74<=x75)/x76));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	uint32_t x78 = UINT32_MAX;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = 477274U;

	t19 = (x77-((x78<=x79)/x80));

	if (t19 != 255U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	volatile int64_t x82 = -1LL;
	int16_t x83 = 0;

	t20 = (x81-((x82<=x83)/x84));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MIN;
	volatile uint8_t x87 = UINT8_MAX;
	uint16_t x88 = UINT16_MAX;
	int64_t t21 = INT64_MIN;

	t21 = (x85-((x86<=x87)/x88));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 489099U;
	static int64_t x90 = -1LL;
	int16_t x91 = -1;
	int8_t x92 = -60;

	t22 = (x89-((x90<=x91)/x92));

	if (t22 != 489099U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -6;
	int16_t x95 = INT16_MIN;
	uint16_t x96 = 2U;
	volatile int32_t t23 = -830796;

	t23 = (x93-((x94<=x95)/x96));

	if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 2361;
	static uint16_t x100 = 1U;

	t24 = (x97-((x98<=x99)/x100));

	if (t24 != 2361) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -309975LL;
	static int64_t x102 = -8109446882507LL;
	volatile int8_t x103 = INT8_MAX;
	uint8_t x104 = 3U;

	t25 = (x101-((x102<=x103)/x104));

	if (t25 != -309975LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int16_t x106 = -1;
	uint32_t x107 = 67989185U;
	int8_t x108 = -1;

	t26 = (x105-((x106<=x107)/x108));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	volatile uint64_t x111 = 56356705448458897LLU;
	int16_t x112 = 1;
	int64_t t27 = INT64_MAX;

	t27 = (x109-((x110<=x111)/x112));

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x115 = 46U;
	uint16_t x116 = 42U;

	t28 = (x113-((x114<=x115)/x116));

	if (t28 != -5) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = INT64_MAX;
	int16_t x118 = -2672;
	int32_t x120 = INT32_MIN;
	volatile int64_t t29 = INT64_MAX;

	t29 = (x117-((x118<=x119)/x120));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 1264736572LLU;
	int64_t x123 = INT64_MAX;
	uint64_t t30 = 113868494546LLU;

	t30 = (x121-((x122<=x123)/x124));

	if (t30 != 1264736572LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x127 = 36U;
	uint16_t x128 = UINT16_MAX;
	int32_t t31 = 0;

	t31 = (x125-((x126<=x127)/x128));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = 4750044U;
	static volatile uint8_t x131 = 69U;
	static int64_t x132 = -1LL;
	volatile int64_t t32 = 831269713599LL;

	t32 = (x129-((x130<=x131)/x132));

	if (t32 != 4750044LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = -140034064979964LL;
	static int8_t x135 = 4;
	int64_t x136 = INT64_MIN;
	volatile int64_t t33 = -211687640586LL;

	t33 = (x133-((x134<=x135)/x136));

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x138 = -35;
	int8_t x139 = 1;
	int32_t x140 = 656;
	volatile int32_t t34 = 18;

	t34 = (x137-((x138<=x139)/x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x142 = UINT16_MAX;
	uint16_t x143 = 42U;
	volatile int32_t t35 = INT32_MIN;

	t35 = (x141-((x142<=x143)/x144));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	volatile int64_t x146 = INT64_MAX;
	volatile uint32_t x147 = 3U;
	static uint16_t x148 = UINT16_MAX;
	int32_t t36 = INT32_MAX;

	t36 = (x145-((x146<=x147)/x148));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint8_t x151 = UINT8_MAX;
	int8_t x152 = 18;
	static volatile int32_t t37 = 418588;

	t37 = (x149-((x150<=x151)/x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static volatile int32_t x154 = 20483866;
	int16_t x155 = INT16_MIN;
	int32_t x156 = 1361383;
	volatile int32_t t38 = -252920907;

	t38 = (x153-((x154<=x155)/x156));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 25297U;
	int16_t x158 = -1;
	int64_t x159 = -1LL;
	int64_t x160 = -732744139392LL;
	volatile int64_t t39 = -84413408766LL;

	t39 = (x157-((x158<=x159)/x160));

	if (t39 != 25297LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static volatile int64_t x163 = INT64_MIN;
	int16_t x164 = -5;
	int32_t t40 = 369249;

	t40 = (x161-((x162<=x163)/x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = 7U;
	static volatile uint64_t x166 = 227230LLU;
	int32_t t41 = 0;

	t41 = (x165-((x166<=x167)/x168));

	if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint64_t x171 = 28979LLU;
	int64_t x172 = -783645778LL;
	volatile int64_t t42 = 544017883586063461LL;

	t42 = (x169-((x170<=x171)/x172));

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 345124816U;
	static uint8_t x174 = 1U;
	int32_t x176 = -1;
	uint32_t t43 = 6U;

	t43 = (x173-((x174<=x175)/x176));

	if (t43 != 345124816U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MIN;
	static int8_t x180 = -1;

	t44 = (x177-((x178<=x179)/x180));

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -36;
	uint64_t x182 = 3295584703LLU;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = 416110LL;
	int64_t t45 = 58396856079LL;

	t45 = (x181-((x182<=x183)/x184));

	if (t45 != -36LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	uint32_t x187 = 7768U;
	volatile int8_t x188 = 1;

	t46 = (x185-((x186<=x187)/x188));

	if (t46 != -129) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MAX;
	static int16_t x191 = INT16_MIN;
	static volatile int32_t x192 = -6469;

	t47 = (x189-((x190<=x191)/x192));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 359265LLU;
	uint16_t x199 = UINT16_MAX;
	uint64_t x200 = 2467323LLU;
	volatile uint64_t t48 = 284050751979221LLU;

	t48 = (x197-((x198<=x199)/x200));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x203 = UINT16_MAX;
	static uint64_t t49 = 47598045LLU;

	t49 = (x201-((x202<=x203)/x204));

	if (t49 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -10271727787LL;
	int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	int8_t x208 = INT8_MIN;
	int64_t t50 = -1LL;

	t50 = (x205-((x206<=x207)/x208));

	if (t50 != -10271727787LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int8_t x210 = -3;
	static uint16_t x212 = 121U;
	static int32_t t51 = 3470340;

	t51 = (x209-((x210<=x211)/x212));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = -10534145;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	static uint32_t x216 = UINT32_MAX;

	t52 = (x213-((x214<=x215)/x216));

	if (t52 != 4284433151U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = -1;
	uint64_t x219 = 47063761670523229LLU;
	int8_t x220 = INT8_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (x217-((x218<=x219)/x220));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 25U;
	static uint8_t x222 = 19U;
	uint8_t x223 = UINT8_MAX;
	uint64_t x224 = UINT64_MAX;
	uint64_t t54 = 2284LLU;

	t54 = (x221-((x222<=x223)/x224));

	if (t54 != 25LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -398719590892947LL;
	int16_t x226 = INT16_MIN;
	volatile int8_t x228 = 1;

	t55 = (x225-((x226<=x227)/x228));

	if (t55 != -398719590892948LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x230 = 104;
	uint8_t x231 = UINT8_MAX;
	int8_t x232 = INT8_MIN;
	volatile uint64_t t56 = 1089416457667291666LLU;

	t56 = (x229-((x230<=x231)/x232));

	if (t56 != 59110485LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint16_t x233 = UINT16_MAX;
	static volatile uint16_t x234 = UINT16_MAX;
	int32_t x235 = 1895688;
	int64_t x236 = INT64_MAX;
	static int64_t t57 = 4LL;

	t57 = (x233-((x234<=x235)/x236));

	if (t57 != 65535LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 1112112U;
	int8_t x239 = 0;
	uint64_t t58 = 28258996366LLU;

	t58 = (x237-((x238<=x239)/x240));

	if (t58 != 1112112LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = -3;
	int16_t x242 = 5672;
	int16_t x243 = 2;
	int32_t x244 = -1;

	t59 = (x241-((x242<=x243)/x244));

	if (t59 != -3) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	volatile uint8_t x246 = 114U;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MIN;
	static volatile int64_t t60 = 11321235169363994LL;

	t60 = (x245-((x246<=x247)/x248));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x250 = -48;
	int8_t x252 = INT8_MIN;
	uint64_t t61 = UINT64_MAX;

	t61 = (x249-((x250<=x251)/x252));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = 31392799;
	int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MAX;

	t62 = (x253-((x254<=x255)/x256));

	if (t62 != 31392799) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x258 = 748839606LLU;
	static volatile int16_t x259 = -21;
	uint64_t x260 = 24044509912466LLU;
	volatile uint64_t t63 = 10758000521202352LLU;

	t63 = (x257-((x258<=x259)/x260));

	if (t63 != 69LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x261 = 399478;
	int16_t x262 = 2839;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t64 = 124;

	t64 = (x261-((x262<=x263)/x264));

	if (t64 != 399478) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x265 = -1;
	uint32_t x267 = 1847U;
	int8_t x268 = INT8_MIN;
	static int32_t t65 = 15;

	t65 = (x265-((x266<=x267)/x268));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x269 = UINT64_MAX;
	static int32_t x270 = INT32_MIN;
	static int8_t x271 = INT8_MAX;
	uint16_t x272 = UINT16_MAX;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = (x269-((x270<=x271)/x272));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x274 = -1;
	int32_t x275 = -74321676;
	uint16_t x276 = 31U;
	int32_t t67 = INT32_MIN;

	t67 = (x273-((x274<=x275)/x276));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = INT8_MAX;
	uint16_t x278 = 190U;
	int16_t x279 = -1;
	int16_t x280 = -1;

	t68 = (x277-((x278<=x279)/x280));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	uint16_t x283 = 369U;
	volatile int64_t t69 = INT64_MIN;

	t69 = (x281-((x282<=x283)/x284));

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = 55U;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = 0U;
	volatile uint32_t t70 = 22U;

	t70 = (x285-((x286<=x287)/x288));

	if (t70 != 55U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = -49;
	int64_t x290 = 12163656LL;
	volatile int64_t x291 = -1LL;
	uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t71 = 191096LLU;

	t71 = (x289-((x290<=x291)/x292));

	if (t71 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x293 = 52U;
	int64_t x294 = INT64_MAX;
	volatile int16_t x295 = INT16_MIN;
	int16_t x296 = -1;
	volatile int32_t t72 = -13429470;

	t72 = (x293-((x294<=x295)/x296));

	if (t72 != 52) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = UINT16_MAX;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = 2184366607811927LLU;
	static uint64_t t73 = 442567388023870LLU;

	t73 = (x297-((x298<=x299)/x300));

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 593304934243LLU;
	static int16_t x302 = -1;
	int64_t x303 = 0LL;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t74 = 104456649LLU;

	t74 = (x301-((x302<=x303)/x304));

	if (t74 != 593304934243LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -1;
	int32_t x306 = -1;
	volatile int8_t x307 = INT8_MIN;
	int32_t t75 = 628505;

	t75 = (x305-((x306<=x307)/x308));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = -968LL;
	volatile int32_t x314 = 64386;
	static int64_t x315 = INT64_MIN;
	static uint16_t x316 = 13995U;
	volatile int64_t t76 = -2603078170LL;

	t76 = (x313-((x314<=x315)/x316));

	if (t76 != -968LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 126213172689960LLU;
	static volatile uint64_t x318 = 17843755651481LLU;
	int16_t x319 = INT16_MAX;
	volatile uint64_t t77 = 482549LLU;

	t77 = (x317-((x318<=x319)/x320));

	if (t77 != 126213172689960LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MIN;
	static uint32_t x323 = 0U;
	int16_t x324 = -1;
	int32_t t78 = -1;

	t78 = (x321-((x322<=x323)/x324));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = INT32_MIN;
	uint8_t x326 = 0U;
	int32_t t79 = -2964;

	t79 = (x325-((x326<=x327)/x328));

	if (t79 != -2147483647) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -2;
	static uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MAX;
	static uint32_t x332 = 2671U;
	uint32_t t80 = 1555U;

	t80 = (x329-((x330<=x331)/x332));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x333 = 0;
	int32_t x336 = -1;

	t81 = (x333-((x334<=x335)/x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	static int8_t x339 = -3;
	int64_t x340 = -1LL;
	static volatile int64_t t82 = 20084957253707056LL;

	t82 = (x337-((x338<=x339)/x340));

	if (t82 != -2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = 11968097162LL;
	uint16_t x342 = 11875U;
	int8_t x343 = INT8_MIN;

	t83 = (x341-((x342<=x343)/x344));

	if (t83 != 11968097162LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	volatile int64_t x346 = -3013626943976304LL;
	uint16_t x347 = 0U;
	uint16_t x348 = 17U;

	t84 = (x345-((x346<=x347)/x348));

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MAX;
	static uint8_t x350 = UINT8_MAX;
	static int32_t x351 = -1;
	int8_t x352 = -6;

	t85 = (x349-((x350<=x351)/x352));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x356 = -8;
	volatile int64_t t86 = -7148643054621705LL;

	t86 = (x353-((x354<=x355)/x356));

	if (t86 != -25053820879309LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x358 = INT16_MIN;
	uint64_t x359 = UINT64_MAX;
	volatile int8_t x360 = -1;
	volatile uint32_t t87 = 3U;

	t87 = (x357-((x358<=x359)/x360));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = 19U;
	static int8_t x363 = -1;
	static int16_t x364 = INT16_MAX;
	static int32_t t88 = -16;

	t88 = (x361-((x362<=x363)/x364));

	if (t88 != 19) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x366 = 1;
	static volatile int16_t x367 = -4;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t89 = -28025LL;

	t89 = (x365-((x366<=x367)/x368));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = 1855;
	uint16_t x370 = 1816U;
	uint8_t x371 = 13U;
	static volatile int32_t t90 = -704487622;

	t90 = (x369-((x370<=x371)/x372));

	if (t90 != 1855) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 4006LLU;
	int64_t x374 = INT64_MIN;
	volatile int16_t x375 = 3332;
	int64_t x376 = 242LL;
	uint64_t t91 = 63LLU;

	t91 = (x373-((x374<=x375)/x376));

	if (t91 != 4006LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -1594550377808056LL;
	int16_t x379 = INT16_MIN;
	static int16_t x380 = 12;

	t92 = (x377-((x378<=x379)/x380));

	if (t92 != -1594550377808056LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x386 = INT32_MAX;
	int16_t x387 = INT16_MAX;
	static int8_t x388 = INT8_MIN;

	t93 = (x385-((x386<=x387)/x388));

	if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x390 = 1031782533U;
	uint64_t t94 = 1587644736940292LLU;

	t94 = (x389-((x390<=x391)/x392));

	if (t94 != 5024LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x394 = 1U;
	uint8_t x395 = 15U;
	int16_t x396 = -1;

	t95 = (x393-((x394<=x395)/x396));

	if (t95 != -28472004871127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -4;
	uint32_t x398 = UINT32_MAX;
	static volatile int64_t x399 = -12550129864LL;
	volatile int32_t t96 = -1;

	t96 = (x397-((x398<=x399)/x400));

	if (t96 != -4) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x401 = 50;
	volatile uint64_t x402 = 0LLU;
	uint16_t x403 = 6666U;
	int32_t x404 = INT32_MIN;
	volatile int32_t t97 = 0;

	t97 = (x401-((x402<=x403)/x404));

	if (t97 != 50) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x406 = -2;
	int8_t x408 = INT8_MAX;

	t98 = (x405-((x406<=x407)/x408));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = -6793488;
	static int8_t x410 = INT8_MIN;
	static int8_t x412 = INT8_MIN;
	static volatile int32_t t99 = -190;

	t99 = (x409-((x410<=x411)/x412));

	if (t99 != -6793488) { NG(); } else { ; }
	
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

