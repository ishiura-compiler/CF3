#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = -1LL;
int64_t x15 = INT64_MIN;
uint8_t x36 = UINT8_MAX;
volatile uint64_t t4 = 59906LLU;
volatile int8_t x42 = INT8_MIN;
int32_t t5 = 604317;
int32_t t6 = 198455018;
uint64_t t7 = 232998LLU;
volatile int64_t x54 = INT64_MIN;
uint64_t x57 = 133657LLU;
volatile int32_t x58 = -1;
int32_t x64 = -1;
int32_t x70 = 32670375;
static int16_t x71 = INT16_MIN;
volatile int64_t x73 = INT64_MIN;
int16_t x90 = INT16_MIN;
uint16_t x91 = 183U;
volatile int32_t x94 = 2;
int32_t x95 = INT32_MAX;
uint16_t x107 = UINT16_MAX;
volatile uint16_t x109 = 12047U;
static volatile int32_t t19 = 1427646;
int8_t x115 = INT8_MAX;
int64_t x122 = -1LL;
int32_t x123 = INT32_MAX;
volatile int64_t t21 = -3224LL;
int16_t x125 = INT16_MIN;
volatile uint32_t x127 = 1346187U;
int8_t x134 = INT8_MIN;
uint32_t x136 = UINT32_MAX;
uint32_t x144 = 13838U;
static uint64_t x145 = 46498443861LLU;
static int64_t x153 = INT64_MAX;
uint16_t x161 = 1U;
volatile int8_t x162 = INT8_MIN;
volatile int64_t x165 = 220971924LL;
uint16_t x170 = 5U;
int16_t x178 = INT16_MIN;
int64_t t33 = -410855698LL;
volatile uint64_t t36 = 1580712007778150662LLU;
int32_t x197 = INT32_MIN;
volatile int16_t x205 = -1;
int16_t x206 = 120;
int8_t x209 = -1;
volatile int32_t x214 = INT32_MIN;
int16_t x219 = 7;
uint64_t x223 = 279390277LLU;
uint64_t t44 = 1021594820120776LLU;
volatile int16_t x225 = -686;
int32_t x226 = -274;
volatile uint32_t x228 = UINT32_MAX;
static int64_t x246 = INT64_MIN;
uint32_t x248 = UINT32_MAX;
int64_t x249 = INT64_MIN;
static uint64_t t50 = 189LLU;
int16_t x253 = INT16_MAX;
volatile uint64_t x255 = UINT64_MAX;
int64_t x262 = INT64_MIN;
int64_t t53 = 4103LL;
int32_t x274 = INT32_MIN;
static volatile int64_t x297 = -85LL;
volatile int64_t x298 = INT64_MAX;
uint16_t x306 = UINT16_MAX;
int32_t x312 = -1;
volatile int64_t t64 = -776536656043714LL;
int32_t x316 = INT32_MIN;
int8_t x322 = -1;
static uint32_t x326 = 37293299U;
volatile int16_t x329 = -1;
uint32_t t69 = UINT32_MAX;
uint16_t x337 = 10U;
int16_t x345 = -1296;
int64_t x347 = 3974234184LL;
volatile uint64_t t73 = 115952198000113456LLU;
volatile int32_t t75 = -7540441;
int64_t x379 = -285566016633025LL;
int64_t t80 = -126370LL;
int8_t x381 = INT8_MIN;
int8_t x386 = INT8_MIN;
int64_t x389 = -178786LL;
volatile int64_t t83 = -266330148549565508LL;
volatile int32_t t86 = 3761862;
volatile int64_t x410 = 7271276891696168LL;
volatile int16_t x411 = 1643;
uint64_t x420 = 4959523433948798941LLU;
static volatile uint64_t t92 = 80054LLU;
uint16_t x433 = 20U;
uint8_t x436 = 8U;
int32_t x439 = INT32_MIN;
int16_t x442 = -1;
uint16_t x448 = 15364U;
uint64_t x459 = UINT64_MAX;
volatile int32_t x465 = 419762;
int32_t t99 = 0;


void f0(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MAX;
	uint16_t x12 = 211U;
	volatile int64_t t0 = 390821512432482843LL;

	t0 = (x9|(x10%(x11+x12)));

	if (t0 != 127LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x13 = INT16_MIN;
	uint8_t x14 = 5U;
	uint16_t x16 = UINT16_MAX;
	int64_t t1 = 71995555848086LL;

	t1 = (x13|(x14%(x15+x16)));

	if (t1 != -32763LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x25 = -1;
	static uint32_t x26 = UINT32_MAX;
	int16_t x27 = -1;
	int32_t x28 = -1;
	uint32_t t2 = UINT32_MAX;

	t2 = (x25|(x26%(x27+x28)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint32_t x34 = 206453899U;
	int32_t x35 = INT32_MIN;
	static uint32_t t3 = UINT32_MAX;

	t3 = (x33|(x34%(x35+x36)));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x37 = 3;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = INT16_MIN;
	int8_t x40 = -4;

	t4 = (x37|(x38%(x39+x40)));

	if (t4 != 32771LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = INT32_MIN;
	int8_t x43 = 48;
	int8_t x44 = -1;

	t5 = (x41|(x42%(x43+x44)));

	if (t5 != -34) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	uint8_t x46 = 75U;
	static int16_t x47 = INT16_MIN;
	static int8_t x48 = INT8_MAX;

	t6 = (x45|(x46%(x47+x48)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MAX;
	uint8_t x50 = 12U;
	uint64_t x51 = 12398560475220418LLU;
	int16_t x52 = 496;

	t7 = (x49|(x50%(x51+x52)));

	if (t7 != 127LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = -1;
	int32_t x55 = 324;
	static volatile int64_t x56 = 3195849LL;
	static volatile int64_t t8 = 2762882984LL;

	t8 = (x53|(x54%(x55+x56)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x59 = INT8_MIN;
	volatile int32_t x60 = 15350983;
	uint64_t t9 = UINT64_MAX;

	t9 = (x57|(x58%(x59+x60)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x61 = 191439656LLU;
	int16_t x62 = INT16_MIN;
	static uint64_t x63 = 406510LLU;
	volatile uint64_t t10 = 14LLU;

	t10 = (x61|(x62%(x63+x64)));

	if (t10 != 191592367LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = INT32_MIN;
	uint64_t x66 = 6445599946457LLU;
	int16_t x67 = -203;
	volatile int64_t x68 = -837965564LL;
	volatile uint64_t t11 = 5579202708233719567LLU;

	t11 = (x65|(x66%(x67+x68)));

	if (t11 != 18446744072563586777LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x69 = 1901878346176055048LL;
	volatile uint8_t x72 = 0U;
	static int64_t t12 = -3019LL;

	t12 = (x69|(x70%(x71+x72)));

	if (t12 != 1901878346176055215LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x74 = 3915923774LLU;
	uint64_t x75 = 670011369503101872LLU;
	int32_t x76 = 126;
	volatile uint64_t t13 = 128964512LLU;

	t13 = (x73|(x74%(x75+x76)));

	if (t13 != 9223372040770699582LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	volatile uint64_t x78 = 725736761665LLU;
	static uint16_t x79 = 7347U;
	static uint16_t x80 = 15193U;
	uint64_t t14 = UINT64_MAX;

	t14 = (x77|(x78%(x79+x80)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x81 = INT8_MIN;
	static uint64_t x82 = 230706993320198LLU;
	int32_t x83 = -1;
	int16_t x84 = 42;
	static volatile uint64_t t15 = 30353907LLU;

	t15 = (x81|(x82%(x83+x84)));

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x89 = INT8_MIN;
	int64_t x92 = -3171599LL;
	static volatile int64_t t16 = -117368805LL;

	t16 = (x89|(x90%(x91+x92)));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x93 = INT64_MIN;
	int16_t x96 = INT16_MIN;
	static volatile int64_t t17 = -266536037198242992LL;

	t17 = (x93|(x94%(x95+x96)));

	if (t17 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = -6;
	uint8_t x106 = 13U;
	int8_t x108 = INT8_MAX;
	volatile int32_t t18 = -177690522;

	t18 = (x105|(x106%(x107+x108)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x110 = INT32_MIN;
	uint16_t x111 = UINT16_MAX;
	volatile int32_t x112 = INT32_MIN;

	t19 = (x109|(x110%(x111+x112)));

	if (t19 != -53489) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -22;
	int8_t x114 = INT8_MAX;
	static uint32_t x116 = UINT32_MAX;
	uint32_t t20 = 3634U;

	t20 = (x113|(x114%(x115+x116)));

	if (t20 != 4294967275U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x121 = INT64_MAX;
	static int16_t x124 = -12;

	t21 = (x121|(x122%(x123+x124)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x126 = UINT32_MAX;
	static int16_t x128 = 604;
	uint32_t t22 = 19U;

	t22 = (x125|(x126%(x127+x128)));

	if (t22 != 4294952556U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = -1;
	uint16_t x135 = UINT16_MAX;
	volatile uint32_t t23 = UINT32_MAX;

	t23 = (x133|(x134%(x135+x136)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x137 = 1026840879707582LL;
	int8_t x138 = -19;
	int32_t x139 = 812321768;
	volatile int32_t x140 = INT32_MIN;
	int64_t t24 = 64664479LL;

	t24 = (x137|(x138%(x139+x140)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x141 = -15;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 615LLU;
	static uint64_t t25 = 2345LLU;

	t25 = (x141|(x142%(x143+x144)));

	if (t25 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x146 = 1LL;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile uint64_t t26 = 54145310944637289LLU;

	t26 = (x145|(x146%(x147+x148)));

	if (t26 != 46498443861LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = -1;
	int16_t x150 = -6;
	int8_t x151 = -1;
	static uint32_t x152 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

	t27 = (x149|(x150%(x151+x152)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x154 = INT64_MIN;
	static volatile int8_t x155 = INT8_MAX;
	int64_t x156 = -233LL;
	volatile int64_t t28 = -3838364833200067870LL;

	t28 = (x153|(x154%(x155+x156)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = INT32_MAX;
	volatile int16_t x158 = 652;
	int8_t x159 = INT8_MAX;
	uint16_t x160 = 1U;
	int32_t t29 = INT32_MAX;

	t29 = (x157|(x158%(x159+x160)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x163 = INT16_MIN;
	int8_t x164 = -39;
	int32_t t30 = -4324121;

	t30 = (x161|(x162%(x163+x164)));

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x166 = INT64_MAX;
	uint16_t x167 = 134U;
	int32_t x168 = INT32_MIN;
	int64_t t31 = -95LL;

	t31 = (x165|(x166%(x167+x168)));

	if (t31 != 220975063LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = -23592615LL;
	int32_t x171 = 13473586;
	int16_t x172 = INT16_MIN;
	volatile int64_t t32 = 11022LL;

	t32 = (x169|(x170%(x171+x172)));

	if (t32 != -23592611LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x177 = INT64_MIN;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 7U;

	t33 = (x177|(x178%(x179+x180)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x181 = -5;
	uint16_t x182 = 1U;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = INT16_MIN;
	static volatile uint32_t t34 = 29657819U;

	t34 = (x181|(x182%(x183+x184)));

	if (t34 != 4294967291U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x185 = 76U;
	int16_t x186 = INT16_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	volatile int32_t x188 = INT32_MIN;
	uint32_t t35 = 7421193U;

	t35 = (x185|(x186%(x187+x188)));

	if (t35 != 2147450957U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x189 = 17;
	int16_t x190 = INT16_MIN;
	static volatile uint64_t x191 = 28970910423991161LLU;
	static int8_t x192 = INT8_MIN;

	t36 = (x189|(x190%(x191+x192)));

	if (t36 != 21245044051221877LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	int8_t x195 = INT8_MIN;
	static uint32_t x196 = 3422U;
	volatile uint32_t t37 = 152U;

	t37 = (x193|(x194%(x195+x196)));

	if (t37 != 4294937446U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x198 = UINT32_MAX;
	volatile int32_t x199 = INT32_MIN;
	static int32_t x200 = 55;
	volatile uint32_t t38 = 26U;

	t38 = (x197|(x198%(x199+x200)));

	if (t38 != 4294967240U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x201 = -1;
	volatile int32_t x202 = INT32_MAX;
	static volatile int32_t x203 = INT32_MAX;
	volatile int16_t x204 = INT16_MIN;
	int32_t t39 = -179;

	t39 = (x201|(x202%(x203+x204)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x207 = -1;
	int64_t x208 = -16LL;
	volatile int64_t t40 = 182212331513140732LL;

	t40 = (x205|(x206%(x207+x208)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x210 = -8732;
	int64_t x211 = -1LL;
	uint8_t x212 = UINT8_MAX;
	volatile int64_t t41 = -10LL;

	t41 = (x209|(x210%(x211+x212)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x213 = 627925128;
	uint32_t x215 = UINT32_MAX;
	volatile int8_t x216 = 5;
	static volatile uint32_t t42 = 3798U;

	t42 = (x213|(x214%(x215+x216)));

	if (t42 != 627925128U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = -1LL;
	uint64_t x218 = 419916233083101LLU;
	int32_t x220 = -598808;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (x217|(x218%(x219+x220)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x221 = INT8_MIN;
	int64_t x222 = INT64_MIN;
	uint8_t x224 = 12U;

	t44 = (x221|(x222%(x223+x224)));

	if (t44 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x227 = UINT64_MAX;
	volatile uint64_t t45 = 1313LLU;

	t45 = (x225|(x226%(x227+x228)));

	if (t45 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x229 = 0U;
	int32_t x230 = INT32_MAX;
	int64_t x231 = INT64_MIN;
	int64_t x232 = 64360930965245LL;
	int64_t t46 = 131LL;

	t46 = (x229|(x230%(x231+x232)));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	uint16_t x239 = UINT16_MAX;
	int32_t x240 = INT32_MIN;
	volatile uint64_t t47 = 10741563LLU;

	t47 = (x237|(x238%(x239+x240)));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = 2;
	volatile int16_t x242 = 1664;
	uint16_t x243 = 3U;
	uint32_t x244 = 917U;
	uint32_t t48 = 703U;

	t48 = (x241|(x242%(x243+x244)));

	if (t48 != 746U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x245 = INT32_MIN;
	int32_t x247 = 14019844;
	volatile int64_t t49 = 140111LL;

	t49 = (x245|(x246%(x247+x248)));

	if (t49 != -10108271LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x250 = 55U;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MAX;

	t50 = (x249|(x250%(x251+x252)));

	if (t50 != 9223372036854775863LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x254 = INT8_MIN;
	int32_t x256 = 8797;
	uint64_t t51 = 156119997349LLU;

	t51 = (x253|(x254%(x255+x256)));

	if (t51 != 32767LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x257 = 55U;
	static int64_t x258 = -8996507408080LL;
	uint16_t x259 = 406U;
	int8_t x260 = INT8_MAX;
	volatile int64_t t52 = 3706424568LL;

	t52 = (x257|(x258%(x259+x260)));

	if (t52 != -329LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x261 = -1;
	int64_t x263 = 8117770139LL;
	uint32_t x264 = UINT32_MAX;

	t53 = (x261|(x262%(x263+x264)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = 2U;
	static volatile int32_t x267 = -4;
	static int16_t x268 = -2;
	static int32_t t54 = -98;

	t54 = (x265|(x266%(x267+x268)));

	if (t54 != -32766) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x273 = -1;
	uint32_t x275 = 281958U;
	volatile uint64_t x276 = 44LLU;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = (x273|(x274%(x275+x276)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x277 = 79697183435537436LL;
	uint32_t x278 = 682U;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MAX;
	uint64_t t56 = 7516672492161615571LLU;

	t56 = (x277|(x278%(x279+x280)));

	if (t56 != 79697183435538110LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = INT64_MAX;
	int8_t x283 = -4;
	uint32_t x284 = 1463976U;
	int64_t t57 = 42132965LL;

	t57 = (x281|(x282%(x283+x284)));

	if (t57 != -2147239537LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x285 = 7181LLU;
	int16_t x286 = INT16_MAX;
	int64_t x287 = -1LL;
	int64_t x288 = -1LL;
	volatile uint64_t t58 = 75323694LLU;

	t58 = (x285|(x286%(x287+x288)));

	if (t58 != 7181LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = 2U;
	static volatile uint64_t x290 = 96LLU;
	int16_t x291 = INT16_MIN;
	volatile int16_t x292 = INT16_MAX;
	volatile uint64_t t59 = 4127594163593518212LLU;

	t59 = (x289|(x290%(x291+x292)));

	if (t59 != 98LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	volatile uint8_t x296 = UINT8_MAX;
	volatile uint64_t t60 = 13776133019571676LLU;

	t60 = (x293|(x294%(x295+x296)));

	if (t60 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MAX;
	int64_t t61 = -4447995086302147LL;

	t61 = (x297|(x298%(x299+x300)));

	if (t61 != -85LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 291LLU;
	int32_t x302 = INT32_MIN;
	volatile int32_t x303 = -1;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t62 = 199343474290766065LLU;

	t62 = (x301|(x302%(x303+x304)));

	if (t62 != 18446744071562068259LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x305 = INT64_MIN;
	static int8_t x307 = INT8_MAX;
	static int8_t x308 = 1;
	volatile int64_t t63 = -15LL;

	t63 = (x305|(x306%(x307+x308)));

	if (t63 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = INT64_MAX;
	int16_t x310 = -2852;
	int16_t x311 = INT16_MIN;

	t64 = (x309|(x310%(x311+x312)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x313 = 5U;
	static int16_t x314 = 5;
	int8_t x315 = 0;
	int32_t t65 = -2;

	t65 = (x313|(x314%(x315+x316)));

	if (t65 != 5) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x317 = UINT32_MAX;
	uint32_t x318 = 12619U;
	volatile int16_t x319 = -1;
	int16_t x320 = 3366;
	static volatile uint32_t t66 = UINT32_MAX;

	t66 = (x317|(x318%(x319+x320)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = -1;
	volatile uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	int64_t t67 = -1596770959436032LL;

	t67 = (x321|(x322%(x323+x324)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x325 = -83666251611642793LL;
	int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	volatile int64_t t68 = -1186217509LL;

	t68 = (x325|(x326%(x327+x328)));

	if (t68 != -83666251578086153LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x330 = INT32_MAX;
	static volatile uint32_t x331 = 67U;
	uint16_t x332 = 15784U;

	t69 = (x329|(x330%(x331+x332)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int32_t x334 = 777450;
	static int16_t x335 = 5497;
	volatile int8_t x336 = 0;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x333|(x334%(x335+x336)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x338 = INT64_MIN;
	uint16_t x339 = UINT16_MAX;
	uint16_t x340 = 1U;
	volatile int64_t t71 = 498160LL;

	t71 = (x337|(x338%(x339+x340)));

	if (t71 != 10LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -5059097LL;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -60562863999225899LL;
	volatile uint8_t x344 = UINT8_MAX;
	volatile int64_t t72 = 1LL;

	t72 = (x341|(x342%(x343+x344)));

	if (t72 != -5059097LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x346 = 459LLU;
	uint32_t x348 = 4245U;

	t73 = (x345|(x346%(x347+x348)));

	if (t73 != 18446744073709550587LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x349 = -1;
	uint16_t x350 = 5437U;
	volatile uint32_t x351 = 29840U;
	volatile uint8_t x352 = 0U;
	uint32_t t74 = UINT32_MAX;

	t74 = (x349|(x350%(x351+x352)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	int16_t x354 = INT16_MIN;
	static volatile uint16_t x355 = 353U;
	static int8_t x356 = -1;

	t75 = (x353|(x354%(x355+x356)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x357 = 12;
	uint32_t x358 = 0U;
	int32_t x359 = 287128061;
	volatile int16_t x360 = 203;
	uint32_t t76 = 950371475U;

	t76 = (x357|(x358%(x359+x360)));

	if (t76 != 12U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x361 = 1367111950LL;
	volatile int16_t x362 = -1;
	uint16_t x363 = UINT16_MAX;
	int32_t x364 = -464;
	volatile int64_t t77 = 1LL;

	t77 = (x361|(x362%(x363+x364)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x365 = UINT16_MAX;
	uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 519685845616049LLU;
	int64_t x368 = 306LL;
	volatile uint64_t t78 = 97LLU;

	t78 = (x365|(x366%(x367+x368)));

	if (t78 != 494983557087231LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x369 = -1LL;
	static uint8_t x370 = UINT8_MAX;
	int8_t x371 = 0;
	int8_t x372 = -29;
	volatile int64_t t79 = 124098268677LL;

	t79 = (x369|(x370%(x371+x372)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x377 = INT32_MIN;
	int8_t x378 = INT8_MIN;
	static uint8_t x380 = 27U;

	t80 = (x377|(x378%(x379+x380)));

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MIN;
	static uint8_t x384 = UINT8_MAX;
	volatile int32_t t81 = 263855692;

	t81 = (x381|(x382%(x383+x384)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x385 = UINT64_MAX;
	int64_t x387 = -122812733107214736LL;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = (x385|(x386%(x387+x388)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x390 = INT8_MIN;
	uint16_t x391 = 10318U;
	int16_t x392 = INT16_MIN;

	t83 = (x389|(x390%(x391+x392)));

	if (t83 != -98LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 1U;
	uint32_t x394 = 4225U;
	volatile int8_t x395 = -3;
	uint8_t x396 = UINT8_MAX;
	volatile uint32_t t84 = 2U;

	t84 = (x393|(x394%(x395+x396)));

	if (t84 != 193U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = INT8_MIN;
	static uint32_t x402 = 27574022U;
	static uint16_t x403 = 5235U;
	uint8_t x404 = 26U;
	volatile uint32_t t85 = 3164277U;

	t85 = (x401|(x402%(x403+x404)));

	if (t85 != 4294967265U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = 0;
	int16_t x407 = -1;
	int32_t x408 = -423;

	t86 = (x405|(x406%(x407+x408)));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x409 = -9;
	static int32_t x412 = -934490748;
	int64_t t87 = -2581241679407894LL;

	t87 = (x409|(x410%(x411+x412)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = 4;
	uint64_t x414 = 107LLU;
	int8_t x415 = 0;
	int8_t x416 = -5;
	static uint64_t t88 = 428085203LLU;

	t88 = (x413|(x414%(x415+x416)));

	if (t88 != 111LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = -1;
	int8_t x419 = INT8_MIN;
	uint64_t t89 = 8211082LLU;

	t89 = (x417|(x418%(x419+x420)));

	if (t89 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = -1;
	int64_t x422 = -32925955LL;
	int64_t x423 = INT64_MIN;
	uint32_t x424 = 75U;
	int64_t t90 = -10955589219324LL;

	t90 = (x421|(x422%(x423+x424)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int16_t x426 = 0;
	static int32_t x427 = INT32_MAX;
	int8_t x428 = INT8_MIN;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x425|(x426%(x427+x428)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = INT8_MAX;
	int32_t x430 = INT32_MAX;
	static uint64_t x431 = UINT64_MAX;
	int32_t x432 = 17;

	t92 = (x429|(x430%(x431+x432)));

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x434 = 85786U;
	int64_t x435 = INT64_MIN;
	volatile int64_t t93 = -197396LL;

	t93 = (x433|(x434%(x435+x436)));

	if (t93 != 85790LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = 14LLU;
	int64_t x438 = INT64_MIN;
	volatile uint16_t x440 = UINT16_MAX;
	uint64_t t94 = 1637999046404LLU;

	t94 = (x437|(x438%(x439+x440)));

	if (t94 != 18446744071562133519LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x441 = -1LL;
	volatile int8_t x443 = 1;
	uint8_t x444 = 6U;
	volatile int64_t t95 = -8123112LL;

	t95 = (x441|(x442%(x443+x444)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MAX;
	int8_t x446 = -1;
	int16_t x447 = INT16_MAX;
	int32_t t96 = 136;

	t96 = (x445|(x446%(x447+x448)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = 799155253801LL;
	int8_t x460 = INT8_MIN;
	volatile uint64_t t97 = 7547211321262LLU;

	t97 = (x457|(x458%(x459+x460)));

	if (t97 != 9223372836010029609LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = -1;
	static int16_t x462 = INT16_MIN;
	int64_t x463 = -198135780LL;
	volatile int16_t x464 = -65;
	volatile int64_t t98 = 123046LL;

	t98 = (x461|(x462%(x463+x464)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = 6622;
	int32_t x468 = -1;

	t99 = (x465|(x466%(x467+x468)));

	if (t99 != 423866) { NG(); } else { ; }
	
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

