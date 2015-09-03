#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x17 = INT32_MAX;
volatile int32_t t2 = 28;
volatile int32_t t3 = 207377014;
volatile int32_t x25 = 371;
int32_t x33 = 7952382;
uint8_t x41 = UINT8_MAX;
volatile int32_t x42 = INT32_MIN;
uint8_t x61 = 3U;
static int16_t x69 = 13;
uint16_t x83 = 8U;
int16_t x98 = -1;
uint8_t x100 = 116U;
volatile int32_t t12 = -3883;
static uint32_t x107 = UINT32_MAX;
int8_t x111 = 20;
uint32_t x124 = UINT32_MAX;
static uint32_t x137 = 14085U;
int8_t x140 = -2;
static uint32_t t17 = 6178U;
int16_t x186 = 1;
volatile int32_t t19 = -63;
int16_t x225 = 0;
static int64_t x227 = INT64_MIN;
static int32_t x232 = INT32_MIN;
volatile uint32_t x249 = 179U;
uint32_t t27 = 336U;
uint64_t t28 = 351937618LLU;
uint32_t x261 = 1U;
uint64_t x264 = 936LLU;
uint32_t t29 = 1019824U;
volatile int64_t x265 = 3348803563107110186LL;
int32_t x268 = INT32_MAX;
static int32_t x272 = 495;
int32_t t31 = 527;
int32_t t32 = -13590;
static volatile int32_t x309 = INT32_MAX;
static uint64_t x337 = 6830435380772278081LLU;
static volatile int16_t x357 = INT16_MAX;
int32_t t40 = 7324361;
volatile int32_t x364 = -813;
volatile int32_t t41 = -189408758;
volatile uint8_t x369 = 117U;
uint8_t x385 = 7U;
uint16_t x387 = 5U;
int32_t x407 = INT32_MAX;
int8_t x409 = INT8_MAX;
int16_t x418 = -257;
uint8_t x424 = 10U;
static volatile uint64_t t53 = 8600553LLU;
volatile uint8_t x446 = 27U;
volatile uint32_t x453 = 1U;
int16_t x455 = INT16_MIN;
int64_t x458 = INT64_MAX;
uint16_t x460 = 9U;
static volatile int32_t t60 = -10;
volatile uint32_t x473 = 46U;
int8_t x476 = INT8_MIN;
int8_t x506 = INT8_MIN;
int32_t x508 = 40146433;
uint64_t x509 = 757308421341793LLU;
volatile uint64_t t66 = 37900LLU;
int8_t x520 = INT8_MAX;
uint8_t x527 = 0U;
static int32_t x528 = 59727064;
volatile int32_t t70 = 338;
int32_t x545 = INT32_MAX;
int64_t x547 = 51512375493LL;
int16_t x548 = -15;
uint32_t x557 = 2U;
volatile int64_t x558 = INT64_MAX;
int8_t x560 = INT8_MIN;
int32_t x563 = INT32_MIN;
volatile int32_t t76 = 62651;
volatile int64_t t77 = -152595192292LL;
int8_t x593 = 3;
volatile int16_t x596 = -120;
static uint32_t x601 = 852U;
static volatile int32_t x605 = 11;
int32_t x607 = 34;
uint16_t x608 = UINT16_MAX;
volatile int32_t t80 = -5529067;
int32_t x622 = INT32_MAX;
uint32_t x633 = UINT32_MAX;
static volatile int16_t x645 = INT16_MAX;
static uint32_t x654 = 230956933U;
int16_t x655 = INT16_MAX;
int16_t x656 = INT16_MIN;
uint8_t x666 = 1U;
uint64_t t87 = 665LLU;
int32_t t89 = 0;
int64_t t90 = -14296285316LL;
int8_t x719 = INT8_MAX;
uint8_t x732 = UINT8_MAX;
uint64_t x735 = 147386905LLU;
static int16_t x753 = 5;
volatile int32_t x754 = -217411;
uint64_t x757 = 7152105LLU;
static int8_t x760 = 1;
static uint64_t x766 = 7484737851594LLU;


void f0(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = -1;
	int32_t x7 = 867;
	volatile int64_t x8 = INT64_MIN;
	volatile int32_t t0 = 1593;

	t0 = (x5>>((x6<x7)<x8));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = INT16_MAX;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = -2497;
	int32_t x12 = INT32_MAX;
	volatile int32_t t1 = -5579;

	t1 = (x9>>((x10<x11)<x12));

	if (t1 != 16383) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t x19 = 0;
	int16_t x20 = 1146;

	t2 = (x17>>((x18<x19)<x20));

	if (t2 != 1073741823) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MAX;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = INT8_MIN;
	int16_t x24 = 6;

	t3 = (x21>>((x22<x23)<x24));

	if (t3 != 16383) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x26 = -533LL;
	int16_t x27 = -1;
	static volatile uint32_t x28 = 1045538650U;
	volatile int32_t t4 = -36453814;

	t4 = (x25>>((x26<x27)<x28));

	if (t4 != 185) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = INT8_MAX;
	int16_t x35 = -126;
	int8_t x36 = 0;
	int32_t t5 = 592;

	t5 = (x33>>((x34<x35)<x36));

	if (t5 != 7952382) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x37 = 3U;
	static volatile uint32_t x38 = 1279U;
	uint32_t x39 = UINT32_MAX;
	int8_t x40 = -1;
	int32_t t6 = 62769;

	t6 = (x37>>((x38<x39)<x40));

	if (t6 != 3) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x43 = 1;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t7 = 6667;

	t7 = (x41>>((x42<x43)<x44));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x62 = INT16_MIN;
	int32_t x63 = -1;
	static uint64_t x64 = 9531957306524LLU;
	volatile int32_t t8 = 449874;

	t8 = (x61>>((x62<x63)<x64));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x70 = -97289812;
	int8_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	int32_t t9 = -1;

	t9 = (x69>>((x70<x71)<x72));

	if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x81 = 348597424U;
	uint8_t x82 = 3U;
	uint8_t x84 = 21U;
	uint32_t t10 = 3359666U;

	t10 = (x81>>((x82<x83)<x84));

	if (t10 != 174298712U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = 1782796LLU;
	int32_t x86 = 15839094;
	volatile uint16_t x87 = 0U;
	volatile int8_t x88 = INT8_MIN;
	uint64_t t11 = 6873409727883LLU;

	t11 = (x85>>((x86<x87)<x88));

	if (t11 != 1782796LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x97 = 16350U;
	static uint64_t x99 = 1LLU;

	t12 = (x97>>((x98<x99)<x100));

	if (t12 != 8175) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x105 = UINT64_MAX;
	static int64_t x106 = 4177577015848041LL;
	int16_t x108 = 4;
	volatile uint64_t t13 = 0LLU;

	t13 = (x105>>((x106<x107)<x108));

	if (t13 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x109 = 2U;
	static int32_t x110 = INT32_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t14 = -654526970;

	t14 = (x109>>((x110<x111)<x112));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x121 = INT8_MAX;
	volatile uint32_t x122 = 12619821U;
	static int64_t x123 = INT64_MAX;
	int32_t t15 = 1296;

	t15 = (x121>>((x122<x123)<x124));

	if (t15 != 63) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x133 = 18581U;
	uint32_t x134 = 19315240U;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MAX;
	int32_t t16 = 0;

	t16 = (x133>>((x134<x135)<x136));

	if (t16 != 9290) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x138 = 1397749529U;
	static volatile int16_t x139 = -1495;

	t17 = (x137>>((x138<x139)<x140));

	if (t17 != 14085U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x145 = 46045908;
	int64_t x146 = 560LL;
	int64_t x147 = INT64_MAX;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t18 = -656138;

	t18 = (x145>>((x146<x147)<x148));

	if (t18 != 46045908) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x185 = 39U;
	int32_t x187 = INT32_MAX;
	int64_t x188 = INT64_MIN;

	t19 = (x185>>((x186<x187)<x188));

	if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x193 = 22;
	int32_t x194 = INT32_MIN;
	int32_t x195 = 215181;
	uint32_t x196 = 4U;
	int32_t t20 = -3901;

	t20 = (x193>>((x194<x195)<x196));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x205 = 814759587LLU;
	volatile uint8_t x206 = 0U;
	int64_t x207 = INT64_MIN;
	static volatile int64_t x208 = 512920889451974LL;
	volatile uint64_t t21 = 343906972LLU;

	t21 = (x205>>((x206<x207)<x208));

	if (t21 != 407379793LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x213 = 3U;
	int8_t x214 = 1;
	int64_t x215 = 33335245869749971LL;
	volatile int64_t x216 = INT64_MAX;
	volatile int32_t t22 = -31556964;

	t22 = (x213>>((x214<x215)<x216));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x221 = UINT32_MAX;
	int16_t x222 = -115;
	volatile int64_t x223 = 1812944237LL;
	static volatile uint32_t x224 = 5161011U;
	volatile uint32_t t23 = 3U;

	t23 = (x221>>((x222<x223)<x224));

	if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x226 = -87;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t24 = -266645651;

	t24 = (x225>>((x226<x227)<x228));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x229 = INT32_MAX;
	int16_t x230 = 18;
	volatile uint32_t x231 = 481753619U;
	volatile int32_t t25 = INT32_MAX;

	t25 = (x229>>((x230<x231)<x232));

	if (t25 != INT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x233 = 4214U;
	static uint32_t x234 = 41U;
	int16_t x235 = -278;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t26 = -1;

	t26 = (x233>>((x234<x235)<x236));

	if (t26 != 4214) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x250 = 6U;
	volatile int32_t x251 = INT32_MAX;
	uint64_t x252 = 127LLU;

	t27 = (x249>>((x250<x251)<x252));

	if (t27 != 89U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x257 = 15LLU;
	uint16_t x258 = 604U;
	static uint32_t x259 = 4485081U;
	static volatile int16_t x260 = -6;

	t28 = (x257>>((x258<x259)<x260));

	if (t28 != 15LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x262 = 75U;
	uint64_t x263 = 7LLU;

	t29 = (x261>>((x262<x263)<x264));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x266 = 46LLU;
	static int8_t x267 = -28;
	static volatile int64_t t30 = -1770464LL;

	t30 = (x265>>((x266<x267)<x268));

	if (t30 != 1674401781553555093LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x269 = INT32_MAX;
	uint8_t x270 = 2U;
	int16_t x271 = -13213;

	t31 = (x269>>((x270<x271)<x272));

	if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x277 = 3094;
	static volatile int64_t x278 = INT64_MIN;
	static int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;

	t32 = (x277>>((x278<x279)<x280));

	if (t32 != 1547) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x281 = UINT64_MAX;
	static int16_t x282 = INT16_MIN;
	uint8_t x283 = 0U;
	uint16_t x284 = UINT16_MAX;
	uint64_t t33 = 248LLU;

	t33 = (x281>>((x282<x283)<x284));

	if (t33 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x293 = INT32_MAX;
	int64_t x294 = -3LL;
	uint64_t x295 = 885607777056872804LLU;
	int8_t x296 = -1;
	static volatile int32_t t34 = INT32_MAX;

	t34 = (x293>>((x294<x295)<x296));

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x310 = 0U;
	uint64_t x311 = 322977LLU;
	int16_t x312 = INT16_MIN;
	int32_t t35 = INT32_MAX;

	t35 = (x309>>((x310<x311)<x312));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x321 = 3538LLU;
	int32_t x322 = -1;
	volatile uint64_t x323 = UINT64_MAX;
	int32_t x324 = 20;
	uint64_t t36 = 110646LLU;

	t36 = (x321>>((x322<x323)<x324));

	if (t36 != 1769LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x329 = 106546305999LLU;
	volatile int64_t x330 = INT64_MIN;
	uint16_t x331 = 518U;
	static int8_t x332 = -1;
	volatile uint64_t t37 = 7155481279384LLU;

	t37 = (x329>>((x330<x331)<x332));

	if (t37 != 106546305999LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x338 = INT16_MAX;
	uint64_t x339 = 654787305437LLU;
	int8_t x340 = -1;
	volatile uint64_t t38 = 141LLU;

	t38 = (x337>>((x338<x339)<x340));

	if (t38 != 6830435380772278081LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x341 = 939653323279LLU;
	uint16_t x342 = 0U;
	static uint64_t x343 = 538258838967887LLU;
	int8_t x344 = INT8_MIN;
	uint64_t t39 = 986994325LLU;

	t39 = (x341>>((x342<x343)<x344));

	if (t39 != 939653323279LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x358 = 1;
	int8_t x359 = INT8_MIN;
	int8_t x360 = INT8_MIN;

	t40 = (x357>>((x358<x359)<x360));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x361 = 1;
	uint64_t x362 = 1490148219701LLU;
	uint8_t x363 = 41U;

	t41 = (x361>>((x362<x363)<x364));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x370 = INT16_MAX;
	int32_t x371 = INT32_MIN;
	static volatile uint16_t x372 = 1U;
	static int32_t t42 = -126098;

	t42 = (x369>>((x370<x371)<x372));

	if (t42 != 58) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x373 = 482344738U;
	int8_t x374 = INT8_MIN;
	int64_t x375 = -1LL;
	uint32_t x376 = 5435U;
	volatile uint32_t t43 = 866032496U;

	t43 = (x373>>((x374<x375)<x376));

	if (t43 != 241172369U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x377 = 81182888U;
	uint8_t x378 = 16U;
	int16_t x379 = INT16_MIN;
	static int16_t x380 = INT16_MAX;
	uint32_t t44 = 51663018U;

	t44 = (x377>>((x378<x379)<x380));

	if (t44 != 40591444U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x386 = INT16_MAX;
	static int64_t x388 = -75898299LL;
	int32_t t45 = 0;

	t45 = (x385>>((x386<x387)<x388));

	if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = INT64_MIN;
	uint32_t x391 = 202554669U;
	int64_t x392 = -1LL;
	uint32_t t46 = UINT32_MAX;

	t46 = (x389>>((x390<x391)<x392));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x393 = 126U;
	int64_t x394 = 268843585281LL;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 1;
	volatile int32_t t47 = -106741734;

	t47 = (x393>>((x394<x395)<x396));

	if (t47 != 63) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x405 = 12U;
	volatile int64_t x406 = -1LL;
	static int16_t x408 = 893;
	int32_t t48 = 1334748;

	t48 = (x405>>((x406<x407)<x408));

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x410 = UINT16_MAX;
	static int32_t x411 = INT32_MAX;
	int8_t x412 = INT8_MIN;
	static volatile int32_t t49 = -64991852;

	t49 = (x409>>((x410<x411)<x412));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x413 = 2U;
	int8_t x414 = -1;
	uint16_t x415 = UINT16_MAX;
	uint8_t x416 = 0U;
	int32_t t50 = 48;

	t50 = (x413>>((x414<x415)<x416));

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x417 = 18U;
	static int8_t x419 = 11;
	uint32_t x420 = 40278U;
	int32_t t51 = -825097501;

	t51 = (x417>>((x418<x419)<x420));

	if (t51 != 9) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x421 = 0;
	volatile int64_t x422 = INT64_MIN;
	volatile uint64_t x423 = 20557254LLU;
	int32_t t52 = -29899;

	t52 = (x421>>((x422<x423)<x424));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x425 = 132240341576456898LLU;
	static int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MIN;
	int8_t x428 = 7;

	t53 = (x425>>((x426<x427)<x428));

	if (t53 != 66120170788228449LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x429 = 0;
	int8_t x430 = 0;
	int32_t x431 = -1;
	uint64_t x432 = 40350294830621749LLU;
	int32_t t54 = -26;

	t54 = (x429>>((x430<x431)<x432));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x441 = 5;
	volatile int16_t x442 = -2;
	static int32_t x443 = -1;
	int16_t x444 = INT16_MIN;
	volatile int32_t t55 = 1;

	t55 = (x441>>((x442<x443)<x444));

	if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x445 = 2204;
	static uint8_t x447 = 3U;
	static volatile uint32_t x448 = 2101810U;
	volatile int32_t t56 = -33;

	t56 = (x445>>((x446<x447)<x448));

	if (t56 != 1102) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x449 = 5U;
	int16_t x450 = 9;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = 196449326832539781LLU;
	uint32_t t57 = 286972960U;

	t57 = (x449>>((x450<x451)<x452));

	if (t57 != 2U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x454 = 16132U;
	static int32_t x456 = INT32_MIN;
	static uint32_t t58 = 179135264U;

	t58 = (x453>>((x454<x455)<x456));

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x457 = UINT32_MAX;
	volatile int8_t x459 = -1;
	volatile uint32_t t59 = 9221522U;

	t59 = (x457>>((x458<x459)<x460));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x461 = 1U;
	int8_t x462 = 58;
	int64_t x463 = INT64_MAX;
	int32_t x464 = INT32_MIN;

	t60 = (x461>>((x462<x463)<x464));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x474 = INT32_MAX;
	uint32_t x475 = UINT32_MAX;
	uint32_t t61 = 460655U;

	t61 = (x473>>((x474<x475)<x476));

	if (t61 != 46U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x481 = 431808066640392LL;
	static int16_t x482 = INT16_MIN;
	int64_t x483 = 4076565997247LL;
	int8_t x484 = INT8_MIN;
	static int64_t t62 = -1112600LL;

	t62 = (x481>>((x482<x483)<x484));

	if (t62 != 431808066640392LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x485 = 236;
	int8_t x486 = 0;
	int16_t x487 = INT16_MIN;
	static uint64_t x488 = 5548541LLU;
	volatile int32_t t63 = 4;

	t63 = (x485>>((x486<x487)<x488));

	if (t63 != 118) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x497 = 119U;
	static int64_t x498 = INT64_MAX;
	int8_t x499 = INT8_MIN;
	int32_t x500 = -1;
	int32_t t64 = -130506;

	t64 = (x497>>((x498<x499)<x500));

	if (t64 != 119) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x505 = UINT16_MAX;
	uint64_t x507 = UINT64_MAX;
	volatile int32_t t65 = -250500298;

	t65 = (x505>>((x506<x507)<x508));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x510 = 0U;
	static uint32_t x511 = 3181U;
	volatile uint64_t x512 = UINT64_MAX;

	t66 = (x509>>((x510<x511)<x512));

	if (t66 != 378654210670896LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x517 = 1630U;
	int16_t x518 = INT16_MAX;
	volatile int64_t x519 = -6LL;
	static int32_t t67 = -2056353;

	t67 = (x517>>((x518<x519)<x520));

	if (t67 != 815) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x521 = UINT64_MAX;
	int32_t x522 = -1;
	uint32_t x523 = 5206U;
	int8_t x524 = -12;
	uint64_t t68 = UINT64_MAX;

	t68 = (x521>>((x522<x523)<x524));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x525 = 1U;
	int16_t x526 = -6;
	volatile int32_t t69 = 128;

	t69 = (x525>>((x526<x527)<x528));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x533 = 1U;
	uint16_t x534 = UINT16_MAX;
	static int64_t x535 = INT64_MIN;
	int64_t x536 = 73534595201730LL;

	t70 = (x533>>((x534<x535)<x536));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x541 = 63;
	volatile uint16_t x542 = 37U;
	static volatile int8_t x543 = -1;
	int64_t x544 = INT64_MIN;
	int32_t t71 = 1860;

	t71 = (x541>>((x542<x543)<x544));

	if (t71 != 63) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x546 = INT16_MIN;
	volatile int32_t t72 = INT32_MAX;

	t72 = (x545>>((x546<x547)<x548));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x559 = UINT16_MAX;
	uint32_t t73 = 6651U;

	t73 = (x557>>((x558<x559)<x560));

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x561 = 648;
	uint8_t x562 = 0U;
	int64_t x564 = INT64_MIN;
	static volatile int32_t t74 = -897703381;

	t74 = (x561>>((x562<x563)<x564));

	if (t74 != 648) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x565 = 1031995506374688806LLU;
	volatile int8_t x566 = INT8_MIN;
	static uint16_t x567 = UINT16_MAX;
	volatile uint64_t x568 = UINT64_MAX;
	uint64_t t75 = 1604193227611569763LLU;

	t75 = (x565>>((x566<x567)<x568));

	if (t75 != 515997753187344403LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint8_t x585 = UINT8_MAX;
	volatile uint16_t x586 = 1809U;
	int16_t x587 = INT16_MIN;
	uint32_t x588 = UINT32_MAX;

	t76 = (x585>>((x586<x587)<x588));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x589 = 6690754266883LL;
	uint32_t x590 = 60U;
	int64_t x591 = -1LL;
	int64_t x592 = INT64_MIN;

	t77 = (x589>>((x590<x591)<x592));

	if (t77 != 6690754266883LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x594 = INT8_MIN;
	uint64_t x595 = 474877202511471290LLU;
	volatile int32_t t78 = -12453165;

	t78 = (x593>>((x594<x595)<x596));

	if (t78 != 3) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x602 = 73U;
	uint16_t x603 = UINT16_MAX;
	int32_t x604 = 242;
	uint32_t t79 = 1296U;

	t79 = (x601>>((x602<x603)<x604));

	if (t79 != 426U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x606 = -1;

	t80 = (x605>>((x606<x607)<x608));

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x613 = 0;
	int32_t x614 = INT32_MAX;
	int8_t x615 = INT8_MIN;
	static uint8_t x616 = 2U;
	volatile int32_t t81 = 921803;

	t81 = (x613>>((x614<x615)<x616));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x621 = INT8_MAX;
	static uint8_t x623 = 2U;
	int16_t x624 = 662;
	int32_t t82 = 17437538;

	t82 = (x621>>((x622<x623)<x624));

	if (t82 != 63) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x634 = 135268612;
	static int16_t x635 = -1;
	int8_t x636 = -3;
	static uint32_t t83 = UINT32_MAX;

	t83 = (x633>>((x634<x635)<x636));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x646 = INT16_MIN;
	static uint16_t x647 = 16U;
	uint16_t x648 = 1U;
	static int32_t t84 = -150908;

	t84 = (x645>>((x646<x647)<x648));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x653 = UINT32_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (x653>>((x654<x655)<x656));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x661 = 9U;
	uint8_t x662 = 2U;
	int16_t x663 = -1;
	int8_t x664 = INT8_MIN;
	volatile int32_t t86 = -1792289;

	t86 = (x661>>((x662<x663)<x664));

	if (t86 != 9) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x665 = 114448519139069857LLU;
	uint16_t x667 = 0U;
	static int8_t x668 = INT8_MAX;

	t87 = (x665>>((x666<x667)<x668));

	if (t87 != 57224259569534928LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x677 = 476247U;
	uint32_t x678 = 40001U;
	volatile int8_t x679 = INT8_MIN;
	int32_t x680 = INT32_MIN;
	uint32_t t88 = 1527868U;

	t88 = (x677>>((x678<x679)<x680));

	if (t88 != 476247U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x681 = INT32_MAX;
	int64_t x682 = -1LL;
	int8_t x683 = INT8_MAX;
	volatile uint16_t x684 = UINT16_MAX;

	t89 = (x681>>((x682<x683)<x684));

	if (t89 != 1073741823) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x701 = 74909621815202542LL;
	volatile int32_t x702 = INT32_MAX;
	uint32_t x703 = 112U;
	uint16_t x704 = 7842U;

	t90 = (x701>>((x702<x703)<x704));

	if (t90 != 37454810907601271LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint32_t x705 = 719U;
	int16_t x706 = 220;
	int64_t x707 = 1396084746777572230LL;
	static int8_t x708 = -1;
	volatile uint32_t t91 = 645997149U;

	t91 = (x705>>((x706<x707)<x708));

	if (t91 != 719U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x717 = UINT16_MAX;
	static int16_t x718 = -1;
	int32_t x720 = -1;
	int32_t t92 = 23309;

	t92 = (x717>>((x718<x719)<x720));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x721 = 7789121495456363LLU;
	int32_t x722 = -1;
	int32_t x723 = 872546015;
	static int32_t x724 = 230650;
	uint64_t t93 = 1LLU;

	t93 = (x721>>((x722<x723)<x724));

	if (t93 != 3894560747728181LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x729 = UINT32_MAX;
	int8_t x730 = INT8_MIN;
	int64_t x731 = -1LL;
	uint32_t t94 = 29U;

	t94 = (x729>>((x730<x731)<x732));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x733 = INT64_MAX;
	uint8_t x734 = 3U;
	uint64_t x736 = 564138417242857LLU;
	volatile int64_t t95 = 14732LL;

	t95 = (x733>>((x734<x735)<x736));

	if (t95 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x755 = -1371;
	uint64_t x756 = 266LLU;
	volatile int32_t t96 = -4321320;

	t96 = (x753>>((x754<x755)<x756));

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x758 = -47;
	uint64_t x759 = 304LLU;
	uint64_t t97 = 30421728LLU;

	t97 = (x757>>((x758<x759)<x760));

	if (t97 != 3576052LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x761 = UINT16_MAX;
	static uint8_t x762 = UINT8_MAX;
	int8_t x763 = 7;
	int64_t x764 = INT64_MAX;
	static int32_t t98 = 564932;

	t98 = (x761>>((x762<x763)<x764));

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x765 = UINT32_MAX;
	static uint32_t x767 = UINT32_MAX;
	int8_t x768 = -6;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (x765>>((x766<x767)<x768));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

