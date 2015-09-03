#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
volatile int64_t x3 = -4459909251LL;
uint32_t x10 = UINT32_MAX;
int16_t x19 = INT16_MIN;
int8_t x22 = -1;
static int8_t x31 = INT8_MIN;
int64_t x34 = INT64_MIN;
volatile int32_t t9 = -914;
uint16_t x41 = 21376U;
int16_t x44 = 123;
int16_t x51 = 3277;
volatile int16_t x57 = INT16_MIN;
int64_t x61 = INT64_MIN;
int64_t x68 = INT64_MAX;
static int8_t x70 = -1;
int32_t t17 = 1;
static int32_t x74 = -1;
int8_t x78 = INT8_MIN;
static int64_t x79 = -1LL;
int32_t x83 = -1;
uint8_t x91 = 24U;
volatile uint32_t x95 = 2199984U;
int8_t x110 = 1;
int32_t t28 = 28867;
static int32_t x120 = INT32_MIN;
volatile int32_t t30 = -275306;
int8_t x131 = INT8_MIN;
int8_t x133 = -1;
int32_t t36 = -21;
static volatile int32_t t37 = -3;
static volatile int16_t x159 = -1;
int8_t x160 = INT8_MIN;
static volatile int64_t x161 = INT64_MIN;
uint32_t x170 = 464U;
static int8_t x172 = -1;
static volatile int32_t t42 = 9200897;
volatile uint32_t x175 = 12366995U;
int8_t x176 = 7;
int32_t x178 = INT32_MIN;
volatile int64_t x185 = INT64_MIN;
int64_t x186 = INT64_MIN;
uint8_t x192 = UINT8_MAX;
int64_t x194 = INT64_MIN;
volatile uint16_t x197 = 2179U;
volatile uint32_t x200 = UINT32_MAX;
static uint16_t x230 = 1153U;
int32_t t57 = -6731;
int32_t x239 = -1;
int64_t x240 = 2LL;
static volatile int16_t x243 = 185;
volatile uint32_t x244 = UINT32_MAX;
volatile int32_t t60 = -16258;
int8_t x253 = 57;
int32_t x254 = INT32_MAX;
int8_t x255 = -2;
static int32_t t63 = -156325743;
int32_t x260 = INT32_MIN;
static uint8_t x263 = 26U;
int64_t x272 = 24LL;
uint16_t x280 = UINT16_MAX;
static int32_t x282 = INT32_MIN;
volatile uint16_t x284 = UINT16_MAX;
int32_t t71 = 0;
int32_t t73 = -2812;
static int8_t x301 = INT8_MIN;
int32_t x302 = INT32_MAX;
volatile int32_t x306 = -14679240;
int16_t x307 = INT16_MIN;
static volatile int32_t t76 = 522;
static int64_t x314 = -1LL;
uint64_t x316 = 435208005LLU;
int32_t t78 = 55038610;
int64_t x323 = -8213LL;
int32_t x334 = -1;
int64_t x356 = 11801LL;
static int32_t t88 = 552;
static int16_t x357 = INT16_MIN;
volatile int32_t t89 = 605;
volatile int32_t t90 = -40854;
int32_t x365 = INT32_MAX;
uint8_t x366 = 14U;
static uint32_t x371 = 1923164708U;
int8_t x376 = INT8_MIN;
static int8_t x381 = INT8_MIN;
static int16_t x384 = INT16_MAX;
static int8_t x396 = INT8_MIN;
volatile uint64_t x400 = UINT64_MAX;


void f0(void) {
	int32_t x2 = -1;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 5;

	t0 = ((x1==x2)>>(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	int8_t x6 = -4;
	static uint8_t x7 = UINT8_MAX;
	int64_t x8 = INT64_MAX;
	int32_t t1 = -1;

	t1 = ((x5==x6)>>(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int32_t x11 = -1;
	static uint64_t x12 = 6045272518LLU;
	int32_t t2 = 14195;

	t2 = ((x9==x10)>>(x11==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	uint16_t x14 = 5U;
	volatile int32_t x15 = INT32_MAX;
	int16_t x16 = -820;
	volatile int32_t t3 = -4060;

	t3 = ((x13==x14)>>(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 1U;
	static int8_t x18 = -52;
	uint8_t x20 = 1U;
	volatile int32_t t4 = -9884754;

	t4 = ((x17==x18)>>(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int8_t x23 = 4;
	volatile int8_t x24 = INT8_MIN;
	static int32_t t5 = -2012;

	t5 = ((x21==x22)>>(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 1U;
	int64_t x26 = -7332160LL;
	uint8_t x27 = 3U;
	int16_t x28 = INT16_MAX;
	int32_t t6 = -6;

	t6 = ((x25==x26)>>(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 68328051LL;
	int16_t x30 = -1;
	int8_t x32 = -1;
	int32_t t7 = 1;

	t7 = ((x29==x30)>>(x31==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	int8_t x35 = -1;
	static int8_t x36 = -7;
	int32_t t8 = -10429;

	t8 = ((x33==x34)>>(x35==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 3870U;
	int32_t x38 = -1;
	uint64_t x39 = 7966928886620693LLU;
	uint64_t x40 = 158548385LLU;

	t9 = ((x37==x38)>>(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = 230396210LLU;
	volatile int8_t x43 = INT8_MIN;
	int32_t t10 = 0;

	t10 = ((x41==x42)>>(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 177551268243033LLU;
	static int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 17273U;
	volatile int32_t t11 = 419276;

	t11 = ((x45==x46)>>(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 9624546536121710LLU;
	static volatile int8_t x50 = 34;
	int8_t x52 = -1;
	volatile int32_t t12 = 243300;

	t12 = ((x49==x50)>>(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = INT32_MIN;
	static volatile int64_t x54 = INT64_MIN;
	volatile uint16_t x55 = 51U;
	volatile int8_t x56 = INT8_MAX;
	static volatile int32_t t13 = -268150078;

	t13 = ((x53==x54)>>(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x58 = -1;
	static uint8_t x59 = UINT8_MAX;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = -10832;

	t14 = ((x57==x58)>>(x59==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MAX;
	volatile uint16_t x63 = 173U;
	int8_t x64 = -42;
	volatile int32_t t15 = 268154159;

	t15 = ((x61==x62)>>(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 15U;
	static volatile int32_t t16 = 104393;

	t16 = ((x65==x66)>>(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -2140261966570981LL;
	int32_t x71 = INT32_MAX;
	int32_t x72 = INT32_MIN;

	t17 = ((x69==x70)>>(x71==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	static int32_t t18 = -7;

	t18 = ((x73==x74)>>(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x80 = -1;
	volatile int32_t t19 = -11559;

	t19 = ((x77==x78)>>(x79==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = 21U;
	int32_t x82 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	static volatile int32_t t20 = -1;

	t20 = ((x81==x82)>>(x83==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int64_t x86 = INT64_MAX;
	uint64_t x87 = 1432198LLU;
	static uint32_t x88 = 21128419U;
	volatile int32_t t21 = -272729060;

	t21 = ((x85==x86)>>(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 11681U;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t22 = 0;

	t22 = ((x89==x90)>>(x91==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = UINT64_MAX;
	volatile int8_t x94 = 0;
	int32_t x96 = 64357848;
	int32_t t23 = 0;

	t23 = ((x93==x94)>>(x95==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static int16_t x98 = -1;
	uint64_t x99 = 245766306987937LLU;
	volatile int16_t x100 = -1;
	volatile int32_t t24 = -35841;

	t24 = ((x97==x98)>>(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	static int16_t x102 = INT16_MIN;
	static int16_t x103 = -1;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 266314780;

	t25 = ((x101==x102)>>(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MAX;
	static volatile int16_t x106 = INT16_MIN;
	volatile int64_t x107 = -3996057LL;
	static uint8_t x108 = 14U;
	int32_t t26 = 762623;

	t26 = ((x105==x106)>>(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int32_t x111 = INT32_MIN;
	static uint64_t x112 = 566977LLU;
	static int32_t t27 = -3837838;

	t27 = ((x109==x110)>>(x111==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 0;
	int8_t x114 = INT8_MAX;
	int64_t x115 = -1LL;
	static uint64_t x116 = UINT64_MAX;

	t28 = ((x113==x114)>>(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = 0;
	int64_t x118 = 1LL;
	int8_t x119 = -1;
	volatile int32_t t29 = 14092685;

	t29 = ((x117==x118)>>(x119==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 27U;
	static int8_t x122 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	static int32_t x124 = -1;

	t30 = ((x121==x122)>>(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = -1;
	int32_t x126 = -1;
	static volatile uint8_t x127 = 84U;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x125==x126)>>(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile uint32_t x130 = 4U;
	static int8_t x132 = 17;
	volatile int32_t t32 = 51224880;

	t32 = ((x129==x130)>>(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = INT16_MAX;
	int64_t x135 = INT64_MIN;
	volatile int32_t x136 = -1;
	static int32_t t33 = -318372881;

	t33 = ((x133==x134)>>(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int64_t x138 = -214946912LL;
	volatile int16_t x139 = INT16_MIN;
	int8_t x140 = -1;
	int32_t t34 = -10434457;

	t34 = ((x137==x138)>>(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 230U;
	static int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;
	static int64_t x144 = INT64_MIN;
	int32_t t35 = -79942;

	t35 = ((x141==x142)>>(x143==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MAX;
	uint32_t x146 = 34607078U;
	int16_t x147 = 115;
	uint16_t x148 = UINT16_MAX;

	t36 = ((x145==x146)>>(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 12153LLU;
	uint8_t x150 = 1U;
	uint16_t x151 = 1524U;
	volatile uint32_t x152 = 55U;

	t37 = ((x149==x150)>>(x151==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MIN;
	int8_t x155 = -1;
	static uint16_t x156 = 1288U;
	volatile int32_t t38 = -1;

	t38 = ((x153==x154)>>(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 2205253405986962LLU;
	int8_t x158 = INT8_MIN;
	static volatile int32_t t39 = -6375;

	t39 = ((x157==x158)>>(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x162 = -1;
	uint32_t x163 = UINT32_MAX;
	uint32_t x164 = 3551U;
	int32_t t40 = -1334;

	t40 = ((x161==x162)>>(x163==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int16_t x166 = -2;
	int32_t x167 = INT32_MIN;
	volatile int64_t x168 = -3664833LL;
	int32_t t41 = 823881571;

	t41 = ((x165==x166)>>(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int32_t x171 = -13390;

	t42 = ((x169==x170)>>(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 35;
	volatile int16_t x174 = -33;
	int32_t t43 = -1;

	t43 = ((x173==x174)>>(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 15606U;
	static int16_t x179 = INT16_MAX;
	int32_t x180 = -1;
	int32_t t44 = 0;

	t44 = ((x177==x178)>>(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = 31386886;
	int64_t x183 = 118096047503LL;
	uint64_t x184 = 1077149372107LLU;
	int32_t t45 = 180157103;

	t45 = ((x181==x182)>>(x183==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x187 = INT16_MIN;
	int8_t x188 = 4;
	int32_t t46 = -771937666;

	t46 = ((x185==x186)>>(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	static int8_t x190 = -1;
	volatile uint8_t x191 = 52U;
	volatile int32_t t47 = 380;

	t47 = ((x189==x190)>>(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile int64_t x195 = 2013496332835990197LL;
	static int64_t x196 = INT64_MAX;
	int32_t t48 = -1071188;

	t48 = ((x193==x194)>>(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	int32_t t49 = -522286;

	t49 = ((x197==x198)>>(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -77203;
	int64_t x202 = INT64_MAX;
	static uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = -274;

	t50 = ((x201==x202)>>(x203==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	volatile uint8_t x206 = 6U;
	int16_t x207 = -58;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = 532453;

	t51 = ((x205==x206)>>(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	uint16_t x210 = 20U;
	int32_t x211 = -1;
	uint64_t x212 = 34439458789310546LLU;
	int32_t t52 = 15679850;

	t52 = ((x209==x210)>>(x211==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MIN;
	int8_t x215 = -10;
	int64_t x216 = INT64_MIN;
	int32_t t53 = 384072358;

	t53 = ((x213==x214)>>(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	volatile int64_t x218 = INT64_MIN;
	uint16_t x219 = UINT16_MAX;
	int32_t x220 = 2540101;
	volatile int32_t t54 = -1;

	t54 = ((x217==x218)>>(x219==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	uint8_t x222 = 30U;
	int64_t x223 = -1LL;
	uint32_t x224 = UINT32_MAX;
	static int32_t t55 = 374475;

	t55 = ((x221==x222)>>(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = INT32_MAX;
	static int64_t x226 = -1LL;
	volatile uint16_t x227 = 31U;
	int16_t x228 = 94;
	int32_t t56 = -801584059;

	t56 = ((x225==x226)>>(x227==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MIN;
	static int64_t x231 = 40LL;
	int16_t x232 = INT16_MAX;

	t57 = ((x229==x230)>>(x231==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 2U;
	uint64_t x234 = 1LLU;
	int32_t x235 = INT32_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = 14;

	t58 = ((x233==x234)>>(x235==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -1;
	uint64_t x238 = 218LLU;
	static int32_t t59 = 1;

	t59 = ((x237==x238)>>(x239==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -130377147LL;
	int32_t x242 = INT32_MAX;

	t60 = ((x241==x242)>>(x243==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -42LL;
	int8_t x246 = INT8_MIN;
	static uint8_t x247 = UINT8_MAX;
	static int8_t x248 = -1;
	volatile int32_t t61 = 2;

	t61 = ((x245==x246)>>(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = UINT16_MAX;
	static int32_t x250 = INT32_MAX;
	int64_t x251 = 408438LL;
	int64_t x252 = -1LL;
	int32_t t62 = -803043764;

	t62 = ((x249==x250)>>(x251==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x256 = INT8_MIN;

	t63 = ((x253==x254)>>(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x257 = 97U;
	uint32_t x258 = 866939U;
	uint8_t x259 = 38U;
	int32_t t64 = 2664161;

	t64 = ((x257==x258)>>(x259==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 226;
	int8_t x262 = 1;
	uint32_t x264 = 1541013364U;
	int32_t t65 = 28933966;

	t65 = ((x261==x262)>>(x263==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 184710077U;
	int8_t x266 = INT8_MIN;
	int8_t x267 = INT8_MAX;
	int32_t x268 = 166;
	int32_t t66 = -29706;

	t66 = ((x265==x266)>>(x267==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	volatile int32_t t67 = -18713;

	t67 = ((x269==x270)>>(x271==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	static uint64_t x274 = 328880304881LLU;
	static volatile int8_t x275 = -35;
	volatile int64_t x276 = INT64_MAX;
	int32_t t68 = 19;

	t68 = ((x273==x274)>>(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 302U;
	volatile int16_t x278 = 0;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t t69 = 3;

	t69 = ((x277==x278)>>(x279==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 7U;
	int8_t x283 = 6;
	volatile int32_t t70 = -46;

	t70 = ((x281==x282)>>(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MAX;
	volatile int16_t x288 = INT16_MAX;

	t71 = ((x285==x286)>>(x287==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x289 = 11681U;
	volatile int8_t x290 = 1;
	int16_t x291 = INT16_MIN;
	int64_t x292 = -1LL;
	int32_t t72 = 640263;

	t72 = ((x289==x290)>>(x291==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = 1259U;
	int64_t x294 = -15975005137763902LL;
	static volatile int8_t x295 = -1;
	int64_t x296 = -2049LL;

	t73 = ((x293==x294)>>(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MAX;
	int16_t x300 = INT16_MIN;
	static int32_t t74 = -3266;

	t74 = ((x297==x298)>>(x299==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x303 = 1U;
	volatile int16_t x304 = INT16_MAX;
	int32_t t75 = -14;

	t75 = ((x301==x302)>>(x303==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	int64_t x308 = -1467432699897580158LL;

	t76 = ((x305==x306)>>(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x310 = 883567369LLU;
	volatile int16_t x311 = 4;
	int64_t x312 = INT64_MAX;
	static volatile int32_t t77 = -8364238;

	t77 = ((x309==x310)>>(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = 10;
	int16_t x315 = -1;

	t78 = ((x313==x314)>>(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 67LLU;
	static int64_t x318 = INT64_MIN;
	uint16_t x319 = 333U;
	int8_t x320 = INT8_MIN;
	volatile int32_t t79 = 0;

	t79 = ((x317==x318)>>(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 2U;
	volatile uint32_t x322 = UINT32_MAX;
	int8_t x324 = INT8_MAX;
	static int32_t t80 = -13194086;

	t80 = ((x321==x322)>>(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = -5;
	volatile uint8_t x326 = UINT8_MAX;
	static uint8_t x327 = UINT8_MAX;
	int64_t x328 = -4021734861LL;
	static volatile int32_t t81 = 232;

	t81 = ((x325==x326)>>(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int16_t x330 = -41;
	uint16_t x331 = UINT16_MAX;
	uint8_t x332 = 72U;
	static int32_t t82 = -1107;

	t82 = ((x329==x330)>>(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	int16_t x335 = -3;
	volatile int32_t x336 = -348219;
	volatile int32_t t83 = -5;

	t83 = ((x333==x334)>>(x335==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	uint8_t x338 = UINT8_MAX;
	volatile int16_t x339 = INT16_MAX;
	int64_t x340 = INT64_MIN;
	int32_t t84 = 53;

	t84 = ((x337==x338)>>(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 100LLU;
	int8_t x342 = INT8_MAX;
	int32_t x343 = INT32_MIN;
	static int8_t x344 = 4;
	int32_t t85 = -786;

	t85 = ((x341==x342)>>(x343==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x345 = 22U;
	int8_t x346 = -5;
	static int8_t x347 = INT8_MAX;
	volatile uint16_t x348 = 14335U;
	int32_t t86 = 1;

	t86 = ((x345==x346)>>(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int8_t x350 = 1;
	uint16_t x351 = 6U;
	uint8_t x352 = 4U;
	int32_t t87 = -14568825;

	t87 = ((x349==x350)>>(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	volatile uint8_t x354 = 11U;
	int16_t x355 = -33;

	t88 = ((x353==x354)>>(x355==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = -2330196;
	static int16_t x359 = INT16_MIN;
	volatile int64_t x360 = -1LL;

	t89 = ((x357==x358)>>(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x361 = 104156606961LLU;
	volatile uint16_t x362 = 1U;
	static int16_t x363 = -17;
	int16_t x364 = -1;

	t90 = ((x361==x362)>>(x363==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x367 = UINT16_MAX;
	volatile int16_t x368 = 0;
	volatile int32_t t91 = -251;

	t91 = ((x365==x366)>>(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x369 = INT64_MAX;
	int64_t x370 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	int32_t t92 = 1;

	t92 = ((x369==x370)>>(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MAX;
	static volatile int32_t x375 = INT32_MIN;
	volatile int32_t t93 = -9;

	t93 = ((x373==x374)>>(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	static volatile int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	uint8_t x380 = 7U;
	volatile int32_t t94 = 88599464;

	t94 = ((x377==x378)>>(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 36095733U;
	static int32_t t95 = -231;

	t95 = ((x381==x382)>>(x383==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 376U;
	int32_t x386 = INT32_MIN;
	int32_t x387 = INT32_MAX;
	uint32_t x388 = 750U;
	volatile int32_t t96 = -247137;

	t96 = ((x385==x386)>>(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int8_t x390 = 4;
	static int64_t x391 = -5LL;
	volatile int32_t x392 = 520821971;
	int32_t t97 = -604902046;

	t97 = ((x389==x390)>>(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -1;
	static int16_t x394 = -1;
	int32_t x395 = -1;
	int32_t t98 = -37444;

	t98 = ((x393==x394)>>(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MAX;
	int16_t x398 = -1;
	volatile uint16_t x399 = 1U;
	int32_t t99 = 225489970;

	t99 = ((x397==x398)>>(x399==x400));

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

