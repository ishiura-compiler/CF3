#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MAX;
int32_t x15 = INT32_MAX;
int64_t x24 = INT64_MIN;
uint32_t x25 = UINT32_MAX;
int8_t x27 = 4;
volatile int32_t x34 = INT32_MIN;
static uint8_t x35 = 29U;
static int16_t x42 = INT16_MAX;
volatile int64_t t5 = 2976280907773247909LL;
int32_t x54 = -8371878;
volatile uint32_t x62 = 729845U;
int32_t x63 = INT32_MIN;
static uint8_t x64 = 1U;
static volatile uint32_t t7 = 272103723U;
uint64_t x73 = 116865209741398478LLU;
volatile int16_t x75 = INT16_MIN;
uint64_t x123 = UINT64_MAX;
uint64_t x131 = 2171523047LLU;
int16_t x147 = INT16_MIN;
int8_t x148 = -1;
int32_t t14 = -239375802;
uint32_t x150 = UINT32_MAX;
static int32_t x151 = INT32_MAX;
static int8_t x152 = -1;
uint32_t x163 = UINT32_MAX;
volatile int32_t x170 = INT32_MIN;
int8_t x172 = -1;
uint32_t t17 = 3567U;
int8_t x181 = INT8_MAX;
static volatile int32_t x182 = -1;
int64_t t19 = -55281531310097063LL;
volatile uint32_t t20 = 5470817U;
int16_t x195 = -1;
static int32_t x216 = INT32_MIN;
volatile int32_t t23 = 6;
int64_t x221 = -5463307557811436LL;
int8_t x222 = -1;
static volatile uint64_t t24 = 4729722LLU;
uint8_t x229 = 2U;
uint32_t x288 = 1395U;
int16_t x293 = -1;
volatile int16_t x298 = INT16_MAX;
int32_t x319 = -58;
static uint8_t x337 = UINT8_MAX;
volatile int32_t x341 = INT32_MIN;
int32_t x343 = -1;
int64_t x354 = INT64_MIN;
static int32_t x366 = INT32_MAX;
volatile uint8_t x370 = 1U;
int32_t x394 = INT32_MIN;
uint8_t x396 = 47U;
uint64_t t43 = 5021500LLU;
volatile int64_t x425 = INT64_MIN;
int16_t x430 = -1;
uint64_t x474 = 10236828219280LLU;
int8_t x475 = -1;
uint64_t t47 = 361169363LLU;
int8_t x486 = -1;
uint16_t x493 = 12336U;
int16_t x519 = INT16_MIN;
static volatile int8_t x534 = -10;
volatile int32_t t52 = 44;
int32_t x546 = INT32_MIN;
uint32_t x547 = 1171103U;
static volatile int8_t x566 = INT8_MIN;
volatile int64_t x567 = 4663641349404844LL;
uint16_t x578 = UINT16_MAX;
int32_t x584 = INT32_MAX;
int64_t x588 = -1LL;
int8_t x602 = INT8_MAX;
volatile int16_t x603 = INT16_MIN;
uint8_t x604 = 4U;
uint32_t x608 = 5400251U;
uint32_t x617 = 205319887U;
static uint32_t x641 = 15117U;
int64_t x643 = 552272664804155LL;
uint8_t x645 = UINT8_MAX;
int32_t x649 = 0;
int64_t t66 = 2882418LL;
uint64_t x660 = 7235629662LLU;
int64_t x679 = INT64_MIN;
static int32_t x680 = INT32_MIN;
static volatile uint64_t t72 = 1584800945520LLU;
volatile int32_t x684 = INT32_MAX;
int32_t x697 = INT32_MAX;
volatile int64_t x718 = -1LL;
int32_t x755 = INT32_MIN;
volatile int8_t x756 = INT8_MAX;
int64_t x758 = -1LL;
int8_t x760 = INT8_MIN;
volatile int64_t t84 = -313LL;
int64_t t85 = -460505LL;
volatile uint8_t x801 = 15U;
static int64_t x803 = -2LL;
static int64_t t87 = 7753888006LL;
int64_t x814 = INT64_MIN;
volatile uint32_t t90 = 4U;
int16_t x847 = 1;
int16_t x850 = -1;
volatile uint64_t t93 = 215LLU;
int32_t x879 = INT32_MIN;
uint16_t x880 = 122U;
volatile int16_t x888 = -1;
static uint64_t x889 = UINT64_MAX;
uint16_t x897 = UINT16_MAX;
static int16_t x898 = INT16_MIN;
int16_t x900 = -1;


void f0(void) {
	static int64_t x5 = INT64_MIN;
	volatile int8_t x7 = -1;
	int8_t x8 = -1;
	int64_t t0 = -405772430736469LL;

	t0 = ((x5/x6)/(x7/x8));

	if (t0 != -4294967298LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = 2U;
	int16_t x16 = INT16_MAX;
	volatile uint32_t t1 = 71243U;

	t1 = ((x13/x14)/(x15/x16));

	if (t1 != 16383U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x21 = 0U;
	int8_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int64_t t2 = 1249191536563794LL;

	t2 = ((x21/x22)/(x23/x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x26 = 1LL;
	int64_t x28 = -1LL;
	int64_t t3 = 9870926067LL;

	t3 = ((x25/x26)/(x27/x28));

	if (t3 != -1073741823LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = 2;
	int16_t x36 = -1;
	volatile int32_t t4 = -328544517;

	t4 = ((x33/x34)/(x35/x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x41 = -1;
	volatile int64_t x43 = 10740871140647990LL;
	static int64_t x44 = 1LL;

	t5 = ((x41/x42)/(x43/x44));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x53 = UINT32_MAX;
	static uint32_t x55 = 9947673U;
	uint32_t x56 = 44U;
	volatile uint32_t t6 = 44U;

	t6 = ((x53/x54)/(x55/x56));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x61 = 2431U;

	t7 = ((x61/x62)/(x63/x64));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x65 = UINT16_MAX;
	static int16_t x66 = INT16_MAX;
	int64_t x67 = 4099065276436907LL;
	int32_t x68 = INT32_MAX;
	volatile int64_t t8 = -527659446308LL;

	t8 = ((x65/x66)/(x67/x68));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x74 = -1LL;
	static int8_t x76 = -1;
	static volatile uint64_t t9 = 19886948688929LLU;

	t9 = ((x73/x74)/(x75/x76));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	static int32_t t10 = 248;

	t10 = ((x85/x86)/(x87/x88));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x121 = -6143141;
	int16_t x122 = -45;
	int16_t x124 = INT16_MIN;
	volatile uint64_t t11 = 8587258LLU;

	t11 = ((x121/x122)/(x123/x124));

	if (t11 != 136514LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x129 = 21615675720303223LL;
	uint32_t x130 = 153U;
	uint16_t x132 = UINT16_MAX;
	uint64_t t12 = 539781174332048LLU;

	t12 = ((x129/x130)/(x131/x132));

	if (t12 != 4263737023LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x137 = INT8_MIN;
	static uint64_t x138 = UINT64_MAX;
	int8_t x139 = INT8_MAX;
	uint32_t x140 = 2U;
	volatile uint64_t t13 = 24009470021LLU;

	t13 = ((x137/x138)/(x139/x140));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x145 = -1;
	int32_t x146 = -1;

	t14 = ((x145/x146)/(x147/x148));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x149 = 0U;
	static uint32_t t15 = 2042873U;

	t15 = ((x149/x150)/(x151/x152));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x161 = -1;
	uint16_t x162 = 2585U;
	uint8_t x164 = UINT8_MAX;
	volatile uint32_t t16 = 237U;

	t16 = ((x161/x162)/(x163/x164));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x171 = -2007;

	t17 = ((x169/x170)/(x171/x172));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x173 = INT16_MIN;
	uint16_t x174 = 173U;
	int64_t x175 = -2465965403806LL;
	uint8_t x176 = UINT8_MAX;
	int64_t t18 = -94296234LL;

	t18 = ((x173/x174)/(x175/x176));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x183 = INT16_MIN;
	int64_t x184 = -1LL;

	t19 = ((x181/x182)/(x183/x184));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x185 = 17U;
	int32_t x186 = -1;
	volatile uint16_t x187 = UINT16_MAX;
	static uint8_t x188 = 15U;

	t20 = ((x185/x186)/(x187/x188));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x193 = 0;
	static int8_t x194 = INT8_MAX;
	int16_t x196 = -1;
	int32_t t21 = 4882177;

	t21 = ((x193/x194)/(x195/x196));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MAX;
	int32_t x215 = INT32_MIN;
	static int32_t t22 = -1;

	t22 = ((x213/x214)/(x215/x216));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x217 = -1;
	static int8_t x218 = -49;
	static int8_t x219 = INT8_MIN;
	static uint16_t x220 = 5U;

	t23 = ((x217/x218)/(x219/x220));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x223 = -1LL;
	volatile uint64_t x224 = 116380821LLU;

	t24 = ((x221/x222)/(x223/x224));

	if (t24 != 34468LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x225 = -1;
	uint64_t x226 = 1LLU;
	int16_t x227 = INT16_MAX;
	uint16_t x228 = 698U;
	uint64_t t25 = 5407335486637638LLU;

	t25 = ((x225/x226)/(x227/x228));

	if (t25 != 401016175515425035LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x230 = 24426042U;
	int16_t x231 = 61;
	static int32_t x232 = 1;
	uint32_t t26 = 26079110U;

	t26 = ((x229/x230)/(x231/x232));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x233 = 71354LLU;
	int32_t x234 = INT32_MIN;
	static int32_t x235 = 9281183;
	int8_t x236 = 1;
	volatile uint64_t t27 = 189116194229133579LLU;

	t27 = ((x233/x234)/(x235/x236));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x249 = 3576U;
	int16_t x250 = INT16_MIN;
	static int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;
	volatile int64_t t28 = 53212405321883LL;

	t28 = ((x249/x250)/(x251/x252));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x285 = INT8_MIN;
	volatile int32_t x286 = -765892385;
	static volatile int32_t x287 = INT32_MAX;
	volatile uint32_t t29 = 113567U;

	t29 = ((x285/x286)/(x287/x288));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x289 = -19;
	int64_t x290 = -388645LL;
	volatile uint32_t x291 = UINT32_MAX;
	static int32_t x292 = INT32_MIN;
	volatile int64_t t30 = -5LL;

	t30 = ((x289/x290)/(x291/x292));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x294 = 801;
	uint64_t x295 = UINT64_MAX;
	volatile int64_t x296 = INT64_MAX;
	volatile uint64_t t31 = 20LLU;

	t31 = ((x293/x294)/(x295/x296));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x297 = 53U;
	int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	int64_t t32 = 2922385143695293LL;

	t32 = ((x297/x298)/(x299/x300));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x317 = INT16_MAX;
	volatile uint32_t x318 = UINT32_MAX;
	uint64_t x320 = 76659468LLU;
	uint64_t t33 = 7727825793478818147LLU;

	t33 = ((x317/x318)/(x319/x320));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x338 = -1;
	static int64_t x339 = -2580526724114LL;
	int16_t x340 = -1;
	volatile int64_t t34 = 11971566LL;

	t34 = ((x337/x338)/(x339/x340));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x342 = INT8_MAX;
	uint64_t x344 = UINT64_MAX;
	uint64_t t35 = 443LLU;

	t35 = ((x341/x342)/(x343/x344));

	if (t35 != 18446744073692642296LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x355 = 698106543916652LLU;
	static int32_t x356 = INT32_MAX;
	volatile uint64_t t36 = 32236380570687LLU;

	t36 = ((x353/x354)/(x355/x356));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x365 = 1111U;
	int64_t x367 = INT64_MIN;
	int16_t x368 = INT16_MIN;
	static volatile int64_t t37 = 1276250863083091261LL;

	t37 = ((x365/x366)/(x367/x368));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x369 = UINT32_MAX;
	uint16_t x371 = 29310U;
	uint16_t x372 = 24797U;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = ((x369/x370)/(x371/x372));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x377 = 349839LL;
	int32_t x378 = INT32_MAX;
	static int64_t x379 = -1LL;
	int8_t x380 = -1;
	volatile int64_t t39 = 562235653252037591LL;

	t39 = ((x377/x378)/(x379/x380));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x385 = 30;
	int8_t x386 = INT8_MAX;
	int64_t x387 = 11612920889LL;
	int32_t x388 = -1;
	static int64_t t40 = -69383299318LL;

	t40 = ((x385/x386)/(x387/x388));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x389 = 420202013788803LL;
	uint8_t x390 = 77U;
	static uint64_t x391 = UINT64_MAX;
	volatile int16_t x392 = 51;
	static uint64_t t41 = 565645LLU;

	t41 = ((x389/x390)/(x391/x392));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x393 = INT16_MIN;
	int16_t x395 = -3492;
	int32_t t42 = 319;

	t42 = ((x393/x394)/(x395/x396));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x405 = -1;
	static volatile int16_t x406 = -1985;
	static int32_t x407 = -1;
	volatile uint64_t x408 = 170955469131899LLU;

	t43 = ((x405/x406)/(x407/x408));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x426 = INT64_MIN;
	int64_t x427 = 25992280LL;
	int16_t x428 = INT16_MIN;
	volatile int64_t t44 = -6031744007617266LL;

	t44 = ((x425/x426)/(x427/x428));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x429 = INT64_MAX;
	int32_t x431 = -12;
	int32_t x432 = -1;
	int64_t t45 = -2369303162737484802LL;

	t45 = ((x429/x430)/(x431/x432));

	if (t45 != -768614336404564650LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x437 = 27395370;
	static int8_t x438 = -7;
	volatile int32_t x439 = -53091;
	int16_t x440 = -1;
	int32_t t46 = 324483;

	t46 = ((x437/x438)/(x439/x440));

	if (t46 != -73) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x473 = UINT64_MAX;
	uint64_t x476 = UINT64_MAX;

	t47 = ((x473/x474)/(x475/x476));

	if (t47 != 1801998LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x485 = -1;
	static uint8_t x487 = UINT8_MAX;
	static volatile int16_t x488 = -27;
	volatile int32_t t48 = -95;

	t48 = ((x485/x486)/(x487/x488));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x494 = 27U;
	int16_t x495 = INT16_MIN;
	uint8_t x496 = UINT8_MAX;
	int32_t t49 = -118744407;

	t49 = ((x493/x494)/(x495/x496));

	if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x501 = INT16_MIN;
	int32_t x502 = INT32_MAX;
	int64_t x503 = INT64_MIN;
	int8_t x504 = 1;
	volatile int64_t t50 = 1161LL;

	t50 = ((x501/x502)/(x503/x504));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x517 = INT32_MIN;
	static int64_t x518 = INT64_MIN;
	int8_t x520 = INT8_MIN;
	int64_t t51 = 4048198LL;

	t51 = ((x517/x518)/(x519/x520));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x533 = INT16_MAX;
	uint16_t x535 = UINT16_MAX;
	volatile int32_t x536 = -1;

	t52 = ((x533/x534)/(x535/x536));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x545 = 1;
	uint8_t x548 = 13U;
	static volatile uint32_t t53 = 1691790545U;

	t53 = ((x545/x546)/(x547/x548));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x557 = 6U;
	static volatile uint8_t x558 = 1U;
	int32_t x559 = -1;
	uint32_t x560 = 98523836U;
	static uint32_t t54 = 2412355U;

	t54 = ((x557/x558)/(x559/x560));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x565 = -125;
	int8_t x568 = INT8_MIN;
	static int64_t t55 = -1598877786641LL;

	t55 = ((x565/x566)/(x567/x568));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x577 = 34579603086322278LL;
	int16_t x579 = INT16_MIN;
	volatile int16_t x580 = INT16_MIN;
	int64_t t56 = 92243LL;

	t56 = ((x577/x578)/(x579/x580));

	if (t56 != 527650920673LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x581 = -3;
	static uint8_t x582 = 7U;
	int64_t x583 = INT64_MIN;
	int64_t t57 = 4003189070LL;

	t57 = ((x581/x582)/(x583/x584));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x585 = 10;
	static uint32_t x586 = 93466334U;
	int8_t x587 = INT8_MIN;
	int64_t t58 = 153543526LL;

	t58 = ((x585/x586)/(x587/x588));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x589 = -1;
	int64_t x590 = INT64_MAX;
	int64_t x591 = 200975585536LL;
	int16_t x592 = INT16_MIN;
	static volatile int64_t t59 = 563218161599684790LL;

	t59 = ((x589/x590)/(x591/x592));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x601 = -100;
	volatile int32_t t60 = -8;

	t60 = ((x601/x602)/(x603/x604));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x605 = -2;
	int16_t x606 = INT16_MIN;
	uint32_t x607 = 109635634U;
	uint32_t t61 = 1522U;

	t61 = ((x605/x606)/(x607/x608));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x618 = 1;
	int8_t x619 = INT8_MIN;
	volatile uint64_t x620 = 1LLU;
	uint64_t t62 = 17301LLU;

	t62 = ((x617/x618)/(x619/x620));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x633 = -20652259200126262LL;
	uint64_t x634 = UINT64_MAX;
	uint32_t x635 = UINT32_MAX;
	volatile int64_t x636 = 56374894LL;
	volatile uint64_t t63 = 87123251919LLU;

	t63 = ((x633/x634)/(x635/x636));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x642 = INT16_MIN;
	int16_t x644 = -1;
	volatile int64_t t64 = 1178936LL;

	t64 = ((x641/x642)/(x643/x644));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x646 = INT32_MAX;
	int32_t x647 = INT32_MAX;
	volatile int16_t x648 = -1;
	volatile int32_t t65 = 2511;

	t65 = ((x645/x646)/(x647/x648));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x650 = -160LL;
	uint16_t x651 = 1526U;
	int16_t x652 = -2;

	t66 = ((x649/x650)/(x651/x652));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x653 = UINT64_MAX;
	int8_t x654 = INT8_MIN;
	uint64_t x655 = UINT64_MAX;
	volatile uint8_t x656 = 51U;
	uint64_t t67 = 5244666329LLU;

	t67 = ((x653/x654)/(x655/x656));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x657 = INT32_MIN;
	static int64_t x658 = -1LL;
	int8_t x659 = INT8_MIN;
	volatile uint64_t t68 = 700833492879601924LLU;

	t68 = ((x657/x658)/(x659/x660));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x665 = 28664796LL;
	static int8_t x666 = 28;
	int32_t x667 = INT32_MAX;
	static volatile int8_t x668 = -1;
	int64_t t69 = 15673661LL;

	t69 = ((x665/x666)/(x667/x668));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MAX;
	static int32_t x671 = INT32_MAX;
	uint8_t x672 = 108U;
	volatile int32_t t70 = 10126584;

	t70 = ((x669/x670)/(x671/x672));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x673 = INT16_MAX;
	int32_t x674 = INT32_MIN;
	int8_t x675 = INT8_MIN;
	static uint16_t x676 = 10U;
	volatile int32_t t71 = -13;

	t71 = ((x673/x674)/(x675/x676));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x677 = UINT64_MAX;
	static uint32_t x678 = 1U;

	t72 = ((x677/x678)/(x679/x680));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x681 = 60U;
	int64_t x682 = INT64_MIN;
	static int32_t x683 = INT32_MIN;
	static volatile int64_t t73 = -1788543LL;

	t73 = ((x681/x682)/(x683/x684));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x689 = 311U;
	int8_t x690 = INT8_MAX;
	uint16_t x691 = 125U;
	static int16_t x692 = -1;
	int32_t t74 = 85;

	t74 = ((x689/x690)/(x691/x692));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x693 = -47;
	static int64_t x694 = -541LL;
	int32_t x695 = INT32_MIN;
	static volatile uint32_t x696 = 9737U;
	int64_t t75 = 3267860089LL;

	t75 = ((x693/x694)/(x695/x696));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x698 = -1;
	static uint32_t x699 = UINT32_MAX;
	static volatile int8_t x700 = INT8_MIN;
	uint32_t t76 = 4207U;

	t76 = ((x697/x698)/(x699/x700));

	if (t76 != 2147483649U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x709 = UINT32_MAX;
	int32_t x710 = -1;
	uint16_t x711 = 23337U;
	static int16_t x712 = -1;
	static volatile uint32_t t77 = 4740926U;

	t77 = ((x709/x710)/(x711/x712));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x713 = INT64_MIN;
	volatile uint8_t x714 = UINT8_MAX;
	volatile int16_t x715 = INT16_MAX;
	volatile int32_t x716 = -1;
	int64_t t78 = 178687LL;

	t78 = ((x713/x714)/(x715/x716));

	if (t78 != 1103857125127LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x717 = UINT16_MAX;
	int8_t x719 = INT8_MIN;
	int8_t x720 = -1;
	volatile int64_t t79 = 139258415639158LL;

	t79 = ((x717/x718)/(x719/x720));

	if (t79 != -511LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x725 = INT64_MIN;
	int16_t x726 = INT16_MAX;
	volatile int32_t x727 = 1;
	int8_t x728 = 1;
	static volatile int64_t t80 = 2844886324578116668LL;

	t80 = ((x725/x726)/(x727/x728));

	if (t80 != -281483566907400LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x733 = 13711U;
	int32_t x734 = INT32_MIN;
	int8_t x735 = INT8_MIN;
	uint32_t x736 = 7053U;
	uint32_t t81 = 62998643U;

	t81 = ((x733/x734)/(x735/x736));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x745 = -1;
	int32_t x746 = INT32_MIN;
	static volatile int64_t x747 = INT64_MIN;
	int32_t x748 = 1;
	int64_t t82 = -306980558038351793LL;

	t82 = ((x745/x746)/(x747/x748));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x753 = -1;
	int32_t x754 = 3476193;
	volatile int32_t t83 = -1462550;

	t83 = ((x753/x754)/(x755/x756));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x757 = 2076;
	static uint16_t x759 = UINT16_MAX;

	t84 = ((x757/x758)/(x759/x760));

	if (t84 != 4LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x773 = 36U;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MAX;
	int64_t x776 = -1LL;

	t85 = ((x773/x774)/(x775/x776));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x789 = -1;
	int64_t x790 = 36LL;
	static int32_t x791 = -170788036;
	uint32_t x792 = 13168723U;
	volatile int64_t t86 = -463793LL;

	t86 = ((x789/x790)/(x791/x792));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x802 = INT8_MIN;
	volatile int32_t x804 = -1;

	t87 = ((x801/x802)/(x803/x804));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x813 = -2;
	static int32_t x815 = 5282;
	static uint8_t x816 = 38U;
	volatile int64_t t88 = -63073LL;

	t88 = ((x813/x814)/(x815/x816));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x817 = INT16_MIN;
	int32_t x818 = INT32_MIN;
	int32_t x819 = INT32_MIN;
	int32_t x820 = INT32_MAX;
	int32_t t89 = -1576943;

	t89 = ((x817/x818)/(x819/x820));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x821 = -34;
	int16_t x822 = INT16_MIN;
	volatile int8_t x823 = -17;
	static uint32_t x824 = 720491243U;

	t90 = ((x821/x822)/(x823/x824));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x845 = -7;
	uint8_t x846 = 8U;
	int16_t x848 = -1;
	int32_t t91 = 0;

	t91 = ((x845/x846)/(x847/x848));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x849 = 110957343LLU;
	volatile uint64_t x851 = UINT64_MAX;
	uint16_t x852 = UINT16_MAX;
	volatile uint64_t t92 = 32LLU;

	t92 = ((x849/x850)/(x851/x852));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x857 = 273918365664LLU;
	volatile uint64_t x858 = 379019429806100738LLU;
	uint8_t x859 = UINT8_MAX;
	uint8_t x860 = 98U;

	t93 = ((x857/x858)/(x859/x860));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x869 = 31U;
	volatile int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MAX;
	uint8_t x872 = 25U;
	volatile int32_t t94 = 11397069;

	t94 = ((x869/x870)/(x871/x872));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x873 = UINT16_MAX;
	uint64_t x874 = 2968699617658LLU;
	uint64_t x875 = UINT64_MAX;
	volatile int64_t x876 = -6623723883994LL;
	uint64_t t95 = 35LLU;

	t95 = ((x873/x874)/(x875/x876));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x877 = INT32_MIN;
	static int8_t x878 = INT8_MAX;
	int32_t t96 = -41;

	t96 = ((x877/x878)/(x879/x880));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x885 = INT16_MIN;
	volatile int16_t x886 = -1;
	volatile uint16_t x887 = 6U;
	volatile int32_t t97 = -300998;

	t97 = ((x885/x886)/(x887/x888));

	if (t97 != -5461) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x890 = 249915315U;
	uint64_t x891 = 28084645246581LLU;
	static volatile int32_t x892 = INT32_MAX;
	uint64_t t98 = 989LLU;

	t98 = ((x889/x890)/(x891/x892));

	if (t98 != 5644412LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x899 = UINT8_MAX;
	volatile int32_t t99 = 0;

	t99 = ((x897/x898)/(x899/x900));

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

