#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x19 = 54U;
int8_t x27 = INT8_MIN;
static uint64_t t2 = UINT64_MAX;
int8_t x43 = -28;
uint8_t x50 = 11U;
int32_t x52 = INT32_MIN;
int32_t t5 = 0;
volatile int64_t x57 = 437603770687LL;
volatile int64_t t7 = 2881476LL;
int64_t x61 = INT64_MAX;
static int64_t x62 = -1LL;
int8_t x64 = 20;
int64_t t8 = INT64_MAX;
int16_t x68 = 1;
volatile uint32_t t10 = 0U;
uint16_t x85 = UINT16_MAX;
int32_t x87 = INT32_MIN;
int64_t x98 = 273LL;
static volatile int32_t t14 = -30868535;
int16_t x111 = -12;
int16_t x113 = 138;
static uint8_t x121 = UINT8_MAX;
int32_t x133 = INT32_MAX;
int8_t x135 = -1;
int32_t x138 = 42569654;
uint8_t x140 = 2U;
static uint16_t x141 = 152U;
int64_t x142 = INT64_MAX;
int64_t x143 = INT64_MAX;
static int64_t x153 = INT64_MAX;
int16_t x156 = -1;
static uint32_t x163 = UINT32_MAX;
int64_t x164 = -1LL;
volatile int32_t t23 = 313102;
uint32_t x174 = 319366U;
static uint16_t x175 = 49U;
volatile int32_t t26 = 0;
volatile int8_t x184 = 14;
int8_t x219 = INT8_MIN;
int8_t x247 = -1;
int16_t x249 = 0;
uint64_t x254 = UINT64_MAX;
int16_t x256 = INT16_MIN;
uint32_t t32 = 674092624U;
volatile int8_t x267 = 1;
volatile int32_t x270 = INT32_MIN;
static volatile int64_t x280 = INT64_MIN;
volatile int32_t t35 = 958;
volatile int16_t x281 = INT16_MAX;
int8_t x290 = INT8_MAX;
int32_t x292 = INT32_MIN;
uint8_t x295 = 7U;
volatile int16_t x303 = -1;
int8_t x316 = INT8_MIN;
int64_t t44 = -10147435752446154LL;
uint64_t x330 = 622LLU;
volatile uint64_t t46 = 1841LLU;
int16_t x349 = 20;
static uint32_t x357 = 2856U;
volatile uint32_t t48 = 23713U;
static int16_t x381 = 1;
int8_t x384 = INT8_MIN;
int32_t x385 = 111956435;
int8_t x396 = 0;
volatile int32_t x405 = 72672918;
int32_t x410 = INT32_MIN;
static int32_t t56 = -9;
volatile int32_t t57 = 4;
uint64_t x453 = 5181319323LLU;
int32_t x467 = INT32_MIN;
uint64_t t61 = 7349703261555674755LLU;
static uint8_t x497 = UINT8_MAX;
int16_t x500 = 1181;
int32_t x503 = INT32_MIN;
int32_t x506 = -1;
uint8_t x507 = 1U;
static int64_t x508 = INT64_MIN;
static volatile uint8_t x509 = 79U;
int64_t x524 = INT64_MIN;
volatile int32_t t68 = INT32_MAX;
static int64_t x541 = 1896LL;
uint32_t x543 = UINT32_MAX;
int16_t x544 = INT16_MIN;
int8_t x558 = 0;
int8_t x559 = INT8_MAX;
uint8_t x577 = 19U;
int64_t x581 = INT64_MAX;
static int32_t x582 = INT32_MIN;
int64_t t75 = -336869274864LL;
uint32_t x593 = UINT32_MAX;
volatile int32_t x596 = -1;
uint32_t x598 = 45542173U;
static volatile int8_t x613 = INT8_MAX;
int32_t x616 = INT32_MAX;
int32_t x625 = INT32_MAX;
static uint32_t x626 = 472U;
uint32_t x627 = UINT32_MAX;
volatile int32_t t79 = INT32_MAX;
int16_t x653 = INT16_MAX;
uint64_t x654 = 30400414LLU;
int32_t x656 = INT32_MIN;
uint32_t x658 = UINT32_MAX;
int64_t x682 = -1LL;
int64_t t86 = -1857876603323LL;
static volatile uint32_t x689 = 5109790U;
volatile uint32_t t87 = 1U;
uint16_t x697 = UINT16_MAX;
volatile uint32_t x705 = 492U;
int32_t x729 = INT32_MAX;
static uint8_t x732 = 46U;
int64_t x736 = -1LL;
int32_t t94 = 87487;
int64_t x740 = INT64_MIN;
int8_t x743 = 29;
int16_t x758 = -1;
int32_t x759 = INT32_MAX;
uint32_t x765 = 5687322U;


void f0(void) {
	int32_t x1 = 299594;
	int64_t x2 = -1LL;
	uint64_t x3 = UINT64_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -4200204;

	t0 = (x1>>((x2^x3)<=x4));

	if (t0 != 149797) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x17 = INT64_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x20 = UINT64_MAX;
	volatile int64_t t1 = 267936085808706875LL;

	t1 = (x17>>((x18^x19)<=x20));

	if (t1 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x25 = UINT64_MAX;
	int32_t x26 = -4667369;
	static int16_t x28 = -1;

	t2 = (x25>>((x26^x27)<=x28));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x33 = 30;
	int64_t x34 = -54947687663129LL;
	static volatile uint32_t x35 = 172U;
	static int16_t x36 = INT16_MIN;
	int32_t t3 = -142;

	t3 = (x33>>((x34^x35)<=x36));

	if (t3 != 15) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = -1;
	int8_t x44 = INT8_MAX;
	volatile int32_t t4 = 39676;

	t4 = (x41>>((x42^x43)<=x44));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x49 = INT16_MAX;
	uint16_t x51 = 29U;

	t5 = (x49>>((x50^x51)<=x52));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x53 = 15U;
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 6174638303367LLU;
	uint64_t x56 = 2LLU;
	static volatile int32_t t6 = 2767;

	t6 = (x53>>((x54^x55)<=x56));

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x58 = INT16_MIN;
	int32_t x59 = INT32_MAX;
	static uint64_t x60 = 2263440218887585LLU;

	t7 = (x57>>((x58^x59)<=x60));

	if (t7 != 437603770687LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x63 = INT32_MIN;

	t8 = (x61>>((x62^x63)<=x64));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x65 = 26731246;
	uint64_t x66 = 10739486733752LLU;
	volatile uint8_t x67 = 64U;
	static int32_t t9 = -253630;

	t9 = (x65>>((x66^x67)<=x68));

	if (t9 != 26731246) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int8_t x74 = 4;
	int8_t x75 = -1;
	int8_t x76 = 39;

	t10 = (x73>>((x74^x75)<=x76));

	if (t10 != 2147483647U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int32_t x82 = -349867067;
	int16_t x83 = INT16_MIN;
	int32_t x84 = 10383858;
	int32_t t11 = 713;

	t11 = (x81>>((x82^x83)<=x84));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x86 = INT32_MIN;
	volatile int16_t x88 = 196;
	volatile int32_t t12 = -87110828;

	t12 = (x85>>((x86^x87)<=x88));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x93 = UINT8_MAX;
	volatile uint8_t x94 = 11U;
	volatile uint16_t x95 = 28541U;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t13 = 45280508;

	t13 = (x93>>((x94^x95)<=x96));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x97 = UINT16_MAX;
	static int8_t x99 = -1;
	uint32_t x100 = UINT32_MAX;

	t14 = (x97>>((x98^x99)<=x100));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	int32_t t15 = 6;

	t15 = (x109>>((x110^x111)<=x112));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x114 = 239514671088912LL;
	uint32_t x115 = UINT32_MAX;
	int8_t x116 = 3;
	volatile int32_t t16 = -13;

	t16 = (x113>>((x114^x115)<=x116));

	if (t16 != 138) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x122 = INT32_MAX;
	int16_t x123 = 1;
	int64_t x124 = INT64_MAX;
	int32_t t17 = 12;

	t17 = (x121>>((x122^x123)<=x124));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x134 = INT16_MIN;
	int16_t x136 = 6;
	volatile int32_t t18 = INT32_MAX;

	t18 = (x133>>((x134^x135)<=x136));

	if (t18 != INT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x137 = 1594U;
	static uint32_t x139 = UINT32_MAX;
	volatile uint32_t t19 = 3033U;

	t19 = (x137>>((x138^x139)<=x140));

	if (t19 != 1594U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t20 = 284733;

	t20 = (x141>>((x142^x143)<=x144));

	if (t20 != 152) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x145 = INT32_MAX;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MAX;
	volatile int32_t x148 = -1;
	int32_t t21 = 2;

	t21 = (x145>>((x146^x147)<=x148));

	if (t21 != 1073741823) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x154 = -548817671323866LL;
	int16_t x155 = INT16_MIN;
	int64_t t22 = INT64_MAX;

	t22 = (x153>>((x154^x155)<=x156));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x161 = INT16_MAX;
	static int32_t x162 = INT32_MAX;

	t23 = (x161>>((x162^x163)<=x164));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x165 = UINT16_MAX;
	static uint64_t x166 = 2276564127806LLU;
	int64_t x167 = INT64_MIN;
	static int16_t x168 = INT16_MAX;
	int32_t t24 = 76;

	t24 = (x165>>((x166^x167)<=x168));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x173 = 3U;
	int32_t x176 = -367377441;
	volatile int32_t t25 = 12399;

	t25 = (x173>>((x174^x175)<=x176));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x177 = 0;
	int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MAX;

	t26 = (x177>>((x178^x179)<=x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x181 = 6140861263LLU;
	volatile int16_t x182 = INT16_MAX;
	int32_t x183 = -26943;
	volatile uint64_t t27 = 1750253014785LLU;

	t27 = (x181>>((x182^x183)<=x184));

	if (t27 != 3070430631LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x205 = 1U;
	volatile int64_t x206 = -1LL;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 1U;
	volatile int32_t t28 = 1;

	t28 = (x205>>((x206^x207)<=x208));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x217 = INT32_MAX;
	static uint64_t x218 = UINT64_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t29 = -116615;

	t29 = (x217>>((x218^x219)<=x220));

	if (t29 != 1073741823) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x245 = UINT32_MAX;
	uint32_t x246 = UINT32_MAX;
	uint8_t x248 = 3U;
	static uint32_t t30 = 8055U;

	t30 = (x245>>((x246^x247)<=x248));

	if (t30 != 2147483647U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x250 = -1;
	int16_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t31 = 21;

	t31 = (x249>>((x250^x251)<=x252));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x253 = 196955620U;
	uint16_t x255 = UINT16_MAX;

	t32 = (x253>>((x254^x255)<=x256));

	if (t32 != 98477810U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x265 = 19016215LLU;
	uint16_t x266 = 1537U;
	int32_t x268 = INT32_MIN;
	static uint64_t t33 = 35774LLU;

	t33 = (x265>>((x266^x267)<=x268));

	if (t33 != 19016215LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	static uint32_t x272 = 176282173U;
	int32_t t34 = 1;

	t34 = (x269>>((x270^x271)<=x272));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x277 = 19U;
	int8_t x278 = INT8_MIN;
	static int32_t x279 = INT32_MIN;

	t35 = (x277>>((x278^x279)<=x280));

	if (t35 != 19) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x282 = INT8_MIN;
	volatile uint32_t x283 = 677U;
	uint64_t x284 = 818490LLU;
	volatile int32_t t36 = -103145259;

	t36 = (x281>>((x282^x283)<=x284));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x285 = INT8_MAX;
	int8_t x286 = INT8_MAX;
	volatile int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;
	volatile int32_t t37 = 1668;

	t37 = (x285>>((x286^x287)<=x288));

	if (t37 != 63) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x289 = 1604254809LL;
	int64_t x291 = INT64_MIN;
	volatile int64_t t38 = -9854614353047LL;

	t38 = (x289>>((x290^x291)<=x292));

	if (t38 != 802127404LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x293 = 967437420U;
	uint32_t x294 = UINT32_MAX;
	uint32_t x296 = 155U;
	volatile uint32_t t39 = 2148589U;

	t39 = (x293>>((x294^x295)<=x296));

	if (t39 != 967437420U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x301 = INT8_MAX;
	int8_t x302 = INT8_MAX;
	uint8_t x304 = UINT8_MAX;
	int32_t t40 = -30;

	t40 = (x301>>((x302^x303)<=x304));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x305 = INT32_MAX;
	int64_t x306 = -1LL;
	static volatile int32_t x307 = 0;
	int16_t x308 = INT16_MIN;
	static int32_t t41 = INT32_MAX;

	t41 = (x305>>((x306^x307)<=x308));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x309 = UINT32_MAX;
	int32_t x310 = -16;
	static volatile uint32_t x311 = 151583303U;
	volatile int16_t x312 = INT16_MIN;
	volatile uint32_t t42 = 213U;

	t42 = (x309>>((x310^x311)<=x312));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x313 = INT16_MAX;
	uint32_t x314 = 316822898U;
	int32_t x315 = INT32_MAX;
	int32_t t43 = -5;

	t43 = (x313>>((x314^x315)<=x316));

	if (t43 != 16383) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x317 = INT64_MAX;
	volatile int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	int16_t x320 = -1;

	t44 = (x317>>((x318^x319)<=x320));

	if (t44 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x329 = INT64_MAX;
	int8_t x331 = -1;
	int16_t x332 = 9956;
	volatile int64_t t45 = INT64_MAX;

	t45 = (x329>>((x330^x331)<=x332));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x345 = 494547690313127LLU;
	static int16_t x346 = INT16_MIN;
	int64_t x347 = 1LL;
	int64_t x348 = -1LL;

	t46 = (x345>>((x346^x347)<=x348));

	if (t46 != 247273845156563LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x350 = 6832U;
	int8_t x351 = 14;
	volatile int32_t x352 = 24434029;
	int32_t t47 = -296051087;

	t47 = (x349>>((x350^x351)<=x352));

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x358 = INT16_MIN;
	volatile int16_t x359 = 15;
	uint64_t x360 = UINT64_MAX;

	t48 = (x357>>((x358^x359)<=x360));

	if (t48 != 1428U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x373 = 2456U;
	int64_t x374 = INT64_MAX;
	volatile uint32_t x375 = UINT32_MAX;
	int64_t x376 = INT64_MIN;
	static volatile int32_t t49 = -133;

	t49 = (x373>>((x374^x375)<=x376));

	if (t49 != 2456) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x382 = INT16_MIN;
	static int32_t x383 = INT32_MAX;
	volatile int32_t t50 = 0;

	t50 = (x381>>((x382^x383)<=x384));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x386 = -2021770LL;
	uint32_t x387 = 667U;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t51 = -663972690;

	t51 = (x385>>((x386^x387)<=x388));

	if (t51 != 55978217) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x393 = UINT64_MAX;
	volatile int32_t x394 = INT32_MAX;
	uint16_t x395 = 5U;
	uint64_t t52 = UINT64_MAX;

	t52 = (x393>>((x394^x395)<=x396));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x406 = UINT32_MAX;
	int16_t x407 = 8;
	int8_t x408 = INT8_MIN;
	int32_t t53 = 7494;

	t53 = (x405>>((x406^x407)<=x408));

	if (t53 != 72672918) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x409 = UINT8_MAX;
	static volatile uint64_t x411 = UINT64_MAX;
	static int8_t x412 = -1;
	volatile int32_t t54 = 3227392;

	t54 = (x409>>((x410^x411)<=x412));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x417 = UINT64_MAX;
	int8_t x418 = INT8_MAX;
	static int8_t x419 = INT8_MIN;
	static int64_t x420 = 94308068LL;
	static uint64_t t55 = 32661499699087544LLU;

	t55 = (x417>>((x418^x419)<=x420));

	if (t55 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x433 = INT16_MAX;
	static int8_t x434 = -17;
	uint16_t x435 = UINT16_MAX;
	static int16_t x436 = INT16_MIN;

	t56 = (x433>>((x434^x435)<=x436));

	if (t56 != 16383) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x449 = 15U;
	uint64_t x450 = 355371450803LLU;
	uint32_t x451 = 15284U;
	int32_t x452 = INT32_MIN;

	t57 = (x449>>((x450^x451)<=x452));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x454 = INT64_MAX;
	volatile int8_t x455 = INT8_MIN;
	uint16_t x456 = UINT16_MAX;
	uint64_t t58 = 1082173041401762135LLU;

	t58 = (x453>>((x454^x455)<=x456));

	if (t58 != 2590659661LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x465 = UINT64_MAX;
	int64_t x466 = -508LL;
	volatile uint32_t x468 = UINT32_MAX;
	uint64_t t59 = 44438647LLU;

	t59 = (x465>>((x466^x467)<=x468));

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x481 = UINT32_MAX;
	volatile int16_t x482 = INT16_MAX;
	uint32_t x483 = UINT32_MAX;
	uint16_t x484 = 3299U;
	uint32_t t60 = UINT32_MAX;

	t60 = (x481>>((x482^x483)<=x484));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x489 = 12LLU;
	static int32_t x490 = -1;
	static int8_t x491 = -1;
	volatile int64_t x492 = -1LL;

	t61 = (x489>>((x490^x491)<=x492));

	if (t61 != 12LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x498 = INT16_MIN;
	int32_t x499 = INT32_MIN;
	static volatile int32_t t62 = 3241541;

	t62 = (x497>>((x498^x499)<=x500));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x501 = 59U;
	static uint16_t x502 = 0U;
	uint64_t x504 = 3215659601407LLU;
	int32_t t63 = -126;

	t63 = (x501>>((x502^x503)<=x504));

	if (t63 != 59) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x505 = INT16_MAX;
	int32_t t64 = -1;

	t64 = (x505>>((x506^x507)<=x508));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x510 = INT16_MIN;
	int64_t x511 = 244521648LL;
	int8_t x512 = -7;
	static volatile int32_t t65 = 150;

	t65 = (x509>>((x510^x511)<=x512));

	if (t65 != 39) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x513 = UINT32_MAX;
	static uint8_t x514 = 22U;
	uint8_t x515 = UINT8_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t66 = 39260U;

	t66 = (x513>>((x514^x515)<=x516));

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x517 = 204387678U;
	static uint8_t x518 = 1U;
	static uint32_t x519 = UINT32_MAX;
	uint8_t x520 = 31U;
	uint32_t t67 = 642407U;

	t67 = (x517>>((x518^x519)<=x520));

	if (t67 != 204387678U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x521 = INT32_MAX;
	static int32_t x522 = 85;
	int64_t x523 = INT64_MIN;

	t68 = (x521>>((x522^x523)<=x524));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x529 = UINT8_MAX;
	uint8_t x530 = 20U;
	int64_t x531 = INT64_MIN;
	int32_t x532 = 10121;
	volatile int32_t t69 = 0;

	t69 = (x529>>((x530^x531)<=x532));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x533 = 755802595875LL;
	uint16_t x534 = 0U;
	int16_t x535 = INT16_MIN;
	static volatile int16_t x536 = INT16_MIN;
	int64_t t70 = -43611229763672LL;

	t70 = (x533>>((x534^x535)<=x536));

	if (t70 != 377901297937LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x537 = 26;
	int16_t x538 = 6848;
	int8_t x539 = INT8_MIN;
	int32_t x540 = -1;
	volatile int32_t t71 = 2280;

	t71 = (x537>>((x538^x539)<=x540));

	if (t71 != 13) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x542 = 18779462919044830LLU;
	static volatile int64_t t72 = 49294LL;

	t72 = (x541>>((x542^x543)<=x544));

	if (t72 != 948LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x557 = UINT32_MAX;
	static int64_t x560 = -1LL;
	static uint32_t t73 = UINT32_MAX;

	t73 = (x557>>((x558^x559)<=x560));

	if (t73 != UINT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x578 = 2U;
	uint32_t x579 = 1U;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t74 = 13445000;

	t74 = (x577>>((x578^x579)<=x580));

	if (t74 != 9) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x583 = 5;
	static volatile int16_t x584 = INT16_MIN;

	t75 = (x581>>((x582^x583)<=x584));

	if (t75 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x594 = 1U;
	uint16_t x595 = 3U;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x593>>((x594^x595)<=x596));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x597 = 52U;
	int16_t x599 = 26;
	static uint64_t x600 = 1062073346645LLU;
	int32_t t77 = -58;

	t77 = (x597>>((x598^x599)<=x600));

	if (t77 != 26) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x614 = -1;
	static volatile int8_t x615 = INT8_MAX;
	volatile int32_t t78 = -451396;

	t78 = (x613>>((x614^x615)<=x616));

	if (t78 != 63) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x628 = INT16_MAX;

	t79 = (x625>>((x626^x627)<=x628));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x637 = INT16_MAX;
	uint64_t x638 = 541013049LLU;
	volatile int16_t x639 = -1;
	volatile int8_t x640 = INT8_MIN;
	volatile int32_t t80 = 129197;

	t80 = (x637>>((x638^x639)<=x640));

	if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x641 = 148448;
	static volatile int32_t x642 = 988;
	int8_t x643 = INT8_MIN;
	uint64_t x644 = 139453874LLU;
	volatile int32_t t81 = -8095973;

	t81 = (x641>>((x642^x643)<=x644));

	if (t81 != 148448) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x655 = -1LL;
	volatile int32_t t82 = -22;

	t82 = (x653>>((x654^x655)<=x656));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x657 = UINT64_MAX;
	volatile int64_t x659 = -3LL;
	int8_t x660 = INT8_MIN;
	volatile uint64_t t83 = 24LLU;

	t83 = (x657>>((x658^x659)<=x660));

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = INT64_MAX;
	static int32_t x671 = INT32_MAX;
	volatile int64_t x672 = INT64_MIN;
	volatile int32_t t84 = -127;

	t84 = (x669>>((x670^x671)<=x672));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x673 = 13U;
	volatile uint32_t x674 = UINT32_MAX;
	uint16_t x675 = 5U;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t85 = -144355769;

	t85 = (x673>>((x674^x675)<=x676));

	if (t85 != 13) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x681 = 31LL;
	int32_t x683 = INT32_MIN;
	int8_t x684 = -37;

	t86 = (x681>>((x682^x683)<=x684));

	if (t86 != 31LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x690 = INT64_MIN;
	uint16_t x691 = UINT16_MAX;
	uint16_t x692 = 0U;

	t87 = (x689>>((x690^x691)<=x692));

	if (t87 != 2554895U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x698 = -1LL;
	int32_t x699 = 1026438888;
	static int32_t x700 = 24956;
	volatile int32_t t88 = 713780;

	t88 = (x697>>((x698^x699)<=x700));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x701 = INT16_MAX;
	static int16_t x702 = INT16_MIN;
	static int16_t x703 = -1;
	static uint32_t x704 = UINT32_MAX;
	int32_t t89 = -6128608;

	t89 = (x701>>((x702^x703)<=x704));

	if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x706 = INT8_MAX;
	uint64_t x707 = 2061351179995LLU;
	int16_t x708 = 0;
	uint32_t t90 = 292489812U;

	t90 = (x705>>((x706^x707)<=x708));

	if (t90 != 492U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x717 = 116U;
	uint16_t x718 = 194U;
	int32_t x719 = INT32_MIN;
	int32_t x720 = -27490;
	int32_t t91 = -6098;

	t91 = (x717>>((x718^x719)<=x720));

	if (t91 != 58) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x721 = INT64_MAX;
	static uint16_t x722 = UINT16_MAX;
	int8_t x723 = 5;
	volatile uint64_t x724 = UINT64_MAX;
	volatile int64_t t92 = -174LL;

	t92 = (x721>>((x722^x723)<=x724));

	if (t92 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x730 = 8;
	volatile uint64_t x731 = 6808914337LLU;
	int32_t t93 = INT32_MAX;

	t93 = (x729>>((x730^x731)<=x732));

	if (t93 != INT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x733 = INT16_MAX;
	int64_t x734 = INT64_MIN;
	uint16_t x735 = UINT16_MAX;

	t94 = (x733>>((x734^x735)<=x736));

	if (t94 != 16383) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x737 = 424663U;
	int16_t x738 = INT16_MAX;
	uint8_t x739 = 3U;
	uint32_t t95 = 1704639U;

	t95 = (x737>>((x738^x739)<=x740));

	if (t95 != 424663U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x741 = 110586U;
	uint32_t x742 = 1204758U;
	static int64_t x744 = 84LL;
	volatile uint32_t t96 = 1027817071U;

	t96 = (x741>>((x742^x743)<=x744));

	if (t96 != 110586U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x749 = 79;
	int64_t x750 = INT64_MIN;
	uint16_t x751 = 4156U;
	volatile int16_t x752 = INT16_MIN;
	int32_t t97 = 77334;

	t97 = (x749>>((x750^x751)<=x752));

	if (t97 != 39) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x757 = 43LLU;
	int32_t x760 = -91;
	static volatile uint64_t t98 = 550085052853696233LLU;

	t98 = (x757>>((x758^x759)<=x760));

	if (t98 != 21LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x766 = INT16_MIN;
	uint64_t x767 = 180448915082872LLU;
	int8_t x768 = -6;
	static volatile uint32_t t99 = 123U;

	t99 = (x765>>((x766^x767)<=x768));

	if (t99 != 2843661U) { NG(); } else { ; }
	
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

