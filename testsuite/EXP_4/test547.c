#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = INT64_MAX;
static int8_t x18 = INT8_MAX;
volatile int64_t t3 = 153850161545LL;
static int32_t x30 = 63719269;
int64_t x31 = INT64_MIN;
int32_t x41 = INT32_MAX;
int16_t x43 = INT16_MIN;
static int32_t t7 = -114;
uint32_t x51 = UINT32_MAX;
int16_t x64 = INT16_MAX;
static int32_t x84 = INT32_MIN;
uint32_t t11 = 4U;
int64_t x130 = -325180550702584LL;
int16_t x131 = INT16_MIN;
int16_t x146 = INT16_MIN;
int32_t t16 = -4877;
int8_t x154 = -1;
int32_t x168 = 2872;
uint16_t x175 = UINT16_MAX;
uint16_t x176 = UINT16_MAX;
int32_t x186 = INT32_MAX;
int32_t t22 = 426919961;
int32_t x197 = INT32_MIN;
volatile int64_t x204 = -3LL;
volatile int8_t x278 = INT8_MIN;
static int8_t x280 = INT8_MIN;
volatile uint8_t x307 = UINT8_MAX;
int8_t x308 = INT8_MIN;
static int64_t x309 = INT64_MIN;
volatile uint64_t t33 = 506200948813429LLU;
static int8_t x321 = INT8_MIN;
int8_t x325 = 2;
volatile int8_t x328 = INT8_MIN;
int16_t x352 = -1;
volatile uint64_t t37 = 2506999685059LLU;
uint64_t x359 = 35601410LLU;
static int16_t x360 = 6;
int16_t x361 = INT16_MAX;
int8_t x377 = 1;
int32_t x382 = INT32_MIN;
volatile int32_t x419 = INT32_MAX;
int16_t x420 = -15858;
int64_t x423 = INT64_MAX;
volatile int64_t t43 = 9678582663LL;
volatile int16_t x434 = 3;
int64_t x461 = INT64_MIN;
static uint8_t x478 = UINT8_MAX;
static uint32_t x496 = 497U;
int32_t x512 = 264;
volatile uint64_t x513 = 2073091630LLU;
int32_t x515 = INT32_MAX;
static uint16_t x516 = 7667U;
uint32_t x517 = UINT32_MAX;
static int8_t x530 = -1;
volatile int32_t t55 = -3676;
volatile int32_t x543 = 16206828;
static int32_t t57 = 73145;
int64_t x549 = -1LL;
int64_t x550 = INT64_MIN;
uint8_t x557 = UINT8_MAX;
int64_t x558 = -947975786LL;
volatile uint8_t x601 = 20U;
static int16_t x602 = 9;
static int64_t x605 = 212553LL;
int16_t x608 = INT16_MIN;
int16_t x613 = INT16_MIN;
volatile uint32_t x616 = 528U;
uint16_t x631 = 4658U;
volatile int64_t x633 = INT64_MIN;
int8_t x641 = INT8_MIN;
int64_t t66 = 23817459LL;
uint32_t x645 = UINT32_MAX;
volatile int32_t x665 = -1;
static int8_t x676 = INT8_MIN;
int64_t x679 = INT64_MAX;
int64_t x708 = -3680867LL;
int16_t x716 = INT16_MIN;
int64_t t78 = -120LL;
volatile int8_t x719 = INT8_MAX;
int64_t t79 = 8473LL;
int64_t x729 = -56449372LL;
int32_t x731 = INT32_MIN;
static int32_t x739 = INT32_MIN;
int32_t t85 = -114706;
int16_t x778 = INT16_MIN;
static int64_t x782 = -1LL;
uint64_t x783 = UINT64_MAX;
uint64_t x784 = 2176561239LLU;
volatile int32_t x787 = INT32_MAX;
volatile int8_t x788 = INT8_MIN;
volatile int64_t t89 = -1725LL;
volatile int16_t x814 = -28;
int8_t x849 = -3;
uint64_t x877 = UINT64_MAX;
uint16_t x878 = UINT16_MAX;
uint16_t x879 = 1692U;
int64_t x880 = -1LL;
volatile uint64_t t97 = 52827973301LLU;


void f0(void) {
	static int64_t x1 = INT64_MAX;
	int16_t x2 = INT16_MIN;
	static int64_t x3 = INT64_MAX;
	static uint64_t x4 = 1394743510551LLU;
	volatile uint64_t t0 = 7466207105802889LLU;

	t0 = (x1+(x2/(x3/x4)));

	if (t0 != 9223374826341842053LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	static uint32_t x6 = 7578830U;
	volatile uint16_t x7 = 12U;
	int8_t x8 = -3;

	t1 = (x5+(x6/(x7/x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = 0;
	int64_t x19 = INT64_MAX;
	int8_t x20 = 55;
	volatile int64_t t2 = 326718559386440LL;

	t2 = (x17+(x18/(x19/x20)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = 36U;
	volatile int32_t x22 = 49;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;

	t3 = (x21+(x22/(x23/x24)));

	if (t3 != 36LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 0U;
	static int16_t x32 = INT16_MIN;
	volatile int64_t t4 = -185LL;

	t4 = (x29+(x30/(x31/x32)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = INT64_MIN;
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = INT8_MAX;
	int32_t x40 = -1;
	volatile int64_t t5 = -3955226LL;

	t5 = (x37+(x38/(x39/x40)));

	if (t5 != -9223372036837866488LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x42 = -5589365LL;
	int64_t x44 = -1LL;
	volatile int64_t t6 = -13225LL;

	t6 = (x41+(x42/(x43/x44)));

	if (t6 != 2147483477LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = UINT8_MAX;

	t7 = (x45+(x46/(x47/x48)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x49 = 124U;
	static volatile uint32_t x50 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	static volatile uint32_t t8 = 2073U;

	t8 = (x49+(x50/(x51/x52)));

	if (t8 != 123U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 27U;
	volatile int64_t x62 = INT64_MAX;
	volatile uint32_t x63 = 752345461U;
	volatile int64_t t9 = 7882578LL;

	t9 = (x61+(x62/(x63/x64)));

	if (t9 != 401714809967569LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = INT16_MIN;
	volatile int32_t x67 = INT32_MIN;
	int64_t x68 = 1LL;
	static int64_t t10 = 6387943LL;

	t10 = (x65+(x66/(x67/x68)));

	if (t10 != 32767LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = 23001279;
	uint32_t x83 = UINT32_MAX;

	t11 = (x81+(x82/(x83/x84)));

	if (t11 != 23066814U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -480487;
	static int8_t x91 = INT8_MIN;
	int8_t x92 = 1;
	static int64_t t12 = -8060909249LL;

	t12 = (x89+(x90/(x91/x92)));

	if (t12 != -9223372036854772055LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x113 = -2009LL;
	volatile int16_t x114 = 5;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int64_t t13 = 33416LL;

	t13 = (x113+(x114/(x115/x116)));

	if (t13 != -2009LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x129 = -1;
	int8_t x132 = 8;
	int64_t t14 = -68944LL;

	t14 = (x129+(x130/(x131/x132)));

	if (t14 != 79389782885LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x133 = -1LL;
	int8_t x134 = INT8_MIN;
	static int8_t x135 = INT8_MIN;
	static volatile uint32_t x136 = 1716895793U;
	int64_t t15 = 7409165LL;

	t15 = (x133+(x134/(x135/x136)));

	if (t15 != 2147483583LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x145 = 6062517;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = -3;

	t16 = (x145+(x146/(x147/x148)));

	if (t16 != 6062902) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x153 = -1;
	int16_t x155 = INT16_MIN;
	int16_t x156 = 1;
	int32_t t17 = 220513;

	t17 = (x153+(x154/(x155/x156)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x157 = 0U;
	int64_t x158 = -27615LL;
	static int16_t x159 = -1400;
	int8_t x160 = INT8_MIN;
	static volatile int64_t t18 = -1022LL;

	t18 = (x157+(x158/(x159/x160)));

	if (t18 != -2761LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x165 = INT16_MIN;
	uint64_t x166 = 443LLU;
	uint64_t x167 = 7898875794056288955LLU;
	static volatile uint64_t t19 = 43897LLU;

	t19 = (x165+(x166/(x167/x168)));

	if (t19 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x169 = UINT64_MAX;
	volatile int8_t x170 = 1;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 26U;
	static volatile uint64_t t20 = UINT64_MAX;

	t20 = (x169+(x170/(x171/x172)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = -1;
	static int32_t t21 = 1;

	t21 = (x173+(x174/(x175/x176)));

	if (t21 != 2147483646) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x185 = -1;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 1;

	t22 = (x185+(x186/(x187/x188)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = INT32_MAX;
	volatile int64_t x191 = 14586598520816256LL;
	int8_t x192 = -12;
	volatile int64_t t23 = -3024233LL;

	t23 = (x189+(x190/(x191/x192)));

	if (t23 != -2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x198 = -2597;
	int32_t x199 = INT32_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t24 = INT32_MIN;

	t24 = (x197+(x198/(x199/x200)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x201 = -564;
	uint16_t x202 = 1U;
	int8_t x203 = INT8_MAX;
	static int64_t t25 = 111342526LL;

	t25 = (x201+(x202/(x203/x204)));

	if (t25 != -564LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x233 = INT16_MAX;
	uint32_t x234 = 14U;
	uint8_t x235 = 6U;
	static int8_t x236 = -1;
	uint32_t t26 = 1039276505U;

	t26 = (x233+(x234/(x235/x236)));

	if (t26 != 32767U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x245 = INT16_MIN;
	uint16_t x246 = 283U;
	static int64_t x247 = INT64_MIN;
	uint8_t x248 = 1U;
	int64_t t27 = 29295485311205LL;

	t27 = (x245+(x246/(x247/x248)));

	if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x273 = 0U;
	uint8_t x274 = 0U;
	volatile int64_t x275 = INT64_MAX;
	volatile int16_t x276 = INT16_MIN;
	volatile int64_t t28 = 0LL;

	t28 = (x273+(x274/(x275/x276)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x277 = -61;
	int64_t x279 = INT64_MAX;
	volatile int64_t t29 = -653158LL;

	t29 = (x277+(x278/(x279/x280)));

	if (t29 != -61LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x285 = UINT16_MAX;
	int16_t x286 = 8;
	volatile int32_t x287 = INT32_MIN;
	uint32_t x288 = 180752U;
	volatile uint32_t t30 = 3303235U;

	t30 = (x285+(x286/(x287/x288)));

	if (t30 != 65535U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x297 = UINT32_MAX;
	uint32_t x298 = UINT32_MAX;
	uint64_t x299 = 263LLU;
	int8_t x300 = INT8_MAX;
	volatile uint64_t t31 = 1349884228026872084LLU;

	t31 = (x297+(x298/(x299/x300)));

	if (t31 != 6442450942LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x305 = -1LL;
	int64_t x306 = -1LL;
	volatile int64_t t32 = 85971470528997930LL;

	t32 = (x305+(x306/(x307/x308)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x310 = 50088LLU;
	int8_t x311 = -1;
	volatile int8_t x312 = -1;

	t33 = (x309+(x310/(x311/x312)));

	if (t33 != 9223372036854825896LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x322 = 15294U;
	volatile int16_t x323 = INT16_MAX;
	int64_t x324 = -1LL;
	volatile int64_t t34 = -28118102493689LL;

	t34 = (x321+(x322/(x323/x324)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	volatile int64_t t35 = 5807447382746LL;

	t35 = (x325+(x326/(x327/x328)));

	if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = INT32_MAX;
	int16_t x335 = -158;
	int32_t x336 = -1;
	int32_t t36 = -24801;

	t36 = (x333+(x334/(x335/x336)));

	if (t36 != 13591540) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x349 = 1U;
	int16_t x350 = INT16_MIN;
	uint64_t x351 = UINT64_MAX;

	t37 = (x349+(x350/(x351/x352)));

	if (t37 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x357 = 2U;
	int16_t x358 = -1;
	volatile uint64_t t38 = 936161650465LLU;

	t38 = (x357+(x358/(x359/x360)));

	if (t38 != 3108878852272LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x362 = INT16_MAX;
	volatile uint64_t x363 = 1937371410807786030LLU;
	int8_t x364 = 1;
	volatile uint64_t t39 = 1475806LLU;

	t39 = (x361+(x362/(x363/x364)));

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	static volatile int64_t x380 = -1LL;
	static volatile int64_t t40 = 150184128686466LL;

	t40 = (x377+(x378/(x379/x380)));

	if (t40 != -127LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x381 = -332;
	int32_t x383 = INT32_MIN;
	uint32_t x384 = 439366343U;
	volatile uint32_t t41 = 56877U;

	t41 = (x381+(x382/(x383/x384)));

	if (t41 != 536870580U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x417 = 298162215303681685LLU;
	uint64_t x418 = UINT64_MAX;
	uint64_t t42 = 2LLU;

	t42 = (x417+(x418/(x419/x420)));

	if (t42 != 298162215303681686LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x421 = INT8_MAX;
	int64_t x422 = -10LL;
	int64_t x424 = -3019LL;

	t43 = (x421+(x422/(x423/x424)));

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x433 = -1;
	uint64_t x435 = UINT64_MAX;
	uint64_t x436 = 380242142773459LLU;
	uint64_t t44 = UINT64_MAX;

	t44 = (x433+(x434/(x435/x436)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x462 = 3U;
	uint32_t x463 = 7563979U;
	int16_t x464 = INT16_MAX;
	volatile int64_t t45 = INT64_MIN;

	t45 = (x461+(x462/(x463/x464)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x469 = 3U;
	static uint16_t x470 = UINT16_MAX;
	uint16_t x471 = UINT16_MAX;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t46 = -116722;

	t46 = (x469+(x470/(x471/x472)));

	if (t46 != -125) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x473 = INT64_MIN;
	int8_t x474 = INT8_MAX;
	volatile int32_t x475 = 403679108;
	int16_t x476 = INT16_MAX;
	volatile int64_t t47 = INT64_MIN;

	t47 = (x473+(x474/(x475/x476)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x477 = -1;
	int16_t x479 = INT16_MAX;
	int16_t x480 = -30;
	int32_t t48 = -2;

	t48 = (x477+(x478/(x479/x480)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x493 = INT8_MIN;
	static uint64_t x494 = 1475LLU;
	int32_t x495 = -881056132;
	uint64_t t49 = 29829LLU;

	t49 = (x493+(x494/(x495/x496)));

	if (t49 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x501 = INT64_MIN;
	static int32_t x502 = INT32_MAX;
	volatile uint8_t x503 = UINT8_MAX;
	static volatile uint8_t x504 = UINT8_MAX;
	volatile int64_t t50 = 621272LL;

	t50 = (x501+(x502/(x503/x504)));

	if (t50 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x509 = 15426;
	int32_t x510 = 24;
	uint16_t x511 = UINT16_MAX;
	int32_t t51 = 736493119;

	t51 = (x509+(x510/(x511/x512)));

	if (t51 != 15426) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x514 = 3LL;
	uint64_t t52 = 13517854879887531LLU;

	t52 = (x513+(x514/(x515/x516)));

	if (t52 != 2073091630LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x518 = INT16_MIN;
	volatile int16_t x519 = INT16_MIN;
	static volatile int8_t x520 = 57;
	uint32_t t53 = 14156U;

	t53 = (x517+(x518/(x519/x520)));

	if (t53 != 56U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x521 = -4147LL;
	volatile int32_t x522 = INT32_MIN;
	int16_t x523 = INT16_MAX;
	uint16_t x524 = 466U;
	int64_t t54 = -246822541847LL;

	t54 = (x521+(x522/(x523/x524)));

	if (t54 != -30682484LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x529 = -1;
	uint16_t x531 = 1855U;
	int16_t x532 = -1;

	t55 = (x529+(x530/(x531/x532)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x533 = -1;
	int8_t x534 = INT8_MAX;
	volatile int32_t x535 = INT32_MIN;
	uint32_t x536 = 7U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x533+(x534/(x535/x536)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x541 = 22U;
	volatile int32_t x542 = -1;
	uint16_t x544 = 417U;

	t57 = (x541+(x542/(x543/x544)));

	if (t57 != 22) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x551 = 691;
	int8_t x552 = 1;
	volatile int64_t t58 = -3260601217LL;

	t58 = (x549+(x550/(x551/x552)));

	if (t58 != -13347861124247143LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x559 = 14U;
	static int8_t x560 = -1;
	int64_t t59 = 33258172497778LL;

	t59 = (x557+(x558/(x559/x560)));

	if (t59 != 67712811LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x589 = 7;
	volatile int8_t x590 = 51;
	volatile int64_t x591 = INT64_MIN;
	volatile int16_t x592 = INT16_MIN;
	int64_t t60 = 1501711226466LL;

	t60 = (x589+(x590/(x591/x592)));

	if (t60 != 7LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x603 = INT32_MAX;
	volatile int8_t x604 = INT8_MIN;
	int32_t t61 = 26378642;

	t61 = (x601+(x602/(x603/x604)));

	if (t61 != 20) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x606 = INT32_MIN;
	int32_t x607 = INT32_MIN;
	int64_t t62 = -503692LL;

	t62 = (x605+(x606/(x607/x608)));

	if (t62 != 179785LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x614 = 5936607U;
	int8_t x615 = -31;
	static volatile uint32_t t63 = 1047076350U;

	t63 = (x613+(x614/(x615/x616)));

	if (t63 != 4294934528U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x629 = INT64_MIN;
	int16_t x630 = INT16_MIN;
	static volatile int32_t x632 = -1;
	int64_t t64 = -872925881LL;

	t64 = (x629+(x630/(x631/x632)));

	if (t64 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x634 = 13968453;
	uint64_t x635 = 1622988130602794600LLU;
	int8_t x636 = 3;
	uint64_t t65 = 1113903934964841383LLU;

	t65 = (x633+(x634/(x635/x636)));

	if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x642 = 175451921LL;
	volatile int32_t x643 = INT32_MIN;
	uint16_t x644 = 2695U;

	t66 = (x641+(x642/(x643/x644)));

	if (t66 != -348LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x646 = 34403977013145LLU;
	volatile uint64_t x647 = UINT64_MAX;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t67 = 196180137852LLU;

	t67 = (x645+(x646/(x647/x648)));

	if (t67 != 34408271980440LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x661 = -1;
	static volatile int8_t x662 = INT8_MAX;
	volatile int16_t x663 = INT16_MAX;
	static int64_t x664 = -1LL;
	volatile int64_t t68 = 48215918406LL;

	t68 = (x661+(x662/(x663/x664)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x666 = 5U;
	volatile int8_t x667 = -1;
	uint64_t x668 = UINT64_MAX;
	uint64_t t69 = 109535072LLU;

	t69 = (x665+(x666/(x667/x668)));

	if (t69 != 4LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x669 = INT64_MIN;
	int32_t x670 = -1;
	int64_t x671 = -62719886LL;
	uint16_t x672 = 319U;
	volatile int64_t t70 = INT64_MIN;

	t70 = (x669+(x670/(x671/x672)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x673 = 28369LL;
	int8_t x674 = 1;
	int16_t x675 = INT16_MAX;
	static volatile int64_t t71 = -10096LL;

	t71 = (x673+(x674/(x675/x676)));

	if (t71 != 28369LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x677 = -1LL;
	int16_t x678 = 1794;
	static uint32_t x680 = UINT32_MAX;
	int64_t t72 = 316398826LL;

	t72 = (x677+(x678/(x679/x680)));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x681 = INT16_MAX;
	int64_t x682 = INT64_MAX;
	int32_t x683 = INT32_MIN;
	uint16_t x684 = 1351U;
	volatile int64_t t73 = -2602858614063LL;

	t73 = (x681+(x682/(x683/x684)));

	if (t73 != -5802501451523LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x685 = 1;
	uint32_t x686 = 15741U;
	uint64_t x687 = UINT64_MAX;
	static int64_t x688 = INT64_MIN;
	uint64_t t74 = 31895192542176LLU;

	t74 = (x685+(x686/(x687/x688)));

	if (t74 != 15742LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x689 = INT16_MIN;
	volatile int64_t x690 = -1LL;
	int32_t x691 = -573;
	uint64_t x692 = 1118351315093090315LLU;
	volatile uint64_t t75 = 113036652387573713LLU;

	t75 = (x689+(x690/(x691/x692)));

	if (t75 != 1152921504606814207LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x705 = -25LL;
	uint64_t x706 = UINT64_MAX;
	static int32_t x707 = INT32_MIN;
	uint64_t t76 = 361554LLU;

	t76 = (x705+(x706/(x707/x708)));

	if (t76 != 31641070452331967LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x709 = INT32_MAX;
	uint32_t x710 = 1856U;
	uint8_t x711 = 104U;
	static int8_t x712 = -12;
	uint32_t t77 = 1056893635U;

	t77 = (x709+(x710/(x711/x712)));

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x713 = 1;
	int64_t x714 = INT64_MAX;
	int64_t x715 = INT64_MIN;

	t78 = (x713+(x714/(x715/x716)));

	if (t78 != 32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x717 = -1LL;
	volatile int64_t x718 = INT64_MIN;
	uint16_t x720 = 13U;

	t79 = (x717+(x718/(x719/x720)));

	if (t79 != -1024819115206086201LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x721 = -13931034961LL;
	static int8_t x722 = -1;
	int64_t x723 = -9591882LL;
	int16_t x724 = -264;
	static int64_t t80 = -16LL;

	t80 = (x721+(x722/(x723/x724)));

	if (t80 != -13931034961LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x730 = 15404472891262896LLU;
	int16_t x732 = INT16_MAX;
	uint64_t t81 = 501273470928371LLU;

	t81 = (x729+(x730/(x731/x732)));

	if (t81 != 18446744073653102244LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x737 = -1;
	static int32_t x738 = 285;
	int32_t x740 = -31289;
	volatile int32_t t82 = -9079;

	t82 = (x737+(x738/(x739/x740)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x745 = INT64_MIN;
	static int16_t x746 = 93;
	int64_t x747 = INT64_MIN;
	int16_t x748 = INT16_MAX;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x745+(x746/(x747/x748)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x753 = UINT16_MAX;
	int64_t x754 = INT64_MAX;
	int64_t x755 = INT64_MAX;
	volatile int32_t x756 = INT32_MAX;
	volatile int64_t t84 = -446LL;

	t84 = (x753+(x754/(x755/x756)));

	if (t84 != 2147549182LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x761 = -1;
	int16_t x762 = INT16_MIN;
	int32_t x763 = INT32_MIN;
	static volatile int16_t x764 = INT16_MIN;

	t85 = (x761+(x762/(x763/x764)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x765 = -1260239LL;
	int8_t x766 = -1;
	int8_t x767 = -1;
	int16_t x768 = -1;
	volatile int64_t t86 = 52480853818211181LL;

	t86 = (x765+(x766/(x767/x768)));

	if (t86 != -1260240LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x777 = 361U;
	static volatile int64_t x779 = INT64_MAX;
	int8_t x780 = INT8_MIN;
	int64_t t87 = -17LL;

	t87 = (x777+(x778/(x779/x780)));

	if (t87 != 361LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x781 = 17517228775LL;
	uint64_t t88 = 237LLU;

	t88 = (x781+(x782/(x783/x784)));

	if (t88 != 19693790014LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x785 = 13617497083778LL;
	int16_t x786 = -1;

	t89 = (x785+(x786/(x787/x788)));

	if (t89 != 13617497083778LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x793 = INT8_MAX;
	int8_t x794 = 3;
	int32_t x795 = -1;
	volatile uint64_t x796 = 6972679344LLU;
	uint64_t t90 = 50LLU;

	t90 = (x793+(x794/(x795/x796)));

	if (t90 != 127LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x805 = -167;
	volatile uint16_t x806 = UINT16_MAX;
	int64_t x807 = INT64_MIN;
	uint16_t x808 = UINT16_MAX;
	static int64_t t91 = 89625022667071LL;

	t91 = (x805+(x806/(x807/x808)));

	if (t91 != -167LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x813 = 16144625U;
	int32_t x815 = 181;
	int8_t x816 = -1;
	static uint32_t t92 = 2375136U;

	t92 = (x813+(x814/(x815/x816)));

	if (t92 != 16144625U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x833 = 2657LL;
	volatile int64_t x834 = 60LL;
	int64_t x835 = 8906024763LL;
	uint32_t x836 = UINT32_MAX;
	int64_t t93 = 806322080LL;

	t93 = (x833+(x834/(x835/x836)));

	if (t93 != 2687LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x845 = 2U;
	int16_t x846 = 7;
	int8_t x847 = INT8_MIN;
	volatile uint64_t x848 = 663588377730LLU;
	uint64_t t94 = 184202LLU;

	t94 = (x845+(x846/(x847/x848)));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x850 = -1;
	int32_t x851 = -245458;
	volatile int64_t x852 = 215LL;
	volatile int64_t t95 = -31LL;

	t95 = (x849+(x850/(x851/x852)));

	if (t95 != -3LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x869 = -252LL;
	uint8_t x870 = UINT8_MAX;
	int64_t x871 = -5289048868LL;
	static int32_t x872 = INT32_MIN;
	static volatile int64_t t96 = 1LL;

	t96 = (x869+(x870/(x871/x872)));

	if (t96 != -125LL) { NG(); } else { ; }
	
}

void f97(void) {


	t97 = (x877+(x878/(x879/x880)));

	if (t97 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x881 = UINT64_MAX;
	volatile uint32_t x882 = UINT32_MAX;
	int8_t x883 = INT8_MIN;
	int8_t x884 = INT8_MIN;
	static uint64_t t98 = 710320179426817LLU;

	t98 = (x881+(x882/(x883/x884)));

	if (t98 != 4294967294LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x889 = INT16_MIN;
	volatile int8_t x890 = 26;
	static int32_t x891 = 3359651;
	static int16_t x892 = -47;
	static int32_t t99 = -240120892;

	t99 = (x889+(x890/(x891/x892)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

