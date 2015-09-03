#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = -823413LL;
volatile uint32_t x23 = 383844872U;
static int32_t x35 = 81;
int32_t t5 = 2;
static volatile int8_t x41 = -1;
int8_t x49 = 52;
int8_t x50 = INT8_MAX;
volatile uint8_t x52 = UINT8_MAX;
int32_t t8 = -229131072;
int32_t t9 = -688178585;
int32_t t10 = -179;
volatile int32_t t12 = 2;
int32_t t15 = 1126016;
static uint16_t x90 = 26U;
uint32_t x92 = 3651961U;
volatile int32_t t18 = -64892;
volatile int32_t x103 = INT32_MIN;
volatile int16_t x106 = -33;
static uint64_t x113 = UINT64_MAX;
uint16_t x120 = 820U;
volatile uint8_t x126 = 1U;
int32_t t24 = 117990749;
uint32_t x136 = 20431U;
int8_t x137 = INT8_MAX;
volatile int32_t t27 = -25049641;
static int8_t x155 = -2;
int8_t x156 = 4;
volatile uint16_t x163 = 3U;
uint8_t x172 = UINT8_MAX;
int32_t t32 = -96921;
int8_t x179 = -1;
volatile int32_t x189 = -3425296;
int64_t x197 = 60985884834667878LL;
volatile uint64_t x201 = 2303LLU;
uint8_t x202 = UINT8_MAX;
uint8_t x205 = 2U;
static int32_t x207 = -61793;
int8_t x208 = -1;
static volatile int32_t t40 = 850123;
uint8_t x222 = 0U;
uint64_t x241 = 198LLU;
int8_t x242 = -1;
volatile int32_t t45 = -1775;
int64_t x245 = INT64_MIN;
volatile int8_t x254 = INT8_MIN;
int8_t x256 = 1;
static int8_t x257 = INT8_MIN;
uint16_t x269 = UINT16_MAX;
int16_t x270 = INT16_MIN;
uint16_t x277 = UINT16_MAX;
int64_t x278 = INT64_MIN;
volatile int32_t t54 = -1;
int32_t x286 = 47;
int32_t x288 = INT32_MIN;
uint32_t x290 = 8560728U;
int16_t x291 = 0;
int32_t t56 = -71621;
int32_t t58 = -160;
volatile uint16_t x317 = UINT16_MAX;
static uint32_t x325 = 925797U;
static int64_t x326 = -1LL;
static volatile int32_t t61 = -7334;
volatile int64_t x331 = INT64_MIN;
volatile int32_t t62 = 1707;
uint8_t x341 = 113U;
uint64_t x342 = 1987569246LLU;
static volatile uint16_t x345 = UINT16_MAX;
int64_t x346 = INT64_MAX;
int64_t x355 = -106355337LL;
int32_t t66 = -7870;
int8_t x372 = INT8_MIN;
volatile int32_t x376 = -1;
int32_t t70 = 160;
uint8_t x380 = UINT8_MAX;
int64_t x388 = 0LL;
uint8_t x389 = 57U;
int8_t x394 = 1;
int32_t t74 = 45520;
int16_t x406 = INT16_MIN;
int32_t x413 = INT32_MIN;
int32_t x418 = INT32_MAX;
int8_t x422 = INT8_MAX;
int32_t t80 = -12074;
uint32_t x433 = 95885U;
uint8_t x438 = 0U;
int8_t x440 = -1;
volatile uint32_t x447 = 499410404U;
static uint8_t x453 = UINT8_MAX;
int32_t t84 = -25055;
static int32_t x461 = INT32_MAX;
static int8_t x462 = -1;
volatile int32_t t85 = -85194;
static int16_t x470 = -1;
int64_t x471 = -1LL;
uint16_t x482 = 29898U;
uint64_t x494 = UINT64_MAX;
int32_t x495 = INT32_MAX;
int64_t x498 = -1LL;
uint64_t x499 = 2444985605166941690LLU;
int64_t x505 = 2253705750111448LL;
static int64_t x506 = INT64_MIN;
int32_t t92 = -143;
int32_t t94 = -148;
uint32_t x522 = 0U;
uint16_t x523 = UINT16_MAX;
static int32_t x525 = INT32_MIN;
int8_t x532 = INT8_MAX;
volatile int16_t x535 = 3900;
int32_t t99 = 12257369;


void f0(void) {
	volatile int64_t x5 = INT64_MAX;
	static uint64_t x6 = UINT64_MAX;
	static int16_t x7 = 1;
	int32_t t0 = -23;

	t0 = (x5<=(x6*(x7^x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x21 = -1LL;
	int16_t x22 = INT16_MAX;
	static int16_t x24 = INT16_MIN;
	int32_t t1 = -443;

	t1 = (x21<=(x22*(x23^x24)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x25 = INT32_MAX;
	uint16_t x26 = 0U;
	static uint16_t x27 = 5046U;
	static volatile int8_t x28 = 6;
	volatile int32_t t2 = -21910916;

	t2 = (x25<=(x26*(x27^x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int64_t x30 = 109625846LL;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 10030LL;
	volatile int32_t t3 = 218651;

	t3 = (x29<=(x30*(x31^x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = INT64_MIN;
	int32_t x34 = -1;
	int32_t x36 = -1;
	volatile int32_t t4 = 61293774;

	t4 = (x33<=(x34*(x35^x36)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int32_t x38 = 556336991;
	volatile int64_t x39 = -3785206405LL;
	uint32_t x40 = 1493U;

	t5 = (x37<=(x38*(x39^x40)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x42 = INT32_MAX;
	int32_t x43 = INT32_MIN;
	static volatile uint64_t x44 = 258583837421330080LLU;
	static int32_t t6 = 15;

	t6 = (x41<=(x42*(x43^x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint32_t x46 = 36630722U;
	volatile int16_t x47 = 718;
	uint16_t x48 = 11704U;
	int32_t t7 = 911;

	t7 = (x45<=(x46*(x47^x48)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x51 = UINT8_MAX;

	t8 = (x49<=(x50*(x51^x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x57 = 15203241;
	uint32_t x58 = 140550U;
	static uint16_t x59 = 1707U;
	int16_t x60 = INT16_MAX;

	t9 = (x57<=(x58*(x59^x60)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = 698536815LL;
	int32_t x62 = 1;
	int64_t x63 = INT64_MAX;
	int64_t x64 = 3471141623907090LL;

	t10 = (x61<=(x62*(x63^x64)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x65 = 26574;
	volatile int8_t x66 = -1;
	uint16_t x67 = 51U;
	static int64_t x68 = 9371033572LL;
	volatile int32_t t11 = -8826971;

	t11 = (x65<=(x66*(x67^x68)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = INT32_MAX;
	static volatile int16_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	static int64_t x72 = -11LL;

	t12 = (x69<=(x70*(x71^x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -608;
	volatile uint64_t x74 = 12036388781843LLU;
	int64_t x75 = 184172002688LL;
	volatile int64_t x76 = -1LL;
	volatile int32_t t13 = 2;

	t13 = (x73<=(x74*(x75^x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 43085U;
	int8_t x78 = -1;
	uint32_t x79 = 284U;
	int8_t x80 = INT8_MAX;
	volatile int32_t t14 = 498055;

	t14 = (x77<=(x78*(x79^x80)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x81 = INT8_MIN;
	int64_t x82 = 626208LL;
	int64_t x83 = -121409486LL;
	int16_t x84 = -1;

	t15 = (x81<=(x82*(x83^x84)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 42U;
	int16_t x91 = INT16_MIN;
	int32_t t16 = -3771083;

	t16 = (x89<=(x90*(x91^x92)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = 23U;
	static volatile uint8_t x96 = 1U;
	volatile int32_t t17 = 40555147;

	t17 = (x93<=(x94*(x95^x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x97 = UINT8_MAX;
	int32_t x98 = -1;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = 395495U;

	t18 = (x97<=(x98*(x99^x100)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x101 = 239789078922LLU;
	volatile int64_t x102 = -1LL;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t19 = -10389319;

	t19 = (x101<=(x102*(x103^x104)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x107 = UINT64_MAX;
	int64_t x108 = -1LL;
	int32_t t20 = -22082;

	t20 = (x105<=(x106*(x107^x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = -1;
	int8_t x111 = INT8_MAX;
	volatile int64_t x112 = INT64_MIN;
	int32_t t21 = 447825209;

	t21 = (x109<=(x110*(x111^x112)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x114 = -1927;
	static uint16_t x115 = 0U;
	uint8_t x116 = UINT8_MAX;
	int32_t t22 = -167319;

	t22 = (x113<=(x114*(x115^x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MAX;
	int64_t x118 = -1LL;
	volatile uint32_t x119 = 60481445U;
	static int32_t t23 = -572;

	t23 = (x117<=(x118*(x119^x120)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = -4;
	static volatile int16_t x127 = INT16_MIN;
	uint16_t x128 = 6U;

	t24 = (x125<=(x126*(x127^x128)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x129 = 0LL;
	uint64_t x130 = 33620463LLU;
	uint64_t x131 = 322232551741011082LLU;
	int16_t x132 = 0;
	int32_t t25 = 178602281;

	t25 = (x129<=(x130*(x131^x132)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 1U;
	static uint64_t x134 = 25550024248649292LLU;
	int16_t x135 = INT16_MAX;
	static volatile int32_t t26 = 0;

	t26 = (x133<=(x134*(x135^x136)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x138 = 167;
	int16_t x139 = INT16_MIN;
	volatile int16_t x140 = INT16_MIN;

	t27 = (x137<=(x138*(x139^x140)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MAX;
	volatile uint64_t x151 = UINT64_MAX;
	int16_t x152 = 20;
	int32_t t28 = 1;

	t28 = (x149<=(x150*(x151^x152)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = INT16_MAX;
	volatile uint8_t x154 = 10U;
	volatile int32_t t29 = -462267;

	t29 = (x153<=(x154*(x155^x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x161 = INT16_MAX;
	uint8_t x162 = 13U;
	uint8_t x164 = 7U;
	volatile int32_t t30 = -6;

	t30 = (x161<=(x162*(x163^x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = 472416563309359781LL;
	uint16_t x166 = 31722U;
	static volatile int16_t x167 = 8421;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t31 = -26813;

	t31 = (x165<=(x166*(x167^x168)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x169 = 39;
	uint8_t x170 = 6U;
	static uint8_t x171 = 12U;

	t32 = (x169<=(x170*(x171^x172)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x173 = 3;
	volatile int8_t x174 = INT8_MAX;
	uint32_t x175 = 94578U;
	int32_t x176 = -8678;
	volatile int32_t t33 = 520202553;

	t33 = (x173<=(x174*(x175^x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x177 = -1LL;
	int32_t x178 = INT32_MIN;
	int32_t x180 = -1;
	volatile int32_t t34 = 1316983;

	t34 = (x177<=(x178*(x179^x180)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x190 = 272U;
	static volatile int32_t x191 = -1;
	int32_t x192 = 3;
	volatile int32_t t35 = -47;

	t35 = (x189<=(x190*(x191^x192)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x198 = INT8_MIN;
	int64_t x199 = 928720632786991LL;
	int32_t x200 = 23808;
	volatile int32_t t36 = 11657190;

	t36 = (x197<=(x198*(x199^x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x203 = UINT32_MAX;
	int8_t x204 = -1;
	volatile int32_t t37 = -70;

	t37 = (x201<=(x202*(x203^x204)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x206 = -1;
	static volatile int32_t t38 = -5;

	t38 = (x205<=(x206*(x207^x208)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = 11094652697495LL;
	uint32_t x210 = 221297U;
	int8_t x211 = INT8_MIN;
	static int32_t x212 = -1;
	int32_t t39 = -235;

	t39 = (x209<=(x210*(x211^x212)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x217 = 27;
	int64_t x218 = -1LL;
	uint64_t x219 = 107490050278840907LLU;
	static int64_t x220 = INT64_MAX;

	t40 = (x217<=(x218*(x219^x220)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x221 = 935U;
	int64_t x223 = INT64_MIN;
	int8_t x224 = -5;
	volatile int32_t t41 = -126740;

	t41 = (x221<=(x222*(x223^x224)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = INT32_MAX;
	static uint64_t x227 = 31LLU;
	uint16_t x228 = 3U;
	volatile int32_t t42 = 130401639;

	t42 = (x225<=(x226*(x227^x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x233 = INT32_MIN;
	static volatile int8_t x234 = INT8_MAX;
	volatile uint32_t x235 = UINT32_MAX;
	static int32_t x236 = INT32_MAX;
	int32_t t43 = -958242754;

	t43 = (x233<=(x234*(x235^x236)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x237 = -1;
	static int16_t x238 = INT16_MIN;
	uint64_t x239 = 240LLU;
	int8_t x240 = -2;
	static int32_t t44 = 336247;

	t44 = (x237<=(x238*(x239^x240)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;

	t45 = (x241<=(x242*(x243^x244)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	static uint16_t x248 = 10U;
	static int32_t t46 = 56161;

	t46 = (x245<=(x246*(x247^x248)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x249 = INT8_MAX;
	volatile int8_t x250 = INT8_MIN;
	int8_t x251 = 46;
	volatile int8_t x252 = INT8_MAX;
	volatile int32_t t47 = -431;

	t47 = (x249<=(x250*(x251^x252)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	volatile int32_t t48 = 6622744;

	t48 = (x253<=(x254*(x255^x256)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x258 = 1;
	static uint64_t x259 = 370914LLU;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t49 = -152097260;

	t49 = (x257<=(x258*(x259^x260)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = INT64_MIN;
	uint64_t x263 = 1141739598865291524LLU;
	volatile int16_t x264 = -121;
	volatile int32_t t50 = -22;

	t50 = (x261<=(x262*(x263^x264)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = -1;
	int32_t x267 = 5;
	int16_t x268 = -1;
	static int32_t t51 = 3622;

	t51 = (x265<=(x266*(x267^x268)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x271 = -1;
	int16_t x272 = INT16_MIN;
	static int32_t t52 = -7;

	t52 = (x269<=(x270*(x271^x272)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x279 = 80013161982558LLU;
	int16_t x280 = INT16_MIN;
	int32_t t53 = 7679596;

	t53 = (x277<=(x278*(x279^x280)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x281 = 48U;
	int64_t x282 = 1885974208210LL;
	volatile uint64_t x283 = 8987795230497918473LLU;
	int32_t x284 = INT32_MIN;

	t54 = (x281<=(x282*(x283^x284)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x285 = INT8_MIN;
	int64_t x287 = -1LL;
	static volatile int32_t t55 = -416;

	t55 = (x285<=(x286*(x287^x288)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x289 = -1;
	static int16_t x292 = 0;

	t56 = (x289<=(x290*(x291^x292)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 3007251538LLU;
	int32_t x296 = 29540;
	int32_t t57 = 3976;

	t57 = (x293<=(x294*(x295^x296)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x309 = 34534LLU;
	static int32_t x310 = -1;
	uint16_t x311 = 0U;
	volatile int32_t x312 = 32675357;

	t58 = (x309<=(x310*(x311^x312)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 247535006LLU;
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	static int16_t x316 = 0;
	int32_t t59 = 15;

	t59 = (x313<=(x314*(x315^x316)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x318 = 107U;
	uint8_t x319 = 0U;
	int16_t x320 = INT16_MAX;
	volatile int32_t t60 = 1018;

	t60 = (x317<=(x318*(x319^x320)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x327 = 1220091578LLU;
	int8_t x328 = -1;

	t61 = (x325<=(x326*(x327^x328)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x329 = 1008039U;
	int8_t x330 = -2;
	static uint64_t x332 = 56222713234234032LLU;

	t62 = (x329<=(x330*(x331^x332)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x333 = -6;
	static volatile uint16_t x334 = 2513U;
	static uint64_t x335 = 12431735020LLU;
	int16_t x336 = -1;
	volatile int32_t t63 = -291770083;

	t63 = (x333<=(x334*(x335^x336)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x343 = UINT16_MAX;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t64 = 6603;

	t64 = (x341<=(x342*(x343^x344)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x347 = 41742398LLU;
	uint64_t x348 = 71728LLU;
	static int32_t t65 = -5;

	t65 = (x345<=(x346*(x347^x348)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x353 = 89U;
	volatile uint8_t x354 = UINT8_MAX;
	int32_t x356 = -873;

	t66 = (x353<=(x354*(x355^x356)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x357 = -30;
	int64_t x358 = 1LL;
	int16_t x359 = -1;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t67 = -109114;

	t67 = (x357<=(x358*(x359^x360)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = INT16_MIN;
	int32_t t68 = -2;

	t68 = (x361<=(x362*(x363^x364)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = -1;
	volatile int16_t x370 = -73;
	volatile uint8_t x371 = 0U;
	int32_t t69 = -68902943;

	t69 = (x369<=(x370*(x371^x372)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x373 = INT32_MIN;
	volatile int8_t x374 = -30;
	int16_t x375 = INT16_MIN;

	t70 = (x373<=(x374*(x375^x376)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x377 = 2180528630058080LL;
	int32_t x378 = 1;
	int16_t x379 = INT16_MIN;
	static volatile int32_t t71 = 50205;

	t71 = (x377<=(x378*(x379^x380)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x385 = INT32_MAX;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = 4074LLU;
	volatile int32_t t72 = 2;

	t72 = (x385<=(x386*(x387^x388)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x390 = INT16_MAX;
	uint32_t x391 = UINT32_MAX;
	uint64_t x392 = UINT64_MAX;
	static int32_t t73 = 5307876;

	t73 = (x389<=(x390*(x391^x392)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = INT32_MIN;
	uint64_t x395 = 1750199994972LLU;
	uint8_t x396 = 23U;

	t74 = (x393<=(x394*(x395^x396)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x401 = INT32_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -1LL;
	static int32_t x404 = 113681;
	int32_t t75 = -2342;

	t75 = (x401<=(x402*(x403^x404)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = -1LL;
	static volatile uint64_t x407 = 692323LLU;
	int16_t x408 = INT16_MIN;
	int32_t t76 = 238293848;

	t76 = (x405<=(x406*(x407^x408)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x414 = -30400878LL;
	static uint8_t x415 = 56U;
	static int8_t x416 = 0;
	int32_t t77 = 2856363;

	t77 = (x413<=(x414*(x415^x416)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x417 = 122097LL;
	static int8_t x419 = -8;
	volatile uint32_t x420 = 2U;
	int32_t t78 = 668;

	t78 = (x417<=(x418*(x419^x420)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x421 = 2896036;
	uint64_t x423 = UINT64_MAX;
	static uint32_t x424 = 37798U;
	int32_t t79 = 18129;

	t79 = (x421<=(x422*(x423^x424)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x429 = 20369U;
	uint16_t x430 = 0U;
	volatile uint16_t x431 = 1785U;
	int32_t x432 = -1;

	t80 = (x429<=(x430*(x431^x432)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x434 = -1;
	int16_t x435 = -1;
	uint8_t x436 = 2U;
	static volatile int32_t t81 = 116111333;

	t81 = (x433<=(x434*(x435^x436)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x437 = 284U;
	int8_t x439 = INT8_MIN;
	static volatile int32_t t82 = 27857366;

	t82 = (x437<=(x438*(x439^x440)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x445 = 51LLU;
	int32_t x446 = -77;
	uint16_t x448 = 714U;
	static volatile int32_t t83 = -237;

	t83 = (x445<=(x446*(x447^x448)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x454 = INT16_MIN;
	int8_t x455 = -1;
	int8_t x456 = INT8_MAX;

	t84 = (x453<=(x454*(x455^x456)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x463 = 2822U;
	int32_t x464 = INT32_MAX;

	t85 = (x461<=(x462*(x463^x464)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x469 = INT8_MIN;
	int64_t x472 = INT64_MIN;
	int32_t t86 = -1334245;

	t86 = (x469<=(x470*(x471^x472)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x477 = 50U;
	uint32_t x478 = UINT32_MAX;
	uint8_t x479 = 4U;
	int8_t x480 = INT8_MIN;
	int32_t t87 = 37082199;

	t87 = (x477<=(x478*(x479^x480)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = INT64_MIN;
	uint16_t x483 = 6696U;
	int8_t x484 = INT8_MIN;
	static volatile int32_t t88 = -120305;

	t88 = (x481<=(x482*(x483^x484)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = INT16_MIN;
	volatile uint64_t x496 = UINT64_MAX;
	int32_t t89 = 3105608;

	t89 = (x493<=(x494*(x495^x496)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x497 = 3U;
	int16_t x500 = INT16_MAX;
	int32_t t90 = 368323;

	t90 = (x497<=(x498*(x499^x500)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x501 = INT32_MAX;
	uint8_t x502 = UINT8_MAX;
	int16_t x503 = -1;
	int8_t x504 = INT8_MIN;
	int32_t t91 = -5527;

	t91 = (x501<=(x502*(x503^x504)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x507 = INT32_MIN;
	int32_t x508 = INT32_MIN;

	t92 = (x505<=(x506*(x507^x508)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x509 = -310375LL;
	int16_t x510 = INT16_MIN;
	int8_t x511 = -1;
	int8_t x512 = -1;
	int32_t t93 = -8;

	t93 = (x509<=(x510*(x511^x512)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = 1LL;
	static int8_t x514 = INT8_MIN;
	static volatile int8_t x515 = INT8_MIN;
	static int8_t x516 = INT8_MIN;

	t94 = (x513<=(x514*(x515^x516)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x517 = INT16_MAX;
	int8_t x518 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	int8_t x520 = INT8_MAX;
	static volatile int32_t t95 = 663177531;

	t95 = (x517<=(x518*(x519^x520)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x521 = INT64_MAX;
	uint64_t x524 = 554LLU;
	volatile int32_t t96 = 24849;

	t96 = (x521<=(x522*(x523^x524)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x526 = -1LL;
	uint16_t x527 = UINT16_MAX;
	int32_t x528 = -1;
	static int32_t t97 = 98781926;

	t97 = (x525<=(x526*(x527^x528)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x529 = -178;
	uint32_t x530 = 6612U;
	static volatile uint16_t x531 = UINT16_MAX;
	volatile int32_t t98 = 204;

	t98 = (x529<=(x530*(x531^x532)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x533 = INT32_MIN;
	uint8_t x534 = 52U;
	int16_t x536 = INT16_MIN;

	t99 = (x533<=(x534*(x535^x536)));

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

