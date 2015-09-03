#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 1589;
volatile uint32_t x17 = UINT32_MAX;
uint64_t x19 = 855141LLU;
uint64_t t3 = 3647LLU;
static volatile int64_t x24 = INT64_MIN;
volatile int64_t t4 = 40371LL;
int8_t x29 = -1;
int32_t x30 = -8903;
volatile int16_t x31 = -1;
uint64_t x34 = 11191353879942LLU;
volatile uint64_t t7 = 1775199743391225869LLU;
static int64_t x56 = INT64_MIN;
volatile int16_t x65 = INT16_MIN;
static uint8_t x73 = 58U;
uint8_t x81 = UINT8_MAX;
int64_t x83 = -1LL;
uint64_t t13 = 66080161618LLU;
static int32_t x89 = INT32_MIN;
static int64_t t15 = -1630159516799562589LL;
uint8_t x112 = 20U;
volatile int64_t t19 = 2661743258LL;
int64_t t20 = 39443183533LL;
int8_t x121 = -1;
int64_t x129 = 642LL;
int16_t x133 = INT16_MIN;
int32_t x134 = 5;
uint64_t t24 = 261956395773307266LLU;
volatile uint8_t x143 = 27U;
int8_t x149 = INT8_MIN;
int8_t x153 = 27;
volatile int32_t x155 = INT32_MIN;
int64_t x160 = -1LL;
uint64_t t29 = 45062061030LLU;
volatile int8_t x170 = 1;
static uint64_t t34 = 536208LLU;
int64_t x190 = INT64_MIN;
int8_t x193 = INT8_MAX;
int8_t x197 = 1;
static uint16_t x206 = UINT16_MAX;
uint16_t x207 = UINT16_MAX;
uint16_t x209 = 25U;
static volatile uint64_t x212 = 4316878809314LLU;
int64_t x214 = INT64_MIN;
int8_t x225 = INT8_MAX;
uint64_t x228 = 16LLU;
int64_t x235 = 93429424001529LL;
uint64_t x240 = UINT64_MAX;
int32_t x245 = INT32_MIN;
int16_t x246 = -1;
uint64_t x247 = 1LLU;
uint8_t x254 = UINT8_MAX;
static volatile int8_t x264 = -1;
static int8_t x266 = INT8_MIN;
static volatile int32_t t51 = 137703509;
int16_t x273 = INT16_MIN;
int64_t x278 = 20470334727094LL;
static int8_t x285 = INT8_MIN;
int8_t x303 = -1;
int8_t x305 = INT8_MAX;
static uint16_t x306 = 341U;
int32_t x307 = INT32_MAX;
volatile uint8_t x310 = 31U;
int16_t x311 = INT16_MAX;
volatile int32_t t58 = 355945451;
volatile uint32_t x323 = 9U;
static int8_t x324 = INT8_MIN;
static volatile uint64_t t59 = 14LLU;
volatile int32_t x335 = INT32_MIN;
int16_t x342 = 1;
int32_t x344 = 1;
volatile int64_t t62 = 10129963434954LL;
static uint32_t x351 = 395917U;
uint16_t x352 = 3092U;
volatile int16_t x358 = INT16_MIN;
int16_t x359 = -1;
int32_t x365 = INT32_MAX;
volatile uint64_t t66 = 12083707431596LLU;
uint32_t x375 = 16632761U;
int32_t x377 = -523614806;
static uint64_t x388 = 21225LLU;
volatile uint64_t t72 = 11793733270938LLU;
static volatile uint8_t x399 = UINT8_MAX;
static int32_t x400 = -1;
int32_t t76 = 3772;
volatile int64_t x423 = -1LL;
uint32_t x435 = UINT32_MAX;
static int8_t x452 = -1;
int16_t x453 = INT16_MIN;
volatile uint64_t x454 = UINT64_MAX;
uint64_t x457 = UINT64_MAX;
uint64_t x470 = UINT64_MAX;
static uint32_t x472 = 235636259U;
uint64_t t88 = 39987334628LLU;
uint32_t x474 = 303442479U;
static int64_t x476 = -1LL;
volatile int64_t t89 = 5286064LL;
volatile uint64_t x479 = 182399442382802011LLU;
uint8_t x480 = 0U;
int8_t x481 = INT8_MIN;
int32_t x497 = INT32_MIN;
int64_t x499 = INT64_MIN;
int64_t t96 = -1644953781513692LL;
static volatile int8_t x520 = -1;
static int64_t x521 = INT64_MIN;


void f0(void) {
	volatile uint64_t x1 = 194789906683944680LLU;
	int8_t x2 = INT8_MAX;
	static volatile int8_t x3 = INT8_MAX;
	static volatile uint64_t t0 = 39613867624LLU;

	t0 = (x1*(x2-(x3&x4)));

	if (t0 != 14414453094611906320LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 702U;
	volatile int16_t x6 = INT16_MAX;
	int64_t x7 = 247391032626LL;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 67091652889125LLU;

	t1 = (x5*(x6-(x7&x8)));

	if (t1 != 18446570405227650598LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	int64_t x14 = -1LL;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;
	volatile int64_t t2 = 366357108LL;

	t2 = (x13*(x14-(x15&x16)));

	if (t2 != -2147483647LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = INT32_MIN;
	uint16_t x20 = UINT16_MAX;

	t3 = (x17*(x18-(x19&x20)));

	if (t3 != 9223358411071032421LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -1;
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;

	t4 = (x21*(x22-(x23&x24)));

	if (t4 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x32 = INT8_MIN;
	volatile int32_t t5 = 57;

	t5 = (x29*(x30-(x31&x32)));

	if (t5 != 8775) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	volatile uint16_t x35 = 10791U;
	int16_t x36 = INT16_MAX;
	static volatile uint64_t t6 = 47402LLU;

	t6 = (x33*(x34-(x35&x36)));

	if (t6 != 2858095060241612800LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 30;
	static volatile int8_t x42 = -1;
	static volatile int64_t x43 = INT64_MAX;
	volatile uint64_t x44 = 25940191187LLU;

	t7 = (x41*(x42-(x43&x44)));

	if (t7 != 18446743295503815976LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x49 = INT8_MIN;
	int32_t x50 = -7;
	int64_t x51 = 870759LL;
	int8_t x52 = INT8_MIN;
	volatile int64_t t8 = -58LL;

	t8 = (x49*(x50-(x51&x52)));

	if (t8 != 111444864LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1LL;
	uint64_t x54 = 253LLU;
	static volatile int64_t x55 = INT64_MIN;
	volatile uint64_t t9 = 1543319LLU;

	t9 = (x53*(x54-(x55&x56)));

	if (t9 != 9223372036854775555LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x66 = -1;
	volatile uint64_t x67 = 435746715037618887LLU;
	int8_t x68 = -5;
	volatile uint64_t t10 = 6921113231455547LLU;

	t10 = (x65*(x66-(x67&x68)));

	if (t10 != 768445301502640128LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x74 = INT16_MIN;
	int32_t x75 = -1;
	uint64_t x76 = 12401047LLU;
	volatile uint64_t t11 = 128335831523070LLU;

	t11 = (x73*(x74-(x75&x76)));

	if (t11 != 18446744072988390346LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x77 = 102U;
	int64_t x78 = -1LL;
	int64_t x79 = -9836217LL;
	uint8_t x80 = 29U;
	int64_t t12 = -1531010558726397LL;

	t12 = (x77*(x78-(x79&x80)));

	if (t12 != -612LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x82 = 329058044647LLU;
	int32_t x84 = 154206911;

	t13 = (x81*(x82-(x83&x84)));

	if (t13 != 83870478622680LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x85 = -40;
	static int32_t x86 = -1;
	uint16_t x87 = 14073U;
	static uint32_t x88 = UINT32_MAX;
	uint32_t t14 = 2101298U;

	t14 = (x85*(x86-(x87&x88)));

	if (t14 != 562960U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x90 = -1;
	static volatile int64_t x91 = -13901474LL;
	static int32_t x92 = INT32_MAX;

	t15 = (x89*(x90-(x91&x92)));

	if (t15 != 4581832832476774400LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	static int8_t x94 = -1;
	uint8_t x95 = 1U;
	int8_t x96 = 6;
	int32_t t16 = 33596;

	t16 = (x93*(x94-(x95&x96)));

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = -1;
	static int8_t x98 = 56;
	volatile uint64_t x99 = 2544413974423774LLU;
	int8_t x100 = INT8_MIN;
	uint64_t t17 = 14542LLU;

	t17 = (x97*(x98-(x99&x100)));

	if (t17 != 2544413974423624LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x105 = -1LL;
	static uint8_t x106 = 3U;
	int32_t x107 = -1;
	int8_t x108 = -1;
	int64_t t18 = -178LL;

	t18 = (x105*(x106-(x107&x108)));

	if (t18 != -4LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x109 = -1LL;
	static uint16_t x110 = 8609U;
	static int8_t x111 = INT8_MIN;

	t19 = (x109*(x110-(x111&x112)));

	if (t19 != -8609LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x113 = INT32_MIN;
	int64_t x114 = -1LL;
	int16_t x115 = -1;
	int32_t x116 = INT32_MAX;

	t20 = (x113*(x114-(x115&x116)));

	if (t20 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x122 = 477482821U;
	volatile int64_t x123 = INT64_MAX;
	int16_t x124 = -1;
	volatile int64_t t21 = -1113747LL;

	t21 = (x121*(x122-(x123&x124)));

	if (t21 != 9223372036377292986LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x130 = -1;
	volatile int8_t x131 = INT8_MIN;
	static uint8_t x132 = 15U;
	static volatile int64_t t22 = 0LL;

	t22 = (x129*(x130-(x131&x132)));

	if (t22 != -642LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x135 = 1050341U;
	int32_t x136 = INT32_MAX;
	uint32_t t23 = 3011U;

	t23 = (x133*(x134-(x135&x136)));

	if (t23 != 57671680U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x137 = UINT32_MAX;
	uint64_t x138 = UINT64_MAX;
	static int32_t x139 = 7203;
	static uint16_t x140 = UINT16_MAX;

	t24 = (x137*(x138-(x139&x140)));

	if (t24 != 18446713132765158436LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x141 = -1LL;
	uint64_t x142 = 9583224590575110LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t25 = 12LLU;

	t25 = (x141*(x142-(x143&x144)));

	if (t25 != 18437160849118976506LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = INT8_MIN;
	int64_t x147 = 881661108LL;
	int8_t x148 = -1;
	uint64_t t26 = 20957026732LLU;

	t26 = (x145*(x146-(x147&x148)));

	if (t26 != 881661236LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x150 = 571812632U;
	static uint8_t x151 = UINT8_MAX;
	volatile int32_t x152 = -6065;
	uint32_t t27 = 1U;

	t27 = (x149*(x150-(x151&x152)));

	if (t27 != 4117404544U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x154 = INT32_MAX;
	int64_t x156 = -66928029020639LL;
	int64_t t28 = -203LL;

	t28 = (x153*(x154-(x155&x156)));

	if (t28 != 1807126817144805LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x157 = 28LLU;
	uint16_t x158 = UINT16_MAX;
	volatile int16_t x159 = -1;

	t29 = (x157*(x158-(x159&x160)));

	if (t29 != 1835008LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x165 = 7;
	int16_t x166 = INT16_MAX;
	static uint8_t x167 = UINT8_MAX;
	uint16_t x168 = 1U;
	volatile int32_t t30 = -34519683;

	t30 = (x165*(x166-(x167&x168)));

	if (t30 != 229362) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = UINT64_MAX;
	volatile uint8_t x171 = 24U;
	int8_t x172 = INT8_MAX;
	static uint64_t t31 = 3064LLU;

	t31 = (x169*(x170-(x171&x172)));

	if (t31 != 23LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x173 = INT8_MAX;
	volatile int8_t x174 = INT8_MIN;
	static int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MAX;
	volatile int64_t t32 = 24586436LL;

	t32 = (x173*(x174-(x175&x176)));

	if (t32 != -16256LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x181 = 3U;
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MAX;
	uint32_t t33 = 33U;

	t33 = (x181*(x182-(x183&x184)));

	if (t33 != 97920U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x185 = UINT8_MAX;
	int32_t x186 = -258303671;
	int32_t x187 = INT32_MIN;
	uint64_t x188 = UINT64_MAX;

	t34 = (x185*(x186-(x187&x188)));

	if (t34 != 481740894135LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x189 = INT64_MAX;
	uint64_t x191 = UINT64_MAX;
	uint8_t x192 = 1U;
	static uint64_t t35 = 5449375179LLU;

	t35 = (x189*(x190-(x191&x192)));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x194 = -1LL;
	uint8_t x195 = 0U;
	uint64_t x196 = 920209LLU;
	static uint64_t t36 = 349LLU;

	t36 = (x193*(x194-(x195&x196)));

	if (t36 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x198 = INT32_MAX;
	static uint32_t x199 = 1375U;
	int16_t x200 = INT16_MAX;
	static uint32_t t37 = 5207U;

	t37 = (x197*(x198-(x199&x200)));

	if (t37 != 2147482272U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x205 = 433416740U;
	int32_t x208 = INT32_MIN;
	volatile uint32_t t38 = 22201U;

	t38 = (x205*(x206-(x207&x208)));

	if (t38 != 1347327452U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	volatile uint64_t t39 = 341578890384166LLU;

	t39 = (x209*(x210-(x211&x212)));

	if (t39 != 18446636151739577216LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = INT32_MAX;
	int32_t x215 = -3;
	static uint64_t x216 = 319LLU;
	volatile uint64_t t40 = 210014166633282LLU;

	t40 = (x213*(x214-(x215&x216)));

	if (t40 != 9223371356102459709LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x217 = INT16_MAX;
	uint8_t x218 = 31U;
	int16_t x219 = -1;
	uint16_t x220 = 1U;
	static int32_t t41 = 91472;

	t41 = (x217*(x218-(x219&x220)));

	if (t41 != 983010) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	uint64_t t42 = 16942LLU;

	t42 = (x225*(x226-(x227&x228)));

	if (t42 != 32385LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = -164;
	int32_t x234 = INT32_MAX;
	int8_t x236 = -1;
	int64_t t43 = -52245LL;

	t43 = (x233*(x234-(x235&x236)));

	if (t43 != 15322073348932648LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x237 = UINT8_MAX;
	int64_t x238 = 161693297492818LL;
	int64_t x239 = INT64_MIN;
	uint64_t t44 = 180540LLU;

	t44 = (x237*(x238-(x239&x240)));

	if (t44 != 9264603827715444398LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x241 = 1;
	volatile int16_t x242 = 3;
	int16_t x243 = 45;
	int16_t x244 = -501;
	static volatile int32_t t45 = -12;

	t45 = (x241*(x242-(x243&x244)));

	if (t45 != -6) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x248 = INT64_MAX;
	static uint64_t t46 = 3829527754114LLU;

	t46 = (x245*(x246-(x247&x248)));

	if (t46 != 4294967296LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = 29;
	uint32_t x255 = 1U;
	int32_t x256 = INT32_MIN;
	volatile uint32_t t47 = 40838U;

	t47 = (x253*(x254-(x255&x256)));

	if (t47 != 7395U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x257 = -4984;
	uint64_t x258 = 959116299332LLU;
	static int32_t x259 = INT32_MIN;
	static int32_t x260 = 1;
	volatile uint64_t t48 = 24726127LLU;

	t48 = (x257*(x258-(x259&x260)));

	if (t48 != 18441963838073680928LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x261 = UINT8_MAX;
	int16_t x262 = -1;
	int64_t x263 = -2LL;
	static volatile int64_t t49 = 4067204366573774936LL;

	t49 = (x261*(x262-(x263&x264)));

	if (t49 != 255LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t50 = -305122302;

	t50 = (x265*(x266-(x267&x268)));

	if (t50 != 12550144) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x269 = INT16_MAX;
	int8_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	static uint8_t x272 = 26U;

	t51 = (x269*(x270-(x271&x272)));

	if (t51 != -884709) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x274 = INT32_MAX;
	int16_t x275 = 54;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t52 = -32051979900LL;

	t52 = (x273*(x274-(x275&x276)));

	if (t52 != -70368744144896LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x277 = 11921U;
	uint32_t x279 = UINT32_MAX;
	int32_t x280 = -1514;
	int64_t t53 = -332204122387801LL;

	t53 = (x277*(x278-(x279&x280)));

	if (t53 != 243975659994600352LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x281 = UINT64_MAX;
	int64_t x282 = -42226098857934035LL;
	uint32_t x283 = 2U;
	static volatile int16_t x284 = 21;
	uint64_t t54 = 1042102176206994991LLU;

	t54 = (x281*(x282-(x283&x284)));

	if (t54 != 42226098857934035LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x286 = UINT32_MAX;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = INT64_MIN;
	volatile int64_t t55 = 30914646LL;

	t55 = (x285*(x286-(x287&x288)));

	if (t55 != -549755813760LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = 27888U;
	uint16_t x302 = UINT16_MAX;
	volatile int32_t x304 = 15291;
	volatile int32_t t56 = -21650;

	t56 = (x301*(x302-(x303&x304)));

	if (t56 != 1401204672) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x308 = INT8_MAX;
	volatile int32_t t57 = 73644;

	t57 = (x305*(x306-(x307&x308)));

	if (t57 != 27178) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x309 = 17;
	volatile uint16_t x312 = UINT16_MAX;

	t58 = (x309*(x310-(x311&x312)));

	if (t58 != -556512) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x321 = INT8_MAX;
	uint64_t x322 = 18263296922513049LLU;

	t59 = (x321*(x322-(x323&x324)));

	if (t59 != 2319438709159157223LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x325 = 3914021U;
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = INT16_MIN;
	static int16_t x328 = -1;
	uint32_t t60 = 1109U;

	t60 = (x325*(x326-(x327&x328)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x333 = 563U;
	uint32_t x334 = 22U;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t61 = 20490U;

	t61 = (x333*(x334-(x335&x336)));

	if (t61 != 2147496034U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = -26459986130LL;
	int64_t x343 = INT64_MAX;

	t62 = (x341*(x342-(x343&x344)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x345 = -1;
	uint64_t x346 = 1894221LLU;
	int32_t x347 = INT32_MIN;
	volatile int32_t x348 = 42244046;
	uint64_t t63 = 12647477338964LLU;

	t63 = (x345*(x346-(x347&x348)));

	if (t63 != 18446744073707657395LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MIN;
	volatile uint32_t t64 = 371639544U;

	t64 = (x349*(x350-(x351&x352)));

	if (t64 != 67239936U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = 322798531LL;
	volatile int32_t x360 = -2234;
	volatile int64_t t65 = -66742111255664971LL;

	t65 = (x357*(x358-(x359&x360)));

	if (t65 != -9856330345554LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	volatile int64_t x368 = INT64_MIN;

	t66 = (x365*(x366-(x367&x368)));

	if (t66 != 9223301668110630912LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 193577U;
	int16_t x376 = 4290;
	static uint32_t t67 = 985240145U;

	t67 = (x373*(x374-(x375&x376)));

	if (t67 != 49329495U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x378 = -173;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = 3284;
	volatile uint64_t t68 = 7946224556963LLU;

	t68 = (x377*(x378-(x379&x380)));

	if (t68 != 1810136384342LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x381 = 1664U;
	int8_t x382 = INT8_MAX;
	volatile int16_t x383 = 18;
	uint8_t x384 = UINT8_MAX;
	uint32_t t69 = 0U;

	t69 = (x381*(x382-(x383&x384)));

	if (t69 != 181376U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x385 = 0U;
	int64_t x386 = INT64_MIN;
	static int32_t x387 = INT32_MAX;
	volatile uint64_t t70 = 2736331102525LLU;

	t70 = (x385*(x386-(x387&x388)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x389 = INT32_MAX;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = UINT16_MAX;
	volatile int64_t x392 = -67229194287548600LL;
	volatile int64_t t71 = 1LL;

	t71 = (x389*(x390-(x391&x392)));

	if (t71 != 4791036016457LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -1;
	static volatile int8_t x395 = INT8_MAX;
	uint64_t x396 = 62729851020LLU;

	t72 = (x393*(x394-(x395&x396)));

	if (t72 != 27917287424LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x397 = -199;
	int8_t x398 = 52;
	static volatile int32_t t73 = 4546652;

	t73 = (x397*(x398-(x399&x400)));

	if (t73 != 40397) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x401 = 62;
	int16_t x402 = INT16_MIN;
	int8_t x403 = 0;
	static int16_t x404 = 6;
	static volatile int32_t t74 = 58;

	t74 = (x401*(x402-(x403&x404)));

	if (t74 != -2031616) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = INT32_MIN;
	static int32_t x410 = INT32_MIN;
	uint64_t x411 = 496LLU;
	int64_t x412 = INT64_MIN;
	static volatile uint64_t t75 = 2327880088109LLU;

	t75 = (x409*(x410-(x411&x412)));

	if (t75 != 4611686018427387904LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x413 = INT8_MIN;
	int16_t x414 = INT16_MIN;
	static int8_t x415 = INT8_MIN;
	volatile int8_t x416 = INT8_MIN;

	t76 = (x413*(x414-(x415&x416)));

	if (t76 != 4177920) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x421 = 3U;
	static int8_t x422 = INT8_MIN;
	static volatile int16_t x424 = -1;
	int64_t t77 = -2037887789066624LL;

	t77 = (x421*(x422-(x423&x424)));

	if (t77 != -381LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x425 = INT16_MIN;
	uint32_t x426 = UINT32_MAX;
	int16_t x427 = INT16_MIN;
	int64_t x428 = -207159163LL;
	volatile int64_t t78 = 503144556LL;

	t78 = (x425*(x426-(x427&x428)));

	if (t78 != -147525684133888LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = 1742288232343659LL;
	volatile int16_t x430 = 1;
	uint64_t x431 = UINT64_MAX;
	int64_t x432 = -1LL;
	uint64_t t79 = 3434604628020LLU;

	t79 = (x429*(x430-(x431&x432)));

	if (t79 != 3484576464687318LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x433 = -1;
	int16_t x434 = -1;
	uint8_t x436 = 2U;
	static uint32_t t80 = 211906755U;

	t80 = (x433*(x434-(x435&x436)));

	if (t80 != 3U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x437 = 35667524LL;
	int8_t x438 = 1;
	volatile int64_t x439 = 1070846874174LL;
	volatile int64_t x440 = INT64_MIN;
	static volatile int64_t t81 = -759623LL;

	t81 = (x437*(x438-(x439&x440)));

	if (t81 != 35667524LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x441 = 2544U;
	int32_t x442 = INT32_MAX;
	volatile uint64_t x443 = UINT64_MAX;
	volatile int64_t x444 = -8179238624660LL;
	uint64_t t82 = 459346792824691LLU;

	t82 = (x441*(x442-(x443&x444)));

	if (t82 != 20813446259533008LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x445 = UINT64_MAX;
	int16_t x446 = INT16_MAX;
	uint32_t x447 = UINT32_MAX;
	int32_t x448 = INT32_MIN;
	static uint64_t t83 = 3592LLU;

	t83 = (x445*(x446-(x447&x448)));

	if (t83 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x449 = 3358LLU;
	volatile uint16_t x450 = 29U;
	int16_t x451 = -1;
	uint64_t t84 = 16806212881LLU;

	t84 = (x449*(x450-(x451&x452)));

	if (t84 != 100740LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x455 = INT64_MAX;
	static uint32_t x456 = 18524U;
	uint64_t t85 = 24160614LLU;

	t85 = (x453*(x454-(x455&x456)));

	if (t85 != 607027200LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 239210856U;
	int64_t x460 = 12812165584405300LL;
	volatile uint64_t t86 = 23364LLU;

	t86 = (x457*(x458-(x459&x460)));

	if (t86 != 18446744069452464417LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x465 = UINT32_MAX;
	int16_t x466 = -1;
	int64_t x467 = INT64_MIN;
	int8_t x468 = INT8_MAX;
	int64_t t87 = -2158LL;

	t87 = (x465*(x466-(x467&x468)));

	if (t87 != -4294967295LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x469 = 397U;
	volatile uint16_t x471 = 3U;

	t88 = (x469*(x470-(x471&x472)));

	if (t88 != 18446744073709550028LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x473 = -7;
	int16_t x475 = INT16_MIN;

	t89 = (x473*(x474-(x475&x476)));

	if (t89 != -2124326729LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x477 = UINT64_MAX;
	int8_t x478 = INT8_MIN;
	uint64_t t90 = 1293927259LLU;

	t90 = (x477*(x478-(x479&x480)));

	if (t90 != 128LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x482 = INT8_MIN;
	int64_t x483 = INT64_MIN;
	static uint16_t x484 = UINT16_MAX;
	int64_t t91 = 822965913486LL;

	t91 = (x481*(x482-(x483&x484)));

	if (t91 != 16384LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x485 = INT8_MIN;
	static int32_t x486 = INT32_MIN;
	volatile uint32_t x487 = 339U;
	uint16_t x488 = 3U;
	volatile uint32_t t92 = 29560U;

	t92 = (x485*(x486-(x487&x488)));

	if (t92 != 384U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x489 = 5295U;
	int32_t x490 = INT32_MAX;
	int16_t x491 = INT16_MIN;
	int64_t x492 = -6704733130914LL;
	int64_t t93 = 127348785536LL;

	t93 = (x489*(x490-(x491&x492)));

	if (t93 != 35512933005060945LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x493 = 1792523U;
	volatile int8_t x494 = -2;
	int64_t x495 = -24983650372085039LL;
	int8_t x496 = INT8_MAX;
	static volatile int64_t t94 = 37639530LL;

	t94 = (x493*(x494-(x495&x496)));

	if (t94 != -148779409LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x498 = INT32_MIN;
	uint8_t x500 = 52U;
	volatile int64_t t95 = -9892103829425674LL;

	t95 = (x497*(x498-(x499&x500)));

	if (t95 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x501 = -1;
	int8_t x502 = -1;
	static uint32_t x503 = 266U;
	int64_t x504 = INT64_MIN;

	t96 = (x501*(x502-(x503&x504)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x505 = 7U;
	uint32_t x506 = 26U;
	uint64_t x507 = 522396950714390LLU;
	volatile int8_t x508 = 54;
	uint64_t t97 = 4913861398570241LLU;

	t97 = (x505*(x506-(x507&x508)));

	if (t97 != 28LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x517 = -98583;
	volatile int64_t x518 = -1221959810122LL;
	uint8_t x519 = 22U;
	int64_t t98 = -10430636767726LL;

	t98 = (x517*(x518-(x519&x520)));

	if (t98 != 120464463963425952LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x522 = -1;
	uint64_t x523 = UINT64_MAX;
	uint32_t x524 = 3330U;
	uint64_t t99 = 3190350809136457914LLU;

	t99 = (x521*(x522-(x523&x524)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

