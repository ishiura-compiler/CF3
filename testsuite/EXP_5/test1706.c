#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MAX;
static int64_t x8 = 4464295149891LL;
uint64_t t1 = 1208374757LLU;
uint64_t t5 = 1446061LLU;
static int32_t x25 = INT32_MIN;
static uint32_t t6 = 125469U;
uint8_t x34 = 99U;
int16_t x39 = INT16_MIN;
uint16_t x49 = 16U;
int32_t x53 = -1;
uint32_t x55 = 1960838U;
int16_t x59 = -1;
volatile int32_t t12 = 229;
int32_t x61 = -80;
int32_t x63 = INT32_MAX;
volatile uint32_t x66 = 3692U;
int8_t x74 = -23;
int16_t x81 = 1056;
int8_t x86 = 1;
volatile int32_t t18 = -975;
static int8_t x89 = -1;
volatile int32_t t19 = 1;
uint16_t x95 = UINT16_MAX;
static int16_t x96 = 0;
int16_t x104 = INT16_MIN;
uint16_t x110 = 7104U;
int32_t x119 = INT32_MIN;
int32_t t25 = 0;
uint16_t x125 = 114U;
static uint16_t x136 = 10040U;
volatile uint32_t x142 = UINT32_MAX;
int8_t x144 = -50;
volatile uint8_t x145 = 12U;
volatile uint8_t x149 = 44U;
int64_t x150 = -47842LL;
uint16_t x153 = 11617U;
uint32_t t32 = 429231386U;
int16_t x162 = -1;
volatile int32_t x163 = -1;
static uint32_t x173 = 4082326U;
volatile int64_t t36 = -2557821751593LL;
static volatile int16_t x180 = -1;
static volatile int64_t t37 = -66LL;
int64_t t38 = 439LL;
static int8_t x203 = -1;
static int8_t x222 = INT8_MAX;
static uint64_t t44 = 3LLU;
uint64_t x226 = UINT64_MAX;
volatile uint64_t x230 = 2038068LLU;
int8_t x233 = INT8_MIN;
static uint16_t x234 = 2U;
static int64_t x237 = INT64_MIN;
volatile uint32_t t49 = 2068U;
static int64_t x248 = -1LL;
int16_t x253 = INT16_MAX;
static volatile uint64_t x256 = 3056790419LLU;
static int16_t x260 = 3;
int8_t x262 = 1;
volatile uint32_t t53 = 118015992U;
volatile int64_t x281 = 1LL;
int8_t x285 = INT8_MAX;
int64_t t58 = 823817452565LL;
uint64_t x291 = 425331LLU;
int8_t x295 = INT8_MIN;
volatile int16_t x297 = INT16_MIN;
static volatile int32_t x301 = INT32_MIN;
int32_t x303 = INT32_MIN;
int64_t t63 = -67197579720LL;
static uint8_t x315 = 1U;
int32_t x316 = 111;
uint32_t t64 = 1730U;
uint8_t x338 = 0U;
int32_t x352 = -113322;
volatile int32_t t72 = -371;
volatile int64_t x359 = 185048343868LL;
uint8_t x360 = UINT8_MAX;
uint32_t t76 = 5301U;
int16_t x380 = -10780;
int16_t x384 = INT16_MAX;
uint8_t x390 = 1U;
uint16_t x391 = 1652U;
static int16_t x395 = INT16_MIN;
volatile uint64_t t81 = 238557669578131889LLU;
static uint64_t x401 = 549569287961913LLU;
int64_t t83 = 1009409058868461LL;
int64_t x414 = INT64_MIN;
uint64_t x415 = 33063203185LLU;
volatile int32_t x416 = 311;
volatile int8_t x417 = -1;
uint8_t x419 = 0U;
static uint8_t x432 = UINT8_MAX;
volatile uint64_t x440 = UINT64_MAX;
uint8_t x444 = 0U;
uint32_t x448 = 123U;
int16_t x449 = INT16_MIN;
volatile uint64_t t92 = 40125973094081LLU;
uint8_t x457 = 116U;
int64_t t94 = -43145626452789914LL;
int32_t x461 = INT32_MAX;
int8_t x463 = -8;
volatile int64_t x464 = -1LL;
int8_t x466 = INT8_MIN;
uint8_t x467 = 0U;
int8_t x480 = -59;
int64_t x484 = -1LL;


void f0(void) {
	volatile int8_t x1 = 14;
	int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MAX;
	uint8_t x4 = 10U;
	int32_t t0 = -170585;

	t0 = (x1*((x2&x3)-x4));

	if (t0 != -140) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = UINT16_MAX;
	static volatile uint64_t x6 = 6188960856LLU;

	t1 = (x5*((x6&x7)-x8));

	if (t1 != 18154176491268535531LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 2423870021400021LLU;
	int16_t x11 = -1;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t2 = 449917792915262050LLU;

	t2 = (x9*((x10&x11)-x12));

	if (t2 != 18136488436092441984LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint16_t x14 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int16_t x16 = INT16_MAX;
	uint64_t t3 = 2285667475080233460LLU;

	t3 = (x13*((x14&x15)-x16));

	if (t3 != 2147450880LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	volatile uint32_t x18 = UINT32_MAX;
	int64_t x19 = -2632838139184395517LL;
	uint64_t x20 = 976964439689790154LLU;
	static uint64_t t4 = 138578926880473018LLU;

	t4 = (x17*((x18&x19)-x20));

	if (t4 != 14370983608655274880LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x22 = INT16_MAX;
	int32_t x23 = INT32_MIN;
	int16_t x24 = 517;

	t5 = (x21*((x22&x23)-x24));

	if (t5 != 517LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint32_t x27 = 46401U;
	uint16_t x28 = 7U;

	t6 = (x25*((x26&x27)-x28));

	if (t6 != 2147483648U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	volatile int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MAX;
	static volatile int64_t t7 = 2628813LL;

	t7 = (x33*((x34&x35)-x36));

	if (t7 != 70366596694016LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 29U;
	int64_t x38 = -134199526526905LL;
	int8_t x40 = -1;
	volatile int64_t t8 = -995959964948LL;

	t8 = (x37*((x38&x39)-x40));

	if (t8 != -3891786270113763LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 64533092814982126LLU;
	volatile int32_t x42 = INT32_MIN;
	static volatile uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MAX;
	static volatile uint64_t t9 = 135LLU;

	t9 = (x41*((x42&x43)-x44));

	if (t9 != 10251041286206821614LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x50 = 1022U;
	uint32_t x51 = 762630235U;
	int32_t x52 = -1;
	volatile uint32_t t10 = 12589U;

	t10 = (x49*((x50&x51)-x52));

	if (t10 != 1456U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x54 = INT64_MAX;
	volatile uint64_t x56 = 361517LLU;
	uint64_t t11 = 1070714194579981226LLU;

	t11 = (x53*((x54&x55)-x56));

	if (t11 != 18446744073707952295LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x57 = 18U;
	int8_t x58 = -1;
	volatile int16_t x60 = INT16_MIN;

	t12 = (x57*((x58&x59)-x60));

	if (t12 != 589806) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x62 = 11U;
	static volatile int8_t x64 = 3;
	volatile int32_t t13 = -242;

	t13 = (x61*((x62&x63)-x64));

	if (t13 != -640) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	int64_t x67 = -54331166LL;
	uint64_t x68 = 4706424495LLU;
	uint64_t t14 = 175178LLU;

	t14 = (x65*((x66&x67)-x68));

	if (t14 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x73 = UINT8_MAX;
	volatile int8_t x75 = -10;
	int16_t x76 = -1;
	static int32_t t15 = -20731;

	t15 = (x73*((x74&x75)-x76));

	if (t15 != -7905) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -1;
	static uint16_t x78 = 3019U;
	volatile int16_t x79 = 110;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t16 = 1;

	t16 = (x77*((x78&x79)-x80));

	if (t16 != 181) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = 6U;
	volatile int16_t x83 = INT16_MAX;
	uint32_t x84 = UINT32_MAX;
	uint32_t t17 = 20293354U;

	t17 = (x81*((x82&x83)-x84));

	if (t17 != 7392U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 19U;
	int16_t x87 = 485;
	static uint8_t x88 = 29U;

	t18 = (x85*((x86&x87)-x88));

	if (t18 != -532) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MIN;
	int32_t x91 = -2983;
	int16_t x92 = -1;

	t19 = (x89*((x90&x91)-x92));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = 0;
	int8_t x94 = INT8_MIN;
	int32_t t20 = 0;

	t20 = (x93*((x94&x95)-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -5;
	static int8_t x98 = INT8_MAX;
	int8_t x99 = INT8_MAX;
	int64_t x100 = -1LL;
	int64_t t21 = -3046001528242011LL;

	t21 = (x97*((x98&x99)-x100));

	if (t21 != -640LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = 21;
	static int8_t x102 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int32_t t22 = 62085;

	t22 = (x101*((x102&x103)-x104));

	if (t22 != 685440) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 1LL;
	static int16_t x111 = INT16_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = 810266LLU;

	t23 = (x109*((x110&x111)-x112));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x117 = -1LL;
	int32_t x118 = -1;
	static int16_t x120 = -1;
	static volatile int64_t t24 = 8294263173057LL;

	t24 = (x117*((x118&x119)-x120));

	if (t24 != 2147483647LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x121 = 8509U;
	static uint16_t x122 = UINT16_MAX;
	int8_t x123 = INT8_MIN;
	volatile uint16_t x124 = 55U;

	t25 = (x121*((x122&x123)-x124));

	if (t25 != 556088677) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x126 = 1;
	static int16_t x127 = INT16_MAX;
	static int8_t x128 = 14;
	int32_t t26 = 1133107;

	t26 = (x125*((x126&x127)-x128));

	if (t26 != -1482) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int64_t x130 = 8512102847325LL;
	static int64_t x131 = INT64_MIN;
	uint16_t x132 = 8U;
	static int64_t t27 = 895LL;

	t27 = (x129*((x130&x131)-x132));

	if (t27 != -2040LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = -1;
	uint8_t x134 = 5U;
	static volatile int32_t x135 = -1296;
	int32_t t28 = -5;

	t28 = (x133*((x134&x135)-x136));

	if (t28 != 10040) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x141 = -145;
	static volatile int8_t x143 = INT8_MIN;
	volatile uint32_t t29 = 356U;

	t29 = (x141*((x142&x143)-x144));

	if (t29 != 11310U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MAX;
	volatile uint32_t x148 = 824798U;
	static uint32_t t30 = 324434U;

	t30 = (x145*((x146&x147)-x148));

	if (t30 != 4285069720U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;
	uint64_t t31 = 380224LLU;

	t31 = (x149*((x150&x151)-x152));

	if (t31 != 44LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x154 = 17U;
	static int16_t x155 = INT16_MAX;
	uint32_t x156 = UINT32_MAX;

	t32 = (x153*((x154&x155)-x156));

	if (t32 != 209106U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MAX;
	volatile uint8_t x158 = 29U;
	static int64_t x159 = INT64_MIN;
	static uint16_t x160 = 1013U;
	static volatile int64_t t33 = 6878161771LL;

	t33 = (x157*((x158&x159)-x160));

	if (t33 != -2175400934411LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x161 = INT16_MIN;
	int8_t x164 = INT8_MAX;
	int32_t t34 = 1;

	t34 = (x161*((x162&x163)-x164));

	if (t34 != 4194304) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	uint8_t x166 = 6U;
	int16_t x167 = 0;
	uint64_t x168 = UINT64_MAX;
	uint64_t t35 = 336150685577453LLU;

	t35 = (x165*((x166&x167)-x168));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x174 = -54722748123237450LL;
	int32_t x175 = INT32_MAX;
	int32_t x176 = INT32_MIN;

	t36 = (x173*((x174&x175)-x176));

	if (t36 != 14587100208228516LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x178 = 1;
	static int64_t x179 = INT64_MAX;

	t37 = (x177*((x178&x179)-x180));

	if (t37 != -256LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x185 = INT8_MAX;
	int64_t x186 = INT64_MIN;
	uint16_t x187 = 27U;
	volatile uint8_t x188 = 7U;

	t38 = (x185*((x186&x187)-x188));

	if (t38 != -889LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 0LLU;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MAX;
	volatile int8_t x192 = INT8_MIN;
	static uint64_t t39 = 284332528LLU;

	t39 = (x189*((x190&x191)-x192));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = 118874742;
	int16_t x202 = INT16_MIN;
	int64_t x204 = -1LL;
	int64_t t40 = 459257905005LL;

	t40 = (x201*((x202&x203)-x204));

	if (t40 != -3895168671114LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x205 = 701370224075364769LLU;
	uint16_t x206 = 755U;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = INT32_MIN;
	volatile uint64_t t41 = 1005LLU;

	t41 = (x205*((x206&x207)-x208));

	if (t41 != 1137920220647413203LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = 4198516760475LLU;
	volatile int64_t x211 = 39242970825067LL;
	int8_t x212 = INT8_MAX;
	uint64_t t42 = 5942882839681LLU;

	t42 = (x209*((x210&x211)-x212));

	if (t42 != 497739547821428LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = 4151U;
	uint16_t x215 = UINT16_MAX;
	int8_t x216 = -1;
	static volatile int32_t t43 = -356023;

	t43 = (x213*((x214&x215)-x216));

	if (t43 != -531456) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x221 = INT16_MIN;
	uint64_t x223 = 12738183918223125LLU;
	static int8_t x224 = -61;

	t44 = (x221*((x222&x223)-x224));

	if (t44 != 18446744073706864640LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = INT32_MAX;
	uint64_t x227 = UINT64_MAX;
	static volatile int64_t x228 = INT64_MIN;
	static volatile uint64_t t45 = 1595459575LLU;

	t45 = (x225*((x226&x227)-x228));

	if (t45 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x229 = 6935U;
	uint16_t x231 = 119U;
	static int8_t x232 = INT8_MIN;
	uint64_t t46 = 1370LLU;

	t46 = (x229*((x230&x231)-x232));

	if (t46 != 1248300LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x235 = INT8_MIN;
	static uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t47 = 74016LLU;

	t47 = (x233*((x234&x235)-x236));

	if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x238 = INT8_MIN;
	uint64_t x239 = 1470953001129105699LLU;
	uint32_t x240 = 26U;
	volatile uint64_t t48 = 4872907460675LLU;

	t48 = (x237*((x238&x239)-x240));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = INT32_MAX;
	int32_t x242 = 1839;
	volatile uint32_t x243 = 96663U;
	volatile int32_t x244 = INT32_MIN;

	t49 = (x241*((x242&x243)-x244));

	if (t49 != 4294967033U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x245 = -365;
	int16_t x246 = 265;
	volatile uint16_t x247 = UINT16_MAX;
	volatile int64_t t50 = 24623LL;

	t50 = (x245*((x246&x247)-x248));

	if (t50 != -97090LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	uint64_t t51 = 17458LLU;

	t51 = (x253*((x254&x255)-x256));

	if (t51 != 18446573545261198227LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x257 = INT32_MIN;
	uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 170571U;
	volatile uint32_t t52 = 182357179U;

	t52 = (x257*((x258&x259)-x260));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x261 = 1348444U;
	int8_t x263 = INT8_MIN;
	uint32_t x264 = 123745U;

	t53 = (x261*((x262&x263)-x264));

	if (t53 != 640521764U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x269 = UINT16_MAX;
	uint32_t x270 = 130268217U;
	int16_t x271 = 2562;
	volatile int16_t x272 = INT16_MAX;
	volatile uint32_t t54 = 83323212U;

	t54 = (x269*((x270&x271)-x272));

	if (t54 != 2281797631U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x273 = 35;
	uint16_t x274 = 21747U;
	static volatile int16_t x275 = INT16_MIN;
	uint32_t x276 = 1872729U;
	static volatile uint32_t t55 = 22U;

	t55 = (x273*((x274&x275)-x276));

	if (t55 != 4229421781U) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x277 = -2;
	uint32_t x278 = 750U;
	int32_t x279 = -1;
	static int8_t x280 = -1;
	volatile uint32_t t56 = 68399799U;

	t56 = (x277*((x278&x279)-x280));

	if (t56 != 4294965794U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x282 = 466146712349585587LLU;
	uint32_t x283 = 115175U;
	volatile int32_t x284 = INT32_MAX;
	volatile uint64_t t57 = 45616LLU;

	t57 = (x281*((x282&x283)-x284));

	if (t57 != 18446744071562068132LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x286 = -5251138;
	uint32_t x287 = 79U;
	int64_t x288 = 904590081147220LL;

	t58 = (x285*((x286&x287)-x288));

	if (t58 != -114882940305695162LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x289 = -340;
	static volatile int16_t x290 = INT16_MIN;
	volatile int32_t x292 = INT32_MIN;
	uint64_t t59 = 3956LLU;

	t59 = (x289*((x290&x291)-x292));

	if (t59 != 18446743343431417856LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x293 = -1LL;
	volatile uint16_t x294 = UINT16_MAX;
	int8_t x296 = INT8_MAX;
	int64_t t60 = -860100501004LL;

	t60 = (x293*((x294&x295)-x296));

	if (t60 != -65281LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x298 = UINT32_MAX;
	static volatile int64_t x299 = -5399033367496LL;
	static int8_t x300 = INT8_MIN;
	volatile int64_t t61 = -70355717393971628LL;

	t61 = (x297*((x298&x299)-x300));

	if (t61 != -132234969088000LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x302 = 39459U;
	int64_t x304 = 239LL;
	volatile int64_t t62 = -3853966609LL;

	t62 = (x301*((x302&x303)-x304));

	if (t62 != 513248591872LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x305 = -1;
	int8_t x306 = INT8_MAX;
	int64_t x307 = -36484944930599LL;
	volatile int16_t x308 = INT16_MIN;

	t63 = (x305*((x306&x307)-x308));

	if (t63 != -32857LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x313 = 39502414U;
	int32_t x314 = INT32_MIN;

	t64 = (x313*((x314&x315)-x316));

	if (t64 != 4205166638U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x317 = 1474U;
	uint32_t x318 = UINT32_MAX;
	static int64_t x319 = INT64_MIN;
	uint32_t x320 = 1774166733U;
	int64_t t65 = -772LL;

	t65 = (x317*((x318&x319)-x320));

	if (t65 != -2615121764442LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x321 = INT8_MAX;
	volatile int8_t x322 = 0;
	uint8_t x323 = 14U;
	volatile int8_t x324 = 26;
	int32_t t66 = 8875449;

	t66 = (x321*((x322&x323)-x324));

	if (t66 != -3302) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x329 = UINT64_MAX;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = -1;
	volatile int8_t x332 = -3;
	static uint64_t t67 = 100279953216LLU;

	t67 = (x329*((x330&x331)-x332));

	if (t67 != 18446744073709551358LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x333 = INT16_MIN;
	int8_t x334 = -1;
	static int64_t x335 = 5LL;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t68 = 80LLU;

	t68 = (x333*((x334&x335)-x336));

	if (t68 != 18446744073709355008LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x337 = INT16_MAX;
	int32_t x339 = -1;
	int16_t x340 = INT16_MAX;
	int32_t t69 = -123178;

	t69 = (x337*((x338&x339)-x340));

	if (t69 != -1073676289) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = 18830U;
	uint64_t x343 = 2943824LLU;
	int16_t x344 = INT16_MAX;
	uint64_t t70 = 494631LLU;

	t70 = (x341*((x342&x343)-x344));

	if (t70 != 18446744073248225023LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = 6;
	uint64_t x351 = UINT64_MAX;
	uint64_t t71 = 322622836829349LLU;

	t71 = (x349*((x350&x351)-x352));

	if (t71 != 18446744069996019712LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x353 = 2031265;
	int32_t x354 = INT32_MIN;
	static uint16_t x355 = 7U;
	volatile uint8_t x356 = 93U;

	t72 = (x353*((x354&x355)-x356));

	if (t72 != -188907645) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x357 = INT16_MIN;
	uint16_t x358 = 3U;
	static volatile int64_t t73 = -2900273153928746LL;

	t73 = (x357*((x358&x359)-x360));

	if (t73 != 8355840LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x361 = 2U;
	int32_t x362 = -1;
	static int32_t x363 = -1;
	int16_t x364 = INT16_MIN;
	volatile int32_t t74 = -4303;

	t74 = (x361*((x362&x363)-x364));

	if (t74 != 65534) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x365 = UINT8_MAX;
	volatile uint64_t x366 = 1726853713113237LLU;
	uint16_t x367 = UINT16_MAX;
	volatile int8_t x368 = INT8_MIN;
	uint64_t t75 = 74593LLU;

	t75 = (x365*((x366&x367)-x368));

	if (t75 != 3204075LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x373 = UINT32_MAX;
	static volatile int16_t x374 = -1;
	int32_t x375 = -1;
	static uint8_t x376 = 0U;

	t76 = (x373*((x374&x375)-x376));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x377 = 0;
	uint32_t x378 = UINT32_MAX;
	volatile int8_t x379 = INT8_MIN;
	volatile uint32_t t77 = 1U;

	t77 = (x377*((x378&x379)-x380));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x381 = -1;
	static uint8_t x382 = 0U;
	uint8_t x383 = 0U;
	static int32_t t78 = -5004654;

	t78 = (x381*((x382&x383)-x384));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x389 = 1U;
	static uint16_t x392 = 29U;
	volatile int32_t t79 = -2646289;

	t79 = (x389*((x390&x391)-x392));

	if (t79 != -29) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x393 = 41221U;
	static uint16_t x394 = UINT16_MAX;
	int8_t x396 = INT8_MAX;
	uint32_t t80 = 814U;

	t80 = (x393*((x394&x395)-x396));

	if (t80 != 1345494661U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -1;
	uint64_t x399 = 3137LLU;
	int64_t x400 = INT64_MIN;

	t81 = (x397*((x398&x399)-x400));

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = 10414LLU;
	uint16_t x404 = 17U;
	static volatile uint64_t t82 = 1940929484592LLU;

	t82 = (x401*((x402&x403)-x404));

	if (t82 != 5688591699693761463LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x405 = INT8_MIN;
	uint16_t x406 = 2U;
	volatile int64_t x407 = -1LL;
	static volatile int16_t x408 = INT16_MAX;

	t83 = (x405*((x406&x407)-x408));

	if (t83 != 4193920LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x409 = -1;
	int32_t x410 = -76238940;
	uint32_t x411 = 2460U;
	int16_t x412 = INT16_MIN;
	uint32_t t84 = 4501U;

	t84 = (x409*((x410&x411)-x412));

	if (t84 != 4294932092U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x413 = 2891818269LL;
	uint64_t t85 = 2804103LLU;

	t85 = (x413*((x414&x415)-x416));

	if (t85 != 18446743174354069957LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x418 = 11U;
	static volatile int64_t x420 = 1LL;
	int64_t t86 = 256049846585946998LL;

	t86 = (x417*((x418&x419)-x420));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x425 = 3U;
	volatile uint8_t x426 = UINT8_MAX;
	int32_t x427 = 98393;
	volatile uint8_t x428 = 6U;
	int32_t t87 = 0;

	t87 = (x425*((x426&x427)-x428));

	if (t87 != 249) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x429 = 1U;
	static int64_t x430 = INT64_MIN;
	int16_t x431 = 7;
	volatile int64_t t88 = 3781250183LL;

	t88 = (x429*((x430&x431)-x432));

	if (t88 != -255LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x437 = -1;
	int32_t x438 = INT32_MIN;
	static uint16_t x439 = 4303U;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x437*((x438&x439)-x440));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = -1;
	static uint16_t x442 = 6002U;
	int64_t x443 = -1LL;
	int64_t t90 = -3215929536323095LL;

	t90 = (x441*((x442&x443)-x444));

	if (t90 != -6002LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MAX;
	volatile int32_t x447 = INT32_MIN;
	volatile uint32_t t91 = 8275U;

	t91 = (x445*((x446&x447)-x448));

	if (t91 != 2147483648U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x450 = 2U;
	int16_t x451 = 2615;
	uint64_t x452 = 281207LLU;

	t92 = (x449*((x450&x451)-x452));

	if (t92 != 9214525440LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x453 = UINT16_MAX;
	static volatile int32_t x454 = -1;
	uint16_t x455 = 6155U;
	volatile uint8_t x456 = 29U;
	int32_t t93 = -16234640;

	t93 = (x453*((x454&x455)-x456));

	if (t93 != 401467410) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x458 = 50823131;
	int64_t x459 = INT64_MIN;
	int32_t x460 = INT32_MAX;

	t94 = (x457*((x458&x459)-x460));

	if (t94 != -249108103052LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x462 = 3LL;
	int64_t t95 = -25925672617LL;

	t95 = (x461*((x462&x463)-x464));

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x465 = INT32_MIN;
	int64_t x468 = -1LL;
	int64_t t96 = 76341239824LL;

	t96 = (x465*((x466&x467)-x468));

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x477 = INT16_MIN;
	volatile int64_t x478 = -1LL;
	int16_t x479 = INT16_MIN;
	volatile int64_t t97 = 1736LL;

	t97 = (x477*((x478&x479)-x480));

	if (t97 != 1071808512LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x481 = 3202;
	int32_t x482 = INT32_MIN;
	uint8_t x483 = UINT8_MAX;
	volatile int64_t t98 = 5848320767124LL;

	t98 = (x481*((x482&x483)-x484));

	if (t98 != 3202LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x485 = -1LL;
	uint64_t x486 = 233895LLU;
	int16_t x487 = INT16_MIN;
	static int32_t x488 = INT32_MIN;
	uint64_t t99 = 48762015937759068LLU;

	t99 = (x485*((x486&x487)-x488));

	if (t99 != 18446744071561838592LLU) { NG(); } else { ; }
	
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

