#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x12 = INT32_MAX;
uint32_t t2 = 29305151U;
int64_t x23 = -1455634971816455LL;
volatile int64_t t4 = 1923714210383726LL;
volatile uint32_t x25 = 918U;
int64_t x32 = -508621233837LL;
volatile int32_t x37 = 162;
int32_t x39 = 183190914;
static volatile int64_t t9 = 13548LL;
int64_t x55 = 217314512701683LL;
int8_t x57 = -1;
int32_t x58 = -893;
int8_t x59 = INT8_MIN;
static int16_t x67 = -1;
volatile int32_t x68 = INT32_MIN;
volatile int64_t t14 = 1LL;
static int32_t x71 = -486553701;
uint64_t x72 = 223141LLU;
static uint64_t x75 = 1809LLU;
volatile uint64_t t16 = 1792241266181937372LLU;
uint64_t x78 = 11046923671018506LLU;
volatile uint64_t t17 = 276771LLU;
int64_t x83 = INT64_MAX;
int32_t x84 = -47669;
volatile int32_t x94 = INT32_MIN;
static int16_t x96 = -8;
volatile uint64_t t20 = 0LLU;
uint8_t x97 = 43U;
volatile int16_t x105 = -1;
int16_t x111 = INT16_MIN;
static int64_t t24 = -2143786940946LL;
uint64_t x117 = UINT64_MAX;
volatile int16_t x118 = INT16_MIN;
int8_t x135 = -1;
volatile int8_t x137 = -1;
uint64_t x138 = 9013358371LLU;
volatile int16_t x139 = INT16_MAX;
uint64_t t30 = 68638458703185349LLU;
static int64_t t32 = 15080219179921LL;
static uint16_t x150 = 460U;
int64_t x151 = -976283817563761776LL;
uint32_t x153 = 1261358072U;
uint32_t x160 = UINT32_MAX;
int64_t t35 = -480LL;
int64_t x164 = -86647260032445LL;
int64_t t36 = -9452686LL;
volatile int32_t x170 = -1;
int32_t x173 = -518706;
volatile uint32_t x179 = 13U;
int8_t x180 = 5;
volatile uint64_t x183 = UINT64_MAX;
uint8_t x184 = 2U;
uint64_t t40 = 14669608797772LLU;
int64_t x192 = INT64_MAX;
int64_t t42 = -99471379LL;
int32_t x194 = -1;
uint32_t x196 = UINT32_MAX;
volatile int16_t x203 = INT16_MAX;
uint8_t x204 = 7U;
static int64_t x207 = -1LL;
int64_t t48 = 6292165261139LL;
int16_t x222 = INT16_MAX;
volatile int32_t x224 = INT32_MAX;
volatile int8_t x231 = -1;
volatile int64_t x238 = INT64_MIN;
int8_t x240 = -11;
uint8_t x242 = 3U;
int32_t x251 = INT32_MIN;
uint32_t x252 = UINT32_MAX;
uint8_t x280 = 47U;
int32_t x285 = -1;
static volatile int8_t x287 = INT8_MIN;
static int64_t x288 = INT64_MIN;
uint32_t x289 = 24575U;
uint16_t x290 = UINT16_MAX;
uint32_t t65 = 0U;
uint64_t x294 = 208069487LLU;
int16_t x298 = -1;
volatile int64_t x303 = INT64_MIN;
volatile int64_t t69 = 9974971456LL;
int8_t x309 = INT8_MAX;
static int16_t x312 = -1;
int8_t x316 = INT8_MIN;
int64_t x319 = -39850063LL;
static int8_t x325 = INT8_MAX;
static uint16_t x327 = 0U;
uint64_t t74 = 1248252659707306872LLU;
static int8_t x343 = -1;
static volatile uint32_t t77 = 1705559U;
static int16_t x354 = INT16_MAX;
int32_t x357 = INT32_MIN;
static int32_t x360 = INT32_MAX;
static int64_t x361 = -1LL;
uint16_t x365 = 1040U;
int16_t x368 = -1;
static int64_t t84 = -134551141352458580LL;
uint64_t x378 = 1034416227068800LLU;
static int32_t x379 = INT32_MAX;
volatile uint16_t x381 = 17U;
static uint32_t x391 = 1790U;
static uint16_t x405 = 1369U;
uint32_t x406 = 1U;
volatile uint64_t t91 = 53605721495LLU;
int64_t x417 = -57646818034LL;
uint8_t x420 = UINT8_MAX;
int64_t t94 = -1028910915LL;
static int64_t x421 = -1LL;
int64_t x422 = 13115637403LL;
int32_t x423 = -6311108;
uint64_t x427 = 30503LLU;
volatile uint16_t x429 = 2U;
uint16_t x433 = 1U;
volatile uint32_t x436 = UINT32_MAX;
volatile int64_t t99 = 4422603928LL;


void f0(void) {
	uint8_t x1 = 0U;
	uint64_t x2 = 26569582LLU;
	uint16_t x3 = 0U;
	int8_t x4 = INT8_MIN;
	uint64_t t0 = 110959754LLU;

	t0 = ((x1-(x2^x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = 1;
	static volatile uint8_t x7 = 3U;
	int32_t x8 = -12295972;
	int32_t t1 = 303238;

	t1 = ((x5-(x6^x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 272U;
	int16_t x10 = -1;
	uint32_t x11 = 15121093U;

	t2 = ((x9-(x10^x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -7298782;
	int8_t x18 = INT8_MIN;
	uint32_t x19 = 2U;
	uint16_t x20 = 190U;
	uint32_t t3 = 259621125U;

	t3 = ((x17-(x18^x19))/x20);

	if (t3 != 22566677U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 1;
	volatile int64_t x22 = -16329362LL;
	uint8_t x24 = 62U;

	t4 = ((x21-(x22^x23))/x24);

	if (t4 != -23477983459627LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 6827LLU;
	int16_t x27 = 24;
	static int16_t x28 = INT16_MIN;
	volatile uint64_t t5 = 523658219786319594LLU;

	t5 = ((x25-(x26^x27))/x28);

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = 1;
	int32_t x30 = 199274859;
	int64_t x31 = -114242119209405985LL;
	int64_t t6 = -224023933500LL;

	t6 = ((x29-(x30^x31))/x32);

	if (t6 != -224611LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = 36240318U;
	static uint32_t x34 = 21182769U;
	int32_t x35 = -13695;
	int8_t x36 = 2;
	volatile uint32_t t7 = 13U;

	t7 = ((x33-(x34^x35))/x36);

	if (t7 != 28705799U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = -399942586;
	uint8_t x40 = 3U;
	static volatile int32_t t8 = 4626;

	t8 = ((x37-(x38^x39))/x40);

	if (t8 != 163532020) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	int32_t x46 = 19;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MIN;

	t9 = ((x45-(x46^x47))/x48);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 4U;
	int64_t x50 = INT64_MIN;
	uint16_t x51 = 7U;
	static int16_t x52 = -6;
	int64_t t10 = 85519LL;

	t10 = ((x49-(x50^x51))/x52);

	if (t10 != -1537228672809129300LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 47U;
	volatile int32_t x54 = INT32_MAX;
	uint32_t x56 = UINT32_MAX;
	int64_t t11 = -109597311LL;

	t11 = ((x53-(x54^x55))/x56);

	if (t11 != -50597LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x60 = 19;
	int32_t t12 = -2;

	t12 = ((x57-(x58^x59))/x60);

	if (t12 != -40) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = INT16_MIN;
	static int8_t x63 = INT8_MIN;
	uint64_t x64 = 227540085590LLU;
	uint64_t t13 = 23390480573506LLU;

	t13 = ((x61-(x62^x63))/x64);

	if (t13 != 40535152LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	static int32_t x66 = 425;

	t14 = ((x65-(x66^x67))/x68);

	if (t14 != 4294967295LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x69 = INT16_MAX;
	int8_t x70 = -27;
	volatile uint64_t t15 = 30069286100269LLU;

	t15 = ((x69-(x70^x71))/x72);

	if (t15 != 82668555188078LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 1010U;
	static uint16_t x74 = 31U;
	uint16_t x76 = 403U;

	t16 = ((x73-(x74^x75))/x76);

	if (t16 != 45773558495557198LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x77 = UINT8_MAX;
	int16_t x79 = INT16_MIN;
	static int16_t x80 = -5;

	t17 = ((x77-(x78^x79))/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = 915503U;
	volatile int64_t t18 = -217206488027163LL;

	t18 = ((x81-(x82^x83))/x84);

	if (t18 != 193487843935448LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	int8_t x90 = -22;
	volatile int64_t x91 = INT64_MIN;
	volatile int8_t x92 = -13;
	volatile int64_t t19 = -7310900811490LL;

	t19 = ((x89-(x90^x91))/x92);

	if (t19 != 709490156681136599LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x93 = 11975672381753LLU;
	int16_t x95 = INT16_MIN;

	t20 = ((x93-(x94^x95))/x96);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x98 = -1;
	int8_t x99 = INT8_MIN;
	static int32_t x100 = INT32_MIN;
	int32_t t21 = -68;

	t21 = ((x97-(x98^x99))/x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = INT16_MIN;
	int64_t x102 = INT64_MAX;
	static int64_t x103 = -1LL;
	volatile int8_t x104 = 10;
	int64_t t22 = -15642133LL;

	t22 = ((x101-(x102^x103))/x104);

	if (t22 != 922337203685474304LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x106 = 479642440997LLU;
	static int64_t x107 = -1LL;
	volatile uint32_t x108 = 9726129U;
	volatile uint64_t t23 = 80928058260966LLU;

	t23 = ((x105-(x106^x107))/x108);

	if (t23 != 49314LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	int64_t x110 = -1LL;
	uint16_t x112 = 1601U;

	t24 = ((x109-(x110^x111))/x112);

	if (t24 != -20LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x119 = 259U;
	int16_t x120 = INT16_MIN;
	uint64_t t25 = 29529044974LLU;

	t25 = ((x117-(x118^x119))/x120);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static volatile int32_t x122 = INT32_MIN;
	int32_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	static int32_t t26 = 713088;

	t26 = ((x121-(x122^x123))/x124);

	if (t26 != -8421247) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x125 = 6727653550313LLU;
	uint32_t x126 = UINT32_MAX;
	int8_t x127 = -11;
	uint64_t x128 = 83726822674523185LLU;
	static volatile uint64_t t27 = 36478195500066LLU;

	t27 = ((x125-(x126^x127))/x128);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = -1;
	uint32_t x130 = 9U;
	volatile int64_t x131 = INT64_MIN;
	uint8_t x132 = 88U;
	volatile int64_t t28 = -7447256035LL;

	t28 = ((x129-(x130^x131))/x132);

	if (t28 != 104811045873349724LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	static int32_t x136 = -1;
	int32_t t29 = 37057584;

	t29 = ((x133-(x134^x135))/x136);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x140 = 52LLU;

	t30 = ((x137-(x138^x139))/x140);

	if (t30 != 354745078167234949LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	static int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	int8_t x144 = 1;
	static volatile int64_t t31 = -84908LL;

	t31 = ((x141-(x142^x143))/x144);

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MIN;
	static volatile int16_t x146 = -11281;
	int64_t x147 = 6651988613LL;
	int64_t x148 = INT64_MAX;

	t32 = ((x145-(x146^x147))/x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x152 = 595U;
	volatile int64_t t33 = 963643180761186768LL;

	t33 = ((x149-(x150^x151))/x152);

	if (t33 != 1640813135153409LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x154 = -35;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t34 = 36U;

	t34 = ((x153-(x154^x155))/x156);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x157 = 659766265;
	int64_t x158 = -275929716LL;
	static uint32_t x159 = 6U;

	t35 = ((x157-(x158^x159))/x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = -3793LL;
	int32_t x162 = INT32_MIN;
	volatile int32_t x163 = INT32_MIN;

	t36 = ((x161-(x162^x163))/x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	int32_t x171 = -1;
	volatile int8_t x172 = INT8_MIN;
	int64_t t37 = -76887080557LL;

	t37 = ((x169-(x170^x171))/x172);

	if (t37 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MIN;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t38 = 692LL;

	t38 = ((x173-(x174^x175))/x176);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 15LL;
	int32_t x178 = INT32_MAX;
	int64_t t39 = 14LL;

	t39 = ((x177-(x178^x179))/x180);

	if (t39 != -429496723LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = 4U;
	int16_t x182 = INT16_MIN;

	t40 = ((x181-(x182^x183))/x184);

	if (t40 != 9223372036854759426LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = UINT8_MAX;
	static uint16_t x186 = 30752U;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = 126605669054400957LLU;
	uint64_t t41 = 454406LLU;

	t41 = ((x185-(x186^x187))/x188);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	static uint32_t x190 = UINT32_MAX;
	static int8_t x191 = INT8_MIN;

	t42 = ((x189-(x190^x191))/x192);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 0;
	int32_t x195 = -1;
	volatile uint32_t t43 = 9329539U;

	t43 = ((x193-(x194^x195))/x196);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = -15662;
	int64_t x198 = -138361409LL;
	int8_t x199 = INT8_MIN;
	volatile int32_t x200 = INT32_MIN;
	volatile int64_t t44 = -781370983LL;

	t44 = ((x197-(x198^x199))/x200);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x201 = 117;
	uint64_t x202 = UINT64_MAX;
	volatile uint64_t t45 = 12665788LLU;

	t45 = ((x201-(x202^x203))/x204);

	if (t45 != 4697LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x205 = 1;
	int16_t x206 = INT16_MIN;
	volatile uint32_t x208 = 58587830U;
	volatile int64_t t46 = 89770LL;

	t46 = ((x205-(x206^x207))/x208);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = -15;
	uint8_t x210 = 41U;
	uint8_t x211 = UINT8_MAX;
	static int16_t x212 = -4;
	static int32_t t47 = -62;

	t47 = ((x209-(x210^x211))/x212);

	if (t47 != 57) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MAX;
	uint8_t x214 = 4U;
	uint16_t x215 = 15U;
	int16_t x216 = INT16_MAX;

	t48 = ((x213-(x214^x215))/x216);

	if (t48 != 281483566907399LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = 69;
	uint16_t x218 = 23711U;
	int8_t x219 = INT8_MIN;
	static uint8_t x220 = UINT8_MAX;
	int32_t t49 = -436336;

	t49 = ((x217-(x218^x219))/x220);

	if (t49 != 93) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MIN;
	static int64_t x223 = INT64_MIN;
	int64_t t50 = 6LL;

	t50 = ((x221-(x222^x223))/x224);

	if (t50 != 4294967297LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x225 = -1;
	volatile uint8_t x226 = 25U;
	static volatile uint32_t x227 = UINT32_MAX;
	int16_t x228 = -1;
	uint32_t t51 = 101242U;

	t51 = ((x225-(x226^x227))/x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	int32_t x232 = INT32_MAX;
	uint64_t t52 = 649993540LLU;

	t52 = ((x229-(x230^x231))/x232);

	if (t52 != 8589934595LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = UINT32_MAX;
	int16_t x234 = -12;
	int16_t x235 = 264;
	int8_t x236 = INT8_MIN;
	volatile uint32_t t53 = 9080736U;

	t53 = ((x233-(x234^x235))/x236);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 1U;
	uint16_t x239 = 746U;
	volatile int64_t t54 = -78278997962LL;

	t54 = ((x237-(x238^x239))/x240);

	if (t54 != -838488366986797733LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x241 = INT64_MAX;
	static int8_t x243 = INT8_MAX;
	int8_t x244 = -1;
	volatile int64_t t55 = 5180LL;

	t55 = ((x241-(x242^x243))/x244);

	if (t55 != -9223372036854775683LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x245 = 1U;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 102515740685391LLU;
	uint32_t x248 = 72245U;
	uint64_t t56 = 31LLU;

	t56 = ((x245-(x246^x247))/x248);

	if (t56 != 127666544689792LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = -1;
	int8_t x250 = -1;
	volatile uint32_t t57 = 172462U;

	t57 = ((x249-(x250^x251))/x252);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x253 = UINT32_MAX;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MIN;
	int32_t x256 = -1;
	volatile uint32_t t58 = 127058377U;

	t58 = ((x253-(x254^x255))/x256);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x257 = 1945;
	int32_t x258 = INT32_MIN;
	uint32_t x259 = 177875U;
	volatile int32_t x260 = INT32_MIN;
	static uint32_t t59 = 3U;

	t59 = ((x257-(x258^x259))/x260);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x261 = UINT16_MAX;
	static int8_t x262 = INT8_MIN;
	static int8_t x263 = INT8_MAX;
	int8_t x264 = -1;
	int32_t t60 = -384263870;

	t60 = ((x261-(x262^x263))/x264);

	if (t60 != -65536) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	static volatile uint32_t x266 = UINT32_MAX;
	int32_t x267 = -635614;
	uint16_t x268 = 8474U;
	uint32_t t61 = 3926U;

	t61 = ((x265-(x266^x267))/x268);

	if (t61 != 253345U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 97930U;
	int8_t x278 = INT8_MIN;
	uint8_t x279 = 30U;
	uint32_t t62 = 1340U;

	t62 = ((x277-(x278^x279))/x280);

	if (t62 != 2085U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = UINT16_MAX;
	int32_t x283 = -1;
	int16_t x284 = 44;
	int32_t t63 = 2;

	t63 = ((x281-(x282^x283))/x284);

	if (t63 != 744) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x286 = 12U;
	volatile int64_t t64 = -738739681866LL;

	t64 = ((x285-(x286^x287))/x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x291 = 156U;
	volatile uint32_t x292 = 13790U;

	t65 = ((x289-(x290^x291))/x292);

	if (t65 != 311452U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x293 = 53U;
	static uint16_t x295 = UINT16_MAX;
	uint16_t x296 = 12269U;
	uint64_t t66 = 93778919686LLU;

	t66 = ((x293-(x294^x295))/x296);

	if (t66 != 1503524661626989LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = INT16_MAX;
	int32_t x299 = -5;
	uint16_t x300 = UINT16_MAX;
	int32_t t67 = -3670790;

	t67 = ((x297-(x298^x299))/x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x301 = 4U;
	volatile int16_t x302 = -6;
	int32_t x304 = INT32_MAX;
	volatile int64_t t68 = -139LL;

	t68 = ((x301-(x302^x303))/x304);

	if (t68 != -4294967297LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = -1;
	int64_t x306 = INT64_MIN;
	volatile int64_t x307 = -117000LL;
	uint16_t x308 = 15U;

	t69 = ((x305-(x306^x307))/x308);

	if (t69 != -614891469123643920LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x310 = INT16_MIN;
	uint64_t x311 = UINT64_MAX;
	uint64_t t70 = 49922217388548534LLU;

	t70 = ((x309-(x310^x311))/x312);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = 25593;
	int16_t x314 = -121;
	int32_t x315 = -1;
	int32_t t71 = -402;

	t71 = ((x313-(x314^x315))/x316);

	if (t71 != -199) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	volatile uint16_t x320 = 1U;
	static volatile int64_t t72 = 3059802931862927LL;

	t72 = ((x317-(x318^x319))/x320);

	if (t72 != 39850161LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x326 = INT16_MAX;
	uint32_t x328 = 95015387U;
	volatile uint32_t t73 = 3279720U;

	t73 = ((x325-(x326^x327))/x328);

	if (t73 != 45U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1793;
	int64_t x334 = 10LL;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MIN;

	t74 = ((x333-(x334^x335))/x336);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int16_t x339 = INT16_MAX;
	int8_t x340 = 44;
	static volatile int32_t t75 = -59;

	t75 = ((x337-(x338^x339))/x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x341 = -1;
	int8_t x342 = 1;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t76 = 816LLU;

	t76 = ((x341-(x342^x343))/x344);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x345 = UINT16_MAX;
	int32_t x346 = INT32_MAX;
	uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 215196U;

	t77 = ((x345-(x346^x347))/x348);

	if (t77 != 9979U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x349 = UINT8_MAX;
	static int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	volatile int8_t x352 = INT8_MIN;
	static volatile int64_t t78 = -583398723154242608LL;

	t78 = ((x349-(x350^x351))/x352);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x353 = 4;
	int64_t x355 = INT64_MIN;
	static volatile int64_t x356 = INT64_MAX;
	int64_t t79 = -24061560665105LL;

	t79 = ((x353-(x354^x355))/x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x358 = -1;
	static int8_t x359 = -1;
	int32_t t80 = -3752;

	t80 = ((x357-(x358^x359))/x360);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x362 = INT16_MIN;
	int32_t x363 = INT32_MIN;
	int16_t x364 = 8;
	int64_t t81 = 19789615493216134LL;

	t81 = ((x361-(x362^x363))/x364);

	if (t81 != -268431360LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x366 = INT16_MAX;
	static int8_t x367 = -1;
	int32_t t82 = -105888;

	t82 = ((x365-(x366^x367))/x368);

	if (t82 != -33808) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x369 = 81372958LLU;
	int8_t x370 = INT8_MAX;
	int32_t x371 = 6664958;
	volatile uint16_t x372 = 3U;
	volatile uint64_t t83 = 128052978207LLU;

	t83 = ((x369-(x370^x371))/x372);

	if (t83 != 24902708LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x373 = 367348492U;
	int32_t x374 = -166137;
	uint16_t x375 = 83U;
	int64_t x376 = INT64_MIN;

	t84 = ((x373-(x374^x375))/x376);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x377 = INT16_MIN;
	uint32_t x380 = 6753U;
	uint64_t t85 = 1425LLU;

	t85 = ((x377-(x378^x379))/x380);

	if (t85 != 2731483734322108LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x382 = INT64_MAX;
	static volatile int8_t x383 = 11;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t86 = 2357277386LLU;

	t86 = ((x381-(x382^x383))/x384);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = -6;
	int16_t x386 = 404;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t87 = 4785999;

	t87 = ((x385-(x386^x387))/x388);

	if (t87 != -252) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	volatile int8_t x390 = INT8_MIN;
	static uint64_t x392 = UINT64_MAX;
	volatile uint64_t t88 = 108987LLU;

	t88 = ((x389-(x390^x391))/x392);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	volatile int8_t x395 = -1;
	static int64_t x396 = INT64_MAX;
	volatile uint64_t t89 = 2291936009LLU;

	t89 = ((x393-(x394^x395))/x396);

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = INT16_MIN;
	static uint16_t x398 = 27474U;
	volatile int64_t x399 = INT64_MIN;
	int32_t x400 = INT32_MIN;
	volatile int64_t t90 = 980947LL;

	t90 = ((x397-(x398^x399))/x400);

	if (t90 != -4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x407 = 9645U;
	uint64_t x408 = UINT64_MAX;

	t91 = ((x405-(x406^x407))/x408);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = 583U;
	uint32_t x410 = 1018020346U;
	int32_t x411 = INT32_MAX;
	int16_t x412 = -1;
	uint32_t t92 = 166167907U;

	t92 = ((x409-(x410^x411))/x412);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = UINT8_MAX;
	uint16_t x414 = UINT16_MAX;
	uint16_t x415 = UINT16_MAX;
	static volatile uint16_t x416 = 28399U;
	volatile int32_t t93 = 180;

	t93 = ((x413-(x414^x415))/x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x418 = INT32_MIN;
	static int64_t x419 = -1LL;

	t94 = ((x417-(x418^x419))/x420);

	if (t94 != -234487457LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x424 = 1;
	volatile int64_t t95 = -100468666500112903LL;

	t95 = ((x421-(x422^x423))/x424);

	if (t95 != 13113553496LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 56U;
	static int32_t x426 = -1;
	uint16_t x428 = UINT16_MAX;
	volatile uint64_t t96 = 189893386LLU;

	t96 = ((x425-(x426^x427))/x428);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x430 = INT64_MIN;
	int64_t x431 = INT64_MAX;
	int16_t x432 = INT16_MAX;
	int64_t t97 = 697559130LL;

	t97 = ((x429-(x430^x431))/x432);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x434 = INT32_MIN;
	int64_t x435 = INT64_MIN;
	volatile int64_t t98 = -3289062485179493LL;

	t98 = ((x433-(x434^x435))/x436);

	if (t98 != -2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x437 = 96U;
	static int8_t x438 = -1;
	static volatile int16_t x439 = INT16_MIN;
	int64_t x440 = -136724678LL;

	t99 = ((x437-(x438^x439))/x440);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

