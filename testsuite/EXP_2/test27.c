#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = 0U;
uint32_t x8 = 6411179U;
uint32_t x13 = 215540285U;
int64_t t1 = -890872553321231847LL;
volatile int8_t x25 = INT8_MAX;
int64_t x43 = -1LL;
int16_t x65 = -3885;
int32_t t8 = 5;
static uint8_t x70 = UINT8_MAX;
int8_t x73 = INT8_MIN;
int32_t t10 = 60178;
volatile int32_t x78 = -1;
int32_t t14 = 3518;
int32_t x99 = -1;
int16_t x107 = INT16_MIN;
uint8_t x115 = 2U;
int16_t x116 = INT16_MIN;
volatile int64_t t19 = 12462302LL;
static uint8_t x119 = 0U;
uint64_t x121 = 1812842681235LLU;
uint16_t x126 = UINT16_MAX;
int16_t x130 = -3158;
volatile uint32_t x131 = 3802U;
uint64_t t23 = 124LLU;
static uint8_t x154 = 81U;
static uint32_t t26 = 5U;
uint64_t x165 = 1875LLU;
volatile int64_t t29 = 838168549890LL;
int32_t x204 = 1831;
uint64_t t33 = 2095575563644LLU;
uint8_t x217 = 41U;
uint32_t t34 = 1535454U;
uint64_t t37 = 14LLU;
uint8_t x252 = UINT8_MAX;
uint32_t x260 = 26280087U;
static uint32_t t39 = 0U;
uint32_t x262 = UINT32_MAX;
uint32_t t40 = 2339U;
static volatile int16_t x265 = INT16_MIN;
static uint32_t x266 = 5397U;
static volatile int8_t x267 = -1;
volatile int8_t x272 = INT8_MAX;
int32_t x285 = INT32_MIN;
uint16_t x286 = UINT16_MAX;
uint64_t x287 = UINT64_MAX;
volatile uint64_t t43 = 1608LLU;
int32_t x295 = 6966019;
volatile int16_t x296 = INT16_MAX;
static int64_t x313 = -8053LL;
int16_t x334 = INT16_MIN;
int64_t t50 = 174444LL;
uint64_t t51 = 113620653491LLU;
static uint64_t x345 = 272098710552LLU;
volatile int8_t x352 = INT8_MAX;
int64_t t54 = 289595LL;
static volatile int16_t x361 = INT16_MIN;
int8_t x387 = INT8_MIN;
volatile int8_t x392 = 6;
static int8_t x399 = 1;
uint64_t t60 = 3588003945LLU;
static int32_t t63 = -388554925;
int32_t x419 = -1;
static uint32_t x420 = 1341144322U;
uint32_t t64 = 8033129U;
static int8_t x421 = INT8_MIN;
int16_t x423 = 0;
static uint64_t t65 = 234071320363472LLU;
uint32_t x438 = UINT32_MAX;
int64_t x456 = INT64_MAX;
volatile int32_t x473 = INT32_MIN;
static int64_t x475 = 456993LL;
int64_t t72 = -89523689LL;
uint8_t x489 = 65U;
uint8_t x491 = 25U;
int16_t x499 = 210;
uint16_t x516 = 29609U;
static int8_t x518 = INT8_MAX;
static uint8_t x541 = 1U;
volatile uint8_t x558 = 25U;
uint64_t x560 = UINT64_MAX;
int8_t x562 = 2;
int64_t t87 = -1676592028890181409LL;
uint32_t x573 = UINT32_MAX;
int8_t x581 = INT8_MIN;
uint8_t x586 = 27U;
uint32_t t91 = 3070U;
uint16_t x597 = 531U;
uint8_t x601 = 1U;
uint8_t x616 = 93U;
uint8_t x626 = 64U;
volatile int16_t x627 = INT16_MIN;


void f0(void) {
	static volatile uint8_t x6 = 5U;
	static int8_t x7 = INT8_MAX;
	uint32_t t0 = 507876680U;

	t0 = ((x5*(x6+x7))+x8);

	if (t0 != 6411179U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -1LL;
	int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MIN;

	t1 = ((x13*(x14+x15))+x16);

	if (t1 != -8760502799763096698LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -9;
	int8_t x18 = -1;
	int16_t x19 = -1;
	volatile uint16_t x20 = 6U;
	int32_t t2 = 1007191574;

	t2 = ((x17*(x18+x19))+x20);

	if (t2 != 24) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = -7;
	volatile int32_t x22 = -42240907;
	uint32_t x23 = UINT32_MAX;
	int64_t x24 = 46270702LL;
	int64_t t3 = -1257651LL;

	t3 = ((x21*(x22+x23))+x24);

	if (t3 != 341957058LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x26 = INT8_MIN;
	int32_t x27 = 31015;
	int16_t x28 = INT16_MIN;
	int32_t t4 = -7993;

	t4 = ((x25*(x26+x27))+x28);

	if (t4 != 3889881) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x29 = 17U;
	int16_t x30 = INT16_MIN;
	static int64_t x31 = -1LL;
	int16_t x32 = INT16_MAX;
	volatile int64_t t5 = 12114857114766602LL;

	t5 = ((x29*(x30+x31))+x32);

	if (t5 != -524306LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = 0;
	uint32_t x44 = UINT32_MAX;
	volatile int64_t t6 = 250936378162LL;

	t6 = ((x41*(x42+x43))+x44);

	if (t6 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = -1;
	static uint16_t x58 = UINT16_MAX;
	static int64_t x59 = 37313153374763460LL;
	volatile uint64_t x60 = 194633760570540729LLU;
	uint64_t t7 = 646600054LLU;

	t7 = ((x57*(x58+x59))+x60);

	if (t7 != 157320607195711734LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x66 = INT8_MAX;
	int16_t x67 = INT16_MAX;
	static volatile int32_t x68 = INT32_MAX;

	t8 = ((x65*(x66+x67))+x68);

	if (t8 != 2019690457) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = -1;
	int16_t x71 = 56;
	volatile int64_t x72 = -1LL;
	int64_t t9 = -61147612449339LL;

	t9 = ((x69*(x70+x71))+x72);

	if (t9 != -312LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x74 = -1;
	int32_t x75 = 42;
	int32_t x76 = 10892;

	t10 = ((x73*(x74+x75))+x76);

	if (t10 != 5644) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = 6U;
	volatile uint64_t x79 = 1263LLU;
	int8_t x80 = 5;
	uint64_t t11 = 21308LLU;

	t11 = ((x77*(x78+x79))+x80);

	if (t11 != 7577LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x81 = -13026LL;
	int16_t x82 = -56;
	int16_t x83 = INT16_MAX;
	int64_t x84 = -1LL;
	int64_t t12 = -667038933614487094LL;

	t12 = ((x81*(x82+x83))+x84);

	if (t12 != -426093487LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x85 = INT32_MIN;
	int8_t x86 = -1;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t13 = 185692857LLU;

	t13 = ((x85*(x86+x87))+x88);

	if (t13 != 4294934528LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x89 = -1;
	int8_t x90 = INT8_MAX;
	int8_t x91 = INT8_MAX;
	int32_t x92 = -1;

	t14 = ((x89*(x90+x91))+x92);

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x93 = 449579267960LLU;
	uint32_t x94 = UINT32_MAX;
	int32_t x95 = -1;
	int64_t x96 = 13832LL;
	uint64_t t15 = 1906777LLU;

	t15 = ((x93*(x94+x95))+x96);

	if (t15 != 12466868282868746008LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = INT16_MIN;
	uint8_t x98 = 8U;
	uint32_t x100 = 14351266U;
	uint32_t t16 = 16446U;

	t16 = ((x97*(x98+x99))+x100);

	if (t16 != 14121890U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x105 = 1U;
	volatile int32_t x106 = -194422;
	static int32_t x108 = 30687;
	static volatile int32_t t17 = -305744455;

	t17 = ((x105*(x106+x107))+x108);

	if (t17 != -196503) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MAX;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	volatile uint16_t x112 = 3U;
	volatile int32_t t18 = 34905352;

	t18 = ((x109*(x110+x111))+x112);

	if (t18 != 4161412) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = -1LL;
	uint16_t x114 = UINT16_MAX;

	t19 = ((x113*(x114+x115))+x116);

	if (t19 != -98305LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x117 = 1056738546855413LLU;
	int32_t x118 = INT32_MAX;
	int32_t x120 = INT32_MIN;
	uint64_t t20 = 949351578998915913LLU;

	t20 = ((x117*(x118+x119))+x120);

	if (t20 != 10292578791503647243LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x122 = 1417U;
	static int16_t x123 = -1;
	static volatile uint64_t x124 = UINT64_MAX;
	static volatile uint64_t t21 = 156209832313929992LLU;

	t21 = ((x121*(x122+x123))+x124);

	if (t21 != 2566985236628759LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x125 = INT16_MAX;
	int16_t x127 = -754;
	uint64_t x128 = 369903LLU;
	static volatile uint64_t t22 = 555898737966LLU;

	t22 = ((x125*(x126+x127))+x128);

	if (t22 != 2123048930LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = INT8_MIN;
	static volatile uint64_t x132 = 1LLU;

	t23 = ((x129*(x130+x131))+x132);

	if (t23 != 4294884865LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = INT32_MAX;
	int16_t x134 = INT16_MIN;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = 0LLU;
	uint64_t t24 = 3LLU;

	t24 = ((x133*(x134+x135))+x136);

	if (t24 != 2147516417LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x149 = 382;
	int16_t x150 = INT16_MIN;
	volatile uint64_t x151 = UINT64_MAX;
	int8_t x152 = 1;
	uint64_t t25 = 8644012083987122LLU;

	t25 = ((x149*(x150+x151))+x152);

	if (t25 != 18446744073697033859LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x153 = 762356171U;
	int8_t x155 = INT8_MIN;
	volatile int16_t x156 = INT16_MIN;

	t26 = ((x153*(x154+x155))+x156);

	if (t26 != 2823932859U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x166 = -1;
	int64_t x167 = -15846LL;
	int16_t x168 = -1;
	volatile uint64_t t27 = 654217183LLU;

	t27 = ((x165*(x166+x167))+x168);

	if (t27 != 18446744073679838490LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x169 = -1;
	uint64_t x170 = 165744927LLU;
	volatile int16_t x171 = INT16_MAX;
	static int64_t x172 = 362482LL;
	volatile uint64_t t28 = 50647607814153938LLU;

	t28 = ((x169*(x170+x171))+x172);

	if (t28 != 18446744073544136404LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x177 = -1093948086493300LL;
	int8_t x178 = INT8_MIN;
	static int32_t x179 = -1;
	static int16_t x180 = 8024;

	t29 = ((x177*(x178+x179))+x180);

	if (t29 != 141119303157643724LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = -16045LL;
	static int32_t x182 = 3489367;
	int8_t x183 = 2;
	uint16_t x184 = UINT16_MAX;
	static int64_t t30 = -4997LL;

	t30 = ((x181*(x182+x183))+x184);

	if (t30 != -55986860070LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x193 = INT8_MAX;
	int8_t x194 = INT8_MAX;
	static volatile int16_t x195 = INT16_MAX;
	int8_t x196 = -5;
	int32_t t31 = 1;

	t31 = ((x193*(x194+x195))+x196);

	if (t31 != 4177533) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = 0;
	int64_t x202 = 2143699193170836LL;
	volatile uint64_t x203 = UINT64_MAX;
	volatile uint64_t t32 = 30491987463LLU;

	t32 = ((x201*(x202+x203))+x204);

	if (t32 != 1831LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x205 = 1;
	uint64_t x206 = 1092081658909LLU;
	volatile int32_t x207 = INT32_MIN;
	static uint16_t x208 = UINT16_MAX;

	t33 = ((x205*(x206+x207))+x208);

	if (t33 != 1089934240796LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x218 = -86;
	volatile uint8_t x219 = 12U;
	uint32_t x220 = 36302U;

	t34 = ((x217*(x218+x219))+x220);

	if (t34 != 33268U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x221 = 1;
	uint32_t x222 = 1884882246U;
	static uint64_t x223 = UINT64_MAX;
	int8_t x224 = 0;
	volatile uint64_t t35 = 314LLU;

	t35 = ((x221*(x222+x223))+x224);

	if (t35 != 1884882245LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 1U;
	volatile int16_t x227 = INT16_MIN;
	int16_t x228 = -3402;
	volatile uint32_t t36 = 2061931330U;

	t36 = ((x225*(x226+x227))+x228);

	if (t36 != 1073705654U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x241 = 43056719554282LLU;
	int8_t x242 = INT8_MAX;
	volatile int16_t x243 = INT16_MIN;
	volatile int64_t x244 = 2658758635211160LL;

	t37 = ((x241*(x242+x243))+x244);

	if (t37 != 17043988449373444014LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x249 = 35;
	volatile uint16_t x250 = 802U;
	int8_t x251 = 54;
	volatile int32_t t38 = -34037480;

	t38 = ((x249*(x250+x251))+x252);

	if (t38 != 30215) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x257 = -1;
	uint32_t x258 = 27U;
	static uint32_t x259 = UINT32_MAX;

	t39 = ((x257*(x258+x259))+x260);

	if (t39 != 26280061U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x261 = INT32_MIN;
	int8_t x263 = INT8_MIN;
	uint8_t x264 = 72U;

	t40 = ((x261*(x262+x263))+x264);

	if (t40 != 2147483720U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x268 = 93186U;
	uint32_t t41 = 3879144U;

	t41 = ((x265*(x266+x267))+x268);

	if (t41 != 4118244354U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x269 = 1717450208361LLU;
	int64_t x270 = INT64_MIN;
	int16_t x271 = INT16_MAX;
	static volatile uint64_t t42 = 1LLU;

	t42 = ((x269*(x270+x271))+x272);

	if (t42 != 9279647727832140822LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x288 = UINT16_MAX;

	t43 = ((x285*(x286+x287))+x288);

	if (t43 != 18446603340516229119LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x293 = -1;
	volatile uint64_t x294 = 0LLU;
	volatile uint64_t t44 = 13125824740794LLU;

	t44 = ((x293*(x294+x295))+x296);

	if (t44 != 18446744073702618364LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x297 = -1;
	int16_t x298 = INT16_MAX;
	int8_t x299 = -1;
	static uint32_t x300 = 10454159U;
	volatile uint32_t t45 = 9536507U;

	t45 = ((x297*(x298+x299))+x300);

	if (t45 != 10421393U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x305 = -168977976LL;
	int16_t x306 = 2;
	volatile int8_t x307 = INT8_MAX;
	int8_t x308 = INT8_MIN;
	static volatile int64_t t46 = 1014288505505588LL;

	t46 = ((x305*(x306+x307))+x308);

	if (t46 != -21798159032LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x314 = 33LL;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int64_t t47 = -902458480118616LL;

	t47 = ((x313*(x314+x315))+x316);

	if (t47 != 732267LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x325 = -1;
	volatile uint16_t x326 = 14U;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t48 = -305960550823725524LL;

	t48 = ((x325*(x326+x327))+x328);

	if (t48 != -9223372036854743054LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x333 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	static int32_t x336 = -1361459;
	uint32_t t49 = 122736U;

	t49 = ((x333*(x334+x335))+x336);

	if (t49 != 4293638733U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x337 = 211863527LL;
	int16_t x338 = 217;
	int32_t x339 = INT32_MIN;
	int16_t x340 = -1;

	t50 = ((x337*(x338+x339))+x340);

	if (t50 != -454973413865721138LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = -1;
	static volatile int64_t x342 = INT64_MIN;
	uint64_t x343 = 8478024317LLU;
	uint8_t x344 = 18U;

	t51 = ((x341*(x342+x343))+x344);

	if (t51 != 9223372028376751509LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x346 = 2U;
	int64_t x347 = INT64_MIN;
	uint16_t x348 = UINT16_MAX;
	volatile uint64_t t52 = 84333401LLU;

	t52 = ((x345*(x346+x347))+x348);

	if (t52 != 544197486639LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x349 = INT16_MAX;
	uint16_t x350 = 1395U;
	uint16_t x351 = 8U;
	volatile int32_t t53 = 87650;

	t53 = ((x349*(x350+x351))+x352);

	if (t53 != 45972228) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x353 = -205040;
	uint32_t x354 = 19855U;
	int64_t x355 = -1LL;
	volatile uint32_t x356 = UINT32_MAX;

	t54 = ((x353*(x354+x355))+x356);

	if (t54 != 224103135LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x362 = INT16_MAX;
	int64_t x363 = 7402341038LL;
	int8_t x364 = INT8_MIN;
	volatile int64_t t55 = -7467975LL;

	t55 = ((x361*(x362+x363))+x364);

	if (t55 != -242560984842368LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MAX;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MIN;
	uint64_t t56 = 18641214692661LLU;

	t56 = ((x373*(x374+x375))+x376);

	if (t56 != 9223372036858904450LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x377 = 1;
	int8_t x378 = INT8_MIN;
	int64_t x379 = -111168261827029431LL;
	int16_t x380 = INT16_MIN;
	volatile int64_t t57 = -408028789508LL;

	t57 = ((x377*(x378+x379))+x380);

	if (t57 != -111168261827062327LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x385 = UINT32_MAX;
	static int8_t x386 = -1;
	uint8_t x388 = 39U;
	uint32_t t58 = 7324608U;

	t58 = ((x385*(x386+x387))+x388);

	if (t58 != 168U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x389 = 0;
	int16_t x390 = 943;
	int16_t x391 = INT16_MIN;
	static int32_t t59 = -3438494;

	t59 = ((x389*(x390+x391))+x392);

	if (t59 != 6) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x397 = INT8_MIN;
	volatile uint64_t x398 = 1263690991658LLU;
	uint64_t x400 = 4472851346743LLU;

	t60 = ((x397*(x398+x399))+x400);

	if (t60 != 18446586794113966007LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int64_t x402 = 9LL;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = -1;
	uint64_t t61 = 94LLU;

	t61 = ((x401*(x402+x403))+x404);

	if (t61 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x405 = -1;
	volatile int8_t x406 = -6;
	volatile int8_t x407 = -2;
	int8_t x408 = INT8_MAX;
	static int32_t t62 = -521863731;

	t62 = ((x405*(x406+x407))+x408);

	if (t62 != 135) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x409 = 94U;
	volatile uint16_t x410 = 19U;
	int8_t x411 = -7;
	uint16_t x412 = 1U;

	t63 = ((x409*(x410+x411))+x412);

	if (t63 != 1129) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x417 = -19;
	uint8_t x418 = UINT8_MAX;

	t64 = ((x417*(x418+x419))+x420);

	if (t64 != 1341139496U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x422 = 1760899741LLU;
	int8_t x424 = INT8_MAX;

	t65 = ((x421*(x422+x423))+x424);

	if (t65 != 18446743848314384895LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x425 = UINT32_MAX;
	volatile uint16_t x426 = 18U;
	uint8_t x427 = UINT8_MAX;
	uint32_t x428 = 250073043U;
	volatile uint32_t t66 = 53566196U;

	t66 = ((x425*(x426+x427))+x428);

	if (t66 != 250072770U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x437 = 10U;
	volatile uint64_t x439 = 69194313093808LLU;
	uint8_t x440 = 82U;
	static uint64_t t67 = 16754535LLU;

	t67 = ((x437*(x438+x439))+x440);

	if (t67 != 691986080611112LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 16886091U;
	int32_t x443 = 0;
	static int32_t x444 = -1;
	uint32_t t68 = 442823617U;

	t68 = ((x441*(x442+x443))+x444);

	if (t68 != 727351295U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x449 = INT16_MIN;
	int16_t x450 = 290;
	uint8_t x451 = UINT8_MAX;
	static int8_t x452 = 14;
	volatile int32_t t69 = 0;

	t69 = ((x449*(x450+x451))+x452);

	if (t69 != -17858546) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x453 = INT8_MIN;
	uint16_t x454 = UINT16_MAX;
	volatile uint16_t x455 = 11204U;
	static int64_t t70 = 5347591063LL;

	t70 = ((x453*(x454+x455))+x456);

	if (t70 != 9223372036844953215LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x474 = INT16_MAX;
	uint64_t x476 = UINT64_MAX;
	uint64_t t71 = 703978238826LLU;

	t71 = ((x473*(x474+x475))+x476);

	if (t71 != 18445692322118107135LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x481 = -1LL;
	int16_t x482 = INT16_MAX;
	int8_t x483 = -1;
	int16_t x484 = INT16_MIN;

	t72 = ((x481*(x482+x483))+x484);

	if (t72 != -65534LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x485 = INT32_MIN;
	volatile int16_t x486 = INT16_MAX;
	static int64_t x487 = 2792363LL;
	int32_t x488 = -460;
	int64_t t73 = 2619541LL;

	t73 = ((x485*(x486+x487))+x488);

	if (t73 != -6066920478474700LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x490 = 83U;
	int16_t x492 = -22;
	int32_t t74 = -1851;

	t74 = ((x489*(x490+x491))+x492);

	if (t74 != 6998) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint32_t x493 = 105424U;
	uint32_t x494 = 22193210U;
	int16_t x495 = -1;
	volatile int8_t x496 = INT8_MIN;
	static volatile uint32_t t75 = 1U;

	t75 = ((x493*(x494+x495))+x496);

	if (t75 != 3234656464U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x497 = 42U;
	uint32_t x498 = 345U;
	static int8_t x500 = INT8_MIN;
	static uint32_t t76 = 136019101U;

	t76 = ((x497*(x498+x499))+x500);

	if (t76 != 23182U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x505 = -28;
	uint64_t x506 = UINT64_MAX;
	int64_t x507 = 1934748748LL;
	int16_t x508 = 554;
	uint64_t t77 = 45163180495LLU;

	t77 = ((x505*(x506+x507))+x508);

	if (t77 != 18446744019536587254LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x513 = UINT8_MAX;
	uint64_t x514 = 9706LLU;
	volatile int64_t x515 = INT64_MIN;
	volatile uint64_t t78 = 14901LLU;

	t78 = ((x513*(x514+x515))+x516);

	if (t78 != 9223372036857280447LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x517 = -2011LL;
	static uint8_t x519 = UINT8_MAX;
	int32_t x520 = -357859564;
	volatile int64_t t79 = 463159341LL;

	t79 = ((x517*(x518+x519))+x520);

	if (t79 != -358627766LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x521 = 0;
	int32_t x522 = -253629735;
	int8_t x523 = -1;
	static volatile uint32_t x524 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x521*(x522+x523))+x524);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x529 = UINT8_MAX;
	static uint64_t x530 = 1213308823LLU;
	static volatile uint8_t x531 = 11U;
	uint64_t x532 = UINT64_MAX;
	volatile uint64_t t81 = 256322LLU;

	t81 = ((x529*(x530+x531))+x532);

	if (t81 != 309393752669LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x533 = 0U;
	int64_t x534 = 7368LL;
	uint16_t x535 = 79U;
	int16_t x536 = 940;
	int64_t t82 = -1100312327837092698LL;

	t82 = ((x533*(x534+x535))+x536);

	if (t82 != 940LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x542 = UINT32_MAX;
	int8_t x543 = INT8_MAX;
	uint16_t x544 = 5946U;
	uint32_t t83 = 345680U;

	t83 = ((x541*(x542+x543))+x544);

	if (t83 != 6072U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x549 = 0;
	static volatile uint64_t x550 = 17650LLU;
	int32_t x551 = 356704;
	int16_t x552 = -1;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x549*(x550+x551))+x552);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x557 = INT16_MAX;
	uint64_t x559 = 13843LLU;
	uint64_t t85 = 79LLU;

	t85 = ((x557*(x558+x559))+x560);

	if (t85 != 454412755LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x561 = UINT64_MAX;
	volatile uint64_t x563 = UINT64_MAX;
	int8_t x564 = 59;
	static uint64_t t86 = 256743853164LLU;

	t86 = ((x561*(x562+x563))+x564);

	if (t86 != 58LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x569 = -1;
	int16_t x570 = 0;
	static int32_t x571 = INT32_MAX;
	int64_t x572 = -13LL;

	t87 = ((x569*(x570+x571))+x572);

	if (t87 != -2147483660LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x574 = UINT32_MAX;
	volatile int8_t x575 = 23;
	volatile int8_t x576 = INT8_MAX;
	volatile uint32_t t88 = 2010921U;

	t88 = ((x573*(x574+x575))+x576);

	if (t88 != 105U) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x582 = INT16_MIN;
	uint8_t x583 = 0U;
	int8_t x584 = INT8_MIN;
	int32_t t89 = 1;

	t89 = ((x581*(x582+x583))+x584);

	if (t89 != 4194176) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x585 = 3174U;
	volatile int8_t x587 = INT8_MIN;
	static int16_t x588 = INT16_MIN;
	volatile int32_t t90 = -93654516;

	t90 = ((x585*(x586+x587))+x588);

	if (t90 != -353342) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x589 = 21U;
	int8_t x590 = 0;
	static volatile uint16_t x591 = 2530U;
	volatile int32_t x592 = -1;

	t91 = ((x589*(x590+x591))+x592);

	if (t91 != 53129U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x598 = 9U;
	int16_t x599 = -1;
	int64_t x600 = 24170LL;
	int64_t t92 = 6472078LL;

	t92 = ((x597*(x598+x599))+x600);

	if (t92 != 28418LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x602 = INT16_MAX;
	static volatile int64_t x603 = INT64_MIN;
	volatile uint32_t x604 = 38U;
	static int64_t t93 = 1LL;

	t93 = ((x601*(x602+x603))+x604);

	if (t93 != -9223372036854743003LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x605 = 13;
	volatile uint16_t x606 = UINT16_MAX;
	uint64_t x607 = 3369946LLU;
	volatile uint8_t x608 = 29U;
	volatile uint64_t t94 = 426362987278916883LLU;

	t94 = ((x605*(x606+x607))+x608);

	if (t94 != 44661282LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x609 = 0;
	uint8_t x610 = 55U;
	static int16_t x611 = INT16_MIN;
	static int64_t x612 = INT64_MAX;
	static volatile int64_t t95 = INT64_MAX;

	t95 = ((x609*(x610+x611))+x612);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint16_t x613 = 207U;
	static uint8_t x614 = UINT8_MAX;
	volatile uint32_t x615 = 118147U;
	static uint32_t t96 = 0U;

	t96 = ((x613*(x614+x615))+x616);

	if (t96 != 24509307U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x617 = UINT64_MAX;
	int64_t x618 = INT64_MIN;
	int8_t x619 = INT8_MAX;
	int8_t x620 = 3;
	volatile uint64_t t97 = 1LLU;

	t97 = ((x617*(x618+x619))+x620);

	if (t97 != 9223372036854775684LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x625 = 134620253U;
	volatile int32_t x628 = 256788;
	static uint32_t t98 = 7436703U;

	t98 = ((x625*(x626+x627))+x628);

	if (t98 != 4015948372U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x633 = 126U;
	volatile int8_t x634 = -1;
	int8_t x635 = 21;
	uint32_t x636 = UINT32_MAX;
	volatile uint32_t t99 = 937160441U;

	t99 = ((x633*(x634+x635))+x636);

	if (t99 != 2519U) { NG(); } else { ; }
	
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

