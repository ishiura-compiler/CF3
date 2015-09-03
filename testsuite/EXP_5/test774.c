#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
volatile int32_t t1 = -12827102;
static int32_t x11 = INT32_MAX;
int32_t x12 = 1;
int32_t t2 = 6435114;
int32_t x29 = INT32_MAX;
int8_t x30 = INT8_MIN;
int32_t x31 = -1;
uint32_t x33 = 3538U;
static volatile uint8_t x41 = UINT8_MAX;
static int64_t x44 = -63LL;
uint32_t x53 = UINT32_MAX;
uint16_t x58 = UINT16_MAX;
int32_t x61 = 27056;
volatile int64_t x64 = INT64_MIN;
int8_t x65 = 1;
volatile uint64_t x72 = 4888745219974318LLU;
int32_t x87 = -1;
volatile int32_t t12 = -235280410;
uint16_t x98 = 3U;
int32_t t14 = 141945758;
int64_t x123 = INT64_MIN;
uint8_t x137 = 65U;
int8_t x139 = 16;
uint32_t x150 = 1U;
static int64_t x151 = -2585396LL;
static uint32_t x160 = 26U;
static int32_t t20 = -691308149;
int64_t x164 = -1LL;
volatile uint32_t t21 = UINT32_MAX;
int64_t x175 = INT64_MIN;
static int8_t x184 = -1;
volatile int8_t x193 = INT8_MAX;
uint64_t x194 = 57025867969484LLU;
int32_t x195 = INT32_MIN;
int32_t t27 = -148;
static volatile int8_t x206 = -44;
uint64_t x209 = 30832881LLU;
static int32_t x211 = INT32_MIN;
static volatile int32_t t31 = -1;
uint64_t x247 = 6067804726172211LLU;
uint32_t x258 = UINT32_MAX;
int32_t t36 = -44;
int32_t x281 = 0;
static int8_t x283 = -13;
int32_t x293 = 27309364;
int16_t x303 = INT16_MIN;
int8_t x310 = 11;
int32_t x315 = 2;
uint64_t x317 = 996LLU;
int8_t x319 = INT8_MIN;
uint8_t x324 = 1U;
static int8_t x326 = 1;
static uint8_t x338 = UINT8_MAX;
int64_t x340 = INT64_MIN;
int32_t t49 = -77;
int64_t x350 = INT64_MAX;
uint64_t t50 = 735851900306LLU;
uint8_t x355 = UINT8_MAX;
volatile uint64_t t51 = 31479528923LLU;
int16_t x363 = -1;
static int32_t t53 = INT32_MAX;
uint8_t x371 = UINT8_MAX;
uint8_t x374 = UINT8_MAX;
volatile int16_t x393 = 0;
int8_t x397 = 7;
int16_t x402 = INT16_MIN;
uint16_t x409 = 21U;
int64_t x412 = INT64_MIN;
int8_t x416 = INT8_MAX;
uint32_t x421 = 21U;
static int32_t x422 = INT32_MAX;
static volatile uint32_t t63 = 61U;
int16_t x427 = INT16_MIN;
uint32_t x433 = UINT32_MAX;
uint16_t x453 = 10209U;
int16_t x464 = -377;
int64_t x465 = 119499830269LL;
int64_t x468 = -7163356208618LL;
int8_t x469 = 1;
int16_t x483 = -3868;
static int64_t x489 = INT64_MAX;
uint16_t x490 = UINT16_MAX;
uint8_t x507 = 5U;
volatile uint32_t t74 = 153745590U;
int64_t x512 = INT64_MIN;
volatile int32_t t76 = -131869429;
static uint8_t x549 = 1U;
int32_t x550 = 318570994;
uint8_t x555 = 93U;
int32_t x564 = INT32_MAX;
int32_t t81 = -1;
static volatile uint32_t x569 = UINT32_MAX;
static uint64_t x580 = 90654753946447LLU;
uint16_t x595 = UINT16_MAX;
volatile int32_t t86 = 101;
static uint8_t x617 = 7U;
uint32_t x618 = 4U;
uint8_t x620 = UINT8_MAX;
volatile int16_t x623 = INT16_MIN;
volatile uint16_t x625 = 1U;
int16_t x628 = INT16_MAX;
int32_t t91 = -2832;
volatile int16_t x631 = INT16_MIN;
static int32_t t92 = INT32_MAX;
uint16_t x641 = 6U;
int64_t x642 = INT64_MAX;
uint8_t x658 = UINT8_MAX;
uint16_t x674 = 4U;
int32_t x676 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int8_t x2 = INT8_MAX;
	volatile uint32_t x3 = UINT32_MAX;
	volatile int32_t t0 = INT32_MAX;

	t0 = (x1>>((x2%x3)==x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	uint32_t x6 = 19U;
	uint16_t x7 = 2207U;
	static int16_t x8 = INT16_MAX;

	t1 = (x5>>((x6%x7)==x8));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 253698049;
	int64_t x10 = 118190LL;

	t2 = (x9>>((x10%x11)==x12));

	if (t2 != 253698049) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = -1LL;
	volatile int16_t x19 = -1;
	volatile uint16_t x20 = 1U;
	uint64_t t3 = UINT64_MAX;

	t3 = (x17>>((x18%x19)==x20));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x32 = -1;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x29>>((x30%x31)==x32));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x34 = INT64_MIN;
	static int8_t x35 = 1;
	uint16_t x36 = 11220U;
	uint32_t t5 = 757750580U;

	t5 = (x33>>((x34%x35)==x36));

	if (t5 != 3538U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x42 = INT8_MIN;
	int8_t x43 = 1;
	volatile int32_t t6 = 163;

	t6 = (x41>>((x42%x43)==x44));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x54 = 283357978;
	uint64_t x55 = 241096925906426LLU;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t7 = UINT32_MAX;

	t7 = (x53>>((x54%x55)==x56));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x57 = 4U;
	int16_t x59 = INT16_MAX;
	int64_t x60 = -1LL;
	static volatile int32_t t8 = 88196188;

	t8 = (x57>>((x58%x59)==x60));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	static volatile int32_t t9 = 7065806;

	t9 = (x61>>((x62%x63)==x64));

	if (t9 != 27056) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x66 = 5434688;
	int32_t x67 = INT32_MIN;
	int8_t x68 = 47;
	int32_t t10 = 15832;

	t10 = (x65>>((x66%x67)==x68));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 6U;
	uint8_t x70 = 57U;
	static int64_t x71 = -84LL;
	int32_t t11 = -1650;

	t11 = (x69>>((x70%x71)==x72));

	if (t11 != 6) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 12U;
	volatile int8_t x86 = 45;
	int16_t x88 = 1628;

	t12 = (x85>>((x86%x87)==x88));

	if (t12 != 12) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x97 = 0U;
	volatile uint16_t x99 = 197U;
	int8_t x100 = -2;
	volatile int32_t t13 = -7;

	t13 = (x97>>((x98%x99)==x100));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = INT64_MIN;
	volatile uint32_t x107 = UINT32_MAX;
	volatile uint64_t x108 = UINT64_MAX;

	t14 = (x105>>((x106%x107)==x108));

	if (t14 != 255) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x109 = 2906516874LLU;
	volatile uint32_t x110 = 6274U;
	int64_t x111 = -2537218077LL;
	int32_t x112 = 91989;
	static uint64_t t15 = 176708161982LLU;

	t15 = (x109>>((x110%x111)==x112));

	if (t15 != 2906516874LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x121 = INT16_MAX;
	static uint8_t x122 = 0U;
	int64_t x124 = INT64_MAX;
	volatile int32_t t16 = -1;

	t16 = (x121>>((x122%x123)==x124));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x133 = UINT64_MAX;
	static int64_t x134 = INT64_MIN;
	int8_t x135 = -24;
	static uint64_t x136 = 80048428491225165LLU;
	uint64_t t17 = UINT64_MAX;

	t17 = (x133>>((x134%x135)==x136));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x138 = INT16_MAX;
	int64_t x140 = 113244LL;
	volatile int32_t t18 = 71;

	t18 = (x137>>((x138%x139)==x140));

	if (t18 != 65) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x149 = 20U;
	int16_t x152 = -1;
	volatile int32_t t19 = 29;

	t19 = (x149>>((x150%x151)==x152));

	if (t19 != 20) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x157 = UINT8_MAX;
	int8_t x158 = -1;
	int16_t x159 = INT16_MIN;

	t20 = (x157>>((x158%x159)==x160));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x161 = UINT32_MAX;
	uint64_t x162 = 6LLU;
	int8_t x163 = INT8_MIN;

	t21 = (x161>>((x162%x163)==x164));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x173 = 1U;
	volatile int8_t x174 = INT8_MIN;
	int16_t x176 = INT16_MAX;
	volatile int32_t t22 = 46874288;

	t22 = (x173>>((x174%x175)==x176));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x177 = INT32_MAX;
	uint16_t x178 = UINT16_MAX;
	uint16_t x179 = UINT16_MAX;
	int64_t x180 = INT64_MAX;
	static volatile int32_t t23 = INT32_MAX;

	t23 = (x177>>((x178%x179)==x180));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x181 = 46690U;
	uint64_t x182 = 47859241231707LLU;
	static int16_t x183 = -7689;
	volatile uint32_t t24 = 1U;

	t24 = (x181>>((x182%x183)==x184));

	if (t24 != 46690U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x185 = INT64_MAX;
	int64_t x186 = -1LL;
	static int64_t x187 = -22451120753933LL;
	uint8_t x188 = 12U;
	static int64_t t25 = INT64_MAX;

	t25 = (x185>>((x186%x187)==x188));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x189 = INT64_MAX;
	static int32_t x190 = 82349111;
	volatile uint8_t x191 = 2U;
	uint32_t x192 = 399981U;
	static int64_t t26 = INT64_MAX;

	t26 = (x189>>((x190%x191)==x192));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x196 = INT64_MIN;

	t27 = (x193>>((x194%x195)==x196));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x201 = 39U;
	int16_t x202 = -1;
	int32_t x203 = INT32_MAX;
	static uint64_t x204 = UINT64_MAX;
	volatile int32_t t28 = -20153008;

	t28 = (x201>>((x202%x203)==x204));

	if (t28 != 19) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x205 = UINT64_MAX;
	int64_t x207 = 50916503315LL;
	static uint16_t x208 = 1U;
	uint64_t t29 = UINT64_MAX;

	t29 = (x205>>((x206%x207)==x208));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x210 = UINT32_MAX;
	static volatile int32_t x212 = -1;
	volatile uint64_t t30 = 829966941112769769LLU;

	t30 = (x209>>((x210%x211)==x212));

	if (t30 != 30832881LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x237 = UINT8_MAX;
	static volatile int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	int64_t x240 = 102573638666LL;

	t31 = (x237>>((x238%x239)==x240));

	if (t31 != 255) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x246 = 1U;
	uint16_t x248 = 104U;
	volatile int32_t t32 = INT32_MAX;

	t32 = (x245>>((x246%x247)==x248));

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x249 = 1258U;
	static int16_t x250 = -929;
	static int16_t x251 = -6851;
	int32_t x252 = -114;
	uint32_t t33 = 619067U;

	t33 = (x249>>((x250%x251)==x252));

	if (t33 != 1258U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MAX;
	static int8_t x255 = INT8_MIN;
	uint64_t x256 = UINT64_MAX;
	static volatile int32_t t34 = -1354;

	t34 = (x253>>((x254%x255)==x256));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x257 = 5968U;
	int8_t x259 = -2;
	static int64_t x260 = INT64_MIN;
	uint32_t t35 = 629426611U;

	t35 = (x257>>((x258%x259)==x260));

	if (t35 != 5968U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x265 = 825U;
	uint32_t x266 = UINT32_MAX;
	static int16_t x267 = -2041;
	static volatile int64_t x268 = -1LL;

	t36 = (x265>>((x266%x267)==x268));

	if (t36 != 825) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x282 = INT64_MIN;
	volatile int16_t x284 = -1;
	volatile int32_t t37 = 5;

	t37 = (x281>>((x282%x283)==x284));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x285 = 2500;
	volatile uint32_t x286 = 57U;
	static int64_t x287 = -8174781068525LL;
	static volatile int32_t x288 = 7530045;
	volatile int32_t t38 = 289945;

	t38 = (x285>>((x286%x287)==x288));

	if (t38 != 2500) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x289 = 3943;
	int64_t x290 = INT64_MIN;
	uint8_t x291 = UINT8_MAX;
	int16_t x292 = -8099;
	int32_t t39 = 0;

	t39 = (x289>>((x290%x291)==x292));

	if (t39 != 3943) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x294 = -1;
	static uint64_t x295 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t40 = -110653;

	t40 = (x293>>((x294%x295)==x296));

	if (t40 != 27309364) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = -1013;
	volatile int32_t t41 = 44161808;

	t41 = (x297>>((x298%x299)==x300));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x301 = 9;
	uint16_t x302 = 7132U;
	int32_t x304 = INT32_MIN;
	int32_t t42 = -198015094;

	t42 = (x301>>((x302%x303)==x304));

	if (t42 != 9) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x309 = 6U;
	static uint16_t x311 = 24926U;
	static int32_t x312 = -1291694;
	int32_t t43 = 34079;

	t43 = (x309>>((x310%x311)==x312));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x313 = UINT16_MAX;
	int16_t x314 = INT16_MIN;
	int8_t x316 = -63;
	int32_t t44 = -1;

	t44 = (x313>>((x314%x315)==x316));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x318 = INT8_MAX;
	int32_t x320 = INT32_MIN;
	uint64_t t45 = 5717445LLU;

	t45 = (x317>>((x318%x319)==x320));

	if (t45 != 996LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x321 = 1297LLU;
	int16_t x322 = 27;
	uint16_t x323 = UINT16_MAX;
	uint64_t t46 = 47635LLU;

	t46 = (x321>>((x322%x323)==x324));

	if (t46 != 1297LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x327 = INT32_MAX;
	int32_t x328 = 994096511;
	static volatile int32_t t47 = -157084579;

	t47 = (x325>>((x326%x327)==x328));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x333 = 61U;
	int32_t x334 = 136106;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	volatile int32_t t48 = 0;

	t48 = (x333>>((x334%x335)==x336));

	if (t48 != 61) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x337 = 6857U;
	int8_t x339 = INT8_MIN;

	t49 = (x337>>((x338%x339)==x340));

	if (t49 != 6857) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x349 = 31LLU;
	static int8_t x351 = INT8_MAX;
	uint64_t x352 = 2194456811892647362LLU;

	t50 = (x349>>((x350%x351)==x352));

	if (t50 != 31LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x353 = 3923426668002627LLU;
	volatile int32_t x354 = -599074;
	uint32_t x356 = 4578041U;

	t51 = (x353>>((x354%x355)==x356));

	if (t51 != 3923426668002627LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x357 = 204408485939196785LLU;
	static uint16_t x358 = 412U;
	int32_t x359 = INT32_MIN;
	uint8_t x360 = 10U;
	volatile uint64_t t52 = 3LLU;

	t52 = (x357>>((x358%x359)==x360));

	if (t52 != 204408485939196785LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x361 = INT32_MAX;
	int32_t x362 = -63;
	volatile int8_t x364 = INT8_MIN;

	t53 = (x361>>((x362%x363)==x364));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x369 = INT16_MAX;
	int8_t x370 = INT8_MIN;
	static int8_t x372 = -1;
	volatile int32_t t54 = 15369774;

	t54 = (x369>>((x370%x371)==x372));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x373 = UINT16_MAX;
	static int64_t x375 = -2080311LL;
	static int16_t x376 = INT16_MIN;
	static volatile int32_t t55 = -1040022632;

	t55 = (x373>>((x374%x375)==x376));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x389 = 14U;
	int16_t x390 = -1;
	int32_t x391 = INT32_MIN;
	volatile int64_t x392 = 16486628985LL;
	static volatile uint32_t t56 = 13U;

	t56 = (x389>>((x390%x391)==x392));

	if (t56 != 14U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x394 = -11548;
	volatile int8_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	int32_t t57 = 2;

	t57 = (x393>>((x394%x395)==x396));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = -1;
	volatile int32_t t58 = 490419831;

	t58 = (x397>>((x398%x399)==x400));

	if (t58 != 7) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	static int8_t x404 = INT8_MIN;
	static volatile uint32_t t59 = UINT32_MAX;

	t59 = (x401>>((x402%x403)==x404));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x405 = 204U;
	uint32_t x406 = 2U;
	int16_t x407 = -1;
	uint32_t x408 = 25679441U;
	int32_t t60 = -3;

	t60 = (x405>>((x406%x407)==x408));

	if (t60 != 204) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x410 = INT64_MIN;
	int8_t x411 = 42;
	int32_t t61 = 189;

	t61 = (x409>>((x410%x411)==x412));

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x413 = UINT16_MAX;
	int8_t x414 = INT8_MIN;
	int32_t x415 = 997311960;
	volatile int32_t t62 = 21;

	t62 = (x413>>((x414%x415)==x416));

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x423 = -1LL;
	int32_t x424 = 1;

	t63 = (x421>>((x422%x423)==x424));

	if (t63 != 21U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x425 = 0;
	volatile int8_t x426 = -24;
	static int32_t x428 = 982432062;
	int32_t t64 = -354404438;

	t64 = (x425>>((x426%x427)==x428));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x429 = 11U;
	static int8_t x430 = -2;
	volatile uint32_t x431 = 21U;
	int16_t x432 = INT16_MAX;
	int32_t t65 = -183;

	t65 = (x429>>((x430%x431)==x432));

	if (t65 != 11) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x434 = 822;
	volatile int16_t x435 = INT16_MAX;
	int8_t x436 = INT8_MIN;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (x433>>((x434%x435)==x436));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x437 = INT16_MAX;
	int16_t x438 = -1;
	int32_t x439 = 186380465;
	static int8_t x440 = -1;
	volatile int32_t t67 = -2;

	t67 = (x437>>((x438%x439)==x440));

	if (t67 != 16383) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x454 = UINT32_MAX;
	uint16_t x455 = UINT16_MAX;
	int32_t x456 = INT32_MAX;
	volatile int32_t t68 = -87000524;

	t68 = (x453>>((x454%x455)==x456));

	if (t68 != 10209) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x461 = INT16_MAX;
	volatile int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	volatile int32_t t69 = -13;

	t69 = (x461>>((x462%x463)==x464));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x466 = 812755362U;
	uint16_t x467 = 32U;
	int64_t t70 = 300252926LL;

	t70 = (x465>>((x466%x467)==x468));

	if (t70 != 119499830269LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x470 = INT16_MIN;
	volatile int8_t x471 = -31;
	uint64_t x472 = 28742966572LLU;
	static volatile int32_t t71 = -1603;

	t71 = (x469>>((x470%x471)==x472));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x481 = INT64_MAX;
	int32_t x482 = INT32_MIN;
	int32_t x484 = 16808;
	volatile int64_t t72 = INT64_MAX;

	t72 = (x481>>((x482%x483)==x484));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x491 = -1;
	volatile uint8_t x492 = 44U;
	int64_t t73 = INT64_MAX;

	t73 = (x489>>((x490%x491)==x492));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x505 = 2370807U;
	int8_t x506 = -1;
	volatile uint32_t x508 = UINT32_MAX;

	t74 = (x505>>((x506%x507)==x508));

	if (t74 != 1185403U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x509 = 9U;
	static int8_t x510 = INT8_MIN;
	volatile int16_t x511 = INT16_MIN;
	volatile int32_t t75 = 423213;

	t75 = (x509>>((x510%x511)==x512));

	if (t75 != 9) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x513 = UINT16_MAX;
	int32_t x514 = 278;
	static int8_t x515 = -17;
	uint8_t x516 = 15U;

	t76 = (x513>>((x514%x515)==x516));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x541 = 9751U;
	int16_t x542 = 463;
	volatile int32_t x543 = -2055368;
	static volatile int8_t x544 = -7;
	int32_t t77 = -364;

	t77 = (x541>>((x542%x543)==x544));

	if (t77 != 9751) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x551 = -5902;
	static int32_t x552 = -21052447;
	static int32_t t78 = 547;

	t78 = (x549>>((x550%x551)==x552));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x553 = UINT16_MAX;
	volatile uint8_t x554 = 1U;
	static volatile int8_t x556 = INT8_MAX;
	int32_t t79 = -1064255;

	t79 = (x553>>((x554%x555)==x556));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x557 = 1226447552796LL;
	uint8_t x558 = UINT8_MAX;
	static volatile uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MIN;
	static int64_t t80 = -294033022743671120LL;

	t80 = (x557>>((x558%x559)==x560));

	if (t80 != 1226447552796LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x561 = 0U;
	static volatile int32_t x562 = -1;
	static int16_t x563 = -1;

	t81 = (x561>>((x562%x563)==x564));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x565 = 78643LLU;
	static int64_t x566 = INT64_MIN;
	int16_t x567 = INT16_MIN;
	uint32_t x568 = 0U;
	uint64_t t82 = 4224027574753166LLU;

	t82 = (x565>>((x566%x567)==x568));

	if (t82 != 39321LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x570 = 4140;
	int16_t x571 = 54;
	volatile int64_t x572 = INT64_MIN;
	static uint32_t t83 = UINT32_MAX;

	t83 = (x569>>((x570%x571)==x572));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x577 = INT64_MAX;
	int32_t x578 = 24;
	static uint64_t x579 = 68109390LLU;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x577>>((x578%x579)==x580));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x585 = 5U;
	uint64_t x586 = 1629212240LLU;
	static int8_t x587 = INT8_MIN;
	int64_t x588 = INT64_MIN;
	volatile int32_t t85 = 2506524;

	t85 = (x585>>((x586%x587)==x588));

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x593 = 1U;
	uint16_t x594 = 2U;
	uint32_t x596 = 6224U;

	t86 = (x593>>((x594%x595)==x596));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x601 = 1965654514925LLU;
	int32_t x602 = INT32_MAX;
	int16_t x603 = 2;
	int64_t x604 = INT64_MIN;
	volatile uint64_t t87 = 0LLU;

	t87 = (x601>>((x602%x603)==x604));

	if (t87 != 1965654514925LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x613 = 3U;
	int8_t x614 = -7;
	int64_t x615 = INT64_MIN;
	int64_t x616 = INT64_MIN;
	int32_t t88 = 95;

	t88 = (x613>>((x614%x615)==x616));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x619 = 213911914U;
	volatile int32_t t89 = -240772428;

	t89 = (x617>>((x618%x619)==x620));

	if (t89 != 7) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x621 = INT16_MAX;
	static int64_t x622 = -24LL;
	uint8_t x624 = UINT8_MAX;
	int32_t t90 = 796100348;

	t90 = (x621>>((x622%x623)==x624));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x626 = 6270639U;
	int8_t x627 = 33;

	t91 = (x625>>((x626%x627)==x628));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x629 = INT32_MAX;
	uint8_t x630 = UINT8_MAX;
	uint64_t x632 = UINT64_MAX;

	t92 = (x629>>((x630%x631)==x632));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x633 = INT8_MAX;
	int8_t x634 = INT8_MAX;
	int8_t x635 = 61;
	static uint64_t x636 = 445435LLU;
	int32_t t93 = -222;

	t93 = (x633>>((x634%x635)==x636));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x637 = 391;
	int8_t x638 = -1;
	volatile int32_t x639 = INT32_MAX;
	int8_t x640 = 0;
	volatile int32_t t94 = -32290;

	t94 = (x637>>((x638%x639)==x640));

	if (t94 != 391) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x643 = 179706531;
	int32_t x644 = INT32_MIN;
	int32_t t95 = -38309;

	t95 = (x641>>((x642%x643)==x644));

	if (t95 != 6) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x653 = 654822488LL;
	int16_t x654 = 300;
	volatile int64_t x655 = -1LL;
	uint16_t x656 = UINT16_MAX;
	static int64_t t96 = 1LL;

	t96 = (x653>>((x654%x655)==x656));

	if (t96 != 654822488LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x657 = 3942426U;
	static uint8_t x659 = 56U;
	int64_t x660 = INT64_MIN;
	volatile uint32_t t97 = 10U;

	t97 = (x657>>((x658%x659)==x660));

	if (t97 != 3942426U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x673 = 1116U;
	int8_t x675 = INT8_MAX;
	uint32_t t98 = 896849354U;

	t98 = (x673>>((x674%x675)==x676));

	if (t98 != 1116U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x685 = 6884U;
	int8_t x686 = INT8_MIN;
	uint32_t x687 = 3U;
	uint16_t x688 = 52U;
	volatile int32_t t99 = 6555280;

	t99 = (x685>>((x686%x687)==x688));

	if (t99 != 6884) { NG(); } else { ; }
	
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

