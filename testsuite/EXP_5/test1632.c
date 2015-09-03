#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = UINT64_MAX;
uint64_t x5 = 88LLU;
static uint32_t x8 = 1714158U;
int64_t x12 = -17589048919494885LL;
int64_t t2 = INT64_MAX;
uint16_t x24 = UINT16_MAX;
uint64_t x28 = 4932360554685657700LLU;
static uint32_t x53 = UINT32_MAX;
uint8_t x54 = 4U;
uint16_t x57 = 579U;
int8_t x58 = INT8_MIN;
static int32_t x66 = INT32_MAX;
volatile int32_t x67 = -1;
uint64_t x91 = UINT64_MAX;
uint8_t x93 = UINT8_MAX;
int16_t x101 = INT16_MAX;
int64_t x104 = 138960206156420493LL;
uint8_t x145 = UINT8_MAX;
int32_t x158 = 917407;
uint32_t x159 = 112289U;
int32_t x160 = -1338420;
volatile int32_t t18 = 20403;
uint16_t x172 = UINT16_MAX;
int64_t x174 = -3LL;
static uint32_t t21 = 212407125U;
int16_t x194 = -44;
int64_t x195 = -1LL;
uint64_t x199 = 601395714843549787LLU;
int16_t x219 = INT16_MIN;
int32_t x245 = INT32_MAX;
static volatile int32_t t29 = -1;
int32_t x271 = INT32_MIN;
uint32_t x273 = UINT32_MAX;
uint32_t x276 = 951U;
int8_t x294 = INT8_MIN;
int8_t x297 = INT8_MAX;
int32_t x300 = -10727812;
volatile int64_t t36 = 59964860278565542LL;
int32_t x333 = 11;
static volatile int32_t t40 = 425;
int32_t x372 = INT32_MAX;
int8_t x377 = 7;
volatile uint64_t t47 = 513LLU;
int8_t x429 = INT8_MAX;
volatile int64_t x460 = -1LL;
int64_t x461 = INT64_MAX;
static volatile int32_t x464 = INT32_MIN;
int16_t x474 = INT16_MAX;
static int32_t t57 = 43649;
static uint8_t x483 = 97U;
uint64_t x485 = 146164LLU;
int64_t x515 = INT64_MAX;
uint8_t x516 = 124U;
int8_t x517 = INT8_MAX;
uint8_t x520 = 122U;
volatile int32_t t61 = -10058558;
int16_t x525 = 4012;
int32_t x526 = -1;
uint8_t x533 = 4U;
uint16_t x537 = 55U;
uint8_t x546 = 11U;
int64_t t68 = 7409496502LL;
uint8_t x565 = 2U;
int64_t x566 = -1LL;
int16_t x570 = -1;
static volatile int8_t x577 = INT8_MAX;
int32_t x579 = INT32_MAX;
int32_t t72 = 609806984;
uint8_t x583 = 0U;
uint64_t x600 = 978168913320272LLU;
static int16_t x602 = INT16_MIN;
int16_t x607 = INT16_MAX;
volatile int8_t x638 = 13;
int32_t t83 = -14;
uint8_t x669 = 62U;
int64_t x671 = 996604798LL;
volatile int32_t t84 = -42;
volatile int32_t t85 = 1;
static uint8_t x685 = 2U;
int16_t x686 = INT16_MIN;
volatile int64_t x688 = INT64_MIN;
volatile int8_t x692 = -1;
static int64_t x695 = INT64_MAX;
int32_t x696 = -46029651;
int64_t x724 = INT64_MAX;
static volatile int32_t x727 = 44958;
int32_t x728 = INT32_MIN;
uint8_t x730 = 77U;
uint16_t x736 = 3272U;
int64_t x739 = INT64_MIN;
int8_t x744 = INT8_MIN;
uint8_t x749 = UINT8_MAX;
int8_t x750 = INT8_MIN;
uint64_t x755 = 2127977604092LLU;
uint8_t x760 = 5U;
static volatile int32_t t99 = -46715687;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile uint32_t x2 = 624383U;
	static uint64_t x3 = 28872455508236LLU;
	uint16_t x4 = 0U;

	t0 = (x1>>((x2<=x3)<x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -7;
	int16_t x7 = INT16_MIN;
	static volatile uint64_t t1 = 3215314LLU;

	t1 = (x5>>((x6<=x7)<x8));

	if (t1 != 44LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = INT64_MAX;

	t2 = (x9>>((x10<=x11)<x12));

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 21U;
	uint64_t x22 = 460564789363430LLU;
	int8_t x23 = 0;
	volatile int32_t t3 = 75;

	t3 = (x21>>((x22<=x23)<x24));

	if (t3 != 10) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = UINT32_MAX;
	volatile int16_t x26 = INT16_MAX;
	static int8_t x27 = 1;
	volatile uint32_t t4 = 14189U;

	t4 = (x25>>((x26<=x27)<x28));

	if (t4 != 2147483647U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = 1U;
	volatile int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	volatile uint16_t x36 = 4553U;
	static int32_t t5 = 1;

	t5 = (x33>>((x34<=x35)<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x41 = 8U;
	uint64_t x42 = 6290424467475139360LLU;
	int8_t x43 = INT8_MAX;
	static uint8_t x44 = 0U;
	volatile int32_t t6 = -113602404;

	t6 = (x41>>((x42<=x43)<x44));

	if (t6 != 8) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x55 = 13820134013062068LLU;
	uint16_t x56 = UINT16_MAX;
	volatile uint32_t t7 = 306502U;

	t7 = (x53>>((x54<=x55)<x56));

	if (t7 != 2147483647U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x59 = 111921736LL;
	int64_t x60 = INT64_MAX;
	volatile int32_t t8 = 29540061;

	t8 = (x57>>((x58<=x59)<x60));

	if (t8 != 289) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x65 = 1;
	int64_t x68 = INT64_MIN;
	int32_t t9 = 30;

	t9 = (x65>>((x66<=x67)<x68));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = 64247826751LL;
	uint32_t x90 = 30U;
	static volatile int8_t x92 = INT8_MAX;
	volatile int64_t t10 = 686234LL;

	t10 = (x89>>((x90<=x91)<x92));

	if (t10 != 32123913375LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x94 = 32U;
	static uint64_t x95 = 498364752414211LLU;
	int64_t x96 = INT64_MAX;
	int32_t t11 = 1;

	t11 = (x93>>((x94<=x95)<x96));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x102 = 81838;
	int32_t x103 = INT32_MIN;
	volatile int32_t t12 = -250811952;

	t12 = (x101>>((x102<=x103)<x104));

	if (t12 != 16383) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x105 = 37U;
	int64_t x106 = INT64_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	static uint8_t x108 = 1U;
	volatile uint32_t t13 = 309U;

	t13 = (x105>>((x106<=x107)<x108));

	if (t13 != 37U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x113 = 6256U;
	uint16_t x114 = 1U;
	int32_t x115 = 2;
	int32_t x116 = INT32_MIN;
	static uint32_t t14 = 1707398U;

	t14 = (x113>>((x114<=x115)<x116));

	if (t14 != 6256U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x117 = UINT64_MAX;
	volatile int64_t x118 = INT64_MAX;
	uint8_t x119 = 0U;
	volatile int64_t x120 = -46LL;
	uint64_t t15 = UINT64_MAX;

	t15 = (x117>>((x118<=x119)<x120));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x137 = INT64_MAX;
	uint8_t x138 = 55U;
	int16_t x139 = INT16_MIN;
	int64_t x140 = -1LL;
	static int64_t t16 = INT64_MAX;

	t16 = (x137>>((x138<=x139)<x140));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x146 = INT64_MAX;
	static volatile uint64_t x147 = 13LLU;
	volatile int16_t x148 = -1;
	static int32_t t17 = 15709615;

	t17 = (x145>>((x146<=x147)<x148));

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x157 = 0U;

	t18 = (x157>>((x158<=x159)<x160));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = -1LL;
	int32_t x171 = 24;
	volatile int32_t t19 = 0;

	t19 = (x169>>((x170<=x171)<x172));

	if (t19 != 16383) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x173 = 89U;
	int64_t x175 = INT64_MIN;
	volatile int32_t x176 = INT32_MIN;
	int32_t t20 = 116755;

	t20 = (x173>>((x174<=x175)<x176));

	if (t20 != 89) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x181 = 26206022U;
	int8_t x182 = 0;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = 35075U;

	t21 = (x181>>((x182<=x183)<x184));

	if (t21 != 13103011U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x185 = INT64_MAX;
	uint32_t x186 = 25520990U;
	static int8_t x187 = 2;
	static int16_t x188 = INT16_MAX;
	static int64_t t22 = -36150LL;

	t22 = (x185>>((x186<=x187)<x188));

	if (t22 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x193 = 2427335U;
	static int8_t x196 = 1;
	volatile uint32_t t23 = 322360U;

	t23 = (x193>>((x194<=x195)<x196));

	if (t23 != 2427335U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x197 = 45U;
	static uint8_t x198 = 78U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t24 = 315;

	t24 = (x197>>((x198<=x199)<x200));

	if (t24 != 45) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x217 = 1;
	uint8_t x218 = UINT8_MAX;
	int8_t x220 = -6;
	static volatile int32_t t25 = 238;

	t25 = (x217>>((x218<=x219)<x220));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x221 = 1619U;
	volatile int16_t x222 = 290;
	int64_t x223 = -1LL;
	int8_t x224 = INT8_MIN;
	static volatile uint32_t t26 = 377251U;

	t26 = (x221>>((x222<=x223)<x224));

	if (t26 != 1619U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x229 = 7635989U;
	int16_t x230 = 335;
	int8_t x231 = INT8_MIN;
	int32_t x232 = -67;
	uint32_t t27 = 8U;

	t27 = (x229>>((x230<=x231)<x232));

	if (t27 != 7635989U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = 7987U;
	volatile int32_t t28 = 3384198;

	t28 = (x245>>((x246<=x247)<x248));

	if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x249 = INT16_MAX;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 1772013LLU;
	int32_t x252 = 3638;

	t29 = (x249>>((x250<=x251)<x252));

	if (t29 != 16383) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x261 = INT64_MAX;
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	uint8_t x264 = 0U;
	int64_t t30 = INT64_MAX;

	t30 = (x261>>((x262<=x263)<x264));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x265 = UINT16_MAX;
	int32_t x266 = -836;
	uint32_t x267 = 74506123U;
	uint16_t x268 = 1009U;
	volatile int32_t t31 = 2575021;

	t31 = (x265>>((x266<=x267)<x268));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x269 = 884488672497525471LL;
	static int64_t x270 = -93214399LL;
	volatile int8_t x272 = INT8_MIN;
	int64_t t32 = 4316236293111656500LL;

	t32 = (x269>>((x270<=x271)<x272));

	if (t32 != 884488672497525471LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x274 = -29728228295803772LL;
	uint16_t x275 = 4U;
	volatile uint32_t t33 = 2043012U;

	t33 = (x273>>((x274<=x275)<x276));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x293 = INT64_MAX;
	static int64_t x295 = INT64_MAX;
	volatile int32_t x296 = 0;
	volatile int64_t t34 = INT64_MAX;

	t34 = (x293>>((x294<=x295)<x296));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x298 = -4;
	volatile int8_t x299 = 1;
	int32_t t35 = -39453;

	t35 = (x297>>((x298<=x299)<x300));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x325 = 9LL;
	int32_t x326 = 95;
	volatile int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MIN;

	t36 = (x325>>((x326<=x327)<x328));

	if (t36 != 9LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x334 = UINT32_MAX;
	volatile int64_t x335 = 1772251762LL;
	uint64_t x336 = 1226879860436LLU;
	static int32_t t37 = -1;

	t37 = (x333>>((x334<=x335)<x336));

	if (t37 != 5) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x337 = 4;
	uint8_t x338 = 26U;
	static int32_t x339 = INT32_MIN;
	uint32_t x340 = 0U;
	static int32_t t38 = 456121186;

	t38 = (x337>>((x338<=x339)<x340));

	if (t38 != 4) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x341 = INT8_MAX;
	uint32_t x342 = 1335043171U;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t39 = 538;

	t39 = (x341>>((x342<=x343)<x344));

	if (t39 != 63) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int64_t x358 = -1LL;
	static int32_t x359 = 825784;
	volatile int16_t x360 = INT16_MIN;

	t40 = (x357>>((x358<=x359)<x360));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x365 = UINT64_MAX;
	int64_t x366 = INT64_MIN;
	volatile int64_t x367 = INT64_MAX;
	uint8_t x368 = 120U;
	static volatile uint64_t t41 = 30639129817LLU;

	t41 = (x365>>((x366<=x367)<x368));

	if (t41 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x369 = 275U;
	uint32_t x370 = 9926U;
	int64_t x371 = -1LL;
	int32_t t42 = 2305;

	t42 = (x369>>((x370<=x371)<x372));

	if (t42 != 137) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x373 = 1;
	static uint16_t x374 = UINT16_MAX;
	uint8_t x375 = UINT8_MAX;
	volatile int64_t x376 = INT64_MAX;
	volatile int32_t t43 = 129281;

	t43 = (x373>>((x374<=x375)<x376));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x378 = 2U;
	int8_t x379 = -1;
	uint32_t x380 = 128006U;
	int32_t t44 = -10696727;

	t44 = (x377>>((x378<=x379)<x380));

	if (t44 != 3) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x381 = 460344184177489LLU;
	static int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 3;
	uint64_t t45 = 21LLU;

	t45 = (x381>>((x382<=x383)<x384));

	if (t45 != 230172092088744LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x385 = 25324200012827041LL;
	uint32_t x386 = UINT32_MAX;
	int64_t x387 = 511LL;
	int32_t x388 = 346340138;
	static int64_t t46 = -61454620458279406LL;

	t46 = (x385>>((x386<=x387)<x388));

	if (t46 != 12662100006413520LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x393 = 19595669LLU;
	uint32_t x394 = 4341983U;
	int64_t x395 = INT64_MAX;
	int64_t x396 = INT64_MAX;

	t47 = (x393>>((x394<=x395)<x396));

	if (t47 != 9797834LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x405 = INT16_MAX;
	int8_t x406 = INT8_MIN;
	int8_t x407 = 62;
	static int64_t x408 = INT64_MIN;
	volatile int32_t t48 = -97844055;

	t48 = (x405>>((x406<=x407)<x408));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x413 = 7719029712663115LLU;
	int16_t x414 = INT16_MIN;
	int8_t x415 = INT8_MIN;
	static int64_t x416 = -1LL;
	static volatile uint64_t t49 = 7211695LLU;

	t49 = (x413>>((x414<=x415)<x416));

	if (t49 != 7719029712663115LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x421 = 101U;
	static int32_t x422 = -1818909;
	static uint16_t x423 = 35U;
	static int8_t x424 = INT8_MAX;
	volatile int32_t t50 = 107;

	t50 = (x421>>((x422<=x423)<x424));

	if (t50 != 50) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x425 = UINT8_MAX;
	uint8_t x426 = 6U;
	uint32_t x427 = 6288U;
	int32_t x428 = INT32_MIN;
	static volatile int32_t t51 = -7560;

	t51 = (x425>>((x426<=x427)<x428));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x430 = 2969191954LL;
	int32_t x431 = INT32_MAX;
	volatile int16_t x432 = -1;
	volatile int32_t t52 = -49191;

	t52 = (x429>>((x430<=x431)<x432));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x449 = INT64_MAX;
	uint64_t x450 = 914LLU;
	volatile int16_t x451 = -1;
	uint16_t x452 = UINT16_MAX;
	int64_t t53 = 1444050895426LL;

	t53 = (x449>>((x450<=x451)<x452));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x457 = 20LLU;
	int32_t x458 = -60370;
	volatile int16_t x459 = 10536;
	static uint64_t t54 = 1853025118LLU;

	t54 = (x457>>((x458<=x459)<x460));

	if (t54 != 20LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x462 = INT8_MAX;
	static uint32_t x463 = 10U;
	int64_t t55 = INT64_MAX;

	t55 = (x461>>((x462<=x463)<x464));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x465 = 33U;
	static int32_t x466 = INT32_MAX;
	int8_t x467 = INT8_MIN;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t56 = -515804;

	t56 = (x465>>((x466<=x467)<x468));

	if (t56 != 16) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x473 = UINT8_MAX;
	volatile uint64_t x475 = UINT64_MAX;
	static int16_t x476 = -690;

	t57 = (x473>>((x474<=x475)<x476));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x481 = 4341974;
	uint32_t x482 = 14936705U;
	int16_t x484 = INT16_MAX;
	int32_t t58 = 1;

	t58 = (x481>>((x482<=x483)<x484));

	if (t58 != 2170987) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x486 = INT16_MAX;
	uint32_t x487 = 57065U;
	static volatile uint8_t x488 = 92U;
	volatile uint64_t t59 = 238254944136LLU;

	t59 = (x485>>((x486<=x487)<x488));

	if (t59 != 73082LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x513 = 3547123U;
	int32_t x514 = -186;
	uint32_t t60 = 515889062U;

	t60 = (x513>>((x514<=x515)<x516));

	if (t60 != 1773561U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x518 = 767U;
	int64_t x519 = INT64_MAX;

	t61 = (x517>>((x518<=x519)<x520));

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x521 = 9;
	int8_t x522 = INT8_MIN;
	uint16_t x523 = 29632U;
	volatile int64_t x524 = INT64_MIN;
	volatile int32_t t62 = -25;

	t62 = (x521>>((x522<=x523)<x524));

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x527 = UINT8_MAX;
	int32_t x528 = -26817;
	int32_t t63 = 10039718;

	t63 = (x525>>((x526<=x527)<x528));

	if (t63 != 4012) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x534 = -1;
	int64_t x535 = -1LL;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t64 = 235801252;

	t64 = (x533>>((x534<=x535)<x536));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x538 = 11LLU;
	uint8_t x539 = 1U;
	uint8_t x540 = 1U;
	int32_t t65 = -1129996;

	t65 = (x537>>((x538<=x539)<x540));

	if (t65 != 27) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x541 = INT32_MAX;
	volatile int8_t x542 = INT8_MIN;
	int16_t x543 = INT16_MIN;
	static uint32_t x544 = UINT32_MAX;
	volatile int32_t t66 = -669475;

	t66 = (x541>>((x542<=x543)<x544));

	if (t66 != 1073741823) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x545 = UINT16_MAX;
	volatile uint8_t x547 = UINT8_MAX;
	int16_t x548 = INT16_MAX;
	int32_t t67 = -2303;

	t67 = (x545>>((x546<=x547)<x548));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x553 = 72443LL;
	int8_t x554 = -10;
	volatile uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;

	t68 = (x553>>((x554<=x555)<x556));

	if (t68 != 72443LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x567 = UINT8_MAX;
	uint32_t x568 = 15U;
	static volatile int32_t t69 = 16;

	t69 = (x565>>((x566<=x567)<x568));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x569 = 43;
	int16_t x571 = INT16_MIN;
	static uint32_t x572 = 426516993U;
	static int32_t t70 = 1;

	t70 = (x569>>((x570<=x571)<x572));

	if (t70 != 21) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x573 = 1;
	int8_t x574 = INT8_MIN;
	uint64_t x575 = UINT64_MAX;
	int16_t x576 = 781;
	int32_t t71 = 3258818;

	t71 = (x573>>((x574<=x575)<x576));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x578 = INT8_MIN;
	int8_t x580 = -1;

	t72 = (x577>>((x578<=x579)<x580));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x581 = INT32_MAX;
	uint8_t x582 = 70U;
	static volatile uint16_t x584 = UINT16_MAX;
	int32_t t73 = -3541;

	t73 = (x581>>((x582<=x583)<x584));

	if (t73 != 1073741823) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x589 = 1835LLU;
	static int32_t x590 = INT32_MIN;
	uint32_t x591 = 210583U;
	int32_t x592 = -1;
	static uint64_t t74 = 1LLU;

	t74 = (x589>>((x590<=x591)<x592));

	if (t74 != 1835LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x597 = UINT8_MAX;
	volatile int16_t x598 = INT16_MIN;
	volatile int16_t x599 = INT16_MIN;
	int32_t t75 = -133;

	t75 = (x597>>((x598<=x599)<x600));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x601 = 1697LLU;
	uint16_t x603 = 5U;
	int64_t x604 = -859844LL;
	uint64_t t76 = 1552154279LLU;

	t76 = (x601>>((x602<=x603)<x604));

	if (t76 != 1697LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x605 = INT8_MAX;
	volatile int64_t x606 = -1LL;
	static uint64_t x608 = 768012111595001LLU;
	volatile int32_t t77 = 67046481;

	t77 = (x605>>((x606<=x607)<x608));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x609 = 44123069480690627LLU;
	uint8_t x610 = UINT8_MAX;
	static int64_t x611 = INT64_MIN;
	int8_t x612 = INT8_MIN;
	static uint64_t t78 = 53295867664213529LLU;

	t78 = (x609>>((x610<=x611)<x612));

	if (t78 != 44123069480690627LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x613 = 2118LLU;
	uint64_t x614 = 52805307649490453LLU;
	int32_t x615 = INT32_MAX;
	static volatile int64_t x616 = -1LL;
	volatile uint64_t t79 = 0LLU;

	t79 = (x613>>((x614<=x615)<x616));

	if (t79 != 2118LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x617 = 3;
	int64_t x618 = INT64_MIN;
	volatile int64_t x619 = INT64_MAX;
	int16_t x620 = -1;
	int32_t t80 = 349971;

	t80 = (x617>>((x618<=x619)<x620));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x629 = 18153264835681LLU;
	volatile uint8_t x630 = 81U;
	int16_t x631 = INT16_MIN;
	static int16_t x632 = INT16_MAX;
	volatile uint64_t t81 = 1000498957307854LLU;

	t81 = (x629>>((x630<=x631)<x632));

	if (t81 != 9076632417840LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x637 = 831U;
	volatile uint32_t x639 = 431612048U;
	uint64_t x640 = 1019631519LLU;
	uint32_t t82 = 100U;

	t82 = (x637>>((x638<=x639)<x640));

	if (t82 != 415U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x641 = 5U;
	uint8_t x642 = UINT8_MAX;
	uint8_t x643 = 0U;
	volatile uint8_t x644 = 20U;

	t83 = (x641>>((x642<=x643)<x644));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x670 = INT8_MAX;
	int8_t x672 = -20;

	t84 = (x669>>((x670<=x671)<x672));

	if (t84 != 62) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x673 = 1;
	static int64_t x674 = -1LL;
	int16_t x675 = -1;
	static int64_t x676 = INT64_MAX;

	t85 = (x673>>((x674<=x675)<x676));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x681 = 68;
	uint8_t x682 = 118U;
	int8_t x683 = -1;
	volatile uint8_t x684 = 9U;
	int32_t t86 = 7191;

	t86 = (x681>>((x682<=x683)<x684));

	if (t86 != 34) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x687 = -1490636834482LL;
	volatile int32_t t87 = 28;

	t87 = (x685>>((x686<=x687)<x688));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x689 = 65709572505312413LLU;
	int16_t x690 = -1;
	int16_t x691 = INT16_MAX;
	uint64_t t88 = 61477318LLU;

	t88 = (x689>>((x690<=x691)<x692));

	if (t88 != 65709572505312413LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x693 = 12215;
	int16_t x694 = -2447;
	volatile int32_t t89 = -7324882;

	t89 = (x693>>((x694<=x695)<x696));

	if (t89 != 12215) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x705 = 3;
	uint32_t x706 = UINT32_MAX;
	uint16_t x707 = UINT16_MAX;
	volatile uint32_t x708 = UINT32_MAX;
	volatile int32_t t90 = 37245881;

	t90 = (x705>>((x706<=x707)<x708));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x721 = 2U;
	static int32_t x722 = INT32_MIN;
	volatile uint16_t x723 = UINT16_MAX;
	int32_t t91 = -461895;

	t91 = (x721>>((x722<=x723)<x724));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x725 = 9U;
	uint64_t x726 = 0LLU;
	uint32_t t92 = 1004471U;

	t92 = (x725>>((x726<=x727)<x728));

	if (t92 != 9U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x729 = 92U;
	volatile int32_t x731 = 489903655;
	static int64_t x732 = INT64_MIN;
	uint32_t t93 = 61966U;

	t93 = (x729>>((x730<=x731)<x732));

	if (t93 != 92U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x733 = UINT64_MAX;
	static int32_t x734 = INT32_MAX;
	int16_t x735 = -1;
	uint64_t t94 = 1041525520833038LLU;

	t94 = (x733>>((x734<=x735)<x736));

	if (t94 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x737 = INT16_MAX;
	int64_t x738 = -2130303952LL;
	uint8_t x740 = 0U;
	volatile int32_t t95 = 1;

	t95 = (x737>>((x738<=x739)<x740));

	if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x741 = INT64_MAX;
	volatile uint64_t x742 = 6754916LLU;
	int8_t x743 = 1;
	volatile int64_t t96 = INT64_MAX;

	t96 = (x741>>((x742<=x743)<x744));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x751 = INT64_MIN;
	int32_t x752 = 38740191;
	int32_t t97 = -2300614;

	t97 = (x749>>((x750<=x751)<x752));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x753 = INT8_MAX;
	static int32_t x754 = -6;
	int64_t x756 = -22765113784802LL;
	int32_t t98 = 30698063;

	t98 = (x753>>((x754<=x755)<x756));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x757 = 2U;
	static int64_t x758 = INT64_MIN;
	static int16_t x759 = -1;

	t99 = (x757>>((x758<=x759)<x760));

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

