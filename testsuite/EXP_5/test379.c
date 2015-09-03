#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 299927354572912541LLU;
volatile uint64_t t4 = 4348410839139190756LLU;
static volatile uint64_t t5 = 2829650450168125LLU;
uint16_t x51 = UINT16_MAX;
uint8_t x56 = UINT8_MAX;
int64_t x62 = 32997639LL;
int64_t t8 = 10217051334LL;
int16_t x78 = -9;
static volatile int64_t x93 = -1LL;
int32_t x95 = -437574;
volatile int8_t x100 = -1;
volatile int64_t t12 = 87949LL;
int64_t x109 = -1LL;
int64_t t15 = 5620150LL;
int32_t x122 = -1;
static volatile uint32_t x123 = 2256414U;
int32_t x127 = -281410372;
int64_t x129 = INT64_MIN;
volatile uint8_t x143 = 0U;
volatile uint32_t t20 = 8166U;
volatile int64_t x145 = -1LL;
int8_t x146 = -7;
int32_t x153 = -11;
volatile int32_t t23 = 1989;
volatile uint64_t t24 = 2118733604587044877LLU;
int16_t x166 = INT16_MAX;
static volatile uint16_t x167 = UINT16_MAX;
uint8_t x173 = 44U;
int64_t x181 = INT64_MIN;
int32_t x199 = -150890;
int8_t x200 = 1;
int32_t t31 = 163259;
uint64_t x202 = UINT64_MAX;
static volatile uint64_t t34 = 1LLU;
volatile int32_t x217 = INT32_MAX;
uint64_t x219 = 1618492287699176655LLU;
volatile uint16_t x220 = 4800U;
int8_t x224 = INT8_MIN;
int64_t x225 = -1021666013LL;
int16_t x226 = 11877;
int64_t x228 = INT64_MIN;
uint16_t x232 = UINT16_MAX;
int64_t t38 = -8LL;
volatile uint64_t x235 = 42LLU;
volatile int32_t x247 = INT32_MIN;
int8_t x263 = 14;
int64_t x265 = 34205861866688385LL;
static int32_t x268 = -336;
static uint8_t x276 = UINT8_MAX;
uint8_t x277 = 34U;
volatile int8_t x278 = INT8_MIN;
volatile int32_t t49 = 6;
uint32_t x281 = 576214U;
static uint64_t x286 = 211904792634LLU;
volatile int16_t x295 = -1402;
volatile uint64_t t53 = 260852874318093545LLU;
int64_t x297 = -1LL;
int32_t x323 = 5466049;
uint8_t x324 = UINT8_MAX;
uint64_t x341 = 11579968256LLU;
int64_t x344 = INT64_MIN;
uint64_t x353 = UINT64_MAX;
static uint8_t x363 = 1U;
volatile int64_t t65 = 6579601486665LL;
int8_t x370 = 1;
int8_t x371 = 29;
uint32_t x377 = 4U;
volatile uint32_t x390 = 10U;
int32_t x391 = -97;
uint16_t x392 = UINT16_MAX;
volatile int64_t t71 = -71460505LL;
uint16_t x411 = 111U;
int8_t x420 = INT8_MIN;
int64_t t75 = -87510LL;
int32_t t76 = -229291676;
int16_t x427 = INT16_MIN;
static int8_t x438 = INT8_MIN;
uint64_t x445 = 402844280587814LLU;
uint64_t x462 = 4LLU;
static int64_t x463 = INT64_MIN;
volatile int32_t x464 = -1;
uint32_t x467 = 705U;
static volatile uint16_t x473 = UINT16_MAX;
volatile int64_t t83 = -5LL;
int16_t x486 = -1;
int64_t t86 = -465502079LL;
volatile int8_t x510 = INT8_MIN;
volatile int32_t t89 = 593104;
uint8_t x522 = 107U;
uint32_t x531 = UINT32_MAX;
volatile int64_t x534 = -1LL;
static uint32_t x539 = UINT32_MAX;
volatile int64_t x542 = -1LL;
int64_t t97 = 11725498325688197LL;
int8_t x574 = -3;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int16_t x2 = INT16_MIN;
	uint16_t x3 = 38U;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 1544916873177266LL;

	t0 = (x1-((x2*x3)/x4));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = UINT8_MAX;
	static int8_t x15 = -8;
	int8_t x16 = INT8_MIN;

	t1 = (x13-((x14*x15)/x16));

	if (t1 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x21 = -104330LL;
	int16_t x22 = -1;
	int64_t x23 = -1424081549915LL;
	static int8_t x24 = INT8_MAX;
	static volatile int64_t t2 = 640954LL;

	t2 = (x21-((x22*x23)/x24));

	if (t2 != -11213344880LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MAX;
	int8_t x26 = 8;
	int64_t x27 = -1LL;
	int8_t x28 = -1;
	static volatile int64_t t3 = -13LL;

	t3 = (x25-((x26*x27)/x28));

	if (t3 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = 12445LL;
	int8_t x31 = INT8_MIN;
	uint64_t x32 = 458261515LLU;

	t4 = (x29-((x30*x31)/x32));

	if (t4 != 18446744033455802585LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x45 = 427376219225012630LLU;
	uint32_t x46 = 31690879U;
	volatile uint64_t x47 = 3795757LLU;
	int32_t x48 = -62;

	t5 = (x45-((x46*x47)/x48));

	if (t5 != 427376219225012630LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = -1LL;
	uint64_t x50 = 100LLU;
	int8_t x52 = INT8_MIN;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x49-((x50*x51)/x52));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x53 = 6130423218907LLU;
	volatile uint16_t x54 = 1434U;
	uint16_t x55 = 1252U;
	static uint64_t t7 = 2443709563LLU;

	t7 = (x53-((x54*x55)/x56));

	if (t7 != 6130423211867LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x61 = 57;
	static int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;

	t8 = (x61-((x62*x63)/x64));

	if (t8 != -1081266634695LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x77 = UINT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	int64_t x80 = 207LL;
	static uint64_t t9 = 32223LLU;

	t9 = (x77-((x78*x79)/x80));

	if (t9 != 18446744073709550191LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x89 = INT8_MIN;
	static int32_t x90 = -104103;
	uint32_t x91 = 328401U;
	volatile int64_t x92 = 10LL;
	volatile int64_t t10 = 1333199366LL;

	t10 = (x89-((x90*x91)/x92));

	if (t10 != -17221034LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x94 = -1;
	uint64_t x96 = 4580195LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x93-((x94*x95)/x96));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x97 = INT32_MIN;
	static int16_t x98 = -1;
	int64_t x99 = 384LL;

	t12 = (x97-((x98*x99)/x100));

	if (t12 != -2147484032LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x101 = -106634;
	static uint32_t x102 = 11329U;
	uint64_t x103 = UINT64_MAX;
	volatile uint8_t x104 = UINT8_MAX;
	uint64_t t13 = 125829189LLU;

	t13 = (x101-((x102*x103)/x104));

	if (t13 != 18374403900871368354LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x105 = INT32_MIN;
	volatile int8_t x106 = -1;
	static int16_t x107 = -1;
	int64_t x108 = -1LL;
	int64_t t14 = 6LL;

	t14 = (x105-((x106*x107)/x108));

	if (t14 != -2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x110 = -478;
	int32_t x111 = -6;
	static volatile int32_t x112 = -539197230;

	t15 = (x109-((x110*x111)/x112));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x113 = 0;
	uint16_t x114 = 14436U;
	int8_t x115 = INT8_MIN;
	volatile int8_t x116 = INT8_MAX;
	int32_t t16 = 6639968;

	t16 = (x113-((x114*x115)/x116));

	if (t16 != 14549) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x121 = 227452U;
	uint16_t x124 = 7784U;
	volatile uint32_t t17 = 132987642U;

	t17 = (x121-((x122*x123)/x124));

	if (t17 != 4294643270U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x125 = INT32_MIN;
	int64_t x126 = -14013LL;
	int8_t x128 = -1;
	int64_t t18 = 510693156LL;

	t18 = (x125-((x126*x127)/x128));

	if (t18 != 3941256059188LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x130 = 0U;
	static volatile int32_t x131 = -1;
	int32_t x132 = -1;
	int64_t t19 = INT64_MIN;

	t19 = (x129-((x130*x131)/x132));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x141 = 12996U;
	volatile uint32_t x142 = UINT32_MAX;
	static volatile int16_t x144 = INT16_MAX;

	t20 = (x141-((x142*x143)/x144));

	if (t20 != 12996U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	volatile int64_t t21 = -496879457641LL;

	t21 = (x145-((x146*x147)/x148));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x149 = UINT16_MAX;
	static int16_t x150 = INT16_MAX;
	int8_t x151 = 1;
	int16_t x152 = INT16_MIN;
	int32_t t22 = -11;

	t22 = (x149-((x150*x151)/x152));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x154 = -1;
	int16_t x155 = -1;
	static volatile int8_t x156 = -1;

	t23 = (x153-((x154*x155)/x156));

	if (t23 != -10) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x157 = INT8_MIN;
	static uint64_t x158 = 736740490615426244LLU;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;

	t24 = (x157-((x158*x159)/x160));

	if (t24 != 18446360089981723676LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x165 = 484217312151405LL;
	volatile uint16_t x168 = 234U;
	static int64_t t25 = 27797573683LL;

	t25 = (x165-((x166*x167)/x168));

	if (t25 != 484217302974545LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x169 = UINT8_MAX;
	static int16_t x170 = INT16_MAX;
	volatile uint64_t x171 = 9LLU;
	static uint8_t x172 = UINT8_MAX;
	uint64_t t26 = 162738225512595LLU;

	t26 = (x169-((x170*x171)/x172));

	if (t26 != 18446744073709550715LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x174 = 84182866U;
	volatile int8_t x175 = -11;
	volatile int16_t x176 = INT16_MAX;
	volatile uint32_t t27 = 183255900U;

	t27 = (x173-((x174*x175)/x176));

	if (t27 != 4294864525U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x177 = INT32_MAX;
	int64_t x178 = 22LL;
	volatile int8_t x179 = -32;
	static volatile int32_t x180 = -1;
	static int64_t t28 = 37LL;

	t28 = (x177-((x178*x179)/x180));

	if (t28 != 2147482943LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x182 = 8U;
	uint8_t x183 = UINT8_MAX;
	uint64_t x184 = 375LLU;
	volatile uint64_t t29 = 292781628193052LLU;

	t29 = (x181-((x182*x183)/x184));

	if (t29 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x189 = 2U;
	int16_t x190 = INT16_MIN;
	volatile uint8_t x191 = UINT8_MAX;
	volatile uint16_t x192 = 59U;
	volatile int32_t t30 = -680440;

	t30 = (x189-((x190*x191)/x192));

	if (t30 != 141626) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x197 = -13;
	int8_t x198 = INT8_MIN;

	t31 = (x197-((x198*x199)/x200));

	if (t31 != -19313933) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x201 = INT64_MIN;
	uint8_t x203 = 6U;
	uint64_t x204 = 236314LLU;
	uint64_t t32 = 7LLU;

	t32 = (x201-((x202*x203)/x204));

	if (t32 != 9223293976544875804LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x209 = 0;
	static uint32_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	int32_t x212 = INT32_MIN;
	int64_t t33 = 15117400LL;

	t33 = (x209-((x210*x211)/x212));

	if (t33 != -4294967296LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x213 = -1;
	uint64_t x214 = 18938965LLU;
	int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MAX;

	t34 = (x213-((x214*x215)/x216));

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x218 = UINT8_MAX;
	volatile uint64_t t35 = 393966162142589LLU;

	t35 = (x217-((x218*x219)/x220));

	if (t35 != 18445309250077518615LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x221 = 6713924371LLU;
	volatile uint8_t x222 = 8U;
	volatile int32_t x223 = -84;
	volatile uint64_t t36 = 34094417810076LLU;

	t36 = (x221-((x222*x223)/x224));

	if (t36 != 6713924366LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x227 = UINT32_MAX;
	int64_t t37 = -1431LL;

	t37 = (x225-((x226*x227)/x228));

	if (t37 != -1021666013LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x229 = -1LL;
	int8_t x230 = INT8_MIN;
	static volatile int8_t x231 = -43;

	t38 = (x229-((x230*x231)/x232));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x233 = INT32_MAX;
	volatile uint64_t x234 = 1094761636218282LLU;
	static volatile int64_t x236 = -1LL;
	static volatile uint64_t t39 = 27164273231LLU;

	t39 = (x233-((x234*x235)/x236));

	if (t39 != 2147483647LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x237 = 49997615163930797LLU;
	static uint64_t x238 = 2478134745122199359LLU;
	static volatile uint64_t x239 = 171325621929LLU;
	uint16_t x240 = 47U;
	uint64_t t40 = 470468253784877289LLU;

	t40 = (x237-((x238*x239)/x240));

	if (t40 != 18197134977588411486LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x241 = INT32_MAX;
	static int16_t x242 = 547;
	int16_t x243 = INT16_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t41 = INT32_MAX;

	t41 = (x241-((x242*x243)/x244));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x245 = INT64_MAX;
	static int8_t x246 = 0;
	static int32_t x248 = -7;
	static volatile int64_t t42 = INT64_MAX;

	t42 = (x245-((x246*x247)/x248));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 0U;
	uint8_t x254 = 3U;
	volatile uint8_t x255 = 25U;
	static int64_t x256 = -1LL;
	static int64_t t43 = -36970026LL;

	t43 = (x253-((x254*x255)/x256));

	if (t43 != 75LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = -12;
	int64_t x258 = -1LL;
	static int32_t x259 = INT32_MAX;
	volatile int64_t x260 = INT64_MIN;
	int64_t t44 = 64085368436LL;

	t44 = (x257-((x258*x259)/x260));

	if (t44 != -12LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x261 = INT64_MAX;
	volatile uint64_t x262 = 41147LLU;
	int32_t x264 = 3508047;
	uint64_t t45 = 70692679LLU;

	t45 = (x261-((x262*x263)/x264));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x266 = UINT64_MAX;
	uint32_t x267 = 344933182U;
	static volatile uint64_t t46 = 27457335375550LLU;

	t46 = (x265-((x266*x267)/x268));

	if (t46 != 34205861866688385LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = -60;
	uint8_t x271 = UINT8_MAX;
	int8_t x272 = -41;
	volatile uint32_t t47 = 2048417592U;

	t47 = (x269-((x270*x271)/x272));

	if (t47 != 4294966922U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = 4U;
	volatile int8_t x275 = -13;
	int32_t t48 = INT32_MAX;

	t48 = (x273-((x274*x275)/x276));

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x279 = 195;
	uint16_t x280 = 2U;

	t49 = (x277-((x278*x279)/x280));

	if (t49 != 12514) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x282 = INT16_MIN;
	volatile int32_t x283 = -1;
	uint8_t x284 = 1U;
	volatile uint32_t t50 = 136222280U;

	t50 = (x281-((x282*x283)/x284));

	if (t50 != 543446U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x285 = 5U;
	int16_t x287 = -1;
	static int16_t x288 = INT16_MIN;
	volatile uint64_t t51 = 300LLU;

	t51 = (x285-((x286*x287)/x288));

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x289 = 0U;
	int8_t x290 = -28;
	volatile int8_t x291 = -4;
	int16_t x292 = INT16_MIN;
	int32_t t52 = 11;

	t52 = (x289-((x290*x291)/x292));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = 4;
	volatile uint64_t x296 = UINT64_MAX;

	t53 = (x293-((x294*x295)/x296));

	if (t53 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x298 = 0U;
	uint8_t x299 = 7U;
	int32_t x300 = INT32_MIN;
	int64_t t54 = 85416257LL;

	t54 = (x297-((x298*x299)/x300));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = INT8_MAX;
	volatile uint32_t x307 = UINT32_MAX;
	int32_t x308 = 6;
	volatile uint32_t t55 = 489076329U;

	t55 = (x305-((x306*x307)/x308));

	if (t55 != 3579139307U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x309 = -4224;
	int32_t x310 = INT32_MIN;
	uint32_t x311 = 70489350U;
	int8_t x312 = INT8_MIN;
	volatile uint32_t t56 = 2404841U;

	t56 = (x309-((x310*x311)/x312));

	if (t56 != 4294963072U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x317 = 0U;
	volatile uint32_t x318 = 10884713U;
	int64_t x319 = -1LL;
	volatile int8_t x320 = -3;
	volatile int64_t t57 = 118949670354357LL;

	t57 = (x317-((x318*x319)/x320));

	if (t57 != -3628237LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x321 = INT8_MIN;
	static uint64_t x322 = 2444LLU;
	volatile uint64_t t58 = 5901LLU;

	t58 = (x321-((x322*x323)/x324));

	if (t58 != 18446744073657163160LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x325 = INT16_MIN;
	static volatile int32_t x326 = -4112978;
	uint8_t x327 = 4U;
	volatile uint8_t x328 = 98U;
	volatile int32_t t59 = 388109991;

	t59 = (x325-((x326*x327)/x328));

	if (t59 != 135108) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x329 = 7U;
	int64_t x330 = -6945844645LL;
	static int32_t x331 = 654061;
	int32_t x332 = -10;
	volatile int64_t t60 = -497511LL;

	t60 = (x329-((x330*x331)/x332));

	if (t60 != -454300609435327LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MIN;
	uint64_t t61 = 3877106225LLU;

	t61 = (x341-((x342*x343)/x344));

	if (t61 != 11579968256LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x345 = 12457798184374LLU;
	uint8_t x346 = 8U;
	uint8_t x347 = 13U;
	volatile uint64_t x348 = 343941LLU;
	volatile uint64_t t62 = 1582LLU;

	t62 = (x345-((x346*x347)/x348));

	if (t62 != 12457798184374LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x354 = -8;
	int64_t x355 = -1LL;
	uint32_t x356 = 93254U;
	static uint64_t t63 = UINT64_MAX;

	t63 = (x353-((x354*x355)/x356));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x361 = 4U;
	volatile uint32_t x362 = UINT32_MAX;
	uint32_t x364 = 13U;
	volatile uint32_t t64 = 574712U;

	t64 = (x361-((x362*x363)/x364));

	if (t64 != 3964585201U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x365 = -1LL;
	uint16_t x366 = 116U;
	volatile int64_t x367 = 16494LL;
	uint16_t x368 = UINT16_MAX;

	t65 = (x365-((x366*x367)/x368));

	if (t65 != -30LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x369 = INT64_MAX;
	static int32_t x372 = INT32_MIN;
	int64_t t66 = INT64_MAX;

	t66 = (x369-((x370*x371)/x372));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x373 = 56262321003556LLU;
	volatile int8_t x374 = -53;
	volatile uint8_t x375 = UINT8_MAX;
	static volatile int64_t x376 = INT64_MAX;
	volatile uint64_t t67 = 354974843125LLU;

	t67 = (x373-((x374*x375)/x376));

	if (t67 != 56262321003556LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x378 = -1LL;
	uint16_t x379 = UINT16_MAX;
	static int64_t x380 = -6164708127710351LL;
	static volatile int64_t t68 = 2758313183341LL;

	t68 = (x377-((x378*x379)/x380));

	if (t68 != 4LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x385 = -1;
	volatile int64_t x386 = -1LL;
	volatile int16_t x387 = 2130;
	static int8_t x388 = INT8_MIN;
	int64_t t69 = 2225814952152771LL;

	t69 = (x385-((x386*x387)/x388));

	if (t69 != -17LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x389 = 16;
	uint32_t t70 = 114596U;

	t70 = (x389-((x390*x391)/x392));

	if (t70 != 4294901776U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x393 = UINT32_MAX;
	int64_t x394 = -1LL;
	int32_t x395 = INT32_MIN;
	volatile uint16_t x396 = 9U;

	t71 = (x393-((x394*x395)/x396));

	if (t71 != 4056358001LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x397 = 126150427;
	static int16_t x398 = 0;
	int8_t x399 = INT8_MAX;
	uint16_t x400 = 7094U;
	int32_t t72 = 1476465;

	t72 = (x397-((x398*x399)/x400));

	if (t72 != 126150427) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x405 = 1U;
	uint8_t x406 = 76U;
	uint16_t x407 = 1U;
	int16_t x408 = INT16_MIN;
	uint32_t t73 = 14928751U;

	t73 = (x405-((x406*x407)/x408));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x409 = INT16_MIN;
	uint64_t x410 = 2575512LLU;
	volatile uint32_t x412 = UINT32_MAX;
	uint64_t t74 = 0LLU;

	t74 = (x409-((x410*x411)/x412));

	if (t74 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x417 = 3;
	int64_t x418 = -1LL;
	int8_t x419 = INT8_MAX;

	t75 = (x417-((x418*x419)/x420));

	if (t75 != 3LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x421 = INT8_MAX;
	int32_t x422 = 69472;
	volatile int8_t x423 = INT8_MIN;
	volatile int8_t x424 = -1;

	t76 = (x421-((x422*x423)/x424));

	if (t76 != -8892289) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x425 = 458U;
	int64_t x426 = 270605381LL;
	volatile uint8_t x428 = UINT8_MAX;
	volatile int64_t t77 = 1880026471617867399LL;

	t77 = (x425-((x426*x427)/x428));

	if (t77 != 34773322515LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x437 = 64541874U;
	static int16_t x439 = INT16_MIN;
	int64_t x440 = 41654809647LL;
	int64_t t78 = -130743804LL;

	t78 = (x437-((x438*x439)/x440));

	if (t78 != 64541874LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x446 = -1;
	uint16_t x447 = 1U;
	volatile int8_t x448 = -3;
	static uint64_t t79 = 577LLU;

	t79 = (x445-((x446*x447)/x448));

	if (t79 != 402844280587814LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x461 = 99473199U;
	volatile uint64_t t80 = 47057278850074484LLU;

	t80 = (x461-((x462*x463)/x464));

	if (t80 != 99473199LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x465 = INT64_MAX;
	static int32_t x466 = 227131712;
	volatile uint16_t x468 = 1738U;
	volatile int64_t t81 = 13944LL;

	t81 = (x465-((x466*x467)/x468));

	if (t81 != 9223372036854077265LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x474 = -3;
	uint16_t x475 = 15U;
	uint16_t x476 = 15U;
	int32_t t82 = -2;

	t82 = (x473-((x474*x475)/x476));

	if (t82 != 65538) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x477 = -1LL;
	static volatile int16_t x478 = 1;
	volatile int32_t x479 = -1;
	static int16_t x480 = -1;

	t83 = (x477-((x478*x479)/x480));

	if (t83 != -2LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x481 = 0;
	uint32_t x482 = 303686U;
	int16_t x483 = -955;
	int32_t x484 = -1;
	static volatile uint32_t t84 = 7659U;

	t84 = (x481-((x482*x483)/x484));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x485 = -2647;
	int32_t x487 = INT32_MAX;
	int32_t x488 = INT32_MIN;
	volatile int32_t t85 = -4366;

	t85 = (x485-((x486*x487)/x488));

	if (t85 != -2647) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x489 = 14U;
	int8_t x490 = -1;
	int64_t x491 = INT64_MAX;
	int8_t x492 = -1;

	t86 = (x489-((x490*x491)/x492));

	if (t86 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x501 = -1;
	volatile uint8_t x502 = UINT8_MAX;
	int16_t x503 = -13;
	uint32_t x504 = UINT32_MAX;
	uint32_t t87 = UINT32_MAX;

	t87 = (x501-((x502*x503)/x504));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x509 = 1;
	uint64_t x511 = 3366952568153LLU;
	int16_t x512 = -1;
	static uint64_t t88 = 1029278LLU;

	t88 = (x509-((x510*x511)/x512));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x513 = INT8_MIN;
	int8_t x514 = -5;
	static volatile int16_t x515 = INT16_MIN;
	volatile int16_t x516 = -829;

	t89 = (x513-((x514*x515)/x516));

	if (t89 != 69) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x517 = INT16_MIN;
	uint64_t x518 = 71470664719439060LLU;
	int64_t x519 = -1LL;
	volatile int64_t x520 = 6910676LL;
	uint64_t t90 = 0LLU;

	t90 = (x517-((x518*x519)/x520));

	if (t90 != 18446741414740496283LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x521 = -1;
	static uint16_t x523 = UINT16_MAX;
	int16_t x524 = 126;
	volatile int32_t t91 = 13080214;

	t91 = (x521-((x522*x523)/x524));

	if (t91 != -55653) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x529 = INT8_MIN;
	static int16_t x530 = -1;
	uint64_t x532 = 3880457LLU;
	uint64_t t92 = 28789877984306647LLU;

	t92 = (x529-((x530*x531)/x532));

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x533 = 8486304LLU;
	uint16_t x535 = UINT16_MAX;
	int64_t x536 = INT64_MIN;
	uint64_t t93 = 2849638022561727535LLU;

	t93 = (x533-((x534*x535)/x536));

	if (t93 != 8486304LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = -287491403756642806LL;
	int16_t x538 = 11;
	static volatile int64_t x540 = INT64_MIN;
	volatile int64_t t94 = 2LL;

	t94 = (x537-((x538*x539)/x540));

	if (t94 != -287491403756642806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x541 = -1LL;
	static uint32_t x543 = UINT32_MAX;
	static int64_t x544 = 99LL;
	volatile int64_t t95 = -3182928896499557LL;

	t95 = (x541-((x542*x543)/x544));

	if (t95 != 43383507LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x545 = 86028806788546181LLU;
	int64_t x546 = -130479845236110LL;
	uint8_t x547 = 10U;
	uint64_t x548 = 2643605206686585475LLU;
	volatile uint64_t t96 = 7032LLU;

	t96 = (x545-((x546*x547)/x548));

	if (t96 != 86028806788546175LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x553 = INT16_MIN;
	static uint16_t x554 = UINT16_MAX;
	int16_t x555 = -58;
	static int64_t x556 = INT64_MIN;

	t97 = (x553-((x554*x555)/x556));

	if (t97 != -32768LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x569 = UINT8_MAX;
	int8_t x570 = INT8_MIN;
	uint16_t x571 = UINT16_MAX;
	int64_t x572 = INT64_MIN;
	static volatile int64_t t98 = -197042443748991178LL;

	t98 = (x569-((x570*x571)/x572));

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x573 = 104U;
	int16_t x575 = -1;
	uint32_t x576 = 93U;
	volatile uint32_t t99 = 43537858U;

	t99 = (x573-((x574*x575)/x576));

	if (t99 != 104U) { NG(); } else { ; }
	
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

