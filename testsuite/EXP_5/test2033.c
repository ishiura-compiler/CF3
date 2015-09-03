#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
uint64_t x13 = 11LLU;
uint16_t x17 = UINT16_MAX;
volatile int32_t x21 = -12639036;
static uint64_t x24 = 4898LLU;
volatile int8_t x27 = INT8_MIN;
int8_t x30 = INT8_MIN;
uint32_t x35 = 1721943U;
uint16_t x39 = 1U;
volatile int8_t x43 = -5;
static uint64_t t10 = 1469739LLU;
static uint8_t x47 = UINT8_MAX;
static volatile int32_t t11 = -125283;
int16_t x69 = INT16_MIN;
int64_t x70 = INT64_MAX;
uint16_t x72 = 267U;
static volatile int64_t x74 = INT64_MIN;
static uint32_t x78 = UINT32_MAX;
volatile uint64_t t17 = 97296008898LLU;
int64_t x82 = -1LL;
int64_t t21 = -1990493907710LL;
int32_t x98 = INT32_MIN;
static uint16_t x102 = 8U;
volatile uint64_t t23 = 1521709LLU;
static int32_t x117 = INT32_MAX;
uint32_t x119 = 39U;
volatile int64_t t26 = 123LL;
static volatile uint8_t x121 = 4U;
int32_t t27 = 16801074;
static int64_t x130 = 630535LL;
int32_t x133 = INT32_MAX;
static uint8_t x135 = UINT8_MAX;
uint16_t x138 = 0U;
int8_t x139 = 0;
uint64_t x140 = UINT64_MAX;
volatile int8_t x142 = INT8_MIN;
int16_t x147 = -1;
volatile int32_t t32 = -2663;
static int16_t x150 = INT16_MIN;
volatile int8_t x151 = INT8_MAX;
int64_t t35 = 69433404957981624LL;
uint8_t x165 = 8U;
volatile int16_t x167 = -10653;
uint32_t x169 = 193U;
int16_t x174 = -1;
int8_t x175 = 61;
uint64_t x178 = UINT64_MAX;
int32_t x180 = -1;
static int16_t x192 = INT16_MIN;
int64_t x198 = INT64_MAX;
static int32_t x199 = -30864;
static int8_t x202 = INT8_MAX;
int16_t x205 = 214;
int16_t x209 = INT16_MAX;
volatile uint64_t t46 = 30485900313LLU;
int32_t x214 = -1553304;
int8_t x215 = INT8_MIN;
uint16_t x222 = 548U;
uint64_t t49 = 7LLU;
volatile int16_t x227 = INT16_MIN;
int8_t x232 = INT8_MIN;
static uint32_t t51 = 58089080U;
static uint8_t x234 = UINT8_MAX;
volatile uint8_t x235 = UINT8_MAX;
int16_t x239 = INT16_MIN;
static int16_t x251 = -1;
uint64_t x253 = UINT64_MAX;
int16_t x257 = -98;
uint8_t x263 = UINT8_MAX;
int16_t x271 = INT16_MIN;
int16_t x276 = 3802;
int8_t x279 = -1;
uint64_t t62 = 553018113139899212LLU;
uint64_t x286 = 4LLU;
volatile uint32_t x287 = UINT32_MAX;
int64_t x291 = INT64_MAX;
int16_t x292 = 10308;
static int16_t x294 = 0;
int32_t x296 = -4182;
int8_t x304 = 0;
static int32_t x309 = 459;
volatile int32_t x310 = 1093;
volatile uint16_t x311 = UINT16_MAX;
uint8_t x314 = 0U;
int8_t x315 = -11;
static uint32_t t71 = 24779493U;
uint32_t x319 = 6244U;
int64_t x322 = 2111099595759LL;
int32_t x332 = 3647;
int8_t x337 = INT8_MIN;
volatile uint64_t x344 = UINT64_MAX;
volatile int8_t x354 = INT8_MIN;
uint16_t x355 = 92U;
static int32_t x360 = -6346;
uint8_t x363 = UINT8_MAX;
int64_t x365 = INT64_MAX;
uint16_t x368 = 0U;
static int16_t x376 = INT16_MAX;
volatile uint32_t t87 = 1949382272U;
uint32_t x385 = 62887900U;
int16_t x386 = -1;
volatile uint16_t x390 = 2U;
volatile uint32_t x396 = 461889562U;
volatile int64_t t93 = 12570522LL;
int64_t t95 = -47694869LL;
uint64_t x418 = UINT64_MAX;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int16_t x2 = -626;
	volatile uint64_t x4 = 180LLU;
	volatile uint64_t t0 = 175042773LLU;

	t0 = (x1%((x2^x3)+x4));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 2039220LL;
	uint64_t x6 = 3LLU;
	volatile int8_t x7 = INT8_MIN;
	static int8_t x8 = -1;
	volatile uint64_t t1 = 1619648926950LLU;

	t1 = (x5%((x6^x7)+x8));

	if (t1 != 2039220LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static volatile int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MIN;
	volatile uint8_t x12 = 63U;
	volatile int32_t t2 = 27;

	t2 = (x9%((x10^x11)+x12));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	volatile int32_t x15 = 112821;
	uint64_t x16 = 1041206771965942LLU;
	uint64_t t3 = 3256282206LLU;

	t3 = (x13%((x14^x15)+x16));

	if (t3 != 11LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 1087799U;
	volatile uint64_t x19 = UINT64_MAX;
	int32_t x20 = INT32_MIN;
	static uint64_t t4 = 16636708136533LLU;

	t4 = (x17%((x18^x19)+x20));

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	uint64_t x23 = 548220998LLU;
	static uint64_t t5 = 64856810LLU;

	t5 = (x21%((x22^x23)+x24));

	if (t5 != 535577065LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	volatile int16_t x26 = 15;
	volatile int16_t x28 = INT16_MAX;
	int32_t t6 = -937414;

	t6 = (x25%((x26^x27)+x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint64_t x31 = 886276784LLU;
	volatile int64_t x32 = -1LL;
	volatile uint64_t t7 = 16356099LLU;

	t7 = (x29%((x30^x31)+x32));

	if (t7 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	static int16_t x36 = -1;
	volatile int64_t t8 = 43391514136LL;

	t8 = (x33%((x34^x35)+x36));

	if (t8 != -1296698892LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static volatile int8_t x38 = -2;
	static volatile int16_t x40 = INT16_MIN;
	int32_t t9 = 550;

	t9 = (x37%((x38^x39)+x40));

	if (t9 != 32766) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 320867247283958866LLU;
	uint16_t x42 = UINT16_MAX;
	int32_t x44 = INT32_MAX;

	t10 = (x41%((x42^x43)+x44));

	if (t10 != 329387141LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int32_t x46 = INT32_MIN;
	int16_t x48 = INT16_MAX;

	t11 = (x45%((x46^x47)+x48));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 41U;
	static volatile int8_t x50 = INT8_MIN;
	int16_t x51 = -9;
	static int8_t x52 = INT8_MAX;
	static int32_t t12 = 15369420;

	t12 = (x49%((x50^x51)+x52));

	if (t12 != 41) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -152447473226781670LL;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 187U;
	static uint32_t x56 = UINT32_MAX;
	volatile int64_t t13 = 16238LL;

	t13 = (x53%((x54^x55)+x56));

	if (t13 != -4084978158LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 25U;
	uint8_t x58 = UINT8_MAX;
	static uint32_t x59 = 84639U;
	int8_t x60 = INT8_MIN;
	volatile uint32_t t14 = 910883586U;

	t14 = (x57%((x58^x59)+x60));

	if (t14 != 25U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x71 = -5;
	int64_t t15 = -6596629392011274LL;

	t15 = (x69%((x70^x71)+x72));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = 6487712320453LL;
	uint8_t x75 = UINT8_MAX;
	static uint8_t x76 = UINT8_MAX;
	static volatile int64_t t16 = -3802353878LL;

	t16 = (x73%((x74^x75)+x76));

	if (t16 != 6487712320453LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = -1;
	static uint64_t x79 = 1036017LLU;
	static int64_t x80 = -1LL;

	t17 = (x77%((x78^x79)+x80));

	if (t17 != 4146480387LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MAX;
	int8_t x83 = 0;
	static uint8_t x84 = 11U;
	static volatile int64_t t18 = 28714544297LL;

	t18 = (x81%((x82^x83)+x84));

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -27;
	uint16_t x86 = 1341U;
	uint32_t x87 = 4647175U;
	int64_t x88 = -1358840724613893LL;
	volatile int64_t t19 = 7LL;

	t19 = (x85%((x86^x87)+x88));

	if (t19 != -27LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -173011768232046650LL;
	int16_t x90 = INT16_MAX;
	uint8_t x91 = 22U;
	int64_t x92 = -2438748336LL;
	volatile int64_t t20 = -10185481LL;

	t20 = (x89%((x90^x91)+x92));

	if (t20 != -16251713LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	int64_t x94 = INT64_MIN;
	static volatile uint32_t x95 = 107U;
	static uint32_t x96 = 1482944U;

	t21 = (x93%((x94^x95)+x96));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	uint32_t x100 = UINT32_MAX;
	uint64_t t22 = 10630540752409310LLU;

	t22 = (x97%((x98^x99)+x100));

	if (t22 != 1431655766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x101 = -1;
	uint32_t x103 = 31446127U;
	volatile uint64_t x104 = UINT64_MAX;

	t23 = (x101%((x102^x103)+x104));

	if (t23 != 3085933LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = UINT32_MAX;
	volatile int32_t x107 = INT32_MIN;
	int16_t x108 = -15;
	volatile uint32_t t24 = 62232U;

	t24 = (x105%((x106^x107)+x108));

	if (t24 != 16U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MIN;
	volatile uint64_t x110 = UINT64_MAX;
	volatile uint32_t x111 = 5697623U;
	int16_t x112 = INT16_MIN;
	uint64_t t25 = 4139565760538LLU;

	t25 = (x109%((x110^x111)+x112));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x118 = 0LL;
	int32_t x120 = INT32_MIN;

	t26 = (x117%((x118^x119)+x120));

	if (t26 != 38LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x122 = INT16_MIN;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;

	t27 = (x121%((x122^x123)+x124));

	if (t27 != 4) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = UINT16_MAX;
	int32_t x131 = -1878;
	int32_t x132 = 0;
	static volatile int64_t t28 = 19415259823LL;

	t28 = (x129%((x130^x131)+x132));

	if (t28 != 65535LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = -27;
	static int8_t x136 = INT8_MIN;
	int32_t t29 = 119202;

	t29 = (x133%((x134^x135)+x136));

	if (t29 != 241) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x137 = 10U;
	uint64_t t30 = 5696LLU;

	t30 = (x137%((x138^x139)+x140));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x141 = 590579088739LLU;
	volatile uint16_t x143 = UINT16_MAX;
	int32_t x144 = 5;
	volatile uint64_t t31 = 1727540601515422392LLU;

	t31 = (x141%((x142^x143)+x144));

	if (t31 != 590579088739LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	int16_t x146 = INT16_MAX;
	static int8_t x148 = -1;

	t32 = (x145%((x146^x147)+x148));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = -1;
	static volatile uint32_t x152 = 12266U;
	uint32_t t33 = 3U;

	t33 = (x149%((x150^x151)+x152));

	if (t33 != 20374U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 1870U;
	int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	volatile int32_t x156 = INT32_MIN;
	static uint32_t t34 = 1005787U;

	t34 = (x153%((x154^x155)+x156));

	if (t34 != 1870U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = 19LL;
	int32_t x158 = -415361;
	int16_t x159 = INT16_MIN;
	static volatile int16_t x160 = -161;

	t35 = (x157%((x158^x159)+x160));

	if (t35 != 19LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = 28500135;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t36 = 3203656U;

	t36 = (x165%((x166^x167)+x168));

	if (t36 != 8U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	int8_t x172 = -1;
	volatile uint64_t t37 = 505143361LLU;

	t37 = (x169%((x170^x171)+x172));

	if (t37 != 193LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint8_t x173 = 36U;
	uint32_t x176 = 21U;
	static volatile uint32_t t38 = 374974U;

	t38 = (x173%((x174^x175)+x176));

	if (t38 != 36U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	static int8_t x179 = -1;
	static uint64_t t39 = 425LLU;

	t39 = (x177%((x178^x179)+x180));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	volatile uint8_t x186 = 3U;
	uint32_t x187 = 684522448U;
	uint16_t x188 = 25117U;
	uint32_t t40 = 2639973U;

	t40 = (x185%((x186^x187)+x188));

	if (t40 != 187649120U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = -1LL;
	static uint8_t x190 = 24U;
	int64_t x191 = -291553LL;
	int64_t t41 = -5543623LL;

	t41 = (x189%((x190^x191)+x192));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x193 = -1;
	volatile int16_t x194 = 55;
	static volatile int32_t x195 = -1;
	static uint32_t x196 = UINT32_MAX;
	volatile uint32_t t42 = 1U;

	t42 = (x193%((x194^x195)+x196));

	if (t42 != 56U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 82U;
	volatile uint8_t x200 = 8U;
	int64_t t43 = 5573319177509297LL;

	t43 = (x197%((x198^x199)+x200));

	if (t43 != 82LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	int32_t x203 = INT32_MAX;
	int8_t x204 = -1;
	uint32_t t44 = 175397886U;

	t44 = (x201%((x202^x203)+x204));

	if (t44 != 257U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x206 = INT32_MAX;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 11U;
	int32_t t45 = 132855878;

	t45 = (x205%((x206^x207)+x208));

	if (t45 != 214) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x210 = 1;
	uint64_t x211 = UINT64_MAX;
	uint64_t x212 = UINT64_MAX;

	t46 = (x209%((x210^x211)+x212));

	if (t46 != 32767LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = 8U;
	int32_t x216 = -53892;
	int32_t t47 = 1;

	t47 = (x213%((x214^x215)+x216));

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MIN;
	int64_t x218 = -659405755LL;
	int16_t x219 = -5776;
	int16_t x220 = -13227;
	int64_t t48 = -10240719LL;

	t48 = (x217%((x218^x219)+x220));

	if (t48 != -312852038LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x221 = 561493284LLU;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MAX;

	t49 = (x221%((x222^x223)+x224));

	if (t49 != 561493284LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x225 = 384U;
	int16_t x226 = -45;
	int16_t x228 = INT16_MAX;
	uint32_t t50 = 590112U;

	t50 = (x225%((x226^x227)+x228));

	if (t50 != 384U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	static uint16_t x231 = UINT16_MAX;

	t51 = (x229%((x230^x231)+x232));

	if (t51 != 65663U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -1;
	int64_t x236 = -200759286LL;
	static int64_t t52 = -21644905597739LL;

	t52 = (x233%((x234^x235)+x236));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x238 = UINT16_MAX;
	int16_t x240 = -1;
	volatile int32_t t53 = 4269;

	t53 = (x237%((x238^x239)+x240));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = -1LL;
	static int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = UINT8_MAX;
	static volatile int64_t t54 = 78121LL;

	t54 = (x241%((x242^x243)+x244));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 3110132258LLU;
	uint16_t x250 = UINT16_MAX;
	volatile uint16_t x252 = UINT16_MAX;
	volatile uint64_t t55 = 3553782356018222746LLU;

	t55 = (x249%((x250^x251)+x252));

	if (t55 != 3110132258LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x254 = INT16_MIN;
	int8_t x255 = -1;
	volatile int16_t x256 = -1;
	uint64_t t56 = 41LLU;

	t56 = (x253%((x254^x255)+x256));

	if (t56 != 255LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x258 = 118U;
	volatile uint64_t x259 = 21137850775LLU;
	int16_t x260 = INT16_MIN;
	volatile uint64_t t57 = 795644032LLU;

	t57 = (x257%((x258^x259)+x260));

	if (t57 != 2503391988LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MIN;
	uint16_t x262 = UINT16_MAX;
	int8_t x264 = -1;
	volatile int32_t t58 = 980;

	t58 = (x261%((x262^x263)+x264));

	if (t58 != -385) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MAX;
	uint64_t x267 = UINT64_MAX;
	static int8_t x268 = 0;
	uint64_t t59 = 7851LLU;

	t59 = (x265%((x266^x267)+x268));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x269 = 4U;
	static uint16_t x270 = 2U;
	int32_t x272 = -1;
	int32_t t60 = 799263;

	t60 = (x269%((x270^x271)+x272));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x273 = INT32_MIN;
	int32_t x274 = -22407267;
	int32_t x275 = INT32_MIN;
	volatile int32_t t61 = 27258;

	t61 = (x273%((x274^x275)+x276));

	if (t61 != -22403465) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = INT32_MIN;
	int64_t x278 = INT64_MIN;
	uint64_t x280 = 133545980741004567LLU;

	t62 = (x277%((x278^x279)+x280));

	if (t62 != 9089826053966287594LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = -1LL;
	int64_t x282 = INT64_MIN;
	static int64_t x283 = INT64_MAX;
	uint16_t x284 = 713U;
	static volatile int64_t t63 = -692LL;

	t63 = (x281%((x282^x283)+x284));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MAX;
	volatile int16_t x288 = INT16_MIN;
	static volatile uint64_t t64 = 9213423307642349354LLU;

	t64 = (x285%((x286^x287)+x288));

	if (t64 != 32767LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 429U;
	static int16_t x290 = INT16_MAX;
	volatile int64_t t65 = -889383LL;

	t65 = (x289%((x290^x291)+x292));

	if (t65 != 429LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x293 = -30;
	int64_t x295 = -1LL;
	volatile int64_t t66 = 218028437492552034LL;

	t66 = (x293%((x294^x295)+x296));

	if (t66 != -30LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = 8522;
	int32_t x298 = -1;
	uint64_t x299 = 0LLU;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t67 = 187890946092512LLU;

	t67 = (x297%((x298^x299)+x300));

	if (t67 != 140LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = 59;
	uint8_t x302 = 0U;
	int16_t x303 = INT16_MAX;
	int32_t t68 = 78;

	t68 = (x301%((x302^x303)+x304));

	if (t68 != 59) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = -1;
	uint32_t x306 = UINT32_MAX;
	int16_t x307 = 0;
	int64_t x308 = INT64_MIN;
	volatile int64_t t69 = -64330213610853746LL;

	t69 = (x305%((x306^x307)+x308));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x312 = -1;
	static int32_t t70 = 25133;

	t70 = (x309%((x310^x311)+x312));

	if (t70 != 459) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x313 = INT16_MIN;
	static volatile uint32_t x316 = UINT32_MAX;

	t71 = (x313%((x314^x315)+x316));

	if (t71 != 4294934528U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = -1LL;
	int32_t x318 = INT32_MAX;
	uint8_t x320 = 22U;
	volatile int64_t t72 = 19995LL;

	t72 = (x317%((x318^x319)+x320));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x321 = INT32_MIN;
	volatile int32_t x323 = -33535;
	int8_t x324 = INT8_MIN;
	volatile int64_t t73 = 210775985145621LL;

	t73 = (x321%((x322^x323)+x324));

	if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x325 = INT64_MAX;
	int32_t x326 = 1;
	volatile uint64_t x327 = UINT64_MAX;
	uint16_t x328 = 405U;
	static volatile uint64_t t74 = 426430118LLU;

	t74 = (x325%((x326^x327)+x328));

	if (t74 != 7LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = -699747;
	int32_t x330 = 231911701;
	int64_t x331 = 25092LL;
	int64_t t75 = -1764359LL;

	t75 = (x329%((x330^x331)+x332));

	if (t75 != -699747LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x333 = UINT8_MAX;
	volatile int16_t x334 = 15692;
	static uint16_t x335 = 2671U;
	int16_t x336 = 2;
	volatile int32_t t76 = 0;

	t76 = (x333%((x334^x335)+x336));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x338 = -2;
	static int8_t x339 = INT8_MIN;
	uint16_t x340 = 3U;
	int32_t t77 = 48330;

	t77 = (x337%((x338^x339)+x340));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	static uint16_t x343 = 18252U;
	volatile uint64_t t78 = 741124LLU;

	t78 = (x341%((x342^x343)+x344));

	if (t78 != 65535LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -14666;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = INT64_MAX;
	static uint64_t x348 = UINT64_MAX;
	uint64_t t79 = 6481560LLU;

	t79 = (x345%((x346^x347)+x348));

	if (t79 != 50872LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x353 = 23422988;
	uint32_t x356 = 84U;
	uint32_t t80 = 15435425U;

	t80 = (x353%((x354^x355)+x356));

	if (t80 != 44U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 1U;
	int8_t x358 = -1;
	int8_t x359 = INT8_MAX;
	int32_t t81 = -37787422;

	t81 = (x357%((x358^x359)+x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = -1;
	static volatile uint8_t x364 = 2U;
	volatile uint64_t t82 = 14636666093LLU;

	t82 = (x361%((x362^x363)+x364));

	if (t82 != 253LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x366 = INT16_MAX;
	int8_t x367 = -1;
	static volatile int64_t t83 = -32562418269972439LL;

	t83 = (x365%((x366^x367)+x368));

	if (t83 != 32767LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 118125U;
	int16_t x370 = INT16_MIN;
	uint8_t x371 = UINT8_MAX;
	int16_t x372 = INT16_MIN;
	uint32_t t84 = 8897U;

	t84 = (x369%((x370^x371)+x372));

	if (t84 != 118125U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x373 = 5;
	uint8_t x374 = 2U;
	int16_t x375 = INT16_MIN;
	volatile int32_t t85 = -30525551;

	t85 = (x373%((x374^x375)+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x377 = INT8_MIN;
	int64_t x378 = 1LL;
	static uint16_t x379 = UINT16_MAX;
	volatile int8_t x380 = 20;
	static int64_t t86 = -7398232966176LL;

	t86 = (x377%((x378^x379)+x380));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x381 = -36;
	volatile int32_t x382 = INT32_MAX;
	static uint32_t x383 = UINT32_MAX;
	static volatile int16_t x384 = 1970;

	t87 = (x381%((x382^x383)+x384));

	if (t87 != 2147481642U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x387 = INT64_MIN;
	int32_t x388 = -257391887;
	static int64_t t88 = 33LL;

	t88 = (x385%((x386^x387)+x388));

	if (t88 != 62887900LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x389 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	volatile int32_t x392 = INT32_MIN;
	uint32_t t89 = 1806U;

	t89 = (x389%((x390^x391)+x392));

	if (t89 != 32767U) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x393 = INT8_MIN;
	uint16_t x394 = 811U;
	static int32_t x395 = INT32_MIN;
	uint32_t t90 = 81651U;

	t90 = (x393%((x394^x395)+x396));

	if (t90 != 1685593147U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x397 = 92422LL;
	int64_t x398 = INT64_MIN;
	static int8_t x399 = 21;
	volatile uint8_t x400 = 1U;
	int64_t t91 = 13962411LL;

	t91 = (x397%((x398^x399)+x400));

	if (t91 != 92422LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x401 = -1;
	static int8_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	uint16_t x404 = 39U;
	volatile uint64_t t92 = 1395749967LLU;

	t92 = (x401%((x402^x403)+x404));

	if (t92 != 15LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x405 = UINT8_MAX;
	static int64_t x406 = -1LL;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -1;

	t93 = (x405%((x406^x407)+x408));

	if (t93 != 255LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x409 = 0;
	int64_t x410 = -165903LL;
	static uint64_t x411 = UINT64_MAX;
	static int32_t x412 = INT32_MIN;
	volatile uint64_t t94 = 360840521759894LLU;

	t94 = (x409%((x410^x411)+x412));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x413 = INT8_MIN;
	static int16_t x414 = -6;
	static int64_t x415 = -1LL;
	volatile uint8_t x416 = 76U;

	t95 = (x413%((x414^x415)+x416));

	if (t95 != -47LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = -1;
	uint32_t x419 = 9204U;
	volatile uint32_t x420 = UINT32_MAX;
	uint64_t t96 = 43035481LLU;

	t96 = (x417%((x418^x419)+x420));

	if (t96 != 84750435LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x421 = -62;
	int64_t x422 = INT64_MAX;
	int8_t x423 = -1;
	int16_t x424 = 403;
	volatile int64_t t97 = 2LL;

	t97 = (x421%((x422^x423)+x424));

	if (t97 != -62LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x425 = 1960;
	uint16_t x426 = 127U;
	static int16_t x427 = -219;
	int8_t x428 = INT8_MIN;
	int32_t t98 = 11996948;

	t98 = (x425%((x426^x427)+x428));

	if (t98 != 196) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x429 = 5U;
	int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = UINT64_MAX;
	uint64_t t99 = 7300000262595289837LLU;

	t99 = (x429%((x430^x431)+x432));

	if (t99 != 5LLU) { NG(); } else { ; }
	
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

