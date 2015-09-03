#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x24 = -60;
int16_t x32 = INT16_MAX;
uint32_t x43 = 1356U;
volatile int32_t t3 = -191091042;
volatile uint32_t x54 = UINT32_MAX;
volatile int32_t t4 = -1;
int16_t x59 = 0;
volatile int8_t x83 = INT8_MIN;
int32_t t7 = 7889;
volatile uint32_t x97 = 666810U;
int64_t t9 = -5808LL;
volatile int32_t x145 = 181;
int8_t x146 = 4;
static int32_t t11 = 48274;
int32_t t13 = INT32_MIN;
int32_t t14 = 0;
int64_t t15 = INT64_MIN;
int16_t x288 = INT16_MIN;
volatile uint64_t x291 = 851512957308789718LLU;
volatile int8_t x292 = INT8_MAX;
volatile int32_t x302 = 118;
volatile int32_t x303 = -1;
int16_t x309 = -297;
int32_t x311 = -1;
int16_t x322 = INT16_MIN;
uint8_t x324 = 7U;
uint64_t x365 = UINT64_MAX;
int16_t x367 = -1;
uint32_t x372 = UINT32_MAX;
uint32_t x395 = 1U;
volatile int32_t t27 = 3514371;
int64_t x402 = INT64_MIN;
static uint32_t x410 = 31U;
int8_t x411 = INT8_MIN;
int32_t x444 = -3323619;
volatile int8_t x455 = INT8_MIN;
static int32_t x466 = INT32_MIN;
uint16_t x484 = 183U;
volatile int64_t x495 = -1LL;
uint32_t x509 = UINT32_MAX;
static uint16_t x511 = 7U;
static volatile int64_t x513 = 251448976LL;
int8_t x517 = -2;
volatile uint16_t x527 = 18198U;
int32_t t44 = -1;
int32_t x548 = 15;
int16_t x553 = INT16_MIN;
int64_t x555 = 7250177LL;
volatile int8_t x579 = -1;
int8_t x580 = INT8_MAX;
int64_t x581 = INT64_MIN;
static int64_t x621 = 128955659833455LL;
uint8_t x624 = UINT8_MAX;
int8_t x625 = -5;
int32_t x629 = -1;
int64_t t58 = INT64_MIN;
volatile int64_t x641 = INT64_MIN;
static uint16_t x642 = 7968U;
uint64_t x665 = UINT64_MAX;
int64_t x690 = INT64_MIN;
volatile int32_t t62 = -61628490;
int64_t x715 = -142LL;
static volatile int32_t t64 = 13;
int16_t x751 = 60;
uint8_t x759 = 58U;
uint64_t x766 = 1236121725251LLU;
static int32_t x785 = INT32_MIN;
volatile int32_t t71 = INT32_MIN;
volatile uint8_t x796 = 5U;
int64_t x810 = INT64_MIN;
int16_t x811 = -1;
int8_t x833 = INT8_MAX;
int64_t x834 = -1LL;
int32_t t75 = 23761;
static int32_t x859 = -6675;
int32_t x871 = 234236943;
int32_t t78 = -123199617;
int32_t x934 = -1;
int8_t x935 = INT8_MAX;
int16_t x937 = -1;
volatile uint64_t x939 = UINT64_MAX;
volatile int8_t x980 = -49;
volatile int16_t x981 = -3;
volatile int8_t x984 = INT8_MIN;
int32_t t83 = 114442;
int64_t x1007 = -23472488LL;
int64_t x1021 = 93873307LL;
static int16_t x1023 = INT16_MIN;
static int64_t t86 = -2147770LL;
static uint16_t x1047 = UINT16_MAX;
int8_t x1050 = 1;
volatile int8_t x1060 = INT8_MAX;
static int64_t x1082 = 2522102383LL;
int32_t x1101 = INT32_MIN;
volatile int32_t t93 = INT32_MIN;
int8_t x1135 = 1;
static int16_t x1136 = -1;
int16_t x1139 = -1;


void f0(void) {
	uint16_t x21 = 0U;
	uint16_t x22 = 68U;
	volatile uint32_t x23 = 19U;
	volatile int32_t t0 = 0;

	t0 = (x21/(x22<=(x23*x24)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x29 = -1;
	int8_t x30 = 53;
	uint32_t x31 = 15U;
	int32_t t1 = 1034932152;

	t1 = (x29/(x30<=(x31*x32)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x33 = 71472LL;
	static volatile uint8_t x34 = UINT8_MAX;
	volatile int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	volatile int64_t t2 = -229763LL;

	t2 = (x33/(x34<=(x35*x36)));

	if (t2 != 71472LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x41 = INT16_MIN;
	static volatile int8_t x42 = INT8_MAX;
	volatile uint16_t x44 = 136U;

	t3 = (x41/(x42<=(x43*x44)));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x53 = INT8_MIN;
	volatile uint16_t x55 = 15900U;
	uint64_t x56 = UINT64_MAX;

	t4 = (x53/(x54<=(x55*x56)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = -5071;
	static volatile int32_t x60 = INT32_MIN;
	volatile int32_t t5 = INT32_MIN;

	t5 = (x57/(x58<=(x59*x60)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x65 = -1;
	static volatile int64_t x66 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = -3544;
	static volatile int32_t t6 = -3023;

	t6 = (x65/(x66<=(x67*x68)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x81 = 1;
	int16_t x82 = INT16_MIN;
	volatile int16_t x84 = -307;

	t7 = (x81/(x82<=(x83*x84)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x98 = 7U;
	volatile uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 67439637LLU;
	volatile uint32_t t8 = 70968596U;

	t8 = (x97/(x98<=(x99*x100)));

	if (t8 != 666810U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x117 = -1LL;
	int16_t x118 = -60;
	static volatile int16_t x119 = 2;
	int8_t x120 = -1;

	t9 = (x117/(x118<=(x119*x120)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x141 = 214U;
	volatile int64_t x142 = INT64_MIN;
	int16_t x143 = 8616;
	volatile uint32_t x144 = 3574U;
	volatile int32_t t10 = 65544507;

	t10 = (x141/(x142<=(x143*x144)));

	if (t10 != 214) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x147 = -87;
	static int64_t x148 = -1LL;

	t11 = (x145/(x146<=(x147*x148)));

	if (t11 != 181) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x217 = UINT64_MAX;
	int64_t x218 = -1LL;
	uint32_t x219 = 5298U;
	volatile int16_t x220 = INT16_MIN;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x217/(x218<=(x219*x220)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	static volatile int16_t x231 = -4;
	static uint16_t x232 = 12U;

	t13 = (x229/(x230<=(x231*x232)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x233 = -5;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = -1;
	int32_t x236 = -1;

	t14 = (x233/(x234<=(x235*x236)));

	if (t14 != -5) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x249 = INT64_MIN;
	int64_t x250 = -1LL;
	volatile int32_t x251 = -1;
	uint8_t x252 = 1U;

	t15 = (x249/(x250<=(x251*x252)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x261 = INT8_MIN;
	int16_t x262 = 3178;
	int32_t x263 = 3;
	uint16_t x264 = 6326U;
	int32_t t16 = 846958701;

	t16 = (x261/(x262<=(x263*x264)));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x273 = 1U;
	uint32_t x274 = 843602U;
	int32_t x275 = 1;
	int8_t x276 = -31;
	static uint32_t t17 = 3U;

	t17 = (x273/(x274<=(x275*x276)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x285 = INT64_MAX;
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	int64_t t18 = INT64_MAX;

	t18 = (x285/(x286<=(x287*x288)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x289 = INT64_MIN;
	uint32_t x290 = 0U;
	int64_t t19 = INT64_MIN;

	t19 = (x289/(x290<=(x291*x292)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x301 = INT32_MIN;
	static uint32_t x304 = 743034694U;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x301/(x302<=(x303*x304)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x310 = -1122036;
	int16_t x312 = INT16_MAX;
	volatile int32_t t21 = -300758;

	t21 = (x309/(x310<=(x311*x312)));

	if (t21 != -297) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x317 = INT16_MAX;
	static volatile int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MIN;
	uint32_t x320 = UINT32_MAX;
	int32_t t22 = -2;

	t22 = (x317/(x318<=(x319*x320)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x321 = 0U;
	uint16_t x323 = 2U;
	int32_t t23 = 68;

	t23 = (x321/(x322<=(x323*x324)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x333 = 47U;
	int64_t x334 = INT64_MIN;
	uint32_t x335 = 214U;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t24 = -12473844;

	t24 = (x333/(x334<=(x335*x336)));

	if (t24 != 47) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x366 = 14;
	int32_t x368 = -652194694;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x365/(x366<=(x367*x368)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x369 = INT8_MAX;
	uint16_t x370 = 7U;
	static volatile int16_t x371 = INT16_MIN;
	volatile int32_t t26 = -444;

	t26 = (x369/(x370<=(x371*x372)));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x393 = -1;
	volatile uint8_t x394 = 7U;
	int8_t x396 = INT8_MIN;

	t27 = (x393/(x394<=(x395*x396)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x401 = -1;
	static int8_t x403 = -1;
	static volatile int64_t x404 = 36297LL;
	static volatile int32_t t28 = -3276;

	t28 = (x401/(x402<=(x403*x404)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x405 = 26;
	uint16_t x406 = UINT16_MAX;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MAX;
	static int32_t t29 = 71694075;

	t29 = (x405/(x406<=(x407*x408)));

	if (t29 != 26) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x409 = 8U;
	static uint64_t x412 = UINT64_MAX;
	int32_t t30 = 523;

	t30 = (x409/(x410<=(x411*x412)));

	if (t30 != 8) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x421 = 4U;
	uint8_t x422 = 0U;
	static int8_t x423 = -21;
	uint64_t x424 = 46938901493563726LLU;
	volatile uint32_t t31 = 105U;

	t31 = (x421/(x422<=(x423*x424)));

	if (t31 != 4U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x425 = 665620U;
	int32_t x426 = -37784129;
	volatile int64_t x427 = 1913455LL;
	int8_t x428 = INT8_MAX;
	static volatile uint32_t t32 = 15U;

	t32 = (x425/(x426<=(x427*x428)));

	if (t32 != 665620U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x441 = INT16_MIN;
	uint32_t x442 = 4U;
	int8_t x443 = INT8_MAX;
	volatile int32_t t33 = -52787333;

	t33 = (x441/(x442<=(x443*x444)));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x449 = INT8_MAX;
	uint8_t x450 = UINT8_MAX;
	volatile int16_t x451 = -5612;
	volatile int64_t x452 = -5LL;
	int32_t t34 = -438;

	t34 = (x449/(x450<=(x451*x452)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x453 = 4U;
	int8_t x454 = 5;
	int16_t x456 = -1;
	volatile int32_t t35 = 15512;

	t35 = (x453/(x454<=(x455*x456)));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x465 = UINT32_MAX;
	int16_t x467 = -1;
	volatile int8_t x468 = INT8_MIN;
	static uint32_t t36 = UINT32_MAX;

	t36 = (x465/(x466<=(x467*x468)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x473 = UINT32_MAX;
	volatile uint64_t x474 = 164144LLU;
	volatile uint64_t x475 = UINT64_MAX;
	volatile int64_t x476 = INT64_MAX;
	uint32_t t37 = UINT32_MAX;

	t37 = (x473/(x474<=(x475*x476)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x481 = -1;
	int8_t x482 = 12;
	uint64_t x483 = 31613913749466LLU;
	int32_t t38 = -1635715;

	t38 = (x481/(x482<=(x483*x484)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x493 = UINT32_MAX;
	static uint64_t x494 = 62LLU;
	int32_t x496 = INT32_MIN;
	uint32_t t39 = UINT32_MAX;

	t39 = (x493/(x494<=(x495*x496)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x501 = 11U;
	int16_t x502 = INT16_MIN;
	uint8_t x503 = UINT8_MAX;
	uint8_t x504 = 100U;
	uint32_t t40 = 486538533U;

	t40 = (x501/(x502<=(x503*x504)));

	if (t40 != 11U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x510 = -3681520312126LL;
	volatile uint8_t x512 = UINT8_MAX;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x509/(x510<=(x511*x512)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x514 = -1;
	static uint16_t x515 = UINT16_MAX;
	uint16_t x516 = 416U;
	int64_t t42 = 4554869168753577LL;

	t42 = (x513/(x514<=(x515*x516)));

	if (t42 != 251448976LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x518 = 0;
	uint64_t x519 = UINT64_MAX;
	int64_t x520 = -13015LL;
	volatile int32_t t43 = -58;

	t43 = (x517/(x518<=(x519*x520)));

	if (t43 != -2) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x525 = INT16_MAX;
	int16_t x526 = -1;
	int64_t x528 = 30LL;

	t44 = (x525/(x526<=(x527*x528)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x533 = -1LL;
	uint32_t x534 = 3U;
	int16_t x535 = -1;
	int8_t x536 = INT8_MAX;
	int64_t t45 = 5LL;

	t45 = (x533/(x534<=(x535*x536)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x541 = -1;
	int32_t x542 = -51048;
	static int8_t x543 = INT8_MIN;
	int32_t x544 = -1;
	volatile int32_t t46 = -10775968;

	t46 = (x541/(x542<=(x543*x544)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x545 = 16U;
	volatile int16_t x546 = INT16_MAX;
	static volatile uint32_t x547 = 492444294U;
	int32_t t47 = 9;

	t47 = (x545/(x546<=(x547*x548)));

	if (t47 != 16) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x554 = INT64_MIN;
	int64_t x556 = 1LL;
	volatile int32_t t48 = -112586171;

	t48 = (x553/(x554<=(x555*x556)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x573 = UINT64_MAX;
	uint64_t x574 = 1685866062LLU;
	int16_t x575 = -1;
	uint64_t x576 = 343LLU;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x573/(x574<=(x575*x576)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x577 = INT32_MAX;
	uint64_t x578 = 5737725696372670142LLU;
	static int32_t t50 = INT32_MAX;

	t50 = (x577/(x578<=(x579*x580)));

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x582 = -1;
	int64_t x583 = 12083LL;
	uint16_t x584 = UINT16_MAX;
	static int64_t t51 = INT64_MIN;

	t51 = (x581/(x582<=(x583*x584)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x593 = 1;
	static int32_t x594 = INT32_MIN;
	int16_t x595 = -1;
	uint8_t x596 = UINT8_MAX;
	static volatile int32_t t52 = -5298;

	t52 = (x593/(x594<=(x595*x596)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x617 = INT32_MAX;
	uint8_t x618 = 0U;
	static volatile int64_t x619 = INT64_MIN;
	uint64_t x620 = UINT64_MAX;
	volatile int32_t t53 = INT32_MAX;

	t53 = (x617/(x618<=(x619*x620)));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x622 = UINT16_MAX;
	uint64_t x623 = 964LLU;
	volatile int64_t t54 = 78LL;

	t54 = (x621/(x622<=(x623*x624)));

	if (t54 != 128955659833455LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x626 = INT64_MAX;
	volatile uint8_t x627 = 5U;
	uint64_t x628 = UINT64_MAX;
	int32_t t55 = 139069;

	t55 = (x625/(x626<=(x627*x628)));

	if (t55 != -5) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x630 = 7U;
	uint16_t x631 = 108U;
	uint16_t x632 = UINT16_MAX;
	static int32_t t56 = 12;

	t56 = (x629/(x630<=(x631*x632)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x633 = INT8_MIN;
	int8_t x634 = INT8_MAX;
	int8_t x635 = INT8_MAX;
	int32_t x636 = 50149;
	int32_t t57 = -876394433;

	t57 = (x633/(x634<=(x635*x636)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x637 = INT64_MIN;
	static uint8_t x638 = 0U;
	int32_t x639 = INT32_MIN;
	volatile uint64_t x640 = 627257LLU;

	t58 = (x637/(x638<=(x639*x640)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x643 = INT16_MIN;
	static int8_t x644 = -28;
	int64_t t59 = INT64_MIN;

	t59 = (x641/(x642<=(x643*x644)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x661 = INT32_MAX;
	static int8_t x662 = 0;
	int16_t x663 = INT16_MIN;
	volatile int32_t x664 = -1;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x661/(x662<=(x663*x664)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x666 = 15U;
	int32_t x667 = 4993;
	int16_t x668 = INT16_MAX;
	uint64_t t61 = UINT64_MAX;

	t61 = (x665/(x666<=(x667*x668)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x689 = INT16_MAX;
	int64_t x691 = INT64_MIN;
	int8_t x692 = 1;

	t62 = (x689/(x690<=(x691*x692)));

	if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x701 = -2;
	static volatile int64_t x702 = INT64_MIN;
	static uint8_t x703 = 0U;
	int16_t x704 = INT16_MIN;
	static int32_t t63 = 830657321;

	t63 = (x701/(x702<=(x703*x704)));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x713 = -1;
	uint64_t x714 = 0LLU;
	int16_t x716 = -1;

	t64 = (x713/(x714<=(x715*x716)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x717 = 3380263U;
	int64_t x718 = 1LL;
	uint64_t x719 = 457LLU;
	int64_t x720 = INT64_MIN;
	volatile uint32_t t65 = 0U;

	t65 = (x717/(x718<=(x719*x720)));

	if (t65 != 3380263U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	int64_t x743 = 0LL;
	volatile int16_t x744 = 5;
	int32_t t66 = -549495745;

	t66 = (x741/(x742<=(x743*x744)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x749 = -72883362190LL;
	uint8_t x750 = UINT8_MAX;
	static uint16_t x752 = 6U;
	volatile int64_t t67 = 1LL;

	t67 = (x749/(x750<=(x751*x752)));

	if (t67 != -72883362190LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x757 = INT16_MIN;
	uint8_t x758 = 2U;
	static uint64_t x760 = 136158985003LLU;
	static int32_t t68 = 93;

	t68 = (x757/(x758<=(x759*x760)));

	if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x765 = UINT64_MAX;
	volatile int32_t x767 = -6636;
	uint8_t x768 = UINT8_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (x765/(x766<=(x767*x768)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x781 = 286892704261243119LL;
	int16_t x782 = -71;
	int16_t x783 = 1;
	int8_t x784 = -1;
	int64_t t70 = -217715048LL;

	t70 = (x781/(x782<=(x783*x784)));

	if (t70 != 286892704261243119LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x786 = UINT8_MAX;
	uint64_t x787 = 229218258846989672LLU;
	int8_t x788 = INT8_MIN;

	t71 = (x785/(x786<=(x787*x788)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x793 = 955250025;
	uint64_t x794 = 1538116LLU;
	static int32_t x795 = 256045136;
	int32_t t72 = -7747;

	t72 = (x793/(x794<=(x795*x796)));

	if (t72 != 955250025) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x809 = UINT64_MAX;
	int8_t x812 = 4;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (x809/(x810<=(x811*x812)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x835 = 0U;
	static uint32_t x836 = 20214111U;
	volatile int32_t t74 = -13;

	t74 = (x833/(x834<=(x835*x836)));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x853 = 1U;
	uint8_t x854 = 1U;
	volatile uint32_t x855 = 713U;
	static int32_t x856 = INT32_MIN;

	t75 = (x853/(x854<=(x855*x856)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x857 = INT32_MIN;
	int8_t x858 = INT8_MAX;
	int8_t x860 = -1;
	static int32_t t76 = INT32_MIN;

	t76 = (x857/(x858<=(x859*x860)));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x869 = -1;
	int16_t x870 = -1;
	uint8_t x872 = 3U;
	volatile int32_t t77 = -203;

	t77 = (x869/(x870<=(x871*x872)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x881 = UINT8_MAX;
	static int64_t x882 = -390977LL;
	int16_t x883 = INT16_MAX;
	static int8_t x884 = -1;

	t78 = (x881/(x882<=(x883*x884)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x909 = 489U;
	int64_t x910 = 1343LL;
	int8_t x911 = INT8_MIN;
	int8_t x912 = -33;
	volatile int32_t t79 = 248366664;

	t79 = (x909/(x910<=(x911*x912)));

	if (t79 != 489) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x933 = -13216512;
	volatile int16_t x936 = INT16_MAX;
	volatile int32_t t80 = 832436757;

	t80 = (x933/(x934<=(x935*x936)));

	if (t80 != -13216512) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x938 = INT64_MIN;
	static int8_t x940 = INT8_MAX;
	volatile int32_t t81 = -6751735;

	t81 = (x937/(x938<=(x939*x940)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x977 = INT64_MAX;
	uint16_t x978 = 383U;
	volatile int32_t x979 = -7294290;
	int64_t t82 = INT64_MAX;

	t82 = (x977/(x978<=(x979*x980)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x982 = INT32_MIN;
	static uint8_t x983 = 1U;

	t83 = (x981/(x982<=(x983*x984)));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x993 = INT32_MIN;
	uint64_t x994 = 3LLU;
	uint32_t x995 = 1891U;
	uint16_t x996 = 1237U;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x993/(x994<=(x995*x996)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x1005 = -2524591681865083249LL;
	static volatile uint8_t x1006 = 6U;
	static volatile uint64_t x1008 = 7249145LLU;
	int64_t t85 = 403256828LL;

	t85 = (x1005/(x1006<=(x1007*x1008)));

	if (t85 != -2524591681865083249LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x1022 = 3;
	uint32_t x1024 = 7378715U;

	t86 = (x1021/(x1022<=(x1023*x1024)));

	if (t86 != 93873307LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x1037 = 108U;
	int16_t x1038 = -1;
	volatile int8_t x1039 = INT8_MAX;
	int8_t x1040 = 1;
	int32_t t87 = 7;

	t87 = (x1037/(x1038<=(x1039*x1040)));

	if (t87 != 108) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1045 = -1;
	int64_t x1046 = INT64_MAX;
	uint64_t x1048 = 3932862460976403LLU;
	int32_t t88 = 82009428;

	t88 = (x1045/(x1046<=(x1047*x1048)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x1049 = UINT16_MAX;
	static int8_t x1051 = -1;
	uint32_t x1052 = UINT32_MAX;
	volatile int32_t t89 = 0;

	t89 = (x1049/(x1050<=(x1051*x1052)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x1057 = 91U;
	static volatile int32_t x1058 = INT32_MIN;
	int64_t x1059 = 6292225116606LL;
	volatile int32_t t90 = 1609580;

	t90 = (x1057/(x1058<=(x1059*x1060)));

	if (t90 != 91) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x1081 = INT64_MIN;
	uint32_t x1083 = UINT32_MAX;
	static uint8_t x1084 = UINT8_MAX;
	int64_t t91 = INT64_MIN;

	t91 = (x1081/(x1082<=(x1083*x1084)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x1097 = INT64_MAX;
	static volatile uint16_t x1098 = 136U;
	uint8_t x1099 = 24U;
	uint64_t x1100 = 7552123047553185706LLU;
	int64_t t92 = INT64_MAX;

	t92 = (x1097/(x1098<=(x1099*x1100)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1102 = UINT16_MAX;
	uint64_t x1103 = 205899442222LLU;
	volatile uint16_t x1104 = 124U;

	t93 = (x1101/(x1102<=(x1103*x1104)));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1105 = 7909;
	int32_t x1106 = INT32_MIN;
	static volatile int8_t x1107 = -1;
	int8_t x1108 = -1;
	volatile int32_t t94 = 0;

	t94 = (x1105/(x1106<=(x1107*x1108)));

	if (t94 != 7909) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1117 = INT32_MIN;
	int32_t x1118 = INT32_MIN;
	volatile int16_t x1119 = INT16_MIN;
	static uint8_t x1120 = 1U;
	int32_t t95 = INT32_MIN;

	t95 = (x1117/(x1118<=(x1119*x1120)));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x1133 = INT32_MAX;
	int8_t x1134 = -1;
	static int32_t t96 = INT32_MAX;

	t96 = (x1133/(x1134<=(x1135*x1136)));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x1137 = UINT16_MAX;
	int64_t x1138 = INT64_MIN;
	int32_t x1140 = 143788593;
	int32_t t97 = 4;

	t97 = (x1137/(x1138<=(x1139*x1140)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x1141 = 466U;
	static uint32_t x1142 = 18U;
	static uint16_t x1143 = 362U;
	static int16_t x1144 = INT16_MIN;
	int32_t t98 = 1;

	t98 = (x1141/(x1142<=(x1143*x1144)));

	if (t98 != 466) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x1145 = INT8_MAX;
	int8_t x1146 = INT8_MIN;
	uint16_t x1147 = 22797U;
	static int64_t x1148 = 111538268LL;
	int32_t t99 = -2;

	t99 = (x1145/(x1146<=(x1147*x1148)));

	if (t99 != 127) { NG(); } else { ; }
	
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

