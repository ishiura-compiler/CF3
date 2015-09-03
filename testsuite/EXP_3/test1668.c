#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x13 = INT64_MAX;
int8_t x17 = INT8_MAX;
volatile uint8_t x19 = UINT8_MAX;
int8_t x51 = 1;
static int8_t x57 = INT8_MAX;
int32_t x62 = INT32_MIN;
static uint16_t x73 = 24U;
volatile int16_t x74 = -1021;
volatile int32_t t8 = -49670;
volatile int32_t x77 = INT32_MIN;
int64_t x79 = INT64_MAX;
int16_t x97 = INT16_MIN;
int8_t x106 = INT8_MAX;
volatile int32_t t13 = -5;
int32_t x141 = 24296;
int64_t x155 = INT64_MIN;
volatile uint32_t x156 = 1921173278U;
int16_t x169 = -1;
volatile int64_t t19 = 62660723092051719LL;
int32_t x187 = -1;
uint16_t x196 = 460U;
volatile int64_t t21 = -61547171LL;
int32_t t22 = 0;
uint64_t x229 = UINT64_MAX;
int32_t x230 = INT32_MIN;
uint32_t x232 = UINT32_MAX;
int16_t x237 = INT16_MIN;
volatile int32_t t25 = 54727;
int8_t x249 = INT8_MAX;
int16_t x250 = 32;
uint64_t t28 = 3564901487588138LLU;
int8_t x267 = -1;
uint8_t x268 = 6U;
int32_t t32 = 20118;
uint16_t x314 = UINT16_MAX;
int8_t x315 = INT8_MIN;
int16_t x318 = INT16_MIN;
int64_t x333 = 1676505716850928031LL;
int64_t x334 = -98946666069935747LL;
volatile int64_t x335 = INT64_MIN;
static int16_t x337 = INT16_MIN;
uint8_t x338 = 1U;
volatile uint64_t x340 = UINT64_MAX;
int32_t t37 = 8466;
static volatile int16_t x342 = INT16_MIN;
uint16_t x357 = 119U;
static int64_t x376 = 12418898142LL;
volatile int32_t t41 = -786116;
static uint32_t x377 = 54U;
static int16_t x405 = INT16_MIN;
uint16_t x406 = 6U;
int8_t x407 = INT8_MAX;
volatile uint64_t x408 = 2324937436697753464LLU;
int32_t t44 = -215;
int32_t t45 = 30;
int8_t x426 = INT8_MIN;
uint32_t x429 = UINT32_MAX;
int64_t x463 = INT64_MIN;
uint8_t x464 = 113U;
uint16_t x472 = UINT16_MAX;
uint8_t x479 = UINT8_MAX;
uint8_t x480 = UINT8_MAX;
int16_t x496 = INT16_MAX;
volatile uint64_t t51 = 6454632121150LLU;
static volatile int32_t t52 = -309713;
int64_t x501 = -66251258LL;
volatile int64_t x504 = 4521275686211095480LL;
volatile int32_t x513 = INT32_MAX;
uint16_t x516 = 7U;
static int8_t x521 = 0;
uint16_t x522 = 8U;
int64_t x524 = 4065746810846LL;
uint8_t x526 = UINT8_MAX;
volatile int64_t t57 = 9090752LL;
uint64_t t58 = 25526501LLU;
volatile uint32_t t59 = UINT32_MAX;
uint32_t x541 = UINT32_MAX;
static uint32_t x553 = 354715U;
uint32_t x555 = 2661584U;
int64_t x566 = INT64_MIN;
volatile int32_t t66 = -2;
int16_t x591 = INT16_MIN;
int64_t x602 = -4710631406LL;
int8_t x603 = 12;
int64_t x604 = 67400197LL;
int64_t t68 = -29940LL;
static uint32_t x609 = UINT32_MAX;
static int8_t x611 = INT8_MIN;
static uint8_t x612 = 17U;
uint32_t t71 = 55858765U;
volatile int32_t t72 = -34926;
uint16_t x639 = 4U;
uint32_t x642 = 1U;
uint16_t x644 = UINT16_MAX;
uint64_t x660 = UINT64_MAX;
int32_t x663 = 95;
uint16_t x664 = UINT16_MAX;
int64_t x667 = INT64_MIN;
static int64_t x676 = -1LL;
uint64_t x689 = 0LLU;
static int64_t x694 = -1LL;
int64_t t85 = -50904540604LL;
uint64_t x740 = 143410902686551427LLU;
int16_t x762 = -1;
int64_t x774 = -1LL;
int16_t x777 = INT16_MAX;
uint8_t x779 = 0U;
volatile int32_t t91 = -121421276;
volatile uint16_t x784 = UINT16_MAX;
int16_t x788 = -1;
static volatile uint64_t x793 = 70018474993259532LLU;
uint64_t x795 = 1438419116657LLU;
volatile int64_t x798 = 159364637265669389LL;
static uint8_t x799 = UINT8_MAX;
static uint16_t x809 = UINT16_MAX;
volatile int64_t t98 = -8135537979636LL;
volatile int32_t x843 = INT32_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	volatile int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t0 = -263429353LL;

	t0 = ((x13|x14)/(x15<=x16));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x18 = 2730234066LL;
	static int32_t x20 = 13574;
	volatile int64_t t1 = -57763899787284006LL;

	t1 = ((x17|x18)/(x19<=x20));

	if (t1 != 2730234111LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = 2U;
	uint16_t x22 = UINT16_MAX;
	static int64_t x23 = -1LL;
	uint8_t x24 = 52U;
	volatile int32_t t2 = 300452;

	t2 = ((x21|x22)/(x23<=x24));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x41 = 538U;
	int16_t x42 = INT16_MAX;
	volatile int8_t x43 = 48;
	int64_t x44 = INT64_MAX;
	volatile uint32_t t3 = 1295151786U;

	t3 = ((x41|x42)/(x43<=x44));

	if (t3 != 32767U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1118360;
	int32_t x52 = 359649910;
	int32_t t4 = 448902;

	t4 = ((x49|x50)/(x51<=x52));

	if (t4 != -4248) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x58 = 138LLU;
	uint32_t x59 = UINT32_MAX;
	uint32_t x60 = UINT32_MAX;
	uint64_t t5 = 942761883382048175LLU;

	t5 = ((x57|x58)/(x59<=x60));

	if (t5 != 255LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x61 = -22935724;
	int64_t x63 = -1LL;
	uint16_t x64 = 0U;
	int32_t t6 = -20738504;

	t6 = ((x61|x62)/(x63<=x64));

	if (t6 != -22935724) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x65 = INT8_MIN;
	static volatile int64_t x66 = INT64_MIN;
	static int8_t x67 = -1;
	uint8_t x68 = 28U;
	volatile int64_t t7 = -7566558651LL;

	t7 = ((x65|x66)/(x67<=x68));

	if (t7 != -128LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MAX;

	t8 = ((x73|x74)/(x75<=x76));

	if (t8 != -997) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x78 = 7U;
	uint64_t x80 = UINT64_MAX;
	int32_t t9 = -96;

	t9 = ((x77|x78)/(x79<=x80));

	if (t9 != -2147483641) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = UINT64_MAX;
	int32_t t10 = -21;

	t10 = ((x97|x98)/(x99<=x100));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x105 = -1;
	int16_t x107 = -1;
	uint16_t x108 = 113U;
	int32_t t11 = -133;

	t11 = ((x105|x106)/(x107<=x108));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	int16_t x115 = -784;
	volatile uint8_t x116 = 1U;
	static volatile uint32_t t12 = UINT32_MAX;

	t12 = ((x113|x114)/(x115<=x116));

	if (t12 != UINT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x121 = INT32_MIN;
	static int8_t x122 = INT8_MIN;
	int8_t x123 = -1;
	uint8_t x124 = 12U;

	t13 = ((x121|x122)/(x123<=x124));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x125 = -1;
	uint64_t x126 = 38180748677LLU;
	static int32_t x127 = INT32_MIN;
	volatile uint16_t x128 = 10U;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x125|x126)/(x127<=x128));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x142 = INT64_MIN;
	uint32_t x143 = UINT32_MAX;
	int64_t x144 = 889994563598630LL;
	volatile int64_t t15 = -1LL;

	t15 = ((x141|x142)/(x143<=x144));

	if (t15 != -9223372036854751512LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = -1LL;
	int64_t t16 = -16060967923126701LL;

	t16 = ((x153|x154)/(x155<=x156));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = 12;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = 7;
	static int32_t t17 = 19;

	t17 = ((x157|x158)/(x159<=x160));

	if (t17 != -2147483636) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x170 = 14939;
	static int32_t x171 = INT32_MIN;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t18 = 10;

	t18 = ((x169|x170)/(x171<=x172));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x173 = INT64_MAX;
	volatile int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	uint8_t x176 = 0U;

	t19 = ((x173|x174)/(x175<=x176));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x185 = 119078945LLU;
	uint16_t x186 = 19U;
	int64_t x188 = -1LL;
	volatile uint64_t t20 = 77983406407091LLU;

	t20 = ((x185|x186)/(x187<=x188));

	if (t20 != 119078963LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x193 = 518104398U;
	volatile int64_t x194 = -73214316825LL;
	int32_t x195 = INT32_MIN;

	t21 = ((x193|x194)/(x195<=x196));

	if (t21 != -73031766033LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x201 = INT32_MIN;
	volatile int16_t x202 = -30;
	uint64_t x203 = UINT64_MAX;
	static volatile uint64_t x204 = UINT64_MAX;

	t22 = ((x201|x202)/(x203<=x204));

	if (t22 != -30) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x205 = 30816438U;
	uint8_t x206 = UINT8_MAX;
	int64_t x207 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	uint32_t t23 = 429429U;

	t23 = ((x205|x206)/(x207<=x208));

	if (t23 != 30816511U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x231 = -2986342896036622LL;
	uint64_t t24 = UINT64_MAX;

	t24 = ((x229|x230)/(x231<=x232));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MIN;
	int8_t x240 = INT8_MAX;

	t25 = ((x237|x238)/(x239<=x240));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x251 = UINT32_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t26 = 1253617;

	t26 = ((x249|x250)/(x251<=x252));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint64_t x258 = 3548926059755146584LLU;
	volatile int8_t x259 = INT8_MIN;
	int64_t x260 = 1257387278018015114LL;
	static volatile uint64_t t27 = 1814897391072122LLU;

	t27 = ((x257|x258)/(x259<=x260));

	if (t27 != 3548926059755208703LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x261 = 613338680132LLU;
	volatile uint64_t x262 = 11583936329LLU;
	static uint8_t x263 = 0U;
	uint8_t x264 = 104U;

	t28 = ((x261|x262)/(x263<=x264));

	if (t28 != 614179659597LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x265 = INT16_MAX;
	int32_t x266 = -1;
	volatile int32_t t29 = -21090023;

	t29 = ((x265|x266)/(x267<=x268));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x273 = -473466804878366LL;
	int64_t x274 = -33252151LL;
	volatile int16_t x275 = INT16_MIN;
	uint8_t x276 = 12U;
	int64_t t30 = -209222602528344598LL;

	t30 = ((x273|x274)/(x275<=x276));

	if (t30 != -11739157LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x285 = UINT32_MAX;
	static volatile int32_t x286 = INT32_MIN;
	int8_t x287 = -1;
	volatile int8_t x288 = 19;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x285|x286)/(x287<=x288));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	volatile int64_t x303 = -1LL;
	int32_t x304 = 29;

	t32 = ((x301|x302)/(x303<=x304));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x313 = -1;
	uint16_t x316 = 3U;
	volatile int32_t t33 = -1451016;

	t33 = ((x313|x314)/(x315<=x316));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x317 = 4U;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	volatile int32_t t34 = -497496;

	t34 = ((x317|x318)/(x319<=x320));

	if (t34 != -32764) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x329 = 6;
	volatile int16_t x330 = -1;
	volatile int16_t x331 = -3579;
	int32_t x332 = 39;
	volatile int32_t t35 = -28733;

	t35 = ((x329|x330)/(x331<=x332));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x336 = UINT8_MAX;
	volatile int64_t t36 = 56177699LL;

	t36 = ((x333|x334)/(x335<=x336));

	if (t36 != -7743202492696065LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x339 = INT8_MAX;

	t37 = ((x337|x338)/(x339<=x340));

	if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x341 = UINT32_MAX;
	int64_t x343 = 5LL;
	int32_t x344 = 611172856;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = ((x341|x342)/(x343<=x344));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x353 = INT32_MIN;
	int32_t x354 = INT32_MAX;
	volatile uint16_t x355 = 0U;
	uint32_t x356 = 314284U;
	static int32_t t39 = 1;

	t39 = ((x353|x354)/(x355<=x356));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x358 = UINT64_MAX;
	uint8_t x359 = 0U;
	uint64_t x360 = 6328578205095LLU;
	static uint64_t t40 = UINT64_MAX;

	t40 = ((x357|x358)/(x359<=x360));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	uint32_t x375 = UINT32_MAX;

	t41 = ((x373|x374)/(x375<=x376));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x378 = INT16_MIN;
	int8_t x379 = -51;
	static volatile int16_t x380 = 1;
	volatile uint32_t t42 = 202793402U;

	t42 = ((x377|x378)/(x379<=x380));

	if (t42 != 4294934582U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x397 = 860U;
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	int32_t x400 = -1;
	volatile int32_t t43 = 251497;

	t43 = ((x397|x398)/(x399<=x400));

	if (t43 != -36) { NG(); } else { ; }
	
}

void f44(void) {


	t44 = ((x405|x406)/(x407<=x408));

	if (t44 != -32762) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x417 = -7;
	int16_t x418 = 4362;
	int32_t x419 = -1;
	int8_t x420 = 1;

	t45 = ((x417|x418)/(x419<=x420));

	if (t45 != -5) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x425 = -1;
	static volatile int64_t x427 = INT64_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t46 = 931696826;

	t46 = ((x425|x426)/(x427<=x428));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x430 = INT8_MAX;
	static int8_t x431 = INT8_MAX;
	uint64_t x432 = UINT64_MAX;
	static uint32_t t47 = UINT32_MAX;

	t47 = ((x429|x430)/(x431<=x432));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x461 = 35176315835204LLU;
	volatile int32_t x462 = 29641;
	uint64_t t48 = 559279LLU;

	t48 = ((x461|x462)/(x463<=x464));

	if (t48 != 35176315843533LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x469 = -3569275330401LL;
	int32_t x470 = INT32_MAX;
	int32_t x471 = INT32_MIN;
	static volatile int64_t t49 = -202947LL;

	t49 = ((x469|x470)/(x471<=x472));

	if (t49 != -3569117822977LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x477 = 1;
	uint32_t x478 = UINT32_MAX;
	volatile uint32_t t50 = UINT32_MAX;

	t50 = ((x477|x478)/(x479<=x480));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x493 = 2363693642890680552LLU;
	static volatile int64_t x494 = 47914177LL;
	volatile int32_t x495 = INT32_MIN;

	t51 = ((x493|x494)/(x495<=x496));

	if (t51 != 2363693642899201257LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x497 = UINT16_MAX;
	int8_t x498 = 1;
	int32_t x499 = INT32_MIN;
	uint64_t x500 = UINT64_MAX;

	t52 = ((x497|x498)/(x499<=x500));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x502 = INT8_MAX;
	uint8_t x503 = UINT8_MAX;
	volatile int64_t t53 = 7926962LL;

	t53 = ((x501|x502)/(x503<=x504));

	if (t53 != -66251137LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x505 = -1;
	uint32_t x506 = 70U;
	static uint64_t x507 = 28608613LLU;
	volatile uint64_t x508 = UINT64_MAX;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = ((x505|x506)/(x507<=x508));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x514 = INT64_MIN;
	static int8_t x515 = INT8_MIN;
	volatile int64_t t55 = 29249960569763837LL;

	t55 = ((x513|x514)/(x515<=x516));

	if (t55 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x523 = 7U;
	volatile int32_t t56 = -112933556;

	t56 = ((x521|x522)/(x523<=x524));

	if (t56 != 8) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x525 = INT64_MIN;
	volatile int8_t x527 = INT8_MIN;
	uint16_t x528 = 5U;

	t57 = ((x525|x526)/(x527<=x528));

	if (t57 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x529 = 21U;
	volatile uint64_t x530 = 34LLU;
	volatile uint32_t x531 = 1432242U;
	int8_t x532 = INT8_MIN;

	t58 = ((x529|x530)/(x531<=x532));

	if (t58 != 55LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x533 = UINT32_MAX;
	int8_t x534 = INT8_MIN;
	int64_t x535 = INT64_MIN;
	int16_t x536 = -1;

	t59 = ((x533|x534)/(x535<=x536));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x537 = INT8_MAX;
	int32_t x538 = INT32_MIN;
	uint8_t x539 = 2U;
	int16_t x540 = 2220;
	volatile int32_t t60 = -1014;

	t60 = ((x537|x538)/(x539<=x540));

	if (t60 != -2147483521) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x542 = -1;
	static int32_t x543 = -3;
	int16_t x544 = INT16_MAX;
	volatile uint32_t t61 = UINT32_MAX;

	t61 = ((x541|x542)/(x543<=x544));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x545 = INT32_MIN;
	int64_t x546 = INT64_MIN;
	int32_t x547 = INT32_MIN;
	static int64_t x548 = -15LL;
	volatile int64_t t62 = -16352571922273799LL;

	t62 = ((x545|x546)/(x547<=x548));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x554 = 6U;
	static int32_t x556 = 804557573;
	uint32_t t63 = 20349U;

	t63 = ((x553|x554)/(x555<=x556));

	if (t63 != 354719U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x565 = INT32_MAX;
	int16_t x567 = -15103;
	static int32_t x568 = -1;
	static volatile int64_t t64 = 994116910LL;

	t64 = ((x565|x566)/(x567<=x568));

	if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x577 = 168570LLU;
	uint64_t x578 = 1132LLU;
	int8_t x579 = INT8_MIN;
	int64_t x580 = 120448036289886364LL;
	volatile uint64_t t65 = 10788203473LLU;

	t65 = ((x577|x578)/(x579<=x580));

	if (t65 != 169598LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x581 = UINT8_MAX;
	int8_t x582 = INT8_MIN;
	uint8_t x583 = 0U;
	volatile int8_t x584 = 0;

	t66 = ((x581|x582)/(x583<=x584));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x589 = -1;
	volatile int8_t x590 = INT8_MAX;
	static uint32_t x592 = UINT32_MAX;
	static int32_t t67 = -3;

	t67 = ((x589|x590)/(x591<=x592));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x601 = INT16_MIN;

	t68 = ((x601|x602)/(x603<=x604));

	if (t68 != -2030LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x605 = INT64_MIN;
	int8_t x606 = -3;
	uint32_t x607 = 151476U;
	int8_t x608 = -2;
	volatile int64_t t69 = 46524502300706109LL;

	t69 = ((x605|x606)/(x607<=x608));

	if (t69 != -3LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x610 = -6753886895051LL;
	int64_t t70 = -8750597241829519LL;

	t70 = ((x609|x610)/(x611<=x612));

	if (t70 != -6751688589313LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x613 = 2U;
	volatile uint32_t x614 = 451999036U;
	int16_t x615 = -1;
	uint32_t x616 = UINT32_MAX;

	t71 = ((x613|x614)/(x615<=x616));

	if (t71 != 451999038U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x617 = 45U;
	static volatile int32_t x618 = INT32_MIN;
	uint8_t x619 = 0U;
	uint64_t x620 = 7825LLU;

	t72 = ((x617|x618)/(x619<=x620));

	if (t72 != -2147483603) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x621 = -1086935053355LL;
	int16_t x622 = -1;
	int16_t x623 = 1;
	volatile int16_t x624 = 3;
	int64_t t73 = 952LL;

	t73 = ((x621|x622)/(x623<=x624));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x633 = 7097530LL;
	int16_t x634 = -1;
	uint64_t x635 = 83LLU;
	int64_t x636 = INT64_MIN;
	volatile int64_t t74 = 7498LL;

	t74 = ((x633|x634)/(x635<=x636));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x637 = 23598679308943LLU;
	volatile uint32_t x638 = 607549223U;
	int32_t x640 = 4523259;
	uint64_t t75 = 7102446550950852854LLU;

	t75 = ((x637|x638)/(x639<=x640));

	if (t75 != 23598680506287LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x641 = -10254;
	int16_t x643 = -1;
	volatile uint32_t t76 = 282U;

	t76 = ((x641|x642)/(x643<=x644));

	if (t76 != 4294957043U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x657 = UINT64_MAX;
	static int64_t x658 = -141522060573352984LL;
	uint16_t x659 = UINT16_MAX;
	uint64_t t77 = UINT64_MAX;

	t77 = ((x657|x658)/(x659<=x660));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x661 = INT16_MIN;
	int64_t x662 = INT64_MAX;
	int64_t t78 = -148836285175180830LL;

	t78 = ((x661|x662)/(x663<=x664));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x665 = INT8_MAX;
	static int8_t x666 = -1;
	uint64_t x668 = UINT64_MAX;
	volatile int32_t t79 = -857499;

	t79 = ((x665|x666)/(x667<=x668));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x673 = INT64_MAX;
	int64_t x674 = INT64_MIN;
	int8_t x675 = INT8_MIN;
	volatile int64_t t80 = -167726194817LL;

	t80 = ((x673|x674)/(x675<=x676));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x677 = -1;
	volatile int32_t x678 = -1;
	uint32_t x679 = 57U;
	uint8_t x680 = 58U;
	int32_t t81 = -427701;

	t81 = ((x677|x678)/(x679<=x680));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x685 = 16;
	int16_t x686 = INT16_MAX;
	volatile int8_t x687 = INT8_MIN;
	volatile uint8_t x688 = UINT8_MAX;
	int32_t t82 = 103;

	t82 = ((x685|x686)/(x687<=x688));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x690 = INT32_MIN;
	int32_t x691 = 655;
	int32_t x692 = INT32_MAX;
	volatile uint64_t t83 = 7421974735973LLU;

	t83 = ((x689|x690)/(x691<=x692));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x693 = 1665448LLU;
	int32_t x695 = INT32_MIN;
	uint8_t x696 = 55U;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x693|x694)/(x695<=x696));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x713 = -3613LL;
	static volatile uint8_t x714 = 1U;
	static int16_t x715 = INT16_MIN;
	static volatile uint8_t x716 = 0U;

	t85 = ((x713|x714)/(x715<=x716));

	if (t85 != -3613LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x717 = -14159507365089LL;
	int8_t x718 = INT8_MAX;
	int16_t x719 = INT16_MIN;
	static volatile int32_t x720 = -1;
	volatile int64_t t86 = 14717920704LL;

	t86 = ((x717|x718)/(x719<=x720));

	if (t86 != -14159507364993LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x737 = UINT32_MAX;
	uint16_t x738 = 0U;
	uint8_t x739 = 1U;
	static volatile uint32_t t87 = UINT32_MAX;

	t87 = ((x737|x738)/(x739<=x740));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x761 = 128;
	static int32_t x763 = -1;
	uint16_t x764 = 907U;
	static volatile int32_t t88 = 1;

	t88 = ((x761|x762)/(x763<=x764));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x765 = 47;
	uint8_t x766 = 0U;
	uint64_t x767 = 17303486259LLU;
	volatile int64_t x768 = INT64_MAX;
	int32_t t89 = 411747;

	t89 = ((x765|x766)/(x767<=x768));

	if (t89 != 47) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x773 = 1U;
	static volatile int8_t x775 = -1;
	int8_t x776 = -1;
	static volatile int64_t t90 = 18114351621LL;

	t90 = ((x773|x774)/(x775<=x776));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x778 = INT8_MIN;
	uint16_t x780 = 393U;

	t91 = ((x777|x778)/(x779<=x780));

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x781 = -1;
	static uint8_t x782 = UINT8_MAX;
	int8_t x783 = INT8_MAX;
	int32_t t92 = 8097359;

	t92 = ((x781|x782)/(x783<=x784));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x785 = UINT8_MAX;
	uint16_t x786 = 7011U;
	uint64_t x787 = 2831182LLU;
	volatile int32_t t93 = 219;

	t93 = ((x785|x786)/(x787<=x788));

	if (t93 != 7167) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x794 = 3657633736285086LL;
	int16_t x796 = -87;
	uint64_t t94 = 1332LLU;

	t94 = ((x793|x794)/(x795<=x796));

	if (t94 != 71213168028934046LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x797 = INT64_MAX;
	uint32_t x800 = 1714701U;
	int64_t t95 = INT64_MAX;

	t95 = ((x797|x798)/(x799<=x800));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x810 = 11U;
	int8_t x811 = -1;
	uint64_t x812 = UINT64_MAX;
	volatile int32_t t96 = -25797584;

	t96 = ((x809|x810)/(x811<=x812));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x829 = 21;
	static uint64_t x830 = 120335LLU;
	int64_t x831 = INT64_MIN;
	static int64_t x832 = -1LL;
	volatile uint64_t t97 = 11LLU;

	t97 = ((x829|x830)/(x831<=x832));

	if (t97 != 120351LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x833 = UINT8_MAX;
	int64_t x834 = INT64_MIN;
	static int32_t x835 = INT32_MIN;
	static uint8_t x836 = UINT8_MAX;

	t98 = ((x833|x834)/(x835<=x836));

	if (t98 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x841 = INT16_MIN;
	int32_t x842 = 2420842;
	int16_t x844 = -1;

	t99 = ((x841|x842)/(x843<=x844));

	if (t99 != -3990) { NG(); } else { ; }
	
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

