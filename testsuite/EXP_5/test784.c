#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x26 = -1;
volatile int32_t t2 = -1;
volatile int32_t x41 = INT32_MAX;
uint64_t x45 = 11250375012LLU;
static volatile int64_t x84 = -58297259763164LL;
int64_t x90 = INT64_MIN;
volatile int32_t x91 = -4;
volatile int32_t t13 = -480657408;
int32_t x105 = INT32_MIN;
volatile int32_t t16 = 242793;
int16_t x158 = INT16_MIN;
int16_t x160 = INT16_MAX;
int16_t x161 = INT16_MAX;
static int8_t x162 = INT8_MIN;
int32_t t21 = -8571374;
int32_t x166 = 56;
uint16_t x168 = 117U;
int32_t t22 = -1860327;
uint16_t x180 = 5U;
static volatile int64_t x190 = INT64_MIN;
int64_t x205 = INT64_MAX;
uint16_t x221 = 190U;
int32_t t28 = 4;
int8_t x226 = INT8_MAX;
volatile int32_t t30 = -68635387;
uint8_t x238 = 1U;
int64_t x245 = INT64_MIN;
volatile int16_t x247 = INT16_MIN;
volatile int64_t t33 = INT64_MIN;
volatile int32_t t34 = 9749047;
static int16_t x253 = INT16_MIN;
uint32_t x258 = 1U;
static int16_t x259 = -383;
uint32_t x261 = 88978229U;
int16_t x262 = INT16_MIN;
int8_t x264 = INT8_MIN;
uint64_t x268 = 355009272702500LLU;
int64_t x277 = INT64_MIN;
uint64_t x278 = 60LLU;
volatile int8_t x279 = INT8_MAX;
int64_t x280 = 110668102940599LL;
uint64_t x285 = UINT64_MAX;
uint64_t x290 = UINT64_MAX;
int32_t t42 = -12172;
volatile int32_t t43 = -356360;
int8_t x310 = -1;
volatile int64_t t44 = INT64_MIN;
uint16_t x323 = 122U;
volatile uint16_t x327 = 163U;
int16_t x328 = -1;
static volatile int64_t t47 = -5039112LL;
int8_t x335 = INT8_MAX;
int64_t x338 = -24LL;
int8_t x343 = -2;
uint16_t x368 = UINT16_MAX;
int32_t x370 = INT32_MAX;
uint16_t x371 = UINT16_MAX;
volatile int64_t t56 = INT64_MAX;
volatile int32_t t58 = -36681284;
static int32_t x399 = INT32_MAX;
int32_t t59 = 51;
int16_t x402 = INT16_MIN;
volatile int64_t t61 = -265LL;
volatile uint8_t x414 = 29U;
int16_t x423 = 265;
int8_t x437 = 1;
int64_t x450 = INT64_MIN;
volatile int64_t x451 = 4347278279363LL;
volatile int64_t x454 = INT64_MIN;
static volatile int32_t t70 = 691;
volatile int64_t x471 = -800224007LL;
uint64_t x474 = 784040696371LLU;
int16_t x479 = INT16_MIN;
static uint16_t x480 = 4911U;
int32_t x488 = INT32_MAX;
volatile uint8_t x497 = UINT8_MAX;
uint64_t x501 = 25592661876897LLU;
volatile int64_t x504 = 30LL;
int64_t x514 = INT64_MIN;
volatile int8_t x516 = -23;
int64_t x526 = INT64_MAX;
int8_t x527 = INT8_MIN;
volatile uint32_t x528 = UINT32_MAX;
volatile int32_t t79 = -118250580;
int8_t x529 = INT8_MAX;
int32_t x541 = INT32_MIN;
int8_t x542 = INT8_MAX;
uint32_t x543 = 34035U;
volatile int32_t t81 = INT32_MIN;
int16_t x548 = INT16_MIN;
uint64_t x549 = UINT64_MAX;
int16_t x550 = -1;
int64_t x551 = -34110543477LL;
volatile uint8_t x552 = 0U;
int32_t x570 = 24671237;
int32_t x572 = INT32_MAX;
volatile uint8_t x579 = 51U;
uint32_t x592 = UINT32_MAX;
volatile int32_t t89 = -44305293;
static uint16_t x594 = 119U;
uint16_t x613 = 28U;
volatile int16_t x622 = INT16_MIN;
int64_t x623 = INT64_MIN;
volatile int8_t x635 = INT8_MIN;
static int32_t t95 = 222628;
uint64_t x654 = UINT64_MAX;
static int32_t x655 = INT32_MIN;
volatile int32_t x660 = 12;
static int64_t x661 = 1LL;


void f0(void) {
	static volatile int8_t x1 = INT8_MAX;
	static uint16_t x2 = 110U;
	int8_t x3 = -1;
	uint64_t x4 = 19407LLU;
	volatile int32_t t0 = -947;

	t0 = (x1/((x2%x3)<x4));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x21 = INT8_MIN;
	volatile int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MIN;
	volatile uint32_t x24 = 1933356325U;
	volatile int32_t t1 = -129008;

	t1 = (x21/((x22%x23)<x24));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	int32_t x27 = INT32_MIN;
	static uint8_t x28 = UINT8_MAX;

	t2 = (x25/((x26%x27)<x28));

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x33 = 12101657U;
	int64_t x34 = INT64_MAX;
	volatile int8_t x35 = -2;
	uint64_t x36 = UINT64_MAX;
	uint32_t t3 = 16387878U;

	t3 = (x33/((x34%x35)<x36));

	if (t3 != 12101657U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x42 = 66LLU;
	uint8_t x43 = 14U;
	uint64_t x44 = 120657775LLU;
	static int32_t t4 = INT32_MAX;

	t4 = (x41/((x42%x43)<x44));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x46 = 260597891LLU;
	int16_t x47 = -7254;
	int16_t x48 = INT16_MIN;
	static volatile uint64_t t5 = 3322731688915878LLU;

	t5 = (x45/((x46%x47)<x48));

	if (t5 != 11250375012LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = -1LL;
	static volatile int16_t x51 = -268;
	uint16_t x52 = 136U;
	int32_t t6 = -189562678;

	t6 = (x49/((x50%x51)<x52));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x65 = -358820446;
	int32_t x66 = INT32_MAX;
	static int16_t x67 = INT16_MIN;
	static volatile uint32_t x68 = 57015U;
	volatile int32_t t7 = -3962391;

	t7 = (x65/((x66%x67)<x68));

	if (t7 != -358820446) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x69 = -1;
	int8_t x70 = -26;
	volatile int64_t x71 = -1LL;
	uint64_t x72 = UINT64_MAX;
	static int32_t t8 = -74163392;

	t8 = (x69/((x70%x71)<x72));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x73 = INT64_MAX;
	static volatile uint64_t x74 = 59030815048306864LLU;
	int64_t x75 = 2024491892630LL;
	int64_t x76 = 1155449817918567LL;
	static int64_t t9 = INT64_MAX;

	t9 = (x73/((x74%x75)<x76));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x81 = -215;
	uint64_t x82 = 903233LLU;
	uint8_t x83 = UINT8_MAX;
	static int32_t t10 = -1544;

	t10 = (x81/((x82%x83)<x84));

	if (t10 != -215) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MIN;
	static int32_t x86 = -1;
	static int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MAX;
	volatile int32_t t11 = -1869;

	t11 = (x85/((x86%x87)<x88));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = 37168;
	static int8_t x92 = INT8_MAX;
	volatile int32_t t12 = 636;

	t12 = (x89/((x90%x91)<x92));

	if (t12 != 37168) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x93 = 7U;
	int8_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = 1;

	t13 = (x93/((x94%x95)<x96));

	if (t13 != 7) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x106 = -1;
	uint16_t x107 = 1646U;
	int16_t x108 = 583;
	int32_t t14 = INT32_MIN;

	t14 = (x105/((x106%x107)<x108));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x113 = 56751937LLU;
	uint32_t x114 = 622678493U;
	int8_t x115 = -1;
	int16_t x116 = -1;
	static uint64_t t15 = 0LLU;

	t15 = (x113/((x114%x115)<x116));

	if (t15 != 56751937LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x121 = 569500983;
	int64_t x122 = INT64_MAX;
	static volatile int32_t x123 = -1;
	int32_t x124 = 764799146;

	t16 = (x121/((x122%x123)<x124));

	if (t16 != 569500983) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x125 = 63;
	int16_t x126 = INT16_MAX;
	int32_t x127 = INT32_MAX;
	int32_t x128 = 450905;
	volatile int32_t t17 = -7030129;

	t17 = (x125/((x126%x127)<x128));

	if (t17 != 63) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x141 = INT32_MIN;
	volatile int16_t x142 = -1;
	uint8_t x143 = 8U;
	static int64_t x144 = 7821083115487604LL;
	static volatile int32_t t18 = INT32_MIN;

	t18 = (x141/((x142%x143)<x144));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MAX;
	int16_t x151 = 3;
	int64_t x152 = INT64_MAX;
	volatile int64_t t19 = INT64_MAX;

	t19 = (x149/((x150%x151)<x152));

	if (t19 != INT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x157 = -46975;
	volatile uint16_t x159 = UINT16_MAX;
	volatile int32_t t20 = 40381161;

	t20 = (x157/((x158%x159)<x160));

	if (t20 != -46975) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x163 = -1;
	static uint8_t x164 = 2U;

	t21 = (x161/((x162%x163)<x164));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x165 = INT8_MIN;
	int32_t x167 = INT32_MIN;

	t22 = (x165/((x166%x167)<x168));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x177 = INT8_MIN;
	static int8_t x178 = INT8_MIN;
	static int8_t x179 = INT8_MIN;
	static volatile int32_t t23 = 886045400;

	t23 = (x177/((x178%x179)<x180));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x189 = UINT64_MAX;
	uint32_t x191 = 1U;
	int16_t x192 = 3285;
	uint64_t t24 = UINT64_MAX;

	t24 = (x189/((x190%x191)<x192));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x206 = INT64_MIN;
	static int16_t x207 = INT16_MIN;
	uint16_t x208 = 1U;
	int64_t t25 = INT64_MAX;

	t25 = (x205/((x206%x207)<x208));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x213 = -945253958766LL;
	volatile int32_t x214 = -466;
	int64_t x215 = INT64_MIN;
	int16_t x216 = -1;
	volatile int64_t t26 = -93857041LL;

	t26 = (x213/((x214%x215)<x216));

	if (t26 != -945253958766LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x218 = -91;
	uint16_t x219 = 483U;
	int8_t x220 = -1;
	static int64_t t27 = INT64_MIN;

	t27 = (x217/((x218%x219)<x220));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = UINT16_MAX;

	t28 = (x221/((x222%x223)<x224));

	if (t28 != 190) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x225 = 16LLU;
	int8_t x227 = -1;
	volatile int64_t x228 = 187932764592LL;
	volatile uint64_t t29 = 2844237254871760LLU;

	t29 = (x225/((x226%x227)<x228));

	if (t29 != 16LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x229 = INT16_MIN;
	static volatile uint64_t x230 = UINT64_MAX;
	static int16_t x231 = -133;
	volatile int16_t x232 = INT16_MIN;

	t30 = (x229/((x230%x231)<x232));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x237 = -5644987455LL;
	int64_t x239 = INT64_MIN;
	volatile uint16_t x240 = 16U;
	static volatile int64_t t31 = -400447702088398LL;

	t31 = (x237/((x238%x239)<x240));

	if (t31 != -5644987455LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	static uint32_t x244 = 128987U;
	static int32_t t32 = 638561;

	t32 = (x241/((x242%x243)<x244));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x246 = 416035;
	volatile int64_t x248 = INT64_MAX;

	t33 = (x245/((x246%x247)<x248));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x249 = 11805U;
	int32_t x250 = INT32_MIN;
	int64_t x251 = INT64_MAX;
	int32_t x252 = -110;

	t34 = (x249/((x250%x251)<x252));

	if (t34 != 11805) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x254 = 31;
	static volatile int16_t x255 = INT16_MIN;
	volatile int8_t x256 = INT8_MAX;
	int32_t t35 = -8201228;

	t35 = (x253/((x254%x255)<x256));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x257 = INT16_MAX;
	int8_t x260 = INT8_MIN;
	static int32_t t36 = 361936680;

	t36 = (x257/((x258%x259)<x260));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x263 = UINT32_MAX;
	uint32_t t37 = 2618056U;

	t37 = (x261/((x262%x263)<x264));

	if (t37 != 88978229U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x265 = 3212764346451420LLU;
	uint32_t x266 = 16009626U;
	int16_t x267 = -1;
	volatile uint64_t t38 = 156864095517LLU;

	t38 = (x265/((x266%x267)<x268));

	if (t38 != 3212764346451420LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t t39 = INT64_MIN;

	t39 = (x277/((x278%x279)<x280));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 139U;
	static uint16_t x288 = UINT16_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x285/((x286%x287)<x288));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x289 = 52U;
	volatile int8_t x291 = -1;
	volatile int8_t x292 = 9;
	int32_t t41 = -28959;

	t41 = (x289/((x290%x291)<x292));

	if (t41 != 52) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x297 = -1;
	int32_t x298 = -18543205;
	static volatile uint16_t x299 = UINT16_MAX;
	static int16_t x300 = -1;

	t42 = (x297/((x298%x299)<x300));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x305 = 0;
	int16_t x306 = INT16_MAX;
	static int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MAX;

	t43 = (x305/((x306%x307)<x308));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x309 = INT64_MIN;
	static int16_t x311 = -1;
	int32_t x312 = 7660518;

	t44 = (x309/((x310%x311)<x312));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x317 = 27291;
	int16_t x318 = INT16_MIN;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = 258597141102LL;
	volatile int32_t t45 = 1709;

	t45 = (x317/((x318%x319)<x320));

	if (t45 != 27291) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x321 = -1;
	int8_t x322 = INT8_MIN;
	static int64_t x324 = INT64_MAX;
	static volatile int32_t t46 = 2700;

	t46 = (x321/((x322%x323)<x324));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x325 = -1LL;
	static int32_t x326 = INT32_MIN;

	t47 = (x325/((x326%x327)<x328));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x333 = 33LLU;
	uint16_t x334 = 4U;
	uint64_t x336 = UINT64_MAX;
	uint64_t t48 = 15133386743LLU;

	t48 = (x333/((x334%x335)<x336));

	if (t48 != 33LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x337 = -1;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	int32_t t49 = -158164696;

	t49 = (x337/((x338%x339)<x340));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x341 = -518;
	int64_t x342 = -66021783689462399LL;
	volatile int64_t x344 = 232LL;
	volatile int32_t t50 = -149768700;

	t50 = (x341/((x342%x343)<x344));

	if (t50 != -518) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x345 = -1;
	int16_t x346 = INT16_MAX;
	int64_t x347 = -1LL;
	static uint32_t x348 = 5U;
	volatile int32_t t51 = -1474236;

	t51 = (x345/((x346%x347)<x348));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x353 = INT64_MAX;
	uint32_t x354 = UINT32_MAX;
	static int8_t x355 = -10;
	volatile int8_t x356 = -1;
	static int64_t t52 = INT64_MAX;

	t52 = (x353/((x354%x355)<x356));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x357 = INT16_MAX;
	uint32_t x358 = UINT32_MAX;
	volatile uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MIN;
	volatile int32_t t53 = 25022;

	t53 = (x357/((x358%x359)<x360));

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x366 = 3843U;
	int8_t x367 = INT8_MIN;
	int32_t t54 = -912;

	t54 = (x365/((x366%x367)<x368));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x369 = INT64_MIN;
	int64_t x372 = 10645912190359433LL;
	static int64_t t55 = INT64_MIN;

	t55 = (x369/((x370%x371)<x372));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x373 = INT64_MAX;
	int8_t x374 = -1;
	int64_t x375 = INT64_MIN;
	static uint32_t x376 = 7189782U;

	t56 = (x373/((x374%x375)<x376));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x377 = INT16_MIN;
	static int64_t x378 = INT64_MAX;
	int16_t x379 = -222;
	uint32_t x380 = 237834U;
	int32_t t57 = 22174;

	t57 = (x377/((x378%x379)<x380));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x381 = INT16_MIN;
	static uint32_t x382 = UINT32_MAX;
	int64_t x383 = INT64_MIN;
	uint64_t x384 = UINT64_MAX;

	t58 = (x381/((x382%x383)<x384));

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x397 = INT16_MIN;
	uint32_t x398 = UINT32_MAX;
	static volatile int64_t x400 = INT64_MAX;

	t59 = (x397/((x398%x399)<x400));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x401 = INT32_MIN;
	uint8_t x403 = 28U;
	int64_t x404 = INT64_MAX;
	int32_t t60 = INT32_MIN;

	t60 = (x401/((x402%x403)<x404));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x409 = 0LL;
	volatile int64_t x410 = INT64_MAX;
	int64_t x411 = -90825LL;
	static int64_t x412 = INT64_MAX;

	t61 = (x409/((x410%x411)<x412));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x413 = UINT8_MAX;
	volatile int32_t x415 = -1;
	static volatile uint8_t x416 = UINT8_MAX;
	volatile int32_t t62 = 1;

	t62 = (x413/((x414%x415)<x416));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	int16_t x419 = 51;
	static int32_t x420 = 237;
	int32_t t63 = 2999971;

	t63 = (x417/((x418%x419)<x420));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x421 = INT32_MIN;
	static int16_t x422 = INT16_MIN;
	volatile int8_t x424 = INT8_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = (x421/((x422%x423)<x424));

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x425 = INT8_MIN;
	volatile uint64_t x426 = 31LLU;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = 61;
	volatile int32_t t65 = 9415;

	t65 = (x425/((x426%x427)<x428));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x433 = -1;
	volatile uint64_t x434 = 8529977595979LLU;
	int16_t x435 = -7864;
	static int64_t x436 = INT64_MIN;
	volatile int32_t t66 = -1875;

	t66 = (x433/((x434%x435)<x436));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x438 = -7058;
	uint32_t x439 = UINT32_MAX;
	uint32_t x440 = UINT32_MAX;
	int32_t t67 = 6;

	t67 = (x437/((x438%x439)<x440));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x441 = 132263195U;
	int64_t x442 = -1LL;
	volatile int64_t x443 = INT64_MIN;
	volatile uint16_t x444 = UINT16_MAX;
	static volatile uint32_t t68 = 850482U;

	t68 = (x441/((x442%x443)<x444));

	if (t68 != 132263195U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x449 = UINT16_MAX;
	static uint64_t x452 = UINT64_MAX;
	int32_t t69 = -122;

	t69 = (x449/((x450%x451)<x452));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x453 = 65900466;
	volatile int32_t x455 = -14;
	static int8_t x456 = 0;

	t70 = (x453/((x454%x455)<x456));

	if (t70 != 65900466) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x469 = INT32_MAX;
	int32_t x470 = INT32_MIN;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = (x469/((x470%x471)<x472));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x473 = 1249;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = INT64_MIN;
	volatile int32_t t72 = 2;

	t72 = (x473/((x474%x475)<x476));

	if (t72 != 1249) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x477 = 17126LL;
	int32_t x478 = -1;
	volatile int64_t t73 = -155838860933068LL;

	t73 = (x477/((x478%x479)<x480));

	if (t73 != 17126LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x485 = INT8_MIN;
	int32_t x486 = INT32_MAX;
	volatile int64_t x487 = -26LL;
	static volatile int32_t t74 = 461;

	t74 = (x485/((x486%x487)<x488));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x498 = 13LL;
	static volatile uint64_t x499 = UINT64_MAX;
	static uint64_t x500 = 383124045LLU;
	int32_t t75 = 4874;

	t75 = (x497/((x498%x499)<x500));

	if (t75 != 255) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x502 = 16U;
	int16_t x503 = -24;
	volatile uint64_t t76 = 1538472244221164906LLU;

	t76 = (x501/((x502%x503)<x504));

	if (t76 != 25592661876897LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x513 = INT32_MIN;
	volatile int16_t x515 = -1917;
	volatile int32_t t77 = INT32_MIN;

	t77 = (x513/((x514%x515)<x516));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x521 = 41;
	int8_t x522 = 5;
	int64_t x523 = -85962642320698LL;
	static uint64_t x524 = UINT64_MAX;
	static volatile int32_t t78 = -627765900;

	t78 = (x521/((x522%x523)<x524));

	if (t78 != 41) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x525 = 3;

	t79 = (x525/((x526%x527)<x528));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x530 = INT64_MIN;
	int32_t x531 = INT32_MIN;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t80 = 5351;

	t80 = (x529/((x530%x531)<x532));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x544 = -1;

	t81 = (x541/((x542%x543)<x544));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x545 = UINT8_MAX;
	static uint32_t x546 = 432U;
	static uint64_t x547 = 880672LLU;
	static int32_t t82 = 121;

	t82 = (x545/((x546%x547)<x548));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t t83 = UINT64_MAX;

	t83 = (x549/((x550%x551)<x552));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x557 = -399642644813810942LL;
	uint64_t x558 = 809662697605667LLU;
	volatile int32_t x559 = 238;
	volatile uint8_t x560 = UINT8_MAX;
	volatile int64_t t84 = -14320LL;

	t84 = (x557/((x558%x559)<x560));

	if (t84 != -399642644813810942LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x565 = INT32_MIN;
	uint64_t x566 = 425028841218LLU;
	int8_t x567 = INT8_MIN;
	int32_t x568 = -1;
	static int32_t t85 = INT32_MIN;

	t85 = (x565/((x566%x567)<x568));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x569 = -1;
	uint32_t x571 = 4U;
	int32_t t86 = -16455692;

	t86 = (x569/((x570%x571)<x572));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x573 = UINT16_MAX;
	int16_t x574 = -4725;
	int64_t x575 = 236209128302LL;
	static uint16_t x576 = 0U;
	int32_t t87 = 62614;

	t87 = (x573/((x574%x575)<x576));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x577 = 1666;
	static uint64_t x578 = 23730930865281598LLU;
	int64_t x580 = INT64_MAX;
	int32_t t88 = 116926423;

	t88 = (x577/((x578%x579)<x580));

	if (t88 != 1666) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x589 = -1;
	volatile int16_t x590 = INT16_MIN;
	int64_t x591 = 2458LL;

	t89 = (x589/((x590%x591)<x592));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x593 = 27U;
	static uint8_t x595 = UINT8_MAX;
	volatile int16_t x596 = INT16_MAX;
	int32_t t90 = -28458;

	t90 = (x593/((x594%x595)<x596));

	if (t90 != 27) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x614 = -1LL;
	volatile int8_t x615 = -1;
	uint64_t x616 = UINT64_MAX;
	static volatile int32_t t91 = -988;

	t91 = (x613/((x614%x615)<x616));

	if (t91 != 28) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x621 = 3U;
	int32_t x624 = -676;
	static volatile int32_t t92 = 5686573;

	t92 = (x621/((x622%x623)<x624));

	if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x633 = INT8_MIN;
	int32_t x634 = -1;
	int8_t x636 = 0;
	volatile int32_t t93 = 634560;

	t93 = (x633/((x634%x635)<x636));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x637 = INT8_MIN;
	int8_t x638 = -1;
	uint16_t x639 = 48U;
	int8_t x640 = INT8_MAX;
	int32_t t94 = -313;

	t94 = (x637/((x638%x639)<x640));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x641 = 35U;
	uint64_t x642 = UINT64_MAX;
	static int32_t x643 = -12;
	int8_t x644 = -1;

	t95 = (x641/((x642%x643)<x644));

	if (t95 != 35) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x649 = 7846LL;
	static int64_t x650 = -1LL;
	int8_t x651 = 1;
	static uint16_t x652 = UINT16_MAX;
	volatile int64_t t96 = 154793500188LL;

	t96 = (x649/((x650%x651)<x652));

	if (t96 != 7846LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x653 = -1;
	uint32_t x656 = UINT32_MAX;
	static volatile int32_t t97 = 394388362;

	t97 = (x653/((x654%x655)<x656));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x657 = -4;
	volatile int32_t x658 = INT32_MIN;
	int8_t x659 = -6;
	static int32_t t98 = -4177108;

	t98 = (x657/((x658%x659)<x660));

	if (t98 != -4) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x662 = -7159;
	volatile int32_t x663 = -348;
	volatile int16_t x664 = 6;
	static int64_t t99 = -2LL;

	t99 = (x661/((x662%x663)<x664));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

