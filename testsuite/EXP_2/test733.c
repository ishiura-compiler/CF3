#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int8_t x2 = INT8_MAX;
volatile int8_t x3 = 2;
static volatile int32_t t0 = 0;
int16_t x7 = INT16_MIN;
volatile int8_t x11 = 19;
int64_t x12 = INT64_MIN;
int64_t t2 = -1121741914397517LL;
int32_t t3 = -3304171;
uint8_t x24 = UINT8_MAX;
int8_t x28 = INT8_MIN;
volatile int64_t x31 = INT64_MIN;
static int32_t t10 = 12112731;
static uint32_t x53 = UINT32_MAX;
int16_t x66 = INT16_MAX;
volatile int16_t x68 = 10;
uint64_t x86 = 790325489LLU;
uint64_t t16 = 8154LLU;
uint64_t x90 = 74596523567479349LLU;
int32_t x96 = INT32_MAX;
int64_t t18 = -249387475412LL;
volatile uint32_t t19 = 182U;
int64_t x118 = INT64_MIN;
uint8_t x119 = 21U;
volatile int64_t x120 = 18805363856001LL;
volatile int16_t x122 = INT16_MIN;
volatile uint16_t x126 = 44U;
static volatile int64_t x146 = -370LL;
volatile int16_t x153 = INT16_MIN;
static int64_t x157 = INT64_MIN;
volatile uint64_t x162 = 2303LLU;
int32_t x163 = INT32_MIN;
int8_t x165 = 22;
int32_t x166 = INT32_MIN;
uint32_t x186 = 136025148U;
int16_t x187 = INT16_MIN;
int64_t t33 = -2227042007446308766LL;
uint64_t x189 = 109002500982170967LLU;
int64_t x191 = INT64_MAX;
int16_t x192 = -3;
static int64_t x196 = -67132623029254LL;
volatile int8_t x200 = INT8_MIN;
volatile int64_t t36 = -7509872716803LL;
volatile int64_t x202 = INT64_MIN;
uint32_t x204 = 20U;
volatile int64_t t37 = -1981390427331LL;
static volatile int64_t t39 = -899680889465LL;
uint32_t x225 = 22U;
uint32_t t41 = 2U;
int64_t x242 = INT64_MAX;
volatile int64_t t42 = -13LL;
int8_t x261 = -53;
static volatile uint64_t t44 = 3047002757LLU;
static volatile int64_t x265 = INT64_MIN;
uint8_t x274 = 89U;
int64_t x275 = -1574803233194LL;
uint32_t x293 = 6944U;
uint8_t x295 = 5U;
static int16_t x303 = INT16_MIN;
int16_t x305 = INT16_MIN;
uint32_t x309 = 487227839U;
uint64_t x321 = 10163660931LLU;
static int16_t x323 = -9939;
uint16_t x326 = 2557U;
uint64_t t58 = 127362315952LLU;
int16_t x337 = -1;
uint64_t x345 = 1636451942122LLU;
int32_t x350 = INT32_MAX;
static uint16_t x351 = UINT16_MAX;
uint8_t x354 = UINT8_MAX;
int64_t x356 = -82748642059099420LL;
int8_t x365 = INT8_MIN;
int64_t x377 = INT64_MAX;
uint8_t x381 = 0U;
static int64_t x383 = 216659LL;
volatile int8_t x384 = -57;
volatile int32_t t68 = 945336665;
volatile int16_t x393 = INT16_MIN;
int16_t x394 = INT16_MAX;
int8_t x395 = INT8_MAX;
int64_t x402 = -1LL;
volatile uint16_t x410 = UINT16_MAX;
uint64_t x426 = 504127974659LLU;
uint64_t t74 = 52LLU;
int16_t x433 = INT16_MIN;
uint64_t x437 = 1393337472735337LLU;
int32_t x439 = INT32_MIN;
int8_t x445 = INT8_MIN;
uint64_t x448 = 4LLU;
int32_t x449 = -1;
volatile int16_t x451 = -13;
int64_t x457 = INT64_MAX;
volatile int64_t x458 = INT64_MAX;
static uint8_t x460 = 8U;
uint16_t x471 = 10U;
volatile uint16_t x472 = 1U;
int32_t t83 = 165436;
int64_t x483 = -2447082163927LL;
volatile int64_t x487 = 75455066LL;
uint16_t x494 = 2U;
uint32_t x506 = 65799238U;
volatile uint64_t x508 = 1709LLU;
int8_t x509 = INT8_MIN;
uint32_t x513 = 45087439U;
volatile uint32_t t91 = 5081U;
int64_t x530 = INT64_MIN;
static uint32_t x531 = 884197U;
int64_t t94 = -43174LL;
volatile int64_t x541 = INT64_MAX;
int16_t x547 = -1;
uint64_t t97 = 260883219057954LLU;


void f0(void) {
	volatile int32_t x4 = -1;

	t0 = ((x1%(x2%x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 13U;
	int8_t x6 = INT8_MAX;
	uint16_t x8 = 836U;
	volatile int32_t t1 = 68302244;

	t1 = ((x5%(x6%x7))%x8);

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static uint16_t x10 = 31506U;

	t2 = ((x9%(x10%x11))%x12);

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 38U;
	volatile int16_t x14 = 1;
	int32_t x15 = -15088;
	uint8_t x16 = 7U;

	t3 = ((x13%(x14%x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = -1;
	int8_t x19 = 12;
	volatile int16_t x20 = -58;
	int32_t t4 = -67480;

	t4 = ((x17%(x18%x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = UINT16_MAX;
	static int64_t x22 = INT64_MIN;
	volatile uint16_t x23 = UINT16_MAX;
	volatile int64_t t5 = 13141LL;

	t5 = ((x21%(x22%x23))%x24);

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int32_t t6 = -508948;

	t6 = ((x25%(x26%x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -191;
	static uint32_t x30 = 48030984U;
	volatile int16_t x32 = INT16_MAX;
	volatile int64_t t7 = 2876967706510338LL;

	t7 = ((x29%(x30%x31))%x32);

	if (t7 != -191LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 3855U;
	uint8_t x34 = 53U;
	volatile int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MAX;
	uint32_t t8 = 29455U;

	t8 = ((x33%(x34%x35))%x36);

	if (t8 != 39U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	int16_t x38 = INT16_MIN;
	static volatile int32_t x39 = INT32_MIN;
	static int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -42LL;

	t9 = ((x37%(x38%x39))%x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 25;
	int16_t x42 = 379;
	int8_t x43 = INT8_MAX;
	uint8_t x44 = 119U;

	t10 = ((x41%(x42%x43))%x44);

	if (t10 != 25) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x54 = 989013U;
	int64_t x55 = -12470353LL;
	uint16_t x56 = 35U;
	int64_t t11 = -302344357834LL;

	t11 = ((x53%(x54%x55))%x56);

	if (t11 != 9LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x57 = INT16_MIN;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;
	volatile int64_t t12 = 4LL;

	t12 = ((x57%(x58%x59))%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = 74574575162LLU;
	int16_t x62 = -4;
	uint64_t x63 = UINT64_MAX;
	static int16_t x64 = 1;
	static volatile uint64_t t13 = 380168379682325650LLU;

	t13 = ((x61%(x62%x63))%x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 38U;
	static volatile uint16_t x67 = 215U;
	volatile int32_t t14 = 3;

	t14 = ((x65%(x66%x67))%x68);

	if (t14 != 8) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = -7304;
	uint8_t x82 = 11U;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	int64_t t15 = -3450LL;

	t15 = ((x81%(x82%x83))%x84);

	if (t15 != 4LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	static volatile uint8_t x87 = 30U;
	volatile uint8_t x88 = 27U;

	t16 = ((x85%(x86%x87))%x88);

	if (t16 != 23LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x89 = 11U;
	static int64_t x91 = INT64_MIN;
	static volatile int16_t x92 = INT16_MIN;
	volatile uint64_t t17 = 5960385199LLU;

	t17 = ((x89%(x90%x91))%x92);

	if (t17 != 11LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	int16_t x94 = 7276;
	int8_t x95 = INT8_MAX;

	t18 = ((x93%(x94%x95))%x96);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x97 = INT16_MIN;
	uint8_t x98 = 57U;
	volatile uint32_t x99 = 12U;
	static uint16_t x100 = 2U;

	t19 = ((x97%(x98%x99))%x100);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x109 = INT8_MIN;
	static int16_t x110 = -1;
	uint32_t x111 = 24779093U;
	uint32_t x112 = 1U;
	static volatile uint32_t t20 = 1143601U;

	t20 = ((x109%(x110%x111))%x112);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x113 = INT64_MAX;
	int32_t x114 = -12;
	volatile int32_t x115 = INT32_MAX;
	int32_t x116 = INT32_MAX;
	static int64_t t21 = 31495907700LL;

	t21 = ((x113%(x114%x115))%x116);

	if (t21 != 7LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x117 = 26138U;
	volatile int64_t t22 = -38470LL;

	t22 = ((x117%(x118%x119))%x120);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	int16_t x123 = 3747;
	int8_t x124 = INT8_MAX;
	int32_t t23 = -66;

	t23 = ((x121%(x122%x123))%x124);

	if (t23 != -96) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MIN;
	uint16_t x127 = UINT16_MAX;
	int64_t x128 = INT64_MIN;
	volatile int64_t t24 = -14LL;

	t24 = ((x125%(x126%x127))%x128);

	if (t24 != -32LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x133 = 6U;
	uint16_t x134 = 11225U;
	uint64_t x135 = 108770932394418LLU;
	uint8_t x136 = UINT8_MAX;
	static uint64_t t25 = 99399052741LLU;

	t25 = ((x133%(x134%x135))%x136);

	if (t25 != 6LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int64_t t26 = -14512775850448LL;

	t26 = ((x137%(x138%x139))%x140);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 134881913622LLU;
	int64_t x147 = 201LL;
	volatile int64_t x148 = 24505LL;
	static uint64_t t27 = 1417025987402494245LLU;

	t27 = ((x145%(x146%x147))%x148);

	if (t27 != 22322LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x154 = 6U;
	int16_t x155 = INT16_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t28 = 193158;

	t28 = ((x153%(x154%x155))%x156);

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x158 = 8U;
	static int64_t x159 = 11472LL;
	volatile int32_t x160 = 16465995;
	volatile int64_t t29 = -1LL;

	t29 = ((x157%(x158%x159))%x160);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = INT64_MAX;
	int16_t x164 = INT16_MIN;
	static uint64_t t30 = 126373LLU;

	t30 = ((x161%(x162%x163))%x164);

	if (t30 != 2009LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x167 = INT8_MAX;
	int64_t x168 = INT64_MIN;
	volatile int64_t t31 = -328778968437203LL;

	t31 = ((x165%(x166%x167))%x168);

	if (t31 != 6LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x181 = -230468;
	volatile int64_t x182 = INT64_MAX;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MAX;
	volatile int64_t t32 = -880142LL;

	t32 = ((x181%(x182%x183))%x184);

	if (t32 != -90LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = INT64_MIN;
	uint16_t x188 = 1937U;

	t33 = ((x185%(x186%x187))%x188);

	if (t33 != -4LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x190 = INT8_MIN;
	uint64_t t34 = 4865LLU;

	t34 = ((x189%(x190%x191))%x192);

	if (t34 != 109002500982170967LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MIN;
	volatile int64_t t35 = 3843970017477884LL;

	t35 = ((x193%(x194%x195))%x196);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MAX;
	static int64_t x198 = INT64_MIN;
	int32_t x199 = 34972;

	t36 = ((x197%(x198%x199))%x200);

	if (t36 != 23LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x201 = 25U;
	uint32_t x203 = UINT32_MAX;

	t37 = ((x201%(x202%x203))%x204);

	if (t37 != 5LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 2899282541787390449LLU;
	int16_t x206 = 3;
	int8_t x207 = INT8_MIN;
	int32_t x208 = INT32_MAX;
	uint64_t t38 = 4355LLU;

	t38 = ((x205%(x206%x207))%x208);

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = INT64_MAX;
	int8_t x210 = 23;
	int8_t x211 = -4;
	static int8_t x212 = -2;

	t39 = ((x209%(x210%x211))%x212);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = 116U;
	volatile int16_t x218 = INT16_MAX;
	uint16_t x219 = 8256U;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x217%(x218%x219))%x220);

	if (t40 != 116) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x226 = -1;
	volatile int16_t x227 = -1201;
	volatile uint32_t x228 = 1U;

	t41 = ((x225%(x226%x227))%x228);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x243 = 52620000U;
	static int64_t x244 = 12982646011LL;

	t42 = ((x241%(x242%x243))%x244);

	if (t42 != 1494282LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x249 = -1LL;
	int8_t x250 = -1;
	int64_t x251 = -197716065530189415LL;
	static uint64_t x252 = UINT64_MAX;
	uint64_t t43 = 1520533592514LLU;

	t43 = ((x249%(x250%x251))%x252);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x262 = -79217965;
	uint64_t x263 = 917921172214LLU;
	int16_t x264 = -4995;

	t44 = ((x261%(x262%x263))%x264);

	if (t44 != 81704375268LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x266 = UINT32_MAX;
	static uint16_t x267 = 2983U;
	static volatile int16_t x268 = INT16_MAX;
	volatile int64_t t45 = -69435375780238LL;

	t45 = ((x265%(x266%x267))%x268);

	if (t45 != -539LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x269 = INT64_MIN;
	volatile uint8_t x270 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MAX;
	int64_t t46 = -32447LL;

	t46 = ((x269%(x270%x271))%x272);

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x273 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	static int64_t t47 = 2299832258563LL;

	t47 = ((x273%(x274%x275))%x276);

	if (t47 != -67LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x277 = -1;
	volatile int16_t x278 = -1;
	uint64_t x279 = 7LLU;
	int8_t x280 = INT8_MIN;
	static volatile uint64_t t48 = 5131470851LLU;

	t48 = ((x277%(x278%x279))%x280);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x285 = UINT8_MAX;
	uint8_t x286 = 15U;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -1LL;
	int64_t t49 = 129892716605LL;

	t49 = ((x285%(x286%x287))%x288);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x294 = INT32_MIN;
	static volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t50 = 190994046624234584LLU;

	t50 = ((x293%(x294%x295))%x296);

	if (t50 != 6944LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x298 = 587685376023495550LLU;
	volatile uint16_t x299 = 132U;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t51 = 4874931LLU;

	t51 = ((x297%(x298%x299))%x300);

	if (t51 != 7LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x301 = UINT8_MAX;
	volatile int32_t x302 = -1;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t52 = -252;

	t52 = ((x301%(x302%x303))%x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x306 = -1LL;
	static int16_t x307 = 8801;
	uint16_t x308 = UINT16_MAX;
	int64_t t53 = 10290525006LL;

	t53 = ((x305%(x306%x307))%x308);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x310 = 17194829313002LL;
	int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MIN;
	int64_t t54 = -981315356767139LL;

	t54 = ((x309%(x310%x311))%x312);

	if (t54 != 10433LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 1U;
	static volatile uint16_t x314 = UINT16_MAX;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	volatile uint32_t t55 = 16U;

	t55 = ((x313%(x314%x315))%x316);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x322 = INT32_MAX;
	volatile uint32_t x324 = UINT32_MAX;
	uint64_t t56 = 32214662331344LLU;

	t56 = ((x321%(x322%x323))%x324);

	if (t56 != 3460LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x325 = 124034599U;
	uint32_t x327 = 123445U;
	volatile int32_t x328 = INT32_MIN;
	volatile uint32_t t57 = 422573U;

	t57 = ((x325%(x326%x327))%x328);

	if (t57 != 2200U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x329 = 50094685050201910LLU;
	int64_t x330 = INT64_MIN;
	static uint16_t x331 = UINT16_MAX;
	int32_t x332 = -1;

	t58 = ((x329%(x330%x331))%x332);

	if (t58 != 50094685050201910LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x338 = INT8_MAX;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = INT8_MIN;
	int32_t t59 = -54493535;

	t59 = ((x337%(x338%x339))%x340);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x346 = 10441U;
	int32_t x347 = -1;
	int32_t x348 = -1;
	static volatile uint64_t t60 = 218656333908LLU;

	t60 = ((x345%(x346%x347))%x348);

	if (t60 != 5785LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x349 = -2LL;
	int64_t x352 = INT64_MIN;
	int64_t t61 = -606191LL;

	t61 = ((x349%(x350%x351))%x352);

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = 1;
	static int32_t x355 = 13670;
	volatile int64_t t62 = -1160LL;

	t62 = ((x353%(x354%x355))%x356);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x361 = -1LL;
	static volatile uint16_t x362 = 84U;
	int64_t x363 = -2903288033LL;
	static uint32_t x364 = UINT32_MAX;
	volatile int64_t t63 = -33998386199422672LL;

	t63 = ((x361%(x362%x363))%x364);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x366 = -11;
	int64_t x367 = INT64_MAX;
	static int64_t x368 = INT64_MAX;
	static volatile int64_t t64 = 190973LL;

	t64 = ((x365%(x366%x367))%x368);

	if (t64 != -7LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x373 = INT32_MAX;
	uint16_t x374 = UINT16_MAX;
	static volatile int32_t x375 = INT32_MIN;
	int32_t x376 = INT32_MAX;
	static int32_t t65 = 3077;

	t65 = ((x373%(x374%x375))%x376);

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x378 = UINT32_MAX;
	uint16_t x379 = 141U;
	volatile int16_t x380 = INT16_MIN;
	static volatile int64_t t66 = 185982679LL;

	t66 = ((x377%(x378%x379))%x380);

	if (t66 != 52LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x382 = INT32_MAX;
	int64_t t67 = -339LL;

	t67 = ((x381%(x382%x383))%x384);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x385 = -1;
	volatile int8_t x386 = -1;
	static int8_t x387 = -26;
	static int32_t x388 = -1;

	t68 = ((x385%(x386%x387))%x388);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	uint8_t x391 = 2U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t69 = -1;

	t69 = ((x389%(x390%x391))%x392);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x396 = 9U;
	int32_t t70 = -15;

	t70 = ((x393%(x394%x395))%x396);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x401 = 3695U;
	static int32_t x403 = -1039356;
	uint32_t x404 = 13839671U;
	volatile int64_t t71 = 51283064098LL;

	t71 = ((x401%(x402%x403))%x404);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = -3;
	int8_t x411 = -29;
	uint16_t x412 = 9309U;
	volatile int32_t t72 = 843;

	t72 = ((x409%(x410%x411))%x412);

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x421 = INT8_MIN;
	uint64_t x422 = UINT64_MAX;
	static uint64_t x423 = 13444265LLU;
	volatile int32_t x424 = INT32_MIN;
	volatile uint64_t t73 = 1679091220095LLU;

	t73 = ((x421%(x422%x423))%x424);

	if (t73 != 1094963LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x425 = INT16_MAX;
	int64_t x427 = 31098LL;
	static volatile int32_t x428 = 5836;

	t74 = ((x425%(x426%x427))%x428);

	if (t74 != 4571LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x434 = -1;
	int8_t x435 = INT8_MIN;
	static int16_t x436 = INT16_MIN;
	int32_t t75 = -480808;

	t75 = ((x433%(x434%x435))%x436);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x438 = -9;
	int8_t x440 = -1;
	uint64_t t76 = 32LLU;

	t76 = ((x437%(x438%x439))%x440);

	if (t76 != 1393337472735337LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x441 = UINT32_MAX;
	int8_t x442 = -2;
	int8_t x443 = INT8_MIN;
	int64_t x444 = INT64_MAX;
	static volatile int64_t t77 = 35576231524684LL;

	t77 = ((x441%(x442%x443))%x444);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x446 = -104;
	static int64_t x447 = INT64_MIN;
	volatile uint64_t t78 = 135374952762LLU;

	t78 = ((x445%(x446%x447))%x448);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x450 = INT32_MIN;
	volatile uint32_t x452 = 51U;
	volatile uint32_t t79 = 216572U;

	t79 = ((x449%(x450%x451))%x452);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x453 = 1U;
	int8_t x454 = INT8_MIN;
	static int32_t x455 = -567461;
	int8_t x456 = INT8_MIN;
	volatile int32_t t80 = 261;

	t80 = ((x453%(x454%x455))%x456);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x459 = 180U;
	volatile int64_t t81 = 2577724LL;

	t81 = ((x457%(x458%x459))%x460);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = -1LL;
	uint32_t x466 = 2197U;
	volatile int8_t x467 = INT8_MIN;
	int64_t x468 = -1LL;
	int64_t t82 = -41962931301LL;

	t82 = ((x465%(x466%x467))%x468);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x469 = 6U;
	uint16_t x470 = 1U;

	t83 = ((x469%(x470%x471))%x472);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x477 = 3383452227683LL;
	int8_t x478 = -1;
	uint32_t x479 = 271785175U;
	static int32_t x480 = INT32_MIN;
	int64_t t84 = 30LL;

	t84 = ((x477%(x478%x479))%x480);

	if (t84 != 203204663LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x481 = -126;
	int8_t x482 = 18;
	volatile int16_t x484 = INT16_MAX;
	volatile int64_t t85 = 2157LL;

	t85 = ((x481%(x482%x483))%x484);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x485 = INT8_MIN;
	volatile uint64_t x486 = 216LLU;
	int32_t x488 = -2;
	uint64_t t86 = 4008155461942435LLU;

	t86 = ((x485%(x486%x487))%x488);

	if (t86 != 32LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x493 = UINT64_MAX;
	static uint32_t x495 = 132943548U;
	volatile int16_t x496 = INT16_MIN;
	uint64_t t87 = 28366LLU;

	t87 = ((x493%(x494%x495))%x496);

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x497 = INT32_MAX;
	static uint64_t x498 = 25379601LLU;
	int64_t x499 = -1LL;
	int8_t x500 = INT8_MIN;
	static volatile uint64_t t88 = 58548064632461LLU;

	t88 = ((x497%(x498%x499))%x500);

	if (t88 != 15597163LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x505 = INT64_MIN;
	volatile int64_t x507 = INT64_MAX;
	volatile uint64_t t89 = 18969813LLU;

	t89 = ((x505%(x506%x507))%x508);

	if (t89 != 562LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x510 = -1;
	volatile uint32_t x511 = 15252197U;
	uint16_t x512 = 9892U;
	uint32_t t90 = 127998951U;

	t90 = ((x509%(x510%x511))%x512);

	if (t90 != 3462U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x514 = 61U;
	volatile int8_t x515 = -11;
	int32_t x516 = 177;

	t91 = ((x513%(x514%x515))%x516);

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x517 = UINT32_MAX;
	int8_t x518 = INT8_MAX;
	int16_t x519 = 3220;
	static uint16_t x520 = 58U;
	volatile uint32_t t92 = 1578U;

	t92 = ((x517%(x518%x519))%x520);

	if (t92 != 15U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x529 = INT32_MIN;
	volatile int32_t x532 = INT32_MAX;
	static volatile int64_t t93 = -273LL;

	t93 = ((x529%(x530%x531))%x532);

	if (t93 != -156920LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x533 = 3312;
	int32_t x534 = INT32_MAX;
	int64_t x535 = -36127LL;
	int8_t x536 = -4;

	t94 = ((x533%(x534%x535))%x536);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x537 = -1;
	int16_t x538 = -1;
	uint16_t x539 = UINT16_MAX;
	int64_t x540 = -1LL;
	static int64_t t95 = 61493923LL;

	t95 = ((x537%(x538%x539))%x540);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x542 = 35972337U;
	int32_t x543 = INT32_MIN;
	uint32_t x544 = UINT32_MAX;
	int64_t t96 = 109855188LL;

	t96 = ((x541%(x542%x543))%x544);

	if (t96 != 25560004LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x545 = 111U;
	uint64_t x546 = 59969723174694065LLU;
	static volatile int64_t x548 = INT64_MAX;

	t97 = ((x545%(x546%x547))%x548);

	if (t97 != 111LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x549 = -1;
	int64_t x550 = INT64_MIN;
	int32_t x551 = 141340;
	uint8_t x552 = 15U;
	int64_t t98 = -369804306740LL;

	t98 = ((x549%(x550%x551))%x552);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x553 = 14266786U;
	static int64_t x554 = -1LL;
	uint8_t x555 = UINT8_MAX;
	int32_t x556 = INT32_MAX;
	volatile int64_t t99 = -15LL;

	t99 = ((x553%(x554%x555))%x556);

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

