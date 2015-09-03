#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x13 = 63LLU;
volatile uint64_t t3 = 2879006766LLU;
int32_t x25 = INT32_MAX;
uint64_t x27 = UINT64_MAX;
int64_t x28 = INT64_MAX;
uint64_t t4 = 1133995218656836571LLU;
static int8_t x30 = INT8_MIN;
volatile uint32_t x31 = 521U;
uint16_t x32 = 142U;
int8_t x35 = INT8_MIN;
int8_t x40 = -1;
volatile uint64_t t7 = 467967362LLU;
volatile int64_t t8 = 236755315495LL;
static int16_t x56 = -57;
volatile int64_t t9 = 0LL;
volatile int8_t x61 = -50;
int8_t x77 = INT8_MAX;
static uint32_t x79 = 124275609U;
int64_t x81 = 176816397585711648LL;
static volatile int32_t x82 = -168;
volatile int64_t x84 = 65234123822542LL;
volatile int64_t x88 = -12LL;
volatile uint16_t x104 = UINT16_MAX;
int64_t x137 = -3LL;
uint8_t x140 = UINT8_MAX;
uint16_t x142 = 26U;
static int64_t x143 = INT64_MIN;
static uint64_t x147 = 121LLU;
static volatile int16_t x148 = INT16_MAX;
int16_t x152 = -1;
int16_t x153 = INT16_MIN;
static uint8_t x155 = UINT8_MAX;
int32_t t26 = -3824;
int8_t x182 = INT8_MIN;
int8_t x197 = 10;
uint64_t x202 = 101210028699518LLU;
static int32_t x203 = INT32_MAX;
volatile int64_t x206 = INT64_MIN;
int32_t x214 = 12171;
volatile int64_t t33 = 529659395592766457LL;
uint32_t x219 = 16U;
int64_t x224 = INT64_MAX;
volatile int32_t t36 = 271897;
uint64_t x244 = UINT64_MAX;
uint64_t x255 = UINT64_MAX;
int8_t x256 = -1;
int8_t x260 = -3;
static uint8_t x262 = 0U;
int8_t x280 = -1;
int64_t x282 = INT64_MIN;
static int32_t x285 = INT32_MIN;
static int16_t x295 = INT16_MIN;
int32_t t50 = 1002;
static volatile int64_t t55 = 49206LL;
int16_t x325 = INT16_MIN;
static int32_t x336 = 1;
volatile int16_t x370 = 5;
volatile int8_t x373 = INT8_MIN;
volatile int64_t t66 = 229724001952LL;
int64_t t69 = 123214802602442686LL;
int8_t x402 = INT8_MIN;
volatile int8_t x404 = INT8_MAX;
volatile int64_t x411 = -1891985825LL;
int32_t x415 = -1;
int32_t x422 = INT32_MIN;
int64_t t82 = 5413317LL;
uint64_t t83 = 86037576089488LLU;
int64_t x464 = -1LL;
uint16_t x465 = 71U;
volatile int16_t x473 = -494;
volatile int64_t x474 = -6856901803LL;
volatile int64_t x480 = INT64_MIN;
uint16_t x488 = 71U;
uint64_t t88 = 441713LLU;
uint32_t x490 = 619409U;
uint64_t t89 = 9185636352LLU;
int32_t x495 = INT32_MAX;
static int64_t t90 = 6418LL;
static int16_t x497 = 87;
uint16_t x498 = UINT16_MAX;
int16_t x508 = INT16_MIN;
uint64_t t97 = 95LLU;
uint64_t x540 = 39LLU;
static volatile int32_t x554 = INT32_MIN;


void f0(void) {
	static uint16_t x5 = 669U;
	int32_t x6 = INT32_MIN;
	uint32_t x7 = 112828U;
	int8_t x8 = -1;
	volatile uint32_t t0 = 1U;

	t0 = (x5%((x6+x7)&x8));

	if (t0 != 669U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = UINT32_MAX;
	volatile uint64_t x10 = 134005LLU;
	uint8_t x11 = UINT8_MAX;
	uint16_t x12 = 253U;
	uint64_t t1 = 110LLU;

	t1 = (x9%((x10+x11)&x12));

	if (t1 != 15LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 260U;
	uint16_t x15 = 431U;
	int64_t x16 = INT64_MAX;
	static uint64_t t2 = 3811LLU;

	t2 = (x13%((x14+x15)&x16));

	if (t2 != 63LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x21 = UINT64_MAX;
	uint8_t x22 = UINT8_MAX;
	uint8_t x23 = 11U;
	volatile int8_t x24 = INT8_MAX;

	t3 = (x21%((x22+x23)&x24));

	if (t3 != 5LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = -1LL;

	t4 = (x25%((x26+x27)&x28));

	if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -6;
	uint32_t t5 = 19726U;

	t5 = (x29%((x30+x31)&x32));

	if (t5 != 114U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = 1;
	static int16_t x34 = 1;
	int32_t x36 = -914;
	volatile int32_t t6 = 15;

	t6 = (x33%((x34+x35)&x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x37 = 593LLU;
	static volatile uint32_t x38 = UINT32_MAX;
	int16_t x39 = -12;

	t7 = (x37%((x38+x39)&x40));

	if (t7 != 593LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile int16_t x46 = INT16_MIN;
	volatile int64_t x47 = INT64_MAX;
	int32_t x48 = INT32_MAX;

	t8 = (x45%((x46+x47)&x48));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = -1;
	int64_t x54 = 3317LL;
	int64_t x55 = -111448547320043810LL;

	t9 = (x53%((x54+x55)&x56));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x62 = INT16_MAX;
	int32_t x63 = -1;
	static uint16_t x64 = 10574U;
	int32_t t10 = 380;

	t10 = (x61%((x62+x63)&x64));

	if (t10 != -50) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x78 = INT64_MIN;
	int8_t x80 = INT8_MAX;
	volatile int64_t t11 = -14458659892462453LL;

	t11 = (x77%((x78+x79)&x80));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x83 = INT64_MAX;
	volatile int64_t t12 = 1213622126282470LL;

	t12 = (x81%((x82+x83)&x84));

	if (t12 != 31922026991388LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x85 = INT16_MIN;
	static uint8_t x86 = 1U;
	volatile uint16_t x87 = UINT16_MAX;
	int64_t t13 = -128860321511789LL;

	t13 = (x85%((x86+x87)&x88));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x89 = 7;
	static volatile int8_t x90 = 3;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t14 = 604967LL;

	t14 = (x89%((x90+x91)&x92));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 14872774338719LLU;
	int8_t x98 = 26;
	int8_t x99 = 19;
	uint32_t x100 = 141U;
	volatile uint64_t t15 = 198569LLU;

	t15 = (x97%((x98+x99)&x100));

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = INT32_MIN;
	static uint32_t x102 = 43921650U;
	int8_t x103 = -1;
	uint32_t t16 = 5058U;

	t16 = (x101%((x102+x103)&x104));

	if (t16 != 519U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x113 = -6758657120LL;
	static int16_t x114 = -1;
	static int16_t x115 = 295;
	volatile int64_t x116 = 12886LL;
	int64_t t17 = -1074712465940117402LL;

	t17 = (x113%((x114+x115)&x116));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x117 = -183561202LL;
	int64_t x118 = 40254714477703963LL;
	static int16_t x119 = INT16_MIN;
	uint8_t x120 = 31U;
	int64_t t18 = -3151455LL;

	t18 = (x117%((x118+x119)&x120));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = INT8_MIN;
	volatile int32_t x130 = INT32_MIN;
	static int8_t x131 = INT8_MAX;
	int32_t x132 = 176202;
	int32_t t19 = 13;

	t19 = (x129%((x130+x131)&x132));

	if (t19 != -54) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	volatile int64_t t20 = -6LL;

	t20 = (x137%((x138+x139)&x140));

	if (t20 != -3LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x141 = UINT32_MAX;
	static volatile int16_t x144 = -920;
	volatile int64_t t21 = 3013LL;

	t21 = (x141%((x142+x143)&x144));

	if (t21 != 4294967295LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x145 = -8740;
	int16_t x146 = 0;
	uint64_t t22 = 2LLU;

	t22 = (x145%((x146+x147)&x148));

	if (t22 != 65LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x149 = 3295U;
	uint64_t x150 = 1045839773167884LLU;
	uint64_t x151 = 227578046215995513LLU;
	volatile uint64_t t23 = 414252710353914LLU;

	t23 = (x149%((x150+x151)&x152));

	if (t23 != 3295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x154 = INT32_MIN;
	static uint16_t x156 = 13U;
	volatile int32_t t24 = -2;

	t24 = (x153%((x154+x155)&x156));

	if (t24 != -8) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x161 = UINT16_MAX;
	uint16_t x162 = 30802U;
	int8_t x163 = 1;
	volatile uint64_t x164 = 7444133077288331662LLU;
	static uint64_t t25 = 1144521873LLU;

	t25 = (x161%((x162+x163)&x164));

	if (t25 != 4083LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x169 = -1;
	int16_t x170 = INT16_MIN;
	static int8_t x171 = 4;
	int8_t x172 = -1;

	t26 = (x169%((x170+x171)&x172));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x183 = 1661004864U;
	uint32_t x184 = UINT32_MAX;
	uint32_t t27 = 145205U;

	t27 = (x181%((x182+x183)&x184));

	if (t27 != 255U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x185 = INT16_MIN;
	uint64_t x186 = 20447438647840149LLU;
	volatile int8_t x187 = INT8_MIN;
	static int8_t x188 = INT8_MAX;
	volatile uint64_t t28 = 145659213754885LLU;

	t28 = (x185%((x186+x187)&x188));

	if (t28 != 8LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MIN;
	static int64_t x200 = INT64_MAX;
	int64_t t29 = -1637299270683833380LL;

	t29 = (x197%((x198+x199)&x200));

	if (t29 != 10LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x201 = INT32_MIN;
	int8_t x204 = -1;
	volatile uint64_t t30 = 2196328296LLU;

	t30 = (x201%((x202+x203)&x204));

	if (t30 != 15264770781398LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = INT16_MIN;
	uint32_t x207 = 21U;
	volatile int64_t x208 = INT64_MAX;
	static int64_t t31 = -1246817LL;

	t31 = (x205%((x206+x207)&x208));

	if (t31 != -8LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x209 = 4;
	uint16_t x210 = 35U;
	int8_t x211 = 1;
	uint64_t x212 = 1856137807891361908LLU;
	volatile uint64_t t32 = 923853768506594119LLU;

	t32 = (x209%((x210+x211)&x212));

	if (t32 != 4LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x213 = -1957;
	int64_t x215 = INT64_MIN;
	int8_t x216 = -1;

	t33 = (x213%((x214+x215)&x216));

	if (t33 != -1957LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = INT32_MIN;
	static int16_t x218 = INT16_MAX;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t34 = 63U;

	t34 = (x217%((x218+x219)&x220));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x221 = 16920296549185452LLU;
	int8_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	volatile uint64_t t35 = 7051LLU;

	t35 = (x221%((x222+x223)&x224));

	if (t35 != 16920296549185452LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x225 = INT16_MIN;
	volatile int16_t x226 = -138;
	uint8_t x227 = 65U;
	volatile uint16_t x228 = 39U;

	t36 = (x225%((x226+x227)&x228));

	if (t36 != -8) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x229 = INT8_MIN;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = INT8_MIN;
	volatile int64_t x232 = -141099281568054LL;
	int64_t t37 = 54783420LL;

	t37 = (x229%((x230+x231)&x232));

	if (t37 != -54LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x241 = 3300062U;
	int8_t x242 = -4;
	volatile int8_t x243 = INT8_MIN;
	volatile uint64_t t38 = 14371371728270144LLU;

	t38 = (x241%((x242+x243)&x244));

	if (t38 != 3300062LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = -6LL;
	static int16_t x254 = INT16_MAX;
	volatile uint64_t t39 = 0LLU;

	t39 = (x253%((x254+x255)&x256));

	if (t39 != 250LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x257 = INT16_MIN;
	uint16_t x258 = UINT16_MAX;
	static int16_t x259 = INT16_MIN;
	int32_t t40 = 153;

	t40 = (x257%((x258+x259)&x260));

	if (t40 != -3) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x261 = 258;
	int32_t x263 = -1;
	static uint64_t x264 = 1849034738LLU;
	uint64_t t41 = 9070354258037816484LLU;

	t41 = (x261%((x262+x263)&x264));

	if (t41 != 258LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	int8_t x271 = 2;
	uint16_t x272 = UINT16_MAX;
	volatile int32_t t42 = 0;

	t42 = (x269%((x270+x271)&x272));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x273 = -6696882747903181LL;
	int8_t x274 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	int8_t x276 = 8;
	volatile int64_t t43 = -178LL;

	t43 = (x273%((x274+x275)&x276));

	if (t43 != -5LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	int64_t t44 = 6504267624018LL;

	t44 = (x277%((x278+x279)&x280));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x281 = -1;
	static volatile uint8_t x283 = UINT8_MAX;
	uint8_t x284 = UINT8_MAX;
	volatile int64_t t45 = -866LL;

	t45 = (x281%((x282+x283)&x284));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x286 = 3;
	static int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	static volatile int32_t t46 = 758978609;

	t46 = (x285%((x286+x287)&x288));

	if (t46 != -3) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x289 = INT8_MIN;
	volatile uint32_t x290 = 416626U;
	uint8_t x291 = 0U;
	int16_t x292 = -1;
	uint32_t t47 = 7U;

	t47 = (x289%((x290+x291)&x292));

	if (t47 != 386360U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x293 = 0;
	volatile uint16_t x294 = 130U;
	volatile int64_t x296 = INT64_MAX;
	int64_t t48 = 115306238935984LL;

	t48 = (x293%((x294+x295)&x296));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x297 = INT32_MAX;
	static int16_t x298 = -11;
	uint64_t x299 = UINT64_MAX;
	uint64_t x300 = 10526508967744LLU;
	volatile uint64_t t49 = 16736LLU;

	t49 = (x297%((x298+x299)&x300));

	if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x301 = -1;
	int32_t x302 = 3;
	static int8_t x303 = -24;
	int16_t x304 = INT16_MIN;

	t50 = (x301%((x302+x303)&x304));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = INT32_MAX;
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MAX;
	uint32_t x308 = UINT32_MAX;
	static int64_t t51 = 215452928LL;

	t51 = (x305%((x306+x307)&x308));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x309 = 25960770506LLU;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 1U;
	int64_t x312 = -1LL;
	uint64_t t52 = 3610324LLU;

	t52 = (x309%((x310+x311)&x312));

	if (t52 != 25960770506LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x313 = 3007U;
	uint8_t x314 = 7U;
	int16_t x315 = INT16_MIN;
	volatile int64_t x316 = INT64_MIN;
	int64_t t53 = 6173095858548343LL;

	t53 = (x313%((x314+x315)&x316));

	if (t53 != 3007LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x317 = -1LL;
	static volatile int8_t x318 = -1;
	volatile int16_t x319 = INT16_MIN;
	volatile uint32_t x320 = 518641028U;
	int64_t t54 = -14214464LL;

	t54 = (x317%((x318+x319)&x320));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x321 = 0;
	volatile int32_t x322 = 57495;
	int64_t x323 = INT64_MIN;
	volatile int16_t x324 = INT16_MAX;

	t55 = (x321%((x322+x323)&x324));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x326 = 148862344034151329LL;
	uint8_t x327 = 11U;
	int64_t x328 = 93949001442LL;
	int64_t t56 = -9037LL;

	t56 = (x325%((x326+x327)&x328));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = INT8_MAX;
	int64_t x331 = -1LL;
	static uint8_t x332 = UINT8_MAX;
	volatile int64_t t57 = -7467332920872163LL;

	t57 = (x329%((x330+x331)&x332));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x333 = INT32_MIN;
	static uint16_t x334 = 5833U;
	static int8_t x335 = INT8_MIN;
	int32_t t58 = 21;

	t58 = (x333%((x334+x335)&x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x337 = -1;
	int64_t x338 = 8897388902LL;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = -1;
	volatile int64_t t59 = -4344LL;

	t59 = (x337%((x338+x339)&x340));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x341 = INT32_MIN;
	volatile uint16_t x342 = 11U;
	volatile uint16_t x343 = UINT16_MAX;
	uint16_t x344 = UINT16_MAX;
	int32_t t60 = -55859078;

	t60 = (x341%((x342+x343)&x344));

	if (t60 != -8) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x353 = -1;
	static int16_t x354 = INT16_MIN;
	static int32_t x355 = -1;
	volatile uint64_t x356 = 6970LLU;
	volatile uint64_t t61 = 3520314788015962485LLU;

	t61 = (x353%((x354+x355)&x356));

	if (t61 != 425LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 11110136LLU;
	volatile int16_t x363 = 14485;
	int64_t x364 = INT64_MAX;
	static uint64_t t62 = 2LLU;

	t62 = (x361%((x362+x363)&x364));

	if (t62 != 255LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x365 = UINT8_MAX;
	uint64_t x366 = 259158116315684LLU;
	static int64_t x367 = INT64_MIN;
	volatile int8_t x368 = INT8_MIN;
	uint64_t t63 = 204281084LLU;

	t63 = (x365%((x366+x367)&x368));

	if (t63 != 255LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x369 = 25;
	int32_t x371 = -253;
	int16_t x372 = -1;
	volatile int32_t t64 = 61;

	t64 = (x369%((x370+x371)&x372));

	if (t64 != 25) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MAX;
	uint16_t x376 = UINT16_MAX;
	volatile int64_t t65 = 10171LL;

	t65 = (x373%((x374+x375)&x376));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x377 = INT64_MIN;
	volatile uint16_t x378 = 3U;
	static uint16_t x379 = 1U;
	static int64_t x380 = INT64_MAX;

	t66 = (x377%((x378+x379)&x380));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x381 = INT64_MIN;
	static int64_t x382 = 31627907533LL;
	uint64_t x383 = UINT64_MAX;
	int8_t x384 = -14;
	uint64_t t67 = 33145565313154554LLU;

	t67 = (x381%((x382+x383)&x384));

	if (t67 != 23546079488LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x385 = 25U;
	static int16_t x386 = INT16_MAX;
	int8_t x387 = -3;
	int8_t x388 = INT8_MIN;
	static int32_t t68 = 2;

	t68 = (x385%((x386+x387)&x388));

	if (t68 != 25) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 2179536U;
	uint32_t x392 = UINT32_MAX;

	t69 = (x389%((x390+x391)&x392));

	if (t69 != 1281375LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x393 = INT64_MAX;
	static uint8_t x394 = 63U;
	int16_t x395 = INT16_MIN;
	int16_t x396 = 1;
	volatile int64_t t70 = 666LL;

	t70 = (x393%((x394+x395)&x396));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x397 = INT16_MAX;
	static int32_t x398 = -1;
	uint16_t x399 = UINT16_MAX;
	volatile uint32_t x400 = 5408U;
	uint32_t t71 = 14764107U;

	t71 = (x397%((x398+x399)&x400));

	if (t71 != 319U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x401 = INT64_MIN;
	static volatile int32_t x403 = -4;
	int64_t t72 = 83573612LL;

	t72 = (x401%((x402+x403)&x404));

	if (t72 != -8LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x405 = -1;
	int64_t x406 = -2204303109LL;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = -1;
	int64_t t73 = -1LL;

	t73 = (x405%((x406+x407)&x408));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x409 = 369U;
	int8_t x410 = INT8_MIN;
	volatile int64_t x412 = INT64_MIN;
	static int64_t t74 = 8103944130LL;

	t74 = (x409%((x410+x411)&x412));

	if (t74 != 369LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x413 = UINT32_MAX;
	int32_t x414 = -1;
	static int64_t x416 = INT64_MIN;
	int64_t t75 = -8184191700LL;

	t75 = (x413%((x414+x415)&x416));

	if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x421 = UINT16_MAX;
	int32_t x423 = INT32_MAX;
	static int8_t x424 = INT8_MAX;
	volatile int32_t t76 = -2;

	t76 = (x421%((x422+x423)&x424));

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x425 = 4;
	int32_t x426 = INT32_MAX;
	static int16_t x427 = INT16_MIN;
	uint8_t x428 = UINT8_MAX;
	int32_t t77 = -1;

	t77 = (x425%((x426+x427)&x428));

	if (t77 != 4) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = INT64_MAX;
	uint64_t x430 = 3006435LLU;
	static uint8_t x431 = 1U;
	int8_t x432 = -1;
	uint64_t t78 = 1704551362237318268LLU;

	t78 = (x429%((x430+x431)&x432));

	if (t78 != 372699LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x433 = 2057281793354537640LLU;
	volatile uint64_t x434 = 40876458154952397LLU;
	static uint8_t x435 = 85U;
	static int16_t x436 = INT16_MIN;
	volatile uint64_t t79 = 2919471297LLU;

	t79 = (x433%((x434+x435)&x436));

	if (t79 != 13458885607004840LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x437 = 1;
	uint64_t x438 = 117867106911LLU;
	static volatile int16_t x439 = -1;
	int32_t x440 = INT32_MIN;
	uint64_t t80 = 369863580394982LLU;

	t80 = (x437%((x438+x439)&x440));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x441 = 95U;
	static uint8_t x442 = 3U;
	int16_t x443 = INT16_MIN;
	volatile uint16_t x444 = UINT16_MAX;
	int32_t t81 = -5833881;

	t81 = (x441%((x442+x443)&x444));

	if (t81 != 95) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x449 = INT32_MIN;
	static volatile int16_t x450 = INT16_MIN;
	uint32_t x451 = 1U;
	volatile int64_t x452 = -1LL;

	t82 = (x449%((x450+x451)&x452));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x457 = 249;
	int16_t x458 = INT16_MIN;
	static uint64_t x459 = 10LLU;
	int64_t x460 = INT64_MIN;

	t83 = (x457%((x458+x459)&x460));

	if (t83 != 249LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x461 = UINT8_MAX;
	volatile uint64_t x462 = 91834003351105579LLU;
	static uint8_t x463 = 90U;
	static volatile uint64_t t84 = 1794878005854289LLU;

	t84 = (x461%((x462+x463)&x464));

	if (t84 != 255LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x466 = INT8_MIN;
	int8_t x467 = 1;
	int64_t x468 = INT64_MAX;
	volatile int64_t t85 = -159323284566676507LL;

	t85 = (x465%((x466+x467)&x468));

	if (t85 != 71LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x475 = 1U;
	volatile uint8_t x476 = UINT8_MAX;
	volatile int64_t t86 = -3697912LL;

	t86 = (x473%((x474+x475)&x476));

	if (t86 != -64LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x477 = 1014829954U;
	volatile uint8_t x478 = 111U;
	int64_t x479 = INT64_MIN;
	static int64_t t87 = 63LL;

	t87 = (x477%((x478+x479)&x480));

	if (t87 != 1014829954LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x485 = 112LLU;
	uint8_t x486 = 0U;
	static uint32_t x487 = UINT32_MAX;

	t88 = (x485%((x486+x487)&x488));

	if (t88 != 41LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x489 = 608259LLU;
	int8_t x491 = INT8_MAX;
	uint8_t x492 = UINT8_MAX;

	t89 = (x489%((x490+x491)&x492));

	if (t89 != 3LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x493 = INT16_MIN;
	int64_t x494 = INT64_MIN;
	int8_t x496 = -1;

	t90 = (x493%((x494+x495)&x496));

	if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x499 = -1;
	uint8_t x500 = 33U;
	static int32_t t91 = -845;

	t91 = (x497%((x498+x499)&x500));

	if (t91 != 23) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x501 = 3043U;
	int16_t x502 = INT16_MIN;
	int8_t x503 = INT8_MIN;
	static int32_t x504 = INT32_MAX;
	volatile int32_t t92 = 219261961;

	t92 = (x501%((x502+x503)&x504));

	if (t92 != 3043) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x505 = 1;
	volatile uint64_t x506 = 1442408176390LLU;
	static uint16_t x507 = 3460U;
	volatile uint64_t t93 = 257029520993947373LLU;

	t93 = (x505%((x506+x507)&x508));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x509 = UINT64_MAX;
	int8_t x510 = INT8_MIN;
	int16_t x511 = -1;
	uint32_t x512 = 65U;
	volatile uint64_t t94 = 8491606171199640LLU;

	t94 = (x509%((x510+x511)&x512));

	if (t94 != 15LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x513 = 6715LLU;
	uint32_t x514 = 236379968U;
	int8_t x515 = 0;
	uint64_t x516 = 3558755092816456LLU;
	uint64_t t95 = 1734506LLU;

	t95 = (x513%((x514+x515)&x516));

	if (t95 != 6715LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x521 = -1;
	static int8_t x522 = INT8_MIN;
	volatile uint16_t x523 = 40U;
	int64_t x524 = INT64_MIN;
	volatile int64_t t96 = 99487717LL;

	t96 = (x521%((x522+x523)&x524));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x525 = 10205342201LLU;
	int32_t x526 = -1;
	static volatile int32_t x527 = INT32_MAX;
	volatile uint32_t x528 = UINT32_MAX;

	t97 = (x525%((x526+x527)&x528));

	if (t97 != 1615407617LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x537 = INT8_MAX;
	volatile uint64_t x538 = UINT64_MAX;
	int16_t x539 = -2;
	volatile uint64_t t98 = 58013050LLU;

	t98 = (x537%((x538+x539)&x540));

	if (t98 != 16LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x553 = INT32_MIN;
	volatile int32_t x555 = 11;
	int16_t x556 = 2561;
	volatile int32_t t99 = 5;

	t99 = (x553%((x554+x555)&x556));

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

