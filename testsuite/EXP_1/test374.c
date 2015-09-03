#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -2581200LL;
uint32_t x12 = UINT32_MAX;
int16_t x13 = -1;
uint64_t x15 = UINT64_MAX;
static uint32_t x16 = 28736988U;
static volatile int8_t x17 = 0;
volatile int32_t t3 = -517688814;
volatile uint32_t x28 = 2955153U;
uint8_t x46 = 3U;
int64_t x50 = -7617170LL;
static int32_t x54 = -1;
volatile int32_t t9 = 305694717;
volatile int64_t x69 = 39580LL;
volatile uint64_t x75 = 187LLU;
volatile uint32_t x77 = UINT32_MAX;
int16_t x79 = 676;
int8_t x80 = INT8_MIN;
static int32_t t12 = 1001;
static volatile int16_t x83 = INT16_MIN;
static volatile int32_t t13 = 145;
static volatile uint64_t x88 = 336894LLU;
static int32_t t14 = 11544;
uint8_t x92 = 7U;
static volatile int32_t t15 = -156;
int32_t t16 = -9;
int32_t t17 = 42282255;
static int8_t x113 = INT8_MIN;
int16_t x116 = -32;
volatile uint16_t x126 = UINT16_MAX;
volatile int8_t x129 = 55;
int32_t t20 = -1;
int16_t x136 = -1;
int8_t x151 = -1;
int32_t x161 = 4151;
static volatile uint8_t x196 = 8U;
uint64_t x211 = 236449169333731LLU;
int32_t t32 = 114414;
uint8_t x215 = UINT8_MAX;
static uint16_t x238 = 89U;
int8_t x239 = 14;
volatile int32_t t36 = 45132;
volatile int16_t x245 = -1;
static int8_t x251 = INT8_MIN;
int32_t t38 = 1;
int8_t x255 = INT8_MIN;
int16_t x261 = -1;
uint16_t x262 = UINT16_MAX;
int64_t x286 = -1LL;
int32_t t44 = 210473;
uint8_t x298 = 1U;
volatile int16_t x301 = 527;
int32_t x308 = 2348;
static volatile int32_t t48 = -345895273;
int32_t t49 = -1;
int64_t x318 = 62LL;
static int8_t x329 = 0;
int64_t x336 = -1LL;
int32_t t53 = -5873090;
static uint64_t x359 = 476756169225312LLU;
int32_t t55 = 6;
static int8_t x363 = 22;
int64_t x373 = INT64_MAX;
int16_t x374 = 1;
int64_t x376 = 641538LL;
uint32_t x378 = 6107307U;
static int16_t x379 = -1;
int32_t t58 = -120306;
volatile int16_t x381 = INT16_MAX;
static uint64_t x392 = 95785600603LLU;
static uint64_t x393 = 1385237587862653LLU;
int32_t x394 = INT32_MAX;
uint64_t x409 = UINT64_MAX;
int32_t x411 = -1;
int8_t x416 = INT8_MAX;
volatile int64_t x435 = 914747211031019487LL;
int16_t x438 = INT16_MIN;
int8_t x448 = -1;
static volatile int32_t t69 = -23389;
uint32_t x464 = 230923354U;
volatile int32_t t71 = -231;
uint8_t x475 = UINT8_MAX;
uint8_t x487 = 1U;
uint8_t x492 = 108U;
uint32_t x503 = 1402U;
uint64_t x505 = 366473863LLU;
int64_t x510 = INT64_MAX;
static volatile int16_t x519 = -1;
uint8_t x529 = 1U;
int16_t x530 = -6;
int32_t x532 = INT32_MAX;
static volatile int32_t t82 = 1;
static int16_t x536 = INT16_MAX;
uint32_t x546 = UINT32_MAX;
static int64_t x549 = -1LL;
static int16_t x555 = 0;
static volatile int32_t t86 = -54;
int8_t x566 = INT8_MIN;
int32_t t87 = 59;
static volatile uint32_t x575 = 9202254U;
static int32_t x577 = INT32_MIN;
int32_t x591 = INT32_MAX;
volatile int32_t t92 = -680306;
static uint32_t x630 = 1U;
volatile uint32_t x631 = 20U;
static uint64_t x634 = UINT64_MAX;
int32_t x635 = 70394851;
int8_t x642 = -12;
int64_t x645 = -1LL;
int64_t x647 = 414146100LL;
int16_t x650 = INT16_MAX;
static uint32_t x651 = 5573206U;
static volatile int32_t t99 = -119;


void f0(void) {
	volatile int32_t x1 = -1;
	uint16_t x2 = 31U;
	int64_t x4 = -7928193LL;
	static volatile int32_t t0 = -188823;

	t0 = (((x1*x2)*x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 1979672090U;
	uint8_t x10 = 2U;
	static int16_t x11 = -208;
	int32_t t1 = 27;

	t1 = (((x9*x10)*x11)<=x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x14 = -1LL;
	static int32_t t2 = -98;

	t2 = (((x13*x14)*x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x18 = INT8_MAX;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = UINT8_MAX;

	t3 = (((x17*x18)*x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = 1308160743LLU;
	volatile int32_t t4 = 37890;

	t4 = (((x25*x26)*x27)<=x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 46U;
	int16_t x40 = INT16_MIN;
	static int32_t t5 = -240;

	t5 = (((x37*x38)*x39)<=x40);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x41 = -2;
	int8_t x42 = INT8_MIN;
	uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	static int32_t t6 = -25307;

	t6 = (((x41*x42)*x43)<=x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x45 = 13U;
	volatile int8_t x47 = INT8_MAX;
	uint16_t x48 = 371U;
	volatile int32_t t7 = 1;

	t7 = (((x45*x46)*x47)<=x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 0;
	int64_t x51 = INT64_MAX;
	static int32_t x52 = INT32_MAX;
	int32_t t8 = 25;

	t8 = (((x49*x50)*x51)<=x52);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x53 = INT8_MIN;
	volatile int16_t x55 = INT16_MAX;
	static uint32_t x56 = 1697U;

	t9 = (((x53*x54)*x55)<=x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x70 = INT8_MIN;
	int32_t x71 = 29;
	int8_t x72 = INT8_MIN;
	static int32_t t10 = -522905821;

	t10 = (((x69*x70)*x71)<=x72);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x73 = -1;
	int32_t x74 = INT32_MAX;
	uint8_t x76 = UINT8_MAX;
	int32_t t11 = -624938227;

	t11 = (((x73*x74)*x75)<=x76);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x78 = -1;

	t12 = (((x77*x78)*x79)<=x80);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = UINT32_MAX;
	int8_t x82 = -1;
	int32_t x84 = 1014;

	t13 = (((x81*x82)*x83)<=x84);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x85 = UINT8_MAX;
	static uint16_t x86 = UINT16_MAX;
	int64_t x87 = 334251LL;

	t14 = (((x85*x86)*x87)<=x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 9U;
	volatile int64_t x90 = -1LL;
	uint32_t x91 = 3137140U;

	t15 = (((x89*x90)*x91)<=x92);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x93 = 2974718413943205281LLU;
	int8_t x94 = INT8_MIN;
	int32_t x95 = INT32_MAX;
	uint64_t x96 = UINT64_MAX;

	t16 = (((x93*x94)*x95)<=x96);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x105 = 16U;
	int16_t x106 = INT16_MAX;
	uint32_t x107 = UINT32_MAX;
	uint32_t x108 = 1680966964U;

	t17 = (((x105*x106)*x107)<=x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x114 = -1;
	uint32_t x115 = UINT32_MAX;
	int32_t t18 = 1982934;

	t18 = (((x113*x114)*x115)<=x116);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x125 = INT16_MAX;
	int16_t x127 = -1;
	static uint32_t x128 = UINT32_MAX;
	int32_t t19 = 831;

	t19 = (((x125*x126)*x127)<=x128);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x130 = INT16_MAX;
	static volatile uint32_t x131 = UINT32_MAX;
	uint32_t x132 = 1689565502U;

	t20 = (((x129*x130)*x131)<=x132);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x133 = INT16_MAX;
	static volatile uint64_t x134 = 253017870840221178LLU;
	int32_t x135 = 822;
	static volatile int32_t t21 = 7753360;

	t21 = (((x133*x134)*x135)<=x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x141 = -1;
	int64_t x142 = -266676913LL;
	int32_t x143 = INT32_MIN;
	uint8_t x144 = 78U;
	int32_t t22 = -4;

	t22 = (((x141*x142)*x143)<=x144);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = 28184618584522LLU;
	uint16_t x152 = 13386U;
	int32_t t23 = 0;

	t23 = (((x149*x150)*x151)<=x152);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x162 = 1;
	static uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 2U;
	int32_t t24 = 192865108;

	t24 = (((x161*x162)*x163)<=x164);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = 33U;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -12;
	static int32_t x168 = INT32_MIN;
	volatile int32_t t25 = 1;

	t25 = (((x165*x166)*x167)<=x168);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x173 = 1;
	uint8_t x174 = 7U;
	int64_t x175 = 6320822579463630LL;
	int64_t x176 = INT64_MIN;
	volatile int32_t t26 = -16;

	t26 = (((x173*x174)*x175)<=x176);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x185 = 0U;
	uint64_t x186 = 0LLU;
	int8_t x187 = 58;
	int8_t x188 = 1;
	volatile int32_t t27 = -1673;

	t27 = (((x185*x186)*x187)<=x188);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x193 = 1462106724LLU;
	uint64_t x194 = 711974LLU;
	int64_t x195 = INT64_MAX;
	int32_t t28 = -20528350;

	t28 = (((x193*x194)*x195)<=x196);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	static int8_t x200 = INT8_MIN;
	int32_t t29 = -2658;

	t29 = (((x197*x198)*x199)<=x200);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x201 = INT8_MIN;
	uint16_t x202 = 0U;
	uint32_t x203 = UINT32_MAX;
	static int8_t x204 = 1;
	int32_t t30 = 9666615;

	t30 = (((x201*x202)*x203)<=x204);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x205 = -94;
	int64_t x206 = 32389376881LL;
	uint64_t x207 = 18997221LLU;
	static volatile int16_t x208 = -4;
	volatile int32_t t31 = 125659600;

	t31 = (((x205*x206)*x207)<=x208);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x209 = UINT32_MAX;
	uint32_t x210 = 30629U;
	int16_t x212 = INT16_MIN;

	t32 = (((x209*x210)*x211)<=x212);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x213 = -1;
	uint16_t x214 = 180U;
	uint64_t x216 = 153181087762LLU;
	int32_t t33 = 3131;

	t33 = (((x213*x214)*x215)<=x216);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint32_t x218 = 240U;
	int8_t x219 = 47;
	int16_t x220 = 508;
	volatile int32_t t34 = 9127;

	t34 = (((x217*x218)*x219)<=x220);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x225 = 4122317195576427LLU;
	int16_t x226 = -12;
	uint8_t x227 = 100U;
	static int64_t x228 = -479025018384549019LL;
	int32_t t35 = 22;

	t35 = (((x225*x226)*x227)<=x228);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x237 = 3447;
	static volatile int64_t x240 = INT64_MAX;

	t36 = (((x237*x238)*x239)<=x240);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x246 = INT16_MIN;
	static volatile uint32_t x247 = 8U;
	int64_t x248 = INT64_MIN;
	int32_t t37 = -28;

	t37 = (((x245*x246)*x247)<=x248);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x249 = -1LL;
	int16_t x250 = -1;
	int16_t x252 = -1;

	t38 = (((x249*x250)*x251)<=x252);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x253 = 6U;
	volatile uint64_t x254 = 386424875096LLU;
	static int64_t x256 = INT64_MAX;
	volatile int32_t t39 = 145653;

	t39 = (((x253*x254)*x255)<=x256);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x263 = 14;
	int16_t x264 = INT16_MIN;
	int32_t t40 = -11;

	t40 = (((x261*x262)*x263)<=x264);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x265 = 4U;
	int32_t x266 = 4;
	volatile uint32_t x267 = 611141237U;
	uint32_t x268 = UINT32_MAX;
	volatile int32_t t41 = 392;

	t41 = (((x265*x266)*x267)<=x268);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x269 = 1;
	static volatile uint32_t x270 = UINT32_MAX;
	uint32_t x271 = UINT32_MAX;
	int32_t x272 = -1;
	static int32_t t42 = -6;

	t42 = (((x269*x270)*x271)<=x272);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x285 = 616LLU;
	static int8_t x287 = INT8_MIN;
	uint16_t x288 = 0U;
	volatile int32_t t43 = -14750447;

	t43 = (((x285*x286)*x287)<=x288);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;

	t44 = (((x289*x290)*x291)<=x292);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x293 = 4470462702579804388LLU;
	static int64_t x294 = INT64_MAX;
	int64_t x295 = -76873222331647LL;
	int32_t x296 = INT32_MIN;
	volatile int32_t t45 = -4518596;

	t45 = (((x293*x294)*x295)<=x296);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x297 = 3157587821304347891LLU;
	int8_t x299 = -1;
	int8_t x300 = INT8_MIN;
	int32_t t46 = -9337157;

	t46 = (((x297*x298)*x299)<=x300);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x302 = 1819080403618630LLU;
	int8_t x303 = -1;
	static uint32_t x304 = 647078969U;
	volatile int32_t t47 = -1;

	t47 = (((x301*x302)*x303)<=x304);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x305 = 4;
	static int32_t x306 = -28;
	int8_t x307 = 59;

	t48 = (((x305*x306)*x307)<=x308);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x313 = 33743618818541LLU;
	int16_t x314 = 2;
	uint8_t x315 = 38U;
	uint16_t x316 = 5461U;

	t49 = (((x313*x314)*x315)<=x316);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x317 = 1;
	int32_t x319 = 0;
	int64_t x320 = INT64_MIN;
	volatile int32_t t50 = 0;

	t50 = (((x317*x318)*x319)<=x320);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MAX;
	static int8_t x327 = 17;
	int64_t x328 = 15529LL;
	static int32_t t51 = 8;

	t51 = (((x325*x326)*x327)<=x328);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x330 = INT64_MIN;
	int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	int32_t t52 = 541423;

	t52 = (((x329*x330)*x331)<=x332);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x333 = 12U;
	uint64_t x334 = UINT64_MAX;
	static uint16_t x335 = 20U;

	t53 = (((x333*x334)*x335)<=x336);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x353 = 0;
	int16_t x354 = 170;
	int64_t x355 = INT64_MIN;
	int32_t x356 = INT32_MAX;
	int32_t t54 = 17393;

	t54 = (((x353*x354)*x355)<=x356);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x357 = 0;
	int64_t x358 = INT64_MIN;
	int8_t x360 = -13;

	t55 = (((x357*x358)*x359)<=x360);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x361 = -1;
	volatile int16_t x362 = INT16_MIN;
	static volatile uint8_t x364 = 46U;
	static int32_t t56 = -801408471;

	t56 = (((x361*x362)*x363)<=x364);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x375 = 1U;
	int32_t t57 = 1539521;

	t57 = (((x373*x374)*x375)<=x376);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x377 = INT32_MAX;
	static int8_t x380 = -1;

	t58 = (((x377*x378)*x379)<=x380);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x382 = INT8_MIN;
	uint8_t x383 = 24U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t59 = 297766;

	t59 = (((x381*x382)*x383)<=x384);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x385 = 131875;
	int16_t x386 = 1;
	volatile uint8_t x387 = 0U;
	int64_t x388 = INT64_MIN;
	int32_t t60 = 2750;

	t60 = (((x385*x386)*x387)<=x388);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MIN;
	int8_t x391 = 25;
	static int32_t t61 = 4209708;

	t61 = (((x389*x390)*x391)<=x392);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x395 = INT64_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t62 = 0;

	t62 = (((x393*x394)*x395)<=x396);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x410 = INT8_MAX;
	static int64_t x412 = INT64_MIN;
	static int32_t t63 = -15;

	t63 = (((x409*x410)*x411)<=x412);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x413 = INT64_MAX;
	static volatile int16_t x414 = -1;
	static int64_t x415 = -1LL;
	int32_t t64 = -45347483;

	t64 = (((x413*x414)*x415)<=x416);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x421 = -1;
	int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	int32_t x424 = -1;
	static int32_t t65 = 111480972;

	t65 = (((x421*x422)*x423)<=x424);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x425 = -1;
	static volatile uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 15U;
	int32_t x428 = INT32_MIN;
	static int32_t t66 = -239875;

	t66 = (((x425*x426)*x427)<=x428);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x433 = -1;
	static int8_t x434 = -1;
	volatile int64_t x436 = INT64_MAX;
	static int32_t t67 = 1154;

	t67 = (((x433*x434)*x435)<=x436);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x437 = 28243583LLU;
	volatile uint64_t x439 = 513080600987672515LLU;
	volatile uint8_t x440 = 109U;
	int32_t t68 = 3770280;

	t68 = (((x437*x438)*x439)<=x440);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x445 = UINT16_MAX;
	static volatile int16_t x446 = 6724;
	uint32_t x447 = UINT32_MAX;

	t69 = (((x445*x446)*x447)<=x448);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x449 = 0;
	int64_t x450 = INT64_MIN;
	static int8_t x451 = INT8_MAX;
	int32_t x452 = INT32_MAX;
	int32_t t70 = 271;

	t70 = (((x449*x450)*x451)<=x452);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x461 = -1;
	static int64_t x462 = 33806008178414LL;
	uint32_t x463 = 7U;

	t71 = (((x461*x462)*x463)<=x464);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x465 = -937480LL;
	static volatile int8_t x466 = -1;
	int32_t x467 = INT32_MIN;
	int16_t x468 = 18;
	volatile int32_t t72 = -1031568200;

	t72 = (((x465*x466)*x467)<=x468);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x469 = INT8_MAX;
	volatile int16_t x470 = INT16_MAX;
	volatile uint64_t x471 = UINT64_MAX;
	static volatile uint8_t x472 = UINT8_MAX;
	volatile int32_t t73 = -202164891;

	t73 = (((x469*x470)*x471)<=x472);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x473 = INT16_MIN;
	volatile uint64_t x474 = 454LLU;
	static int8_t x476 = INT8_MAX;
	int32_t t74 = 14;

	t74 = (((x473*x474)*x475)<=x476);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x485 = INT8_MAX;
	uint32_t x486 = 197383U;
	int8_t x488 = INT8_MIN;
	volatile int32_t t75 = 441;

	t75 = (((x485*x486)*x487)<=x488);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x489 = INT16_MAX;
	static uint64_t x490 = 15685LLU;
	uint16_t x491 = 493U;
	static volatile int32_t t76 = 4668144;

	t76 = (((x489*x490)*x491)<=x492);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x501 = 1;
	uint32_t x502 = UINT32_MAX;
	int8_t x504 = 15;
	volatile int32_t t77 = -3;

	t77 = (((x501*x502)*x503)<=x504);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x506 = 97574137988560276LL;
	int16_t x507 = 1934;
	volatile int16_t x508 = -6059;
	volatile int32_t t78 = 39407011;

	t78 = (((x505*x506)*x507)<=x508);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x509 = 962700086991297657LLU;
	int64_t x511 = -379606120LL;
	uint8_t x512 = UINT8_MAX;
	volatile int32_t t79 = 6457793;

	t79 = (((x509*x510)*x511)<=x512);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x517 = INT8_MIN;
	static uint8_t x518 = 1U;
	volatile int16_t x520 = -1;
	static volatile int32_t t80 = -6;

	t80 = (((x517*x518)*x519)<=x520);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x525 = 0U;
	static int8_t x526 = INT8_MIN;
	int32_t x527 = 31;
	volatile uint32_t x528 = 0U;
	volatile int32_t t81 = -12055;

	t81 = (((x525*x526)*x527)<=x528);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x531 = -1;

	t82 = (((x529*x530)*x531)<=x532);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x533 = INT16_MIN;
	int8_t x534 = -1;
	uint16_t x535 = 365U;
	volatile int32_t t83 = 27;

	t83 = (((x533*x534)*x535)<=x536);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x545 = 15;
	volatile int8_t x547 = INT8_MIN;
	int32_t x548 = 202555266;
	volatile int32_t t84 = 393;

	t84 = (((x545*x546)*x547)<=x548);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x550 = 1742456U;
	static int16_t x551 = -3909;
	uint16_t x552 = 95U;
	volatile int32_t t85 = -22233;

	t85 = (((x549*x550)*x551)<=x552);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x553 = INT16_MIN;
	int32_t x554 = 34699;
	static volatile uint8_t x556 = 105U;

	t86 = (((x553*x554)*x555)<=x556);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x565 = -1;
	uint64_t x567 = 66139545324733LLU;
	int64_t x568 = 2846258495265253LL;

	t87 = (((x565*x566)*x567)<=x568);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x573 = -1LL;
	static uint64_t x574 = 8071830LLU;
	static uint32_t x576 = 1437259835U;
	int32_t t88 = -210246;

	t88 = (((x573*x574)*x575)<=x576);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x578 = 73398U;
	uint8_t x579 = UINT8_MAX;
	static int16_t x580 = INT16_MIN;
	static int32_t t89 = -478;

	t89 = (((x577*x578)*x579)<=x580);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x589 = INT16_MAX;
	static uint64_t x590 = 972131966686832LLU;
	static int32_t x592 = INT32_MIN;
	volatile int32_t t90 = 35;

	t90 = (((x589*x590)*x591)<=x592);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x597 = INT16_MAX;
	static uint64_t x598 = 124577613545LLU;
	uint8_t x599 = 0U;
	static int64_t x600 = INT64_MIN;
	volatile int32_t t91 = 63803;

	t91 = (((x597*x598)*x599)<=x600);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x605 = -1;
	int8_t x606 = INT8_MAX;
	volatile int8_t x607 = 4;
	static uint64_t x608 = 34741659298635488LLU;

	t92 = (((x605*x606)*x607)<=x608);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x609 = UINT64_MAX;
	uint8_t x610 = UINT8_MAX;
	uint16_t x611 = 259U;
	volatile uint32_t x612 = 2U;
	int32_t t93 = -12343;

	t93 = (((x609*x610)*x611)<=x612);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x625 = INT16_MIN;
	int32_t x626 = -5;
	int64_t x627 = -1LL;
	static int16_t x628 = INT16_MIN;
	static int32_t t94 = 5904608;

	t94 = (((x625*x626)*x627)<=x628);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x629 = 25018LL;
	uint16_t x632 = UINT16_MAX;
	volatile int32_t t95 = 104989;

	t95 = (((x629*x630)*x631)<=x632);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x633 = 7;
	static volatile uint32_t x636 = 53340208U;
	volatile int32_t t96 = -126701965;

	t96 = (((x633*x634)*x635)<=x636);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x641 = INT16_MIN;
	int16_t x643 = 2361;
	volatile int32_t x644 = 62;
	int32_t t97 = -3268751;

	t97 = (((x641*x642)*x643)<=x644);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x646 = 3708U;
	static int64_t x648 = -1LL;
	volatile int32_t t98 = 269617578;

	t98 = (((x645*x646)*x647)<=x648);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x649 = 11U;
	int32_t x652 = INT32_MAX;

	t99 = (((x649*x650)*x651)<=x652);

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

