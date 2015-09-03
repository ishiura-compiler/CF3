#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 85922134;
int64_t x15 = -1LL;
int64_t t3 = -609LL;
static int32_t x18 = INT32_MIN;
int64_t x19 = -1LL;
int64_t x29 = -520547391LL;
volatile uint64_t x31 = 13152153LLU;
int64_t x33 = 309891143LL;
volatile int8_t x41 = -1;
static int32_t x45 = -162461981;
int64_t x64 = INT64_MIN;
static int64_t x66 = -64846LL;
static int64_t t12 = -899635523784LL;
int8_t x74 = INT8_MIN;
int8_t x78 = -39;
static int32_t x80 = 2058273;
uint64_t x81 = 5383286925LLU;
int16_t x83 = 22;
int8_t x84 = INT8_MAX;
uint8_t x91 = 1U;
int64_t x95 = INT64_MAX;
static volatile int32_t x97 = 133;
int16_t x99 = INT16_MIN;
int64_t x103 = 2153LL;
volatile uint8_t x104 = 6U;
uint64_t x107 = 1LLU;
volatile int32_t x108 = INT32_MIN;
int16_t x111 = -362;
volatile int8_t x118 = INT8_MAX;
uint8_t x119 = 87U;
volatile int8_t x125 = INT8_MAX;
int64_t t25 = -192LL;
int16_t x134 = -1;
volatile uint32_t t27 = UINT32_MAX;
int8_t x139 = -1;
static uint32_t x143 = 63U;
int16_t x148 = INT16_MIN;
int8_t x149 = -38;
int8_t x154 = 38;
static int8_t x156 = INT8_MAX;
volatile int32_t t32 = 1700;
int8_t x167 = INT8_MAX;
uint8_t x178 = 20U;
uint64_t t37 = 474LLU;
static int16_t x181 = 0;
volatile uint64_t x183 = UINT64_MAX;
uint64_t x185 = 128648473238297225LLU;
volatile uint64_t x189 = UINT64_MAX;
static uint32_t x191 = 0U;
int16_t x193 = INT16_MAX;
static int64_t x197 = INT64_MIN;
static int64_t t42 = 1683LL;
volatile int64_t t43 = 2266824399513694LL;
int8_t x218 = INT8_MAX;
uint8_t x236 = UINT8_MAX;
uint16_t x246 = 12U;
int8_t x251 = INT8_MIN;
uint32_t x258 = 1740866709U;
volatile int16_t x259 = 1;
volatile int64_t t55 = -20392339634LL;
int32_t x270 = 884516;
uint64_t x280 = UINT64_MAX;
volatile uint64_t t59 = 427289629LLU;
uint32_t x286 = 101U;
int32_t x296 = -33192;
int64_t t63 = 60LL;
uint64_t t65 = 141351451333017LLU;
int64_t x329 = INT64_MIN;
uint8_t x337 = 1U;
int8_t x338 = INT8_MIN;
int16_t x343 = 0;
int64_t x357 = INT64_MIN;
volatile int64_t t73 = -31464146390LL;
int16_t x364 = 5;
int32_t x370 = -4160;
static int8_t x384 = INT8_MIN;
int32_t x391 = 1;
volatile uint64_t x392 = UINT64_MAX;
volatile int8_t x394 = INT8_MIN;
uint32_t x395 = UINT32_MAX;
uint16_t x399 = 5U;
int32_t x402 = 0;
uint64_t x403 = 3595671057868142LLU;
uint32_t x409 = 6U;
uint8_t x412 = UINT8_MAX;
volatile uint32_t x414 = 89U;
int8_t x416 = -1;
uint8_t x422 = 6U;
int32_t x423 = INT32_MAX;
int32_t x424 = INT32_MIN;
int8_t x430 = INT8_MAX;
volatile int16_t x431 = 453;
uint32_t x432 = UINT32_MAX;
int64_t t90 = -47777LL;
uint32_t x445 = 190792U;
uint32_t x454 = 25877U;
static volatile uint8_t x456 = 13U;
int32_t x458 = -1;
uint32_t x459 = 3412385U;
int8_t x460 = INT8_MIN;
static int8_t x463 = INT8_MIN;
static int8_t x464 = INT8_MIN;
static volatile uint8_t x467 = UINT8_MAX;
volatile uint64_t t96 = 125599LLU;
static int32_t x476 = INT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = INT8_MIN;
	static volatile int16_t x3 = INT16_MIN;
	int64_t x4 = 3783625LL;
	int64_t t0 = 1LL;

	t0 = ((x1%(x2-x3))&x4);

	if (t0 != 73LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint16_t x6 = 265U;
	uint16_t x7 = 322U;
	static int16_t x8 = INT16_MIN;

	t1 = ((x5%(x6-x7))&x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	static int64_t x11 = INT64_MIN;
	uint32_t x12 = UINT32_MAX;
	volatile int64_t t2 = 50828061212LL;

	t2 = ((x9%(x10-x11))&x12);

	if (t2 != 4294934528LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile uint16_t x14 = 17U;
	int8_t x16 = -6;

	t3 = ((x13%(x14-x15))&x16);

	if (t3 != -8LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 388369;
	static volatile int32_t x20 = INT32_MIN;
	int64_t t4 = -9LL;

	t4 = ((x17%(x18-x19))&x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = -1;
	int64_t x26 = INT64_MIN;
	int32_t x27 = -6;
	volatile int16_t x28 = -337;
	volatile int64_t t5 = -17944675LL;

	t5 = ((x25%(x26-x27))&x28);

	if (t5 != -337LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = UINT8_MAX;
	int64_t x32 = INT64_MAX;
	uint64_t t6 = 51030733996LLU;

	t6 = ((x29%(x30-x31))&x32);

	if (t6 != 9223372036334228417LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x34 = INT16_MIN;
	int32_t x35 = 23198347;
	static int64_t x36 = 20584586290898562LL;
	int64_t t7 = -4115414728LL;

	t7 = ((x33%(x34-x35))&x36);

	if (t7 != 3147264LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x42 = UINT8_MAX;
	int8_t x43 = INT8_MIN;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t8 = -171148638;

	t8 = ((x41%(x42-x43))&x44);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	static int8_t x48 = -1;
	volatile int64_t t9 = 2878646977984LL;

	t9 = ((x45%(x46-x47))&x48);

	if (t9 != -25LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 5U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -1;
	int32_t x52 = 1;
	volatile int32_t t10 = 89;

	t10 = ((x49%(x50-x51))&x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 24U;
	volatile uint32_t x62 = 2120U;
	int16_t x63 = INT16_MIN;
	volatile int64_t t11 = -3959LL;

	t11 = ((x61%(x62-x63))&x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -4248380117395LL;
	int8_t x67 = -1;
	volatile int16_t x68 = -1;

	t12 = ((x65%(x66-x67))&x68);

	if (t12 != -25615LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x69 = 513128;
	uint64_t x70 = 362329045592247LLU;
	static uint8_t x71 = 38U;
	int8_t x72 = 0;
	uint64_t t13 = 64583152465060LLU;

	t13 = ((x69%(x70-x71))&x72);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x73 = -1;
	static int8_t x75 = -13;
	int64_t x76 = 0LL;
	static int64_t t14 = -3121969730300716LL;

	t14 = ((x73%(x74-x75))&x76);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -1;
	volatile uint16_t x79 = UINT16_MAX;
	int32_t t15 = 32053;

	t15 = ((x77%(x78-x79))&x80);

	if (t15 != 2058273) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x82 = -2170326LL;
	uint64_t t16 = 11284388998355LLU;

	t16 = ((x81%(x82-x83))&x84);

	if (t16 != 13LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = INT32_MAX;
	int8_t x90 = -15;
	int8_t x92 = 2;
	static volatile int32_t t17 = -42992;

	t17 = ((x89%(x90-x91))&x92);

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x93 = INT32_MIN;
	int64_t x94 = -1LL;
	int8_t x96 = 45;
	volatile int64_t t18 = 218954962415LL;

	t18 = ((x93%(x94-x95))&x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x98 = -297;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t19 = 134562657855822916LL;

	t19 = ((x97%(x98-x99))&x100);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -1;
	int64_t x102 = INT64_MAX;
	volatile int64_t t20 = 990LL;

	t20 = ((x101%(x102-x103))&x104);

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x105 = 0U;
	volatile int64_t x106 = INT64_MIN;
	static uint64_t t21 = 6981959151283068LLU;

	t21 = ((x105%(x106-x107))&x108);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 11U;
	volatile uint16_t x110 = 1369U;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t22 = -11545713;

	t22 = ((x109%(x110-x111))&x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x117 = INT8_MAX;
	volatile int32_t x120 = 3277257;
	volatile int32_t t23 = 2;

	t23 = ((x117%(x118-x119))&x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = -1;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -169LL;
	static int8_t x124 = INT8_MIN;
	int64_t t24 = 31LL;

	t24 = ((x121%(x122-x123))&x124);

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x126 = INT64_MIN;
	static int16_t x127 = -483;
	volatile uint8_t x128 = 125U;

	t25 = ((x125%(x126-x127))&x128);

	if (t25 != 125LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = 337;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	int8_t x132 = 3;
	volatile int64_t t26 = 52LL;

	t26 = ((x129%(x130-x131))&x132);

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x133 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;

	t27 = ((x133%(x134-x135))&x136);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = 5650U;
	uint8_t x140 = 23U;
	static volatile int32_t t28 = -12811518;

	t28 = ((x137%(x138-x139))&x140);

	if (t28 != 23) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MAX;
	uint16_t x144 = 5661U;
	static int64_t t29 = -1LL;

	t29 = ((x141%(x142-x143))&x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = -1;
	int64_t x146 = -3392558770708116LL;
	static int16_t x147 = INT16_MIN;
	static int64_t t30 = 33235LL;

	t30 = ((x145%(x146-x147))&x148);

	if (t30 != -32768LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x150 = UINT32_MAX;
	static uint8_t x151 = 2U;
	int64_t x152 = -63539519692LL;
	volatile int64_t t31 = -2167537LL;

	t31 = ((x149%(x150-x151))&x152);

	if (t31 != 884989712LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = UINT8_MAX;
	uint16_t x155 = 36U;

	t32 = ((x153%(x154-x155))&x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -331192LL;
	int32_t x158 = INT32_MAX;
	uint8_t x159 = 1U;
	uint64_t x160 = 4188561404468LLU;
	uint64_t t33 = 85LLU;

	t33 = ((x157%(x158-x159))&x160);

	if (t33 != 4188561142272LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = 22U;
	int32_t x166 = -1;
	int16_t x168 = INT16_MIN;
	volatile int32_t t34 = 25;

	t34 = ((x165%(x166-x167))&x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x169 = UINT64_MAX;
	int64_t x170 = 318081998479735260LL;
	static int64_t x171 = -1LL;
	uint32_t x172 = UINT32_MAX;
	static uint64_t t35 = 15521487101263LLU;

	t35 = ((x169%(x170-x171))&x172);

	if (t35 != 3768753610LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = 29849063327982265LLU;
	volatile int16_t x175 = 15;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t36 = 14338197236044724LLU;

	t36 = ((x173%(x174-x175))&x176);

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int64_t x179 = -622281991122LL;
	uint64_t x180 = 205LLU;

	t37 = ((x177%(x178-x179))&x180);

	if (t37 != 205LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x182 = 1067501969928546LLU;
	int16_t x184 = INT16_MIN;
	uint64_t t38 = 2LLU;

	t38 = ((x181%(x182-x183))&x184);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x186 = 0U;
	int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MIN;
	uint64_t t39 = 958LLU;

	t39 = ((x185%(x186-x187))&x188);

	if (t39 != 128648473238297216LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x190 = 1U;
	int64_t x192 = INT64_MIN;
	uint64_t t40 = 1377293854555727173LLU;

	t40 = ((x189%(x190-x191))&x192);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x194 = -102421374921390438LL;
	int8_t x195 = 1;
	volatile int8_t x196 = INT8_MAX;
	int64_t t41 = 3282151913791LL;

	t41 = ((x193%(x194-x195))&x196);

	if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x198 = 1;
	uint8_t x199 = 5U;
	uint8_t x200 = 4U;

	t42 = ((x197%(x198-x199))&x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int64_t x205 = -1LL;
	uint32_t x206 = 48U;
	static int32_t x207 = 25;
	volatile int64_t x208 = -20507391375LL;

	t43 = ((x205%(x206-x207))&x208);

	if (t43 != -20507391375LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = 113043LLU;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	int8_t x212 = 32;
	volatile uint64_t t44 = 133951476000LLU;

	t44 = ((x209%(x210-x211))&x212);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x213 = -1LL;
	static volatile int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 166015517396LLU;
	volatile int8_t x216 = INT8_MIN;
	volatile uint64_t t45 = 4268296130014459159LLU;

	t45 = ((x213%(x214-x215))&x216);

	if (t45 != 166015550080LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x217 = -1;
	volatile uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = ((x217%(x218-x219))&x220);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -5959700282LL;
	uint8_t x222 = UINT8_MAX;
	static uint8_t x223 = 0U;
	int64_t x224 = -189279696LL;
	int64_t t47 = 5107093086LL;

	t47 = ((x221%(x222-x223))&x224);

	if (t47 != -189279728LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = UINT64_MAX;
	int8_t x226 = INT8_MAX;
	uint16_t x227 = 3U;
	static int16_t x228 = 130;
	volatile uint64_t t48 = 63236LLU;

	t48 = ((x225%(x226-x227))&x228);

	if (t48 != 2LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 905U;
	static int16_t x230 = 3914;
	static uint32_t x231 = UINT32_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint32_t t49 = 15344U;

	t49 = ((x229%(x230-x231))&x232);

	if (t49 != 905U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MIN;
	int64_t x234 = -1LL;
	uint8_t x235 = UINT8_MAX;
	volatile int64_t t50 = 1LL;

	t50 = ((x233%(x234-x235))&x236);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 170282354U;
	int16_t x239 = -7249;
	static uint8_t x240 = UINT8_MAX;
	uint32_t t51 = 817023U;

	t51 = ((x237%(x238-x239))&x240);

	if (t51 != 255U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 17U;
	int8_t x242 = -9;
	static int32_t x243 = INT32_MIN;
	static uint16_t x244 = UINT16_MAX;
	int32_t t52 = 2;

	t52 = ((x241%(x242-x243))&x244);

	if (t52 != 17) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x245 = 230;
	int8_t x247 = -1;
	static volatile uint16_t x248 = UINT16_MAX;
	int32_t t53 = 1254;

	t53 = ((x245%(x246-x247))&x248);

	if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x249 = -3601035;
	static int32_t x250 = -191156;
	static volatile int16_t x252 = INT16_MAX;
	volatile int32_t t54 = 13299;

	t54 = ((x249%(x250-x251))&x252);

	if (t54 != 1309) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	int64_t x260 = 83LL;

	t55 = ((x257%(x258-x259))&x260);

	if (t55 != 80LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x265 = 0;
	static int16_t x266 = -17;
	int16_t x267 = INT16_MIN;
	uint32_t x268 = 11U;
	volatile uint32_t t56 = 1943U;

	t56 = ((x265%(x266-x267))&x268);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = INT16_MAX;
	uint16_t x271 = 2179U;
	int64_t x272 = INT64_MIN;
	volatile int64_t t57 = -13632LL;

	t57 = ((x269%(x270-x271))&x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x273 = 174262746U;
	int64_t x274 = INT64_MIN;
	int64_t x275 = -1LL;
	int64_t x276 = -2158554LL;
	int64_t t58 = -584577616299717LL;

	t58 = ((x273%(x274-x275))&x276);

	if (t58 != 172163074LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MAX;
	volatile int32_t x278 = 43450;
	volatile int32_t x279 = INT32_MAX;

	t59 = ((x277%(x278-x279))&x280);

	if (t59 != 1628538604LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x281 = -1;
	volatile int8_t x282 = INT8_MAX;
	volatile int8_t x283 = -32;
	int64_t x284 = INT64_MIN;
	volatile int64_t t60 = INT64_MIN;

	t60 = ((x281%(x282-x283))&x284);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x285 = 7U;
	int64_t x287 = 498243255194135452LL;
	volatile int8_t x288 = INT8_MAX;
	int64_t t61 = -2570957597549LL;

	t61 = ((x285%(x286-x287))&x288);

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x289 = -236;
	volatile int32_t x290 = -1;
	volatile uint32_t x291 = 2886197U;
	int32_t x292 = INT32_MAX;
	volatile uint32_t t62 = 14118073U;

	t62 = ((x289%(x290-x291))&x292);

	if (t62 != 2885962U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x293 = -1LL;
	static volatile int16_t x294 = -47;
	int16_t x295 = INT16_MAX;

	t63 = ((x293%(x294-x295))&x296);

	if (t63 != -33192LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	int16_t x299 = INT16_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t64 = -117880;

	t64 = ((x297%(x298-x299))&x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x301 = 24U;
	int64_t x302 = -1LL;
	uint64_t x303 = 438045751901634089LLU;
	static int16_t x304 = 1;

	t65 = ((x301%(x302-x303))&x304);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = -1;
	uint8_t x306 = 1U;
	static int16_t x307 = -1;
	static volatile int8_t x308 = 5;
	static int32_t t66 = 775;

	t66 = ((x305%(x306-x307))&x308);

	if (t66 != 5) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x317 = 5;
	int64_t x318 = -1LL;
	static uint16_t x319 = 1U;
	volatile int8_t x320 = -1;
	volatile int64_t t67 = 5LL;

	t67 = ((x317%(x318-x319))&x320);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x321 = 2U;
	volatile int32_t x322 = -120897100;
	static uint16_t x323 = 3991U;
	static int64_t x324 = 14512365833LL;
	volatile int64_t t68 = -6329903LL;

	t68 = ((x321%(x322-x323))&x324);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 8668973247110817LLU;
	int16_t x327 = 0;
	static int16_t x328 = INT16_MIN;
	uint64_t t69 = 443LLU;

	t69 = ((x325%(x326-x327))&x328);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x330 = UINT16_MAX;
	uint16_t x331 = 4531U;
	int32_t x332 = 11418;
	volatile int64_t t70 = -73531801448124LL;

	t70 = ((x329%(x330-x331))&x332);

	if (t70 != 8200LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x339 = 2U;
	volatile uint64_t x340 = UINT64_MAX;
	uint64_t t71 = 1827827195067653LLU;

	t71 = ((x337%(x338-x339))&x340);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = UINT16_MAX;
	static volatile uint64_t x344 = 29124LLU;
	volatile uint64_t t72 = 4LLU;

	t72 = ((x341%(x342-x343))&x344);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x358 = 2929LL;
	int16_t x359 = -36;
	uint8_t x360 = 126U;

	t73 = ((x357%(x358-x359))&x360);

	if (t73 != 76LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x361 = UINT32_MAX;
	int16_t x362 = 1474;
	int64_t x363 = INT64_MAX;
	int64_t t74 = 3LL;

	t74 = ((x361%(x362-x363))&x364);

	if (t74 != 5LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = 1;
	uint64_t x366 = 365LLU;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MIN;
	uint64_t t75 = 2378LLU;

	t75 = ((x365%(x366-x367))&x368);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = INT8_MAX;
	uint32_t x371 = UINT32_MAX;
	int16_t x372 = -1;
	uint32_t t76 = 238688U;

	t76 = ((x369%(x370-x371))&x372);

	if (t76 != 127U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x373 = UINT64_MAX;
	volatile int32_t x374 = -1;
	int16_t x375 = INT16_MAX;
	uint16_t x376 = 6U;
	uint64_t t77 = 3248902864706916385LLU;

	t77 = ((x373%(x374-x375))&x376);

	if (t77 != 6LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x377 = 36U;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = INT8_MIN;
	uint16_t x380 = 18U;
	volatile int32_t t78 = 1644;

	t78 = ((x377%(x378-x379))&x380);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x381 = 7U;
	uint16_t x382 = UINT16_MAX;
	int32_t x383 = -1;
	int32_t t79 = 7858;

	t79 = ((x381%(x382-x383))&x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x389 = INT64_MAX;
	static int32_t x390 = -95172115;
	volatile uint64_t t80 = 118LLU;

	t80 = ((x389%(x390-x391))&x392);

	if (t80 != 16991943LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x396 = 93293728411LLU;
	volatile uint64_t t81 = 985075673LLU;

	t81 = ((x393%(x394-x395))&x396);

	if (t81 != 2147483648LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x397 = 5;
	int8_t x398 = INT8_MIN;
	int8_t x400 = -1;
	int32_t t82 = 1505;

	t82 = ((x397%(x398-x399))&x400);

	if (t82 != 5) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x401 = UINT64_MAX;
	static int64_t x404 = INT64_MIN;
	uint64_t t83 = 8242254824LLU;

	t83 = ((x401%(x402-x403))&x404);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x405 = UINT32_MAX;
	uint8_t x406 = UINT8_MAX;
	int8_t x407 = -1;
	static int32_t x408 = INT32_MIN;
	uint32_t t84 = 3342U;

	t84 = ((x405%(x406-x407))&x408);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x410 = 1846U;
	volatile int32_t x411 = -1;
	uint32_t t85 = 69U;

	t85 = ((x409%(x410-x411))&x412);

	if (t85 != 6U) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x413 = -1;
	static volatile uint32_t x415 = 408U;
	volatile uint32_t t86 = 230U;

	t86 = ((x413%(x414-x415))&x416);

	if (t86 != 318U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x421 = INT8_MAX;
	static int32_t t87 = -28969187;

	t87 = ((x421%(x422-x423))&x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x425 = -1;
	static volatile uint32_t x426 = 754021767U;
	int32_t x427 = INT32_MAX;
	static int8_t x428 = INT8_MIN;
	uint32_t t88 = 17996U;

	t88 = ((x425%(x426-x427))&x428);

	if (t88 != 1393461760U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x429 = 20921U;
	static volatile uint32_t t89 = 2031593613U;

	t89 = ((x429%(x430-x431))&x432);

	if (t89 != 20921U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x433 = INT64_MAX;
	int32_t x434 = -1;
	uint8_t x435 = UINT8_MAX;
	volatile uint16_t x436 = UINT16_MAX;

	t90 = ((x433%(x434-x435))&x436);

	if (t90 != 255LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x437 = INT64_MIN;
	int16_t x438 = 0;
	volatile int16_t x439 = -323;
	int64_t x440 = INT64_MIN;
	int64_t t91 = INT64_MIN;

	t91 = ((x437%(x438-x439))&x440);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x446 = 189119200;
	static int64_t x447 = INT64_MAX;
	static volatile uint32_t x448 = 26809U;
	volatile int64_t t92 = 882977LL;

	t92 = ((x445%(x446-x447))&x448);

	if (t92 != 26632LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MAX;
	static uint32_t x455 = 372643U;
	uint32_t t93 = 1882904U;

	t93 = ((x453%(x454-x455))&x456);

	if (t93 != 13U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x457 = UINT8_MAX;
	volatile uint32_t t94 = 1910221U;

	t94 = ((x457%(x458-x459))&x460);

	if (t94 != 128U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x461 = 337U;
	static volatile uint64_t x462 = UINT64_MAX;
	volatile uint64_t t95 = 4536551620369336LLU;

	t95 = ((x461%(x462-x463))&x464);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x465 = 73;
	uint64_t x466 = 68653640LLU;
	uint32_t x468 = 1849392U;

	t96 = ((x465%(x466-x467))&x468);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x469 = 183462LL;
	volatile int16_t x470 = -24;
	int8_t x471 = -1;
	int16_t x472 = 1;
	volatile int64_t t97 = 244676422575881157LL;

	t97 = ((x469%(x470-x471))&x472);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x473 = INT64_MIN;
	uint64_t x474 = 8970171898934925467LLU;
	int32_t x475 = INT32_MIN;
	uint64_t t98 = 1297028046531638LLU;

	t98 = ((x473%(x474-x475))&x476);

	if (t98 != 365619045LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = -108097;
	int16_t x478 = INT16_MIN;
	volatile uint32_t x479 = 1U;
	uint64_t x480 = 1LLU;
	uint64_t t99 = 773447629267798LLU;

	t99 = ((x477%(x478-x479))&x480);

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

