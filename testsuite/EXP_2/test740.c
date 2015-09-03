#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
uint64_t t0 = UINT64_MAX;
int16_t x11 = INT16_MAX;
int64_t t2 = 128170LL;
static volatile int32_t t3 = 393;
uint64_t x27 = 1021218LLU;
uint64_t t4 = 2LLU;
uint32_t t7 = 208165U;
int32_t x46 = -1;
volatile uint8_t x48 = 81U;
volatile uint32_t x53 = 6908005U;
int16_t x68 = INT16_MIN;
uint64_t x73 = 1069LLU;
uint16_t x78 = 6099U;
int64_t x82 = 3255LL;
uint32_t x84 = 18U;
static int8_t x86 = -39;
static int16_t x96 = INT16_MIN;
static int32_t x98 = INT32_MIN;
int8_t x101 = -1;
static int32_t t20 = -472409;
uint64_t x128 = UINT64_MAX;
int64_t t22 = 345945571466LL;
volatile int16_t x151 = INT16_MAX;
int64_t t25 = 967537213133535LL;
int32_t x157 = -46479;
int8_t x182 = 54;
volatile uint64_t t29 = 546427825214046LLU;
int16_t x193 = INT16_MAX;
volatile uint64_t x194 = 6LLU;
int64_t x214 = INT64_MAX;
volatile uint64_t t34 = 59LLU;
uint32_t t35 = UINT32_MAX;
uint8_t x225 = UINT8_MAX;
int8_t x236 = INT8_MIN;
uint16_t x241 = UINT16_MAX;
int64_t x243 = 563LL;
static int16_t x244 = INT16_MIN;
uint8_t x248 = UINT8_MAX;
int64_t x250 = INT64_MAX;
int32_t x252 = 1039;
static int16_t x263 = 33;
int32_t x281 = INT32_MAX;
volatile int8_t x282 = -1;
int8_t x284 = INT8_MIN;
static volatile int32_t t45 = 11224494;
int32_t x301 = INT32_MIN;
volatile int64_t x304 = INT64_MAX;
uint8_t x315 = 56U;
int64_t x317 = INT64_MIN;
static int32_t x318 = -60275;
static int32_t x335 = INT32_MAX;
uint64_t x338 = 3021892LLU;
static int32_t t55 = 8743;
volatile uint64_t x346 = 6567626651719LLU;
int32_t x347 = -10030;
volatile uint8_t x356 = UINT8_MAX;
static uint64_t x357 = 228377830859269LLU;
static volatile uint16_t x368 = 186U;
volatile uint8_t x372 = UINT8_MAX;
int8_t x376 = -1;
uint64_t t63 = 8166352737631559063LLU;
int8_t x381 = INT8_MIN;
uint32_t x387 = 18U;
static int32_t x390 = -727371497;
uint8_t x391 = 3U;
volatile uint64_t t66 = 186133LLU;
static uint8_t x397 = 0U;
static volatile uint64_t t68 = UINT64_MAX;
volatile int16_t x402 = -1;
int64_t t69 = INT64_MAX;
uint8_t x420 = 3U;
volatile int64_t t71 = 39544478115600605LL;
int8_t x432 = -1;
int16_t x433 = INT16_MIN;
int8_t x452 = -1;
int32_t x461 = INT32_MIN;
static int32_t x463 = INT32_MIN;
int32_t t83 = 14203;
uint32_t t84 = 1924821501U;
uint16_t x487 = UINT16_MAX;
int16_t x495 = INT16_MIN;
uint64_t x501 = 16650LLU;
int64_t x502 = -1550LL;
int8_t x508 = -34;
volatile int64_t t90 = -2749908800244548LL;
uint64_t x514 = UINT64_MAX;
static volatile uint64_t t92 = 17702272392879543LLU;
volatile int8_t x518 = -1;
static uint8_t x520 = UINT8_MAX;
uint16_t x525 = 477U;
static uint64_t x526 = 136241LLU;
uint16_t x528 = 0U;
int16_t x534 = INT16_MAX;
static volatile uint32_t x538 = 141282U;
volatile int32_t x539 = INT32_MIN;
volatile uint64_t t98 = UINT64_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	static int32_t x3 = INT32_MIN;
	static uint64_t x4 = 1LLU;

	t0 = ((x1%(x2%x3))|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = INT64_MIN;
	uint8_t x10 = 23U;
	int8_t x12 = 0;
	static volatile int64_t t1 = -25831865LL;

	t1 = ((x9%(x10%x11))|x12);

	if (t1 != -3LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MIN;
	static volatile int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;

	t2 = ((x13%(x14%x15))|x16);

	if (t2 != 32767LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 7U;
	static volatile int8_t x18 = 58;
	volatile int16_t x19 = INT16_MIN;
	int16_t x20 = -41;

	t3 = ((x17%(x18%x19))|x20);

	if (t3 != -41) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -1;
	uint16_t x26 = 73U;
	uint16_t x28 = UINT16_MAX;

	t4 = ((x25%(x26%x27))|x28);

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	uint32_t x32 = 373U;
	uint64_t t5 = 20LLU;

	t5 = ((x29%(x30%x31))|x32);

	if (t5 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MAX;
	volatile int16_t x34 = 98;
	uint32_t x35 = 152658784U;
	uint8_t x36 = UINT8_MAX;
	static volatile uint32_t t6 = 16257790U;

	t6 = ((x33%(x34%x35))|x36);

	if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	uint8_t x42 = 47U;
	int16_t x43 = -11;
	uint32_t x44 = 638323392U;

	t7 = ((x41%(x42%x43))|x44);

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = 19;
	uint32_t x47 = 14U;
	static volatile uint32_t t8 = 349U;

	t8 = ((x45%(x46%x47))|x48);

	if (t8 != 81U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = INT16_MIN;
	int32_t x55 = -8064;
	int16_t x56 = INT16_MIN;
	uint32_t t9 = 479352740U;

	t9 = ((x53%(x54%x55))|x56);

	if (t9 != 4294961253U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -1;
	int16_t x66 = -1;
	volatile int16_t x67 = INT16_MIN;
	volatile int32_t t10 = -3487;

	t10 = ((x65%(x66%x67))|x68);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 78468962U;
	int16_t x71 = INT16_MIN;
	int8_t x72 = INT8_MIN;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = ((x69%(x70%x71))|x72);

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x74 = 3;
	uint64_t x75 = 386822189499LLU;
	volatile uint32_t x76 = UINT32_MAX;
	static volatile uint64_t t12 = 17771853792701LLU;

	t12 = ((x73%(x74%x75))|x76);

	if (t12 != 4294967295LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x77 = INT64_MAX;
	volatile uint8_t x79 = 8U;
	uint8_t x80 = 4U;
	volatile int64_t t13 = -242779822613652785LL;

	t13 = ((x77%(x78%x79))|x80);

	if (t13 != 5LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x81 = INT8_MIN;
	uint16_t x83 = 28U;
	volatile int64_t t14 = 120119589655358983LL;

	t14 = ((x81%(x82%x83))|x84);

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = 2286LLU;
	volatile int8_t x87 = INT8_MIN;
	int8_t x88 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = ((x85%(x86%x87))|x88);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = 686U;
	static volatile int64_t x91 = -222462198061572LL;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x89%(x90%x91))|x92);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x93 = INT32_MAX;
	int64_t x94 = -3016352128LL;
	int64_t x95 = INT64_MAX;
	volatile int64_t t17 = 5LL;

	t17 = ((x93%(x94%x95))|x96);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x97 = INT64_MAX;
	static uint32_t x99 = 56738U;
	uint16_t x100 = UINT16_MAX;
	volatile int64_t t18 = 572287597324267LL;

	t18 = ((x97%(x98%x99))|x100);

	if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x102 = 6807144U;
	int64_t x103 = -29619659441673LL;
	int8_t x104 = -3;
	static int64_t t19 = -78LL;

	t19 = ((x101%(x102%x103))|x104);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x105 = -2039850;
	static uint8_t x106 = 69U;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 85U;

	t20 = ((x105%(x106%x107))|x108);

	if (t20 != -3) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x125 = 0U;
	uint64_t x126 = 785204052LLU;
	int8_t x127 = -1;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x125%(x126%x127))|x128);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x137 = 0;
	volatile int64_t x138 = INT64_MAX;
	int16_t x139 = INT16_MIN;
	volatile int8_t x140 = INT8_MAX;

	t22 = ((x137%(x138%x139))|x140);

	if (t22 != 127LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = -1;
	uint32_t x143 = 969U;
	static int16_t x144 = INT16_MAX;
	volatile int64_t t23 = -400853870LL;

	t23 = ((x141%(x142%x143))|x144);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x149 = INT64_MIN;
	uint8_t x150 = 25U;
	int32_t x152 = INT32_MIN;
	int64_t t24 = -15793480976LL;

	t24 = ((x149%(x150%x151))|x152);

	if (t24 != -8LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x153 = 0U;
	int64_t x154 = INT64_MIN;
	int64_t x155 = 6017LL;
	int8_t x156 = -1;

	t25 = ((x153%(x154%x155))|x156);

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x158 = 329430392U;
	int32_t x159 = -1;
	int64_t x160 = 66788139177031LL;
	static volatile int64_t t26 = 9315856LL;

	t26 = ((x157%(x158%x159))|x160);

	if (t26 != 66788150712159LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	uint32_t x176 = UINT32_MAX;
	int64_t t27 = -3LL;

	t27 = ((x173%(x174%x175))|x176);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MIN;
	int64_t x183 = 223LL;
	static int32_t x184 = 4064;
	int64_t t28 = 17982LL;

	t28 = ((x181%(x182%x183))|x184);

	if (t28 != -26LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x185 = -1;
	static volatile uint64_t x186 = 183373209LLU;
	volatile int64_t x187 = -1LL;
	static uint16_t x188 = 27U;

	t29 = ((x185%(x186%x187))|x188);

	if (t29 != 30154651LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = INT32_MIN;
	uint64_t t30 = 9646909LLU;

	t30 = ((x193%(x194%x195))|x196);

	if (t30 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x197 = -1;
	static int16_t x198 = -61;
	uint16_t x199 = 36U;
	int32_t x200 = INT32_MIN;
	int32_t t31 = -6204961;

	t31 = ((x197%(x198%x199))|x200);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x205 = UINT64_MAX;
	uint8_t x206 = UINT8_MAX;
	static int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	uint64_t t32 = 5LLU;

	t32 = ((x205%(x206%x207))|x208);

	if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x215 = INT64_MIN;
	uint16_t x216 = 11U;
	int64_t t33 = -2272362279646LL;

	t33 = ((x213%(x214%x215))|x216);

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x217 = 3507042LLU;
	volatile uint32_t x218 = 2126355164U;
	int16_t x219 = INT16_MAX;
	static int8_t x220 = 20;

	t34 = ((x217%(x218%x219))|x220);

	if (t34 != 4116LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x221 = -188971846;
	static int16_t x222 = -5759;
	uint32_t x223 = UINT32_MAX;
	int32_t x224 = -1;

	t35 = ((x221%(x222%x223))|x224);

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x226 = INT32_MIN;
	int16_t x227 = -35;
	int16_t x228 = -8;
	volatile int32_t t36 = -75;

	t36 = ((x225%(x226%x227))|x228);

	if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x233 = 0;
	uint64_t x234 = 68015742812595LLU;
	static volatile int64_t x235 = INT64_MIN;
	uint64_t t37 = 248LLU;

	t37 = ((x233%(x234%x235))|x236);

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x242 = UINT64_MAX;
	uint64_t t38 = 0LLU;

	t38 = ((x241%(x242%x243))|x244);

	if (t38 != 18446744073709519270LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x245 = 41;
	int32_t x246 = INT32_MIN;
	volatile int64_t x247 = INT64_MIN;
	volatile int64_t t39 = 11516050958167520LL;

	t39 = ((x245%(x246%x247))|x248);

	if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x249 = 2;
	static uint32_t x251 = 63964527U;
	volatile int64_t t40 = -288LL;

	t40 = ((x249%(x250%x251))|x252);

	if (t40 != 1039LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x253 = 0;
	int16_t x254 = -1;
	int64_t x255 = 51LL;
	int8_t x256 = INT8_MIN;
	volatile int64_t t41 = 42911310728LL;

	t41 = ((x253%(x254%x255))|x256);

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = UINT8_MAX;
	static volatile uint64_t x262 = 1937854313754LLU;
	static int32_t x264 = -3314157;
	uint64_t t42 = 995220147LLU;

	t42 = ((x261%(x262%x263))|x264);

	if (t42 != 18446744073706237459LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x265 = 27U;
	volatile uint8_t x266 = 30U;
	static int64_t x267 = 14950753700723546LL;
	uint32_t x268 = UINT32_MAX;
	int64_t t43 = -7784517936LL;

	t43 = ((x265%(x266%x267))|x268);

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x273 = -1;
	uint64_t x274 = 31900LLU;
	uint16_t x275 = UINT16_MAX;
	int8_t x276 = INT8_MIN;
	uint64_t t44 = 1368039974842LLU;

	t44 = ((x273%(x274%x275))|x276);

	if (t44 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x283 = UINT16_MAX;

	t45 = ((x281%(x282%x283))|x284);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x289 = -983;
	int32_t x290 = INT32_MIN;
	static uint16_t x291 = UINT16_MAX;
	int8_t x292 = 23;
	int32_t t46 = 821151;

	t46 = ((x289%(x290%x291))|x292);

	if (t46 != -961) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x293 = 9;
	volatile int16_t x294 = INT16_MAX;
	int32_t x295 = -419595;
	int8_t x296 = INT8_MAX;
	int32_t t47 = 111863;

	t47 = ((x293%(x294%x295))|x296);

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MIN;
	volatile int64_t t48 = INT64_MAX;

	t48 = ((x301%(x302%x303))|x304);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x313 = 338;
	int8_t x314 = INT8_MIN;
	int8_t x316 = -1;
	int32_t t49 = 1090130;

	t49 = ((x313%(x314%x315))|x316);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x319 = 2280598993161LLU;
	int32_t x320 = INT32_MAX;
	uint64_t t50 = 7691056LLU;

	t50 = ((x317%(x318%x319))|x320);

	if (t50 != 88046829567LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	static int64_t x324 = INT64_MIN;
	volatile int64_t t51 = INT64_MIN;

	t51 = ((x321%(x322%x323))|x324);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x325 = 50U;
	static int16_t x326 = -2;
	static int32_t x327 = -838;
	int16_t x328 = INT16_MIN;
	volatile int32_t t52 = -3;

	t52 = ((x325%(x326%x327))|x328);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x333 = 392U;
	uint64_t x334 = 118084737158883LLU;
	static volatile int8_t x336 = -1;
	uint64_t t53 = UINT64_MAX;

	t53 = ((x333%(x334%x335))|x336);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x337 = 63;
	uint32_t x339 = UINT32_MAX;
	volatile int8_t x340 = INT8_MAX;
	uint64_t t54 = 57LLU;

	t54 = ((x337%(x338%x339))|x340);

	if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -639;

	t55 = ((x341%(x342%x343))|x344);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x345 = 494961;
	int16_t x348 = -5549;
	uint64_t t56 = 10587698919LLU;

	t56 = ((x345%(x346%x347))|x348);

	if (t56 != 18446744073709547379LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x353 = 9;
	int32_t x354 = -1818152;
	int32_t x355 = -105;
	int32_t t57 = -12;

	t57 = ((x353%(x354%x355))|x356);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x358 = 7U;
	int32_t x359 = -1;
	int32_t x360 = INT32_MAX;
	static volatile uint64_t t58 = 16281172548LLU;

	t58 = ((x357%(x358%x359))|x360);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 1191847626718395LLU;
	int16_t x364 = INT16_MIN;
	uint64_t t59 = 224518LLU;

	t59 = ((x361%(x362%x363))|x364);

	if (t59 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x365 = 0;
	int8_t x366 = -9;
	volatile int32_t x367 = -39181;
	static volatile int32_t t60 = -38;

	t60 = ((x365%(x366%x367))|x368);

	if (t60 != 186) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x369 = -1LL;
	uint64_t x370 = 13871944LLU;
	int32_t x371 = INT32_MIN;
	volatile uint64_t t61 = 4403635574587498LLU;

	t61 = ((x369%(x370%x371))|x372);

	if (t61 != 657151LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x373 = 1725155733LLU;
	static int8_t x374 = -1;
	int32_t x375 = 7891119;
	uint64_t t62 = UINT64_MAX;

	t62 = ((x373%(x374%x375))|x376);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x377 = INT32_MAX;
	static uint64_t x378 = 3LLU;
	volatile uint8_t x379 = 14U;
	int8_t x380 = INT8_MIN;

	t63 = ((x377%(x378%x379))|x380);

	if (t63 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x382 = 1336196069LL;
	static volatile int64_t x383 = INT64_MAX;
	int16_t x384 = INT16_MIN;
	int64_t t64 = 275191320943261LL;

	t64 = ((x381%(x382%x383))|x384);

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x385 = -3662;
	int8_t x386 = -2;
	volatile uint32_t x388 = UINT32_MAX;
	static uint32_t t65 = UINT32_MAX;

	t65 = ((x385%(x386%x387))|x388);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x389 = UINT64_MAX;
	static uint8_t x392 = 3U;

	t66 = ((x389%(x390%x391))|x392);

	if (t66 != 3LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x393 = 14U;
	int8_t x394 = -7;
	int64_t x395 = INT64_MAX;
	int8_t x396 = -38;
	volatile int64_t t67 = -1686736382941LL;

	t67 = ((x393%(x394%x395))|x396);

	if (t67 != -38LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x398 = INT32_MIN;
	volatile uint64_t x399 = 329667LLU;
	uint64_t x400 = UINT64_MAX;

	t68 = ((x397%(x398%x399))|x400);

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x401 = INT8_MIN;
	int8_t x403 = INT8_MIN;
	volatile int64_t x404 = INT64_MAX;

	t69 = ((x401%(x402%x403))|x404);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x405 = 5U;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = -33175828536LL;
	uint16_t x408 = 1876U;
	int64_t t70 = 5998997362LL;

	t70 = ((x405%(x406%x407))|x408);

	if (t70 != 1877LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x417 = -1LL;
	static int16_t x418 = INT16_MAX;
	int32_t x419 = INT32_MAX;

	t71 = ((x417%(x418%x419))|x420);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x421 = 13U;
	uint64_t x422 = 7177698911002725799LLU;
	int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MIN;
	uint64_t t72 = 513321569317628450LLU;

	t72 = ((x421%(x422%x423))|x424);

	if (t72 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x425 = -113765736958LL;
	uint64_t x426 = 469LLU;
	uint64_t x427 = UINT64_MAX;
	uint16_t x428 = UINT16_MAX;
	uint64_t t73 = 7870761994364021865LLU;

	t73 = ((x425%(x426%x427))|x428);

	if (t73 != 65535LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x429 = INT8_MIN;
	volatile int16_t x430 = INT16_MIN;
	int64_t x431 = INT64_MIN;
	volatile int64_t t74 = 19013111371LL;

	t74 = ((x429%(x430%x431))|x432);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x434 = INT8_MAX;
	int64_t x435 = -3351808099086300LL;
	int16_t x436 = -1;
	int64_t t75 = 42982889766811LL;

	t75 = ((x433%(x434%x435))|x436);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x437 = -485473384549415941LL;
	volatile uint8_t x438 = 57U;
	uint8_t x439 = 31U;
	static int32_t x440 = -1;
	volatile int64_t t76 = -1740614161627130156LL;

	t76 = ((x437%(x438%x439))|x440);

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x441 = 0U;
	uint16_t x442 = UINT16_MAX;
	uint32_t x443 = UINT32_MAX;
	static int64_t x444 = INT64_MAX;
	int64_t t77 = INT64_MAX;

	t77 = ((x441%(x442%x443))|x444);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x445 = 1989U;
	int16_t x446 = -1;
	uint32_t x447 = 6106U;
	int16_t x448 = 218;
	static uint32_t t78 = 27375U;

	t78 = ((x445%(x446%x447))|x448);

	if (t78 != 475U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x449 = 2093155598698342024LL;
	int64_t x450 = 141651024LL;
	volatile int16_t x451 = INT16_MAX;
	volatile int64_t t79 = 366936050LL;

	t79 = ((x449%(x450%x451))|x452);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x453 = INT64_MIN;
	static int64_t x454 = INT64_MIN;
	uint32_t x455 = UINT32_MAX;
	int64_t x456 = INT64_MAX;
	volatile int64_t t80 = INT64_MAX;

	t80 = ((x453%(x454%x455))|x456);

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x457 = INT32_MIN;
	volatile uint8_t x458 = UINT8_MAX;
	uint64_t x459 = 17393333600237LLU;
	static uint16_t x460 = 27U;
	volatile uint64_t t81 = 212404LLU;

	t81 = ((x457%(x458%x459))|x460);

	if (t81 != 155LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x462 = -1;
	int16_t x464 = INT16_MAX;
	static int32_t t82 = 3932335;

	t82 = ((x461%(x462%x463))|x464);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = INT8_MIN;
	int16_t x470 = -1;
	int32_t x471 = INT32_MIN;
	int8_t x472 = INT8_MAX;

	t83 = ((x469%(x470%x471))|x472);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x477 = 143195949U;
	int16_t x478 = -1;
	int32_t x479 = -59;
	static int8_t x480 = INT8_MIN;

	t84 = ((x477%(x478%x479))|x480);

	if (t84 != 4294967213U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x485 = -2799;
	int64_t x486 = 39239608424485LL;
	int16_t x488 = INT16_MIN;
	volatile int64_t t85 = 2577535178LL;

	t85 = ((x485%(x486%x487))|x488);

	if (t85 != -2799LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x489 = INT16_MIN;
	uint32_t x490 = 60946U;
	static int16_t x491 = 29;
	uint8_t x492 = 0U;
	volatile uint32_t t86 = 221860285U;

	t86 = ((x489%(x490%x491))|x492);

	if (t86 != 9U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x493 = 43U;
	uint64_t x494 = 713LLU;
	static uint32_t x496 = 536U;
	uint64_t t87 = 225693894905677LLU;

	t87 = ((x493%(x494%x495))|x496);

	if (t87 != 571LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x497 = INT8_MIN;
	int64_t x498 = INT64_MAX;
	volatile int32_t x499 = INT32_MIN;
	static uint8_t x500 = 6U;
	volatile int64_t t88 = -58480LL;

	t88 = ((x497%(x498%x499))|x500);

	if (t88 != -122LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x503 = -6987;
	uint16_t x504 = UINT16_MAX;
	uint64_t t89 = 257LLU;

	t89 = ((x501%(x502%x503))|x504);

	if (t89 != 65535LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x505 = INT8_MAX;
	static volatile int64_t x506 = INT64_MIN;
	volatile int64_t x507 = -24LL;

	t90 = ((x505%(x506%x507))|x508);

	if (t90 != -33LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x509 = 7;
	int64_t x510 = INT64_MIN;
	uint8_t x511 = 9U;
	int16_t x512 = -1;
	int64_t t91 = -72LL;

	t91 = ((x509%(x510%x511))|x512);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x513 = INT16_MIN;
	static int16_t x515 = -27;
	static int64_t x516 = INT64_MIN;

	t92 = ((x513%(x514%x515))|x516);

	if (t92 != 9223372036854775816LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x517 = 3U;
	int8_t x519 = -11;
	volatile int32_t t93 = 287058;

	t93 = ((x517%(x518%x519))|x520);

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x527 = -1;
	uint64_t t94 = 4456129994963LLU;

	t94 = ((x525%(x526%x527))|x528);

	if (t94 != 477LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x529 = -1;
	int8_t x530 = INT8_MAX;
	volatile int8_t x531 = INT8_MIN;
	int16_t x532 = INT16_MAX;
	volatile int32_t t95 = -12530012;

	t95 = ((x529%(x530%x531))|x532);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x533 = 30030U;
	uint32_t x535 = 124112498U;
	volatile int32_t x536 = INT32_MIN;
	volatile uint32_t t96 = 10792548U;

	t96 = ((x533%(x534%x535))|x536);

	if (t96 != 2147513678U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x537 = 45605629U;
	int64_t x540 = -16084564LL;
	volatile int64_t t97 = -2930857284LL;

	t97 = ((x537%(x538%x539))|x540);

	if (t97 != -16008771LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x541 = UINT64_MAX;
	volatile int16_t x542 = INT16_MAX;
	int32_t x543 = INT32_MAX;
	int32_t x544 = -1;

	t98 = ((x541%(x542%x543))|x544);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x549 = INT64_MAX;
	int32_t x550 = INT32_MIN;
	int64_t x551 = 63350750812907496LL;
	int8_t x552 = INT8_MIN;
	volatile int64_t t99 = 482594599014147LL;

	t99 = ((x549%(x550%x551))|x552);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

