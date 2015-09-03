#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 18193371885LLU;
static volatile int64_t t1 = -962LL;
int8_t x22 = INT8_MIN;
uint32_t x31 = 8037U;
int64_t t9 = 388LL;
uint64_t x71 = 64155565LLU;
volatile uint64_t t10 = 0LLU;
volatile uint64_t t11 = 8015913605030LLU;
int64_t t15 = 70571577LL;
int64_t x114 = INT64_MIN;
uint32_t x115 = 208U;
static volatile int8_t x116 = INT8_MIN;
volatile int32_t x125 = -1;
uint64_t x146 = UINT64_MAX;
volatile int8_t x147 = -1;
volatile uint64_t t19 = 4233273953322LLU;
int32_t x166 = INT32_MAX;
static int64_t x174 = INT64_MIN;
int8_t x199 = -12;
volatile uint64_t t25 = 852673699LLU;
volatile int32_t t26 = -1539;
static volatile uint32_t x205 = 39044379U;
uint32_t t27 = 94U;
int32_t x221 = INT32_MAX;
int64_t x224 = INT64_MAX;
int16_t x229 = INT16_MIN;
uint64_t t31 = 894LLU;
uint64_t x233 = 14LLU;
static int16_t x239 = -1;
int8_t x240 = 36;
volatile int32_t t33 = 161704;
volatile int32_t x244 = INT32_MIN;
int64_t x255 = INT64_MIN;
static int16_t x264 = INT16_MIN;
int8_t x265 = 0;
volatile uint8_t x268 = UINT8_MAX;
int64_t x272 = -49541LL;
uint64_t x283 = 174218629LLU;
uint64_t t43 = 58798LLU;
int16_t x287 = 7;
int64_t x288 = INT64_MIN;
int8_t x294 = -7;
volatile int32_t t46 = -373566;
uint64_t x303 = 705860873277572LLU;
int64_t x318 = -1LL;
int64_t x327 = INT64_MIN;
int8_t x340 = INT8_MAX;
int32_t x348 = INT32_MIN;
int16_t x365 = 1;
uint64_t x368 = UINT64_MAX;
volatile int16_t x369 = -141;
volatile int16_t x372 = INT16_MIN;
volatile int64_t t59 = INT64_MAX;
uint16_t x382 = 7U;
volatile int8_t x383 = 1;
uint64_t t60 = 30LLU;
int32_t x390 = INT32_MAX;
volatile uint32_t x394 = 2U;
int32_t x396 = 106645;
uint64_t t65 = 3281LLU;
uint64_t t68 = 90117524614857LLU;
int64_t t69 = 32352201823487LL;
uint32_t x439 = 2042234U;
static uint32_t t71 = 89U;
static uint32_t x442 = UINT32_MAX;
int64_t t72 = -23145921379051338LL;
uint8_t x451 = 20U;
static int16_t x454 = INT16_MIN;
int16_t x456 = INT16_MIN;
volatile int32_t t74 = -3;
int32_t x458 = -1;
int32_t x459 = -1;
int64_t x469 = INT64_MIN;
static volatile int16_t x482 = 1754;
uint16_t x504 = 34U;
volatile int64_t x511 = -1LL;
static int32_t x520 = -1;
volatile int8_t x526 = 1;
uint16_t x531 = 13659U;
int8_t x540 = -5;
int16_t x554 = INT16_MIN;
int64_t x556 = INT64_MIN;
volatile int8_t x573 = 11;
int8_t x574 = -1;
static volatile int32_t t90 = -491358;
volatile uint32_t t92 = 158U;
static volatile uint32_t x590 = UINT32_MAX;
volatile int16_t x598 = -1;
uint16_t x599 = UINT16_MAX;
volatile int32_t x604 = -8583557;
volatile uint16_t x608 = UINT16_MAX;
volatile int64_t t96 = 48622957LL;


void f0(void) {
	uint64_t x2 = 3104852540094LLU;
	int64_t x3 = INT64_MAX;
	uint16_t x4 = 5U;
	volatile uint64_t t0 = 26214LLU;

	t0 = (x1+(x2/(x3%x4)));

	if (t0 != 1570619641932LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -1;
	volatile int64_t x10 = INT64_MAX;
	int16_t x11 = -7;
	static uint8_t x12 = 55U;

	t1 = (x9+(x10/(x11%x12)));

	if (t1 != -1317624576693539402LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x21 = INT32_MIN;
	uint32_t x23 = 6574U;
	uint64_t x24 = 55891LLU;
	static uint64_t t2 = 86LLU;

	t2 = (x21+(x22/(x23%x24)));

	if (t2 != 2806013075167637LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x29 = -1;
	uint32_t x30 = 15368918U;
	uint8_t x32 = 39U;
	uint32_t t3 = 11542479U;

	t3 = (x29+(x30/(x31%x32)));

	if (t3 != 5122971U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x33 = 3U;
	static int64_t x34 = INT64_MAX;
	int64_t x35 = 1304131270435063832LL;
	int16_t x36 = -12321;
	int64_t t4 = 102663889635902LL;

	t4 = (x33+(x34/(x35%x36)));

	if (t4 != 1060645358423965LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x37 = 50010763860792LLU;
	static int32_t x38 = 7107356;
	static volatile uint64_t x39 = 343364615567LLU;
	uint16_t x40 = 20605U;
	uint64_t t5 = 1894799465128240335LLU;

	t5 = (x37+(x38/(x39%x40)));

	if (t5 != 50010763861446LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = 14;
	static uint32_t x46 = 8817U;
	uint8_t x47 = UINT8_MAX;
	volatile int16_t x48 = 29;
	uint32_t t6 = 3U;

	t6 = (x45+(x46/(x47%x48)));

	if (t6 != 397U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int32_t x59 = 94555;
	int8_t x60 = INT8_MIN;
	volatile int64_t t7 = 7LL;

	t7 = (x57+(x58/(x59%x60)));

	if (t7 != -101355736668733801LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x61 = 13649U;
	uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 7934706578671810LLU;
	volatile uint32_t x64 = UINT32_MAX;
	volatile uint64_t t8 = 7469076826LLU;

	t8 = (x61+(x62/(x63%x64)));

	if (t8 != 5110959301LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x65 = -10998;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 6337U;
	int64_t x68 = INT64_MIN;

	t9 = (x65+(x66/(x67%x68)));

	if (t9 != -10998LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x69 = -1LL;
	int32_t x70 = INT32_MAX;
	uint8_t x72 = UINT8_MAX;

	t10 = (x69+(x70/(x71%x72)));

	if (t10 != 18673769LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = -1135;
	uint64_t x74 = 4413058097473228632LLU;
	int16_t x75 = -1;
	uint64_t x76 = 337783437839482937LLU;

	t11 = (x73+(x74/(x75%x76)));

	if (t11 != 18446744073709550502LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x81 = 51U;
	int64_t x82 = -1LL;
	uint8_t x83 = UINT8_MAX;
	uint64_t x84 = 6LLU;
	volatile uint64_t t12 = 58642779231077247LLU;

	t12 = (x81+(x82/(x83%x84)));

	if (t12 != 6148914691236517256LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x89 = INT32_MIN;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = 9;
	static int8_t x92 = INT8_MIN;
	int32_t t13 = 2559985;

	t13 = (x89+(x90/(x91%x92)));

	if (t13 != -2147476367) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x101 = INT64_MAX;
	static uint16_t x102 = 392U;
	static uint16_t x103 = 2510U;
	int32_t x104 = -18176;
	int64_t t14 = INT64_MAX;

	t14 = (x101+(x102/(x103%x104)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x109 = 1U;
	int64_t x110 = 1124750294LL;
	int16_t x111 = -1;
	volatile int8_t x112 = INT8_MAX;

	t15 = (x109+(x110/(x111%x112)));

	if (t15 != -1124750293LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = -1;
	int64_t t16 = 3300LL;

	t16 = (x113+(x114/(x115%x116)));

	if (t16 != -44343134792571038LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x126 = 29U;
	volatile uint64_t x127 = UINT64_MAX;
	static int8_t x128 = INT8_MIN;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x125+(x126/(x127%x128)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = -12451586LL;
	int16_t x139 = 1;
	int32_t x140 = -2378;
	uint64_t t18 = 1921312987419047139LLU;

	t18 = (x137+(x138/(x139%x140)));

	if (t18 != 18446744073697100029LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x145 = -1;
	volatile uint32_t x148 = 132402U;

	t19 = (x145+(x146/(x147%x148)));

	if (t19 != 165859646946200LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x165 = 175314U;
	static int32_t x167 = -7082816;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t20 = 89440764U;

	t20 = (x165+(x166/(x167%x168)));

	if (t20 != 4294706839U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x169 = -1;
	static int8_t x170 = INT8_MAX;
	static volatile int64_t x171 = INT64_MAX;
	static int64_t x172 = 2532757729566LL;
	volatile int64_t t21 = 133407115228LL;

	t21 = (x169+(x170/(x171%x172)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x173 = -1;
	uint32_t x175 = UINT32_MAX;
	volatile int16_t x176 = 451;
	static volatile int64_t t22 = -11928230LL;

	t22 = (x173+(x174/(x175%x176)));

	if (t22 != -256204778801521551LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x189 = 23525629U;
	static int8_t x190 = -20;
	int64_t x191 = 1089673494174550071LL;
	volatile int64_t x192 = -25445891445250LL;
	volatile int64_t t23 = 1LL;

	t23 = (x189+(x190/(x191%x192)));

	if (t23 != 23525629LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = 2239U;
	static int8_t x194 = INT8_MIN;
	int16_t x195 = 826;
	uint16_t x196 = 4U;
	int32_t t24 = 0;

	t24 = (x193+(x194/(x195%x196)));

	if (t24 != 2175) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	volatile uint32_t x200 = 2050932021U;

	t25 = (x197+(x198/(x199%x200)));

	if (t25 != 21LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x201 = 150;
	volatile int16_t x202 = 4;
	volatile int8_t x203 = INT8_MIN;
	static uint16_t x204 = 828U;

	t26 = (x201+(x202/(x203%x204)));

	if (t26 != 150) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -36;

	t27 = (x205+(x206/(x207%x208)));

	if (t27 != 39044379U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x213 = 6;
	volatile uint8_t x214 = 2U;
	static int8_t x215 = INT8_MIN;
	uint32_t x216 = 228508U;
	volatile uint32_t t28 = 16U;

	t28 = (x213+(x214/(x215%x216)));

	if (t28 != 6U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x217 = 15534010U;
	static uint64_t x218 = 6479579947119437912LLU;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = INT64_MIN;
	uint64_t t29 = 232378239260125LLU;

	t29 = (x217+(x218/(x219%x220)));

	if (t29 != 25410117455218080LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x222 = 0;
	int8_t x223 = INT8_MIN;
	int64_t t30 = -1334514038999LL;

	t30 = (x221+(x222/(x223%x224)));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x230 = 12;
	int64_t x231 = -1LL;
	uint64_t x232 = 96744177LLU;

	t31 = (x229+(x230/(x231%x232)));

	if (t31 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x234 = INT64_MIN;
	int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	volatile uint64_t t32 = 60468872LLU;

	t32 = (x233+(x234/(x235%x236)));

	if (t32 != 18446744069414584334LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x237 = 38U;
	static volatile uint16_t x238 = 664U;

	t33 = (x237+(x238/(x239%x240)));

	if (t33 != -626) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x241 = 12;
	volatile uint16_t x242 = 468U;
	volatile int16_t x243 = -1;
	static volatile int32_t t34 = 1798606;

	t34 = (x241+(x242/(x243%x244)));

	if (t34 != -456) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x245 = 31U;
	volatile uint8_t x246 = 6U;
	int16_t x247 = 2;
	uint32_t x248 = 63U;
	volatile uint32_t t35 = 93845U;

	t35 = (x245+(x246/(x247%x248)));

	if (t35 != 34U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x253 = INT64_MIN;
	volatile int8_t x254 = -3;
	int16_t x256 = INT16_MAX;
	volatile int64_t t36 = INT64_MIN;

	t36 = (x253+(x254/(x255%x256)));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x257 = -5;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = 11286;
	uint32_t x260 = 49864409U;
	volatile uint64_t t37 = 1266LLU;

	t37 = (x257+(x258/(x259%x260)));

	if (t37 != 1634480247537612LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x261 = -5;
	uint16_t x262 = 59U;
	int64_t x263 = 71LL;
	static int64_t t38 = 65LL;

	t38 = (x261+(x262/(x263%x264)));

	if (t38 != -5LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x266 = 2336336372307123LLU;
	int16_t x267 = INT16_MAX;
	uint64_t t39 = 5256848269971098LLU;

	t39 = (x265+(x266/(x267%x268)));

	if (t39 != 18396349388245LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x269 = -316406147;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int64_t t40 = 6758885066303LL;

	t40 = (x269+(x270/(x271%x272)));

	if (t40 != -316405891LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x273 = -56;
	int64_t x274 = INT64_MIN;
	int8_t x275 = 7;
	volatile int8_t x276 = INT8_MIN;
	int64_t t41 = 35000LL;

	t41 = (x273+(x274/(x275%x276)));

	if (t41 != -1317624576693539457LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MIN;
	volatile int16_t x279 = 1636;
	int8_t x280 = INT8_MIN;
	int64_t t42 = -10129581502626591LL;

	t42 = (x277+(x278/(x279%x280)));

	if (t42 != -92233722516031406LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -1;
	static uint64_t x284 = 2LLU;

	t43 = (x281+(x282/(x283%x284)));

	if (t43 != 65534LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x285 = -15;
	int32_t x286 = 940;
	volatile int64_t t44 = 5838442472254756LL;

	t44 = (x285+(x286/(x287%x288)));

	if (t44 != 119LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x289 = INT64_MAX;
	int64_t x290 = INT64_MIN;
	volatile int32_t x291 = INT32_MIN;
	uint64_t x292 = 25LLU;
	volatile uint64_t t45 = 919936LLU;

	t45 = (x289+(x290/(x291%x292)));

	if (t45 != 9735781594457818907LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x293 = INT8_MAX;
	int16_t x295 = INT16_MAX;
	int32_t x296 = INT32_MIN;

	t46 = (x293+(x294/(x295%x296)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = -1;
	int64_t x304 = -1LL;
	volatile uint64_t t47 = 4LLU;

	t47 = (x301+(x302/(x303%x304)));

	if (t47 != 26005LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x305 = INT16_MAX;
	uint32_t x306 = 1965U;
	uint8_t x307 = 1U;
	uint64_t x308 = 32390LLU;
	volatile uint64_t t48 = 227334944583507078LLU;

	t48 = (x305+(x306/(x307%x308)));

	if (t48 != 34732LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x317 = INT16_MIN;
	static int64_t x319 = INT64_MIN;
	int8_t x320 = 60;
	int64_t t49 = 1160853287LL;

	t49 = (x317+(x318/(x319%x320)));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x321 = INT16_MAX;
	volatile int32_t x322 = 519936740;
	volatile int64_t x323 = -830784881050LL;
	static int16_t x324 = INT16_MAX;
	volatile int64_t t50 = -418507501537LL;

	t50 = (x321+(x322/(x323%x324)));

	if (t50 != -27147LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x325 = INT16_MAX;
	uint64_t x326 = 50025674521LLU;
	uint32_t x328 = 52418U;
	volatile uint64_t t51 = 66470478008LLU;

	t51 = (x325+(x326/(x327%x328)));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	static int16_t x335 = 5023;
	int16_t x336 = INT16_MAX;
	static volatile uint32_t t52 = 14U;

	t52 = (x333+(x334/(x335%x336)));

	if (t52 != 855059U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x337 = -1;
	volatile int64_t x338 = -499240LL;
	int8_t x339 = INT8_MIN;
	static int64_t t53 = -13LL;

	t53 = (x337+(x338/(x339%x340)));

	if (t53 != 499239LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x341 = INT16_MIN;
	static uint16_t x342 = 83U;
	volatile uint64_t x343 = 1489LLU;
	uint64_t x344 = UINT64_MAX;
	static uint64_t t54 = 11439912LLU;

	t54 = (x341+(x342/(x343%x344)));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x345 = -2;
	int64_t x346 = INT64_MAX;
	int8_t x347 = INT8_MIN;
	int64_t t55 = 2580848351LL;

	t55 = (x345+(x346/(x347%x348)));

	if (t55 != -72057594037927937LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x361 = 1289141367797211LLU;
	int16_t x362 = 1307;
	int16_t x363 = -1;
	int64_t x364 = 802261LL;
	uint64_t t56 = 144847231LLU;

	t56 = (x361+(x362/(x363%x364)));

	if (t56 != 1289141367795904LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x366 = -1;
	volatile int32_t x367 = INT32_MIN;
	volatile uint64_t t57 = 3931115431567LLU;

	t57 = (x365+(x366/(x367%x368)));

	if (t57 != 2LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x370 = 13LL;
	volatile int64_t x371 = INT64_MAX;
	int64_t t58 = 75527183294367LL;

	t58 = (x369+(x370/(x371%x372)));

	if (t58 != -141LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x377 = INT64_MAX;
	volatile int8_t x378 = -1;
	static volatile int64_t x379 = INT64_MAX;
	static int32_t x380 = INT32_MIN;

	t59 = (x377+(x378/(x379%x380)));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x381 = -1LL;
	uint64_t x384 = UINT64_MAX;

	t60 = (x381+(x382/(x383%x384)));

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x385 = UINT32_MAX;
	int8_t x386 = -1;
	int8_t x387 = 22;
	int32_t x388 = INT32_MAX;
	uint32_t t61 = UINT32_MAX;

	t61 = (x385+(x386/(x387%x388)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x389 = 4137361;
	int32_t x391 = INT32_MAX;
	volatile int64_t x392 = INT64_MAX;
	volatile int64_t t62 = 2175224499094913LL;

	t62 = (x389+(x390/(x391%x392)));

	if (t62 != 4137362LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x393 = INT64_MIN;
	int32_t x395 = INT32_MAX;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x393+(x394/(x395%x396)));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x401 = 26064067587777LLU;
	int32_t x402 = INT32_MAX;
	int64_t x403 = INT64_MAX;
	int16_t x404 = -4;
	volatile uint64_t t64 = 64777087032LLU;

	t64 = (x401+(x402/(x403%x404)));

	if (t64 != 26064783415659LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x405 = 2604;
	static uint64_t x406 = 4062198844137535289LLU;
	uint32_t x407 = UINT32_MAX;
	volatile uint64_t x408 = 677669LLU;

	t65 = (x405+(x406/(x407%x408)));

	if (t65 != 7017802518899LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x409 = INT16_MIN;
	int64_t x410 = INT64_MIN;
	static int64_t x411 = 37726LL;
	int64_t x412 = INT64_MIN;
	int64_t t66 = -61396LL;

	t66 = (x409+(x410/(x411%x412)));

	if (t66 != -244483169116550LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x421 = INT16_MAX;
	volatile uint64_t x422 = 26862LLU;
	int32_t x423 = -1;
	int16_t x424 = INT16_MIN;
	static volatile uint64_t t67 = 1303828LLU;

	t67 = (x421+(x422/(x423%x424)));

	if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x425 = 17U;
	int8_t x426 = INT8_MIN;
	int32_t x427 = INT32_MIN;
	uint64_t x428 = 25808181LLU;

	t68 = (x425+(x426/(x427%x428)));

	if (t68 != 737891781656LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x429 = 0;
	int8_t x430 = -2;
	int64_t x431 = -1LL;
	int64_t x432 = INT64_MIN;

	t69 = (x429+(x430/(x431%x432)));

	if (t69 != 2LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x433 = -1;
	static int32_t x434 = INT32_MAX;
	int8_t x435 = 8;
	static int64_t x436 = INT64_MIN;
	volatile int64_t t70 = -43LL;

	t70 = (x433+(x434/(x435%x436)));

	if (t70 != 268435454LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x437 = 14929U;
	uint32_t x438 = 404U;
	int32_t x440 = INT32_MAX;

	t71 = (x437+(x438/(x439%x440)));

	if (t71 != 14929U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x441 = UINT32_MAX;
	int64_t x443 = -6832265563738LL;
	uint8_t x444 = 29U;

	t72 = (x441+(x442/(x443%x444)));

	if (t72 != 4116010325LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x449 = UINT32_MAX;
	int16_t x450 = INT16_MIN;
	uint64_t x452 = 99778513875LLU;
	uint64_t t73 = 202965659LLU;

	t73 = (x449+(x450/(x451%x452)));

	if (t73 != 922337207980443237LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x453 = 484U;
	uint16_t x455 = UINT16_MAX;

	t74 = (x453+(x454/(x455%x456)));

	if (t74 != 483) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x457 = INT8_MAX;
	uint64_t x460 = 80849094845816441LLU;
	static volatile uint64_t t75 = 36LLU;

	t75 = (x457+(x458/(x459%x460)));

	if (t75 != 1529LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x470 = 1;
	static uint8_t x471 = 2U;
	uint32_t x472 = UINT32_MAX;
	static int64_t t76 = INT64_MIN;

	t76 = (x469+(x470/(x471%x472)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x481 = 0U;
	volatile uint32_t x483 = 363U;
	int32_t x484 = -1;
	uint32_t t77 = 1878525157U;

	t77 = (x481+(x482/(x483%x484)));

	if (t77 != 4U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x485 = 117064LLU;
	int16_t x486 = INT16_MIN;
	volatile int64_t x487 = -1LL;
	int64_t x488 = -2309964067LL;
	uint64_t t78 = 878476089056238LLU;

	t78 = (x485+(x486/(x487%x488)));

	if (t78 != 149832LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x501 = -9;
	int8_t x502 = INT8_MAX;
	int64_t x503 = INT64_MIN;
	int64_t t79 = -30699LL;

	t79 = (x501+(x502/(x503%x504)));

	if (t79 != -13LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x509 = INT8_MAX;
	uint32_t x510 = UINT32_MAX;
	static uint32_t x512 = 797317U;
	static int64_t t80 = 168519LL;

	t80 = (x509+(x510/(x511%x512)));

	if (t80 != -4294967168LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x513 = INT64_MIN;
	static uint16_t x514 = 31U;
	uint16_t x515 = UINT16_MAX;
	uint8_t x516 = 6U;
	int64_t t81 = -93663101908938995LL;

	t81 = (x513+(x514/(x515%x516)));

	if (t81 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x517 = 73U;
	static int8_t x518 = -1;
	static uint32_t x519 = 212106593U;
	uint32_t t82 = 57687276U;

	t82 = (x517+(x518/(x519%x520)));

	if (t82 != 93U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x521 = 103194U;
	int32_t x522 = -40315;
	uint32_t x523 = UINT32_MAX;
	int64_t x524 = INT64_MIN;
	int64_t t83 = -1948184505008933LL;

	t83 = (x521+(x522/(x523%x524)));

	if (t83 != 103194LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x525 = -105;
	int32_t x527 = INT32_MIN;
	int64_t x528 = INT64_MAX;
	int64_t t84 = 55684540LL;

	t84 = (x525+(x526/(x527%x528)));

	if (t84 != -105LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x529 = 173802LLU;
	int16_t x530 = -32;
	uint32_t x532 = 1393122008U;
	uint64_t t85 = 520LLU;

	t85 = (x529+(x530/(x531%x532)));

	if (t85 != 488244LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x533 = INT8_MIN;
	int64_t x534 = -16LL;
	int16_t x535 = 38;
	int32_t x536 = 6289161;
	volatile int64_t t86 = 882757967105790801LL;

	t86 = (x533+(x534/(x535%x536)));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x537 = 2434LLU;
	int8_t x538 = INT8_MIN;
	uint16_t x539 = 338U;
	static uint64_t t87 = 212187218LLU;

	t87 = (x537+(x538/(x539%x540)));

	if (t87 != 2392LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x541 = UINT64_MAX;
	static int8_t x542 = -1;
	int32_t x543 = INT32_MAX;
	volatile uint16_t x544 = UINT16_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (x541+(x542/(x543%x544)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x553 = 5979U;
	int64_t x555 = -1LL;
	volatile int64_t t89 = 11912879LL;

	t89 = (x553+(x554/(x555%x556)));

	if (t89 != 38747LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x575 = -1;
	int8_t x576 = INT8_MIN;

	t90 = (x573+(x574/(x575%x576)));

	if (t90 != 12) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x581 = INT64_MIN;
	int64_t x582 = -1LL;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MIN;
	int64_t t91 = INT64_MIN;

	t91 = (x581+(x582/(x583%x584)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x585 = 43;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = -1;
	int32_t x588 = INT32_MIN;

	t92 = (x585+(x586/(x587%x588)));

	if (t92 != 44U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x589 = -1;
	volatile int64_t x591 = INT64_MIN;
	uint32_t x592 = 72U;
	int64_t t93 = -250219203051298LL;

	t93 = (x589+(x590/(x591%x592)));

	if (t93 != -536870912LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x597 = 1850347481LLU;
	static volatile int8_t x600 = 6;
	volatile uint64_t t94 = 237580LLU;

	t94 = (x597+(x598/(x599%x600)));

	if (t94 != 1850347481LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x601 = 1LLU;
	volatile uint32_t x602 = 16007U;
	static volatile uint32_t x603 = 3058U;
	volatile uint64_t t95 = 1LLU;

	t95 = (x601+(x602/(x603%x604)));

	if (t95 != 6LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x605 = 0U;
	static int16_t x606 = INT16_MAX;
	int64_t x607 = 114570514544LL;

	t96 = (x605+(x606/(x607%x608)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x617 = 1U;
	volatile int64_t x618 = INT64_MAX;
	volatile int16_t x619 = -1;
	int64_t x620 = INT64_MAX;
	static int64_t t97 = 0LL;

	t97 = (x617+(x618/(x619%x620)));

	if (t97 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x625 = 1;
	int32_t x626 = INT32_MAX;
	static int8_t x627 = -1;
	static uint8_t x628 = 7U;
	volatile int32_t t98 = -524787452;

	t98 = (x625+(x626/(x627%x628)));

	if (t98 != -2147483646) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x633 = -15476;
	volatile int16_t x634 = -1;
	static int64_t x635 = INT64_MIN;
	static uint64_t x636 = 272809216LLU;
	volatile uint64_t t99 = 1078761114960458LLU;

	t99 = (x633+(x634/(x635%x636)));

	if (t99 != 8422863109939LLU) { NG(); } else { ; }
	
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

