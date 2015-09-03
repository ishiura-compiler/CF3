#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = 111652760;
int16_t x8 = 9;
int64_t t0 = 15908LL;
volatile int64_t x22 = INT64_MIN;
uint64_t x24 = UINT64_MAX;
static uint32_t x31 = UINT32_MAX;
uint8_t x32 = 2U;
int16_t x38 = INT16_MIN;
int8_t x46 = INT8_MIN;
volatile uint8_t x47 = 9U;
uint32_t x57 = 5949U;
uint32_t x61 = 0U;
uint64_t x62 = 1130652372333018384LLU;
volatile int64_t x73 = INT64_MIN;
uint16_t x76 = 24106U;
int64_t t8 = 11638790196LL;
int64_t x83 = 3909LL;
static volatile uint8_t x89 = UINT8_MAX;
volatile uint64_t x92 = 522970782163102689LLU;
volatile int64_t x107 = 525119559008LL;
static volatile int64_t t17 = -36392174LL;
volatile int64_t t18 = -58252744LL;
volatile int8_t x160 = -7;
int32_t x162 = 334647930;
int16_t x169 = -1;
volatile int8_t x173 = 7;
volatile int64_t t24 = 970783219237193868LL;
static int64_t x190 = INT64_MIN;
static volatile uint32_t x207 = 0U;
int64_t x209 = INT64_MAX;
volatile int8_t x211 = INT8_MIN;
int64_t t28 = -1972450162634809604LL;
int32_t x216 = INT32_MAX;
int32_t x221 = -25;
uint16_t x222 = UINT16_MAX;
int16_t x224 = INT16_MIN;
int64_t x226 = 0LL;
int8_t x229 = INT8_MAX;
int32_t x231 = INT32_MIN;
volatile uint16_t x232 = 8759U;
int16_t x284 = INT16_MAX;
static uint8_t x289 = 17U;
int32_t x292 = -10312319;
uint64_t t42 = 1684775LLU;
static volatile int8_t x356 = INT8_MIN;
int32_t x362 = 24;
volatile uint64_t x363 = 2504083LLU;
int8_t x381 = 2;
static int8_t x382 = 1;
int16_t x392 = 930;
static volatile int32_t t48 = 32023185;
volatile int32_t t49 = -144;
int32_t t50 = -186072;
static int8_t x405 = INT8_MIN;
int64_t x422 = 59435114910LL;
uint16_t x423 = 12529U;
volatile int64_t t53 = 29361224LL;
volatile uint32_t x442 = 7319902U;
volatile uint16_t x444 = 308U;
volatile uint8_t x461 = 24U;
static int16_t x482 = INT16_MIN;
int16_t x494 = INT16_MIN;
uint8_t x515 = 11U;
static int64_t t62 = -30479794667LL;
static int32_t x519 = -1;
volatile int8_t x532 = INT8_MAX;
int32_t t64 = -456787;
int32_t x541 = -897;
volatile int32_t t65 = 251;
int64_t x549 = INT64_MAX;
volatile int64_t t67 = 180246LL;
uint64_t x556 = 4914157LLU;
static uint64_t x563 = 363061464LLU;
uint32_t x586 = UINT32_MAX;
int16_t x587 = 0;
uint32_t t72 = 31585481U;
static uint64_t x594 = UINT64_MAX;
int8_t x597 = -6;
uint8_t x600 = 1U;
volatile int32_t t74 = -20196;
static volatile int16_t x611 = 1235;
int32_t t75 = 0;
uint16_t x621 = UINT16_MAX;
volatile uint16_t x624 = UINT16_MAX;
static volatile int64_t t76 = 26509055516LL;
static int8_t x675 = INT8_MAX;
int16_t x677 = -1;
static int16_t x685 = INT16_MAX;
volatile uint32_t x688 = 578U;
volatile uint8_t x696 = 21U;
uint16_t x698 = 6027U;
uint32_t x704 = 4748117U;
static uint32_t x706 = UINT32_MAX;
static uint8_t x709 = 18U;
uint16_t x711 = 233U;
volatile int32_t t86 = 5;
int32_t x721 = -1;
uint8_t x724 = 1U;
static uint8_t x735 = 115U;
volatile int64_t t90 = -287673283100920886LL;
uint16_t x766 = 20985U;
uint32_t t91 = 44690U;
uint16_t x774 = UINT16_MAX;
static volatile int64_t t92 = 1763317325LL;
int8_t x792 = 1;
int16_t x805 = INT16_MAX;
int8_t x810 = INT8_MIN;
static int64_t t96 = 0LL;
volatile uint16_t x816 = UINT16_MAX;
uint16_t x824 = 6U;


void f0(void) {
	int64_t x5 = INT64_MIN;
	static volatile int64_t x6 = INT64_MAX;

	t0 = (x5%((x6^x7)/x8));

	if (t0 != -111652766LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = 176U;
	int64_t x23 = INT64_MAX;
	volatile uint64_t t1 = 205617555672254LLU;

	t1 = (x21%((x22^x23)/x24));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -4;
	volatile uint32_t t2 = 259852U;

	t2 = (x29%((x30^x31)/x32));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x37 = INT16_MIN;
	int64_t x39 = -1LL;
	int8_t x40 = -3;
	static int64_t t3 = -3977446LL;

	t3 = (x37%((x38^x39)/x40));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MIN;
	static uint32_t x48 = 4750U;
	int64_t t4 = 50211114960LL;

	t4 = (x45%((x46^x47)/x48));

	if (t4 != -118043LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x58 = UINT8_MAX;
	static volatile int8_t x59 = -1;
	uint16_t x60 = 15U;
	volatile uint32_t t5 = 71U;

	t5 = (x57%((x58^x59)/x60));

	if (t5 != 5949U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x63 = UINT8_MAX;
	volatile int32_t x64 = 611370511;
	uint64_t t6 = 2093827658901LLU;

	t6 = (x61%((x62^x63)/x64));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x65 = 7U;
	uint8_t x66 = UINT8_MAX;
	int32_t x67 = -376002;
	int32_t x68 = 1481;
	volatile int32_t t7 = 64741;

	t7 = (x65%((x66^x67)/x68));

	if (t7 != 7) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x74 = 3786465023780357LL;
	uint16_t x75 = UINT16_MAX;

	t8 = (x73%((x74^x75)/x76));

	if (t8 != -14866851712LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	static uint32_t x84 = 595U;
	volatile int64_t t9 = -96125LL;

	t9 = (x81%((x82^x83)/x84));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x85 = -1;
	uint64_t x86 = UINT64_MAX;
	uint8_t x87 = 1U;
	volatile int32_t x88 = INT32_MAX;
	static uint64_t t10 = 375654428821470LLU;

	t10 = (x85%((x86^x87)/x88));

	if (t10 != 3LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x90 = -1LL;
	int32_t x91 = 3408757;
	volatile uint64_t t11 = 1849066676391846108LLU;

	t11 = (x89%((x90^x91)/x92));

	if (t11 != 10LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x93 = 75U;
	static volatile uint64_t x94 = 1LLU;
	static int32_t x95 = INT32_MIN;
	uint8_t x96 = 29U;
	volatile uint64_t t12 = 18767627LLU;

	t12 = (x93%((x94^x95)/x96));

	if (t12 != 75LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x101 = UINT32_MAX;
	int32_t x102 = INT32_MAX;
	uint8_t x103 = UINT8_MAX;
	uint16_t x104 = 2U;
	volatile uint32_t t13 = 195100U;

	t13 = (x101%((x102^x103)/x104));

	if (t13 != 511U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x105 = 4U;
	static int32_t x106 = 1636940;
	uint16_t x108 = 408U;
	int64_t t14 = -82LL;

	t14 = (x105%((x106^x107)/x108));

	if (t14 != 4LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = 839171;
	int16_t x111 = -1;
	int16_t x112 = INT16_MIN;
	int32_t t15 = 16801225;

	t15 = (x109%((x110^x111)/x112));

	if (t15 != 5) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x117 = -47791893;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	int16_t x120 = INT16_MAX;
	volatile int64_t t16 = -740314044194102LL;

	t16 = (x117%((x118^x119)/x120));

	if (t16 != -47791893LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x121 = 27U;
	int64_t x122 = INT64_MAX;
	volatile int16_t x123 = INT16_MAX;
	int32_t x124 = -1;

	t17 = (x121%((x122^x123)/x124));

	if (t17 != 27LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x125 = 38U;
	int8_t x126 = INT8_MAX;
	int64_t x127 = 1024700845027975544LL;
	int32_t x128 = INT32_MIN;

	t18 = (x125%((x126^x127)/x128));

	if (t18 != 38LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = INT64_MIN;
	uint32_t x134 = 6815U;
	static int32_t x135 = -1;
	uint16_t x136 = 504U;
	int64_t t19 = -174436908244882069LL;

	t19 = (x133%((x134^x135)/x136));

	if (t19 != -1167434LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	static int32_t x151 = -66;
	int16_t x152 = -25;
	int32_t t20 = -986;

	t20 = (x149%((x150^x151)/x152));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x157 = 2U;
	int32_t x158 = INT32_MAX;
	uint8_t x159 = 12U;
	int32_t t21 = -6658699;

	t21 = (x157%((x158^x159)/x160));

	if (t21 != 2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x161 = 1;
	static int16_t x163 = -1;
	static uint8_t x164 = UINT8_MAX;
	static int32_t t22 = 13;

	t22 = (x161%((x162^x163)/x164));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x170 = 5468U;
	static uint8_t x171 = UINT8_MAX;
	int8_t x172 = INT8_MAX;
	static int32_t t23 = -156653897;

	t23 = (x169%((x170^x171)/x172));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x174 = INT64_MAX;
	static int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;

	t24 = (x173%((x174^x175)/x176));

	if (t24 != 7LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x181 = -1;
	int8_t x182 = INT8_MAX;
	volatile int64_t x183 = -1LL;
	static int8_t x184 = INT8_MAX;
	volatile int64_t t25 = -5712156LL;

	t25 = (x181%((x182^x183)/x184));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x189 = 56;
	int8_t x191 = INT8_MIN;
	uint32_t x192 = 242U;
	volatile int64_t t26 = 242001318047LL;

	t26 = (x189%((x190^x191)/x192));

	if (t26 != 56LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x205 = 40409768096LLU;
	static int32_t x206 = -1;
	int16_t x208 = 2882;
	uint64_t t27 = 1053099313701342LLU;

	t27 = (x205%((x206^x207)/x208));

	if (t27 != 1015701LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x210 = -1;
	int8_t x212 = -1;

	t28 = (x209%((x210^x211)/x212));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x213 = 15373U;
	volatile uint64_t x214 = 16050453915140464LLU;
	static int64_t x215 = -1LL;
	static volatile uint64_t t29 = 112573873121LLU;

	t29 = (x213%((x214^x215)/x216));

	if (t29 != 15373LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x223 = 2U;
	volatile int32_t t30 = 5;

	t30 = (x221%((x222^x223)/x224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x225 = INT32_MIN;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = -1;
	uint64_t t31 = 825789247LLU;

	t31 = (x225%((x226^x227)/x228));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x230 = 90U;
	volatile int32_t t32 = 497;

	t32 = (x229%((x230^x231)/x232));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x237 = -1;
	static uint8_t x238 = UINT8_MAX;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	int64_t t33 = -62307094981LL;

	t33 = (x237%((x238^x239)/x240));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	int64_t t34 = -3474537431910804921LL;

	t34 = (x241%((x242^x243)/x244));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x257 = -283;
	uint16_t x258 = 26U;
	static int32_t x259 = INT32_MIN;
	uint16_t x260 = 3298U;
	int32_t t35 = -10407;

	t35 = (x257%((x258^x259)/x260));

	if (t35 != -283) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x277 = 7322872349283949LLU;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	uint16_t x280 = UINT16_MAX;
	uint64_t t36 = 3LLU;

	t36 = (x277%((x278^x279)/x280));

	if (t36 != 4411283953261LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x281 = INT8_MAX;
	static int64_t x282 = INT64_MIN;
	static volatile uint64_t x283 = UINT64_MAX;
	static volatile uint64_t t37 = 418016LLU;

	t37 = (x281%((x282^x283)/x284));

	if (t37 != 127LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x285 = -1LL;
	int8_t x286 = -1;
	static uint64_t x287 = 302343698300921585LLU;
	int64_t x288 = INT64_MIN;
	uint64_t t38 = 30307195LLU;

	t38 = (x285%((x286^x287)/x288));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x290 = INT64_MIN;
	volatile uint32_t x291 = 5312086U;
	int64_t t39 = 3406355877693483645LL;

	t39 = (x289%((x290^x291)/x292));

	if (t39 != 17LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x317 = 63U;
	static uint32_t x318 = 15403U;
	int64_t x319 = -86412234250627836LL;
	int64_t x320 = -1LL;
	volatile int64_t t40 = -36136100454770LL;

	t40 = (x317%((x318^x319)/x320));

	if (t40 != 63LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x321 = 1566274LL;
	volatile uint8_t x322 = UINT8_MAX;
	int16_t x323 = INT16_MIN;
	static volatile uint64_t x324 = 49729892676LLU;
	volatile uint64_t t41 = 175180255LLU;

	t41 = (x321%((x322^x323)/x324));

	if (t41 != 1566274LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MAX;
	uint64_t x327 = 57053880031095LLU;
	uint32_t x328 = 99236U;

	t42 = (x325%((x326^x327)/x328));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x345 = 209307410LLU;
	int8_t x346 = INT8_MIN;
	static int32_t x347 = INT32_MIN;
	uint8_t x348 = 106U;
	static uint64_t t43 = 797638040921588LLU;

	t43 = (x345%((x346^x347)/x348));

	if (t43 != 6714630LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x350 = 3;
	int32_t x351 = INT32_MAX;
	static int16_t x352 = INT16_MIN;
	volatile int64_t t44 = 360377035482259436LL;

	t44 = (x349%((x350^x351)/x352));

	if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x353 = UINT8_MAX;
	int8_t x354 = -1;
	uint64_t x355 = 63LLU;
	volatile uint64_t t45 = 176046579639704716LLU;

	t45 = (x353%((x354^x355)/x356));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x361 = -3707109;
	int8_t x364 = 3;
	uint64_t t46 = 6958546414864095LLU;

	t46 = (x361%((x362^x363)/x364));

	if (t46 != 462215LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x383 = INT8_MIN;
	int16_t x384 = 1;
	volatile int32_t t47 = -443;

	t47 = (x381%((x382^x383)/x384));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x389 = -1;
	volatile int8_t x390 = -12;
	int16_t x391 = INT16_MIN;

	t48 = (x389%((x390^x391)/x392));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = INT16_MAX;
	static int32_t x395 = 57116;
	int32_t x396 = 73;

	t49 = (x393%((x394^x395)/x396));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = UINT16_MAX;
	uint16_t x403 = 1U;
	int16_t x404 = INT16_MIN;

	t50 = (x401%((x402^x403)/x404));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x406 = 345U;
	uint8_t x407 = 84U;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t51 = 1;

	t51 = (x405%((x406^x407)/x408));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x413 = UINT64_MAX;
	int64_t x414 = INT64_MIN;
	static volatile uint32_t x415 = 7594U;
	uint32_t x416 = UINT32_MAX;
	uint64_t t52 = 4LLU;

	t52 = (x413%((x414^x415)/x416));

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x421 = INT8_MIN;
	int16_t x424 = -1;

	t53 = (x421%((x422^x423)/x424));

	if (t53 != -128LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x437 = 49363833613543LL;
	uint32_t x438 = 42866U;
	int32_t x439 = INT32_MAX;
	static uint32_t x440 = 6U;
	int64_t t54 = 230649LL;

	t54 = (x437%((x438^x439)/x440));

	if (t54 != 254588835LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x441 = 134U;
	uint16_t x443 = 445U;
	uint32_t t55 = 356691U;

	t55 = (x441%((x442^x443)/x444));

	if (t55 != 134U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x462 = 484;
	int32_t x463 = -1;
	int8_t x464 = -1;
	static int32_t t56 = 851864697;

	t56 = (x461%((x462^x463)/x464));

	if (t56 != 24) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MAX;
	uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	uint64_t t57 = 528801286680980791LLU;

	t57 = (x477%((x478^x479)/x480));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x481 = 297545038294LL;
	int8_t x483 = INT8_MIN;
	int16_t x484 = 964;
	int64_t t58 = 63LL;

	t58 = (x481%((x482^x483)/x484));

	if (t58 != 31LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x489 = 248U;
	uint64_t x490 = UINT64_MAX;
	int64_t x491 = INT64_MIN;
	static uint32_t x492 = 229U;
	uint64_t t59 = 66080458687325870LLU;

	t59 = (x489%((x490^x491)/x492));

	if (t59 != 248LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x493 = 2U;
	int32_t x495 = 36859293;
	int32_t x496 = -567;
	static int32_t t60 = -2076;

	t60 = (x493%((x494^x495)/x496));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x501 = INT64_MIN;
	int16_t x502 = 697;
	int16_t x503 = INT16_MIN;
	uint8_t x504 = 1U;
	int64_t t61 = 200415LL;

	t61 = (x501%((x502^x503)/x504));

	if (t61 != -29765LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x513 = 18978U;
	static volatile int8_t x514 = INT8_MAX;
	static volatile int64_t x516 = -1LL;

	t62 = (x513%((x514^x515)/x516));

	if (t62 != 70LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x517 = 0;
	static int16_t x518 = INT16_MIN;
	int16_t x520 = -1;
	static volatile int32_t t63 = -366460278;

	t63 = (x517%((x518^x519)/x520));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x529 = 1;
	static uint16_t x530 = 300U;
	volatile int32_t x531 = INT32_MIN;

	t64 = (x529%((x530^x531)/x532));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int32_t x542 = INT32_MAX;
	volatile int8_t x543 = -2;
	int16_t x544 = -1;

	t65 = (x541%((x542^x543)/x544));

	if (t65 != -897) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x545 = INT8_MIN;
	uint16_t x546 = 0U;
	static volatile int64_t x547 = INT64_MIN;
	int8_t x548 = 1;
	int64_t t66 = -2269753LL;

	t66 = (x545%((x546^x547)/x548));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x550 = INT32_MAX;
	int64_t x551 = 270303829767092LL;
	uint16_t x552 = 4739U;

	t67 = (x549%((x550^x551)/x552));

	if (t67 != 911065903LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x553 = 126295LLU;
	static uint8_t x554 = UINT8_MAX;
	int64_t x555 = INT64_MAX;
	static volatile uint64_t t68 = 21471212LLU;

	t68 = (x553%((x554^x555)/x556));

	if (t68 != 126295LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x557 = INT64_MIN;
	volatile int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	int8_t x560 = INT8_MIN;
	volatile int64_t t69 = 3LL;

	t69 = (x557%((x558^x559)/x560));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x561 = -3735004;
	volatile uint64_t x562 = UINT64_MAX;
	int8_t x564 = 2;
	volatile uint64_t t70 = 58075LLU;

	t70 = (x561%((x562^x563)/x564));

	if (t70 != 359326462LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x581 = INT16_MIN;
	volatile int8_t x582 = 0;
	uint8_t x583 = UINT8_MAX;
	int8_t x584 = INT8_MAX;
	volatile int32_t t71 = -1;

	t71 = (x581%((x582^x583)/x584));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x585 = INT16_MIN;
	int32_t x588 = INT32_MIN;

	t72 = (x585%((x586^x587)/x588));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x593 = 25U;
	uint64_t x595 = 51580090858LLU;
	static uint32_t x596 = UINT32_MAX;
	volatile uint64_t t73 = 22LLU;

	t73 = (x593%((x594^x595)/x596));

	if (t73 != 25LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x598 = 1U;
	int32_t x599 = 4042438;

	t74 = (x597%((x598^x599)/x600));

	if (t74 != -6) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x609 = 679;
	volatile uint16_t x610 = 7284U;
	static int8_t x612 = 17;

	t75 = (x609%((x610^x611)/x612));

	if (t75 != 308) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x622 = INT8_MIN;
	int64_t x623 = -1823101135277016206LL;

	t76 = (x621%((x622^x623)/x624));

	if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x649 = INT8_MIN;
	int64_t x650 = INT64_MIN;
	int64_t x651 = -1LL;
	int64_t x652 = INT64_MAX;
	static volatile int64_t t77 = -2614946993LL;

	t77 = (x649%((x650^x651)/x652));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x669 = 73;
	int16_t x670 = INT16_MIN;
	int8_t x671 = INT8_MIN;
	int8_t x672 = -1;
	volatile int32_t t78 = -38;

	t78 = (x669%((x670^x671)/x672));

	if (t78 != 73) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x673 = INT16_MIN;
	static int16_t x674 = -94;
	uint64_t x676 = 57141655757LLU;
	volatile uint64_t t79 = 9LLU;

	t79 = (x673%((x674^x675)/x676));

	if (t79 != 296388976LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x678 = -1LL;
	static uint64_t x679 = 299909LLU;
	int32_t x680 = INT32_MIN;
	uint64_t t80 = 7055577LLU;

	t80 = (x677%((x678^x679)/x680));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x686 = INT64_MIN;
	static uint8_t x687 = 1U;
	volatile int64_t t81 = 116699658LL;

	t81 = (x685%((x686^x687)/x688));

	if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x693 = -1LL;
	static int64_t x694 = INT64_MIN;
	int8_t x695 = INT8_MAX;
	volatile int64_t t82 = 265982359128601LL;

	t82 = (x693%((x694^x695)/x696));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x697 = INT16_MIN;
	int32_t x699 = INT32_MIN;
	int8_t x700 = -1;
	volatile int32_t t83 = -2;

	t83 = (x697%((x698^x699)/x700));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x701 = 35U;
	volatile uint16_t x702 = UINT16_MAX;
	int64_t x703 = INT64_MIN;
	int64_t t84 = 49439659LL;

	t84 = (x701%((x702^x703)/x704));

	if (t84 != 35LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x705 = UINT32_MAX;
	static uint8_t x707 = 42U;
	static int8_t x708 = 41;
	static uint32_t t85 = 4U;

	t85 = (x705%((x706^x707)/x708));

	if (t85 != 77U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x710 = -1;
	static uint16_t x712 = 93U;

	t86 = (x709%((x710^x711)/x712));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x722 = INT32_MIN;
	int16_t x723 = INT16_MIN;
	volatile int32_t t87 = -4031;

	t87 = (x721%((x722^x723)/x724));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x725 = INT16_MIN;
	volatile int8_t x726 = INT8_MIN;
	int64_t x727 = INT64_MIN;
	uint32_t x728 = UINT32_MAX;
	volatile int64_t t88 = -6LL;

	t88 = (x725%((x726^x727)/x728));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x729 = -2;
	int8_t x730 = 3;
	int32_t x731 = -10921;
	static volatile int8_t x732 = -1;
	int32_t t89 = -38;

	t89 = (x729%((x730^x731)/x732));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x733 = 670;
	volatile int64_t x734 = INT64_MIN;
	volatile int8_t x736 = INT8_MIN;

	t90 = (x733%((x734^x735)/x736));

	if (t90 != 670LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x765 = 14575739;
	int32_t x767 = -5;
	uint32_t x768 = 393323U;

	t91 = (x765%((x766^x767)/x768));

	if (t91 != 9793U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x773 = 8004548310152886LL;
	volatile int64_t x775 = INT64_MAX;
	volatile uint16_t x776 = 72U;

	t92 = (x773%((x774^x775)/x776));

	if (t92 != 8004548310152886LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x777 = INT64_MIN;
	volatile int32_t x778 = INT32_MAX;
	static int64_t x779 = INT64_MIN;
	int32_t x780 = INT32_MAX;
	int64_t t93 = 390795LL;

	t93 = (x777%((x778^x779)/x780));

	if (t93 != -2147483649LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x789 = INT64_MIN;
	volatile int16_t x790 = INT16_MIN;
	uint64_t x791 = 66531907150602673LLU;
	uint64_t t94 = 257998LLU;

	t94 = (x789%((x790^x791)/x792));

	if (t94 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x806 = INT32_MIN;
	volatile int8_t x807 = -1;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t95 = 6048;

	t95 = (x805%((x806^x807)/x808));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x809 = -1;
	static int64_t x811 = INT64_MIN;
	int32_t x812 = INT32_MIN;

	t96 = (x809%((x810^x811)/x812));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x813 = -14367LL;
	int32_t x814 = INT32_MAX;
	volatile uint64_t x815 = UINT64_MAX;
	volatile uint64_t t97 = 1494300808LLU;

	t97 = (x813%((x814^x815)/x816));

	if (t97 != 2147502049LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x821 = INT64_MIN;
	int8_t x822 = -1;
	int16_t x823 = INT16_MIN;
	int64_t t98 = -2006557623LL;

	t98 = (x821%((x822^x823)/x824));

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x829 = INT32_MIN;
	uint16_t x830 = UINT16_MAX;
	static int32_t x831 = -1;
	int8_t x832 = 21;
	volatile int32_t t99 = 329;

	t99 = (x829%((x830^x831)/x832));

	if (t99 != -128) { NG(); } else { ; }
	
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

