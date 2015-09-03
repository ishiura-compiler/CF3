#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 2U;
static volatile int16_t x6 = 231;
int64_t t1 = 4479726618847LL;
int16_t x9 = INT16_MIN;
int16_t x16 = INT16_MIN;
uint32_t t4 = 323973410U;
volatile uint32_t t5 = 7U;
uint8_t x41 = 7U;
int16_t x44 = 29;
uint32_t x58 = 20316669U;
uint32_t t13 = 161146884U;
static int32_t x69 = -165545125;
volatile int64_t x74 = INT64_MIN;
int8_t x78 = -1;
uint32_t x84 = UINT32_MAX;
volatile uint32_t t17 = 4128U;
int16_t x89 = -141;
int64_t t19 = -684222083927703LL;
static int16_t x118 = 463;
volatile int32_t t23 = 8371599;
volatile uint64_t t24 = 1047656818749073LLU;
volatile int16_t x131 = INT16_MIN;
int8_t x149 = 0;
int64_t x151 = INT64_MIN;
uint32_t x152 = UINT32_MAX;
volatile uint32_t x158 = 155179U;
static uint8_t x166 = 2U;
static int32_t t30 = 10781630;
volatile uint64_t t32 = 26LLU;
int16_t x178 = INT16_MAX;
int8_t x180 = -54;
int32_t x184 = INT32_MAX;
uint64_t x190 = UINT64_MAX;
uint64_t t35 = 1057430298573748LLU;
uint64_t x204 = 869424LLU;
uint32_t x217 = 45U;
uint64_t x235 = 92LLU;
int16_t x238 = 3;
int32_t x240 = INT32_MIN;
int8_t x241 = INT8_MIN;
volatile uint32_t x243 = 2U;
static int16_t x255 = INT16_MIN;
uint32_t x263 = 122U;
int64_t x268 = -1LL;
int64_t x272 = INT64_MAX;
static int8_t x274 = -1;
int64_t t56 = 17411061230LL;
static int8_t x285 = -1;
uint16_t x286 = 3U;
uint64_t x288 = UINT64_MAX;
static volatile int8_t x295 = 1;
int64_t x298 = INT64_MIN;
int8_t x304 = INT8_MIN;
static int16_t x306 = -1;
int64_t x307 = 14LL;
static int16_t x308 = INT16_MIN;
int16_t x310 = INT16_MIN;
int32_t x311 = INT32_MIN;
uint64_t x314 = UINT64_MAX;
int16_t x316 = INT16_MIN;
int32_t x317 = INT32_MAX;
int8_t x318 = INT8_MAX;
static int8_t x319 = -10;
uint64_t x322 = 1330682904LLU;
int64_t x324 = INT64_MIN;
int16_t x326 = 1;
volatile uint64_t t67 = 0LLU;
uint32_t x342 = UINT32_MAX;
int8_t x350 = -6;
int16_t x351 = -1;
static uint8_t x352 = 47U;
int32_t x354 = INT32_MIN;
uint32_t t73 = 89335612U;
int16_t x361 = INT16_MIN;
uint32_t x362 = UINT32_MAX;
uint32_t x371 = 358983U;
int16_t x373 = INT16_MIN;
uint16_t x375 = 11U;
volatile int16_t x376 = -1;
uint64_t t77 = 86721840546151066LLU;
static int32_t x380 = INT32_MIN;
volatile int16_t x386 = INT16_MIN;
uint16_t x396 = 73U;
volatile uint16_t x401 = UINT16_MAX;
int16_t x402 = INT16_MIN;
static uint8_t x419 = 2U;
int64_t x420 = INT64_MAX;
int16_t x426 = -1;
int16_t x428 = INT16_MAX;
uint16_t x429 = 6U;
static volatile uint64_t t89 = 11007905515626LLU;
int8_t x437 = INT8_MIN;
static uint64_t x439 = 8198105608962228LLU;
uint8_t x445 = 2U;
uint64_t t92 = 103LLU;
static int64_t x450 = INT64_MAX;
uint8_t x453 = 70U;
volatile uint16_t x464 = UINT16_MAX;
volatile uint32_t t95 = 2361814U;
int32_t x465 = INT32_MIN;
int64_t x467 = -1LL;
static int64_t x468 = -3145LL;
uint16_t x469 = 1U;
volatile int64_t t97 = 70058LL;
int16_t x475 = INT16_MIN;
uint8_t x477 = 0U;
volatile int16_t x478 = INT16_MIN;


void f0(void) {
	int32_t x1 = -32;
	static int64_t x2 = -1LL;
	static int32_t x4 = INT32_MAX;
	static int64_t t0 = 181442135577LL;

	t0 = (((x1&x2)*x3)-x4);

	if (t0 != -2147483711LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1LL;
	uint8_t x7 = 1U;
	static uint8_t x8 = 8U;

	t1 = (((x5&x6)*x7)-x8);

	if (t1 != -7LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = INT64_MIN;
	uint64_t x11 = 369802649357462303LLU;
	int16_t x12 = INT16_MIN;
	static volatile uint64_t t2 = 49436359668LLU;

	t2 = (((x9&x10)*x11)-x12);

	if (t2 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = 6882;
	int16_t x15 = INT16_MIN;
	int32_t t3 = -3;

	t3 = (((x13&x14)*x15)-x16);

	if (t3 != -225476608) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x21 = 2U;
	uint32_t x22 = UINT32_MAX;
	uint16_t x23 = 49U;
	int32_t x24 = -1;

	t4 = (((x21&x22)*x23)-x24);

	if (t4 != 99U) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	static uint32_t x26 = 0U;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = -51;

	t5 = (((x25&x26)*x27)-x28);

	if (t5 != 51U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint8_t x30 = 5U;
	int16_t x31 = -103;
	int8_t x32 = INT8_MAX;
	volatile int32_t t6 = -231;

	t6 = (((x29&x30)*x31)-x32);

	if (t6 != -642) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = -1853;
	int8_t x34 = -1;
	int8_t x35 = INT8_MIN;
	volatile int8_t x36 = INT8_MIN;
	int32_t t7 = 685;

	t7 = (((x33&x34)*x35)-x36);

	if (t7 != 237312) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = -251291012954LL;
	volatile uint64_t x38 = 3370LLU;
	static int32_t x39 = -104639461;
	volatile uint8_t x40 = 4U;
	volatile uint64_t t8 = 35028168961879253LLU;

	t8 = (((x37&x38)*x39)-x40);

	if (t8 != 18446744070151809938LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x42 = INT16_MIN;
	int16_t x43 = -1;
	int32_t t9 = 10;

	t9 = (((x41&x42)*x43)-x44);

	if (t9 != -29) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 3U;
	static volatile int64_t x50 = -4611203LL;
	volatile int8_t x51 = INT8_MIN;
	uint64_t x52 = 0LLU;
	volatile uint64_t t10 = 604302153LLU;

	t10 = (((x49&x50)*x51)-x52);

	if (t10 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int8_t x59 = INT8_MIN;
	int8_t x60 = 4;
	volatile uint32_t t11 = 319180217U;

	t11 = (((x57&x58)*x59)-x60);

	if (t11 != 1694433660U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	static volatile int32_t x62 = INT32_MAX;
	int16_t x63 = -1;
	uint16_t x64 = 0U;
	int32_t t12 = -1;

	t12 = (((x61&x62)*x63)-x64);

	if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	uint8_t x66 = 28U;
	uint8_t x67 = 44U;
	volatile uint32_t x68 = 84557U;

	t13 = (((x65&x66)*x67)-x68);

	if (t13 != 4294883971U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MIN;
	uint64_t x71 = UINT64_MAX;
	volatile int16_t x72 = INT16_MAX;
	volatile uint64_t t14 = 700LLU;

	t14 = (((x69&x70)*x71)-x72);

	if (t14 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x73 = 13272323U;
	int64_t x75 = -1LL;
	int8_t x76 = -58;
	static volatile int64_t t15 = 56695789LL;

	t15 = (((x73&x74)*x75)-x76);

	if (t15 != 58LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = UINT16_MAX;
	volatile uint64_t x79 = 1101026581090698323LLU;
	int64_t x80 = INT64_MIN;
	volatile uint64_t t16 = 678304070282814LLU;

	t16 = (((x77&x78)*x79)-x80);

	if (t16 != 1337547464003451821LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = -211;
	int32_t x82 = 1861;
	static volatile int8_t x83 = 24;

	t17 = (((x81&x82)*x83)-x84);

	if (t17 != 43129U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	static volatile uint16_t x86 = 10U;
	uint16_t x87 = 82U;
	static int32_t x88 = -1;
	volatile int32_t t18 = -763066536;

	t18 = (((x85&x86)*x87)-x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x90 = 114U;
	uint8_t x91 = 14U;
	int64_t x92 = -1LL;

	t19 = (((x89&x90)*x91)-x92);

	if (t19 != 1597LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = 293;
	int8_t x98 = INT8_MIN;
	int32_t x99 = -1;
	int8_t x100 = 1;
	int32_t t20 = -14;

	t20 = (((x97&x98)*x99)-x100);

	if (t20 != -257) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MAX;
	uint16_t x110 = UINT16_MAX;
	volatile int32_t x111 = 29;
	int32_t x112 = -119632;
	volatile int32_t t21 = 11687531;

	t21 = (((x109&x110)*x111)-x112);

	if (t21 != 2020147) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 3U;
	int32_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint64_t x116 = 2LLU;
	uint64_t t22 = 858LLU;

	t22 = (((x113&x114)*x115)-x116);

	if (t22 != 18446744073709453310LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x117 = UINT8_MAX;
	int16_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t23 = (((x117&x118)*x119)-x120);

	if (t23 != 32561) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x121 = 21730370U;
	int32_t x122 = -1;
	uint64_t x123 = 197997862806011561LLU;
	volatile uint8_t x124 = 120U;

	t24 = (((x121&x122)*x123)-x124);

	if (t24 != 11336743706206788378LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = INT32_MAX;
	int32_t x130 = INT32_MIN;
	int64_t x132 = -1LL;
	volatile int64_t t25 = -147982145LL;

	t25 = (((x129&x130)*x131)-x132);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x137 = UINT32_MAX;
	static int16_t x138 = INT16_MIN;
	uint16_t x139 = UINT16_MAX;
	uint32_t x140 = 304944733U;
	volatile uint32_t t26 = 1U;

	t26 = (((x137&x138)*x139)-x140);

	if (t26 != 1842571683U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x145 = INT64_MIN;
	static int32_t x146 = INT32_MAX;
	uint8_t x147 = 1U;
	int64_t x148 = INT64_MAX;
	static int64_t t27 = -110079LL;

	t27 = (((x145&x146)*x147)-x148);

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x150 = UINT8_MAX;
	static volatile int64_t t28 = 1322LL;

	t28 = (((x149&x150)*x151)-x152);

	if (t28 != -4294967295LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x157 = -1;
	volatile int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MAX;
	static volatile uint32_t t29 = 1977778U;

	t29 = (((x157&x158)*x159)-x160);

	if (t29 != 4275071617U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = 12980U;
	volatile int8_t x167 = INT8_MIN;
	static uint16_t x168 = 20000U;

	t30 = (((x165&x166)*x167)-x168);

	if (t30 != -20000) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x169 = UINT16_MAX;
	int32_t x170 = 84;
	static int8_t x171 = INT8_MAX;
	static uint32_t x172 = 30U;
	volatile uint32_t t31 = 0U;

	t31 = (((x169&x170)*x171)-x172);

	if (t31 != 10638U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 759U;
	static volatile int16_t x174 = -121;
	uint32_t x175 = 19U;
	uint64_t x176 = 169856216338778LLU;

	t32 = (((x173&x174)*x175)-x176);

	if (t32 != 18446574217493225131LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x179 = -1;
	static int32_t t33 = 1916470;

	t33 = (((x177&x178)*x179)-x180);

	if (t33 != 54) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x181 = INT32_MIN;
	volatile int64_t x182 = -1LL;
	uint8_t x183 = 0U;
	volatile int64_t t34 = 19341LL;

	t34 = (((x181&x182)*x183)-x184);

	if (t34 != -2147483647LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = 20U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = 25234;

	t35 = (((x189&x190)*x191)-x192);

	if (t35 != 18446744030759853422LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x193 = 1U;
	static int8_t x194 = -22;
	int16_t x195 = INT16_MIN;
	static uint64_t x196 = 6940131594LLU;
	volatile uint64_t t36 = 13842269765LLU;

	t36 = (((x193&x194)*x195)-x196);

	if (t36 != 18446744066769420022LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	int32_t x199 = INT32_MIN;
	int8_t x200 = -7;
	int64_t t37 = -995996LL;

	t37 = (((x197&x198)*x199)-x200);

	if (t37 != -140735340871673LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x201 = 110137;
	volatile uint32_t x202 = 218692U;
	volatile uint8_t x203 = UINT8_MAX;
	uint64_t t38 = 34700LLU;

	t38 = (((x201&x202)*x203)-x204);

	if (t38 != 16233936LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x205 = -1;
	int16_t x206 = -1;
	int64_t x207 = 906970963837LL;
	int64_t x208 = -1LL;
	static int64_t t39 = -3745473672LL;

	t39 = (((x205&x206)*x207)-x208);

	if (t39 != -906970963836LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x209 = 1;
	int16_t x210 = -1;
	uint8_t x211 = 21U;
	uint16_t x212 = 2U;
	volatile int32_t t40 = 14;

	t40 = (((x209&x210)*x211)-x212);

	if (t40 != 19) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	uint32_t x215 = 205153U;
	uint64_t x216 = 30543LLU;
	volatile uint64_t t41 = 14456816754LLU;

	t41 = (((x213&x214)*x215)-x216);

	if (t41 != 1867450545LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x218 = 0U;
	static uint64_t x219 = 103638441874LLU;
	uint8_t x220 = UINT8_MAX;
	uint64_t t42 = 7234705279LLU;

	t42 = (((x217&x218)*x219)-x220);

	if (t42 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = -1;
	uint8_t x226 = 14U;
	volatile int32_t x227 = -1;
	static int8_t x228 = -1;
	int32_t t43 = -21002;

	t43 = (((x225&x226)*x227)-x228);

	if (t43 != -13) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x229 = -1;
	uint8_t x230 = 3U;
	volatile int32_t x231 = 18;
	int32_t x232 = -6;
	static int32_t t44 = 443870;

	t44 = (((x229&x230)*x231)-x232);

	if (t44 != 60) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x233 = 2652698865943291LLU;
	static int64_t x234 = INT64_MIN;
	volatile int64_t x236 = -555290788767LL;
	uint64_t t45 = 50200037LLU;

	t45 = (((x233&x234)*x235)-x236);

	if (t45 != 555290788767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x237 = INT16_MIN;
	uint32_t x239 = 726536U;
	uint32_t t46 = 558803744U;

	t46 = (((x237&x238)*x239)-x240);

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x242 = INT32_MAX;
	static int16_t x244 = INT16_MIN;
	uint32_t t47 = 20939211U;

	t47 = (((x241&x242)*x243)-x244);

	if (t47 != 32512U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x245 = 0U;
	uint64_t x246 = 13LLU;
	volatile int64_t x247 = 21827989483273216LL;
	int64_t x248 = 128740356480961LL;
	volatile uint64_t t48 = 14581046930LLU;

	t48 = (((x245&x246)*x247)-x248);

	if (t48 != 18446615333353070655LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = -1;
	int8_t x254 = -1;
	volatile uint8_t x256 = 0U;
	volatile int32_t t49 = 58857;

	t49 = (((x253&x254)*x255)-x256);

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x257 = 4975357156230LL;
	int16_t x258 = INT16_MAX;
	uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;
	static volatile uint64_t t50 = 1085LLU;

	t50 = (((x257&x258)*x259)-x260);

	if (t50 != 2147460218LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = INT32_MIN;
	uint64_t x262 = 1LLU;
	static int32_t x264 = INT32_MAX;
	volatile uint64_t t51 = 216LLU;

	t51 = (((x261&x262)*x263)-x264);

	if (t51 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x265 = INT8_MIN;
	static uint16_t x266 = UINT16_MAX;
	uint32_t x267 = UINT32_MAX;
	int64_t t52 = 155279026056649817LL;

	t52 = (((x265&x266)*x267)-x268);

	if (t52 != 4294901889LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x269 = 451994224280004LLU;
	static int32_t x270 = 53508;
	int64_t x271 = INT64_MIN;
	static volatile uint64_t t53 = 32217216972885759LLU;

	t53 = (((x269&x270)*x271)-x272);

	if (t53 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x273 = 43885LLU;
	uint16_t x275 = 19U;
	int16_t x276 = INT16_MIN;
	uint64_t t54 = 77453920LLU;

	t54 = (((x273&x274)*x275)-x276);

	if (t54 != 866583LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MAX;
	int8_t x279 = 3;
	volatile int32_t x280 = INT32_MIN;
	uint32_t t55 = 4069216U;

	t55 = (((x277&x278)*x279)-x280);

	if (t55 != 2147484029U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = UINT32_MAX;
	volatile int64_t x282 = -1LL;
	int8_t x283 = INT8_MIN;
	int64_t x284 = -3066148508378790LL;

	t56 = (((x281&x282)*x283)-x284);

	if (t56 != 3065598752565030LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x287 = -11048LL;
	uint64_t t57 = 29241272697LLU;

	t57 = (((x285&x286)*x287)-x288);

	if (t57 != 18446744073709518473LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = INT16_MIN;
	uint64_t x290 = 82LLU;
	volatile int16_t x291 = INT16_MIN;
	int8_t x292 = 31;
	volatile uint64_t t58 = 111012481894269651LLU;

	t58 = (((x289&x290)*x291)-x292);

	if (t58 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	int8_t x296 = INT8_MAX;
	int64_t t59 = 8738751601264388LL;

	t59 = (((x293&x294)*x295)-x296);

	if (t59 != -32895LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x297 = UINT64_MAX;
	uint16_t x299 = 270U;
	uint32_t x300 = 1815U;
	volatile uint64_t t60 = 391LLU;

	t60 = (((x297&x298)*x299)-x300);

	if (t60 != 18446744073709549801LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MAX;
	int8_t x302 = -1;
	uint32_t x303 = 4859U;
	volatile uint32_t t61 = 111891999U;

	t61 = (((x301&x302)*x303)-x304);

	if (t61 != 159214981U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x305 = INT32_MIN;
	volatile int64_t t62 = -10LL;

	t62 = (((x305&x306)*x307)-x308);

	if (t62 != -30064738304LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x309 = 14;
	int8_t x312 = -2;
	int32_t t63 = 1;

	t63 = (((x309&x310)*x311)-x312);

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = 572599862288663793LL;
	uint16_t x315 = 127U;
	volatile uint64_t t64 = 53501404594577053LLU;

	t64 = (((x313&x314)*x315)-x316);

	if (t64 != 17379950289531679631LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x320 = 7U;
	static volatile uint32_t t65 = 432U;

	t65 = (((x317&x318)*x319)-x320);

	if (t65 != 4294966019U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x321 = -1LL;
	volatile int32_t x323 = 3992327;
	volatile uint64_t t66 = 383203179072646LLU;

	t66 = (((x321&x322)*x323)-x324);

	if (t66 != 9228684558140853416LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x325 = -1;
	volatile uint64_t x327 = 491326529LLU;
	int8_t x328 = INT8_MIN;

	t67 = (((x325&x326)*x327)-x328);

	if (t67 != 491326657LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x333 = 3;
	static volatile uint8_t x334 = 8U;
	int8_t x335 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t68 = -72520;

	t68 = (((x333&x334)*x335)-x336);

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = 469884045;
	int32_t x343 = INT32_MIN;
	int32_t x344 = 0;
	volatile uint32_t t69 = 15011706U;

	t69 = (((x341&x342)*x343)-x344);

	if (t69 != 2147483648U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x345 = 1U;
	int8_t x346 = 7;
	uint16_t x347 = 1704U;
	volatile int16_t x348 = -1;
	volatile int32_t t70 = -32662;

	t70 = (((x345&x346)*x347)-x348);

	if (t70 != 1705) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x349 = 27008U;
	volatile int32_t t71 = -1222;

	t71 = (((x349&x350)*x351)-x352);

	if (t71 != -27055) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x353 = 3U;
	uint32_t x355 = 35528U;
	uint16_t x356 = UINT16_MAX;
	uint32_t t72 = 1U;

	t72 = (((x353&x354)*x355)-x356);

	if (t72 != 4294901761U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x357 = 651U;
	uint8_t x358 = 1U;
	volatile int32_t x359 = INT32_MIN;
	int16_t x360 = INT16_MIN;

	t73 = (((x357&x358)*x359)-x360);

	if (t73 != 2147516416U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MAX;
	uint64_t t74 = 149020264625LLU;

	t74 = (((x361&x362)*x363)-x364);

	if (t74 != 18446744067267133441LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x365 = INT8_MAX;
	int8_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t75 = -336;

	t75 = (((x365&x366)*x367)-x368);

	if (t75 != 8323073) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = -1;
	uint32_t x372 = 358U;
	static uint32_t t76 = 637U;

	t76 = (((x369&x370)*x371)-x372);

	if (t76 != 1121746586U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x374 = 302071114739586708LLU;

	t77 = (((x373&x374)*x375)-x376);

	if (t77 != 3322782262135390209LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x377 = -101;
	uint16_t x378 = UINT16_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	static volatile uint64_t t78 = 85801785605LLU;

	t78 = (((x377&x378)*x379)-x380);

	if (t78 != 2147418213LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x385 = 2822905395LLU;
	static int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	volatile uint64_t t79 = 23544724077612536LLU;

	t79 = (((x385&x386)*x387)-x388);

	if (t79 != 18446651572998832129LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = INT8_MIN;
	uint16_t x394 = UINT16_MAX;
	static int64_t x395 = -1LL;
	volatile int64_t t80 = 9728878748734052LL;

	t80 = (((x393&x394)*x395)-x396);

	if (t80 != -65481LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x403 = 1U;
	uint32_t x404 = 767U;
	volatile uint32_t t81 = 702U;

	t81 = (((x401&x402)*x403)-x404);

	if (t81 != 32001U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x405 = 7322643356LLU;
	volatile int32_t x406 = -1;
	int64_t x407 = 23LL;
	int32_t x408 = 177546;
	volatile uint64_t t82 = 1483543118065LLU;

	t82 = (((x405&x406)*x407)-x408);

	if (t82 != 168420619642LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x409 = -2;
	static int8_t x410 = INT8_MIN;
	int8_t x411 = 1;
	volatile int64_t x412 = INT64_MIN;
	int64_t t83 = -44928LL;

	t83 = (((x409&x410)*x411)-x412);

	if (t83 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x413 = INT8_MIN;
	uint16_t x414 = 96U;
	int64_t x415 = -1LL;
	uint32_t x416 = 1330U;
	static int64_t t84 = 7475388082513892LL;

	t84 = (((x413&x414)*x415)-x416);

	if (t84 != -1330LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x417 = 1U;
	static int64_t x418 = INT64_MIN;
	volatile int64_t t85 = -1437211850LL;

	t85 = (((x417&x418)*x419)-x420);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x421 = INT8_MAX;
	int32_t x422 = -77;
	volatile uint64_t x423 = 345419731LLU;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t86 = 454764LLU;

	t86 = (((x421&x422)*x423)-x424);

	if (t86 != 9223372054471182090LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x425 = 0;
	uint8_t x427 = UINT8_MAX;
	int32_t t87 = -936994114;

	t87 = (((x425&x426)*x427)-x428);

	if (t87 != -32767) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x430 = 0;
	int8_t x431 = INT8_MIN;
	uint16_t x432 = 831U;
	int32_t t88 = 14;

	t88 = (((x429&x430)*x431)-x432);

	if (t88 != -831) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x433 = INT64_MAX;
	static int32_t x434 = 2;
	uint64_t x435 = 275440046013949LLU;
	static int8_t x436 = -9;

	t89 = (((x433&x434)*x435)-x436);

	if (t89 != 550880092027907LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x438 = -278298;
	uint64_t x440 = 0LLU;
	uint64_t t90 = 3608236489824693LLU;

	t90 = (((x437&x438)*x439)-x440);

	if (t90 != 5043663604900125184LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x441 = 3U;
	static uint32_t x442 = 1584652080U;
	int32_t x443 = INT32_MIN;
	uint32_t x444 = 11291U;
	volatile uint32_t t91 = 66823197U;

	t91 = (((x441&x442)*x443)-x444);

	if (t91 != 4294956005U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x446 = INT32_MIN;
	uint8_t x447 = UINT8_MAX;
	uint64_t x448 = 526LLU;

	t92 = (((x445&x446)*x447)-x448);

	if (t92 != 18446744073709551090LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x449 = 470;
	volatile int64_t x451 = -1LL;
	int8_t x452 = INT8_MIN;
	static int64_t t93 = 4225811645001LL;

	t93 = (((x449&x450)*x451)-x452);

	if (t93 != -342LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x454 = UINT64_MAX;
	static uint64_t x455 = 271285794196LLU;
	int8_t x456 = INT8_MIN;
	uint64_t t94 = 14LLU;

	t94 = (((x453&x454)*x455)-x456);

	if (t94 != 18990005593848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x461 = UINT32_MAX;
	int16_t x462 = -281;
	int32_t x463 = -59286878;

	t95 = (((x461&x462)*x463)-x464);

	if (t95 != 3774645295U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x466 = INT16_MIN;
	int64_t t96 = -123672LL;

	t96 = (((x465&x466)*x467)-x468);

	if (t96 != 2147486793LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x470 = 1880;
	static int32_t x471 = -1;
	static int64_t x472 = -1LL;

	t97 = (((x469&x470)*x471)-x472);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x473 = INT16_MAX;
	static volatile int32_t x474 = INT32_MIN;
	volatile int16_t x476 = INT16_MIN;
	volatile int32_t t98 = -24145;

	t98 = (((x473&x474)*x475)-x476);

	if (t98 != 32768) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x479 = INT16_MIN;
	int32_t x480 = -1;
	static int32_t t99 = -277022375;

	t99 = (((x477&x478)*x479)-x480);

	if (t99 != 1) { NG(); } else { ; }
	
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

