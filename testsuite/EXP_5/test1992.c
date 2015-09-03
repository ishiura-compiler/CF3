#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 2100113251U;
int16_t x3 = 1;
uint32_t t0 = 93356322U;
int16_t x7 = INT16_MAX;
int32_t x12 = 843;
uint64_t x19 = 460LLU;
volatile uint8_t x22 = 1U;
int64_t x39 = INT64_MIN;
int8_t x43 = 1;
volatile uint64_t t9 = 155825LLU;
static int32_t x46 = INT32_MIN;
int8_t x49 = 52;
static int64_t x51 = 905816138040688069LL;
volatile int8_t x52 = INT8_MAX;
volatile int16_t x57 = -1784;
int16_t x69 = -1;
int64_t x74 = -1LL;
volatile int32_t x76 = -587;
uint16_t x81 = 1005U;
static int32_t x82 = 2731;
int32_t x85 = INT32_MAX;
uint16_t x89 = 1605U;
uint32_t x91 = 8300U;
volatile int64_t x92 = INT64_MAX;
volatile uint64_t x95 = 2720LLU;
int32_t x102 = -171;
uint8_t x108 = UINT8_MAX;
uint64_t x109 = 2LLU;
static int32_t x111 = INT32_MIN;
volatile int32_t x112 = INT32_MAX;
int64_t x113 = INT64_MIN;
int64_t x127 = INT64_MIN;
int8_t x128 = -1;
uint64_t t29 = 111LLU;
static uint8_t x137 = 0U;
int64_t x138 = 0LL;
int32_t x140 = 2465317;
int16_t x149 = -1;
int32_t x154 = -1;
int32_t x155 = INT32_MIN;
static uint64_t x156 = 16111367624133460LLU;
uint32_t x161 = UINT32_MAX;
uint16_t x164 = 5490U;
static volatile uint32_t t35 = 664387U;
int16_t x175 = 11;
static int64_t x176 = 24293LL;
uint16_t x178 = 22U;
static uint32_t t38 = 211U;
uint16_t x184 = 25189U;
static volatile int64_t x190 = INT64_MIN;
int8_t x191 = -37;
static int16_t x196 = INT16_MAX;
uint16_t x198 = UINT16_MAX;
int8_t x200 = -1;
uint16_t x204 = 7717U;
int16_t x205 = -3574;
volatile uint64_t x211 = 189265949307LLU;
uint64_t t46 = 106040188LLU;
volatile int8_t x213 = INT8_MIN;
int64_t x216 = INT64_MIN;
volatile uint64_t x217 = 85174438352LLU;
volatile int64_t x226 = -1499552687666LL;
int16_t x228 = 189;
volatile int64_t t49 = 0LL;
uint8_t x232 = 3U;
int64_t x240 = INT64_MAX;
int32_t x243 = 549475;
uint16_t x244 = 367U;
int32_t x247 = INT32_MIN;
uint64_t t54 = 1815LLU;
uint8_t x255 = 0U;
int16_t x261 = -1;
volatile int32_t x272 = -1;
uint64_t t60 = 27651LLU;
static volatile int64_t x275 = -1LL;
int32_t x287 = INT32_MIN;
uint32_t x288 = 4295U;
int64_t x289 = INT64_MAX;
volatile int16_t x294 = INT16_MIN;
static int64_t x298 = 13839751214LL;
static volatile int32_t t67 = 2775;
int16_t x306 = INT16_MIN;
static int32_t t69 = -26;
volatile int32_t x335 = -7;
static volatile int64_t t76 = 877670456817949LL;
static int8_t x345 = INT8_MIN;
int8_t x351 = INT8_MIN;
int32_t x355 = -386359;
int32_t t79 = 45;
int8_t x357 = 27;
static uint64_t x359 = UINT64_MAX;
int16_t x361 = -1;
static volatile uint64_t t82 = 13552LLU;
static int32_t x376 = 253251;
int8_t x377 = INT8_MIN;
uint64_t x380 = 2858624545LLU;
int32_t x391 = INT32_MIN;
static uint32_t x394 = 52556U;
static int32_t x396 = -1;
volatile int64_t x401 = -336331499090LL;
int32_t x404 = -1;
volatile uint64_t x407 = UINT64_MAX;
volatile int16_t x414 = -1;
int8_t x417 = INT8_MAX;
uint64_t t94 = 27943778290668045LLU;
static int16_t x428 = INT16_MIN;
uint32_t t95 = 1704U;
uint32_t x429 = 23149776U;
volatile int16_t x430 = INT16_MIN;
int16_t x432 = -318;
volatile uint64_t x438 = 291LLU;
uint64_t x445 = 916937278119719LLU;
volatile int32_t x448 = INT32_MAX;
int16_t x449 = INT16_MIN;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile uint32_t x4 = UINT32_MAX;

	t0 = (x1*((x2|x3)&x4));

	if (t0 != 3850088291U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	uint64_t x6 = 14140541175017LLU;
	uint64_t x8 = 214783385LLU;
	uint64_t t1 = 2LLU;

	t1 = (x5*((x6|x7)&x8));

	if (t1 != 9223372036707101287LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 89U;
	int16_t x10 = INT16_MAX;
	uint32_t x11 = 62950427U;
	uint32_t t2 = 1U;

	t2 = (x9*((x10|x11)&x12));

	if (t2 != 75027U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = 14845964803671500LLU;
	static int32_t x15 = INT32_MIN;
	int8_t x16 = -24;
	volatile uint64_t t3 = 10831999LLU;

	t3 = (x13*((x14|x15)&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 114547358U;
	int32_t x18 = 8233353;
	static int64_t x20 = INT64_MAX;
	uint64_t t4 = 528662LLU;

	t4 = (x17*((x18|x19)&x20));

	if (t4 != 943116622851718LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int64_t x23 = -1LL;
	int8_t x24 = -8;
	volatile int64_t t5 = 130920706740LL;

	t5 = (x21*((x22|x23)&x24));

	if (t5 != -524280LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 1U;
	volatile int16_t x30 = 11;
	uint64_t x31 = UINT64_MAX;
	uint16_t x32 = 128U;
	volatile uint64_t t6 = 9LLU;

	t6 = (x29*((x30|x31)&x32));

	if (t6 != 128LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = UINT32_MAX;
	int8_t x34 = INT8_MIN;
	int16_t x35 = -1;
	int32_t x36 = -19899227;
	uint32_t t7 = 10U;

	t7 = (x33*((x34|x35)&x36));

	if (t7 != 19899227U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	volatile uint64_t x38 = 141520LLU;
	static int8_t x40 = INT8_MIN;
	uint64_t t8 = 1010088654352571LLU;

	t8 = (x37*((x38|x39)&x40));

	if (t8 != 9223372036854917248LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 1789740134350148LLU;
	uint32_t x42 = UINT32_MAX;
	uint64_t x44 = 167134760594774195LLU;

	t9 = (x41*((x42|x43)&x44));

	if (t9 != 2152201394054280844LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 43;
	volatile int8_t x47 = 2;
	uint32_t x48 = UINT32_MAX;
	uint32_t t10 = 3U;

	t10 = (x45*((x46|x47)&x48));

	if (t10 != 2147483734U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = 1002225;
	volatile int64_t t11 = -6556690LL;

	t11 = (x49*((x50|x51)&x52));

	if (t11 != 6084LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	static int16_t x60 = INT16_MAX;
	volatile int64_t t12 = -16759636LL;

	t12 = (x57*((x58|x59)&x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = 5U;
	int64_t x62 = -33502527LL;
	uint64_t x63 = UINT64_MAX;
	uint64_t x64 = 19511731LLU;
	volatile uint64_t t13 = 2376682948929LLU;

	t13 = (x61*((x62|x63)&x64));

	if (t13 != 97558655LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static int8_t x66 = -2;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = 49U;
	volatile uint64_t t14 = 40LLU;

	t14 = (x65*((x66|x67)&x68));

	if (t14 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = -61;
	static volatile uint64_t x71 = UINT64_MAX;
	int16_t x72 = -2798;
	volatile uint64_t t15 = 343001746124194LLU;

	t15 = (x69*((x70|x71)&x72));

	if (t15 != 2798LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = 1323;
	static volatile int16_t x75 = -1;
	volatile int64_t t16 = 45683157647089LL;

	t16 = (x73*((x74|x75)&x76));

	if (t16 != -776601LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = 174538;
	uint8_t x78 = UINT8_MAX;
	static uint8_t x79 = 38U;
	int8_t x80 = INT8_MAX;
	int32_t t17 = 0;

	t17 = (x77*((x78|x79)&x80));

	if (t17 != 22166326) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;
	int64_t t18 = 83632111349LL;

	t18 = (x81*((x82|x83)&x84));

	if (t18 != -30187185LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x86 = UINT32_MAX;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MAX;
	volatile uint32_t t19 = 466U;

	t19 = (x85*((x86|x87)&x88));

	if (t19 != 2147450881U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x90 = 0;
	int64_t t20 = -17268711965LL;

	t20 = (x89*((x90|x91)&x92));

	if (t20 != 13321500LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -1;
	static int32_t x94 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	uint64_t t21 = 150487LLU;

	t21 = (x93*((x94|x95)&x96));

	if (t21 != 18446744073709551456LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x101 = -1;
	static int32_t x103 = 499647;
	uint8_t x104 = 54U;
	volatile int32_t t22 = -11562;

	t22 = (x101*((x102|x103)&x104));

	if (t22 != -54) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MIN;
	volatile int16_t x106 = INT16_MAX;
	uint32_t x107 = UINT32_MAX;
	uint32_t t23 = 8909525U;

	t23 = (x105*((x106|x107)&x108));

	if (t23 != 4294934656U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x110 = INT64_MAX;
	uint64_t t24 = 655224413LLU;

	t24 = (x109*((x110|x111)&x112));

	if (t24 != 4294967294LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x114 = INT64_MIN;
	uint32_t x115 = 3U;
	uint16_t x116 = 1872U;
	static volatile int64_t t25 = -35697811927273772LL;

	t25 = (x113*((x114|x115)&x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = 9691LL;
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int64_t t26 = 29561LL;

	t26 = (x117*((x118|x119)&x120));

	if (t26 != -20811264032768LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	static volatile int64_t x122 = -26976335766009LL;
	int32_t x123 = -615590920;
	int64_t x124 = -508104LL;
	int64_t t27 = 234829LL;

	t27 = (x121*((x122|x123)&x124));

	if (t27 != 70127739904LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MAX;
	volatile uint64_t x126 = UINT64_MAX;
	uint64_t t28 = 215028056595413LLU;

	t28 = (x125*((x126|x127)&x128));

	if (t28 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = 662;
	int32_t x134 = INT32_MAX;
	uint32_t x135 = 159774U;
	volatile uint64_t x136 = 1743LLU;

	t29 = (x133*((x134|x135)&x136));

	if (t29 != 1153866LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x139 = 759722055U;
	int64_t t30 = 5LL;

	t30 = (x137*((x138|x139)&x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	uint8_t x152 = 5U;
	volatile int32_t t31 = -889826;

	t31 = (x149*((x150|x151)&x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x153 = INT8_MIN;
	static uint64_t t32 = 7802598432770627800LLU;

	t32 = (x153*((x154|x155)&x156));

	if (t32 != 16384489017820468736LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x157 = 1;
	volatile int8_t x158 = INT8_MAX;
	int32_t x159 = 199540887;
	uint32_t x160 = 69617755U;
	uint32_t t33 = 452189U;

	t33 = (x157*((x158|x159)&x160));

	if (t33 != 2375771U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x162 = INT8_MIN;
	int64_t x163 = INT64_MAX;
	int64_t t34 = -172236643983LL;

	t34 = (x161*((x162|x163)&x164));

	if (t34 != 23579370449550LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MIN;
	static uint32_t x166 = UINT32_MAX;
	int8_t x167 = 3;
	volatile uint8_t x168 = 3U;

	t35 = (x165*((x166|x167)&x168));

	if (t35 != 4294966912U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x169 = 3259U;
	int16_t x170 = -1;
	static int32_t x171 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;
	int32_t t36 = 3522562;

	t36 = (x169*((x170|x171)&x172));

	if (t36 != 213578565) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = UINT8_MAX;
	int16_t x174 = INT16_MIN;
	int64_t t37 = 861004LL;

	t37 = (x173*((x174|x175)&x176));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 871U;
	uint32_t x179 = 48225072U;
	int32_t x180 = INT32_MIN;

	t38 = (x177*((x178|x179)&x180));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x181 = -1LL;
	int8_t x182 = -1;
	int16_t x183 = INT16_MIN;
	volatile int64_t t39 = -31520907611LL;

	t39 = (x181*((x182|x183)&x184));

	if (t39 != -25189LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int32_t x186 = -76040262;
	volatile uint32_t x187 = 447U;
	int16_t x188 = INT16_MIN;
	uint32_t t40 = 7U;

	t40 = (x185*((x186|x187)&x188));

	if (t40 != 1145044992U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = INT64_MIN;
	static uint64_t x192 = UINT64_MAX;
	uint64_t t41 = 1LLU;

	t41 = (x189*((x190|x191)&x192));

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = 13;
	int64_t x194 = -31807LL;
	static volatile uint32_t x195 = 11187642U;
	int64_t t42 = 21802341115887LL;

	t42 = (x193*((x194|x195)&x196));

	if (t42 != 186303LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x197 = 100596U;
	int8_t x199 = INT8_MAX;
	uint32_t t43 = 59405U;

	t43 = (x197*((x198|x199)&x200));

	if (t43 != 2297591564U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = 1;
	volatile int8_t x202 = INT8_MAX;
	uint8_t x203 = 21U;
	volatile int32_t t44 = -347106767;

	t44 = (x201*((x202|x203)&x204));

	if (t44 != 37) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x206 = -1;
	uint64_t x207 = UINT64_MAX;
	static int16_t x208 = INT16_MIN;
	volatile uint64_t t45 = 394594415908391LLU;

	t45 = (x205*((x206|x207)&x208));

	if (t45 != 117112832LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x209 = INT8_MAX;
	int64_t x210 = -14017721926665LL;
	int64_t x212 = INT64_MIN;

	t46 = (x209*((x210|x211)&x212));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x214 = 102;
	uint32_t x215 = 4673U;
	int64_t t47 = 24975480157002580LL;

	t47 = (x213*((x214|x215)&x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x218 = 2271U;
	int64_t x219 = -1LL;
	uint64_t x220 = 344944490LLU;
	uint64_t t48 = 503LLU;

	t48 = (x217*((x218|x219)&x220));

	if (t48 != 10933709124657528864LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	static uint32_t x227 = 3279U;

	t49 = (x225*((x226|x227)&x228));

	if (t49 != 605590388595LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x229 = UINT16_MAX;
	volatile int8_t x230 = -1;
	volatile int8_t x231 = -1;
	static volatile int32_t t50 = 0;

	t50 = (x229*((x230|x231)&x232));

	if (t50 != 196605) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	int32_t x234 = -25999;
	uint8_t x235 = 22U;
	static int64_t x236 = 40LL;
	volatile int64_t t51 = 9792311898229LL;

	t51 = (x233*((x234|x235)&x236));

	if (t51 != 2097120LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x237 = 1U;
	uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	volatile int64_t t52 = -3629431024724667860LL;

	t52 = (x237*((x238|x239)&x240));

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MAX;
	volatile int64_t t53 = 6554225842LL;

	t53 = (x241*((x242|x243)&x244));

	if (t53 != -788126498816LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = 7140U;
	volatile uint64_t x246 = UINT64_MAX;
	static volatile int64_t x248 = INT64_MIN;

	t54 = (x245*((x246|x247)&x248));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x249 = 491U;
	uint64_t x250 = 3LLU;
	uint32_t x251 = 5U;
	uint32_t x252 = 1465U;
	uint64_t t55 = 60448392602LLU;

	t55 = (x249*((x250|x251)&x252));

	if (t55 != 491LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = 0;
	static int32_t x254 = -1;
	static int32_t x256 = 23;
	int32_t t56 = 3131;

	t56 = (x253*((x254|x255)&x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = INT32_MIN;
	int8_t x258 = INT8_MAX;
	int64_t x259 = INT64_MIN;
	uint32_t x260 = 1276913180U;
	int64_t t57 = 72306420709889LL;

	t57 = (x257*((x258|x259)&x260));

	if (t57 != -60129542144LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x262 = UINT16_MAX;
	static volatile uint8_t x263 = 29U;
	volatile uint64_t x264 = 1600157701505LLU;
	uint64_t t58 = 66273176158862209LLU;

	t58 = (x261*((x262|x263)&x264));

	if (t58 != 18446744073709496959LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x265 = INT8_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = -4;
	uint32_t x268 = 2357795U;
	uint64_t t59 = 126238LLU;

	t59 = (x265*((x266|x267)&x268));

	if (t59 != 18446744073407753856LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x269 = UINT8_MAX;
	uint64_t x270 = UINT64_MAX;
	static volatile int8_t x271 = 0;

	t60 = (x269*((x270|x271)&x272));

	if (t60 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x273 = 191072LLU;
	int8_t x274 = -1;
	static volatile uint64_t x276 = 2506949199LLU;
	volatile uint64_t t61 = 673586LLU;

	t61 = (x273*((x274|x275)&x276));

	if (t61 != 479007797351328LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	static volatile int8_t x280 = INT8_MIN;
	int64_t t62 = 8765831655309LL;

	t62 = (x277*((x278|x279)&x280));

	if (t62 != 16384LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x285 = UINT32_MAX;
	int32_t x286 = -1976331;
	static volatile uint32_t t63 = 15874513U;

	t63 = (x285*((x286|x287)&x288));

	if (t63 != 4294963003U) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x290 = 7883546469LLU;
	int8_t x291 = 0;
	int64_t x292 = INT64_MIN;
	uint64_t t64 = 2LLU;

	t64 = (x289*((x290|x291)&x292));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x293 = 11U;
	volatile uint32_t x295 = 119514U;
	int32_t x296 = INT32_MIN;
	uint32_t t65 = 520U;

	t65 = (x293*((x294|x295)&x296));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x297 = INT32_MIN;
	int32_t x299 = -1;
	volatile uint16_t x300 = 24U;
	int64_t t66 = -106968404LL;

	t66 = (x297*((x298|x299)&x300));

	if (t66 != -51539607552LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = -1;
	uint16_t x304 = UINT16_MAX;

	t67 = (x301*((x302|x303)&x304));

	if (t67 != -8388480) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x305 = -1LL;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MIN;
	int64_t t68 = 66128562911734197LL;

	t68 = (x305*((x306|x307)&x308));

	if (t68 != 32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x313 = UINT16_MAX;
	volatile int8_t x314 = -1;
	int8_t x315 = INT8_MAX;
	static int8_t x316 = INT8_MIN;

	t69 = (x313*((x314|x315)&x316));

	if (t69 != -8388480) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x317 = 0;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MIN;
	volatile int64_t t70 = -2836LL;

	t70 = (x317*((x318|x319)&x320));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x321 = UINT64_MAX;
	uint16_t x322 = 200U;
	uint32_t x323 = 671U;
	static int64_t x324 = -1LL;
	volatile uint64_t t71 = 3983929563510286LLU;

	t71 = (x321*((x322|x323)&x324));

	if (t71 != 18446744073709550881LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x325 = -273084760;
	int32_t x326 = INT32_MIN;
	int64_t x327 = -431723691LL;
	uint16_t x328 = 31U;
	volatile int64_t t72 = -14LL;

	t72 = (x325*((x326|x327)&x328));

	if (t72 != -5734779960LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = 0U;
	uint8_t x332 = 3U;
	volatile int64_t t73 = -4LL;

	t73 = (x329*((x330|x331)&x332));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x333 = -2;
	uint64_t x334 = 7826271LLU;
	volatile uint16_t x336 = UINT16_MAX;
	volatile uint64_t t74 = 88306LLU;

	t74 = (x333*((x334|x335)&x336));

	if (t74 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = -1LL;
	int8_t x338 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	static volatile int16_t x340 = INT16_MAX;
	volatile int64_t t75 = -5083LL;

	t75 = (x337*((x338|x339)&x340));

	if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x341 = 5482;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = 1776051442230655LL;
	volatile uint32_t x344 = UINT32_MAX;

	t76 = (x341*((x342|x343)&x344));

	if (t76 != 23545010711190LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x346 = -1;
	static volatile uint32_t x347 = 35000U;
	int16_t x348 = -5;
	uint32_t t77 = 78905U;

	t77 = (x345*((x346|x347)&x348));

	if (t77 != 640U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x349 = 49U;
	uint16_t x350 = 354U;
	uint8_t x352 = 0U;
	static uint32_t t78 = 168783902U;

	t78 = (x349*((x350|x351)&x352));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = 8118;
	int8_t x354 = INT8_MIN;
	int8_t x356 = INT8_MIN;

	t79 = (x353*((x354|x355)&x356));

	if (t79 != -1039104) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x358 = INT16_MIN;
	int8_t x360 = -1;
	uint64_t t80 = 345671259LLU;

	t80 = (x357*((x358|x359)&x360));

	if (t80 != 18446744073709551589LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MIN;
	volatile int32_t x364 = INT32_MIN;
	int64_t t81 = -32540445643LL;

	t81 = (x361*((x362|x363)&x364));

	if (t81 != 2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x365 = 32U;
	uint64_t x366 = 3985LLU;
	int16_t x367 = 455;
	int16_t x368 = INT16_MIN;

	t82 = (x365*((x366|x367)&x368));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = INT32_MAX;
	uint8_t x374 = 3U;
	static int64_t x375 = INT64_MAX;
	volatile int64_t t83 = 105871866729475661LL;

	t83 = (x373*((x374|x375)&x376));

	if (t83 != 543852381086397LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x378 = -1;
	int64_t x379 = -1LL;
	uint64_t t84 = 12026813922525LLU;

	t84 = (x377*((x378|x379)&x380));

	if (t84 != 18446743707805609856LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x381 = 1312U;
	static volatile int8_t x382 = -1;
	static volatile int16_t x383 = -1;
	static uint8_t x384 = 15U;
	volatile uint32_t t85 = 7740354U;

	t85 = (x381*((x382|x383)&x384));

	if (t85 != 19680U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = 28LL;
	int64_t x390 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	static int64_t t86 = -100226166120477LL;

	t86 = (x389*((x390|x391)&x392));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = 112U;
	uint32_t x395 = 331484091U;
	uint32_t t87 = 14653703U;

	t87 = (x393*((x394|x395)&x396));

	if (t87 != 2772107152U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 190U;
	int16_t x398 = -12;
	int8_t x399 = -1;
	static uint64_t x400 = 237LLU;
	uint64_t t88 = 6763283968022484LLU;

	t88 = (x397*((x398|x399)&x400));

	if (t88 != 45030LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x402 = -1LL;
	volatile uint8_t x403 = 4U;
	volatile int64_t t89 = 7238063LL;

	t89 = (x401*((x402|x403)&x404));

	if (t89 != 336331499090LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x405 = 0U;
	int32_t x406 = INT32_MIN;
	uint8_t x408 = UINT8_MAX;
	volatile uint64_t t90 = 14946806031515LLU;

	t90 = (x405*((x406|x407)&x408));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x409 = -6;
	static int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MIN;
	static int8_t x412 = INT8_MIN;
	volatile int64_t t91 = 1966903LL;

	t91 = (x409*((x410|x411)&x412));

	if (t91 != 196608LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int32_t x415 = -1;
	int16_t x416 = INT16_MAX;
	static volatile uint64_t t92 = 2004416668988168LLU;

	t92 = (x413*((x414|x415)&x416));

	if (t92 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MAX;
	static int64_t x420 = -1LL;
	int64_t t93 = 23432847102436859LL;

	t93 = (x417*((x418|x419)&x420));

	if (t93 != -127LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x421 = -1LL;
	int32_t x422 = INT32_MIN;
	int32_t x423 = -204;
	uint64_t x424 = 2014217383604888172LLU;

	t94 = (x421*((x422|x423)&x424));

	if (t94 != 16432526690104663516LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x425 = -1;
	uint32_t x426 = 357868450U;
	uint8_t x427 = UINT8_MAX;

	t95 = (x425*((x426|x427)&x428));

	if (t95 != 3937107968U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x431 = -1;
	volatile uint32_t t96 = 3U;

	t96 = (x429*((x430|x431)&x432));

	if (t96 != 1228305824U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x437 = INT8_MIN;
	static uint16_t x439 = UINT16_MAX;
	int8_t x440 = INT8_MIN;
	static uint64_t t97 = 712764100LLU;

	t97 = (x437*((x438|x439)&x440));

	if (t97 != 18446744073701179392LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x446 = INT64_MIN;
	int8_t x447 = INT8_MIN;
	volatile uint64_t t98 = 2926252044518783313LLU;

	t98 = (x445*((x446|x447)&x448));

	if (t98 != 9997487627052280960LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x450 = 2067886518447LLU;
	int8_t x451 = 11;
	uint16_t x452 = 623U;
	volatile uint64_t t99 = 156768805LLU;

	t99 = (x449*((x450|x451)&x452));

	if (t99 != 18446744073708011520LLU) { NG(); } else { ; }
	
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

