#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x2 = 138141LLU;
int64_t x35 = -1LL;
uint8_t x38 = 53U;
int32_t t6 = 79677;
int32_t x53 = INT32_MIN;
static uint64_t x54 = 12LLU;
int64_t t12 = -2533LL;
int16_t x82 = -1;
int16_t x83 = INT16_MIN;
uint32_t x93 = 7650026U;
static int8_t x130 = -21;
static uint64_t t23 = 38107056LLU;
uint8_t x133 = 3U;
uint32_t x150 = 100U;
volatile uint64_t t27 = 3520951937705197503LLU;
int8_t x157 = INT8_MIN;
int16_t x159 = INT16_MAX;
int64_t t28 = 4172323033509190891LL;
static int64_t t31 = 17831702464LL;
static uint64_t x181 = 681927361935LLU;
volatile uint64_t x191 = 2022467075216156299LLU;
uint64_t x198 = 3686931112LLU;
int32_t x202 = 3996;
uint64_t t37 = 19184269LLU;
int16_t x209 = -5370;
uint16_t x210 = 3U;
static volatile int16_t x212 = 3944;
int32_t x217 = -61291459;
int32_t x220 = 665;
volatile int64_t t41 = -2809205LL;
uint32_t x233 = UINT32_MAX;
int32_t x234 = -11755880;
int16_t x277 = 154;
int8_t x289 = -26;
volatile uint32_t x298 = 111168U;
int64_t x302 = -1LL;
volatile int64_t t53 = 1405796893249LL;
volatile int16_t x306 = 756;
uint64_t t54 = 180LLU;
int16_t x311 = 16;
volatile uint32_t t57 = 2746348U;
volatile uint16_t x326 = UINT16_MAX;
volatile uint16_t x327 = 21U;
uint8_t x342 = UINT8_MAX;
int16_t x349 = -1;
volatile int64_t x350 = -54540622LL;
int16_t x353 = 123;
int32_t x359 = -1;
int32_t x367 = -1;
int8_t x372 = INT8_MIN;
static uint64_t x382 = 1331209877092748LLU;
int32_t x393 = INT32_MAX;
uint32_t t72 = 49055U;
static int32_t x398 = -1;
uint8_t x415 = UINT8_MAX;
int16_t x424 = INT16_MIN;
int32_t x429 = INT32_MAX;
volatile int64_t x430 = INT64_MIN;
static uint64_t t79 = 9268035380379495LLU;
uint64_t x457 = UINT64_MAX;
uint8_t x461 = 14U;
static volatile int16_t x463 = INT16_MIN;
static uint16_t x464 = UINT16_MAX;
uint16_t x469 = 2543U;
int8_t x493 = -50;
int16_t x506 = -1;
static volatile int64_t x507 = INT64_MAX;
int16_t x516 = INT16_MIN;
static int16_t x520 = -1;
int32_t x523 = -1;
int64_t x524 = 27857202162875076LL;
static volatile int16_t x535 = INT16_MIN;
static volatile uint32_t t96 = 52654U;
volatile int16_t x547 = -80;
static volatile uint64_t t98 = 10416713228556LLU;
int64_t x559 = INT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	int64_t x3 = -8286841714LL;
	static int8_t x4 = 15;
	static uint64_t t0 = 18235413536851LLU;

	t0 = ((x1/x2)/(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 10176U;
	static uint64_t x10 = UINT64_MAX;
	uint64_t x11 = 69144622119145630LLU;
	volatile int64_t x12 = INT64_MAX;
	volatile uint64_t t1 = 4LLU;

	t1 = ((x9/x10)/(x11*x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x17 = INT64_MAX;
	int32_t x18 = INT32_MAX;
	int64_t x19 = 11875271LL;
	uint64_t x20 = UINT64_MAX;
	uint64_t t2 = 1766835620524244LLU;

	t2 = ((x17/x18)/(x19*x20));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	int64_t x22 = 61923LL;
	int16_t x23 = 89;
	static int16_t x24 = INT16_MAX;
	static int64_t t3 = 3113561LL;

	t3 = ((x21/x22)/(x23*x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = 1099;
	int8_t x26 = -1;
	volatile uint8_t x27 = 9U;
	volatile int16_t x28 = 47;
	volatile int32_t t4 = -33;

	t4 = ((x25/x26)/(x27*x28));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	static uint64_t x34 = 19LLU;
	static volatile int32_t x36 = -1;
	uint64_t t5 = 15295861644LLU;

	t5 = ((x33/x34)/(x35*x36));

	if (t5 != 970881267037344821LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int16_t x39 = -294;
	int8_t x40 = INT8_MIN;

	t6 = ((x37/x38)/(x39*x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x41 = INT32_MIN;
	uint8_t x42 = 1U;
	uint16_t x43 = 291U;
	int16_t x44 = -1903;
	volatile int32_t t7 = -13489437;

	t7 = ((x41/x42)/(x43*x44));

	if (t7 != 3877) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 190647LLU;
	volatile int16_t x47 = INT16_MIN;
	static int16_t x48 = INT16_MAX;
	volatile uint64_t t8 = 333897511LLU;

	t8 = ((x45/x46)/(x47*x48));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = -2844920878LL;
	uint32_t x50 = 614524704U;
	int64_t x51 = -1LL;
	volatile int16_t x52 = INT16_MAX;
	volatile int64_t t9 = -608571351LL;

	t9 = ((x49/x50)/(x51*x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x55 = INT16_MIN;
	volatile int64_t x56 = -1LL;
	uint64_t t10 = 232314765LLU;

	t10 = ((x53/x54)/(x55*x56));

	if (t10 != 46912496112981LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x57 = 0;
	int32_t x58 = INT32_MAX;
	volatile int64_t x59 = 62194255849985LL;
	int16_t x60 = -14400;
	volatile int64_t t11 = 1532653231687LL;

	t11 = ((x57/x58)/(x59*x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MIN;
	int8_t x62 = -3;
	static int16_t x63 = 337;
	int16_t x64 = INT16_MAX;

	t12 = ((x61/x62)/(x63*x64));

	if (t12 != 278420936604LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MAX;
	uint8_t x66 = UINT8_MAX;
	static uint64_t x67 = 1807005035LLU;
	uint8_t x68 = 114U;
	uint64_t t13 = 256843980LLU;

	t13 = ((x65/x66)/(x67*x68));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x77 = -60882943210LL;
	int16_t x78 = -1;
	uint64_t x79 = 1017LLU;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t14 = 804473517402367LLU;

	t14 = ((x77/x78)/(x79*x80));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x81 = 0U;
	int8_t x84 = -1;
	volatile int32_t t15 = 442909;

	t15 = ((x81/x82)/(x83*x84));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x85 = 111U;
	static volatile int8_t x86 = -6;
	uint64_t x87 = 60306LLU;
	int32_t x88 = -1;
	uint64_t t16 = 1LLU;

	t16 = ((x85/x86)/(x87*x88));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x89 = 6420LL;
	uint64_t x90 = 7LLU;
	uint8_t x91 = 10U;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t17 = 2000805LLU;

	t17 = ((x89/x90)/(x91*x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -1LL;
	int16_t x96 = 7;
	volatile int64_t t18 = -158983069LL;

	t18 = ((x93/x94)/(x95*x96));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	volatile int16_t x106 = INT16_MIN;
	static volatile uint16_t x107 = UINT16_MAX;
	volatile int8_t x108 = -58;
	volatile int32_t t19 = -12;

	t19 = ((x105/x106)/(x107*x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x117 = 2038942588223643423LL;
	uint8_t x118 = 1U;
	uint16_t x119 = 23547U;
	int32_t x120 = -16;
	static volatile int64_t t20 = 1779365LL;

	t20 = ((x117/x118)/(x119*x120));

	if (t20 != -5411895857815LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x121 = 986U;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = -13162LL;
	int64_t t21 = 538166LL;

	t21 = ((x121/x122)/(x123*x124));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	volatile uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t22 = 44902105786LLU;

	t22 = ((x125/x126)/(x127*x128));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x129 = 10025802219139LLU;
	int64_t x131 = -1LL;
	int16_t x132 = INT16_MIN;

	t23 = ((x129/x130)/(x131*x132));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x134 = INT16_MIN;
	static uint16_t x135 = 13275U;
	uint16_t x136 = 2036U;
	volatile int32_t t24 = 35976527;

	t24 = ((x133/x134)/(x135*x136));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MIN;
	static volatile uint8_t x138 = 2U;
	int8_t x139 = 12;
	int16_t x140 = INT16_MAX;
	int64_t t25 = 92875795451LL;

	t25 = ((x137/x138)/(x139*x140));

	if (t25 != -11728481954475LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x145 = 1LL;
	uint16_t x146 = UINT16_MAX;
	static volatile uint16_t x147 = 21U;
	uint16_t x148 = UINT16_MAX;
	int64_t t26 = -37LL;

	t26 = ((x145/x146)/(x147*x148));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x149 = INT16_MIN;
	uint8_t x151 = UINT8_MAX;
	volatile uint64_t x152 = 2253754249340436365LLU;

	t27 = ((x149/x150)/(x151*x152));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x158 = INT64_MIN;
	uint8_t x160 = 1U;

	t28 = ((x157/x158)/(x159*x160));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -1;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = 1208;
	int32_t x164 = -1;
	int32_t t29 = 363200659;

	t29 = ((x161/x162)/(x163*x164));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int64_t x165 = 2781562039506977LL;
	static int16_t x166 = 6048;
	static int8_t x167 = INT8_MIN;
	static uint32_t x168 = 379U;
	volatile int64_t t30 = -264431491531857LL;

	t30 = ((x165/x166)/(x167*x168));

	if (t30 != 107LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = 54602LL;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 59834584U;
	int32_t x172 = INT32_MAX;

	t31 = ((x169/x170)/(x171*x172));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 0U;
	static int32_t x174 = -1;
	int8_t x175 = -1;
	static uint8_t x176 = UINT8_MAX;
	uint32_t t32 = 29969574U;

	t32 = ((x173/x174)/(x175*x176));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x182 = -510128;
	volatile uint8_t x183 = UINT8_MAX;
	int8_t x184 = -1;
	static volatile uint64_t t33 = 260900186LLU;

	t33 = ((x181/x182)/(x183*x184));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = -1;
	int8_t x192 = -1;
	volatile uint64_t t34 = 15189LLU;

	t34 = ((x189/x190)/(x191*x192));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = INT64_MIN;
	uint64_t x199 = 13LLU;
	volatile uint64_t x200 = 39648674437LLU;
	uint64_t t35 = 310433023361983LLU;

	t35 = ((x197/x198)/(x199*x200));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x201 = 1U;
	uint32_t x203 = UINT32_MAX;
	volatile uint8_t x204 = 3U;
	volatile uint32_t t36 = 54339336U;

	t36 = ((x201/x202)/(x203*x204));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x205 = INT32_MIN;
	volatile uint64_t x206 = 1761839121862356206LLU;
	int8_t x207 = -2;
	uint8_t x208 = UINT8_MAX;

	t37 = ((x205/x206)/(x207*x208));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x211 = 1448U;
	uint32_t t38 = 274563U;

	t38 = ((x209/x210)/(x211*x212));

	if (t38 != 752U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x218 = 5001U;
	uint32_t x219 = UINT32_MAX;
	volatile uint32_t t39 = 4295U;

	t39 = ((x217/x218)/(x219*x220));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	uint64_t x223 = 1440LLU;
	uint8_t x224 = 11U;
	uint64_t t40 = 14886904796LLU;

	t40 = ((x221/x222)/(x223*x224));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x225 = -263786186940LL;
	int32_t x226 = 562667235;
	uint32_t x227 = UINT32_MAX;
	volatile uint32_t x228 = 16694U;

	t41 = ((x225/x226)/(x227*x228));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x235 = 5U;
	int8_t x236 = INT8_MIN;
	uint32_t t42 = 36759U;

	t42 = ((x233/x234)/(x235*x236));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x241 = INT8_MIN;
	volatile uint16_t x242 = 4U;
	int16_t x243 = -15741;
	static volatile uint64_t x244 = 15LLU;
	volatile uint64_t t43 = 1872194LLU;

	t43 = ((x241/x242)/(x243*x244));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x257 = 36U;
	int64_t x258 = -7LL;
	volatile int8_t x259 = INT8_MIN;
	int8_t x260 = 31;
	int64_t t44 = -21631359LL;

	t44 = ((x257/x258)/(x259*x260));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x261 = -1;
	volatile uint8_t x262 = 23U;
	int16_t x263 = -873;
	int16_t x264 = INT16_MIN;
	int32_t t45 = 0;

	t45 = ((x261/x262)/(x263*x264));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x265 = 1U;
	int64_t x266 = 2772791804LL;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	static volatile int64_t t46 = -484566821813489LL;

	t46 = ((x265/x266)/(x267*x268));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x269 = -73;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 48581LLU;
	int32_t x272 = INT32_MAX;
	uint64_t t47 = 1243610827138174LLU;

	t47 = ((x269/x270)/(x271*x272));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 47U;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t48 = 78354273U;

	t48 = ((x277/x278)/(x279*x280));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x285 = 11U;
	static int32_t x286 = INT32_MIN;
	static uint16_t x287 = 1598U;
	uint32_t x288 = UINT32_MAX;
	uint32_t t49 = 226720U;

	t49 = ((x285/x286)/(x287*x288));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x290 = -475;
	int16_t x291 = -5914;
	int16_t x292 = -1;
	int32_t t50 = 0;

	t50 = ((x289/x290)/(x291*x292));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x293 = 1381;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = UINT32_MAX;
	int16_t x296 = INT16_MIN;
	uint32_t t51 = 7U;

	t51 = ((x293/x294)/(x295*x296));

	if (t51 != 131071U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = INT16_MIN;
	int32_t x299 = 3;
	volatile uint16_t x300 = 31U;
	static volatile uint32_t t52 = 228401699U;

	t52 = ((x297/x298)/(x299*x300));

	if (t52 != 415U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x301 = INT8_MAX;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;

	t53 = ((x301/x302)/(x303*x304));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x305 = 63667541585216LLU;
	uint32_t x307 = UINT32_MAX;
	int16_t x308 = -1;

	t54 = ((x305/x306)/(x307*x308));

	if (t54 != 84216324848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x309 = UINT64_MAX;
	static int32_t x310 = INT32_MIN;
	int32_t x312 = 1;
	uint64_t t55 = 276887395129LLU;

	t55 = ((x309/x310)/(x311*x312));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x313 = 1U;
	uint32_t x314 = UINT32_MAX;
	static uint32_t x315 = 5U;
	int8_t x316 = INT8_MIN;
	static uint32_t t56 = 15661901U;

	t56 = ((x313/x314)/(x315*x316));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x317 = UINT32_MAX;
	static int8_t x318 = -1;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = -11;

	t57 = ((x317/x318)/(x319*x320));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = -1;
	volatile uint32_t x328 = UINT32_MAX;
	static uint32_t t58 = 1308U;

	t58 = ((x325/x326)/(x327*x328));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = 1;
	uint32_t x335 = UINT32_MAX;
	uint16_t x336 = UINT16_MAX;
	volatile uint32_t t59 = 4804U;

	t59 = ((x333/x334)/(x335*x336));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x337 = 376280886382586LLU;
	int64_t x338 = -1LL;
	uint32_t x339 = 2699U;
	int16_t x340 = 1;
	volatile uint64_t t60 = 11490262LLU;

	t60 = ((x337/x338)/(x339*x340));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x341 = 23;
	uint8_t x343 = 2U;
	int64_t x344 = -1LL;
	int64_t t61 = -672088712098141LL;

	t61 = ((x341/x342)/(x343*x344));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x345 = UINT8_MAX;
	static int64_t x346 = -568877231902793631LL;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -1LL;
	volatile int64_t t62 = -3399941300107406465LL;

	t62 = ((x345/x346)/(x347*x348));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x351 = -1LL;
	int16_t x352 = -1;
	int64_t t63 = -3615104325LL;

	t63 = ((x349/x350)/(x351*x352));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x354 = 11;
	uint32_t x355 = UINT32_MAX;
	int16_t x356 = -6686;
	volatile uint32_t t64 = 919U;

	t64 = ((x353/x354)/(x355*x356));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x357 = 215784828654574LLU;
	static int32_t x358 = INT32_MIN;
	uint32_t x360 = UINT32_MAX;
	static uint64_t t65 = 95253460LLU;

	t65 = ((x357/x358)/(x359*x360));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = INT64_MAX;
	volatile int32_t x362 = INT32_MIN;
	int32_t x363 = -175482;
	static volatile int8_t x364 = INT8_MIN;
	int64_t t66 = 319540036001998233LL;

	t66 = ((x361/x362)/(x363*x364));

	if (t66 != -191LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	int32_t x368 = 872780;
	volatile uint32_t t67 = 1467617U;

	t67 = ((x365/x366)/(x367*x368));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x369 = 24458286398LLU;
	static uint64_t x370 = 160LLU;
	int64_t x371 = 163LL;
	volatile uint64_t t68 = 101319419110LLU;

	t68 = ((x369/x370)/(x371*x372));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = -1;
	int8_t x375 = -1;
	int32_t x376 = -1;
	int32_t t69 = 27939242;

	t69 = ((x373/x374)/(x375*x376));

	if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x377 = INT16_MAX;
	uint32_t x378 = 1866761U;
	volatile int16_t x379 = 4;
	static int64_t x380 = 21269996276892LL;
	int64_t t70 = 89861022228801LL;

	t70 = ((x377/x378)/(x379*x380));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x381 = 406U;
	static int16_t x383 = INT16_MIN;
	int64_t x384 = 361948056LL;
	static volatile uint64_t t71 = 1502366LLU;

	t71 = ((x381/x382)/(x383*x384));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x394 = 1;
	int8_t x395 = -13;
	uint32_t x396 = UINT32_MAX;

	t72 = ((x393/x394)/(x395*x396));

	if (t72 != 165191049U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x397 = INT8_MAX;
	int32_t x399 = -1;
	static int32_t x400 = -1;
	static volatile int32_t t73 = 158908026;

	t73 = ((x397/x398)/(x399*x400));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x401 = 11U;
	uint16_t x402 = UINT16_MAX;
	volatile uint64_t x403 = 3960630LLU;
	int16_t x404 = INT16_MIN;
	uint64_t t74 = 301989LLU;

	t74 = ((x401/x402)/(x403*x404));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x405 = -6768617;
	int64_t x406 = 27296410962274LL;
	int32_t x407 = -1;
	int64_t x408 = -1LL;
	int64_t t75 = 241366572LL;

	t75 = ((x405/x406)/(x407*x408));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x409 = 31;
	uint8_t x410 = 4U;
	uint8_t x411 = 5U;
	int16_t x412 = -1;
	static int32_t t76 = -362682197;

	t76 = ((x409/x410)/(x411*x412));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x413 = INT16_MIN;
	static uint32_t x414 = 20272U;
	int32_t x416 = 368593;
	uint32_t t77 = 788625722U;

	t77 = ((x413/x414)/(x415*x416));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = INT16_MIN;
	int32_t t78 = -45510173;

	t78 = ((x421/x422)/(x423*x424));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x431 = INT32_MIN;
	uint64_t x432 = 427061529867LLU;

	t79 = ((x429/x430)/(x431*x432));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x433 = INT32_MAX;
	volatile int32_t x434 = -3208;
	int32_t x435 = -1;
	volatile int8_t x436 = INT8_MIN;
	static volatile int32_t t80 = -159;

	t80 = ((x433/x434)/(x435*x436));

	if (t80 != -5229) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x441 = 216568533588643LLU;
	int8_t x442 = INT8_MIN;
	int64_t x443 = 95113076009419LL;
	int16_t x444 = INT16_MIN;
	volatile uint64_t t81 = 47444860105898696LLU;

	t81 = ((x441/x442)/(x443*x444));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x458 = 8140276LL;
	volatile int8_t x459 = 1;
	static volatile uint64_t x460 = 747554555498750095LLU;
	static volatile uint64_t t82 = 32648806310462488LLU;

	t82 = ((x457/x458)/(x459*x460));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x462 = INT8_MIN;
	static int32_t t83 = -90;

	t83 = ((x461/x462)/(x463*x464));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x465 = INT64_MAX;
	uint32_t x466 = 9U;
	int32_t x467 = -1;
	uint32_t x468 = 917127U;
	volatile int64_t t84 = -667092573662419755LL;

	t84 = ((x465/x466)/(x467*x468));

	if (t84 != 238660256LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x470 = -1;
	int16_t x471 = INT16_MIN;
	int16_t x472 = 96;
	int32_t t85 = -464;

	t85 = ((x469/x470)/(x471*x472));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x477 = 57LLU;
	static volatile int8_t x478 = INT8_MAX;
	int8_t x479 = INT8_MIN;
	int16_t x480 = -1;
	uint64_t t86 = 27627258LLU;

	t86 = ((x477/x478)/(x479*x480));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x489 = -1;
	int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	uint64_t x492 = UINT64_MAX;
	uint64_t t87 = 32653670978234LLU;

	t87 = ((x489/x490)/(x491*x492));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x494 = 16U;
	static volatile int8_t x495 = -1;
	static int64_t x496 = 4878812LL;
	int64_t t88 = 4543099968407788LL;

	t88 = ((x493/x494)/(x495*x496));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x501 = INT32_MIN;
	static uint8_t x502 = 10U;
	static int16_t x503 = INT16_MIN;
	uint64_t x504 = 85LLU;
	static volatile uint64_t t89 = 47018627913LLU;

	t89 = ((x501/x502)/(x503*x504));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = -49135044;
	static int16_t x508 = -1;
	volatile int64_t t90 = -3009133785LL;

	t90 = ((x505/x506)/(x507*x508));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x509 = 1;
	uint64_t x510 = 936LLU;
	int8_t x511 = 21;
	int8_t x512 = 1;
	volatile uint64_t t91 = 761908800LLU;

	t91 = ((x509/x510)/(x511*x512));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x513 = 37U;
	volatile int16_t x514 = -1;
	int64_t x515 = -5LL;
	static volatile int64_t t92 = 0LL;

	t92 = ((x513/x514)/(x515*x516));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x517 = -167;
	volatile int32_t x518 = INT32_MAX;
	int8_t x519 = INT8_MIN;
	int32_t t93 = 18;

	t93 = ((x517/x518)/(x519*x520));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x521 = INT64_MAX;
	volatile uint64_t x522 = 197876LLU;
	volatile uint64_t t94 = 28811035406LLU;

	t94 = ((x521/x522)/(x523*x524));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x529 = -3;
	static uint8_t x530 = UINT8_MAX;
	int16_t x531 = -1;
	int64_t x532 = INT64_MAX;
	int64_t t95 = 307LL;

	t95 = ((x529/x530)/(x531*x532));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x533 = -1;
	uint16_t x534 = UINT16_MAX;
	uint32_t x536 = UINT32_MAX;

	t96 = ((x533/x534)/(x535*x536));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x545 = 84528U;
	static uint16_t x546 = UINT16_MAX;
	int8_t x548 = INT8_MIN;
	volatile uint32_t t97 = 1U;

	t97 = ((x545/x546)/(x547*x548));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x549 = 24310266616479LLU;
	uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MIN;
	uint64_t x552 = 2955200084173LLU;

	t98 = ((x549/x550)/(x551*x552));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x557 = UINT8_MAX;
	static int32_t x558 = 1;
	int32_t x560 = -1;
	static volatile int64_t t99 = -3398479253683277LL;

	t99 = ((x557/x558)/(x559*x560));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

