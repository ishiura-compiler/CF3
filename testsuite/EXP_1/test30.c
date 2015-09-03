#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x12 = 92556403LLU;
int16_t x25 = 1;
int8_t x45 = 2;
uint16_t x46 = 1U;
volatile int32_t t5 = 31;
volatile uint8_t x66 = 4U;
uint64_t t7 = 107LLU;
int64_t x70 = -1LL;
uint16_t x88 = 3U;
volatile uint64_t t12 = 2350109LLU;
volatile uint16_t x90 = 10U;
int16_t x91 = -41;
int32_t x100 = INT32_MIN;
int16_t x103 = -133;
uint64_t t15 = 1408LLU;
int64_t x124 = 68316LL;
uint64_t x126 = 473877248899782199LLU;
int16_t x127 = -1;
uint64_t t18 = 24125LLU;
int8_t x139 = INT8_MIN;
int16_t x148 = INT16_MIN;
uint64_t t21 = 496LLU;
int32_t x159 = 7;
static volatile uint64_t x160 = UINT64_MAX;
volatile uint32_t t24 = 2571596U;
volatile int8_t x165 = -1;
static volatile int64_t t26 = -2LL;
int8_t x173 = INT8_MIN;
uint64_t x175 = UINT64_MAX;
static int16_t x176 = INT16_MAX;
uint8_t x178 = 10U;
volatile uint16_t x183 = 46U;
uint32_t x214 = 17874U;
int64_t x216 = INT64_MIN;
int32_t t37 = 1282;
static uint8_t x225 = 26U;
uint64_t t39 = 15LLU;
static int32_t x242 = 28660691;
static uint64_t t40 = 34182960450888LLU;
int64_t x248 = -143521965338363036LL;
static int16_t x267 = INT16_MIN;
static uint64_t t45 = 2484439065945LLU;
volatile uint64_t t46 = 13LLU;
static uint32_t x288 = 12U;
int8_t x291 = INT8_MAX;
volatile uint64_t t48 = 10429558LLU;
int16_t x294 = INT16_MIN;
int64_t x299 = -7LL;
static int8_t x300 = INT8_MAX;
int8_t x307 = INT8_MIN;
int8_t x333 = 45;
int32_t x341 = -39;
uint32_t x342 = 1U;
volatile int8_t x358 = INT8_MAX;
static int32_t x368 = -316021803;
uint64_t x369 = 46910635743954LLU;
uint64_t x376 = UINT64_MAX;
uint16_t x377 = 9971U;
static uint8_t x392 = 5U;
static uint16_t x418 = 584U;
uint8_t x419 = UINT8_MAX;
static uint8_t x428 = 16U;
int8_t x429 = 63;
int8_t x437 = INT8_MIN;
volatile uint32_t t73 = 5107U;
volatile int16_t x456 = INT16_MIN;
int32_t x461 = INT32_MIN;
static uint64_t x475 = 270209LLU;
int32_t x480 = INT32_MIN;
volatile int32_t x484 = INT32_MIN;
int64_t x489 = 2LL;
int64_t x496 = -1LL;
int32_t x497 = -1;
volatile int64_t x500 = -1LL;
int32_t x506 = INT32_MAX;
uint16_t x508 = 22U;
static volatile uint64_t t84 = 471131312459LLU;
int16_t x517 = INT16_MIN;
uint8_t x535 = 5U;
static int16_t x536 = -1;
int8_t x537 = INT8_MIN;
volatile int32_t t89 = 0;
uint32_t x546 = 0U;
volatile int32_t x547 = INT32_MAX;
volatile int16_t x548 = INT16_MIN;
uint32_t t90 = 1464U;
int32_t x558 = INT32_MIN;
volatile uint32_t x562 = UINT32_MAX;
int8_t x569 = INT8_MIN;
uint16_t x576 = 2U;
uint8_t x583 = UINT8_MAX;
static int8_t x585 = INT8_MIN;
volatile int64_t t97 = 38941757LL;
volatile int8_t x590 = -1;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = INT8_MIN;
	int64_t x4 = -1LL;
	volatile int64_t t0 = -1LL;

	t0 = (((x1+x2)*x3)/x4);

	if (t0 != 8421120LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MAX;
	static uint64_t x10 = 122217794079114128LLU;
	int32_t x11 = -1;
	volatile uint64_t t1 = 978722703173743LLU;

	t1 = (((x9+x10)*x11)/x12);

	if (t1 != 98330898217LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x26 = 5963U;
	uint8_t x27 = 0U;
	int8_t x28 = INT8_MIN;
	int32_t t2 = -254376714;

	t2 = (((x25+x26)*x27)/x28);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x41 = 11086735U;
	int32_t x42 = -1;
	int64_t x43 = -152041282LL;
	int32_t x44 = INT32_MIN;
	static int64_t t3 = 638559201155LL;

	t3 = (((x41+x42)*x43)/x44);

	if (t3 != 784937LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x47 = 1647;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t4 = -1;

	t4 = (((x45+x46)*x47)/x48);

	if (t4 != -38) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x53 = INT16_MAX;
	volatile int16_t x54 = INT16_MIN;
	static int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 57U;

	t5 = (((x53+x54)*x55)/x56);

	if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x61 = INT8_MAX;
	uint32_t x62 = UINT32_MAX;
	int16_t x63 = 25;
	int64_t x64 = INT64_MIN;
	int64_t t6 = -5876627461217346LL;

	t6 = (((x61+x62)*x63)/x64);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x65 = UINT64_MAX;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;

	t7 = (((x65+x66)*x67)/x68);

	if (t7 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x69 = -1;
	volatile int16_t x71 = -218;
	uint8_t x72 = 1U;
	static int64_t t8 = -4503590956884305899LL;

	t8 = (((x69+x70)*x71)/x72);

	if (t8 != 436LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x73 = -1;
	int16_t x74 = -1;
	volatile int64_t x75 = -1LL;
	static int16_t x76 = INT16_MIN;
	int64_t t9 = -6851024345LL;

	t9 = (((x73+x74)*x75)/x76);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x77 = 2U;
	int8_t x78 = INT8_MIN;
	int64_t x79 = -34LL;
	int32_t x80 = -4407;
	static volatile int64_t t10 = 111231616LL;

	t10 = (((x77+x78)*x79)/x80);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x81 = -2;
	int16_t x82 = INT16_MIN;
	volatile uint32_t x83 = 979152852U;
	static volatile uint16_t x84 = 2475U;
	uint32_t t11 = 91127210U;

	t11 = (((x81+x82)*x83)/x84);

	if (t11 != 348165U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x85 = 72LLU;
	int64_t x86 = 4099051919LL;
	volatile uint64_t x87 = 0LLU;

	t12 = (((x85+x86)*x87)/x88);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 8656152407105048LLU;
	volatile uint64_t x92 = 937400915468LLU;
	uint64_t t13 = 238604463451293732LLU;

	t13 = (((x89+x90)*x91)/x92);

	if (t13 != 19300004LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x97 = -253171414760LL;
	uint8_t x98 = 3U;
	int16_t x99 = -3;
	volatile int64_t t14 = 396505LL;

	t14 = (((x97+x98)*x99)/x100);

	if (t14 != -353LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x101 = UINT32_MAX;
	static int8_t x102 = -2;
	volatile uint64_t x104 = 7263003865539LLU;

	t15 = (((x101+x102)*x103)/x104);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x109 = UINT64_MAX;
	static uint8_t x110 = UINT8_MAX;
	static uint16_t x111 = 14U;
	uint32_t x112 = UINT32_MAX;
	uint64_t t16 = 559488731216406LLU;

	t16 = (((x109+x110)*x111)/x112);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;
	volatile uint64_t t17 = 54104566017023689LLU;

	t17 = (((x121+x122)*x123)/x124);

	if (t17 != 135010422695338LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x125 = UINT8_MAX;
	static int64_t x128 = -1LL;

	t18 = (((x125+x126)*x127)/x128);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x129 = INT16_MIN;
	volatile uint8_t x130 = UINT8_MAX;
	static uint64_t x131 = 0LLU;
	static uint32_t x132 = 33392U;
	uint64_t t19 = 37740346LLU;

	t19 = (((x129+x130)*x131)/x132);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x137 = 316U;
	uint64_t x138 = 13955686440569856LLU;
	volatile int64_t x140 = -1LL;
	static uint64_t t20 = 2413790913LLU;

	t20 = (((x137+x138)*x139)/x140);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x145 = INT16_MAX;
	uint64_t x146 = UINT64_MAX;
	static uint8_t x147 = 1U;

	t21 = (((x145+x146)*x147)/x148);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x149 = 1;
	int16_t x150 = 253;
	int8_t x151 = INT8_MAX;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t22 = 48766;

	t22 = (((x149+x150)*x151)/x152);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x157 = 32193U;
	int32_t x158 = 1;
	uint64_t t23 = 1514261819LLU;

	t23 = (((x157+x158)*x159)/x160);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x161 = 2345856U;
	int16_t x162 = -67;
	volatile uint8_t x163 = 1U;
	static int32_t x164 = INT32_MIN;

	t24 = (((x161+x162)*x163)/x164);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x166 = 68704318256558LLU;
	uint32_t x167 = UINT32_MAX;
	int64_t x168 = INT64_MAX;
	uint64_t t25 = 14524LLU;

	t25 = (((x165+x166)*x167)/x168);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x169 = 21U;
	int16_t x170 = INT16_MIN;
	volatile uint8_t x171 = 28U;
	int64_t x172 = -1LL;

	t26 = (((x169+x170)*x171)/x172);

	if (t26 != 916916LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x174 = 5U;
	volatile uint64_t t27 = 4LLU;

	t27 = (((x173+x174)*x175)/x176);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x177 = -1;
	int8_t x179 = -1;
	volatile int16_t x180 = INT16_MIN;
	volatile int32_t t28 = 132963388;

	t28 = (((x177+x178)*x179)/x180);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x181 = 783691153U;
	static volatile uint8_t x182 = 54U;
	int32_t x184 = INT32_MIN;
	uint32_t t29 = 912309U;

	t29 = (((x181+x182)*x183)/x184);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = -7640;
	uint16_t x190 = 1989U;
	volatile uint16_t x191 = 6U;
	static int8_t x192 = INT8_MIN;
	int32_t t30 = 266701405;

	t30 = (((x189+x190)*x191)/x192);

	if (t30 != 264) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x197 = -36078133867952LL;
	static int64_t x198 = -1660LL;
	int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	int64_t t31 = 10LL;

	t31 = (((x197+x198)*x199)/x200);

	if (t31 != -9236002270620672LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MIN;
	uint8_t x203 = 60U;
	int32_t x204 = INT32_MAX;
	volatile int32_t t32 = 14;

	t32 = (((x201+x202)*x203)/x204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x205 = -1;
	int64_t x206 = -34348LL;
	uint8_t x207 = 1U;
	int16_t x208 = -27;
	int64_t t33 = -231139496715988003LL;

	t33 = (((x205+x206)*x207)/x208);

	if (t33 != 1272LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int16_t x210 = 1;
	static uint16_t x211 = 1640U;
	uint8_t x212 = UINT8_MAX;
	int32_t t34 = 2142046;

	t34 = (((x209+x210)*x211)/x212);

	if (t34 != 1646) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x213 = UINT16_MAX;
	volatile int16_t x215 = -3401;
	volatile int64_t t35 = -32694LL;

	t35 = (((x213+x214)*x215)/x216);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = 10939996104LL;
	uint32_t x218 = 23791082U;
	uint32_t x219 = 29336617U;
	int32_t x220 = -1;
	static volatile int64_t t36 = -665788452239583LL;

	t36 = (((x217+x218)*x219)/x220);

	if (t36 != -321640425545189762LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int8_t x222 = INT8_MIN;
	static int16_t x223 = -1;
	volatile int16_t x224 = -1;

	t37 = (((x221+x222)*x223)/x224);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x226 = -13662;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	volatile uint32_t t38 = 390U;

	t38 = (((x225+x226)*x227)/x228);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x237 = INT16_MAX;
	uint32_t x238 = UINT32_MAX;
	static uint64_t x239 = 5054LLU;
	uint32_t x240 = 46U;

	t39 = (((x237+x238)*x239)/x240);

	if (t39 != 3599986LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x241 = 192;
	uint64_t x243 = 2883713586716LLU;
	volatile int64_t x244 = -41638929921LL;

	t40 = (((x241+x242)*x243)/x244);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x245 = 46U;
	int16_t x246 = -1820;
	uint32_t x247 = UINT32_MAX;
	int64_t t41 = 8676LL;

	t41 = (((x245+x246)*x247)/x248);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x261 = UINT8_MAX;
	uint32_t x262 = 1457097U;
	int8_t x263 = 6;
	int32_t x264 = INT32_MAX;
	volatile uint32_t t42 = 335369U;

	t42 = (((x261+x262)*x263)/x264);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x265 = INT8_MAX;
	int16_t x266 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t43 = -3041LL;

	t43 = (((x265+x266)*x267)/x268);

	if (t43 != -1069580288LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x273 = 55409U;
	uint32_t x274 = UINT32_MAX;
	volatile uint32_t x275 = 1807185613U;
	int64_t x276 = -1LL;
	int64_t t44 = -461187176LL;

	t44 = (((x273+x274)*x275)/x276);

	if (t44 != -3967873456LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x277 = 30U;
	static uint8_t x278 = UINT8_MAX;
	volatile int8_t x279 = 0;
	uint64_t x280 = 1848079847577042LLU;

	t45 = (((x277+x278)*x279)/x280);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x281 = 27LLU;
	uint32_t x282 = 6685U;
	volatile int16_t x283 = -1;
	int32_t x284 = -14256;

	t46 = (((x281+x282)*x283)/x284);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x285 = UINT64_MAX;
	uint8_t x286 = 1U;
	int32_t x287 = -1;
	static volatile uint64_t t47 = 6LLU;

	t47 = (((x285+x286)*x287)/x288);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x289 = 8769599148975812LLU;
	uint32_t x290 = UINT32_MAX;
	int32_t x292 = -130;

	t48 = (((x289+x290)*x291)/x292);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x293 = INT16_MIN;
	static int32_t x295 = -1;
	static int8_t x296 = INT8_MIN;
	static volatile int32_t t49 = -429510503;

	t49 = (((x293+x294)*x295)/x296);

	if (t49 != -512) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int64_t t50 = 110LL;

	t50 = (((x297+x298)*x299)/x300);

	if (t50 != -118365240LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x305 = 1596U;
	volatile uint8_t x306 = 124U;
	int8_t x308 = INT8_MIN;
	int32_t t51 = 7876760;

	t51 = (((x305+x306)*x307)/x308);

	if (t51 != 1720) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x309 = 1106U;
	int8_t x310 = INT8_MIN;
	static uint32_t x311 = 22U;
	static int8_t x312 = INT8_MAX;
	uint32_t t52 = 1U;

	t52 = (((x309+x310)*x311)/x312);

	if (t52 != 169U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x313 = INT8_MAX;
	uint8_t x314 = UINT8_MAX;
	volatile int32_t x315 = -1;
	int16_t x316 = INT16_MAX;
	volatile int32_t t53 = 15945552;

	t53 = (((x313+x314)*x315)/x316);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x329 = -924231;
	volatile int8_t x330 = INT8_MAX;
	int8_t x331 = INT8_MIN;
	static volatile int32_t x332 = INT32_MIN;
	static volatile int32_t t54 = 20705953;

	t54 = (((x329+x330)*x331)/x332);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x334 = 358828651992074183LLU;
	int16_t x335 = 210;
	uint32_t x336 = 10468U;
	volatile uint64_t t55 = 1187LLU;

	t55 = (((x333+x334)*x335)/x336);

	if (t55 != 149698187189279LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x343 = INT32_MAX;
	static volatile uint8_t x344 = 6U;
	uint32_t t56 = 24662856U;

	t56 = (((x341+x342)*x343)/x344);

	if (t56 != 6U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x353 = INT8_MIN;
	int8_t x354 = INT8_MIN;
	static volatile int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t57 = 764753;

	t57 = (((x353+x354)*x355)/x356);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x357 = -62544982332350LL;
	int32_t x359 = 18;
	static volatile int16_t x360 = -12994;
	static volatile int64_t t58 = 21511961459528015LL;

	t58 = (((x357+x358)*x359)/x360);

	if (t58 != 86640732798LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = UINT16_MAX;
	int16_t x364 = -1;
	uint64_t t59 = 1LLU;

	t59 = (((x361+x362)*x363)/x364);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x365 = INT8_MAX;
	uint16_t x366 = 1U;
	int32_t x367 = -1;
	static int32_t t60 = -1384734;

	t60 = (((x365+x366)*x367)/x368);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x370 = -48LL;
	int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	uint64_t t61 = 44209751LLU;

	t61 = (((x369+x370)*x371)/x372);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x373 = 23;
	volatile uint64_t x374 = 297409923LLU;
	static int8_t x375 = INT8_MIN;
	uint64_t t62 = 68591077571365LLU;

	t62 = (((x373+x374)*x375)/x376);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x378 = UINT64_MAX;
	int16_t x379 = -10510;
	int64_t x380 = INT64_MIN;
	uint64_t t63 = 27203580161LLU;

	t63 = (((x377+x378)*x379)/x380);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x389 = -53340171;
	uint64_t x390 = 1543591067219240LLU;
	int8_t x391 = INT8_MIN;
	uint64_t t64 = 10748LLU;

	t64 = (((x389+x390)*x391)/x392);

	if (t64 != 3649832884786606156LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x397 = UINT16_MAX;
	uint64_t x398 = UINT64_MAX;
	uint16_t x399 = 50U;
	static volatile uint64_t x400 = UINT64_MAX;
	uint64_t t65 = 390258LLU;

	t65 = (((x397+x398)*x399)/x400);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x409 = INT8_MAX;
	static uint32_t x410 = UINT32_MAX;
	int32_t x411 = -749815976;
	int16_t x412 = 372;
	volatile uint32_t t66 = 604381890U;

	t66 = (((x409+x410)*x411)/x412);

	if (t66 != 33514U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x413 = 43863U;
	int16_t x414 = INT16_MAX;
	static uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MAX;
	volatile uint32_t t67 = 51U;

	t67 = (((x413+x414)*x415)/x416);

	if (t67 != 153863U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x417 = 240;
	uint16_t x420 = 677U;
	static volatile int32_t t68 = 12;

	t68 = (((x417+x418)*x419)/x420);

	if (t68 != 310) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x425 = INT8_MAX;
	uint32_t x426 = 2720U;
	uint32_t x427 = 1412705885U;
	uint32_t t69 = 492813U;

	t69 = (((x425+x426)*x427)/x428);

	if (t69 != 117766596U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 2008U;
	int32_t t70 = -2217707;

	t70 = (((x429+x430)*x431)/x432);

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x438 = UINT64_MAX;
	volatile int16_t x439 = -1;
	uint32_t x440 = 92703U;
	static uint64_t t71 = 200LLU;

	t71 = (((x437+x438)*x439)/x440);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x441 = 2697423347LLU;
	static int16_t x442 = INT16_MIN;
	uint16_t x443 = UINT16_MAX;
	uint8_t x444 = 7U;
	volatile uint64_t t72 = 16656387259LLU;

	t72 = (((x441+x442)*x443)/x444);

	if (t72 != 25253355942109LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x449 = 3178399U;
	int32_t x450 = -243713452;
	volatile int32_t x451 = -7174895;
	uint8_t x452 = 1U;

	t73 = (((x449+x450)*x451)/x452);

	if (t73 != 1400281123U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x453 = -1;
	volatile uint8_t x454 = 67U;
	int32_t x455 = -1101209;
	volatile int32_t t74 = -763931;

	t74 = (((x453+x454)*x455)/x456);

	if (t74 != 2218) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x457 = UINT16_MAX;
	int64_t x458 = INT64_MIN;
	int16_t x459 = -1;
	int16_t x460 = INT16_MIN;
	static volatile int64_t t75 = 8526408291969028LL;

	t75 = (((x457+x458)*x459)/x460);

	if (t75 != -281474976710654LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x462 = -2950416953LL;
	int8_t x463 = INT8_MAX;
	volatile int32_t x464 = 6151;
	static volatile int64_t t76 = -1LL;

	t76 = (((x461+x462)*x463)/x464);

	if (t76 != -105256604LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x465 = 82725LLU;
	volatile int8_t x466 = -1;
	static int32_t x467 = -65438021;
	int16_t x468 = INT16_MAX;
	uint64_t t77 = 57994778165LLU;

	t77 = (((x465+x466)*x467)/x468);

	if (t77 != 562966968609109LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x473 = 8U;
	static int32_t x474 = INT32_MIN;
	int16_t x476 = 9;
	volatile uint64_t t78 = 341430LLU;

	t78 = (((x473+x474)*x475)/x476);

	if (t78 != 2049573756033630095LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x477 = INT32_MAX;
	int16_t x478 = -1;
	uint8_t x479 = 0U;
	int32_t t79 = -794515;

	t79 = (((x477+x478)*x479)/x480);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x481 = 14U;
	static volatile uint32_t x482 = 14516908U;
	int16_t x483 = INT16_MIN;
	uint32_t t80 = 1351943174U;

	t80 = (((x481+x482)*x483)/x484);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x490 = -1;
	int8_t x491 = -62;
	volatile uint32_t x492 = UINT32_MAX;
	volatile int64_t t81 = 34637LL;

	t81 = (((x489+x490)*x491)/x492);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x493 = -129;
	int8_t x494 = -1;
	int16_t x495 = INT16_MAX;
	int64_t t82 = -136367519523464407LL;

	t82 = (((x493+x494)*x495)/x496);

	if (t82 != 4259710LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x498 = -166;
	int8_t x499 = INT8_MIN;
	static int64_t t83 = -149055048206752LL;

	t83 = (((x497+x498)*x499)/x500);

	if (t83 != -21376LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x505 = UINT64_MAX;
	static int8_t x507 = -1;

	t84 = (((x505+x506)*x507)/x508);

	if (t84 != 838488366889184907LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x518 = 174249U;
	uint16_t x519 = 665U;
	volatile int16_t x520 = -1;
	uint32_t t85 = 25251U;

	t85 = (((x517+x518)*x519)/x520);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x525 = UINT8_MAX;
	int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	static int32_t t86 = 9363901;

	t86 = (((x525+x526)*x527)/x528);

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x533 = 11U;
	static uint64_t x534 = 52737788050737LLU;
	uint64_t t87 = 6633493388LLU;

	t87 = (((x533+x534)*x535)/x536);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x538 = -1;
	static int8_t x539 = -1;
	int32_t x540 = 29239276;
	volatile int32_t t88 = 0;

	t88 = (((x537+x538)*x539)/x540);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x541 = 0U;
	volatile int8_t x542 = INT8_MIN;
	volatile int16_t x543 = INT16_MIN;
	volatile int32_t x544 = -126690614;

	t89 = (((x541+x542)*x543)/x544);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x545 = -1;

	t90 = (((x545+x546)*x547)/x548);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x553 = INT32_MIN;
	static volatile int32_t x554 = INT32_MAX;
	int16_t x555 = INT16_MAX;
	volatile int64_t x556 = INT64_MAX;
	int64_t t91 = 310201506398759884LL;

	t91 = (((x553+x554)*x555)/x556);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x557 = 803U;
	int8_t x559 = INT8_MAX;
	volatile int64_t x560 = -1LL;
	volatile int64_t t92 = -1LL;

	t92 = (((x557+x558)*x559)/x560);

	if (t92 != -2147585629LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x561 = 23LL;
	uint32_t x563 = 31U;
	static int16_t x564 = INT16_MIN;
	static volatile int64_t t93 = -3382687697701285272LL;

	t93 = (((x561+x562)*x563)/x564);

	if (t93 != -4063232LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x570 = INT16_MIN;
	volatile uint16_t x571 = 1226U;
	int8_t x572 = INT8_MIN;
	volatile int32_t t94 = -1;

	t94 = (((x569+x570)*x571)/x572);

	if (t94 != 315082) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x573 = INT16_MIN;
	int16_t x574 = INT16_MIN;
	int64_t x575 = -2223LL;
	int64_t t95 = 19062764569400920LL;

	t95 = (((x573+x574)*x575)/x576);

	if (t95 != 72843264LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x581 = 867521;
	uint32_t x582 = 169U;
	static int8_t x584 = 26;
	uint32_t t96 = 35U;

	t96 = (((x581+x582)*x583)/x584);

	if (t96 != 8510036U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x586 = -1LL;
	static int8_t x587 = INT8_MIN;
	static int32_t x588 = -12397;

	t97 = (((x585+x586)*x587)/x588);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x589 = INT16_MAX;
	int32_t x591 = -1;
	uint32_t x592 = UINT32_MAX;
	volatile uint32_t t98 = 6U;

	t98 = (((x589+x590)*x591)/x592);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x593 = 200LLU;
	int64_t x594 = INT64_MAX;
	static uint16_t x595 = 653U;
	int32_t x596 = -16;
	uint64_t t99 = 75851808968942726LLU;

	t99 = (((x593+x594)*x595)/x596);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

