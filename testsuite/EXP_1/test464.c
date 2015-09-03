#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = INT16_MAX;
int64_t x14 = -1LL;
int32_t t3 = 7;
volatile uint64_t x33 = 87395578465908891LLU;
int64_t x35 = 1009417379462116LL;
int16_t x43 = -1;
static uint32_t x44 = UINT32_MAX;
uint64_t x72 = UINT64_MAX;
volatile int16_t x78 = 458;
volatile uint64_t x87 = 13606165807LLU;
int32_t x93 = -1;
int16_t x94 = INT16_MAX;
uint8_t x100 = 106U;
int32_t t15 = 1434;
static uint8_t x103 = 3U;
uint8_t x115 = UINT8_MAX;
volatile int32_t t19 = 84473;
uint32_t x126 = 11873531U;
volatile int32_t t20 = 396;
volatile int8_t x129 = 12;
static int16_t x130 = INT16_MIN;
int32_t x149 = -1;
static uint64_t x151 = UINT64_MAX;
static volatile int16_t x156 = -1;
volatile uint32_t x159 = 35525560U;
static int64_t x164 = -1LL;
int64_t x173 = -1LL;
int8_t x176 = INT8_MAX;
int32_t x183 = 5731;
static uint32_t x189 = 671U;
int64_t x214 = 186003898636932LL;
int32_t x233 = INT32_MAX;
int64_t x235 = INT64_MAX;
static int64_t x238 = -1LL;
static int8_t x242 = 5;
volatile uint32_t x245 = 1969153U;
volatile int32_t t42 = -203593969;
int16_t x261 = 0;
int64_t x272 = -1LL;
volatile int64_t x278 = INT64_MAX;
static uint16_t x285 = 1152U;
uint16_t x291 = 2358U;
volatile int32_t t49 = -501;
volatile uint16_t x298 = 2371U;
int64_t x311 = INT64_MIN;
volatile uint8_t x316 = UINT8_MAX;
int32_t t54 = -21708;
int16_t x325 = INT16_MAX;
volatile int32_t t57 = -186;
uint16_t x331 = 6354U;
int16_t x333 = INT16_MIN;
int16_t x337 = INT16_MAX;
int32_t t60 = -584;
int8_t x341 = -2;
int64_t x345 = -1LL;
static int8_t x348 = -2;
uint8_t x357 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
static volatile int32_t t65 = 48;
volatile int32_t x371 = INT32_MIN;
int32_t t67 = -10157;
int64_t x373 = -1LL;
volatile int32_t t68 = -17792444;
int16_t x387 = -5;
volatile int32_t x388 = -1;
uint8_t x394 = 122U;
static int64_t x396 = 98LL;
uint64_t x412 = 32963451LLU;
int32_t x415 = INT32_MIN;
uint16_t x418 = 525U;
int32_t t76 = 10412;
volatile int32_t t78 = -25;
int32_t t80 = 828;
volatile uint8_t x440 = 107U;
int32_t t81 = -5;
int8_t x470 = -1;
int8_t x471 = INT8_MIN;
static int16_t x473 = -1;
int8_t x488 = INT8_MIN;
volatile uint16_t x500 = 170U;
int32_t t91 = 2;
int32_t x516 = -1;
uint64_t x521 = UINT64_MAX;
int32_t x524 = INT32_MAX;
int32_t x536 = 200;
uint32_t x538 = UINT32_MAX;
static int32_t x539 = INT32_MIN;
static int16_t x541 = INT16_MIN;
volatile int16_t x544 = 29;
static int32_t x547 = INT32_MIN;


void f0(void) {
	uint16_t x6 = 1U;
	int8_t x7 = -1;
	int8_t x8 = -31;
	static int32_t t0 = 0;

	t0 = (((x5*x6)<=x7)<x8);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	volatile int8_t x10 = -1;
	static int8_t x11 = INT8_MIN;
	static uint16_t x12 = UINT16_MAX;
	int32_t t1 = 8524613;

	t1 = (((x9*x10)<=x11)<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MIN;
	static int16_t x15 = INT16_MAX;
	int64_t x16 = 96321792142827944LL;
	static volatile int32_t t2 = 272259;

	t2 = (((x13*x14)<=x15)<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -22;
	static int8_t x26 = -1;
	static uint32_t x27 = 10719U;
	uint16_t x28 = 6U;

	t3 = (((x25*x26)<=x27)<x28);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x34 = 564902399LL;
	int16_t x36 = INT16_MAX;
	volatile int32_t t4 = -9569;

	t4 = (((x33*x34)<=x35)<x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 9LLU;
	uint64_t x38 = 31042520766181053LLU;
	int64_t x39 = INT64_MIN;
	static int16_t x40 = INT16_MAX;
	volatile int32_t t5 = 2625531;

	t5 = (((x37*x38)<=x39)<x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = UINT32_MAX;
	int32_t x42 = -116104;
	static volatile int32_t t6 = -8982;

	t6 = (((x41*x42)<=x43)<x44);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MAX;
	uint16_t x47 = 8001U;
	int16_t x48 = INT16_MIN;
	int32_t t7 = 79482;

	t7 = (((x45*x46)<=x47)<x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 1133919015LLU;
	static int16_t x50 = INT16_MAX;
	uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 12187U;
	volatile int32_t t8 = 1;

	t8 = (((x49*x50)<=x51)<x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = 21223;
	int64_t x54 = -56LL;
	static int64_t x55 = INT64_MAX;
	int32_t x56 = -377;
	int32_t t9 = -24;

	t9 = (((x53*x54)<=x55)<x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = INT16_MIN;
	int8_t x70 = -2;
	int64_t x71 = INT64_MIN;
	volatile int32_t t10 = 11;

	t10 = (((x69*x70)<=x71)<x72);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -80;
	static int32_t x79 = -1;
	int64_t x80 = -3783932039LL;
	int32_t t11 = -42810607;

	t11 = (((x77*x78)<=x79)<x80);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x81 = -1608661199457865LL;
	uint8_t x82 = 65U;
	static int32_t x83 = INT32_MAX;
	static int32_t x84 = INT32_MIN;
	int32_t t12 = 3676;

	t12 = (((x81*x82)<=x83)<x84);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = INT16_MIN;
	uint64_t x86 = 72719344523969270LLU;
	static volatile int16_t x88 = INT16_MIN;
	volatile int32_t t13 = 15105;

	t13 = (((x85*x86)<=x87)<x88);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x95 = 0;
	int64_t x96 = INT64_MIN;
	int32_t t14 = -72229389;

	t14 = (((x93*x94)<=x95)<x96);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x97 = INT8_MIN;
	uint64_t x98 = 768156941LLU;
	static uint16_t x99 = UINT16_MAX;

	t15 = (((x97*x98)<=x99)<x100);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x101 = -411;
	int64_t x102 = 207232006LL;
	int16_t x104 = -4596;
	int32_t t16 = 38431604;

	t16 = (((x101*x102)<=x103)<x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MIN;
	int32_t x111 = 30;
	int16_t x112 = -6;
	volatile int32_t t17 = -303304;

	t17 = (((x109*x110)<=x111)<x112);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = 505466582021LLU;
	static int32_t x114 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t18 = 1;

	t18 = (((x113*x114)<=x115)<x116);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = INT8_MAX;
	volatile uint32_t x118 = 1U;
	static int8_t x119 = -1;
	int16_t x120 = 85;

	t19 = (((x117*x118)<=x119)<x120);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x125 = -1;
	volatile uint32_t x127 = UINT32_MAX;
	static int8_t x128 = INT8_MIN;

	t20 = (((x125*x126)<=x127)<x128);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x131 = INT8_MIN;
	int32_t x132 = -1779;
	int32_t t21 = 810646045;

	t21 = (((x129*x130)<=x131)<x132);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = 10;
	static volatile int8_t x134 = -34;
	static volatile uint64_t x135 = UINT64_MAX;
	int64_t x136 = -207691LL;
	volatile int32_t t22 = -156261;

	t22 = (((x133*x134)<=x135)<x136);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x150 = INT8_MIN;
	uint8_t x152 = 1U;
	static volatile int32_t t23 = 27947;

	t23 = (((x149*x150)<=x151)<x152);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x153 = INT64_MAX;
	volatile int8_t x154 = -1;
	int32_t x155 = -1;
	static int32_t t24 = 168;

	t24 = (((x153*x154)<=x155)<x156);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x157 = 63U;
	uint8_t x158 = 44U;
	int8_t x160 = 0;
	int32_t t25 = -4457;

	t25 = (((x157*x158)<=x159)<x160);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x161 = INT64_MAX;
	int32_t x162 = -1;
	static uint32_t x163 = 2546U;
	int32_t t26 = -9239332;

	t26 = (((x161*x162)<=x163)<x164);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x174 = 39U;
	static uint32_t x175 = 66944875U;
	int32_t t27 = -664253143;

	t27 = (((x173*x174)<=x175)<x176);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -1;
	static int16_t x180 = -1;
	int32_t t28 = -82;

	t28 = (((x177*x178)<=x179)<x180);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	volatile int32_t t29 = -29946153;

	t29 = (((x181*x182)<=x183)<x184);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x190 = -9182;
	uint64_t x191 = 14504110LLU;
	uint16_t x192 = 1909U;
	int32_t t30 = -15479963;

	t30 = (((x189*x190)<=x191)<x192);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x193 = 1416U;
	int32_t x194 = 32482;
	volatile int16_t x195 = INT16_MIN;
	uint64_t x196 = UINT64_MAX;
	int32_t t31 = -14695;

	t31 = (((x193*x194)<=x195)<x196);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = 5224933942LL;
	static int64_t x207 = -1LL;
	static volatile int8_t x208 = -1;
	int32_t t32 = 475;

	t32 = (((x205*x206)<=x207)<x208);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x213 = 1U;
	uint32_t x215 = UINT32_MAX;
	static int16_t x216 = -1;
	volatile int32_t t33 = 3;

	t33 = (((x213*x214)<=x215)<x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x221 = -4;
	int64_t x222 = -118175332369LL;
	int64_t x223 = -1LL;
	int32_t x224 = INT32_MIN;
	static volatile int32_t t34 = 0;

	t34 = (((x221*x222)<=x223)<x224);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = 0;
	int32_t x227 = INT32_MIN;
	volatile int64_t x228 = 27055798906818534LL;
	volatile int32_t t35 = 591;

	t35 = (((x225*x226)<=x227)<x228);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x229 = INT16_MIN;
	static uint64_t x230 = UINT64_MAX;
	volatile int8_t x231 = INT8_MIN;
	uint32_t x232 = UINT32_MAX;
	static volatile int32_t t36 = 1368707;

	t36 = (((x229*x230)<=x231)<x232);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x234 = 1U;
	volatile int32_t x236 = 86;
	int32_t t37 = 7695000;

	t37 = (((x233*x234)<=x235)<x236);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x237 = 1U;
	static int32_t x239 = -1;
	uint32_t x240 = 96413U;
	int32_t t38 = 6;

	t38 = (((x237*x238)<=x239)<x240);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x241 = 84;
	volatile int16_t x243 = INT16_MIN;
	int16_t x244 = 924;
	int32_t t39 = -35924;

	t39 = (((x241*x242)<=x243)<x244);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x246 = -101580353;
	uint32_t x247 = UINT32_MAX;
	volatile int32_t x248 = INT32_MAX;
	int32_t t40 = 1;

	t40 = (((x245*x246)<=x247)<x248);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x249 = -1040215364748LL;
	uint64_t x250 = 31001769511149561LLU;
	volatile uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t41 = -748367823;

	t41 = (((x249*x250)<=x251)<x252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x257 = 35U;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MIN;
	int64_t x260 = 1095994075530LL;

	t42 = (((x257*x258)<=x259)<x260);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x262 = INT8_MIN;
	int64_t x263 = -707916634LL;
	int16_t x264 = -8;
	volatile int32_t t43 = 7;

	t43 = (((x261*x262)<=x263)<x264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x269 = 1400U;
	static int64_t x270 = -1729LL;
	int64_t x271 = INT64_MIN;
	int32_t t44 = 19513705;

	t44 = (((x269*x270)<=x271)<x272);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = INT64_MAX;
	int8_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = -1;
	int32_t t45 = -6;

	t45 = (((x273*x274)<=x275)<x276);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x277 = -1;
	uint32_t x279 = 6U;
	int32_t x280 = INT32_MIN;
	int32_t t46 = 26186118;

	t46 = (((x277*x278)<=x279)<x280);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x281 = 5LLU;
	static int32_t x282 = -121;
	volatile int16_t x283 = INT16_MIN;
	volatile int8_t x284 = -1;
	static volatile int32_t t47 = 294;

	t47 = (((x281*x282)<=x283)<x284);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x286 = INT16_MAX;
	uint32_t x287 = UINT32_MAX;
	static int8_t x288 = -1;
	volatile int32_t t48 = 3277037;

	t48 = (((x285*x286)<=x287)<x288);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x289 = -14;
	int16_t x290 = INT16_MIN;
	uint64_t x292 = 8LLU;

	t49 = (((x289*x290)<=x291)<x292);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 224U;
	volatile int16_t x296 = 0;
	volatile int32_t t50 = 300943;

	t50 = (((x293*x294)<=x295)<x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = 150U;
	static int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t51 = 6583;

	t51 = (((x297*x298)<=x299)<x300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x301 = INT8_MAX;
	uint64_t x302 = 6LLU;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -8004;
	int32_t t52 = 171067;

	t52 = (((x301*x302)<=x303)<x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x309 = 962LL;
	uint16_t x310 = 507U;
	volatile int8_t x312 = 25;
	static volatile int32_t t53 = 321;

	t53 = (((x309*x310)<=x311)<x312);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = UINT32_MAX;
	static uint8_t x315 = UINT8_MAX;

	t54 = (((x313*x314)<=x315)<x316);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x317 = UINT8_MAX;
	uint8_t x318 = 109U;
	uint64_t x319 = 3185734LLU;
	static int32_t x320 = INT32_MAX;
	int32_t t55 = 1947;

	t55 = (((x317*x318)<=x319)<x320);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x321 = UINT64_MAX;
	int32_t x322 = -1;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	static int32_t t56 = 1791;

	t56 = (((x321*x322)<=x323)<x324);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x326 = 12954609611LLU;
	int32_t x327 = 341;
	int32_t x328 = INT32_MAX;

	t57 = (((x325*x326)<=x327)<x328);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x329 = 2954U;
	uint16_t x330 = 29U;
	uint8_t x332 = 27U;
	volatile int32_t t58 = -168509816;

	t58 = (((x329*x330)<=x331)<x332);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x334 = -3466;
	uint64_t x335 = 65342133571678LLU;
	uint64_t x336 = 201683LLU;
	volatile int32_t t59 = 203171239;

	t59 = (((x333*x334)<=x335)<x336);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x338 = 79;
	int16_t x339 = INT16_MIN;
	volatile int16_t x340 = -1;

	t60 = (((x337*x338)<=x339)<x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x342 = UINT32_MAX;
	uint8_t x343 = 21U;
	volatile int64_t x344 = INT64_MIN;
	int32_t t61 = 264283062;

	t61 = (((x341*x342)<=x343)<x344);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x346 = INT32_MIN;
	int16_t x347 = INT16_MAX;
	int32_t t62 = -139;

	t62 = (((x345*x346)<=x347)<x348);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x349 = -1LL;
	uint8_t x350 = 9U;
	int32_t x351 = INT32_MIN;
	volatile int64_t x352 = INT64_MIN;
	int32_t t63 = 33;

	t63 = (((x349*x350)<=x351)<x352);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x353 = 1LLU;
	uint64_t x354 = 2686263LLU;
	volatile uint64_t x355 = 5496828LLU;
	static uint32_t x356 = UINT32_MAX;
	static volatile int32_t t64 = 176524;

	t64 = (((x353*x354)<=x355)<x356);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x358 = INT8_MIN;
	int64_t x359 = -1136141535634266LL;

	t65 = (((x357*x358)<=x359)<x360);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x365 = INT16_MIN;
	static volatile int64_t x366 = -1LL;
	static int64_t x367 = 16676796497LL;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t66 = -4;

	t66 = (((x365*x366)<=x367)<x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x369 = -12;
	int16_t x370 = -1332;
	int8_t x372 = -1;

	t67 = (((x369*x370)<=x371)<x372);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x374 = -1;
	int64_t x375 = -1LL;
	volatile int16_t x376 = INT16_MIN;

	t68 = (((x373*x374)<=x375)<x376);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x381 = INT16_MIN;
	static uint64_t x382 = UINT64_MAX;
	int64_t x383 = -1597639148LL;
	uint64_t x384 = 532807707LLU;
	int32_t t69 = -1319;

	t69 = (((x381*x382)<=x383)<x384);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x385 = 580492517080577496LLU;
	uint64_t x386 = 226888653LLU;
	int32_t t70 = -5526;

	t70 = (((x385*x386)<=x387)<x388);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x389 = 1U;
	int8_t x390 = INT8_MIN;
	volatile uint16_t x391 = 6468U;
	int64_t x392 = -1LL;
	int32_t t71 = 25070;

	t71 = (((x389*x390)<=x391)<x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x393 = -1;
	int32_t x395 = -1;
	static int32_t t72 = -1;

	t72 = (((x393*x394)<=x395)<x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = 192;
	uint32_t x398 = 105803992U;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = 1472195U;
	int32_t t73 = -1;

	t73 = (((x397*x398)<=x399)<x400);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x409 = INT16_MIN;
	static int16_t x410 = -1;
	volatile int16_t x411 = INT16_MAX;
	volatile int32_t t74 = 4;

	t74 = (((x409*x410)<=x411)<x412);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x413 = UINT16_MAX;
	int8_t x414 = -1;
	uint8_t x416 = UINT8_MAX;
	volatile int32_t t75 = 87893446;

	t75 = (((x413*x414)<=x415)<x416);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x417 = INT16_MIN;
	uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = INT8_MAX;

	t76 = (((x417*x418)<=x419)<x420);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x421 = 1981940712U;
	int32_t x422 = 0;
	int16_t x423 = INT16_MAX;
	static int8_t x424 = INT8_MIN;
	volatile int32_t t77 = -556524480;

	t77 = (((x421*x422)<=x423)<x424);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = -1;
	int16_t x426 = INT16_MAX;
	uint8_t x427 = 1U;
	int16_t x428 = INT16_MIN;

	t78 = (((x425*x426)<=x427)<x428);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x429 = 758231602;
	volatile int16_t x430 = -1;
	uint16_t x431 = 155U;
	volatile uint32_t x432 = 293451145U;
	static int32_t t79 = 3772;

	t79 = (((x429*x430)<=x431)<x432);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x433 = INT32_MIN;
	uint64_t x434 = 4286090630LLU;
	int64_t x435 = -1LL;
	volatile int32_t x436 = 0;

	t80 = (((x433*x434)<=x435)<x436);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x437 = 62U;
	int32_t x438 = -1;
	static volatile int8_t x439 = INT8_MAX;

	t81 = (((x437*x438)<=x439)<x440);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x441 = -6;
	uint64_t x442 = 420569672679593LLU;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = -54;
	volatile int32_t t82 = -13085170;

	t82 = (((x441*x442)<=x443)<x444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x449 = -1;
	int8_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	int32_t x452 = INT32_MAX;
	volatile int32_t t83 = 163;

	t83 = (((x449*x450)<=x451)<x452);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x465 = INT16_MIN;
	static int16_t x466 = INT16_MIN;
	static int16_t x467 = INT16_MIN;
	int64_t x468 = INT64_MIN;
	static int32_t t84 = 3535855;

	t84 = (((x465*x466)<=x467)<x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x469 = INT8_MIN;
	uint64_t x472 = UINT64_MAX;
	int32_t t85 = 42247;

	t85 = (((x469*x470)<=x471)<x472);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x474 = INT16_MIN;
	int32_t x475 = -1;
	int64_t x476 = INT64_MAX;
	int32_t t86 = -23933;

	t86 = (((x473*x474)<=x475)<x476);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x481 = 3U;
	volatile uint16_t x482 = 3U;
	int8_t x483 = 29;
	int8_t x484 = INT8_MIN;
	int32_t t87 = 2;

	t87 = (((x481*x482)<=x483)<x484);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x485 = 322549968980466818LLU;
	static int32_t x486 = -1;
	static int32_t x487 = INT32_MAX;
	int32_t t88 = -220781;

	t88 = (((x485*x486)<=x487)<x488);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x497 = 0;
	volatile int8_t x498 = -3;
	volatile int8_t x499 = INT8_MIN;
	int32_t t89 = 122031711;

	t89 = (((x497*x498)<=x499)<x500);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x501 = UINT32_MAX;
	static int32_t x502 = -3965987;
	static int16_t x503 = -1;
	int8_t x504 = INT8_MIN;
	volatile int32_t t90 = -277;

	t90 = (((x501*x502)<=x503)<x504);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x505 = 1160LLU;
	volatile int8_t x506 = -6;
	static int32_t x507 = INT32_MIN;
	int64_t x508 = -1LL;

	t91 = (((x505*x506)<=x507)<x508);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x509 = -1;
	static int16_t x510 = 54;
	int8_t x511 = INT8_MIN;
	static uint64_t x512 = 510293841LLU;
	static int32_t t92 = -266709;

	t92 = (((x509*x510)<=x511)<x512);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x513 = 2210590LLU;
	volatile uint8_t x514 = UINT8_MAX;
	static int32_t x515 = INT32_MIN;
	static volatile int32_t t93 = 18;

	t93 = (((x513*x514)<=x515)<x516);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x522 = 4107245584777LLU;
	int32_t x523 = 0;
	int32_t t94 = 2017855;

	t94 = (((x521*x522)<=x523)<x524);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x525 = INT32_MIN;
	int64_t x526 = -1822604LL;
	int64_t x527 = INT64_MAX;
	int16_t x528 = -47;
	int32_t t95 = 5;

	t95 = (((x525*x526)<=x527)<x528);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x533 = UINT8_MAX;
	uint64_t x534 = UINT64_MAX;
	int8_t x535 = INT8_MAX;
	volatile int32_t t96 = -3388436;

	t96 = (((x533*x534)<=x535)<x536);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x537 = 0;
	static int16_t x540 = -1;
	int32_t t97 = 6293484;

	t97 = (((x537*x538)<=x539)<x540);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x542 = -1;
	static int16_t x543 = INT16_MIN;
	volatile int32_t t98 = 0;

	t98 = (((x541*x542)<=x543)<x544);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x545 = UINT64_MAX;
	static uint32_t x546 = 350U;
	uint32_t x548 = UINT32_MAX;
	volatile int32_t t99 = -8295;

	t99 = (((x545*x546)<=x547)<x548);

	if (t99 != 1) { NG(); } else { ; }
	
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

