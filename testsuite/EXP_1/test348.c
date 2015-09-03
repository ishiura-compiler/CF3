#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 433;
volatile uint64_t x5 = 6293584LLU;
volatile int32_t t1 = -5;
volatile uint8_t x10 = 6U;
static uint32_t x14 = 35535961U;
int8_t x32 = -1;
int32_t t5 = 2;
int32_t t6 = -12518;
uint32_t x56 = 3433794U;
int16_t x64 = -14;
int32_t t11 = 572326;
int16_t x65 = -84;
int64_t x66 = -1LL;
static int32_t x67 = INT32_MIN;
int64_t x68 = 137428953065LL;
static volatile int32_t t12 = 430;
volatile int32_t t13 = 4395929;
uint32_t x78 = UINT32_MAX;
volatile int8_t x79 = -1;
uint32_t x90 = 469409758U;
volatile int16_t x91 = 160;
static int32_t t15 = -245496517;
int8_t x93 = 1;
volatile uint64_t x95 = 254102640LLU;
volatile int32_t t19 = -2;
int32_t x124 = INT32_MAX;
uint8_t x125 = 14U;
int64_t x128 = INT64_MIN;
int16_t x135 = INT16_MIN;
int8_t x137 = -1;
uint16_t x142 = 81U;
uint32_t x143 = 962799U;
volatile int16_t x144 = INT16_MIN;
int8_t x157 = -1;
int8_t x159 = INT8_MIN;
volatile int32_t t28 = -231789;
int64_t x169 = -1688319794LL;
int64_t x179 = -1LL;
volatile int32_t t32 = 0;
int8_t x199 = -1;
static volatile int32_t x200 = -191696213;
static int32_t t33 = 1;
volatile int32_t t34 = 1;
int16_t x209 = 9;
uint8_t x212 = UINT8_MAX;
int64_t x224 = INT64_MAX;
int8_t x226 = -6;
int32_t t37 = 0;
int16_t x237 = INT16_MIN;
static volatile int32_t t40 = 4873;
uint64_t x241 = 261240LLU;
uint32_t x242 = UINT32_MAX;
int16_t x245 = -1;
volatile int32_t t44 = -216258;
int32_t x257 = INT32_MAX;
int64_t x264 = INT64_MIN;
uint64_t x265 = 227921726LLU;
volatile int8_t x267 = INT8_MAX;
volatile int32_t t47 = 229539;
volatile uint64_t x269 = 0LLU;
int32_t t50 = 190917;
static volatile int64_t x282 = 25LL;
int16_t x286 = 44;
int32_t x292 = INT32_MIN;
uint16_t x302 = 0U;
int16_t x309 = 1;
uint8_t x312 = UINT8_MAX;
uint8_t x321 = 119U;
static volatile int32_t t57 = 0;
int16_t x334 = -8986;
volatile uint16_t x336 = 6U;
int64_t x342 = 118397437203188752LL;
static int8_t x348 = -45;
int16_t x353 = INT16_MIN;
int16_t x354 = INT16_MIN;
volatile int32_t x356 = -1;
volatile uint32_t x359 = 35183U;
volatile uint32_t x360 = 4U;
static int64_t x368 = -1LL;
int32_t t65 = -2647266;
uint16_t x369 = 140U;
int8_t x371 = INT8_MAX;
int64_t x372 = INT64_MIN;
int64_t x374 = -1299051496702802LL;
static uint16_t x384 = 1U;
uint8_t x388 = UINT8_MAX;
volatile int32_t x401 = 80809735;
int32_t x413 = INT32_MIN;
volatile int16_t x423 = INT16_MAX;
uint16_t x427 = UINT16_MAX;
uint8_t x435 = 7U;
int16_t x447 = 460;
uint32_t x454 = UINT32_MAX;
int32_t t83 = 123594225;
uint16_t x458 = 73U;
static uint64_t x460 = 6839952906333600LLU;
int64_t x476 = -1LL;
int32_t x477 = 0;
int8_t x480 = -1;
static int64_t x481 = -385797LL;
uint16_t x485 = UINT16_MAX;
static uint64_t x494 = 3371187523LLU;
volatile int32_t t90 = -14125;
int32_t x501 = 1;
static volatile int32_t t91 = -9;
static int32_t t92 = -3073;
uint64_t x517 = 5LLU;
int32_t t94 = 6171519;
static int16_t x521 = 1890;
int8_t x529 = 1;
volatile int32_t t98 = 392293;
volatile int64_t x545 = INT64_MIN;


void f0(void) {
	static uint16_t x1 = 120U;
	uint32_t x2 = 19U;
	volatile int64_t x3 = INT64_MIN;
	static int16_t x4 = -1;

	t0 = (((x1*x2)+x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -3;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MAX;

	t1 = (((x5*x6)+x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 5LLU;
	static int8_t x11 = -1;
	static volatile uint8_t x12 = 7U;
	volatile int32_t t2 = 0;

	t2 = (((x9*x10)+x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 209257270704LL;
	uint8_t x15 = 0U;
	int32_t x16 = 1;
	volatile int32_t t3 = 325;

	t3 = (((x13*x14)+x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x21 = 570220698559LL;
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = INT8_MAX;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t4 = -249;

	t4 = (((x21*x22)+x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x29 = -3;
	static int16_t x30 = 255;
	uint64_t x31 = UINT64_MAX;

	t5 = (((x29*x30)+x31)<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = -362;
	volatile int8_t x38 = INT8_MIN;
	int8_t x39 = -1;
	static uint16_t x40 = 2U;

	t6 = (((x37*x38)+x39)<=x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = -131820065926783888LL;
	int8_t x42 = 6;
	static uint16_t x43 = UINT16_MAX;
	uint32_t x44 = UINT32_MAX;
	int32_t t7 = 0;

	t7 = (((x41*x42)+x43)<=x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x45 = UINT64_MAX;
	int8_t x46 = 21;
	int16_t x47 = INT16_MIN;
	int8_t x48 = 20;
	static int32_t t8 = 930;

	t8 = (((x45*x46)+x47)<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 80338945167879842LLU;
	uint16_t x50 = 2U;
	static int8_t x51 = INT8_MIN;
	uint64_t x52 = 72474LLU;
	static volatile int32_t t9 = 595230;

	t9 = (((x49*x50)+x51)<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MIN;
	uint32_t x54 = UINT32_MAX;
	uint16_t x55 = UINT16_MAX;
	int32_t t10 = 3763437;

	t10 = (((x53*x54)+x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = 15U;
	int32_t x62 = -8202877;
	uint32_t x63 = 14986908U;

	t11 = (((x61*x62)+x63)<=x64);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {


	t12 = (((x65*x66)+x67)<=x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x73 = -1;
	int64_t x74 = 300761582LL;
	uint32_t x75 = UINT32_MAX;
	uint8_t x76 = UINT8_MAX;

	t13 = (((x73*x74)+x75)<=x76);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = 4;
	int16_t x80 = INT16_MIN;
	int32_t t14 = 929508444;

	t14 = (((x77*x78)+x79)<=x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x89 = -6;
	uint8_t x92 = 0U;

	t15 = (((x89*x90)+x91)<=x92);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x94 = 5U;
	uint16_t x96 = 685U;
	volatile int32_t t16 = -1022636;

	t16 = (((x93*x94)+x95)<=x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 2519824887LLU;
	static int64_t x102 = -39218881422LL;
	static int16_t x103 = INT16_MIN;
	int64_t x104 = 628LL;
	volatile int32_t t17 = 378324169;

	t17 = (((x101*x102)+x103)<=x104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x105 = 1U;
	volatile int8_t x106 = INT8_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MAX;
	static volatile int32_t t18 = -3215999;

	t18 = (((x105*x106)+x107)<=x108);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x109 = 1U;
	static int32_t x110 = INT32_MIN;
	int32_t x111 = 69881;
	int8_t x112 = INT8_MIN;

	t19 = (((x109*x110)+x111)<=x112);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x121 = 2;
	uint64_t x122 = 328321972LLU;
	int8_t x123 = INT8_MIN;
	volatile int32_t t20 = 1;

	t20 = (((x121*x122)+x123)<=x124);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x126 = 11;
	int32_t x127 = -98;
	volatile int32_t t21 = -21346324;

	t21 = (((x125*x126)+x127)<=x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = 6987;
	uint64_t x130 = 252726796180LLU;
	int8_t x131 = 4;
	int8_t x132 = INT8_MIN;
	volatile int32_t t22 = 440;

	t22 = (((x129*x130)+x131)<=x132);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x133 = UINT16_MAX;
	int16_t x134 = INT16_MAX;
	int64_t x136 = INT64_MIN;
	int32_t t23 = -80646641;

	t23 = (((x133*x134)+x135)<=x136);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x138 = INT32_MAX;
	static int16_t x139 = 146;
	uint64_t x140 = 3508832LLU;
	static int32_t t24 = -448996;

	t24 = (((x137*x138)+x139)<=x140);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x141 = 6581LL;
	int32_t t25 = -18904175;

	t25 = (((x141*x142)+x143)<=x144);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x145 = INT8_MIN;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t x147 = -1;
	volatile int16_t x148 = -9;
	volatile int32_t t26 = -2609537;

	t26 = (((x145*x146)+x147)<=x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = 59U;
	int16_t x150 = INT16_MIN;
	static uint32_t x151 = 506365219U;
	volatile int32_t x152 = INT32_MAX;
	static int32_t t27 = -6614;

	t27 = (((x149*x150)+x151)<=x152);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x158 = UINT64_MAX;
	int8_t x160 = INT8_MIN;

	t28 = (((x157*x158)+x159)<=x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x170 = UINT64_MAX;
	static volatile uint8_t x171 = 15U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t29 = -5868;

	t29 = (((x169*x170)+x171)<=x172);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x174 = 73051921LLU;
	volatile uint64_t x175 = 25429LLU;
	volatile int8_t x176 = INT8_MAX;
	int32_t t30 = -31;

	t30 = (((x173*x174)+x175)<=x176);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x177 = 0;
	int8_t x178 = -1;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t31 = -8;

	t31 = (((x177*x178)+x179)<=x180);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x193 = 1;
	int16_t x194 = INT16_MIN;
	static volatile int64_t x195 = -391LL;
	uint8_t x196 = UINT8_MAX;

	t32 = (((x193*x194)+x195)<=x196);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x197 = -1;
	int16_t x198 = -28;

	t33 = (((x197*x198)+x199)<=x200);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x201 = UINT32_MAX;
	static int8_t x202 = INT8_MIN;
	volatile int32_t x203 = -2;
	static uint16_t x204 = UINT16_MAX;

	t34 = (((x201*x202)+x203)<=x204);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x210 = UINT32_MAX;
	static uint8_t x211 = 62U;
	static volatile int32_t t35 = 0;

	t35 = (((x209*x210)+x211)<=x212);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x221 = 639742372134831227LL;
	volatile int8_t x222 = -1;
	static uint64_t x223 = 49093948048LLU;
	volatile int32_t t36 = -4;

	t36 = (((x221*x222)+x223)<=x224);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x225 = INT16_MIN;
	volatile int16_t x227 = INT16_MIN;
	int64_t x228 = INT64_MIN;

	t37 = (((x225*x226)+x227)<=x228);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x229 = INT8_MIN;
	int32_t x230 = -1;
	volatile int16_t x231 = INT16_MAX;
	uint16_t x232 = 101U;
	int32_t t38 = 73939;

	t38 = (((x229*x230)+x231)<=x232);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile int32_t x234 = -1183;
	static volatile uint16_t x235 = 15931U;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t39 = 13995581;

	t39 = (((x233*x234)+x235)<=x236);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x238 = INT8_MAX;
	int8_t x239 = INT8_MIN;
	volatile int32_t x240 = INT32_MIN;

	t40 = (((x237*x238)+x239)<=x240);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x243 = -1LL;
	int8_t x244 = INT8_MIN;
	volatile int32_t t41 = 6236256;

	t41 = (((x241*x242)+x243)<=x244);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x246 = 11U;
	int16_t x247 = INT16_MAX;
	uint16_t x248 = 5359U;
	static volatile int32_t t42 = -17179;

	t42 = (((x245*x246)+x247)<=x248);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x249 = 752991936LL;
	int16_t x250 = -1;
	volatile uint32_t x251 = 288619145U;
	static int8_t x252 = INT8_MAX;
	volatile int32_t t43 = 98103373;

	t43 = (((x249*x250)+x251)<=x252);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x253 = -1LL;
	int16_t x254 = -1;
	int32_t x255 = INT32_MIN;
	volatile int16_t x256 = -5;

	t44 = (((x253*x254)+x255)<=x256);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x258 = 883779967U;
	int64_t x259 = -1LL;
	static int32_t x260 = -1;
	static int32_t t45 = 809515078;

	t45 = (((x257*x258)+x259)<=x260);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = -36979643775808486LL;
	static int32_t x262 = -1;
	uint16_t x263 = 14U;
	int32_t t46 = -73896732;

	t46 = (((x261*x262)+x263)<=x264);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x266 = INT64_MIN;
	static volatile int32_t x268 = INT32_MIN;

	t47 = (((x265*x266)+x267)<=x268);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x270 = 13217U;
	int8_t x271 = -2;
	static int16_t x272 = INT16_MIN;
	int32_t t48 = -3285896;

	t48 = (((x269*x270)+x271)<=x272);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x273 = 9402U;
	int64_t x274 = -1LL;
	int64_t x275 = INT64_MAX;
	int8_t x276 = INT8_MIN;
	static int32_t t49 = 1;

	t49 = (((x273*x274)+x275)<=x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x277 = UINT16_MAX;
	int8_t x278 = -1;
	uint8_t x279 = 2U;
	volatile int32_t x280 = INT32_MIN;

	t50 = (((x277*x278)+x279)<=x280);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x283 = UINT16_MAX;
	uint16_t x284 = 1132U;
	volatile int32_t t51 = 117806563;

	t51 = (((x281*x282)+x283)<=x284);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x285 = 3U;
	volatile int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;
	int32_t t52 = -4399014;

	t52 = (((x285*x286)+x287)<=x288);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x289 = -1;
	static uint8_t x290 = UINT8_MAX;
	uint16_t x291 = 41U;
	int32_t t53 = -3539;

	t53 = (((x289*x290)+x291)<=x292);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x301 = INT64_MAX;
	int16_t x303 = -1;
	volatile uint64_t x304 = UINT64_MAX;
	int32_t t54 = -110;

	t54 = (((x301*x302)+x303)<=x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x305 = INT32_MAX;
	int8_t x306 = -1;
	static uint8_t x307 = 19U;
	int64_t x308 = INT64_MIN;
	int32_t t55 = -3294854;

	t55 = (((x305*x306)+x307)<=x308);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x310 = 159035833;
	volatile uint16_t x311 = 104U;
	volatile int32_t t56 = -120;

	t56 = (((x309*x310)+x311)<=x312);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x322 = -1LL;
	int32_t x323 = INT32_MIN;
	volatile int64_t x324 = -422LL;

	t57 = (((x321*x322)+x323)<=x324);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x325 = UINT8_MAX;
	uint64_t x326 = UINT64_MAX;
	static int8_t x327 = -1;
	int8_t x328 = -1;
	int32_t t58 = -347;

	t58 = (((x325*x326)+x327)<=x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = -2;
	uint64_t x335 = UINT64_MAX;
	volatile int32_t t59 = 5763136;

	t59 = (((x333*x334)+x335)<=x336);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x337 = INT8_MIN;
	static int16_t x338 = INT16_MAX;
	uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 826901564U;
	volatile int32_t t60 = -9511676;

	t60 = (((x337*x338)+x339)<=x340);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x341 = -1LL;
	int32_t x343 = -1;
	int64_t x344 = INT64_MAX;
	static volatile int32_t t61 = 0;

	t61 = (((x341*x342)+x343)<=x344);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x345 = -1549;
	static uint32_t x346 = UINT32_MAX;
	uint64_t x347 = 54LLU;
	volatile int32_t t62 = -3;

	t62 = (((x345*x346)+x347)<=x348);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x355 = INT32_MIN;
	volatile int32_t t63 = 29271897;

	t63 = (((x353*x354)+x355)<=x356);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x357 = -983LL;
	int16_t x358 = 4;
	int32_t t64 = -651393815;

	t64 = (((x357*x358)+x359)<=x360);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x365 = 6841U;
	int16_t x366 = 3;
	int32_t x367 = INT32_MIN;

	t65 = (((x365*x366)+x367)<=x368);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x370 = 0LL;
	static volatile int32_t t66 = -5;

	t66 = (((x369*x370)+x371)<=x372);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = 1760LL;
	int64_t x375 = 1865206761LL;
	int8_t x376 = -1;
	int32_t t67 = -509824003;

	t67 = (((x373*x374)+x375)<=x376);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	int32_t x383 = INT32_MIN;
	static volatile int32_t t68 = -59058;

	t68 = (((x381*x382)+x383)<=x384);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x385 = INT16_MAX;
	int8_t x386 = -3;
	static int8_t x387 = INT8_MIN;
	int32_t t69 = 194586298;

	t69 = (((x385*x386)+x387)<=x388);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x389 = UINT32_MAX;
	static int32_t x390 = -1;
	static volatile uint64_t x391 = UINT64_MAX;
	uint64_t x392 = 50163109628842494LLU;
	volatile int32_t t70 = -1941;

	t70 = (((x389*x390)+x391)<=x392);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x393 = 4;
	static int8_t x394 = INT8_MIN;
	int64_t x395 = -1LL;
	static int64_t x396 = INT64_MAX;
	int32_t t71 = -60130;

	t71 = (((x393*x394)+x395)<=x396);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x402 = 8U;
	volatile int16_t x403 = INT16_MAX;
	static uint16_t x404 = 0U;
	static volatile int32_t t72 = 3384637;

	t72 = (((x401*x402)+x403)<=x404);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x409 = 406;
	int8_t x410 = INT8_MIN;
	volatile int16_t x411 = -2681;
	int64_t x412 = -189843274841277LL;
	static int32_t t73 = -402;

	t73 = (((x409*x410)+x411)<=x412);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x414 = -1718LL;
	volatile uint64_t x415 = UINT64_MAX;
	int64_t x416 = INT64_MIN;
	static int32_t t74 = -3896;

	t74 = (((x413*x414)+x415)<=x416);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x421 = -21;
	int16_t x422 = INT16_MAX;
	uint8_t x424 = UINT8_MAX;
	static int32_t t75 = -78730345;

	t75 = (((x421*x422)+x423)<=x424);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x425 = -1;
	uint8_t x426 = UINT8_MAX;
	static uint64_t x428 = 43294462080759LLU;
	int32_t t76 = -70454050;

	t76 = (((x425*x426)+x427)<=x428);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x429 = 5732U;
	uint32_t x430 = 686147477U;
	uint64_t x431 = 2LLU;
	int16_t x432 = INT16_MIN;
	int32_t t77 = 144731854;

	t77 = (((x429*x430)+x431)<=x432);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x433 = -1;
	uint8_t x434 = UINT8_MAX;
	int16_t x436 = 0;
	volatile int32_t t78 = 663;

	t78 = (((x433*x434)+x435)<=x436);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x437 = 15U;
	volatile int32_t x438 = -1;
	uint16_t x439 = 14U;
	static int16_t x440 = INT16_MIN;
	volatile int32_t t79 = 3244;

	t79 = (((x437*x438)+x439)<=x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x441 = INT8_MIN;
	volatile int8_t x442 = -1;
	uint8_t x443 = 33U;
	uint32_t x444 = 57584240U;
	static volatile int32_t t80 = 626672;

	t80 = (((x441*x442)+x443)<=x444);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = INT8_MIN;
	static int64_t x446 = -1LL;
	uint32_t x448 = 0U;
	static volatile int32_t t81 = -13620268;

	t81 = (((x445*x446)+x447)<=x448);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x449 = -1;
	static uint64_t x450 = 79982256644932LLU;
	static uint64_t x451 = 1LLU;
	int16_t x452 = -1;
	int32_t t82 = -13;

	t82 = (((x449*x450)+x451)<=x452);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x453 = 174LLU;
	static uint64_t x455 = 1277597928969748397LLU;
	int64_t x456 = INT64_MIN;

	t83 = (((x453*x454)+x455)<=x456);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = INT16_MIN;
	uint64_t x459 = 64786264697225796LLU;
	volatile int32_t t84 = -1157;

	t84 = (((x457*x458)+x459)<=x460);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = 13;
	int8_t x474 = INT8_MAX;
	int8_t x475 = -1;
	volatile int32_t t85 = 7891603;

	t85 = (((x473*x474)+x475)<=x476);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x478 = INT8_MAX;
	int32_t x479 = INT32_MIN;
	static int32_t t86 = 33277729;

	t86 = (((x477*x478)+x479)<=x480);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x482 = 843;
	uint16_t x483 = 0U;
	uint32_t x484 = UINT32_MAX;
	volatile int32_t t87 = 2154;

	t87 = (((x481*x482)+x483)<=x484);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x486 = 5863;
	int16_t x487 = -16;
	uint8_t x488 = 3U;
	static volatile int32_t t88 = 1;

	t88 = (((x485*x486)+x487)<=x488);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x489 = 1U;
	volatile int16_t x490 = 8473;
	static int8_t x491 = INT8_MIN;
	volatile uint16_t x492 = UINT16_MAX;
	int32_t t89 = 609455807;

	t89 = (((x489*x490)+x491)<=x492);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x493 = 25LLU;
	volatile int16_t x495 = INT16_MAX;
	int8_t x496 = -1;

	t90 = (((x493*x494)+x495)<=x496);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x502 = 859362612323909LLU;
	int8_t x503 = INT8_MIN;
	int32_t x504 = INT32_MAX;

	t91 = (((x501*x502)+x503)<=x504);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x509 = 13916U;
	int8_t x510 = -1;
	uint64_t x511 = 15LLU;
	volatile uint16_t x512 = 213U;

	t92 = (((x509*x510)+x511)<=x512);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x513 = 22209U;
	static int16_t x514 = INT16_MIN;
	uint16_t x515 = UINT16_MAX;
	volatile int8_t x516 = INT8_MAX;
	static volatile int32_t t93 = 6736;

	t93 = (((x513*x514)+x515)<=x516);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x518 = -1;
	static int16_t x519 = INT16_MAX;
	static uint8_t x520 = 25U;

	t94 = (((x517*x518)+x519)<=x520);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x522 = INT8_MIN;
	volatile uint8_t x523 = UINT8_MAX;
	int32_t x524 = -1;
	static volatile int32_t t95 = 2467;

	t95 = (((x521*x522)+x523)<=x524);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x530 = INT32_MIN;
	uint64_t x531 = 242264476117389978LLU;
	int64_t x532 = -90507989335314869LL;
	static volatile int32_t t96 = -7351477;

	t96 = (((x529*x530)+x531)<=x532);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x533 = INT16_MAX;
	uint16_t x534 = UINT16_MAX;
	static int8_t x535 = 5;
	static int8_t x536 = INT8_MIN;
	int32_t t97 = 18912;

	t97 = (((x533*x534)+x535)<=x536);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x537 = -1;
	uint8_t x538 = 2U;
	int8_t x539 = -1;
	static int32_t x540 = INT32_MIN;

	t98 = (((x537*x538)+x539)<=x540);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x546 = 67846008798LLU;
	static volatile int32_t x547 = -1;
	volatile uint8_t x548 = 56U;
	volatile int32_t t99 = 1765;

	t99 = (((x545*x546)+x547)<=x548);

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

