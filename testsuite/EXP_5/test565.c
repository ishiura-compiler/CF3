#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x29 = 1U;
int8_t x38 = INT8_MAX;
static volatile int32_t t2 = -41;
volatile int8_t x58 = -3;
static uint16_t x66 = 60U;
int16_t x72 = -2;
volatile uint16_t x73 = 197U;
int64_t x118 = INT64_MAX;
uint32_t x125 = 3U;
int64_t x127 = INT64_MIN;
volatile uint32_t t11 = 342147U;
int16_t x156 = INT16_MIN;
volatile uint32_t t16 = UINT32_MAX;
uint32_t x206 = 175255U;
volatile uint64_t x213 = UINT64_MAX;
volatile int16_t x215 = -1;
static int16_t x216 = INT16_MIN;
int64_t x218 = INT64_MIN;
static uint16_t x220 = UINT16_MAX;
volatile uint16_t x250 = UINT16_MAX;
volatile int64_t x253 = 380926889594421831LL;
int32_t x266 = -1;
static int32_t x267 = INT32_MIN;
int32_t t29 = 110901;
int32_t x290 = -1;
int32_t t30 = 3713301;
uint32_t t32 = 19952U;
uint16_t x307 = UINT16_MAX;
int16_t x308 = INT16_MAX;
int64_t x331 = INT64_MAX;
volatile uint32_t x342 = UINT32_MAX;
static volatile int16_t x343 = INT16_MIN;
volatile int32_t t36 = 116437734;
int32_t x355 = -160;
volatile int32_t t37 = 18;
uint16_t x368 = UINT16_MAX;
volatile int32_t x370 = INT32_MIN;
int16_t x371 = -20;
int8_t x375 = INT8_MIN;
int32_t x386 = INT32_MIN;
static volatile int32_t x387 = INT32_MIN;
uint64_t x393 = UINT64_MAX;
uint8_t x396 = 126U;
int8_t x418 = INT8_MAX;
volatile int32_t t47 = -160290159;
volatile uint32_t t48 = 321112U;
int16_t x434 = -28;
volatile int32_t x464 = 37041668;
uint16_t x473 = 331U;
int16_t x508 = -119;
int32_t x519 = 993526466;
static int32_t x530 = -1;
uint64_t x532 = UINT64_MAX;
int16_t x548 = INT16_MIN;
volatile uint32_t t59 = 217067705U;
volatile int32_t t60 = 1448;
uint64_t x600 = 27735790331351700LLU;
volatile int32_t t61 = INT32_MAX;
static volatile int32_t t65 = 47696927;
int32_t t66 = 5;
uint64_t x752 = 103017681960639996LLU;
int64_t x760 = INT64_MIN;
int32_t x775 = INT32_MIN;
int16_t x798 = -130;
int8_t x825 = INT8_MAX;
uint32_t x826 = UINT32_MAX;
uint32_t x829 = 177U;
volatile uint32_t t78 = 1359U;
volatile uint32_t x843 = 1888015976U;
int64_t x851 = 3296349547245LL;
static uint32_t x852 = UINT32_MAX;
int64_t x910 = INT64_MAX;
volatile int64_t x911 = -11545453121098965LL;
int32_t t83 = 4584;
volatile uint8_t x967 = UINT8_MAX;
int64_t x1008 = INT64_MIN;
uint8_t x1009 = 0U;
uint32_t x1011 = UINT32_MAX;
static volatile int16_t x1018 = -7;
volatile int32_t t92 = 6888833;
int32_t t94 = 2;
volatile uint64_t x1053 = 82208126LLU;
int32_t x1054 = INT32_MIN;
static volatile uint64_t t95 = 27LLU;
volatile uint32_t t97 = 24U;
uint16_t x1106 = UINT16_MAX;
volatile uint8_t x1108 = 13U;
static int8_t x1110 = -4;
volatile int8_t x1111 = INT8_MIN;


void f0(void) {
	static int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MIN;
	static uint32_t x32 = 86U;
	int32_t t0 = -42678911;

	t0 = (x29<<((x30/x31)%x32));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x37 = 38145652315486833LL;
	uint16_t x39 = 279U;
	int32_t x40 = -1;
	int64_t t1 = 26005276LL;

	t1 = (x37<<((x38/x39)%x40));

	if (t1 != 38145652315486833LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x41 = 1;
	int32_t x42 = -1351197;
	int16_t x43 = INT16_MIN;
	int16_t x44 = -1;

	t2 = (x41<<((x42/x43)%x44));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x57 = 14281274U;
	uint8_t x59 = 16U;
	int16_t x60 = INT16_MIN;
	volatile uint32_t t3 = 13085U;

	t3 = (x57<<((x58/x59)%x60));

	if (t3 != 14281274U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x65 = 34227215380LLU;
	uint16_t x67 = 1697U;
	uint16_t x68 = 7275U;
	volatile uint64_t t4 = 72LLU;

	t4 = (x65<<((x66/x67)%x68));

	if (t4 != 34227215380LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x69 = UINT8_MAX;
	uint16_t x70 = UINT16_MAX;
	int64_t x71 = INT64_MAX;
	volatile int32_t t5 = 103;

	t5 = (x69<<((x70/x71)%x72));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x74 = 3;
	int16_t x75 = 13;
	int64_t x76 = -1LL;
	static int32_t t6 = 663;

	t6 = (x73<<((x74/x75)%x76));

	if (t6 != 197) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x89 = INT8_MAX;
	uint32_t x90 = 1781787U;
	uint64_t x91 = UINT64_MAX;
	volatile int8_t x92 = -1;
	int32_t t7 = -87951401;

	t7 = (x89<<((x90/x91)%x92));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x93 = 81042U;
	static int32_t x94 = -100990;
	static uint64_t x95 = UINT64_MAX;
	volatile int32_t x96 = 658;
	volatile uint32_t t8 = 562635U;

	t8 = (x93<<((x94/x95)%x96));

	if (t8 != 81042U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x101 = 6487810073945153LLU;
	static uint32_t x102 = 495276724U;
	int8_t x103 = -5;
	static int16_t x104 = INT16_MIN;
	volatile uint64_t t9 = 435717709LLU;

	t9 = (x101<<((x102/x103)%x104));

	if (t9 != 6487810073945153LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x117 = 242;
	volatile int64_t x119 = -1LL;
	int32_t x120 = -1;
	int32_t t10 = -25137963;

	t10 = (x117<<((x118/x119)%x120));

	if (t10 != 242) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x126 = 0;
	static uint8_t x128 = UINT8_MAX;

	t11 = (x125<<((x126/x127)%x128));

	if (t11 != 3U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x133 = 4185386029682299LL;
	int32_t x134 = 69668;
	int32_t x135 = INT32_MIN;
	uint32_t x136 = UINT32_MAX;
	volatile int64_t t12 = -189955LL;

	t12 = (x133<<((x134/x135)%x136));

	if (t12 != 4185386029682299LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x149 = INT64_MAX;
	static int8_t x150 = INT8_MIN;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = INT8_MIN;
	int64_t t13 = INT64_MAX;

	t13 = (x149<<((x150/x151)%x152));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -3225805660LL;
	static volatile uint32_t t14 = UINT32_MAX;

	t14 = (x153<<((x154/x155)%x156));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x157 = 1247U;
	int32_t x158 = INT32_MAX;
	static uint32_t x159 = UINT32_MAX;
	static int16_t x160 = INT16_MAX;
	volatile int32_t t15 = -13142840;

	t15 = (x157<<((x158/x159)%x160));

	if (t15 != 1247) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x161 = UINT32_MAX;
	static int16_t x162 = INT16_MIN;
	int32_t x163 = INT32_MAX;
	volatile int64_t x164 = INT64_MAX;

	t16 = (x161<<((x162/x163)%x164));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x181 = INT64_MAX;
	uint8_t x182 = 19U;
	volatile uint64_t x183 = 153991LLU;
	static int32_t x184 = INT32_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (x181<<((x182/x183)%x184));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x193 = 55U;
	uint8_t x194 = 2U;
	int64_t x195 = 92821550301178081LL;
	volatile int16_t x196 = INT16_MAX;
	volatile int32_t t18 = 786;

	t18 = (x193<<((x194/x195)%x196));

	if (t18 != 55) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x205 = 7786214248LLU;
	uint64_t x207 = 13309645171LLU;
	static int16_t x208 = INT16_MIN;
	static uint64_t t19 = 85679332296757LLU;

	t19 = (x205<<((x206/x207)%x208));

	if (t19 != 7786214248LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x214 = 21919238688957LLU;
	volatile uint64_t t20 = UINT64_MAX;

	t20 = (x213<<((x214/x215)%x216));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x217 = 2;
	static int16_t x219 = INT16_MIN;
	int32_t t21 = 6588;

	t21 = (x217<<((x218/x219)%x220));

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x221 = 2U;
	uint64_t x222 = 1119342287LLU;
	volatile int16_t x223 = -1;
	static int16_t x224 = 83;
	static volatile int32_t t22 = 1226377;

	t22 = (x221<<((x222/x223)%x224));

	if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x229 = 161519547U;
	uint8_t x230 = UINT8_MAX;
	volatile uint32_t x231 = 1913U;
	volatile int16_t x232 = -20;
	uint32_t t23 = 7836U;

	t23 = (x229<<((x230/x231)%x232));

	if (t23 != 161519547U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x233 = 18224LLU;
	uint32_t x234 = 1007U;
	uint64_t x235 = 42634801785LLU;
	int64_t x236 = 145927LL;
	static volatile uint64_t t24 = 4805106583999358LLU;

	t24 = (x233<<((x234/x235)%x236));

	if (t24 != 18224LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x249 = 2U;
	static int64_t x251 = INT64_MAX;
	static int64_t x252 = 21208875648506LL;
	int32_t t25 = -628331;

	t25 = (x249<<((x250/x251)%x252));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x254 = 2LLU;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	int64_t t26 = -1209576710836863LL;

	t26 = (x253<<((x254/x255)%x256));

	if (t26 != 380926889594421831LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x257 = UINT8_MAX;
	static int64_t x258 = -1LL;
	volatile uint16_t x259 = 192U;
	int8_t x260 = -2;
	volatile int32_t t27 = 2;

	t27 = (x257<<((x258/x259)%x260));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static int64_t x268 = -132702330011231377LL;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (x265<<((x266/x267)%x268));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x285 = UINT16_MAX;
	static uint32_t x286 = 5639U;
	volatile uint32_t x287 = 16459840U;
	static volatile int8_t x288 = INT8_MIN;

	t29 = (x285<<((x286/x287)%x288));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x289 = 27559426;
	volatile int32_t x291 = INT32_MAX;
	uint64_t x292 = UINT64_MAX;

	t30 = (x289<<((x290/x291)%x292));

	if (t30 != 27559426) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x293 = 3U;
	int32_t x294 = INT32_MIN;
	int32_t x295 = 137435;
	int16_t x296 = -1;
	static int32_t t31 = 868005;

	t31 = (x293<<((x294/x295)%x296));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x301 = 113840U;
	uint64_t x302 = 3LLU;
	int16_t x303 = 1;
	static int32_t x304 = -2759;

	t32 = (x301<<((x302/x303)%x304));

	if (t32 != 910720U) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x305 = 83476774293533879LL;
	volatile int16_t x306 = INT16_MIN;
	static volatile int64_t t33 = -160379808746252LL;

	t33 = (x305<<((x306/x307)%x308));

	if (t33 != 83476774293533879LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	volatile int32_t x323 = -7077210;
	static int8_t x324 = INT8_MIN;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x321<<((x322/x323)%x324));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x329 = 584;
	int64_t x330 = 34167417260264643LL;
	volatile int16_t x332 = 147;
	static volatile int32_t t35 = 1770839;

	t35 = (x329<<((x330/x331)%x332));

	if (t35 != 584) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	uint16_t x344 = UINT16_MAX;

	t36 = (x341<<((x342/x343)%x344));

	if (t36 != 510) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x353 = 6U;
	static int16_t x354 = -58;
	volatile uint8_t x356 = UINT8_MAX;

	t37 = (x353<<((x354/x355)%x356));

	if (t37 != 6) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x357 = 1006230194U;
	static volatile int32_t x358 = 1;
	static int16_t x359 = INT16_MAX;
	static int64_t x360 = INT64_MIN;
	uint32_t t38 = 1877856352U;

	t38 = (x357<<((x358/x359)%x360));

	if (t38 != 1006230194U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x365 = UINT8_MAX;
	uint64_t x366 = UINT64_MAX;
	volatile int64_t x367 = -1LL;
	int32_t t39 = 33883;

	t39 = (x365<<((x366/x367)%x368));

	if (t39 != 510) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x369 = 117U;
	volatile uint32_t x372 = 10U;
	int32_t t40 = 8741;

	t40 = (x369<<((x370/x371)%x372));

	if (t40 != 468) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x373 = INT8_MAX;
	uint32_t x374 = 8029U;
	static uint16_t x376 = 6308U;
	static int32_t t41 = -214634;

	t41 = (x373<<((x374/x375)%x376));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x385 = 28954808LL;
	int8_t x388 = INT8_MIN;
	int64_t t42 = 560LL;

	t42 = (x385<<((x386/x387)%x388));

	if (t42 != 57909616LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x394 = 40212;
	static uint8_t x395 = 28U;
	static uint64_t t43 = 190LLU;

	t43 = (x393<<((x394/x395)%x396));

	if (t43 != 18445618173802708992LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x401 = 335284797517167674LLU;
	uint16_t x402 = 0U;
	static int16_t x403 = 1392;
	int64_t x404 = -54868671LL;
	volatile uint64_t t44 = 48371815703764LLU;

	t44 = (x401<<((x402/x403)%x404));

	if (t44 != 335284797517167674LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x409 = 5647562U;
	static int64_t x410 = -1LL;
	int32_t x411 = 419674;
	int64_t x412 = -5530LL;
	volatile uint32_t t45 = 2U;

	t45 = (x409<<((x410/x411)%x412));

	if (t45 != 5647562U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x413 = UINT16_MAX;
	volatile uint16_t x414 = UINT16_MAX;
	static volatile int64_t x415 = 6985923078056LL;
	static volatile uint64_t x416 = UINT64_MAX;
	volatile int32_t t46 = -74106693;

	t46 = (x413<<((x414/x415)%x416));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x417 = 108330;
	volatile uint64_t x419 = 870592713832912LLU;
	int8_t x420 = INT8_MAX;

	t47 = (x417<<((x418/x419)%x420));

	if (t47 != 108330) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x425 = 3642696U;
	uint32_t x426 = 308659937U;
	static uint64_t x427 = 410713041253LLU;
	volatile uint32_t x428 = UINT32_MAX;

	t48 = (x425<<((x426/x427)%x428));

	if (t48 != 3642696U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x433 = INT8_MAX;
	volatile uint16_t x435 = UINT16_MAX;
	volatile uint16_t x436 = UINT16_MAX;
	volatile int32_t t49 = 612161706;

	t49 = (x433<<((x434/x435)%x436));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x445 = 12LLU;
	static int32_t x446 = INT32_MIN;
	uint64_t x447 = UINT64_MAX;
	volatile int32_t x448 = INT32_MIN;
	volatile uint64_t t50 = 983126600528LLU;

	t50 = (x445<<((x446/x447)%x448));

	if (t50 != 12LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x461 = 1LL;
	uint64_t x462 = 16276717LLU;
	volatile int16_t x463 = INT16_MIN;
	volatile int64_t t51 = 974LL;

	t51 = (x461<<((x462/x463)%x464));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x474 = 1U;
	static int64_t x475 = INT64_MAX;
	int16_t x476 = INT16_MIN;
	volatile int32_t t52 = -795417;

	t52 = (x473<<((x474/x475)%x476));

	if (t52 != 331) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x485 = 19U;
	volatile int16_t x486 = 0;
	int8_t x487 = -3;
	static volatile uint8_t x488 = 9U;
	int32_t t53 = -3829442;

	t53 = (x485<<((x486/x487)%x488));

	if (t53 != 19) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x505 = 13U;
	int16_t x506 = -1;
	volatile int8_t x507 = 2;
	int32_t t54 = -1;

	t54 = (x505<<((x506/x507)%x508));

	if (t54 != 13) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x517 = INT16_MAX;
	static int16_t x518 = 1827;
	uint64_t x520 = 105734678LLU;
	int32_t t55 = 5;

	t55 = (x517<<((x518/x519)%x520));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x521 = INT16_MAX;
	int64_t x522 = INT64_MAX;
	volatile uint64_t x523 = UINT64_MAX;
	int8_t x524 = 53;
	volatile int32_t t56 = -28046771;

	t56 = (x521<<((x522/x523)%x524));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x529 = 793541377992541LLU;
	int64_t x531 = -120846394155LL;
	volatile uint64_t t57 = 2120662534135006109LLU;

	t57 = (x529<<((x530/x531)%x532));

	if (t57 != 793541377992541LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x545 = 11001130259LLU;
	static uint8_t x546 = 6U;
	static int64_t x547 = INT64_MIN;
	uint64_t t58 = 1257722674546LLU;

	t58 = (x545<<((x546/x547)%x548));

	if (t58 != 11001130259LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x553 = 23U;
	int16_t x554 = INT16_MIN;
	int32_t x555 = 871952985;
	int16_t x556 = INT16_MIN;

	t59 = (x553<<((x554/x555)%x556));

	if (t59 != 23U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x569 = 7417U;
	int8_t x570 = 1;
	uint64_t x571 = UINT64_MAX;
	int8_t x572 = -1;

	t60 = (x569<<((x570/x571)%x572));

	if (t60 != 7417) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x597 = INT32_MAX;
	volatile int8_t x598 = -1;
	int8_t x599 = INT8_MAX;

	t61 = (x597<<((x598/x599)%x600));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x609 = 5U;
	uint32_t x610 = 4U;
	int32_t x611 = -58063006;
	int32_t x612 = -1;
	static volatile uint32_t t62 = 12042U;

	t62 = (x609<<((x610/x611)%x612));

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x617 = 583931562759538726LLU;
	uint8_t x618 = UINT8_MAX;
	int64_t x619 = INT64_MIN;
	static int64_t x620 = 114LL;
	uint64_t t63 = 47398LLU;

	t63 = (x617<<((x618/x619)%x620));

	if (t63 != 583931562759538726LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x693 = INT64_MAX;
	uint32_t x694 = 1U;
	int64_t x695 = INT64_MAX;
	int64_t x696 = 3628781013612860534LL;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x693<<((x694/x695)%x696));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x709 = 1354U;
	int32_t x710 = INT32_MIN;
	volatile uint32_t x711 = UINT32_MAX;
	uint32_t x712 = 15289U;

	t65 = (x709<<((x710/x711)%x712));

	if (t65 != 1354) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x717 = 1535U;
	int32_t x718 = INT32_MIN;
	int64_t x719 = INT64_MIN;
	static volatile uint32_t x720 = 7022U;

	t66 = (x717<<((x718/x719)%x720));

	if (t66 != 1535) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x725 = INT8_MAX;
	static volatile int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	static uint64_t x728 = 2398626862845LLU;
	volatile int32_t t67 = -45;

	t67 = (x725<<((x726/x727)%x728));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x749 = INT32_MAX;
	volatile int8_t x750 = 2;
	uint64_t x751 = UINT64_MAX;
	volatile int32_t t68 = INT32_MAX;

	t68 = (x749<<((x750/x751)%x752));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x753 = 9019218753387LLU;
	int64_t x754 = -1LL;
	int64_t x755 = -5406904018471239LL;
	uint8_t x756 = 1U;
	volatile uint64_t t69 = 1487LLU;

	t69 = (x753<<((x754/x755)%x756));

	if (t69 != 9019218753387LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x757 = 0;
	static int32_t x758 = 0;
	int64_t x759 = 1240LL;
	volatile int32_t t70 = 2247;

	t70 = (x757<<((x758/x759)%x760));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x761 = INT16_MAX;
	volatile uint32_t x762 = UINT32_MAX;
	volatile int64_t x763 = -1LL;
	int16_t x764 = -1;
	int32_t t71 = 67;

	t71 = (x761<<((x762/x763)%x764));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x765 = UINT64_MAX;
	int16_t x766 = INT16_MAX;
	volatile uint32_t x767 = 5492U;
	int64_t x768 = INT64_MIN;
	uint64_t t72 = 3962787LLU;

	t72 = (x765<<((x766/x767)%x768));

	if (t72 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x773 = UINT64_MAX;
	int64_t x774 = INT64_MIN;
	int8_t x776 = INT8_MIN;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x773<<((x774/x775)%x776));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x789 = UINT32_MAX;
	volatile uint8_t x790 = UINT8_MAX;
	volatile int16_t x791 = -1082;
	static int8_t x792 = -30;
	uint32_t t74 = UINT32_MAX;

	t74 = (x789<<((x790/x791)%x792));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x797 = 3330844;
	static volatile int8_t x799 = 2;
	static int8_t x800 = -1;
	volatile int32_t t75 = -328;

	t75 = (x797<<((x798/x799)%x800));

	if (t75 != 3330844) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x821 = 11815U;
	uint16_t x822 = 19431U;
	int64_t x823 = INT64_MAX;
	static uint16_t x824 = 253U;
	volatile int32_t t76 = -3033;

	t76 = (x821<<((x822/x823)%x824));

	if (t76 != 11815) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x827 = INT64_MIN;
	static uint32_t x828 = 557364300U;
	int32_t t77 = -387;

	t77 = (x825<<((x826/x827)%x828));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x830 = 25759U;
	int8_t x831 = INT8_MIN;
	int16_t x832 = INT16_MIN;

	t78 = (x829<<((x830/x831)%x832));

	if (t78 != 177U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x841 = INT32_MAX;
	int16_t x842 = INT16_MAX;
	uint64_t x844 = UINT64_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x841<<((x842/x843)%x844));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x849 = UINT64_MAX;
	static volatile int32_t x850 = -1;
	uint64_t t80 = UINT64_MAX;

	t80 = (x849<<((x850/x851)%x852));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x889 = UINT16_MAX;
	int32_t x890 = 206699;
	volatile int64_t x891 = INT64_MIN;
	uint16_t x892 = 6U;
	volatile int32_t t81 = -36;

	t81 = (x889<<((x890/x891)%x892));

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x901 = INT8_MAX;
	int8_t x902 = -3;
	volatile int32_t x903 = -1;
	static uint8_t x904 = UINT8_MAX;
	static int32_t t82 = -3;

	t82 = (x901<<((x902/x903)%x904));

	if (t82 != 1016) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x909 = 2U;
	uint8_t x912 = 3U;

	t83 = (x909<<((x910/x911)%x912));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x953 = 0;
	int32_t x954 = INT32_MAX;
	uint8_t x955 = 38U;
	int64_t x956 = -1LL;
	volatile int32_t t84 = -3084;

	t84 = (x953<<((x954/x955)%x956));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x961 = 29;
	int8_t x962 = INT8_MIN;
	static int32_t x963 = INT32_MIN;
	int8_t x964 = INT8_MAX;
	volatile int32_t t85 = 985;

	t85 = (x961<<((x962/x963)%x964));

	if (t85 != 29) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x965 = 0U;
	int64_t x966 = -1LL;
	int32_t x968 = INT32_MIN;
	int32_t t86 = -7199352;

	t86 = (x965<<((x966/x967)%x968));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x973 = 151099LL;
	static int16_t x974 = -1;
	static volatile int32_t x975 = INT32_MAX;
	int32_t x976 = INT32_MIN;
	static int64_t t87 = -2194799909LL;

	t87 = (x973<<((x974/x975)%x976));

	if (t87 != 151099LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x993 = INT64_MAX;
	static uint8_t x994 = 0U;
	int8_t x995 = INT8_MAX;
	int8_t x996 = INT8_MAX;
	static int64_t t88 = INT64_MAX;

	t88 = (x993<<((x994/x995)%x996));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x1005 = 1744585;
	static int32_t x1006 = 5;
	int32_t x1007 = INT32_MIN;
	volatile int32_t t89 = 24;

	t89 = (x1005<<((x1006/x1007)%x1008));

	if (t89 != 1744585) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x1010 = -1;
	volatile uint64_t x1012 = UINT64_MAX;
	volatile int32_t t90 = 99;

	t90 = (x1009<<((x1010/x1011)%x1012));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1017 = 14013596;
	uint16_t x1019 = 1283U;
	volatile uint16_t x1020 = 10U;
	int32_t t91 = 1118729;

	t91 = (x1017<<((x1018/x1019)%x1020));

	if (t91 != 14013596) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1037 = UINT8_MAX;
	uint16_t x1038 = 0U;
	static volatile int64_t x1039 = 5154698LL;
	int8_t x1040 = INT8_MIN;

	t92 = (x1037<<((x1038/x1039)%x1040));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1041 = 65;
	uint8_t x1042 = UINT8_MAX;
	int16_t x1043 = INT16_MIN;
	int64_t x1044 = -1LL;
	volatile int32_t t93 = -6590760;

	t93 = (x1041<<((x1042/x1043)%x1044));

	if (t93 != 65) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x1045 = 2;
	volatile uint8_t x1046 = 72U;
	static int16_t x1047 = INT16_MIN;
	static uint8_t x1048 = 58U;

	t94 = (x1045<<((x1046/x1047)%x1048));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1055 = 22103435004LL;
	int8_t x1056 = -1;

	t95 = (x1053<<((x1054/x1055)%x1056));

	if (t95 != 82208126LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x1073 = 10;
	int64_t x1074 = INT64_MIN;
	int16_t x1075 = INT16_MIN;
	int32_t x1076 = -12;
	static int32_t t96 = -429;

	t96 = (x1073<<((x1074/x1075)%x1076));

	if (t96 != 160) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1081 = 179365591U;
	uint32_t x1082 = 3U;
	int64_t x1083 = INT64_MIN;
	int16_t x1084 = INT16_MIN;

	t97 = (x1081<<((x1082/x1083)%x1084));

	if (t97 != 179365591U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x1105 = 5U;
	uint32_t x1107 = 9U;
	volatile int32_t t98 = 630;

	t98 = (x1105<<((x1106/x1107)%x1108));

	if (t98 != 10) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1109 = 3U;
	int32_t x1112 = -1;
	volatile int32_t t99 = 1;

	t99 = (x1109<<((x1110/x1111)%x1112));

	if (t99 != 3) { NG(); } else { ; }
	
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

