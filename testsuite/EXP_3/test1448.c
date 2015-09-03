#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MIN;
volatile int32_t t0 = -359339009;
uint32_t x11 = UINT32_MAX;
int16_t x18 = 0;
uint8_t x21 = 18U;
volatile int64_t x26 = INT64_MAX;
static uint16_t x57 = UINT16_MAX;
int64_t x59 = INT64_MIN;
uint32_t x60 = 58U;
volatile int32_t t6 = -19;
int64_t x63 = INT64_MIN;
volatile uint64_t x66 = 396399873557968162LLU;
int64_t x76 = INT64_MAX;
int32_t t9 = 284714;
uint8_t x84 = 28U;
int32_t x103 = INT32_MIN;
static int16_t x107 = INT16_MIN;
int64_t x109 = 72568099958LL;
uint32_t x127 = 122U;
int64_t x129 = INT64_MAX;
volatile uint64_t x144 = UINT64_MAX;
int8_t x145 = 16;
volatile int32_t t18 = -12023;
int16_t x149 = INT16_MIN;
static uint32_t x150 = UINT32_MAX;
int8_t x152 = INT8_MIN;
uint16_t x175 = 4U;
static uint64_t x176 = 1733724078446LLU;
int64_t x188 = 2081305LL;
uint16_t x197 = 102U;
int32_t t27 = -233051757;
volatile int32_t t28 = -17;
int64_t x216 = INT64_MAX;
volatile uint16_t x239 = 31U;
int8_t x254 = INT8_MIN;
int32_t x283 = INT32_MIN;
int32_t t37 = -5555;
volatile int32_t t38 = 1760051;
int16_t x317 = -77;
uint8_t x325 = UINT8_MAX;
int16_t x326 = 611;
int32_t t43 = 54;
static volatile int64_t x349 = -100LL;
uint64_t x352 = UINT64_MAX;
uint8_t x355 = 0U;
int32_t x357 = 844617920;
int64_t x396 = INT64_MAX;
volatile int32_t t51 = -255050;
uint8_t x416 = 1U;
static int8_t x432 = 0;
volatile int32_t t59 = -124;
volatile int32_t t63 = -5205;
volatile int32_t x515 = INT32_MIN;
int16_t x534 = -1;
int32_t t65 = -31129214;
static int64_t x544 = 4551960116938LL;
volatile int32_t t67 = 6887;
static uint32_t x555 = 65U;
static uint8_t x558 = 0U;
volatile uint64_t x560 = 16742536303303384LLU;
volatile uint16_t x586 = 535U;
int32_t x588 = INT32_MAX;
int8_t x590 = -1;
int32_t t75 = -35570039;
volatile int32_t x629 = 67;
static int16_t x637 = 0;
int32_t t79 = -62859;
int32_t x654 = INT32_MIN;
uint8_t x658 = UINT8_MAX;
int32_t x665 = -1;
volatile int32_t x671 = INT32_MIN;
volatile int32_t t84 = 133786;
int32_t x678 = INT32_MIN;
int16_t x680 = INT16_MAX;
int32_t x689 = -67509309;
static uint8_t x692 = UINT8_MAX;
static int8_t x693 = INT8_MIN;
int16_t x694 = -1;
static int8_t x696 = 0;
static volatile int8_t x701 = INT8_MIN;
static int64_t x706 = -1LL;
int8_t x708 = 39;
int8_t x712 = -1;
static int8_t x727 = -1;
int32_t x764 = INT32_MAX;
int16_t x788 = INT16_MAX;
int16_t x790 = -3733;
int16_t x797 = INT16_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = 648619566;
	static int16_t x4 = INT16_MIN;

	t0 = ((x1==x2)%(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -1;
	static int8_t x10 = INT8_MIN;
	uint64_t x12 = 23056748086172LLU;
	static int32_t t1 = -410354518;

	t1 = ((x9==x10)%(x11<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -12;
	int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MAX;
	int32_t t2 = 234835248;

	t2 = ((x17==x18)%(x19<x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x22 = UINT64_MAX;
	uint16_t x23 = 14U;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t3 = 9051640;

	t3 = ((x21==x22)%(x23<x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MAX;
	volatile int32_t t4 = 0;

	t4 = ((x25==x26)%(x27<x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x53 = INT8_MIN;
	static int8_t x54 = 13;
	static int16_t x55 = INT16_MIN;
	volatile int32_t x56 = 39;
	int32_t t5 = -99;

	t5 = ((x53==x54)%(x55<x56));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x58 = UINT32_MAX;

	t6 = ((x57==x58)%(x59<x60));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x61 = INT64_MIN;
	uint16_t x62 = UINT16_MAX;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t7 = -6938074;

	t7 = ((x61==x62)%(x63<x64));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x65 = INT16_MAX;
	volatile int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t8 = -17986;

	t8 = ((x65==x66)%(x67<x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x73 = UINT32_MAX;
	int8_t x74 = -1;
	int8_t x75 = -1;

	t9 = ((x73==x74)%(x75<x76));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x81 = 28U;
	volatile int64_t x82 = -351116LL;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t10 = 6821433;

	t10 = ((x81==x82)%(x83<x84));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x101 = INT16_MAX;
	int32_t x102 = 5225987;
	static volatile int16_t x104 = -1;
	volatile int32_t t11 = 20;

	t11 = ((x101==x102)%(x103<x104));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x105 = 13866705644520990LLU;
	volatile int32_t x106 = 978175963;
	int16_t x108 = INT16_MAX;
	volatile int32_t t12 = 4039;

	t12 = ((x105==x106)%(x107<x108));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int32_t x110 = 18858;
	static int16_t x111 = 1832;
	volatile uint16_t x112 = UINT16_MAX;
	volatile int32_t t13 = 25434;

	t13 = ((x109==x110)%(x111<x112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x113 = UINT16_MAX;
	static uint8_t x114 = UINT8_MAX;
	int64_t x115 = INT64_MIN;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t14 = -24515247;

	t14 = ((x113==x114)%(x115<x116));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x125 = 0;
	static uint8_t x126 = 0U;
	volatile int64_t x128 = INT64_MAX;
	volatile int32_t t15 = 124484;

	t15 = ((x125==x126)%(x127<x128));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x130 = INT32_MIN;
	static volatile int16_t x131 = -6871;
	static int32_t x132 = INT32_MAX;
	int32_t t16 = -1387164;

	t16 = ((x129==x130)%(x131<x132));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x141 = -1;
	static volatile int64_t x142 = INT64_MIN;
	static int16_t x143 = INT16_MIN;
	volatile int32_t t17 = -131;

	t17 = ((x141==x142)%(x143<x144));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x146 = -1;
	static int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;

	t18 = ((x145==x146)%(x147<x148));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x151 = 3802U;
	static volatile int32_t t19 = -577263575;

	t19 = ((x149==x150)%(x151<x152));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x153 = -1LL;
	int32_t x154 = -1;
	int32_t x155 = INT32_MIN;
	static int32_t x156 = -1;
	int32_t t20 = -4;

	t20 = ((x153==x154)%(x155<x156));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x157 = -1LL;
	int64_t x158 = -1LL;
	int16_t x159 = -11875;
	static int16_t x160 = -1;
	static int32_t t21 = 314330659;

	t21 = ((x157==x158)%(x159<x160));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x161 = 58;
	volatile uint16_t x162 = 3U;
	static int32_t x163 = -230330395;
	uint32_t x164 = UINT32_MAX;
	int32_t t22 = -120;

	t22 = ((x161==x162)%(x163<x164));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x173 = -8;
	volatile int8_t x174 = 1;
	int32_t t23 = 10399;

	t23 = ((x173==x174)%(x175<x176));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile uint16_t x183 = 1U;
	uint64_t x184 = 29739053LLU;
	int32_t t24 = -238915751;

	t24 = ((x181==x182)%(x183<x184));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x185 = UINT16_MAX;
	static int8_t x186 = 1;
	int32_t x187 = -1;
	int32_t t25 = -29795;

	t25 = ((x185==x186)%(x187<x188));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x189 = INT16_MAX;
	int64_t x190 = INT64_MAX;
	int64_t x191 = 71LL;
	uint16_t x192 = UINT16_MAX;
	int32_t t26 = 2051491;

	t26 = ((x189==x190)%(x191<x192));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x198 = 463497198443LLU;
	volatile int64_t x199 = INT64_MIN;
	int8_t x200 = INT8_MIN;

	t27 = ((x197==x198)%(x199<x200));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x205 = INT8_MAX;
	uint32_t x206 = 125U;
	uint64_t x207 = 10347LLU;
	static int64_t x208 = INT64_MIN;

	t28 = ((x205==x206)%(x207<x208));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x213 = -1124083396034LL;
	int8_t x214 = -6;
	static int8_t x215 = INT8_MAX;
	volatile int32_t t29 = 116048297;

	t29 = ((x213==x214)%(x215<x216));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x221 = 71346976U;
	int8_t x222 = INT8_MIN;
	volatile int16_t x223 = INT16_MIN;
	int8_t x224 = -1;
	volatile int32_t t30 = 36233;

	t30 = ((x221==x222)%(x223<x224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MAX;
	static int16_t x235 = -136;
	int32_t x236 = -1;
	volatile int32_t t31 = 1034796;

	t31 = ((x233==x234)%(x235<x236));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x237 = -1;
	int8_t x238 = INT8_MIN;
	uint8_t x240 = 105U;
	volatile int32_t t32 = -18;

	t32 = ((x237==x238)%(x239<x240));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = -18;
	uint64_t x247 = 11268823609048LLU;
	int8_t x248 = INT8_MIN;
	int32_t t33 = 30028042;

	t33 = ((x245==x246)%(x247<x248));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x249 = 83U;
	volatile uint16_t x250 = 584U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MAX;
	volatile int32_t t34 = 4079;

	t34 = ((x249==x250)%(x251<x252));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x253 = INT64_MAX;
	int16_t x255 = -211;
	static int32_t x256 = 297;
	static volatile int32_t t35 = -23523640;

	t35 = ((x253==x254)%(x255<x256));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x269 = 146242384045200LLU;
	int64_t x270 = -1879509125884172764LL;
	static int32_t x271 = INT32_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t36 = -249;

	t36 = ((x269==x270)%(x271<x272));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x281 = 8769141930514LLU;
	int16_t x282 = INT16_MIN;
	int8_t x284 = INT8_MIN;

	t37 = ((x281==x282)%(x283<x284));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x286 = -48;
	volatile int8_t x287 = -2;
	uint8_t x288 = 0U;

	t38 = ((x285==x286)%(x287<x288));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x289 = 31U;
	uint32_t x290 = UINT32_MAX;
	uint8_t x291 = UINT8_MAX;
	volatile int16_t x292 = INT16_MAX;
	int32_t t39 = -7311228;

	t39 = ((x289==x290)%(x291<x292));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x309 = INT16_MIN;
	int8_t x310 = -1;
	volatile int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t40 = -3797;

	t40 = ((x309==x310)%(x311<x312));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x318 = 867;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = INT8_MIN;
	volatile int32_t t41 = -146545951;

	t41 = ((x317==x318)%(x319<x320));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x327 = 1;
	static uint64_t x328 = 70024542240391451LLU;
	int32_t t42 = -51120;

	t42 = ((x325==x326)%(x327<x328));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x333 = 2933U;
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	volatile int16_t x336 = INT16_MAX;

	t43 = ((x333==x334)%(x335<x336));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x337 = -1;
	static int16_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = -1LL;
	static int32_t t44 = 0;

	t44 = ((x337==x338)%(x339<x340));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x341 = -1;
	int8_t x342 = 6;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 17U;
	static int32_t t45 = -1;

	t45 = ((x341==x342)%(x343<x344));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x350 = INT8_MIN;
	int64_t x351 = -397815817625LL;
	int32_t t46 = 26;

	t46 = ((x349==x350)%(x351<x352));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x353 = 23;
	int64_t x354 = 9373444LL;
	static uint32_t x356 = 84U;
	volatile int32_t t47 = 30268222;

	t47 = ((x353==x354)%(x355<x356));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x358 = UINT32_MAX;
	static int8_t x359 = -1;
	int64_t x360 = 92485133159LL;
	int32_t t48 = 30996689;

	t48 = ((x357==x358)%(x359<x360));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MAX;
	uint16_t x363 = 22530U;
	static int32_t x364 = 3730366;
	int32_t t49 = -464015;

	t49 = ((x361==x362)%(x363<x364));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = 254005U;
	static int16_t x387 = -1;
	int32_t x388 = INT32_MAX;
	int32_t t50 = 4;

	t50 = ((x385==x386)%(x387<x388));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x393 = INT64_MIN;
	static int32_t x394 = -1;
	static int32_t x395 = -1;

	t51 = ((x393==x394)%(x395<x396));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x413 = -1;
	static int32_t x414 = INT32_MIN;
	static int8_t x415 = -9;
	static volatile int32_t t52 = -43;

	t52 = ((x413==x414)%(x415<x416));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x417 = -19LL;
	uint16_t x418 = UINT16_MAX;
	int64_t x419 = -1LL;
	volatile uint32_t x420 = 10741558U;
	volatile int32_t t53 = 967;

	t53 = ((x417==x418)%(x419<x420));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x421 = 4U;
	int32_t x422 = 1904782;
	static volatile uint8_t x423 = 4U;
	volatile int64_t x424 = INT64_MAX;
	volatile int32_t t54 = 1;

	t54 = ((x421==x422)%(x423<x424));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	static int16_t x431 = INT16_MIN;
	int32_t t55 = 753904;

	t55 = ((x429==x430)%(x431<x432));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x441 = INT8_MAX;
	int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	int8_t x444 = INT8_MIN;
	volatile int32_t t56 = -247;

	t56 = ((x441==x442)%(x443<x444));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x449 = -128557;
	int16_t x450 = INT16_MIN;
	static int64_t x451 = INT64_MIN;
	int32_t x452 = 3767;
	volatile int32_t t57 = 22;

	t57 = ((x449==x450)%(x451<x452));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x453 = INT64_MIN;
	static volatile int8_t x454 = INT8_MIN;
	int64_t x455 = INT64_MIN;
	volatile int64_t x456 = 58803579182LL;
	volatile int32_t t58 = -282;

	t58 = ((x453==x454)%(x455<x456));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x457 = INT64_MIN;
	static int8_t x458 = -1;
	int16_t x459 = INT16_MAX;
	uint64_t x460 = 15454629226LLU;

	t59 = ((x457==x458)%(x459<x460));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x461 = INT16_MIN;
	static volatile int32_t x462 = INT32_MIN;
	int16_t x463 = INT16_MIN;
	int64_t x464 = INT64_MAX;
	int32_t t60 = -4;

	t60 = ((x461==x462)%(x463<x464));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x469 = 31561;
	int64_t x470 = INT64_MIN;
	int8_t x471 = INT8_MIN;
	uint16_t x472 = 198U;
	int32_t t61 = -4743651;

	t61 = ((x469==x470)%(x471<x472));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x473 = UINT32_MAX;
	int32_t x474 = INT32_MAX;
	int16_t x475 = INT16_MIN;
	int32_t x476 = -1;
	int32_t t62 = 666;

	t62 = ((x473==x474)%(x475<x476));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x505 = INT8_MAX;
	int8_t x506 = 19;
	uint16_t x507 = 1981U;
	uint32_t x508 = 22338U;

	t63 = ((x505==x506)%(x507<x508));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x513 = 940U;
	int16_t x514 = INT16_MIN;
	uint8_t x516 = 50U;
	volatile int32_t t64 = 108722;

	t64 = ((x513==x514)%(x515<x516));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x533 = UINT32_MAX;
	int32_t x535 = INT32_MIN;
	int16_t x536 = INT16_MIN;

	t65 = ((x533==x534)%(x535<x536));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x541 = INT32_MIN;
	int32_t x542 = 2352490;
	static uint32_t x543 = 461687340U;
	volatile int32_t t66 = -3;

	t66 = ((x541==x542)%(x543<x544));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x549 = 10U;
	int32_t x550 = 392388;
	uint8_t x551 = 0U;
	uint8_t x552 = 15U;

	t67 = ((x549==x550)%(x551<x552));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint64_t x553 = 6445674098543006LLU;
	int8_t x554 = INT8_MIN;
	uint16_t x556 = 102U;
	volatile int32_t t68 = 1;

	t68 = ((x553==x554)%(x555<x556));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x557 = -1;
	int32_t x559 = 1069766250;
	int32_t t69 = -63988336;

	t69 = ((x557==x558)%(x559<x560));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x569 = INT32_MIN;
	int32_t x570 = INT32_MIN;
	uint32_t x571 = 113728U;
	int8_t x572 = INT8_MIN;
	static int32_t t70 = -33988974;

	t70 = ((x569==x570)%(x571<x572));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x581 = 17576U;
	volatile int64_t x582 = 4227338990447197846LL;
	uint64_t x583 = 7LLU;
	volatile int16_t x584 = -1;
	static volatile int32_t t71 = 49005;

	t71 = ((x581==x582)%(x583<x584));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x585 = -1;
	uint16_t x587 = UINT16_MAX;
	static int32_t t72 = -255;

	t72 = ((x585==x586)%(x587<x588));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x589 = 7762U;
	static int32_t x591 = INT32_MIN;
	volatile int8_t x592 = 2;
	volatile int32_t t73 = 7;

	t73 = ((x589==x590)%(x591<x592));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x597 = 1;
	int8_t x598 = -1;
	int64_t x599 = INT64_MIN;
	int16_t x600 = -1;
	int32_t t74 = -1;

	t74 = ((x597==x598)%(x599<x600));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x605 = INT64_MIN;
	int32_t x606 = 12;
	int8_t x607 = INT8_MIN;
	int8_t x608 = INT8_MAX;

	t75 = ((x605==x606)%(x607<x608));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x617 = INT16_MIN;
	int32_t x618 = -20;
	int32_t x619 = -258189878;
	int16_t x620 = INT16_MIN;
	int32_t t76 = 250012842;

	t76 = ((x617==x618)%(x619<x620));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x630 = INT64_MIN;
	static int16_t x631 = -93;
	int64_t x632 = INT64_MAX;
	int32_t t77 = -103104020;

	t77 = ((x629==x630)%(x631<x632));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x638 = UINT32_MAX;
	int16_t x639 = INT16_MIN;
	static volatile int64_t x640 = -1LL;
	int32_t t78 = -11;

	t78 = ((x637==x638)%(x639<x640));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x645 = 3U;
	static volatile int16_t x646 = INT16_MIN;
	int32_t x647 = INT32_MIN;
	volatile uint16_t x648 = 463U;

	t79 = ((x645==x646)%(x647<x648));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x649 = UINT16_MAX;
	uint32_t x650 = 3120U;
	int32_t x651 = INT32_MIN;
	volatile int8_t x652 = INT8_MIN;
	volatile int32_t t80 = 506698;

	t80 = ((x649==x650)%(x651<x652));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x653 = INT32_MAX;
	volatile int16_t x655 = INT16_MIN;
	volatile uint32_t x656 = UINT32_MAX;
	static volatile int32_t t81 = -189;

	t81 = ((x653==x654)%(x655<x656));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x657 = UINT64_MAX;
	static int32_t x659 = -175;
	static uint16_t x660 = UINT16_MAX;
	volatile int32_t t82 = 1;

	t82 = ((x657==x658)%(x659<x660));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x666 = -1;
	int16_t x667 = INT16_MIN;
	uint8_t x668 = 3U;
	int32_t t83 = 25;

	t83 = ((x665==x666)%(x667<x668));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x669 = 35;
	int16_t x670 = INT16_MIN;
	int8_t x672 = INT8_MIN;

	t84 = ((x669==x670)%(x671<x672));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x677 = INT16_MAX;
	volatile int64_t x679 = INT64_MIN;
	static volatile int32_t t85 = 0;

	t85 = ((x677==x678)%(x679<x680));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x690 = INT32_MIN;
	volatile uint8_t x691 = 62U;
	int32_t t86 = 159;

	t86 = ((x689==x690)%(x691<x692));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x695 = -4;
	volatile int32_t t87 = -11;

	t87 = ((x693==x694)%(x695<x696));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x702 = UINT16_MAX;
	uint64_t x703 = 545008132810531LLU;
	static int64_t x704 = -1LL;
	int32_t t88 = 489366;

	t88 = ((x701==x702)%(x703<x704));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x705 = 17721U;
	int8_t x707 = 8;
	static int32_t t89 = -857;

	t89 = ((x705==x706)%(x707<x708));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x709 = INT8_MIN;
	static uint16_t x710 = 3181U;
	static int64_t x711 = INT64_MIN;
	static volatile int32_t t90 = 53766719;

	t90 = ((x709==x710)%(x711<x712));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x713 = 0;
	int32_t x714 = 319683267;
	static uint16_t x715 = 0U;
	volatile int32_t x716 = INT32_MAX;
	int32_t t91 = -751918;

	t91 = ((x713==x714)%(x715<x716));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x725 = UINT64_MAX;
	int8_t x726 = -1;
	int8_t x728 = 4;
	int32_t t92 = 21041;

	t92 = ((x725==x726)%(x727<x728));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x749 = INT32_MAX;
	int16_t x750 = 1;
	uint8_t x751 = 1U;
	static int8_t x752 = INT8_MAX;
	static int32_t t93 = 14;

	t93 = ((x749==x750)%(x751<x752));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x761 = UINT8_MAX;
	int64_t x762 = INT64_MIN;
	static int64_t x763 = -1LL;
	static int32_t t94 = -2881632;

	t94 = ((x761==x762)%(x763<x764));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x781 = INT8_MAX;
	uint16_t x782 = UINT16_MAX;
	volatile int16_t x783 = INT16_MAX;
	uint64_t x784 = UINT64_MAX;
	volatile int32_t t95 = -2;

	t95 = ((x781==x782)%(x783<x784));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x785 = INT32_MAX;
	volatile uint32_t x786 = UINT32_MAX;
	int8_t x787 = -29;
	volatile int32_t t96 = 81;

	t96 = ((x785==x786)%(x787<x788));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x789 = 27;
	int8_t x791 = INT8_MAX;
	int16_t x792 = INT16_MAX;
	static int32_t t97 = -974630;

	t97 = ((x789==x790)%(x791<x792));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x798 = INT64_MIN;
	uint8_t x799 = 0U;
	volatile uint16_t x800 = 1U;
	static volatile int32_t t98 = 62;

	t98 = ((x797==x798)%(x799<x800));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x801 = UINT16_MAX;
	int32_t x802 = INT32_MIN;
	int8_t x803 = -42;
	int16_t x804 = 0;
	int32_t t99 = 14854;

	t99 = ((x801==x802)%(x803<x804));

	if (t99 != 0) { NG(); } else { ; }
	
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

