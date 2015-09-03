#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -28;
uint16_t x10 = 0U;
int64_t x14 = INT64_MIN;
int8_t x18 = INT8_MAX;
int32_t x23 = 106167212;
uint32_t x27 = 6332263U;
int8_t x39 = -1;
uint64_t x50 = 528413766352790LLU;
static int64_t x55 = -1476499973LL;
int8_t x57 = -23;
volatile int32_t t11 = 78138;
int64_t x62 = 103895254757LL;
int64_t t12 = -1411LL;
volatile uint64_t x68 = 206LLU;
volatile uint8_t x69 = 11U;
volatile uint32_t t14 = 22U;
uint32_t x75 = 180U;
volatile uint32_t t15 = UINT32_MAX;
int32_t x80 = -6;
static volatile int64_t t17 = -20765420778564715LL;
uint64_t t20 = 223909723LLU;
int32_t t23 = 529532;
int32_t x119 = -1761;
uint64_t x121 = 848193341092495LLU;
int16_t x132 = -1;
volatile uint32_t x135 = 444568U;
int16_t x136 = INT16_MAX;
static volatile uint32_t t27 = 61U;
static int16_t x152 = INT16_MAX;
int16_t x160 = INT16_MIN;
int8_t x174 = -1;
uint32_t t35 = 2704U;
uint64_t t36 = 11298161182LLU;
int64_t x185 = INT64_MIN;
uint64_t t38 = 5892562360971650961LLU;
static uint64_t t40 = 798LLU;
int64_t x210 = INT64_MIN;
static uint8_t x213 = 13U;
volatile int16_t x214 = -744;
int8_t x223 = INT8_MAX;
volatile int32_t t45 = 3;
int8_t x233 = -1;
static int8_t x242 = INT8_MAX;
int64_t t48 = -1495863LL;
volatile uint32_t x247 = UINT32_MAX;
volatile uint16_t x252 = UINT16_MAX;
static uint64_t x259 = 192910708199LLU;
static uint64_t t52 = 3595027560LLU;
int32_t x266 = -46337;
uint64_t t54 = 35272376488223492LLU;
int8_t x276 = INT8_MIN;
int32_t t55 = 6238965;
uint64_t t56 = 11082099810LLU;
static int64_t x282 = INT64_MIN;
static volatile uint64_t t62 = 61445173486LLU;
int8_t x322 = -1;
volatile int32_t x327 = INT32_MIN;
volatile int32_t t64 = INT32_MAX;
int16_t x330 = INT16_MIN;
int8_t x331 = INT8_MIN;
volatile int16_t x333 = 107;
uint8_t x335 = 1U;
int8_t x348 = 2;
int32_t x353 = -305;
int32_t x374 = 18;
int64_t t72 = -76761273147LL;
static volatile int16_t x383 = -1;
int64_t x384 = 1201LL;
uint16_t x386 = 836U;
volatile int32_t x401 = INT32_MAX;
static int8_t x404 = -1;
uint16_t x414 = 6284U;
int32_t t79 = 428955;
int8_t x425 = -4;
volatile int32_t x429 = INT32_MIN;
volatile int32_t t82 = 33446377;
volatile int32_t x443 = INT32_MIN;
static int64_t x444 = INT64_MIN;
int32_t x450 = INT32_MIN;
uint64_t x451 = 9LLU;
static uint8_t x454 = UINT8_MAX;
volatile uint32_t t89 = 984996U;
int8_t x462 = INT8_MIN;
int8_t x466 = -1;
volatile int32_t x472 = INT32_MIN;
static uint8_t x474 = 0U;
uint8_t x489 = UINT8_MAX;
uint64_t x490 = UINT64_MAX;
int64_t x497 = 1780913013015880590LL;
int64_t x503 = INT64_MIN;
static int64_t x505 = 3370580144103059LL;
int64_t t99 = -16018600738480319LL;


void f0(void) {
	int16_t x5 = -1;
	int8_t x6 = INT8_MAX;
	static int32_t x7 = 4;
	int16_t x8 = INT16_MAX;

	t0 = (x5|(x6/(x7&x8)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = INT8_MIN;
	int64_t x11 = -892LL;
	static int16_t x12 = INT16_MIN;
	int64_t t1 = -169802749LL;

	t1 = (x9|(x10/(x11&x12)));

	if (t1 != -128LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = -148;
	uint16_t x15 = 58U;
	volatile uint16_t x16 = 3545U;
	int64_t t2 = -19692LL;

	t2 = (x13|(x14/(x15&x16)));

	if (t2 != -17LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static int32_t x19 = 61969;
	int32_t x20 = -1;
	uint64_t t3 = UINT64_MAX;

	t3 = (x17|(x18/(x19&x20)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = 1;
	volatile int32_t x22 = 199;
	int16_t x24 = -13;
	int32_t t4 = -16;

	t4 = (x21|(x22/(x23&x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = UINT32_MAX;
	volatile int8_t x26 = -1;
	int32_t x28 = -120;
	volatile uint32_t t5 = UINT32_MAX;

	t5 = (x25|(x26/(x27&x28)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -1;
	volatile int16_t x30 = INT16_MAX;
	int64_t x31 = -55508LL;
	int16_t x32 = INT16_MIN;
	static int64_t t6 = -30381LL;

	t6 = (x29|(x30/(x31&x32)));

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MAX;
	static int32_t x38 = INT32_MIN;
	volatile int8_t x40 = INT8_MAX;
	volatile int32_t t7 = 258270;

	t7 = (x37|(x38/(x39&x40)));

	if (t7 != -16909313) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	static int8_t x46 = 7;
	volatile uint64_t x47 = UINT64_MAX;
	uint32_t x48 = 156529U;
	uint64_t t8 = 1560287564LLU;

	t8 = (x45|(x46/(x47&x48)));

	if (t8 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 413022U;
	static uint16_t x51 = UINT16_MAX;
	uint16_t x52 = 428U;
	uint64_t t9 = 17040608644LLU;

	t9 = (x49|(x50/(x51&x52)));

	if (t9 != 1234611621374LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = INT32_MAX;
	static int16_t x56 = INT16_MIN;
	int64_t t10 = -5813978611917LL;

	t10 = (x53|(x54/(x55&x56)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = INT32_MAX;
	int8_t x59 = 1;
	static int8_t x60 = -41;

	t11 = (x57|(x58/(x59&x60)));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x63 = -9LL;
	static uint32_t x64 = 559592585U;

	t12 = (x61|(x62/(x63&x64)));

	if (t12 != 255LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MIN;
	static int8_t x66 = INT8_MAX;
	uint32_t x67 = 57688808U;
	volatile uint64_t t13 = 848964LLU;

	t13 = (x65|(x66/(x67&x68)));

	if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = -1;
	static volatile uint16_t x71 = 2U;
	volatile uint32_t x72 = 830430470U;

	t14 = (x69|(x70/(x71&x72)));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x73 = -1;
	int16_t x74 = INT16_MIN;
	static uint16_t x76 = 1965U;

	t15 = (x73|(x74/(x75&x76)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = UINT32_MAX;
	uint32_t x78 = 14219U;
	volatile uint8_t x79 = 2U;
	static volatile uint32_t t16 = UINT32_MAX;

	t16 = (x77|(x78/(x79&x80)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = INT8_MIN;
	int64_t x82 = 127LL;
	int8_t x83 = -54;
	int64_t x84 = -1LL;

	t17 = (x81|(x82/(x83&x84)));

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = -1;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MAX;
	static volatile int32_t t18 = -38597;

	t18 = (x85|(x86/(x87&x88)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x89 = 5812505658560LLU;
	static int32_t x90 = -388558845;
	static uint64_t x91 = UINT64_MAX;
	uint32_t x92 = UINT32_MAX;
	uint64_t t19 = 31888433LLU;

	t19 = (x89|(x90/(x91&x92)));

	if (t19 != 5812505658560LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	static uint64_t x94 = 496869LLU;
	int8_t x95 = -1;
	int8_t x96 = -1;

	t20 = (x93|(x94/(x95&x96)));

	if (t20 != 255LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x101 = 1862U;
	uint64_t x102 = 2670LLU;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	uint64_t t21 = 16154LLU;

	t21 = (x101|(x102/(x103&x104)));

	if (t21 != 1862LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	volatile uint16_t x106 = 7U;
	static uint32_t x107 = UINT32_MAX;
	int32_t x108 = INT32_MAX;
	uint32_t t22 = 26974990U;

	t22 = (x105|(x106/(x107&x108)));

	if (t22 != 4294967168U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = 1;
	uint16_t x110 = UINT16_MAX;
	volatile uint8_t x111 = UINT8_MAX;
	volatile int8_t x112 = -1;

	t23 = (x109|(x110/(x111&x112)));

	if (t23 != 257) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MAX;
	volatile int64_t x120 = 223LL;
	int64_t t24 = 68370416LL;

	t24 = (x117|(x118/(x119&x120)));

	if (t24 != 297528130221121919LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x122 = UINT16_MAX;
	static int64_t x123 = INT64_MIN;
	int16_t x124 = -1;
	volatile uint64_t t25 = 1854052929600LLU;

	t25 = (x121|(x122/(x123&x124)));

	if (t25 != 848193341092495LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x129 = UINT8_MAX;
	volatile uint32_t x130 = 145607634U;
	int8_t x131 = INT8_MIN;
	uint32_t t26 = 1687677U;

	t26 = (x129|(x130/(x131&x132)));

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -3876;
	static volatile int32_t x134 = 98;

	t27 = (x133|(x134/(x135&x136)));

	if (t27 != 4294963420U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = -1;
	uint16_t x138 = 3887U;
	volatile int64_t x139 = INT64_MAX;
	int32_t x140 = 679;
	int64_t t28 = 59237424823597LL;

	t28 = (x137|(x138/(x139&x140)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = 49;
	volatile uint16_t x150 = 4371U;
	int8_t x151 = INT8_MIN;
	static int32_t t29 = -116297072;

	t29 = (x149|(x150/(x151&x152)));

	if (t29 != 49) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x153 = 94111430LLU;
	static int16_t x154 = INT16_MAX;
	static volatile int16_t x155 = -9002;
	static int8_t x156 = INT8_MIN;
	uint64_t t30 = UINT64_MAX;

	t30 = (x153|(x154/(x155&x156)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = 1563;
	uint64_t x159 = 114292LLU;
	static uint64_t t31 = 174884851742573LLU;

	t31 = (x157|(x158/(x159&x160)));

	if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MAX;
	static int8_t x163 = -5;
	uint32_t x164 = 218656971U;
	volatile uint32_t t32 = 2U;

	t32 = (x161|(x162/(x163&x164)));

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = UINT8_MAX;
	static uint32_t x166 = 27U;
	static volatile uint32_t x167 = UINT32_MAX;
	volatile uint32_t x168 = UINT32_MAX;
	volatile uint32_t t33 = 13U;

	t33 = (x165|(x166/(x167&x168)));

	if (t33 != 255U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x173 = INT8_MAX;
	static int8_t x175 = INT8_MAX;
	uint64_t x176 = UINT64_MAX;
	uint64_t t34 = 298287821942728317LLU;

	t34 = (x173|(x174/(x175&x176)));

	if (t34 != 145249953336295807LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	static int16_t x179 = -7543;
	volatile uint32_t x180 = 12309769U;

	t35 = (x177|(x178/(x179&x180)));

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x181 = UINT32_MAX;
	uint64_t x182 = 2528553349481917LLU;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;

	t36 = (x181|(x182/(x183&x184)));

	if (t36 != 4294967295LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x186 = -1;
	int64_t x187 = -1LL;
	uint8_t x188 = UINT8_MAX;
	static int64_t t37 = INT64_MIN;

	t37 = (x185|(x186/(x187&x188)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x189 = -991619LL;
	uint32_t x190 = 44U;
	int16_t x191 = -9853;
	uint64_t x192 = 64430677427380072LLU;

	t38 = (x189|(x190/(x191&x192)));

	if (t38 != 18446744073708559997LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = INT16_MAX;
	uint32_t x194 = 97820643U;
	volatile uint32_t x195 = UINT32_MAX;
	volatile int8_t x196 = -1;
	volatile uint32_t t39 = 118839U;

	t39 = (x193|(x194/(x195&x196)));

	if (t39 != 32767U) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x205 = 3;
	static uint32_t x206 = 205355249U;
	int8_t x207 = INT8_MIN;
	uint64_t x208 = 2753598639941783LLU;

	t40 = (x205|(x206/(x207&x208)));

	if (t40 != 3LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = 228540LLU;
	uint64_t t41 = 62767LLU;

	t41 = (x209|(x210/(x211&x212)));

	if (t41 != 288845140590591LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x215 = -1;
	volatile int8_t x216 = INT8_MIN;
	static volatile int32_t t42 = 29383480;

	t42 = (x213|(x214/(x215&x216)));

	if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x221 = 4340;
	static int8_t x222 = INT8_MAX;
	volatile uint64_t x224 = 7619972855724794121LLU;
	static uint64_t t43 = 3042455033783LLU;

	t43 = (x221|(x222/(x223&x224)));

	if (t43 != 4350LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x225 = INT64_MAX;
	static uint64_t x226 = 5916779890364LLU;
	uint32_t x227 = 2U;
	static int64_t x228 = -1LL;
	volatile uint64_t t44 = 4539944342547362023LLU;

	t44 = (x225|(x226/(x227&x228)));

	if (t44 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x229 = -503;
	uint8_t x230 = 2U;
	int32_t x231 = 334011674;
	static uint16_t x232 = 1473U;

	t45 = (x229|(x230/(x231&x232)));

	if (t45 != -503) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x234 = INT64_MAX;
	int8_t x235 = INT8_MAX;
	uint64_t x236 = 14LLU;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (x233|(x234/(x235&x236)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	static uint16_t x239 = UINT16_MAX;
	int8_t x240 = INT8_MIN;
	volatile int64_t t47 = 17206LL;

	t47 = (x237|(x238/(x239&x240)));

	if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x241 = 1;
	uint32_t x243 = 2U;
	int64_t x244 = -1LL;

	t48 = (x241|(x242/(x243&x244)));

	if (t48 != 63LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = INT64_MIN;
	volatile int16_t x246 = INT16_MIN;
	uint64_t x248 = 46655LLU;
	volatile uint64_t t49 = 1LLU;

	t49 = (x245|(x246/(x247&x248)));

	if (t49 != 9223767423074338759LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x249 = INT64_MIN;
	int16_t x250 = -147;
	int16_t x251 = -1;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x249|(x250/(x251&x252)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x253 = UINT32_MAX;
	volatile int64_t x254 = 9LL;
	int16_t x255 = -1;
	static volatile int8_t x256 = INT8_MAX;
	volatile int64_t t51 = 449230259436428804LL;

	t51 = (x253|(x254/(x255&x256)));

	if (t51 != 4294967295LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x257 = 12262U;
	volatile uint8_t x258 = 79U;
	volatile int32_t x260 = 8656;

	t52 = (x257|(x258/(x259&x260)));

	if (t52 != 12262LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x261 = -1;
	static int8_t x262 = 21;
	static volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = 11;
	uint64_t t53 = UINT64_MAX;

	t53 = (x261|(x262/(x263&x264)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x265 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	volatile uint64_t x268 = 61716153265LLU;

	t54 = (x265|(x266/(x267&x268)));

	if (t54 != 18446744073709538450LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x274 = -1;
	int16_t x275 = -6;

	t55 = (x273|(x274/(x275&x276)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x277 = 2LL;
	static volatile int64_t x278 = 61053495LL;
	uint64_t x279 = UINT64_MAX;
	int64_t x280 = 2942379875LL;

	t56 = (x277|(x278/(x279&x280)));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = INT64_MAX;
	static uint8_t x283 = 13U;
	volatile int16_t x284 = -2679;
	volatile int64_t t57 = 4391041339529786LL;

	t57 = (x281|(x282/(x283&x284)));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x285 = 1981U;
	uint32_t x286 = 1U;
	int32_t x287 = INT32_MAX;
	static uint16_t x288 = 377U;
	volatile uint32_t t58 = 3U;

	t58 = (x285|(x286/(x287&x288)));

	if (t58 != 1981U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = 329196215627LL;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = UINT16_MAX;
	static uint16_t x292 = UINT16_MAX;
	volatile int64_t t59 = 399841459517220128LL;

	t59 = (x289|(x290/(x291&x292)));

	if (t59 != -25269LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x293 = 6731258944876006LLU;
	int8_t x294 = -37;
	int64_t x295 = -1LL;
	static int32_t x296 = -1;
	static uint64_t t60 = 1LLU;

	t60 = (x293|(x294/(x295&x296)));

	if (t60 != 6731258944876007LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = INT16_MIN;
	uint32_t x308 = 394234852U;
	volatile uint64_t t61 = 1439LLU;

	t61 = (x305|(x306/(x307&x308)));

	if (t61 != 46791617791LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 318295725685323LLU;
	volatile uint32_t x311 = 175U;
	static int32_t x312 = 3;

	t62 = (x309|(x310/(x311&x312)));

	if (t62 != 18446744073707666969LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = INT8_MAX;
	static volatile int8_t x323 = INT8_MIN;
	static int8_t x324 = INT8_MIN;
	int32_t t63 = -2049;

	t63 = (x321|(x322/(x323&x324)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x325 = INT32_MAX;
	uint16_t x326 = 1U;
	volatile int8_t x328 = -47;

	t64 = (x325|(x326/(x327&x328)));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x329 = 3U;
	int64_t x332 = INT64_MAX;
	int64_t t65 = 418LL;

	t65 = (x329|(x330/(x331&x332)));

	if (t65 != 3LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x334 = 393618557LLU;
	int8_t x336 = -1;
	volatile uint64_t t66 = 2229293939635LLU;

	t66 = (x333|(x334/(x335&x336)));

	if (t66 != 393618559LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x341 = UINT64_MAX;
	static int16_t x342 = INT16_MIN;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = -1;
	volatile uint64_t t67 = UINT64_MAX;

	t67 = (x341|(x342/(x343&x344)));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = INT64_MIN;
	volatile int8_t x346 = -1;
	int32_t x347 = -1237501;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x345|(x346/(x347&x348)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	volatile int32_t x351 = INT32_MIN;
	uint32_t x352 = UINT32_MAX;
	static uint32_t t69 = 38042806U;

	t69 = (x349|(x350/(x351&x352)));

	if (t69 != 4294967169U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x354 = 1;
	int16_t x355 = INT16_MIN;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t70 = 28037;

	t70 = (x353|(x354/(x355&x356)));

	if (t70 != -305) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = INT32_MIN;
	static int16_t x358 = -1;
	int32_t x359 = INT32_MAX;
	static int32_t x360 = INT32_MAX;
	volatile int32_t t71 = INT32_MIN;

	t71 = (x357|(x358/(x359&x360)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x373 = 9083U;
	int64_t x375 = INT64_MAX;
	int64_t x376 = -247LL;

	t72 = (x373|(x374/(x375&x376)));

	if (t72 != 9083LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = INT8_MIN;
	uint32_t x378 = 714321580U;
	uint8_t x379 = UINT8_MAX;
	static volatile int8_t x380 = -2;
	volatile uint32_t t73 = 307883564U;

	t73 = (x377|(x378/(x379&x380)));

	if (t73 != 4294967169U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = 5428867260479LL;
	static int8_t x382 = INT8_MIN;
	int64_t t74 = -1168561765LL;

	t74 = (x381|(x382/(x383&x384)));

	if (t74 != 5428867260479LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x385 = 2U;
	static int16_t x387 = -52;
	int8_t x388 = 30;
	int32_t t75 = -157;

	t75 = (x385|(x386/(x387&x388)));

	if (t75 != 71) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = -8;
	int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	volatile int8_t x392 = INT8_MIN;
	int32_t t76 = 3377;

	t76 = (x389|(x390/(x391&x392)));

	if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x402 = INT8_MIN;
	volatile uint64_t x403 = 11261831LLU;
	uint64_t t77 = 98822231754LLU;

	t77 = (x401|(x402/(x403&x404)));

	if (t77 != 1638530023423LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x409 = 4479;
	uint16_t x410 = 12U;
	static volatile int64_t x411 = -1020343775327987LL;
	int64_t x412 = -1LL;
	volatile int64_t t78 = -36125429273LL;

	t78 = (x409|(x410/(x411&x412)));

	if (t78 != 4479LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x413 = INT8_MAX;
	int8_t x415 = INT8_MIN;
	static int8_t x416 = INT8_MIN;

	t79 = (x413|(x414/(x415&x416)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x417 = 3LLU;
	static int8_t x418 = INT8_MIN;
	static uint8_t x419 = UINT8_MAX;
	volatile int8_t x420 = INT8_MIN;
	static uint64_t t80 = UINT64_MAX;

	t80 = (x417|(x418/(x419&x420)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x426 = INT32_MIN;
	int8_t x427 = INT8_MIN;
	volatile uint16_t x428 = UINT16_MAX;
	int32_t t81 = 55749240;

	t81 = (x425|(x426/(x427&x428)));

	if (t81 != -4) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	volatile int8_t x432 = -5;

	t82 = (x429|(x430/(x431&x432)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x433 = 75U;
	uint8_t x434 = 1U;
	int16_t x435 = INT16_MAX;
	uint16_t x436 = UINT16_MAX;
	static int32_t t83 = 5;

	t83 = (x433|(x434/(x435&x436)));

	if (t83 != 75) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x437 = INT64_MIN;
	int64_t x438 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = 3137600LLU;
	uint64_t t84 = 77LLU;

	t84 = (x437|(x438/(x439&x440)));

	if (t84 != 9223374976541216650LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x441 = 3374U;
	int32_t x442 = 13;
	int64_t t85 = 1037617027489254LL;

	t85 = (x441|(x442/(x443&x444)));

	if (t85 != 3374LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x445 = INT32_MAX;
	volatile int32_t x446 = -1;
	int64_t x447 = INT64_MIN;
	int8_t x448 = INT8_MIN;
	int64_t t86 = 206948073985099710LL;

	t86 = (x445|(x446/(x447&x448)));

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x449 = 62U;
	int16_t x452 = INT16_MAX;
	static uint64_t t87 = 4961LLU;

	t87 = (x449|(x450/(x451&x452)));

	if (t87 != 2049638230173563135LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x453 = 8362584507758560394LLU;
	uint8_t x455 = UINT8_MAX;
	static int8_t x456 = INT8_MAX;
	uint64_t t88 = 963579460LLU;

	t88 = (x453|(x454/(x455&x456)));

	if (t88 != 8362584507758560394LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x457 = -22885627;
	static volatile uint8_t x458 = 15U;
	uint32_t x459 = 373494544U;
	int32_t x460 = -29975990;

	t89 = (x457|(x458/(x459&x460)));

	if (t89 != 4272081669U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x461 = -1;
	static int64_t x463 = INT64_MIN;
	static int8_t x464 = INT8_MIN;
	int64_t t90 = -49949266LL;

	t90 = (x461|(x462/(x463&x464)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x465 = INT16_MIN;
	uint16_t x467 = 51U;
	static int32_t x468 = 5789901;
	static int32_t t91 = -42;

	t91 = (x465|(x466/(x467&x468)));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x469 = INT16_MIN;
	uint64_t x470 = 1414335397748LLU;
	int64_t x471 = -28910218296794979LL;
	uint64_t t92 = 30926495319865LLU;

	t92 = (x469|(x470/(x471&x472)));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x473 = -1;
	static int8_t x475 = -1;
	int64_t x476 = 13032707LL;
	static int64_t t93 = 1LL;

	t93 = (x473|(x474/(x475&x476)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x477 = INT32_MIN;
	int16_t x478 = -1;
	uint32_t x479 = 73372734U;
	int8_t x480 = -32;
	volatile uint32_t t94 = 460U;

	t94 = (x477|(x478/(x479&x480)));

	if (t94 != 2147483706U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x481 = INT32_MAX;
	uint32_t x482 = 181U;
	volatile uint32_t x483 = UINT32_MAX;
	int8_t x484 = -1;
	static uint32_t t95 = 75U;

	t95 = (x481|(x482/(x483&x484)));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x491 = INT8_MIN;
	uint32_t x492 = UINT32_MAX;
	static volatile uint64_t t96 = 40LLU;

	t96 = (x489|(x490/(x491&x492)));

	if (t96 != 4294967551LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x498 = UINT8_MAX;
	int8_t x499 = INT8_MIN;
	int16_t x500 = -1;
	int64_t t97 = -118948594749420LL;

	t97 = (x497|(x498/(x499&x500)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = -1;
	int16_t x502 = -2;
	int16_t x504 = -1;
	volatile int64_t t98 = 2697762029LL;

	t98 = (x501|(x502/(x503&x504)));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x506 = UINT16_MAX;
	int16_t x507 = -3899;
	int64_t x508 = -1LL;

	t99 = (x505|(x506/(x507&x508)));

	if (t99 != -13LL) { NG(); } else { ; }
	
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

