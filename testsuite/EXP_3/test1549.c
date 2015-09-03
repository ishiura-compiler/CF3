#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 111U;
volatile int32_t t2 = INT32_MIN;
volatile uint32_t t3 = 8968U;
uint16_t x22 = 1U;
volatile int16_t x23 = 10754;
int32_t x24 = -1;
uint64_t x37 = UINT64_MAX;
static uint64_t x38 = 1565162LLU;
uint8_t x49 = 1U;
volatile uint64_t t8 = 496683LLU;
int16_t x65 = -1;
static uint64_t x74 = 1588LLU;
uint64_t t10 = 3743624306995025092LLU;
int32_t t11 = -934663237;
uint64_t x89 = UINT64_MAX;
static uint32_t x91 = 6936U;
int32_t t14 = -1799946;
uint64_t x113 = UINT64_MAX;
int8_t x115 = INT8_MAX;
static volatile int16_t x118 = -1;
volatile int8_t x123 = -1;
static uint64_t x124 = UINT64_MAX;
volatile int32_t t18 = 69192367;
int16_t x139 = 32;
int32_t t20 = -27;
volatile int64_t x150 = -95547095706975LL;
volatile int16_t x152 = INT16_MIN;
int8_t x162 = 14;
static uint16_t x163 = 2U;
static volatile int64_t x164 = INT64_MIN;
int8_t x169 = -1;
int32_t x172 = INT32_MAX;
static volatile uint32_t x177 = 994233U;
static int64_t x179 = INT64_MIN;
uint64_t t27 = 869360LLU;
static int8_t x185 = INT8_MIN;
static uint64_t x186 = 978902443143651LLU;
int32_t x188 = INT32_MAX;
int16_t x195 = INT16_MIN;
static volatile int8_t x219 = INT8_MAX;
int8_t x226 = INT8_MIN;
volatile int32_t t35 = -182454;
volatile int64_t x235 = -1954477127397066299LL;
uint16_t x249 = 39U;
volatile uint16_t x250 = 352U;
int32_t x252 = INT32_MAX;
int32_t t38 = 0;
static int32_t x259 = INT32_MAX;
int8_t x260 = INT8_MIN;
int16_t x261 = INT16_MAX;
int8_t x263 = INT8_MAX;
volatile uint8_t x273 = 69U;
int64_t x293 = -1LL;
static int64_t x302 = -1LL;
static volatile uint8_t x304 = UINT8_MAX;
static volatile int64_t t48 = -638023909LL;
uint16_t x306 = 0U;
volatile int8_t x307 = INT8_MIN;
uint64_t x308 = 15820358215106LLU;
int64_t x326 = -1LL;
uint32_t x331 = UINT32_MAX;
static volatile int16_t x339 = INT16_MIN;
static uint64_t x350 = 35948661118304583LLU;
static uint64_t x359 = 3728038954LLU;
int32_t t60 = 11;
uint16_t x378 = 9U;
volatile int32_t x403 = -29;
int8_t x404 = -1;
uint16_t x405 = UINT16_MAX;
int32_t t64 = 192;
static uint8_t x409 = UINT8_MAX;
static uint64_t x411 = 12161883648800LLU;
int32_t t65 = 207495;
uint64_t t66 = 2LLU;
uint64_t x419 = 170LLU;
volatile uint32_t t67 = 617U;
int32_t t68 = 5903489;
volatile uint64_t x432 = 15109605LLU;
volatile uint64_t x434 = UINT64_MAX;
uint32_t x443 = 6605U;
int64_t x447 = 13679866438LL;
volatile uint8_t x448 = 3U;
int64_t x456 = INT64_MIN;
int16_t x461 = INT16_MIN;
int8_t x462 = 9;
static int32_t x467 = INT32_MIN;
volatile int32_t t77 = 32490789;
uint16_t x472 = UINT16_MAX;
uint64_t t79 = 550867LLU;
uint16_t x491 = UINT16_MAX;
uint32_t x492 = 0U;
int64_t x495 = -20LL;
static int64_t x504 = INT64_MIN;
static volatile uint32_t x506 = UINT32_MAX;
uint8_t x508 = 44U;
uint16_t x510 = 140U;
volatile int32_t x517 = 5;
volatile int16_t x519 = INT16_MAX;
static volatile int32_t x520 = INT32_MIN;
int16_t x526 = -137;
uint16_t x527 = 0U;
int64_t x533 = INT64_MIN;
uint8_t x534 = 0U;
static volatile int8_t x535 = -1;
static uint32_t x536 = UINT32_MAX;
uint32_t x542 = 14U;
volatile int64_t x559 = -608050086453065226LL;
int32_t x574 = INT32_MAX;
static int8_t x575 = -1;
uint8_t x576 = 14U;
uint64_t t96 = 866904625061214692LLU;
static volatile uint16_t x578 = 3998U;
static int32_t t97 = 92;
volatile uint16_t x587 = UINT16_MAX;
int8_t x588 = -1;
int8_t x590 = INT8_MIN;


void f0(void) {
	static int8_t x1 = -1;
	int16_t x2 = 2289;
	int8_t x3 = -2;
	volatile int16_t x4 = 0;
	int32_t t0 = 15311;

	t0 = ((x1*x2)-(x3<=x4));

	if (t0 != -2290) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	static int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;
	int64_t t1 = -23564888LL;

	t1 = ((x5*x6)-(x7<=x8));

	if (t1 != -112LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x10 = 1U;
	int32_t x11 = -61;
	int64_t x12 = INT64_MIN;

	t2 = ((x9*x10)-(x11<=x12));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	static int16_t x14 = 2;
	uint8_t x15 = 22U;
	uint8_t x16 = UINT8_MAX;

	t3 = ((x13*x14)-(x15<=x16));

	if (t3 != 4294967293U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 63U;
	static int32_t t4 = 12;

	t4 = ((x21*x22)-(x23<=x24));

	if (t4 != 63) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x39 = INT8_MAX;
	volatile uint8_t x40 = 0U;
	volatile uint64_t t5 = 35911290338394297LLU;

	t5 = ((x37*x38)-(x39<=x40));

	if (t5 != 18446744073707986454LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x45 = -11;
	int8_t x46 = INT8_MAX;
	static int32_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	int32_t t6 = 7411;

	t6 = ((x45*x46)-(x47<=x48));

	if (t6 != -1398) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x50 = 3871673LL;
	uint16_t x51 = 369U;
	uint16_t x52 = UINT16_MAX;
	volatile int64_t t7 = -229898038822767649LL;

	t7 = ((x49*x50)-(x51<=x52));

	if (t7 != 3871672LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x57 = -1;
	static uint64_t x58 = UINT64_MAX;
	volatile int32_t x59 = INT32_MAX;
	int8_t x60 = INT8_MAX;

	t8 = ((x57*x58)-(x59<=x60));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x66 = 547324065208LL;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	volatile int64_t t9 = 1053LL;

	t9 = ((x65*x66)-(x67<=x68));

	if (t9 != -547324065208LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x73 = 319618U;
	uint64_t x75 = 3432LLU;
	int64_t x76 = INT64_MAX;

	t10 = ((x73*x74)-(x75<=x76));

	if (t10 != 507553383LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x77 = 1;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;

	t11 = ((x77*x78)-(x79<=x80));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = -1;
	volatile int64_t x83 = 1572LL;
	uint8_t x84 = 5U;
	static int64_t t12 = 13930386292LL;

	t12 = ((x81*x82)-(x83<=x84));

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x90 = UINT64_MAX;
	static volatile int8_t x92 = -16;
	static volatile uint64_t t13 = 5504119404995LLU;

	t13 = ((x89*x90)-(x91<=x92));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x105 = 6U;
	volatile int8_t x106 = INT8_MAX;
	int16_t x107 = -1;
	static volatile uint16_t x108 = UINT16_MAX;

	t14 = ((x105*x106)-(x107<=x108));

	if (t14 != 761) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x109 = 16U;
	static volatile int16_t x110 = 10;
	int64_t x111 = INT64_MIN;
	int8_t x112 = -1;
	int32_t t15 = -5;

	t15 = ((x109*x110)-(x111<=x112));

	if (t15 != 159) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x114 = 2059225098LLU;
	volatile int8_t x116 = -2;
	volatile uint64_t t16 = 8508619513LLU;

	t16 = ((x113*x114)-(x115<=x116));

	if (t16 != 18446744071650326518LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x117 = INT16_MAX;
	int64_t x119 = -1LL;
	int16_t x120 = -1;
	volatile int32_t t17 = 29907;

	t17 = ((x117*x118)-(x119<=x120));

	if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = -1;
	int32_t x122 = 396094440;

	t18 = ((x121*x122)-(x123<=x124));

	if (t18 != -396094441) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x133 = INT16_MIN;
	static volatile uint8_t x134 = 1U;
	static int32_t x135 = INT32_MIN;
	uint64_t x136 = 20578886816659LLU;
	static volatile int32_t t19 = -12;

	t19 = ((x133*x134)-(x135<=x136));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x137 = -1;
	int8_t x138 = INT8_MIN;
	int32_t x140 = -1;

	t20 = ((x137*x138)-(x139<=x140));

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x149 = 37U;
	int64_t x151 = -1LL;
	volatile int64_t t21 = -154952686LL;

	t21 = ((x149*x150)-(x151<=x152));

	if (t21 != -3535242541158075LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x153 = INT16_MIN;
	int8_t x154 = -1;
	uint8_t x155 = 55U;
	volatile uint32_t x156 = UINT32_MAX;
	int32_t t22 = 1877;

	t22 = ((x153*x154)-(x155<=x156));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x161 = 116928346LLU;
	volatile uint64_t t23 = 7LLU;

	t23 = ((x161*x162)-(x163<=x164));

	if (t23 != 1636996844LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x165 = -20;
	static int8_t x166 = INT8_MIN;
	uint16_t x167 = 10U;
	volatile uint16_t x168 = 2571U;
	int32_t t24 = 95851398;

	t24 = ((x165*x166)-(x167<=x168));

	if (t24 != 2559) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x170 = 23336036LL;
	uint8_t x171 = UINT8_MAX;
	volatile int64_t t25 = -150901721497LL;

	t25 = ((x169*x170)-(x171<=x172));

	if (t25 != -23336037LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x178 = -1;
	int16_t x180 = INT16_MAX;
	volatile uint32_t t26 = 1796763709U;

	t26 = ((x177*x178)-(x179<=x180));

	if (t26 != 4293973062U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x181 = INT32_MIN;
	uint64_t x182 = 118430LLU;
	uint64_t x183 = UINT64_MAX;
	int8_t x184 = INT8_MAX;

	t27 = ((x181*x182)-(x183<=x184));

	if (t27 != 18446489747221118976LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x187 = 28U;
	static volatile uint64_t t28 = 2263135383LLU;

	t28 = ((x185*x186)-(x187<=x188));

	if (t28 != 18321444560987164287LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 324329U;
	uint32_t x192 = 187U;
	uint64_t t29 = 513550036735502LLU;

	t29 = ((x189*x190)-(x191<=x192));

	if (t29 != 128LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int32_t x194 = 392372;
	uint16_t x196 = 1867U;
	volatile uint32_t t30 = 5U;

	t30 = ((x193*x194)-(x195<=x196));

	if (t30 != 4294574923U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x201 = -42LL;
	int64_t x202 = 4303668284LL;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	int64_t t31 = -4691LL;

	t31 = ((x201*x202)-(x203<=x204));

	if (t31 != -180754067929LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x213 = INT8_MIN;
	static uint16_t x214 = 24705U;
	int8_t x215 = 1;
	int16_t x216 = INT16_MAX;
	volatile int32_t t32 = 1179;

	t32 = ((x213*x214)-(x215<=x216));

	if (t32 != -3162241) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x217 = -1;
	int8_t x218 = -5;
	int64_t x220 = -1LL;
	int32_t t33 = 9096768;

	t33 = ((x217*x218)-(x219<=x220));

	if (t33 != 5) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x221 = INT16_MIN;
	int64_t x222 = 44LL;
	int64_t x223 = INT64_MIN;
	int16_t x224 = 7;
	volatile int64_t t34 = -10227006LL;

	t34 = ((x221*x222)-(x223<=x224));

	if (t34 != -1441793LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x225 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	volatile int16_t x228 = 14645;

	t35 = ((x225*x226)-(x227<=x228));

	if (t35 != 16383) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x233 = 128U;
	static uint64_t x234 = 3914769LLU;
	int16_t x236 = 4;
	uint64_t t36 = 175624443LLU;

	t36 = ((x233*x234)-(x235<=x236));

	if (t36 != 501090431LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x241 = UINT8_MAX;
	static int8_t x242 = -16;
	static uint8_t x243 = 3U;
	int32_t x244 = 31046;
	int32_t t37 = -24;

	t37 = ((x241*x242)-(x243<=x244));

	if (t37 != -4081) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x251 = 237764U;

	t38 = ((x249*x250)-(x251<=x252));

	if (t38 != 13727) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x253 = -1;
	volatile int16_t x254 = INT16_MIN;
	int32_t x255 = -602439282;
	static int32_t x256 = -1;
	volatile int32_t t39 = -31;

	t39 = ((x253*x254)-(x255<=x256));

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x257 = 56U;
	volatile uint32_t x258 = 95U;
	volatile uint32_t t40 = 15935150U;

	t40 = ((x257*x258)-(x259<=x260));

	if (t40 != 5320U) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x262 = UINT16_MAX;
	int32_t x264 = INT32_MIN;
	volatile int32_t t41 = -969859444;

	t41 = ((x261*x262)-(x263<=x264));

	if (t41 != 2147385345) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x269 = 10756U;
	uint32_t x270 = UINT32_MAX;
	uint8_t x271 = 65U;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t42 = 382U;

	t42 = ((x269*x270)-(x271<=x272));

	if (t42 != 4294956540U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x274 = UINT32_MAX;
	uint32_t x275 = 945U;
	uint64_t x276 = 58867951189791LLU;
	volatile uint32_t t43 = 163U;

	t43 = ((x273*x274)-(x275<=x276));

	if (t43 != 4294967226U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x277 = 41938046529LLU;
	int8_t x278 = 7;
	int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	volatile uint64_t t44 = 214184085580LLU;

	t44 = ((x277*x278)-(x279<=x280));

	if (t44 != 293566325703LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x281 = 15;
	volatile uint32_t x282 = UINT32_MAX;
	int8_t x283 = -1;
	int16_t x284 = INT16_MIN;
	static volatile uint32_t t45 = 1362298000U;

	t45 = ((x281*x282)-(x283<=x284));

	if (t45 != 4294967281U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x294 = INT16_MAX;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = -5;
	int64_t t46 = -8082955331993LL;

	t46 = ((x293*x294)-(x295<=x296));

	if (t46 != -32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x297 = 30U;
	int16_t x298 = -129;
	uint8_t x299 = 27U;
	uint32_t x300 = 1U;
	static volatile int32_t t47 = 171151668;

	t47 = ((x297*x298)-(x299<=x300));

	if (t47 != -3870) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x301 = -1;
	volatile int16_t x303 = -1;

	t48 = ((x301*x302)-(x303<=x304));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x305 = INT16_MAX;
	static volatile int32_t t49 = 398477018;

	t49 = ((x305*x306)-(x307<=x308));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = UINT64_MAX;
	int16_t x311 = INT16_MAX;
	volatile int16_t x312 = -7;
	volatile uint64_t t50 = 5990394LLU;

	t50 = ((x309*x310)-(x311<=x312));

	if (t50 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = -1;
	static int16_t x315 = 15500;
	int16_t x316 = 77;
	uint32_t t51 = 1273193U;

	t51 = ((x313*x314)-(x315<=x316));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x317 = 5U;
	int64_t x318 = -1LL;
	static int8_t x319 = -2;
	uint16_t x320 = 60U;
	volatile int64_t t52 = 19LL;

	t52 = ((x317*x318)-(x319<=x320));

	if (t52 != -6LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x321 = 474506;
	uint8_t x322 = 33U;
	int64_t x323 = -10759131603559LL;
	static int8_t x324 = INT8_MIN;
	int32_t t53 = 26;

	t53 = ((x321*x322)-(x323<=x324));

	if (t53 != 15658697) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x325 = 339U;
	int8_t x327 = INT8_MAX;
	static uint16_t x328 = 8U;
	static int64_t t54 = 27081545227LL;

	t54 = ((x325*x326)-(x327<=x328));

	if (t54 != -339LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = -12;
	int16_t x330 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t55 = 1;

	t55 = ((x329*x330)-(x331<=x332));

	if (t55 != 393216) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x337 = INT16_MIN;
	static int16_t x338 = -43;
	int16_t x340 = INT16_MAX;
	static int32_t t56 = -534516983;

	t56 = ((x337*x338)-(x339<=x340));

	if (t56 != 1409023) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x341 = 69U;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = -37;
	static uint64_t x344 = 20LLU;
	volatile int32_t t57 = -1;

	t57 = ((x341*x342)-(x343<=x344));

	if (t57 != 17595) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x349 = INT64_MIN;
	static int8_t x351 = -13;
	static int64_t x352 = -2109940206LL;
	volatile uint64_t t58 = 75997LLU;

	t58 = ((x349*x350)-(x351<=x352));

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x357 = INT32_MAX;
	uint32_t x358 = 16241433U;
	volatile int8_t x360 = INT8_MIN;
	uint32_t t59 = 1531848U;

	t59 = ((x357*x358)-(x359<=x360));

	if (t59 != 2131242214U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	static uint16_t x376 = UINT16_MAX;

	t60 = ((x373*x374)-(x375<=x376));

	if (t60 != -16257) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x379 = 88974LL;
	int16_t x380 = INT16_MIN;
	volatile uint64_t t61 = 358710118728543LLU;

	t61 = ((x377*x378)-(x379<=x380));

	if (t61 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x397 = INT16_MIN;
	static uint32_t x398 = 24259087U;
	volatile int64_t x399 = 424219306924712032LL;
	int32_t x400 = INT32_MAX;
	uint32_t t62 = 265U;

	t62 = ((x397*x398)-(x399<=x400));

	if (t62 != 3942154240U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x401 = INT8_MAX;
	int8_t x402 = INT8_MAX;
	volatile int32_t t63 = -255992;

	t63 = ((x401*x402)-(x403<=x404));

	if (t63 != 16128) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint8_t x406 = 2U;
	uint8_t x407 = 21U;
	int8_t x408 = -1;

	t64 = ((x405*x406)-(x407<=x408));

	if (t64 != 131070) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x410 = -1;
	volatile int16_t x412 = INT16_MIN;

	t65 = ((x409*x410)-(x411<=x412));

	if (t65 != -256) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x413 = INT32_MAX;
	uint64_t x414 = 6LLU;
	static uint8_t x415 = 1U;
	uint16_t x416 = UINT16_MAX;

	t66 = ((x413*x414)-(x415<=x416));

	if (t66 != 12884901881LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x417 = 637372088U;
	static uint32_t x418 = 10959U;
	uint8_t x420 = 1U;

	t67 = ((x417*x418)-(x419<=x420));

	if (t67 != 1343889096U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x421 = -1;
	static int16_t x422 = INT16_MIN;
	int8_t x423 = 1;
	int16_t x424 = INT16_MIN;

	t68 = ((x421*x422)-(x423<=x424));

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x429 = 2226776390621LLU;
	static int8_t x430 = INT8_MIN;
	uint64_t x431 = 17904195LLU;
	uint64_t t69 = 113820998LLU;

	t69 = ((x429*x430)-(x431<=x432));

	if (t69 != 18446459046331552128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x433 = 8223U;
	uint8_t x435 = 11U;
	int16_t x436 = INT16_MAX;
	uint64_t t70 = 277604LLU;

	t70 = ((x433*x434)-(x435<=x436));

	if (t70 != 18446744073709543392LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x437 = 2U;
	uint8_t x438 = 62U;
	int32_t x439 = INT32_MIN;
	static int8_t x440 = -3;
	int32_t t71 = -8;

	t71 = ((x437*x438)-(x439<=x440));

	if (t71 != 123) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x441 = 18U;
	uint64_t x442 = 575417LLU;
	volatile int64_t x444 = INT64_MAX;
	volatile uint64_t t72 = 58017LLU;

	t72 = ((x441*x442)-(x443<=x444));

	if (t72 != 10357505LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x445 = UINT16_MAX;
	volatile int8_t x446 = 13;
	volatile int32_t t73 = -257872268;

	t73 = ((x445*x446)-(x447<=x448));

	if (t73 != 851955) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x453 = 103185749874523721LLU;
	int8_t x454 = INT8_MIN;
	int32_t x455 = INT32_MIN;
	uint64_t t74 = 17046LLU;

	t74 = ((x453*x454)-(x455<=x456));

	if (t74 != 5238968089770515328LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x457 = INT16_MIN;
	int8_t x458 = -5;
	uint16_t x459 = 47U;
	int16_t x460 = -1;
	static int32_t t75 = 197;

	t75 = ((x457*x458)-(x459<=x460));

	if (t75 != 163840) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x463 = INT64_MIN;
	int32_t x464 = -1;
	int32_t t76 = 2;

	t76 = ((x461*x462)-(x463<=x464));

	if (t76 != -294913) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x465 = 1274U;
	uint16_t x466 = UINT16_MAX;
	volatile uint8_t x468 = UINT8_MAX;

	t77 = ((x465*x466)-(x467<=x468));

	if (t77 != 83491589) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x469 = 6U;
	static uint64_t x470 = 5076397584188LLU;
	static int64_t x471 = -1LL;
	uint64_t t78 = 7488715511LLU;

	t78 = ((x469*x470)-(x471<=x472));

	if (t78 != 30458385505127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x477 = -1683;
	volatile uint64_t x478 = 533456271877134LLU;
	volatile int64_t x479 = INT64_MIN;
	int64_t x480 = INT64_MIN;

	t79 = ((x477*x478)-(x479<=x480));

	if (t79 != 17548937168140335093LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x489 = 57;
	int16_t x490 = -1;
	volatile int32_t t80 = -168;

	t80 = ((x489*x490)-(x491<=x492));

	if (t80 != -57) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x493 = -5889;
	int32_t x494 = 0;
	int64_t x496 = INT64_MAX;
	volatile int32_t t81 = 719;

	t81 = ((x493*x494)-(x495<=x496));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x501 = 548U;
	static uint32_t x502 = 448013727U;
	uint32_t x503 = 54052975U;
	static volatile uint32_t t82 = 5663U;

	t82 = ((x501*x502)-(x503<=x504));

	if (t82 != 698386524U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x505 = 5108371U;
	uint64_t x507 = 20148198533LLU;
	uint32_t t83 = 141U;

	t83 = ((x505*x506)-(x507<=x508));

	if (t83 != 4289858925U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x509 = UINT8_MAX;
	uint32_t x511 = 923161915U;
	uint8_t x512 = 7U;
	int32_t t84 = 153757247;

	t84 = ((x509*x510)-(x511<=x512));

	if (t84 != 35700) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x518 = INT8_MIN;
	int32_t t85 = 35434540;

	t85 = ((x517*x518)-(x519<=x520));

	if (t85 != -640) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x525 = 1366406157U;
	uint64_t x528 = UINT64_MAX;
	uint32_t t86 = 3768U;

	t86 = ((x525*x526)-(x527<=x528));

	if (t86 != 1780917514U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x529 = -1;
	uint32_t x530 = 7936261U;
	int32_t x531 = INT32_MIN;
	int16_t x532 = INT16_MIN;
	uint32_t t87 = 28U;

	t87 = ((x529*x530)-(x531<=x532));

	if (t87 != 4287031034U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t t88 = 0LL;

	t88 = ((x533*x534)-(x535<=x536));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x537 = 12661U;
	int16_t x538 = INT16_MIN;
	volatile int32_t x539 = INT32_MAX;
	static int32_t x540 = -1;
	volatile uint32_t t89 = 3700U;

	t89 = ((x537*x538)-(x539<=x540));

	if (t89 != 3880091648U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x541 = 12;
	volatile int16_t x543 = -1;
	int16_t x544 = INT16_MIN;
	volatile uint32_t t90 = 0U;

	t90 = ((x541*x542)-(x543<=x544));

	if (t90 != 168U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x549 = 1U;
	int64_t x550 = INT64_MAX;
	int16_t x551 = INT16_MAX;
	int32_t x552 = INT32_MAX;
	volatile int64_t t91 = 1LL;

	t91 = ((x549*x550)-(x551<=x552));

	if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x557 = 8728983U;
	int16_t x558 = INT16_MIN;
	uint16_t x560 = 741U;
	volatile uint32_t t92 = 440185U;

	t92 = ((x557*x558)-(x559<=x560));

	if (t92 != 1731493887U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x561 = INT16_MAX;
	static volatile int16_t x562 = INT16_MIN;
	uint32_t x563 = UINT32_MAX;
	static int16_t x564 = INT16_MIN;
	volatile int32_t t93 = 46151700;

	t93 = ((x561*x562)-(x563<=x564));

	if (t93 != -1073709056) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x565 = INT8_MIN;
	volatile int64_t x566 = -17149993816614LL;
	volatile int8_t x567 = 0;
	int64_t x568 = -1LL;
	int64_t t94 = 21LL;

	t94 = ((x565*x566)-(x567<=x568));

	if (t94 != 2195199208526592LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x569 = INT16_MIN;
	uint64_t x570 = UINT64_MAX;
	int32_t x571 = -1;
	int64_t x572 = INT64_MAX;
	volatile uint64_t t95 = 5891192978689103315LLU;

	t95 = ((x569*x570)-(x571<=x572));

	if (t95 != 32767LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x573 = UINT64_MAX;

	t96 = ((x573*x574)-(x575<=x576));

	if (t96 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x577 = 0;
	int32_t x579 = -1;
	int8_t x580 = INT8_MIN;

	t97 = ((x577*x578)-(x579<=x580));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x585 = INT32_MIN;
	static volatile uint64_t x586 = 807247LLU;
	volatile uint64_t t98 = 254666599648378LLU;

	t98 = ((x585*x586)-(x587<=x588));

	if (t98 != 18445010523977154560LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x589 = 0;
	int8_t x591 = INT8_MAX;
	static uint8_t x592 = 4U;
	static volatile int32_t t99 = -13;

	t99 = ((x589*x590)-(x591<=x592));

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

