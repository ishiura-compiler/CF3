#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -2LL;
uint16_t x2 = 54U;
volatile int32_t t0 = -444454;
uint16_t x5 = 12780U;
int32_t x6 = -6329002;
uint8_t x7 = 55U;
int8_t x8 = -47;
volatile int32_t x18 = -3;
volatile int8_t x21 = INT8_MIN;
int8_t x25 = -5;
int16_t x47 = INT16_MIN;
uint16_t x52 = 0U;
static volatile uint16_t x78 = UINT16_MAX;
int64_t x79 = INT64_MAX;
int16_t x91 = -2040;
volatile int32_t t12 = -27682;
int16_t x93 = -83;
uint64_t x98 = 10127968526LLU;
uint32_t x100 = UINT32_MAX;
int32_t t14 = 808561479;
int16_t x102 = 1;
uint32_t x103 = UINT32_MAX;
uint64_t x118 = 11488LLU;
int32_t t17 = -3468824;
int64_t x123 = INT64_MIN;
uint16_t x129 = UINT16_MAX;
uint16_t x130 = 28U;
uint32_t x132 = 225U;
volatile int16_t x133 = -1;
int8_t x149 = INT8_MIN;
uint8_t x150 = 1U;
static uint32_t x154 = 188879U;
static uint16_t x156 = 6U;
static uint32_t x162 = 13U;
int16_t x166 = -4;
static int64_t x172 = INT64_MIN;
int8_t x173 = 0;
uint32_t x175 = UINT32_MAX;
static uint64_t x176 = 51LLU;
int64_t x205 = -1LL;
static int32_t x214 = 89549576;
uint8_t x215 = 60U;
static int32_t x228 = -186225762;
volatile int32_t t36 = -2318;
static int8_t x233 = -23;
volatile int32_t t38 = -9335510;
int8_t x246 = INT8_MAX;
int32_t x249 = INT32_MAX;
int64_t x259 = 1958400LL;
int8_t x271 = INT8_MIN;
int32_t t44 = -147726;
int32_t x288 = 1018;
uint32_t x289 = 2949359U;
uint16_t x297 = UINT16_MAX;
uint32_t x300 = UINT32_MAX;
volatile uint16_t x313 = 22U;
uint32_t x319 = UINT32_MAX;
uint32_t x320 = 12U;
volatile int8_t x322 = INT8_MAX;
int32_t x323 = -1;
uint32_t x330 = 23208U;
int8_t x335 = INT8_MIN;
uint16_t x336 = UINT16_MAX;
volatile uint16_t x337 = 2U;
int16_t x340 = INT16_MIN;
static volatile int32_t t58 = -4499;
volatile int32_t t61 = -1023571159;
uint32_t x362 = UINT32_MAX;
volatile int32_t t62 = -1;
int32_t t63 = 79550;
volatile uint32_t x384 = 0U;
volatile int32_t t65 = -322051658;
uint64_t x385 = 70719LLU;
int32_t x386 = INT32_MIN;
int32_t t68 = 12366533;
int32_t x421 = 147;
uint16_t x422 = UINT16_MAX;
static volatile uint32_t x424 = 724520U;
int32_t t72 = 27751;
int16_t x426 = -1;
volatile int32_t t73 = 505109032;
int64_t x433 = INT64_MIN;
volatile uint8_t x434 = 9U;
static int8_t x449 = 1;
volatile uint32_t x452 = 1694U;
int16_t x455 = INT16_MAX;
uint32_t x458 = 21U;
static int16_t x461 = INT16_MAX;
int64_t x464 = -1LL;
volatile int16_t x475 = INT16_MAX;
int64_t x486 = INT64_MIN;
static volatile int32_t t84 = 51405884;
static int32_t x499 = 1512;
uint64_t x500 = UINT64_MAX;
volatile int32_t t85 = 509741;
volatile int8_t x511 = -26;
uint16_t x514 = UINT16_MAX;
int32_t t88 = 4162461;
int8_t x526 = INT8_MIN;
int64_t x530 = 0LL;
uint64_t x531 = UINT64_MAX;
int32_t x533 = INT32_MAX;
int8_t x535 = -1;
static int32_t t91 = -556;
int32_t x541 = INT32_MIN;
int32_t x548 = -1;
static int16_t x552 = INT16_MAX;
static int8_t x567 = INT8_MIN;


void f0(void) {
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MIN;

	t0 = (x1==(x2*(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t t1 = 2953324;

	t1 = (x5==(x6*(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 7U;
	uint32_t x10 = UINT32_MAX;
	uint16_t x11 = 0U;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -4;

	t2 = (x9==(x10*(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	static uint8_t x19 = 0U;
	int32_t x20 = -1;
	volatile int32_t t3 = 861;

	t3 = (x17==(x18*(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t4 = 511822381;

	t4 = (x21==(x22*(x23+x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MAX;
	uint8_t x27 = UINT8_MAX;
	volatile uint8_t x28 = 9U;
	volatile int32_t t5 = 7;

	t5 = (x25==(x26*(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = -7;
	uint64_t x38 = UINT64_MAX;
	volatile uint16_t x39 = UINT16_MAX;
	int8_t x40 = 0;
	int32_t t6 = -120990919;

	t6 = (x37==(x38*(x39+x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x45 = -153962;
	int8_t x46 = 0;
	uint32_t x48 = 8646718U;
	int32_t t7 = 101551573;

	t7 = (x45==(x46*(x47+x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x49 = INT16_MIN;
	uint64_t x50 = 6305634374699101265LLU;
	int64_t x51 = INT64_MAX;
	int32_t t8 = -15994574;

	t8 = (x49==(x50*(x51+x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x53 = -17;
	int32_t x54 = -1;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = INT8_MAX;
	static volatile int32_t t9 = 568797;

	t9 = (x53==(x54*(x55+x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x69 = 66U;
	uint8_t x70 = 0U;
	static uint64_t x71 = UINT64_MAX;
	int64_t x72 = -1LL;
	int32_t t10 = -1;

	t10 = (x69==(x70*(x71+x72)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x77 = -1;
	static uint64_t x80 = UINT64_MAX;
	static volatile int32_t t11 = 63858043;

	t11 = (x77==(x78*(x79+x80)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x89 = -25;
	volatile int8_t x90 = -1;
	int8_t x92 = -1;

	t12 = (x89==(x90*(x91+x92)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x94 = -39;
	int8_t x95 = -1;
	static int32_t x96 = 28208;
	volatile int32_t t13 = -8795590;

	t13 = (x93==(x94*(x95+x96)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x97 = 54096763LLU;
	uint16_t x99 = 0U;

	t14 = (x97==(x98*(x99+x100)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x101 = INT32_MAX;
	uint16_t x104 = 0U;
	static volatile int32_t t15 = -12247;

	t15 = (x101==(x102*(x103+x104)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = 0;
	static uint32_t x114 = 844945U;
	static int16_t x115 = 2;
	uint64_t x116 = UINT64_MAX;
	int32_t t16 = -3037;

	t16 = (x113==(x114*(x115+x116)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x117 = UINT32_MAX;
	int16_t x119 = 3;
	int32_t x120 = INT32_MIN;

	t17 = (x117==(x118*(x119+x120)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x121 = -3;
	static volatile uint64_t x122 = UINT64_MAX;
	uint16_t x124 = 5U;
	static volatile int32_t t18 = -70514;

	t18 = (x121==(x122*(x123+x124)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x131 = -1;
	static volatile int32_t t19 = -6;

	t19 = (x129==(x130*(x131+x132)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x134 = INT8_MAX;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	int32_t t20 = -8067;

	t20 = (x133==(x134*(x135+x136)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MAX;
	int64_t x148 = -1LL;
	static volatile int32_t t21 = 145468007;

	t21 = (x145==(x146*(x147+x148)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x151 = -1;
	uint8_t x152 = 1U;
	static int32_t t22 = 66818337;

	t22 = (x149==(x150*(x151+x152)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x153 = INT64_MAX;
	int32_t x155 = -1;
	int32_t t23 = 75242904;

	t23 = (x153==(x154*(x155+x156)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x157 = 1375LLU;
	volatile int8_t x158 = -1;
	uint16_t x159 = 2U;
	int64_t x160 = -17390733765LL;
	int32_t t24 = -3639;

	t24 = (x157==(x158*(x159+x160)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x161 = INT64_MAX;
	static uint32_t x163 = 15U;
	static int64_t x164 = -132005251180783288LL;
	volatile int32_t t25 = 68360742;

	t25 = (x161==(x162*(x163+x164)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x165 = 14;
	volatile int8_t x167 = INT8_MIN;
	int16_t x168 = -2868;
	int32_t t26 = -7314082;

	t26 = (x165==(x166*(x167+x168)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x169 = -1;
	uint64_t x170 = 17394285436406282LLU;
	uint32_t x171 = UINT32_MAX;
	static int32_t t27 = -64;

	t27 = (x169==(x170*(x171+x172)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x174 = 1938159989598447LLU;
	static int32_t t28 = -6944;

	t28 = (x173==(x174*(x175+x176)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x177 = INT32_MAX;
	static int16_t x178 = INT16_MAX;
	volatile int16_t x179 = 36;
	int32_t x180 = 230;
	static int32_t t29 = -516370433;

	t29 = (x177==(x178*(x179+x180)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x185 = -3825;
	uint64_t x186 = 410858610065946LLU;
	static int8_t x187 = -1;
	uint16_t x188 = UINT16_MAX;
	int32_t t30 = 8205;

	t30 = (x185==(x186*(x187+x188)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x189 = -6230068044188699LL;
	static volatile int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 399295U;
	int32_t t31 = 247764;

	t31 = (x189==(x190*(x191+x192)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x193 = -672LL;
	volatile int64_t x194 = -1LL;
	uint16_t x195 = UINT16_MAX;
	uint64_t x196 = UINT64_MAX;
	int32_t t32 = -45122811;

	t32 = (x193==(x194*(x195+x196)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x206 = -83LL;
	uint64_t x207 = 21783LLU;
	int64_t x208 = INT64_MAX;
	volatile int32_t t33 = -9070131;

	t33 = (x205==(x206*(x207+x208)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x213 = UINT32_MAX;
	uint64_t x216 = 7LLU;
	volatile int32_t t34 = -288864;

	t34 = (x213==(x214*(x215+x216)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x221 = 1U;
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MIN;
	volatile int8_t x224 = 57;
	int32_t t35 = 1;

	t35 = (x221==(x222*(x223+x224)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x225 = UINT64_MAX;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = -590LL;

	t36 = (x225==(x226*(x227+x228)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x234 = 236U;
	static uint32_t x235 = 159U;
	volatile uint32_t x236 = 13858U;
	static volatile int32_t t37 = 1;

	t37 = (x233==(x234*(x235+x236)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x237 = INT8_MIN;
	static int16_t x238 = 8;
	int16_t x239 = -1;
	int32_t x240 = -1;

	t38 = (x237==(x238*(x239+x240)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x245 = UINT64_MAX;
	int32_t x247 = -1;
	uint16_t x248 = 2U;
	static int32_t t39 = -64;

	t39 = (x245==(x246*(x247+x248)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x250 = -1;
	volatile uint8_t x251 = 1U;
	static int32_t x252 = INT32_MIN;
	static int32_t t40 = -56031636;

	t40 = (x249==(x250*(x251+x252)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x257 = 29LL;
	uint16_t x258 = 20169U;
	uint16_t x260 = UINT16_MAX;
	int32_t t41 = 3;

	t41 = (x257==(x258*(x259+x260)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x261 = 8866U;
	static int8_t x262 = INT8_MAX;
	uint64_t x263 = 107LLU;
	int32_t x264 = INT32_MIN;
	int32_t t42 = 1732364;

	t42 = (x261==(x262*(x263+x264)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x265 = 3637U;
	static int8_t x266 = INT8_MAX;
	int32_t x267 = -149046;
	uint16_t x268 = 2U;
	int32_t t43 = 191063819;

	t43 = (x265==(x266*(x267+x268)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x269 = 0;
	static uint8_t x270 = UINT8_MAX;
	uint8_t x272 = 0U;

	t44 = (x269==(x270*(x271+x272)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = 126U;
	static int8_t x278 = 1;
	uint8_t x279 = UINT8_MAX;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t45 = 5895301;

	t45 = (x277==(x278*(x279+x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x285 = 888446;
	int16_t x286 = -1;
	int16_t x287 = -1;
	volatile int32_t t46 = -1;

	t46 = (x285==(x286*(x287+x288)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x290 = INT16_MIN;
	int64_t x291 = 388376245LL;
	volatile int32_t x292 = 165;
	static volatile int32_t t47 = 480970;

	t47 = (x289==(x290*(x291+x292)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x293 = UINT16_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	volatile uint32_t x295 = UINT32_MAX;
	static uint8_t x296 = 1U;
	int32_t t48 = 9;

	t48 = (x293==(x294*(x295+x296)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 258U;
	volatile int32_t t49 = -28;

	t49 = (x297==(x298*(x299+x300)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x301 = 0U;
	static volatile int64_t x302 = INT64_MAX;
	static int16_t x303 = INT16_MIN;
	static uint64_t x304 = 58858279371LLU;
	int32_t t50 = 109862;

	t50 = (x301==(x302*(x303+x304)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x309 = -1;
	static int8_t x310 = INT8_MIN;
	uint64_t x311 = 13LLU;
	volatile uint32_t x312 = 3929U;
	int32_t t51 = 0;

	t51 = (x309==(x310*(x311+x312)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x314 = INT8_MAX;
	uint16_t x315 = UINT16_MAX;
	uint8_t x316 = 2U;
	static volatile int32_t t52 = -7027;

	t52 = (x313==(x314*(x315+x316)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x317 = -3;
	uint8_t x318 = 9U;
	int32_t t53 = -3;

	t53 = (x317==(x318*(x319+x320)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x321 = 6387U;
	static uint64_t x324 = 4766136287272398LLU;
	int32_t t54 = -16135;

	t54 = (x321==(x322*(x323+x324)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x325 = INT16_MAX;
	volatile uint64_t x326 = 63811LLU;
	uint16_t x327 = 17U;
	int16_t x328 = -1;
	volatile int32_t t55 = 2;

	t55 = (x325==(x326*(x327+x328)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x329 = -3102;
	int16_t x331 = 10;
	volatile int64_t x332 = -10788352LL;
	static volatile int32_t t56 = 19891623;

	t56 = (x329==(x330*(x331+x332)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x333 = -1;
	int8_t x334 = 1;
	int32_t t57 = -36;

	t57 = (x333==(x334*(x335+x336)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x338 = UINT8_MAX;
	static uint16_t x339 = UINT16_MAX;

	t58 = (x337==(x338*(x339+x340)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x341 = 23382LLU;
	int32_t x342 = -1;
	int64_t x343 = INT64_MIN;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t59 = -1;

	t59 = (x341==(x342*(x343+x344)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x353 = INT32_MAX;
	static uint32_t x354 = 1U;
	int32_t x355 = 9759338;
	volatile uint8_t x356 = 32U;
	volatile int32_t t60 = -4;

	t60 = (x353==(x354*(x355+x356)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = -1;
	int32_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MAX;

	t61 = (x357==(x358*(x359+x360)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x361 = 1U;
	int64_t x363 = -62779LL;
	uint64_t x364 = 5776LLU;

	t62 = (x361==(x362*(x363+x364)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x365 = INT32_MIN;
	static int16_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	int32_t x368 = INT32_MIN;

	t63 = (x365==(x366*(x367+x368)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MAX;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -23;
	static volatile int32_t t64 = 475909103;

	t64 = (x377==(x378*(x379+x380)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x381 = 51798507U;
	uint64_t x382 = 1000051196902119792LLU;
	int16_t x383 = 5749;

	t65 = (x381==(x382*(x383+x384)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x387 = 10185U;
	uint64_t x388 = 0LLU;
	volatile int32_t t66 = -822536;

	t66 = (x385==(x386*(x387+x388)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x389 = -1;
	static uint64_t x390 = 22018LLU;
	static volatile int64_t x391 = -1LL;
	volatile uint8_t x392 = 25U;
	volatile int32_t t67 = 690;

	t67 = (x389==(x390*(x391+x392)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x397 = -1;
	int32_t x398 = 1009;
	int64_t x399 = INT64_MAX;
	static int64_t x400 = INT64_MIN;

	t68 = (x397==(x398*(x399+x400)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x401 = INT64_MAX;
	uint16_t x402 = 3U;
	volatile uint32_t x403 = UINT32_MAX;
	static uint8_t x404 = 50U;
	int32_t t69 = 425;

	t69 = (x401==(x402*(x403+x404)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x405 = -1;
	uint8_t x406 = 3U;
	uint32_t x407 = UINT32_MAX;
	static int16_t x408 = 15241;
	volatile int32_t t70 = -1592;

	t70 = (x405==(x406*(x407+x408)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x413 = 3298U;
	volatile int16_t x414 = -1;
	volatile int16_t x415 = -58;
	int32_t x416 = INT32_MAX;
	volatile int32_t t71 = -135;

	t71 = (x413==(x414*(x415+x416)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x423 = 46;

	t72 = (x421==(x422*(x423+x424)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x427 = 0U;
	volatile uint8_t x428 = 54U;

	t73 = (x425==(x426*(x427+x428)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x435 = 18532877U;
	static uint32_t x436 = 115902909U;
	int32_t t74 = 0;

	t74 = (x433==(x434*(x435+x436)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x437 = INT64_MIN;
	int8_t x438 = -1;
	uint8_t x439 = 5U;
	uint64_t x440 = 20843LLU;
	volatile int32_t t75 = -744631;

	t75 = (x437==(x438*(x439+x440)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x441 = -1LL;
	static uint32_t x442 = UINT32_MAX;
	uint16_t x443 = 218U;
	volatile uint32_t x444 = UINT32_MAX;
	volatile int32_t t76 = 23667;

	t76 = (x441==(x442*(x443+x444)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x450 = 1250515LL;
	int32_t x451 = INT32_MIN;
	volatile int32_t t77 = -297;

	t77 = (x449==(x450*(x451+x452)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x453 = -1LL;
	volatile int32_t x454 = -1;
	int8_t x456 = INT8_MAX;
	volatile int32_t t78 = 0;

	t78 = (x453==(x454*(x455+x456)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x457 = 63498598U;
	int8_t x459 = INT8_MIN;
	uint32_t x460 = UINT32_MAX;
	int32_t t79 = -8403351;

	t79 = (x457==(x458*(x459+x460)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x462 = 9U;
	uint64_t x463 = UINT64_MAX;
	int32_t t80 = 0;

	t80 = (x461==(x462*(x463+x464)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x473 = 0;
	int32_t x474 = 215;
	int64_t x476 = 22LL;
	int32_t t81 = 1708;

	t81 = (x473==(x474*(x475+x476)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x477 = INT64_MAX;
	volatile int8_t x478 = 0;
	int64_t x479 = 129598911305992LL;
	volatile int64_t x480 = 570345157489044201LL;
	volatile int32_t t82 = -117672;

	t82 = (x477==(x478*(x479+x480)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x481 = 3022008171416425LL;
	int8_t x482 = 1;
	volatile int8_t x483 = 0;
	int64_t x484 = INT64_MAX;
	volatile int32_t t83 = 1;

	t83 = (x481==(x482*(x483+x484)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x485 = INT32_MAX;
	uint16_t x487 = 4567U;
	static volatile uint64_t x488 = UINT64_MAX;

	t84 = (x485==(x486*(x487+x488)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x497 = INT32_MIN;
	volatile uint8_t x498 = 61U;

	t85 = (x497==(x498*(x499+x500)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x505 = -1;
	int32_t x506 = INT32_MIN;
	uint8_t x507 = 0U;
	uint64_t x508 = 530288822430894249LLU;
	int32_t t86 = 484409368;

	t86 = (x505==(x506*(x507+x508)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x509 = 622019505LLU;
	uint8_t x510 = 2U;
	int16_t x512 = INT16_MAX;
	int32_t t87 = -1317;

	t87 = (x509==(x510*(x511+x512)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x513 = INT8_MIN;
	uint64_t x515 = UINT64_MAX;
	int8_t x516 = -1;

	t88 = (x513==(x514*(x515+x516)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x525 = INT32_MAX;
	int64_t x527 = -103309653563LL;
	volatile uint32_t x528 = UINT32_MAX;
	static volatile int32_t t89 = 14796;

	t89 = (x525==(x526*(x527+x528)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x529 = 1;
	static int32_t x532 = INT32_MIN;
	volatile int32_t t90 = -5583;

	t90 = (x529==(x530*(x531+x532)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x534 = INT8_MIN;
	int32_t x536 = -1;

	t91 = (x533==(x534*(x535+x536)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x537 = INT32_MIN;
	static uint8_t x538 = 29U;
	uint64_t x539 = 7391301032062287LLU;
	int64_t x540 = INT64_MIN;
	int32_t t92 = 40105;

	t92 = (x537==(x538*(x539+x540)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x542 = 0;
	uint8_t x543 = 13U;
	int32_t x544 = -7161;
	static int32_t t93 = -1306;

	t93 = (x541==(x542*(x543+x544)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x545 = -1;
	static int64_t x546 = -11464174LL;
	int64_t x547 = -1LL;
	volatile int32_t t94 = -1;

	t94 = (x545==(x546*(x547+x548)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x549 = 64076;
	int16_t x550 = -1;
	uint32_t x551 = 47U;
	int32_t t95 = 4893360;

	t95 = (x549==(x550*(x551+x552)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x553 = 6390643148565LLU;
	static int64_t x554 = -1LL;
	uint8_t x555 = 9U;
	static volatile int16_t x556 = -1;
	volatile int32_t t96 = 240;

	t96 = (x553==(x554*(x555+x556)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x557 = INT16_MIN;
	uint16_t x558 = UINT16_MAX;
	int64_t x559 = -2020LL;
	volatile int16_t x560 = INT16_MIN;
	int32_t t97 = 25000961;

	t97 = (x557==(x558*(x559+x560)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x561 = 756548U;
	int32_t x562 = -1;
	volatile uint32_t x563 = 183U;
	uint64_t x564 = 61037258589LLU;
	volatile int32_t t98 = -3;

	t98 = (x561==(x562*(x563+x564)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x565 = UINT16_MAX;
	int64_t x566 = -1LL;
	volatile int32_t x568 = 324;
	int32_t t99 = -103;

	t99 = (x565==(x566*(x567+x568)));

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

