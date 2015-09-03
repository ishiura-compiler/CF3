#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x48 = INT16_MIN;
uint64_t x53 = 447413581LLU;
uint16_t x64 = 61U;
uint64_t t3 = 137LLU;
int8_t x76 = -1;
int64_t x113 = -202059LL;
int32_t x115 = 313939;
int16_t x116 = -53;
int64_t t8 = -227025408LL;
volatile uint64_t x129 = UINT64_MAX;
uint64_t x131 = UINT64_MAX;
uint64_t t10 = 24LLU;
volatile uint64_t x134 = UINT64_MAX;
uint64_t x140 = 3755642439076102LLU;
uint64_t x149 = UINT64_MAX;
int64_t t14 = 3LL;
int64_t t15 = 531849LL;
int64_t x183 = -15006516019591LL;
int64_t t16 = 905502563549031384LL;
uint64_t x198 = 3222776436170225LLU;
int64_t x205 = -1LL;
volatile int32_t t19 = -21046;
int64_t t20 = 10556621003LL;
uint32_t x254 = 603U;
volatile int64_t x267 = INT64_MAX;
uint64_t x282 = 15809527LLU;
int32_t x297 = INT32_MAX;
static volatile int32_t x298 = -1;
int32_t x299 = INT32_MIN;
uint32_t x331 = UINT32_MAX;
int8_t x334 = INT8_MAX;
volatile int32_t x335 = INT32_MIN;
int16_t x366 = INT16_MAX;
static int8_t x373 = INT8_MIN;
static volatile int8_t x389 = -1;
static volatile int8_t x390 = 15;
int64_t x396 = -28LL;
int32_t x409 = INT32_MAX;
static uint8_t x418 = 22U;
static int64_t x449 = 7625935617LL;
volatile int8_t x450 = INT8_MAX;
volatile uint32_t x490 = 41U;
static int64_t x491 = -93837LL;
volatile uint64_t t40 = 249598277979779LLU;
uint16_t x499 = 7871U;
volatile uint32_t x500 = 80U;
volatile uint32_t t41 = 87242U;
static uint32_t x529 = UINT32_MAX;
int8_t x530 = -12;
uint64_t t46 = 3027342537427186510LLU;
static int8_t x544 = INT8_MIN;
volatile uint32_t t49 = UINT32_MAX;
int16_t x583 = -1;
uint32_t x584 = UINT32_MAX;
uint16_t x590 = 17893U;
static int16_t x592 = 1;
volatile int32_t t52 = -3785933;
static int8_t x597 = INT8_MIN;
uint64_t x639 = UINT64_MAX;
int64_t x649 = 116352486LL;
static int8_t x658 = 5;
int16_t x665 = 51;
uint8_t x668 = 6U;
volatile int64_t x671 = INT64_MIN;
int8_t x674 = -1;
uint16_t x676 = 5640U;
volatile uint16_t x691 = 24513U;
uint64_t t65 = 7973171LLU;
static uint64_t x751 = 643673645910428083LLU;
static uint64_t t66 = 1618651984003592LLU;
int16_t x754 = INT16_MIN;
static uint16_t x756 = UINT16_MAX;
uint8_t x773 = 2U;
uint64_t x774 = UINT64_MAX;
int32_t x776 = 505612;
volatile int32_t x815 = INT32_MIN;
int64_t x824 = 13408685306576711LL;
uint32_t x843 = 14137563U;
int64_t x853 = 2245539113LL;
uint16_t x855 = 21079U;
int64_t x861 = INT64_MIN;
uint16_t x862 = 27754U;
static int8_t x869 = INT8_MIN;
volatile uint32_t x872 = 461U;
volatile int32_t t81 = -30037298;
uint64_t t83 = 109704516018LLU;
int16_t x942 = INT16_MAX;
volatile int64_t t88 = -130031580186LL;
int8_t x970 = -1;
uint64_t x979 = UINT64_MAX;
int32_t x980 = INT32_MAX;
volatile uint64_t t90 = 2624864LLU;
volatile int16_t x998 = INT16_MIN;
int64_t t91 = -315909075632LL;
int8_t x1034 = -9;
volatile uint8_t x1037 = UINT8_MAX;
static volatile int8_t x1038 = -2;
int32_t x1039 = INT32_MIN;
int16_t x1058 = INT16_MIN;
int32_t x1059 = -1160486;
int16_t x1069 = INT16_MIN;


void f0(void) {
	int8_t x13 = -1;
	volatile int32_t x14 = 8;
	int64_t x15 = 4065291768242686544LL;
	volatile int16_t x16 = INT16_MIN;
	int64_t t0 = 114155951374294477LL;

	t0 = (x13/(x14*(x15/x16)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x45 = 32159615505015LLU;
	uint16_t x46 = 84U;
	int32_t x47 = INT32_MAX;
	uint64_t t1 = 6LLU;

	t1 = (x45/(x46*(x47/x48)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x54 = 1U;
	uint8_t x55 = 1U;
	static int64_t x56 = -1LL;
	static volatile uint64_t t2 = 57616346434LLU;

	t2 = (x53/(x54*(x55/x56)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x61 = -6;
	static uint64_t x62 = 136049608093LLU;
	int16_t x63 = INT16_MIN;

	t3 = (x61/(x62*(x63/x64)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x73 = -1088;
	uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MIN;
	uint64_t t4 = 1809022LLU;

	t4 = (x73/(x74*(x75/x76)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x77 = -1LL;
	uint16_t x78 = 39U;
	int32_t x79 = INT32_MIN;
	static int32_t x80 = INT32_MIN;
	int64_t t5 = -652408331251LL;

	t5 = (x77/(x78*(x79/x80)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = INT16_MAX;
	int64_t x87 = -1358177LL;
	int8_t x88 = INT8_MIN;
	volatile int64_t t6 = 160765444594LL;

	t6 = (x85/(x86*(x87/x88)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	static uint32_t x96 = UINT32_MAX;
	volatile uint64_t t7 = 337806285LLU;

	t7 = (x93/(x94*(x95/x96)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x114 = INT8_MIN;

	t8 = (x113/(x114*(x115/x116)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x121 = INT64_MIN;
	int32_t x122 = INT32_MIN;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = -1LL;
	int64_t t9 = -1696598257478LL;

	t9 = (x121/(x122*(x123/x124)));

	if (t9 != -65537LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x130 = UINT64_MAX;
	static int8_t x132 = 38;

	t10 = (x129/(x130*(x131/x132)));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int64_t x135 = 547110660906LL;
	volatile uint16_t x136 = 5U;
	uint64_t t11 = 7645104829519300LLU;

	t11 = (x133/(x134*(x135/x136)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x137 = 10;
	int64_t x138 = -1LL;
	int8_t x139 = -1;
	uint64_t t12 = 19112LLU;

	t12 = (x137/(x138*(x139/x140)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x150 = -933LL;
	static volatile uint64_t x151 = 674LLU;
	uint8_t x152 = UINT8_MAX;
	uint64_t t13 = 1230LLU;

	t13 = (x149/(x150*(x151/x152)));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x165 = -3;
	int64_t x166 = 32LL;
	int32_t x167 = 437185996;
	int64_t x168 = -7121LL;

	t14 = (x165/(x166*(x167/x168)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x177 = -95658600895992LL;
	static int8_t x178 = -15;
	int32_t x179 = INT32_MIN;
	static int64_t x180 = -1LL;

	t15 = (x177/(x178*(x179/x180)));

	if (t15 != 2969LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x181 = -1;
	volatile int16_t x182 = INT16_MIN;
	volatile uint16_t x184 = 26U;

	t16 = (x181/(x182*(x183/x184)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x197 = 7LLU;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 5U;
	static volatile uint64_t t17 = 246LLU;

	t17 = (x197/(x198*(x199/x200)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x206 = -1;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = -190;
	static int64_t t18 = 8158842500LL;

	t18 = (x205/(x206*(x207/x208)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x229 = -1;
	static int8_t x230 = -1;
	int32_t x231 = INT32_MIN;
	static volatile uint16_t x232 = 2U;

	t19 = (x229/(x230*(x231/x232)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x245 = -7LL;
	static int32_t x246 = -1;
	volatile int16_t x247 = INT16_MIN;
	int16_t x248 = 8;

	t20 = (x245/(x246*(x247/x248)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x249 = -1LL;
	uint16_t x250 = UINT16_MAX;
	int32_t x251 = INT32_MIN;
	volatile uint32_t x252 = 299U;
	volatile int64_t t21 = 9697147LL;

	t21 = (x249/(x250*(x251/x252)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x253 = 1655013LL;
	int16_t x255 = -79;
	uint8_t x256 = 6U;
	volatile int64_t t22 = -10601508LL;

	t22 = (x253/(x254*(x255/x256)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 2832987008494LLU;
	uint8_t x268 = 40U;
	volatile uint64_t t23 = 359826LLU;

	t23 = (x265/(x266*(x267/x268)));

	if (t23 != 5LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x273 = 623985U;
	int32_t x274 = -1;
	int8_t x275 = INT8_MIN;
	int8_t x276 = -61;
	volatile uint32_t t24 = 11027U;

	t24 = (x273/(x274*(x275/x276)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x277 = 6U;
	int16_t x278 = -1;
	uint16_t x279 = 9453U;
	uint16_t x280 = 2U;
	volatile int32_t t25 = 3660;

	t25 = (x277/(x278*(x279/x280)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x281 = 237U;
	volatile int16_t x283 = INT16_MIN;
	static uint8_t x284 = UINT8_MAX;
	static uint64_t t26 = 1050967779952784555LLU;

	t26 = (x281/(x282*(x283/x284)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t27 = -15542927;

	t27 = (x297/(x298*(x299/x300)));

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x329 = 181053906778055582LLU;
	int16_t x330 = INT16_MAX;
	static uint8_t x332 = 17U;
	static uint64_t t28 = 3054103509855647336LLU;

	t28 = (x329/(x330*(x331/x332)));

	if (t28 != 89579242LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x333 = INT32_MIN;
	int32_t x336 = -232451;
	int32_t t29 = -1369200;

	t29 = (x333/(x334*(x335/x336)));

	if (t29 != -1830) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x361 = 2;
	int8_t x362 = -15;
	static uint64_t x363 = UINT64_MAX;
	int8_t x364 = INT8_MIN;
	volatile uint64_t t30 = 860507369253LLU;

	t30 = (x361/(x362*(x363/x364)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x365 = INT8_MIN;
	volatile int16_t x367 = INT16_MIN;
	int32_t x368 = 1;
	volatile int32_t t31 = 720414;

	t31 = (x365/(x366*(x367/x368)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x374 = UINT32_MAX;
	uint8_t x375 = UINT8_MAX;
	int8_t x376 = -25;
	volatile uint32_t t32 = 138932967U;

	t32 = (x373/(x374*(x375/x376)));

	if (t32 != 429496716U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x381 = 9;
	uint32_t x382 = UINT32_MAX;
	static int16_t x383 = 1;
	static int32_t x384 = -1;
	volatile uint32_t t33 = 104262691U;

	t33 = (x381/(x382*(x383/x384)));

	if (t33 != 9U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x391 = INT64_MIN;
	int32_t x392 = 149460749;
	volatile int64_t t34 = 17288994754689LL;

	t34 = (x389/(x390*(x391/x392)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = INT8_MAX;
	int64_t x395 = 1719302505682268766LL;
	static int64_t t35 = 33712LL;

	t35 = (x393/(x394*(x395/x396)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x410 = UINT8_MAX;
	static int8_t x411 = -1;
	uint32_t x412 = UINT32_MAX;
	static volatile uint32_t t36 = 226U;

	t36 = (x409/(x410*(x411/x412)));

	if (t36 != 8421504U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x417 = INT16_MIN;
	uint32_t x419 = 7252391U;
	uint64_t x420 = 124LLU;
	uint64_t t37 = 11944LLU;

	t37 = (x417/(x418*(x419/x420)));

	if (t37 != 14336320327368LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x451 = 8U;
	volatile int16_t x452 = -3;
	int64_t t38 = -106925095493LL;

	t38 = (x449/(x450*(x451/x452)));

	if (t38 != -30023368LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x469 = 3671;
	uint64_t x470 = 304212LLU;
	int64_t x471 = INT64_MIN;
	uint8_t x472 = UINT8_MAX;
	volatile uint64_t t39 = 3697881721285435LLU;

	t39 = (x469/(x470*(x471/x472)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x489 = 65577LLU;
	volatile int32_t x492 = -1;

	t40 = (x489/(x490*(x491/x492)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x497 = -1;
	uint32_t x498 = 3330919U;

	t41 = (x497/(x498*(x499/x500)));

	if (t41 != 13U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x505 = 9U;
	volatile uint64_t x506 = 50437827503603726LLU;
	volatile int64_t x507 = INT64_MIN;
	int8_t x508 = INT8_MIN;
	uint64_t t42 = 15109195287LLU;

	t42 = (x505/(x506*(x507/x508)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x517 = -1LL;
	uint32_t x518 = 18U;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = 4U;
	int64_t t43 = 8437850497446LL;

	t43 = (x517/(x518*(x519/x520)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x521 = 5U;
	int8_t x522 = 1;
	int8_t x523 = INT8_MIN;
	uint32_t x524 = 160974U;
	uint32_t t44 = 6972362U;

	t44 = (x521/(x522*(x523/x524)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x531 = 1849694123LLU;
	uint8_t x532 = 2U;
	volatile uint64_t t45 = 941948894LLU;

	t45 = (x529/(x530*(x531/x532)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x537 = 406663LLU;
	int8_t x538 = 16;
	int16_t x539 = INT16_MAX;
	int64_t x540 = 3LL;

	t46 = (x537/(x538*(x539/x540)));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x541 = UINT8_MAX;
	int32_t x542 = -23675;
	uint32_t x543 = UINT32_MAX;
	static uint32_t t47 = 93419791U;

	t47 = (x541/(x542*(x543/x544)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x545 = 51908351U;
	static volatile int8_t x546 = -1;
	uint16_t x547 = UINT16_MAX;
	static int16_t x548 = -1;
	volatile uint32_t t48 = 57U;

	t48 = (x545/(x546*(x547/x548)));

	if (t48 != 792U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x553 = -1;
	int16_t x554 = 1;
	volatile uint32_t x555 = 14U;
	uint8_t x556 = 11U;

	t49 = (x553/(x554*(x555/x556)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x577 = INT64_MIN;
	uint16_t x578 = 1545U;
	static int8_t x579 = 1;
	volatile int16_t x580 = -1;
	int64_t t50 = -5976593727481LL;

	t50 = (x577/(x578*(x579/x580)));

	if (t50 != 5969820088579142LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x581 = INT16_MIN;
	int16_t x582 = INT16_MAX;
	volatile uint32_t t51 = 501U;

	t51 = (x581/(x582*(x583/x584)));

	if (t51 != 131075U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x589 = INT8_MIN;
	static volatile int16_t x591 = 15;

	t52 = (x589/(x590*(x591/x592)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x598 = 30201801LL;
	uint16_t x599 = 12U;
	static int32_t x600 = -1;
	volatile int64_t t53 = -16234567LL;

	t53 = (x597/(x598*(x599/x600)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x617 = 6;
	int16_t x618 = INT16_MIN;
	int16_t x619 = -1101;
	int64_t x620 = -1LL;
	static volatile int64_t t54 = 1419LL;

	t54 = (x617/(x618*(x619/x620)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x633 = 95U;
	int64_t x634 = -1LL;
	static volatile int8_t x635 = INT8_MIN;
	int16_t x636 = -1;
	static volatile int64_t t55 = -942281065496LL;

	t55 = (x633/(x634*(x635/x636)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x637 = INT16_MIN;
	int8_t x638 = INT8_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile uint64_t t56 = 51281698449205600LLU;

	t56 = (x637/(x638*(x639/x640)));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x650 = INT32_MIN;
	volatile uint64_t x651 = UINT64_MAX;
	volatile int16_t x652 = INT16_MAX;
	volatile uint64_t t57 = 21785314633098550LLU;

	t57 = (x649/(x650*(x651/x652)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x653 = -1LL;
	int32_t x654 = INT32_MAX;
	uint8_t x655 = UINT8_MAX;
	volatile int8_t x656 = INT8_MIN;
	volatile int64_t t58 = 32434542692876823LL;

	t58 = (x653/(x654*(x655/x656)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x657 = UINT32_MAX;
	int8_t x659 = INT8_MIN;
	uint32_t x660 = 6851547U;
	uint32_t t59 = 229059236U;

	t59 = (x657/(x658*(x659/x660)));

	if (t59 != 1372194U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x666 = -33LL;
	uint16_t x667 = 182U;
	volatile int64_t t60 = 95908118218590LL;

	t60 = (x665/(x666*(x667/x668)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x669 = 37U;
	uint32_t x670 = 6U;
	int16_t x672 = -96;
	int64_t t61 = 1390032430LL;

	t61 = (x669/(x670*(x671/x672)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x673 = -1;
	static volatile uint16_t x675 = UINT16_MAX;
	volatile int32_t t62 = -1650;

	t62 = (x673/(x674*(x675/x676)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x689 = INT16_MAX;
	int8_t x690 = 8;
	uint32_t x692 = 293U;
	volatile uint32_t t63 = 578928042U;

	t63 = (x689/(x690*(x691/x692)));

	if (t63 != 49U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x701 = INT64_MIN;
	volatile int8_t x702 = -1;
	uint16_t x703 = UINT16_MAX;
	uint8_t x704 = UINT8_MAX;
	static volatile int64_t t64 = -25806410105LL;

	t64 = (x701/(x702*(x703/x704)));

	if (t64 != 35888607147294847LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x705 = -1;
	int16_t x706 = INT16_MAX;
	uint64_t x707 = 512129171LLU;
	uint32_t x708 = 58885U;

	t65 = (x705/(x706*(x707/x708)));

	if (t65 != 64731187054LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x749 = INT16_MIN;
	uint16_t x750 = UINT16_MAX;
	volatile int16_t x752 = 22;

	t66 = (x749/(x750*(x751/x752)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x753 = UINT8_MAX;
	uint16_t x755 = UINT16_MAX;
	int32_t t67 = -9476826;

	t67 = (x753/(x754*(x755/x756)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x775 = UINT32_MAX;
	volatile uint64_t t68 = 24526612160737LLU;

	t68 = (x773/(x774*(x775/x776)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x793 = 0;
	uint32_t x794 = 1054841802U;
	volatile int16_t x795 = INT16_MIN;
	int8_t x796 = 1;
	volatile uint32_t t69 = 678U;

	t69 = (x793/(x794*(x795/x796)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x801 = 39U;
	uint32_t x802 = UINT32_MAX;
	volatile int32_t x803 = INT32_MIN;
	uint8_t x804 = 2U;
	uint32_t t70 = 60U;

	t70 = (x801/(x802*(x803/x804)));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x813 = -796;
	uint64_t x814 = UINT64_MAX;
	int32_t x816 = 1;
	volatile uint64_t t71 = 83002368731327695LLU;

	t71 = (x813/(x814*(x815/x816)));

	if (t71 != 8589934591LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x821 = INT16_MAX;
	int64_t x822 = 3181LL;
	int64_t x823 = 35758675299302006LL;
	int64_t t72 = -272262LL;

	t72 = (x821/(x822*(x823/x824)));

	if (t72 != 5LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x829 = UINT64_MAX;
	static uint8_t x830 = 28U;
	uint16_t x831 = 1405U;
	int16_t x832 = -1;
	static volatile uint64_t t73 = 2614958201586LLU;

	t73 = (x829/(x830*(x831/x832)));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x841 = 15;
	volatile int32_t x842 = INT32_MIN;
	static volatile uint32_t x844 = 178829U;
	volatile uint32_t t74 = 1272877U;

	t74 = (x841/(x842*(x843/x844)));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x849 = UINT32_MAX;
	volatile uint16_t x850 = 29792U;
	volatile uint32_t x851 = UINT32_MAX;
	static int16_t x852 = INT16_MIN;
	volatile uint32_t t75 = 67348100U;

	t75 = (x849/(x850*(x851/x852)));

	if (t75 != 144165U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x854 = -2916460372LL;
	int8_t x856 = INT8_MAX;
	volatile int64_t t76 = 15337970LL;

	t76 = (x853/(x854*(x855/x856)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x863 = INT32_MIN;
	uint64_t x864 = 392693157786994181LLU;
	volatile uint64_t t77 = 1244382676180974000LLU;

	t77 = (x861/(x862*(x863/x864)));

	if (t77 != 7224475310143LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x865 = -1LL;
	int8_t x866 = INT8_MAX;
	uint16_t x867 = UINT16_MAX;
	int32_t x868 = -1;
	int64_t t78 = 1734884211466LL;

	t78 = (x865/(x866*(x867/x868)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x870 = -3;
	int32_t x871 = 497;
	uint32_t t79 = 29912U;

	t79 = (x869/(x870*(x871/x872)));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x901 = 128;
	static int8_t x902 = INT8_MAX;
	uint16_t x903 = 1124U;
	volatile int64_t x904 = -1LL;
	int64_t t80 = -15473838877924968LL;

	t80 = (x901/(x902*(x903/x904)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x909 = INT8_MAX;
	static int16_t x910 = -1;
	int32_t x911 = INT32_MIN;
	static int8_t x912 = INT8_MAX;

	t81 = (x909/(x910*(x911/x912)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x921 = INT8_MIN;
	static int64_t x922 = -2LL;
	int8_t x923 = INT8_MIN;
	uint64_t x924 = 76611779140LLU;
	uint64_t t82 = 62LLU;

	t82 = (x921/(x922*(x923/x924)));

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x933 = -1;
	volatile uint64_t x934 = 8836702303968141894LLU;
	int64_t x935 = INT64_MIN;
	static int32_t x936 = -273817;

	t83 = (x933/(x934*(x935/x936)));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x941 = 0U;
	uint16_t x943 = UINT16_MAX;
	static volatile int64_t x944 = -1LL;
	int64_t t84 = -6LL;

	t84 = (x941/(x942*(x943/x944)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x949 = 198896507253085316LL;
	int32_t x950 = 3680;
	int8_t x951 = INT8_MIN;
	volatile int32_t x952 = 60;
	volatile int64_t t85 = -75136448LL;

	t85 = (x949/(x950*(x951/x952)));

	if (t85 != -27023981963734LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x957 = INT64_MIN;
	int64_t x958 = INT64_MIN;
	int8_t x959 = INT8_MIN;
	uint64_t x960 = 26LLU;
	uint64_t t86 = 8631521275178LLU;

	t86 = (x957/(x958*(x959/x960)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x961 = INT8_MIN;
	static int32_t x962 = -1;
	int8_t x963 = 1;
	int32_t x964 = -1;
	static int32_t t87 = -1;

	t87 = (x961/(x962*(x963/x964)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x965 = INT64_MAX;
	int32_t x966 = INT32_MIN;
	int32_t x967 = -1;
	uint32_t x968 = UINT32_MAX;

	t88 = (x965/(x966*(x967/x968)));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x969 = 873748U;
	volatile uint32_t x971 = 20454012U;
	int8_t x972 = 8;
	volatile uint32_t t89 = 322739072U;

	t89 = (x969/(x970*(x971/x972)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x977 = 474U;
	uint16_t x978 = UINT16_MAX;

	t90 = (x977/(x978*(x979/x980)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x997 = INT64_MIN;
	uint32_t x999 = UINT32_MAX;
	int32_t x1000 = INT32_MIN;

	t91 = (x997/(x998*(x999/x1000)));

	if (t91 != -2147500032LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x1021 = 1U;
	int64_t x1022 = 1LL;
	volatile int64_t x1023 = 312489075LL;
	static volatile uint16_t x1024 = 1U;
	volatile int64_t t92 = 3808LL;

	t92 = (x1021/(x1022*(x1023/x1024)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x1033 = UINT8_MAX;
	uint16_t x1035 = 1U;
	static int16_t x1036 = -1;
	static volatile int32_t t93 = 1;

	t93 = (x1033/(x1034*(x1035/x1036)));

	if (t93 != 28) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1040 = 128LL;
	volatile int64_t t94 = -3332322879LL;

	t94 = (x1037/(x1038*(x1039/x1040)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x1045 = INT32_MIN;
	static int8_t x1046 = INT8_MIN;
	int64_t x1047 = -51041392760803318LL;
	static int64_t x1048 = 2743358796317695LL;
	volatile int64_t t95 = -431516997LL;

	t95 = (x1045/(x1046*(x1047/x1048)));

	if (t95 != -932067LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1057 = UINT64_MAX;
	uint64_t x1060 = 30203303216LLU;
	uint64_t t96 = 22LLU;

	t96 = (x1057/(x1058*(x1059/x1060)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x1061 = -1;
	int8_t x1062 = -3;
	int8_t x1063 = -29;
	int16_t x1064 = -1;
	int32_t t97 = 296;

	t97 = (x1061/(x1062*(x1063/x1064)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x1070 = INT16_MAX;
	int64_t x1071 = -3905241691855LL;
	int32_t x1072 = INT32_MIN;
	volatile int64_t t98 = 10LL;

	t98 = (x1069/(x1070*(x1071/x1072)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x1077 = UINT16_MAX;
	volatile int32_t x1078 = INT32_MIN;
	uint64_t x1079 = UINT64_MAX;
	uint64_t x1080 = 44716LLU;
	static volatile uint64_t t99 = 151646933248421631LLU;

	t99 = (x1077/(x1078*(x1079/x1080)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

