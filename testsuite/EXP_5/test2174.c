#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = INT8_MAX;
int32_t x14 = -88;
int8_t x21 = -1;
uint16_t x24 = UINT16_MAX;
uint16_t x33 = 1U;
uint8_t x37 = 1U;
static int16_t x38 = -1;
int64_t t7 = -69330440LL;
int8_t x41 = -1;
int16_t x42 = INT16_MIN;
volatile uint32_t t8 = 121782889U;
int8_t x50 = INT8_MIN;
uint64_t x51 = 629832163479584359LLU;
uint64_t t9 = 17340LLU;
static uint64_t t10 = 591LLU;
uint16_t x57 = 7U;
volatile uint16_t x59 = 2270U;
volatile int16_t x60 = 15;
uint64_t x64 = 3384LLU;
static int64_t t13 = 321203414259452101LL;
int32_t x74 = INT32_MIN;
uint32_t x82 = 1U;
static uint8_t x83 = UINT8_MAX;
int8_t x93 = INT8_MAX;
int16_t x95 = -1;
int16_t x105 = INT16_MIN;
uint64_t t18 = 159020LLU;
volatile int32_t x112 = -1;
volatile int32_t x113 = 29170922;
int8_t x116 = INT8_MIN;
static uint8_t x118 = 1U;
static uint8_t x119 = UINT8_MAX;
uint32_t t22 = 529204298U;
static int64_t t24 = -473094LL;
volatile uint64_t x145 = 64LLU;
volatile uint64_t t28 = 1429672984366LLU;
static uint8_t x171 = UINT8_MAX;
uint32_t x174 = UINT32_MAX;
uint16_t x180 = UINT16_MAX;
int8_t x189 = 19;
uint8_t x192 = 11U;
volatile int16_t x197 = -9377;
uint16_t x214 = UINT16_MAX;
volatile uint32_t x215 = 491050977U;
volatile int64_t t37 = 48LL;
volatile uint64_t t38 = 1066540931225280938LLU;
int8_t x223 = INT8_MIN;
int16_t x224 = -1;
int8_t x226 = INT8_MIN;
volatile uint32_t x227 = UINT32_MAX;
volatile int64_t t42 = -181LL;
int64_t x248 = INT64_MIN;
uint32_t x250 = 1520U;
uint8_t x261 = UINT8_MAX;
uint32_t x266 = UINT32_MAX;
uint8_t x267 = UINT8_MAX;
int16_t x273 = INT16_MIN;
int16_t x275 = 12469;
volatile int64_t x279 = 131LL;
uint64_t t50 = 6814033117621LLU;
static int64_t x283 = INT64_MAX;
static uint8_t x289 = 41U;
int16_t x290 = INT16_MIN;
volatile int64_t x294 = INT64_MAX;
uint64_t x295 = 105174411LLU;
volatile int16_t x298 = INT16_MIN;
int8_t x300 = -15;
volatile int32_t t55 = -116;
int64_t t58 = -1634505577150LL;
volatile int32_t t59 = -220944;
uint64_t x332 = 1668LLU;
static int32_t x354 = 0;
int64_t x362 = -1LL;
static int64_t x371 = 1494985656675LL;
uint64_t t70 = 51189LLU;
uint32_t x386 = UINT32_MAX;
static int8_t x397 = INT8_MAX;
int64_t x400 = INT64_MAX;
uint32_t x405 = 6349U;
int8_t x416 = INT8_MIN;
static int32_t x418 = INT32_MAX;
uint64_t x419 = 1233220138LLU;
uint64_t x421 = 9809LLU;
uint64_t t79 = 25699091396LLU;
int32_t t80 = -317732;
volatile int32_t t81 = 806;
static uint8_t x436 = 1U;
volatile int8_t x438 = INT8_MIN;
uint8_t x439 = 13U;
uint64_t t84 = 5085578LLU;
uint16_t x446 = UINT16_MAX;
static int8_t x448 = -1;
uint64_t x465 = UINT64_MAX;
static volatile uint64_t t87 = 55479391LLU;
uint64_t x471 = UINT64_MAX;
int8_t x479 = -26;
int8_t x480 = -1;
volatile int16_t x489 = INT16_MIN;
int8_t x490 = INT8_MIN;
static volatile uint64_t x492 = UINT64_MAX;
int32_t x494 = INT32_MIN;
uint8_t x507 = UINT8_MAX;
static int32_t x510 = INT32_MAX;
uint32_t t96 = 25U;
int32_t x522 = INT32_MAX;
uint64_t t97 = 2154907890365098LLU;
volatile int16_t x527 = INT16_MAX;
uint32_t x529 = UINT32_MAX;
volatile uint32_t x530 = 2724794U;
uint64_t x532 = 248495968961LLU;


void f0(void) {
	int64_t x1 = -179LL;
	int8_t x3 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	static volatile int64_t t0 = -65779119945641LL;

	t0 = (x1*((x2^x3)|x4));

	if (t0 != -11730765LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = 4905;
	volatile uint64_t x10 = 6183753050658LLU;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MAX;
	uint64_t t1 = 7LLU;

	t1 = (x9*((x10^x11)|x12));

	if (t1 != 18446744073709546711LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = 0;
	int64_t x15 = INT64_MIN;
	int32_t x16 = -1;
	volatile int64_t t2 = 138986815489113LL;

	t2 = (x13*((x14^x15)|x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = -1;
	int32_t x18 = 1835;
	uint8_t x19 = 3U;
	int16_t x20 = 28;
	volatile int32_t t3 = -106;

	t3 = (x17*((x18^x19)|x20));

	if (t3 != -1852) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = 0;
	int64_t x23 = INT64_MIN;
	static volatile int64_t t4 = 582520165529218LL;

	t4 = (x21*((x22^x23)|x24));

	if (t4 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MAX;
	uint32_t x26 = 1466484404U;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = -42;
	static volatile uint32_t t5 = 3159U;

	t5 = (x25*((x26^x27)|x28));

	if (t5 != 2147483681U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = UINT64_MAX;
	volatile int8_t x35 = INT8_MAX;
	uint64_t x36 = 16LLU;
	uint64_t t6 = 4709990793LLU;

	t6 = (x33*((x34^x35)|x36));

	if (t6 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x39 = 1U;
	volatile int64_t x40 = 25333375193LL;

	t7 = (x37*((x38^x39)|x40));

	if (t7 != 25769803775LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x43 = -1;
	uint32_t x44 = 22996U;

	t8 = (x41*((x42^x43)|x44));

	if (t8 != 4294934529U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 12U;
	int32_t x52 = INT32_MIN;

	t9 = (x49*((x50^x51)|x52));

	if (t9 != 18446744072840550100LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = UINT64_MAX;
	int16_t x54 = -1;
	volatile int64_t x55 = 2916606313583303712LL;
	uint32_t x56 = 3492226U;

	t10 = (x53*((x54^x55)|x56));

	if (t10 != 2916606313583219745LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x58 = 25U;
	static int32_t t11 = -1593022;

	t11 = (x57*((x58^x59)|x60));

	if (t11 != 15785) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	uint16_t x62 = 295U;
	uint64_t x63 = UINT64_MAX;
	volatile uint64_t t12 = 61815441146597233LLU;

	t12 = (x61*((x62^x63)|x64));

	if (t12 != 1024LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	static int16_t x68 = INT16_MIN;

	t13 = (x65*((x66^x67)|x68));

	if (t13 != 2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = INT64_MAX;
	static uint64_t x75 = UINT64_MAX;
	static int16_t x76 = 1;
	volatile uint64_t t14 = 226754006LLU;

	t14 = (x73*((x74^x75)|x76));

	if (t14 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x81 = 25949171LLU;
	int8_t x84 = INT8_MIN;
	uint64_t t15 = 115LLU;

	t15 = (x81*((x82^x83)|x84));

	if (t15 != 111450840751413274LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = 50;
	int8_t x90 = INT8_MIN;
	static int16_t x91 = 0;
	static int8_t x92 = INT8_MIN;
	static volatile int32_t t16 = 0;

	t16 = (x89*((x90^x91)|x92));

	if (t16 != -6400) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x94 = -1;
	int32_t x96 = -1;
	static int32_t t17 = -3921632;

	t17 = (x93*((x94^x95)|x96));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = UINT64_MAX;

	t18 = (x105*((x106^x107)|x108));

	if (t18 != 32768LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x109 = INT16_MIN;
	uint16_t x110 = 444U;
	int32_t x111 = 4506;
	int32_t t19 = 11137786;

	t19 = (x109*((x110^x111)|x112));

	if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x114 = 1U;
	int16_t x115 = -1;
	volatile int32_t t20 = -7579178;

	t20 = (x113*((x114^x115)|x116));

	if (t20 != -58341844) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	volatile uint32_t t21 = 14734339U;

	t21 = (x117*((x118^x119)|x120));

	if (t21 != 2U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x121 = 3U;
	uint32_t x122 = 7248U;
	int32_t x123 = INT32_MIN;
	int32_t x124 = -105642;

	t22 = (x121*((x122^x123)|x124));

	if (t22 != 4294671874U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = UINT64_MAX;
	static int16_t x126 = 0;
	int64_t x127 = -1LL;
	int32_t x128 = INT32_MIN;
	uint64_t t23 = 801340237175558LLU;

	t23 = (x125*((x126^x127)|x128));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 30521364U;
	int64_t x130 = INT64_MIN;
	int64_t x131 = INT64_MIN;
	volatile uint32_t x132 = UINT32_MAX;

	t24 = (x129*((x130^x131)|x132));

	if (t24 != 131088260178790380LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x146 = INT16_MIN;
	int64_t x147 = -12084430223069LL;
	static int32_t x148 = INT32_MAX;
	static uint64_t t25 = 35581248407LLU;

	t25 = (x145*((x146^x147)|x148));

	if (t25 != 773506430140352LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x153 = UINT64_MAX;
	int32_t x154 = -4;
	int16_t x155 = -1;
	uint8_t x156 = 0U;
	volatile uint64_t t26 = 52919712712816021LLU;

	t26 = (x153*((x154^x155)|x156));

	if (t26 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = -1;
	volatile uint8_t x158 = UINT8_MAX;
	int32_t x159 = 663071625;
	static volatile int64_t x160 = INT64_MAX;
	int64_t t27 = -698165395LL;

	t27 = (x157*((x158^x159)|x160));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = -1;
	int16_t x162 = INT16_MAX;
	uint64_t x163 = 19239478803LLU;
	volatile uint32_t x164 = 85960296U;

	t28 = (x161*((x162^x163)|x164));

	if (t28 != 18446744054384295956LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x165 = -905;
	int8_t x166 = -1;
	static uint32_t x167 = 51982U;
	int16_t x168 = INT16_MAX;
	static uint32_t t29 = 805U;

	t29 = (x165*((x166^x167)|x168));

	if (t29 != 29655945U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x169 = INT16_MIN;
	uint8_t x170 = 22U;
	int64_t x172 = -9266LL;
	volatile int64_t t30 = 794708879778022LL;

	t30 = (x169*((x170^x171)|x172));

	if (t30 != 302546944LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x173 = 7591087U;
	static int16_t x175 = INT16_MIN;
	int32_t x176 = 4;
	volatile uint32_t t31 = 71U;

	t31 = (x173*((x174^x175)|x176));

	if (t31 != 3924011857U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x177 = INT8_MIN;
	int32_t x178 = 92;
	static int8_t x179 = -1;
	int32_t t32 = -3715;

	t32 = (x177*((x178^x179)|x180));

	if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x181 = 293481915U;
	uint64_t x182 = UINT64_MAX;
	volatile int16_t x183 = INT16_MAX;
	volatile int64_t x184 = INT64_MIN;
	volatile uint64_t t33 = 6425518310LLU;

	t33 = (x181*((x182^x183)|x184));

	if (t33 != 18446734456894160896LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x190 = UINT64_MAX;
	uint8_t x191 = UINT8_MAX;
	volatile uint64_t t34 = 15604896LLU;

	t34 = (x189*((x190^x191)|x192));

	if (t34 != 18446744073709546961LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x198 = INT8_MIN;
	uint32_t x199 = UINT32_MAX;
	volatile uint8_t x200 = 0U;
	static volatile uint32_t t35 = 0U;

	t35 = (x197*((x198^x199)|x200));

	if (t35 != 4293776417U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = UINT32_MAX;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = 7;
	uint32_t t36 = 748502U;

	t36 = (x205*((x206^x207)|x208));

	if (t36 != 32769U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x213 = INT8_MAX;
	volatile int64_t x216 = -1LL;

	t37 = (x213*((x214^x215)|x216));

	if (t37 != -127LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x217 = 17423815411LLU;
	uint64_t x218 = 82860LLU;
	volatile int16_t x219 = INT16_MIN;
	static int16_t x220 = 86;

	t38 = (x217*((x218^x219)|x220));

	if (t38 != 18445334521890432538LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = 0;
	int64_t x222 = -948132043302LL;
	volatile int64_t t39 = -693705LL;

	t39 = (x221*((x222^x223)|x224));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x225 = 53;
	uint16_t x228 = UINT16_MAX;
	volatile uint32_t t40 = 1759729U;

	t40 = (x225*((x226^x227)|x228));

	if (t40 != 3473355U) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	static int8_t x231 = -4;
	uint8_t x232 = 36U;
	static volatile int32_t t41 = -2466;

	t41 = (x229*((x230^x231)|x232));

	if (t41 != -1072431143) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x233 = INT8_MIN;
	int64_t x234 = -1LL;
	uint32_t x235 = 9373U;
	volatile int16_t x236 = INT16_MIN;

	t42 = (x233*((x234^x235)|x236));

	if (t42 != 1199872LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = INT16_MAX;
	volatile uint64_t x242 = UINT64_MAX;
	volatile uint16_t x243 = 14U;
	uint16_t x244 = UINT16_MAX;
	volatile uint64_t t43 = 118315858090LLU;

	t43 = (x241*((x242^x243)|x244));

	if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x245 = 21866213;
	int16_t x246 = -1;
	static uint16_t x247 = UINT16_MAX;
	static volatile int64_t t44 = -608196863838688LL;

	t44 = (x245*((x246^x247)|x248));

	if (t44 != -1433024135168LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = -22;
	volatile uint64_t x251 = 1160695711708806LLU;
	int16_t x252 = 146;
	uint64_t t45 = 68218LLU;

	t45 = (x249*((x250^x251)|x252));

	if (t45 != 18421208768051972316LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x262 = -1653939249101414494LL;
	uint64_t x263 = 6046785LLU;
	int16_t x264 = -1;
	static uint64_t t46 = 1230643478LLU;

	t46 = (x261*((x262^x263)|x264));

	if (t46 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x265 = INT16_MAX;
	int32_t x268 = INT32_MIN;
	static uint32_t t47 = 10945U;

	t47 = (x265*((x266^x267)|x268));

	if (t47 != 4286578944U) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x269 = INT8_MIN;
	static int8_t x270 = -7;
	volatile uint32_t x271 = UINT32_MAX;
	static uint8_t x272 = 5U;
	volatile uint32_t t48 = 1U;

	t48 = (x269*((x270^x271)|x272));

	if (t48 != 4294966400U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x274 = UINT16_MAX;
	static uint32_t x276 = 24345033U;
	volatile uint32_t t49 = 180180432U;

	t49 = (x273*((x274^x275)|x276));

	if (t49 != 1736704U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x277 = 1973LLU;
	volatile uint8_t x278 = 3U;
	volatile uint64_t x280 = 6308398391978323148LLU;

	t50 = (x277*((x278^x279)|x280));

	if (t50 != 13364521692993781820LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x281 = 41U;
	volatile uint64_t x282 = 1764694178860241LLU;
	int8_t x284 = -7;
	uint64_t t51 = 29194462810126LLU;

	t51 = (x281*((x282^x283)|x284));

	if (t51 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x285 = 55567LLU;
	int32_t x286 = -48102;
	int64_t x287 = INT64_MIN;
	int16_t x288 = 149;
	uint64_t t52 = 4LLU;

	t52 = (x285*((x286^x287)|x288));

	if (t52 != 9223372034189282385LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x291 = 31;
	int8_t x292 = INT8_MAX;
	volatile int32_t t53 = 10763;

	t53 = (x289*((x290^x291)|x292));

	if (t53 != -1338281) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x293 = 117585447423605LLU;
	volatile int8_t x296 = -1;
	static volatile uint64_t t54 = 0LLU;

	t54 = (x293*((x294^x295)|x296));

	if (t54 != 18446626488262128011LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 4U;
	int16_t x299 = INT16_MIN;

	t55 = (x297*((x298^x299)|x300));

	if (t55 != -60) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x301 = -11;
	uint32_t x302 = UINT32_MAX;
	static volatile uint64_t x303 = UINT64_MAX;
	int8_t x304 = 37;
	volatile uint64_t t56 = 794022316727145349LLU;

	t56 = (x301*((x302^x303)|x304));

	if (t56 != 47244639849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = INT16_MIN;
	int32_t x306 = -104840;
	int64_t x307 = -1LL;
	static uint8_t x308 = UINT8_MAX;
	static volatile int64_t t57 = 24842057524LL;

	t57 = (x305*((x306^x307)|x308));

	if (t57 != -3439296512LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x309 = -1;
	int16_t x310 = INT16_MAX;
	int64_t x311 = INT64_MIN;
	int32_t x312 = 2674932;

	t58 = (x309*((x310^x311)|x312));

	if (t58 != 9223372036852088833LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x317 = UINT16_MAX;
	int32_t x318 = 7;
	uint8_t x319 = 1U;
	volatile uint8_t x320 = 3U;

	t59 = (x317*((x318^x319)|x320));

	if (t59 != 458745) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x325 = 0U;
	int8_t x326 = INT8_MIN;
	int64_t x327 = -61383703497745LL;
	static int16_t x328 = INT16_MIN;
	static volatile int64_t t60 = -1915404896LL;

	t60 = (x325*((x326^x327)|x328));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x329 = INT16_MAX;
	volatile int16_t x330 = -10;
	int16_t x331 = -2;
	uint64_t t61 = 574174585360510LLU;

	t61 = (x329*((x330^x331)|x332));

	if (t61 != 54917492LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x333 = INT32_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	static int32_t x336 = -415789;
	volatile int64_t t62 = -1252039LL;

	t62 = (x333*((x334^x335)|x336));

	if (t62 != 2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x337 = -1;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -3;
	int16_t x340 = INT16_MAX;
	int32_t t63 = -566517;

	t63 = (x337*((x338^x339)|x340));

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x341 = 12984546504LLU;
	static uint32_t x342 = 4350U;
	int8_t x343 = INT8_MIN;
	int64_t x344 = INT64_MAX;
	uint64_t t64 = 223LLU;

	t64 = (x341*((x342^x343)|x344));

	if (t64 != 18446744060725005112LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x345 = 7508U;
	int8_t x346 = INT8_MIN;
	int64_t x347 = -41LL;
	volatile uint64_t x348 = 1177706LLU;
	volatile uint64_t t65 = 107LLU;

	t65 = (x345*((x346^x347)|x348));

	if (t65 != 8842374316LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	static int32_t x351 = INT32_MIN;
	uint64_t x352 = 1318949237617254030LLU;
	static volatile uint64_t t66 = 5303412537174953245LLU;

	t66 = (x349*((x350^x351)|x352));

	if (t66 != 17127794835839778817LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x353 = 1;
	static int32_t x355 = -974262;
	int32_t x356 = INT32_MIN;
	volatile int32_t t67 = 2688920;

	t67 = (x353*((x354^x355)|x356));

	if (t67 != -974262) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x363 = -1LL;
	int32_t x364 = INT32_MAX;
	int64_t t68 = 1038103222935509LL;

	t68 = (x361*((x362^x363)|x364));

	if (t68 != -4611686016279904256LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = 952223850U;
	static int16_t x370 = -2;
	static int32_t x372 = -3907;
	static int64_t t69 = -12094924207642LL;

	t69 = (x369*((x370^x371)|x372));

	if (t69 != -2257722748350LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = INT16_MIN;
	static int64_t x378 = INT64_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	static volatile uint16_t x380 = UINT16_MAX;

	t70 = (x377*((x378^x379)|x380));

	if (t70 != 32768LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = 439713U;
	int64_t x387 = INT64_MIN;
	static int64_t x388 = -1LL;
	static int64_t t71 = 1362919128917LL;

	t71 = (x385*((x386^x387)|x388));

	if (t71 != -439713LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = -1;
	volatile uint16_t x390 = 815U;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 7LLU;
	uint64_t t72 = 145969981603LLU;

	t72 = (x389*((x390^x391)|x392));

	if (t72 != 9223372036854774993LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MAX;
	int64_t t73 = -22389199LL;

	t73 = (x397*((x398^x399)|x400));

	if (t73 != -127LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x401 = UINT64_MAX;
	static volatile int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t74 = 7667356503LLU;

	t74 = (x401*((x402^x403)|x404));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint64_t x406 = 3LLU;
	static int32_t x407 = -601604;
	static int16_t x408 = INT16_MAX;
	volatile uint64_t t75 = 186557LLU;

	t75 = (x405*((x406^x407)|x408));

	if (t75 != 18446744069964752691LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x409 = 54U;
	static uint64_t x410 = UINT64_MAX;
	uint16_t x411 = 4U;
	uint32_t x412 = UINT32_MAX;
	volatile uint64_t t76 = 228182438890LLU;

	t76 = (x409*((x410^x411)|x412));

	if (t76 != 18446744073709551562LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x413 = -4LL;
	int32_t x414 = 21781;
	volatile uint8_t x415 = UINT8_MAX;
	volatile int64_t t77 = 67428938136LL;

	t77 = (x413*((x414^x415)|x416));

	if (t77 != 88LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x417 = INT16_MAX;
	int64_t x420 = -610LL;
	uint64_t t78 = 409966744434996LLU;

	t78 = (x417*((x418^x419)|x420));

	if (t78 != 18446744073691693601LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x422 = -1;
	uint64_t x423 = 5791769769287984LLU;
	int32_t x424 = INT32_MAX;

	t79 = (x421*((x422^x423)|x424));

	if (t79 != 16975526988087286191LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x425 = 1U;
	static volatile int16_t x426 = INT16_MIN;
	int16_t x427 = -1;
	int16_t x428 = -1;

	t80 = (x425*((x426^x427)|x428));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x429 = INT8_MIN;
	static int16_t x430 = 1;
	int8_t x431 = INT8_MAX;
	int8_t x432 = -1;

	t81 = (x429*((x430^x431)|x432));

	if (t81 != 128) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x433 = -1;
	uint64_t x434 = 1LLU;
	uint64_t x435 = UINT64_MAX;
	uint64_t t82 = 146478954288413846LLU;

	t82 = (x433*((x434^x435)|x436));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x437 = 23U;
	volatile int16_t x440 = -1;
	volatile int32_t t83 = 95;

	t83 = (x437*((x438^x439)|x440));

	if (t83 != -23) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x441 = UINT64_MAX;
	volatile uint16_t x442 = 6675U;
	int16_t x443 = INT16_MIN;
	int8_t x444 = -23;

	t84 = (x441*((x442^x443)|x444));

	if (t84 != 5LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x445 = 1247706989LLU;
	static volatile uint32_t x447 = UINT32_MAX;
	volatile uint64_t t85 = 100227146LLU;

	t85 = (x445*((x446^x447)|x448));

	if (t85 != 5358860711497924755LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x457 = -1;
	static volatile int8_t x458 = 1;
	int16_t x459 = 16;
	uint64_t x460 = 80806811843LLU;
	uint64_t t86 = 133279692248LLU;

	t86 = (x457*((x458^x459)|x460));

	if (t86 != 18446743992902739757LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x466 = 2465;
	static uint8_t x467 = 16U;
	int16_t x468 = -1;

	t87 = (x465*((x466^x467)|x468));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x469 = UINT32_MAX;
	int32_t x470 = INT32_MIN;
	uint16_t x472 = UINT16_MAX;
	uint64_t t88 = 221274377520LLU;

	t88 = (x469*((x470^x471)|x472));

	if (t88 != 9223372030412324865LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x477 = -3;
	int64_t x478 = 1500LL;
	volatile int64_t t89 = -300891076LL;

	t89 = (x477*((x478^x479)|x480));

	if (t89 != 3LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x491 = 1644U;
	volatile uint64_t t90 = 16694817339783LLU;

	t90 = (x489*((x490^x491)|x492));

	if (t90 != 32768LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x493 = 1434638450877LLU;
	uint64_t x495 = 485808LLU;
	int32_t x496 = INT32_MAX;
	volatile uint64_t t91 = 958068290841LLU;

	t91 = (x493*((x494^x495)|x496));

	if (t91 != 18446742639071100739LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x497 = INT8_MIN;
	volatile int32_t x498 = 110258;
	uint8_t x499 = 2U;
	int8_t x500 = INT8_MAX;
	static volatile int32_t t92 = -3705295;

	t92 = (x497*((x498^x499)|x500));

	if (t92 != -14122880) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x501 = 6U;
	uint16_t x502 = UINT16_MAX;
	int16_t x503 = 13;
	uint64_t x504 = UINT64_MAX;
	uint64_t t93 = 85LLU;

	t93 = (x501*((x502^x503)|x504));

	if (t93 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x505 = -1;
	int64_t x506 = INT64_MIN;
	uint16_t x508 = 1U;
	int64_t t94 = 1LL;

	t94 = (x505*((x506^x507)|x508));

	if (t94 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x509 = -1;
	int32_t x511 = 1;
	int32_t x512 = -61939;
	int32_t t95 = 425709;

	t95 = (x509*((x510^x511)|x512));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x517 = UINT8_MAX;
	uint32_t x518 = 18560U;
	volatile int16_t x519 = 119;
	int8_t x520 = INT8_MIN;

	t96 = (x517*((x518^x519)|x520));

	if (t96 != 4294965001U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x521 = UINT32_MAX;
	int8_t x523 = -8;
	uint64_t x524 = 4LLU;

	t97 = (x521*((x522^x523)|x524));

	if (t97 != 9223372069067030521LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x525 = 0;
	static int64_t x526 = INT64_MAX;
	uint16_t x528 = 1U;
	static int64_t t98 = -3474073843000LL;

	t98 = (x525*((x526^x527)|x528));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x531 = INT8_MIN;
	volatile uint64_t t99 = 9549119986135125LLU;

	t99 = (x529*((x530^x531)|x532));

	if (t99 != 18435483704549179653LLU) { NG(); } else { ; }
	
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

