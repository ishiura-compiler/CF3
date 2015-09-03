#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x8 = INT8_MAX;
static uint8_t x9 = UINT8_MAX;
static int64_t x16 = INT64_MIN;
static int64_t x23 = 23720771512LL;
uint8_t x31 = 124U;
static int8_t x32 = -1;
volatile int32_t t4 = -609167;
volatile int8_t x33 = INT8_MAX;
static int16_t x36 = INT16_MIN;
volatile uint64_t t6 = 1412LLU;
int8_t x43 = -3;
uint16_t x44 = 20U;
int64_t x45 = -1043776LL;
int64_t x48 = 852001LL;
int16_t x55 = 3;
uint32_t x67 = 842045115U;
int8_t x70 = 1;
volatile int64_t x74 = -1LL;
uint64_t x79 = 1586133991667598706LLU;
int8_t x80 = -3;
uint64_t t15 = 1654006LLU;
volatile uint64_t x87 = UINT64_MAX;
volatile uint32_t x102 = UINT32_MAX;
volatile uint64_t t19 = 22495LLU;
uint16_t x114 = UINT16_MAX;
int8_t x116 = INT8_MAX;
uint64_t x128 = UINT64_MAX;
volatile int8_t x141 = INT8_MIN;
int8_t x168 = INT8_MAX;
int32_t x181 = 382;
int32_t x182 = -4;
static int8_t x183 = 9;
uint16_t x189 = 0U;
uint32_t x206 = 3583U;
static uint8_t x207 = UINT8_MAX;
int64_t x220 = INT64_MIN;
uint64_t t34 = 65625219655LLU;
volatile uint64_t x234 = UINT64_MAX;
static uint64_t x239 = 42519LLU;
static int32_t x252 = 5;
int32_t x267 = -169247;
volatile uint64_t t41 = 4943782207LLU;
int32_t x278 = INT32_MAX;
static int16_t x282 = -1;
uint8_t x283 = 0U;
int16_t x287 = INT16_MIN;
int64_t x293 = -1LL;
int16_t x299 = -1;
uint64_t t48 = 166LLU;
int8_t x318 = -1;
static int16_t x319 = INT16_MAX;
int8_t x331 = 0;
volatile int32_t x332 = -1;
uint64_t t54 = 1602023783LLU;
uint8_t x359 = UINT8_MAX;
int8_t x373 = INT8_MIN;
int32_t x374 = 1202417;
static int16_t x377 = INT16_MIN;
uint64_t x389 = 1440884398LLU;
uint16_t x391 = UINT16_MAX;
int64_t x407 = -5406313285311LL;
volatile int64_t t63 = 575LL;
volatile uint16_t x416 = UINT16_MAX;
int8_t x418 = 6;
static volatile uint64_t t65 = 17742444366LLU;
volatile uint64_t x447 = 520651396028LLU;
uint16_t x476 = 114U;
uint32_t x485 = 1U;
volatile int8_t x489 = 0;
static uint8_t x492 = 9U;
static int32_t t72 = 331525056;
static int16_t x497 = -30;
int32_t x524 = -1;
volatile int64_t t78 = -327201LL;
uint8_t x531 = 44U;
static volatile uint64_t t80 = 176291611144917LLU;
int16_t x541 = -3;
volatile int64_t x556 = -1LL;
uint64_t x566 = UINT64_MAX;
int32_t x577 = 17;
int16_t x596 = INT16_MAX;
int64_t x597 = -1LL;
int8_t x598 = INT8_MAX;
static uint8_t x599 = 24U;
int16_t x609 = -8280;
static int16_t x611 = INT16_MIN;
volatile int32_t t91 = -4430323;
int32_t x613 = 47156;
uint16_t x624 = 9507U;
static uint64_t t96 = 219248849LLU;
volatile uint64_t x661 = UINT64_MAX;
int16_t x662 = INT16_MIN;
int16_t x663 = INT16_MIN;
uint8_t x664 = 3U;
uint64_t t98 = 33898214035LLU;
int8_t x665 = -1;
static int64_t x666 = -1LL;
volatile uint64_t t99 = 15958036LLU;


void f0(void) {
	int32_t x5 = 244133697;
	uint64_t x6 = 17081826767LLU;
	int8_t x7 = INT8_MIN;
	static uint64_t t0 = 1909032774903LLU;

	t0 = (((x5*x6)*x7)*x8);

	if (t0 != 208271466156099456LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x10 = UINT32_MAX;
	int32_t x11 = -1;
	uint32_t x12 = 101942U;
	volatile uint32_t t1 = 1165065926U;

	t1 = (((x9*x10)*x11)*x12);

	if (t1 != 25995210U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 0;
	static int32_t x14 = INT32_MAX;
	uint8_t x15 = 94U;
	volatile int64_t t2 = 10093LL;

	t2 = (((x13*x14)*x15)*x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = -129;
	static uint32_t x22 = UINT32_MAX;
	static uint64_t x24 = 6166724603374326768LLU;
	volatile uint64_t t3 = 39858290070LLU;

	t3 = (((x21*x22)*x23)*x24);

	if (t3 != 17198580900691616896LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x29 = -110;
	volatile int16_t x30 = -1;

	t4 = (((x29*x30)*x31)*x32);

	if (t4 != -13640) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x34 = 508;
	int64_t x35 = -1LL;
	int64_t t5 = -6756163232419832LL;

	t5 = (((x33*x34)*x35)*x36);

	if (t5 != 2114060288LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 318099054365LLU;
	volatile int16_t x39 = -15;
	static int16_t x40 = INT16_MAX;

	t6 = (((x37*x38)*x39)*x40);

	if (t6 != 13439422233506643968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x41 = 473U;
	int64_t x42 = -1LL;
	volatile int64_t t7 = -6701310803LL;

	t7 = (((x41*x42)*x43)*x44);

	if (t7 != 28380LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x46 = -5;
	int8_t x47 = -12;
	static volatile int64_t t8 = 3882248LL;

	t8 = (((x45*x46)*x47)*x48);

	if (t8 != -53357891746560LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x53 = 13U;
	int64_t x54 = 120796948LL;
	volatile int32_t x56 = -1;
	volatile int64_t t9 = -3388272LL;

	t9 = (((x53*x54)*x55)*x56);

	if (t9 != -4711080972LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = UINT64_MAX;
	int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	static int64_t x60 = INT64_MIN;
	uint64_t t10 = 30360LLU;

	t10 = (((x57*x58)*x59)*x60);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x61 = -1LL;
	volatile int8_t x62 = -1;
	static volatile int32_t x63 = 216110595;
	volatile int32_t x64 = INT32_MIN;
	int64_t t11 = -68415958529712LL;

	t11 = (((x61*x62)*x63)*x64);

	if (t11 != -464093968922050560LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x65 = 131U;
	volatile int16_t x66 = -192;
	volatile int32_t x68 = INT32_MIN;
	uint32_t t12 = 8119U;

	t12 = (((x65*x66)*x67)*x68);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = -5;
	uint16_t x71 = UINT16_MAX;
	int32_t x72 = -1797;
	volatile int32_t t13 = 4939231;

	t13 = (((x69*x70)*x71)*x72);

	if (t13 != 588831975) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -7;
	uint8_t x75 = 1U;
	int32_t x76 = INT32_MIN;
	volatile int64_t t14 = 28776581898331LL;

	t14 = (((x73*x74)*x75)*x76);

	if (t14 != -15032385536LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -2761495117LL;
	static int64_t x78 = -61975569LL;

	t15 = (((x77*x78)*x79)*x80);

	if (t15 != 17544218565953815618LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = 63544LLU;
	int8_t x86 = INT8_MIN;
	int8_t x88 = -1;
	uint64_t t16 = 259LLU;

	t16 = (((x85*x86)*x87)*x88);

	if (t16 != 18446744073701417984LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	static int8_t x95 = -2;
	volatile int8_t x96 = -1;
	volatile int32_t t17 = 230162;

	t17 = (((x93*x94)*x95)*x96);

	if (t17 != -8323072) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = 16254;
	int8_t x103 = INT8_MAX;
	volatile uint16_t x104 = 40U;
	uint32_t t18 = 6079U;

	t18 = (((x101*x102)*x103)*x104);

	if (t18 != 4212396976U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x105 = 276932177645845LLU;
	int64_t x106 = -1LL;
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = 12695755437LL;

	t19 = (((x105*x106)*x107)*x108);

	if (t19 != 15793237929352408369LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x113 = 56273LLU;
	static uint8_t x115 = 40U;
	uint64_t t20 = 0LLU;

	t20 = (((x113*x114)*x115)*x116);

	if (t20 != 18734283359400LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x125 = 107U;
	int8_t x126 = INT8_MAX;
	static uint16_t x127 = 781U;
	volatile uint64_t t21 = 408489673LLU;

	t21 = (((x125*x126)*x127)*x128);

	if (t21 != 18446744073698938607LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = -1;
	int64_t x130 = -1LL;
	static int32_t x131 = -1;
	volatile int32_t x132 = INT32_MIN;
	volatile int64_t t22 = -63092LL;

	t22 = (((x129*x130)*x131)*x132);

	if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = 5143U;
	uint8_t x134 = UINT8_MAX;
	static uint32_t x135 = 2634U;
	static int32_t x136 = -1;
	uint32_t t23 = 31U;

	t23 = (((x133*x134)*x135)*x136);

	if (t23 != 840568486U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x142 = UINT64_MAX;
	static volatile uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t24 = 213852LLU;

	t24 = (((x141*x142)*x143)*x144);

	if (t24 != 18428729675204263936LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x153 = 375U;
	int16_t x154 = 1;
	int64_t x155 = -1LL;
	int8_t x156 = -54;
	int64_t t25 = 362602739LL;

	t25 = (((x153*x154)*x155)*x156);

	if (t25 != 20250LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 327234461124667645LLU;
	int64_t x163 = INT64_MAX;
	static volatile int32_t x164 = INT32_MIN;
	uint64_t t26 = 3422LLU;

	t26 = (((x161*x162)*x163)*x164);

	if (t26 != 16515521724951822336LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x165 = 3U;
	volatile uint16_t x166 = 147U;
	int32_t x167 = INT32_MAX;
	static volatile uint32_t t27 = 3201945U;

	t27 = (((x165*x166)*x167)*x168);

	if (t27 != 2147427641U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x169 = 66U;
	uint32_t x170 = 5743756U;
	volatile uint8_t x171 = UINT8_MAX;
	int8_t x172 = -3;
	volatile uint32_t t28 = 18U;

	t28 = (((x169*x170)*x171)*x172);

	if (t28 != 2055535688U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x177 = INT16_MIN;
	static volatile int64_t x178 = -1LL;
	static int8_t x179 = -14;
	int32_t x180 = -160;
	volatile int64_t t29 = -266LL;

	t29 = (((x177*x178)*x179)*x180);

	if (t29 != 73400320LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x184 = 2U;
	static int32_t t30 = -771792677;

	t30 = (((x181*x182)*x183)*x184);

	if (t30 != -27504) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x190 = 11;
	int8_t x191 = -8;
	uint64_t x192 = 1657949803LLU;
	volatile uint64_t t31 = 8443647196LLU;

	t31 = (((x189*x190)*x191)*x192);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x205 = 1823881;
	int32_t x208 = INT32_MIN;
	volatile uint32_t t32 = 6U;

	t32 = (((x205*x206)*x207)*x208);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x213 = -1;
	volatile int32_t x214 = 157864;
	int8_t x215 = 12;
	volatile int8_t x216 = INT8_MAX;
	int32_t t33 = -2750803;

	t33 = (((x213*x214)*x215)*x216);

	if (t33 != -240584736) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x217 = 0;
	uint64_t x218 = 228058498547LLU;
	int32_t x219 = -108594094;

	t34 = (((x217*x218)*x219)*x220);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x233 = 62796999951LLU;
	volatile int8_t x235 = INT8_MAX;
	uint32_t x236 = UINT32_MAX;
	uint64_t t35 = 1LLU;

	t35 = (((x233*x234)*x235)*x236);

	if (t35 != 2298996143613827697LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x237 = INT8_MIN;
	volatile int8_t x238 = INT8_MAX;
	uint64_t x240 = 2348907640947853612LLU;
	volatile uint64_t t36 = 4416192219718226LLU;

	t36 = (((x237*x238)*x239)*x240);

	if (t36 != 1477634083064412672LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x245 = 0;
	volatile int8_t x246 = INT8_MIN;
	static int32_t x247 = -43565993;
	volatile uint32_t x248 = 4286U;
	uint32_t t37 = 36U;

	t37 = (((x245*x246)*x247)*x248);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x249 = UINT32_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = -3;
	uint32_t t38 = 2076728U;

	t38 = (((x249*x250)*x251)*x252);

	if (t38 != 4294967281U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x265 = 2U;
	volatile uint64_t x266 = 98035365898LLU;
	int64_t x268 = 1575632863LL;
	static uint64_t t39 = 1076315757662LLU;

	t39 = (((x265*x266)*x267)*x268);

	if (t39 != 6012707110134711276LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 419444LLU;
	int16_t x271 = INT16_MIN;
	static uint16_t x272 = 8U;
	uint64_t t40 = 889188LLU;

	t40 = (((x269*x270)*x271)*x272);

	if (t40 != 18439538190614265856LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x273 = 25609LLU;
	static int16_t x274 = -1;
	int16_t x275 = INT16_MIN;
	static uint8_t x276 = 2U;

	t41 = (((x273*x274)*x275)*x276);

	if (t41 != 1678311424LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x279 = -1;
	int32_t x280 = INT32_MIN;
	volatile uint32_t t42 = 607U;

	t42 = (((x277*x278)*x279)*x280);

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x281 = INT32_MAX;
	int32_t x284 = -1;
	static int32_t t43 = 883;

	t43 = (((x281*x282)*x283)*x284);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x285 = 2U;
	uint32_t x286 = UINT32_MAX;
	volatile int64_t x288 = 0LL;
	volatile int64_t t44 = 16160020656541939LL;

	t44 = (((x285*x286)*x287)*x288);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x294 = 199679U;
	int16_t x295 = INT16_MAX;
	int8_t x296 = 1;
	static volatile int64_t t45 = 3LL;

	t45 = (((x293*x294)*x295)*x296);

	if (t45 != -6542881793LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x297 = UINT64_MAX;
	static uint8_t x298 = UINT8_MAX;
	volatile int64_t x300 = -42097364407262LL;
	uint64_t t46 = 559532744701LLU;

	t46 = (((x297*x298)*x299)*x300);

	if (t46 != 18436009245785699806LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x301 = 0LL;
	int16_t x302 = INT16_MAX;
	uint16_t x303 = 486U;
	uint64_t x304 = UINT64_MAX;
	static volatile uint64_t t47 = 14177344412672LLU;

	t47 = (((x301*x302)*x303)*x304);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x309 = -28;
	int64_t x310 = -82LL;
	uint64_t x311 = 1635520876156341LLU;
	uint8_t x312 = UINT8_MAX;

	t48 = (((x309*x310)*x311)*x312);

	if (t48 != 16780814812827396264LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x317 = -1;
	volatile uint8_t x320 = UINT8_MAX;
	int32_t t49 = 9285178;

	t49 = (((x317*x318)*x319)*x320);

	if (t49 != 8355585) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x321 = 0;
	int16_t x322 = -1;
	volatile int16_t x323 = 644;
	int32_t x324 = INT32_MIN;
	volatile int32_t t50 = -18852126;

	t50 = (((x321*x322)*x323)*x324);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x325 = -1;
	static uint16_t x326 = 3883U;
	uint32_t x327 = 93500U;
	static int16_t x328 = 5;
	static uint32_t t51 = 47936U;

	t51 = (((x325*x326)*x327)*x328);

	if (t51 != 2479664796U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x329 = INT16_MAX;
	volatile int8_t x330 = 24;
	volatile int32_t t52 = 105824902;

	t52 = (((x329*x330)*x331)*x332);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x333 = 3755U;
	uint16_t x334 = UINT16_MAX;
	static int8_t x335 = INT8_MIN;
	uint8_t x336 = 6U;
	uint32_t t53 = 2304059U;

	t53 = (((x333*x334)*x335)*x336);

	if (t53 != 4281073920U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x337 = UINT32_MAX;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = 36243691757479LLU;
	int64_t x340 = -1LL;

	t54 = (((x337*x338)*x339)*x340);

	if (t54 != 17259110782200479744LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x357 = UINT32_MAX;
	volatile uint64_t x358 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	uint64_t t55 = 787621052504351867LLU;

	t55 = (((x357*x358)*x359)*x360);

	if (t55 != 140187732508800LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = 0U;
	int8_t x368 = 1;
	volatile uint32_t t56 = 0U;

	t56 = (((x365*x366)*x367)*x368);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x375 = UINT64_MAX;
	uint32_t x376 = UINT32_MAX;
	volatile uint64_t t57 = 146558147942225629LLU;

	t57 = (((x373*x374)*x375)*x376);

	if (t57 != 661035736313857920LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x378 = 156717LLU;
	int8_t x379 = INT8_MAX;
	int16_t x380 = 53;
	volatile uint64_t t58 = 148500292884LLU;

	t58 = (((x377*x378)*x379)*x380);

	if (t58 != 18446709507987374080LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x385 = INT8_MIN;
	static int64_t x386 = 0LL;
	uint32_t x387 = 1U;
	volatile uint64_t x388 = 226434789164283670LLU;
	volatile uint64_t t59 = 400298LLU;

	t59 = (((x385*x386)*x387)*x388);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x390 = INT64_MIN;
	volatile int64_t x392 = -77514LL;
	volatile uint64_t t60 = 7LLU;

	t60 = (((x389*x390)*x391)*x392);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x397 = INT8_MIN;
	static uint16_t x398 = 6180U;
	static uint32_t x399 = UINT32_MAX;
	static volatile int8_t x400 = INT8_MIN;
	volatile uint32_t t61 = 335275343U;

	t61 = (((x397*x398)*x399)*x400);

	if (t61 != 4193714176U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x401 = 0U;
	int64_t x402 = INT64_MIN;
	int64_t x403 = 4317580LL;
	int16_t x404 = -1;
	volatile int64_t t62 = -25054477LL;

	t62 = (((x401*x402)*x403)*x404);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x405 = -1;
	int8_t x406 = -1;
	int16_t x408 = INT16_MIN;

	t63 = (((x405*x406)*x407)*x408);

	if (t63 != 177154073733070848LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x413 = 457522487;
	static uint64_t x414 = 7456LLU;
	int8_t x415 = 0;
	volatile uint64_t t64 = 50774655LLU;

	t64 = (((x413*x414)*x415)*x416);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x417 = 106216267LL;
	uint64_t x419 = UINT64_MAX;
	volatile int32_t x420 = INT32_MIN;

	t65 = (((x417*x418)*x419)*x420);

	if (t65 != 1368586179204612096LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x437 = UINT64_MAX;
	int16_t x438 = -95;
	volatile int16_t x439 = -1;
	static uint16_t x440 = 1293U;
	static volatile uint64_t t66 = 998LLU;

	t66 = (((x437*x438)*x439)*x440);

	if (t66 != 18446744073709428781LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x445 = 10472LL;
	static volatile uint32_t x446 = 221869827U;
	volatile uint32_t x448 = 76680483U;
	uint64_t t67 = 1804566227LLU;

	t67 = (((x445*x446)*x447)*x448);

	if (t67 != 4279507483497642336LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x461 = UINT64_MAX;
	static uint8_t x462 = UINT8_MAX;
	int16_t x463 = INT16_MIN;
	int64_t x464 = 244014047727293276LL;
	volatile uint64_t t68 = 9614657LLU;

	t68 = (((x461*x462)*x463)*x464);

	if (t68 != 5271350435797663744LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x473 = 97377669375LLU;
	uint32_t x474 = UINT32_MAX;
	static int64_t x475 = 35743137450782681LL;
	volatile uint64_t t69 = 7168501LLU;

	t69 = (((x473*x474)*x475)*x476);

	if (t69 != 5932084355036908706LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x477 = -1810892LL;
	uint64_t x478 = 14505341228288965LLU;
	uint64_t x479 = UINT64_MAX;
	static volatile uint64_t x480 = 4111016788703659277LLU;
	static uint64_t t70 = 7LLU;

	t70 = (((x477*x478)*x479)*x480);

	if (t70 != 17534469406040488396LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x486 = -1;
	int16_t x487 = INT16_MIN;
	uint8_t x488 = UINT8_MAX;
	uint32_t t71 = 420U;

	t71 = (((x485*x486)*x487)*x488);

	if (t71 != 8355840U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x490 = 4;
	int32_t x491 = 234;

	t72 = (((x489*x490)*x491)*x492);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x493 = UINT16_MAX;
	volatile int16_t x494 = INT16_MIN;
	uint64_t x495 = 68268599615LLU;
	int32_t x496 = INT32_MIN;
	static volatile uint64_t t73 = 8061268LLU;

	t73 = (((x493*x494)*x495)*x496);

	if (t73 != 13092034485510209536LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x498 = 3U;
	uint16_t x499 = 250U;
	int32_t x500 = -25143;
	volatile int32_t t74 = -10;

	t74 = (((x497*x498)*x499)*x500);

	if (t74 != 565717500) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x509 = 4727U;
	int16_t x510 = -1;
	int64_t x511 = -1LL;
	static int8_t x512 = 3;
	int64_t t75 = -196LL;

	t75 = (((x509*x510)*x511)*x512);

	if (t75 != 14181LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x517 = INT16_MAX;
	int64_t x518 = -1LL;
	static volatile int8_t x519 = INT8_MAX;
	uint16_t x520 = UINT16_MAX;
	int64_t t76 = -13878161660048LL;

	t76 = (((x517*x518)*x519)*x520);

	if (t76 != -272717938815LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x521 = 31891LL;
	uint16_t x522 = UINT16_MAX;
	static int16_t x523 = INT16_MAX;
	int64_t t77 = -3748916LL;

	t77 = (((x521*x522)*x523)*x524);

	if (t77 != -68482266037395LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x525 = -2;
	int16_t x526 = 5;
	int64_t x527 = -1LL;
	int8_t x528 = INT8_MAX;

	t78 = (((x525*x526)*x527)*x528);

	if (t78 != 1270LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x529 = UINT8_MAX;
	static uint32_t x530 = 834U;
	volatile uint64_t x532 = UINT64_MAX;
	volatile uint64_t t79 = 1338069LLU;

	t79 = (((x529*x530)*x531)*x532);

	if (t79 != 18446744073700194136LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x537 = 33;
	uint16_t x538 = 14U;
	int16_t x539 = 831;
	uint64_t x540 = 26079158LLU;

	t80 = (((x537*x538)*x539)*x540);

	if (t80 != 10012362497676LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x542 = INT16_MAX;
	uint32_t x543 = 1010578U;
	static int16_t x544 = 34;
	volatile uint32_t t81 = 24192U;

	t81 = (((x541*x542)*x543)*x544);

	if (t81 != 2551110700U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x549 = INT32_MIN;
	volatile uint32_t x550 = UINT32_MAX;
	uint16_t x551 = UINT16_MAX;
	volatile uint16_t x552 = 55U;
	uint32_t t82 = 5U;

	t82 = (((x549*x550)*x551)*x552);

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x553 = UINT64_MAX;
	uint64_t x554 = 62406446568327LLU;
	static volatile int64_t x555 = 15LL;
	uint64_t t83 = 213497831625821402LLU;

	t83 = (((x553*x554)*x555)*x556);

	if (t83 != 936096698524905LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x557 = -1LL;
	int32_t x558 = -1;
	static uint64_t x559 = 8191263485331LLU;
	int16_t x560 = -1;
	static uint64_t t84 = 5937019LLU;

	t84 = (((x557*x558)*x559)*x560);

	if (t84 != 18446735882446066285LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x561 = 808134159531653LLU;
	int16_t x562 = -12;
	volatile uint8_t x563 = UINT8_MAX;
	int32_t x564 = INT32_MAX;
	uint64_t t85 = 897538LLU;

	t85 = (((x561*x562)*x563)*x564);

	if (t85 != 8388325886613540292LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x565 = INT32_MIN;
	int16_t x567 = INT16_MAX;
	int8_t x568 = -7;
	volatile uint64_t t86 = 580LLU;

	t86 = (((x565*x566)*x567)*x568);

	if (t86 != 18446251507532693504LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x578 = 0U;
	int8_t x579 = 1;
	volatile int32_t x580 = INT32_MAX;
	int32_t t87 = 249070;

	t87 = (((x577*x578)*x579)*x580);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x581 = 24468158U;
	uint8_t x582 = UINT8_MAX;
	int16_t x583 = -1;
	int32_t x584 = INT32_MAX;
	volatile uint32_t t88 = 11854U;

	t88 = (((x581*x582)*x583)*x584);

	if (t88 != 1944412994U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x593 = -1LL;
	volatile int8_t x594 = INT8_MAX;
	int32_t x595 = INT32_MAX;
	static int64_t t89 = -58133396794297LL;

	t89 = (((x593*x594)*x595)*x596);

	if (t89 != -8936557775978623LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x600 = INT16_MIN;
	static int64_t t90 = -770LL;

	t90 = (((x597*x598)*x599)*x600);

	if (t90 != 99876864LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x610 = -7;
	static int32_t x612 = -1;

	t91 = (((x609*x610)*x611)*x612);

	if (t91 != 1899233280) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x614 = INT8_MIN;
	uint64_t x615 = 7313478366007241355LLU;
	volatile int8_t x616 = INT8_MIN;
	uint64_t t92 = 8814657464847237LLU;

	t92 = (((x613*x614)*x615)*x616);

	if (t92 != 18433179839580012544LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x621 = UINT16_MAX;
	uint16_t x622 = 3U;
	uint64_t x623 = UINT64_MAX;
	volatile uint64_t t93 = 5923590452341LLU;

	t93 = (((x621*x622)*x623)*x624);

	if (t93 != 18446744071840427881LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x625 = -1942015LL;
	static int64_t x626 = -1LL;
	static int32_t x627 = -1;
	static int32_t x628 = INT32_MIN;
	volatile int64_t t94 = 1639033659LL;

	t94 = (((x625*x626)*x627)*x628);

	if (t94 != 4170445456670720LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x637 = INT8_MIN;
	static int32_t x638 = -1;
	static uint64_t x639 = UINT64_MAX;
	int32_t x640 = -1;
	volatile uint64_t t95 = 1LLU;

	t95 = (((x637*x638)*x639)*x640);

	if (t95 != 128LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x649 = -1LL;
	volatile uint64_t x650 = 8051639320282801LLU;
	int64_t x651 = -65239LL;
	int8_t x652 = INT8_MIN;

	t96 = (((x649*x650)*x651)*x652);

	if (t96 != 2427253832319872128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x657 = -6583193;
	static uint8_t x658 = 18U;
	uint32_t x659 = UINT32_MAX;
	int8_t x660 = INT8_MIN;
	uint32_t t97 = 0U;

	t97 = (((x657*x658)*x659)*x660);

	if (t97 != 2012192512U) { NG(); } else { ; }
	
}

void f98(void) {


	t98 = (((x661*x662)*x663)*x664);

	if (t98 != 18446744070488326144LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x667 = 17LLU;
	int32_t x668 = 1407;

	t99 = (((x665*x666)*x667)*x668);

	if (t99 != 23919LLU) { NG(); } else { ; }
	
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

