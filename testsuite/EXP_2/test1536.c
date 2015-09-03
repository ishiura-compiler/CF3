#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 15U;
uint8_t x9 = UINT8_MAX;
uint64_t x13 = UINT64_MAX;
static volatile int64_t x14 = INT64_MIN;
static int32_t x23 = INT32_MAX;
int32_t t6 = -443312333;
volatile int64_t x39 = INT64_MIN;
int64_t x43 = INT64_MAX;
int32_t x47 = 1;
static uint8_t x64 = 0U;
volatile int64_t t13 = INT64_MIN;
static int8_t x71 = INT8_MIN;
volatile int8_t x72 = INT8_MAX;
int8_t x75 = -1;
int16_t x81 = 4931;
uint32_t x83 = 1014525036U;
uint16_t x85 = 23900U;
static volatile uint16_t x86 = 1U;
volatile int8_t x87 = INT8_MIN;
volatile int8_t x91 = INT8_MAX;
uint8_t x93 = 3U;
volatile uint8_t x98 = UINT8_MAX;
volatile int64_t t21 = -36999LL;
uint16_t x102 = UINT16_MAX;
volatile uint64_t x104 = UINT64_MAX;
static uint32_t x106 = UINT32_MAX;
uint64_t x109 = UINT64_MAX;
uint32_t x112 = 30373463U;
int32_t x117 = INT32_MAX;
int8_t x122 = 53;
volatile int64_t t28 = 8282872LL;
static uint8_t x133 = 0U;
volatile int32_t x137 = 851224557;
volatile int32_t x140 = INT32_MAX;
volatile int32_t t30 = 2666;
int8_t x147 = 1;
volatile int16_t x158 = -1;
static volatile int8_t x159 = -3;
volatile int8_t x165 = INT8_MIN;
int64_t x171 = INT64_MIN;
static uint32_t x172 = 59355815U;
volatile uint64_t x177 = UINT64_MAX;
static volatile int16_t x185 = INT16_MIN;
uint8_t x186 = UINT8_MAX;
static volatile uint64_t t42 = 8220293688LLU;
static volatile uint32_t t44 = 15292474U;
volatile int32_t x201 = 3;
uint8_t x203 = UINT8_MAX;
volatile int64_t x216 = INT64_MIN;
volatile uint64_t t48 = 11LLU;
int32_t x221 = -1;
volatile int64_t x224 = 4686834790059679LL;
static uint16_t x227 = UINT16_MAX;
int64_t x244 = -3370394460310189956LL;
int8_t x245 = -1;
uint64_t x249 = 399688LLU;
static uint64_t x251 = 352859LLU;
static int8_t x255 = INT8_MIN;
static uint64_t x262 = 27840310005121LLU;
int32_t t56 = -12;
uint16_t x269 = UINT16_MAX;
volatile int64_t x272 = 281LL;
volatile int16_t x273 = -14;
int64_t t59 = 633706505LL;
volatile int8_t x304 = -1;
int8_t x307 = 0;
int64_t x308 = 18712216165LL;
static int16_t x309 = -1;
int32_t x312 = INT32_MIN;
int8_t x316 = INT8_MIN;
int32_t t66 = -1833480;
static volatile int32_t t67 = 1558;
int64_t x324 = -1LL;
static int64_t t70 = -10LL;
int64_t t71 = -3802025LL;
int32_t x355 = -1;
int8_t x356 = -1;
volatile int16_t x357 = INT16_MIN;
uint32_t x364 = UINT32_MAX;
int8_t x372 = 0;
volatile int32_t t76 = -1859;
int16_t x374 = INT16_MIN;
volatile uint8_t x380 = 0U;
int8_t x384 = -1;
static volatile int16_t x385 = -3;
int8_t x397 = -1;
uint16_t x406 = UINT16_MAX;
int16_t x407 = INT16_MIN;
static uint8_t x412 = 2U;
uint64_t x418 = 6287259LLU;
volatile int32_t t86 = 9613;
uint16_t x422 = UINT16_MAX;
uint16_t x423 = 28629U;
int32_t t87 = -4;
volatile uint32_t t90 = 30700U;
static int64_t x442 = -1LL;
static volatile int8_t x443 = INT8_MIN;
uint8_t x465 = 0U;
static volatile uint64_t x466 = 69857843857579961LLU;
int32_t x467 = -1;
static uint32_t x477 = UINT32_MAX;


void f0(void) {
	int16_t x1 = 826;
	static uint8_t x2 = 0U;
	volatile int64_t x3 = INT64_MIN;
	static volatile int32_t t0 = -3;

	t0 = ((x1-(x2<=x3))-x4);

	if (t0 != 811) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint16_t x6 = 5203U;
	volatile int16_t x7 = INT16_MAX;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 0U;

	t1 = ((x5-(x6<=x7))-x8);

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = 1706580395LL;
	volatile int8_t x11 = INT8_MAX;
	static uint64_t x12 = 1424LLU;
	volatile uint64_t t2 = 1357003LLU;

	t2 = ((x9-(x10<=x11))-x12);

	if (t2 != 18446744073709550447LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13-(x14<=x15))-x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = 678264569523121LL;
	int16_t x22 = 4408;
	int64_t x24 = -326530199900175720LL;
	volatile int64_t t4 = 8783230LL;

	t4 = ((x21-(x22<=x23))-x24);

	if (t4 != 327208464469698840LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -98984253368716619LL;
	int8_t x26 = 1;
	int64_t x27 = 5487LL;
	uint16_t x28 = UINT16_MAX;
	int64_t t5 = -652459012328077LL;

	t5 = ((x25-(x26<=x27))-x28);

	if (t5 != -98984253368782155LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 193U;
	volatile int64_t x30 = -1LL;
	uint32_t x31 = UINT32_MAX;
	volatile int8_t x32 = INT8_MIN;

	t6 = ((x29-(x30<=x31))-x32);

	if (t6 != 320) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 195U;
	uint16_t x34 = 43U;
	int8_t x35 = INT8_MIN;
	int16_t x36 = 609;
	int32_t t7 = -1651102;

	t7 = ((x33-(x34<=x35))-x36);

	if (t7 != -414) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	int32_t x38 = INT32_MIN;
	int16_t x40 = 15;
	int32_t t8 = -21;

	t8 = ((x37-(x38<=x39))-x40);

	if (t8 != 2147483632) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 22LLU;
	static uint16_t x42 = UINT16_MAX;
	volatile int8_t x44 = -1;
	volatile uint64_t t9 = 81LLU;

	t9 = ((x41-(x42<=x43))-x44);

	if (t9 != 22LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = 11U;
	static int8_t x48 = INT8_MAX;
	int32_t t10 = -3969;

	t10 = ((x45-(x46<=x47))-x48);

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	static int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MIN;
	volatile int64_t t11 = -157958659444LL;

	t11 = ((x53-(x54<=x55))-x56);

	if (t11 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x58 = INT8_MIN;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = -1LL;
	int64_t t12 = -141LL;

	t12 = ((x57-(x58<=x59))-x60);

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x62 = UINT32_MAX;
	uint16_t x63 = UINT16_MAX;

	t13 = ((x61-(x62<=x63))-x64);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 60U;
	static uint64_t x70 = UINT64_MAX;
	volatile int32_t t14 = -446821435;

	t14 = ((x69-(x70<=x71))-x72);

	if (t14 != -67) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 232U;
	uint8_t x74 = UINT8_MAX;
	volatile int8_t x76 = INT8_MIN;
	static int32_t t15 = -26212104;

	t15 = ((x73-(x74<=x75))-x76);

	if (t15 != 360) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MAX;
	static int32_t x78 = INT32_MAX;
	uint32_t x79 = 123568871U;
	uint32_t x80 = 48818U;
	uint32_t t16 = 510473U;

	t16 = ((x77-(x78<=x79))-x80);

	if (t16 != 2147434829U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x82 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t17 = 685;

	t17 = ((x81-(x82<=x83))-x84);

	if (t17 != 5059) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x88 = INT16_MAX;
	int32_t t18 = -61;

	t18 = ((x85-(x86<=x87))-x88);

	if (t18 != -8867) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = -1;
	uint64_t x90 = 2855664401328468172LLU;
	uint8_t x92 = 17U;
	int32_t t19 = -983;

	t19 = ((x89-(x90<=x91))-x92);

	if (t19 != -18) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = INT16_MIN;
	volatile int32_t x95 = -14082996;
	int16_t x96 = 0;
	volatile int32_t t20 = -52;

	t20 = ((x93-(x94<=x95))-x96);

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = UINT16_MAX;
	static volatile int16_t x99 = -4;
	int64_t x100 = -1LL;

	t21 = ((x97-(x98<=x99))-x100);

	if (t21 != 65536LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x101 = 5206U;
	volatile int64_t x103 = INT64_MAX;
	static volatile uint64_t t22 = 59564109018187LLU;

	t22 = ((x101-(x102<=x103))-x104);

	if (t22 != 5206LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -177239855LL;
	int64_t x107 = -374460378991414445LL;
	static uint64_t x108 = UINT64_MAX;
	uint64_t t23 = 104112794685785321LLU;

	t23 = ((x105-(x106<=x107))-x108);

	if (t23 != 18446744073532311762LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = 1217;
	int8_t x111 = INT8_MIN;
	static volatile uint64_t t24 = 26589527LLU;

	t24 = ((x109-(x110<=x111))-x112);

	if (t24 != 18446744073679178152LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x118 = INT64_MIN;
	static volatile uint16_t x119 = 530U;
	int32_t x120 = 204;
	int32_t t25 = -979;

	t25 = ((x117-(x118<=x119))-x120);

	if (t25 != 2147483442) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = -20;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = UINT64_MAX;
	uint64_t t26 = 9LLU;

	t26 = ((x121-(x122<=x123))-x124);

	if (t26 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 0;
	int32_t x126 = INT32_MIN;
	uint64_t x127 = 7159LLU;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t27 = -62715;

	t27 = ((x125-(x126<=x127))-x128);

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	uint8_t x130 = UINT8_MAX;
	int32_t x131 = -1;
	int64_t x132 = INT64_MIN;

	t28 = ((x129-(x130<=x131))-x132);

	if (t28 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x134 = UINT32_MAX;
	int16_t x135 = -7;
	int8_t x136 = INT8_MAX;
	static int32_t t29 = 14;

	t29 = ((x133-(x134<=x135))-x136);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;

	t30 = ((x137-(x138<=x139))-x140);

	if (t30 != -1296259090) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	uint32_t x143 = 71431541U;
	static uint32_t x144 = UINT32_MAX;
	volatile uint32_t t31 = 16760U;

	t31 = ((x141-(x142<=x143))-x144);

	if (t31 != 4294967169U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = INT64_MIN;
	int8_t x146 = 2;
	int64_t x148 = -1LL;
	int64_t t32 = -319257084925191597LL;

	t32 = ((x145-(x146<=x147))-x148);

	if (t32 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x149 = 5438U;
	static int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	volatile int8_t x152 = INT8_MIN;
	int32_t t33 = -585524;

	t33 = ((x149-(x150<=x151))-x152);

	if (t33 != 5565) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = INT32_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t34 = 58;

	t34 = ((x157-(x158<=x159))-x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x161 = -37;
	static volatile int16_t x162 = INT16_MIN;
	int64_t x163 = -1LL;
	int8_t x164 = 0;
	static volatile int32_t t35 = -6136775;

	t35 = ((x161-(x162<=x163))-x164);

	if (t35 != -38) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x166 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	int8_t x168 = -1;
	int32_t t36 = -20;

	t36 = ((x165-(x166<=x167))-x168);

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x169 = 39;
	int16_t x170 = 1;
	volatile uint32_t t37 = 798272391U;

	t37 = ((x169-(x170<=x171))-x172);

	if (t37 != 4235611520U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = 1;
	uint64_t x175 = UINT64_MAX;
	volatile int16_t x176 = -5;
	int32_t t38 = 4108;

	t38 = ((x173-(x174<=x175))-x176);

	if (t38 != -124) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = INT8_MAX;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = 0;
	uint64_t t39 = 57866925034375LLU;

	t39 = ((x177-(x178<=x179))-x180);

	if (t39 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = -1;
	int8_t x182 = INT8_MAX;
	int32_t x183 = 4316;
	int8_t x184 = INT8_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x181-(x182<=x183))-x184);

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x187 = 8098U;
	static uint32_t x188 = 19359U;
	static uint32_t t41 = 393985U;

	t41 = ((x185-(x186<=x187))-x188);

	if (t41 != 4294915168U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = UINT32_MAX;
	volatile uint8_t x190 = 20U;
	uint16_t x191 = 0U;
	uint64_t x192 = 3870715732825781LLU;

	t42 = ((x189-(x190<=x191))-x192);

	if (t42 != 18442873362271693130LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = 2667;
	volatile int16_t x194 = INT16_MIN;
	int64_t x195 = -3364159507531LL;
	int16_t x196 = 52;
	volatile int32_t t43 = 263317;

	t43 = ((x193-(x194<=x195))-x196);

	if (t43 != 2615) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x197 = 0U;
	static uint64_t x198 = 35047161635528LLU;
	uint32_t x199 = UINT32_MAX;
	static uint16_t x200 = 98U;

	t44 = ((x197-(x198<=x199))-x200);

	if (t44 != 4294967198U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x202 = INT32_MAX;
	int8_t x204 = 44;
	int32_t t45 = 1028;

	t45 = ((x201-(x202<=x203))-x204);

	if (t45 != -41) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 410945U;
	int8_t x206 = INT8_MAX;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t46 = 544U;

	t46 = ((x205-(x206<=x207))-x208);

	if (t46 != 410946U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MIN;
	int16_t x215 = -338;
	volatile uint64_t t47 = 171LLU;

	t47 = ((x213-(x214<=x215))-x216);

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x217 = 215LLU;
	int16_t x218 = 23;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;

	t48 = ((x217-(x218<=x219))-x220);

	if (t48 != 216LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x222 = 39874438LL;
	int64_t x223 = 1055690629653LL;
	int64_t t49 = -347185270150439LL;

	t49 = ((x221-(x222<=x223))-x224);

	if (t49 != -4686834790059681LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = 19;
	static uint16_t x226 = 916U;
	uint8_t x228 = 14U;
	int32_t t50 = -1;

	t50 = ((x225-(x226<=x227))-x228);

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x241 = INT32_MAX;
	int8_t x242 = 3;
	int32_t x243 = INT32_MIN;
	volatile int64_t t51 = 632LL;

	t51 = ((x241-(x242<=x243))-x244);

	if (t51 != 3370394462457673603LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = -451LL;
	static uint64_t x247 = UINT64_MAX;
	int32_t x248 = -2037;
	static volatile int32_t t52 = -28010;

	t52 = ((x245-(x246<=x247))-x248);

	if (t52 != 2035) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x250 = -884;
	int16_t x252 = INT16_MIN;
	uint64_t t53 = 8LLU;

	t53 = ((x249-(x250<=x251))-x252);

	if (t53 != 432456LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x253 = 86LLU;
	int64_t x254 = -1LL;
	int16_t x256 = 372;
	static volatile uint64_t t54 = 913573888302486199LLU;

	t54 = ((x253-(x254<=x255))-x256);

	if (t54 != 18446744073709551330LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = 1U;
	int16_t x258 = INT16_MAX;
	uint32_t x259 = 71286U;
	int16_t x260 = -607;
	int32_t t55 = 150358764;

	t55 = ((x257-(x258<=x259))-x260);

	if (t55 != 607) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x261 = 1U;
	int64_t x263 = INT64_MAX;
	int32_t x264 = INT32_MAX;

	t56 = ((x261-(x262<=x263))-x264);

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x270 = -150207;
	int32_t x271 = -1;
	int64_t t57 = 41LL;

	t57 = ((x269-(x270<=x271))-x272);

	if (t57 != 65253LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x274 = 470LLU;
	static uint64_t x275 = 60228LLU;
	int16_t x276 = -1;
	volatile int32_t t58 = -276938;

	t58 = ((x273-(x274<=x275))-x276);

	if (t58 != -14) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x277 = INT8_MIN;
	volatile int16_t x278 = -1;
	uint32_t x279 = 4U;
	int64_t x280 = -1827596254LL;

	t59 = ((x277-(x278<=x279))-x280);

	if (t59 != 1827596126LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x281 = -1;
	static int32_t x282 = 0;
	int32_t x283 = INT32_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t60 = 1262;

	t60 = ((x281-(x282<=x283))-x284);

	if (t60 != -256) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x285 = 3;
	int8_t x286 = INT8_MIN;
	uint64_t x287 = 448809277980302LLU;
	static int16_t x288 = INT16_MIN;
	static int32_t t61 = 7029276;

	t61 = ((x285-(x286<=x287))-x288);

	if (t61 != 32771) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 9997088U;
	int16_t x290 = INT16_MIN;
	uint8_t x291 = 5U;
	uint64_t x292 = 19991427866501LLU;
	volatile uint64_t t62 = 813906088LLU;

	t62 = ((x289-(x290<=x291))-x292);

	if (t62 != 18446724082291682202LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x301 = 1U;
	uint32_t x302 = UINT32_MAX;
	uint32_t x303 = 5578U;
	int32_t t63 = 60981;

	t63 = ((x301-(x302<=x303))-x304);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x306 = -29;
	int64_t t64 = -35570395865278LL;

	t64 = ((x305-(x306<=x307))-x308);

	if (t64 != -14417248871LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x310 = INT8_MIN;
	volatile int32_t x311 = INT32_MAX;
	volatile int32_t t65 = 1;

	t65 = ((x309-(x310<=x311))-x312);

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = 1;
	static uint64_t x314 = 51979LLU;
	int8_t x315 = INT8_MAX;

	t66 = ((x313-(x314<=x315))-x316);

	if (t66 != 129) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = 37;
	uint8_t x318 = UINT8_MAX;
	uint32_t x319 = 52781U;
	int16_t x320 = 13;

	t67 = ((x317-(x318<=x319))-x320);

	if (t67 != 23) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x321 = -26;
	volatile int64_t x322 = INT64_MIN;
	static int16_t x323 = 1561;
	int64_t t68 = -62LL;

	t68 = ((x321-(x322<=x323))-x324);

	if (t68 != -26LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x325 = -26090675512950LL;
	int16_t x326 = 0;
	uint32_t x327 = 63611836U;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t69 = -1LL;

	t69 = ((x325-(x326<=x327))-x328);

	if (t69 != 9223345946179262857LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x333 = INT32_MAX;
	uint8_t x334 = UINT8_MAX;
	static uint8_t x335 = 26U;
	int64_t x336 = 1LL;

	t70 = ((x333-(x334<=x335))-x336);

	if (t70 != 2147483646LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x337 = INT8_MAX;
	uint8_t x338 = 2U;
	volatile uint8_t x339 = 63U;
	int64_t x340 = INT64_MAX;

	t71 = ((x337-(x338<=x339))-x340);

	if (t71 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 265432778713432527LLU;
	uint64_t t72 = 48815413126LLU;

	t72 = ((x349-(x350<=x351))-x352);

	if (t72 != 18181311294996119343LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x353 = UINT8_MAX;
	static int8_t x354 = -1;
	int32_t t73 = -1396033;

	t73 = ((x353-(x354<=x355))-x356);

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x358 = INT32_MIN;
	uint16_t x359 = 983U;
	int8_t x360 = INT8_MIN;
	static volatile int32_t t74 = -26619751;

	t74 = ((x357-(x358<=x359))-x360);

	if (t74 != -32641) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x361 = UINT8_MAX;
	uint16_t x362 = 9U;
	static uint8_t x363 = UINT8_MAX;
	uint32_t t75 = 1016584143U;

	t75 = ((x361-(x362<=x363))-x364);

	if (t75 != 255U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x369 = -1;
	int16_t x370 = INT16_MIN;
	uint16_t x371 = 12U;

	t76 = ((x369-(x370<=x371))-x372);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x373 = 336921LLU;
	volatile int8_t x375 = INT8_MAX;
	uint64_t x376 = 1542729549967430LLU;
	static volatile uint64_t t77 = 104015963LLU;

	t77 = ((x373-(x374<=x375))-x376);

	if (t77 != 18445201344159921106LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x377 = 494LL;
	static volatile int64_t x378 = -13LL;
	volatile uint8_t x379 = UINT8_MAX;
	int64_t t78 = -5531LL;

	t78 = ((x377-(x378<=x379))-x380);

	if (t78 != 493LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x381 = INT16_MAX;
	uint16_t x382 = UINT16_MAX;
	static uint16_t x383 = 43U;
	int32_t t79 = -5875;

	t79 = ((x381-(x382<=x383))-x384);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = -100464899602031LL;
	int64_t t80 = 521772260465LL;

	t80 = ((x385-(x386<=x387))-x388);

	if (t80 != 100464899602028LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x389 = 0;
	int32_t x390 = -778;
	int8_t x391 = INT8_MAX;
	int8_t x392 = 0;
	int32_t t81 = -3756;

	t81 = ((x389-(x390<=x391))-x392);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x393 = UINT64_MAX;
	uint16_t x394 = 2779U;
	int32_t x395 = INT32_MIN;
	int8_t x396 = INT8_MAX;
	volatile uint64_t t82 = 8088386297LLU;

	t82 = ((x393-(x394<=x395))-x396);

	if (t82 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x398 = 17883617158317LL;
	int8_t x399 = -2;
	int32_t x400 = 1;
	static volatile int32_t t83 = 1626356;

	t83 = ((x397-(x398<=x399))-x400);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x405 = -1;
	uint32_t x408 = 11U;
	volatile uint32_t t84 = 277U;

	t84 = ((x405-(x406<=x407))-x408);

	if (t84 != 4294967284U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x409 = INT16_MAX;
	uint16_t x410 = 31U;
	uint8_t x411 = 3U;
	volatile int32_t t85 = -8892;

	t85 = ((x409-(x410<=x411))-x412);

	if (t85 != 32765) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x417 = 4567U;
	uint8_t x419 = 0U;
	uint16_t x420 = UINT16_MAX;

	t86 = ((x417-(x418<=x419))-x420);

	if (t86 != -60968) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MIN;
	static int16_t x424 = -1;

	t87 = ((x421-(x422<=x423))-x424);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x425 = -22;
	int8_t x426 = INT8_MIN;
	volatile int32_t x427 = INT32_MIN;
	volatile int16_t x428 = -15686;
	int32_t t88 = -8;

	t88 = ((x425-(x426<=x427))-x428);

	if (t88 != 15664) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MAX;
	volatile uint16_t x431 = 280U;
	int8_t x432 = INT8_MIN;
	static volatile uint32_t t89 = 1288U;

	t89 = ((x429-(x430<=x431))-x432);

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MAX;
	int8_t x439 = -1;
	static uint32_t x440 = 1017035U;

	t90 = ((x437-(x438<=x439))-x440);

	if (t90 != 2146466612U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x441 = INT16_MIN;
	volatile uint8_t x444 = 1U;
	int32_t t91 = 20;

	t91 = ((x441-(x442<=x443))-x444);

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = -799;
	uint64_t x446 = 1402449149642692LLU;
	volatile uint16_t x447 = 2U;
	uint64_t x448 = 1373LLU;
	uint64_t t92 = 129906937133LLU;

	t92 = ((x445-(x446<=x447))-x448);

	if (t92 != 18446744073709549444LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x449 = -1;
	static volatile int32_t x450 = INT32_MIN;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MAX;
	int32_t t93 = -1;

	t93 = ((x449-(x450<=x451))-x452);

	if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = INT16_MIN;
	volatile int64_t x455 = 219363243881969LL;
	static volatile int8_t x456 = -1;
	uint32_t t94 = UINT32_MAX;

	t94 = ((x453-(x454<=x455))-x456);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x468 = INT32_MIN;
	volatile int32_t t95 = INT32_MAX;

	t95 = ((x465-(x466<=x467))-x468);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x473 = INT16_MAX;
	int64_t x474 = INT64_MAX;
	uint32_t x475 = 64423U;
	uint64_t x476 = 331486843LLU;
	static volatile uint64_t t96 = 2176508528769144288LLU;

	t96 = ((x473-(x474<=x475))-x476);

	if (t96 != 18446744073378097540LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x478 = UINT64_MAX;
	int32_t x479 = -344;
	volatile uint16_t x480 = UINT16_MAX;
	volatile uint32_t t97 = 1U;

	t97 = ((x477-(x478<=x479))-x480);

	if (t97 != 4294901760U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x481 = -319;
	int64_t x482 = 157506291031752794LL;
	static uint32_t x483 = 31787157U;
	int16_t x484 = INT16_MAX;
	int32_t t98 = 516762063;

	t98 = ((x481-(x482<=x483))-x484);

	if (t98 != -33086) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x485 = 12U;
	uint8_t x486 = 1U;
	int16_t x487 = INT16_MIN;
	static int8_t x488 = -13;
	int32_t t99 = 3058;

	t99 = ((x485-(x486<=x487))-x488);

	if (t99 != 25) { NG(); } else { ; }
	
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

