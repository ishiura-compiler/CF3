#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 1540U;
static volatile int32_t x11 = 126;
static int32_t x17 = INT32_MIN;
int64_t x21 = INT64_MAX;
uint32_t x39 = 324042U;
uint64_t x42 = UINT64_MAX;
int16_t x46 = -1;
static int32_t x47 = INT32_MIN;
uint8_t x48 = 28U;
int8_t x49 = INT8_MIN;
static int16_t x62 = -1;
volatile int64_t x63 = 63942833LL;
volatile int32_t x70 = INT32_MIN;
uint64_t t11 = 93362112LLU;
uint64_t x77 = UINT64_MAX;
uint8_t x80 = 3U;
uint16_t x93 = 19298U;
int16_t x103 = INT16_MIN;
int16_t x124 = INT16_MIN;
int64_t x128 = 2759LL;
static uint64_t x135 = 14139LLU;
volatile uint32_t x149 = UINT32_MAX;
uint32_t x160 = UINT32_MAX;
volatile uint32_t t24 = 175851857U;
int32_t x161 = -1;
volatile uint32_t t26 = 571U;
int64_t x171 = -1LL;
volatile int64_t t27 = -34807260681LL;
int8_t x177 = INT8_MIN;
volatile uint16_t x178 = UINT16_MAX;
uint8_t x181 = UINT8_MAX;
uint16_t x190 = UINT16_MAX;
uint16_t x192 = 508U;
volatile int32_t t30 = 79501;
int16_t x218 = INT16_MIN;
static int8_t x222 = -48;
volatile int32_t t36 = -215376;
static int16_t x229 = INT16_MIN;
volatile uint64_t t37 = 328543763482LLU;
static volatile int32_t t39 = -1;
volatile int8_t x248 = INT8_MIN;
int32_t x260 = INT32_MAX;
static uint8_t x268 = 3U;
static int32_t x270 = INT32_MAX;
volatile uint64_t x272 = 132774638LLU;
static uint64_t t46 = 37LLU;
int8_t x278 = -1;
uint16_t x280 = UINT16_MAX;
int16_t x283 = -84;
int8_t x284 = INT8_MIN;
uint8_t x290 = 1U;
uint64_t x303 = 2281584875856345LLU;
volatile uint64_t t51 = 68318264378622468LLU;
volatile uint8_t x310 = 86U;
int64_t x311 = INT64_MIN;
volatile int64_t x312 = -27678811365254LL;
volatile int64_t t52 = -17LL;
volatile uint64_t t55 = 384723666LLU;
uint32_t x336 = 3869176U;
volatile uint32_t t58 = 109U;
uint64_t x338 = UINT64_MAX;
int32_t t60 = -1;
int64_t x345 = 9302496561LL;
static int16_t x346 = INT16_MIN;
int16_t x347 = -1;
int32_t t62 = 1;
volatile uint64_t t65 = 463LLU;
volatile int32_t x369 = -1;
int8_t x377 = INT8_MIN;
int64_t x378 = -23248471757784601LL;
uint8_t x381 = UINT8_MAX;
volatile int32_t x385 = -1;
static uint64_t x386 = 0LLU;
int64_t t70 = 1603883555046233764LL;
int32_t x402 = INT32_MIN;
int8_t x403 = INT8_MIN;
volatile int32_t t72 = -1644;
int64_t x409 = 246252LL;
int32_t x412 = 8810;
int16_t x416 = INT16_MAX;
uint8_t x427 = UINT8_MAX;
static uint64_t t77 = 3LLU;
int8_t x435 = INT8_MAX;
int16_t x441 = -5;
volatile int32_t x444 = INT32_MIN;
int8_t x450 = 3;
uint8_t x451 = UINT8_MAX;
uint64_t x452 = 44678332975445750LLU;
int16_t x457 = -1;
uint64_t x460 = UINT64_MAX;
static int8_t x467 = INT8_MIN;
static int16_t x469 = -1940;
volatile int16_t x471 = INT16_MAX;
int64_t x481 = INT64_MAX;
volatile int8_t x492 = -19;
volatile int64_t t92 = -52984693995LL;
uint64_t x501 = UINT64_MAX;
int64_t x506 = INT64_MIN;
int16_t x507 = -1;
int8_t x508 = 6;
static volatile uint64_t x509 = 15294220576LLU;
volatile int64_t x510 = -1LL;
uint8_t x512 = UINT8_MAX;
int64_t x519 = -1LL;
volatile uint32_t t97 = 48733U;
static volatile int8_t x534 = INT8_MIN;
static int16_t x537 = INT16_MAX;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	uint32_t x3 = 864403726U;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1<=x2)/(x3%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	static uint32_t x12 = 35156989U;
	static uint32_t t1 = 3068U;

	t1 = ((x9<=x10)/(x11%x12));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MIN;
	int16_t x19 = INT16_MAX;
	int32_t x20 = INT32_MIN;
	volatile int32_t t2 = -201;

	t2 = ((x17<=x18)/(x19%x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = INT8_MIN;
	static uint16_t x23 = 1482U;
	int32_t x24 = 50;
	volatile int32_t t3 = 24;

	t3 = ((x21<=x22)/(x23%x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x33 = INT16_MAX;
	uint16_t x34 = 5074U;
	int64_t x35 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t4 = 11397680769731519LL;

	t4 = ((x33<=x34)/(x35%x36));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x37 = -1;
	volatile int32_t x38 = INT32_MAX;
	uint64_t x40 = UINT64_MAX;
	uint64_t t5 = 33328851915LLU;

	t5 = ((x37<=x38)/(x39%x40));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x41 = INT8_MIN;
	int32_t x43 = INT32_MAX;
	static uint8_t x44 = UINT8_MAX;
	volatile int32_t t6 = -823612;

	t6 = ((x41<=x42)/(x43%x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = 3937;
	int32_t t7 = -3493732;

	t7 = ((x45<=x46)/(x47%x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x50 = 13830LLU;
	int8_t x51 = 1;
	int32_t x52 = INT32_MIN;
	static volatile int32_t t8 = 202;

	t8 = ((x49<=x50)/(x51%x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 23;
	static uint16_t x58 = 882U;
	int32_t x59 = -263373272;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t9 = 14610U;

	t9 = ((x57<=x58)/(x59%x60));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = INT16_MIN;
	static volatile int16_t x64 = -13;
	static volatile int64_t t10 = 21997648852999LL;

	t10 = ((x61<=x62)/(x63%x64));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -5370;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 21344LLU;

	t11 = ((x69<=x70)/(x71%x72));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x78 = 355754;
	int32_t x79 = INT32_MIN;
	volatile int32_t t12 = -404962;

	t12 = ((x77<=x78)/(x79%x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x94 = 114U;
	int16_t x95 = -3489;
	static int16_t x96 = INT16_MAX;
	volatile int32_t t13 = 1023284129;

	t13 = ((x93<=x94)/(x95%x96));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x97 = INT64_MAX;
	static int32_t x98 = -1;
	uint32_t x99 = 6570456U;
	static uint16_t x100 = 10U;
	static volatile uint32_t t14 = 8862U;

	t14 = ((x97<=x98)/(x99%x100));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x101 = 1U;
	uint8_t x102 = 24U;
	int8_t x104 = 37;
	volatile int32_t t15 = 0;

	t15 = ((x101<=x102)/(x103%x104));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MAX;
	int16_t x107 = 88;
	int64_t x108 = INT64_MIN;
	int64_t t16 = 0LL;

	t16 = ((x105<=x106)/(x107%x108));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -1;
	int8_t x115 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t17 = -31;

	t17 = ((x113<=x114)/(x115%x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x121 = 6078888U;
	int32_t x122 = INT32_MAX;
	uint16_t x123 = UINT16_MAX;
	int32_t t18 = 1;

	t18 = ((x121<=x122)/(x123%x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x125 = 32691U;
	static uint8_t x126 = 26U;
	int16_t x127 = 498;
	int64_t t19 = -1LL;

	t19 = ((x125<=x126)/(x127%x128));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x133 = -1;
	static uint32_t x134 = UINT32_MAX;
	int64_t x136 = INT64_MAX;
	volatile uint64_t t20 = 48598704071417352LLU;

	t20 = ((x133<=x134)/(x135%x136));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x138 = 1701;
	static int8_t x139 = -1;
	int64_t x140 = INT64_MAX;
	int64_t t21 = -353766570491LL;

	t21 = ((x137<=x138)/(x139%x140));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x145 = -1;
	int16_t x146 = -13;
	uint32_t x147 = 687897U;
	int32_t x148 = -1;
	volatile uint32_t t22 = 2444905U;

	t22 = ((x145<=x146)/(x147%x148));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x150 = UINT16_MAX;
	static volatile uint16_t x151 = 998U;
	volatile int32_t x152 = -312911569;
	int32_t t23 = 0;

	t23 = ((x149<=x150)/(x151%x152));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x157 = -501327094LL;
	uint32_t x158 = UINT32_MAX;
	static uint8_t x159 = UINT8_MAX;

	t24 = ((x157<=x158)/(x159%x160));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x162 = 0U;
	volatile uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MIN;
	static uint32_t t25 = 229440343U;

	t25 = ((x161<=x162)/(x163%x164));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x165 = -2;
	volatile int8_t x166 = 4;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;

	t26 = ((x165<=x166)/(x167%x168));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MIN;
	uint32_t x172 = 9867U;

	t27 = ((x169<=x170)/(x171%x172));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x179 = INT16_MAX;
	uint8_t x180 = UINT8_MAX;
	int32_t t28 = -133343;

	t28 = ((x177<=x178)/(x179%x180));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t29 = -22;

	t29 = ((x181<=x182)/(x183%x184));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x189 = -2781678;
	int16_t x191 = INT16_MIN;

	t30 = ((x189<=x190)/(x191%x192));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x197 = 115890126;
	static int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = INT64_MIN;
	volatile int64_t t31 = 1954800873547LL;

	t31 = ((x197<=x198)/(x199%x200));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MAX;
	static volatile int64_t x203 = 256801847234932LL;
	int64_t x204 = 3867485312125818LL;
	volatile int64_t t32 = 5062565375886048LL;

	t32 = ((x201<=x202)/(x203%x204));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MAX;
	int32_t x211 = -1619;
	int8_t x212 = -2;
	int32_t t33 = -1247700;

	t33 = ((x209<=x210)/(x211%x212));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x217 = 1850U;
	int32_t x219 = 32;
	static int16_t x220 = INT16_MIN;
	static int32_t t34 = 7954;

	t34 = ((x217<=x218)/(x219%x220));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x221 = -1;
	int64_t x223 = -1LL;
	int32_t x224 = -2;
	volatile int64_t t35 = -1302892044747241LL;

	t35 = ((x221<=x222)/(x223%x224));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x225 = -1;
	uint64_t x226 = 39104076678LLU;
	int32_t x227 = -1;
	int16_t x228 = -239;

	t36 = ((x225<=x226)/(x227%x228));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x230 = -1;
	volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = 106653809955LLU;

	t37 = ((x229<=x230)/(x231%x232));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x233 = INT64_MAX;
	volatile int16_t x234 = INT16_MIN;
	volatile int16_t x235 = 501;
	int8_t x236 = INT8_MAX;
	volatile int32_t t38 = -4852999;

	t38 = ((x233<=x234)/(x235%x236));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x237 = -1;
	int32_t x238 = -1;
	int16_t x239 = 31;
	static int32_t x240 = INT32_MIN;

	t39 = ((x237<=x238)/(x239%x240));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x245 = INT8_MIN;
	static uint32_t x246 = UINT32_MAX;
	uint16_t x247 = UINT16_MAX;
	int32_t t40 = 1;

	t40 = ((x245<=x246)/(x247%x248));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x249 = INT16_MAX;
	static uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = INT8_MAX;
	int64_t x252 = -494LL;
	volatile int64_t t41 = -2902203LL;

	t41 = ((x249<=x250)/(x251%x252));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x253 = -115;
	int16_t x254 = INT16_MIN;
	int8_t x255 = -1;
	int64_t x256 = INT64_MIN;
	volatile int64_t t42 = 0LL;

	t42 = ((x253<=x254)/(x255%x256));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x257 = -1;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = 67859798769553539LL;
	int64_t t43 = -3706LL;

	t43 = ((x257<=x258)/(x259%x260));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x261 = 0;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = UINT16_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t44 = -658081892696988231LL;

	t44 = ((x261<=x262)/(x263%x264));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x265 = -232;
	uint32_t x266 = 994U;
	volatile int32_t x267 = 256723159;
	volatile int32_t t45 = -742835;

	t45 = ((x265<=x266)/(x267%x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x271 = UINT16_MAX;

	t46 = ((x269<=x270)/(x271%x272));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x277 = -1;
	uint8_t x279 = UINT8_MAX;
	volatile int32_t t47 = 438035;

	t47 = ((x277<=x278)/(x279%x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x281 = INT8_MIN;
	static int64_t x282 = INT64_MIN;
	volatile int32_t t48 = 27257303;

	t48 = ((x281<=x282)/(x283%x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x289 = -1;
	uint32_t x291 = UINT32_MAX;
	static int64_t x292 = INT64_MIN;
	volatile int64_t t49 = 406114522LL;

	t49 = ((x289<=x290)/(x291%x292));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x301 = 4U;
	int16_t x302 = INT16_MIN;
	uint32_t x304 = 1778887U;
	uint64_t t50 = 108137052851334735LLU;

	t50 = ((x301<=x302)/(x303%x304));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x305 = UINT32_MAX;
	uint64_t x306 = 517936433247LLU;
	int16_t x307 = 5;
	uint64_t x308 = 810467LLU;

	t51 = ((x305<=x306)/(x307%x308));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x309 = 8U;

	t52 = ((x309<=x310)/(x311%x312));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MIN;
	static uint16_t x316 = 150U;
	volatile int32_t t53 = 45;

	t53 = ((x313<=x314)/(x315%x316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x317 = 16;
	uint64_t x318 = 484200808171965453LLU;
	static int64_t x319 = -1LL;
	static int64_t x320 = INT64_MAX;
	static int64_t t54 = -327327499568LL;

	t54 = ((x317<=x318)/(x319%x320));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	int8_t x323 = -1;
	volatile uint64_t x324 = 6LLU;

	t55 = ((x321<=x322)/(x323%x324));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x325 = -545;
	int64_t x326 = 170539048360255LL;
	int32_t x327 = INT32_MAX;
	int16_t x328 = INT16_MIN;
	static int32_t t56 = -76976;

	t56 = ((x325<=x326)/(x327%x328));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x329 = 86024475326LLU;
	uint16_t x330 = 3047U;
	static int32_t x331 = -1;
	volatile int16_t x332 = -12102;
	volatile int32_t t57 = 1;

	t57 = ((x329<=x330)/(x331%x332));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x333 = -68;
	int32_t x334 = INT32_MAX;
	int32_t x335 = INT32_MIN;

	t58 = ((x333<=x334)/(x335%x336));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x337 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	int64_t x340 = 480345729153064271LL;
	int64_t t59 = 75LL;

	t59 = ((x337<=x338)/(x339%x340));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x341 = 1583;
	volatile int8_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	static uint16_t x344 = 226U;

	t60 = ((x341<=x342)/(x343%x344));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x348 = INT64_MIN;
	volatile int64_t t61 = 61390655637LL;

	t61 = ((x345<=x346)/(x347%x348));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x349 = -1002104461LL;
	volatile int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	uint8_t x352 = 22U;

	t62 = ((x349<=x350)/(x351%x352));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x357 = 40;
	int64_t x358 = INT64_MIN;
	volatile int64_t x359 = 315696341047766541LL;
	static uint8_t x360 = 40U;
	volatile int64_t t63 = 245LL;

	t63 = ((x357<=x358)/(x359%x360));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x361 = INT8_MIN;
	uint16_t x362 = 77U;
	int32_t x363 = INT32_MIN;
	static int64_t x364 = 89814146116671LL;
	volatile int64_t t64 = 25870460125LL;

	t64 = ((x361<=x362)/(x363%x364));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x365 = -11077;
	int8_t x366 = -1;
	uint64_t x367 = 168969400968897498LLU;
	static int8_t x368 = INT8_MIN;

	t65 = ((x365<=x366)/(x367%x368));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x370 = 7;
	uint8_t x371 = UINT8_MAX;
	int32_t x372 = INT32_MIN;
	volatile int32_t t66 = -225354;

	t66 = ((x369<=x370)/(x371%x372));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x373 = INT16_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MAX;
	int64_t x376 = 119122068661LL;
	int64_t t67 = 1711270242549LL;

	t67 = ((x373<=x374)/(x375%x376));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x379 = INT32_MIN;
	uint32_t x380 = 1135942518U;
	uint32_t t68 = 3636244U;

	t68 = ((x377<=x378)/(x379%x380));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	static volatile int64_t x384 = INT64_MIN;
	static uint64_t t69 = 43657067843LLU;

	t69 = ((x381<=x382)/(x383%x384));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x387 = -8544;
	int64_t x388 = INT64_MIN;

	t70 = ((x385<=x386)/(x387%x388));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	static int32_t x395 = 963908311;
	int16_t x396 = INT16_MIN;
	static int32_t t71 = 22;

	t71 = ((x393<=x394)/(x395%x396));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x401 = UINT64_MAX;
	static int16_t x404 = INT16_MAX;

	t72 = ((x401<=x402)/(x403%x404));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x405 = UINT8_MAX;
	volatile int64_t x406 = INT64_MAX;
	uint32_t x407 = UINT32_MAX;
	static int64_t x408 = 134LL;
	int64_t t73 = 1437549865299652LL;

	t73 = ((x405<=x406)/(x407%x408));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x410 = INT32_MIN;
	uint8_t x411 = UINT8_MAX;
	int32_t t74 = -236219954;

	t74 = ((x409<=x410)/(x411%x412));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x413 = 436679LLU;
	int8_t x414 = -1;
	int32_t x415 = 64;
	static volatile int32_t t75 = -14;

	t75 = ((x413<=x414)/(x415%x416));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = -1;
	static int64_t x422 = INT64_MAX;
	static volatile uint64_t x423 = UINT64_MAX;
	int16_t x424 = INT16_MIN;
	uint64_t t76 = 1707LLU;

	t76 = ((x421<=x422)/(x423%x424));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x425 = 5;
	static uint8_t x426 = 126U;
	uint64_t x428 = 3514218LLU;

	t77 = ((x425<=x426)/(x427%x428));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x429 = -10515287LL;
	static int32_t x430 = INT32_MIN;
	int8_t x431 = -1;
	volatile uint8_t x432 = 4U;
	static int32_t t78 = -92731;

	t78 = ((x429<=x430)/(x431%x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x433 = UINT32_MAX;
	int64_t x434 = INT64_MIN;
	int8_t x436 = INT8_MIN;
	volatile int32_t t79 = 2033;

	t79 = ((x433<=x434)/(x435%x436));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x437 = -43;
	uint16_t x438 = 5U;
	int32_t x439 = INT32_MIN;
	int32_t x440 = -33;
	int32_t t80 = -812046991;

	t80 = ((x437<=x438)/(x439%x440));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x442 = 36;
	static int16_t x443 = 47;
	int32_t t81 = 367330;

	t81 = ((x441<=x442)/(x443%x444));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x449 = 5LLU;
	static volatile uint64_t t82 = 9LLU;

	t82 = ((x449<=x450)/(x451%x452));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x453 = 365U;
	int64_t x454 = -1LL;
	static volatile int16_t x455 = -1;
	uint64_t x456 = 56LLU;
	uint64_t t83 = 20998474LLU;

	t83 = ((x453<=x454)/(x455%x456));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x458 = -1;
	volatile uint16_t x459 = 18173U;
	uint64_t t84 = 4448791135556LLU;

	t84 = ((x457<=x458)/(x459%x460));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x461 = INT16_MAX;
	int8_t x462 = INT8_MAX;
	int16_t x463 = 9537;
	int16_t x464 = 9924;
	volatile int32_t t85 = 27595;

	t85 = ((x461<=x462)/(x463%x464));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x465 = 1;
	volatile int64_t x466 = INT64_MIN;
	int8_t x468 = -30;
	int32_t t86 = 119759;

	t86 = ((x465<=x466)/(x467%x468));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x470 = 490409U;
	uint16_t x472 = 717U;
	volatile int32_t t87 = 5565634;

	t87 = ((x469<=x470)/(x471%x472));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x477 = 3U;
	uint8_t x478 = 0U;
	static volatile int16_t x479 = -1;
	static int16_t x480 = INT16_MAX;
	volatile int32_t t88 = -631442;

	t88 = ((x477<=x478)/(x479%x480));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x482 = -1LL;
	uint32_t x483 = 1515403U;
	uint16_t x484 = UINT16_MAX;
	static uint32_t t89 = 21773U;

	t89 = ((x481<=x482)/(x483%x484));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x485 = INT64_MAX;
	int32_t x486 = INT32_MIN;
	static int32_t x487 = INT32_MIN;
	uint64_t x488 = 85607283LLU;
	volatile uint64_t t90 = 277LLU;

	t90 = ((x485<=x486)/(x487%x488));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x489 = -1;
	uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MIN;
	int32_t t91 = 1;

	t91 = ((x489<=x490)/(x491%x492));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x497 = 1;
	static uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MIN;
	volatile uint8_t x500 = 60U;

	t92 = ((x497<=x498)/(x499%x500));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x502 = 10451183893673LLU;
	int8_t x503 = INT8_MIN;
	uint8_t x504 = 15U;
	volatile int32_t t93 = 577212;

	t93 = ((x501<=x502)/(x503%x504));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x505 = -1;
	static int32_t t94 = -2;

	t94 = ((x505<=x506)/(x507%x508));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x511 = -1;
	int32_t t95 = -983252;

	t95 = ((x509<=x510)/(x511%x512));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x517 = INT8_MIN;
	uint64_t x518 = 2198008331164594LLU;
	static int8_t x520 = INT8_MIN;
	int64_t t96 = 25LL;

	t96 = ((x517<=x518)/(x519%x520));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x525 = UINT32_MAX;
	uint16_t x526 = 476U;
	int16_t x527 = 1;
	volatile uint32_t x528 = 25U;

	t97 = ((x525<=x526)/(x527%x528));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x533 = 89336U;
	int64_t x535 = INT64_MIN;
	uint64_t x536 = 474LLU;
	volatile uint64_t t98 = 5427000LLU;

	t98 = ((x533<=x534)/(x535%x536));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x538 = -13;
	volatile int16_t x539 = INT16_MAX;
	int8_t x540 = INT8_MIN;
	volatile int32_t t99 = -1;

	t99 = ((x537<=x538)/(x539%x540));

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

