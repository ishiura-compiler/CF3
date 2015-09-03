#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -312222;
uint32_t x6 = 518979048U;
int16_t x7 = -1;
int32_t x10 = INT32_MIN;
uint8_t x14 = 1U;
int32_t t3 = -11;
int64_t x21 = INT64_MAX;
static int64_t x24 = -1LL;
int64_t t4 = INT64_MAX;
int64_t x45 = 59991950364094999LL;
volatile uint32_t t8 = 3U;
int16_t x53 = INT16_MIN;
static int32_t t10 = 122748690;
static int32_t t13 = -689686;
int64_t x82 = -1LL;
volatile int16_t x94 = -1;
static volatile uint8_t x96 = 9U;
volatile uint16_t x115 = UINT16_MAX;
int8_t x130 = -2;
int32_t t21 = 161154714;
static int16_t x139 = INT16_MAX;
uint32_t x140 = 10929U;
volatile uint32_t x153 = 29U;
uint32_t t25 = 247U;
static int32_t t26 = 248286450;
int64_t x167 = INT64_MAX;
int64_t x168 = -12984714LL;
int8_t x174 = INT8_MIN;
int64_t t31 = -1177360710826500414LL;
int8_t x194 = 2;
static int32_t x196 = INT32_MIN;
static uint32_t t35 = 699729045U;
int32_t x214 = 290;
uint32_t x223 = UINT32_MAX;
int8_t x224 = INT8_MAX;
volatile uint8_t x225 = 4U;
int32_t x227 = 360;
int64_t x249 = INT64_MIN;
int8_t x266 = INT8_MIN;
uint32_t x273 = UINT32_MAX;
static int16_t x274 = -328;
int8_t x276 = -1;
volatile int32_t x283 = -22;
static int64_t x294 = 251407100064684LL;
uint64_t x299 = 32928509552LLU;
int8_t x303 = INT8_MAX;
int64_t x313 = INT64_MAX;
int32_t x315 = INT32_MIN;
volatile int64_t t55 = -975299202087824LL;
uint16_t x325 = 79U;
uint64_t x333 = UINT64_MAX;
volatile uint32_t x334 = 15U;
volatile uint64_t t58 = 2036805823LLU;
int8_t x338 = INT8_MIN;
int32_t x339 = -115590;
uint64_t x340 = 3734125LLU;
static int64_t t59 = -866LL;
uint8_t x345 = 33U;
int32_t x346 = -424075094;
int16_t x347 = 11;
int16_t x348 = INT16_MAX;
volatile int32_t t61 = 3555609;
uint16_t x377 = 8110U;
int16_t x378 = -59;
int16_t x380 = -6;
static volatile int32_t t65 = 31094;
volatile int32_t t66 = -10393557;
uint64_t x385 = 4795074866232LLU;
volatile uint8_t x391 = 5U;
volatile int32_t t68 = 15305089;
uint64_t x397 = 54LLU;
int64_t t71 = 2838526238480771985LL;
int32_t t72 = 60591;
int16_t x420 = INT16_MAX;
uint8_t x456 = 82U;
uint32_t x457 = 1899534752U;
static volatile uint64_t x459 = 9627688637236LLU;
static int64_t x481 = INT64_MAX;
int64_t x484 = -74358516033315LL;
static int32_t x488 = 206124561;
volatile int32_t t83 = -2251404;
int32_t x498 = 80101685;
int32_t x500 = INT32_MIN;
uint64_t x501 = UINT64_MAX;
static int32_t t86 = -125;
uint64_t x513 = UINT64_MAX;
uint64_t x520 = UINT64_MAX;
static volatile int64_t t89 = 64395091640098LL;
uint32_t t91 = 284135U;
int8_t x541 = INT8_MAX;
int32_t t92 = 8093;
static uint16_t x558 = 3U;
static volatile int16_t x567 = INT16_MIN;
static volatile int32_t t97 = -1;
uint8_t x586 = 1U;
int16_t x587 = 138;
int32_t t99 = 568;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	uint16_t x4 = 6U;

	t0 = ((x1%x2)>>(x3==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	static int16_t x8 = -1;
	uint32_t t1 = 111U;

	t1 = ((x5%x6)>>(x7==x8));

	if (t1 != 71567455U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 6U;
	static volatile uint32_t x11 = UINT32_MAX;
	volatile int32_t x12 = INT32_MIN;
	int32_t t2 = -16;

	t2 = ((x9%x10)>>(x11==x12));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MAX;

	t3 = ((x13%x14)>>(x15==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MAX;

	t4 = ((x21%x22)>>(x23==x24));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	static int32_t x30 = -1;
	volatile int8_t x31 = -3;
	int8_t x32 = INT8_MIN;
	int32_t t5 = -70336;

	t5 = ((x29%x30)>>(x31==x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x37 = 91U;
	static int32_t x38 = INT32_MIN;
	volatile uint8_t x39 = 1U;
	int16_t x40 = INT16_MIN;
	int32_t t6 = 971026786;

	t6 = ((x37%x38)>>(x39==x40));

	if (t6 != 91) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x46 = 884895;
	int64_t x47 = -9044LL;
	uint64_t x48 = 372985LLU;
	volatile int64_t t7 = 272473LL;

	t7 = ((x45%x46)>>(x47==x48));

	if (t7 != 432979LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MAX;
	volatile int8_t x52 = INT8_MIN;

	t8 = ((x49%x50)>>(x51==x52));

	if (t8 != 4294967168U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x54 = UINT64_MAX;
	int16_t x55 = -27;
	volatile uint8_t x56 = UINT8_MAX;
	uint64_t t9 = 10800029156007LLU;

	t9 = ((x53%x54)>>(x55==x56));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 494721031712148LLU;

	t10 = ((x57%x58)>>(x59==x60));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = 1765823;
	int32_t x62 = -1;
	volatile uint64_t x63 = 131777786022866011LLU;
	uint32_t x64 = 1459470U;
	int32_t t11 = 35;

	t11 = ((x61%x62)>>(x63==x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = INT8_MAX;
	volatile int64_t x66 = INT64_MIN;
	int16_t x67 = INT16_MAX;
	static int64_t x68 = -592199033814804LL;
	volatile int64_t t12 = 3977432274978287LL;

	t12 = ((x65%x66)>>(x67==x68));

	if (t12 != 127LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MAX;
	volatile int16_t x70 = -223;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 19548U;

	t13 = ((x69%x70)>>(x71==x72));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 11U;
	int32_t x78 = -3;
	static int16_t x79 = -370;
	static int16_t x80 = INT16_MAX;
	volatile int32_t t14 = 1;

	t14 = ((x77%x78)>>(x79==x80));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 1U;
	int16_t x83 = -31;
	int32_t x84 = INT32_MIN;
	int64_t t15 = 607669LL;

	t15 = ((x81%x82)>>(x83==x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x93 = 583138290LLU;
	uint64_t x95 = UINT64_MAX;
	static volatile uint64_t t16 = 316110987543715755LLU;

	t16 = ((x93%x94)>>(x95==x96));

	if (t16 != 583138290LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x105 = 19;
	int16_t x106 = -24;
	static uint16_t x107 = 265U;
	int32_t x108 = INT32_MAX;
	int32_t t17 = -15395249;

	t17 = ((x105%x106)>>(x107==x108));

	if (t17 != 19) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = 525851844197128716LLU;
	int32_t x114 = -9;
	static int8_t x116 = INT8_MAX;
	uint64_t t18 = 55059253943408LLU;

	t18 = ((x113%x114)>>(x115==x116));

	if (t18 != 525851844197128716LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x117 = INT16_MAX;
	int8_t x118 = -1;
	volatile uint64_t x119 = UINT64_MAX;
	int16_t x120 = INT16_MIN;
	volatile int32_t t19 = -5102;

	t19 = ((x117%x118)>>(x119==x120));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x125 = 22U;
	uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t20 = 43408684;

	t20 = ((x125%x126)>>(x127==x128));

	if (t20 != 22) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x129 = INT32_MAX;
	int64_t x131 = 55004294LL;
	static int8_t x132 = -15;

	t21 = ((x129%x130)>>(x131==x132));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 55U;
	static uint8_t x138 = 58U;
	volatile uint32_t t22 = 578398557U;

	t22 = ((x137%x138)>>(x139==x140));

	if (t22 != 55U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x145 = 1U;
	int32_t x146 = INT32_MAX;
	int16_t x147 = -12;
	volatile uint8_t x148 = 27U;
	volatile int32_t t23 = 215;

	t23 = ((x145%x146)>>(x147==x148));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = -2;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t24 = -563309322;

	t24 = ((x149%x150)>>(x151==x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x154 = INT32_MIN;
	volatile uint16_t x155 = UINT16_MAX;
	uint16_t x156 = UINT16_MAX;

	t25 = ((x153%x154)>>(x155==x156));

	if (t25 != 14U) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x157 = INT16_MIN;
	int8_t x158 = 1;
	volatile int64_t x159 = INT64_MIN;
	uint16_t x160 = 4952U;

	t26 = ((x157%x158)>>(x159==x160));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x165 = 473899901LLU;
	static uint16_t x166 = 322U;
	volatile uint64_t t27 = 282378790LLU;

	t27 = ((x165%x166)>>(x167==x168));

	if (t27 != 265LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x173 = 133192753594LL;
	uint8_t x175 = 11U;
	int32_t x176 = INT32_MAX;
	volatile int64_t t28 = -346109806540LL;

	t28 = ((x173%x174)>>(x175==x176));

	if (t28 != 58LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x177 = 8234;
	int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;
	static int32_t t29 = 7715;

	t29 = ((x177%x178)>>(x179==x180));

	if (t29 != 8234) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x185 = INT64_MAX;
	static int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MAX;
	static int32_t x188 = INT32_MAX;
	volatile int64_t t30 = 152947920023133LL;

	t30 = ((x185%x186)>>(x187==x188));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = -1LL;
	static volatile int32_t x191 = 5624216;
	volatile int16_t x192 = -62;

	t31 = ((x189%x190)>>(x191==x192));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x195 = 196192657LLU;
	volatile int64_t t32 = 15154442135687723LL;

	t32 = ((x193%x194)>>(x195==x196));

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = -1;
	int32_t x198 = -1;
	volatile int32_t x199 = 79;
	int16_t x200 = INT16_MIN;
	volatile int32_t t33 = -27939;

	t33 = ((x197%x198)>>(x199==x200));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x205 = 8U;
	volatile int64_t x206 = 370LL;
	int16_t x207 = -19;
	int16_t x208 = INT16_MIN;
	volatile int64_t t34 = 228991298805LL;

	t34 = ((x205%x206)>>(x207==x208));

	if (t34 != 8LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x209 = 20554U;
	int32_t x210 = INT32_MIN;
	volatile int8_t x211 = INT8_MIN;
	static uint32_t x212 = UINT32_MAX;

	t35 = ((x209%x210)>>(x211==x212));

	if (t35 != 20554U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x215 = INT8_MAX;
	static int64_t x216 = INT64_MAX;
	static volatile uint64_t t36 = 7699795729787902466LLU;

	t36 = ((x213%x214)>>(x215==x216));

	if (t36 != 255LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = -1;
	volatile uint32_t t37 = 19689U;

	t37 = ((x221%x222)>>(x223==x224));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x226 = -1;
	uint8_t x228 = 0U;
	int32_t t38 = -4101282;

	t38 = ((x225%x226)>>(x227==x228));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x229 = -1;
	static uint64_t x230 = UINT64_MAX;
	int32_t x231 = -1;
	volatile uint8_t x232 = 0U;
	volatile uint64_t t39 = 1049908268804531185LLU;

	t39 = ((x229%x230)>>(x231==x232));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x233 = 5041U;
	volatile int64_t x234 = -29574975239195LL;
	int8_t x235 = INT8_MAX;
	static int32_t x236 = INT32_MIN;
	volatile int64_t t40 = -7506LL;

	t40 = ((x233%x234)>>(x235==x236));

	if (t40 != 5041LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x250 = INT8_MIN;
	int32_t x251 = 92953070;
	static int64_t x252 = -807LL;
	static volatile int64_t t41 = -13918649374LL;

	t41 = ((x249%x250)>>(x251==x252));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x257 = 23U;
	static uint64_t x258 = 4303984003065910LLU;
	volatile int32_t x259 = INT32_MAX;
	int64_t x260 = -1LL;
	volatile uint64_t t42 = 833457674865479LLU;

	t42 = ((x257%x258)>>(x259==x260));

	if (t42 != 23LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x261 = 45;
	int8_t x262 = INT8_MIN;
	uint32_t x263 = 41524U;
	uint64_t x264 = 1005LLU;
	volatile int32_t t43 = -123339;

	t43 = ((x261%x262)>>(x263==x264));

	if (t43 != 45) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x265 = 469242443;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MIN;
	static int32_t t44 = -90730;

	t44 = ((x265%x266)>>(x267==x268));

	if (t44 != 75) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x275 = 1722U;
	static uint32_t t45 = 481U;

	t45 = ((x273%x274)>>(x275==x276));

	if (t45 != 327U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x277 = UINT32_MAX;
	volatile int64_t x278 = INT64_MIN;
	static int64_t x279 = INT64_MAX;
	static volatile uint64_t x280 = UINT64_MAX;
	volatile int64_t t46 = 56094801488503LL;

	t46 = ((x277%x278)>>(x279==x280));

	if (t46 != 4294967295LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -1050;
	volatile uint64_t x284 = 2LLU;
	static volatile int32_t t47 = 516337;

	t47 = ((x281%x282)>>(x283==x284));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x289 = 400;
	uint16_t x290 = 201U;
	int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	int32_t t48 = 819633;

	t48 = ((x289%x290)>>(x291==x292));

	if (t48 != 199) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x293 = INT32_MAX;
	static int16_t x295 = -1;
	static int16_t x296 = INT16_MIN;
	int64_t t49 = -60LL;

	t49 = ((x293%x294)>>(x295==x296));

	if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x297 = 0;
	int64_t x298 = -1LL;
	uint8_t x300 = 1U;
	volatile int64_t t50 = 31LL;

	t50 = ((x297%x298)>>(x299==x300));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x301 = 36U;
	uint16_t x302 = UINT16_MAX;
	static uint32_t x304 = 55U;
	volatile int32_t t51 = 773089;

	t51 = ((x301%x302)>>(x303==x304));

	if (t51 != 36) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x305 = 13871143U;
	static volatile int16_t x306 = -1;
	uint32_t x307 = 15954307U;
	volatile uint64_t x308 = UINT64_MAX;
	uint32_t t52 = 10U;

	t52 = ((x305%x306)>>(x307==x308));

	if (t52 != 13871143U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x309 = INT32_MIN;
	static int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	volatile int8_t x312 = INT8_MAX;
	volatile int32_t t53 = 31502415;

	t53 = ((x309%x310)>>(x311==x312));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x316 = INT16_MIN;
	volatile int64_t t54 = 6004294494757LL;

	t54 = ((x313%x314)>>(x315==x316));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x321 = 15;
	int64_t x322 = -2004286121LL;
	static int32_t x323 = 14223;
	static uint64_t x324 = 673346LLU;

	t55 = ((x321%x322)>>(x323==x324));

	if (t55 != 15LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x326 = -1;
	static int32_t x327 = INT32_MAX;
	static int64_t x328 = 6950937155576084LL;
	static volatile int32_t t56 = -947411;

	t56 = ((x325%x326)>>(x327==x328));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x329 = INT64_MAX;
	static int64_t x330 = 164LL;
	int8_t x331 = INT8_MIN;
	volatile int64_t x332 = INT64_MIN;
	int64_t t57 = 18018848717939LL;

	t57 = ((x329%x330)>>(x331==x332));

	if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x335 = 120126902612709819LLU;
	int32_t x336 = INT32_MIN;

	t58 = ((x333%x334)>>(x335==x336));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x337 = INT64_MIN;

	t59 = ((x337%x338)>>(x339==x340));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t t60 = -26164;

	t60 = ((x345%x346)>>(x347==x348));

	if (t60 != 33) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x349 = INT32_MIN;
	volatile int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MAX;
	int8_t x352 = -2;

	t61 = ((x349%x350)>>(x351==x352));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x357 = 251331251LLU;
	int8_t x358 = INT8_MAX;
	uint16_t x359 = UINT16_MAX;
	static uint64_t x360 = 6737003785035148LLU;
	volatile uint64_t t62 = 12LLU;

	t62 = ((x357%x358)>>(x359==x360));

	if (t62 != 29LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x362 = -84362612;
	int16_t x363 = 1;
	static volatile int8_t x364 = INT8_MIN;
	volatile uint32_t t63 = 7965809U;

	t63 = ((x361%x362)>>(x363==x364));

	if (t63 != 84362611U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int32_t x370 = 5628482;
	static volatile uint64_t x371 = UINT64_MAX;
	int32_t x372 = 23512138;
	uint64_t t64 = 3722LLU;

	t64 = ((x369%x370)>>(x371==x372));

	if (t64 != 909017LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x379 = -1;

	t65 = ((x377%x378)>>(x379==x380));

	if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x381 = 68U;
	volatile int8_t x382 = INT8_MAX;
	int64_t x383 = INT64_MIN;
	uint8_t x384 = UINT8_MAX;

	t66 = ((x381%x382)>>(x383==x384));

	if (t66 != 68) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x386 = INT64_MIN;
	static int8_t x387 = -4;
	uint8_t x388 = 1U;
	uint64_t t67 = 0LLU;

	t67 = ((x385%x386)>>(x387==x388));

	if (t67 != 4795074866232LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x389 = INT16_MAX;
	uint16_t x390 = UINT16_MAX;
	uint64_t x392 = 8875288758LLU;

	t68 = ((x389%x390)>>(x391==x392));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	int64_t x400 = -1LL;
	uint64_t t69 = 686933866462LLU;

	t69 = ((x397%x398)>>(x399==x400));

	if (t69 != 54LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x401 = 29827;
	volatile int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t70 = 254638;

	t70 = ((x401%x402)>>(x403==x404));

	if (t70 != 29827) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x405 = INT8_MAX;
	int64_t x406 = -1LL;
	int8_t x407 = INT8_MAX;
	int16_t x408 = 0;

	t71 = ((x405%x406)>>(x407==x408));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x413 = UINT16_MAX;
	int32_t x414 = INT32_MAX;
	uint8_t x415 = 4U;
	uint16_t x416 = 1014U;

	t72 = ((x413%x414)>>(x415==x416));

	if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int16_t x418 = INT16_MIN;
	int64_t x419 = 1921680LL;
	volatile int32_t t73 = 67807985;

	t73 = ((x417%x418)>>(x419==x420));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x421 = UINT32_MAX;
	int32_t x422 = -770331667;
	uint64_t x423 = UINT64_MAX;
	int16_t x424 = -1;
	uint32_t t74 = 3827U;

	t74 = ((x421%x422)>>(x423==x424));

	if (t74 != 385165833U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x429 = INT32_MAX;
	int8_t x430 = INT8_MIN;
	uint16_t x431 = UINT16_MAX;
	uint64_t x432 = 18141257LLU;
	volatile int32_t t75 = -2022531;

	t75 = ((x429%x430)>>(x431==x432));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x433 = INT64_MAX;
	int8_t x434 = -1;
	static int16_t x435 = INT16_MIN;
	volatile int16_t x436 = INT16_MAX;
	volatile int64_t t76 = -139041279280413534LL;

	t76 = ((x433%x434)>>(x435==x436));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x453 = 107580LL;
	uint16_t x454 = 3U;
	volatile int8_t x455 = -1;
	volatile int64_t t77 = -173556148LL;

	t77 = ((x453%x454)>>(x455==x456));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x458 = 3151U;
	static int64_t x460 = 48639998305623763LL;
	uint32_t t78 = 71U;

	t78 = ((x457%x458)>>(x459==x460));

	if (t78 != 1667U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x465 = 46673527LLU;
	int32_t x466 = INT32_MIN;
	int16_t x467 = INT16_MIN;
	static uint16_t x468 = 5076U;
	volatile uint64_t t79 = 140002098566891786LLU;

	t79 = ((x465%x466)>>(x467==x468));

	if (t79 != 46673527LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x473 = 391;
	uint32_t x474 = 148805U;
	uint32_t x475 = UINT32_MAX;
	int32_t x476 = INT32_MIN;
	volatile uint32_t t80 = 14171012U;

	t80 = ((x473%x474)>>(x475==x476));

	if (t80 != 391U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x482 = -111490166762477LL;
	static int32_t x483 = INT32_MIN;
	volatile int64_t t81 = 6256116LL;

	t81 = ((x481%x482)>>(x483==x484));

	if (t81 != 13520928578551LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x485 = 42364425LLU;
	static volatile int64_t x486 = INT64_MIN;
	volatile uint32_t x487 = 361934U;
	volatile uint64_t t82 = 10707162511LLU;

	t82 = ((x485%x486)>>(x487==x488));

	if (t82 != 42364425LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x493 = 400U;
	int32_t x494 = INT32_MIN;
	int8_t x495 = 1;
	static volatile int64_t x496 = INT64_MIN;

	t83 = ((x493%x494)>>(x495==x496));

	if (t83 != 400) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x497 = 0U;
	int32_t x499 = -1;
	static int32_t t84 = -1620847;

	t84 = ((x497%x498)>>(x499==x500));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x502 = 77U;
	int8_t x503 = -1;
	volatile int16_t x504 = -1;
	uint64_t t85 = 1073981115610280046LLU;

	t85 = ((x501%x502)>>(x503==x504));

	if (t85 != 7LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x505 = 1389U;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = 13306496929LLU;
	int64_t x508 = INT64_MAX;

	t86 = ((x505%x506)>>(x507==x508));

	if (t86 != 1389) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x514 = 64995U;
	int8_t x515 = -1;
	int16_t x516 = 1121;
	uint64_t t87 = 3272237246197LLU;

	t87 = ((x513%x514)>>(x515==x516));

	if (t87 != 57660LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x517 = UINT32_MAX;
	int8_t x518 = INT8_MAX;
	int16_t x519 = INT16_MIN;
	volatile uint32_t t88 = 210835179U;

	t88 = ((x517%x518)>>(x519==x520));

	if (t88 != 15U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x525 = INT64_MAX;
	int16_t x526 = INT16_MIN;
	static uint64_t x527 = 6LLU;
	volatile int8_t x528 = INT8_MIN;

	t89 = ((x525%x526)>>(x527==x528));

	if (t89 != 32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x529 = -58;
	uint64_t x530 = 27320513519LLU;
	volatile int8_t x531 = -1;
	int32_t x532 = INT32_MIN;
	volatile uint64_t t90 = 4374129645681LLU;

	t90 = ((x529%x530)>>(x531==x532));

	if (t90 != 7733737918LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x537 = 0U;
	int32_t x538 = INT32_MAX;
	int64_t x539 = INT64_MIN;
	static int64_t x540 = INT64_MAX;

	t91 = ((x537%x538)>>(x539==x540));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x542 = 3U;
	int32_t x543 = INT32_MIN;
	volatile int64_t x544 = INT64_MIN;

	t92 = ((x541%x542)>>(x543==x544));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x545 = 1604093729U;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = 39739969644931484LLU;
	int8_t x548 = -1;
	uint32_t t93 = 11U;

	t93 = ((x545%x546)>>(x547==x548));

	if (t93 != 1604093729U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x549 = 19U;
	volatile uint8_t x550 = 13U;
	static int8_t x551 = INT8_MIN;
	volatile uint16_t x552 = 49U;
	static volatile int32_t t94 = -63332;

	t94 = ((x549%x550)>>(x551==x552));

	if (t94 != 6) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x557 = UINT32_MAX;
	int64_t x559 = INT64_MIN;
	static int8_t x560 = -1;
	static volatile uint32_t t95 = 17973U;

	t95 = ((x557%x558)>>(x559==x560));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x565 = INT32_MAX;
	volatile int32_t x566 = INT32_MIN;
	static uint16_t x568 = 638U;
	static int32_t t96 = INT32_MAX;

	t96 = ((x565%x566)>>(x567==x568));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x573 = INT16_MAX;
	int16_t x574 = INT16_MIN;
	static uint8_t x575 = 0U;
	int64_t x576 = -1018416543LL;

	t97 = ((x573%x574)>>(x575==x576));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x581 = INT16_MIN;
	int8_t x582 = -1;
	volatile uint16_t x583 = UINT16_MAX;
	int64_t x584 = INT64_MIN;
	static volatile int32_t t98 = -24420976;

	t98 = ((x581%x582)>>(x583==x584));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x585 = 2U;
	int8_t x588 = 31;

	t99 = ((x585%x586)>>(x587==x588));

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

