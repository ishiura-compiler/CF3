#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MAX;
int64_t x5 = INT64_MAX;
int16_t x24 = INT16_MIN;
volatile int32_t t5 = -125513794;
int8_t x29 = INT8_MIN;
int8_t x36 = -1;
int32_t x39 = 850;
int16_t x43 = -1273;
static volatile int64_t t10 = -9603132944LL;
volatile int16_t x47 = INT16_MIN;
int8_t x48 = INT8_MAX;
static volatile int32_t t11 = 7757499;
static int64_t x50 = INT64_MAX;
int64_t x51 = -2050LL;
int16_t x53 = -1;
int64_t x55 = -1LL;
static int32_t t13 = 1;
uint32_t x58 = UINT32_MAX;
int16_t x59 = INT16_MIN;
uint64_t x60 = 1269151403LLU;
int64_t x65 = -17482LL;
int64_t x68 = 0LL;
volatile int64_t t16 = 465LL;
int32_t x69 = 3;
uint8_t x74 = UINT8_MAX;
uint32_t x80 = UINT32_MAX;
uint64_t t19 = 550220560421365LLU;
volatile uint64_t x86 = UINT64_MAX;
volatile int32_t t21 = 43542;
int32_t x95 = INT32_MIN;
uint8_t x96 = 9U;
int16_t x102 = INT16_MAX;
int32_t x105 = 7;
int32_t x107 = INT32_MAX;
uint64_t x111 = 7248753383743685664LLU;
uint32_t x113 = UINT32_MAX;
static int8_t x114 = -1;
static int64_t x117 = -1LL;
volatile int64_t t29 = -1501837772LL;
int16_t x126 = INT16_MIN;
int32_t t31 = -153;
static uint32_t x132 = 8U;
volatile int32_t x140 = -29664723;
volatile int32_t x142 = -869;
int16_t x158 = INT16_MAX;
static int64_t t39 = -83LL;
int16_t x161 = -1;
uint32_t x167 = 10U;
int64_t x169 = -1LL;
int64_t t42 = 50LL;
uint8_t x174 = 68U;
static uint16_t x177 = 11U;
int8_t x178 = 53;
static int16_t x184 = -1;
uint32_t x191 = UINT32_MAX;
volatile uint64_t t47 = 35091662522288LLU;
int16_t x193 = INT16_MAX;
static int8_t x197 = -2;
static int8_t x200 = INT8_MAX;
static int32_t t49 = 75028305;
static int32_t x201 = -14487163;
int8_t x204 = INT8_MIN;
volatile uint64_t x211 = UINT64_MAX;
volatile int32_t t52 = 110497555;
static uint8_t x220 = UINT8_MAX;
volatile int16_t x237 = INT16_MIN;
int32_t t58 = -10;
static volatile int8_t x242 = -1;
volatile int32_t t61 = -281;
static volatile int16_t x261 = INT16_MAX;
uint8_t x266 = 58U;
static int32_t x269 = INT32_MAX;
static int32_t t66 = 28435406;
int8_t x284 = INT8_MIN;
static uint32_t x285 = 409U;
uint8_t x292 = 9U;
int16_t x296 = 50;
static volatile int32_t t71 = 0;
int16_t x298 = -1;
int32_t x300 = INT32_MIN;
static int64_t x309 = -1LL;
volatile uint16_t x310 = UINT16_MAX;
int64_t x324 = -1LL;
int8_t x327 = INT8_MIN;
int16_t x334 = 1;
static volatile int16_t x339 = 0;
int32_t x340 = INT32_MAX;
int64_t x343 = -1LL;
uint32_t t81 = UINT32_MAX;
static int32_t x352 = 6315742;
uint64_t x354 = UINT64_MAX;
uint32_t x360 = 45922U;
volatile int32_t t85 = -126121;
int32_t t87 = 23870;
int64_t x374 = 259291022871444893LL;
int64_t x383 = INT64_MIN;
int16_t x387 = INT16_MIN;
volatile int32_t t92 = -120792568;
uint16_t x399 = UINT16_MAX;
volatile uint32_t x402 = 79534490U;
int32_t t96 = 32071081;
static int64_t x410 = 706317231LL;
static volatile int32_t t99 = 101923;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = INT8_MAX;
	static uint8_t x4 = 0U;
	static int32_t t0 = 1;

	t0 = (x1-(x2<=(x3&x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x6 = INT64_MIN;
	static int8_t x7 = 0;
	int64_t x8 = -40510476998923LL;
	int64_t t1 = -1480455834084LL;

	t1 = (x5-(x6<=(x7&x8)));

	if (t1 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x11 = 150323636U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 18386760;

	t2 = (x9-(x10<=(x11&x12)));

	if (t2 != 65534) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static int8_t x14 = 1;
	volatile int8_t x15 = INT8_MAX;
	int16_t x16 = -1;
	volatile int64_t t3 = 268666204LL;

	t3 = (x13-(x14<=(x15&x16)));

	if (t3 != -2LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	static int32_t x18 = INT32_MIN;
	int16_t x19 = -1;
	int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 455;

	t4 = (x17-(x18<=(x19&x20)));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	volatile int16_t x22 = INT16_MAX;
	uint64_t x23 = 15693764886447LLU;

	t5 = (x21-(x22<=(x23&x24)));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = 553U;
	static volatile int32_t x28 = -1;
	static volatile int32_t t6 = 67259;

	t6 = (x25-(x26<=(x27&x28)));

	if (t6 != 65534) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -14;
	int64_t x31 = INT64_MIN;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 1177112;

	t7 = (x29-(x30<=(x31&x32)));

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	static volatile uint8_t x34 = UINT8_MAX;
	static int64_t x35 = INT64_MIN;
	int32_t t8 = INT32_MIN;

	t8 = (x33-(x34<=(x35&x36)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 143U;
	int8_t x38 = -11;
	uint8_t x40 = UINT8_MAX;
	uint32_t t9 = 1232172965U;

	t9 = (x37-(x38<=(x39&x40)));

	if (t9 != 142U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int32_t x42 = -1;
	int32_t x44 = -1;

	t10 = (x41-(x42<=(x43&x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 7859;
	volatile int8_t x46 = INT8_MIN;

	t11 = (x45-(x46<=(x47&x48)));

	if (t11 != 7858) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 442067;

	t12 = (x49-(x50<=(x51&x52)));

	if (t12 != -32768) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 60U;
	int16_t x56 = INT16_MIN;

	t13 = (x53-(x54<=(x55&x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t t14 = 0;

	t14 = (x57-(x58<=(x59&x60)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int8_t x62 = 2;
	static int16_t x63 = -28;
	int16_t x64 = -7349;
	int32_t t15 = 5;

	t15 = (x61-(x62<=(x63&x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 1741LLU;
	int32_t x67 = 524611105;

	t16 = (x65-(x66<=(x67&x68)));

	if (t16 != -17482LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	static uint64_t x71 = 367LLU;
	int32_t x72 = 4;
	volatile int32_t t17 = -1597504;

	t17 = (x69-(x70<=(x71&x72)));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint16_t x75 = 159U;
	static int16_t x76 = INT16_MAX;
	volatile int32_t t18 = 3956369;

	t18 = (x73-(x74<=(x75&x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x77 = UINT64_MAX;
	uint32_t x78 = 1264935U;
	int8_t x79 = INT8_MIN;

	t19 = (x77-(x78<=(x79&x80)));

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	int64_t x83 = -1LL;
	int32_t x84 = -83161006;
	int32_t t20 = -52356582;

	t20 = (x81-(x82<=(x83&x84)));

	if (t20 != -129) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 129U;
	int64_t x87 = INT64_MAX;
	int16_t x88 = -1508;

	t21 = (x85-(x86<=(x87&x88)));

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	int16_t x90 = -296;
	int64_t x91 = INT64_MIN;
	uint16_t x92 = 8001U;
	volatile uint32_t t22 = 1905U;

	t22 = (x89-(x90<=(x91&x92)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 28U;
	static uint64_t x94 = UINT64_MAX;
	uint32_t t23 = 100337U;

	t23 = (x93-(x94<=(x95&x96)));

	if (t23 != 28U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MAX;
	int8_t x98 = 27;
	int64_t x99 = -653760172LL;
	int32_t x100 = INT32_MAX;
	int32_t t24 = 2859;

	t24 = (x97-(x98<=(x99&x100)));

	if (t24 != 32766) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int32_t x103 = INT32_MIN;
	int32_t x104 = -1;
	uint64_t t25 = UINT64_MAX;

	t25 = (x101-(x102<=(x103&x104)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x106 = -1756;
	volatile int64_t x108 = -1LL;
	volatile int32_t t26 = -495;

	t26 = (x105-(x106<=(x107&x108)));

	if (t26 != 6) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	uint64_t x110 = 41081262610521872LLU;
	uint16_t x112 = 125U;
	volatile int32_t t27 = 182967;

	t27 = (x109-(x110<=(x111&x112)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x115 = 64U;
	int32_t x116 = INT32_MIN;
	uint32_t t28 = 472U;

	t28 = (x113-(x114<=(x115&x116)));

	if (t28 != 4294967294U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x118 = INT8_MAX;
	uint8_t x119 = 4U;
	uint64_t x120 = 9851604LLU;

	t29 = (x117-(x118<=(x119&x120)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static uint32_t x122 = 48382832U;
	static uint64_t x123 = UINT64_MAX;
	volatile uint8_t x124 = 1U;
	static volatile int32_t t30 = -21493;

	t30 = (x121-(x122<=(x123&x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	static int32_t x127 = -1;
	volatile int32_t x128 = INT32_MAX;

	t31 = (x125-(x126<=(x127&x128)));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint64_t x130 = UINT64_MAX;
	uint16_t x131 = 13U;
	volatile int32_t t32 = 7;

	t32 = (x129-(x130<=(x131&x132)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 102U;
	int16_t x134 = 616;
	volatile int8_t x135 = 1;
	uint64_t x136 = 4LLU;
	volatile int32_t t33 = 3;

	t33 = (x133-(x134<=(x135&x136)));

	if (t33 != 102) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint8_t x138 = 47U;
	int16_t x139 = INT16_MIN;
	int64_t t34 = INT64_MIN;

	t34 = (x137-(x138<=(x139&x140)));

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MAX;
	volatile int16_t x143 = INT16_MAX;
	static int16_t x144 = 0;
	volatile int64_t t35 = 1911630361743LL;

	t35 = (x141-(x142<=(x143&x144)));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 1652005583U;
	volatile int8_t x146 = 24;
	static int32_t x147 = INT32_MIN;
	volatile int16_t x148 = 274;
	volatile uint32_t t36 = 8U;

	t36 = (x145-(x146<=(x147&x148)));

	if (t36 != 1652005583U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 46U;
	int8_t x150 = INT8_MIN;
	volatile uint64_t x151 = 1673345353983722753LLU;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 7847769;

	t37 = (x149-(x150<=(x151&x152)));

	if (t37 != 46) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 0U;
	volatile uint64_t x154 = 34119814419557241LLU;
	int8_t x155 = INT8_MAX;
	int16_t x156 = -14;
	static int32_t t38 = 194155;

	t38 = (x153-(x154<=(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 834676305216350342LL;
	int32_t x159 = -1;
	volatile int16_t x160 = 2693;

	t39 = (x157-(x158<=(x159&x160)));

	if (t39 != 834676305216350342LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 201031367584LLU;
	static int64_t x163 = 84465669906635LL;
	static volatile int64_t x164 = INT64_MAX;
	volatile int32_t t40 = -827;

	t40 = (x161-(x162<=(x163&x164)));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	uint16_t x166 = 14385U;
	int8_t x168 = INT8_MIN;
	int32_t t41 = 87721299;

	t41 = (x165-(x166<=(x167&x168)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = 8615;
	uint16_t x171 = 1829U;
	uint16_t x172 = 102U;

	t42 = (x169-(x170<=(x171&x172)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int8_t x175 = -1;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -14505;

	t43 = (x173-(x174<=(x175&x176)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x179 = 3399070409354LL;
	uint32_t x180 = 16990176U;
	volatile int32_t t44 = 830039612;

	t44 = (x177-(x178<=(x179&x180)));

	if (t44 != 10) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = UINT32_MAX;
	static volatile int8_t x182 = -1;
	static int32_t x183 = INT32_MIN;
	uint32_t t45 = UINT32_MAX;

	t45 = (x181-(x182<=(x183&x184)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	uint32_t x186 = 267528418U;
	static volatile int8_t x187 = INT8_MIN;
	int32_t x188 = 1;
	int32_t t46 = 0;

	t46 = (x185-(x186<=(x187&x188)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 961LLU;
	int64_t x190 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;

	t47 = (x189-(x190<=(x191&x192)));

	if (t47 != 960LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 21;
	static int16_t x195 = INT16_MAX;
	static int32_t x196 = INT32_MAX;
	static int32_t t48 = -1063338651;

	t48 = (x193-(x194<=(x195&x196)));

	if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 3408U;
	int32_t x199 = INT32_MIN;

	t49 = (x197-(x198<=(x199&x200)));

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = INT16_MIN;
	int32_t t50 = 805023630;

	t50 = (x201-(x202<=(x203&x204)));

	if (t50 != -14487163) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MIN;
	uint64_t x207 = UINT64_MAX;
	int8_t x208 = -1;
	volatile int32_t t51 = 24597;

	t51 = (x205-(x206<=(x207&x208)));

	if (t51 != 254) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -347;
	int64_t x210 = 650662669107398LL;
	int16_t x212 = 1401;

	t52 = (x209-(x210<=(x211&x212)));

	if (t52 != -347) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 453395429;
	int8_t x214 = -5;
	int32_t x215 = -126384;
	int8_t x216 = INT8_MIN;
	static int32_t t53 = 456585;

	t53 = (x213-(x214<=(x215&x216)));

	if (t53 != 453395429) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 1177U;
	int64_t x219 = INT64_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (x217-(x218<=(x219&x220)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	volatile int16_t x226 = INT16_MIN;
	static uint8_t x227 = 12U;
	volatile int32_t x228 = 373717;
	static volatile int32_t t55 = 45;

	t55 = (x225-(x226<=(x227&x228)));

	if (t55 != -129) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MIN;
	volatile int64_t x231 = INT64_MIN;
	int16_t x232 = -31;
	static int32_t t56 = -1308;

	t56 = (x229-(x230<=(x231&x232)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x233 = 1558127601959167LL;
	uint64_t x234 = 9488466811142LLU;
	int64_t x235 = INT64_MAX;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t57 = 423213LL;

	t57 = (x233-(x234<=(x235&x236)));

	if (t57 != 1558127601959167LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x238 = -208296;
	volatile uint64_t x239 = 25717406001LLU;
	static int16_t x240 = 1234;

	t58 = (x237-(x238<=(x239&x240)));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x241 = -124;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = INT8_MIN;
	int32_t t59 = 68;

	t59 = (x241-(x242<=(x243&x244)));

	if (t59 != -124) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MAX;
	static uint8_t x246 = UINT8_MAX;
	int8_t x247 = 0;
	static int8_t x248 = 7;
	int32_t t60 = INT32_MAX;

	t60 = (x245-(x246<=(x247&x248)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x253 = -1;
	volatile int64_t x254 = -1LL;
	static int8_t x255 = INT8_MIN;
	volatile int16_t x256 = INT16_MIN;

	t61 = (x253-(x254<=(x255&x256)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = -8;
	static int8_t x259 = -1;
	int32_t x260 = INT32_MIN;
	volatile int32_t t62 = INT32_MIN;

	t62 = (x257-(x258<=(x259&x260)));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = 3591472032438823667LL;
	int64_t x263 = -2319386742949LL;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = -550132;

	t63 = (x261-(x262<=(x263&x264)));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x265 = 8U;
	volatile int16_t x267 = INT16_MAX;
	int8_t x268 = 0;
	volatile int32_t t64 = -3730460;

	t64 = (x265-(x266<=(x267&x268)));

	if (t64 != 8) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x270 = INT64_MAX;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = -1;
	int32_t t65 = INT32_MAX;

	t65 = (x269-(x270<=(x271&x272)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static volatile int8_t x275 = 2;
	uint32_t x276 = 1627379U;

	t66 = (x273-(x274<=(x275&x276)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x277 = INT64_MAX;
	int16_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	uint32_t x280 = 11288U;
	int64_t t67 = INT64_MAX;

	t67 = (x277-(x278<=(x279&x280)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x281 = 42348U;
	uint32_t x282 = UINT32_MAX;
	int16_t x283 = 1956;
	volatile uint32_t t68 = 113U;

	t68 = (x281-(x282<=(x283&x284)));

	if (t68 != 42348U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	int32_t x288 = -1;
	uint32_t t69 = 8723U;

	t69 = (x285-(x286<=(x287&x288)));

	if (t69 != 408U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x289 = -14;
	int32_t x290 = INT32_MIN;
	int8_t x291 = 12;
	volatile int32_t t70 = 237458;

	t70 = (x289-(x290<=(x291&x292)));

	if (t70 != -15) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x293 = 3;
	int16_t x294 = -1;
	static int32_t x295 = INT32_MIN;

	t71 = (x293-(x294<=(x295&x296)));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = -3332;
	int64_t x299 = INT64_MIN;
	volatile int32_t t72 = -3;

	t72 = (x297-(x298<=(x299&x300)));

	if (t72 != -3332) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x301 = 30;
	volatile int16_t x302 = INT16_MAX;
	static int16_t x303 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;
	int32_t t73 = -23654;

	t73 = (x301-(x302<=(x303&x304)));

	if (t73 != 29) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t74 = 13393753671LL;

	t74 = (x309-(x310<=(x311&x312)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MAX;
	static volatile int32_t x314 = INT32_MIN;
	volatile int16_t x315 = INT16_MAX;
	int64_t x316 = INT64_MIN;
	volatile int64_t t75 = -6LL;

	t75 = (x313-(x314<=(x315&x316)));

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -4LL;
	static uint16_t x322 = 15U;
	uint32_t x323 = 295751U;
	volatile int64_t t76 = -3576334657LL;

	t76 = (x321-(x322<=(x323&x324)));

	if (t76 != -5LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x325 = 2U;
	volatile int32_t x326 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t77 = -7;

	t77 = (x325-(x326<=(x327&x328)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x329 = INT8_MAX;
	static uint8_t x330 = 2U;
	volatile int8_t x331 = 1;
	static uint16_t x332 = 10788U;
	int32_t t78 = -8216584;

	t78 = (x329-(x330<=(x331&x332)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	static int8_t x335 = -1;
	uint16_t x336 = 514U;
	int32_t t79 = 68975;

	t79 = (x333-(x334<=(x335&x336)));

	if (t79 != -2) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -626271598;
	int32_t x338 = INT32_MIN;
	int32_t t80 = 1;

	t80 = (x337-(x338<=(x339&x340)));

	if (t80 != -626271599) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x341 = UINT32_MAX;
	static uint64_t x342 = 10776729347743177LLU;
	uint8_t x344 = 4U;

	t81 = (x341-(x342<=(x343&x344)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MAX;
	static volatile int64_t x346 = 895294LL;
	int32_t x347 = INT32_MAX;
	uint8_t x348 = 9U;
	int32_t t82 = -420;

	t82 = (x345-(x346<=(x347&x348)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	volatile int16_t x350 = INT16_MIN;
	static uint32_t x351 = 10286138U;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x349-(x350<=(x351&x352)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = 2090065882675925105LL;
	int64_t x355 = INT64_MIN;
	int64_t x356 = -9LL;
	int64_t t84 = 9926579LL;

	t84 = (x353-(x354<=(x355&x356)));

	if (t84 != 2090065882675925105LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	int32_t x359 = INT32_MIN;

	t85 = (x357-(x358<=(x359&x360)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -9941;
	static int64_t x362 = INT64_MAX;
	static uint16_t x363 = 7702U;
	static uint32_t x364 = 4316304U;
	volatile int32_t t86 = 0;

	t86 = (x361-(x362<=(x363&x364)));

	if (t86 != -9941) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = -46;
	int32_t x366 = INT32_MIN;
	static int64_t x367 = 5751904845LL;
	uint16_t x368 = UINT16_MAX;

	t87 = (x365-(x366<=(x367&x368)));

	if (t87 != -47) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x369 = 18U;
	int8_t x370 = INT8_MAX;
	static volatile int16_t x371 = -3055;
	int32_t x372 = -1;
	volatile int32_t t88 = -28658;

	t88 = (x369-(x370<=(x371&x372)));

	if (t88 != 18) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = UINT16_MAX;
	uint8_t x375 = UINT8_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t89 = -2690139;

	t89 = (x373-(x374<=(x375&x376)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x377 = 3123587097LLU;
	volatile int64_t x378 = INT64_MIN;
	int8_t x379 = -1;
	volatile uint32_t x380 = UINT32_MAX;
	uint64_t t90 = 1107431589769LLU;

	t90 = (x377-(x378<=(x379&x380)));

	if (t90 != 3123587096LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x381 = -7030;
	volatile int16_t x382 = INT16_MIN;
	static uint16_t x384 = UINT16_MAX;
	int32_t t91 = -1;

	t91 = (x381-(x382<=(x383&x384)));

	if (t91 != -7031) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x385 = -1;
	static volatile uint8_t x386 = 1U;
	uint16_t x388 = 4078U;

	t92 = (x385-(x386<=(x387&x388)));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x389 = 0LLU;
	uint8_t x390 = 39U;
	int64_t x391 = INT64_MAX;
	uint16_t x392 = 1U;
	volatile uint64_t t93 = 15078805345415LLU;

	t93 = (x389-(x390<=(x391&x392)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = 311236317;
	int64_t x394 = -1LL;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MAX;
	volatile int32_t t94 = -306921202;

	t94 = (x393-(x394<=(x395&x396)));

	if (t94 != 311236316) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -878LL;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t95 = 0;

	t95 = (x397-(x398<=(x399&x400)));

	if (t95 != -32769) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = -1;
	int16_t x403 = INT16_MIN;
	int32_t x404 = -1;

	t96 = (x401-(x402<=(x403&x404)));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = -1LL;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -939;
	static int8_t x408 = -45;
	volatile int64_t t97 = -3229LL;

	t97 = (x405-(x406<=(x407&x408)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MAX;
	int16_t x411 = -3164;
	int8_t x412 = -1;
	int32_t t98 = -267;

	t98 = (x409-(x410<=(x411&x412)));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x413 = 12U;
	volatile int16_t x414 = 5;
	int64_t x415 = 111802029LL;
	static int8_t x416 = INT8_MIN;

	t99 = (x413-(x414<=(x415&x416)));

	if (t99 != 11) { NG(); } else { ; }
	
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

