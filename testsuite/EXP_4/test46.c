#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x72 = UINT32_MAX;
static int32_t x92 = INT32_MIN;
uint32_t x198 = UINT32_MAX;
volatile int64_t x199 = 85021489692LL;
uint32_t t8 = UINT32_MAX;
uint16_t x202 = 4757U;
volatile int64_t x241 = INT64_MAX;
int8_t x242 = 0;
int64_t t11 = INT64_MAX;
volatile uint64_t x253 = UINT64_MAX;
int32_t x254 = -1;
int8_t x255 = INT8_MIN;
static int8_t x256 = 57;
int32_t x283 = -266002960;
int8_t x287 = INT8_MIN;
volatile int8_t x341 = INT8_MAX;
uint64_t x354 = 47225396397LLU;
volatile uint32_t t18 = 18158197U;
uint32_t x359 = 0U;
static int8_t x382 = INT8_MIN;
static uint32_t x422 = UINT32_MAX;
static uint32_t x423 = UINT32_MAX;
volatile uint64_t x425 = 816410573442LLU;
int16_t x427 = -1;
int16_t x428 = INT16_MIN;
int8_t x446 = INT8_MAX;
uint64_t x447 = 7LLU;
static uint32_t x463 = 234U;
volatile int16_t x464 = 368;
uint16_t x472 = 167U;
static uint16_t x476 = 57U;
uint64_t x493 = 51LLU;
volatile uint64_t t34 = 15059040700LLU;
static int32_t x515 = INT32_MAX;
uint16_t x525 = UINT16_MAX;
uint32_t x550 = 208U;
int32_t x551 = INT32_MIN;
volatile int32_t t39 = INT32_MAX;
int16_t x558 = -1;
uint32_t x578 = 4U;
uint8_t x596 = 1U;
volatile int32_t x627 = INT32_MIN;
int32_t x632 = 351716406;
int64_t x681 = INT64_MAX;
volatile int64_t x682 = -1LL;
int64_t x684 = INT64_MIN;
volatile uint64_t x691 = 1149235LLU;
int64_t x697 = 12800090887LL;
static volatile int8_t x698 = INT8_MAX;
static int8_t x732 = INT8_MIN;
uint16_t x741 = 15388U;
uint8_t x752 = 10U;
volatile int32_t t54 = -1;
volatile int64_t t55 = INT64_MAX;
uint16_t x773 = 7287U;
uint16_t x784 = UINT16_MAX;
int16_t x794 = INT16_MIN;
static int32_t x797 = INT32_MAX;
int8_t x800 = INT8_MIN;
int16_t x805 = 1;
volatile uint16_t x862 = 2U;
int16_t x863 = 129;
static volatile uint16_t x872 = 9923U;
volatile int32_t x883 = -21468224;
int32_t t68 = 940186888;
static int64_t x911 = -1LL;
uint32_t t69 = 65342U;
volatile int64_t x940 = 1322834621495LL;
static int32_t t70 = -3;
uint32_t x969 = UINT32_MAX;
int8_t x993 = INT8_MAX;
uint16_t x1002 = UINT16_MAX;
uint64_t x1003 = 220877533LLU;
int32_t t78 = -676;
uint64_t x1005 = 17LLU;
volatile int16_t x1009 = INT16_MAX;
int64_t x1050 = 4548LL;
volatile uint64_t x1051 = UINT64_MAX;
volatile uint32_t t84 = 24977U;
volatile int8_t x1064 = INT8_MAX;
int64_t x1101 = 51LL;
static int16_t x1104 = 10647;
int8_t x1115 = INT8_MIN;
uint8_t x1153 = 19U;
int64_t x1154 = -1LL;
int16_t x1159 = INT16_MIN;
uint16_t x1161 = UINT16_MAX;
int16_t x1163 = INT16_MIN;
uint16_t x1187 = 7525U;
uint64_t t94 = 412574929LLU;
uint64_t x1196 = 15527732531430LLU;
volatile int32_t t95 = -31;
int32_t x1201 = 62794703;
volatile int8_t x1250 = -1;
int16_t x1251 = INT16_MIN;
int8_t x1270 = INT8_MIN;


void f0(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = -1;
	volatile int64_t x15 = -1LL;
	uint32_t x16 = 153401524U;
	int32_t t0 = -21;

	t0 = (x13>>(x14/(x15+x16)));

	if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x17 = INT8_MAX;
	static int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	int8_t x20 = -1;
	volatile int32_t t1 = 4;

	t1 = (x17>>(x18/(x19+x20)));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x69 = INT32_MAX;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	int32_t t2 = INT32_MAX;

	t2 = (x69>>(x70/(x71+x72)));

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x89 = 2;
	uint16_t x90 = 3U;
	static uint64_t x91 = 53867794358720741LLU;
	int32_t t3 = 3454255;

	t3 = (x89>>(x90/(x91+x92)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x113 = 7471U;
	int8_t x114 = 0;
	volatile int16_t x115 = INT16_MIN;
	static int64_t x116 = 11856441397LL;
	int32_t t4 = 56671150;

	t4 = (x113>>(x114/(x115+x116)));

	if (t4 != 7471) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x117 = 6U;
	int8_t x118 = INT8_MAX;
	int64_t x119 = INT64_MAX;
	volatile int8_t x120 = -1;
	volatile uint32_t t5 = 250136187U;

	t5 = (x117>>(x118/(x119+x120)));

	if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MAX;
	uint64_t x155 = 692926690041602075LLU;
	uint16_t x156 = UINT16_MAX;
	int32_t t6 = INT32_MAX;

	t6 = (x153>>(x154/(x155+x156)));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x181 = 60;
	volatile int16_t x182 = 1;
	int16_t x183 = INT16_MAX;
	int32_t x184 = -1;
	static int32_t t7 = -39;

	t7 = (x181>>(x182/(x183+x184)));

	if (t7 != 60) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint32_t x197 = UINT32_MAX;
	uint16_t x200 = 3434U;

	t8 = (x197>>(x198/(x199+x200)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x201 = 3638LL;
	int64_t x203 = INT64_MIN;
	uint8_t x204 = 6U;
	int64_t t9 = -43266732067635864LL;

	t9 = (x201>>(x202/(x203+x204)));

	if (t9 != 3638LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x221 = 22;
	volatile uint8_t x222 = UINT8_MAX;
	static uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 25134743U;
	int32_t t10 = -15756194;

	t10 = (x221>>(x222/(x223+x224)));

	if (t10 != 22) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x243 = INT8_MIN;
	uint32_t x244 = 7533951U;

	t11 = (x241>>(x242/(x243+x244)));

	if (t11 != INT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t t12 = UINT64_MAX;

	t12 = (x253>>(x254/(x255+x256)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x281 = INT16_MAX;
	int64_t x282 = -64267332LL;
	uint8_t x284 = 48U;
	int32_t t13 = 6398675;

	t13 = (x281>>(x282/(x283+x284)));

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 605LLU;
	int16_t x288 = INT16_MAX;
	static volatile uint64_t t14 = UINT64_MAX;

	t14 = (x285>>(x286/(x287+x288)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x325 = 3756;
	int8_t x326 = INT8_MAX;
	uint32_t x327 = 792588374U;
	static volatile int32_t x328 = -422569287;
	int32_t t15 = -332705577;

	t15 = (x325>>(x326/(x327+x328)));

	if (t15 != 3756) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x342 = 258750U;
	int64_t x343 = 24662132045173LL;
	uint64_t x344 = 1342320795696242913LLU;
	static int32_t t16 = -1;

	t16 = (x341>>(x342/(x343+x344)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x349 = 245U;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MAX;
	int8_t x352 = INT8_MIN;
	static uint32_t t17 = 620555731U;

	t17 = (x349>>(x350/(x351+x352)));

	if (t17 != 245U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x355 = INT32_MAX;
	static uint64_t x356 = 0LLU;

	t18 = (x353>>(x354/(x355+x356)));

	if (t18 != 2047U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x357 = 13U;
	int64_t x358 = 59158019463LL;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t19 = -964326570;

	t19 = (x357>>(x358/(x359+x360)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x361 = 3U;
	volatile int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MIN;
	static int8_t x364 = INT8_MAX;
	int32_t t20 = 3305;

	t20 = (x361>>(x362/(x363+x364)));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x365 = INT8_MAX;
	int32_t x366 = 13569683;
	static uint64_t x367 = UINT64_MAX;
	static volatile int16_t x368 = INT16_MIN;
	int32_t t21 = 222825;

	t21 = (x365>>(x366/(x367+x368)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MIN;
	static volatile uint16_t x379 = UINT16_MAX;
	int32_t x380 = 6;
	volatile uint32_t t22 = UINT32_MAX;

	t22 = (x377>>(x378/(x379+x380)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x381 = INT64_MAX;
	int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MIN;
	int64_t t23 = INT64_MAX;

	t23 = (x381>>(x382/(x383+x384)));

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x393 = INT32_MAX;
	static uint32_t x394 = 7997U;
	int16_t x395 = INT16_MIN;
	volatile int8_t x396 = INT8_MAX;
	int32_t t24 = INT32_MAX;

	t24 = (x393>>(x394/(x395+x396)));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x417 = 4U;
	int8_t x418 = -1;
	static volatile uint16_t x419 = UINT16_MAX;
	volatile int16_t x420 = -1;
	int32_t t25 = 1;

	t25 = (x417>>(x418/(x419+x420)));

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x421 = INT8_MAX;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t26 = -1212;

	t26 = (x421>>(x422/(x423+x424)));

	if (t26 != 63) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x426 = -1;
	uint64_t t27 = 244427987001LLU;

	t27 = (x425>>(x426/(x427+x428)));

	if (t27 != 816410573442LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x445 = 6293U;
	int8_t x448 = -21;
	static uint32_t t28 = 0U;

	t28 = (x445>>(x446/(x447+x448)));

	if (t28 != 6293U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x457 = 75U;
	uint64_t x458 = 277748881474LLU;
	int16_t x459 = INT16_MIN;
	int8_t x460 = 9;
	volatile uint32_t t29 = 3505U;

	t29 = (x457>>(x458/(x459+x460)));

	if (t29 != 75U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x461 = INT64_MAX;
	volatile uint8_t x462 = 9U;
	int64_t t30 = INT64_MAX;

	t30 = (x461>>(x462/(x463+x464)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x469 = 3LL;
	int16_t x470 = -1;
	uint8_t x471 = UINT8_MAX;
	static volatile int64_t t31 = -185LL;

	t31 = (x469>>(x470/(x471+x472)));

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x473 = 2;
	int16_t x474 = -1;
	int64_t x475 = INT64_MIN;
	int32_t t32 = -222408468;

	t32 = (x473>>(x474/(x475+x476)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x481 = 132169336LLU;
	uint16_t x482 = 3U;
	volatile int8_t x483 = -1;
	int16_t x484 = 4372;
	uint64_t t33 = 272637378599141952LLU;

	t33 = (x481>>(x482/(x483+x484)));

	if (t33 != 132169336LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x494 = 4026U;
	volatile int64_t x495 = 1LL;
	volatile int64_t x496 = -280617790897974002LL;

	t34 = (x493>>(x494/(x495+x496)));

	if (t34 != 51LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x497 = 1;
	uint16_t x498 = 16876U;
	static uint16_t x499 = 493U;
	int32_t x500 = INT32_MIN;
	volatile int32_t t35 = -284784;

	t35 = (x497>>(x498/(x499+x500)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x513 = 9U;
	uint8_t x514 = 7U;
	uint8_t x516 = 0U;
	static int32_t t36 = -109800813;

	t36 = (x513>>(x514/(x515+x516)));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x526 = 1835LLU;
	int64_t x527 = INT64_MIN;
	uint64_t x528 = 20825922737596072LLU;
	static int32_t t37 = -11;

	t37 = (x525>>(x526/(x527+x528)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x545 = INT64_MAX;
	volatile int8_t x546 = -17;
	int8_t x547 = -47;
	int8_t x548 = INT8_MAX;
	int64_t t38 = INT64_MAX;

	t38 = (x545>>(x546/(x547+x548)));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x549 = INT32_MAX;
	uint8_t x552 = UINT8_MAX;

	t39 = (x549>>(x550/(x551+x552)));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x557 = 454U;
	volatile int32_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	volatile uint32_t t40 = 33818U;

	t40 = (x557>>(x558/(x559+x560)));

	if (t40 != 227U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x577 = UINT32_MAX;
	int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MIN;
	uint32_t t41 = UINT32_MAX;

	t41 = (x577>>(x578/(x579+x580)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x585 = 0;
	uint16_t x586 = 49U;
	int16_t x587 = -1;
	static int8_t x588 = INT8_MIN;
	volatile int32_t t42 = -205099;

	t42 = (x585>>(x586/(x587+x588)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x593 = INT16_MAX;
	int32_t x594 = INT32_MIN;
	volatile int64_t x595 = INT64_MIN;
	int32_t t43 = 584;

	t43 = (x593>>(x594/(x595+x596)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x617 = INT32_MAX;
	int8_t x618 = -1;
	uint8_t x619 = 84U;
	int16_t x620 = 0;
	volatile int32_t t44 = INT32_MAX;

	t44 = (x617>>(x618/(x619+x620)));

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x625 = 83385064616LL;
	int16_t x626 = -411;
	uint16_t x628 = UINT16_MAX;
	int64_t t45 = -6LL;

	t45 = (x625>>(x626/(x627+x628)));

	if (t45 != 83385064616LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x629 = 0;
	int8_t x630 = INT8_MAX;
	int16_t x631 = -13;
	int32_t t46 = -3917611;

	t46 = (x629>>(x630/(x631+x632)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x645 = 1628U;
	int8_t x646 = INT8_MAX;
	volatile int16_t x647 = -2;
	uint16_t x648 = UINT16_MAX;
	int32_t t47 = -213597470;

	t47 = (x645>>(x646/(x647+x648)));

	if (t47 != 1628) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x683 = 0U;
	int64_t t48 = INT64_MAX;

	t48 = (x681>>(x682/(x683+x684)));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x685 = INT16_MAX;
	static uint32_t x686 = 736U;
	int32_t x687 = INT32_MAX;
	int64_t x688 = INT64_MIN;
	volatile int32_t t49 = 0;

	t49 = (x685>>(x686/(x687+x688)));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x689 = 66U;
	int32_t x690 = 14;
	int16_t x692 = -1;
	volatile int32_t t50 = -43928;

	t50 = (x689>>(x690/(x691+x692)));

	if (t50 != 66) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x699 = 28U;
	uint16_t x700 = 47U;
	static int64_t t51 = 26332916300LL;

	t51 = (x697>>(x698/(x699+x700)));

	if (t51 != 6400045443LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x729 = 2396886U;
	static int16_t x730 = INT16_MIN;
	volatile int32_t x731 = -5023637;
	static uint32_t t52 = 27U;

	t52 = (x729>>(x730/(x731+x732)));

	if (t52 != 2396886U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x742 = 1321U;
	uint32_t x743 = 577U;
	static int16_t x744 = 1398;
	int32_t t53 = -119348;

	t53 = (x741>>(x742/(x743+x744)));

	if (t53 != 15388) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x749 = 0U;
	int8_t x750 = -1;
	static volatile int16_t x751 = INT16_MAX;

	t54 = (x749>>(x750/(x751+x752)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x757 = INT64_MAX;
	int32_t x758 = 592439;
	static int32_t x759 = INT32_MIN;
	static uint16_t x760 = 1U;

	t55 = (x757>>(x758/(x759+x760)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x774 = 43U;
	volatile uint32_t x775 = 399231U;
	volatile int32_t x776 = INT32_MAX;
	int32_t t56 = 354664;

	t56 = (x773>>(x774/(x775+x776)));

	if (t56 != 7287) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x777 = INT32_MAX;
	uint32_t x778 = UINT32_MAX;
	uint8_t x779 = 0U;
	int16_t x780 = -74;
	volatile int32_t t57 = 4116;

	t57 = (x777>>(x778/(x779+x780)));

	if (t57 != 1073741823) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x781 = INT8_MAX;
	volatile int16_t x782 = INT16_MIN;
	volatile int32_t x783 = -1;
	int32_t t58 = 46482312;

	t58 = (x781>>(x782/(x783+x784)));

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x793 = UINT32_MAX;
	volatile uint64_t x795 = 7527LLU;
	static int64_t x796 = INT64_MAX;
	uint32_t t59 = 66U;

	t59 = (x793>>(x794/(x795+x796)));

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x798 = 3401300;
	volatile uint32_t x799 = 7281550U;
	int32_t t60 = INT32_MAX;

	t60 = (x797>>(x798/(x799+x800)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x806 = UINT8_MAX;
	volatile uint64_t x807 = UINT64_MAX;
	int64_t x808 = -1LL;
	volatile int32_t t61 = -50344;

	t61 = (x805>>(x806/(x807+x808)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x817 = 1U;
	volatile uint64_t x818 = 182263649970174LLU;
	int16_t x819 = INT16_MIN;
	volatile int32_t x820 = -1;
	volatile int32_t t62 = 3;

	t62 = (x817>>(x818/(x819+x820)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x833 = 22U;
	static int32_t x834 = -1880;
	int16_t x835 = -86;
	static uint8_t x836 = 15U;
	volatile uint32_t t63 = 244U;

	t63 = (x833>>(x834/(x835+x836)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x845 = 47U;
	uint16_t x846 = 7U;
	int16_t x847 = -1;
	int8_t x848 = INT8_MAX;
	int32_t t64 = -136;

	t64 = (x845>>(x846/(x847+x848)));

	if (t64 != 47) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x861 = INT32_MAX;
	static uint64_t x864 = 4883563404688LLU;
	static int32_t t65 = INT32_MAX;

	t65 = (x861>>(x862/(x863+x864)));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x869 = UINT32_MAX;
	int8_t x870 = 1;
	volatile int16_t x871 = -1;
	uint32_t t66 = UINT32_MAX;

	t66 = (x869>>(x870/(x871+x872)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x881 = 0;
	int32_t x882 = -1975767;
	uint32_t x884 = UINT32_MAX;
	static volatile int32_t t67 = 1;

	t67 = (x881>>(x882/(x883+x884)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x893 = INT16_MAX;
	int16_t x894 = INT16_MIN;
	uint32_t x895 = 1874358094U;
	int8_t x896 = 0;

	t68 = (x893>>(x894/(x895+x896)));

	if (t68 != 8191) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x909 = 910528U;
	int16_t x910 = -1;
	volatile uint16_t x912 = 0U;

	t69 = (x909>>(x910/(x911+x912)));

	if (t69 != 455264U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x937 = 20U;
	volatile int16_t x938 = INT16_MIN;
	int8_t x939 = 22;

	t70 = (x937>>(x938/(x939+x940)));

	if (t70 != 20) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x941 = 53U;
	static uint32_t x942 = 49260U;
	volatile int8_t x943 = INT8_MAX;
	int8_t x944 = INT8_MIN;
	int32_t t71 = 94521430;

	t71 = (x941>>(x942/(x943+x944)));

	if (t71 != 53) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x953 = INT16_MAX;
	static int8_t x954 = INT8_MAX;
	volatile uint8_t x955 = UINT8_MAX;
	static int8_t x956 = 19;
	volatile int32_t t72 = 108;

	t72 = (x953>>(x954/(x955+x956)));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x965 = 2U;
	uint16_t x966 = 3U;
	uint8_t x967 = 8U;
	int32_t x968 = INT32_MIN;
	int32_t t73 = 2241108;

	t73 = (x965>>(x966/(x967+x968)));

	if (t73 != 2) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x970 = 1739;
	static uint64_t x971 = 3269383810713390LLU;
	static volatile int16_t x972 = 13626;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x969>>(x970/(x971+x972)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x981 = 2947U;
	int8_t x982 = -1;
	int32_t x983 = -1;
	int8_t x984 = INT8_MAX;
	volatile uint32_t t75 = 6691U;

	t75 = (x981>>(x982/(x983+x984)));

	if (t75 != 2947U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x994 = 117U;
	int16_t x995 = -1;
	int64_t x996 = -11331876LL;
	int32_t t76 = 898357;

	t76 = (x993>>(x994/(x995+x996)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x997 = INT32_MAX;
	static int32_t x998 = INT32_MAX;
	uint64_t x999 = 1220815318LLU;
	uint16_t x1000 = 0U;
	volatile int32_t t77 = -1021;

	t77 = (x997>>(x998/(x999+x1000)));

	if (t77 != 1073741823) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x1001 = 37U;
	int16_t x1004 = INT16_MAX;

	t78 = (x1001>>(x1002/(x1003+x1004)));

	if (t78 != 37) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x1006 = 3011776LLU;
	int64_t x1007 = -216635LL;
	uint64_t x1008 = 8332596LLU;
	volatile uint64_t t79 = 27476867264548LLU;

	t79 = (x1005>>(x1006/(x1007+x1008)));

	if (t79 != 17LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1010 = INT8_MAX;
	static int8_t x1011 = 1;
	int16_t x1012 = INT16_MIN;
	int32_t t80 = -7164;

	t80 = (x1009>>(x1010/(x1011+x1012)));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x1013 = 86U;
	int16_t x1014 = -1;
	static int8_t x1015 = -1;
	int8_t x1016 = INT8_MIN;
	volatile int32_t t81 = -201106716;

	t81 = (x1013>>(x1014/(x1015+x1016)));

	if (t81 != 86) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x1029 = INT64_MAX;
	static uint16_t x1030 = 1U;
	volatile int32_t x1031 = INT32_MIN;
	uint16_t x1032 = 144U;
	volatile int64_t t82 = INT64_MAX;

	t82 = (x1029>>(x1030/(x1031+x1032)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x1037 = UINT32_MAX;
	volatile int32_t x1038 = INT32_MAX;
	uint32_t x1039 = 6007217U;
	int32_t x1040 = INT32_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x1037>>(x1038/(x1039+x1040)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x1049 = 1076295132U;
	int16_t x1052 = INT16_MIN;

	t84 = (x1049>>(x1050/(x1051+x1052)));

	if (t84 != 1076295132U) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1061 = 6LLU;
	volatile int8_t x1062 = 47;
	uint16_t x1063 = 23716U;
	static uint64_t t85 = 803396450591614908LLU;

	t85 = (x1061>>(x1062/(x1063+x1064)));

	if (t85 != 6LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1102 = -1;
	int64_t x1103 = -1LL;
	int64_t t86 = 434077582LL;

	t86 = (x1101>>(x1102/(x1103+x1104)));

	if (t86 != 51LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x1113 = 85U;
	int32_t x1114 = 7;
	uint8_t x1116 = UINT8_MAX;
	int32_t t87 = 1;

	t87 = (x1113>>(x1114/(x1115+x1116)));

	if (t87 != 85) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x1141 = 0U;
	int16_t x1142 = -5;
	int8_t x1143 = -5;
	uint64_t x1144 = UINT64_MAX;
	static int32_t t88 = -627;

	t88 = (x1141>>(x1142/(x1143+x1144)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1145 = 11114U;
	int8_t x1146 = INT8_MIN;
	uint64_t x1147 = 1LLU;
	volatile int16_t x1148 = -3820;
	int32_t t89 = 8146;

	t89 = (x1145>>(x1146/(x1147+x1148)));

	if (t89 != 5557) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1155 = -1;
	int8_t x1156 = INT8_MIN;
	volatile int32_t t90 = -17096110;

	t90 = (x1153>>(x1154/(x1155+x1156)));

	if (t90 != 19) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x1157 = 121U;
	uint16_t x1158 = 9334U;
	int32_t x1160 = INT32_MAX;
	volatile int32_t t91 = -158727;

	t91 = (x1157>>(x1158/(x1159+x1160)));

	if (t91 != 121) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x1162 = INT8_MAX;
	int8_t x1164 = INT8_MIN;
	volatile int32_t t92 = 407842;

	t92 = (x1161>>(x1162/(x1163+x1164)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1185 = UINT16_MAX;
	int8_t x1186 = INT8_MIN;
	static int32_t x1188 = 2;
	int32_t t93 = -3509;

	t93 = (x1185>>(x1186/(x1187+x1188)));

	if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x1189 = 13135489941LLU;
	uint16_t x1190 = 1002U;
	int64_t x1191 = -18454805097417LL;
	static volatile uint64_t x1192 = 7LLU;

	t94 = (x1189>>(x1190/(x1191+x1192)));

	if (t94 != 13135489941LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1193 = INT8_MAX;
	int8_t x1194 = -1;
	int64_t x1195 = INT64_MAX;

	t95 = (x1193>>(x1194/(x1195+x1196)));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1202 = 982656LLU;
	int8_t x1203 = INT8_MIN;
	int16_t x1204 = INT16_MAX;
	static int32_t t96 = 3;

	t96 = (x1201>>(x1202/(x1203+x1204)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x1213 = 95LLU;
	static int8_t x1214 = INT8_MAX;
	int16_t x1215 = INT16_MIN;
	int32_t x1216 = -1;
	static volatile uint64_t t97 = 1879LLU;

	t97 = (x1213>>(x1214/(x1215+x1216)));

	if (t97 != 95LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1249 = 12U;
	int16_t x1252 = -1;
	int32_t t98 = 37069;

	t98 = (x1249>>(x1250/(x1251+x1252)));

	if (t98 != 12) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x1269 = 38961LLU;
	uint8_t x1271 = 102U;
	static int32_t x1272 = 312267;
	volatile uint64_t t99 = 5961011LLU;

	t99 = (x1269>>(x1270/(x1271+x1272)));

	if (t99 != 38961LLU) { NG(); } else { ; }
	
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

