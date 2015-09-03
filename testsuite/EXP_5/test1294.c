#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 1U;
volatile int32_t x16 = INT32_MAX;
static volatile uint64_t x17 = 1136LLU;
uint16_t x32 = 17U;
uint8_t x33 = 36U;
int32_t x59 = 4403621;
static volatile int32_t t7 = -2111895;
int64_t x67 = INT64_MAX;
static uint32_t x71 = 10031U;
static int64_t x76 = INT64_MAX;
int8_t x82 = -1;
int16_t x83 = INT16_MIN;
static int8_t x84 = 1;
int32_t x90 = INT32_MIN;
uint64_t x99 = 2780840180LLU;
int32_t x100 = -1;
volatile int64_t x101 = INT64_MAX;
int8_t x103 = INT8_MIN;
int32_t x128 = -1;
int64_t x143 = INT64_MIN;
volatile int32_t x144 = INT32_MIN;
int32_t t21 = -119;
int32_t x154 = INT32_MAX;
static uint16_t x157 = UINT16_MAX;
static int32_t t24 = 4;
int32_t x186 = INT32_MIN;
volatile uint16_t x193 = 480U;
uint8_t x216 = 2U;
volatile uint64_t t30 = 3942861410808322061LLU;
int8_t x226 = 0;
uint16_t x236 = 30302U;
int8_t x244 = INT8_MIN;
int8_t x246 = -10;
int64_t x304 = -1LL;
uint32_t x309 = 1587316758U;
uint32_t x313 = 28U;
int8_t x316 = 12;
int32_t t43 = -149402;
uint64_t x321 = 35525219LLU;
volatile uint64_t x333 = 7060829852LLU;
static int64_t x358 = -1LL;
int16_t x374 = INT16_MAX;
uint8_t x385 = 1U;
volatile uint32_t t55 = UINT32_MAX;
static uint16_t x411 = UINT16_MAX;
volatile uint16_t x435 = 4653U;
uint16_t x445 = 233U;
static int16_t x459 = -1;
int32_t t65 = -668146;
uint32_t x465 = UINT32_MAX;
uint32_t x466 = 241U;
int64_t x473 = INT64_MAX;
int64_t x489 = INT64_MAX;
volatile int16_t x490 = INT16_MIN;
volatile int64_t t70 = 457110933552548LL;
static uint32_t x507 = 7U;
volatile uint32_t t74 = 476003U;
static int8_t x518 = -1;
static uint32_t x522 = 741283750U;
int16_t x530 = INT16_MIN;
int8_t x531 = -1;
int32_t x547 = 215742660;
volatile int32_t t80 = -7;
uint16_t x561 = 9610U;
volatile int32_t x570 = -1;
int64_t x575 = -1LL;
static int8_t x586 = INT8_MIN;
static int32_t t85 = -436869596;
volatile uint8_t x598 = UINT8_MAX;
uint64_t x604 = 32LLU;
volatile uint64_t x617 = UINT64_MAX;
volatile int8_t x620 = -1;
static int64_t x631 = INT64_MAX;
volatile int16_t x650 = 1105;
static volatile int32_t t91 = 45183;
int32_t x655 = INT32_MIN;
static volatile uint16_t x656 = 770U;
static uint8_t x668 = 56U;
uint32_t x694 = 1626631741U;
int8_t x697 = INT8_MAX;


void f0(void) {
	uint16_t x9 = 2U;
	static int8_t x10 = -7;
	volatile int8_t x11 = 4;
	volatile int16_t x12 = 3;
	volatile int32_t t0 = -2799;

	t0 = (x9>>((x10==x11)<x12));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 157229911221LL;
	uint8_t x15 = 99U;
	int64_t t1 = -3146491380969LL;

	t1 = (x13>>((x14==x15)<x16));

	if (t1 != 78614955610LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x18 = 1U;
	uint64_t x19 = 263487520409LLU;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t2 = 99316693LLU;

	t2 = (x17>>((x18==x19)<x20));

	if (t2 != 568LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 17U;
	volatile int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	volatile uint8_t x28 = 86U;
	int32_t t3 = -43016340;

	t3 = (x25>>((x26==x27)<x28));

	if (t3 != 8) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = UINT16_MAX;
	uint64_t t4 = 4440236073926885262LLU;

	t4 = (x29>>((x30==x31)<x32));

	if (t4 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = 14;
	static int64_t x35 = 126313305515043888LL;
	int64_t x36 = INT64_MIN;
	int32_t t5 = 435213;

	t5 = (x33>>((x34==x35)<x36));

	if (t5 != 36) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = 54;
	volatile int16_t x42 = -952;
	int8_t x43 = 37;
	static int8_t x44 = INT8_MIN;
	int32_t t6 = 161;

	t6 = (x41>>((x42==x43)<x44));

	if (t6 != 54) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x57 = 252U;
	uint64_t x58 = UINT64_MAX;
	int16_t x60 = INT16_MIN;

	t7 = (x57>>((x58==x59)<x60));

	if (t7 != 252) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = INT8_MAX;
	static int32_t x63 = INT32_MAX;
	int32_t x64 = -7361219;
	int32_t t8 = -1458310;

	t8 = (x61>>((x62==x63)<x64));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x65 = 81819041LLU;
	int16_t x66 = INT16_MIN;
	uint16_t x68 = 23408U;
	uint64_t t9 = 265782446016LLU;

	t9 = (x65>>((x66==x67)<x68));

	if (t9 != 40909520LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 1816U;
	int32_t x70 = -1;
	int64_t x72 = -1LL;
	static volatile int32_t t10 = 88;

	t10 = (x69>>((x70==x71)<x72));

	if (t10 != 1816) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x73 = 8660673LLU;
	static int64_t x74 = -1LL;
	volatile int64_t x75 = 5280LL;
	volatile uint64_t t11 = 932LLU;

	t11 = (x73>>((x74==x75)<x76));

	if (t11 != 4330336LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x81 = 37;
	int32_t t12 = -1240;

	t12 = (x81>>((x82==x83)<x84));

	if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x89 = 1009799040U;
	int8_t x91 = -62;
	static uint16_t x92 = UINT16_MAX;
	static volatile uint32_t t13 = 3U;

	t13 = (x89>>((x90==x91)<x92));

	if (t13 != 504899520U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 0U;
	int32_t x94 = INT32_MIN;
	volatile uint16_t x95 = 499U;
	volatile int8_t x96 = 1;
	int32_t t14 = -91666;

	t14 = (x93>>((x94==x95)<x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x97 = 168748159417154120LLU;
	volatile uint16_t x98 = 11U;
	volatile uint64_t t15 = 136204427794LLU;

	t15 = (x97>>((x98==x99)<x100));

	if (t15 != 168748159417154120LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x102 = 29U;
	uint64_t x104 = UINT64_MAX;
	static volatile int64_t t16 = -1749278615977092750LL;

	t16 = (x101>>((x102==x103)<x104));

	if (t16 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x113 = 0;
	int32_t x114 = INT32_MAX;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = -1;
	int32_t t17 = -5806;

	t17 = (x113>>((x114==x115)<x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = INT16_MIN;
	static int16_t x127 = 108;
	static int32_t t18 = 626435;

	t18 = (x125>>((x126==x127)<x128));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x133 = INT8_MAX;
	uint16_t x134 = 203U;
	int32_t x135 = -1;
	volatile int32_t x136 = -1;
	volatile int32_t t19 = 3;

	t19 = (x133>>((x134==x135)<x136));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x137 = 934787317;
	int32_t x138 = 177267;
	int64_t x139 = INT64_MIN;
	static uint8_t x140 = UINT8_MAX;
	int32_t t20 = 2031;

	t20 = (x137>>((x138==x139)<x140));

	if (t20 != 467393658) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x141 = 1U;
	int32_t x142 = INT32_MIN;

	t21 = (x141>>((x142==x143)<x144));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x149 = 494908U;
	volatile int8_t x150 = -1;
	int16_t x151 = 10;
	volatile uint8_t x152 = 65U;
	volatile uint32_t t22 = 2759701U;

	t22 = (x149>>((x150==x151)<x152));

	if (t22 != 247454U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x153 = 1;
	uint8_t x155 = 23U;
	uint8_t x156 = 7U;
	int32_t t23 = -3975736;

	t23 = (x153>>((x154==x155)<x156));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x158 = 983755104;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;

	t24 = (x157>>((x158==x159)<x160));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x173 = INT8_MAX;
	static volatile int16_t x174 = INT16_MAX;
	uint64_t x175 = 24LLU;
	int8_t x176 = 1;
	volatile int32_t t25 = -31467;

	t25 = (x173>>((x174==x175)<x176));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x177 = 581LLU;
	uint8_t x178 = 5U;
	volatile uint32_t x179 = 2598306U;
	int64_t x180 = 61LL;
	uint64_t t26 = 880LLU;

	t26 = (x177>>((x178==x179)<x180));

	if (t26 != 290LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x185 = 1U;
	static uint32_t x187 = 1U;
	uint32_t x188 = 3619U;
	volatile int32_t t27 = -10137425;

	t27 = (x185>>((x186==x187)<x188));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x194 = INT64_MIN;
	int8_t x195 = -1;
	uint64_t x196 = 2047576993LLU;
	static volatile int32_t t28 = -12809098;

	t28 = (x193>>((x194==x195)<x196));

	if (t28 != 240) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x213 = 741305U;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 583715394U;
	volatile uint32_t t29 = 65U;

	t29 = (x213>>((x214==x215)<x216));

	if (t29 != 370652U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x221 = UINT64_MAX;
	int64_t x222 = 3832348280036966760LL;
	int32_t x223 = -338;
	int8_t x224 = 4;

	t30 = (x221>>((x222==x223)<x224));

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x225 = INT32_MAX;
	volatile int16_t x227 = INT16_MIN;
	static int8_t x228 = -1;
	int32_t t31 = INT32_MAX;

	t31 = (x225>>((x226==x227)<x228));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x233 = INT16_MAX;
	int16_t x234 = INT16_MIN;
	volatile int8_t x235 = -1;
	volatile int32_t t32 = 1;

	t32 = (x233>>((x234==x235)<x236));

	if (t32 != 16383) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t t33 = 2;

	t33 = (x241>>((x242==x243)<x244));

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x245 = 453LLU;
	uint64_t x247 = 2167LLU;
	volatile uint64_t x248 = 162025248867930LLU;
	static volatile uint64_t t34 = 601071LLU;

	t34 = (x245>>((x246==x247)<x248));

	if (t34 != 226LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x249 = INT64_MAX;
	uint8_t x250 = 117U;
	static volatile uint32_t x251 = UINT32_MAX;
	uint8_t x252 = UINT8_MAX;
	int64_t t35 = 7044954359205587LL;

	t35 = (x249>>((x250==x251)<x252));

	if (t35 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x265 = 0LL;
	static int16_t x266 = INT16_MIN;
	volatile int8_t x267 = -59;
	volatile uint16_t x268 = 91U;
	static volatile int64_t t36 = -1724913781LL;

	t36 = (x265>>((x266==x267)<x268));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 14U;
	uint8_t x284 = 60U;
	int32_t t37 = 77786;

	t37 = (x281>>((x282==x283)<x284));

	if (t37 != 16383) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x297 = 1772554U;
	static uint8_t x298 = 38U;
	int16_t x299 = INT16_MAX;
	static int64_t x300 = 767156821265LL;
	uint32_t t38 = 10988U;

	t38 = (x297>>((x298==x299)<x300));

	if (t38 != 886277U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x301 = 13;
	volatile int16_t x302 = INT16_MIN;
	volatile uint16_t x303 = 3424U;
	volatile int32_t t39 = -429;

	t39 = (x301>>((x302==x303)<x304));

	if (t39 != 13) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x305 = INT16_MAX;
	static uint64_t x306 = 16251121LLU;
	int32_t x307 = -5;
	int16_t x308 = 3;
	static int32_t t40 = 13;

	t40 = (x305>>((x306==x307)<x308));

	if (t40 != 16383) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	volatile uint16_t x312 = UINT16_MAX;
	static volatile uint32_t t41 = 1887332U;

	t41 = (x309>>((x310==x311)<x312));

	if (t41 != 793658379U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x314 = 34;
	static int16_t x315 = -1;
	uint32_t t42 = 971U;

	t42 = (x313>>((x314==x315)<x316));

	if (t42 != 14U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x317 = 20334U;
	static uint64_t x318 = 35484345LLU;
	uint16_t x319 = 349U;
	uint8_t x320 = 4U;

	t43 = (x317>>((x318==x319)<x320));

	if (t43 != 10167) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x322 = -1;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;
	static volatile uint64_t t44 = 640180976069156791LLU;

	t44 = (x321>>((x322==x323)<x324));

	if (t44 != 17762609LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x329 = INT64_MAX;
	int16_t x330 = 10;
	int64_t x331 = -1LL;
	volatile int16_t x332 = INT16_MIN;
	int64_t t45 = INT64_MAX;

	t45 = (x329>>((x330==x331)<x332));

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x334 = 7;
	volatile int32_t x335 = -1;
	uint8_t x336 = 1U;
	volatile uint64_t t46 = 1012212213656397LLU;

	t46 = (x333>>((x334==x335)<x336));

	if (t46 != 3530414926LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x337 = UINT8_MAX;
	int8_t x338 = INT8_MIN;
	int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	int32_t t47 = -292861;

	t47 = (x337>>((x338==x339)<x340));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x357 = 37197LLU;
	int8_t x359 = INT8_MIN;
	int64_t x360 = INT64_MIN;
	static uint64_t t48 = 136174620679LLU;

	t48 = (x357>>((x358==x359)<x360));

	if (t48 != 37197LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x365 = UINT8_MAX;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = UINT32_MAX;
	int64_t x368 = INT64_MAX;
	int32_t t49 = -11;

	t49 = (x365>>((x366==x367)<x368));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x373 = 0U;
	static uint32_t x375 = UINT32_MAX;
	volatile uint16_t x376 = 12355U;
	volatile int32_t t50 = -12;

	t50 = (x373>>((x374==x375)<x376));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x386 = INT8_MIN;
	int16_t x387 = -1;
	int8_t x388 = 0;
	volatile int32_t t51 = -1115;

	t51 = (x385>>((x386==x387)<x388));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x389 = 849;
	static int64_t x390 = -5141166688426LL;
	int16_t x391 = 570;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t52 = 6;

	t52 = (x389>>((x390==x391)<x392));

	if (t52 != 424) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x393 = UINT8_MAX;
	uint16_t x394 = 78U;
	static volatile int16_t x395 = -516;
	volatile uint64_t x396 = 1303LLU;
	int32_t t53 = -3;

	t53 = (x393>>((x394==x395)<x396));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x397 = 705;
	int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t54 = -594239559;

	t54 = (x397>>((x398==x399)<x400));

	if (t54 != 705) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int16_t x404 = -1;

	t55 = (x401>>((x402==x403)<x404));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x409 = 9U;
	uint8_t x410 = UINT8_MAX;
	int8_t x412 = INT8_MIN;
	static int32_t t56 = -7;

	t56 = (x409>>((x410==x411)<x412));

	if (t56 != 9) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x417 = 3458897515821LLU;
	uint64_t x418 = 243022344554LLU;
	volatile uint32_t x419 = 9847837U;
	volatile int64_t x420 = -1LL;
	volatile uint64_t t57 = 426130997446010LLU;

	t57 = (x417>>((x418==x419)<x420));

	if (t57 != 3458897515821LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x425 = 104U;
	volatile int32_t x426 = -1;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = 5;
	int32_t t58 = -125235323;

	t58 = (x425>>((x426==x427)<x428));

	if (t58 != 52) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x429 = INT16_MAX;
	int64_t x430 = INT64_MAX;
	uint8_t x431 = UINT8_MAX;
	static int16_t x432 = -1;
	int32_t t59 = -3032;

	t59 = (x429>>((x430==x431)<x432));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x433 = 89U;
	volatile uint32_t x434 = 166288519U;
	int8_t x436 = INT8_MAX;
	int32_t t60 = -6772;

	t60 = (x433>>((x434==x435)<x436));

	if (t60 != 44) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x441 = 13302642175375405LLU;
	uint32_t x442 = 19236U;
	uint32_t x443 = 74U;
	int16_t x444 = -1;
	uint64_t t61 = 2294487166897871LLU;

	t61 = (x441>>((x442==x443)<x444));

	if (t61 != 13302642175375405LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint64_t x448 = 1720176603292LLU;
	int32_t t62 = 689562776;

	t62 = (x445>>((x446==x447)<x448));

	if (t62 != 116) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x449 = 755770282LL;
	int64_t x450 = -24708299LL;
	uint32_t x451 = UINT32_MAX;
	volatile int64_t x452 = -705087730LL;
	int64_t t63 = -3132041499LL;

	t63 = (x449>>((x450==x451)<x452));

	if (t63 != 755770282LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x453 = 3U;
	int16_t x454 = INT16_MIN;
	volatile int32_t x455 = INT32_MIN;
	uint64_t x456 = 28390729165162LLU;
	int32_t t64 = -1;

	t64 = (x453>>((x454==x455)<x456));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x457 = UINT8_MAX;
	int8_t x458 = INT8_MAX;
	int16_t x460 = INT16_MAX;

	t65 = (x457>>((x458==x459)<x460));

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x467 = UINT64_MAX;
	volatile int8_t x468 = 1;
	uint32_t t66 = 228073U;

	t66 = (x465>>((x466==x467)<x468));

	if (t66 != 2147483647U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x469 = 59U;
	volatile int32_t x470 = INT32_MAX;
	uint8_t x471 = UINT8_MAX;
	uint32_t x472 = UINT32_MAX;
	static volatile int32_t t67 = 3445597;

	t67 = (x469>>((x470==x471)<x472));

	if (t67 != 29) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x474 = INT64_MIN;
	static int16_t x475 = INT16_MIN;
	uint8_t x476 = 3U;
	int64_t t68 = 3174126220302713879LL;

	t68 = (x473>>((x474==x475)<x476));

	if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x477 = INT64_MAX;
	int16_t x478 = -1;
	uint64_t x479 = 938738397852LLU;
	int32_t x480 = INT32_MIN;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x477>>((x478==x479)<x480));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x491 = -1544;
	int8_t x492 = INT8_MAX;

	t70 = (x489>>((x490==x491)<x492));

	if (t70 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x493 = 143982U;
	volatile int8_t x494 = INT8_MIN;
	static volatile uint16_t x495 = UINT16_MAX;
	uint8_t x496 = UINT8_MAX;
	uint32_t t71 = 13228U;

	t71 = (x493>>((x494==x495)<x496));

	if (t71 != 71991U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x497 = INT16_MAX;
	static volatile int32_t x498 = INT32_MIN;
	volatile int8_t x499 = -1;
	int16_t x500 = -57;
	volatile int32_t t72 = 15834107;

	t72 = (x497>>((x498==x499)<x500));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x501 = 3U;
	int64_t x502 = INT64_MIN;
	uint64_t x503 = UINT64_MAX;
	static uint16_t x504 = 138U;
	int32_t t73 = 176953961;

	t73 = (x501>>((x502==x503)<x504));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x505 = UINT32_MAX;
	int32_t x506 = 225570;
	int8_t x508 = INT8_MAX;

	t74 = (x505>>((x506==x507)<x508));

	if (t74 != 2147483647U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x517 = INT8_MAX;
	int32_t x519 = -1;
	int32_t x520 = INT32_MIN;
	volatile int32_t t75 = 15888228;

	t75 = (x517>>((x518==x519)<x520));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x521 = 215977559872187291LLU;
	volatile int16_t x523 = INT16_MAX;
	static uint16_t x524 = UINT16_MAX;
	volatile uint64_t t76 = 440683876105LLU;

	t76 = (x521>>((x522==x523)<x524));

	if (t76 != 107988779936093645LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x529 = 187LLU;
	static volatile int16_t x532 = -249;
	volatile uint64_t t77 = 219093LLU;

	t77 = (x529>>((x530==x531)<x532));

	if (t77 != 187LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x533 = INT32_MAX;
	volatile int16_t x534 = 246;
	static int16_t x535 = -1;
	volatile int64_t x536 = 6873227LL;
	int32_t t78 = 152732476;

	t78 = (x533>>((x534==x535)<x536));

	if (t78 != 1073741823) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x541 = 181113475LL;
	static int8_t x542 = INT8_MAX;
	volatile int8_t x543 = INT8_MIN;
	int16_t x544 = INT16_MAX;
	int64_t t79 = -2903490188LL;

	t79 = (x541>>((x542==x543)<x544));

	if (t79 != 90556737LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x545 = 2;
	int16_t x546 = 109;
	volatile uint8_t x548 = 67U;

	t80 = (x545>>((x546==x547)<x548));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x557 = UINT8_MAX;
	int16_t x558 = -1;
	int64_t x559 = -3715961181465839LL;
	uint8_t x560 = 1U;
	volatile int32_t t81 = -5110;

	t81 = (x557>>((x558==x559)<x560));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x562 = INT16_MIN;
	uint16_t x563 = 11045U;
	volatile int32_t x564 = 220801;
	static int32_t t82 = -298;

	t82 = (x561>>((x562==x563)<x564));

	if (t82 != 4805) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x569 = INT16_MAX;
	int8_t x571 = INT8_MIN;
	volatile int8_t x572 = 1;
	volatile int32_t t83 = -46;

	t83 = (x569>>((x570==x571)<x572));

	if (t83 != 16383) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x573 = UINT64_MAX;
	volatile int64_t x574 = INT64_MIN;
	int16_t x576 = -3;
	uint64_t t84 = UINT64_MAX;

	t84 = (x573>>((x574==x575)<x576));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x585 = 2U;
	volatile int16_t x587 = INT16_MAX;
	uint8_t x588 = 15U;

	t85 = (x585>>((x586==x587)<x588));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x597 = UINT8_MAX;
	int16_t x599 = INT16_MIN;
	int16_t x600 = INT16_MAX;
	int32_t t86 = 3;

	t86 = (x597>>((x598==x599)<x600));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x601 = UINT32_MAX;
	static int32_t x602 = INT32_MAX;
	int8_t x603 = -1;
	uint32_t t87 = 3221028U;

	t87 = (x601>>((x602==x603)<x604));

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x613 = 34U;
	volatile uint64_t x614 = 62LLU;
	uint64_t x615 = 3822751LLU;
	uint8_t x616 = 52U;
	int32_t t88 = -100794;

	t88 = (x613>>((x614==x615)<x616));

	if (t88 != 17) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x618 = 73;
	int32_t x619 = INT32_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x617>>((x618==x619)<x620));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x629 = 23;
	int32_t x630 = -1;
	int16_t x632 = INT16_MAX;
	volatile int32_t t90 = 5369;

	t90 = (x629>>((x630==x631)<x632));

	if (t90 != 11) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x649 = 41;
	int8_t x651 = -14;
	int64_t x652 = 1747167132LL;

	t91 = (x649>>((x650==x651)<x652));

	if (t91 != 20) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x653 = 0U;
	uint32_t x654 = 20U;
	volatile int32_t t92 = 9669732;

	t92 = (x653>>((x654==x655)<x656));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x657 = 15U;
	uint16_t x658 = UINT16_MAX;
	uint16_t x659 = 264U;
	volatile int8_t x660 = -9;
	volatile int32_t t93 = -210567;

	t93 = (x657>>((x658==x659)<x660));

	if (t93 != 15) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x665 = 51;
	int32_t x666 = INT32_MIN;
	int64_t x667 = INT64_MIN;
	int32_t t94 = 21433;

	t94 = (x665>>((x666==x667)<x668));

	if (t94 != 25) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x677 = INT8_MAX;
	int8_t x678 = INT8_MIN;
	uint32_t x679 = UINT32_MAX;
	static volatile uint64_t x680 = 543326887388945364LLU;
	int32_t t95 = -124477123;

	t95 = (x677>>((x678==x679)<x680));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x685 = 0U;
	int8_t x686 = -1;
	uint32_t x687 = 3378U;
	volatile int32_t x688 = -1;
	int32_t t96 = -1916;

	t96 = (x685>>((x686==x687)<x688));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x689 = INT16_MAX;
	int32_t x690 = INT32_MAX;
	int16_t x691 = -1;
	volatile int8_t x692 = -9;
	volatile int32_t t97 = 21979766;

	t97 = (x689>>((x690==x691)<x692));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x693 = 7136456967898011639LLU;
	int32_t x695 = INT32_MIN;
	int8_t x696 = INT8_MIN;
	uint64_t t98 = 59787852273LLU;

	t98 = (x693>>((x694==x695)<x696));

	if (t98 != 7136456967898011639LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x698 = -1;
	static volatile int64_t x699 = INT64_MIN;
	static uint64_t x700 = 5598935LLU;
	volatile int32_t t99 = 147;

	t99 = (x697>>((x698==x699)<x700));

	if (t99 != 63) { NG(); } else { ; }
	
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

