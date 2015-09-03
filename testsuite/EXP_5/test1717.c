#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = -483168;
uint8_t x8 = UINT8_MAX;
int32_t x14 = -10;
uint8_t x19 = UINT8_MAX;
uint64_t x20 = 24340987269LLU;
uint8_t x29 = UINT8_MAX;
static int16_t x30 = -1;
int8_t x47 = -34;
volatile uint8_t x53 = 6U;
static uint32_t x61 = UINT32_MAX;
int8_t x62 = -27;
int64_t t8 = 18723575050091875LL;
uint8_t x72 = 1U;
volatile uint16_t x87 = 7U;
static volatile int64_t x92 = 20465109LL;
int16_t x100 = -1;
static uint64_t x104 = 1092722771110LLU;
uint64_t x111 = UINT64_MAX;
volatile uint32_t x124 = 2000U;
uint16_t x129 = 1U;
int8_t x130 = INT8_MAX;
uint8_t x134 = 3U;
volatile uint8_t x136 = UINT8_MAX;
int32_t x139 = 4135;
volatile uint64_t t22 = 3861723036517657681LLU;
static uint16_t x141 = 32U;
volatile uint64_t x143 = 1064046512035LLU;
volatile uint64_t t23 = 14633LLU;
int32_t x163 = INT32_MIN;
int64_t x164 = 0LL;
static volatile int64_t t27 = 6490LL;
int8_t x172 = 0;
static uint32_t x185 = UINT32_MAX;
volatile int64_t t33 = 3066725680611LL;
int32_t x191 = INT32_MIN;
int64_t t34 = 5914965LL;
volatile uint32_t t35 = 65U;
static int8_t x199 = -1;
int32_t x210 = -1;
int8_t x212 = -1;
volatile int64_t x213 = -1LL;
uint8_t x221 = 33U;
uint8_t x237 = 52U;
uint16_t x241 = UINT16_MAX;
volatile int32_t t47 = -80374042;
volatile int8_t x249 = INT8_MIN;
int32_t t48 = -134724725;
volatile int16_t x253 = -1;
volatile int32_t x255 = -1;
uint8_t x261 = UINT8_MAX;
int8_t x262 = 2;
static volatile int8_t x263 = INT8_MIN;
int8_t x265 = -44;
int64_t t51 = 13358516LL;
int8_t x274 = -1;
volatile uint64_t t52 = 25103559628173LLU;
uint32_t x281 = 0U;
int64_t x286 = INT64_MIN;
static uint64_t x288 = 1752217933799089LLU;
uint64_t t55 = 404724592744713077LLU;
volatile int64_t x291 = INT64_MAX;
volatile int16_t x292 = -1;
uint64_t t56 = 472LLU;
volatile int32_t t58 = 37;
uint8_t x304 = UINT8_MAX;
int32_t x310 = -139453202;
int8_t x314 = INT8_MAX;
static int8_t x317 = -1;
volatile int32_t x325 = -224036765;
volatile uint8_t x326 = UINT8_MAX;
static uint16_t x327 = UINT16_MAX;
int8_t x329 = -1;
int64_t x334 = 9008LL;
static int16_t x339 = INT16_MIN;
volatile int32_t t70 = -16;
int16_t x356 = INT16_MIN;
int64_t t71 = 643530149311544LL;
uint32_t x364 = UINT32_MAX;
static int64_t t72 = -2910494346055241LL;
volatile int32_t t73 = -1921;
static int8_t x372 = INT8_MAX;
uint32_t x375 = 29910596U;
static int16_t x385 = INT16_MIN;
uint8_t x387 = 96U;
volatile uint32_t t78 = 334541U;
uint64_t t79 = 38302030542LLU;
static volatile int64_t x393 = -1LL;
static int64_t t80 = 385977689LL;
static int16_t x397 = 1;
static volatile int32_t t81 = -204032;
uint64_t x402 = 128860804545190561LLU;
int32_t x406 = INT32_MIN;
int64_t x414 = -1905785788LL;
int32_t x416 = INT32_MIN;
uint16_t x419 = 99U;
int32_t t87 = -191486771;
static int8_t x434 = 0;
uint64_t x437 = UINT64_MAX;
uint16_t x443 = 2U;
int8_t x451 = INT8_MIN;
uint64_t t93 = 4321343053345660809LLU;
int64_t x459 = INT64_MIN;
static int64_t x460 = -2132075185392LL;
volatile int8_t x467 = -1;
volatile uint8_t x471 = 76U;
int16_t x472 = -6002;
volatile uint64_t x485 = 34007252987484LLU;
int64_t x491 = INT64_MIN;


void f0(void) {
	int32_t x1 = -513;
	uint8_t x2 = 2U;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -772344;

	t0 = (x1+((x2&x3)*x4));

	if (t0 != -513) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = UINT32_MAX;
	static uint16_t x6 = UINT16_MAX;
	static int16_t x7 = INT16_MIN;
	volatile uint32_t t1 = 79432387U;

	t1 = (x5+((x6&x7)*x8));

	if (t1 != 8355839U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x13 = 32732U;
	volatile int16_t x15 = INT16_MIN;
	int8_t x16 = -36;
	volatile uint32_t t2 = 96160375U;

	t2 = (x13+((x14&x15)*x16));

	if (t2 != 1212380U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = INT64_MIN;
	volatile uint64_t t3 = 230LLU;

	t3 = (x17+((x18&x19)*x20));

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	static volatile int16_t x22 = INT16_MAX;
	int16_t x23 = INT16_MIN;
	int16_t x24 = -2;
	volatile int32_t t4 = 117678;

	t4 = (x21+((x22&x23)*x24));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x31 = 0;
	int16_t x32 = INT16_MAX;
	static int32_t t5 = 1;

	t5 = (x29+((x30&x31)*x32));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x45 = UINT16_MAX;
	uint32_t x46 = 53U;
	int16_t x48 = -2815;
	static volatile uint32_t t6 = 37856U;

	t6 = (x45+((x46&x47)*x48));

	if (t6 != 9235U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x54 = INT32_MIN;
	volatile int64_t x55 = -254LL;
	int32_t x56 = -3;
	volatile int64_t t7 = -34261412LL;

	t7 = (x53+((x54&x55)*x56));

	if (t7 != 6442450950LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x63 = 52724047926668LL;
	int16_t x64 = 2967;

	t8 = (x61+((x62&x63)*x64));

	if (t8 != 156432254493367515LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x69 = 50383LLU;
	volatile int32_t x70 = -263207541;
	int32_t x71 = -1;
	volatile uint64_t t9 = 10082LLU;

	t9 = (x69+((x70&x71)*x72));

	if (t9 != 18446744073446394458LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x73 = INT8_MAX;
	uint64_t x74 = 649211LLU;
	int32_t x75 = 326826611;
	int8_t x76 = 57;
	static uint64_t t10 = 131647205277169129LLU;

	t10 = (x73+((x74&x75)*x76));

	if (t10 != 33188890LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	int32_t x79 = -1100;
	int64_t x80 = -1LL;
	volatile int64_t t11 = -34702LL;

	t11 = (x77+((x78&x79)*x80));

	if (t11 != -2147482496LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = UINT16_MAX;
	int32_t x86 = INT32_MIN;
	uint16_t x88 = 8873U;
	volatile int32_t t12 = 0;

	t12 = (x85+((x86&x87)*x88));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x89 = 1013910824989LLU;
	uint16_t x90 = 0U;
	uint16_t x91 = UINT16_MAX;
	volatile uint64_t t13 = 103680413365285438LLU;

	t13 = (x89+((x90&x91)*x92));

	if (t13 != 1013910824989LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = 65;
	volatile int32_t x95 = INT32_MAX;
	static uint32_t x96 = UINT32_MAX;
	int64_t t14 = 1254235845LL;

	t14 = (x93+((x94&x95)*x96));

	if (t14 != -9223372032559808577LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x97 = 3552032LLU;
	uint8_t x98 = 15U;
	int8_t x99 = -10;
	uint64_t t15 = 6328598066287LLU;

	t15 = (x97+((x98&x99)*x100));

	if (t15 != 3552026LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	int16_t x103 = 860;
	volatile uint64_t t16 = 132056529477221434LLU;

	t16 = (x101+((x102&x103)*x104));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x105 = -4226;
	static volatile int64_t x106 = INT64_MIN;
	uint16_t x107 = UINT16_MAX;
	volatile int8_t x108 = -1;
	int64_t t17 = 386476LL;

	t17 = (x105+((x106&x107)*x108));

	if (t17 != -4226LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x109 = 1220269;
	int64_t x110 = INT64_MAX;
	int64_t x112 = INT64_MAX;
	uint64_t t18 = 4LLU;

	t18 = (x109+((x110&x111)*x112));

	if (t18 != 1220270LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x121 = 646LLU;
	volatile uint32_t x122 = 5753534U;
	int16_t x123 = INT16_MAX;
	uint64_t t19 = 99LLU;

	t19 = (x121+((x122&x123)*x124));

	if (t19 != 38268646LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x131 = INT8_MAX;
	volatile int64_t x132 = -1LL;
	static volatile int64_t t20 = -154292201940043LL;

	t20 = (x129+((x130&x131)*x132));

	if (t20 != -126LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x133 = 1147LLU;
	int8_t x135 = -1;
	static uint64_t t21 = 37LLU;

	t21 = (x133+((x134&x135)*x136));

	if (t21 != 1912LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x137 = 2U;
	volatile uint8_t x138 = 17U;
	volatile uint64_t x140 = 2963LLU;

	t22 = (x137+((x138&x139)*x140));

	if (t22 != 2965LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x142 = INT64_MIN;
	int16_t x144 = -6;

	t23 = (x141+((x142&x143)*x144));

	if (t23 != 32LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x149 = INT8_MIN;
	int32_t x150 = -1;
	static uint32_t x151 = 0U;
	int64_t x152 = -28220667161LL;
	volatile int64_t t24 = -132828578LL;

	t24 = (x149+((x150&x151)*x152));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x153 = INT32_MIN;
	volatile int64_t x154 = -61852737812649696LL;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int32_t x156 = -1;
	int64_t t25 = 66887824937817428LL;

	t25 = (x153+((x154&x155)*x156));

	if (t25 != -2147483680LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 2U;
	int8_t x158 = 0;
	uint16_t x159 = 1489U;
	volatile uint64_t x160 = 443220LLU;
	uint64_t t26 = 426109747505087LLU;

	t26 = (x157+((x158&x159)*x160));

	if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x161 = 616U;
	volatile int32_t x162 = 1596;

	t27 = (x161+((x162&x163)*x164));

	if (t27 != 616LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x165 = INT64_MAX;
	int16_t x166 = -1;
	uint64_t x167 = 32511506713002LLU;
	static int32_t x168 = -11;
	uint64_t t28 = 1872433LLU;

	t28 = (x165+((x166&x167)*x168));

	if (t28 != 9223014410280932785LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x169 = -1;
	volatile int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	volatile int64_t t29 = -3892852437336377206LL;

	t29 = (x169+((x170&x171)*x172));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x173 = 472349485127LL;
	int8_t x174 = -1;
	volatile uint8_t x175 = 3U;
	int16_t x176 = 4;
	int64_t t30 = -39377109LL;

	t30 = (x173+((x174&x175)*x176));

	if (t30 != 472349485139LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x177 = 3;
	int16_t x178 = INT16_MAX;
	int64_t x179 = -1363657585LL;
	volatile int16_t x180 = INT16_MIN;
	static int64_t t31 = -1257726573LL;

	t31 = (x177+((x178&x179)*x180));

	if (t31 != -508002301LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x181 = 13687U;
	int16_t x182 = 3;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	static volatile int32_t t32 = -6;

	t32 = (x181+((x182&x183)*x184));

	if (t32 != 14452) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x186 = 18;
	volatile uint32_t x187 = 6341137U;
	volatile int64_t x188 = -1LL;

	t33 = (x185+((x186&x187)*x188));

	if (t33 != 4294967279LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x189 = -1;
	volatile uint32_t x190 = 58921U;
	int64_t x192 = 56715345LL;

	t34 = (x189+((x190&x191)*x192));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = -1;
	int16_t x195 = 15;
	int8_t x196 = INT8_MIN;

	t35 = (x193+((x194&x195)*x196));

	if (t35 != 4294965375U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = UINT8_MAX;
	static uint64_t x198 = 139LLU;
	volatile int64_t x200 = -1LL;
	static uint64_t t36 = 64094957432409LLU;

	t36 = (x197+((x198&x199)*x200));

	if (t36 != 116LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x205 = -1;
	int16_t x206 = INT16_MIN;
	int16_t x207 = INT16_MIN;
	static int32_t x208 = -1;
	volatile int32_t t37 = 1;

	t37 = (x205+((x206&x207)*x208));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	volatile uint64_t t38 = 42237729LLU;

	t38 = (x209+((x210&x211)*x212));

	if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x214 = INT8_MIN;
	int32_t x215 = 35161;
	static volatile uint8_t x216 = 2U;
	static int64_t t39 = -130349834366LL;

	t39 = (x213+((x214&x215)*x216));

	if (t39 != 70143LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x217 = INT16_MIN;
	uint32_t x218 = 2352U;
	static uint32_t x219 = 74598U;
	static int8_t x220 = INT8_MIN;
	uint32_t t40 = 9890554U;

	t40 = (x217+((x218&x219)*x220));

	if (t40 != 4294897664U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x222 = 460265U;
	int32_t x223 = INT32_MAX;
	uint64_t x224 = 4306025654668LLU;
	volatile uint64_t t41 = 3405LLU;

	t41 = (x221+((x222&x223)*x224));

	if (t41 != 1981912897945767053LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x225 = -4;
	static int64_t x226 = -1LL;
	int32_t x227 = INT32_MIN;
	static volatile uint32_t x228 = UINT32_MAX;
	volatile int64_t t42 = -152242398152LL;

	t42 = (x225+((x226&x227)*x228));

	if (t42 != -9223372034707292164LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = INT64_MAX;
	int64_t x230 = INT64_MIN;
	uint64_t x231 = 5LLU;
	int8_t x232 = INT8_MIN;
	static uint64_t t43 = 631368LLU;

	t43 = (x229+((x230&x231)*x232));

	if (t43 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -1;
	volatile uint8_t x234 = 6U;
	static int16_t x235 = 7;
	static uint32_t x236 = 616852U;
	uint32_t t44 = 416691U;

	t44 = (x233+((x234&x235)*x236));

	if (t44 != 3701111U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x238 = UINT16_MAX;
	static int8_t x239 = 44;
	uint16_t x240 = 3U;
	int32_t t45 = -98;

	t45 = (x237+((x238&x239)*x240));

	if (t45 != 184) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x242 = 7635335839219LLU;
	int32_t x243 = -1;
	volatile uint8_t x244 = UINT8_MAX;
	volatile uint64_t t46 = 4043856113109553LLU;

	t46 = (x241+((x242&x243)*x244));

	if (t46 != 1947010639066380LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 7250U;
	volatile int16_t x247 = -1;
	int16_t x248 = INT16_MIN;

	t47 = (x245+((x246&x247)*x248));

	if (t47 != -237600768) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x250 = INT32_MIN;
	int32_t x251 = 0;
	uint8_t x252 = 5U;

	t48 = (x249+((x250&x251)*x252));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x254 = 23346LLU;
	int16_t x256 = INT16_MIN;
	static uint64_t t49 = 59511543482714LLU;

	t49 = (x253+((x254&x255)*x256));

	if (t49 != 18446744072944549887LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x264 = INT32_MIN;
	int32_t t50 = 5299748;

	t50 = (x261+((x262&x263)*x264));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x266 = -1LL;
	uint32_t x267 = 22008U;
	int16_t x268 = INT16_MAX;

	t51 = (x265+((x266&x267)*x268));

	if (t51 != 721136092LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x273 = 1101238932441662061LLU;
	volatile uint32_t x275 = 3U;
	static int64_t x276 = 808838490LL;

	t52 = (x273+((x274&x275)*x276));

	if (t52 != 1101238934868177531LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x277 = 1U;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 1376U;
	int64_t x280 = 133745LL;
	volatile int64_t t53 = -1584931803492LL;

	t53 = (x277+((x278&x279)*x280));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x282 = INT16_MAX;
	static int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t54 = 29LLU;

	t54 = (x281+((x282&x283)*x284));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = 11233U;
	int32_t x287 = -1;

	t55 = (x285+((x286&x287)*x288));

	if (t55 != 9223372036854787041LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x289 = 15467U;
	uint64_t x290 = 3133116709531879241LLU;

	t56 = (x289+((x290&x291)*x292));

	if (t56 != 15313627364177687842LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x293 = INT8_MAX;
	volatile uint16_t x294 = 6U;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = -52538310770LL;
	int64_t t57 = 8150797549335682LL;

	t57 = (x293+((x294&x295)*x296));

	if (t57 != -315229864493LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x297 = 10127U;
	uint8_t x298 = 12U;
	int8_t x299 = -1;
	int32_t x300 = 151895;

	t58 = (x297+((x298&x299)*x300));

	if (t58 != 1832867) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x301 = 1;
	static int32_t x302 = 299;
	volatile int16_t x303 = -1;
	static volatile int32_t t59 = 504555762;

	t59 = (x301+((x302&x303)*x304));

	if (t59 != 76246) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 436529082077681109LLU;
	static uint16_t x307 = 121U;
	uint64_t x308 = 25727898577LLU;
	uint64_t t60 = 145LLU;

	t60 = (x305+((x306&x307)*x308));

	if (t60 != 2083959784609LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x309 = -1;
	static uint16_t x311 = UINT16_MAX;
	volatile int16_t x312 = -1;
	static volatile int32_t t61 = -14;

	t61 = (x309+((x310&x311)*x312));

	if (t61 != -7407) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x313 = 53;
	int32_t x315 = -1;
	uint16_t x316 = 416U;
	int32_t t62 = 20;

	t62 = (x313+((x314&x315)*x316));

	if (t62 != 52885) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MAX;
	static int16_t x320 = -1;
	uint64_t t63 = 16045605732LLU;

	t63 = (x317+((x318&x319)*x320));

	if (t63 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = UINT64_MAX;
	static uint8_t x322 = UINT8_MAX;
	uint64_t x323 = 702526240826225LLU;
	int8_t x324 = INT8_MIN;
	volatile uint64_t t64 = 3333996454LLU;

	t64 = (x321+((x322&x323)*x324));

	if (t64 != 18446744073709537151LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x328 = UINT16_MAX;
	volatile int32_t t65 = 274273970;

	t65 = (x325+((x326&x327)*x328));

	if (t65 != -207325340) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x330 = 167913474U;
	int16_t x331 = INT16_MIN;
	volatile int8_t x332 = INT8_MIN;
	uint32_t t66 = 3891U;

	t66 = (x329+((x330&x331)*x332));

	if (t66 != 4278190079U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int32_t x335 = INT32_MAX;
	static volatile int32_t x336 = INT32_MIN;
	uint64_t t67 = 47LLU;

	t67 = (x333+((x334&x335)*x336));

	if (t67 != 18446724729176850431LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x337 = INT64_MIN;
	uint64_t x338 = 954167101379LLU;
	int64_t x340 = -239599LL;
	volatile uint64_t t68 = 26396407947619646LLU;

	t68 = (x337+((x338&x339)*x340));

	if (t68 != 8994754554007552000LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MIN;
	static uint16_t x346 = 3U;
	int32_t x347 = -27;
	int16_t x348 = INT16_MAX;
	static volatile int32_t t69 = 57484597;

	t69 = (x345+((x346&x347)*x348));

	if (t69 != -2147450881) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x349 = -1;
	uint8_t x350 = 5U;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = 28160U;

	t70 = (x349+((x350&x351)*x352));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x353 = 47223622;
	static int64_t x354 = -247LL;
	int16_t x355 = -1;

	t71 = (x353+((x354&x355)*x356));

	if (t71 != 55317318LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x361 = -1LL;
	int8_t x362 = INT8_MAX;
	static uint8_t x363 = UINT8_MAX;

	t72 = (x361+((x362&x363)*x364));

	if (t72 != 4294967168LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x365 = -1;
	int32_t x366 = -1;
	int16_t x367 = 3;
	int8_t x368 = INT8_MIN;

	t73 = (x365+((x366&x367)*x368));

	if (t73 != -385) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = 0;
	static int64_t x370 = INT64_MIN;
	uint64_t x371 = 172LLU;
	volatile uint64_t t74 = 77431817LLU;

	t74 = (x369+((x370&x371)*x372));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = 3332787LLU;
	uint8_t x376 = 44U;
	volatile uint64_t t75 = 19713583LLU;

	t75 = (x373+((x374&x375)*x376));

	if (t75 != 743296LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x377 = 33U;
	static int64_t x378 = -6LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	volatile int64_t t76 = 279294550LL;

	t76 = (x377+((x378&x379)*x380));

	if (t76 != 70368744177697LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = 1;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = 3272U;
	uint16_t x384 = 35U;
	int32_t t77 = 3;

	t77 = (x381+((x382&x383)*x384));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x386 = 303462032U;
	int32_t x388 = INT32_MIN;

	t78 = (x385+((x386&x387)*x388));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x389 = 124750LLU;
	int32_t x390 = INT32_MIN;
	int8_t x391 = 1;
	volatile int64_t x392 = -1LL;

	t79 = (x389+((x390&x391)*x392));

	if (t79 != 124750LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x394 = -3;
	int8_t x395 = INT8_MIN;
	volatile int16_t x396 = INT16_MAX;

	t80 = (x393+((x394&x395)*x396));

	if (t80 != -4194177LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x398 = INT16_MIN;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = UINT16_MAX;

	t81 = (x397+((x398&x399)*x400));

	if (t81 != -2147450879) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x403 = INT8_MIN;
	int8_t x404 = INT8_MAX;
	volatile uint64_t t82 = 123866955LLU;

	t82 = (x401+((x402&x403)*x404));

	if (t82 != 16365322177239197311LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MAX;
	uint64_t x407 = 124922067611567997LLU;
	int64_t x408 = -2676LL;
	uint64_t t83 = 13101LLU;

	t83 = (x405+((x406&x407)*x408));

	if (t83 != 16196689169945198591LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x409 = -1;
	uint32_t x410 = 19445U;
	uint32_t x411 = UINT32_MAX;
	uint32_t x412 = 8042631U;
	volatile uint32_t t84 = 8U;

	t84 = (x409+((x410&x411)*x412));

	if (t84 != 1770137138U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 29LLU;
	uint8_t x415 = UINT8_MAX;
	uint64_t t85 = 200087269041356LLU;

	t85 = (x413+((x414&x415)*x416));

	if (t85 != 18446743927680663581LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x417 = INT8_MIN;
	uint64_t x418 = 53545001361380929LLU;
	volatile uint8_t x420 = UINT8_MAX;
	static uint64_t t86 = 15972934626059LLU;

	t86 = (x417+((x418&x419)*x420));

	if (t86 != 16447LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x421 = INT32_MAX;
	uint16_t x422 = UINT16_MAX;
	int32_t x423 = INT32_MAX;
	int16_t x424 = -201;

	t87 = (x421+((x422&x423)*x424));

	if (t87 != 2134311112) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x425 = 1551LL;
	int64_t x426 = INT64_MAX;
	uint64_t x427 = 2010123360823339LLU;
	uint32_t x428 = UINT32_MAX;
	uint64_t t88 = 366469LLU;

	t88 = (x425+((x426&x427)*x428));

	if (t88 != 5825762328349482468LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x429 = INT16_MIN;
	uint32_t x430 = 2959463U;
	int64_t x431 = -1LL;
	static int32_t x432 = 86;
	int64_t t89 = -77207861344367217LL;

	t89 = (x429+((x430&x431)*x432));

	if (t89 != 254481050LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = INT32_MIN;
	int32_t x435 = 0;
	volatile int16_t x436 = 501;
	volatile int32_t t90 = INT32_MIN;

	t90 = (x433+((x434&x435)*x436));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x438 = 0;
	static int16_t x439 = INT16_MIN;
	int32_t x440 = -1;
	uint64_t t91 = UINT64_MAX;

	t91 = (x437+((x438&x439)*x440));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = 4114LLU;
	uint32_t x442 = 19576645U;
	static int64_t x444 = -1LL;
	uint64_t t92 = 4922755110LLU;

	t92 = (x441+((x442&x443)*x444));

	if (t92 != 4114LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x449 = INT16_MIN;
	static uint32_t x450 = 1784U;
	uint64_t x452 = 34043LLU;

	t93 = (x449+((x450&x451)*x452));

	if (t93 != 56614784LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x453 = INT32_MIN;
	int16_t x454 = INT16_MIN;
	int64_t x455 = 4759LL;
	static int8_t x456 = 2;
	static int64_t t94 = -14287057035LL;

	t94 = (x453+((x454&x455)*x456));

	if (t94 != -2147483648LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x457 = UINT64_MAX;
	static uint64_t x458 = 1698391LLU;
	static volatile uint64_t t95 = UINT64_MAX;

	t95 = (x457+((x458&x459)*x460));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x465 = UINT16_MAX;
	static volatile int8_t x466 = 0;
	int32_t x468 = INT32_MIN;
	volatile int32_t t96 = -891;

	t96 = (x465+((x466&x467)*x468));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x469 = 30840LLU;
	int8_t x470 = -1;
	volatile uint64_t t97 = 6826298030442384604LLU;

	t97 = (x469+((x470&x471)*x472));

	if (t97 != 18446744073709126304LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x486 = INT64_MIN;
	static int8_t x487 = INT8_MIN;
	uint64_t x488 = 441LLU;
	uint64_t t98 = 1017575860LLU;

	t98 = (x485+((x486&x487)*x488));

	if (t98 != 9223406044107763292LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x489 = 85U;
	volatile int32_t x490 = INT32_MIN;
	volatile uint8_t x492 = 0U;
	static int64_t t99 = -1483002158LL;

	t99 = (x489+((x490&x491)*x492));

	if (t99 != 85LL) { NG(); } else { ; }
	
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

