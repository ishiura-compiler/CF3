#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x13 = -1LL;
static volatile int16_t x14 = 97;
static int8_t x16 = INT8_MAX;
int8_t x17 = INT8_MAX;
uint16_t x30 = UINT16_MAX;
uint32_t x47 = UINT32_MAX;
uint32_t x48 = 460734527U;
static int8_t x67 = INT8_MIN;
int8_t x69 = INT8_MIN;
int16_t x76 = INT16_MAX;
int64_t x81 = -5284498LL;
volatile int64_t t7 = -57958103327LL;
int8_t x95 = -1;
static uint16_t x96 = 24U;
int8_t x105 = INT8_MAX;
static volatile uint32_t x111 = 158771340U;
uint64_t x116 = 7LLU;
int32_t t12 = -363656;
int32_t x131 = -335;
uint16_t x134 = 7U;
int16_t x145 = INT16_MIN;
uint16_t x146 = UINT16_MAX;
int16_t x147 = INT16_MAX;
static uint32_t x155 = UINT32_MAX;
int64_t x163 = INT64_MIN;
int16_t x167 = 695;
uint64_t x170 = 1508LLU;
volatile uint64_t x173 = 757928203633667LLU;
int64_t x178 = INT64_MAX;
int64_t x184 = 127809394LL;
uint16_t x186 = 50U;
int64_t x191 = INT64_MIN;
static int16_t x192 = 11350;
static uint64_t x196 = UINT64_MAX;
int32_t x211 = INT32_MAX;
static uint64_t x219 = 516369LLU;
volatile uint64_t x232 = 32725577LLU;
int64_t x258 = INT64_MIN;
int32_t t37 = -991;
int8_t x261 = INT8_MIN;
int32_t x262 = INT32_MIN;
int32_t x281 = 80088;
int16_t x297 = INT16_MAX;
int32_t x316 = INT32_MAX;
static uint64_t x320 = UINT64_MAX;
volatile int32_t x343 = INT32_MAX;
int16_t x344 = INT16_MAX;
volatile int32_t t46 = 3684348;
int32_t t48 = -608894187;
uint32_t t50 = 980U;
static volatile int32_t t51 = -988411483;
int16_t x385 = INT16_MIN;
static int64_t t54 = INT64_MAX;
int32_t x413 = INT32_MIN;
int8_t x414 = INT8_MIN;
volatile int32_t t55 = INT32_MIN;
static uint16_t x451 = 11311U;
int8_t x459 = INT8_MAX;
static int8_t x473 = -1;
int32_t t63 = -7941973;
uint16_t x481 = 250U;
uint64_t x492 = UINT64_MAX;
static int8_t x493 = INT8_MAX;
volatile int32_t t66 = 1;
volatile int32_t t67 = -11;
volatile int16_t x507 = -7;
volatile int32_t t69 = -233958589;
int64_t x514 = 28103417820LL;
volatile int8_t x515 = -1;
volatile uint32_t t72 = 183810206U;
volatile int8_t x534 = -3;
static int32_t t75 = 1;
static int32_t t76 = INT32_MAX;
volatile uint8_t x556 = 123U;
volatile uint16_t x558 = 10816U;
int8_t x561 = INT8_MIN;
static uint32_t x566 = UINT32_MAX;
int64_t x568 = INT64_MAX;
uint32_t x569 = 33305U;
volatile int8_t x572 = 5;
static uint64_t x592 = UINT64_MAX;
static int64_t t83 = -10145725LL;
int16_t x595 = 5;
volatile int32_t t84 = 261;
int64_t x605 = 2381244LL;
volatile uint8_t x607 = UINT8_MAX;
int64_t x618 = 147051494LL;
volatile uint16_t x620 = 159U;
int16_t x625 = INT16_MIN;
uint32_t x628 = UINT32_MAX;
volatile uint8_t x630 = 0U;
int64_t x637 = INT64_MIN;
volatile int16_t x642 = INT16_MAX;
int8_t x661 = 19;
uint32_t x668 = 5055U;
uint64_t x685 = 176912101923656868LLU;
uint8_t x686 = UINT8_MAX;


void f0(void) {
	volatile int16_t x15 = 5;
	int64_t t0 = 82434706592LL;

	t0 = (x13/((x14<=x15)<x16));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 113U;
	static uint16_t x20 = 2143U;
	static volatile int32_t t1 = 2031;

	t1 = (x17/((x18<=x19)<x20));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x29 = 27U;
	int16_t x31 = INT16_MIN;
	int64_t x32 = INT64_MAX;
	volatile uint32_t t2 = 45229U;

	t2 = (x29/((x30<=x31)<x32));

	if (t2 != 27U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x45 = 440539162636542LL;
	int32_t x46 = -4012;
	static volatile int64_t t3 = 49479376578671LL;

	t3 = (x45/((x46<=x47)<x48));

	if (t3 != 440539162636542LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x65 = INT64_MIN;
	uint64_t x66 = UINT64_MAX;
	int64_t x68 = INT64_MAX;
	volatile int64_t t4 = INT64_MIN;

	t4 = (x65/((x66<=x67)<x68));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = -13463;
	uint16_t x72 = UINT16_MAX;
	int32_t t5 = 7978496;

	t5 = (x69/((x70<=x71)<x72));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x73 = INT32_MIN;
	uint32_t x74 = 49000U;
	int16_t x75 = 5624;
	static volatile int32_t t6 = INT32_MIN;

	t6 = (x73/((x74<=x75)<x76));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	uint32_t x84 = 36613U;

	t7 = (x81/((x82<=x83)<x84));

	if (t7 != -5284498LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 527421U;
	int64_t t8 = INT64_MIN;

	t8 = (x93/((x94<=x95)<x96));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x106 = INT16_MIN;
	volatile int64_t x107 = 278129809226LL;
	uint64_t x108 = 16890924354100618LLU;
	static volatile int32_t t9 = -1;

	t9 = (x105/((x106<=x107)<x108));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x109 = INT32_MIN;
	static volatile int32_t x110 = -1;
	static uint32_t x112 = 13748002U;
	static int32_t t10 = INT32_MIN;

	t10 = (x109/((x110<=x111)<x112));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x113 = 903U;
	int64_t x114 = INT64_MAX;
	uint64_t x115 = 1838129709LLU;
	static int32_t t11 = 5;

	t11 = (x113/((x114<=x115)<x116));

	if (t11 != 903) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = -15;
	int16_t x127 = 289;
	static int16_t x128 = INT16_MAX;

	t12 = (x125/((x126<=x127)<x128));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x129 = -175315264454996LL;
	volatile int32_t x130 = INT32_MAX;
	uint8_t x132 = 115U;
	volatile int64_t t13 = -254552783130829467LL;

	t13 = (x129/((x130<=x131)<x132));

	if (t13 != -175315264454996LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x133 = INT32_MIN;
	volatile uint16_t x135 = 8U;
	uint8_t x136 = 2U;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x133/((x134<=x135)<x136));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x137 = -1;
	int8_t x138 = INT8_MIN;
	uint8_t x139 = 14U;
	uint32_t x140 = 5458U;
	int32_t t15 = -1004187;

	t15 = (x137/((x138<=x139)<x140));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x148 = UINT16_MAX;
	volatile int32_t t16 = 821857;

	t16 = (x145/((x146<=x147)<x148));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x149 = 44U;
	int64_t x150 = -1LL;
	uint16_t x151 = 13U;
	uint64_t x152 = 28655849312982208LLU;
	static volatile int32_t t17 = -3246;

	t17 = (x149/((x150<=x151)<x152));

	if (t17 != 44) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x153 = INT64_MIN;
	static uint16_t x154 = 447U;
	int32_t x156 = 3;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x153/((x154<=x155)<x156));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x157 = 896246835U;
	volatile int64_t x158 = 29586LL;
	volatile int8_t x159 = INT8_MAX;
	static uint32_t x160 = 995368U;
	volatile uint32_t t19 = 532808390U;

	t19 = (x157/((x158<=x159)<x160));

	if (t19 != 896246835U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile int32_t t20 = 3770;

	t20 = (x161/((x162<=x163)<x164));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x165 = -1;
	static int64_t x166 = INT64_MIN;
	uint16_t x168 = 3679U;
	int32_t t21 = -1;

	t21 = (x165/((x166<=x167)<x168));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x169 = INT16_MIN;
	int32_t x171 = -1;
	volatile uint32_t x172 = UINT32_MAX;
	int32_t t22 = -1;

	t22 = (x169/((x170<=x171)<x172));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x174 = INT16_MIN;
	static int64_t x175 = INT64_MAX;
	uint16_t x176 = 3U;
	static volatile uint64_t t23 = 1263761LLU;

	t23 = (x173/((x174<=x175)<x176));

	if (t23 != 757928203633667LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x177 = -1LL;
	uint64_t x179 = 105166250LLU;
	int64_t x180 = INT64_MAX;
	int64_t t24 = -1LL;

	t24 = (x177/((x178<=x179)<x180));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x181 = -13;
	int16_t x182 = -3428;
	int32_t x183 = -1;
	volatile int32_t t25 = -2356;

	t25 = (x181/((x182<=x183)<x184));

	if (t25 != -13) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x185 = 27U;
	static int16_t x187 = INT16_MIN;
	volatile int64_t x188 = INT64_MAX;
	volatile uint32_t t26 = 918279U;

	t26 = (x185/((x186<=x187)<x188));

	if (t26 != 27U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x189 = -1;
	int64_t x190 = INT64_MIN;
	int32_t t27 = 40279;

	t27 = (x189/((x190<=x191)<x192));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x193 = UINT32_MAX;
	static int64_t x194 = INT64_MIN;
	int16_t x195 = -1;
	static volatile uint32_t t28 = UINT32_MAX;

	t28 = (x193/((x194<=x195)<x196));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x205 = -1;
	int8_t x206 = 2;
	volatile int32_t x207 = INT32_MIN;
	static uint16_t x208 = UINT16_MAX;
	int32_t t29 = -173787;

	t29 = (x205/((x206<=x207)<x208));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x209 = INT64_MIN;
	volatile uint8_t x210 = 26U;
	uint32_t x212 = UINT32_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x209/((x210<=x211)<x212));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x213 = 48U;
	int64_t x214 = 0LL;
	int8_t x215 = 0;
	volatile uint32_t x216 = UINT32_MAX;
	volatile int32_t t31 = -90;

	t31 = (x213/((x214<=x215)<x216));

	if (t31 != 48) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x217 = 11U;
	volatile int32_t x218 = -1;
	volatile int64_t x220 = INT64_MAX;
	static uint32_t t32 = 240894817U;

	t32 = (x217/((x218<=x219)<x220));

	if (t32 != 11U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x221 = INT32_MAX;
	static uint8_t x222 = UINT8_MAX;
	uint64_t x223 = 4282LLU;
	int32_t x224 = INT32_MAX;
	int32_t t33 = INT32_MAX;

	t33 = (x221/((x222<=x223)<x224));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x229 = 0U;
	volatile int32_t x230 = -5284;
	int64_t x231 = INT64_MIN;
	int32_t t34 = 145052;

	t34 = (x229/((x230<=x231)<x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x241 = -1LL;
	volatile int32_t x242 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	static int32_t x244 = 94878;
	volatile int64_t t35 = 1251048LL;

	t35 = (x241/((x242<=x243)<x244));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x249 = INT64_MIN;
	static int64_t x250 = INT64_MAX;
	static uint16_t x251 = 0U;
	int8_t x252 = INT8_MAX;
	int64_t t36 = INT64_MIN;

	t36 = (x249/((x250<=x251)<x252));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x257 = 25815721;
	int16_t x259 = -3;
	volatile uint8_t x260 = UINT8_MAX;

	t37 = (x257/((x258<=x259)<x260));

	if (t37 != 25815721) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x263 = -1;
	static int64_t x264 = 3514222705533882811LL;
	volatile int32_t t38 = -1828;

	t38 = (x261/((x262<=x263)<x264));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x282 = 29280U;
	static uint64_t x283 = 3062110264LLU;
	uint64_t x284 = UINT64_MAX;
	int32_t t39 = 2512594;

	t39 = (x281/((x282<=x283)<x284));

	if (t39 != 80088) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = -1;
	volatile int16_t x296 = 5234;
	int64_t t40 = -1485074LL;

	t40 = (x293/((x294<=x295)<x296));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x298 = UINT8_MAX;
	static int64_t x299 = 903871586723LL;
	uint16_t x300 = 29058U;
	int32_t t41 = 19512;

	t41 = (x297/((x298<=x299)<x300));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x305 = UINT64_MAX;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	static uint64_t x308 = 128434956790469LLU;
	static volatile uint64_t t42 = UINT64_MAX;

	t42 = (x305/((x306<=x307)<x308));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x313 = INT16_MIN;
	uint32_t x314 = 972377U;
	int8_t x315 = -1;
	int32_t t43 = -604;

	t43 = (x313/((x314<=x315)<x316));

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x317 = 6U;
	volatile int32_t x318 = -711652;
	uint8_t x319 = 30U;
	int32_t t44 = 4140614;

	t44 = (x317/((x318<=x319)<x320));

	if (t44 != 6) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x325 = 392U;
	static int32_t x326 = INT32_MIN;
	uint16_t x327 = 56U;
	int64_t x328 = 27889LL;
	volatile uint32_t t45 = 1U;

	t45 = (x325/((x326<=x327)<x328));

	if (t45 != 392U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x341 = -139661;
	int64_t x342 = INT64_MIN;

	t46 = (x341/((x342<=x343)<x344));

	if (t46 != -139661) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x349 = UINT32_MAX;
	static volatile int8_t x350 = 1;
	static uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 1920U;
	uint32_t t47 = UINT32_MAX;

	t47 = (x349/((x350<=x351)<x352));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x357 = -1;
	uint32_t x358 = 4836120U;
	uint16_t x359 = UINT16_MAX;
	volatile uint8_t x360 = 31U;

	t48 = (x357/((x358<=x359)<x360));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x365 = -242396;
	int8_t x366 = INT8_MIN;
	int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t49 = -50;

	t49 = (x365/((x366<=x367)<x368));

	if (t49 != -242396) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x373 = 267U;
	volatile uint64_t x374 = 42967957258276577LLU;
	int8_t x375 = 32;
	static int32_t x376 = INT32_MAX;

	t50 = (x373/((x374<=x375)<x376));

	if (t50 != 267U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x377 = INT8_MAX;
	static int32_t x378 = INT32_MIN;
	static int8_t x379 = -1;
	int8_t x380 = INT8_MAX;

	t51 = (x377/((x378<=x379)<x380));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x386 = INT8_MIN;
	volatile uint8_t x387 = 0U;
	uint8_t x388 = UINT8_MAX;
	static volatile int32_t t52 = 127936463;

	t52 = (x385/((x386<=x387)<x388));

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x389 = 5184924324814445LL;
	static volatile int16_t x390 = 1931;
	uint8_t x391 = UINT8_MAX;
	uint64_t x392 = 58367209864LLU;
	volatile int64_t t53 = 1670781009543LL;

	t53 = (x389/((x390<=x391)<x392));

	if (t53 != 5184924324814445LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x409 = INT64_MAX;
	int64_t x410 = 2506375666511762LL;
	uint32_t x411 = UINT32_MAX;
	static int16_t x412 = 564;

	t54 = (x409/((x410<=x411)<x412));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x415 = INT64_MIN;
	int64_t x416 = 1008LL;

	t55 = (x413/((x414<=x415)<x416));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x417 = INT64_MIN;
	volatile uint32_t x418 = 31566U;
	uint32_t x419 = UINT32_MAX;
	uint64_t x420 = 10771LLU;
	volatile int64_t t56 = INT64_MIN;

	t56 = (x417/((x418<=x419)<x420));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x425 = INT16_MIN;
	static int16_t x426 = 8;
	volatile int8_t x427 = 1;
	int16_t x428 = INT16_MAX;
	int32_t t57 = 104254964;

	t57 = (x425/((x426<=x427)<x428));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x433 = 63U;
	static int32_t x434 = -1;
	volatile int32_t x435 = 7;
	uint16_t x436 = UINT16_MAX;
	int32_t t58 = 1841;

	t58 = (x433/((x434<=x435)<x436));

	if (t58 != 63) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x449 = 13;
	int32_t x450 = -1;
	int16_t x452 = 1029;
	volatile int32_t t59 = 60507781;

	t59 = (x449/((x450<=x451)<x452));

	if (t59 != 13) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x457 = UINT32_MAX;
	int32_t x458 = INT32_MIN;
	uint16_t x460 = UINT16_MAX;
	uint32_t t60 = UINT32_MAX;

	t60 = (x457/((x458<=x459)<x460));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x465 = 12572249U;
	uint8_t x466 = 0U;
	int64_t x467 = 25948LL;
	uint8_t x468 = 2U;
	uint32_t t61 = 2041316887U;

	t61 = (x465/((x466<=x467)<x468));

	if (t61 != 12572249U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x474 = INT64_MAX;
	volatile int64_t x475 = INT64_MIN;
	volatile int32_t x476 = INT32_MAX;
	volatile int32_t t62 = -82212;

	t62 = (x473/((x474<=x475)<x476));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x477 = 80U;
	int64_t x478 = -1LL;
	static volatile int16_t x479 = -1;
	static volatile int8_t x480 = 9;

	t63 = (x477/((x478<=x479)<x480));

	if (t63 != 80) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x482 = 710845U;
	uint8_t x483 = 4U;
	uint64_t x484 = UINT64_MAX;
	int32_t t64 = 211396145;

	t64 = (x481/((x482<=x483)<x484));

	if (t64 != 250) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x489 = 1U;
	volatile uint32_t x490 = UINT32_MAX;
	volatile uint8_t x491 = 3U;
	int32_t t65 = -19668075;

	t65 = (x489/((x490<=x491)<x492));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x494 = -3455198279483LL;
	volatile int64_t x495 = -1LL;
	volatile int16_t x496 = 8;

	t66 = (x493/((x494<=x495)<x496));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x497 = INT16_MIN;
	int16_t x498 = 0;
	int64_t x499 = -797LL;
	uint32_t x500 = 9U;

	t67 = (x497/((x498<=x499)<x500));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x505 = INT16_MIN;
	static uint64_t x506 = 154025LLU;
	static int8_t x508 = 3;
	volatile int32_t t68 = -4118678;

	t68 = (x505/((x506<=x507)<x508));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x509 = INT8_MIN;
	int8_t x510 = 0;
	int64_t x511 = INT64_MAX;
	static uint16_t x512 = 2U;

	t69 = (x509/((x510<=x511)<x512));

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x513 = INT8_MIN;
	int16_t x516 = INT16_MAX;
	volatile int32_t t70 = -7712380;

	t70 = (x513/((x514<=x515)<x516));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x525 = UINT16_MAX;
	int64_t x526 = INT64_MIN;
	int8_t x527 = -1;
	int32_t x528 = INT32_MAX;
	volatile int32_t t71 = 472120;

	t71 = (x525/((x526<=x527)<x528));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x529 = 29U;
	volatile int32_t x530 = INT32_MAX;
	int32_t x531 = -24382;
	static uint8_t x532 = 19U;

	t72 = (x529/((x530<=x531)<x532));

	if (t72 != 29U) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x533 = 5418690LLU;
	static int64_t x535 = -705197059334101165LL;
	int64_t x536 = INT64_MAX;
	uint64_t t73 = 62059710LLU;

	t73 = (x533/((x534<=x535)<x536));

	if (t73 != 5418690LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x541 = INT32_MAX;
	int8_t x542 = -1;
	static int8_t x543 = -1;
	uint8_t x544 = 5U;
	volatile int32_t t74 = INT32_MAX;

	t74 = (x541/((x542<=x543)<x544));

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x545 = -1;
	uint32_t x546 = 658153U;
	static volatile uint16_t x547 = UINT16_MAX;
	static volatile uint16_t x548 = 84U;

	t75 = (x545/((x546<=x547)<x548));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x549 = INT32_MAX;
	volatile int8_t x550 = INT8_MIN;
	uint64_t x551 = 2773302627687677551LLU;
	uint32_t x552 = 371373U;

	t76 = (x549/((x550<=x551)<x552));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x553 = INT32_MIN;
	static int64_t x554 = INT64_MIN;
	static uint32_t x555 = 3465U;
	int32_t t77 = INT32_MIN;

	t77 = (x553/((x554<=x555)<x556));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x557 = UINT16_MAX;
	int64_t x559 = INT64_MIN;
	volatile uint8_t x560 = 6U;
	volatile int32_t t78 = -3;

	t78 = (x557/((x558<=x559)<x560));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x562 = INT64_MIN;
	int8_t x563 = INT8_MAX;
	int16_t x564 = 15750;
	int32_t t79 = -16000418;

	t79 = (x561/((x562<=x563)<x564));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x565 = INT16_MIN;
	static int8_t x567 = INT8_MIN;
	static int32_t t80 = 15061;

	t80 = (x565/((x566<=x567)<x568));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x570 = INT16_MIN;
	int32_t x571 = -108;
	volatile uint32_t t81 = 1247623715U;

	t81 = (x569/((x570<=x571)<x572));

	if (t81 != 33305U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x581 = INT64_MIN;
	static uint64_t x582 = 1LLU;
	volatile uint16_t x583 = 118U;
	uint16_t x584 = 41U;
	int64_t t82 = INT64_MIN;

	t82 = (x581/((x582<=x583)<x584));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x589 = -485149LL;
	int32_t x590 = INT32_MIN;
	int64_t x591 = INT64_MAX;

	t83 = (x589/((x590<=x591)<x592));

	if (t83 != -485149LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x593 = -1;
	int64_t x594 = 52753596450908LL;
	int64_t x596 = 334748145LL;

	t84 = (x593/((x594<=x595)<x596));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x606 = INT64_MAX;
	int8_t x608 = 1;
	static volatile int64_t t85 = -958828016LL;

	t85 = (x605/((x606<=x607)<x608));

	if (t85 != 2381244LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x609 = -673LL;
	uint32_t x610 = 784920521U;
	int64_t x611 = INT64_MIN;
	uint8_t x612 = 92U;
	int64_t t86 = 77047827508LL;

	t86 = (x609/((x610<=x611)<x612));

	if (t86 != -673LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x617 = 0;
	uint8_t x619 = UINT8_MAX;
	volatile int32_t t87 = 10;

	t87 = (x617/((x618<=x619)<x620));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x626 = INT16_MAX;
	int16_t x627 = -1;
	int32_t t88 = -1433;

	t88 = (x625/((x626<=x627)<x628));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x629 = 154LLU;
	int16_t x631 = -1;
	uint16_t x632 = UINT16_MAX;
	volatile uint64_t t89 = 5909097388043LLU;

	t89 = (x629/((x630<=x631)<x632));

	if (t89 != 154LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x633 = -1;
	uint32_t x634 = 1779091U;
	static int16_t x635 = INT16_MAX;
	uint16_t x636 = UINT16_MAX;
	int32_t t90 = 196920985;

	t90 = (x633/((x634<=x635)<x636));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x638 = INT32_MIN;
	int16_t x639 = INT16_MIN;
	uint8_t x640 = UINT8_MAX;
	int64_t t91 = INT64_MIN;

	t91 = (x637/((x638<=x639)<x640));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x641 = 16099U;
	static int16_t x643 = -1;
	int16_t x644 = 4038;
	int32_t t92 = -209;

	t92 = (x641/((x642<=x643)<x644));

	if (t92 != 16099) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x649 = UINT8_MAX;
	static uint8_t x650 = 10U;
	volatile int64_t x651 = -1LL;
	uint64_t x652 = 191388847696LLU;
	static int32_t t93 = -18325;

	t93 = (x649/((x650<=x651)<x652));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x653 = INT64_MIN;
	uint16_t x654 = UINT16_MAX;
	uint16_t x655 = 5311U;
	volatile uint32_t x656 = UINT32_MAX;
	int64_t t94 = INT64_MIN;

	t94 = (x653/((x654<=x655)<x656));

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x662 = -197004305;
	int16_t x663 = INT16_MAX;
	int64_t x664 = INT64_MAX;
	volatile int32_t t95 = -2;

	t95 = (x661/((x662<=x663)<x664));

	if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x665 = INT16_MAX;
	int8_t x666 = 5;
	static volatile int64_t x667 = INT64_MIN;
	volatile int32_t t96 = 26666;

	t96 = (x665/((x666<=x667)<x668));

	if (t96 != 32767) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x673 = -1;
	volatile uint8_t x674 = UINT8_MAX;
	int64_t x675 = -1LL;
	static uint64_t x676 = 103568816LLU;
	volatile int32_t t97 = 76114001;

	t97 = (x673/((x674<=x675)<x676));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x677 = -15618;
	int32_t x678 = 415656248;
	static int8_t x679 = 8;
	int32_t x680 = INT32_MAX;
	volatile int32_t t98 = 1;

	t98 = (x677/((x678<=x679)<x680));

	if (t98 != -15618) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x687 = 7758996LL;
	volatile int8_t x688 = INT8_MAX;
	volatile uint64_t t99 = 160LLU;

	t99 = (x685/((x686<=x687)<x688));

	if (t99 != 176912101923656868LLU) { NG(); } else { ; }
	
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

