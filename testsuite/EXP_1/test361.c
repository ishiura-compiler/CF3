#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 0;
int64_t x10 = -1LL;
uint16_t x11 = 47U;
uint16_t x21 = 116U;
int32_t t4 = 3891;
int32_t x25 = 19225;
int8_t x26 = -1;
volatile uint64_t x50 = 1984LLU;
int32_t t10 = 851;
uint16_t x73 = 0U;
int32_t x74 = INT32_MIN;
static uint16_t x76 = UINT16_MAX;
int16_t x83 = INT16_MIN;
int32_t t16 = -781;
int16_t x91 = 4;
int8_t x92 = INT8_MIN;
volatile uint64_t x97 = UINT64_MAX;
static volatile int32_t t20 = -119;
volatile int8_t x111 = 0;
int32_t t21 = -3580965;
int16_t x114 = INT16_MIN;
uint16_t x117 = 14U;
uint16_t x118 = UINT16_MAX;
int64_t x119 = INT64_MAX;
uint8_t x123 = UINT8_MAX;
static int32_t t24 = 108798813;
volatile uint64_t x127 = 16107910088165LLU;
volatile int32_t t25 = -3365824;
volatile int32_t t26 = 234636588;
static int8_t x145 = 1;
uint32_t x158 = 909788644U;
volatile uint8_t x163 = 21U;
int32_t t33 = -1;
int64_t x187 = -348435169762810LL;
int32_t t36 = 25347;
volatile int8_t x198 = -1;
uint16_t x199 = UINT16_MAX;
volatile int32_t x213 = -1;
static uint8_t x214 = 1U;
static int32_t t41 = -2;
static int8_t x221 = -28;
int32_t x268 = INT32_MIN;
static int16_t x272 = -1;
int32_t x275 = 228820494;
int8_t x278 = 1;
volatile int32_t t51 = 13243415;
volatile int8_t x282 = INT8_MAX;
static volatile int32_t t53 = -246767442;
int64_t x308 = -1LL;
static int16_t x318 = -30;
int8_t x320 = INT8_MIN;
uint16_t x321 = 10550U;
int16_t x322 = INT16_MIN;
int32_t x324 = -36463;
int8_t x330 = INT8_MAX;
static int64_t x332 = -410754781LL;
static int8_t x342 = INT8_MIN;
volatile uint16_t x343 = 176U;
int64_t x344 = INT64_MAX;
volatile int32_t t62 = -19065;
uint8_t x353 = 7U;
static int64_t x355 = 5794224668001LL;
uint16_t x356 = UINT16_MAX;
int8_t x357 = INT8_MIN;
int32_t x359 = 867280510;
volatile int32_t x360 = 884262;
uint8_t x361 = 27U;
static uint32_t x362 = UINT32_MAX;
int16_t x363 = -1;
uint8_t x374 = UINT8_MAX;
int8_t x394 = -3;
int32_t t71 = 42810947;
volatile int16_t x398 = -47;
int32_t t73 = -3;
int64_t x407 = -822573830LL;
volatile uint64_t x413 = UINT64_MAX;
int32_t x414 = INT32_MIN;
int32_t x416 = 339510;
volatile uint32_t x419 = 11U;
uint16_t x420 = 20959U;
volatile uint64_t x425 = 354467LLU;
int16_t x428 = 15234;
static uint16_t x430 = UINT16_MAX;
volatile int32_t t80 = -4;
int16_t x445 = 105;
uint64_t x454 = 226203550LLU;
uint32_t x460 = UINT32_MAX;
int16_t x483 = -1;
uint64_t x484 = 27LLU;
volatile int16_t x502 = INT16_MIN;
static int32_t x505 = INT32_MAX;
uint32_t x507 = 85030U;
uint8_t x509 = 23U;
static int32_t t96 = -27662;
uint32_t x546 = 8591U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile int64_t x2 = -1113197497083LL;
	volatile uint8_t x3 = 0U;
	static volatile int32_t t0 = -2265119;

	t0 = (((x1*x2)-x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 8100U;
	int8_t x12 = INT8_MAX;
	int32_t t1 = -58799566;

	t1 = (((x9*x10)-x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 24U;
	int16_t x14 = -47;
	int16_t x15 = INT16_MIN;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = -4764188;

	t2 = (((x13*x14)-x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 2949U;
	static int64_t x18 = -1LL;
	static int16_t x19 = 0;
	static int64_t x20 = -685002938LL;
	static volatile int32_t t3 = 9826004;

	t3 = (((x17*x18)-x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = 6LL;
	uint64_t x23 = UINT64_MAX;
	volatile int64_t x24 = 17230740751249LL;

	t4 = (((x21*x22)-x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 115;

	t5 = (((x25*x26)-x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = 5121;
	static volatile int8_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	static volatile int32_t t6 = -2;

	t6 = (((x29*x30)-x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	uint8_t x34 = 67U;
	uint8_t x35 = UINT8_MAX;
	static uint16_t x36 = 33U;
	static volatile int32_t t7 = -6832841;

	t7 = (((x33*x34)-x35)<=x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x37 = UINT32_MAX;
	static int32_t x38 = INT32_MIN;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	int32_t t8 = -168;

	t8 = (((x37*x38)-x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -1;
	int64_t x51 = INT64_MIN;
	int64_t x52 = INT64_MAX;
	volatile int32_t t9 = 102489;

	t9 = (((x49*x50)-x51)<=x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static int16_t x54 = -11;
	volatile int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;

	t10 = (((x53*x54)-x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 28U;
	static volatile int32_t x58 = 21331584;
	int64_t x59 = -1LL;
	uint32_t x60 = 505U;
	int32_t t11 = -1;

	t11 = (((x57*x58)-x59)<=x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = INT16_MIN;
	int16_t x66 = -89;
	int16_t x67 = INT16_MIN;
	static uint64_t x68 = UINT64_MAX;
	static volatile int32_t t12 = -1015862809;

	t12 = (((x65*x66)-x67)<=x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = -1LL;
	int32_t x70 = INT32_MIN;
	int16_t x71 = 1881;
	static int8_t x72 = -1;
	int32_t t13 = -1978017;

	t13 = (((x69*x70)-x71)<=x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x75 = 6;
	int32_t t14 = 105621;

	t14 = (((x73*x74)-x75)<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 1U;
	int8_t x78 = 11;
	uint64_t x79 = 247516LLU;
	int16_t x80 = INT16_MAX;
	int32_t t15 = -46798614;

	t15 = (((x77*x78)-x79)<=x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MAX;
	int16_t x84 = INT16_MIN;

	t16 = (((x81*x82)-x83)<=x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = 224523767LLU;
	uint16_t x90 = UINT16_MAX;
	volatile int32_t t17 = 674878916;

	t17 = (((x89*x90)-x91)<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = 8;
	volatile int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int32_t t18 = 838138;

	t18 = (((x93*x94)-x95)<=x96);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x98 = INT16_MIN;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = 14U;
	int32_t t19 = 12;

	t19 = (((x97*x98)-x99)<=x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	uint8_t x103 = 1U;
	static int64_t x104 = INT64_MIN;

	t20 = (((x101*x102)-x103)<=x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int8_t x112 = INT8_MIN;

	t21 = (((x109*x110)-x111)<=x112);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x115 = INT32_MIN;
	int8_t x116 = INT8_MAX;
	volatile int32_t t22 = -215;

	t22 = (((x113*x114)-x115)<=x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x120 = 4;
	volatile int32_t t23 = 1195;

	t23 = (((x117*x118)-x119)<=x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x121 = 33U;
	uint16_t x122 = 7649U;
	uint64_t x124 = 6771043168286292276LLU;

	t24 = (((x121*x122)-x123)<=x124);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = -48643373730LL;
	uint16_t x126 = 31U;
	volatile int32_t x128 = INT32_MAX;

	t25 = (((x125*x126)-x127)<=x128);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x133 = -2;
	static int8_t x134 = 28;
	int16_t x135 = INT16_MAX;
	static uint16_t x136 = 1U;

	t26 = (((x133*x134)-x135)<=x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x137 = 22485U;
	static int16_t x138 = INT16_MIN;
	uint64_t x139 = 913671260031907246LLU;
	int8_t x140 = -3;
	int32_t t27 = -3;

	t27 = (((x137*x138)-x139)<=x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x146 = 63U;
	static uint64_t x147 = 20273389108417LLU;
	int64_t x148 = INT64_MAX;
	static volatile int32_t t28 = -363319817;

	t28 = (((x145*x146)-x147)<=x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x149 = 11147LLU;
	int8_t x150 = -1;
	uint32_t x151 = 3U;
	static int64_t x152 = -2205634495LL;
	int32_t t29 = 0;

	t29 = (((x149*x150)-x151)<=x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 52108584826844785LLU;
	int32_t x159 = -265802;
	static int8_t x160 = INT8_MIN;
	int32_t t30 = -1862;

	t30 = (((x157*x158)-x159)<=x160);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x161 = INT8_MAX;
	int8_t x162 = INT8_MAX;
	int16_t x164 = INT16_MAX;
	int32_t t31 = 100345541;

	t31 = (((x161*x162)-x163)<=x164);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -5304;
	uint64_t x166 = 32256244137501840LLU;
	volatile int16_t x167 = -2;
	uint8_t x168 = 11U;
	volatile int32_t t32 = -44;

	t32 = (((x165*x166)-x167)<=x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x169 = UINT64_MAX;
	uint32_t x170 = UINT32_MAX;
	int8_t x171 = 9;
	static int16_t x172 = 46;

	t33 = (((x169*x170)-x171)<=x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x177 = -1LL;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	int32_t t34 = -171322195;

	t34 = (((x177*x178)-x179)<=x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x185 = UINT32_MAX;
	int16_t x186 = INT16_MIN;
	int64_t x188 = -248001LL;
	int32_t t35 = 50;

	t35 = (((x185*x186)-x187)<=x188);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x189 = 20U;
	volatile int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MAX;
	volatile int8_t x192 = -1;

	t36 = (((x189*x190)-x191)<=x192);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x193 = 12LL;
	int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MAX;
	volatile uint8_t x196 = UINT8_MAX;
	int32_t t37 = 233241004;

	t37 = (((x193*x194)-x195)<=x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = 11523;
	int32_t x200 = -79;
	volatile int32_t t38 = -47720;

	t38 = (((x197*x198)-x199)<=x200);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x201 = -1;
	uint32_t x202 = 3517U;
	int32_t x203 = 722178;
	static volatile uint64_t x204 = 3LLU;
	int32_t t39 = -1005;

	t39 = (((x201*x202)-x203)<=x204);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x215 = 1;
	static uint8_t x216 = 7U;
	volatile int32_t t40 = 713424;

	t40 = (((x213*x214)-x215)<=x216);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x217 = UINT8_MAX;
	static uint32_t x218 = 45855496U;
	static int32_t x219 = INT32_MAX;
	static uint64_t x220 = UINT64_MAX;

	t41 = (((x217*x218)-x219)<=x220);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x222 = 359509058636226846LLU;
	int8_t x223 = 2;
	static volatile int8_t x224 = -1;
	int32_t t42 = 1909;

	t42 = (((x221*x222)-x223)<=x224);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x225 = 0LL;
	int16_t x226 = INT16_MIN;
	int8_t x227 = -1;
	static uint8_t x228 = 28U;
	int32_t t43 = 25086;

	t43 = (((x225*x226)-x227)<=x228);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x229 = -7744;
	static uint32_t x230 = 922U;
	int32_t x231 = -27548672;
	volatile uint32_t x232 = 2432551U;
	int32_t t44 = 91149;

	t44 = (((x229*x230)-x231)<=x232);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x233 = 69383097325108LLU;
	int16_t x234 = INT16_MAX;
	int16_t x235 = INT16_MIN;
	uint64_t x236 = UINT64_MAX;
	static volatile int32_t t45 = -1;

	t45 = (((x233*x234)-x235)<=x236);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	static int8_t x243 = INT8_MIN;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t46 = -141838;

	t46 = (((x241*x242)-x243)<=x244);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x261 = INT32_MIN;
	uint32_t x262 = 1850884228U;
	static int32_t x263 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t47 = 15315;

	t47 = (((x261*x262)-x263)<=x264);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = -1;
	uint8_t x267 = 58U;
	int32_t t48 = 39119;

	t48 = (((x265*x266)-x267)<=x268);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x269 = 4U;
	int8_t x270 = INT8_MAX;
	int8_t x271 = INT8_MAX;
	static int32_t t49 = 50;

	t49 = (((x269*x270)-x271)<=x272);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x273 = 24556349028953799LLU;
	int32_t x274 = -1;
	uint32_t x276 = 138595650U;
	int32_t t50 = -342606465;

	t50 = (((x273*x274)-x275)<=x276);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = 29253U;
	volatile int8_t x279 = INT8_MIN;
	volatile uint64_t x280 = 2329001LLU;

	t51 = (((x277*x278)-x279)<=x280);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x281 = 1791018636957776368LLU;
	int8_t x283 = INT8_MIN;
	uint8_t x284 = 8U;
	volatile int32_t t52 = 2;

	t52 = (((x281*x282)-x283)<=x284);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x285 = -1;
	volatile int16_t x286 = INT16_MIN;
	int16_t x287 = 4;
	int64_t x288 = INT64_MIN;

	t53 = (((x285*x286)-x287)<=x288);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x293 = -1;
	int16_t x294 = -77;
	volatile uint64_t x295 = 2509907092043777525LLU;
	static int64_t x296 = 0LL;
	volatile int32_t t54 = -135275;

	t54 = (((x293*x294)-x295)<=x296);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x297 = 15539691573LL;
	uint16_t x298 = 0U;
	uint16_t x299 = 14580U;
	int16_t x300 = INT16_MIN;
	static int32_t t55 = -125;

	t55 = (((x297*x298)-x299)<=x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x305 = 38431616639942LLU;
	volatile int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t t56 = 1;

	t56 = (((x305*x306)-x307)<=x308);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x309 = 2387U;
	static int32_t x310 = 5755;
	uint32_t x311 = 1U;
	uint64_t x312 = UINT64_MAX;
	int32_t t57 = -1;

	t57 = (((x309*x310)-x311)<=x312);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x317 = 151889U;
	int8_t x319 = -18;
	static int32_t t58 = 357;

	t58 = (((x317*x318)-x319)<=x320);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x323 = 3519240138901196LLU;
	volatile int32_t t59 = -180;

	t59 = (((x321*x322)-x323)<=x324);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x329 = -27085090LL;
	int16_t x331 = -32;
	int32_t t60 = 6751208;

	t60 = (((x329*x330)-x331)<=x332);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x333 = 204531LLU;
	uint8_t x334 = 9U;
	static int32_t x335 = INT32_MIN;
	uint32_t x336 = 3945U;
	int32_t t61 = 455;

	t61 = (((x333*x334)-x335)<=x336);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x341 = -1;

	t62 = (((x341*x342)-x343)<=x344);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	uint64_t x347 = UINT64_MAX;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t63 = 6373;

	t63 = (((x345*x346)-x347)<=x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = INT8_MAX;
	int16_t x350 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	int8_t x352 = INT8_MIN;
	volatile int32_t t64 = 14;

	t64 = (((x349*x350)-x351)<=x352);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x354 = 61U;
	volatile int32_t t65 = 10457092;

	t65 = (((x353*x354)-x355)<=x356);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x358 = 31537;
	static volatile int32_t t66 = -31775852;

	t66 = (((x357*x358)-x359)<=x360);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x364 = 1;
	int32_t t67 = -31;

	t67 = (((x361*x362)-x363)<=x364);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x369 = -1;
	int16_t x370 = 440;
	uint32_t x371 = UINT32_MAX;
	uint16_t x372 = 3102U;
	int32_t t68 = 773;

	t68 = (((x369*x370)-x371)<=x372);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x373 = -16739079555LL;
	int16_t x375 = -16;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t69 = -44499;

	t69 = (((x373*x374)-x375)<=x376);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x381 = UINT8_MAX;
	volatile uint64_t x382 = 82045608434942285LLU;
	int8_t x383 = 3;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t70 = -187678132;

	t70 = (((x381*x382)-x383)<=x384);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x393 = 232694U;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 41925117008LLU;

	t71 = (((x393*x394)-x395)<=x396);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x397 = -1LL;
	int16_t x399 = 0;
	uint32_t x400 = 114133681U;
	volatile int32_t t72 = 968170513;

	t72 = (((x397*x398)-x399)<=x400);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x401 = 125113625U;
	uint64_t x402 = UINT64_MAX;
	uint8_t x403 = 1U;
	int32_t x404 = INT32_MIN;

	t73 = (((x401*x402)-x403)<=x404);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = UINT8_MAX;
	uint16_t x406 = UINT16_MAX;
	volatile int32_t x408 = -1;
	volatile int32_t t74 = -138723614;

	t74 = (((x405*x406)-x407)<=x408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x415 = -1;
	static volatile int32_t t75 = 972009;

	t75 = (((x413*x414)-x415)<=x416);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x417 = 43U;
	uint32_t x418 = UINT32_MAX;
	static volatile int32_t t76 = -1655926;

	t76 = (((x417*x418)-x419)<=x420);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x426 = UINT32_MAX;
	int64_t x427 = INT64_MIN;
	int32_t t77 = 433679529;

	t77 = (((x425*x426)-x427)<=x428);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x429 = 93U;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MIN;
	int32_t t78 = -1020;

	t78 = (((x429*x430)-x431)<=x432);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x433 = 19513U;
	int32_t x434 = INT32_MIN;
	int16_t x435 = -1;
	int64_t x436 = INT64_MIN;
	volatile int32_t t79 = -1;

	t79 = (((x433*x434)-x435)<=x436);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x441 = 645LL;
	int32_t x442 = 4;
	int64_t x443 = 4LL;
	int32_t x444 = INT32_MAX;

	t80 = (((x441*x442)-x443)<=x444);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x446 = -1;
	int64_t x447 = -1LL;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t81 = 142514953;

	t81 = (((x445*x446)-x447)<=x448);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x453 = -1;
	int16_t x455 = INT16_MAX;
	uint8_t x456 = UINT8_MAX;
	int32_t t82 = -24;

	t82 = (((x453*x454)-x455)<=x456);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x457 = -1;
	uint64_t x458 = 616451683434462LLU;
	volatile uint8_t x459 = 5U;
	volatile int32_t t83 = 65055839;

	t83 = (((x457*x458)-x459)<=x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x461 = 37199250956LLU;
	int32_t x462 = INT32_MAX;
	volatile int64_t x463 = -60431447798894751LL;
	static int16_t x464 = INT16_MAX;
	volatile int32_t t84 = 904809;

	t84 = (((x461*x462)-x463)<=x464);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x465 = 877032633U;
	int16_t x466 = -230;
	int16_t x467 = -2141;
	uint64_t x468 = UINT64_MAX;
	static int32_t t85 = 1199394;

	t85 = (((x465*x466)-x467)<=x468);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x481 = 3U;
	uint16_t x482 = UINT16_MAX;
	volatile int32_t t86 = -2101;

	t86 = (((x481*x482)-x483)<=x484);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x485 = 1;
	uint16_t x486 = UINT16_MAX;
	uint64_t x487 = 44074LLU;
	uint32_t x488 = UINT32_MAX;
	int32_t t87 = 32950817;

	t87 = (((x485*x486)-x487)<=x488);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x489 = INT16_MIN;
	volatile int16_t x490 = -1;
	static uint8_t x491 = UINT8_MAX;
	volatile int8_t x492 = INT8_MIN;
	static volatile int32_t t88 = -491383630;

	t88 = (((x489*x490)-x491)<=x492);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x501 = -1;
	static uint8_t x503 = 1U;
	uint32_t x504 = UINT32_MAX;
	volatile int32_t t89 = -9405;

	t89 = (((x501*x502)-x503)<=x504);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x506 = 21930167571190469LLU;
	static uint32_t x508 = 28U;
	static volatile int32_t t90 = -133365439;

	t90 = (((x505*x506)-x507)<=x508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x510 = INT16_MAX;
	int64_t x511 = 8552067443998331LL;
	volatile int32_t x512 = INT32_MIN;
	int32_t t91 = 147615647;

	t91 = (((x509*x510)-x511)<=x512);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x513 = INT8_MIN;
	uint64_t x514 = UINT64_MAX;
	static uint16_t x515 = 11U;
	static volatile uint64_t x516 = 258028LLU;
	int32_t t92 = -701123;

	t92 = (((x513*x514)-x515)<=x516);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x517 = 36U;
	volatile int16_t x518 = -1;
	uint8_t x519 = 44U;
	int16_t x520 = INT16_MIN;
	static int32_t t93 = 3;

	t93 = (((x517*x518)-x519)<=x520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MIN;
	uint64_t x524 = 1800803503LLU;
	volatile int32_t t94 = 1670;

	t94 = (((x521*x522)-x523)<=x524);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x525 = 90789014262LLU;
	uint8_t x526 = UINT8_MAX;
	int8_t x527 = INT8_MIN;
	int32_t x528 = -32;
	int32_t t95 = 5075752;

	t95 = (((x525*x526)-x527)<=x528);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x529 = UINT32_MAX;
	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MAX;
	static int16_t x532 = INT16_MIN;

	t96 = (((x529*x530)-x531)<=x532);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x537 = UINT64_MAX;
	uint8_t x538 = UINT8_MAX;
	uint64_t x539 = UINT64_MAX;
	int8_t x540 = INT8_MAX;
	volatile int32_t t97 = -47;

	t97 = (((x537*x538)-x539)<=x540);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x541 = -40;
	int32_t x542 = -2757395;
	volatile int16_t x543 = -102;
	uint8_t x544 = 7U;
	int32_t t98 = 118;

	t98 = (((x541*x542)-x543)<=x544);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x545 = INT32_MIN;
	uint32_t x547 = 118954852U;
	int8_t x548 = INT8_MAX;
	volatile int32_t t99 = 88048;

	t99 = (((x545*x546)-x547)<=x548);

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

