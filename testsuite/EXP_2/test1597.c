#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x15 = 24920363LLU;
uint16_t x21 = 1613U;
static int8_t x24 = INT8_MIN;
int32_t t2 = -101;
uint16_t x49 = 2U;
int32_t x52 = -1;
volatile int16_t x81 = 1386;
uint64_t t6 = 5949741277LLU;
int32_t t7 = 371418;
uint32_t x117 = UINT32_MAX;
uint8_t x119 = 1U;
uint16_t x129 = 3662U;
int64_t x189 = 1619512628607508LL;
int64_t t15 = -267091386LL;
int32_t x209 = INT32_MAX;
int64_t x231 = -98629246LL;
int16_t x235 = -9723;
int32_t x236 = INT32_MAX;
static volatile uint64_t t20 = 30LLU;
uint16_t x253 = 18U;
int8_t x260 = 0;
volatile int32_t x264 = INT32_MIN;
volatile int64_t x270 = INT64_MAX;
static uint16_t x280 = UINT16_MAX;
uint8_t x285 = 2U;
int64_t x289 = 180001LL;
volatile int8_t x302 = INT8_MIN;
int32_t x303 = -1;
uint64_t x309 = 68LLU;
uint8_t x311 = 4U;
uint8_t x312 = 13U;
uint64_t t33 = 11159604405482LLU;
static uint32_t x317 = 100U;
static volatile uint32_t t34 = 44U;
volatile uint8_t x329 = 1U;
int8_t x342 = -2;
static int32_t x355 = INT32_MAX;
static volatile int64_t t42 = 918953885865LL;
static int64_t x380 = 504198996700LL;
static int32_t t44 = -483043900;
uint16_t x393 = 2165U;
int16_t x400 = INT16_MIN;
static uint32_t x401 = 111274U;
volatile int32_t x403 = -282;
volatile int64_t x407 = -2539592890218059450LL;
static volatile int64_t t48 = -88937048302853LL;
static int64_t x409 = 1344451LL;
int8_t x411 = -1;
int64_t x413 = INT64_MAX;
int32_t x415 = INT32_MAX;
uint32_t x417 = 1863441U;
int32_t x422 = INT32_MIN;
int32_t x424 = -2;
int8_t x440 = INT8_MAX;
uint16_t x442 = 20U;
int64_t x443 = -1LL;
volatile uint64_t t54 = 236310781002052176LLU;
volatile int16_t x461 = 2;
static int8_t x485 = INT8_MAX;
volatile int64_t x492 = -1LL;
static volatile uint32_t x493 = 10U;
uint32_t t59 = 438157U;
volatile int32_t x501 = INT32_MAX;
static uint32_t x509 = 29126189U;
static uint64_t x525 = 55704LLU;
uint64_t x545 = UINT64_MAX;
volatile uint64_t x547 = 2870153659385498LLU;
uint16_t x550 = 92U;
volatile int64_t t67 = -4709714386018LL;
volatile uint64_t x558 = 150961580005792LLU;
int64_t x577 = 0LL;
uint32_t x583 = UINT32_MAX;
uint8_t x586 = 1U;
static int32_t x589 = 993509874;
volatile uint16_t x591 = 2U;
int32_t t75 = 1;
static int32_t t76 = 296949;
volatile uint32_t x641 = 165U;
uint32_t x645 = 2U;
int16_t x648 = -1;
uint32_t x650 = UINT32_MAX;
volatile int32_t t81 = -6398566;
uint64_t x664 = UINT64_MAX;
int16_t x668 = -861;
volatile int32_t t83 = 2;
volatile uint32_t x675 = 69071U;
uint64_t x700 = 65524LLU;
volatile int32_t x710 = INT32_MIN;
int64_t x711 = INT64_MIN;
uint32_t x721 = 0U;
static volatile int32_t t91 = -105;
int32_t x754 = -1;
int32_t x759 = -1;
volatile int8_t x775 = -1;
uint64_t x783 = 2170361551950474228LLU;
int8_t x785 = INT8_MAX;
static int8_t x788 = INT8_MIN;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x6 = 60771712726LL;
	volatile int32_t x7 = INT32_MIN;
	static int32_t x8 = INT32_MIN;
	static volatile uint32_t t0 = 0U;

	t0 = ((x5<<(x6<=x7))&x8);

	if (t0 != 2147483648U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x13 = 57870518090105568LLU;
	static int64_t x14 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	uint64_t t1 = 735125400531LLU;

	t1 = ((x13<<(x14<=x15))&x16);

	if (t1 != 57870518090105472LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = 167;

	t2 = ((x21<<(x22<=x23))&x24);

	if (t2 != 1536) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	volatile int16_t x26 = 455;
	uint8_t x27 = UINT8_MAX;
	uint64_t x28 = UINT64_MAX;
	uint64_t t3 = 6560LLU;

	t3 = ((x25<<(x26<=x27))&x28);

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x50 = 59;
	uint32_t x51 = UINT32_MAX;
	int32_t t4 = -230289678;

	t4 = ((x49<<(x50<=x51))&x52);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x65 = 0U;
	uint32_t x66 = 2137251620U;
	uint16_t x67 = 227U;
	static int32_t x68 = -514073613;
	static int32_t t5 = -56368;

	t5 = ((x65<<(x66<=x67))&x68);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x82 = -1;
	uint32_t x83 = 1909740308U;
	volatile uint64_t x84 = 25467008LLU;

	t6 = ((x81<<(x82<=x83))&x84);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x86 = INT8_MIN;
	volatile uint64_t x87 = 3710405035LLU;
	static int16_t x88 = -1;

	t7 = ((x85<<(x86<=x87))&x88);

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x118 = -1;
	int64_t x120 = INT64_MIN;
	volatile int64_t t8 = -1765559574639LL;

	t8 = ((x117<<(x118<=x119))&x120);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x130 = UINT32_MAX;
	static int16_t x131 = 202;
	static volatile uint16_t x132 = UINT16_MAX;
	int32_t t9 = -362123565;

	t9 = ((x129<<(x130<=x131))&x132);

	if (t9 != 3662) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x133 = 690U;
	uint32_t x134 = 13U;
	uint8_t x135 = 1U;
	int8_t x136 = 9;
	volatile int32_t t10 = -207;

	t10 = ((x133<<(x134<=x135))&x136);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x137 = 16498LLU;
	int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MAX;
	uint64_t x140 = 23514431132868LLU;
	uint64_t t11 = 370351870LLU;

	t11 = ((x137<<(x138<=x139))&x140);

	if (t11 != 32964LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x141 = 1;
	volatile int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -3;
	volatile int32_t t12 = -3;

	t12 = ((x141<<(x142<=x143))&x144);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = 80025580525314LL;
	volatile uint32_t x175 = 5034760U;
	uint8_t x176 = UINT8_MAX;
	volatile int32_t t13 = 2113;

	t13 = ((x173<<(x174<=x175))&x176);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x181 = 485323580631440720LL;
	static volatile int32_t x182 = 7779;
	int64_t x183 = 2648371195LL;
	int16_t x184 = INT16_MAX;
	int64_t t14 = -6002821236561873LL;

	t14 = ((x181<<(x182<=x183))&x184);

	if (t14 != 15008LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	volatile int32_t x192 = INT32_MIN;

	t15 = ((x189<<(x190<=x191))&x192);

	if (t15 != 3239023816474624LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x205 = INT8_MAX;
	static uint64_t x206 = 26425146784018999LLU;
	uint32_t x207 = 1U;
	uint32_t x208 = 10853118U;
	volatile uint32_t t16 = 5064U;

	t16 = ((x205<<(x206<=x207))&x208);

	if (t16 != 126U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x210 = UINT32_MAX;
	static int8_t x211 = 1;
	uint16_t x212 = 833U;
	int32_t t17 = 1842;

	t17 = ((x209<<(x210<=x211))&x212);

	if (t17 != 833) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x221 = 61;
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = INT32_MIN;
	int8_t x224 = -1;
	int32_t t18 = 113046361;

	t18 = ((x221<<(x222<=x223))&x224);

	if (t18 != 122) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x229 = 1152921LL;
	static int8_t x230 = INT8_MIN;
	static int64_t x232 = INT64_MAX;
	volatile int64_t t19 = -21901545807008LL;

	t19 = ((x229<<(x230<=x231))&x232);

	if (t19 != 1152921LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x233 = 24243177789LLU;
	uint16_t x234 = 537U;

	t20 = ((x233<<(x234<=x235))&x236);

	if (t20 != 620857661LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint8_t x237 = 1U;
	int32_t x238 = 778969;
	int16_t x239 = -7413;
	uint64_t x240 = 15LLU;
	volatile uint64_t t21 = 23LLU;

	t21 = ((x237<<(x238<=x239))&x240);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x241 = 11U;
	static int16_t x242 = -1;
	uint32_t x243 = 0U;
	uint8_t x244 = 83U;
	volatile int32_t t22 = -7429;

	t22 = ((x241<<(x242<=x243))&x244);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x249 = 0;
	volatile int32_t x250 = INT32_MIN;
	uint64_t x251 = 880LLU;
	volatile uint32_t x252 = 96268U;
	uint32_t t23 = 44U;

	t23 = ((x249<<(x250<=x251))&x252);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x254 = UINT64_MAX;
	int64_t x255 = INT64_MIN;
	uint32_t x256 = 30022U;
	uint32_t t24 = 102U;

	t24 = ((x253<<(x254<=x255))&x256);

	if (t24 != 2U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x257 = 3542U;
	int32_t x258 = INT32_MIN;
	static uint16_t x259 = UINT16_MAX;
	uint32_t t25 = 927U;

	t25 = ((x257<<(x258<=x259))&x260);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x261 = INT32_MAX;
	uint16_t x262 = 13379U;
	int8_t x263 = INT8_MIN;
	volatile int32_t t26 = 5884148;

	t26 = ((x261<<(x262<=x263))&x264);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x269 = 52U;
	int32_t x271 = 508;
	int8_t x272 = INT8_MIN;
	volatile int32_t t27 = 40;

	t27 = ((x269<<(x270<=x271))&x272);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x277 = UINT32_MAX;
	uint8_t x278 = 39U;
	static uint8_t x279 = 1U;
	uint32_t t28 = 83U;

	t28 = ((x277<<(x278<=x279))&x280);

	if (t28 != 65535U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x281 = 89728953LLU;
	int64_t x282 = -1LL;
	uint64_t x283 = 6419000912LLU;
	uint8_t x284 = 11U;
	uint64_t t29 = 1LLU;

	t29 = ((x281<<(x282<=x283))&x284);

	if (t29 != 9LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x286 = -2818004LL;
	volatile uint64_t x287 = UINT64_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t30 = -3831;

	t30 = ((x285<<(x286<=x287))&x288);

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x290 = 8U;
	int8_t x291 = -6;
	int64_t x292 = -221327010177351LL;
	int64_t t31 = -18082942679287LL;

	t31 = ((x289<<(x290<=x291))&x292);

	if (t31 != 40481LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x301 = 2635855281058LLU;
	volatile uint8_t x304 = 41U;
	volatile uint64_t t32 = 13LLU;

	t32 = ((x301<<(x302<=x303))&x304);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x310 = 30867699LL;

	t33 = ((x309<<(x310<=x311))&x312);

	if (t33 != 4LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x318 = 316U;
	static int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MAX;

	t34 = ((x317<<(x318<=x319))&x320);

	if (t34 != 100U) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x325 = INT8_MAX;
	static uint64_t x326 = UINT64_MAX;
	volatile int16_t x327 = INT16_MIN;
	static volatile int8_t x328 = INT8_MIN;
	volatile int32_t t35 = -9;

	t35 = ((x325<<(x326<=x327))&x328);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x330 = -1LL;
	int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;
	volatile int32_t t36 = -10;

	t36 = ((x329<<(x330<=x331))&x332);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x333 = INT32_MAX;
	volatile uint32_t x334 = 45063U;
	int64_t x335 = INT64_MIN;
	static int64_t x336 = INT64_MAX;
	volatile int64_t t37 = -681316LL;

	t37 = ((x333<<(x334<=x335))&x336);

	if (t37 != 2147483647LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x341 = 1219505319U;
	int64_t x343 = -1LL;
	static uint8_t x344 = UINT8_MAX;
	volatile uint32_t t38 = 4368611U;

	t38 = ((x341<<(x342<=x343))&x344);

	if (t38 != 78U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x353 = 1;
	uint8_t x354 = UINT8_MAX;
	volatile uint16_t x356 = 80U;
	int32_t t39 = 35935;

	t39 = ((x353<<(x354<=x355))&x356);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x361 = 384U;
	static int64_t x362 = INT64_MIN;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MIN;
	volatile int64_t t40 = 140854LL;

	t40 = ((x361<<(x362<=x363))&x364);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 59U;
	volatile uint8_t x367 = 13U;
	static volatile uint32_t x368 = 30745U;
	static volatile uint32_t t41 = 0U;

	t41 = ((x365<<(x366<=x367))&x368);

	if (t41 != 30745U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x369 = 13;
	int16_t x370 = 287;
	uint8_t x371 = 4U;
	static int64_t x372 = 4817999864LL;

	t42 = ((x369<<(x370<=x371))&x372);

	if (t42 != 8LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x377 = 2673LL;
	int8_t x378 = -11;
	int64_t x379 = INT64_MIN;
	volatile int64_t t43 = 522681645LL;

	t43 = ((x377<<(x378<=x379))&x380);

	if (t43 != 592LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x385 = 47U;
	uint32_t x386 = 27760868U;
	volatile uint32_t x387 = 848U;
	int32_t x388 = -2;

	t44 = ((x385<<(x386<=x387))&x388);

	if (t44 != 46) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x394 = INT8_MIN;
	int32_t x395 = -28;
	int64_t x396 = INT64_MIN;
	int64_t t45 = 1904957LL;

	t45 = ((x393<<(x394<=x395))&x396);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x397 = 22345865U;
	uint8_t x398 = 0U;
	int64_t x399 = INT64_MIN;
	uint32_t t46 = 63U;

	t46 = ((x397<<(x398<=x399))&x400);

	if (t46 != 22315008U) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x402 = 1;
	int32_t x404 = INT32_MIN;
	static uint32_t t47 = 939709838U;

	t47 = ((x401<<(x402<=x403))&x404);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x405 = 1967U;
	int16_t x406 = 7380;
	int64_t x408 = -217214616753290455LL;

	t48 = ((x405<<(x406<=x407))&x408);

	if (t48 != 809LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x410 = 97;
	uint64_t x412 = UINT64_MAX;
	uint64_t t49 = 1488826940243LLU;

	t49 = ((x409<<(x410<=x411))&x412);

	if (t49 != 1344451LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x414 = UINT64_MAX;
	static volatile int32_t x416 = INT32_MAX;
	int64_t t50 = 2283470676136LL;

	t50 = ((x413<<(x414<=x415))&x416);

	if (t50 != 2147483647LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x418 = -1;
	static int64_t x419 = -458550LL;
	static volatile int32_t x420 = -1;
	volatile uint32_t t51 = 579613U;

	t51 = ((x417<<(x418<=x419))&x420);

	if (t51 != 1863441U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x421 = 5835405222612LL;
	volatile int64_t x423 = INT64_MAX;
	int64_t t52 = -9092876902392LL;

	t52 = ((x421<<(x422<=x423))&x424);

	if (t52 != 11670810445224LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x437 = UINT8_MAX;
	int64_t x438 = -1304438449951539LL;
	int64_t x439 = INT64_MIN;
	int32_t t53 = 200399;

	t53 = ((x437<<(x438<=x439))&x440);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x441 = 3631467U;
	uint64_t x444 = 16167295768614LLU;

	t54 = ((x441<<(x442<=x443))&x444);

	if (t54 != 2312226LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x453 = 3606U;
	volatile int32_t x454 = INT32_MIN;
	static volatile int8_t x455 = 1;
	static uint16_t x456 = 2452U;
	int32_t t55 = -10;

	t55 = ((x453<<(x454<=x455))&x456);

	if (t55 != 2052) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x462 = INT16_MIN;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 119U;
	static int32_t t56 = -11231;

	t56 = ((x461<<(x462<=x463))&x464);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x486 = INT64_MAX;
	int16_t x487 = -1;
	static int16_t x488 = INT16_MAX;
	volatile int32_t t57 = 408;

	t57 = ((x485<<(x486<=x487))&x488);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x489 = 25;
	uint16_t x490 = 35U;
	uint64_t x491 = 151363131LLU;
	static int64_t t58 = -487687700654LL;

	t58 = ((x489<<(x490<=x491))&x492);

	if (t58 != 50LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x494 = 108U;
	int32_t x495 = INT32_MIN;
	static int16_t x496 = INT16_MAX;

	t59 = ((x493<<(x494<=x495))&x496);

	if (t59 != 10U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x497 = INT8_MAX;
	volatile uint8_t x498 = UINT8_MAX;
	volatile uint32_t x499 = UINT32_MAX;
	int32_t x500 = INT32_MIN;
	int32_t t60 = 213198074;

	t60 = ((x497<<(x498<=x499))&x500);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x502 = UINT32_MAX;
	int8_t x503 = INT8_MIN;
	int64_t x504 = INT64_MIN;
	int64_t t61 = -113402LL;

	t61 = ((x501<<(x502<=x503))&x504);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x510 = 3U;
	uint16_t x511 = UINT16_MAX;
	volatile int8_t x512 = INT8_MIN;
	static volatile uint32_t t62 = 1U;

	t62 = ((x509<<(x510<=x511))&x512);

	if (t62 != 58252288U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x521 = 5U;
	static int16_t x522 = INT16_MAX;
	int32_t x523 = INT32_MAX;
	static uint16_t x524 = 421U;
	volatile int32_t t63 = 583065846;

	t63 = ((x521<<(x522<=x523))&x524);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x526 = 0LLU;
	volatile uint8_t x527 = UINT8_MAX;
	int64_t x528 = -1LL;
	uint64_t t64 = 0LLU;

	t64 = ((x525<<(x526<=x527))&x528);

	if (t64 != 111408LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x533 = UINT8_MAX;
	volatile uint16_t x534 = 32393U;
	uint64_t x535 = 86760195893LLU;
	int16_t x536 = 1;
	volatile int32_t t65 = 27611117;

	t65 = ((x533<<(x534<=x535))&x536);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x546 = UINT8_MAX;
	int32_t x548 = -1;
	volatile uint64_t t66 = 4098690LLU;

	t66 = ((x545<<(x546<=x547))&x548);

	if (t66 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x549 = INT32_MAX;
	int64_t x551 = INT64_MIN;
	volatile int64_t x552 = -1LL;

	t67 = ((x549<<(x550<=x551))&x552);

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x557 = 0;
	static int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t68 = 31956748120253352LL;

	t68 = ((x557<<(x558<=x559))&x560);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x565 = 5;
	int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MIN;
	int8_t x568 = -6;
	int32_t t69 = 19366162;

	t69 = ((x565<<(x566<=x567))&x568);

	if (t69 != 10) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x578 = 304642305609435219LLU;
	int8_t x579 = -1;
	uint16_t x580 = UINT16_MAX;
	int64_t t70 = -371LL;

	t70 = ((x577<<(x578<=x579))&x580);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x581 = 23U;
	static int8_t x582 = INT8_MAX;
	int8_t x584 = INT8_MIN;
	volatile int32_t t71 = -90844;

	t71 = ((x581<<(x582<=x583))&x584);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x585 = 2LLU;
	int8_t x587 = INT8_MIN;
	uint8_t x588 = 3U;
	static uint64_t t72 = 43767610698941LLU;

	t72 = ((x585<<(x586<=x587))&x588);

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x590 = INT64_MIN;
	static int8_t x592 = -1;
	int32_t t73 = -180;

	t73 = ((x589<<(x590<=x591))&x592);

	if (t73 != 1987019748) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x597 = 0U;
	int32_t x598 = INT32_MIN;
	uint32_t x599 = UINT32_MAX;
	uint32_t x600 = 2U;
	static volatile uint32_t t74 = 444U;

	t74 = ((x597<<(x598<=x599))&x600);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x617 = 0;
	int8_t x618 = 0;
	volatile int8_t x619 = -2;
	int16_t x620 = -1;

	t75 = ((x617<<(x618<=x619))&x620);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x629 = 123U;
	volatile uint8_t x630 = 1U;
	uint16_t x631 = 3U;
	uint8_t x632 = 3U;

	t76 = ((x629<<(x630<=x631))&x632);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x637 = 628U;
	static int8_t x638 = INT8_MIN;
	int32_t x639 = -1;
	uint64_t x640 = UINT64_MAX;
	volatile uint64_t t77 = 0LLU;

	t77 = ((x637<<(x638<=x639))&x640);

	if (t77 != 1256LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x642 = INT32_MIN;
	int8_t x643 = INT8_MIN;
	static int32_t x644 = INT32_MIN;
	uint32_t t78 = 15496695U;

	t78 = ((x641<<(x642<=x643))&x644);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x646 = 4179012343700LL;
	int32_t x647 = INT32_MIN;
	static uint32_t t79 = 328345U;

	t79 = ((x645<<(x646<=x647))&x648);

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x649 = 141U;
	int32_t x651 = -557530;
	int8_t x652 = INT8_MIN;
	uint32_t t80 = 0U;

	t80 = ((x649<<(x650<=x651))&x652);

	if (t80 != 128U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x657 = UINT16_MAX;
	int64_t x658 = 2035054540023LL;
	int64_t x659 = 14642933629LL;
	volatile int16_t x660 = 126;

	t81 = ((x657<<(x658<=x659))&x660);

	if (t81 != 126) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x661 = 125U;
	static uint16_t x662 = 44U;
	static uint16_t x663 = UINT16_MAX;
	static volatile uint64_t t82 = 66039053LLU;

	t82 = ((x661<<(x662<=x663))&x664);

	if (t82 != 250LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x665 = 1U;
	int64_t x666 = 1994737LL;
	uint64_t x667 = 6198363607636LLU;

	t83 = ((x665<<(x666<=x667))&x668);

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x673 = INT16_MAX;
	int16_t x674 = -1;
	int16_t x676 = INT16_MAX;
	volatile int32_t t84 = 175;

	t84 = ((x673<<(x674<=x675))&x676);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x689 = 71U;
	uint8_t x690 = 60U;
	int16_t x691 = 14;
	int16_t x692 = -1;
	static volatile int32_t t85 = 1808970;

	t85 = ((x689<<(x690<=x691))&x692);

	if (t85 != 71) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x693 = INT16_MAX;
	static volatile int8_t x694 = 47;
	static int32_t x695 = 135;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t86 = -1;

	t86 = ((x693<<(x694<=x695))&x696);

	if (t86 != 65408) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x697 = INT64_MAX;
	volatile int32_t x698 = -1;
	int64_t x699 = INT64_MIN;
	volatile uint64_t t87 = 66617166793501626LLU;

	t87 = ((x697<<(x698<=x699))&x700);

	if (t87 != 65524LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x709 = 614628;
	int32_t x712 = -1;
	volatile int32_t t88 = -131640565;

	t88 = ((x709<<(x710<=x711))&x712);

	if (t88 != 614628) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x717 = 6;
	uint8_t x718 = 0U;
	int64_t x719 = INT64_MAX;
	uint16_t x720 = UINT16_MAX;
	int32_t t89 = -225432;

	t89 = ((x717<<(x718<=x719))&x720);

	if (t89 != 12) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x722 = INT64_MAX;
	uint32_t x723 = 162U;
	int8_t x724 = INT8_MAX;
	volatile uint32_t t90 = 1U;

	t90 = ((x721<<(x722<=x723))&x724);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x729 = 7;
	static uint16_t x730 = 344U;
	int16_t x731 = -11715;
	volatile int8_t x732 = -1;

	t91 = ((x729<<(x730<=x731))&x732);

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x737 = 0U;
	volatile int64_t x738 = INT64_MAX;
	int8_t x739 = INT8_MIN;
	int8_t x740 = INT8_MIN;
	volatile int32_t t92 = 2787;

	t92 = ((x737<<(x738<=x739))&x740);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x745 = INT16_MAX;
	int64_t x746 = INT64_MIN;
	int8_t x747 = INT8_MIN;
	int64_t x748 = INT64_MAX;
	int64_t t93 = 16335294250656161LL;

	t93 = ((x745<<(x746<=x747))&x748);

	if (t93 != 65534LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x753 = 82U;
	volatile int8_t x755 = INT8_MIN;
	volatile int32_t x756 = -1;
	volatile int32_t t94 = 0;

	t94 = ((x753<<(x754<=x755))&x756);

	if (t94 != 82) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x757 = 0U;
	int64_t x758 = -1LL;
	volatile uint8_t x760 = 0U;
	int32_t t95 = 2228979;

	t95 = ((x757<<(x758<=x759))&x760);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x765 = 0;
	int32_t x766 = -1;
	int32_t x767 = -1;
	uint8_t x768 = UINT8_MAX;
	volatile int32_t t96 = -11;

	t96 = ((x765<<(x766<=x767))&x768);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x773 = UINT16_MAX;
	static int32_t x774 = INT32_MIN;
	uint16_t x776 = 1944U;
	int32_t t97 = -37;

	t97 = ((x773<<(x774<=x775))&x776);

	if (t97 != 1944) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x781 = 5U;
	int8_t x782 = -1;
	static volatile int16_t x784 = 71;
	int32_t t98 = -1;

	t98 = ((x781<<(x782<=x783))&x784);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x786 = 26514814805LLU;
	int32_t x787 = INT32_MAX;
	volatile int32_t t99 = 5302334;

	t99 = ((x785<<(x786<=x787))&x788);

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

