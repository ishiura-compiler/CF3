#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x12 = INT64_MIN;
int32_t t2 = -482586;
int16_t x15 = INT16_MAX;
int32_t x18 = INT32_MIN;
int32_t t6 = 34603;
static int32_t t7 = -87411313;
static int8_t x44 = -2;
int32_t t8 = 0;
int8_t x51 = INT8_MIN;
uint8_t x62 = 4U;
uint32_t x63 = UINT32_MAX;
volatile int32_t t11 = 15;
int32_t x65 = 0;
int8_t x70 = INT8_MAX;
int8_t x72 = 29;
int64_t x88 = 722081LL;
int32_t t15 = -15;
uint64_t x97 = 3LLU;
int16_t x99 = -1;
volatile uint64_t x114 = 58769178961LLU;
uint8_t x138 = 1U;
int32_t t20 = 6038;
static int8_t x143 = INT8_MIN;
volatile uint32_t x154 = 2123228793U;
volatile int32_t t25 = -1;
int8_t x168 = INT8_MIN;
int64_t x171 = -1LL;
volatile int32_t t29 = -333;
volatile int8_t x195 = INT8_MIN;
volatile int8_t x196 = INT8_MIN;
volatile int32_t t34 = -499990;
static int16_t x210 = INT16_MIN;
int16_t x212 = -1;
static int32_t t35 = 2157;
static int64_t x233 = INT64_MAX;
volatile int16_t x236 = INT16_MIN;
uint8_t x248 = UINT8_MAX;
int16_t x259 = 1274;
int64_t x261 = -1LL;
volatile int32_t t42 = 64021;
static volatile int16_t x274 = INT16_MIN;
static int16_t x275 = 99;
int16_t x279 = -4564;
uint64_t x286 = 14838LLU;
int32_t t46 = 71293579;
int64_t x293 = INT64_MAX;
uint16_t x311 = 221U;
volatile int8_t x312 = -1;
int8_t x315 = 15;
volatile int8_t x318 = 2;
volatile uint8_t x319 = UINT8_MAX;
volatile int32_t x340 = 65582638;
static int32_t x344 = -47;
volatile int32_t t53 = -225;
int16_t x357 = -1;
int32_t t58 = -6381;
volatile int16_t x371 = INT16_MAX;
volatile int32_t t60 = 282039889;
int32_t x387 = INT32_MAX;
int8_t x407 = INT8_MAX;
volatile int32_t t65 = -1425;
int16_t x421 = INT16_MIN;
int32_t t66 = -12009;
volatile uint64_t x425 = 3647651741524477500LLU;
static volatile int32_t t68 = -190;
uint16_t x445 = 389U;
uint32_t x447 = 1962647686U;
uint16_t x450 = 242U;
uint8_t x451 = 0U;
volatile int8_t x453 = INT8_MIN;
volatile int8_t x456 = -1;
uint64_t x496 = UINT64_MAX;
uint32_t x513 = 133302U;
uint64_t x524 = 20882257298958LLU;
static volatile int32_t t79 = 116;
uint64_t x531 = 2258197054LLU;
volatile int8_t x535 = -1;
uint32_t x541 = 953021808U;
volatile uint64_t x545 = UINT64_MAX;
int16_t x548 = 7;
int32_t t84 = 5798348;
volatile int16_t x555 = -1;
static uint16_t x556 = 15U;
int32_t t85 = 40525;
int16_t x558 = INT16_MAX;
static uint16_t x590 = UINT16_MAX;
static volatile int32_t t89 = 939237546;
uint8_t x594 = 14U;
int8_t x596 = 11;
volatile int32_t t90 = 416888;
static uint32_t x600 = UINT32_MAX;
int8_t x601 = INT8_MAX;
uint32_t x617 = 2043698U;
uint16_t x618 = 17125U;
uint32_t x619 = 1047971U;
volatile int32_t x620 = INT32_MAX;
volatile uint16_t x630 = 3836U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static volatile int16_t x2 = -37;
	uint16_t x3 = 412U;
	static uint8_t x4 = 93U;
	int32_t t0 = -66284;

	t0 = (x1<=((x2+x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	static volatile int16_t x7 = -1;
	static volatile uint64_t x8 = 761LLU;
	int32_t t1 = 0;

	t1 = (x5<=((x6+x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int32_t x10 = INT32_MAX;
	uint64_t x11 = 542508848510818LLU;

	t2 = (x9<=((x10+x11)*x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MAX;
	volatile uint32_t x14 = 21U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 66859955;

	t3 = (x13<=((x14+x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	int16_t x19 = INT16_MAX;
	uint64_t x20 = 128224475107LLU;
	int32_t t4 = 0;

	t4 = (x17<=((x18+x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	static uint64_t x22 = UINT64_MAX;
	int32_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 376331610;

	t5 = (x21<=((x22+x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 901918398;
	int32_t x26 = -1;
	volatile uint8_t x27 = 0U;
	uint32_t x28 = 27478302U;

	t6 = (x25<=((x26+x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x29 = INT64_MIN;
	static volatile int64_t x30 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	int64_t x32 = 918458599016LL;

	t7 = (x29<=((x30+x31)*x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = 1;
	uint8_t x42 = 7U;
	int32_t x43 = -5913915;

	t8 = (x41<=((x42+x43)*x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x49 = 17;
	volatile uint64_t x50 = 20137707LLU;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t9 = 1937;

	t9 = (x49<=((x50+x51)*x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	uint64_t x54 = UINT64_MAX;
	int8_t x55 = INT8_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t10 = -16223;

	t10 = (x53<=((x54+x55)*x56));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint8_t x61 = 35U;
	int16_t x64 = INT16_MAX;

	t11 = (x61<=((x62+x63)*x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x66 = INT8_MAX;
	volatile int8_t x67 = INT8_MIN;
	volatile int16_t x68 = 5;
	static volatile int32_t t12 = -1018;

	t12 = (x65<=((x66+x67)*x68));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x69 = 0;
	int32_t x71 = -530;
	int32_t t13 = -29203361;

	t13 = (x69<=((x70+x71)*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x74 = UINT64_MAX;
	static uint64_t x75 = 21LLU;
	volatile uint16_t x76 = 1U;
	int32_t t14 = -1;

	t14 = (x73<=((x74+x75)*x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x85 = UINT64_MAX;
	static uint16_t x86 = 25U;
	volatile int32_t x87 = -1;

	t15 = (x85<=((x86+x87)*x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x98 = -1;
	uint8_t x100 = UINT8_MAX;
	volatile int32_t t16 = 630527;

	t16 = (x97<=((x98+x99)*x100));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = -58296047614658LL;
	uint16_t x111 = UINT16_MAX;
	static int16_t x112 = INT16_MIN;
	int32_t t17 = 22;

	t17 = (x109<=((x110+x111)*x112));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x113 = 12388U;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	volatile int32_t t18 = 892483836;

	t18 = (x113<=((x114+x115)*x116));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x129 = INT8_MAX;
	int16_t x130 = -8;
	int64_t x131 = -1LL;
	static uint64_t x132 = 255803414690228LLU;
	volatile int32_t t19 = 1660594;

	t19 = (x129<=((x130+x131)*x132));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x137 = -21681385915LL;
	static int32_t x139 = INT32_MIN;
	int16_t x140 = -1;

	t20 = (x137<=((x138+x139)*x140));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x141 = 104U;
	int8_t x142 = INT8_MIN;
	static int16_t x144 = INT16_MIN;
	volatile int32_t t21 = 2378648;

	t21 = (x141<=((x142+x143)*x144));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x145 = -1LL;
	uint32_t x146 = 470767491U;
	uint16_t x147 = 63U;
	uint8_t x148 = UINT8_MAX;
	int32_t t22 = 2;

	t22 = (x145<=((x146+x147)*x148));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x149 = 52;
	int16_t x150 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	volatile uint64_t x152 = 627LLU;
	int32_t t23 = 0;

	t23 = (x149<=((x150+x151)*x152));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x153 = INT32_MIN;
	uint16_t x155 = 89U;
	static int32_t x156 = -1;
	int32_t t24 = -255;

	t24 = (x153<=((x154+x155)*x156));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x157 = UINT32_MAX;
	uint32_t x158 = 3732U;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 12U;

	t25 = (x157<=((x158+x159)*x160));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = 8;
	int8_t x162 = -1;
	volatile uint16_t x163 = 11U;
	int16_t x164 = 2581;
	static int32_t t26 = 2;

	t26 = (x161<=((x162+x163)*x164));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = INT8_MIN;
	int8_t x167 = 1;
	volatile int32_t t27 = -144;

	t27 = (x165<=((x166+x167)*x168));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x169 = 9U;
	static int8_t x170 = INT8_MIN;
	uint64_t x172 = 269LLU;
	static int32_t t28 = -690551;

	t28 = (x169<=((x170+x171)*x172));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint32_t x177 = 14U;
	int16_t x178 = INT16_MAX;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = 253;

	t29 = (x177<=((x178+x179)*x180));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x185 = -2;
	uint32_t x186 = 319U;
	volatile uint64_t x187 = 4287610123885971LLU;
	int64_t x188 = -1LL;
	static volatile int32_t t30 = 12;

	t30 = (x185<=((x186+x187)*x188));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x189 = -28;
	int16_t x190 = -10;
	volatile uint32_t x191 = 929U;
	volatile int8_t x192 = -1;
	volatile int32_t t31 = 2068;

	t31 = (x189<=((x190+x191)*x192));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x193 = -1LL;
	int64_t x194 = -1LL;
	volatile int32_t t32 = 24094283;

	t32 = (x193<=((x194+x195)*x196));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x201 = 6997U;
	volatile int16_t x202 = 1;
	volatile int8_t x203 = 8;
	static uint32_t x204 = UINT32_MAX;
	volatile int32_t t33 = -19;

	t33 = (x201<=((x202+x203)*x204));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x205 = 885;
	static int16_t x206 = INT16_MIN;
	static uint64_t x207 = 64166931915LLU;
	static int8_t x208 = INT8_MIN;

	t34 = (x205<=((x206+x207)*x208));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x209 = INT32_MAX;
	static uint8_t x211 = UINT8_MAX;

	t35 = (x209<=((x210+x211)*x212));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x234 = -1;
	uint16_t x235 = 20U;
	int32_t t36 = 184;

	t36 = (x233<=((x234+x235)*x236));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x237 = -929378;
	static uint16_t x238 = UINT16_MAX;
	int16_t x239 = INT16_MIN;
	static volatile int16_t x240 = INT16_MAX;
	static int32_t t37 = -7;

	t37 = (x237<=((x238+x239)*x240));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x241 = INT64_MIN;
	static volatile uint32_t x242 = UINT32_MAX;
	int16_t x243 = INT16_MAX;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t38 = 0;

	t38 = (x241<=((x242+x243)*x244));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x245 = -1;
	volatile uint32_t x246 = UINT32_MAX;
	int8_t x247 = 1;
	volatile int32_t t39 = 15974619;

	t39 = (x245<=((x246+x247)*x248));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = -1;
	int8_t x251 = INT8_MIN;
	int64_t x252 = -1LL;
	int32_t t40 = -2278;

	t40 = (x249<=((x250+x251)*x252));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x257 = INT64_MIN;
	volatile int8_t x258 = -1;
	uint16_t x260 = 5U;
	static int32_t t41 = 2;

	t41 = (x257<=((x258+x259)*x260));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x262 = -4820;
	int32_t x263 = -7400;
	int8_t x264 = -1;

	t42 = (x261<=((x262+x263)*x264));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x265 = 17622142U;
	uint16_t x266 = 0U;
	uint64_t x267 = 340136015069483LLU;
	uint32_t x268 = 1611U;
	int32_t t43 = -3471;

	t43 = (x265<=((x266+x267)*x268));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x273 = 359540860;
	uint16_t x276 = 5U;
	int32_t t44 = 65227;

	t44 = (x273<=((x274+x275)*x276));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x277 = -473787262089LL;
	int64_t x278 = 1212972LL;
	volatile uint64_t x280 = UINT64_MAX;
	int32_t t45 = -313159917;

	t45 = (x277<=((x278+x279)*x280));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x285 = 2U;
	int64_t x287 = -9251412579751LL;
	int8_t x288 = -1;

	t46 = (x285<=((x286+x287)*x288));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x294 = -1;
	int8_t x295 = INT8_MAX;
	static int8_t x296 = -1;
	volatile int32_t t47 = 238635;

	t47 = (x293<=((x294+x295)*x296));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x297 = 170212U;
	int64_t x298 = 1LL;
	uint64_t x299 = 9043832280LLU;
	int16_t x300 = -3504;
	volatile int32_t t48 = 449427873;

	t48 = (x297<=((x298+x299)*x300));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x309 = -2;
	int32_t x310 = 82750153;
	volatile int32_t t49 = 1939015;

	t49 = (x309<=((x310+x311)*x312));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x313 = -1;
	int16_t x314 = INT16_MIN;
	uint8_t x316 = 1U;
	int32_t t50 = -11105;

	t50 = (x313<=((x314+x315)*x316));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x320 = -30;
	int32_t t51 = 6961513;

	t51 = (x317<=((x318+x319)*x320));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = 2U;
	static int32_t x339 = INT32_MAX;
	int32_t t52 = 266552;

	t52 = (x337<=((x338+x339)*x340));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x341 = -1;
	static int16_t x342 = INT16_MAX;
	int64_t x343 = -1LL;

	t53 = (x341<=((x342+x343)*x344));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x349 = INT16_MIN;
	static uint16_t x350 = 10U;
	int32_t x351 = 4;
	uint64_t x352 = 762LLU;
	volatile int32_t t54 = -1019593;

	t54 = (x349<=((x350+x351)*x352));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x353 = 58U;
	int8_t x354 = INT8_MIN;
	int64_t x355 = 121LL;
	static uint32_t x356 = 1664U;
	volatile int32_t t55 = 1;

	t55 = (x353<=((x354+x355)*x356));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x358 = 235LL;
	volatile int32_t x359 = -1;
	uint32_t x360 = 6082U;
	volatile int32_t t56 = -7;

	t56 = (x357<=((x358+x359)*x360));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x361 = UINT8_MAX;
	uint64_t x362 = 2081204043257355752LLU;
	volatile int64_t x363 = -1LL;
	int8_t x364 = 1;
	int32_t t57 = 51527;

	t57 = (x361<=((x362+x363)*x364));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x365 = 22U;
	volatile int8_t x366 = -19;
	static int64_t x367 = 104LL;
	static volatile uint32_t x368 = UINT32_MAX;

	t58 = (x365<=((x366+x367)*x368));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x369 = -26;
	static uint16_t x370 = 3U;
	int16_t x372 = 1822;
	volatile int32_t t59 = -1;

	t59 = (x369<=((x370+x371)*x372));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x373 = UINT64_MAX;
	uint16_t x374 = 306U;
	uint64_t x375 = 913995498843095LLU;
	int8_t x376 = -1;

	t60 = (x373<=((x374+x375)*x376));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x385 = 31026176U;
	static volatile uint32_t x386 = UINT32_MAX;
	static volatile int32_t x388 = 13507;
	volatile int32_t t61 = 26609;

	t61 = (x385<=((x386+x387)*x388));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x397 = INT32_MAX;
	volatile uint32_t x398 = UINT32_MAX;
	volatile uint32_t x399 = UINT32_MAX;
	volatile uint32_t x400 = 57048547U;
	volatile int32_t t62 = 9936541;

	t62 = (x397<=((x398+x399)*x400));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x401 = -23;
	int16_t x402 = INT16_MIN;
	static volatile int8_t x403 = INT8_MIN;
	int64_t x404 = -6721346LL;
	static int32_t t63 = -222981;

	t63 = (x401<=((x402+x403)*x404));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x405 = INT8_MIN;
	int16_t x406 = -1;
	int64_t x408 = -1LL;
	volatile int32_t t64 = 1;

	t64 = (x405<=((x406+x407)*x408));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x409 = UINT32_MAX;
	volatile int64_t x410 = -1LL;
	volatile int8_t x411 = INT8_MIN;
	static int8_t x412 = 47;

	t65 = (x409<=((x410+x411)*x412));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x422 = 13347U;
	volatile uint64_t x423 = 22639802LLU;
	uint16_t x424 = UINT16_MAX;

	t66 = (x421<=((x422+x423)*x424));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x426 = -2;
	volatile int8_t x427 = INT8_MIN;
	uint64_t x428 = 115753LLU;
	static int32_t t67 = -15;

	t67 = (x425<=((x426+x427)*x428));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x437 = -29997;
	int8_t x438 = INT8_MIN;
	volatile int64_t x439 = -162054471182LL;
	uint16_t x440 = UINT16_MAX;

	t68 = (x437<=((x438+x439)*x440));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x446 = INT16_MAX;
	volatile uint16_t x448 = 66U;
	int32_t t69 = -2206584;

	t69 = (x445<=((x446+x447)*x448));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x449 = 1747U;
	uint16_t x452 = 683U;
	volatile int32_t t70 = -7;

	t70 = (x449<=((x450+x451)*x452));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x454 = 103U;
	int64_t x455 = INT64_MIN;
	volatile int32_t t71 = -11054;

	t71 = (x453<=((x454+x455)*x456));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x473 = 1664U;
	uint8_t x474 = 13U;
	static int16_t x475 = INT16_MIN;
	static int16_t x476 = INT16_MAX;
	static int32_t t72 = 2;

	t72 = (x473<=((x474+x475)*x476));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x485 = -1LL;
	int32_t x486 = INT32_MIN;
	uint32_t x487 = 126271847U;
	int32_t x488 = 45150062;
	volatile int32_t t73 = -2091469;

	t73 = (x485<=((x486+x487)*x488));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x489 = 4U;
	uint64_t x490 = UINT64_MAX;
	uint64_t x491 = UINT64_MAX;
	int32_t x492 = INT32_MAX;
	int32_t t74 = 245;

	t74 = (x489<=((x490+x491)*x492));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x493 = INT8_MAX;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MAX;
	volatile int32_t t75 = -6773659;

	t75 = (x493<=((x494+x495)*x496));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x497 = UINT64_MAX;
	int64_t x498 = -1LL;
	static int16_t x499 = 2583;
	int16_t x500 = INT16_MIN;
	static int32_t t76 = -13;

	t76 = (x497<=((x498+x499)*x500));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x514 = -89;
	int64_t x515 = 18436354LL;
	uint8_t x516 = 79U;
	int32_t t77 = -7;

	t77 = (x513<=((x514+x515)*x516));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x517 = 7U;
	uint8_t x518 = 0U;
	static int8_t x519 = INT8_MIN;
	int8_t x520 = -1;
	int32_t t78 = 5;

	t78 = (x517<=((x518+x519)*x520));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x521 = -1;
	static volatile int8_t x522 = INT8_MAX;
	volatile int64_t x523 = INT64_MIN;

	t79 = (x521<=((x522+x523)*x524));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x525 = INT64_MAX;
	volatile int8_t x526 = INT8_MIN;
	int8_t x527 = INT8_MAX;
	uint64_t x528 = 35868375492LLU;
	static volatile int32_t t80 = -1;

	t80 = (x525<=((x526+x527)*x528));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x529 = INT64_MIN;
	volatile int16_t x530 = 202;
	static int32_t x532 = -148;
	volatile int32_t t81 = 66890042;

	t81 = (x529<=((x530+x531)*x532));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x533 = -250236;
	volatile int8_t x534 = -1;
	int32_t x536 = 1;
	int32_t t82 = 13382;

	t82 = (x533<=((x534+x535)*x536));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x542 = 16181738LL;
	int64_t x543 = -18859096LL;
	static uint8_t x544 = 2U;
	int32_t t83 = -31509013;

	t83 = (x541<=((x542+x543)*x544));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x546 = 1U;
	volatile uint16_t x547 = 3U;

	t84 = (x545<=((x546+x547)*x548));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x553 = INT32_MIN;
	uint8_t x554 = 6U;

	t85 = (x553<=((x554+x555)*x556));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x557 = INT16_MIN;
	int8_t x559 = INT8_MIN;
	volatile int8_t x560 = 8;
	static volatile int32_t t86 = -1041721785;

	t86 = (x557<=((x558+x559)*x560));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x577 = 11U;
	static uint8_t x578 = 2U;
	uint16_t x579 = 3350U;
	static int8_t x580 = INT8_MIN;
	volatile int32_t t87 = -25797831;

	t87 = (x577<=((x578+x579)*x580));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x581 = INT16_MIN;
	static volatile uint8_t x582 = 4U;
	uint32_t x583 = 6U;
	int16_t x584 = 1;
	int32_t t88 = -10;

	t88 = (x581<=((x582+x583)*x584));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x589 = 486604750LLU;
	int8_t x591 = INT8_MIN;
	int8_t x592 = INT8_MIN;

	t89 = (x589<=((x590+x591)*x592));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x593 = INT16_MIN;
	volatile int16_t x595 = -1;

	t90 = (x593<=((x594+x595)*x596));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x597 = 14541090071287LL;
	uint32_t x598 = UINT32_MAX;
	static int16_t x599 = -1;
	int32_t t91 = 123025578;

	t91 = (x597<=((x598+x599)*x600));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x602 = 511;
	int16_t x603 = 1;
	int8_t x604 = INT8_MAX;
	volatile int32_t t92 = 26;

	t92 = (x601<=((x602+x603)*x604));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x609 = INT64_MAX;
	volatile uint16_t x610 = 1U;
	int64_t x611 = INT64_MIN;
	int32_t x612 = -1;
	int32_t t93 = 3213;

	t93 = (x609<=((x610+x611)*x612));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x613 = 1;
	volatile int64_t x614 = INT64_MAX;
	int8_t x615 = -1;
	uint64_t x616 = 24LLU;
	int32_t t94 = -44088;

	t94 = (x613<=((x614+x615)*x616));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t t95 = -21;

	t95 = (x617<=((x618+x619)*x620));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x621 = INT8_MAX;
	int64_t x622 = 1LL;
	uint8_t x623 = 3U;
	uint8_t x624 = UINT8_MAX;
	volatile int32_t t96 = 62986;

	t96 = (x621<=((x622+x623)*x624));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x629 = -59;
	uint32_t x631 = UINT32_MAX;
	uint32_t x632 = UINT32_MAX;
	volatile int32_t t97 = -6286017;

	t97 = (x629<=((x630+x631)*x632));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x633 = 11796560;
	static uint64_t x634 = 469765164082243LLU;
	int32_t x635 = INT32_MIN;
	volatile int16_t x636 = -1;
	int32_t t98 = 4650403;

	t98 = (x633<=((x634+x635)*x636));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x637 = -234;
	uint8_t x638 = 12U;
	uint8_t x639 = 5U;
	int16_t x640 = INT16_MAX;
	int32_t t99 = 245424212;

	t99 = (x637<=((x638+x639)*x640));

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

