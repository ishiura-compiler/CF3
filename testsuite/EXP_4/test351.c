#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 1U;
volatile uint64_t t2 = 5989413825LLU;
volatile uint32_t x30 = UINT32_MAX;
int16_t x31 = 114;
volatile uint64_t t8 = 256422402192881662LLU;
volatile int64_t t9 = 104634761996LL;
int16_t x56 = -1;
volatile int64_t t11 = 177685701632556209LL;
static uint8_t x68 = 0U;
int64_t x72 = 363362LL;
int8_t x77 = INT8_MIN;
uint64_t t16 = 26755169037355517LLU;
uint64_t x89 = 39973499322020LLU;
int32_t x92 = -37282694;
volatile int64_t t20 = -156438395124269LL;
int32_t t22 = 35644120;
volatile uint64_t x129 = 18274LLU;
uint16_t x165 = 6U;
static uint8_t x170 = 97U;
int8_t x172 = INT8_MIN;
int8_t x182 = 5;
uint8_t x186 = 16U;
static int16_t x187 = -7389;
static volatile uint64_t t32 = 856318302228134922LLU;
uint64_t t34 = 3202077667LLU;
volatile int32_t t36 = 222173340;
uint64_t x224 = 51883824641LLU;
int64_t x239 = -3219LL;
int32_t x249 = INT32_MIN;
int16_t x251 = INT16_MIN;
uint32_t x256 = 9546490U;
static volatile uint16_t x260 = UINT16_MAX;
static int16_t x269 = -56;
int64_t x270 = -1LL;
volatile int64_t t45 = -11949366LL;
volatile uint64_t t47 = 1804332618361503573LLU;
int8_t x289 = -1;
static int32_t x293 = 302;
static int64_t x295 = 269219998367066454LL;
uint16_t x297 = UINT16_MAX;
int16_t x301 = INT16_MIN;
int8_t x303 = INT8_MIN;
static uint64_t x314 = 1063565LLU;
static uint16_t x326 = 2U;
volatile uint64_t t56 = 54431LLU;
volatile int32_t x333 = 1048008;
int8_t x334 = -1;
static volatile uint16_t x336 = 1282U;
int64_t x338 = 2577246020457LL;
static int64_t t58 = 2969340879420773684LL;
volatile uint64_t t62 = 0LLU;
static uint8_t x362 = 4U;
static int16_t x363 = INT16_MAX;
uint64_t t64 = 16417388385262LLU;
int16_t x379 = 0;
volatile int32_t t65 = -28217542;
uint32_t x381 = UINT32_MAX;
static uint32_t x393 = 109342892U;
volatile uint64_t t69 = 2868104267397LLU;
volatile int32_t x405 = -1;
static volatile uint64_t t70 = 214332541LLU;
int64_t x416 = 2381648LL;
int32_t x420 = INT32_MIN;
static int64_t t73 = -127609775LL;
static uint8_t x422 = 0U;
static int32_t t74 = -94;
uint64_t x433 = 2626557LLU;
int16_t x439 = -1;
volatile int8_t x444 = -1;
volatile uint8_t x461 = 43U;
static int8_t x474 = INT8_MIN;
volatile int64_t x476 = 1092767LL;
int8_t x491 = INT8_MIN;
volatile int16_t x497 = INT16_MIN;
uint64_t x502 = 612666012LLU;
int64_t x506 = -25367022208206LL;
int64_t x507 = -1LL;
volatile uint64_t t91 = 4353768192705LLU;
int64_t x515 = -1LL;
int64_t x520 = -1LL;
static uint64_t x534 = 92928348902930775LLU;
uint8_t x535 = UINT8_MAX;


void f0(void) {
	volatile uint64_t x1 = 17144141664882LLU;
	int32_t x2 = 6;
	int8_t x3 = INT8_MIN;
	int8_t x4 = -1;
	volatile uint64_t t0 = 305907678LLU;

	t0 = (x1^(x2+(x3*x4)));

	if (t0 != 17144141665012LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = -4011;
	uint32_t x8 = UINT32_MAX;
	volatile uint32_t t1 = 4967U;

	t1 = (x5^(x6+(x7*x8)));

	if (t1 != 4294938794U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = -5;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9^(x10+(x11*x12)));

	if (t2 != 9223372036854775802LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 14589200LLU;
	static uint16_t x22 = UINT16_MAX;
	int8_t x23 = INT8_MIN;
	static int16_t x24 = 2;
	static volatile uint64_t t3 = 2648LLU;

	t3 = (x21^(x22+(x23*x24)));

	if (t3 != 14574575LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x25 = INT16_MAX;
	int64_t x26 = -1LL;
	int16_t x27 = -1;
	volatile uint32_t x28 = 852398470U;
	static volatile int64_t t4 = -177214857668473LL;

	t4 = (x25^(x26+(x27*x28)));

	if (t4 != 3442545030LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x29 = 4U;
	volatile int16_t x32 = 1;
	static volatile uint32_t t5 = 5U;

	t5 = (x29^(x30+(x31*x32)));

	if (t5 != 117U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x33 = UINT64_MAX;
	int16_t x34 = INT16_MAX;
	static uint64_t x35 = 9LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t6 = 1905831498838LLU;

	t6 = (x33^(x34+(x35*x36)));

	if (t6 != 19327320064LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	int64_t x43 = -1LL;
	volatile int32_t x44 = -7489;
	int64_t t7 = 7819681693220370LL;

	t7 = (x41^(x42+(x43*x44)));

	if (t7 != -25024LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = 826661857LL;
	volatile int16_t x46 = INT16_MIN;
	uint64_t x47 = 19786LLU;
	static int32_t x48 = INT32_MIN;

	t8 = (x45^(x46+(x47*x48)));

	if (t8 != 18446701582771444705LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	volatile int16_t x51 = 12;
	int16_t x52 = INT16_MIN;

	t9 = (x49^(x50+(x51*x52)));

	if (t9 != 9223372036854349824LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 21422U;
	int16_t x55 = -1;
	volatile int32_t t10 = 174;

	t10 = (x53^(x54+(x55*x56)));

	if (t10 != 21328) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 121U;
	int32_t x58 = -1;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = -1LL;

	t11 = (x57^(x58+(x59*x60)));

	if (t11 != -135LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	int16_t x62 = INT16_MAX;
	uint16_t x63 = 14724U;
	static uint32_t x64 = UINT32_MAX;
	volatile uint32_t t12 = 4179935U;

	t12 = (x61^(x62+(x63*x64)));

	if (t12 != 4294949252U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = -1;
	int64_t x66 = -2006LL;
	int32_t x67 = 0;
	static volatile int64_t t13 = 480920248998LL;

	t13 = (x65^(x66+(x67*x68)));

	if (t13 != 2005LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 3207U;
	volatile int64_t t14 = 12787311LL;

	t14 = (x69^(x70+(x71*x72)));

	if (t14 != -9223372035689473619LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 336U;
	uint8_t x74 = 89U;
	volatile uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 15U;
	int32_t t15 = 0;

	t15 = (x73^(x74+(x75*x76)));

	if (t15 != 983322) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x78 = INT8_MAX;
	static volatile uint64_t x79 = 13LLU;
	uint8_t x80 = 8U;

	t16 = (x77^(x78+(x79*x80)));

	if (t16 != 18446744073709551463LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 9U;
	static int32_t x82 = INT32_MAX;
	int32_t x83 = INT32_MIN;
	static volatile int64_t x84 = -1LL;
	int64_t t17 = 36LL;

	t17 = (x81^(x82+(x83*x84)));

	if (t17 != 4294967286LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 18736LL;
	int16_t x86 = -8;
	static volatile int8_t x87 = INT8_MAX;
	int16_t x88 = -1;
	int64_t t18 = 209616462871LL;

	t18 = (x85^(x86+(x87*x88)));

	if (t18 != -18871LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MIN;
	volatile uint64_t x91 = UINT64_MAX;
	volatile uint64_t t19 = 944984LLU;

	t19 = (x89^(x90+(x91*x92)));

	if (t19 != 39973462138274LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x93 = 4396U;
	static volatile int64_t x94 = -1LL;
	volatile uint32_t x95 = 12550231U;
	uint32_t x96 = UINT32_MAX;

	t20 = (x93^(x94+(x95*x96)));

	if (t20 != 4282412676LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = 69;
	int8_t x98 = INT8_MIN;
	int32_t x99 = -1;
	volatile uint64_t x100 = 24978924050307557LLU;
	volatile uint64_t t21 = 508LLU;

	t21 = (x97^(x98+(x99*x100)));

	if (t21 != 18421765149659243998LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MIN;
	volatile int8_t x118 = 31;
	static int8_t x119 = -1;
	uint16_t x120 = 6U;

	t22 = (x117^(x118+(x119*x120)));

	if (t22 != -2147483623) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x125 = INT64_MIN;
	int32_t x126 = -953529;
	volatile uint32_t x127 = UINT32_MAX;
	volatile int16_t x128 = INT16_MIN;
	static volatile int64_t t23 = -10350791503LL;

	t23 = (x125^(x126+(x127*x128)));

	if (t23 != -9223372032560729273LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x130 = -1;
	static uint8_t x131 = UINT8_MAX;
	uint64_t x132 = 967064252415694078LLU;
	volatile uint64_t t24 = 20529566495542757LLU;

	t24 = (x129^(x130+(x131*x132)));

	if (t24 != 6793711407777836643LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x137 = -3;
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = -8;
	uint8_t x140 = UINT8_MAX;
	int32_t t25 = 378;

	t25 = (x137^(x138+(x139*x140)));

	if (t25 != 34805) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x161 = INT16_MAX;
	uint32_t x162 = UINT32_MAX;
	static int16_t x163 = -1;
	int64_t x164 = -1LL;
	volatile int64_t t26 = -1256LL;

	t26 = (x161^(x162+(x163*x164)));

	if (t26 != 4295000063LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x166 = -1;
	int32_t x167 = 98030;
	uint8_t x168 = 4U;
	int32_t t27 = -953;

	t27 = (x165^(x166+(x167*x168)));

	if (t27 != 392113) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MAX;
	volatile int8_t x171 = -11;
	int32_t t28 = -273;

	t28 = (x169^(x170+(x171*x172)));

	if (t28 != 31262) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x173 = UINT8_MAX;
	static int64_t x174 = INT64_MIN;
	int16_t x175 = 17;
	uint8_t x176 = 97U;
	int64_t t29 = 4506002652895889321LL;

	t29 = (x173^(x174+(x175*x176)));

	if (t29 != -9223372036854774130LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x181 = UINT16_MAX;
	volatile uint16_t x183 = 95U;
	static uint8_t x184 = 21U;
	int32_t t30 = 154;

	t30 = (x181^(x182+(x183*x184)));

	if (t30 != 63535) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x185 = 502U;
	int16_t x188 = 12;
	uint32_t t31 = 61402121U;

	t31 = (x185^(x186+(x187*x188)));

	if (t31 != 4294878274U) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x193 = 1U;
	int8_t x194 = -1;
	static uint64_t x195 = 169172448288833LLU;
	uint8_t x196 = 18U;

	t32 = (x193^(x194+(x195*x196)));

	if (t32 != 3045104069198992LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;
	static uint32_t x207 = 13944U;
	static uint32_t x208 = 23984U;
	volatile int64_t t33 = 1051718991807344044LL;

	t33 = (x205^(x206+(x207*x208)));

	if (t33 != -2481916545LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x209 = INT32_MIN;
	uint64_t x210 = 22288302531LLU;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = 863;

	t34 = (x209^(x210+(x211*x212)));

	if (t34 != 18446744050957254244LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x213 = -1;
	int16_t x214 = 4107;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MIN;
	volatile uint64_t t35 = 107674957431LLU;

	t35 = (x213^(x214+(x215*x216)));

	if (t35 != 18446744073709514740LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x217 = INT32_MIN;
	int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = -1;

	t36 = (x217^(x218+(x219*x220)));

	if (t36 != 32768) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x221 = -1LL;
	volatile uint8_t x222 = UINT8_MAX;
	uint8_t x223 = 5U;
	uint64_t t37 = 124643770857LLU;

	t37 = (x221^(x222+(x223*x224)));

	if (t37 != 18446743814290428155LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x229 = 19U;
	int32_t x230 = INT32_MIN;
	uint32_t x231 = 1766U;
	int32_t x232 = INT32_MIN;
	static volatile uint32_t t38 = 12192U;

	t38 = (x229^(x230+(x231*x232)));

	if (t38 != 2147483667U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x233 = 27992U;
	uint16_t x234 = 21U;
	static uint32_t x235 = UINT32_MAX;
	int8_t x236 = -1;
	static uint32_t t39 = 1016849U;

	t39 = (x233^(x234+(x235*x236)));

	if (t39 != 27982U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x237 = -926;
	static volatile int32_t x238 = INT32_MIN;
	uint64_t x240 = 0LLU;
	static volatile uint64_t t40 = 9212984628754090LLU;

	t40 = (x237^(x238+(x239*x240)));

	if (t40 != 2147482722LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = INT32_MIN;
	static uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 909755U;
	int8_t x248 = INT8_MAX;
	volatile uint32_t t41 = 1373340098U;

	t41 = (x245^(x246+(x247*x248)));

	if (t41 != 2263088068U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x250 = 0;
	uint64_t x252 = 4992592043669LLU;
	uint64_t t42 = 734113LLU;

	t42 = (x249^(x250+(x251*x252)));

	if (t42 != 163597254500122624LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = INT32_MAX;
	uint32_t t43 = 131637951U;

	t43 = (x253^(x254+(x255*x256)));

	if (t43 != 9546362U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x257 = 104941034201LLU;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	static volatile uint64_t t44 = 141779392111211875LLU;

	t44 = (x257^(x258+(x259*x260)));

	if (t44 != 18446743968768563928LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x271 = -1;
	static int64_t x272 = INT64_MAX;

	t45 = (x269^(x270+(x271*x272)));

	if (t45 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = -1;
	int8_t x279 = -1;
	int8_t x280 = INT8_MAX;
	uint64_t t46 = 30364509LLU;

	t46 = (x277^(x278+(x279*x280)));

	if (t46 != 127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x281 = 4181LLU;
	uint8_t x282 = 38U;
	int16_t x283 = -1;
	static int8_t x284 = 1;

	t47 = (x281^(x282+(x283*x284)));

	if (t47 != 4208LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x290 = INT8_MIN;
	int64_t x291 = -1LL;
	int8_t x292 = -1;
	static volatile int64_t t48 = 98972908059756599LL;

	t48 = (x289^(x290+(x291*x292)));

	if (t48 != 126LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x294 = -1;
	int16_t x296 = 1;
	static int64_t t49 = -24026LL;

	t49 = (x293^(x294+(x295*x296)));

	if (t49 != 269219998367066235LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x298 = -4149504686072171LL;
	int16_t x299 = -7995;
	static uint32_t x300 = 33U;
	int64_t t50 = -3499912345LL;

	t50 = (x297^(x298+(x299*x300)));

	if (t50 != -4149500391348219LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x302 = 43620490926183225LLU;
	int64_t x304 = -1LL;
	volatile uint64_t t51 = 4287579201787005LLU;

	t51 = (x301^(x302+(x303*x304)));

	if (t51 != 18403123582783378361LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x305 = 20U;
	static int64_t x306 = INT64_MIN;
	static int16_t x307 = -111;
	volatile int32_t x308 = 0;
	int64_t t52 = -8897LL;

	t52 = (x305^(x306+(x307*x308)));

	if (t52 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x313 = 2U;
	volatile uint16_t x315 = 803U;
	volatile int16_t x316 = INT16_MIN;
	volatile uint64_t t53 = 1875182445275038LLU;

	t53 = (x313^(x314+(x315*x316)));

	if (t53 != 18446744073684302479LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x321 = INT16_MIN;
	volatile int64_t x322 = -1LL;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	volatile int64_t t54 = -1LL;

	t54 = (x321^(x322+(x323*x324)));

	if (t54 != -32768LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x325 = INT8_MAX;
	int64_t x327 = 199449396LL;
	int8_t x328 = INT8_MAX;
	volatile int64_t t55 = -626LL;

	t55 = (x325^(x326+(x327*x328)));

	if (t55 != 25330073265LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x329 = 5U;
	int32_t x330 = -174484365;
	int64_t x331 = -1LL;
	uint64_t x332 = UINT64_MAX;

	t56 = (x329^(x330+(x331*x332)));

	if (t56 != 18446744073535067249LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x335 = -1;
	volatile int32_t t57 = -638617;

	t57 = (x333^(x334+(x335*x336)));

	if (t57 != -1046731) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x337 = -1LL;
	static int16_t x339 = INT16_MIN;
	uint16_t x340 = 6U;

	t58 = (x337^(x338+(x339*x340)));

	if (t58 != -2577245823850LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = -1543;
	int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	volatile uint64_t t59 = 465443LLU;

	t59 = (x341^(x342+(x343*x344)));

	if (t59 != 18446744073705358854LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x345 = INT16_MIN;
	static volatile int32_t x346 = 42;
	uint64_t x347 = 1789527LLU;
	uint8_t x348 = 55U;
	uint64_t t60 = 3103519741LLU;

	t60 = (x345^(x346+(x347*x348)));

	if (t60 != 18446744073611138267LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = 6U;
	uint8_t x355 = 1U;
	int32_t x356 = -1;
	int64_t t61 = -6LL;

	t61 = (x353^(x354+(x355*x356)));

	if (t61 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x357 = INT64_MIN;
	static int8_t x358 = INT8_MIN;
	static int8_t x359 = -1;
	uint64_t x360 = 75076979183619530LLU;

	t62 = (x357^(x358+(x359*x360)));

	if (t62 != 9148295057671156150LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x361 = INT16_MAX;
	int64_t x364 = -1LL;
	volatile int64_t t63 = -2131053LL;

	t63 = (x361^(x362+(x363*x364)));

	if (t63 != -6LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x365 = 635181587343LLU;
	int64_t x366 = 8470564800022LL;
	int32_t x367 = -100404;
	int16_t x368 = -2;

	t64 = (x365^(x366+(x367*x368)));

	if (t64 != 7867688111601LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x377 = 62;
	volatile uint8_t x378 = 2U;
	int32_t x380 = -1;

	t65 = (x377^(x378+(x379*x380)));

	if (t65 != 60) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x382 = 0U;
	int8_t x383 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	volatile uint32_t t66 = 0U;

	t66 = (x381^(x382+(x383*x384)));

	if (t66 != 4161535U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x385 = -1;
	static uint16_t x386 = 4313U;
	static int8_t x387 = INT8_MAX;
	int32_t x388 = -1;
	static volatile int32_t t67 = 1;

	t67 = (x385^(x386+(x387*x388)));

	if (t67 != -4187) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x394 = 9U;
	int16_t x395 = INT16_MAX;
	int8_t x396 = -1;
	volatile uint32_t t68 = 1106573484U;

	t68 = (x393^(x394+(x395*x396)));

	if (t68 != 4185649318U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x397 = -1;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 8467413126723507LLU;
	int64_t x400 = -31847807LL;

	t69 = (x397^(x398+(x399*x400)));

	if (t69 != 14034179672715260108LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x406 = INT32_MIN;
	uint64_t x407 = 705807925319LLU;
	uint8_t x408 = 98U;

	t70 = (x405^(x406+(x407*x408)));

	if (t70 != 18446674906680354001LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x409 = INT32_MAX;
	volatile int32_t x410 = INT32_MIN;
	static int16_t x411 = -27;
	volatile uint64_t x412 = 0LLU;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x409^(x410+(x411*x412)));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x413 = INT32_MIN;
	uint32_t x414 = 593747746U;
	volatile uint64_t x415 = 3924082467LLU;
	static uint64_t t72 = 1782320032881970729LLU;

	t72 = (x413^(x414+(x415*x416)));

	if (t72 != 18437398290786975506LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = INT64_MIN;
	int64_t x419 = 0LL;

	t73 = (x417^(x418+(x419*x420)));

	if (t73 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x421 = 1U;
	volatile int16_t x423 = -26;
	volatile int16_t x424 = INT16_MIN;

	t74 = (x421^(x422+(x423*x424)));

	if (t74 != 851969) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x429 = INT32_MIN;
	uint8_t x430 = 2U;
	volatile uint32_t x431 = 3U;
	uint32_t x432 = 7U;
	uint32_t t75 = 0U;

	t75 = (x429^(x430+(x431*x432)));

	if (t75 != 2147483671U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x434 = INT8_MAX;
	int8_t x435 = INT8_MIN;
	uint32_t x436 = 286U;
	uint64_t t76 = 2867334614630LLU;

	t76 = (x433^(x434+(x435*x436)));

	if (t76 != 4292305538LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x437 = INT32_MIN;
	volatile int64_t x438 = INT64_MIN;
	int8_t x440 = -5;
	int64_t t77 = 23464LL;

	t77 = (x437^(x438+(x439*x440)));

	if (t77 != 9223372034707292165LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x441 = 766944632U;
	int32_t x442 = -30361;
	int64_t x443 = 105110500LL;
	volatile int64_t t78 = 7970235LL;

	t78 = (x441^(x442+(x443*x444)));

	if (t78 != -737343237LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x445 = UINT32_MAX;
	uint64_t x446 = UINT64_MAX;
	int16_t x447 = -1342;
	static int64_t x448 = -1LL;
	static uint64_t t79 = 666775LLU;

	t79 = (x445^(x446+(x447*x448)));

	if (t79 != 4294965954LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x449 = 34U;
	static uint64_t x450 = 2460887199629LLU;
	volatile int16_t x451 = INT16_MIN;
	uint8_t x452 = 24U;
	volatile uint64_t t80 = 61181009142919LLU;

	t80 = (x449^(x450+(x451*x452)));

	if (t80 != 2460886413231LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x453 = INT8_MIN;
	int16_t x454 = INT16_MIN;
	int8_t x455 = -1;
	int8_t x456 = 13;
	volatile int32_t t81 = -49;

	t81 = (x453^(x454+(x455*x456)));

	if (t81 != 32883) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x462 = UINT64_MAX;
	static int16_t x463 = INT16_MIN;
	static uint32_t x464 = 110538125U;
	volatile uint64_t t82 = 30202994660LLU;

	t82 = (x461^(x462+(x463*x464)));

	if (t82 != 2839117780LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x469 = INT64_MIN;
	uint64_t x470 = UINT64_MAX;
	volatile int8_t x471 = INT8_MIN;
	static int8_t x472 = 44;
	uint64_t t83 = 947LLU;

	t83 = (x469^(x470+(x471*x472)));

	if (t83 != 9223372036854770175LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x473 = UINT64_MAX;
	uint32_t x475 = 8985665U;
	uint64_t t84 = 216236LLU;

	t84 = (x473^(x474+(x475*x476)));

	if (t84 != 18446734254471366688LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x477 = 62;
	volatile int64_t x478 = INT64_MAX;
	int32_t x479 = -799424144;
	uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t85 = 5766LLU;

	t85 = (x477^(x478+(x479*x480)));

	if (t85 != 9223372037654199985LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x485 = -1;
	uint32_t x486 = UINT32_MAX;
	uint64_t x487 = 1LLU;
	static int64_t x488 = -1LL;
	uint64_t t86 = 3446544961LLU;

	t86 = (x485^(x486+(x487*x488)));

	if (t86 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = -1;
	static int64_t x490 = -1LL;
	volatile int16_t x492 = -1;
	volatile int64_t t87 = 2086443640733LL;

	t87 = (x489^(x490+(x491*x492)));

	if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x498 = 7892089LL;
	int16_t x499 = INT16_MIN;
	static int16_t x500 = INT16_MIN;
	static volatile int64_t t88 = -185236185632LL;

	t88 = (x497^(x498+(x499*x500)));

	if (t88 != -1081611143LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x501 = UINT64_MAX;
	uint8_t x503 = 4U;
	uint64_t x504 = UINT64_MAX;
	uint64_t t89 = 10718998LLU;

	t89 = (x501^(x502+(x503*x504)));

	if (t89 != 18446744073096885607LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x505 = UINT32_MAX;
	volatile int8_t x508 = INT8_MIN;
	static int64_t t90 = -30229630LL;

	t90 = (x505^(x506+(x507*x508)));

	if (t90 != -25369426459571LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x509 = UINT64_MAX;
	int16_t x510 = INT16_MIN;
	int8_t x511 = -3;
	volatile uint32_t x512 = 23159629U;

	t91 = (x509^(x510+(x511*x512)));

	if (t91 != 18446744069484095974LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x513 = -8115872564LL;
	int16_t x514 = 49;
	static uint16_t x516 = 127U;
	volatile int64_t t92 = 3397010323082509LL;

	t92 = (x513^(x514+(x515*x516)));

	if (t92 != 8115872638LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x517 = 201;
	int16_t x518 = INT16_MIN;
	volatile int32_t x519 = 4005283;
	volatile int64_t t93 = 32222LL;

	t93 = (x517^(x518+(x519*x520)));

	if (t93 != -4037996LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x521 = INT8_MAX;
	int16_t x522 = INT16_MIN;
	volatile uint8_t x523 = 0U;
	int8_t x524 = INT8_MIN;
	volatile int32_t t94 = -485;

	t94 = (x521^(x522+(x523*x524)));

	if (t94 != -32641) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x529 = INT16_MAX;
	static int32_t x530 = 206396508;
	int8_t x531 = 11;
	int8_t x532 = -1;
	int32_t t95 = 1208;

	t95 = (x529^(x530+(x531*x532)));

	if (t95 != 206381998) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x533 = 0;
	volatile int64_t x536 = 410870137814762LL;
	static volatile uint64_t t96 = 367201356437442693LLU;

	t96 = (x533^(x534+(x535*x536)));

	if (t96 != 197700234045695085LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x541 = INT16_MIN;
	volatile int8_t x542 = INT8_MIN;
	uint64_t x543 = 318885LLU;
	int32_t x544 = 414655154;
	uint64_t t97 = 3LLU;

	t97 = (x541^(x542+(x543*x544)));

	if (t97 != 18446611846400738874LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x545 = 2U;
	volatile int16_t x546 = -16;
	int16_t x547 = INT16_MAX;
	uint64_t x548 = 332LLU;
	uint64_t t98 = 5597LLU;

	t98 = (x545^(x546+(x547*x548)));

	if (t98 != 10878630LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x549 = 50754LLU;
	volatile int32_t x550 = 1;
	int32_t x551 = 1456551;
	static volatile uint64_t x552 = UINT64_MAX;
	uint64_t t99 = 114006607190395LLU;

	t99 = (x549^(x550+(x551*x552)));

	if (t99 != 18446744073708044312LLU) { NG(); } else { ; }
	
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

