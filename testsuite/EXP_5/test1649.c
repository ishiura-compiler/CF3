#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int32_t x13 = -1;
volatile int32_t t3 = 33537328;
int32_t x28 = 19;
static uint8_t x31 = UINT8_MAX;
static uint16_t x36 = 1U;
int8_t x37 = INT8_MIN;
int8_t x39 = 43;
int16_t x48 = 971;
int32_t t11 = 1;
static volatile int32_t x56 = -7604656;
int64_t t13 = 5930381LL;
static int8_t x57 = INT8_MIN;
int32_t x72 = INT32_MIN;
int32_t x75 = -1;
static volatile int8_t x79 = INT8_MIN;
static volatile int32_t t19 = 59330122;
static int16_t x81 = 3;
int8_t x85 = -1;
int16_t x94 = -1966;
volatile int16_t x96 = 1;
uint32_t x98 = UINT32_MAX;
int16_t x103 = 16;
static volatile int8_t x106 = -1;
static int32_t t26 = -7753675;
volatile int8_t x110 = INT8_MAX;
int64_t x112 = INT64_MIN;
int32_t x120 = INT32_MAX;
volatile int64_t t30 = 491349846388305132LL;
volatile int32_t t33 = 20137;
int16_t x137 = INT16_MIN;
uint32_t x138 = UINT32_MAX;
volatile int32_t t34 = 31285;
uint32_t x144 = 54462U;
int32_t t35 = -10811;
volatile int32_t t36 = 82;
int32_t t37 = 546955;
volatile int32_t x159 = -1;
uint8_t x161 = 7U;
static int32_t t40 = 2645;
int32_t x166 = INT32_MIN;
int32_t x168 = 945576;
int16_t x171 = -348;
volatile int32_t t43 = -1;
volatile uint16_t x181 = 13U;
static volatile int64_t x182 = -5031LL;
int32_t t45 = -177500687;
static volatile int8_t x196 = 0;
static volatile uint16_t x200 = 4148U;
volatile uint64_t x208 = UINT64_MAX;
static int8_t x217 = 0;
uint16_t x222 = UINT16_MAX;
int16_t x223 = -15;
uint32_t x226 = 172626211U;
int32_t x229 = INT32_MIN;
volatile uint64_t x241 = 14505163004LLU;
uint64_t t60 = 43039710035684LLU;
int16_t x248 = INT16_MIN;
volatile int8_t x255 = 27;
static int8_t x256 = -1;
static int32_t t63 = 0;
uint64_t x257 = UINT64_MAX;
volatile uint16_t x258 = UINT16_MAX;
int16_t x261 = INT16_MIN;
uint8_t x264 = UINT8_MAX;
int32_t x269 = -3;
volatile int32_t x274 = INT32_MIN;
int16_t x281 = INT16_MIN;
int32_t x283 = 3261113;
int16_t x286 = INT16_MAX;
static volatile int32_t t71 = -4170369;
static int8_t x290 = -1;
static int64_t x291 = INT64_MIN;
uint64_t x294 = 232LLU;
volatile int8_t x295 = INT8_MIN;
uint64_t x296 = 2LLU;
uint64_t t73 = 84524744LLU;
volatile uint64_t x297 = 12576919874LLU;
static int64_t x304 = 27617255907LL;
uint8_t x310 = UINT8_MAX;
volatile uint8_t x317 = 59U;
int32_t t79 = -899;
volatile uint32_t x322 = 511U;
int8_t x323 = INT8_MAX;
int16_t x324 = INT16_MIN;
int32_t t80 = 75;
int32_t t81 = -366048;
int64_t x329 = INT64_MAX;
int8_t x330 = INT8_MAX;
int64_t x335 = -10457890LL;
static int16_t x342 = -1024;
static int64_t x343 = INT64_MIN;
volatile int64_t x344 = INT64_MIN;
uint16_t x349 = 1U;
volatile int64_t x350 = INT64_MIN;
int32_t t87 = -12141;
volatile uint16_t x356 = 17U;
int8_t x363 = -1;
volatile int32_t t90 = -8;
int16_t x371 = 493;
volatile int32_t x372 = INT32_MAX;
static volatile int32_t x378 = 5467;
int16_t x380 = -11847;
volatile int16_t x381 = -2;
int64_t x382 = 105611148790LL;
int32_t x385 = 99620645;
int8_t x390 = INT8_MIN;
static int32_t x391 = INT32_MIN;
static volatile int32_t t98 = -70622608;
uint8_t x397 = 30U;
static uint64_t x399 = UINT64_MAX;


void f0(void) {
	static volatile int32_t x1 = 298283447;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -1;
	int32_t t0 = 193119199;

	t0 = (x1&((x2<=x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = INT16_MAX;
	int64_t x7 = -1LL;
	int64_t x8 = -1LL;
	static int32_t t1 = 0;

	t1 = (x5&((x6<=x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 39U;
	uint8_t x10 = 122U;
	int64_t x11 = -1LL;
	volatile uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -20554;

	t2 = (x9&((x10<=x11)<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -1;
	static int64_t x15 = -26265211142548LL;
	static int32_t x16 = 66363;

	t3 = (x13&((x14<=x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MIN;
	static int64_t x19 = -1LL;
	uint64_t x20 = UINT64_MAX;
	int32_t t4 = 0;

	t4 = (x17&((x18<=x19)<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int32_t x22 = INT32_MAX;
	volatile uint8_t x23 = 1U;
	int32_t x24 = INT32_MIN;
	int32_t t5 = 3595;

	t5 = (x21&((x22<=x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = -1;
	uint16_t x27 = 383U;
	static int32_t t6 = 2437936;

	t6 = (x25&((x26<=x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 2023002LLU;
	uint64_t x30 = 234LLU;
	volatile int64_t x32 = INT64_MIN;
	static volatile uint64_t t7 = 88175142250065LLU;

	t7 = (x29&((x30<=x31)<=x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = INT64_MIN;
	volatile int64_t t8 = -62276422541LL;

	t8 = (x33&((x34<=x35)<=x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x38 = INT8_MIN;
	uint8_t x40 = 68U;
	static volatile int32_t t9 = 661554;

	t9 = (x37&((x38<=x39)<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = -2;
	static volatile int8_t x43 = -1;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -1;

	t10 = (x41&((x42<=x43)<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3679;
	uint16_t x46 = UINT16_MAX;
	static int8_t x47 = -1;

	t11 = (x45&((x46<=x47)<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = 3090U;
	static int64_t x51 = 489176LL;
	int8_t x52 = 0;
	static volatile int32_t t12 = 13150;

	t12 = (x49&((x50<=x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MIN;
	static int16_t x54 = INT16_MIN;
	int16_t x55 = INT16_MIN;

	t13 = (x53&((x54<=x55)<=x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = -33;
	static int8_t x59 = INT8_MIN;
	uint32_t x60 = 13275803U;
	int32_t t14 = 0;

	t14 = (x57&((x58<=x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 43;
	int32_t x62 = -1;
	static int32_t x63 = 3;
	int64_t x64 = INT64_MIN;
	int32_t t15 = -1830689;

	t15 = (x61&((x62<=x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 11U;
	static volatile int16_t x66 = -1;
	int8_t x67 = 0;
	uint32_t x68 = 3448350U;
	volatile int32_t t16 = 866;

	t16 = (x65&((x66<=x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = 8;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t t17 = -90438;

	t17 = (x69&((x70<=x71)<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -89514842442LL;
	uint64_t x74 = 20028533430LLU;
	static uint32_t x76 = UINT32_MAX;
	int64_t t18 = -850483122LL;

	t18 = (x73&((x74<=x75)<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 31U;
	int8_t x78 = 1;
	uint32_t x80 = 507098137U;

	t19 = (x77&((x78<=x79)<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 86U;
	uint8_t x83 = 0U;
	uint8_t x84 = 0U;
	int32_t t20 = -235259;

	t20 = (x81&((x82<=x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 0LLU;
	volatile uint8_t x87 = 50U;
	uint16_t x88 = 344U;
	volatile int32_t t21 = -1099743;

	t21 = (x85&((x86<=x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 1344774244244LLU;
	static int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 341328175839499793LLU;
	uint64_t t22 = 8549708LLU;

	t22 = (x89&((x90<=x91)<=x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static volatile uint16_t x95 = 27U;
	static volatile int32_t t23 = -1;

	t23 = (x93&((x94<=x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	uint16_t x99 = 3U;
	int32_t x100 = -203243799;
	int32_t t24 = -4466;

	t24 = (x97&((x98<=x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int64_t x102 = INT64_MAX;
	static uint8_t x104 = 5U;
	volatile int64_t t25 = 11705750463355281LL;

	t25 = (x101&((x102<=x103)<=x104));

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -1;
	int32_t x107 = -1;
	static uint32_t x108 = 2983U;

	t26 = (x105&((x106<=x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x109 = 15U;
	int32_t x111 = 5;
	int32_t t27 = -313;

	t27 = (x109&((x110<=x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	uint32_t x114 = 2U;
	int8_t x115 = -5;
	int32_t x116 = 3283;
	uint64_t t28 = 546705914437LLU;

	t28 = (x113&((x114<=x115)<=x116));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = -6;
	static int32_t x118 = -1;
	int32_t x119 = -1;
	static int32_t t29 = -298744816;

	t29 = (x117&((x118<=x119)<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int32_t x122 = 16276346;
	static uint64_t x123 = 26275880LLU;
	static int16_t x124 = INT16_MIN;

	t30 = (x121&((x122<=x123)<=x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	volatile int64_t x126 = INT64_MIN;
	int64_t x127 = -1LL;
	int64_t x128 = INT64_MIN;
	int32_t t31 = 6;

	t31 = (x125&((x126<=x127)<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int32_t x130 = -118;
	int32_t x131 = -1;
	int8_t x132 = 45;
	volatile int64_t t32 = -164LL;

	t32 = (x129&((x130<=x131)<=x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int8_t x134 = INT8_MAX;
	static int64_t x135 = -1828469121LL;
	volatile uint16_t x136 = 12U;

	t33 = (x133&((x134<=x135)<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x139 = INT32_MAX;
	uint8_t x140 = 93U;

	t34 = (x137&((x138<=x139)<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 118494511968418778LLU;
	int32_t x143 = INT32_MIN;

	t35 = (x141&((x142<=x143)<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -1LL;
	static uint16_t x148 = UINT16_MAX;

	t36 = (x145&((x146<=x147)<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	volatile int16_t x150 = INT16_MAX;
	int64_t x151 = 79LL;
	uint32_t x152 = 230U;

	t37 = (x149&((x150<=x151)<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	static int16_t x154 = INT16_MIN;
	int16_t x155 = 22;
	int8_t x156 = 0;
	static volatile int32_t t38 = -26050;

	t38 = (x153&((x154<=x155)<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 186698;
	int8_t x158 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	volatile int32_t t39 = -298;

	t39 = (x157&((x158<=x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 145522103501222407LLU;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MIN;

	t40 = (x161&((x162<=x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int32_t x167 = -11;
	static volatile int64_t t41 = 7565LL;

	t41 = (x165&((x166<=x167)<=x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 4820728116116722LL;
	int8_t x170 = INT8_MIN;
	volatile int32_t x172 = -1;
	volatile int64_t t42 = 91059095612808LL;

	t42 = (x169&((x170<=x171)<=x172));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1636;
	uint32_t x174 = 0U;
	volatile int32_t x175 = INT32_MAX;
	volatile int8_t x176 = INT8_MAX;

	t43 = (x173&((x174<=x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = INT16_MIN;
	int8_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	uint32_t x180 = 35U;
	int32_t t44 = 685587843;

	t44 = (x177&((x178<=x179)<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x183 = INT64_MAX;
	uint64_t x184 = 25692LLU;

	t45 = (x181&((x182<=x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x185 = INT64_MIN;
	int64_t x186 = -39126805435394704LL;
	int32_t x187 = INT32_MIN;
	static uint64_t x188 = 40458LLU;
	volatile int64_t t46 = 33330LL;

	t46 = (x185&((x186<=x187)<=x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 32595U;
	volatile int32_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	static int8_t x192 = -1;
	int32_t t47 = 14800;

	t47 = (x189&((x190<=x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	int64_t x194 = -14187LL;
	uint32_t x195 = UINT32_MAX;
	volatile int32_t t48 = -338479910;

	t48 = (x193&((x194<=x195)<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -2710539225741715LL;
	static volatile uint32_t x198 = 6539U;
	uint16_t x199 = 1935U;
	int64_t t49 = 30LL;

	t49 = (x197&((x198<=x199)<=x200));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = -1LL;
	int64_t x202 = -3LL;
	static int16_t x203 = INT16_MAX;
	volatile int8_t x204 = 9;
	static volatile int64_t t50 = 6588LL;

	t50 = (x201&((x202<=x203)<=x204));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	uint64_t x206 = UINT64_MAX;
	int32_t x207 = INT32_MIN;
	static volatile int64_t t51 = -18LL;

	t51 = (x205&((x206<=x207)<=x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = 114404LLU;
	uint8_t x212 = 10U;
	int32_t t52 = 14337979;

	t52 = (x209&((x210<=x211)<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	static int8_t x216 = -1;
	volatile int32_t t53 = -452495817;

	t53 = (x213&((x214<=x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = INT64_MIN;
	static int64_t x219 = 7544LL;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 24896014;

	t54 = (x217&((x218<=x219)<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x221 = 2205835528032601916LLU;
	uint8_t x224 = 21U;
	uint64_t t55 = 224LLU;

	t55 = (x221&((x222<=x223)<=x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x227 = -54;
	uint64_t x228 = 320351941786438LLU;
	static int32_t t56 = 32;

	t56 = (x225&((x226<=x227)<=x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MAX;
	uint64_t x231 = 2614486127069LLU;
	volatile int64_t x232 = -1LL;
	int32_t t57 = 59034;

	t57 = (x229&((x230<=x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = 859426U;
	uint16_t x235 = UINT16_MAX;
	int32_t x236 = INT32_MIN;
	static int32_t t58 = 930;

	t58 = (x233&((x234<=x235)<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = INT32_MIN;
	volatile uint16_t x239 = 767U;
	int64_t x240 = INT64_MIN;
	static int64_t t59 = -3609160155303288LL;

	t59 = (x237&((x238<=x239)<=x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x242 = UINT32_MAX;
	int16_t x243 = -1;
	uint8_t x244 = 29U;

	t60 = (x241&((x242<=x243)<=x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 0U;
	volatile int8_t x246 = -1;
	int32_t x247 = INT32_MIN;
	int32_t t61 = -13338;

	t61 = (x245&((x246<=x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -77836235;
	static uint64_t x250 = 1914120401898LLU;
	int8_t x251 = 3;
	int8_t x252 = 0;
	int32_t t62 = 82;

	t62 = (x249&((x250<=x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 0;
	static int32_t x254 = INT32_MIN;

	t63 = (x253&((x254<=x255)<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x259 = INT64_MIN;
	static int16_t x260 = 1684;
	static uint64_t t64 = 4462500519215563LLU;

	t64 = (x257&((x258<=x259)<=x260));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x262 = INT32_MIN;
	int32_t x263 = INT32_MAX;
	volatile int32_t t65 = 81;

	t65 = (x261&((x262<=x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	int64_t x266 = INT64_MIN;
	int64_t x267 = 9LL;
	static int8_t x268 = -1;
	volatile int64_t t66 = -92098634188866LL;

	t66 = (x265&((x266<=x267)<=x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = INT32_MIN;
	int16_t x271 = -1;
	int64_t x272 = 92158581858LL;
	int32_t t67 = 19;

	t67 = (x269&((x270<=x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = -1;
	int32_t x275 = INT32_MIN;
	volatile int8_t x276 = -1;
	static volatile int32_t t68 = -2735651;

	t68 = (x273&((x274<=x275)<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int8_t x278 = INT8_MIN;
	volatile int64_t x279 = INT64_MAX;
	volatile int32_t x280 = -199643383;
	static volatile int32_t t69 = 1;

	t69 = (x277&((x278<=x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int8_t x284 = INT8_MIN;
	static int32_t t70 = 39801773;

	t70 = (x281&((x282<=x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int8_t x287 = INT8_MAX;
	static int64_t x288 = INT64_MIN;

	t71 = (x285&((x286<=x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int32_t x292 = -40;
	static volatile int32_t t72 = -10667;

	t72 = (x289&((x290<=x291)<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;

	t73 = (x293&((x294<=x295)<=x296));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MIN;
	static int32_t x299 = INT32_MAX;
	int32_t x300 = INT32_MAX;
	volatile uint64_t t74 = 2006522696796LLU;

	t74 = (x297&((x298<=x299)<=x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 10968521;
	volatile uint8_t x302 = 30U;
	int32_t x303 = INT32_MIN;
	int32_t t75 = -2;

	t75 = (x301&((x302<=x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x306 = -30;
	int16_t x307 = -1;
	uint16_t x308 = 28U;
	uint64_t t76 = 3647LLU;

	t76 = (x305&((x306<=x307)<=x308));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x311 = 19541303U;
	static int32_t x312 = -1;
	int32_t t77 = 82705054;

	t77 = (x309&((x310<=x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MIN;
	int64_t x315 = -1LL;
	uint16_t x316 = UINT16_MAX;
	int64_t t78 = -1998075489404995LL;

	t78 = (x313&((x314<=x315)<=x316));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x319 = INT16_MAX;
	int8_t x320 = -1;

	t79 = (x317&((x318<=x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;

	t80 = (x321&((x322<=x323)<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 11;
	static int8_t x326 = -7;
	static int8_t x327 = 58;
	static volatile uint64_t x328 = 2069993754778434LLU;

	t81 = (x325&((x326<=x327)<=x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MAX;
	int64_t t82 = -15LL;

	t82 = (x329&((x330<=x331)<=x332));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	volatile uint32_t x334 = 193266U;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -123481534;

	t83 = (x333&((x334<=x335)<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = 252156U;
	uint16_t x338 = 0U;
	int8_t x339 = INT8_MIN;
	int16_t x340 = -4715;
	static volatile uint32_t t84 = 450U;

	t84 = (x337&((x338<=x339)<=x340));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	volatile int32_t t85 = 0;

	t85 = (x341&((x342<=x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = -1;
	static int64_t x346 = INT64_MAX;
	int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	volatile int32_t t86 = -810391959;

	t86 = (x345&((x346<=x347)<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x351 = -1;
	static uint8_t x352 = 15U;

	t87 = (x349&((x350<=x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 1209U;
	int64_t x354 = -99LL;
	uint8_t x355 = UINT8_MAX;
	int32_t t88 = 60;

	t88 = (x353&((x354<=x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = 224024;
	int64_t x358 = 2634098045804797LL;
	volatile int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MAX;
	int32_t t89 = 27099047;

	t89 = (x357&((x358<=x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 87U;
	int64_t x362 = -2824766867554127355LL;
	static int16_t x364 = INT16_MAX;

	t90 = (x361&((x362<=x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 22;
	int32_t x366 = -4079894;
	int8_t x367 = INT8_MAX;
	static volatile int32_t x368 = INT32_MAX;
	static int32_t t91 = 51;

	t91 = (x365&((x366<=x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	uint16_t x370 = 3480U;
	int32_t t92 = -13211229;

	t92 = (x369&((x370<=x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 371659434569208LLU;
	uint64_t x374 = 1947702882779535684LLU;
	volatile int32_t x375 = INT32_MIN;
	uint16_t x376 = 8162U;
	volatile uint64_t t93 = 339395629040664597LLU;

	t93 = (x373&((x374<=x375)<=x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int8_t x379 = -2;
	uint32_t t94 = 58080892U;

	t94 = (x377&((x378<=x379)<=x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x383 = INT32_MAX;
	static int16_t x384 = INT16_MIN;
	volatile int32_t t95 = 29410;

	t95 = (x381&((x382<=x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x386 = -1;
	uint32_t x387 = 44U;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t96 = -3;

	t96 = (x385&((x386<=x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	volatile int16_t x392 = INT16_MAX;
	int32_t t97 = -150;

	t97 = (x389&((x390<=x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MAX;
	volatile uint16_t x394 = 3U;
	int32_t x395 = INT32_MIN;
	volatile int64_t x396 = INT64_MAX;

	t98 = (x393&((x394<=x395)<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	int8_t x400 = -1;
	volatile int32_t t99 = 62011261;

	t99 = (x397&((x398<=x399)<=x400));

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
