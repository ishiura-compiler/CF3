#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x1 = UINT64_MAX;
int32_t t1 = -125683775;
volatile int16_t x20 = -543;
static int32_t t2 = -16712446;
volatile int32_t t3 = -26959;
int8_t x31 = 2;
uint32_t x37 = 408U;
volatile int32_t t5 = -251;
static int8_t x46 = -29;
int64_t x48 = INT64_MAX;
uint32_t x64 = UINT32_MAX;
volatile uint16_t x69 = UINT16_MAX;
volatile int32_t t9 = 34883;
volatile uint64_t x77 = 811756905560519494LLU;
uint8_t x82 = 107U;
static uint16_t x89 = 12U;
int8_t x113 = 1;
int16_t x114 = INT16_MIN;
int32_t t17 = -776032;
int8_t x118 = 2;
volatile uint16_t x120 = 9U;
static volatile int32_t t19 = 699684382;
uint16_t x137 = 7U;
int8_t x139 = INT8_MIN;
volatile int32_t t21 = 265;
int16_t x153 = -4;
uint16_t x154 = UINT16_MAX;
volatile int32_t x169 = INT32_MIN;
int32_t t27 = -3358;
static int64_t x186 = 12829LL;
uint64_t x195 = UINT64_MAX;
volatile int8_t x196 = INT8_MIN;
int64_t x205 = 4331907LL;
volatile int32_t t30 = -4;
uint8_t x209 = UINT8_MAX;
int8_t x218 = 29;
volatile int64_t x222 = -37224331LL;
volatile int32_t t34 = -68;
int16_t x233 = INT16_MIN;
int8_t x236 = -36;
volatile int16_t x238 = INT16_MIN;
uint64_t x253 = UINT64_MAX;
static int16_t x267 = INT16_MIN;
static volatile uint32_t x276 = UINT32_MAX;
static uint32_t x285 = 0U;
int8_t x288 = -1;
static volatile int32_t t43 = 28241933;
uint64_t x293 = 114806LLU;
volatile uint8_t x298 = 106U;
volatile int32_t t45 = 1851;
uint32_t x320 = UINT32_MAX;
static int32_t t49 = 687574318;
static volatile int32_t t53 = 204;
int64_t x364 = INT64_MIN;
uint8_t x395 = UINT8_MAX;
int32_t t56 = -920534;
int8_t x404 = INT8_MIN;
int32_t t57 = 7038;
int64_t x412 = -80811150785442LL;
static int64_t x416 = INT64_MIN;
static int16_t x422 = -1;
static int8_t x451 = -1;
int32_t t63 = 3;
int32_t t64 = -1;
int32_t x459 = INT32_MAX;
uint8_t x462 = 1U;
volatile int32_t t66 = 62168818;
static volatile int32_t t67 = 164;
int16_t x472 = INT16_MIN;
int64_t x476 = INT64_MIN;
static uint16_t x483 = 319U;
int8_t x492 = INT8_MAX;
static volatile int16_t x495 = 9;
volatile uint16_t x496 = UINT16_MAX;
int64_t x504 = -663LL;
int16_t x508 = INT16_MIN;
volatile int32_t t75 = 222739316;
int32_t t77 = -139;
int32_t x541 = 45036995;
int32_t x544 = INT32_MAX;
volatile int32_t t80 = 195712;
int64_t x573 = -171633425LL;
int16_t x574 = -1;
int32_t x575 = INT32_MAX;
int8_t x581 = -12;
volatile uint64_t x599 = UINT64_MAX;
static int8_t x607 = -1;
volatile int16_t x618 = 0;
int16_t x622 = -1;
int16_t x625 = INT16_MIN;
int32_t x635 = -1;
int16_t x642 = 6639;
uint8_t x647 = UINT8_MAX;
static volatile int32_t t95 = 217699;
int32_t t97 = -29753;
int32_t x682 = -915210;
volatile int8_t x691 = -36;
volatile int32_t t99 = 10;


void f0(void) {
	volatile uint32_t x2 = UINT32_MAX;
	volatile int64_t x3 = -51456LL;
	int16_t x4 = -15002;
	volatile int32_t t0 = -3752;

	t0 = ((x1==x2)>>(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	uint8_t x10 = 11U;
	uint16_t x11 = 49U;
	uint8_t x12 = 11U;

	t1 = ((x9==x10)>>(x11/x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = UINT16_MAX;
	int16_t x18 = 0;
	uint8_t x19 = UINT8_MAX;

	t2 = ((x17==x18)>>(x19/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = -33308198;
	static volatile uint16_t x22 = 12818U;
	int32_t x23 = -1;
	int32_t x24 = INT32_MAX;

	t3 = ((x21==x22)>>(x23/x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = 12;
	int8_t x30 = 10;
	volatile uint8_t x32 = 15U;
	volatile int32_t t4 = 3285;

	t4 = ((x29==x30)>>(x31/x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x38 = INT64_MAX;
	static uint32_t x39 = UINT32_MAX;
	static int64_t x40 = 724551798LL;

	t5 = ((x37==x38)>>(x39/x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = INT64_MAX;
	int32_t x47 = -1;
	volatile int32_t t6 = 0;

	t6 = ((x45==x46)>>(x47/x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x49 = 3202;
	volatile int64_t x50 = 121720LL;
	int8_t x51 = INT8_MIN;
	uint8_t x52 = UINT8_MAX;
	static volatile int32_t t7 = 0;

	t7 = ((x49==x50)>>(x51/x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = -1;
	static volatile uint64_t x62 = 1065LLU;
	uint8_t x63 = UINT8_MAX;
	volatile int32_t t8 = -5;

	t8 = ((x61==x62)>>(x63/x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x70 = -1;
	int16_t x71 = -1;
	volatile int8_t x72 = 11;

	t9 = ((x69==x70)>>(x71/x72));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x73 = UINT32_MAX;
	int16_t x74 = -1;
	int8_t x75 = -2;
	int32_t x76 = INT32_MIN;
	int32_t t10 = 126;

	t10 = ((x73==x74)>>(x75/x76));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x78 = INT32_MAX;
	int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t11 = -1002788295;

	t11 = ((x77==x78)>>(x79/x80));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x81 = INT8_MAX;
	volatile int64_t x83 = -1LL;
	uint32_t x84 = 11U;
	volatile int32_t t12 = 195790;

	t12 = ((x81==x82)>>(x83/x84));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x85 = UINT8_MAX;
	static int64_t x86 = -1LL;
	volatile int8_t x87 = 0;
	int16_t x88 = 51;
	static int32_t t13 = -128084837;

	t13 = ((x85==x86)>>(x87/x88));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x90 = 6U;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 5462442702598640509LLU;
	volatile int32_t t14 = 174;

	t14 = ((x89==x90)>>(x91/x92));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x101 = 4U;
	static uint16_t x102 = UINT16_MAX;
	int16_t x103 = -1;
	static int16_t x104 = -1;
	int32_t t15 = 1;

	t15 = ((x101==x102)>>(x103/x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = -1;
	volatile uint64_t x110 = 9087314806229LLU;
	uint16_t x111 = 0U;
	int16_t x112 = INT16_MAX;
	volatile int32_t t16 = -42051264;

	t16 = ((x109==x110)>>(x111/x112));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = UINT64_MAX;

	t17 = ((x113==x114)>>(x115/x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x117 = 175U;
	uint8_t x119 = 3U;
	volatile int32_t t18 = 274183288;

	t18 = ((x117==x118)>>(x119/x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x125 = -37140LL;
	uint32_t x126 = 55257U;
	int16_t x127 = 1587;
	int64_t x128 = -46373LL;

	t19 = ((x125==x126)>>(x127/x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x133 = -21;
	volatile int64_t x134 = INT64_MIN;
	volatile uint32_t x135 = 34U;
	int32_t x136 = -210;
	volatile int32_t t20 = 853991504;

	t20 = ((x133==x134)>>(x135/x136));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x138 = UINT8_MAX;
	static volatile uint16_t x140 = 201U;

	t21 = ((x137==x138)>>(x139/x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x145 = 39657277207889LLU;
	int64_t x146 = -267929610011936LL;
	static uint8_t x147 = 60U;
	int16_t x148 = INT16_MAX;
	int32_t t22 = -38;

	t22 = ((x145==x146)>>(x147/x148));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x155 = -1;
	volatile int64_t x156 = -1LL;
	volatile int32_t t23 = -3384730;

	t23 = ((x153==x154)>>(x155/x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x165 = INT8_MIN;
	static uint8_t x166 = UINT8_MAX;
	static volatile uint32_t x167 = UINT32_MAX;
	int64_t x168 = INT64_MAX;
	static int32_t t24 = 98237;

	t24 = ((x165==x166)>>(x167/x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int64_t x172 = INT64_MIN;
	int32_t t25 = 47687140;

	t25 = ((x169==x170)>>(x171/x172));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x177 = 7U;
	static int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = 4U;
	volatile uint8_t x180 = UINT8_MAX;
	static volatile int32_t t26 = 21031;

	t26 = ((x177==x178)>>(x179/x180));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x181 = INT16_MIN;
	int8_t x182 = 0;
	static int8_t x183 = 4;
	static uint8_t x184 = UINT8_MAX;

	t27 = ((x181==x182)>>(x183/x184));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x185 = -1;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MIN;
	int32_t t28 = -3038;

	t28 = ((x185==x186)>>(x187/x188));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x193 = -1;
	int8_t x194 = -37;
	int32_t t29 = 28;

	t29 = ((x193==x194)>>(x195/x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x206 = -1LL;
	uint32_t x207 = 44U;
	volatile int16_t x208 = INT16_MIN;

	t30 = ((x205==x206)>>(x207/x208));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x210 = INT16_MIN;
	uint8_t x211 = 67U;
	int8_t x212 = 11;
	volatile int32_t t31 = 1;

	t31 = ((x209==x210)>>(x211/x212));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x217 = 14318;
	volatile uint32_t x219 = 559506U;
	int32_t x220 = INT32_MIN;
	volatile int32_t t32 = 3841794;

	t32 = ((x217==x218)>>(x219/x220));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x221 = 579820134U;
	int32_t x223 = 38734;
	int32_t x224 = INT32_MIN;
	static int32_t t33 = 6;

	t33 = ((x221==x222)>>(x223/x224));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x229 = INT16_MIN;
	static int8_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int64_t x232 = INT64_MIN;

	t34 = ((x229==x230)>>(x231/x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x234 = 82950231;
	volatile int32_t x235 = -1;
	volatile int32_t t35 = 56952;

	t35 = ((x233==x234)>>(x235/x236));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x237 = -1;
	int32_t x239 = -1;
	static volatile int64_t x240 = INT64_MIN;
	int32_t t36 = -4111659;

	t36 = ((x237==x238)>>(x239/x240));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x241 = INT8_MIN;
	uint8_t x242 = 38U;
	uint32_t x243 = 1069632U;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t37 = -8;

	t37 = ((x241==x242)>>(x243/x244));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = -16;
	volatile int32_t x246 = INT32_MAX;
	uint8_t x247 = 1U;
	static volatile uint8_t x248 = 6U;
	volatile int32_t t38 = -67544;

	t38 = ((x245==x246)>>(x247/x248));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x254 = 15287U;
	uint64_t x255 = UINT64_MAX;
	int32_t x256 = -1;
	volatile int32_t t39 = 25929784;

	t39 = ((x253==x254)>>(x255/x256));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x265 = 1816;
	uint64_t x266 = 116941282LLU;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t40 = -14819989;

	t40 = ((x265==x266)>>(x267/x268));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x273 = -1;
	volatile int16_t x274 = INT16_MIN;
	int8_t x275 = 1;
	int32_t t41 = 310268;

	t41 = ((x273==x274)>>(x275/x276));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x277 = -27;
	static int16_t x278 = INT16_MAX;
	int32_t x279 = 98804692;
	static int32_t x280 = INT32_MAX;
	int32_t t42 = 19;

	t42 = ((x277==x278)>>(x279/x280));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x286 = UINT8_MAX;
	int32_t x287 = -1;

	t43 = ((x285==x286)>>(x287/x288));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x294 = -1LL;
	uint8_t x295 = 4U;
	int8_t x296 = INT8_MIN;
	volatile int32_t t44 = 11659814;

	t44 = ((x293==x294)>>(x295/x296));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x297 = -1;
	int32_t x299 = -11;
	int16_t x300 = INT16_MIN;

	t45 = ((x297==x298)>>(x299/x300));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MAX;
	int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t46 = -11;

	t46 = ((x301==x302)>>(x303/x304));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = UINT32_MAX;
	int8_t x307 = -6;
	int16_t x308 = INT16_MIN;
	volatile int32_t t47 = 2603200;

	t47 = ((x305==x306)>>(x307/x308));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = UINT16_MAX;
	uint64_t x311 = 67LLU;
	static volatile int64_t x312 = INT64_MIN;
	static int32_t t48 = -6;

	t48 = ((x309==x310)>>(x311/x312));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;

	t49 = ((x317==x318)>>(x319/x320));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x325 = INT64_MIN;
	int8_t x326 = 0;
	uint8_t x327 = UINT8_MAX;
	uint16_t x328 = UINT16_MAX;
	int32_t t50 = 1852143;

	t50 = ((x325==x326)>>(x327/x328));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x333 = INT8_MIN;
	uint16_t x334 = 132U;
	int16_t x335 = 2483;
	volatile uint32_t x336 = 508U;
	volatile int32_t t51 = -19477;

	t51 = ((x333==x334)>>(x335/x336));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x353 = INT64_MIN;
	volatile uint8_t x354 = 1U;
	int8_t x355 = -1;
	int32_t x356 = INT32_MAX;
	volatile int32_t t52 = 27;

	t52 = ((x353==x354)>>(x355/x356));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x357 = 2033167882U;
	int16_t x358 = 3;
	uint8_t x359 = UINT8_MAX;
	static uint64_t x360 = 78037902306410LLU;

	t53 = ((x357==x358)>>(x359/x360));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x361 = -46;
	int16_t x362 = -1;
	uint8_t x363 = 2U;
	static int32_t t54 = -120868484;

	t54 = ((x361==x362)>>(x363/x364));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x389 = 59;
	static uint32_t x390 = UINT32_MAX;
	int32_t x391 = -1;
	volatile int32_t x392 = -1;
	int32_t t55 = -37;

	t55 = ((x389==x390)>>(x391/x392));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x393 = 1;
	static int16_t x394 = -3316;
	volatile int16_t x396 = INT16_MIN;

	t56 = ((x393==x394)>>(x395/x396));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x401 = -2;
	int16_t x402 = INT16_MAX;
	int8_t x403 = INT8_MAX;

	t57 = ((x401==x402)>>(x403/x404));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x409 = 1U;
	uint8_t x410 = 14U;
	static int32_t x411 = -1496;
	int32_t t58 = 10;

	t58 = ((x409==x410)>>(x411/x412));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x413 = 3U;
	static int16_t x414 = -1;
	uint64_t x415 = UINT64_MAX;
	int32_t t59 = 55075;

	t59 = ((x413==x414)>>(x415/x416));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x421 = 2U;
	int64_t x423 = 807LL;
	uint16_t x424 = UINT16_MAX;
	volatile int32_t t60 = 766326088;

	t60 = ((x421==x422)>>(x423/x424));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x430 = 504928122089352LLU;
	volatile int16_t x431 = INT16_MIN;
	int64_t x432 = INT64_MAX;
	int32_t t61 = 451531;

	t61 = ((x429==x430)>>(x431/x432));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x433 = -7;
	int8_t x434 = INT8_MIN;
	int16_t x435 = -1;
	int16_t x436 = -1;
	volatile int32_t t62 = -4204443;

	t62 = ((x433==x434)>>(x435/x436));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x449 = -1;
	uint32_t x450 = 5U;
	volatile int32_t x452 = 121;

	t63 = ((x449==x450)>>(x451/x452));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x453 = INT32_MIN;
	uint8_t x454 = UINT8_MAX;
	static uint16_t x455 = 2U;
	uint16_t x456 = 1601U;

	t64 = ((x453==x454)>>(x455/x456));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x457 = INT8_MIN;
	static int64_t x458 = INT64_MIN;
	int32_t x460 = INT32_MIN;
	volatile int32_t t65 = 484167421;

	t65 = ((x457==x458)>>(x459/x460));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x461 = 227U;
	int8_t x463 = INT8_MIN;
	static int64_t x464 = 7663LL;

	t66 = ((x461==x462)>>(x463/x464));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x465 = 3953797U;
	uint32_t x466 = 22581U;
	int16_t x467 = -1;
	static int32_t x468 = 88;

	t67 = ((x465==x466)>>(x467/x468));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x469 = -22;
	static int64_t x470 = INT64_MIN;
	uint8_t x471 = UINT8_MAX;
	int32_t t68 = -55;

	t68 = ((x469==x470)>>(x471/x472));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x473 = 0;
	int8_t x474 = 37;
	int8_t x475 = 36;
	volatile int32_t t69 = 1;

	t69 = ((x473==x474)>>(x475/x476));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x481 = INT32_MIN;
	static int64_t x482 = INT64_MIN;
	int32_t x484 = INT32_MIN;
	int32_t t70 = 227036;

	t70 = ((x481==x482)>>(x483/x484));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x489 = UINT32_MAX;
	uint8_t x490 = UINT8_MAX;
	static int8_t x491 = 38;
	int32_t t71 = -693231270;

	t71 = ((x489==x490)>>(x491/x492));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x493 = -1;
	int8_t x494 = -1;
	int32_t t72 = 28;

	t72 = ((x493==x494)>>(x495/x496));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x501 = -51739223LL;
	static volatile int16_t x502 = INT16_MAX;
	static int64_t x503 = -1LL;
	int32_t t73 = 5277;

	t73 = ((x501==x502)>>(x503/x504));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x505 = -1LL;
	uint8_t x506 = UINT8_MAX;
	int8_t x507 = 2;
	int32_t t74 = -617446445;

	t74 = ((x505==x506)>>(x507/x508));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x513 = UINT32_MAX;
	volatile uint8_t x514 = 7U;
	uint32_t x515 = UINT32_MAX;
	static int16_t x516 = INT16_MIN;

	t75 = ((x513==x514)>>(x515/x516));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x517 = -47;
	static int16_t x518 = 0;
	int8_t x519 = INT8_MAX;
	volatile int32_t x520 = 21841274;
	volatile int32_t t76 = 7198800;

	t76 = ((x517==x518)>>(x519/x520));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int8_t x521 = INT8_MIN;
	static uint64_t x522 = UINT64_MAX;
	int8_t x523 = -1;
	int16_t x524 = INT16_MIN;

	t77 = ((x521==x522)>>(x523/x524));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x525 = UINT64_MAX;
	uint8_t x526 = UINT8_MAX;
	static int8_t x527 = -3;
	uint16_t x528 = UINT16_MAX;
	int32_t t78 = -7;

	t78 = ((x525==x526)>>(x527/x528));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x529 = INT32_MIN;
	int16_t x530 = -89;
	uint16_t x531 = UINT16_MAX;
	static volatile uint16_t x532 = 14432U;
	volatile int32_t t79 = -23865883;

	t79 = ((x529==x530)>>(x531/x532));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x542 = -1;
	int32_t x543 = -1;

	t80 = ((x541==x542)>>(x543/x544));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x549 = UINT64_MAX;
	volatile uint16_t x550 = UINT16_MAX;
	static int16_t x551 = INT16_MIN;
	volatile int32_t x552 = -4490154;
	volatile int32_t t81 = 672759580;

	t81 = ((x549==x550)>>(x551/x552));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x569 = 101045191;
	int8_t x570 = INT8_MIN;
	int8_t x571 = INT8_MAX;
	int64_t x572 = 19253135LL;
	volatile int32_t t82 = -281;

	t82 = ((x569==x570)>>(x571/x572));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x576 = 267413430714LLU;
	static int32_t t83 = -35620064;

	t83 = ((x573==x574)>>(x575/x576));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x577 = INT32_MIN;
	static volatile uint8_t x578 = UINT8_MAX;
	uint8_t x579 = 31U;
	static int32_t x580 = INT32_MIN;
	volatile int32_t t84 = -82;

	t84 = ((x577==x578)>>(x579/x580));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x582 = INT8_MIN;
	int16_t x583 = -1;
	static int8_t x584 = 2;
	volatile int32_t t85 = -1;

	t85 = ((x581==x582)>>(x583/x584));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x593 = INT64_MIN;
	uint16_t x594 = UINT16_MAX;
	int16_t x595 = 48;
	static volatile uint32_t x596 = 228265118U;
	volatile int32_t t86 = -14;

	t86 = ((x593==x594)>>(x595/x596));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x597 = INT8_MIN;
	volatile int64_t x598 = INT64_MAX;
	int64_t x600 = INT64_MIN;
	static int32_t t87 = -182563;

	t87 = ((x597==x598)>>(x599/x600));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x605 = 4637LLU;
	int8_t x606 = INT8_MIN;
	volatile int64_t x608 = 17871538236797LL;
	static volatile int32_t t88 = -8154381;

	t88 = ((x605==x606)>>(x607/x608));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x617 = -1;
	int64_t x619 = 17576LL;
	int64_t x620 = INT64_MIN;
	volatile int32_t t89 = 3648;

	t89 = ((x617==x618)>>(x619/x620));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x621 = -1;
	int8_t x623 = -1;
	int64_t x624 = -1LL;
	static volatile int32_t t90 = 369258;

	t90 = ((x621==x622)>>(x623/x624));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x626 = 126681440458772512LLU;
	uint8_t x627 = UINT8_MAX;
	volatile int16_t x628 = INT16_MIN;
	volatile int32_t t91 = 51875730;

	t91 = ((x625==x626)>>(x627/x628));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x629 = INT8_MAX;
	int32_t x630 = -1;
	uint32_t x631 = 127287U;
	volatile uint16_t x632 = 4415U;
	volatile int32_t t92 = -48;

	t92 = ((x629==x630)>>(x631/x632));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x633 = 382498;
	static uint16_t x634 = 37U;
	int32_t x636 = INT32_MAX;
	static int32_t t93 = -16059;

	t93 = ((x633==x634)>>(x635/x636));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x641 = UINT16_MAX;
	static volatile uint32_t x643 = UINT32_MAX;
	int8_t x644 = INT8_MIN;
	static int32_t t94 = 2;

	t94 = ((x641==x642)>>(x643/x644));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x645 = UINT32_MAX;
	volatile int64_t x646 = -1LL;
	int16_t x648 = INT16_MIN;

	t95 = ((x645==x646)>>(x647/x648));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x661 = 22549U;
	static uint16_t x662 = UINT16_MAX;
	int16_t x663 = 1;
	static int64_t x664 = -269LL;
	volatile int32_t t96 = 234209;

	t96 = ((x661==x662)>>(x663/x664));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x665 = INT64_MIN;
	int8_t x666 = INT8_MIN;
	uint64_t x667 = UINT64_MAX;
	int32_t x668 = -1;

	t97 = ((x665==x666)>>(x667/x668));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x681 = INT32_MIN;
	uint32_t x683 = 1U;
	uint8_t x684 = 126U;
	int32_t t98 = -107805;

	t98 = ((x681==x682)>>(x683/x684));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x689 = 310;
	int32_t x690 = -3989;
	static uint64_t x692 = UINT64_MAX;

	t99 = ((x689==x690)>>(x691/x692));

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

