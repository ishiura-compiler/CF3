#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 18141;
uint8_t x5 = 54U;
volatile int32_t x14 = INT32_MAX;
uint16_t x15 = 29145U;
uint64_t x20 = 685618LLU;
static volatile uint32_t x25 = 483U;
static volatile int32_t t8 = 2235244;
uint16_t x55 = UINT16_MAX;
static int32_t x57 = INT32_MIN;
int32_t x66 = -440703;
volatile int32_t t11 = 5543756;
int16_t x71 = -1;
static int8_t x72 = -1;
volatile int8_t x78 = -3;
int32_t t14 = 1344;
int64_t x82 = INT64_MAX;
volatile int64_t x84 = -2LL;
static uint32_t x90 = UINT32_MAX;
int8_t x95 = INT8_MIN;
static volatile int32_t t17 = 1;
static int32_t x99 = INT32_MAX;
static int32_t t18 = 11063085;
static int8_t x101 = -1;
int8_t x106 = INT8_MAX;
uint32_t x107 = UINT32_MAX;
int16_t x113 = INT16_MIN;
static volatile int64_t x125 = -48952LL;
uint64_t x127 = UINT64_MAX;
int32_t x133 = -1;
int32_t t27 = -52;
volatile int64_t x145 = -1LL;
static int16_t x146 = INT16_MIN;
int32_t x154 = 0;
uint16_t x160 = 10135U;
int8_t x164 = -1;
uint16_t x165 = 360U;
static int64_t x170 = 63683590LL;
int8_t x182 = -1;
int64_t x187 = 36017956LL;
uint64_t x189 = UINT64_MAX;
uint8_t x191 = 26U;
volatile int32_t t38 = 10;
int64_t x197 = INT64_MIN;
int64_t x209 = 2136329453700LL;
uint32_t x220 = 111U;
static volatile int32_t t42 = -175059675;
volatile int32_t t44 = -1;
uint16_t x235 = 289U;
volatile int32_t t45 = 340;
volatile int32_t t49 = -905349119;
volatile int16_t x269 = INT16_MAX;
static volatile int16_t x272 = 6;
volatile int16_t x274 = 0;
uint16_t x279 = 382U;
static volatile uint32_t x290 = 8088U;
uint16_t x311 = 0U;
uint16_t x312 = UINT16_MAX;
volatile int32_t t59 = 1;
int8_t x321 = INT8_MIN;
int32_t x322 = -1766597;
int8_t x338 = INT8_MIN;
int8_t x339 = INT8_MIN;
uint16_t x342 = UINT16_MAX;
int64_t x348 = 77587390749147LL;
static int16_t x351 = -4590;
int64_t x354 = -1LL;
int8_t x356 = INT8_MAX;
int32_t t69 = -26727435;
volatile int32_t t70 = -7336293;
static int16_t x381 = -296;
uint32_t x383 = 99U;
static uint64_t x386 = 2014739LLU;
volatile int32_t x387 = INT32_MAX;
int64_t x388 = -245185019551442LL;
static uint8_t x389 = UINT8_MAX;
volatile uint32_t x393 = 2U;
int32_t x398 = -14985114;
static volatile int8_t x401 = 12;
uint8_t x406 = 2U;
int16_t x412 = INT16_MAX;
uint8_t x413 = UINT8_MAX;
static int8_t x422 = -1;
volatile uint16_t x425 = 27890U;
uint8_t x428 = UINT8_MAX;
int32_t x429 = INT32_MIN;
int16_t x434 = 39;
volatile int64_t x435 = -492244422LL;
int32_t t85 = -509735;
static int32_t t88 = -711731;
uint64_t x449 = 2034993517635740025LLU;
static int16_t x452 = INT16_MAX;
int32_t t90 = 549;
uint16_t x460 = 101U;
int32_t t91 = -24855412;
static volatile uint64_t x491 = 44506165504274LLU;
int8_t x494 = INT8_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = UINT16_MAX;
	int64_t x4 = INT64_MIN;

	t0 = ((x1<=x2)<(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x6 = 14510U;
	static int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = 394020;

	t1 = ((x5<=x6)<(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = 859761;
	static int16_t x16 = -1;
	volatile int32_t t2 = 3906785;

	t2 = ((x13<=x14)<(x15+x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = 30971LL;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = INT32_MAX;
	static volatile int32_t t3 = -32522;

	t3 = ((x17<=x18)<(x19+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 5LLU;
	volatile int32_t x22 = INT32_MAX;
	int32_t x23 = -1;
	int8_t x24 = 1;
	volatile int32_t t4 = -2821374;

	t4 = ((x21<=x22)<(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = -281;
	volatile int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t5 = -91;

	t5 = ((x25<=x26)<(x27+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = UINT32_MAX;
	int64_t x34 = INT64_MAX;
	static uint64_t x35 = 17373872LLU;
	int32_t x36 = -363;
	volatile int32_t t6 = -6;

	t6 = ((x33<=x34)<(x35+x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = 95818075;
	int8_t x47 = INT8_MIN;
	int16_t x48 = -1;
	static volatile int32_t t7 = 1;

	t7 = ((x45<=x46)<(x47+x48));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = 2348;
	int16_t x50 = INT16_MIN;
	static int32_t x51 = 123;
	uint16_t x52 = 27424U;

	t8 = ((x49<=x50)<(x51+x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 1U;
	static int8_t x54 = 1;
	uint16_t x56 = 1339U;
	volatile int32_t t9 = -682093833;

	t9 = ((x53<=x54)<(x55+x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x58 = INT64_MAX;
	uint16_t x59 = 4460U;
	int8_t x60 = INT8_MIN;
	int32_t t10 = -502926200;

	t10 = ((x57<=x58)<(x59+x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	static volatile int16_t x68 = INT16_MAX;

	t11 = ((x65<=x66)<(x67+x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x69 = -38;
	int16_t x70 = -95;
	volatile int32_t t12 = 3;

	t12 = ((x69<=x70)<(x71+x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MAX;
	int64_t x76 = -60LL;
	int32_t t13 = -6;

	t13 = ((x73<=x74)<(x75+x76));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = INT64_MIN;
	static int16_t x79 = 1;
	int8_t x80 = INT8_MAX;

	t14 = ((x77<=x78)<(x79+x80));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	volatile uint16_t x83 = 6U;
	int32_t t15 = 1017025047;

	t15 = ((x81<=x82)<(x83+x84));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x89 = 1004128076479835281LLU;
	int8_t x91 = -24;
	static uint32_t x92 = UINT32_MAX;
	volatile int32_t t16 = -8051217;

	t16 = ((x89<=x90)<(x91+x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x93 = UINT64_MAX;
	int32_t x94 = -5;
	int8_t x96 = INT8_MIN;

	t17 = ((x93<=x94)<(x95+x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = -1;
	int64_t x100 = 176994373709334LL;

	t18 = ((x97<=x98)<(x99+x100));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int8_t x104 = -1;
	static volatile int32_t t19 = 89;

	t19 = ((x101<=x102)<(x103+x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x105 = INT16_MIN;
	int32_t x108 = -6169053;
	int32_t t20 = -408094404;

	t20 = ((x105<=x106)<(x107+x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x114 = -1;
	int16_t x115 = -3;
	int8_t x116 = 11;
	int32_t t21 = 94080398;

	t21 = ((x113<=x114)<(x115+x116));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x121 = 787332940U;
	uint64_t x122 = UINT64_MAX;
	volatile int16_t x123 = -44;
	int64_t x124 = 63178LL;
	int32_t t22 = 5527825;

	t22 = ((x121<=x122)<(x123+x124));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x126 = 3U;
	uint64_t x128 = UINT64_MAX;
	int32_t t23 = -974977282;

	t23 = ((x125<=x126)<(x127+x128));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x129 = INT8_MAX;
	volatile uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MAX;
	static volatile int16_t x132 = -1;
	int32_t t24 = -45510;

	t24 = ((x129<=x130)<(x131+x132));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x134 = -1117079;
	uint16_t x135 = 317U;
	int8_t x136 = INT8_MAX;
	int32_t t25 = -30494344;

	t25 = ((x133<=x134)<(x135+x136));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x137 = 3819275LLU;
	int64_t x138 = INT64_MIN;
	uint64_t x139 = 9753944996674LLU;
	static int8_t x140 = INT8_MIN;
	int32_t t26 = 812922;

	t26 = ((x137<=x138)<(x139+x140));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = 273;
	volatile int8_t x142 = INT8_MIN;
	static volatile int8_t x143 = -1;
	uint8_t x144 = 3U;

	t27 = ((x141<=x142)<(x143+x144));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x147 = -1;
	static uint32_t x148 = 488U;
	int32_t t28 = -14778451;

	t28 = ((x145<=x146)<(x147+x148));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x153 = UINT64_MAX;
	volatile int64_t x155 = -911273LL;
	uint64_t x156 = 185721597156160929LLU;
	int32_t t29 = -27279;

	t29 = ((x153<=x154)<(x155+x156));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = -7590977;
	uint16_t x158 = 13U;
	uint32_t x159 = UINT32_MAX;
	volatile int32_t t30 = -897;

	t30 = ((x157<=x158)<(x159+x160));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = INT64_MIN;
	int16_t x162 = -1;
	int16_t x163 = 0;
	int32_t t31 = -2317;

	t31 = ((x161<=x162)<(x163+x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x166 = 1;
	int16_t x167 = -1;
	int32_t x168 = -1;
	static int32_t t32 = 29317790;

	t32 = ((x165<=x166)<(x167+x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = 39002U;
	int64_t x171 = -1LL;
	uint8_t x172 = UINT8_MAX;
	int32_t t33 = 14317;

	t33 = ((x169<=x170)<(x171+x172));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x177 = INT16_MAX;
	static int32_t x178 = INT32_MIN;
	int32_t x179 = INT32_MAX;
	volatile uint64_t x180 = 7716471441LLU;
	static volatile int32_t t34 = 21802914;

	t34 = ((x177<=x178)<(x179+x180));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = INT32_MIN;
	int64_t x183 = 23407359LL;
	volatile uint64_t x184 = 21625976LLU;
	volatile int32_t t35 = -123128;

	t35 = ((x181<=x182)<(x183+x184));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x185 = INT8_MIN;
	volatile uint32_t x186 = 141823U;
	volatile int64_t x188 = 1384970932LL;
	volatile int32_t t36 = 443;

	t36 = ((x185<=x186)<(x187+x188));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x190 = 1222880LL;
	uint32_t x192 = 9890U;
	int32_t t37 = 2028;

	t37 = ((x189<=x190)<(x191+x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x193 = -21410331001489502LL;
	int32_t x194 = INT32_MIN;
	int64_t x195 = 1742LL;
	int8_t x196 = INT8_MIN;

	t38 = ((x193<=x194)<(x195+x196));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x198 = 3452026U;
	uint8_t x199 = 15U;
	static uint64_t x200 = 548947622LLU;
	static int32_t t39 = -5;

	t39 = ((x197<=x198)<(x199+x200));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x205 = -686087745LL;
	uint16_t x206 = UINT16_MAX;
	volatile int16_t x207 = -1;
	static volatile uint8_t x208 = 0U;
	volatile int32_t t40 = -138414;

	t40 = ((x205<=x206)<(x207+x208));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x210 = INT16_MAX;
	static int32_t x211 = -359;
	volatile uint16_t x212 = UINT16_MAX;
	int32_t t41 = 3891;

	t41 = ((x209<=x210)<(x211+x212));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = -1;
	uint32_t x218 = 2U;
	volatile int32_t x219 = 1942;

	t42 = ((x217<=x218)<(x219+x220));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -1;
	int32_t x226 = -1;
	static volatile int8_t x227 = 1;
	volatile uint16_t x228 = 4U;
	int32_t t43 = -99;

	t43 = ((x225<=x226)<(x227+x228));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x229 = INT64_MIN;
	static int64_t x230 = 844029299235LL;
	uint32_t x231 = 1843075370U;
	int64_t x232 = -40692LL;

	t44 = ((x229<=x230)<(x231+x232));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = 16;
	static int32_t x236 = INT32_MIN;

	t45 = ((x233<=x234)<(x235+x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x237 = 188603832554351LLU;
	int64_t x238 = -1LL;
	int32_t x239 = -1;
	uint8_t x240 = 6U;
	static int32_t t46 = -56274;

	t46 = ((x237<=x238)<(x239+x240));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x253 = INT32_MIN;
	static int64_t x254 = INT64_MAX;
	int8_t x255 = -13;
	static int64_t x256 = 5LL;
	int32_t t47 = -160068761;

	t47 = ((x253<=x254)<(x255+x256));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x257 = -1LL;
	uint16_t x258 = UINT16_MAX;
	int32_t x259 = -1;
	int8_t x260 = INT8_MIN;
	int32_t t48 = -9958;

	t48 = ((x257<=x258)<(x259+x260));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x265 = 30991U;
	int16_t x266 = 4838;
	uint64_t x267 = UINT64_MAX;
	int8_t x268 = INT8_MIN;

	t49 = ((x265<=x266)<(x267+x268));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x270 = -2;
	int8_t x271 = 0;
	int32_t t50 = 495;

	t50 = ((x269<=x270)<(x271+x272));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x273 = 311727699U;
	static int32_t x275 = -1;
	static volatile int16_t x276 = INT16_MIN;
	volatile int32_t t51 = 27;

	t51 = ((x273<=x274)<(x275+x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x277 = 685U;
	int32_t x278 = INT32_MAX;
	volatile uint8_t x280 = 0U;
	int32_t t52 = 87432;

	t52 = ((x277<=x278)<(x279+x280));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x285 = INT32_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	static volatile uint16_t x288 = UINT16_MAX;
	int32_t t53 = 13;

	t53 = ((x285<=x286)<(x287+x288));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x289 = -192998369;
	int8_t x291 = INT8_MIN;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t54 = 250557162;

	t54 = ((x289<=x290)<(x291+x292));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x301 = INT32_MIN;
	int8_t x302 = -1;
	uint8_t x303 = UINT8_MAX;
	volatile uint8_t x304 = 9U;
	int32_t t55 = 122297;

	t55 = ((x301<=x302)<(x303+x304));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x305 = -59346;
	uint32_t x306 = 213235933U;
	int8_t x307 = -10;
	int8_t x308 = -1;
	int32_t t56 = -107449;

	t56 = ((x305<=x306)<(x307+x308));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = -61434433077LL;
	static volatile int32_t t57 = -476211;

	t57 = ((x309<=x310)<(x311+x312));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x313 = 770982885LLU;
	uint8_t x314 = 15U;
	uint32_t x315 = 2U;
	uint8_t x316 = 9U;
	static volatile int32_t t58 = -4675;

	t58 = ((x313<=x314)<(x315+x316));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x317 = 3772828LLU;
	int32_t x318 = -12;
	static int64_t x319 = 329LL;
	int16_t x320 = -1;

	t59 = ((x317<=x318)<(x319+x320));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x323 = -2;
	int16_t x324 = -1;
	static volatile int32_t t60 = 15;

	t60 = ((x321<=x322)<(x323+x324));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x325 = INT64_MIN;
	static volatile int8_t x326 = 1;
	int64_t x327 = INT64_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t61 = 3990;

	t61 = ((x325<=x326)<(x327+x328));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 9568261U;
	static int8_t x331 = INT8_MIN;
	int8_t x332 = -1;
	volatile int32_t t62 = -7;

	t62 = ((x329<=x330)<(x331+x332));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x333 = 56U;
	int8_t x334 = -1;
	uint64_t x335 = 867LLU;
	int16_t x336 = -1;
	int32_t t63 = 88769;

	t63 = ((x333<=x334)<(x335+x336));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x337 = 0;
	static uint32_t x340 = UINT32_MAX;
	int32_t t64 = -216202259;

	t64 = ((x337<=x338)<(x339+x340));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x341 = -491;
	static int16_t x343 = INT16_MIN;
	uint64_t x344 = 3735642766707LLU;
	volatile int32_t t65 = -9;

	t65 = ((x341<=x342)<(x343+x344));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x345 = INT64_MAX;
	static int8_t x346 = INT8_MAX;
	uint16_t x347 = 6U;
	int32_t t66 = 1885807;

	t66 = ((x345<=x346)<(x347+x348));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x349 = -1;
	int8_t x350 = INT8_MIN;
	int32_t x352 = -275796;
	volatile int32_t t67 = -100;

	t67 = ((x349<=x350)<(x351+x352));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x353 = INT32_MIN;
	volatile int64_t x355 = -1LL;
	static volatile int32_t t68 = -29593175;

	t68 = ((x353<=x354)<(x355+x356));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MAX;
	volatile int8_t x366 = -1;
	uint32_t x367 = 12065855U;
	static int16_t x368 = -1;

	t69 = ((x365<=x366)<(x367+x368));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x369 = INT32_MIN;
	static int64_t x370 = -177500987230LL;
	uint16_t x371 = 794U;
	volatile int16_t x372 = 407;

	t70 = ((x369<=x370)<(x371+x372));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x377 = INT64_MIN;
	uint16_t x378 = 21U;
	int64_t x379 = INT64_MIN;
	int8_t x380 = 0;
	volatile int32_t t71 = 3;

	t71 = ((x377<=x378)<(x379+x380));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x382 = 31732437U;
	int8_t x384 = -1;
	volatile int32_t t72 = -612;

	t72 = ((x381<=x382)<(x383+x384));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x385 = INT64_MIN;
	static int32_t t73 = -34;

	t73 = ((x385<=x386)<(x387+x388));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x390 = -1;
	static volatile uint32_t x391 = 8234U;
	uint16_t x392 = 2U;
	static volatile int32_t t74 = -28481426;

	t74 = ((x389<=x390)<(x391+x392));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x394 = INT64_MIN;
	int16_t x395 = INT16_MAX;
	int8_t x396 = 8;
	volatile int32_t t75 = -568916162;

	t75 = ((x393<=x394)<(x395+x396));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x397 = 130309657U;
	int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int32_t t76 = 1220408;

	t76 = ((x397<=x398)<(x399+x400));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x402 = 106U;
	uint32_t x403 = UINT32_MAX;
	uint64_t x404 = 3325LLU;
	int32_t t77 = 163292674;

	t77 = ((x401<=x402)<(x403+x404));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x405 = 12996;
	volatile uint64_t x407 = 4216469557303909LLU;
	int16_t x408 = -1;
	int32_t t78 = -429340716;

	t78 = ((x405<=x406)<(x407+x408));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x409 = 15U;
	int64_t x410 = INT64_MIN;
	uint8_t x411 = UINT8_MAX;
	static volatile int32_t t79 = -519863741;

	t79 = ((x409<=x410)<(x411+x412));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x414 = -1;
	uint32_t x415 = UINT32_MAX;
	int16_t x416 = INT16_MIN;
	static volatile int32_t t80 = 473;

	t80 = ((x413<=x414)<(x415+x416));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x417 = INT64_MAX;
	uint8_t x418 = 2U;
	static volatile uint16_t x419 = UINT16_MAX;
	uint32_t x420 = 591681679U;
	int32_t t81 = -1;

	t81 = ((x417<=x418)<(x419+x420));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x423 = INT64_MAX;
	int32_t x424 = -3552;
	volatile int32_t t82 = -872434085;

	t82 = ((x421<=x422)<(x423+x424));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x426 = INT64_MIN;
	static volatile uint16_t x427 = 258U;
	volatile int32_t t83 = -6946924;

	t83 = ((x425<=x426)<(x427+x428));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x430 = INT16_MIN;
	uint64_t x431 = 1561103325827LLU;
	int8_t x432 = INT8_MAX;
	volatile int32_t t84 = -1074;

	t84 = ((x429<=x430)<(x431+x432));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x433 = 2;
	uint8_t x436 = 107U;

	t85 = ((x433<=x434)<(x435+x436));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x437 = 24U;
	volatile uint32_t x438 = 72207158U;
	uint8_t x439 = UINT8_MAX;
	static int16_t x440 = -1;
	int32_t t86 = -3;

	t86 = ((x437<=x438)<(x439+x440));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 970U;
	uint8_t x442 = 0U;
	volatile int64_t x443 = -1LL;
	static volatile int64_t x444 = 290LL;
	int32_t t87 = 1120;

	t87 = ((x441<=x442)<(x443+x444));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x445 = INT8_MIN;
	uint8_t x446 = 98U;
	static volatile int32_t x447 = INT32_MIN;
	uint16_t x448 = UINT16_MAX;

	t88 = ((x445<=x446)<(x447+x448));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x450 = 325237350187LLU;
	uint8_t x451 = 0U;
	static volatile int32_t t89 = 31695606;

	t89 = ((x449<=x450)<(x451+x452));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x453 = 31;
	static uint64_t x454 = 74951393431911LLU;
	static volatile int16_t x455 = -1;
	int8_t x456 = -1;

	t90 = ((x453<=x454)<(x455+x456));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x457 = 164;
	volatile int32_t x458 = 2054795;
	static int32_t x459 = INT32_MIN;

	t91 = ((x457<=x458)<(x459+x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x461 = 1;
	int32_t x462 = INT32_MIN;
	uint64_t x463 = UINT64_MAX;
	int8_t x464 = -1;
	int32_t t92 = -57;

	t92 = ((x461<=x462)<(x463+x464));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x465 = INT16_MIN;
	volatile uint8_t x466 = 2U;
	int16_t x467 = 7934;
	volatile int8_t x468 = 1;
	int32_t t93 = 689435937;

	t93 = ((x465<=x466)<(x467+x468));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x469 = INT32_MIN;
	int8_t x470 = -1;
	volatile int32_t x471 = 2587;
	int32_t x472 = INT32_MIN;
	volatile int32_t t94 = 24781720;

	t94 = ((x469<=x470)<(x471+x472));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x473 = 25;
	volatile int16_t x474 = INT16_MAX;
	volatile int8_t x475 = 1;
	int16_t x476 = INT16_MIN;
	volatile int32_t t95 = -81;

	t95 = ((x473<=x474)<(x475+x476));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x481 = INT32_MIN;
	uint32_t x482 = 627U;
	static uint64_t x483 = 26846258411566LLU;
	static int32_t x484 = -1;
	int32_t t96 = -2234;

	t96 = ((x481<=x482)<(x483+x484));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x485 = 52834703U;
	int16_t x486 = INT16_MAX;
	static int64_t x487 = -1LL;
	static uint16_t x488 = UINT16_MAX;
	volatile int32_t t97 = 5;

	t97 = ((x485<=x486)<(x487+x488));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x489 = INT8_MIN;
	int32_t x490 = -1;
	int64_t x492 = -10052197464011977LL;
	static int32_t t98 = -54942;

	t98 = ((x489<=x490)<(x491+x492));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x493 = INT64_MAX;
	uint32_t x495 = 15314683U;
	int8_t x496 = -39;
	volatile int32_t t99 = -295590;

	t99 = ((x493<=x494)<(x495+x496));

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

