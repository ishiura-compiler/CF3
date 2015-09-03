#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x6 = 0U;
volatile int8_t x26 = INT8_MIN;
int64_t x38 = -80568521432LL;
static int16_t x43 = INT16_MIN;
int32_t t4 = 33356567;
int64_t x46 = INT64_MAX;
int64_t x54 = 234209LL;
uint16_t x65 = 8U;
int32_t t9 = -8384586;
volatile uint8_t x77 = UINT8_MAX;
uint32_t x81 = UINT32_MAX;
int16_t x119 = INT16_MIN;
int16_t x146 = -1;
uint8_t x162 = 1U;
uint32_t x194 = 3U;
int32_t x195 = -1;
volatile int32_t t21 = 1536787;
static volatile uint16_t x201 = UINT16_MAX;
int16_t x202 = INT16_MIN;
int32_t x225 = 140368421;
static volatile int32_t t24 = -14;
uint64_t t25 = 5479512170LLU;
uint8_t x275 = 1U;
volatile uint32_t t26 = 2U;
uint32_t x277 = UINT32_MAX;
int8_t x282 = INT8_MIN;
volatile uint32_t t28 = 25135014U;
volatile uint64_t x313 = UINT64_MAX;
int32_t x324 = INT32_MAX;
uint64_t x331 = UINT64_MAX;
static volatile int16_t x332 = INT16_MIN;
uint64_t x333 = UINT64_MAX;
uint32_t x334 = 718758U;
uint16_t x342 = 155U;
int16_t x345 = 15024;
int8_t x358 = INT8_MIN;
int64_t t41 = 10983LL;
volatile uint32_t x387 = UINT32_MAX;
volatile uint32_t t43 = 86U;
int64_t x395 = -1LL;
int8_t x396 = INT8_MIN;
volatile int32_t t44 = 3;
volatile int16_t x412 = -841;
static uint8_t x417 = 6U;
int8_t x418 = -1;
uint8_t x421 = UINT8_MAX;
int64_t x423 = -8108LL;
static uint16_t x441 = 9101U;
volatile uint16_t x443 = UINT16_MAX;
uint32_t x445 = 15429U;
int16_t x446 = -4406;
int64_t x456 = INT64_MIN;
int32_t t52 = -58473103;
static int16_t x458 = -3;
volatile int16_t x470 = INT16_MIN;
int8_t x483 = -1;
static uint64_t t56 = 24383771483128LLU;
static int8_t x490 = 18;
int32_t t57 = 3180;
volatile uint32_t x497 = UINT32_MAX;
static volatile int32_t t60 = 13134;
uint32_t x557 = UINT32_MAX;
static int16_t x581 = 48;
volatile uint8_t x583 = 0U;
volatile int32_t t64 = 1161;
volatile uint8_t x585 = 6U;
uint8_t x588 = 41U;
int8_t x595 = INT8_MAX;
volatile uint32_t t66 = 1007058422U;
int8_t x607 = -3;
uint32_t t70 = 2U;
int64_t x628 = INT64_MIN;
uint64_t x632 = 4089984LLU;
int32_t t72 = 208646;
int16_t x640 = INT16_MIN;
volatile int32_t x647 = -43172143;
static uint16_t x648 = 10U;
int16_t x663 = INT16_MIN;
uint16_t x673 = UINT16_MAX;
volatile int16_t x674 = -1;
volatile int8_t x677 = 10;
volatile int32_t t78 = -5009230;
volatile int8_t x692 = -1;
static volatile int64_t x714 = 879238133140LL;
int32_t x731 = 83;
int8_t x732 = INT8_MIN;
static volatile int16_t x735 = 1743;
volatile int64_t x743 = 32983859659566LL;
int8_t x750 = 0;
int64_t x757 = INT64_MAX;
int16_t x758 = INT16_MIN;
int64_t x782 = -1LL;
uint8_t x785 = UINT8_MAX;
int32_t x786 = INT32_MIN;
uint64_t x787 = 210287LLU;
int16_t x801 = 12;
volatile int32_t x820 = INT32_MIN;
int32_t t96 = 1173006;
static int16_t x827 = INT16_MIN;
uint64_t t98 = 3954880246685LLU;


void f0(void) {
	volatile int32_t x5 = 186601402;
	uint32_t x7 = UINT32_MAX;
	static int8_t x8 = -18;
	int32_t t0 = -3796;

	t0 = (x5<<((x6+x7)<x8));

	if (t0 != 186601402) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 5776U;
	uint32_t x18 = UINT32_MAX;
	volatile uint8_t x19 = 2U;
	int32_t x20 = -623556;
	int32_t t1 = 503171;

	t1 = (x17<<((x18+x19)<x20));

	if (t1 != 11552) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = 12;
	uint8_t x27 = 0U;
	int64_t x28 = 15146177938468255LL;
	int32_t t2 = -31868133;

	t2 = (x25<<((x26+x27)<x28));

	if (t2 != 24) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x37 = UINT64_MAX;
	static int32_t x39 = 39318;
	uint8_t x40 = 25U;
	uint64_t t3 = 845179185LLU;

	t3 = (x37<<((x38+x39)<x40));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x41 = UINT16_MAX;
	int64_t x42 = -1LL;
	uint16_t x44 = 763U;

	t4 = (x41<<((x42+x43)<x44));

	if (t4 != 131070) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x45 = UINT32_MAX;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint16_t x48 = 1U;
	uint32_t t5 = UINT32_MAX;

	t5 = (x45<<((x46+x47)<x48));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = 0U;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int8_t x51 = -1;
	static uint16_t x52 = 1348U;
	int32_t t6 = -4110832;

	t6 = (x49<<((x50+x51)<x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 68185471989557LLU;
	int32_t x55 = INT32_MIN;
	volatile int32_t x56 = INT32_MAX;
	uint64_t t7 = 1956LLU;

	t7 = (x53<<((x54+x55)<x56));

	if (t7 != 136370943979114LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x61 = UINT8_MAX;
	int64_t x62 = -4163LL;
	int64_t x63 = 162918624427267276LL;
	int8_t x64 = -1;
	int32_t t8 = 7;

	t8 = (x61<<((x62+x63)<x64));

	if (t8 != 255) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x66 = -22;
	uint8_t x67 = UINT8_MAX;
	volatile int64_t x68 = -2341642431817LL;

	t9 = (x65<<((x66+x67)<x68));

	if (t9 != 8) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x69 = UINT8_MAX;
	volatile uint32_t x70 = UINT32_MAX;
	volatile int32_t x71 = -3;
	uint16_t x72 = 2789U;
	volatile int32_t t10 = 84478335;

	t10 = (x69<<((x70+x71)<x72));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x78 = -1LL;
	int64_t x79 = -1LL;
	int64_t x80 = -209766961LL;
	volatile int32_t t11 = 3;

	t11 = (x77<<((x78+x79)<x80));

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x82 = 2805;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = -1;
	static uint32_t t12 = 8733141U;

	t12 = (x81<<((x82+x83)<x84));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x89 = 12U;
	volatile int32_t x90 = INT32_MIN;
	uint64_t x91 = UINT64_MAX;
	int8_t x92 = 1;
	int32_t t13 = 3;

	t13 = (x89<<((x90+x91)<x92));

	if (t13 != 12) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x113 = 197U;
	volatile uint8_t x114 = 1U;
	int32_t x115 = INT32_MIN;
	int16_t x116 = INT16_MIN;
	int32_t t14 = -63575275;

	t14 = (x113<<((x114+x115)<x116));

	if (t14 != 394) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x117 = 20774U;
	int8_t x118 = INT8_MAX;
	int32_t x120 = INT32_MAX;
	volatile int32_t t15 = 993435;

	t15 = (x117<<((x118+x119)<x120));

	if (t15 != 41548) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x125 = 5U;
	int8_t x126 = 1;
	int64_t x127 = INT64_MIN;
	uint32_t x128 = 1190U;
	static int32_t t16 = 36;

	t16 = (x125<<((x126+x127)<x128));

	if (t16 != 10) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x137 = 1;
	int64_t x138 = -55307683817LL;
	int16_t x139 = -1;
	int8_t x140 = INT8_MIN;
	int32_t t17 = -1238;

	t17 = (x137<<((x138+x139)<x140));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x145 = UINT8_MAX;
	static uint64_t x147 = 1624LLU;
	static volatile int64_t x148 = INT64_MIN;
	static volatile int32_t t18 = 108427123;

	t18 = (x145<<((x146+x147)<x148));

	if (t18 != 510) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x161 = INT16_MAX;
	int64_t x163 = INT64_MIN;
	uint64_t x164 = UINT64_MAX;
	int32_t t19 = -48398;

	t19 = (x161<<((x162+x163)<x164));

	if (t19 != 65534) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x165 = 0;
	uint32_t x166 = UINT32_MAX;
	static uint8_t x167 = 7U;
	int64_t x168 = 1944007LL;
	int32_t t20 = -1;

	t20 = (x165<<((x166+x167)<x168));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x193 = 30U;
	static int16_t x196 = INT16_MIN;

	t21 = (x193<<((x194+x195)<x196));

	if (t21 != 60) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x203 = 0;
	int64_t x204 = 232LL;
	int32_t t22 = -11025213;

	t22 = (x201<<((x202+x203)<x204));

	if (t22 != 131070) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x205 = 4383392U;
	static volatile int32_t x206 = -1;
	static int64_t x207 = INT64_MAX;
	uint64_t x208 = 688192533860594914LLU;
	volatile uint32_t t23 = 125034084U;

	t23 = (x205<<((x206+x207)<x208));

	if (t23 != 4383392U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x226 = 262500283U;
	uint16_t x227 = 7U;
	static int16_t x228 = 2045;

	t24 = (x225<<((x226+x227)<x228));

	if (t24 != 140368421) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x269 = 5948371698134196LLU;
	int32_t x270 = INT32_MIN;
	static uint64_t x271 = UINT64_MAX;
	int64_t x272 = -234LL;

	t25 = (x269<<((x270+x271)<x272));

	if (t25 != 11896743396268392LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x273 = 23393597U;
	int64_t x274 = INT64_MIN;
	uint32_t x276 = 15684810U;

	t26 = (x273<<((x274+x275)<x276));

	if (t26 != 46787194U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x278 = INT8_MAX;
	int16_t x279 = INT16_MIN;
	static int32_t x280 = -577753967;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x277<<((x278+x279)<x280));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x281 = 5799U;
	static int8_t x283 = INT8_MIN;
	int64_t x284 = -91LL;

	t28 = (x281<<((x282+x283)<x284));

	if (t28 != 11598U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x285 = 4050562U;
	int64_t x286 = -1LL;
	int32_t x287 = -43;
	uint16_t x288 = UINT16_MAX;
	uint32_t t29 = 410781U;

	t29 = (x285<<((x286+x287)<x288));

	if (t29 != 8101124U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x289 = 2697;
	static int32_t x290 = 103746046;
	static volatile int32_t x291 = INT32_MIN;
	static volatile uint8_t x292 = UINT8_MAX;
	int32_t t30 = -3505;

	t30 = (x289<<((x290+x291)<x292));

	if (t30 != 5394) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x297 = 1216998527LL;
	int64_t x298 = -195056194295LL;
	static volatile uint32_t x299 = 5906U;
	volatile uint32_t x300 = UINT32_MAX;
	static volatile int64_t t31 = 41970LL;

	t31 = (x297<<((x298+x299)<x300));

	if (t31 != 2433997054LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x301 = INT8_MAX;
	int64_t x302 = INT64_MIN;
	uint64_t x303 = UINT64_MAX;
	int8_t x304 = -1;
	volatile int32_t t32 = -5331;

	t32 = (x301<<((x302+x303)<x304));

	if (t32 != 254) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = 29257076U;
	int16_t x316 = -1;
	uint64_t t33 = 9357548297LLU;

	t33 = (x313<<((x314+x315)<x316));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x321 = 4285372452079196LLU;
	uint8_t x322 = UINT8_MAX;
	int16_t x323 = 14508;
	static volatile uint64_t t34 = 587232835365277LLU;

	t34 = (x321<<((x322+x323)<x324));

	if (t34 != 8570744904158392LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x329 = 15U;
	uint32_t x330 = 222609U;
	static volatile uint32_t t35 = 5472649U;

	t35 = (x329<<((x330+x331)<x332));

	if (t35 != 30U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x335 = 4074451836245770835LLU;
	int32_t x336 = INT32_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (x333<<((x334+x335)<x336));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x341 = 15U;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 35U;
	int32_t t37 = -19206807;

	t37 = (x341<<((x342+x343)<x344));

	if (t37 != 30) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x346 = UINT32_MAX;
	int16_t x347 = INT16_MIN;
	uint16_t x348 = 861U;
	volatile int32_t t38 = -1;

	t38 = (x345<<((x346+x347)<x348));

	if (t38 != 15024) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x349 = INT32_MAX;
	static uint8_t x350 = 13U;
	static volatile uint16_t x351 = UINT16_MAX;
	int8_t x352 = -1;
	int32_t t39 = INT32_MAX;

	t39 = (x349<<((x350+x351)<x352));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x357 = 32044517133LLU;
	static int8_t x359 = -10;
	int32_t x360 = 7978559;
	volatile uint64_t t40 = 25970403153916LLU;

	t40 = (x357<<((x358+x359)<x360));

	if (t40 != 64089034266LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x361 = 772212LL;
	int16_t x362 = -25;
	uint8_t x363 = 4U;
	uint64_t x364 = UINT64_MAX;

	t41 = (x361<<((x362+x363)<x364));

	if (t41 != 1544424LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x373 = 6571343U;
	int16_t x374 = INT16_MAX;
	int16_t x375 = INT16_MIN;
	volatile int8_t x376 = -58;
	uint32_t t42 = 15U;

	t42 = (x373<<((x374+x375)<x376));

	if (t42 != 6571343U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x385 = 341U;
	static uint16_t x386 = UINT16_MAX;
	volatile uint8_t x388 = 9U;

	t43 = (x385<<((x386+x387)<x388));

	if (t43 != 341U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x393 = INT16_MAX;
	volatile int64_t x394 = INT64_MAX;

	t44 = (x393<<((x394+x395)<x396));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x409 = 185U;
	volatile int32_t x410 = 24975880;
	uint32_t x411 = 3575U;
	uint32_t t45 = 700U;

	t45 = (x409<<((x410+x411)<x412));

	if (t45 != 370U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x419 = 2983944U;
	int8_t x420 = INT8_MIN;
	int32_t t46 = -41226;

	t46 = (x417<<((x418+x419)<x420));

	if (t46 != 12) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x422 = 0;
	static int8_t x424 = INT8_MAX;
	int32_t t47 = 24239180;

	t47 = (x421<<((x422+x423)<x424));

	if (t47 != 510) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x429 = INT16_MAX;
	static int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	uint8_t x432 = 0U;
	int32_t t48 = 107973;

	t48 = (x429<<((x430+x431)<x432));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x442 = UINT64_MAX;
	static uint32_t x444 = 14196852U;
	static int32_t t49 = 1;

	t49 = (x441<<((x442+x443)<x444));

	if (t49 != 18202) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x447 = 1U;
	int64_t x448 = INT64_MIN;
	volatile uint32_t t50 = 2313218U;

	t50 = (x445<<((x446+x447)<x448));

	if (t50 != 15429U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x449 = 83618;
	static int8_t x450 = INT8_MIN;
	int16_t x451 = INT16_MIN;
	static int16_t x452 = INT16_MAX;
	volatile int32_t t51 = 470;

	t51 = (x449<<((x450+x451)<x452));

	if (t51 != 167236) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x453 = 4U;
	int32_t x454 = INT32_MAX;
	volatile int32_t x455 = INT32_MIN;

	t52 = (x453<<((x454+x455)<x456));

	if (t52 != 4) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x457 = 20U;
	uint8_t x459 = 61U;
	static int32_t x460 = -5696;
	volatile int32_t t53 = -3356;

	t53 = (x457<<((x458+x459)<x460));

	if (t53 != 20) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x461 = 3216;
	static int64_t x462 = INT64_MAX;
	int32_t x463 = INT32_MIN;
	volatile uint8_t x464 = 27U;
	int32_t t54 = -222;

	t54 = (x461<<((x462+x463)<x464));

	if (t54 != 3216) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x469 = 0U;
	volatile int8_t x471 = INT8_MAX;
	int16_t x472 = INT16_MIN;
	volatile uint32_t t55 = 0U;

	t55 = (x469<<((x470+x471)<x472));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x481 = UINT64_MAX;
	int64_t x482 = -519719LL;
	uint8_t x484 = 11U;

	t56 = (x481<<((x482+x483)<x484));

	if (t56 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x489 = UINT16_MAX;
	int16_t x491 = -1;
	int16_t x492 = INT16_MAX;

	t57 = (x489<<((x490+x491)<x492));

	if (t57 != 131070) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x498 = 3646008984615LLU;
	static int64_t x499 = INT64_MIN;
	int64_t x500 = INT64_MIN;
	uint32_t t58 = UINT32_MAX;

	t58 = (x497<<((x498+x499)<x500));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x509 = 1700777465U;
	int16_t x510 = -1;
	volatile int16_t x511 = INT16_MIN;
	int32_t x512 = -1;
	static volatile uint32_t t59 = 411U;

	t59 = (x509<<((x510+x511)<x512));

	if (t59 != 3401554930U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x537 = 17;
	uint8_t x538 = 13U;
	volatile int64_t x539 = -1LL;
	uint16_t x540 = 1781U;

	t60 = (x537<<((x538+x539)<x540));

	if (t60 != 34) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x553 = 1U;
	uint32_t x554 = UINT32_MAX;
	volatile uint16_t x555 = 20U;
	int8_t x556 = 4;
	int32_t t61 = -50745;

	t61 = (x553<<((x554+x555)<x556));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x558 = INT8_MIN;
	int32_t x559 = 0;
	int32_t x560 = INT32_MIN;
	static uint32_t t62 = UINT32_MAX;

	t62 = (x557<<((x558+x559)<x560));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x561 = 1U;
	uint8_t x562 = 29U;
	uint8_t x563 = 1U;
	static int16_t x564 = INT16_MIN;
	uint32_t t63 = 21693320U;

	t63 = (x561<<((x562+x563)<x564));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x582 = UINT8_MAX;
	uint64_t x584 = 34907444LLU;

	t64 = (x581<<((x582+x583)<x584));

	if (t64 != 96) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x586 = 22U;
	int32_t x587 = 443321184;
	static int32_t t65 = -20;

	t65 = (x585<<((x586+x587)<x588));

	if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x593 = UINT32_MAX;
	static uint8_t x594 = 17U;
	uint32_t x596 = 37147431U;

	t66 = (x593<<((x594+x595)<x596));

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x605 = 682830798LL;
	int8_t x606 = -50;
	uint16_t x608 = 20U;
	volatile int64_t t67 = 22LL;

	t67 = (x605<<((x606+x607)<x608));

	if (t67 != 1365661596LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x609 = UINT32_MAX;
	volatile uint16_t x610 = 1U;
	volatile uint32_t x611 = UINT32_MAX;
	volatile int32_t x612 = INT32_MAX;
	uint32_t t68 = 37456U;

	t68 = (x609<<((x610+x611)<x612));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x613 = 122;
	static int8_t x614 = INT8_MAX;
	int64_t x615 = -1LL;
	static uint32_t x616 = 16947020U;
	volatile int32_t t69 = 86;

	t69 = (x613<<((x614+x615)<x616));

	if (t69 != 244) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x617 = UINT32_MAX;
	volatile int16_t x618 = -13;
	int8_t x619 = -10;
	uint32_t x620 = UINT32_MAX;

	t70 = (x617<<((x618+x619)<x620));

	if (t70 != 4294967294U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x625 = 1430542857150LLU;
	static volatile uint32_t x626 = UINT32_MAX;
	int64_t x627 = INT64_MIN;
	static volatile uint64_t t71 = 3409846782LLU;

	t71 = (x625<<((x626+x627)<x628));

	if (t71 != 1430542857150LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x629 = 62U;
	static int16_t x630 = INT16_MIN;
	int16_t x631 = INT16_MIN;

	t72 = (x629<<((x630+x631)<x632));

	if (t72 != 62) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x637 = 303188LL;
	uint8_t x638 = 0U;
	volatile uint8_t x639 = 42U;
	volatile int64_t t73 = -4622558947620LL;

	t73 = (x637<<((x638+x639)<x640));

	if (t73 != 303188LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x645 = UINT64_MAX;
	volatile int16_t x646 = INT16_MAX;
	uint64_t t74 = 258478022607345LLU;

	t74 = (x645<<((x646+x647)<x648));

	if (t74 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x657 = 4U;
	int16_t x658 = INT16_MIN;
	int16_t x659 = -29;
	int8_t x660 = INT8_MAX;
	volatile uint32_t t75 = 117808U;

	t75 = (x657<<((x658+x659)<x660));

	if (t75 != 8U) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x661 = 82U;
	volatile int16_t x662 = -1;
	volatile int8_t x664 = -32;
	static volatile uint32_t t76 = 347U;

	t76 = (x661<<((x662+x663)<x664));

	if (t76 != 164U) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x675 = -1LL;
	uint32_t x676 = 64U;
	static volatile int32_t t77 = 899;

	t77 = (x673<<((x674+x675)<x676));

	if (t77 != 131070) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x678 = INT32_MIN;
	static int64_t x679 = -1LL;
	static uint16_t x680 = UINT16_MAX;

	t78 = (x677<<((x678+x679)<x680));

	if (t78 != 20) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x689 = 101033362936217980LLU;
	int64_t x690 = -1935304421799185032LL;
	int16_t x691 = INT16_MIN;
	uint64_t t79 = 275LLU;

	t79 = (x689<<((x690+x691)<x692));

	if (t79 != 202066725872435960LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x713 = 61U;
	uint16_t x715 = 17U;
	volatile int64_t x716 = -136148646444952LL;
	volatile int32_t t80 = -51;

	t80 = (x713<<((x714+x715)<x716));

	if (t80 != 61) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x725 = 2LLU;
	static int8_t x726 = -1;
	uint16_t x727 = 390U;
	uint8_t x728 = 27U;
	uint64_t t81 = 4LLU;

	t81 = (x725<<((x726+x727)<x728));

	if (t81 != 2LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint16_t x729 = UINT16_MAX;
	static int32_t x730 = -28;
	int32_t t82 = -2826579;

	t82 = (x729<<((x730+x731)<x732));

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x733 = 478974267U;
	int8_t x734 = -1;
	volatile uint16_t x736 = 2693U;
	volatile uint32_t t83 = 23U;

	t83 = (x733<<((x734+x735)<x736));

	if (t83 != 957948534U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x741 = 11495397923178291LLU;
	uint64_t x742 = 23LLU;
	int16_t x744 = INT16_MIN;
	uint64_t t84 = 697620089848343231LLU;

	t84 = (x741<<((x742+x743)<x744));

	if (t84 != 22990795846356582LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x749 = 27989510;
	int16_t x751 = 49;
	uint8_t x752 = UINT8_MAX;
	int32_t t85 = 297152164;

	t85 = (x749<<((x750+x751)<x752));

	if (t85 != 55979020) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x759 = 2U;
	static int64_t x760 = -10245085040LL;
	int64_t t86 = INT64_MAX;

	t86 = (x757<<((x758+x759)<x760));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x761 = INT16_MAX;
	uint32_t x762 = UINT32_MAX;
	int8_t x763 = 9;
	volatile int32_t x764 = 21932849;
	volatile int32_t t87 = 546117488;

	t87 = (x761<<((x762+x763)<x764));

	if (t87 != 65534) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x765 = 12U;
	static uint32_t x766 = 5U;
	int8_t x767 = INT8_MAX;
	volatile int16_t x768 = -1;
	volatile int32_t t88 = 11;

	t88 = (x765<<((x766+x767)<x768));

	if (t88 != 24) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x769 = 221753U;
	static uint32_t x770 = 8U;
	uint8_t x771 = 1U;
	int16_t x772 = -13;
	volatile uint32_t t89 = 2U;

	t89 = (x769<<((x770+x771)<x772));

	if (t89 != 443506U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x781 = 11021014993091LLU;
	volatile int8_t x783 = INT8_MIN;
	int8_t x784 = INT8_MIN;
	volatile uint64_t t90 = 453371LLU;

	t90 = (x781<<((x782+x783)<x784));

	if (t90 != 22042029986182LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x788 = INT32_MIN;
	static int32_t t91 = 20317;

	t91 = (x785<<((x786+x787)<x788));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x789 = INT8_MAX;
	int8_t x790 = -1;
	uint8_t x791 = UINT8_MAX;
	static uint8_t x792 = UINT8_MAX;
	int32_t t92 = 1;

	t92 = (x789<<((x790+x791)<x792));

	if (t92 != 254) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x793 = 1U;
	int16_t x794 = -1;
	uint32_t x795 = 254U;
	uint32_t x796 = 42496521U;
	int32_t t93 = 33765687;

	t93 = (x793<<((x794+x795)<x796));

	if (t93 != 2) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x802 = INT8_MIN;
	int32_t x803 = 69;
	uint8_t x804 = 79U;
	static int32_t t94 = -4009;

	t94 = (x801<<((x802+x803)<x804));

	if (t94 != 24) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x805 = 3LL;
	uint16_t x806 = 366U;
	static int16_t x807 = INT16_MAX;
	uint64_t x808 = UINT64_MAX;
	volatile int64_t t95 = 18042750643591867LL;

	t95 = (x805<<((x806+x807)<x808));

	if (t95 != 6LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x817 = UINT16_MAX;
	int16_t x818 = 1027;
	uint8_t x819 = UINT8_MAX;

	t96 = (x817<<((x818+x819)<x820));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x821 = 517834LLU;
	static int8_t x822 = 10;
	int32_t x823 = 61777;
	int16_t x824 = -1;
	uint64_t t97 = 771405232923421LLU;

	t97 = (x821<<((x822+x823)<x824));

	if (t97 != 517834LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x825 = UINT64_MAX;
	int64_t x826 = -334291953LL;
	int16_t x828 = -1519;

	t98 = (x825<<((x826+x827)<x828));

	if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x849 = UINT16_MAX;
	int16_t x850 = INT16_MIN;
	int32_t x851 = -1;
	uint64_t x852 = 49790704787226852LLU;
	volatile int32_t t99 = -7972898;

	t99 = (x849<<((x850+x851)<x852));

	if (t99 != 65535) { NG(); } else { ; }
	
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

