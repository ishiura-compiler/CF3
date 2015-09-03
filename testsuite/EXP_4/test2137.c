#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 132323;
static int32_t x6 = -1;
int16_t x7 = INT16_MAX;
static int8_t x9 = INT8_MAX;
static uint32_t x10 = 1U;
static volatile int32_t t2 = -241;
int32_t x31 = INT32_MIN;
uint16_t x32 = UINT16_MAX;
volatile int32_t t5 = -18;
int32_t t7 = -61;
uint16_t x50 = UINT16_MAX;
int64_t x56 = -11032480239455LL;
volatile int8_t x58 = INT8_MAX;
static int64_t x76 = INT64_MAX;
volatile int64_t t12 = 37470624248290LL;
int8_t x83 = INT8_MIN;
volatile int64_t x129 = -1LL;
int16_t x132 = 18;
static int64_t t19 = -1LL;
static int8_t x136 = INT8_MIN;
volatile int32_t t21 = 661349;
int16_t x157 = INT16_MIN;
volatile int32_t t22 = -2202;
static int8_t x173 = INT8_MAX;
static uint64_t x178 = 1298194565600843585LLU;
static uint64_t t25 = 16LLU;
volatile int32_t t26 = -1;
volatile int8_t x222 = INT8_MIN;
volatile int64_t t31 = 30LL;
volatile int64_t x237 = -4961LL;
int16_t x261 = -1;
volatile int32_t t34 = -2978505;
volatile uint16_t x292 = 4774U;
static uint16_t x306 = UINT16_MAX;
int16_t x325 = INT16_MIN;
volatile uint16_t x328 = 183U;
volatile int32_t t40 = -18849;
int16_t x349 = -1;
volatile int64_t x354 = -7014839261923LL;
int32_t t42 = -1801;
volatile int64_t t43 = -1LL;
static int64_t x377 = -1LL;
volatile int16_t x378 = 1296;
uint64_t x379 = 364647049474902637LLU;
int64_t x387 = INT64_MIN;
volatile uint16_t x391 = 1U;
int64_t x397 = -7874595963LL;
volatile int8_t x421 = INT8_MAX;
static int32_t x423 = 462;
uint16_t x427 = UINT16_MAX;
static volatile uint8_t x428 = 6U;
int64_t x429 = INT64_MIN;
volatile int64_t t53 = 669691344261LL;
uint32_t x434 = 775U;
volatile uint64_t x440 = 6402LLU;
static int32_t x465 = INT32_MIN;
int8_t x472 = INT8_MAX;
static volatile int32_t t60 = -163770518;
uint16_t x482 = 1311U;
uint8_t x484 = UINT8_MAX;
int64_t x486 = INT64_MIN;
volatile int32_t x489 = INT32_MIN;
int32_t x490 = -30584422;
static int64_t x492 = -1LL;
volatile int64_t x502 = INT64_MIN;
int8_t x503 = INT8_MIN;
int16_t x507 = 1;
volatile int32_t t66 = -7194;
static int32_t t70 = -96;
int32_t t72 = -335831;
static uint16_t x581 = 406U;
uint16_t x583 = 20U;
volatile int64_t x595 = INT64_MIN;
int16_t x596 = INT16_MIN;
uint64_t x623 = 1667691LLU;
volatile uint32_t t82 = 118U;
int32_t t85 = 153140;
static uint16_t x657 = 194U;
int8_t x658 = 6;
uint64_t x660 = UINT64_MAX;
static int32_t t87 = 1017;
uint32_t x669 = 32637U;
static volatile uint32_t t88 = 1029U;
int16_t x678 = 4129;
uint32_t x679 = 9265U;
int16_t x686 = -1;
int16_t x688 = -1;
int16_t x696 = INT16_MIN;
int8_t x714 = 5;
int32_t x721 = -13598;
uint32_t x736 = 46605908U;
int32_t t99 = 480488;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = 3;
	int32_t x4 = INT32_MIN;

	t0 = (x1%(x2<(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x8 = 6564U;
	volatile int32_t t1 = 15532849;

	t1 = (x5%(x6<(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x11 = 11;
	static uint64_t x12 = 7467756969LLU;

	t2 = (x9%(x10<(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	int16_t x18 = 1;
	static uint32_t x19 = UINT32_MAX;
	uint64_t x20 = 479368582402251964LLU;
	volatile int64_t t3 = 1LL;

	t3 = (x17%(x18<(x19^x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = INT64_MAX;
	int16_t x26 = -27;
	static uint16_t x27 = 7333U;
	int64_t x28 = INT64_MAX;
	static volatile int64_t t4 = -32848631908856LL;

	t4 = (x25%(x26<(x27^x28)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int64_t x30 = INT64_MIN;

	t5 = (x29%(x30<(x31^x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 3153280U;
	volatile int64_t x34 = 2802195387LL;
	static volatile uint16_t x35 = UINT16_MAX;
	uint64_t x36 = UINT64_MAX;
	static uint32_t t6 = 8554022U;

	t6 = (x33%(x34<(x35^x36)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	int64_t x40 = INT64_MIN;

	t7 = (x37%(x38<(x39^x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -1;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t8 = -9994;

	t8 = (x49%(x50<(x51^x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x53 = -1LL;
	int16_t x54 = INT16_MAX;
	static uint64_t x55 = UINT64_MAX;
	int64_t t9 = 1192409930LL;

	t9 = (x53%(x54<(x55^x56)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 1;
	int32_t x59 = -1512763;
	volatile int32_t x60 = -2652327;
	int32_t t10 = -58;

	t10 = (x57%(x58<(x59^x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x69 = 9U;
	volatile int64_t x70 = INT64_MIN;
	uint64_t x71 = 25043411158LLU;
	volatile int16_t x72 = -511;
	static int32_t t11 = 9696553;

	t11 = (x69%(x70<(x71^x72)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x73 = INT64_MAX;
	volatile int32_t x74 = -1;
	int64_t x75 = INT64_MAX;

	t12 = (x73%(x74<(x75^x76)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x77 = 43U;
	int64_t x78 = -1772LL;
	static uint8_t x79 = 0U;
	static int8_t x80 = INT8_MIN;
	volatile int32_t t13 = -553379;

	t13 = (x77%(x78<(x79^x80)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -908574LL;
	int64_t x82 = 583289445LL;
	uint32_t x84 = 263728834U;
	volatile int64_t t14 = -8665581766082LL;

	t14 = (x81%(x82<(x83^x84)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 237511U;
	uint32_t x92 = UINT32_MAX;
	int32_t t15 = -4539013;

	t15 = (x89%(x90<(x91^x92)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x97 = UINT32_MAX;
	uint64_t x98 = 11193671999LLU;
	volatile uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 720516457482372534LLU;
	uint32_t t16 = 125195U;

	t16 = (x97%(x98<(x99^x100)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x101 = 300LLU;
	static uint8_t x102 = 3U;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 25827U;
	uint64_t t17 = 65822LLU;

	t17 = (x101%(x102<(x103^x104)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x109 = -494896281;
	int8_t x110 = INT8_MIN;
	volatile uint16_t x111 = 16U;
	int16_t x112 = INT16_MAX;
	int32_t t18 = 852910;

	t18 = (x109%(x110<(x111^x112)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x130 = 810822998U;
	int8_t x131 = -29;

	t19 = (x129%(x130<(x131^x132)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x133 = INT16_MIN;
	uint32_t x134 = 31533U;
	int8_t x135 = 1;
	static int32_t t20 = 61;

	t20 = (x133%(x134<(x135^x136)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x141 = 1;
	int8_t x142 = INT8_MAX;
	static int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MIN;

	t21 = (x141%(x142<(x143^x144)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x158 = -1972;
	static int32_t x159 = -1;
	int16_t x160 = INT16_MIN;

	t22 = (x157%(x158<(x159^x160)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x174 = 6285LLU;
	int8_t x175 = -9;
	uint32_t x176 = 492206U;
	volatile int32_t t23 = 5;

	t23 = (x173%(x174<(x175^x176)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x177 = 202793044643654667LLU;
	int16_t x179 = -12;
	int64_t x180 = 1388013969519986436LL;
	volatile uint64_t t24 = 7096410LLU;

	t24 = (x177%(x178<(x179^x180)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x189 = 980LLU;
	uint8_t x190 = UINT8_MAX;
	static uint64_t x191 = UINT64_MAX;
	volatile uint16_t x192 = UINT16_MAX;

	t25 = (x189%(x190<(x191^x192)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = -1;
	int64_t x199 = 3391236636071035847LL;
	static uint8_t x200 = 0U;

	t26 = (x197%(x198<(x199^x200)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x201 = INT64_MIN;
	int16_t x202 = -1;
	int8_t x203 = 1;
	static int32_t x204 = 38;
	volatile int64_t t27 = 3410186049LL;

	t27 = (x201%(x202<(x203^x204)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x205 = INT64_MAX;
	int16_t x206 = 100;
	static int64_t x207 = -247003559984645LL;
	int32_t x208 = -1;
	int64_t t28 = -12699848107570170LL;

	t28 = (x205%(x206<(x207^x208)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x209 = INT16_MIN;
	volatile int32_t x210 = INT32_MIN;
	static int8_t x211 = -7;
	static volatile int16_t x212 = -1;
	int32_t t29 = -7218;

	t29 = (x209%(x210<(x211^x212)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x221 = INT64_MAX;
	int32_t x223 = -1;
	uint64_t x224 = 88LLU;
	int64_t t30 = 263628574620214LL;

	t30 = (x221%(x222<(x223^x224)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x225 = -323623850540379654LL;
	volatile int32_t x226 = 18;
	uint64_t x227 = 4891LLU;
	int32_t x228 = -2030861;

	t31 = (x225%(x226<(x227^x228)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = 6;
	uint32_t x235 = 1182U;
	int16_t x236 = INT16_MIN;
	int32_t t32 = -781283;

	t32 = (x233%(x234<(x235^x236)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x238 = 17U;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	int64_t t33 = -417LL;

	t33 = (x237%(x238<(x239^x240)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x262 = -2764;
	volatile int16_t x263 = -1;
	volatile int64_t x264 = INT64_MIN;

	t34 = (x261%(x262<(x263^x264)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x265 = INT8_MIN;
	int32_t x266 = INT32_MIN;
	int32_t x267 = 11965959;
	int64_t x268 = -5995097LL;
	int32_t t35 = 744779;

	t35 = (x265%(x266<(x267^x268)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t x290 = INT64_MIN;
	static int32_t x291 = INT32_MIN;
	static int64_t t36 = -4243891759LL;

	t36 = (x289%(x290<(x291^x292)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x305 = INT8_MAX;
	volatile uint8_t x307 = UINT8_MAX;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t37 = -13383;

	t37 = (x305%(x306<(x307^x308)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;
	static uint16_t x316 = UINT16_MAX;
	static volatile int32_t t38 = -953160505;

	t38 = (x313%(x314<(x315^x316)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x326 = -13340920465LL;
	uint32_t x327 = UINT32_MAX;
	int32_t t39 = -100438;

	t39 = (x325%(x326<(x327^x328)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x341 = INT32_MAX;
	int16_t x342 = 85;
	static int64_t x343 = INT64_MIN;
	int8_t x344 = -1;

	t40 = (x341%(x342<(x343^x344)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x350 = -151907228;
	int64_t x351 = 346664115LL;
	int32_t x352 = INT32_MAX;
	static volatile int32_t t41 = -3105;

	t41 = (x349%(x350<(x351^x352)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x353 = INT32_MAX;
	static int16_t x355 = INT16_MIN;
	uint64_t x356 = 339968LLU;

	t42 = (x353%(x354<(x355^x356)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x357 = 963LL;
	int64_t x358 = 6956645603LL;
	int64_t x359 = 168504LL;
	static uint64_t x360 = 58379047915952LLU;

	t43 = (x357%(x358<(x359^x360)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t44 = 11598;

	t44 = (x361%(x362<(x363^x364)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x373 = 1U;
	static volatile uint8_t x374 = 34U;
	uint8_t x375 = UINT8_MAX;
	static int32_t x376 = INT32_MAX;
	int32_t t45 = -112994;

	t45 = (x373%(x374<(x375^x376)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x380 = -1;
	volatile int64_t t46 = 65LL;

	t46 = (x377%(x378<(x379^x380)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x381 = -187002788LL;
	uint8_t x382 = 1U;
	int16_t x383 = INT16_MIN;
	uint32_t x384 = 4141U;
	static volatile int64_t t47 = 26568182999LL;

	t47 = (x381%(x382<(x383^x384)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x385 = -1;
	volatile int64_t x386 = INT64_MIN;
	int32_t x388 = -1;
	volatile int32_t t48 = -7;

	t48 = (x385%(x386<(x387^x388)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x389 = 1685728LL;
	int8_t x390 = INT8_MIN;
	uint8_t x392 = 29U;
	volatile int64_t t49 = -1LL;

	t49 = (x389%(x390<(x391^x392)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x398 = 1U;
	int32_t x399 = -52;
	static volatile uint64_t x400 = 1684605395439600127LLU;
	static volatile int64_t t50 = -3753679LL;

	t50 = (x397%(x398<(x399^x400)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x422 = INT8_MAX;
	int32_t x424 = 390195879;
	volatile int32_t t51 = -240536;

	t51 = (x421%(x422<(x423^x424)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x425 = UINT8_MAX;
	int64_t x426 = -16946877571440227LL;
	int32_t t52 = -209067;

	t52 = (x425%(x426<(x427^x428)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x430 = INT16_MAX;
	static uint32_t x431 = UINT32_MAX;
	static volatile int32_t x432 = INT32_MIN;

	t53 = (x429%(x430<(x431^x432)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x433 = INT16_MIN;
	int32_t x435 = -1;
	int16_t x436 = 7249;
	int32_t t54 = 2597199;

	t54 = (x433%(x434<(x435^x436)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x437 = UINT8_MAX;
	uint8_t x438 = 0U;
	int16_t x439 = INT16_MAX;
	int32_t t55 = -94;

	t55 = (x437%(x438<(x439^x440)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x449 = UINT64_MAX;
	volatile int8_t x450 = -2;
	int32_t x451 = INT32_MAX;
	uint8_t x452 = UINT8_MAX;
	volatile uint64_t t56 = 4603500658355935170LLU;

	t56 = (x449%(x450<(x451^x452)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x457 = INT64_MIN;
	int16_t x458 = INT16_MIN;
	static uint16_t x459 = 402U;
	uint64_t x460 = UINT64_MAX;
	volatile int64_t t57 = 44532926990300LL;

	t57 = (x457%(x458<(x459^x460)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x461 = -1LL;
	static volatile int8_t x462 = INT8_MAX;
	int16_t x463 = INT16_MIN;
	int32_t x464 = INT32_MIN;
	int64_t t58 = 8LL;

	t58 = (x461%(x462<(x463^x464)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x466 = INT64_MIN;
	static int8_t x467 = INT8_MAX;
	static volatile int32_t x468 = 45351;
	int32_t t59 = 62797031;

	t59 = (x465%(x466<(x467^x468)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x469 = 1U;
	int16_t x470 = -1;
	volatile int64_t x471 = 83971850810989LL;

	t60 = (x469%(x470<(x471^x472)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x473 = 2U;
	volatile uint8_t x474 = UINT8_MAX;
	uint16_t x475 = 44U;
	volatile uint64_t x476 = 89769LLU;
	volatile uint32_t t61 = 11U;

	t61 = (x473%(x474<(x475^x476)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x481 = 1890U;
	static uint32_t x483 = 256646U;
	int32_t t62 = 63417;

	t62 = (x481%(x482<(x483^x484)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x485 = -52;
	int64_t x487 = -1LL;
	int8_t x488 = -1;
	volatile int32_t t63 = -411;

	t63 = (x485%(x486<(x487^x488)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x491 = INT8_MIN;
	int32_t t64 = -26287;

	t64 = (x489%(x490<(x491^x492)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x501 = -3561157;
	static int32_t x504 = INT32_MAX;
	volatile int32_t t65 = -113;

	t65 = (x501%(x502<(x503^x504)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x505 = 37U;
	uint16_t x506 = 4U;
	int32_t x508 = INT32_MAX;

	t66 = (x505%(x506<(x507^x508)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x509 = INT64_MIN;
	uint8_t x510 = 13U;
	int16_t x511 = INT16_MIN;
	volatile uint64_t x512 = 60177889LLU;
	static int64_t t67 = 5194806600488524LL;

	t67 = (x509%(x510<(x511^x512)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x533 = 223;
	uint8_t x534 = 29U;
	uint16_t x535 = UINT16_MAX;
	volatile int8_t x536 = INT8_MAX;
	int32_t t68 = 8;

	t68 = (x533%(x534<(x535^x536)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x537 = UINT8_MAX;
	int8_t x538 = INT8_MIN;
	static volatile uint8_t x539 = UINT8_MAX;
	uint8_t x540 = UINT8_MAX;
	volatile int32_t t69 = -1246;

	t69 = (x537%(x538<(x539^x540)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x541 = -20551;
	int16_t x542 = INT16_MIN;
	int8_t x543 = INT8_MAX;
	static volatile int8_t x544 = INT8_MAX;

	t70 = (x541%(x542<(x543^x544)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x545 = 91U;
	uint16_t x546 = 2U;
	uint32_t x547 = 12U;
	int16_t x548 = -1;
	static volatile int32_t t71 = -68455210;

	t71 = (x545%(x546<(x547^x548)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x549 = INT8_MIN;
	static int8_t x550 = -1;
	int8_t x551 = -34;
	int64_t x552 = INT64_MIN;

	t72 = (x549%(x550<(x551^x552)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x553 = 956520955388LL;
	uint16_t x554 = 18U;
	int64_t x555 = INT64_MIN;
	volatile int16_t x556 = -1;
	int64_t t73 = 1597903907984802LL;

	t73 = (x553%(x554<(x555^x556)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x561 = 7U;
	static int8_t x562 = INT8_MAX;
	int64_t x563 = -1LL;
	int64_t x564 = INT64_MIN;
	int32_t t74 = -38;

	t74 = (x561%(x562<(x563^x564)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x569 = -1LL;
	static int64_t x570 = -1LL;
	uint16_t x571 = UINT16_MAX;
	static int16_t x572 = 87;
	int64_t t75 = -16397863LL;

	t75 = (x569%(x570<(x571^x572)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x582 = INT64_MIN;
	uint32_t x584 = UINT32_MAX;
	int32_t t76 = -2553;

	t76 = (x581%(x582<(x583^x584)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x585 = 0;
	int64_t x586 = INT64_MIN;
	static int32_t x587 = -119659714;
	static int64_t x588 = -1LL;
	int32_t t77 = -10162570;

	t77 = (x585%(x586<(x587^x588)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x593 = 6683887852809LLU;
	int16_t x594 = INT16_MIN;
	volatile uint64_t t78 = 75668608205773210LLU;

	t78 = (x593%(x594<(x595^x596)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x601 = -1LL;
	int16_t x602 = -1;
	int64_t x603 = -1456560447689811LL;
	static int16_t x604 = INT16_MIN;
	int64_t t79 = 54250198836LL;

	t79 = (x601%(x602<(x603^x604)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x605 = INT8_MAX;
	volatile int64_t x606 = INT64_MIN;
	uint8_t x607 = 8U;
	int64_t x608 = 8506716090409LL;
	int32_t t80 = -92;

	t80 = (x605%(x606<(x607^x608)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x617 = UINT16_MAX;
	int16_t x618 = INT16_MIN;
	static int32_t x619 = -1;
	int16_t x620 = INT16_MIN;
	volatile int32_t t81 = 366;

	t81 = (x617%(x618<(x619^x620)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x621 = 333069142U;
	int32_t x622 = INT32_MIN;
	int64_t x624 = -1LL;

	t82 = (x621%(x622<(x623^x624)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x629 = UINT64_MAX;
	int8_t x630 = INT8_MIN;
	static volatile uint16_t x631 = 32166U;
	static uint8_t x632 = 0U;
	volatile uint64_t t83 = 15309LLU;

	t83 = (x629%(x630<(x631^x632)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x641 = INT8_MIN;
	volatile uint64_t x642 = 32683276965099001LLU;
	volatile uint64_t x643 = 43750326039328367LLU;
	static uint32_t x644 = 21358U;
	static volatile int32_t t84 = 35;

	t84 = (x641%(x642<(x643^x644)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x649 = 94U;
	int8_t x650 = -11;
	int64_t x651 = 8171112LL;
	volatile uint16_t x652 = UINT16_MAX;

	t85 = (x649%(x650<(x651^x652)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x659 = INT64_MAX;
	int32_t t86 = -55;

	t86 = (x657%(x658<(x659^x660)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x661 = -17;
	int16_t x662 = INT16_MAX;
	uint8_t x663 = 38U;
	int32_t x664 = 1884828;

	t87 = (x661%(x662<(x663^x664)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x670 = INT16_MAX;
	int32_t x671 = INT32_MIN;
	int64_t x672 = -1554275775LL;

	t88 = (x669%(x670<(x671^x672)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x673 = 191761;
	uint32_t x674 = 4321U;
	int64_t x675 = 683479962262341LL;
	int8_t x676 = 21;
	int32_t t89 = -955474120;

	t89 = (x673%(x674<(x675^x676)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x677 = INT32_MIN;
	int32_t x680 = INT32_MIN;
	static volatile int32_t t90 = 275197229;

	t90 = (x677%(x678<(x679^x680)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x681 = INT8_MAX;
	int8_t x682 = 0;
	static int32_t x683 = INT32_MIN;
	static uint64_t x684 = UINT64_MAX;
	volatile int32_t t91 = 6391468;

	t91 = (x681%(x682<(x683^x684)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x685 = UINT32_MAX;
	int8_t x687 = INT8_MIN;
	uint32_t t92 = 2137474U;

	t92 = (x685%(x686<(x687^x688)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x693 = 469U;
	int16_t x694 = INT16_MIN;
	int8_t x695 = INT8_MIN;
	int32_t t93 = 2786;

	t93 = (x693%(x694<(x695^x696)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x709 = INT16_MIN;
	uint8_t x710 = UINT8_MAX;
	uint16_t x711 = UINT16_MAX;
	uint16_t x712 = 13U;
	volatile int32_t t94 = -16670;

	t94 = (x709%(x710<(x711^x712)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x713 = INT32_MAX;
	static uint64_t x715 = 5436LLU;
	static int64_t x716 = INT64_MIN;
	int32_t t95 = 9094658;

	t95 = (x713%(x714<(x715^x716)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x717 = UINT16_MAX;
	uint32_t x718 = 13U;
	uint64_t x719 = 1511213658492LLU;
	uint16_t x720 = 6126U;
	int32_t t96 = 100;

	t96 = (x717%(x718<(x719^x720)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x722 = INT8_MIN;
	int16_t x723 = INT16_MAX;
	int16_t x724 = INT16_MIN;
	volatile int32_t t97 = -12129704;

	t97 = (x721%(x722<(x723^x724)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x729 = 187344610;
	int16_t x730 = -1;
	int8_t x731 = INT8_MIN;
	int32_t x732 = -1;
	volatile int32_t t98 = -4267341;

	t98 = (x729%(x730<(x731^x732)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x733 = INT32_MIN;
	int16_t x734 = -1;
	int64_t x735 = INT64_MAX;

	t99 = (x733%(x734<(x735^x736)));

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

