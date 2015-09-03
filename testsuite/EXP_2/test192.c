#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x1 = 42U;
int32_t t0 = 91;
volatile int16_t x9 = INT16_MAX;
volatile uint32_t x12 = 0U;
volatile uint8_t x14 = UINT8_MAX;
static uint16_t x18 = 28083U;
volatile uint32_t x22 = 0U;
uint32_t x24 = 4U;
int16_t x43 = INT16_MIN;
static volatile int32_t t5 = -652;
uint32_t x71 = 2887U;
int32_t t8 = 56;
uint16_t x88 = 4728U;
int64_t x89 = -3673LL;
volatile uint32_t x90 = 27305761U;
static int64_t x92 = INT64_MAX;
volatile uint8_t x93 = 13U;
uint8_t x96 = UINT8_MAX;
volatile int32_t t14 = 108;
static uint32_t x97 = 231847U;
volatile int32_t t15 = -16768706;
static uint16_t x103 = 26U;
uint32_t x117 = 87U;
int64_t x127 = 660770LL;
static volatile int32_t t19 = -11472;
static int64_t x129 = INT64_MIN;
uint8_t x131 = UINT8_MAX;
static volatile int32_t t21 = 4673785;
volatile uint32_t x138 = 447119880U;
int8_t x146 = -1;
int16_t x148 = -9770;
int8_t x149 = INT8_MIN;
int64_t x159 = 57469872829LL;
static uint16_t x173 = UINT16_MAX;
int64_t x174 = INT64_MIN;
volatile int32_t t31 = -29640;
int8_t x184 = INT8_MIN;
int16_t x187 = INT16_MAX;
uint8_t x188 = 31U;
int32_t x201 = INT32_MIN;
static uint16_t x202 = 23103U;
int16_t x211 = 0;
static int64_t x222 = INT64_MIN;
static uint32_t x224 = 14805323U;
static int16_t x226 = 126;
static int8_t x231 = INT8_MIN;
volatile int32_t t39 = -7164;
int8_t x235 = -1;
int32_t x236 = INT32_MIN;
int8_t x243 = -10;
volatile int32_t t42 = 411024819;
volatile uint64_t x247 = 176LLU;
static uint64_t x248 = UINT64_MAX;
volatile int32_t t45 = -52793323;
int16_t x279 = -14395;
uint8_t x282 = 3U;
static int32_t x285 = -3169785;
int64_t x289 = 5039757005877LL;
volatile int16_t x292 = -1;
int32_t t53 = 101;
static volatile int32_t t54 = -15387;
int64_t x319 = INT64_MIN;
uint32_t x320 = UINT32_MAX;
volatile int64_t x322 = -1LL;
uint32_t x324 = 22164920U;
static int32_t t57 = -1;
int16_t x332 = -1;
volatile int32_t t59 = 41;
static int32_t x343 = INT32_MIN;
int32_t x345 = -1;
uint32_t x347 = 1U;
static volatile int8_t x356 = 61;
volatile uint16_t x358 = 6U;
int64_t x367 = 64992936221328LL;
static volatile uint64_t x370 = 6797728LLU;
int64_t x372 = INT64_MIN;
uint16_t x374 = 22732U;
static uint8_t x376 = 52U;
int64_t x382 = INT64_MAX;
int16_t x383 = 0;
uint8_t x398 = 0U;
int8_t x400 = 20;
volatile int32_t t71 = 1802206;
uint16_t x411 = UINT16_MAX;
int16_t x412 = INT16_MIN;
uint32_t x414 = UINT32_MAX;
volatile int8_t x415 = INT8_MIN;
int32_t x417 = 1837;
volatile int16_t x418 = INT16_MIN;
int32_t x422 = -214972268;
uint8_t x423 = UINT8_MAX;
int32_t t79 = 0;
int64_t x444 = INT64_MIN;
static int16_t x449 = 4997;
int8_t x451 = 1;
int32_t x456 = INT32_MIN;
static volatile int32_t t87 = 179;
uint64_t x481 = UINT64_MAX;
int8_t x482 = INT8_MAX;
volatile int32_t t88 = -52091873;
static volatile int16_t x487 = -1965;
static int64_t x495 = -1LL;
volatile int32_t t91 = -1422116;
int64_t x500 = 422621384246086LL;
int8_t x507 = INT8_MAX;
static int8_t x508 = -1;
volatile int16_t x511 = INT16_MIN;
volatile int64_t x514 = -1LL;
static int32_t x517 = INT32_MIN;
static volatile int32_t x528 = INT32_MIN;
int32_t x529 = -1;
uint8_t x531 = UINT8_MAX;
volatile int16_t x532 = INT16_MIN;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	static int8_t x3 = INT8_MIN;
	int64_t x4 = 44425643993LL;

	t0 = ((x1-(x2-x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x10 = -1;
	static int8_t x11 = -44;
	int32_t t1 = -106245;

	t1 = ((x9-(x10-x11))<=x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	static int32_t x15 = -5;
	volatile uint8_t x16 = UINT8_MAX;
	static volatile int32_t t2 = -467235;

	t2 = ((x13-(x14-x15))<=x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -3135LL;
	int64_t x19 = 285566081912LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 53;

	t3 = ((x17-(x18-x19))<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int16_t x23 = -1;
	volatile int32_t t4 = 277;

	t4 = ((x21-(x22-x23))<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 13;
	static int8_t x42 = -44;
	uint64_t x44 = UINT64_MAX;

	t5 = ((x41-(x42-x43))<=x44);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x45 = INT16_MIN;
	uint8_t x46 = 8U;
	int64_t x47 = 1537973391886826998LL;
	int32_t x48 = -2037936;
	int32_t t6 = 411;

	t6 = ((x45-(x46-x47))<=x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x49 = -1;
	static volatile int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MIN;
	static int8_t x52 = -1;
	volatile int32_t t7 = 136;

	t7 = ((x49-(x50-x51))<=x52);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x69 = 3U;
	int8_t x70 = INT8_MAX;
	uint16_t x72 = 1643U;

	t8 = ((x69-(x70-x71))<=x72);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x73 = 0U;
	volatile uint16_t x74 = 181U;
	int16_t x75 = INT16_MIN;
	int16_t x76 = 1;
	int32_t t9 = 737;

	t9 = ((x73-(x74-x75))<=x76);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x77 = -1;
	int32_t x78 = 1679;
	int16_t x79 = 5;
	uint16_t x80 = 55U;
	volatile int32_t t10 = -1412;

	t10 = ((x77-(x78-x79))<=x80);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = -1;
	volatile int16_t x82 = INT16_MAX;
	static uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	int32_t t11 = -1;

	t11 = ((x81-(x82-x83))<=x84);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = INT64_MIN;
	int16_t x86 = 2;
	int64_t x87 = 6LL;
	int32_t t12 = 30;

	t12 = ((x85-(x86-x87))<=x88);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x91 = 3125411;
	volatile int32_t t13 = 215312562;

	t13 = ((x89-(x90-x91))<=x92);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x94 = INT16_MAX;
	volatile int8_t x95 = INT8_MIN;

	t14 = ((x93-(x94-x95))<=x96);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x98 = 759228190636LLU;
	volatile int16_t x99 = INT16_MIN;
	static int32_t x100 = -1;

	t15 = ((x97-(x98-x99))<=x100);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x101 = 16U;
	static int64_t x102 = -6LL;
	volatile int64_t x104 = INT64_MIN;
	int32_t t16 = 1259;

	t16 = ((x101-(x102-x103))<=x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MIN;
	int32_t x106 = -969088;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -923;
	volatile int32_t t17 = -126330539;

	t17 = ((x105-(x106-x107))<=x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x118 = -1LL;
	uint16_t x119 = UINT16_MAX;
	volatile uint64_t x120 = 747190191LLU;
	static int32_t t18 = -2585560;

	t18 = ((x117-(x118-x119))<=x120);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x125 = 716205U;
	int16_t x126 = INT16_MAX;
	uint8_t x128 = 118U;

	t19 = ((x125-(x126-x127))<=x128);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x130 = -5165;
	int16_t x132 = INT16_MAX;
	volatile int32_t t20 = 57993842;

	t20 = ((x129-(x130-x131))<=x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MAX;
	static uint64_t x135 = 846153412548682141LLU;
	int32_t x136 = INT32_MIN;

	t21 = ((x133-(x134-x135))<=x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x137 = UINT32_MAX;
	static volatile int32_t x139 = INT32_MIN;
	static volatile int8_t x140 = -1;
	volatile int32_t t22 = -994870203;

	t22 = ((x137-(x138-x139))<=x140);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x141 = 149U;
	int32_t x142 = INT32_MIN;
	volatile int16_t x143 = INT16_MIN;
	volatile int32_t x144 = 1;
	volatile int32_t t23 = 109466327;

	t23 = ((x141-(x142-x143))<=x144);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x145 = -4867853939LL;
	int64_t x147 = 24005233318LL;
	int32_t t24 = 25764;

	t24 = ((x145-(x146-x147))<=x148);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x150 = 1U;
	int32_t x151 = 1649;
	int8_t x152 = INT8_MIN;
	static int32_t t25 = -120;

	t25 = ((x149-(x150-x151))<=x152);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = INT8_MIN;
	static volatile uint8_t x154 = 2U;
	int32_t x155 = -1;
	volatile int16_t x156 = INT16_MAX;
	int32_t t26 = 37;

	t26 = ((x153-(x154-x155))<=x156);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x157 = INT8_MIN;
	uint32_t x158 = UINT32_MAX;
	static int16_t x160 = 11496;
	static int32_t t27 = 264;

	t27 = ((x157-(x158-x159))<=x160);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x161 = INT16_MIN;
	static uint16_t x162 = 5707U;
	uint64_t x163 = 107003659464LLU;
	static uint16_t x164 = 6U;
	volatile int32_t t28 = 13780783;

	t28 = ((x161-(x162-x163))<=x164);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = 7;
	int16_t x170 = -1;
	int16_t x171 = -11;
	uint16_t x172 = 27U;
	static int32_t t29 = -172948898;

	t29 = ((x169-(x170-x171))<=x172);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x175 = 127LLU;
	uint8_t x176 = UINT8_MAX;
	static int32_t t30 = 10751;

	t30 = ((x173-(x174-x175))<=x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = -1;
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	uint64_t x180 = UINT64_MAX;

	t31 = ((x177-(x178-x179))<=x180);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = INT32_MIN;
	volatile int32_t x182 = -1;
	int64_t x183 = -1LL;
	int32_t t32 = -13598;

	t32 = ((x181-(x182-x183))<=x184);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x185 = UINT32_MAX;
	static int64_t x186 = 63011056LL;
	volatile int32_t t33 = 146853;

	t33 = ((x185-(x186-x187))<=x188);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = 4;
	static volatile int32_t x190 = INT32_MAX;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -1;
	int32_t t34 = 1;

	t34 = ((x189-(x190-x191))<=x192);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x203 = UINT64_MAX;
	static int8_t x204 = INT8_MIN;
	int32_t t35 = -27;

	t35 = ((x201-(x202-x203))<=x204);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x209 = -406627993683670LL;
	uint16_t x210 = 0U;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t36 = -217;

	t36 = ((x209-(x210-x211))<=x212);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x221 = 3U;
	int64_t x223 = -3330LL;
	volatile int32_t t37 = -990;

	t37 = ((x221-(x222-x223))<=x224);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = 2;
	uint16_t x227 = UINT16_MAX;
	uint16_t x228 = 7219U;
	int32_t t38 = -60;

	t38 = ((x225-(x226-x227))<=x228);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x229 = UINT64_MAX;
	int16_t x230 = -1;
	int32_t x232 = INT32_MAX;

	t39 = ((x229-(x230-x231))<=x232);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x233 = UINT8_MAX;
	static volatile uint16_t x234 = UINT16_MAX;
	static volatile int32_t t40 = 0;

	t40 = ((x233-(x234-x235))<=x236);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = INT16_MIN;
	static int16_t x239 = -5;
	static int32_t x240 = -6962;
	int32_t t41 = -100854887;

	t41 = ((x237-(x238-x239))<=x240);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x241 = -1;
	uint32_t x242 = 994714577U;
	int16_t x244 = INT16_MAX;

	t42 = ((x241-(x242-x243))<=x244);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x245 = -1LL;
	int8_t x246 = INT8_MIN;
	volatile int32_t t43 = -2717;

	t43 = ((x245-(x246-x247))<=x248);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = -3;
	static int16_t x254 = INT16_MIN;
	volatile int16_t x255 = -137;
	volatile int32_t x256 = -12;
	volatile int32_t t44 = 16763952;

	t44 = ((x253-(x254-x255))<=x256);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = 8U;
	static volatile int8_t x258 = -41;
	int64_t x259 = 18438281560165LL;
	int16_t x260 = INT16_MIN;

	t45 = ((x257-(x258-x259))<=x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x269 = 217004327U;
	int8_t x270 = INT8_MIN;
	int32_t x271 = -1;
	static int64_t x272 = INT64_MIN;
	int32_t t46 = 23143496;

	t46 = ((x269-(x270-x271))<=x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x273 = 566280U;
	volatile int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MAX;
	uint8_t x276 = 33U;
	static int32_t t47 = 3899047;

	t47 = ((x273-(x274-x275))<=x276);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x277 = -976776LL;
	volatile int16_t x278 = 5317;
	int64_t x280 = INT64_MAX;
	volatile int32_t t48 = 7;

	t48 = ((x277-(x278-x279))<=x280);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x281 = INT32_MAX;
	int8_t x283 = 1;
	volatile int16_t x284 = INT16_MIN;
	int32_t t49 = -58;

	t49 = ((x281-(x282-x283))<=x284);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x286 = UINT64_MAX;
	uint16_t x287 = 6U;
	int8_t x288 = -1;
	int32_t t50 = 1;

	t50 = ((x285-(x286-x287))<=x288);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x290 = -41876612813LL;
	volatile uint8_t x291 = 47U;
	int32_t t51 = -10;

	t51 = ((x289-(x290-x291))<=x292);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x301 = INT32_MIN;
	static int8_t x302 = 1;
	int64_t x303 = 1594813646596814176LL;
	uint16_t x304 = 36U;
	static int32_t t52 = 246616;

	t52 = ((x301-(x302-x303))<=x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x305 = 1671827698LL;
	uint8_t x306 = UINT8_MAX;
	uint8_t x307 = 0U;
	static int8_t x308 = 1;

	t53 = ((x305-(x306-x307))<=x308);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x309 = 680;
	int8_t x310 = -54;
	volatile uint64_t x311 = 1081LLU;
	uint64_t x312 = UINT64_MAX;

	t54 = ((x309-(x310-x311))<=x312);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x313 = INT16_MAX;
	static uint32_t x314 = 209U;
	static int32_t x315 = -1041;
	uint16_t x316 = 37U;
	volatile int32_t t55 = 3;

	t55 = ((x313-(x314-x315))<=x316);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x317 = 1U;
	int16_t x318 = -51;
	volatile int32_t t56 = -47107;

	t56 = ((x317-(x318-x319))<=x320);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x321 = -1LL;
	static int8_t x323 = -1;

	t57 = ((x321-(x322-x323))<=x324);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile uint32_t x326 = 121867465U;
	volatile uint8_t x327 = UINT8_MAX;
	int8_t x328 = -6;
	int32_t t58 = -1769;

	t58 = ((x325-(x326-x327))<=x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x329 = 625960112714LLU;
	int16_t x330 = INT16_MIN;
	int32_t x331 = 2;

	t59 = ((x329-(x330-x331))<=x332);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -560682520;
	static int64_t x340 = -846307LL;
	int32_t t60 = -1;

	t60 = ((x337-(x338-x339))<=x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x341 = -1;
	static int64_t x342 = -11000LL;
	uint8_t x344 = 49U;
	int32_t t61 = 8;

	t61 = ((x341-(x342-x343))<=x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x346 = 1U;
	int64_t x348 = -1LL;
	volatile int32_t t62 = -27177157;

	t62 = ((x345-(x346-x347))<=x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x354 = 352U;
	static int64_t x355 = -16LL;
	int32_t t63 = -2699;

	t63 = ((x353-(x354-x355))<=x356);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x357 = INT16_MIN;
	volatile int8_t x359 = -1;
	int64_t x360 = INT64_MAX;
	int32_t t64 = 8447986;

	t64 = ((x357-(x358-x359))<=x360);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x361 = 136827U;
	int64_t x362 = INT64_MAX;
	static int64_t x363 = INT64_MAX;
	int8_t x364 = -1;
	int32_t t65 = 3383;

	t65 = ((x361-(x362-x363))<=x364);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = 6;
	int64_t x368 = -1LL;
	static volatile int32_t t66 = -5556;

	t66 = ((x365-(x366-x367))<=x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x369 = 0;
	int8_t x371 = INT8_MIN;
	int32_t t67 = 23;

	t67 = ((x369-(x370-x371))<=x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile int16_t x375 = INT16_MIN;
	int32_t t68 = 6650;

	t68 = ((x373-(x374-x375))<=x376);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = INT8_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t69 = -1194;

	t69 = ((x381-(x382-x383))<=x384);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x393 = -1;
	uint8_t x394 = UINT8_MAX;
	static volatile int64_t x395 = -1LL;
	int64_t x396 = INT64_MIN;
	volatile int32_t t70 = 468579;

	t70 = ((x393-(x394-x395))<=x396);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x397 = INT8_MIN;
	uint32_t x399 = 14U;

	t71 = ((x397-(x398-x399))<=x400);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = -3LL;
	static int32_t x402 = INT32_MIN;
	uint64_t x403 = UINT64_MAX;
	static volatile int64_t x404 = -3LL;
	int32_t t72 = 772882120;

	t72 = ((x401-(x402-x403))<=x404);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x409 = INT16_MAX;
	int64_t x410 = -1LL;
	static int32_t t73 = 13999;

	t73 = ((x409-(x410-x411))<=x412);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x413 = -172LL;
	volatile int64_t x416 = INT64_MIN;
	int32_t t74 = -413384346;

	t74 = ((x413-(x414-x415))<=x416);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x419 = -1;
	int64_t x420 = 59932LL;
	int32_t t75 = 14020;

	t75 = ((x417-(x418-x419))<=x420);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = -61;
	uint8_t x424 = UINT8_MAX;
	volatile int32_t t76 = -137573;

	t76 = ((x421-(x422-x423))<=x424);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x425 = 1;
	volatile int8_t x426 = INT8_MIN;
	int16_t x427 = -6332;
	int64_t x428 = 32773427020825LL;
	int32_t t77 = -66139;

	t77 = ((x425-(x426-x427))<=x428);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x429 = 183U;
	uint32_t x430 = UINT32_MAX;
	uint32_t x431 = 56632805U;
	uint8_t x432 = 9U;
	int32_t t78 = -7386;

	t78 = ((x429-(x430-x431))<=x432);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x437 = INT16_MIN;
	uint64_t x438 = 185795477508LLU;
	int32_t x439 = -1;
	uint16_t x440 = 0U;

	t79 = ((x437-(x438-x439))<=x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x441 = INT32_MIN;
	static int8_t x442 = 7;
	int32_t x443 = INT32_MAX;
	int32_t t80 = -224;

	t80 = ((x441-(x442-x443))<=x444);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x450 = 105;
	int32_t x452 = INT32_MAX;
	int32_t t81 = 89;

	t81 = ((x449-(x450-x451))<=x452);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x453 = -1LL;
	uint8_t x454 = UINT8_MAX;
	volatile uint64_t x455 = 28727576LLU;
	volatile int32_t t82 = -7991;

	t82 = ((x453-(x454-x455))<=x456);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x457 = -1;
	uint8_t x458 = 92U;
	int16_t x459 = INT16_MAX;
	static uint32_t x460 = UINT32_MAX;
	volatile int32_t t83 = -8453350;

	t83 = ((x457-(x458-x459))<=x460);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x461 = 11165460234508388LL;
	int64_t x462 = -5252114812LL;
	int8_t x463 = INT8_MIN;
	volatile int8_t x464 = -1;
	static volatile int32_t t84 = 25205;

	t84 = ((x461-(x462-x463))<=x464);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x465 = INT8_MIN;
	static volatile int32_t x466 = -48;
	static volatile uint16_t x467 = 8015U;
	int32_t x468 = INT32_MIN;
	static volatile int32_t t85 = -1;

	t85 = ((x465-(x466-x467))<=x468);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x469 = 160302543789380LLU;
	int8_t x470 = INT8_MAX;
	int32_t x471 = 234;
	int64_t x472 = 10783143607685LL;
	static int32_t t86 = 14100073;

	t86 = ((x469-(x470-x471))<=x472);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x477 = 7;
	int32_t x478 = INT32_MIN;
	volatile int8_t x479 = INT8_MIN;
	volatile int16_t x480 = INT16_MIN;

	t87 = ((x477-(x478-x479))<=x480);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x483 = 118U;
	static int32_t x484 = 1807;

	t88 = ((x481-(x482-x483))<=x484);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x485 = -1LL;
	static uint16_t x486 = UINT16_MAX;
	uint32_t x488 = UINT32_MAX;
	volatile int32_t t89 = -17466407;

	t89 = ((x485-(x486-x487))<=x488);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x489 = -6;
	int64_t x490 = INT64_MIN;
	int64_t x491 = -31175816214LL;
	int8_t x492 = 1;
	int32_t t90 = 21;

	t90 = ((x489-(x490-x491))<=x492);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x493 = -1;
	int16_t x494 = INT16_MAX;
	uint16_t x496 = UINT16_MAX;

	t91 = ((x493-(x494-x495))<=x496);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MIN;
	uint32_t x498 = UINT32_MAX;
	uint64_t x499 = 1293395LLU;
	volatile int32_t t92 = -48320809;

	t92 = ((x497-(x498-x499))<=x500);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x505 = INT8_MAX;
	static uint32_t x506 = UINT32_MAX;
	int32_t t93 = -5;

	t93 = ((x505-(x506-x507))<=x508);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x509 = 299LLU;
	static uint8_t x510 = 86U;
	static volatile uint64_t x512 = 279688912LLU;
	volatile int32_t t94 = 23047166;

	t94 = ((x509-(x510-x511))<=x512);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x513 = 4LLU;
	int64_t x515 = INT64_MIN;
	static int32_t x516 = 12057872;
	volatile int32_t t95 = 2127;

	t95 = ((x513-(x514-x515))<=x516);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x518 = 8757U;
	volatile uint8_t x519 = 106U;
	volatile int64_t x520 = -1LL;
	static int32_t t96 = -420;

	t96 = ((x517-(x518-x519))<=x520);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x525 = INT16_MIN;
	int16_t x526 = 5953;
	volatile uint32_t x527 = 14951823U;
	static int32_t t97 = -1404170;

	t97 = ((x525-(x526-x527))<=x528);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x530 = -1088;
	volatile int32_t t98 = -23;

	t98 = ((x529-(x530-x531))<=x532);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x537 = UINT8_MAX;
	static uint32_t x538 = 0U;
	static int64_t x539 = -1LL;
	int64_t x540 = INT64_MAX;
	volatile int32_t t99 = 39547;

	t99 = ((x537-(x538-x539))<=x540);

	if (t99 != 1) { NG(); } else { ; }
	
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

