#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MAX;
int16_t x4 = 57;
int64_t x12 = -33307LL;
static volatile uint32_t x20 = 1706088175U;
volatile int64_t t4 = 7442064127540LL;
volatile int16_t x28 = -303;
int16_t x46 = -1;
volatile int32_t t7 = 116534852;
volatile int16_t x51 = -966;
int64_t x52 = -2022LL;
volatile uint32_t x53 = UINT32_MAX;
uint32_t x60 = 323830542U;
int64_t x69 = INT64_MAX;
int8_t x72 = INT8_MIN;
volatile uint16_t x78 = 720U;
volatile int32_t t17 = 18;
uint32_t x118 = UINT32_MAX;
int64_t t20 = 20218444565770020LL;
int8_t x127 = INT8_MAX;
static int64_t x131 = INT64_MIN;
uint32_t x142 = 227U;
int16_t x156 = -1;
uint16_t x160 = 46U;
uint32_t x164 = UINT32_MAX;
int32_t x167 = INT32_MIN;
static uint64_t x173 = 6703385589507860LLU;
uint8_t x175 = UINT8_MAX;
int32_t x177 = INT32_MAX;
uint8_t x179 = UINT8_MAX;
int16_t x183 = INT16_MIN;
volatile uint32_t x185 = 69U;
volatile int8_t x192 = 3;
int16_t x194 = INT16_MIN;
volatile int32_t x196 = INT32_MIN;
int32_t x200 = INT32_MIN;
static volatile uint64_t t36 = 2471LLU;
int8_t x201 = 19;
int16_t x203 = 40;
int8_t x215 = INT8_MAX;
static volatile int32_t t38 = -119263;
volatile int16_t x218 = INT16_MAX;
static int8_t x219 = INT8_MIN;
static volatile uint8_t x221 = 70U;
uint8_t x224 = 8U;
static uint16_t x226 = UINT16_MAX;
int32_t t41 = -12875430;
int8_t x232 = INT8_MAX;
volatile int64_t t42 = 1940088LL;
uint64_t x238 = 3993015551LLU;
static int64_t x239 = INT64_MIN;
volatile int8_t x240 = INT8_MAX;
int16_t x242 = -1;
uint8_t x246 = 43U;
static uint32_t x257 = 30128443U;
volatile int8_t x258 = INT8_MIN;
int32_t x264 = -8979;
int32_t t48 = 2851592;
int16_t x268 = INT16_MAX;
volatile uint32_t t49 = 61U;
static int32_t t50 = 150;
static int8_t x273 = INT8_MAX;
int32_t t51 = 408;
static uint32_t x277 = 14872U;
int16_t x280 = 14023;
static volatile uint32_t t52 = 18646U;
volatile uint16_t x282 = 250U;
int64_t t54 = 80817304768127LL;
static volatile uint16_t x289 = 5U;
volatile int64_t t56 = 40265668007454LL;
volatile uint32_t t57 = 112058994U;
static uint8_t x313 = 1U;
int32_t x315 = INT32_MIN;
uint64_t x316 = 24380906885LLU;
uint64_t t61 = 4287264377229928513LLU;
volatile uint64_t t62 = 1710717762111LLU;
uint8_t x325 = 0U;
int16_t x329 = -1;
uint64_t x332 = 1797091641807025978LLU;
volatile uint32_t t64 = 110461718U;
int8_t x337 = INT8_MIN;
volatile int16_t x340 = INT16_MIN;
volatile int64_t x343 = -1LL;
int32_t t66 = 36248;
uint8_t x353 = UINT8_MAX;
static int64_t x354 = INT64_MIN;
volatile int64_t t68 = 3668LL;
static volatile uint32_t x365 = UINT32_MAX;
uint16_t x366 = 264U;
int8_t x375 = 1;
int64_t t72 = -52740964LL;
volatile uint32_t t73 = 384U;
uint32_t t78 = 47491933U;
volatile int16_t x422 = -1;
volatile int16_t x427 = INT16_MAX;
uint16_t x435 = 4389U;
static volatile int32_t t82 = 13;
uint64_t x447 = 4352634794546139LLU;
int16_t x452 = -6620;
int64_t t84 = -21658LL;
int8_t x457 = INT8_MIN;
int8_t x461 = INT8_MAX;
uint64_t x476 = 89389LLU;
uint64_t t91 = 1231037371067170722LLU;
int32_t x503 = INT32_MIN;
volatile int32_t t94 = -12262;
int64_t x527 = -1LL;
volatile uint64_t t97 = 1139762LLU;
int8_t x536 = 1;
int32_t t98 = 31;
int32_t x537 = -1551927;
uint64_t x538 = 64216149LLU;
uint64_t t99 = 4775758929379119LLU;


void f0(void) {
	static volatile int64_t x1 = INT64_MAX;
	uint16_t x2 = UINT16_MAX;
	static int64_t t0 = -205989212LL;

	t0 = ((x1%x2)>>(x3<=x4));

	if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x9 = 30LL;
	uint8_t x10 = UINT8_MAX;
	static int64_t x11 = 3447499130LL;
	int64_t t1 = 68LL;

	t1 = ((x9%x10)>>(x11<=x12));

	if (t1 != 30LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	volatile int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MIN;
	static volatile int32_t t2 = 41;

	t2 = ((x13%x14)>>(x15<=x16));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = -1;
	uint64_t x19 = UINT64_MAX;
	int32_t t3 = 7;

	t3 = ((x17%x18)>>(x19<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x21 = INT64_MAX;
	int16_t x22 = 7;
	volatile uint64_t x23 = 3LLU;
	int32_t x24 = -6098;

	t4 = ((x21%x22)>>(x23<=x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint8_t x26 = 15U;
	volatile int32_t x27 = -796574740;
	int32_t t5 = -4988;

	t5 = ((x25%x26)>>(x27<=x28));

	if (t5 != 3) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 123062648U;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = 6498224LL;
	uint32_t x32 = UINT32_MAX;
	static volatile uint64_t t6 = 507932752219795194LLU;

	t6 = ((x29%x30)>>(x31<=x32));

	if (t6 != 61531324LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = UINT16_MAX;
	int16_t x47 = INT16_MIN;
	int16_t x48 = INT16_MIN;

	t7 = ((x45%x46)>>(x47<=x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -1LL;
	static int16_t x50 = -1;
	static int64_t t8 = -42827LL;

	t8 = ((x49%x50)>>(x51<=x52));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x54 = 2282;
	uint64_t x55 = 39056LLU;
	int32_t x56 = INT32_MAX;
	static uint32_t t9 = 219352426U;

	t9 = ((x53%x54)>>(x55<=x56));

	if (t9 != 701U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 123175LLU;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = INT32_MAX;
	uint64_t t10 = 3766857630736LLU;

	t10 = ((x57%x58)>>(x59<=x60));

	if (t10 != 123175LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = -1LL;
	volatile int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	uint64_t t11 = 278890167725571LLU;

	t11 = ((x65%x66)>>(x67<=x68));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x70 = -157;
	static volatile int32_t x71 = -704731;
	int64_t t12 = 4962845211LL;

	t12 = ((x69%x70)>>(x71<=x72));

	if (t12 != 3LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = -1;
	static uint64_t x75 = UINT64_MAX;
	static int32_t x76 = -38791;
	static volatile int64_t t13 = -86087181464240LL;

	t13 = ((x73%x74)>>(x75<=x76));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 159U;
	int16_t x79 = INT16_MAX;
	int32_t x80 = 3197;
	volatile int32_t t14 = -100489;

	t14 = ((x77%x78)>>(x79<=x80));

	if (t14 != 159) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x89 = 104661;
	static int8_t x90 = INT8_MIN;
	int16_t x91 = -8738;
	int32_t x92 = INT32_MIN;
	volatile int32_t t15 = -1;

	t15 = ((x89%x90)>>(x91<=x92));

	if (t15 != 85) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x97 = -988;
	static int8_t x98 = -1;
	int64_t x99 = INT64_MAX;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t16 = -1172119;

	t16 = ((x97%x98)>>(x99<=x100));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = 15986;
	int8_t x102 = INT8_MAX;
	int8_t x103 = INT8_MIN;
	volatile uint32_t x104 = 215U;

	t17 = ((x101%x102)>>(x103<=x104));

	if (t17 != 111) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = INT16_MAX;
	volatile uint8_t x106 = UINT8_MAX;
	static int64_t x107 = 936438597095333025LL;
	uint64_t x108 = 273072365732LLU;
	int32_t t18 = 1;

	t18 = ((x105%x106)>>(x107<=x108));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x113 = 6;
	static uint8_t x114 = 1U;
	int8_t x115 = -1;
	static uint64_t x116 = UINT64_MAX;
	static volatile int32_t t19 = 9;

	t19 = ((x113%x114)>>(x115<=x116));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x117 = INT64_MAX;
	volatile int8_t x119 = -1;
	int32_t x120 = 12;

	t20 = ((x117%x118)>>(x119<=x120));

	if (t20 != 1073741823LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = 1936U;
	static volatile int16_t x126 = INT16_MIN;
	static int16_t x128 = INT16_MAX;
	volatile int32_t t21 = 497;

	t21 = ((x125%x126)>>(x127<=x128));

	if (t21 != 968) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x129 = 6596973781684270564LLU;
	static int32_t x130 = INT32_MIN;
	static int8_t x132 = INT8_MIN;
	volatile uint64_t t22 = 30057606425607LLU;

	t22 = ((x129%x130)>>(x131<=x132));

	if (t22 != 3298486890842135282LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x141 = 5274086288590LL;
	int16_t x143 = -1;
	volatile int8_t x144 = INT8_MIN;
	int64_t t23 = 114758LL;

	t23 = ((x141%x142)>>(x143<=x144));

	if (t23 != 36LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x145 = 2848U;
	volatile uint64_t x146 = UINT64_MAX;
	static int32_t x147 = -1;
	volatile uint16_t x148 = UINT16_MAX;
	uint64_t t24 = 256212288LLU;

	t24 = ((x145%x146)>>(x147<=x148));

	if (t24 != 1424LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x153 = 5;
	static int32_t x154 = INT32_MIN;
	static uint32_t x155 = 1018840506U;
	volatile int32_t t25 = -1351;

	t25 = ((x153%x154)>>(x155<=x156));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = 886399454LLU;
	static volatile uint16_t x158 = UINT16_MAX;
	int8_t x159 = -1;
	uint64_t t26 = 977079129167915594LLU;

	t26 = ((x157%x158)>>(x159<=x160));

	if (t26 != 19289LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x161 = 332U;
	int8_t x162 = INT8_MIN;
	int32_t x163 = 217161518;
	uint32_t t27 = 114U;

	t27 = ((x161%x162)>>(x163<=x164));

	if (t27 != 166U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x165 = INT64_MAX;
	volatile int64_t x166 = INT64_MAX;
	int16_t x168 = 2;
	static volatile int64_t t28 = -28563LL;

	t28 = ((x165%x166)>>(x167<=x168));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x169 = INT16_MAX;
	uint64_t x170 = UINT64_MAX;
	static uint8_t x171 = 4U;
	uint8_t x172 = 0U;
	volatile uint64_t t29 = 0LLU;

	t29 = ((x169%x170)>>(x171<=x172));

	if (t29 != 32767LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x174 = INT16_MAX;
	int32_t x176 = INT32_MIN;
	uint64_t t30 = 5572321569378LLU;

	t30 = ((x173%x174)>>(x175<=x176));

	if (t30 != 21582LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x178 = INT16_MIN;
	int16_t x180 = INT16_MIN;
	volatile int32_t t31 = 1770315;

	t31 = ((x177%x178)>>(x179<=x180));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x181 = INT16_MAX;
	uint32_t x182 = UINT32_MAX;
	int32_t x184 = -960;
	static uint32_t t32 = 69221943U;

	t32 = ((x181%x182)>>(x183<=x184));

	if (t32 != 16383U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x186 = INT8_MAX;
	int16_t x187 = -1;
	int64_t x188 = 34261558LL;
	uint32_t t33 = 7290761U;

	t33 = ((x185%x186)>>(x187<=x188));

	if (t33 != 34U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MIN;
	static int64_t x191 = INT64_MAX;
	int64_t t34 = 24715283159852LL;

	t34 = ((x189%x190)>>(x191<=x192));

	if (t34 != 32767LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x193 = 306;
	int8_t x195 = INT8_MAX;
	int32_t t35 = 91731;

	t35 = ((x193%x194)>>(x195<=x196));

	if (t35 != 306) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x197 = 65724123852025LLU;
	static uint16_t x198 = UINT16_MAX;
	volatile int16_t x199 = INT16_MIN;

	t36 = ((x197%x198)>>(x199<=x200));

	if (t36 != 65485LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x202 = 26U;
	int8_t x204 = -1;
	volatile uint32_t t37 = 85783152U;

	t37 = ((x201%x202)>>(x203<=x204));

	if (t37 != 19U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	int8_t x216 = -50;

	t38 = ((x213%x214)>>(x215<=x216));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x217 = INT16_MAX;
	static int64_t x220 = -189968291344886132LL;
	static int32_t t39 = 381;

	t39 = ((x217%x218)>>(x219<=x220));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x222 = -1;
	int64_t x223 = -1LL;
	int32_t t40 = 119;

	t40 = ((x221%x222)>>(x223<=x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x225 = INT8_MAX;
	int32_t x227 = -347;
	static int32_t x228 = INT32_MAX;

	t41 = ((x225%x226)>>(x227<=x228));

	if (t41 != 63) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MAX;
	volatile int64_t x230 = INT64_MIN;
	int32_t x231 = -1;

	t42 = ((x229%x230)>>(x231<=x232));

	if (t42 != 16383LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x237 = INT16_MAX;
	uint64_t t43 = 320062984553610LLU;

	t43 = ((x237%x238)>>(x239<=x240));

	if (t43 != 16383LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x241 = 29586U;
	volatile int64_t x243 = INT64_MAX;
	static int8_t x244 = -1;
	int32_t t44 = 100775;

	t44 = ((x241%x242)>>(x243<=x244));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x245 = INT8_MAX;
	static volatile int32_t x247 = INT32_MIN;
	volatile int64_t x248 = -1LL;
	static int32_t t45 = 6;

	t45 = ((x245%x246)>>(x247<=x248));

	if (t45 != 20) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x249 = 4;
	static int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MIN;
	uint64_t x252 = 10868810302594LLU;
	int32_t t46 = -1045;

	t46 = ((x249%x250)>>(x251<=x252));

	if (t46 != 4) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x259 = 70U;
	static uint32_t x260 = 5384U;
	uint32_t t47 = 65420210U;

	t47 = ((x257%x258)>>(x259<=x260));

	if (t47 != 15064221U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x261 = UINT8_MAX;
	static uint16_t x262 = 56U;
	int64_t x263 = INT64_MAX;

	t48 = ((x261%x262)>>(x263<=x264));

	if (t48 != 31) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x265 = INT32_MIN;
	static uint32_t x266 = UINT32_MAX;
	static int32_t x267 = INT32_MIN;

	t49 = ((x265%x266)>>(x267<=x268));

	if (t49 != 1073741824U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	uint16_t x271 = 325U;
	uint32_t x272 = 108U;

	t50 = ((x269%x270)>>(x271<=x272));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x274 = 89U;
	int8_t x275 = INT8_MIN;
	uint8_t x276 = UINT8_MAX;

	t51 = ((x273%x274)>>(x275<=x276));

	if (t51 != 19) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x278 = INT32_MAX;
	volatile uint8_t x279 = 22U;

	t52 = ((x277%x278)>>(x279<=x280));

	if (t52 != 7436U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x281 = 0LL;
	static int32_t x283 = -1;
	int32_t x284 = 13349834;
	volatile int64_t t53 = -19465161276479171LL;

	t53 = ((x281%x282)>>(x283<=x284));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = 0LL;
	int32_t x286 = INT32_MIN;
	int64_t x287 = 14669422LL;
	volatile int16_t x288 = INT16_MIN;

	t54 = ((x285%x286)>>(x287<=x288));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x290 = INT32_MAX;
	volatile uint8_t x291 = 9U;
	int32_t x292 = INT32_MIN;
	int32_t t55 = -363384;

	t55 = ((x289%x290)>>(x291<=x292));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = 417466767350168LL;
	int64_t x299 = INT64_MAX;
	int32_t x300 = -1;

	t56 = ((x297%x298)>>(x299<=x300));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x301 = 84897U;
	static int16_t x302 = 12610;
	volatile int32_t x303 = -1;
	int64_t x304 = INT64_MIN;

	t57 = ((x301%x302)>>(x303<=x304));

	if (t57 != 9237U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x305 = INT8_MAX;
	static int64_t x306 = INT64_MIN;
	int16_t x307 = -4;
	int16_t x308 = INT16_MIN;
	static volatile int64_t t58 = 168LL;

	t58 = ((x305%x306)>>(x307<=x308));

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x309 = INT64_MAX;
	volatile int64_t x310 = 1152126LL;
	volatile int8_t x311 = INT8_MIN;
	uint64_t x312 = 15LLU;
	int64_t t59 = 3146LL;

	t59 = ((x309%x310)>>(x311<=x312));

	if (t59 != 240793LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x314 = -1;
	volatile int32_t t60 = 0;

	t60 = ((x313%x314)>>(x315<=x316));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = UINT64_MAX;
	uint8_t x319 = 39U;
	uint8_t x320 = UINT8_MAX;

	t61 = ((x317%x318)>>(x319<=x320));

	if (t61 != 2147483647LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x321 = 4169123014802LLU;
	int8_t x322 = INT8_MIN;
	static int32_t x323 = INT32_MIN;
	uint32_t x324 = 565492U;

	t62 = ((x321%x322)>>(x323<=x324));

	if (t62 != 4169123014802LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x326 = INT16_MIN;
	int64_t x327 = 201524223684937LL;
	volatile uint8_t x328 = 3U;
	int32_t t63 = 1;

	t63 = ((x325%x326)>>(x327<=x328));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x330 = 6U;
	int16_t x331 = -368;

	t64 = ((x329%x330)>>(x331<=x332));

	if (t64 != 3U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x338 = UINT32_MAX;
	uint64_t x339 = 13930LLU;
	uint32_t t65 = 388U;

	t65 = ((x337%x338)>>(x339<=x340));

	if (t65 != 2147483584U) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t x344 = INT32_MAX;

	t66 = ((x341%x342)>>(x343<=x344));

	if (t66 != 63) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x349 = 42787843331815479LLU;
	int8_t x350 = INT8_MAX;
	int64_t x351 = -415037340379LL;
	volatile int64_t x352 = INT64_MAX;
	volatile uint64_t t67 = 47537615361733LLU;

	t67 = ((x349%x350)>>(x351<=x352));

	if (t67 != 33LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x355 = 1108431;
	static int8_t x356 = -8;

	t68 = ((x353%x354)>>(x355<=x356));

	if (t68 != 255LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x357 = 73U;
	int16_t x358 = INT16_MIN;
	int32_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	int32_t t69 = -275;

	t69 = ((x357%x358)>>(x359<=x360));

	if (t69 != 36) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x367 = 1843U;
	int8_t x368 = 1;
	static volatile uint32_t t70 = 62U;

	t70 = ((x365%x366)>>(x367<=x368));

	if (t70 != 135U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x369 = UINT8_MAX;
	int64_t x370 = INT64_MIN;
	int64_t x371 = 13799570635LL;
	static int16_t x372 = INT16_MIN;
	static volatile int64_t t71 = 13717004619LL;

	t71 = ((x369%x370)>>(x371<=x372));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = UINT32_MAX;
	int64_t x374 = INT64_MAX;
	int64_t x376 = INT64_MIN;

	t72 = ((x373%x374)>>(x375<=x376));

	if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x377 = 1U;
	static uint8_t x378 = UINT8_MAX;
	volatile uint32_t x379 = 95U;
	volatile int64_t x380 = 7141284830232815LL;

	t73 = ((x377%x378)>>(x379<=x380));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x381 = 2526U;
	int64_t x382 = -3326707LL;
	int16_t x383 = INT16_MAX;
	int8_t x384 = -9;
	static int64_t t74 = -44822312452077LL;

	t74 = ((x381%x382)>>(x383<=x384));

	if (t74 != 2526LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x389 = UINT64_MAX;
	int32_t x390 = INT32_MAX;
	int8_t x391 = INT8_MIN;
	static int16_t x392 = -1;
	volatile uint64_t t75 = 1935LLU;

	t75 = ((x389%x390)>>(x391<=x392));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x393 = 1165444;
	static uint64_t x394 = UINT64_MAX;
	uint64_t x395 = UINT64_MAX;
	uint16_t x396 = 533U;
	volatile uint64_t t76 = 28173642164029LLU;

	t76 = ((x393%x394)>>(x395<=x396));

	if (t76 != 1165444LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x405 = UINT16_MAX;
	volatile int16_t x406 = 210;
	uint32_t x407 = 5U;
	int64_t x408 = INT64_MAX;
	int32_t t77 = -123001;

	t77 = ((x405%x406)>>(x407<=x408));

	if (t77 != 7) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x409 = 0U;
	uint32_t x410 = 409U;
	static volatile uint64_t x411 = 247938LLU;
	volatile int8_t x412 = INT8_MIN;

	t78 = ((x409%x410)>>(x411<=x412));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x421 = 955196U;
	volatile int64_t x423 = -789587094250999LL;
	int8_t x424 = INT8_MAX;
	uint32_t t79 = 58889U;

	t79 = ((x421%x422)>>(x423<=x424));

	if (t79 != 477598U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x426 = 2U;
	uint8_t x428 = 10U;
	static int32_t t80 = -25241;

	t80 = ((x425%x426)>>(x427<=x428));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x429 = 82850370U;
	static uint64_t x430 = UINT64_MAX;
	int8_t x431 = 12;
	int8_t x432 = 2;
	uint64_t t81 = 2784040LLU;

	t81 = ((x429%x430)>>(x431<=x432));

	if (t81 != 82850370LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x433 = 335103;
	static int16_t x434 = INT16_MIN;
	static uint8_t x436 = UINT8_MAX;

	t82 = ((x433%x434)>>(x435<=x436));

	if (t82 != 7423) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x445 = UINT16_MAX;
	uint8_t x446 = 37U;
	static int16_t x448 = INT16_MAX;
	int32_t t83 = 10455;

	t83 = ((x445%x446)>>(x447<=x448));

	if (t83 != 8) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = UINT16_MAX;
	volatile int64_t x450 = -6802180200LL;
	int32_t x451 = -19865921;

	t84 = ((x449%x450)>>(x451<=x452));

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x453 = 139923LLU;
	int64_t x454 = 1LL;
	int16_t x455 = 1;
	uint64_t x456 = UINT64_MAX;
	static uint64_t t85 = 2011LLU;

	t85 = ((x453%x454)>>(x455<=x456));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x458 = UINT64_MAX;
	int64_t x459 = INT64_MIN;
	int32_t x460 = INT32_MIN;
	uint64_t t86 = 17387237247568480LLU;

	t86 = ((x457%x458)>>(x459<=x460));

	if (t86 != 9223372036854775744LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x462 = 1396687699LLU;
	uint64_t x463 = 241LLU;
	volatile int64_t x464 = -7828337794740LL;
	volatile uint64_t t87 = 1703762872865249LLU;

	t87 = ((x461%x462)>>(x463<=x464));

	if (t87 != 63LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x473 = INT32_MAX;
	volatile int32_t x474 = -655974;
	int16_t x475 = 2;
	int32_t t88 = 0;

	t88 = ((x473%x474)>>(x475<=x476));

	if (t88 != 240372) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = INT32_MIN;
	uint8_t x478 = 1U;
	int32_t x479 = -1;
	uint32_t x480 = UINT32_MAX;
	static int32_t t89 = 4055304;

	t89 = ((x477%x478)>>(x479<=x480));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x481 = INT8_MAX;
	static uint16_t x482 = 1U;
	int8_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t90 = -1557;

	t90 = ((x481%x482)>>(x483<=x484));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x497 = 35997077256602875LLU;
	static volatile uint64_t x498 = 3450237075LLU;
	int16_t x499 = INT16_MAX;
	static int16_t x500 = -1;

	t91 = ((x497%x498)>>(x499<=x500));

	if (t91 != 1701445525LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x501 = 31593059739LLU;
	static int32_t x502 = INT32_MAX;
	static int8_t x504 = INT8_MAX;
	uint64_t t92 = 11539LLU;

	t92 = ((x501%x502)>>(x503<=x504));

	if (t92 != 764144340LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x509 = INT32_MAX;
	int8_t x510 = INT8_MAX;
	uint64_t x511 = UINT64_MAX;
	int64_t x512 = INT64_MAX;
	volatile int32_t t93 = 16003;

	t93 = ((x509%x510)>>(x511<=x512));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x513 = INT8_MAX;
	int16_t x514 = -1;
	int8_t x515 = 2;
	static int16_t x516 = INT16_MIN;

	t94 = ((x513%x514)>>(x515<=x516));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x521 = INT16_MAX;
	int8_t x522 = -1;
	int8_t x523 = 6;
	volatile int8_t x524 = -1;
	volatile int32_t t95 = 5831;

	t95 = ((x521%x522)>>(x523<=x524));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x525 = 373636374144667738LLU;
	uint16_t x526 = 5U;
	volatile int32_t x528 = INT32_MAX;
	static uint64_t t96 = 18114344180430566LLU;

	t96 = ((x525%x526)>>(x527<=x528));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x529 = 2107554531418LLU;
	uint32_t x530 = 6897821U;
	uint32_t x531 = 60358194U;
	static uint16_t x532 = UINT16_MAX;

	t97 = ((x529%x530)>>(x531<=x532));

	if (t97 != 1200899LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x533 = 3;
	static int8_t x534 = -63;
	int8_t x535 = INT8_MIN;

	t98 = ((x533%x534)>>(x535<=x536));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x539 = INT16_MIN;
	volatile uint32_t x540 = 3927U;

	t99 = ((x537%x538)>>(x539<=x540));

	if (t99 != 57832273LLU) { NG(); } else { ; }
	
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

