#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -233618698;
int8_t x5 = INT8_MAX;
int8_t x8 = -1;
uint8_t x12 = UINT8_MAX;
uint64_t x13 = 19182146961376LLU;
uint64_t x16 = UINT64_MAX;
int8_t x17 = 1;
int32_t t4 = -1;
volatile int32_t t5 = -816427248;
static volatile int32_t t6 = -423;
int32_t x38 = -35;
int64_t x39 = INT64_MIN;
uint8_t x60 = 1U;
volatile int32_t t11 = -10561;
uint16_t x61 = 121U;
int8_t x62 = 0;
int16_t x63 = INT16_MIN;
static volatile int32_t t12 = -45;
uint32_t x65 = 106313U;
uint16_t x72 = UINT16_MAX;
int64_t x75 = INT64_MAX;
volatile int8_t x77 = -1;
static volatile uint64_t x82 = 474461038LLU;
int8_t x84 = -1;
static int64_t x88 = INT64_MAX;
int64_t x104 = -1LL;
int32_t t20 = -32128937;
int32_t x105 = 0;
volatile int32_t t24 = 1851;
volatile int64_t x132 = INT64_MIN;
int32_t t25 = -32110;
int16_t x137 = 228;
uint64_t x139 = UINT64_MAX;
uint16_t x142 = 3878U;
int64_t x144 = INT64_MAX;
int8_t x152 = INT8_MIN;
int64_t x155 = INT64_MIN;
uint16_t x163 = 51U;
volatile int32_t t36 = -6;
volatile uint64_t x197 = 61LLU;
volatile int8_t x203 = 0;
uint8_t x205 = UINT8_MAX;
uint64_t x206 = 805205451034LLU;
volatile int64_t x209 = 288349LL;
int16_t x211 = INT16_MAX;
int32_t x226 = -1;
uint32_t x227 = 57U;
int32_t t45 = -18563;
int8_t x237 = -10;
volatile int8_t x240 = INT8_MIN;
int8_t x243 = 1;
static volatile int32_t t48 = 126;
uint64_t x250 = 1904494076LLU;
volatile int32_t t50 = -314;
uint16_t x260 = 0U;
int16_t x273 = 4;
int32_t t54 = 1014351;
static uint8_t x281 = 1U;
int16_t x284 = INT16_MAX;
int32_t t55 = -267;
static int16_t x293 = INT16_MAX;
uint16_t x298 = 16129U;
int16_t x310 = -14;
int32_t t62 = -470894514;
volatile int32_t t63 = -4248;
uint16_t x317 = 34U;
int32_t x322 = -1;
uint64_t x327 = UINT64_MAX;
int64_t x328 = INT64_MIN;
uint64_t x341 = 312564900LLU;
int32_t x345 = -1;
static int16_t x348 = -351;
static int16_t x350 = INT16_MIN;
uint64_t x353 = 969LLU;
int64_t x354 = INT64_MAX;
uint16_t x358 = UINT16_MAX;
volatile uint64_t x360 = 1110316LLU;
static int32_t x362 = -1;
uint16_t x368 = 5U;
uint16_t x369 = 1U;
int32_t x374 = INT32_MAX;
int16_t x375 = INT16_MAX;
static int16_t x386 = -7358;
uint32_t x410 = UINT32_MAX;
volatile int64_t x411 = INT64_MAX;
volatile int32_t t84 = 1239363;
uint8_t x436 = UINT8_MAX;
static volatile int32_t t86 = 1;
volatile int32_t x442 = -1;
int16_t x444 = INT16_MIN;
static int8_t x446 = -41;
volatile int32_t t89 = -8256332;
int32_t x454 = -1;
uint32_t x462 = 3782U;
uint8_t x463 = 40U;
int32_t x464 = 1;
uint16_t x469 = 2U;
static uint16_t x481 = 337U;
volatile int8_t x490 = -9;
int32_t t98 = -25839;


void f0(void) {
	volatile int16_t x1 = 2;
	uint8_t x2 = UINT8_MAX;
	uint32_t x3 = 30414340U;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1*x2)==(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 2LL;
	uint64_t x7 = 3136078LLU;
	static volatile int32_t t1 = -4245;

	t1 = ((x5*x6)==(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 4U;
	static uint8_t x10 = 109U;
	volatile uint64_t x11 = 1346949LLU;
	int32_t t2 = 5065304;

	t2 = ((x9*x10)==(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = INT32_MIN;
	int16_t x15 = 0;
	volatile int32_t t3 = 1;

	t3 = ((x13*x14)==(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 27;
	static int64_t x19 = -93101318706LL;
	int8_t x20 = 0;

	t4 = ((x17*x18)==(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 0;
	int8_t x22 = INT8_MIN;
	static volatile int8_t x23 = 30;
	volatile uint32_t x24 = 3975834U;

	t5 = ((x21*x22)==(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = INT8_MIN;
	int32_t x27 = INT32_MAX;
	int8_t x28 = INT8_MAX;

	t6 = ((x25*x26)==(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 167U;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = 1934187820720950067LL;
	int32_t x36 = INT32_MAX;
	int32_t t7 = 8436;

	t7 = ((x33*x34)==(x35<=x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 30058705784672LLU;
	int8_t x40 = -3;
	int32_t t8 = -1494;

	t8 = ((x37*x38)==(x39<=x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = -4713;
	uint16_t x42 = UINT16_MAX;
	uint16_t x43 = 2U;
	int32_t x44 = INT32_MIN;
	int32_t t9 = 93959556;

	t9 = ((x41*x42)==(x43<=x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int8_t x50 = INT8_MIN;
	int32_t x51 = 2516;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t10 = -101086796;

	t10 = ((x49*x50)==(x51<=x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = UINT8_MAX;
	static volatile int8_t x58 = INT8_MAX;
	uint8_t x59 = 1U;

	t11 = ((x57*x58)==(x59<=x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x64 = 5;

	t12 = ((x61*x62)==(x63<=x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x66 = INT32_MIN;
	volatile int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	int32_t t13 = -29098;

	t13 = ((x65*x66)==(x67<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = -1;
	uint16_t x70 = 508U;
	int32_t x71 = -1;
	int32_t t14 = 4427;

	t14 = ((x69*x70)==(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	static uint8_t x74 = 65U;
	int32_t x76 = INT32_MIN;
	int32_t t15 = -6;

	t15 = ((x73*x74)==(x75<=x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x78 = 0;
	uint8_t x79 = 0U;
	volatile int8_t x80 = INT8_MAX;
	static volatile int32_t t16 = -263193176;

	t16 = ((x77*x78)==(x79<=x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	int32_t x83 = -1;
	volatile int32_t t17 = 16094685;

	t17 = ((x81*x82)==(x83<=x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 107LLU;
	int8_t x86 = INT8_MIN;
	int8_t x87 = -1;
	volatile int32_t t18 = 291;

	t18 = ((x85*x86)==(x87<=x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -34;
	int16_t x94 = INT16_MIN;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 62063LLU;
	volatile int32_t t19 = 27884021;

	t19 = ((x93*x94)==(x95<=x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	static uint8_t x102 = 10U;
	int16_t x103 = INT16_MAX;

	t20 = ((x101*x102)==(x103<=x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = 14;
	uint64_t x107 = 746656166639797654LLU;
	int32_t x108 = -1;
	int32_t t21 = -2;

	t21 = ((x105*x106)==(x107<=x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 980LLU;
	uint8_t x110 = 4U;
	static int16_t x111 = 5;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t22 = -205;

	t22 = ((x109*x110)==(x111<=x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = 271375030U;
	static uint8_t x115 = UINT8_MAX;
	uint32_t x116 = 43179613U;
	volatile int32_t t23 = 12;

	t23 = ((x113*x114)==(x115<=x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x121 = 11U;
	int16_t x122 = INT16_MAX;
	volatile int32_t x123 = -1;
	int32_t x124 = INT32_MAX;

	t24 = ((x121*x122)==(x123<=x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = -1;
	static int64_t x130 = -1LL;
	int32_t x131 = INT32_MAX;

	t25 = ((x129*x130)==(x131<=x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x138 = 14592LLU;
	uint8_t x140 = 3U;
	volatile int32_t t26 = 41;

	t26 = ((x137*x138)==(x139<=x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -117627LL;
	static int64_t x143 = 31894886830610LL;
	int32_t t27 = 0;

	t27 = ((x141*x142)==(x143<=x144));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	volatile int32_t t28 = -106488;

	t28 = ((x149*x150)==(x151<=x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x153 = 3529036U;
	uint16_t x154 = 12U;
	int16_t x156 = INT16_MIN;
	int32_t t29 = -1478652;

	t29 = ((x153*x154)==(x155<=x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x157 = INT32_MIN;
	int8_t x158 = 0;
	int16_t x159 = 0;
	int8_t x160 = 41;
	volatile int32_t t30 = 60;

	t30 = ((x157*x158)==(x159<=x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x161 = UINT8_MAX;
	volatile int8_t x162 = INT8_MIN;
	static uint32_t x164 = 7090U;
	volatile int32_t t31 = -8492;

	t31 = ((x161*x162)==(x163<=x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = 44;
	volatile uint8_t x166 = 22U;
	static uint16_t x167 = 290U;
	int8_t x168 = INT8_MIN;
	int32_t t32 = 6352;

	t32 = ((x165*x166)==(x167<=x168));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = INT32_MAX;
	int64_t x174 = 1054605594LL;
	int16_t x175 = INT16_MAX;
	static uint8_t x176 = UINT8_MAX;
	int32_t t33 = 15702;

	t33 = ((x173*x174)==(x175<=x176));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = INT32_MIN;
	static volatile int64_t x178 = -1LL;
	int32_t x179 = INT32_MIN;
	volatile uint32_t x180 = 593057500U;
	volatile int32_t t34 = -3;

	t34 = ((x177*x178)==(x179<=x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = INT8_MIN;
	volatile uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	static int32_t t35 = 0;

	t35 = ((x185*x186)==(x187<=x188));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x189 = 3U;
	int16_t x190 = -1033;
	uint32_t x191 = 136138117U;
	uint64_t x192 = 10LLU;

	t36 = ((x189*x190)==(x191<=x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x198 = 11537267U;
	volatile int8_t x199 = -1;
	int32_t x200 = -100556;
	int32_t t37 = 101;

	t37 = ((x197*x198)==(x199<=x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x201 = 503011331U;
	volatile int16_t x202 = INT16_MIN;
	volatile int64_t x204 = INT64_MAX;
	static int32_t t38 = -1655422;

	t38 = ((x201*x202)==(x203<=x204));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t39 = -275;

	t39 = ((x205*x206)==(x207<=x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x210 = -1;
	int32_t x212 = INT32_MAX;
	volatile int32_t t40 = -938;

	t40 = ((x209*x210)==(x211<=x212));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x213 = INT8_MIN;
	int16_t x214 = -215;
	uint64_t x215 = UINT64_MAX;
	volatile uint64_t x216 = 19LLU;
	volatile int32_t t41 = -7442;

	t41 = ((x213*x214)==(x215<=x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x217 = -1;
	volatile int8_t x218 = 11;
	int8_t x219 = INT8_MAX;
	int64_t x220 = -1LL;
	volatile int32_t t42 = 549115;

	t42 = ((x217*x218)==(x219<=x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -778;
	int8_t x224 = INT8_MIN;
	int32_t t43 = 1258973;

	t43 = ((x221*x222)==(x223<=x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = 0;
	static int64_t x228 = INT64_MIN;
	volatile int32_t t44 = -109850;

	t44 = ((x225*x226)==(x227<=x228));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = -76;
	int8_t x230 = INT8_MAX;
	int64_t x231 = INT64_MIN;
	uint32_t x232 = 142280U;

	t45 = ((x229*x230)==(x231<=x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x238 = 36U;
	int8_t x239 = INT8_MIN;
	int32_t t46 = -2292183;

	t46 = ((x237*x238)==(x239<=x240));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x241 = 7LLU;
	uint64_t x242 = 3262873053088492LLU;
	int16_t x244 = INT16_MIN;
	volatile int32_t t47 = -119717;

	t47 = ((x241*x242)==(x243<=x244));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x245 = INT8_MIN;
	int64_t x246 = 86752LL;
	static uint16_t x247 = UINT16_MAX;
	int32_t x248 = INT32_MAX;

	t48 = ((x245*x246)==(x247<=x248));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;
	static int32_t t49 = -19;

	t49 = ((x249*x250)==(x251<=x252));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x253 = 4246507127604566775LL;
	volatile uint64_t x254 = 429132346LLU;
	uint32_t x255 = UINT32_MAX;
	uint16_t x256 = UINT16_MAX;

	t50 = ((x253*x254)==(x255<=x256));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = 104141596302177LLU;
	uint8_t x258 = 1U;
	static volatile int8_t x259 = -31;
	int32_t t51 = 8;

	t51 = ((x257*x258)==(x259<=x260));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x261 = 15556508617581632LL;
	uint64_t x262 = UINT64_MAX;
	int32_t x263 = INT32_MIN;
	uint16_t x264 = UINT16_MAX;
	static int32_t t52 = 4;

	t52 = ((x261*x262)==(x263<=x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x265 = -1;
	volatile uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	static volatile uint8_t x268 = UINT8_MAX;
	volatile int32_t t53 = 58898;

	t53 = ((x265*x266)==(x267<=x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x274 = 393LLU;
	int16_t x275 = INT16_MIN;
	int32_t x276 = INT32_MAX;

	t54 = ((x273*x274)==(x275<=x276));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x282 = 4729966435187796523LLU;
	uint8_t x283 = UINT8_MAX;

	t55 = ((x281*x282)==(x283<=x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x285 = 119U;
	int32_t x286 = 9;
	static volatile int64_t x287 = -1LL;
	volatile uint64_t x288 = 4877523105LLU;
	volatile int32_t t56 = 28;

	t56 = ((x285*x286)==(x287<=x288));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x289 = -1;
	int8_t x290 = INT8_MAX;
	volatile int16_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	static volatile int32_t t57 = 1;

	t57 = ((x289*x290)==(x291<=x292));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x294 = -178;
	static int16_t x295 = 23;
	int16_t x296 = INT16_MAX;
	int32_t t58 = -472;

	t58 = ((x293*x294)==(x295<=x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = 6;
	int32_t x299 = INT32_MIN;
	int8_t x300 = INT8_MIN;
	int32_t t59 = 3498588;

	t59 = ((x297*x298)==(x299<=x300));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = 1;
	uint16_t x302 = 352U;
	int32_t x303 = -1;
	int64_t x304 = INT64_MAX;
	int32_t t60 = 15328877;

	t60 = ((x301*x302)==(x303<=x304));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x305 = 1541U;
	static int8_t x306 = INT8_MIN;
	int32_t x307 = INT32_MIN;
	static int16_t x308 = -1;
	int32_t t61 = -1;

	t61 = ((x305*x306)==(x307<=x308));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -485;
	int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;

	t62 = ((x309*x310)==(x311<=x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x313 = 1928U;
	int8_t x314 = INT8_MIN;
	volatile int8_t x315 = INT8_MIN;
	static int64_t x316 = -1LL;

	t63 = ((x313*x314)==(x315<=x316));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x318 = UINT8_MAX;
	static uint8_t x319 = UINT8_MAX;
	int16_t x320 = -1;
	volatile int32_t t64 = -7552010;

	t64 = ((x317*x318)==(x319<=x320));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x321 = 9U;
	int16_t x323 = INT16_MAX;
	static int64_t x324 = INT64_MIN;
	static int32_t t65 = -19349662;

	t65 = ((x321*x322)==(x323<=x324));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x325 = -1;
	volatile uint16_t x326 = 0U;
	volatile int32_t t66 = -258378;

	t66 = ((x325*x326)==(x327<=x328));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x329 = UINT8_MAX;
	int16_t x330 = INT16_MAX;
	int32_t x331 = -1;
	static int32_t x332 = INT32_MIN;
	int32_t t67 = -27155;

	t67 = ((x329*x330)==(x331<=x332));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x333 = -519964LL;
	uint16_t x334 = 19U;
	volatile int16_t x335 = 924;
	int64_t x336 = -1LL;
	int32_t t68 = -685416;

	t68 = ((x333*x334)==(x335<=x336));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = INT32_MIN;
	int16_t x344 = -1;
	int32_t t69 = 13;

	t69 = ((x341*x342)==(x343<=x344));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x346 = 2171;
	uint32_t x347 = 31470U;
	volatile int32_t t70 = 13;

	t70 = ((x345*x346)==(x347<=x348));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x349 = 225;
	static uint8_t x351 = UINT8_MAX;
	static volatile int64_t x352 = INT64_MAX;
	int32_t t71 = 129038;

	t71 = ((x349*x350)==(x351<=x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x355 = 1;
	int64_t x356 = INT64_MIN;
	int32_t t72 = 252355443;

	t72 = ((x353*x354)==(x355<=x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = INT16_MAX;
	static int64_t x359 = INT64_MAX;
	int32_t t73 = 35096767;

	t73 = ((x357*x358)==(x359<=x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x361 = UINT16_MAX;
	int64_t x363 = INT64_MAX;
	uint64_t x364 = UINT64_MAX;
	volatile int32_t t74 = -156;

	t74 = ((x361*x362)==(x363<=x364));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x365 = INT32_MIN;
	static uint32_t x366 = 1004U;
	uint32_t x367 = 1519486277U;
	static int32_t t75 = -2330;

	t75 = ((x365*x366)==(x367<=x368));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x370 = INT32_MIN;
	uint64_t x371 = 5037347397677876LLU;
	int32_t x372 = -3317042;
	volatile int32_t t76 = -1387192;

	t76 = ((x369*x370)==(x371<=x372));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x373 = UINT32_MAX;
	static int16_t x376 = INT16_MIN;
	int32_t t77 = -95111292;

	t77 = ((x373*x374)==(x375<=x376));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = 3;
	static volatile int64_t x379 = INT64_MAX;
	int16_t x380 = INT16_MIN;
	volatile int32_t t78 = -380852;

	t78 = ((x377*x378)==(x379<=x380));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x385 = -1;
	uint16_t x387 = 19U;
	volatile int32_t x388 = -1;
	int32_t t79 = -243342;

	t79 = ((x385*x386)==(x387<=x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = -4567;
	int8_t x395 = INT8_MIN;
	int64_t x396 = -11552185863575LL;
	int32_t t80 = 9702;

	t80 = ((x393*x394)==(x395<=x396));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x401 = INT16_MIN;
	int32_t x402 = -1;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MAX;
	static int32_t t81 = 8076704;

	t81 = ((x401*x402)==(x403<=x404));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x405 = INT32_MAX;
	int32_t x406 = 1;
	int16_t x407 = INT16_MIN;
	static uint16_t x408 = 27534U;
	volatile int32_t t82 = -66922667;

	t82 = ((x405*x406)==(x407<=x408));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x409 = INT32_MAX;
	volatile int32_t x412 = 4852895;
	int32_t t83 = 1;

	t83 = ((x409*x410)==(x411<=x412));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x421 = INT64_MAX;
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = INT32_MIN;
	static int16_t x424 = INT16_MAX;

	t84 = ((x421*x422)==(x423<=x424));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x425 = INT16_MIN;
	static int8_t x426 = 0;
	int64_t x427 = -2183LL;
	int64_t x428 = -241461912281645488LL;
	int32_t t85 = -9764;

	t85 = ((x425*x426)==(x427<=x428));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x433 = INT8_MIN;
	static int16_t x434 = INT16_MIN;
	static uint32_t x435 = 1792644U;

	t86 = ((x433*x434)==(x435<=x436));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x437 = UINT8_MAX;
	static uint8_t x438 = UINT8_MAX;
	uint16_t x439 = 787U;
	int8_t x440 = -5;
	static int32_t t87 = -221314861;

	t87 = ((x437*x438)==(x439<=x440));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x441 = -2;
	static volatile int16_t x443 = -1;
	volatile int32_t t88 = 7136;

	t88 = ((x441*x442)==(x443<=x444));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x445 = INT16_MAX;
	static uint64_t x447 = UINT64_MAX;
	static volatile uint8_t x448 = UINT8_MAX;

	t89 = ((x445*x446)==(x447<=x448));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x453 = -8;
	static int8_t x455 = INT8_MIN;
	volatile int8_t x456 = 26;
	volatile int32_t t90 = -3;

	t90 = ((x453*x454)==(x455<=x456));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x457 = -1;
	int64_t x458 = 4090029LL;
	int8_t x459 = 4;
	int64_t x460 = INT64_MIN;
	int32_t t91 = 38944664;

	t91 = ((x457*x458)==(x459<=x460));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x461 = -57;
	int32_t t92 = 42511613;

	t92 = ((x461*x462)==(x463<=x464));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x470 = 1;
	uint64_t x471 = 25082761903279LLU;
	uint8_t x472 = 13U;
	static volatile int32_t t93 = 21;

	t93 = ((x469*x470)==(x471<=x472));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MIN;
	volatile uint64_t x478 = UINT64_MAX;
	uint32_t x479 = UINT32_MAX;
	int16_t x480 = INT16_MIN;
	static int32_t t94 = 0;

	t94 = ((x477*x478)==(x479<=x480));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x482 = INT16_MAX;
	int32_t x483 = INT32_MIN;
	static uint8_t x484 = UINT8_MAX;
	volatile int32_t t95 = 3536;

	t95 = ((x481*x482)==(x483<=x484));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x489 = 3U;
	static volatile int16_t x491 = -1;
	volatile int64_t x492 = INT64_MAX;
	volatile int32_t t96 = -4063;

	t96 = ((x489*x490)==(x491<=x492));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x493 = -1LL;
	volatile uint8_t x494 = 43U;
	int16_t x495 = INT16_MIN;
	int64_t x496 = INT64_MAX;
	int32_t t97 = 690735187;

	t97 = ((x493*x494)==(x495<=x496));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x497 = UINT64_MAX;
	int64_t x498 = -124203539310LL;
	int8_t x499 = INT8_MIN;
	int32_t x500 = INT32_MIN;

	t98 = ((x497*x498)==(x499<=x500));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x505 = INT16_MIN;
	volatile uint8_t x506 = 105U;
	int32_t x507 = 42653;
	int32_t x508 = INT32_MIN;
	int32_t t99 = -31682367;

	t99 = ((x505*x506)==(x507<=x508));

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

