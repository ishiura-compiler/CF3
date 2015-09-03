#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x12 = UINT16_MAX;
volatile int8_t x14 = 1;
volatile int32_t t5 = -413823363;
volatile int8_t x46 = INT8_MIN;
uint8_t x48 = 16U;
int64_t x52 = INT64_MIN;
int32_t x56 = INT32_MAX;
int16_t x62 = -94;
int64_t x82 = -1LL;
int64_t x85 = 105297LL;
static int32_t t18 = 2258;
static int16_t x97 = 1;
uint16_t x99 = 1U;
volatile int64_t x107 = -187578464521276994LL;
int16_t x108 = INT16_MAX;
int32_t t21 = 14035768;
static int32_t x114 = -256;
int8_t x117 = INT8_MIN;
static int8_t x138 = -1;
static volatile int64_t x139 = -1LL;
uint64_t x146 = 7602LLU;
int64_t x154 = -1LL;
uint8_t x160 = 6U;
int8_t x164 = INT8_MIN;
int64_t x165 = 16531514950LL;
int64_t x169 = -4812109660749LL;
int32_t x175 = INT32_MIN;
volatile int8_t x183 = INT8_MIN;
int8_t x203 = -1;
static volatile int32_t t39 = -2;
uint64_t x211 = UINT64_MAX;
int8_t x216 = 22;
uint32_t x218 = 2003472326U;
volatile uint16_t x224 = 91U;
static int32_t t43 = -118925105;
int8_t x227 = -23;
int32_t t44 = 785;
int32_t x231 = INT32_MIN;
int64_t x232 = INT64_MIN;
uint8_t x236 = 22U;
volatile int64_t x238 = -12653921LL;
volatile int8_t x239 = INT8_MIN;
volatile uint32_t x243 = 271707884U;
int64_t x244 = -33LL;
static int32_t x249 = INT32_MIN;
static volatile uint32_t x252 = 4590853U;
int32_t x255 = 69934157;
volatile uint32_t x258 = 439199168U;
volatile uint64_t x260 = UINT64_MAX;
int32_t t52 = 63738;
int16_t x274 = 68;
uint64_t x275 = UINT64_MAX;
uint8_t x281 = 99U;
static int8_t x292 = INT8_MAX;
int8_t x295 = INT8_MIN;
static int32_t t64 = 20102669;
int64_t x313 = INT64_MIN;
int64_t x317 = -27LL;
static int16_t x319 = -1;
volatile int16_t x322 = INT16_MIN;
int16_t x324 = INT16_MIN;
static volatile int32_t t68 = -4360;
static uint64_t x330 = 155LLU;
volatile uint16_t x331 = UINT16_MAX;
static volatile int32_t t71 = -51799;
volatile uint8_t x349 = 0U;
static int32_t t74 = -764;
static int16_t x355 = -1;
int64_t x356 = INT64_MIN;
volatile int32_t t75 = -7219;
int32_t x358 = -64457077;
uint16_t x365 = 29U;
static volatile int16_t x366 = INT16_MAX;
int8_t x373 = INT8_MAX;
volatile int32_t t79 = -5193479;
int64_t x377 = INT64_MIN;
int64_t x378 = INT64_MIN;
int64_t x383 = -3674601LL;
static uint64_t x392 = UINT64_MAX;
int32_t t82 = -751127;
int8_t x395 = INT8_MIN;
static volatile int32_t t83 = 25782;
int32_t x400 = 5754;
volatile int32_t t85 = -24;
int16_t x408 = INT16_MIN;
static int16_t x412 = -1;
int16_t x416 = -5;
int32_t t88 = -2;
uint8_t x419 = 15U;
volatile int32_t t90 = 39655783;
uint64_t x436 = UINT64_MAX;
int16_t x447 = INT16_MIN;
volatile int32_t x453 = INT32_MIN;
int16_t x466 = 15384;
volatile uint16_t x468 = 306U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint32_t x2 = 1U;
	volatile uint16_t x3 = UINT16_MAX;
	int32_t x4 = INT32_MAX;
	static int32_t t0 = 355;

	t0 = ((x1^(x2-x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1413U;
	static uint32_t x6 = 874U;
	int32_t x7 = INT32_MIN;
	int8_t x8 = INT8_MAX;
	static volatile int32_t t1 = -19626424;

	t1 = ((x5^(x6-x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static int16_t x10 = INT16_MIN;
	volatile uint8_t x11 = UINT8_MAX;
	static int32_t t2 = 10296;

	t2 = ((x9^(x10-x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x15 = INT16_MIN;
	uint16_t x16 = 64U;
	int32_t t3 = 6073;

	t3 = ((x13^(x14-x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 590826LLU;
	volatile int64_t x22 = 1083538594466LL;
	int8_t x23 = -1;
	int64_t x24 = -1LL;
	volatile int32_t t4 = -1457554;

	t4 = ((x21^(x22-x23))<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -32;
	uint8_t x26 = 0U;
	volatile int64_t x27 = 464581151671029347LL;
	static int8_t x28 = INT8_MIN;

	t5 = ((x25^(x26-x27))<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MIN;
	int64_t x39 = 121007299LL;
	int32_t x40 = INT32_MAX;
	static int32_t t6 = 0;

	t6 = ((x37^(x38-x39))<=x40);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = 171U;
	volatile uint64_t x43 = 7803674LLU;
	uint32_t x44 = 72U;
	volatile int32_t t7 = 2;

	t7 = ((x41^(x42-x43))<=x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x45 = INT32_MIN;
	int64_t x47 = -6605LL;
	int32_t t8 = -249056;

	t8 = ((x45^(x46-x47))<=x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile int32_t x50 = 532269361;
	uint64_t x51 = UINT64_MAX;
	int32_t t9 = -5767629;

	t9 = ((x49^(x50-x51))<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = INT64_MAX;
	volatile int8_t x54 = 3;
	static int32_t x55 = -1;
	static volatile int32_t t10 = -284;

	t10 = ((x53^(x54-x55))<=x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 946U;
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = UINT16_MAX;
	int32_t t11 = 39948;

	t11 = ((x57^(x58-x59))<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MAX;
	int32_t x63 = -1;
	static volatile int8_t x64 = INT8_MIN;
	static volatile int32_t t12 = 461621;

	t12 = ((x61^(x62-x63))<=x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = -6829890;
	int32_t x66 = -1;
	int16_t x67 = 6944;
	int32_t x68 = -1;
	volatile int32_t t13 = 11863353;

	t13 = ((x65^(x66-x67))<=x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 7256967;
	uint64_t x78 = UINT64_MAX;
	int64_t x79 = -13091963LL;
	volatile uint32_t x80 = 528235992U;
	static volatile int32_t t14 = -59;

	t14 = ((x77^(x78-x79))<=x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x81 = -1;
	int32_t x83 = -13;
	int32_t x84 = INT32_MIN;
	static int32_t t15 = -199206458;

	t15 = ((x81^(x82-x83))<=x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int64_t x87 = INT64_MIN;
	static uint64_t x88 = 497900559225544926LLU;
	int32_t t16 = 20;

	t16 = ((x85^(x86-x87))<=x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x89 = UINT16_MAX;
	int16_t x90 = -4722;
	int8_t x91 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t17 = -29275104;

	t17 = ((x89^(x90-x91))<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -809;
	uint16_t x94 = 103U;
	int64_t x95 = -1LL;
	int8_t x96 = INT8_MIN;

	t18 = ((x93^(x94-x95))<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x98 = INT32_MAX;
	volatile int64_t x100 = -1LL;
	volatile int32_t t19 = 127647454;

	t19 = ((x97^(x98-x99))<=x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MAX;
	int64_t x106 = INT64_MIN;
	int32_t t20 = -202590957;

	t20 = ((x105^(x106-x107))<=x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x109 = 51U;
	int16_t x110 = -1;
	static uint16_t x111 = 30262U;
	int16_t x112 = -476;

	t21 = ((x109^(x110-x111))<=x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	volatile int64_t x115 = INT64_MIN;
	static volatile uint64_t x116 = 4195987702035LLU;
	int32_t t22 = -63149;

	t22 = ((x113^(x114-x115))<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x118 = UINT16_MAX;
	static int16_t x119 = -1;
	int32_t x120 = INT32_MAX;
	int32_t t23 = -61249;

	t23 = ((x117^(x118-x119))<=x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = 1697;
	static int8_t x126 = 0;
	int64_t x127 = -217538LL;
	int8_t x128 = INT8_MIN;
	volatile int32_t t24 = -259;

	t24 = ((x125^(x126-x127))<=x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x137 = -1;
	uint8_t x140 = UINT8_MAX;
	int32_t t25 = -58;

	t25 = ((x137^(x138-x139))<=x140);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = 153184;
	int8_t x143 = -1;
	int8_t x144 = 19;
	int32_t t26 = 34658009;

	t26 = ((x141^(x142-x143))<=x144);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x145 = -1;
	static volatile int16_t x147 = INT16_MIN;
	uint32_t x148 = 1453792776U;
	static int32_t t27 = -33;

	t27 = ((x145^(x146-x147))<=x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x153 = INT64_MIN;
	static uint16_t x155 = UINT16_MAX;
	int32_t x156 = -114389;
	static int32_t t28 = -13129;

	t28 = ((x153^(x154-x155))<=x156);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x157 = UINT16_MAX;
	static int64_t x158 = INT64_MIN;
	int8_t x159 = -1;
	int32_t t29 = 13;

	t29 = ((x157^(x158-x159))<=x160);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x161 = INT32_MIN;
	static int8_t x162 = INT8_MIN;
	uint64_t x163 = UINT64_MAX;
	volatile int32_t t30 = 815381;

	t30 = ((x161^(x162-x163))<=x164);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x166 = 13U;
	int64_t x167 = -1LL;
	int64_t x168 = -1LL;
	int32_t t31 = 82;

	t31 = ((x165^(x166-x167))<=x168);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x170 = -1;
	uint32_t x171 = 1609509U;
	volatile int32_t x172 = -1;
	static int32_t t32 = -437;

	t32 = ((x169^(x170-x171))<=x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x173 = 0;
	volatile int32_t x174 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t33 = 1;

	t33 = ((x173^(x174-x175))<=x176);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x177 = 1738109932156849LLU;
	static int16_t x178 = INT16_MAX;
	int16_t x179 = -21;
	volatile int64_t x180 = INT64_MAX;
	volatile int32_t t34 = 22492;

	t34 = ((x177^(x178-x179))<=x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x181 = 25677870U;
	uint8_t x182 = UINT8_MAX;
	uint16_t x184 = 2U;
	int32_t t35 = -31385;

	t35 = ((x181^(x182-x183))<=x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	volatile int8_t x188 = INT8_MIN;
	int32_t t36 = -15207519;

	t36 = ((x185^(x186-x187))<=x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x189 = -1LL;
	static uint16_t x190 = UINT16_MAX;
	volatile int8_t x191 = INT8_MIN;
	static int64_t x192 = INT64_MIN;
	volatile int32_t t37 = 667176679;

	t37 = ((x189^(x190-x191))<=x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x197 = 712687462;
	uint64_t x198 = 22143696372581258LLU;
	int64_t x199 = -98705697302LL;
	volatile int64_t x200 = INT64_MIN;
	int32_t t38 = 2662291;

	t38 = ((x197^(x198-x199))<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = 57248338;
	static uint8_t x202 = 15U;
	uint32_t x204 = 67655112U;

	t39 = ((x201^(x202-x203))<=x204);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x209 = 59U;
	int64_t x210 = -1LL;
	int64_t x212 = -1LL;
	volatile int32_t t40 = -884590;

	t40 = ((x209^(x210-x211))<=x212);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x213 = -3;
	volatile int16_t x214 = -1;
	int64_t x215 = INT64_MIN;
	volatile int32_t t41 = 116662243;

	t41 = ((x213^(x214-x215))<=x216);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x217 = 8145952751LLU;
	int16_t x219 = -1;
	volatile int32_t x220 = INT32_MAX;
	volatile int32_t t42 = 261423854;

	t42 = ((x217^(x218-x219))<=x220);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint64_t x223 = 122321862LLU;

	t43 = ((x221^(x222-x223))<=x224);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x225 = 7U;
	static volatile uint64_t x226 = 360LLU;
	int16_t x228 = INT16_MIN;

	t44 = ((x225^(x226-x227))<=x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x229 = 23U;
	volatile int32_t x230 = -163070951;
	int32_t t45 = -243622;

	t45 = ((x229^(x230-x231))<=x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	volatile int32_t x234 = 406051298;
	int16_t x235 = -1;
	int32_t t46 = -359072915;

	t46 = ((x233^(x234-x235))<=x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = 21582U;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t47 = -1100268;

	t47 = ((x237^(x238-x239))<=x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 5U;
	volatile int32_t t48 = 1981757;

	t48 = ((x241^(x242-x243))<=x244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x245 = INT8_MIN;
	volatile int64_t x246 = 105105597LL;
	uint64_t x247 = 4026LLU;
	uint16_t x248 = UINT16_MAX;
	int32_t t49 = 41;

	t49 = ((x245^(x246-x247))<=x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x250 = -3420;
	volatile uint64_t x251 = 69LLU;
	int32_t t50 = -116645839;

	t50 = ((x249^(x250-x251))<=x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x253 = 1;
	static uint8_t x254 = 42U;
	static volatile uint32_t x256 = 6680152U;
	volatile int32_t t51 = 15269038;

	t51 = ((x253^(x254-x255))<=x256);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x257 = 12749648834LL;
	static int16_t x259 = -1921;

	t52 = ((x257^(x258-x259))<=x260);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x261 = -559447578165494303LL;
	int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	static uint32_t x264 = UINT32_MAX;
	volatile int32_t t53 = 0;

	t53 = ((x261^(x262-x263))<=x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x265 = 73153846;
	int32_t x266 = 1066569;
	int8_t x267 = -61;
	int16_t x268 = INT16_MIN;
	volatile int32_t t54 = 48;

	t54 = ((x265^(x266-x267))<=x268);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x269 = INT32_MAX;
	int64_t x270 = -1LL;
	static volatile uint8_t x271 = 38U;
	int64_t x272 = INT64_MIN;
	volatile int32_t t55 = 169;

	t55 = ((x269^(x270-x271))<=x272);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x273 = 3718U;
	int64_t x276 = -1LL;
	int32_t t56 = 0;

	t56 = ((x273^(x274-x275))<=x276);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = INT16_MAX;
	int32_t x278 = -299;
	uint64_t x279 = 78983046264350LLU;
	uint8_t x280 = 15U;
	volatile int32_t t57 = -61457350;

	t57 = ((x277^(x278-x279))<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MAX;
	int16_t x284 = -1;
	int32_t t58 = -454128622;

	t58 = ((x281^(x282-x283))<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MIN;
	volatile uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 1U;
	int16_t x288 = -1;
	volatile int32_t t59 = 7;

	t59 = ((x285^(x286-x287))<=x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x289 = 0U;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = -1;
	volatile int32_t t60 = -3;

	t60 = ((x289^(x290-x291))<=x292);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x293 = 899564LLU;
	int8_t x294 = 1;
	uint32_t x296 = 2023994U;
	int32_t t61 = 316400;

	t61 = ((x293^(x294-x295))<=x296);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = -1;
	uint32_t x298 = UINT32_MAX;
	int32_t x299 = INT32_MIN;
	volatile int16_t x300 = -15;
	static volatile int32_t t62 = 1636;

	t62 = ((x297^(x298-x299))<=x300);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 1;
	int8_t x302 = INT8_MAX;
	static int64_t x303 = -1LL;
	volatile int32_t x304 = -947495;
	int32_t t63 = -38545739;

	t63 = ((x301^(x302-x303))<=x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x305 = UINT64_MAX;
	volatile uint16_t x306 = 39U;
	volatile int32_t x307 = -223970;
	uint16_t x308 = 1000U;

	t64 = ((x305^(x306-x307))<=x308);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MAX;
	volatile int32_t t65 = -3639540;

	t65 = ((x313^(x314-x315))<=x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x318 = 915468724U;
	static int32_t x320 = -817;
	static volatile int32_t t66 = -1;

	t66 = ((x317^(x318-x319))<=x320);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = 146;
	static int8_t x323 = INT8_MAX;
	volatile int32_t t67 = -10394497;

	t67 = ((x321^(x322-x323))<=x324);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x325 = UINT16_MAX;
	static int16_t x326 = -5;
	int16_t x327 = -1;
	int8_t x328 = -1;

	t68 = ((x325^(x326-x327))<=x328);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = -222;
	static uint32_t x332 = 27467U;
	int32_t t69 = -7599;

	t69 = ((x329^(x330-x331))<=x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x333 = 35U;
	volatile uint64_t x334 = 9215115LLU;
	int32_t x335 = INT32_MAX;
	volatile uint64_t x336 = 768LLU;
	int32_t t70 = 2305160;

	t70 = ((x333^(x334-x335))<=x336);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x338 = 886966155520029193LLU;
	uint64_t x339 = 68957165130857LLU;
	static int8_t x340 = 47;

	t71 = ((x337^(x338-x339))<=x340);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x341 = INT64_MAX;
	volatile uint16_t x342 = 246U;
	int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MAX;
	volatile int32_t t72 = 3420712;

	t72 = ((x341^(x342-x343))<=x344);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	static int16_t x346 = INT16_MIN;
	uint16_t x347 = 22U;
	static int8_t x348 = 1;
	volatile int32_t t73 = -9127707;

	t73 = ((x345^(x346-x347))<=x348);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 60U;

	t74 = ((x349^(x350-x351))<=x352);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = -6LL;

	t75 = ((x353^(x354-x355))<=x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x357 = 13LLU;
	int64_t x359 = 508LL;
	int32_t x360 = INT32_MIN;
	volatile int32_t t76 = 3;

	t76 = ((x357^(x358-x359))<=x360);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x367 = 0U;
	volatile int16_t x368 = INT16_MAX;
	volatile int32_t t77 = -992367754;

	t77 = ((x365^(x366-x367))<=x368);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = INT64_MIN;
	volatile int32_t x370 = -30361563;
	volatile int16_t x371 = -1;
	volatile int64_t x372 = -2158957522259780LL;
	int32_t t78 = 0;

	t78 = ((x369^(x370-x371))<=x372);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x374 = 11LLU;
	static int16_t x375 = INT16_MIN;
	static int32_t x376 = INT32_MIN;

	t79 = ((x373^(x374-x375))<=x376);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x379 = -1;
	volatile int64_t x380 = -1LL;
	volatile int32_t t80 = -29;

	t80 = ((x377^(x378-x379))<=x380);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = 4248031697468143LL;
	uint64_t x384 = 1503257450LLU;
	volatile int32_t t81 = 4485134;

	t81 = ((x381^(x382-x383))<=x384);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x389 = INT32_MAX;
	uint16_t x390 = 32U;
	static uint32_t x391 = 31176589U;

	t82 = ((x389^(x390-x391))<=x392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x393 = 480963;
	static int16_t x394 = INT16_MAX;
	uint16_t x396 = 5U;

	t83 = ((x393^(x394-x395))<=x396);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x397 = UINT32_MAX;
	uint16_t x398 = UINT16_MAX;
	int64_t x399 = -19798715133360LL;
	volatile int32_t t84 = 405550636;

	t84 = ((x397^(x398-x399))<=x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x401 = INT8_MIN;
	static uint16_t x402 = 4578U;
	static volatile uint32_t x403 = 30628475U;
	static int16_t x404 = -8;

	t85 = ((x401^(x402-x403))<=x404);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x405 = 191LLU;
	volatile uint32_t x406 = 10595057U;
	int8_t x407 = -1;
	static int32_t t86 = -1;

	t86 = ((x405^(x406-x407))<=x408);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x409 = 210U;
	int64_t x410 = 658320LL;
	volatile uint16_t x411 = 5U;
	static volatile int32_t t87 = -162064;

	t87 = ((x409^(x410-x411))<=x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x413 = 149U;
	static int8_t x414 = 13;
	int16_t x415 = -1;

	t88 = ((x413^(x414-x415))<=x416);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = UINT16_MAX;
	volatile int16_t x420 = -10349;
	int32_t t89 = 31775302;

	t89 = ((x417^(x418-x419))<=x420);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = -1;
	static int64_t x426 = INT64_MIN;
	int32_t x427 = -18662391;
	int64_t x428 = -2684704988217072LL;

	t90 = ((x425^(x426-x427))<=x428);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x429 = 124449402U;
	int8_t x430 = -15;
	int8_t x431 = INT8_MAX;
	static volatile int32_t x432 = -20129;
	int32_t t91 = 55;

	t91 = ((x429^(x430-x431))<=x432);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x433 = 4073294523LLU;
	int16_t x434 = -3166;
	int64_t x435 = INT64_MIN;
	static int32_t t92 = -29556174;

	t92 = ((x433^(x434-x435))<=x436);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x441 = 1533LLU;
	int16_t x442 = -1;
	static int8_t x443 = INT8_MAX;
	static uint32_t x444 = 34U;
	int32_t t93 = -4761;

	t93 = ((x441^(x442-x443))<=x444);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x445 = -1;
	volatile uint16_t x446 = 5809U;
	uint64_t x448 = 4LLU;
	int32_t t94 = 10645240;

	t94 = ((x445^(x446-x447))<=x448);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = 30;
	static int16_t x450 = -1;
	int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	static int32_t t95 = 11835;

	t95 = ((x449^(x450-x451))<=x452);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x454 = -640;
	uint16_t x455 = 6033U;
	int8_t x456 = -1;
	int32_t t96 = -1294;

	t96 = ((x453^(x454-x455))<=x456);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = INT8_MIN;
	uint8_t x458 = UINT8_MAX;
	int16_t x459 = INT16_MIN;
	int8_t x460 = 19;
	volatile int32_t t97 = 188;

	t97 = ((x457^(x458-x459))<=x460);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x465 = UINT64_MAX;
	int32_t x467 = INT32_MAX;
	int32_t t98 = 171857280;

	t98 = ((x465^(x466-x467))<=x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = -1;
	int32_t x470 = INT32_MIN;
	int32_t x471 = -177906;
	int16_t x472 = -1;
	int32_t t99 = -854562547;

	t99 = ((x469^(x470-x471))<=x472);

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

