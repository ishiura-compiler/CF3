#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MAX;
uint16_t x4 = 870U;
int16_t x17 = -2;
int32_t t2 = -5;
uint16_t x32 = 3358U;
uint32_t x50 = 127313U;
int64_t x55 = -742998974999892LL;
static int32_t x65 = INT32_MIN;
int8_t x71 = -1;
int8_t x79 = INT8_MAX;
int64_t x81 = INT64_MIN;
volatile uint8_t x82 = 42U;
int8_t x84 = 7;
int16_t x86 = -106;
static volatile uint64_t x87 = UINT64_MAX;
static uint32_t x91 = 21617924U;
static int8_t x106 = INT8_MAX;
volatile uint32_t x107 = 712334U;
int16_t x121 = INT16_MIN;
uint32_t x122 = 85U;
uint16_t x123 = UINT16_MAX;
int8_t x124 = 35;
int8_t x126 = 1;
uint8_t x129 = 121U;
static uint64_t x144 = UINT64_MAX;
static volatile int64_t t25 = 6944174108LL;
volatile int16_t x171 = INT16_MIN;
int32_t t26 = 1;
static int64_t x175 = -1LL;
int8_t x182 = INT8_MIN;
static uint32_t x191 = 247865U;
volatile uint32_t t30 = 3582287U;
uint64_t t33 = 1679297649LLU;
uint16_t x225 = UINT16_MAX;
uint32_t x226 = UINT32_MAX;
int32_t x228 = -45742735;
uint64_t x233 = UINT64_MAX;
int16_t x237 = INT16_MIN;
int64_t x240 = -1LL;
int32_t x249 = -2466822;
volatile int8_t x268 = INT8_MIN;
int32_t x278 = -28444319;
int32_t t45 = -330566595;
uint8_t x282 = 7U;
int16_t x284 = 1;
int16_t x286 = -1;
int16_t x287 = 1964;
int16_t x288 = -1;
volatile uint64_t t48 = 200867769LLU;
int64_t x306 = -160LL;
volatile int64_t t50 = -28535280676353LL;
static int8_t x313 = INT8_MIN;
static int64_t x315 = -1LL;
volatile int64_t t51 = 686225929305928LL;
volatile int16_t x323 = -1;
volatile int8_t x324 = 2;
static volatile int64_t x325 = 478497170258LL;
volatile int64_t x334 = INT64_MIN;
uint32_t x335 = 327U;
uint64_t t56 = 13648372LLU;
uint32_t x345 = 15U;
volatile int64_t t59 = -601LL;
static int16_t x359 = -197;
static uint64_t x377 = 29LLU;
volatile uint64_t t61 = 1835189340172LLU;
volatile uint8_t x386 = 2U;
static int64_t x388 = INT64_MIN;
int16_t x391 = 13517;
int32_t t63 = -2;
uint16_t x397 = 108U;
uint64_t x403 = 407241034042743959LLU;
static volatile int16_t x412 = -1;
volatile uint32_t t66 = 841548U;
int16_t x416 = -1;
uint64_t x419 = 300LLU;
uint32_t x429 = 30392952U;
int32_t x431 = 821;
static volatile int64_t t74 = 139191LL;
int16_t x454 = 47;
int16_t x455 = 443;
uint32_t x456 = UINT32_MAX;
uint32_t t75 = 257852U;
uint64_t x462 = 201632328179322006LLU;
int16_t x467 = -1;
volatile int8_t x468 = 31;
int16_t x476 = 1;
volatile uint64_t x479 = UINT64_MAX;
int32_t x483 = INT32_MIN;
int32_t x484 = -1;
uint16_t x494 = UINT16_MAX;
int8_t x497 = -1;
static volatile int16_t x499 = -14260;
int16_t x500 = INT16_MIN;
volatile uint64_t t84 = 723LLU;
int32_t x517 = 15410;
uint16_t x520 = UINT16_MAX;
static int16_t x541 = 857;
static int8_t x554 = 0;
volatile int8_t x560 = 2;
uint64_t x573 = 609330137969LLU;
volatile int64_t t95 = -8324548LL;
int32_t x589 = INT32_MIN;
int32_t x592 = 15804785;
int64_t x603 = INT64_MIN;
volatile int8_t x604 = -1;
int16_t x618 = -1;
uint32_t x631 = UINT32_MAX;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	static int64_t t0 = -564006176LL;

	t0 = (x1/((x2+x3)*x4));

	if (t0 != 323554204170LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -1;
	static volatile int16_t x14 = 16275;
	uint32_t x15 = 1841592979U;
	int16_t x16 = INT16_MAX;
	volatile uint32_t t1 = 23557129U;

	t1 = (x13/((x14+x15)*x16));

	if (t1 != 1U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x18 = INT16_MAX;
	uint8_t x19 = 3U;
	int16_t x20 = 1797;

	t2 = (x17/((x18+x19)*x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	int64_t x22 = -1LL;
	volatile int64_t x23 = -3101LL;
	uint16_t x24 = 143U;
	volatile int64_t t3 = 2044LL;

	t3 = (x21/((x22+x23)*x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = UINT8_MAX;
	volatile int8_t x26 = INT8_MIN;
	int64_t x27 = -123052671208831LL;
	uint16_t x28 = UINT16_MAX;
	static int64_t t4 = -26305590704221LL;

	t4 = (x25/((x26+x27)*x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 37LLU;
	int8_t x30 = INT8_MIN;
	int64_t x31 = -568934170LL;
	uint64_t t5 = 27400873475648LLU;

	t5 = (x29/((x30+x31)*x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = 10;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = 26;
	uint32_t t6 = 179740794U;

	t6 = (x49/((x50+x51)*x52));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x53 = -1;
	static volatile int64_t x54 = INT64_MAX;
	int16_t x56 = -1;
	volatile int64_t t7 = 763110136787375211LL;

	t7 = (x53/((x54+x55)*x56));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x57 = -1;
	static volatile int16_t x58 = INT16_MIN;
	static int8_t x59 = 29;
	uint32_t x60 = 183680U;
	uint32_t t8 = 455549U;

	t8 = (x57/((x58+x59)*x60));

	if (t8 != 1U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int32_t x62 = -8147;
	int32_t x63 = INT32_MAX;
	static uint32_t x64 = UINT32_MAX;
	uint32_t t9 = 1662259085U;

	t9 = (x61/((x62+x63)*x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x66 = -1LL;
	int8_t x67 = INT8_MAX;
	volatile uint16_t x68 = UINT16_MAX;
	int64_t t10 = 130984691846LL;

	t10 = (x65/((x66+x67)*x68));

	if (t10 != -260LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x69 = 0LL;
	int8_t x70 = -1;
	uint8_t x72 = 60U;
	int64_t t11 = -70423213LL;

	t11 = (x69/((x70+x71)*x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x77 = -9736;
	uint16_t x78 = UINT16_MAX;
	volatile uint64_t x80 = 1010365507078546LLU;
	static uint64_t t12 = 313LLU;

	t12 = (x77/((x78+x79)*x80));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x83 = 80803416LLU;
	uint64_t t13 = 20883202411460LLU;

	t13 = (x81/((x82+x83)*x84));

	if (t13 != 16306536988LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x85 = -1;
	int8_t x88 = INT8_MIN;
	uint64_t t14 = 20586075685431LLU;

	t14 = (x85/((x86+x87)*x88));

	if (t14 != 1346870916596783LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = 143986990334LL;
	uint8_t x92 = UINT8_MAX;
	int64_t t15 = -131899956064304203LL;

	t15 = (x89/((x90+x91)*x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x101 = 4030417680379LLU;
	int32_t x102 = -81727133;
	uint32_t x103 = 5426U;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t16 = 1LLU;

	t16 = (x101/((x102+x103)*x104));

	if (t16 != 1764LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = 9U;
	volatile int16_t x108 = INT16_MAX;
	uint32_t t17 = 314236U;

	t17 = (x105/((x106+x107)*x108));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x109 = 34783U;
	int16_t x110 = -1;
	int32_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	uint32_t t18 = 80038U;

	t18 = (x109/((x110+x111)*x112));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t t19 = 4594576U;

	t19 = (x121/((x122+x123)*x124));

	if (t19 != 1870U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x125 = INT64_MAX;
	static uint8_t x127 = 17U;
	static uint32_t x128 = UINT32_MAX;
	int64_t t20 = -26534524098741LL;

	t20 = (x125/((x126+x127)*x128));

	if (t20 != 2147483657LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x130 = -1;
	volatile int16_t x131 = INT16_MIN;
	int16_t x132 = -1;
	volatile int32_t t21 = -80;

	t21 = (x129/((x130+x131)*x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x137 = INT32_MAX;
	uint32_t x138 = 2U;
	int32_t x139 = INT32_MAX;
	int8_t x140 = -13;
	static uint32_t t22 = 89781U;

	t22 = (x137/((x138+x139)*x140));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x141 = -1;
	volatile int32_t x142 = -1;
	volatile int8_t x143 = -1;
	volatile uint64_t t23 = 3560114560470371831LLU;

	t23 = (x141/((x142+x143)*x144));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -14059616170LL;
	int8_t x148 = INT8_MAX;
	volatile int64_t t24 = 945779269536233LL;

	t24 = (x145/((x146+x147)*x148));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MIN;
	static int64_t x167 = 3662150902708709LL;
	volatile int32_t x168 = -238;

	t25 = (x165/((x166+x167)*x168));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = 2;
	uint8_t x170 = 5U;
	int8_t x172 = 3;

	t26 = (x169/((x170+x171)*x172));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = -5;
	static int16_t x174 = -1;
	int8_t x176 = INT8_MAX;
	int64_t t27 = 138296362431131056LL;

	t27 = (x173/((x174+x175)*x176));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x181 = 12918800202LLU;
	volatile uint8_t x183 = UINT8_MAX;
	volatile uint64_t x184 = 3309229370653LLU;
	volatile uint64_t t28 = 7543LLU;

	t28 = (x181/((x182+x183)*x184));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x185 = INT32_MIN;
	static uint64_t x186 = 41LLU;
	uint16_t x187 = 896U;
	uint64_t x188 = 5735LLU;
	volatile uint64_t t29 = 159651985LLU;

	t29 = (x185/((x186+x187)*x188));

	if (t29 != 3432785833874LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile uint8_t x190 = 25U;
	int8_t x192 = INT8_MAX;

	t30 = (x189/((x190+x191)*x192));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x193 = INT8_MIN;
	int8_t x194 = 4;
	int8_t x195 = -33;
	int16_t x196 = INT16_MAX;
	int32_t t31 = -401882;

	t31 = (x193/((x194+x195)*x196));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x209 = 61U;
	uint16_t x210 = 4195U;
	uint64_t x211 = 964LLU;
	volatile uint32_t x212 = 3250662U;
	volatile uint64_t t32 = 44LLU;

	t32 = (x209/((x210+x211)*x212));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x213 = 48U;
	volatile int8_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	static uint64_t x216 = 275652682976880337LLU;

	t33 = (x213/((x214+x215)*x216));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x218 = -1;
	int16_t x219 = INT16_MIN;
	int8_t x220 = -3;
	volatile uint64_t t34 = 256999411259513577LLU;

	t34 = (x217/((x218+x219)*x220));

	if (t34 != 187644258025466LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MAX;
	static uint64_t x224 = 215572190798211273LLU;
	volatile uint64_t t35 = 234042297146529LLU;

	t35 = (x221/((x222+x223)*x224));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x227 = -1762178;
	uint32_t t36 = 932603619U;

	t36 = (x225/((x226+x227)*x228));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x229 = UINT16_MAX;
	uint8_t x230 = UINT8_MAX;
	volatile int32_t x231 = INT32_MIN;
	uint64_t x232 = UINT64_MAX;
	static volatile uint64_t t37 = 23633318LLU;

	t37 = (x229/((x230+x231)*x232));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x234 = UINT64_MAX;
	volatile int8_t x235 = INT8_MIN;
	volatile uint64_t x236 = 9046910126432LLU;
	uint64_t t38 = 705358378LLU;

	t38 = (x233/((x234+x235)*x236));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x238 = -1;
	static uint16_t x239 = UINT16_MAX;
	int64_t t39 = -497426195510LL;

	t39 = (x237/((x238+x239)*x240));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MIN;
	static volatile uint8_t x243 = 3U;
	uint8_t x244 = 61U;
	volatile int32_t t40 = -1;

	t40 = (x241/((x242+x243)*x244));

	if (t40 != -1074) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = -1;
	uint8_t x246 = 0U;
	uint64_t x247 = UINT64_MAX;
	int32_t x248 = -1;
	uint64_t t41 = UINT64_MAX;

	t41 = (x245/((x246+x247)*x248));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x250 = INT32_MAX;
	static uint64_t x251 = 137792LLU;
	int16_t x252 = INT16_MIN;
	uint64_t t42 = 122892598LLU;

	t42 = (x249/((x250+x251)*x252));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x261 = INT8_MAX;
	int64_t x262 = 12288864337252LL;
	volatile int32_t x263 = 8;
	int16_t x264 = -1;
	int64_t t43 = -2LL;

	t43 = (x261/((x262+x263)*x264));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x265 = 11063118937LLU;
	int64_t x266 = -1626199556132LL;
	uint8_t x267 = 0U;
	volatile uint64_t t44 = 48694603842604604LLU;

	t44 = (x265/((x266+x267)*x268));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x277 = 5U;
	int8_t x279 = INT8_MIN;
	volatile int32_t x280 = -1;

	t45 = (x277/((x278+x279)*x280));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x281 = -1;
	volatile int64_t x283 = -11983550330053159LL;
	int64_t t46 = -273LL;

	t46 = (x281/((x282+x283)*x284));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x285 = 14U;
	int32_t t47 = -686422;

	t47 = (x285/((x286+x287)*x288));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	uint64_t x300 = 733627369LLU;

	t48 = (x297/((x298+x299)*x300));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x301 = UINT8_MAX;
	int16_t x302 = -1102;
	volatile uint64_t x303 = 8153911235393957348LLU;
	int32_t x304 = INT32_MIN;
	uint64_t t49 = 92709614018275277LLU;

	t49 = (x301/((x302+x303)*x304));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x305 = INT8_MIN;
	uint32_t x307 = UINT32_MAX;
	int64_t x308 = -1LL;

	t50 = (x305/((x306+x307)*x308));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x314 = UINT8_MAX;
	static uint16_t x316 = UINT16_MAX;

	t51 = (x313/((x314+x315)*x316));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x317 = 46U;
	static volatile int64_t x318 = -1LL;
	uint8_t x319 = UINT8_MAX;
	static int8_t x320 = INT8_MAX;
	int64_t t52 = -1468347156158195LL;

	t52 = (x317/((x318+x319)*x320));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint16_t x321 = 46U;
	uint16_t x322 = UINT16_MAX;
	volatile int32_t t53 = -1380889;

	t53 = (x321/((x322+x323)*x324));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x326 = INT16_MIN;
	volatile int16_t x327 = -19;
	static volatile uint8_t x328 = 1U;
	static volatile int64_t t54 = 17374LL;

	t54 = (x325/((x326+x327)*x328));

	if (t54 != -14594112LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x329 = -3;
	uint64_t x330 = 54687LLU;
	static int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	uint64_t t55 = 269561044353LLU;

	t55 = (x329/((x330+x331)*x332));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x333 = UINT64_MAX;
	static uint64_t x336 = UINT64_MAX;

	t56 = (x333/((x334+x335)*x336));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	static int16_t x348 = -1;
	int64_t t57 = 191292681002817LL;

	t57 = (x345/((x346+x347)*x348));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 12972035554818LLU;
	int8_t x351 = INT8_MIN;
	int8_t x352 = 7;
	volatile uint64_t t58 = 12817929LLU;

	t58 = (x349/((x350+x351)*x352));

	if (t58 != 203148LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x353 = -481874733725915596LL;
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MAX;
	int16_t x356 = 9238;

	t59 = (x353/((x354+x355)*x356));

	if (t59 != 52162235735647LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x357 = 186;
	uint64_t x358 = 67008294LLU;
	uint32_t x360 = UINT32_MAX;
	volatile uint64_t t60 = 68524058546872043LLU;

	t60 = (x357/((x358+x359)*x360));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x378 = 45U;
	int8_t x379 = -56;
	int32_t x380 = 1904;

	t61 = (x377/((x378+x379)*x380));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	uint64_t t62 = 243381747162LLU;

	t62 = (x385/((x386+x387)*x388));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	int8_t x392 = -1;

	t63 = (x389/((x390+x391)*x392));

	if (t63 != -111551) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x398 = -1;
	volatile uint16_t x399 = 34U;
	volatile int16_t x400 = INT16_MIN;
	int32_t t64 = -80;

	t64 = (x397/((x398+x399)*x400));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x401 = 93U;
	volatile int64_t x402 = INT64_MAX;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t65 = 11140525LLU;

	t65 = (x401/((x402+x403)*x404));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x409 = 35065U;
	uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MIN;

	t66 = (x409/((x410+x411)*x412));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x413 = 1098034599465LLU;
	static int8_t x414 = INT8_MIN;
	int16_t x415 = INT16_MAX;
	volatile uint64_t t67 = 9223399273162828LLU;

	t67 = (x413/((x414+x415)*x416));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x417 = -1512;
	uint32_t x418 = UINT32_MAX;
	int8_t x420 = -1;
	uint64_t t68 = 808LLU;

	t68 = (x417/((x418+x419)*x420));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x421 = 2U;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = -8016;
	uint8_t x424 = UINT8_MAX;
	volatile uint32_t t69 = 116U;

	t69 = (x421/((x422+x423)*x424));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x425 = INT16_MIN;
	volatile int16_t x426 = -1;
	int32_t x427 = 35797363;
	int8_t x428 = -1;
	volatile int32_t t70 = -33241158;

	t70 = (x425/((x426+x427)*x428));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x430 = -4311;
	static uint64_t x432 = 33965773LLU;
	static volatile uint64_t t71 = 6205144816757783391LLU;

	t71 = (x429/((x430+x431)*x432));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x437 = -782;
	static uint64_t x438 = UINT64_MAX;
	volatile int32_t x439 = -1;
	uint8_t x440 = 1U;
	uint64_t t72 = 44110477LLU;

	t72 = (x437/((x438+x439)*x440));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x441 = 77U;
	int32_t x442 = -1;
	uint64_t x443 = UINT64_MAX;
	int8_t x444 = 3;
	volatile uint64_t t73 = 8380515898575079LLU;

	t73 = (x441/((x442+x443)*x444));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = 0LL;
	static int8_t x447 = 21;
	static uint8_t x448 = 27U;

	t74 = (x445/((x446+x447)*x448));

	if (t74 != -16266970082636288LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x453 = INT32_MAX;

	t75 = (x453/((x454+x455)*x456));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x461 = -1LL;
	static int16_t x463 = INT16_MIN;
	int8_t x464 = -29;
	static uint64_t t76 = 129613964289499LLU;

	t76 = (x461/((x462+x463)*x464));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x465 = INT16_MAX;
	int16_t x466 = 1464;
	volatile int32_t t77 = 13;

	t77 = (x465/((x466+x467)*x468));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x473 = UINT32_MAX;
	int64_t x474 = -1LL;
	volatile uint64_t x475 = UINT64_MAX;
	static uint64_t t78 = 234142492809059LLU;

	t78 = (x473/((x474+x475)*x476));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x477 = INT8_MAX;
	int32_t x478 = -1;
	uint32_t x480 = 12U;
	volatile uint64_t t79 = 2869626528392513LLU;

	t79 = (x477/((x478+x479)*x480));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x481 = 13762782836LL;
	uint64_t x482 = 1015362204LLU;
	uint64_t t80 = 374190490LLU;

	t80 = (x481/((x482+x483)*x484));

	if (t80 != 12LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x489 = INT8_MAX;
	static volatile int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MAX;
	uint64_t x492 = 41447143870837LLU;
	uint64_t t81 = 24107332LLU;

	t81 = (x489/((x490+x491)*x492));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x493 = 721331906172843664LL;
	uint8_t x495 = UINT8_MAX;
	int16_t x496 = 1;
	volatile int64_t t82 = 4583LL;

	t82 = (x493/((x494+x495)*x496));

	if (t82 != 10964157260569LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x498 = -1;
	volatile int32_t t83 = -16751170;

	t83 = (x497/((x498+x499)*x500));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x505 = UINT64_MAX;
	int32_t x506 = 369;
	uint16_t x507 = 0U;
	uint8_t x508 = UINT8_MAX;

	t84 = (x505/((x506+x507)*x508));

	if (t84 != 196043828829476LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x518 = -1LL;
	static int32_t x519 = INT32_MIN;
	volatile int64_t t85 = -179796LL;

	t85 = (x517/((x518+x519)*x520));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x525 = -1LL;
	int8_t x526 = INT8_MAX;
	volatile int32_t x527 = 29;
	static uint16_t x528 = UINT16_MAX;
	static int64_t t86 = -4381511288302664LL;

	t86 = (x525/((x526+x527)*x528));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x542 = 21U;
	static uint8_t x543 = UINT8_MAX;
	volatile uint32_t x544 = UINT32_MAX;
	volatile uint32_t t87 = 48177U;

	t87 = (x541/((x542+x543)*x544));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x545 = 7891618429063407LLU;
	volatile uint8_t x546 = 50U;
	volatile int32_t x547 = INT32_MIN;
	volatile uint64_t x548 = 29091LLU;
	volatile uint64_t t88 = 7139144257277261LLU;

	t88 = (x545/((x546+x547)*x548));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x553 = UINT64_MAX;
	int8_t x555 = INT8_MIN;
	static uint8_t x556 = 4U;
	volatile uint64_t t89 = 67713LLU;

	t89 = (x553/((x554+x555)*x556));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x557 = 1U;
	uint32_t x558 = 55U;
	int16_t x559 = INT16_MAX;
	uint32_t t90 = 1976729453U;

	t90 = (x557/((x558+x559)*x560));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x561 = INT16_MAX;
	int32_t x562 = -1;
	static uint32_t x563 = 0U;
	uint16_t x564 = UINT16_MAX;
	volatile uint32_t t91 = 360U;

	t91 = (x561/((x562+x563)*x564));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x574 = 7196853564949LLU;
	int16_t x575 = INT16_MIN;
	int64_t x576 = INT64_MAX;
	volatile uint64_t t92 = 150470290269211LLU;

	t92 = (x573/((x574+x575)*x576));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x577 = UINT64_MAX;
	volatile int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MAX;
	uint8_t x580 = 14U;
	uint64_t t93 = 939274745LLU;

	t93 = (x577/((x578+x579)*x580));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x581 = INT16_MAX;
	static uint8_t x582 = 15U;
	int8_t x583 = -5;
	int8_t x584 = INT8_MAX;
	int32_t t94 = 1138159;

	t94 = (x581/((x582+x583)*x584));

	if (t94 != 25) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x585 = -3439323702463816753LL;
	int16_t x586 = INT16_MAX;
	int32_t x587 = -31309101;
	volatile int8_t x588 = 3;

	t95 = (x585/((x586+x587)*x588));

	if (t95 != 36655230570LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x590 = 885958951692948315LLU;
	int32_t x591 = -1;
	uint64_t t96 = 152LLU;

	t96 = (x589/((x590+x591)*x592));

	if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x601 = 1892062134LL;
	int32_t x602 = INT32_MAX;
	volatile int64_t t97 = 903232382230LL;

	t97 = (x601/((x602+x603)*x604));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x617 = 244U;
	int16_t x619 = -1;
	int8_t x620 = 2;
	volatile int32_t t98 = -198;

	t98 = (x617/((x618+x619)*x620));

	if (t98 != -61) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x629 = 1029083767992LLU;
	static int8_t x630 = -1;
	int16_t x632 = INT16_MAX;
	uint64_t t99 = 826495165534959488LLU;

	t99 = (x629/((x630+x631)*x632));

	if (t99 != 239LLU) { NG(); } else { ; }
	
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

