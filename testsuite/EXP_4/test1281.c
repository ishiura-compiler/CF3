#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = 214989622;
uint16_t x21 = UINT16_MAX;
uint64_t x23 = 4848009607306LLU;
volatile int16_t x25 = INT16_MAX;
static int64_t x28 = INT64_MAX;
int64_t x34 = -21LL;
volatile uint32_t t5 = 27U;
int8_t x37 = 56;
volatile int32_t t6 = 395089142;
int32_t x42 = INT32_MAX;
uint8_t x57 = UINT8_MAX;
uint32_t x59 = UINT32_MAX;
int16_t x67 = -1;
uint64_t x69 = 4453932507026213193LLU;
volatile uint64_t t12 = 119541569LLU;
uint64_t x74 = 64882504855946LLU;
int16_t x85 = 345;
int8_t x88 = INT8_MIN;
volatile int64_t x95 = INT64_MIN;
int32_t x96 = 866965034;
volatile uint16_t x97 = 0U;
uint64_t x100 = UINT64_MAX;
int64_t x112 = 789LL;
int16_t x113 = 1;
int16_t x130 = INT16_MAX;
volatile int16_t x132 = INT16_MAX;
int8_t x141 = 0;
uint32_t x145 = 11U;
int16_t x146 = 0;
volatile uint32_t t23 = 1573931U;
int16_t x156 = -1;
static volatile int32_t t24 = -11546;
volatile int32_t t25 = 1;
uint8_t x165 = 0U;
int16_t x168 = 0;
int16_t x177 = 3;
uint16_t x181 = 61U;
volatile int32_t t28 = -13;
volatile int8_t x199 = INT8_MIN;
int8_t x202 = INT8_MIN;
volatile int64_t x210 = -1028554594480LL;
uint16_t x214 = UINT16_MAX;
int8_t x218 = -1;
uint8_t x233 = UINT8_MAX;
int32_t x236 = INT32_MIN;
int16_t x238 = 800;
uint64_t t38 = UINT64_MAX;
uint16_t x250 = UINT16_MAX;
volatile int64_t x251 = -1LL;
int8_t x254 = INT8_MIN;
int16_t x265 = 21;
uint8_t x267 = 79U;
static int64_t x280 = INT64_MAX;
static volatile int32_t t44 = -281;
volatile uint16_t x289 = 570U;
volatile int16_t x308 = INT16_MIN;
uint64_t x318 = 3951155308317LLU;
uint8_t x319 = 49U;
uint32_t x321 = 0U;
int64_t x322 = -10349868748607LL;
uint16_t x325 = 4U;
int32_t x364 = INT32_MAX;
volatile int32_t t56 = 136658;
int8_t x383 = -1;
volatile int16_t x401 = 180;
static uint32_t x417 = 332600278U;
static volatile uint8_t x421 = 4U;
int32_t t61 = 1;
uint64_t t63 = 1800363935972LLU;
int16_t x460 = 155;
int32_t t64 = -1;
int64_t x462 = INT64_MAX;
static uint64_t x465 = 292540320LLU;
int8_t x466 = INT8_MIN;
static volatile int16_t x470 = INT16_MAX;
int16_t x494 = INT16_MIN;
volatile int64_t t70 = INT64_MAX;
int64_t x512 = INT64_MAX;
volatile uint8_t x529 = 28U;
uint16_t x530 = 4046U;
uint16_t x531 = UINT16_MAX;
uint16_t x533 = 22U;
static int16_t x550 = -229;
volatile int32_t x559 = INT32_MAX;
int16_t x577 = 1;
int32_t t78 = 26426;
int8_t x593 = INT8_MAX;
uint8_t x594 = 6U;
static volatile int32_t t80 = -9937554;
uint16_t x630 = UINT16_MAX;
static int16_t x632 = INT16_MAX;
uint16_t x649 = 43U;
static int16_t x655 = -612;
uint32_t x661 = UINT32_MAX;
int32_t t89 = -14832300;
static int8_t x690 = 49;
int32_t t93 = 1;
static uint16_t x720 = 24529U;
volatile int32_t t94 = -14607;
volatile uint64_t x725 = UINT64_MAX;
static uint8_t x727 = 21U;
int8_t x730 = INT8_MIN;
uint8_t x733 = 3U;
uint8_t x740 = UINT8_MAX;
int16_t x754 = INT16_MAX;
int64_t x756 = INT64_MIN;
volatile uint32_t t99 = 1982905U;


void f0(void) {
	static int8_t x5 = INT8_MAX;
	uint8_t x6 = 76U;
	static volatile int16_t x7 = 2;
	int8_t x8 = INT8_MIN;
	static int32_t t0 = 146128;

	t0 = (x5>>(x6==(x7==x8)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MAX;
	static uint8_t x18 = 102U;
	int8_t x19 = 0;
	int64_t x20 = INT64_MIN;

	t1 = (x17>>(x18==(x19==x20)));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x22 = -1;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t2 = 83120;

	t2 = (x21>>(x22==(x23==x24)));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x26 = 130095;
	static int64_t x27 = 1010324667LL;
	int32_t t3 = -7;

	t3 = (x25>>(x26==(x27==x28)));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x29 = INT8_MAX;
	volatile uint32_t x30 = 107U;
	volatile int32_t x31 = INT32_MAX;
	volatile int64_t x32 = INT64_MAX;
	volatile int32_t t4 = 1198;

	t4 = (x29>>(x30==(x31==x32)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x33 = 270423U;
	int64_t x35 = 2133032234LL;
	uint32_t x36 = 2U;

	t5 = (x33>>(x34==(x35==x36)));

	if (t5 != 270423U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x38 = INT8_MIN;
	uint64_t x39 = 5742845354LLU;
	volatile uint32_t x40 = 42468101U;

	t6 = (x37>>(x38==(x39==x40)));

	if (t6 != 56) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x43 = INT64_MIN;
	uint16_t x44 = 7335U;
	int32_t t7 = -2;

	t7 = (x41>>(x42==(x43==x44)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 28860U;
	uint8_t x50 = 12U;
	volatile uint64_t x51 = UINT64_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	volatile int32_t t8 = 53834923;

	t8 = (x49>>(x50==(x51==x52)));

	if (t8 != 28860) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x58 = INT64_MIN;
	int8_t x60 = 1;
	int32_t t9 = -1;

	t9 = (x57>>(x58==(x59==x60)));

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x61 = 0;
	static int64_t x62 = -1LL;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = 26U;
	int32_t t10 = -653363046;

	t10 = (x61>>(x62==(x63==x64)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x65 = 18;
	static uint8_t x66 = 6U;
	uint8_t x68 = UINT8_MAX;
	int32_t t11 = 20262307;

	t11 = (x65>>(x66==(x67==x68)));

	if (t11 != 18) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x70 = 943U;
	int32_t x71 = 56510;
	volatile int8_t x72 = INT8_MIN;

	t12 = (x69>>(x70==(x71==x72)));

	if (t12 != 4453932507026213193LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x73 = UINT8_MAX;
	static int16_t x75 = INT16_MIN;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t13 = -56159558;

	t13 = (x73>>(x74==(x75==x76)));

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MAX;
	static uint8_t x82 = 5U;
	static uint8_t x83 = UINT8_MAX;
	int16_t x84 = -34;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x81>>(x82==(x83==x84)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = 2U;
	static int8_t x87 = -11;
	int32_t t15 = 127509;

	t15 = (x85>>(x86==(x87==x88)));

	if (t15 != 345) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = 2U;
	volatile int32_t x94 = INT32_MAX;
	volatile int32_t t16 = 607494;

	t16 = (x93>>(x94==(x95==x96)));

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	int32_t t17 = -3;

	t17 = (x97>>(x98==(x99==x100)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x109 = 6;
	static uint8_t x110 = 0U;
	int16_t x111 = -1;
	volatile int32_t t18 = -3856;

	t18 = (x109>>(x110==(x111==x112)));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x114 = -1LL;
	static uint32_t x115 = 3872218U;
	int64_t x116 = -1LL;
	int32_t t19 = -23;

	t19 = (x113>>(x114==(x115==x116)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x117 = 1U;
	static int32_t x118 = 30;
	int64_t x119 = INT64_MIN;
	volatile uint8_t x120 = 2U;
	volatile int32_t t20 = -48546;

	t20 = (x117>>(x118==(x119==x120)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x129 = 16068U;
	volatile int32_t x131 = 3850216;
	int32_t t21 = 2221;

	t21 = (x129>>(x130==(x131==x132)));

	if (t21 != 16068) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 81902464LLU;
	static volatile int16_t x144 = INT16_MAX;
	int32_t t22 = 29715407;

	t22 = (x141>>(x142==(x143==x144)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x147 = 24U;
	static int32_t x148 = 29185280;

	t23 = (x145>>(x146==(x147==x148)));

	if (t23 != 5U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x153 = 0U;
	uint32_t x154 = 471U;
	int16_t x155 = INT16_MIN;

	t24 = (x153>>(x154==(x155==x156)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x161 = UINT16_MAX;
	static int16_t x162 = INT16_MAX;
	static uint64_t x163 = UINT64_MAX;
	int32_t x164 = 26933;

	t25 = (x161>>(x162==(x163==x164)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x166 = 40U;
	static int32_t x167 = INT32_MIN;
	static int32_t t26 = -1;

	t26 = (x165>>(x166==(x167==x168)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x178 = INT8_MIN;
	static uint32_t x179 = 4631U;
	int8_t x180 = INT8_MIN;
	int32_t t27 = 9085;

	t27 = (x177>>(x178==(x179==x180)));

	if (t27 != 3) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x182 = 863U;
	static volatile int8_t x183 = INT8_MIN;
	static uint32_t x184 = 361078U;

	t28 = (x181>>(x182==(x183==x184)));

	if (t28 != 61) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x197 = 0;
	int16_t x198 = -1;
	uint32_t x200 = 125182929U;
	static int32_t t29 = 24407904;

	t29 = (x197>>(x198==(x199==x200)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x201 = 859;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	volatile int32_t t30 = 21970;

	t30 = (x201>>(x202==(x203==x204)));

	if (t30 != 859) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x205 = INT8_MAX;
	volatile int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	static int32_t x208 = -1;
	static int32_t t31 = -3;

	t31 = (x205>>(x206==(x207==x208)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x209 = UINT16_MAX;
	uint32_t x211 = 5U;
	int64_t x212 = 689623820LL;
	volatile int32_t t32 = 1593;

	t32 = (x209>>(x210==(x211==x212)));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x213 = UINT32_MAX;
	volatile int16_t x215 = -1;
	int64_t x216 = -1LL;
	uint32_t t33 = UINT32_MAX;

	t33 = (x213>>(x214==(x215==x216)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x217 = UINT32_MAX;
	int64_t x219 = -1LL;
	int64_t x220 = -277271LL;
	static uint32_t t34 = UINT32_MAX;

	t34 = (x217>>(x218==(x219==x220)));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = UINT32_MAX;
	static volatile uint64_t x223 = 105LLU;
	int8_t x224 = -35;
	volatile uint32_t t35 = UINT32_MAX;

	t35 = (x221>>(x222==(x223==x224)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x229 = 417751481005697LL;
	static int32_t x230 = -1159;
	static int8_t x231 = INT8_MIN;
	int64_t x232 = -1126732549LL;
	volatile int64_t t36 = 1462707LL;

	t36 = (x229>>(x230==(x231==x232)));

	if (t36 != 417751481005697LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x234 = 2U;
	uint64_t x235 = 142562904LLU;
	static volatile int32_t t37 = 956;

	t37 = (x233>>(x234==(x235==x236)));

	if (t37 != 255) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = 133341LL;
	static volatile int64_t x240 = -1LL;

	t38 = (x237>>(x238==(x239==x240)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x241 = UINT16_MAX;
	int64_t x242 = -1074455711LL;
	static int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t39 = 3894392;

	t39 = (x241>>(x242==(x243==x244)));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x249 = INT64_MAX;
	int16_t x252 = -15;
	volatile int64_t t40 = INT64_MAX;

	t40 = (x249>>(x250==(x251==x252)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x253 = INT32_MAX;
	int64_t x255 = -1LL;
	static uint64_t x256 = 1046057319502230LLU;
	static volatile int32_t t41 = INT32_MAX;

	t41 = (x253>>(x254==(x255==x256)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x266 = 26879875668LL;
	volatile int64_t x268 = INT64_MIN;
	int32_t t42 = 58;

	t42 = (x265>>(x266==(x267==x268)));

	if (t42 != 21) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	uint64_t x271 = 3LLU;
	static int32_t x272 = INT32_MIN;
	int32_t t43 = INT32_MAX;

	t43 = (x269>>(x270==(x271==x272)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x277 = 91U;
	volatile uint32_t x278 = 3936129U;
	int64_t x279 = INT64_MIN;

	t44 = (x277>>(x278==(x279==x280)));

	if (t44 != 91) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x290 = -2;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = 5U;
	volatile int32_t t45 = 3;

	t45 = (x289>>(x290==(x291==x292)));

	if (t45 != 570) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x301 = UINT8_MAX;
	int64_t x302 = -230712876LL;
	int16_t x303 = INT16_MAX;
	volatile int32_t x304 = -118899933;
	volatile int32_t t46 = 984;

	t46 = (x301>>(x302==(x303==x304)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x305 = UINT32_MAX;
	uint32_t x306 = 123553U;
	uint64_t x307 = 124096572908792801LLU;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x305>>(x306==(x307==x308)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x317 = 17U;
	uint16_t x320 = UINT16_MAX;
	int32_t t48 = -1525632;

	t48 = (x317>>(x318==(x319==x320)));

	if (t48 != 17) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x323 = 234717811562580089LLU;
	int8_t x324 = INT8_MIN;
	volatile uint32_t t49 = 224881U;

	t49 = (x321>>(x322==(x323==x324)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x326 = 705287808;
	static volatile int8_t x327 = 13;
	uint64_t x328 = 8580745924433LLU;
	volatile int32_t t50 = -1675192;

	t50 = (x325>>(x326==(x327==x328)));

	if (t50 != 4) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x333 = 18008838704268718LLU;
	int16_t x334 = 3849;
	volatile int16_t x335 = -1;
	uint8_t x336 = 32U;
	static uint64_t t51 = 1871LLU;

	t51 = (x333>>(x334==(x335==x336)));

	if (t51 != 18008838704268718LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x341 = INT64_MAX;
	uint64_t x342 = UINT64_MAX;
	static volatile uint64_t x343 = 34162032746LLU;
	static volatile int64_t x344 = INT64_MIN;
	static int64_t t52 = INT64_MAX;

	t52 = (x341>>(x342==(x343==x344)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MAX;
	int8_t x347 = 40;
	static int16_t x348 = INT16_MAX;
	volatile int32_t t53 = 12976558;

	t53 = (x345>>(x346==(x347==x348)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	volatile int32_t x355 = INT32_MAX;
	int64_t x356 = -70678477765055445LL;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x353>>(x354==(x355==x356)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x357 = 1U;
	int8_t x358 = INT8_MIN;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t55 = 761;

	t55 = (x357>>(x358==(x359==x360)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x361 = 114U;
	int8_t x362 = -1;
	static volatile int32_t x363 = -667242524;

	t56 = (x361>>(x362==(x363==x364)));

	if (t56 != 114) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x381 = 505;
	static volatile int64_t x382 = INT64_MAX;
	volatile uint64_t x384 = 3067LLU;
	static int32_t t57 = -224080;

	t57 = (x381>>(x382==(x383==x384)));

	if (t57 != 505) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x402 = 123005U;
	static int32_t x403 = -3749;
	volatile int8_t x404 = 1;
	int32_t t58 = -4127294;

	t58 = (x401>>(x402==(x403==x404)));

	if (t58 != 180) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x413 = 7U;
	uint32_t x414 = 8U;
	uint8_t x415 = 0U;
	int8_t x416 = INT8_MIN;
	volatile uint32_t t59 = 854U;

	t59 = (x413>>(x414==(x415==x416)));

	if (t59 != 7U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x418 = -1LL;
	static volatile uint16_t x419 = 35U;
	static uint16_t x420 = 118U;
	uint32_t t60 = 158301638U;

	t60 = (x417>>(x418==(x419==x420)));

	if (t60 != 332600278U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x422 = INT8_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint64_t x424 = 9788000018LLU;

	t61 = (x421>>(x422==(x423==x424)));

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x441 = 3;
	static int8_t x442 = 26;
	int8_t x443 = INT8_MIN;
	static int64_t x444 = INT64_MIN;
	int32_t t62 = 1;

	t62 = (x441>>(x442==(x443==x444)));

	if (t62 != 3) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x453 = 1560027719146LLU;
	int16_t x454 = 16;
	static uint8_t x455 = 4U;
	uint8_t x456 = 14U;

	t63 = (x453>>(x454==(x455==x456)));

	if (t63 != 1560027719146LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x457 = 247U;
	int32_t x458 = 2585;
	volatile int8_t x459 = INT8_MIN;

	t64 = (x457>>(x458==(x459==x460)));

	if (t64 != 247) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x461 = INT64_MAX;
	int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MIN;
	static volatile int64_t t65 = INT64_MAX;

	t65 = (x461>>(x462==(x463==x464)));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x467 = UINT16_MAX;
	volatile int32_t x468 = INT32_MAX;
	volatile uint64_t t66 = 8182869306LLU;

	t66 = (x465>>(x466==(x467==x468)));

	if (t66 != 292540320LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x469 = 22127036270167307LLU;
	volatile uint16_t x471 = UINT16_MAX;
	int32_t x472 = INT32_MIN;
	uint64_t t67 = 2830LLU;

	t67 = (x469>>(x470==(x471==x472)));

	if (t67 != 22127036270167307LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x485 = 4U;
	volatile uint16_t x486 = 2U;
	int8_t x487 = 6;
	int32_t x488 = INT32_MIN;
	int32_t t68 = -2;

	t68 = (x485>>(x486==(x487==x488)));

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x489 = 253181U;
	int32_t x490 = INT32_MAX;
	volatile int32_t x491 = -612;
	int32_t x492 = -1;
	uint32_t t69 = 4308086U;

	t69 = (x489>>(x490==(x491==x492)));

	if (t69 != 253181U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x493 = INT64_MAX;
	int64_t x495 = INT64_MAX;
	static int32_t x496 = -43;

	t70 = (x493>>(x494==(x495==x496)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x509 = 510656100U;
	int8_t x510 = -1;
	static int32_t x511 = INT32_MIN;
	static uint32_t t71 = 2611630U;

	t71 = (x509>>(x510==(x511==x512)));

	if (t71 != 510656100U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x513 = 0U;
	static int16_t x514 = INT16_MIN;
	int32_t x515 = 317499398;
	int16_t x516 = INT16_MAX;
	int32_t t72 = 10948;

	t72 = (x513>>(x514==(x515==x516)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x517 = 1U;
	int8_t x518 = 0;
	volatile uint64_t x519 = 7963397620LLU;
	uint16_t x520 = 8U;
	int32_t t73 = 4014;

	t73 = (x517>>(x518==(x519==x520)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x532 = 1;
	int32_t t74 = -3089362;

	t74 = (x529>>(x530==(x531==x532)));

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x534 = 4498;
	uint8_t x535 = 37U;
	static uint16_t x536 = UINT16_MAX;
	int32_t t75 = 28231;

	t75 = (x533>>(x534==(x535==x536)));

	if (t75 != 22) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x549 = 0;
	int8_t x551 = -1;
	static int8_t x552 = INT8_MIN;
	volatile int32_t t76 = -13;

	t76 = (x549>>(x550==(x551==x552)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x557 = 0LL;
	int64_t x558 = 37996LL;
	int8_t x560 = INT8_MAX;
	int64_t t77 = -5LL;

	t77 = (x557>>(x558==(x559==x560)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x578 = 3217720;
	volatile uint32_t x579 = 1467580U;
	uint8_t x580 = 7U;

	t78 = (x577>>(x578==(x579==x580)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x581 = 1;
	uint32_t x582 = 21U;
	uint64_t x583 = UINT64_MAX;
	static int16_t x584 = 0;
	volatile int32_t t79 = -236084;

	t79 = (x581>>(x582==(x583==x584)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x595 = UINT8_MAX;
	int32_t x596 = INT32_MIN;

	t80 = (x593>>(x594==(x595==x596)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x613 = 1;
	int8_t x614 = INT8_MIN;
	int16_t x615 = -1;
	int16_t x616 = INT16_MIN;
	int32_t t81 = -63315359;

	t81 = (x613>>(x614==(x615==x616)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x629 = 0;
	int64_t x631 = INT64_MIN;
	static volatile int32_t t82 = 1323;

	t82 = (x629>>(x630==(x631==x632)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x637 = UINT8_MAX;
	int16_t x638 = -1;
	uint16_t x639 = UINT16_MAX;
	uint16_t x640 = UINT16_MAX;
	int32_t t83 = -1624;

	t83 = (x637>>(x638==(x639==x640)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x641 = 618;
	int8_t x642 = INT8_MIN;
	uint16_t x643 = UINT16_MAX;
	static int32_t x644 = -1050027820;
	int32_t t84 = -14060;

	t84 = (x641>>(x642==(x643==x644)));

	if (t84 != 618) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x645 = 1U;
	static uint32_t x646 = UINT32_MAX;
	int8_t x647 = INT8_MIN;
	uint64_t x648 = 4053012542LLU;
	static int32_t t85 = 4086058;

	t85 = (x645>>(x646==(x647==x648)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x650 = INT64_MIN;
	static uint8_t x651 = 0U;
	uint8_t x652 = UINT8_MAX;
	int32_t t86 = 474;

	t86 = (x649>>(x650==(x651==x652)));

	if (t86 != 43) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x653 = UINT64_MAX;
	volatile int8_t x654 = INT8_MAX;
	int16_t x656 = -21;
	volatile uint64_t t87 = UINT64_MAX;

	t87 = (x653>>(x654==(x655==x656)));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x662 = -319560;
	int16_t x663 = 0;
	int32_t x664 = INT32_MAX;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x661>>(x662==(x663==x664)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x669 = INT16_MAX;
	uint32_t x670 = 12260U;
	int8_t x671 = -1;
	uint8_t x672 = 0U;

	t89 = (x669>>(x670==(x671==x672)));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x673 = 142186U;
	static volatile uint8_t x674 = 2U;
	int64_t x675 = INT64_MAX;
	static int8_t x676 = -1;
	static volatile uint32_t t90 = 816064U;

	t90 = (x673>>(x674==(x675==x676)));

	if (t90 != 142186U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x685 = INT32_MAX;
	static int8_t x686 = INT8_MIN;
	int32_t x687 = -93560296;
	int8_t x688 = -1;
	int32_t t91 = INT32_MAX;

	t91 = (x685>>(x686==(x687==x688)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x689 = INT16_MAX;
	int64_t x691 = -1LL;
	uint8_t x692 = 3U;
	int32_t t92 = -141551931;

	t92 = (x689>>(x690==(x691==x692)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x693 = INT8_MAX;
	volatile uint32_t x694 = 715831U;
	int16_t x695 = 1;
	static int64_t x696 = INT64_MIN;

	t93 = (x693>>(x694==(x695==x696)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x717 = 2U;
	int8_t x718 = INT8_MIN;
	int16_t x719 = INT16_MIN;

	t94 = (x717>>(x718==(x719==x720)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x726 = 818U;
	uint16_t x728 = 3U;
	static uint64_t t95 = UINT64_MAX;

	t95 = (x725>>(x726==(x727==x728)));

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x729 = INT16_MAX;
	uint64_t x731 = 445549034503724LLU;
	int32_t x732 = INT32_MIN;
	int32_t t96 = 787;

	t96 = (x729>>(x730==(x731==x732)));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x734 = INT16_MAX;
	static uint8_t x735 = 61U;
	int16_t x736 = -1;
	volatile int32_t t97 = -2808144;

	t97 = (x733>>(x734==(x735==x736)));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x737 = 12364U;
	volatile uint64_t x738 = 737736566599047424LLU;
	volatile int16_t x739 = 14;
	uint32_t t98 = 1785U;

	t98 = (x737>>(x738==(x739==x740)));

	if (t98 != 12364U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x753 = 52621720U;
	volatile uint64_t x755 = UINT64_MAX;

	t99 = (x753>>(x754==(x755==x756)));

	if (t99 != 52621720U) { NG(); } else { ; }
	
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

