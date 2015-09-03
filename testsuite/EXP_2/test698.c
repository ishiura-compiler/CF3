#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = 38U;
static uint32_t x3 = 17U;
volatile int64_t x6 = INT64_MAX;
int8_t x11 = -1;
int64_t x12 = -1LL;
int16_t x15 = -1;
static int8_t x16 = 62;
volatile int32_t t3 = 1800;
int32_t x17 = -1;
static uint64_t x19 = 9144264LLU;
static volatile int32_t t4 = 56560;
static uint16_t x24 = 0U;
uint16_t x27 = 10654U;
volatile int64_t x29 = INT64_MIN;
int8_t x36 = -1;
static int64_t x46 = INT64_MAX;
int16_t x50 = -1;
int32_t x51 = INT32_MAX;
int32_t x55 = -10994;
int32_t t15 = -105838037;
static int8_t x69 = INT8_MIN;
static uint8_t x77 = 71U;
volatile int32_t t20 = -58;
volatile int64_t x96 = -37339791506LL;
uint8_t x100 = UINT8_MAX;
volatile int8_t x101 = -1;
int32_t x112 = INT32_MIN;
static uint8_t x115 = 11U;
int32_t x116 = 788928393;
int16_t x118 = INT16_MIN;
uint32_t x122 = 17U;
int64_t x126 = 100145791058164LL;
int8_t x143 = INT8_MIN;
static uint8_t x148 = 1U;
volatile int8_t x151 = INT8_MIN;
uint16_t x152 = 30275U;
uint64_t x158 = 937020964733931801LLU;
int32_t t38 = -13810829;
volatile int32_t t39 = 5;
uint16_t x172 = UINT16_MAX;
uint8_t x175 = 15U;
static uint64_t x182 = 28416132839LLU;
int32_t t45 = 142026427;
static int8_t x191 = INT8_MAX;
volatile int32_t x195 = INT32_MAX;
uint32_t x200 = 15882U;
static int16_t x211 = 21;
uint32_t x215 = 25765589U;
int64_t x220 = INT64_MAX;
volatile uint32_t x229 = UINT32_MAX;
int64_t x236 = -1LL;
static int32_t x241 = -1;
volatile int32_t t58 = -1;
uint32_t x246 = UINT32_MAX;
volatile int64_t x247 = 15111079186996LL;
static int32_t x249 = -14779;
volatile int8_t x251 = -1;
volatile int32_t t61 = -645;
uint32_t x261 = 643179U;
int32_t t62 = 8;
static int32_t x265 = INT32_MIN;
volatile uint64_t x267 = UINT64_MAX;
int32_t x269 = INT32_MIN;
static volatile int64_t x271 = 45296723310LL;
static volatile int32_t t65 = -5543;
int32_t t66 = -2836129;
volatile int64_t x286 = INT64_MIN;
uint16_t x287 = UINT16_MAX;
volatile uint8_t x288 = 1U;
int64_t x290 = INT64_MIN;
int32_t x291 = INT32_MIN;
int32_t x295 = -3839;
static volatile int8_t x298 = INT8_MIN;
volatile int32_t t72 = -53;
uint16_t x318 = UINT16_MAX;
int32_t t76 = -244592;
int32_t x328 = INT32_MIN;
int32_t x329 = INT32_MIN;
static int32_t x334 = INT32_MIN;
int32_t t80 = -736;
uint64_t x338 = 984926735801LLU;
uint64_t x340 = 1076326424314277LLU;
int8_t x341 = 2;
static volatile int32_t t83 = -77587119;
static int32_t x353 = -1;
int32_t t84 = -275897646;
static volatile int32_t t85 = 657;
uint16_t x363 = 14U;
int32_t x364 = -1;
uint64_t x371 = UINT64_MAX;
static int64_t x372 = -1LL;
static uint32_t x388 = 2068U;
uint32_t x396 = 64759260U;
static uint64_t x400 = 2827375993905LLU;
int8_t x407 = -2;
int8_t x421 = INT8_MIN;
volatile int8_t x425 = -1;
int8_t x428 = INT8_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x4 = 3253438204058LLU;
	volatile int32_t t0 = -6132;

	t0 = ((x1-(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = 5584;

	t1 = ((x5-(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = 2898582U;
	volatile int32_t t2 = 446;

	t2 = ((x9-(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -12383773;
	uint64_t x14 = UINT64_MAX;

	t3 = ((x13-(x14%x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = -7212;
	volatile int32_t x20 = -33223796;

	t4 = ((x17-(x18%x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -1LL;
	uint8_t x22 = 42U;
	uint32_t x23 = 41951958U;
	int32_t t5 = -216110;

	t5 = ((x21-(x22%x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -1LL;
	int8_t x26 = -1;
	static volatile uint8_t x28 = 70U;
	int32_t t6 = -4898456;

	t6 = ((x25-(x26%x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = -1LL;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = 6397794209LLU;
	static volatile int32_t t7 = -6645;

	t7 = ((x29-(x30%x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -2801LL;
	volatile int32_t x34 = INT32_MAX;
	volatile int16_t x35 = INT16_MIN;
	volatile int32_t t8 = 4854;

	t8 = ((x33-(x34%x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int32_t x38 = 2;
	int32_t x39 = -32685266;
	static int8_t x40 = 0;
	int32_t t9 = -90355123;

	t9 = ((x37-(x38%x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	static volatile uint64_t x43 = 41198886LLU;
	static int64_t x44 = -1LL;
	int32_t t10 = 6199;

	t10 = ((x41-(x42%x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1936860;
	int8_t x47 = -1;
	static int32_t x48 = 471540;
	static int32_t t11 = 5694761;

	t11 = ((x45-(x46%x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 1880742;

	t12 = ((x49-(x50%x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int16_t x54 = -1;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 12;

	t13 = ((x53-(x54%x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 116352U;
	int64_t x58 = 151184805762LL;
	uint16_t x59 = UINT16_MAX;
	volatile int16_t x60 = -1;
	static volatile int32_t t14 = 0;

	t14 = ((x57-(x58%x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 2;
	volatile uint32_t x62 = UINT32_MAX;
	volatile int8_t x63 = -4;
	volatile int16_t x64 = INT16_MIN;

	t15 = ((x61-(x62%x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MAX;
	int64_t x66 = INT64_MIN;
	int64_t x67 = -1LL;
	static int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = -4009;

	t16 = ((x65-(x66%x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int64_t x72 = -57321231667LL;
	static int32_t t17 = -1;

	t17 = ((x69-(x70%x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 22LLU;
	uint64_t x74 = 137538566408198LLU;
	int32_t x75 = INT32_MIN;
	int16_t x76 = 1;
	volatile int32_t t18 = -223346;

	t18 = ((x73-(x74%x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	int16_t x79 = -1;
	volatile uint32_t x80 = 13395U;
	volatile int32_t t19 = 2337;

	t19 = ((x77-(x78%x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int8_t x82 = INT8_MIN;
	uint64_t x83 = 248LLU;
	uint16_t x84 = UINT16_MAX;

	t20 = ((x81-(x82%x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -185LL;
	static int8_t x86 = INT8_MIN;
	static int64_t x87 = -6LL;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 51821;

	t21 = ((x85-(x86%x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	volatile uint16_t x90 = 4160U;
	int64_t x91 = -26259010965LL;
	int8_t x92 = -1;
	volatile int32_t t22 = -16439531;

	t22 = ((x89-(x90%x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 0U;
	uint32_t x94 = 49298471U;
	static int8_t x95 = INT8_MAX;
	int32_t t23 = -317;

	t23 = ((x93-(x94%x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 0U;
	volatile uint8_t x98 = UINT8_MAX;
	int32_t x99 = -1;
	volatile int32_t t24 = 454;

	t24 = ((x97-(x98%x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = INT32_MIN;
	int16_t x103 = -10;
	int16_t x104 = 1315;
	volatile int32_t t25 = -2;

	t25 = ((x101-(x102%x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -3973596LL;
	uint16_t x106 = 13U;
	int64_t x107 = 365761469033469876LL;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -806955;

	t26 = ((x105-(x106%x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 1150;
	static uint64_t x110 = 6245113066LLU;
	int8_t x111 = -5;
	volatile int32_t t27 = 1;

	t27 = ((x109-(x110%x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -25;
	uint32_t x114 = 136U;
	volatile int32_t t28 = 14268;

	t28 = ((x113-(x114%x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 121254477242LLU;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = 147;
	int32_t t29 = -100;

	t29 = ((x117-(x118%x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	int32_t x123 = INT32_MAX;
	int32_t x124 = -5;
	volatile int32_t t30 = -95;

	t30 = ((x121-(x122%x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 59U;
	int8_t x127 = -63;
	int64_t x128 = -17520080488850185LL;
	volatile int32_t t31 = 13;

	t31 = ((x125-(x126%x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 10U;
	static uint64_t x130 = 604972811092049LLU;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = 689;
	volatile int32_t t32 = 221;

	t32 = ((x129-(x130%x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int32_t x138 = INT32_MAX;
	uint32_t x139 = 12U;
	volatile int32_t x140 = 55249379;
	volatile int32_t t33 = -281;

	t33 = ((x137-(x138%x139))<x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	uint16_t x142 = UINT16_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = 50;

	t34 = ((x141-(x142%x143))<x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = 24U;
	int16_t x146 = -1;
	int8_t x147 = INT8_MIN;
	int32_t t35 = -2;

	t35 = ((x145-(x146%x147))<x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 126273125U;
	static int8_t x150 = INT8_MIN;
	volatile int32_t t36 = -21867541;

	t36 = ((x149-(x150%x151))<x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -1;
	int32_t x154 = 3;
	int16_t x155 = INT16_MIN;
	volatile uint64_t x156 = UINT64_MAX;
	volatile int32_t t37 = 9;

	t37 = ((x153-(x154%x155))<x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x159 = -1;
	static volatile uint16_t x160 = UINT16_MAX;

	t38 = ((x157-(x158%x159))<x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x161 = INT32_MAX;
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MAX;

	t39 = ((x161-(x162%x163))<x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	static int32_t x168 = INT32_MAX;
	static volatile int32_t t40 = 19;

	t40 = ((x165-(x166%x167))<x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 2685U;
	static int8_t x170 = 3;
	uint16_t x171 = 513U;
	static int32_t t41 = -9020541;

	t41 = ((x169-(x170%x171))<x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -3346;
	int16_t x174 = -1;
	int32_t x176 = 31389557;
	int32_t t42 = 10;

	t42 = ((x173-(x174%x175))<x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x177 = UINT16_MAX;
	int32_t x178 = -3;
	uint16_t x179 = UINT16_MAX;
	int16_t x180 = INT16_MIN;
	volatile int32_t t43 = -18;

	t43 = ((x177-(x178%x179))<x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = 118U;
	static int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	int32_t t44 = -1265;

	t44 = ((x181-(x182%x183))<x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -10925393074LL;
	int64_t x186 = 139344520122LL;
	static int32_t x187 = 595;
	uint8_t x188 = 3U;

	t45 = ((x185-(x186%x187))<x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x189 = INT32_MIN;
	int64_t x190 = 34774819367343LL;
	static volatile uint64_t x192 = 4658512LLU;
	volatile int32_t t46 = 1;

	t46 = ((x189-(x190%x191))<x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -1LL;
	static int8_t x194 = INT8_MIN;
	int64_t x196 = -812856768329791895LL;
	int32_t t47 = 44384;

	t47 = ((x193-(x194%x195))<x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MAX;
	static int16_t x198 = INT16_MAX;
	volatile int16_t x199 = INT16_MIN;
	static volatile int32_t t48 = -984414438;

	t48 = ((x197-(x198%x199))<x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x205 = -5413LL;
	static int64_t x206 = INT64_MIN;
	int8_t x207 = -1;
	uint8_t x208 = 59U;
	volatile int32_t t49 = 5;

	t49 = ((x205-(x206%x207))<x208);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	int32_t x210 = INT32_MAX;
	int16_t x212 = -1;
	int32_t t50 = -459206;

	t50 = ((x209-(x210%x211))<x212);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = INT16_MAX;
	int64_t x214 = 33918691LL;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t51 = 173;

	t51 = ((x213-(x214%x215))<x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = INT32_MAX;
	uint32_t x219 = 7852U;
	volatile int32_t t52 = 12259142;

	t52 = ((x217-(x218%x219))<x220);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = -1LL;
	static int64_t x223 = -1LL;
	int64_t x224 = -1LL;
	int32_t t53 = -30711;

	t53 = ((x221-(x222%x223))<x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = 1;
	int32_t x226 = 7594520;
	int32_t x227 = 2531619;
	volatile int8_t x228 = -1;
	volatile int32_t t54 = -2378949;

	t54 = ((x225-(x226%x227))<x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x230 = 143;
	int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MAX;
	volatile int32_t t55 = 10;

	t55 = ((x229-(x230%x231))<x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MAX;
	static volatile uint64_t x234 = UINT64_MAX;
	volatile int64_t x235 = -3581621908LL;
	volatile int32_t t56 = -3;

	t56 = ((x233-(x234%x235))<x236);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	static int8_t x238 = INT8_MIN;
	uint8_t x239 = 23U;
	int16_t x240 = INT16_MIN;
	volatile int32_t t57 = 11;

	t57 = ((x237-(x238%x239))<x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = INT32_MIN;
	int32_t x243 = -1;
	uint8_t x244 = 2U;

	t58 = ((x241-(x242%x243))<x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = INT32_MIN;
	uint16_t x248 = 5U;
	volatile int32_t t59 = 26;

	t59 = ((x245-(x246%x247))<x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = INT16_MIN;
	int16_t x252 = 15568;
	volatile int32_t t60 = -255;

	t60 = ((x249-(x250%x251))<x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = INT16_MIN;
	static int8_t x258 = INT8_MIN;
	volatile int16_t x259 = INT16_MIN;
	int32_t x260 = 259;

	t61 = ((x257-(x258%x259))<x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x262 = 11U;
	volatile int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;

	t62 = ((x261-(x262%x263))<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x266 = INT64_MAX;
	volatile uint32_t x268 = 317U;
	static int32_t t63 = -1726;

	t63 = ((x265-(x266%x267))<x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x270 = INT32_MIN;
	static volatile uint8_t x272 = 60U;
	volatile int32_t t64 = 111531845;

	t64 = ((x269-(x270%x271))<x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x273 = 13978U;
	uint32_t x274 = 937616U;
	int64_t x275 = INT64_MAX;
	static uint32_t x276 = 126161U;

	t65 = ((x273-(x274%x275))<x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MAX;
	int16_t x279 = -1;
	volatile int64_t x280 = -4692455908519412LL;

	t66 = ((x277-(x278%x279))<x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x281 = INT32_MIN;
	uint32_t x282 = 9U;
	int64_t x283 = 1612515765819LL;
	uint32_t x284 = UINT32_MAX;
	volatile int32_t t67 = -11558;

	t67 = ((x281-(x282%x283))<x284);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x285 = 2740U;
	static int32_t t68 = -10435220;

	t68 = ((x285-(x286%x287))<x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x289 = 1;
	int8_t x292 = -1;
	static volatile int32_t t69 = 0;

	t69 = ((x289-(x290%x291))<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 14735U;
	volatile int64_t x294 = -1190456LL;
	static int16_t x296 = -64;
	int32_t t70 = -107;

	t70 = ((x293-(x294%x295))<x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x297 = UINT16_MAX;
	int8_t x299 = INT8_MIN;
	int8_t x300 = -1;
	int32_t t71 = 564404;

	t71 = ((x297-(x298%x299))<x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x301 = 1U;
	static int16_t x302 = -1;
	volatile int64_t x303 = -1LL;
	uint16_t x304 = 2718U;

	t72 = ((x301-(x302%x303))<x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x305 = 267426654U;
	uint64_t x306 = UINT64_MAX;
	static int8_t x307 = -2;
	static int64_t x308 = INT64_MIN;
	volatile int32_t t73 = -908;

	t73 = ((x305-(x306%x307))<x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 23U;
	int16_t x310 = 0;
	int32_t x311 = INT32_MAX;
	uint8_t x312 = UINT8_MAX;
	int32_t t74 = 24;

	t74 = ((x309-(x310%x311))<x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x313 = 103;
	uint8_t x314 = 20U;
	int16_t x315 = 213;
	int16_t x316 = 64;
	int32_t t75 = -40409340;

	t75 = ((x313-(x314%x315))<x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x317 = INT8_MIN;
	int8_t x319 = -24;
	int32_t x320 = INT32_MAX;

	t76 = ((x317-(x318%x319))<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = 22;
	static int64_t x322 = -1LL;
	static int32_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t77 = 60727;

	t77 = ((x321-(x322%x323))<x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 1652LLU;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -358;
	int32_t t78 = 34862;

	t78 = ((x325-(x326%x327))<x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	static int8_t x332 = INT8_MIN;
	int32_t t79 = -83;

	t79 = ((x329-(x330%x331))<x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x333 = -1;
	int32_t x335 = -35;
	int8_t x336 = -1;

	t80 = ((x333-(x334%x335))<x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x337 = 7382U;
	volatile uint64_t x339 = UINT64_MAX;
	int32_t t81 = 51598;

	t81 = ((x337-(x338%x339))<x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x342 = 4U;
	volatile int8_t x343 = INT8_MIN;
	uint8_t x344 = 0U;
	static int32_t t82 = 203904;

	t82 = ((x341-(x342%x343))<x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = -146;
	uint32_t x351 = 2083612719U;
	int64_t x352 = -55472LL;

	t83 = ((x349-(x350%x351))<x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x354 = UINT64_MAX;
	volatile int32_t x355 = INT32_MAX;
	int32_t x356 = -11088;

	t84 = ((x353-(x354%x355))<x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = -392;
	static volatile int16_t x358 = INT16_MAX;
	uint8_t x359 = 1U;
	static int16_t x360 = INT16_MIN;

	t85 = ((x357-(x358%x359))<x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = UINT16_MAX;
	volatile uint16_t x362 = 202U;
	volatile int32_t t86 = 53;

	t86 = ((x361-(x362%x363))<x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = 1614;
	int16_t x366 = INT16_MIN;
	int32_t x367 = INT32_MAX;
	volatile int16_t x368 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = ((x365-(x366%x367))<x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -1;
	int64_t x370 = -408594035098143704LL;
	volatile int32_t t88 = -8916384;

	t88 = ((x369-(x370%x371))<x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	volatile int64_t x378 = INT64_MIN;
	static int32_t x379 = -1;
	int32_t x380 = 1;
	int32_t t89 = 14146879;

	t89 = ((x377-(x378%x379))<x380);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x381 = 42U;
	uint8_t x382 = UINT8_MAX;
	int16_t x383 = -1;
	static volatile int8_t x384 = INT8_MAX;
	volatile int32_t t90 = -5261435;

	t90 = ((x381-(x382%x383))<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	static uint16_t x386 = 1203U;
	int16_t x387 = 4;
	static volatile int32_t t91 = -6320805;

	t91 = ((x385-(x386%x387))<x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MAX;
	uint64_t x395 = 951661308LLU;
	static int32_t t92 = -656;

	t92 = ((x393-(x394%x395))<x396);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x397 = 22228735LLU;
	uint64_t x398 = UINT64_MAX;
	static volatile uint8_t x399 = UINT8_MAX;
	volatile int32_t t93 = -289756;

	t93 = ((x397-(x398%x399))<x400);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x401 = 14072U;
	uint8_t x402 = 3U;
	static int32_t x403 = -89626;
	static uint64_t x404 = 14237890204426376LLU;
	int32_t t94 = -37;

	t94 = ((x401-(x402%x403))<x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x405 = 1;
	int16_t x406 = -1;
	int8_t x408 = INT8_MIN;
	volatile int32_t t95 = 102769599;

	t95 = ((x405-(x406%x407))<x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x409 = -1;
	int8_t x410 = INT8_MAX;
	volatile uint32_t x411 = 837515298U;
	volatile uint16_t x412 = 96U;
	int32_t t96 = 262578998;

	t96 = ((x409-(x410%x411))<x412);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x417 = -1LL;
	int16_t x418 = INT16_MIN;
	int8_t x419 = INT8_MAX;
	int64_t x420 = -1LL;
	static int32_t t97 = -2;

	t97 = ((x417-(x418%x419))<x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x422 = 42900332U;
	uint16_t x423 = 5U;
	int32_t x424 = 4108273;
	int32_t t98 = -8026539;

	t98 = ((x421-(x422%x423))<x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x426 = 357320264736LL;
	int64_t x427 = -1LL;
	static volatile int32_t t99 = 6;

	t99 = ((x425-(x426%x427))<x428);

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

