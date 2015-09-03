#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x28 = INT64_MIN;
volatile uint64_t t2 = 1613822975718726676LLU;
static int64_t x32 = -107120665LL;
volatile uint64_t t7 = 4119705183847640LLU;
uint64_t x78 = UINT64_MAX;
static volatile int32_t t9 = -5;
volatile uint32_t x86 = 9U;
uint32_t t10 = 2514594U;
int8_t x91 = INT8_MAX;
int64_t x93 = 27187394LL;
static int16_t x94 = INT16_MIN;
int8_t x96 = INT8_MIN;
volatile int16_t x121 = INT16_MIN;
uint64_t x127 = 0LLU;
volatile uint32_t t16 = 15868U;
int16_t x170 = -10;
int32_t x179 = INT32_MIN;
int8_t x181 = -17;
uint32_t x183 = UINT32_MAX;
volatile uint64_t t20 = 9636079LLU;
int8_t x195 = INT8_MIN;
volatile int64_t t24 = 1LL;
uint32_t x215 = UINT32_MAX;
int8_t x222 = -1;
uint16_t x224 = UINT16_MAX;
int8_t x230 = -1;
static int16_t x234 = INT16_MAX;
uint64_t t30 = 81569970781106LLU;
volatile int64_t x247 = -344978223356LL;
int16_t x249 = -2;
static volatile int8_t x250 = -1;
uint64_t x252 = 1506439284640LLU;
static volatile int8_t x257 = -2;
int64_t x258 = -310827809334169LL;
int16_t x262 = INT16_MIN;
int8_t x268 = 28;
uint8_t x274 = UINT8_MAX;
uint64_t t37 = 26LLU;
int32_t x281 = 25;
uint32_t t40 = 182U;
int8_t x290 = 1;
uint64_t t42 = 1875500LLU;
uint8_t x311 = UINT8_MAX;
int8_t x312 = INT8_MAX;
int32_t x325 = INT32_MIN;
static uint32_t x331 = 32583U;
uint16_t x332 = UINT16_MAX;
int32_t x333 = INT32_MIN;
int8_t x336 = 24;
int16_t x342 = 6063;
int16_t x349 = INT16_MIN;
volatile uint32_t t50 = 5029066U;
static int32_t x368 = INT32_MIN;
int64_t x374 = -1LL;
int8_t x376 = INT8_MAX;
volatile uint16_t x380 = 68U;
int8_t x382 = -1;
uint32_t x384 = 26657123U;
volatile uint8_t x385 = 80U;
uint8_t x387 = 2U;
int16_t x400 = -1;
uint32_t x412 = 14995U;
int16_t x419 = INT16_MIN;
int16_t x421 = INT16_MIN;
uint64_t x443 = UINT64_MAX;
volatile uint64_t t65 = 1LLU;
static int16_t x484 = INT16_MIN;
volatile uint32_t t68 = 171699717U;
volatile uint64_t x488 = 12LLU;
volatile uint64_t x490 = UINT64_MAX;
int32_t x497 = -1;
volatile int32_t t73 = 7939463;
volatile uint64_t x513 = 446719258673791LLU;
int64_t x514 = -1LL;
int16_t x521 = -8;
uint32_t x527 = 263240828U;
int8_t x528 = INT8_MIN;
int64_t x530 = INT64_MIN;
int8_t x534 = INT8_MAX;
volatile int64_t t80 = 2346882749LL;
uint8_t x541 = 1U;
static int8_t x542 = 0;
uint32_t x569 = 184U;
static int32_t x577 = INT32_MIN;
static uint8_t x578 = 1U;
uint64_t x580 = UINT64_MAX;
int32_t x584 = -1;
volatile int16_t x586 = INT16_MAX;
uint8_t x588 = UINT8_MAX;
uint64_t x589 = 159187368684LLU;
int16_t x607 = -1;
uint64_t t92 = 14400180746280346LLU;
int8_t x609 = INT8_MIN;
uint64_t x611 = 640994LLU;
int8_t x613 = INT8_MAX;
volatile int8_t x614 = 25;
int64_t x615 = -1LL;
int16_t x619 = 48;
volatile uint32_t x624 = 126483U;
int8_t x637 = -3;
int64_t x650 = -1LL;
int64_t t99 = 10329003189158476LL;


void f0(void) {
	int64_t x5 = INT64_MIN;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	uint16_t x8 = 1415U;
	uint64_t t0 = 449225862976LLU;

	t0 = (x5*(x6^(x7*x8)));

	if (t0 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x13 = 0U;
	uint16_t x14 = UINT16_MAX;
	static volatile int8_t x15 = -1;
	volatile uint64_t x16 = 257468802078886487LLU;
	volatile uint64_t t1 = 8806936315647341LLU;

	t1 = (x13*(x14^(x15*x16)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	uint64_t x27 = 137421191LLU;

	t2 = (x25*(x26^(x27*x28)));

	if (t2 != 32768LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x29 = UINT32_MAX;
	volatile uint32_t x30 = 261U;
	static volatile int8_t x31 = 0;
	volatile int64_t t3 = 44270934116LL;

	t3 = (x29*(x30^(x31*x32)));

	if (t3 != 1120986463995LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = -74425334;
	uint32_t x34 = 274057U;
	static int8_t x35 = -1;
	static int32_t x36 = -5513;
	uint32_t t4 = 7U;

	t4 = (x33*(x34^(x35*x36)));

	if (t4 != 3042856448U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x37 = INT32_MIN;
	int64_t x38 = -544249662015LL;
	int8_t x39 = INT8_MIN;
	uint64_t x40 = 160409LLU;
	uint64_t t5 = 71477223404721LLU;

	t5 = (x37*(x38^(x39*x40)));

	if (t5 != 11854667049768845312LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	int16_t x47 = INT16_MAX;
	static uint32_t x48 = UINT32_MAX;
	volatile uint32_t t6 = 128U;

	t6 = (x45*(x46^(x47*x48)));

	if (t6 != 1073807360U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x61 = INT32_MAX;
	volatile int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	static volatile int64_t x64 = INT64_MIN;

	t7 = (x61*(x62^(x63*x64)));

	if (t7 != 9223301668110630912LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x77 = 9513;
	uint32_t x79 = 90329901U;
	int64_t x80 = 45LL;
	uint64_t t8 = 102664472968LLU;

	t8 = (x77*(x78^(x79*x80)));

	if (t8 != 18446705404833872518LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MAX;
	uint8_t x83 = 2U;
	static int32_t x84 = -1;

	t9 = (x81*(x82^(x83*x84)));

	if (t9 != -4161409) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x85 = INT32_MIN;
	uint8_t x87 = 5U;
	int8_t x88 = 0;

	t10 = (x85*(x86^(x87*x88)));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x89 = INT16_MAX;
	static uint16_t x90 = 1964U;
	volatile int32_t x92 = -1;
	int32_t t11 = -285689;

	t11 = (x89*(x90^(x91*x92)));

	if (t11 != -65632301) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x95 = 1;
	int64_t t12 = -95919898LL;

	t12 = (x93*(x94^(x95*x96)));

	if (t12 != 887396540160LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x122 = 80U;
	int8_t x123 = -1;
	int16_t x124 = -227;
	volatile int32_t t13 = -8221636;

	t13 = (x121*(x122^(x123*x124)));

	if (t13 != -5865472) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x125 = 7765U;
	int32_t x126 = -1;
	uint32_t x128 = 69U;
	volatile uint64_t t14 = 13031LLU;

	t14 = (x125*(x126^(x127*x128)));

	if (t14 != 18446744073709543851LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x129 = 6703U;
	volatile uint32_t x130 = 29848U;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	uint32_t t15 = 293475U;

	t15 = (x129*(x130^(x131*x132)));

	if (t15 != 1493456872U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = 60743U;
	uint32_t x164 = UINT32_MAX;

	t16 = (x161*(x162^(x163*x164)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x169 = -43;
	uint32_t x171 = 14389U;
	int64_t x172 = -1LL;
	int64_t t17 = 0LL;

	t17 = (x169*(x170^(x171*x172)));

	if (t17 != -619071LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x173 = 3;
	volatile uint32_t x174 = 48127208U;
	volatile int8_t x175 = 11;
	static volatile int8_t x176 = 0;
	uint32_t t18 = 62909U;

	t18 = (x173*(x174^(x175*x176)));

	if (t18 != 144381624U) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = INT64_MAX;
	uint64_t x180 = UINT64_MAX;
	uint64_t t19 = 794591850677LLU;

	t19 = (x177*(x178^(x179*x180)));

	if (t19 != 70368744210432LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x182 = 422;
	uint64_t x184 = 26736LLU;

	t20 = (x181*(x182^(x183*x184)));

	if (t20 != 18444791959534372458LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = 398LLU;
	int64_t x196 = -112073LL;
	volatile uint64_t t21 = 5LLU;

	t21 = (x193*(x194^(x195*x196)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x197 = 19U;
	volatile uint16_t x198 = 971U;
	uint16_t x199 = 1571U;
	uint16_t x200 = UINT16_MAX;
	static int32_t t22 = 109;

	t22 = (x197*(x198^(x199*x200)));

	if (t22 != 1956155298) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x201 = UINT64_MAX;
	int32_t x202 = 8028;
	int8_t x203 = -1;
	static volatile int64_t x204 = INT64_MAX;
	uint64_t t23 = 1313897LLU;

	t23 = (x201*(x202^(x203*x204)));

	if (t23 != 9223372036854767779LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x205 = INT8_MIN;
	static uint8_t x206 = 4U;
	int16_t x207 = 1159;
	int64_t x208 = -1LL;

	t24 = (x205*(x206^(x207*x208)));

	if (t24 != 147840LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x209 = 1793081015U;
	int32_t x210 = INT32_MIN;
	int64_t x211 = -1LL;
	int32_t x212 = INT32_MIN;
	int64_t t25 = -143411732805LL;

	t25 = (x209*(x210^(x211*x212)));

	if (t25 != -7701224318503485440LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x213 = 223U;
	int16_t x214 = -1;
	int16_t x216 = -7;
	uint32_t t26 = 1914U;

	t26 = (x213*(x214^(x215*x216)));

	if (t26 != 4294965512U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x221 = 61;
	int8_t x223 = 0;
	int32_t t27 = -78234189;

	t27 = (x221*(x222^(x223*x224)));

	if (t27 != -61) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x229 = 477954600446LLU;
	int16_t x231 = -503;
	int8_t x232 = INT8_MAX;
	uint64_t t28 = 2305LLU;

	t28 = (x229*(x230^(x231*x232)));

	if (t28 != 30531739876490480LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x233 = -1;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = UINT64_MAX;
	static uint64_t t29 = 13163958904451249LLU;

	t29 = (x233*(x234^(x235*x236)));

	if (t29 != 18446744073709518977LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x237 = 2019;
	uint64_t x238 = 2LLU;
	uint8_t x239 = 2U;
	int64_t x240 = -1514LL;

	t30 = (x237*(x238^(x239*x240)));

	if (t30 != 18446744073703442122LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x245 = 23;
	uint32_t x246 = 8013317U;
	uint16_t x248 = 263U;
	int64_t t31 = 21990LL;

	t31 = (x245*(x246^(x247*x248)));

	if (t31 != -2086773403099329LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x251 = INT8_MIN;
	static volatile uint64_t t32 = 118564625LLU;

	t32 = (x249*(x250^(x251*x252)));

	if (t32 != 18446358425252683778LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x259 = INT8_MAX;
	volatile uint8_t x260 = UINT8_MAX;
	static int64_t t33 = 711921159415LL;

	t33 = (x257*(x258^(x259*x260)));

	if (t33 != 621655618632244LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x261 = 30;
	int32_t x263 = -1;
	volatile uint16_t x264 = 10792U;
	volatile int32_t t34 = 14;

	t34 = (x261*(x262^(x263*x264)));

	if (t34 != 659280) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x265 = INT16_MIN;
	int32_t x266 = -1;
	volatile uint32_t x267 = 76U;
	volatile uint32_t t35 = 6493823U;

	t35 = (x265*(x266^(x267*x268)));

	if (t35 != 69763072U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = -95757218547LL;
	int32_t x271 = INT32_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	static uint64_t t36 = 2267351338503298277LLU;

	t36 = (x269*(x270^(x271*x272)));

	if (t36 != 18446719108010491891LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x273 = 1U;
	int64_t x275 = -69217208332828LL;
	volatile uint64_t x276 = 9LLU;

	t37 = (x273*(x274^(x275*x276)));

	if (t37 != 18446121118834556411LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x277 = INT8_MIN;
	uint16_t x278 = 123U;
	static uint32_t x279 = 3U;
	uint32_t x280 = 6317U;
	static uint32_t t38 = 12740708U;

	t38 = (x277*(x278^(x279*x280)));

	if (t38 != 4292526592U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	int32_t x284 = 0;
	static volatile int32_t t39 = -716126;

	t39 = (x281*(x282^(x283*x284)));

	if (t39 != -819200) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x285 = UINT32_MAX;
	static int32_t x286 = INT32_MIN;
	uint32_t x287 = 6724U;
	static uint32_t x288 = 2U;

	t40 = (x285*(x286^(x287*x288)));

	if (t40 != 2147470200U) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x289 = 0U;
	volatile uint16_t x291 = UINT16_MAX;
	int16_t x292 = -1;
	volatile int32_t t41 = 33428164;

	t41 = (x289*(x290^(x291*x292)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x293 = 934458527LLU;
	int64_t x294 = 1LL;
	int8_t x295 = INT8_MIN;
	volatile uint64_t x296 = UINT64_MAX;

	t42 = (x293*(x294^(x295*x296)));

	if (t42 != 120545149983LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x309 = -8;
	uint64_t x310 = 634149068904LLU;
	static uint64_t t43 = 835907LLU;

	t43 = (x309*(x310^(x311*x312)));

	if (t43 != 18446739000517134520LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x321 = INT32_MIN;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = 20U;
	uint32_t x324 = 6863529U;
	uint32_t t44 = 52258090U;

	t44 = (x321*(x322^(x323*x324)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	uint64_t x328 = 1830646093299058505LLU;
	uint64_t t45 = 119530335LLU;

	t45 = (x325*(x326^(x327*x328)));

	if (t45 != 16357586493906092032LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x329 = 92U;
	static int8_t x330 = -2;
	uint32_t t46 = 17574473U;

	t46 = (x329*(x330^(x331*x332)));

	if (t46 != 1118420356U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x334 = -1;
	static volatile int64_t x335 = -1LL;
	int64_t t47 = -28278073269LL;

	t47 = (x333*(x334^(x335*x336)));

	if (t47 != -49392123904LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x341 = -1;
	uint8_t x343 = 6U;
	int16_t x344 = 1;
	int32_t t48 = 15;

	t48 = (x341*(x342^(x343*x344)));

	if (t48 != -6057) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x345 = INT16_MIN;
	volatile int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	int16_t x348 = INT16_MIN;
	volatile uint64_t t49 = 7095575LLU;

	t49 = (x345*(x346^(x347*x348)));

	if (t49 != 70367670435840LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x350 = INT32_MAX;
	static int8_t x351 = -13;
	volatile uint32_t x352 = 1U;

	t50 = (x349*(x350^(x351*x352)));

	if (t50 != 4294574080U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x365 = 1U;
	int32_t x366 = -1;
	volatile uint64_t x367 = 1LLU;
	volatile uint64_t t51 = 5869038336873LLU;

	t51 = (x365*(x366^(x367*x368)));

	if (t51 != 2147483647LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile int64_t x371 = -109139LL;
	volatile int32_t x372 = INT32_MIN;
	int64_t t52 = 3630LL;

	t52 = (x369*(x370^(x371*x372)));

	if (t52 != 234374217859200LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x373 = 84U;
	static volatile int64_t x375 = 289494200LL;
	int64_t t53 = 119229LL;

	t53 = (x373*(x374^(x375*x376)));

	if (t53 != -3088324125684LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = 1U;
	int64_t x379 = -5282472728LL;
	volatile int64_t t54 = 243607288606699124LL;

	t54 = (x377*(x378^(x379*x380)));

	if (t54 != 45978642624384LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x381 = 0;
	volatile uint64_t x383 = 1109108LLU;
	volatile uint64_t t55 = 958245LLU;

	t55 = (x381*(x382^(x383*x384)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x386 = 1619990LLU;
	static int8_t x388 = -1;
	volatile uint64_t t56 = 13153455654LLU;

	t56 = (x385*(x386^(x387*x388)));

	if (t56 != 18446744073579952256LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = 25U;
	int8_t x391 = INT8_MIN;
	int64_t x392 = -1LL;
	volatile int64_t t57 = -27LL;

	t57 = (x389*(x390^(x391*x392)));

	if (t57 != -153LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x397 = 40806U;
	volatile int32_t x398 = INT32_MIN;
	static int32_t x399 = 501344;
	volatile uint32_t t58 = 30264U;

	t58 = (x397*(x398^(x399*x400)));

	if (t58 != 1016993216U) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x405 = -2;
	int16_t x406 = -1;
	int16_t x407 = -1;
	static int16_t x408 = 1253;
	volatile int32_t t59 = -580;

	t59 = (x405*(x406^(x407*x408)));

	if (t59 != -2504) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x409 = INT32_MIN;
	static uint32_t x410 = 215U;
	int8_t x411 = 0;
	uint32_t t60 = 59110307U;

	t60 = (x409*(x410^(x411*x412)));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x417 = 1500300534LL;
	int8_t x418 = INT8_MIN;
	uint64_t x420 = 4027444061LLU;
	uint64_t t61 = 702379051LLU;

	t61 = (x417*(x418^(x419*x420)));

	if (t61 != 7688201719851549952LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x422 = UINT64_MAX;
	int32_t x423 = -35;
	int32_t x424 = -28;
	static volatile uint64_t t62 = 133846302719LLU;

	t62 = (x421*(x422^(x423*x424)));

	if (t62 != 32145408LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x437 = 395LL;
	uint8_t x438 = UINT8_MAX;
	int8_t x439 = 1;
	static int32_t x440 = INT32_MIN;
	volatile int64_t t63 = 14389LL;

	t63 = (x437*(x438^(x439*x440)));

	if (t63 != -848255940235LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x441 = -111521;
	int8_t x442 = INT8_MAX;
	int8_t x444 = INT8_MAX;
	uint64_t t64 = 85312696192424733LLU;

	t64 = (x441*(x442^(x443*x444)));

	if (t64 != 223042LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x449 = INT64_MIN;
	int64_t x450 = INT64_MAX;
	uint64_t x451 = 449724556984489LLU;
	uint8_t x452 = 92U;

	t65 = (x449*(x450^(x451*x452)));

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x457 = -1;
	volatile int32_t x458 = INT32_MAX;
	volatile int16_t x459 = INT16_MIN;
	volatile int32_t x460 = -1;
	static int32_t t66 = 9287;

	t66 = (x457*(x458^(x459*x460)));

	if (t66 != -2147450879) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x469 = -1;
	uint64_t x470 = 421LLU;
	int64_t x471 = -2967444159789LL;
	int32_t x472 = -450;
	volatile uint64_t t67 = 651LLU;

	t67 = (x469*(x470^(x471*x472)));

	if (t67 != 18445408723837646657LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x481 = 694U;
	int8_t x482 = -1;
	static int32_t x483 = -1;

	t68 = (x481*(x482^(x483*x484)));

	if (t68 != 4272225610U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x485 = 1977U;
	int8_t x486 = INT8_MAX;
	int16_t x487 = INT16_MIN;
	uint64_t t69 = 1624028416091035LLU;

	t69 = (x485*(x486^(x487*x488)));

	if (t69 != 18446744072932414663LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x489 = UINT32_MAX;
	uint8_t x491 = 0U;
	int8_t x492 = 1;
	volatile uint64_t t70 = 505902LLU;

	t70 = (x489*(x490^(x491*x492)));

	if (t70 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x493 = 3;
	uint8_t x494 = 0U;
	int16_t x495 = -1;
	volatile uint64_t x496 = 104183853LLU;
	volatile uint64_t t71 = 8724063601311608134LLU;

	t71 = (x493*(x494^(x495*x496)));

	if (t71 != 18446744073397000057LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x498 = -1;
	volatile int64_t x499 = -535457496LL;
	static int32_t x500 = INT32_MIN;
	int64_t t72 = 845596759LL;

	t72 = (x497*(x498^(x499*x500)));

	if (t72 != 1149886216859025409LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x509 = -1;
	int16_t x510 = 49;
	volatile int8_t x511 = 11;
	int16_t x512 = INT16_MIN;

	t73 = (x509*(x510^(x511*x512)));

	if (t73 != 360399) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x515 = -1;
	static uint64_t x516 = 288779608340LLU;
	volatile uint64_t t74 = 16601174391748LLU;

	t74 = (x513*(x514^(x515*x516)));

	if (t74 != 140817597033238125LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x517 = -1LL;
	static volatile int32_t x518 = -485761;
	volatile uint64_t x519 = 2536LLU;
	volatile int64_t x520 = -60518322LL;
	volatile uint64_t t75 = 461523LLU;

	t75 = (x517*(x518^(x519*x520)));

	if (t75 != 18446743920234917169LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x522 = 1573242047U;
	uint64_t x523 = UINT64_MAX;
	int8_t x524 = INT8_MIN;
	volatile uint64_t t76 = 3LLU;

	t76 = (x521*(x522^(x523*x524)));

	if (t76 != 18446744061123616264LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x525 = INT16_MIN;
	uint16_t x526 = 2965U;
	volatile uint32_t t77 = 6U;

	t77 = (x525*(x526^(x527*x528)));

	if (t77 != 456491008U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x529 = INT64_MIN;
	volatile uint64_t x531 = 6285LLU;
	int64_t x532 = INT64_MAX;
	volatile uint64_t t78 = 1371LLU;

	t78 = (x529*(x530^(x531*x532)));

	if (t78 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x533 = -280743;
	int8_t x535 = -1;
	uint32_t x536 = 184851U;
	volatile uint32_t t79 = 8171U;

	t79 = (x533*(x534^(x535*x536)));

	if (t79 != 381564354U) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x537 = 10647LL;
	static int8_t x538 = -1;
	uint32_t x539 = 447300U;
	int8_t x540 = INT8_MAX;

	t80 = (x537*(x538^(x539*x540)));

	if (t80 != 45123691596165LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x543 = 0;
	static uint64_t x544 = 12751501313414LLU;
	uint64_t t81 = 3836LLU;

	t81 = (x541*(x542^(x543*x544)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x545 = -10;
	int64_t x546 = INT64_MAX;
	int32_t x547 = -1;
	uint64_t x548 = 490203255567714LLU;
	uint64_t t82 = 14605LLU;

	t82 = (x545*(x546^(x547*x548)));

	if (t82 != 18441842041153874486LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x549 = 29;
	int16_t x550 = -55;
	int16_t x551 = -263;
	int64_t x552 = -812193LL;
	int64_t t83 = 248248880822283423LL;

	t83 = (x549*(x550^(x551*x552)));

	if (t83 != -6194595402LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x553 = 6863216LLU;
	uint32_t x554 = 19U;
	int32_t x555 = 1974;
	uint16_t x556 = 202U;
	uint64_t t84 = 942725887754568801LLU;

	t84 = (x553*(x554^(x555*x556)));

	if (t84 != 2736604431760LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x557 = UINT8_MAX;
	static int32_t x558 = INT32_MIN;
	static int32_t x559 = INT32_MIN;
	static uint32_t x560 = 11593U;
	uint32_t t85 = 15U;

	t85 = (x557*(x558^(x559*x560)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x570 = -17;
	static int8_t x571 = INT8_MIN;
	volatile uint64_t x572 = 2195710484537224LLU;
	uint64_t t86 = 11355458962LLU;

	t86 = (x569*(x570^(x571*x572)));

	if (t86 != 14819885184401593288LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x579 = UINT32_MAX;
	static volatile uint64_t t87 = 1217185595LLU;

	t87 = (x577*(x578^(x579*x580)));

	if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x581 = 13409U;
	int64_t x582 = 4691547LL;
	int32_t x583 = 11873896;
	int64_t t88 = -104858841866141217LL;

	t88 = (x581*(x582^(x583*x584)));

	if (t88 != -213295313693LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x585 = -23921336175LL;
	int16_t x587 = -1;
	volatile int64_t t89 = -26301LL;

	t89 = (x585*(x586^(x587*x588)));

	if (t89 != 777778324393950LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x590 = 1434U;
	static int16_t x591 = 2937;
	volatile int8_t x592 = INT8_MIN;
	volatile uint64_t t90 = 220091LLU;

	t90 = (x589*(x590^(x591*x592)));

	if (t90 != 1115273462975103992LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x601 = 20U;
	uint16_t x602 = 3415U;
	int64_t x603 = -1LL;
	int32_t x604 = -1;
	int64_t t91 = -10309728037489LL;

	t91 = (x601*(x602^(x603*x604)));

	if (t91 != 68280LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x605 = 255673601515LL;
	uint64_t x606 = UINT64_MAX;
	uint8_t x608 = UINT8_MAX;

	t92 = (x605*(x606^(x607*x608)));

	if (t92 != 64941094784810LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x610 = INT8_MAX;
	int16_t x612 = INT16_MIN;
	volatile uint64_t t93 = 2860909587013806LLU;

	t93 = (x609*(x610^(x611*x612)));

	if (t93 != 2688523681920LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x616 = 1293159LLU;
	volatile uint64_t t94 = 70534876252LLU;

	t94 = (x613*(x614^(x615*x616)));

	if (t94 != 18446744073545317248LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x617 = UINT64_MAX;
	static int8_t x618 = INT8_MIN;
	volatile int8_t x620 = INT8_MIN;
	volatile uint64_t t95 = 1311914185LLU;

	t95 = (x617*(x618^(x619*x620)));

	if (t95 != 18446744073709545600LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x621 = 11735U;
	uint16_t x622 = UINT16_MAX;
	uint8_t x623 = UINT8_MAX;
	uint32_t t96 = 15649U;

	t96 = (x621*(x622^(x623*x624)));

	if (t96 != 1080960542U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x638 = 0U;
	int64_t x639 = 40220961873806LL;
	volatile uint16_t x640 = UINT16_MAX;
	volatile int64_t t97 = -7426932251092358LL;

	t97 = (x637*(x638^(x639*x640)));

	if (t97 != -7907642209199628630LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x641 = 14161874693LL;
	uint8_t x642 = UINT8_MAX;
	int8_t x643 = -1;
	static int8_t x644 = -1;
	static int64_t t98 = -469LL;

	t98 = (x641*(x642^(x643*x644)));

	if (t98 != 3597116172022LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x649 = UINT16_MAX;
	uint16_t x651 = 64U;
	int32_t x652 = 12915;

	t99 = (x649*(x650^(x651*x652)));

	if (t99 != -54168675135LL) { NG(); } else { ; }
	
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

