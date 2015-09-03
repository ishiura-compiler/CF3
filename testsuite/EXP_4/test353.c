#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 150LLU;
uint16_t x9 = UINT16_MAX;
uint32_t t2 = 16289U;
volatile int16_t x25 = INT16_MIN;
int8_t x27 = INT8_MIN;
volatile uint16_t x29 = UINT16_MAX;
static volatile int16_t x33 = INT16_MIN;
static uint32_t x52 = 39U;
int8_t x60 = INT8_MIN;
volatile int32_t t11 = 239970070;
static int32_t x63 = -1;
static uint64_t x74 = UINT64_MAX;
volatile uint64_t t13 = 0LLU;
uint8_t x87 = 112U;
static uint64_t x88 = 229309411609LLU;
uint64_t x93 = 14573476571LLU;
uint16_t x104 = 2U;
int16_t x106 = INT16_MAX;
uint16_t x107 = UINT16_MAX;
uint8_t x108 = UINT8_MAX;
int16_t x117 = INT16_MIN;
uint64_t t24 = 154LLU;
uint64_t t25 = 9707461838LLU;
static volatile int16_t x135 = INT16_MIN;
int16_t x151 = INT16_MAX;
uint32_t x164 = 334U;
volatile int16_t x167 = INT16_MAX;
int32_t t34 = 20595;
uint64_t x181 = 1625967699LLU;
int64_t x203 = -19079118021LL;
int32_t x209 = INT32_MAX;
static volatile uint64_t x211 = 491274005037LLU;
uint64_t x218 = 225830LLU;
volatile uint16_t x220 = 204U;
uint8_t x223 = 2U;
int16_t x224 = INT16_MIN;
volatile int64_t t41 = 71489024834685444LL;
volatile int64_t x226 = -785754980595LL;
uint32_t x228 = 6U;
volatile int32_t x230 = INT32_MIN;
volatile uint8_t x233 = 4U;
uint8_t x234 = 0U;
uint32_t x237 = UINT32_MAX;
static int64_t x239 = 1088908035LL;
int16_t x243 = INT16_MIN;
int32_t t46 = -796754023;
uint8_t x249 = UINT8_MAX;
static volatile int64_t x263 = 1471698LL;
int8_t x268 = 6;
int64_t t50 = -1963LL;
int8_t x278 = INT8_MAX;
static uint64_t x280 = UINT64_MAX;
static uint64_t x295 = UINT64_MAX;
volatile uint32_t t54 = 127104U;
static volatile uint64_t x305 = UINT64_MAX;
volatile int32_t x306 = -23;
volatile uint8_t x313 = UINT8_MAX;
uint16_t x315 = UINT16_MAX;
uint64_t x324 = 274178157409907LLU;
volatile uint64_t t61 = 148300LLU;
uint8_t x337 = 4U;
uint8_t x338 = 1U;
uint16_t x339 = 92U;
uint32_t x343 = 2261851U;
volatile int8_t x357 = INT8_MAX;
static volatile int8_t x358 = INT8_MAX;
static int8_t x363 = INT8_MIN;
volatile uint8_t x365 = 12U;
uint16_t x367 = 11818U;
uint32_t x385 = UINT32_MAX;
volatile uint16_t x388 = 96U;
uint16_t x396 = 12U;
static uint64_t x399 = 3206LLU;
uint64_t x407 = UINT64_MAX;
volatile uint32_t x414 = 677U;
uint16_t x416 = 34U;
uint8_t x422 = 4U;
volatile uint32_t x429 = 108708906U;
uint8_t x459 = UINT8_MAX;
int64_t t80 = -3806LL;
volatile uint64_t t81 = 1918668496LLU;
int64_t t84 = -5474256LL;
static uint16_t x485 = UINT16_MAX;
static int8_t x488 = 37;
static uint8_t x492 = 1U;
static int8_t x494 = 0;
int8_t x496 = INT8_MAX;
uint32_t t87 = 22U;
int32_t x497 = INT32_MIN;
volatile uint64_t x502 = 1042592514LLU;
uint16_t x504 = 4218U;
static int8_t x511 = -1;
int16_t x512 = INT16_MIN;
int32_t x520 = -1;
int8_t x525 = INT8_MIN;
volatile int8_t x526 = -1;
int64_t x537 = 365LL;
static volatile uint16_t x541 = 27609U;
int64_t t97 = -234650459328625LL;
static volatile uint32_t x571 = 148581259U;
int64_t t98 = -98330472065538017LL;
uint32_t x576 = 8909U;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 2130245590317833766LLU;

	t0 = (x1-(x2-(x3*x4)));

	if (t0 != 9223372036854775531LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 1882083477U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = -1;
	volatile uint32_t t1 = 193185903U;

	t1 = (x5-(x6-(x7*x8)));

	if (t1 != 1882149013U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 59U;
	static uint16_t x11 = UINT16_MAX;
	static volatile int16_t x12 = INT16_MAX;

	t2 = (x9-(x10-(x11*x12)));

	if (t2 != 2147450821U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = UINT16_MAX;
	int16_t x16 = -1;
	volatile int32_t t3 = -1847;

	t3 = (x13-(x14-(x15*x16)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 58U;
	int16_t x23 = -1;
	uint16_t x24 = 31186U;
	uint32_t t4 = 118946946U;

	t4 = (x21-(x22-(x23*x24)));

	if (t4 != 4294936051U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = INT8_MAX;
	static int64_t x28 = 133046433839LL;
	volatile int64_t t5 = -351LL;

	t5 = (x25-(x26-(x27*x28)));

	if (t5 != -17029943564287LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x30 = 2U;
	uint16_t x31 = UINT16_MAX;
	uint8_t x32 = 10U;
	volatile int32_t t6 = 1;

	t6 = (x29-(x30-(x31*x32)));

	if (t6 != 720883) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = 50U;
	int8_t x36 = -1;
	static volatile int32_t t7 = 2007;

	t7 = (x33-(x34-(x35*x36)));

	if (t7 != -50) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = 1;
	int8_t x39 = -13;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 13760;

	t8 = (x37-(x38-(x39*x40)));

	if (t8 != -2147057665) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	static int8_t x42 = -1;
	static int64_t x43 = -1LL;
	int32_t x44 = -1;
	int64_t t9 = -61550831251814LL;

	t9 = (x41-(x42-(x43*x44)));

	if (t9 != -2147483646LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 672U;
	uint64_t x50 = 91799831LLU;
	int16_t x51 = 922;
	static volatile uint64_t t10 = 281882127807135035LLU;

	t10 = (x49-(x50-(x51*x52)));

	if (t10 != 18446744073617788415LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x57 = 14U;
	int8_t x58 = INT8_MAX;
	uint16_t x59 = 1U;

	t11 = (x57-(x58-(x59*x60)));

	if (t11 != -241) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = -1;
	uint64_t x62 = 7732LLU;
	static int32_t x64 = INT32_MAX;
	volatile uint64_t t12 = 16253929LLU;

	t12 = (x61-(x62-(x63*x64)));

	if (t12 != 18446744071562060236LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x73 = 105840U;
	int8_t x75 = 0;
	int8_t x76 = 5;

	t13 = (x73-(x74-(x75*x76)));

	if (t13 != 105841LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = INT16_MAX;
	volatile uint8_t x78 = 10U;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t14 = 60461;

	t14 = (x77-(x78-(x79*x80)));

	if (t14 != -8323083) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x82 = -1;
	static int8_t x83 = INT8_MIN;
	int64_t x84 = 502LL;
	volatile int64_t t15 = 0LL;

	t15 = (x81-(x82-(x83*x84)));

	if (t15 != 4294903040LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x86 = 0U;
	volatile uint64_t t16 = 31806LLU;

	t16 = (x85-(x86-(x87*x88)));

	if (t16 != 9223397719508876016LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	uint32_t x90 = 1U;
	volatile uint64_t x91 = 97281LLU;
	volatile int16_t x92 = -27;
	volatile uint64_t t17 = 25078640LLU;

	t17 = (x89-(x90-(x91*x92)));

	if (t17 != 18446744073706924900LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x94 = UINT64_MAX;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MAX;
	static volatile uint64_t t18 = 57028766222700LLU;

	t18 = (x93-(x94-(x95*x96)));

	if (t18 != 14569315036LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MIN;
	static uint8_t x98 = UINT8_MAX;
	int8_t x99 = INT8_MAX;
	uint32_t x100 = 834669608U;
	static volatile uint32_t t19 = 1057694471U;

	t19 = (x97-(x98-(x99*x100)));

	if (t19 != 2923824729U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	static int16_t x102 = -16;
	static uint8_t x103 = 3U;
	int64_t t20 = 615300LL;

	t20 = (x101-(x102-(x103*x104)));

	if (t20 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = INT8_MIN;
	int32_t t21 = 67278;

	t21 = (x105-(x106-(x107*x108)));

	if (t21 != 16678530) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = INT32_MIN;
	uint64_t x119 = 492773LLU;
	int8_t x120 = -1;
	static volatile uint64_t t22 = 127LLU;

	t22 = (x117-(x118-(x119*x120)));

	if (t22 != 2146958107LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x121 = 5U;
	uint64_t x122 = 679782834261110LLU;
	int64_t x123 = INT64_MAX;
	int32_t x124 = -1;
	uint64_t t23 = 31441431742360LLU;

	t23 = (x121-(x122-(x123*x124)));

	if (t23 != 9222692254020514704LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MAX;
	int16_t x126 = 26;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = -32463264LL;

	t24 = (x125-(x126-(x127*x128)));

	if (t24 != 32496005LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x129 = 24353982042034LLU;
	int8_t x130 = 16;
	int8_t x131 = INT8_MAX;
	static uint64_t x132 = UINT64_MAX;

	t25 = (x129-(x130-(x131*x132)));

	if (t25 != 24353982041891LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x133 = 408U;
	int16_t x134 = -1;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t26 = 2673413857LLU;

	t26 = (x133-(x134-(x135*x136)));

	if (t26 != 33177LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x137 = 1;
	volatile int64_t x138 = INT64_MAX;
	static volatile uint8_t x139 = UINT8_MAX;
	uint16_t x140 = UINT16_MAX;
	static volatile int64_t t27 = -31LL;

	t27 = (x137-(x138-(x139*x140)));

	if (t27 != -9223372036838064381LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x145 = -1;
	static int32_t x146 = INT32_MIN;
	volatile int64_t x147 = -1LL;
	int32_t x148 = 726019;
	static int64_t t28 = 6LL;

	t28 = (x145-(x146-(x147*x148)));

	if (t28 != 2146757628LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MAX;
	static uint8_t x152 = 1U;
	int32_t t29 = -7526;

	t29 = (x149-(x150-(x151*x152)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x157 = 129565382979159LLU;
	int16_t x158 = -1;
	volatile int8_t x159 = -1;
	static volatile int16_t x160 = INT16_MIN;
	volatile uint64_t t30 = 841607335LLU;

	t30 = (x157-(x158-(x159*x160)));

	if (t30 != 129565383011928LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -1687;
	volatile int64_t x162 = -23382202669189LL;
	static int16_t x163 = 1;
	static volatile int64_t t31 = 137068411706LL;

	t31 = (x161-(x162-(x163*x164)));

	if (t31 != 23382202667836LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = -818;
	uint8_t x166 = 3U;
	int16_t x168 = INT16_MIN;
	static int32_t t32 = 11945978;

	t32 = (x165-(x166-(x167*x168)));

	if (t32 != -1073709877) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x169 = 262634234U;
	uint8_t x170 = 2U;
	uint32_t x171 = 3U;
	int8_t x172 = 1;
	volatile uint32_t t33 = 7U;

	t33 = (x169-(x170-(x171*x172)));

	if (t33 != 262634235U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = 61U;
	int16_t x180 = -1;

	t34 = (x177-(x178-(x179*x180)));

	if (t34 != 2147450819) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = UINT32_MAX;
	uint16_t x184 = 496U;
	uint64_t t35 = 110348828657934884LLU;

	t35 = (x181-(x182-(x183*x184)));

	if (t35 != 1625967076LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x193 = 9049;
	static uint8_t x194 = 5U;
	uint8_t x195 = 1U;
	static int32_t x196 = -1;
	static volatile int32_t t36 = 458852;

	t36 = (x193-(x194-(x195*x196)));

	if (t36 != 9043) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x201 = 2U;
	int16_t x202 = -9995;
	int64_t x204 = -1LL;
	static volatile int64_t t37 = -60253214LL;

	t37 = (x201-(x202-(x203*x204)));

	if (t37 != 19079128018LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x205 = UINT32_MAX;
	uint64_t x206 = 4LLU;
	volatile int16_t x207 = INT16_MAX;
	uint16_t x208 = 3U;
	static uint64_t t38 = 60315460775LLU;

	t38 = (x205-(x206-(x207*x208)));

	if (t38 != 4295065592LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x210 = 130988713U;
	int16_t x212 = INT16_MIN;
	volatile uint64_t t39 = 502926993LLU;

	t39 = (x209-(x210-(x211*x212)));

	if (t39 != 18430646009128994134LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x217 = UINT64_MAX;
	int32_t x219 = -1;
	uint64_t t40 = 95166260376216153LLU;

	t40 = (x217-(x218-(x219*x220)));

	if (t40 != 18446744073709325581LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x221 = 2U;
	static int64_t x222 = -1LL;

	t41 = (x221-(x222-(x223*x224)));

	if (t41 != -65533LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x225 = 981109288U;
	uint64_t x227 = 8356350LLU;
	uint64_t t42 = 6317551LLU;

	t42 = (x225-(x226-(x227*x228)));

	if (t42 != 786786227983LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = -1LL;
	int32_t x231 = 726;
	volatile int32_t x232 = -1;
	volatile int64_t t43 = -52689619438316444LL;

	t43 = (x229-(x230-(x231*x232)));

	if (t43 != 2147482921LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x235 = -1543158760LL;
	int64_t x236 = -1LL;
	int64_t t44 = -464860760LL;

	t44 = (x233-(x234-(x235*x236)));

	if (t44 != 1543158764LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x238 = -1LL;
	volatile uint8_t x240 = 0U;
	int64_t t45 = -30165646450746LL;

	t45 = (x237-(x238-(x239*x240)));

	if (t45 != 4294967296LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x241 = 0;
	int16_t x242 = INT16_MAX;
	volatile uint16_t x244 = UINT16_MAX;

	t46 = (x241-(x242-(x243*x244)));

	if (t46 != -2147483647) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x250 = 1;
	uint8_t x251 = 86U;
	int64_t x252 = 5689147308LL;
	volatile int64_t t47 = -1LL;

	t47 = (x249-(x250-(x251*x252)));

	if (t47 != 489266668742LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x254 = UINT8_MAX;
	volatile int8_t x255 = INT8_MAX;
	int32_t x256 = 5;
	volatile int32_t t48 = 1518703;

	t48 = (x253-(x254-(x255*x256)));

	if (t48 != -2147483268) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x261 = INT16_MIN;
	volatile uint64_t x262 = 0LLU;
	volatile uint32_t x264 = UINT32_MAX;
	static uint64_t t49 = 7419LLU;

	t49 = (x261-(x262-(x263*x264)));

	if (t49 != 6320894778084142LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x265 = -1998LL;
	int16_t x266 = -1;
	int8_t x267 = INT8_MAX;

	t50 = (x265-(x266-(x267*x268)));

	if (t50 != -1235LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x277 = UINT8_MAX;
	static uint16_t x279 = 7712U;
	uint64_t t51 = 17616216366681716LLU;

	t51 = (x277-(x278-(x279*x280)));

	if (t51 != 18446744073709544032LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x289 = -1;
	static int32_t x290 = -1;
	int32_t x291 = 946175;
	static uint16_t x292 = 2U;
	int32_t t52 = -13;

	t52 = (x289-(x290-(x291*x292)));

	if (t52 != 1892350) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x293 = 30U;
	static uint16_t x294 = UINT16_MAX;
	uint64_t x296 = 1LLU;
	volatile uint64_t t53 = 7155632LLU;

	t53 = (x293-(x294-(x295*x296)));

	if (t53 != 18446744073709486110LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x297 = -1;
	static int32_t x298 = 24753;
	volatile uint32_t x299 = 258U;
	int16_t x300 = -2;

	t54 = (x297-(x298-(x299*x300)));

	if (t54 != 4294942026U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -121;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = -1LL;
	static uint32_t x304 = 95543U;
	static volatile int64_t t55 = -28LL;

	t55 = (x301-(x302-(x303*x304)));

	if (t55 != -161199LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x307 = 274LLU;
	static int8_t x308 = INT8_MAX;
	static volatile uint64_t t56 = 1LLU;

	t56 = (x305-(x306-(x307*x308)));

	if (t56 != 34820LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x314 = 9U;
	static int16_t x316 = INT16_MIN;
	int32_t t57 = -8750490;

	t57 = (x313-(x314-(x315*x316)));

	if (t57 != -2147450634) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = INT64_MIN;
	static int16_t x318 = INT16_MAX;
	int64_t x319 = 5736555038552LL;
	static uint64_t x320 = 5526492726579660LLU;
	volatile uint64_t t58 = 17LLU;

	t58 = (x317-(x318-(x319*x320)));

	if (t58 != 896950249424106017LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x321 = 15838483LLU;
	int16_t x322 = -157;
	int64_t x323 = 30LL;
	uint64_t t59 = 127437813LLU;

	t59 = (x321-(x322-(x323*x324)));

	if (t59 != 8225344738135850LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x325 = -32004640LL;
	int64_t x326 = 62446467254410LL;
	uint16_t x327 = 4U;
	int16_t x328 = INT16_MIN;
	volatile int64_t t60 = 73001297877LL;

	t60 = (x325-(x326-(x327*x328)));

	if (t60 != -62446499390122LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x329 = 17U;
	static uint64_t x330 = 786104017LLU;
	uint16_t x331 = 2259U;
	static int32_t x332 = -11;

	t61 = (x329-(x330-(x331*x332)));

	if (t61 != 18446744072923422767LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x340 = -17;
	volatile int32_t t62 = 2;

	t62 = (x337-(x338-(x339*x340)));

	if (t62 != -1561) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x341 = INT32_MIN;
	uint32_t x342 = 4574U;
	uint16_t x344 = 1247U;
	volatile uint32_t t63 = 70408261U;

	t63 = (x341-(x342-(x343*x344)));

	if (t63 != 673039975U) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x349 = INT32_MIN;
	static int64_t x350 = 98025220102618LL;
	int8_t x351 = INT8_MAX;
	int8_t x352 = -45;
	volatile int64_t t64 = -3639045775540LL;

	t64 = (x349-(x350-(x351*x352)));

	if (t64 != -98027367591981LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x359 = 355;
	int8_t x360 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (x357-(x358-(x359*x360)));

	if (t65 != -45440) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x361 = -1LL;
	volatile uint16_t x362 = 3158U;
	int64_t x364 = 9027042598LL;
	volatile int64_t t66 = 4725515016277LL;

	t66 = (x361-(x362-(x363*x364)));

	if (t66 != -1155461455703LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x366 = INT64_MIN;
	int16_t x368 = -560;
	volatile int64_t t67 = -222810101919880523LL;

	t67 = (x365-(x366-(x367*x368)));

	if (t67 != 9223372036848157740LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x373 = -1;
	int64_t x374 = INT64_MIN;
	static uint8_t x375 = 0U;
	int64_t x376 = -10LL;
	int64_t t68 = INT64_MAX;

	t68 = (x373-(x374-(x375*x376)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x386 = 1230367005868LL;
	uint16_t x387 = 1U;
	static volatile int64_t t69 = 3237LL;

	t69 = (x385-(x386-(x387*x388)));

	if (t69 != -1226072038477LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MIN;
	static int16_t x395 = -420;
	volatile int64_t t70 = -100443034232416LL;

	t70 = (x393-(x394-(x395*x396)));

	if (t70 != -9223372034707297200LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x397 = INT32_MIN;
	int8_t x398 = INT8_MIN;
	uint16_t x400 = 623U;
	uint64_t t71 = 461961LLU;

	t71 = (x397-(x398-(x399*x400)));

	if (t71 != 18446744071564065434LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x401 = 13066429730970LLU;
	int32_t x402 = INT32_MAX;
	int32_t x403 = 69035;
	uint64_t x404 = 42698LLU;
	volatile uint64_t t72 = 2632LLU;

	t72 = (x401-(x402-(x403*x404)));

	if (t72 != 13067229903753LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x405 = INT16_MAX;
	volatile int8_t x406 = -55;
	uint16_t x408 = 3057U;
	volatile uint64_t t73 = 100818104361LLU;

	t73 = (x405-(x406-(x407*x408)));

	if (t73 != 29765LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x413 = INT16_MIN;
	static int64_t x415 = -948586132468212LL;
	int64_t t74 = 33948793695395399LL;

	t74 = (x413-(x414-(x415*x416)));

	if (t74 != -32251928503952653LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x417 = INT64_MAX;
	uint64_t x418 = UINT64_MAX;
	int8_t x419 = -1;
	uint16_t x420 = 1U;
	volatile uint64_t t75 = 1LLU;

	t75 = (x417-(x418-(x419*x420)));

	if (t75 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x421 = UINT64_MAX;
	uint64_t x423 = 1427158135414701689LLU;
	static int8_t x424 = 0;
	volatile uint64_t t76 = 16781548534912LLU;

	t76 = (x421-(x422-(x423*x424)));

	if (t76 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x425 = INT64_MIN;
	static uint64_t x426 = 30664LLU;
	int8_t x427 = INT8_MIN;
	int64_t x428 = -177987335937LL;
	static uint64_t t77 = 2401032454LLU;

	t77 = (x425-(x426-(x427*x428)));

	if (t77 != 9223394819233745080LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x430 = UINT32_MAX;
	volatile int16_t x431 = -1;
	int32_t x432 = 0;
	uint32_t t78 = 1U;

	t78 = (x429-(x430-(x431*x432)));

	if (t78 != 108708907U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x441 = INT16_MIN;
	static int8_t x442 = INT8_MIN;
	uint16_t x443 = UINT16_MAX;
	static int8_t x444 = -63;
	int32_t t79 = 209;

	t79 = (x441-(x442-(x443*x444)));

	if (t79 != -4161345) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x457 = INT8_MIN;
	uint8_t x458 = UINT8_MAX;
	volatile int64_t x460 = -1593LL;

	t80 = (x457-(x458-(x459*x460)));

	if (t80 != -406598LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x461 = 252LLU;
	int8_t x462 = INT8_MAX;
	uint16_t x463 = 26402U;
	uint64_t x464 = 3324232511500LLU;

	t81 = (x461-(x462-(x463*x464)));

	if (t81 != 87766386768623125LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x465 = INT8_MAX;
	uint32_t x466 = 7340927U;
	static int16_t x467 = INT16_MAX;
	volatile int16_t x468 = -15;
	volatile uint32_t t82 = 782U;

	t82 = (x465-(x466-(x467*x468)));

	if (t82 != 4287134991U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -1;
	static int8_t x470 = -1;
	uint64_t x471 = UINT64_MAX;
	int16_t x472 = -86;
	uint64_t t83 = 2401051295156545714LLU;

	t83 = (x469-(x470-(x471*x472)));

	if (t83 != 86LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x473 = -1LL;
	int64_t x474 = 145LL;
	static int32_t x475 = 29;
	int32_t x476 = -47208832;

	t84 = (x473-(x474-(x475*x476)));

	if (t84 != -1369056274LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x486 = 29740U;
	volatile uint32_t x487 = 16U;
	volatile uint32_t t85 = 11U;

	t85 = (x485-(x486-(x487*x488)));

	if (t85 != 36387U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x489 = -159308LL;
	volatile int32_t x490 = -40;
	static volatile uint64_t x491 = 1117569LLU;
	uint64_t t86 = 858LLU;

	t86 = (x489-(x490-(x491*x492)));

	if (t86 != 958301LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x493 = UINT32_MAX;
	int16_t x495 = -129;

	t87 = (x493-(x494-(x495*x496)));

	if (t87 != 4294950912U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x498 = -1;
	int64_t x499 = 21441380508LL;
	int16_t x500 = INT16_MIN;
	int64_t t88 = 890198268576972535LL;

	t88 = (x497-(x498-(x499*x500)));

	if (t88 != -702593303969791LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x501 = 3U;
	static int64_t x503 = 1764192396LL;
	static uint64_t t89 = 164161617810LLU;

	t89 = (x501-(x502-(x503*x504)));

	if (t89 != 7440320933817LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x509 = 132LLU;
	volatile uint8_t x510 = 5U;
	volatile uint64_t t90 = 278350824781229986LLU;

	t90 = (x509-(x510-(x511*x512)));

	if (t90 != 32895LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x517 = -1;
	static uint32_t x518 = 20U;
	volatile int8_t x519 = INT8_MIN;
	volatile uint32_t t91 = 25U;

	t91 = (x517-(x518-(x519*x520)));

	if (t91 != 107U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x527 = INT32_MIN;
	int64_t x528 = -1LL;
	static volatile int64_t t92 = 687052124726262159LL;

	t92 = (x525-(x526-(x527*x528)));

	if (t92 != 2147483521LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x529 = INT8_MIN;
	uint32_t x530 = UINT32_MAX;
	uint64_t x531 = 474424LLU;
	uint64_t x532 = UINT64_MAX;
	uint64_t t93 = 2LLU;

	t93 = (x529-(x530-(x531*x532)));

	if (t93 != 18446744069414109769LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x533 = INT16_MIN;
	uint32_t x534 = 18812302U;
	static int8_t x535 = -1;
	int8_t x536 = -3;
	volatile uint32_t t94 = 2U;

	t94 = (x533-(x534-(x535*x536)));

	if (t94 != 4276122229U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x538 = 1576U;
	static int64_t x539 = -11556LL;
	static int8_t x540 = -1;
	volatile int64_t t95 = -3126232308061LL;

	t95 = (x537-(x538-(x539*x540)));

	if (t95 != 10345LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x542 = 469936143207LL;
	uint32_t x543 = UINT32_MAX;
	int32_t x544 = INT32_MIN;
	int64_t t96 = -52121299662907LL;

	t96 = (x541-(x542-(x543*x544)));

	if (t96 != -467788631950LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x549 = INT64_MAX;
	uint16_t x550 = UINT16_MAX;
	static int8_t x551 = INT8_MAX;
	uint8_t x552 = UINT8_MAX;

	t97 = (x549-(x550-(x551*x552)));

	if (t97 != 9223372036854742657LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x569 = UINT8_MAX;
	volatile int64_t x570 = -9573LL;
	uint32_t x572 = 0U;

	t98 = (x569-(x570-(x571*x572)));

	if (t98 != 9828LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x573 = 450248840435322609LL;
	volatile int64_t x574 = 10164529831491895LL;
	int8_t x575 = 29;
	volatile int64_t t99 = 1413LL;

	t99 = (x573-(x574-(x575*x576)));

	if (t99 != 440084310604089075LL) { NG(); } else { ; }
	
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

