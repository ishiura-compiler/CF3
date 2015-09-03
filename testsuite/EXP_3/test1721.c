#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -98858564701812LL;
static uint64_t x18 = 183868234866LLU;
volatile uint32_t x19 = UINT32_MAX;
int16_t x21 = INT16_MIN;
uint32_t x28 = UINT32_MAX;
static uint64_t x57 = 53477816599LLU;
static int32_t x83 = INT32_MAX;
int32_t x93 = 371;
int32_t x96 = INT32_MIN;
uint32_t x101 = 160302021U;
volatile uint32_t x108 = 427U;
volatile int8_t x114 = INT8_MAX;
volatile int32_t x115 = INT32_MIN;
int16_t x119 = -1;
uint8_t x120 = UINT8_MAX;
static int32_t t18 = -11778919;
int8_t x122 = 10;
int32_t x127 = INT32_MIN;
int8_t x128 = INT8_MIN;
int16_t x133 = INT16_MIN;
uint64_t x134 = UINT64_MAX;
volatile uint64_t t22 = 36LLU;
uint16_t x138 = UINT16_MAX;
int64_t t23 = -123649684LL;
int32_t x141 = -78011841;
volatile int32_t t24 = -31982685;
int32_t x146 = -472214447;
static volatile uint64_t t25 = 2LLU;
volatile uint32_t x162 = 778365377U;
volatile int32_t t32 = -709296403;
static int64_t x255 = 125LL;
int16_t x259 = 13;
volatile uint32_t t35 = 37475U;
static uint64_t x262 = 323LLU;
int32_t t37 = -8939197;
static int16_t x276 = INT16_MIN;
uint64_t t39 = 9LLU;
uint64_t x294 = UINT64_MAX;
static volatile int16_t x310 = -1;
int16_t x313 = 143;
int32_t x327 = INT32_MIN;
static int64_t t44 = 1996LL;
int64_t x331 = INT64_MIN;
static int8_t x345 = INT8_MIN;
static volatile uint64_t t46 = 1066149784LLU;
static volatile uint64_t x356 = 7489812594428765458LLU;
uint64_t x365 = 628LLU;
uint32_t x379 = 25530985U;
uint16_t x383 = 1057U;
int8_t x384 = -1;
static volatile int32_t t51 = -36356;
int16_t x389 = -1;
volatile int64_t x396 = -1LL;
int16_t x397 = -1;
int8_t x398 = 0;
uint8_t x410 = UINT8_MAX;
int32_t t56 = -7;
uint16_t x417 = 111U;
volatile int64_t t57 = 7139295346377113LL;
uint32_t t58 = 3U;
int16_t x431 = -1;
volatile int8_t x436 = -1;
static int32_t x437 = 134;
uint64_t x442 = UINT64_MAX;
uint16_t x449 = UINT16_MAX;
int8_t x467 = 8;
int8_t x472 = -1;
static int32_t x476 = INT32_MIN;
int64_t t68 = 1358133LL;
int8_t x497 = -3;
volatile int8_t x505 = INT8_MAX;
static volatile uint32_t t76 = 2U;
volatile int16_t x537 = INT16_MIN;
uint64_t t78 = 5LLU;
int8_t x550 = INT8_MAX;
volatile int32_t x552 = -1;
uint64_t t80 = 545244301831204376LLU;
uint32_t x559 = 22373U;
uint64_t x560 = 7476720299LLU;
uint64_t t81 = 8LLU;
volatile int8_t x577 = -1;
static volatile int16_t x581 = 5;
int16_t x582 = -11043;
volatile uint16_t x586 = 435U;
int8_t x588 = INT8_MIN;
uint8_t x593 = 122U;
int8_t x601 = INT8_MAX;
int64_t x603 = INT64_MAX;
volatile int32_t x609 = 278;
static uint16_t x610 = UINT16_MAX;
volatile uint64_t t91 = 60600LLU;
volatile uint64_t x644 = UINT64_MAX;
volatile uint64_t t92 = 396730LLU;
int16_t x662 = -1;
int32_t t96 = 9;
volatile int8_t x681 = -39;
int64_t x687 = INT64_MIN;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	uint64_t x3 = UINT64_MAX;
	int64_t x4 = -1LL;
	static uint64_t t0 = 647656360331536848LLU;

	t0 = ((x1*x2)%(x3&x4));

	if (t0 != 18421535139710589556LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = 323515668094799LL;
	int32_t x14 = -21502;
	static volatile int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;
	static volatile int64_t t1 = -5693LL;

	t1 = ((x13*x14)%(x15&x16));

	if (t1 != -11618LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x17 = -1;
	int16_t x20 = 1957;
	volatile uint64_t t2 = 14933443LLU;

	t2 = ((x17*x18)%(x19&x20));

	if (t2 != 1513LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x22 = 30U;
	int8_t x23 = 27;
	volatile int16_t x24 = 183;
	int32_t t3 = 44135857;

	t3 = ((x21*x22)%(x23&x24));

	if (t3 != -18) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 62U;
	static int64_t x26 = -99775978LL;
	static uint8_t x27 = UINT8_MAX;
	volatile int64_t t4 = 684779LL;

	t4 = ((x25*x26)%(x27&x28));

	if (t4 != -101LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = -397610291LL;
	volatile int8_t x31 = -1;
	int32_t x32 = -1;
	int64_t t5 = -3206LL;

	t5 = ((x29*x30)%(x31&x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = -1;
	int64_t x34 = -1LL;
	static uint32_t x35 = 9029940U;
	static uint32_t x36 = 9233737U;
	static int64_t t6 = 6LL;

	t6 = ((x33*x34)%(x35&x36));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 45023084693221LLU;
	int64_t x38 = INT64_MIN;
	volatile int32_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	volatile uint64_t t7 = 228951380511546LLU;

	t7 = ((x37*x38)%(x39&x40));

	if (t7 != 2LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = 5;
	uint8_t x50 = 11U;
	uint16_t x51 = 18U;
	uint8_t x52 = 82U;
	static volatile int32_t t8 = -6805;

	t8 = ((x49*x50)%(x51&x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 171U;
	int8_t x54 = -1;
	static uint8_t x55 = 6U;
	uint32_t x56 = 8169775U;
	volatile uint32_t t9 = 36U;

	t9 = ((x53*x54)%(x55&x56));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x58 = -100;
	static uint64_t x59 = 820205533746356306LLU;
	int64_t x60 = 167125445LL;
	uint64_t t10 = 2043882LLU;

	t10 = ((x57*x58)%(x59&x60));

	if (t10 != 70775236LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x73 = -1;
	uint64_t x74 = 1085385174428900319LLU;
	static uint16_t x75 = 5452U;
	int8_t x76 = INT8_MIN;
	static uint64_t t11 = 456692LLU;

	t11 = ((x73*x74)%(x75&x76));

	if (t11 != 1057LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x81 = 335U;
	uint8_t x82 = 30U;
	volatile uint64_t x84 = 33740138540304997LLU;
	uint64_t t12 = 2161774387733205930LLU;

	t12 = ((x81*x82)%(x83&x84));

	if (t12 != 10050LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MIN;
	int32_t t13 = 2081067;

	t13 = ((x93*x94)%(x95&x96));

	if (t13 != -12156928) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x97 = 30U;
	static int8_t x98 = INT8_MIN;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t14 = 2268344096458318483LLU;

	t14 = ((x97*x98)%(x99&x100));

	if (t14 != 2147479808LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x102 = INT16_MAX;
	volatile uint16_t x103 = 17934U;
	int64_t x104 = 150366901LL;
	volatile int64_t t15 = 51780304LL;

	t15 = ((x101*x102)%(x103&x104));

	if (t15 != 13895LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x105 = 174000899719LLU;
	int32_t x106 = 5885;
	int64_t x107 = INT64_MAX;
	volatile uint64_t t16 = 2724444LLU;

	t16 = ((x105*x106)%(x107&x108));

	if (t16 != 407LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x113 = -1;
	volatile int16_t x116 = -9;
	static int32_t t17 = 7381548;

	t17 = ((x113*x114)%(x115&x116));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = INT8_MAX;

	t18 = ((x117*x118)%(x119&x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x123 = -1;
	uint32_t x124 = UINT32_MAX;
	static volatile uint32_t t19 = 5023U;

	t19 = ((x121*x122)%(x123&x124));

	if (t19 != 2550U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x125 = -6;
	static int64_t x126 = -1LL;
	static volatile int64_t t20 = -110717973706LL;

	t20 = ((x125*x126)%(x127&x128));

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x129 = 438668149858959LL;
	static volatile uint8_t x130 = UINT8_MAX;
	int16_t x131 = -1;
	static int64_t x132 = 109LL;
	int64_t t21 = 8358888686LL;

	t21 = ((x129*x130)%(x131&x132));

	if (t21 != 74LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;

	t22 = ((x133*x134)%(x135&x136));

	if (t22 != 128LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x137 = -1;
	int16_t x139 = -12299;
	int64_t x140 = -3267327LL;

	t23 = ((x137*x138)%(x139&x140));

	if (t23 != -65535LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x142 = 10U;
	static uint16_t x143 = 28U;
	int8_t x144 = -2;

	t24 = ((x141*x142)%(x143&x144));

	if (t24 != -22) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x145 = -1;
	uint32_t x147 = 708209414U;
	static uint64_t x148 = UINT64_MAX;

	t25 = ((x145*x146)%(x147&x148));

	if (t25 != 472214447LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x157 = 12180769LLU;
	int32_t x158 = INT32_MIN;
	volatile uint8_t x159 = UINT8_MAX;
	static uint64_t x160 = 44167821844533LLU;
	static uint64_t t26 = 126121838486437LLU;

	t26 = ((x157*x158)%(x159&x160));

	if (t26 != 45LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = 23;
	uint8_t x164 = 1U;
	uint32_t t27 = 7553107U;

	t27 = ((x161*x162)%(x163&x164));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x169 = 3;
	uint64_t x170 = 2542348494775LLU;
	volatile int8_t x171 = INT8_MIN;
	uint16_t x172 = 323U;
	static volatile uint64_t t28 = 3LLU;

	t28 = ((x169*x170)%(x171&x172));

	if (t28 != 37LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	volatile uint8_t x191 = 39U;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t29 = 5005310432LLU;

	t29 = ((x189*x190)%(x191&x192));

	if (t29 != 8LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x209 = -71;
	static uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	uint8_t x212 = 83U;
	volatile uint32_t t30 = 4042413U;

	t30 = ((x209*x210)%(x211&x212));

	if (t30 != 71U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x213 = INT32_MIN;
	volatile uint64_t x214 = 101426953378LLU;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MAX;
	static uint64_t t31 = 1LLU;

	t31 = ((x213*x214)%(x215&x216));

	if (t31 != 3548205038801256448LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	int16_t x219 = 820;
	static volatile int8_t x220 = -1;

	t32 = ((x217*x218)%(x219&x220));

	if (t32 != -40) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x233 = 51;
	volatile uint64_t x234 = UINT64_MAX;
	static int16_t x235 = INT16_MIN;
	int64_t x236 = 2005036547549LL;
	uint64_t t33 = 3000222338864207812LLU;

	t33 = ((x233*x234)%(x235&x236));

	if (t33 != 959543214029LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x253 = -1;
	int16_t x254 = -1;
	uint16_t x256 = UINT16_MAX;
	static int64_t t34 = 1964663900LL;

	t34 = ((x253*x254)%(x255&x256));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x257 = 952677U;
	uint8_t x258 = UINT8_MAX;
	static volatile uint32_t x260 = 53039U;

	t35 = ((x257*x258)%(x259&x260));

	if (t35 != 10U) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x261 = 117593LLU;
	uint32_t x263 = 60358U;
	volatile uint32_t x264 = 11U;
	volatile uint64_t t36 = 46LLU;

	t36 = ((x261*x262)%(x263&x264));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x266 = -64;
	int8_t x267 = -1;
	static int32_t x268 = -1;

	t37 = ((x265*x266)%(x267&x268));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x273 = -1;
	static int16_t x274 = INT16_MIN;
	int16_t x275 = -448;
	volatile int32_t t38 = 0;

	t38 = ((x273*x274)%(x275&x276));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x281 = 4748LLU;
	int16_t x282 = -1;
	int64_t x283 = INT64_MAX;
	static uint32_t x284 = UINT32_MAX;

	t39 = ((x281*x282)%(x283&x284));

	if (t39 != 4294962548LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x289 = INT16_MIN;
	static int64_t x290 = -1LL;
	static int32_t x291 = INT32_MAX;
	volatile int16_t x292 = INT16_MIN;
	int64_t t40 = -23318LL;

	t40 = ((x289*x290)%(x291&x292));

	if (t40 != 32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x293 = INT8_MIN;
	uint32_t x295 = 10593138U;
	int32_t x296 = -1;
	volatile uint64_t t41 = 14156890002231LLU;

	t41 = ((x293*x294)%(x295&x296));

	if (t41 != 128LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x309 = UINT8_MAX;
	int8_t x311 = -31;
	int8_t x312 = -1;
	volatile int32_t t42 = -8110358;

	t42 = ((x309*x310)%(x311&x312));

	if (t42 != -7) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x314 = UINT64_MAX;
	static int8_t x315 = -1;
	uint8_t x316 = 33U;
	volatile uint64_t t43 = 31676823406LLU;

	t43 = ((x313*x314)%(x315&x316));

	if (t43 != 5LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x325 = INT8_MIN;
	static int8_t x326 = INT8_MIN;
	int64_t x328 = 753647702210365254LL;

	t44 = ((x325*x326)%(x327&x328));

	if (t44 != 16384LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x329 = -248824340298771LL;
	int16_t x330 = INT16_MIN;
	int8_t x332 = -1;
	volatile int64_t t45 = 7LL;

	t45 = ((x329*x330)%(x331&x332));

	if (t45 != 8153475982910128128LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x346 = 1178580860594609LL;
	int8_t x347 = -1;
	uint64_t x348 = 668441991476807LLU;

	t46 = ((x345*x346)%(x347&x348));

	if (t46 != 628416833234074LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x353 = 0U;
	static int32_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	static volatile uint64_t t47 = 331507LLU;

	t47 = ((x353*x354)%(x355&x356));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x366 = INT32_MIN;
	uint16_t x367 = 106U;
	int32_t x368 = INT32_MAX;
	volatile uint64_t t48 = 482590954977207844LLU;

	t48 = ((x365*x366)%(x367&x368));

	if (t48 != 24LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x373 = INT8_MAX;
	int16_t x374 = 30;
	static int32_t x375 = 15210;
	static uint64_t x376 = 27664884875475755LLU;
	volatile uint64_t t49 = 653369044LLU;

	t49 = ((x373*x374)%(x375&x376));

	if (t49 != 3810LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x377 = 126012U;
	int8_t x378 = INT8_MIN;
	static volatile int16_t x380 = INT16_MAX;
	volatile uint32_t t50 = 57U;

	t50 = ((x377*x378)%(x379&x380));

	if (t50 != 4033U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x381 = INT8_MAX;
	static int8_t x382 = -1;

	t51 = ((x381*x382)%(x383&x384));

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x390 = 0;
	int32_t x391 = -1;
	int8_t x392 = INT8_MAX;
	static int32_t t52 = 481297007;

	t52 = ((x389*x390)%(x391&x392));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x393 = INT64_MAX;
	volatile uint8_t x394 = 0U;
	static int16_t x395 = -1;
	volatile int64_t t53 = -505353760348902LL;

	t53 = ((x393*x394)%(x395&x396));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x399 = UINT64_MAX;
	static uint64_t x400 = 20571LLU;
	uint64_t t54 = 27650826678135882LLU;

	t54 = ((x397*x398)%(x399&x400));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x405 = 603737835463690621LL;
	uint64_t x406 = 153279LLU;
	int32_t x407 = INT32_MAX;
	int64_t x408 = -1683769699LL;
	uint64_t t55 = 17396784127863LLU;

	t55 = ((x405*x406)%(x407&x408));

	if (t55 != 294443209LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x409 = -144;
	uint16_t x411 = 271U;
	static int32_t x412 = -1;

	t56 = ((x409*x410)%(x411&x412));

	if (t56 != -135) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x418 = 0;
	int64_t x419 = -1LL;
	int8_t x420 = INT8_MAX;

	t57 = ((x417*x418)%(x419&x420));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x425 = 3572798U;
	int16_t x426 = -1;
	static int32_t x427 = INT32_MAX;
	static volatile uint8_t x428 = 14U;

	t58 = ((x425*x426)%(x427&x428));

	if (t58 != 6U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x429 = 835343;
	uint64_t x430 = 90LLU;
	static uint16_t x432 = UINT16_MAX;
	volatile uint64_t t59 = 1017171994LLU;

	t59 = ((x429*x430)%(x431&x432));

	if (t59 != 12225LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x433 = 0U;
	int16_t x434 = -1;
	static int32_t x435 = INT32_MIN;
	static volatile uint32_t t60 = 217840U;

	t60 = ((x433*x434)%(x435&x436));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x438 = INT8_MIN;
	volatile uint8_t x439 = UINT8_MAX;
	uint8_t x440 = 36U;
	int32_t t61 = -35;

	t61 = ((x437*x438)%(x439&x440));

	if (t61 != -16) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x441 = -1;
	static int16_t x443 = INT16_MIN;
	static volatile int32_t x444 = INT32_MAX;
	volatile uint64_t t62 = 3486018431LLU;

	t62 = ((x441*x442)%(x443&x444));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x445 = INT32_MIN;
	uint32_t x446 = 1177456U;
	uint8_t x447 = UINT8_MAX;
	int8_t x448 = INT8_MAX;
	static uint32_t t63 = 990U;

	t63 = ((x445*x446)%(x447&x448));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x450 = -92;
	int32_t x451 = INT32_MIN;
	static int8_t x452 = INT8_MIN;
	int32_t t64 = 1;

	t64 = ((x449*x450)%(x451&x452));

	if (t64 != -6029220) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x461 = -1LL;
	int32_t x462 = 22520779;
	uint8_t x463 = 7U;
	int8_t x464 = INT8_MAX;
	static int64_t t65 = 4498789907LL;

	t65 = ((x461*x462)%(x463&x464));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x465 = -30;
	static volatile uint32_t x466 = 2589U;
	int8_t x468 = -1;
	static volatile uint32_t t66 = 66267636U;

	t66 = ((x465*x466)%(x467&x468));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x469 = 1U;
	int16_t x470 = -6820;
	volatile int16_t x471 = INT16_MAX;
	int32_t t67 = 20;

	t67 = ((x469*x470)%(x471&x472));

	if (t67 != -6820) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x473 = -1531;
	static int64_t x474 = -12036996891LL;
	int64_t x475 = 7765373441249596LL;

	t68 = ((x473*x474)%(x475&x476));

	if (t68 != 18428642240121LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x477 = INT64_MIN;
	uint64_t x478 = 2371211902254150LLU;
	volatile uint64_t x479 = UINT64_MAX;
	static int64_t x480 = 2569LL;
	uint64_t t69 = 1316LLU;

	t69 = ((x477*x478)%(x479&x480));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x481 = 6U;
	int16_t x482 = INT16_MIN;
	int8_t x483 = 4;
	uint32_t x484 = UINT32_MAX;
	static volatile uint32_t t70 = 272513021U;

	t70 = ((x481*x482)%(x483&x484));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x493 = 84583033U;
	volatile uint64_t x494 = 10LLU;
	static int8_t x495 = INT8_MIN;
	volatile int16_t x496 = INT16_MIN;
	uint64_t t71 = 828507051853LLU;

	t71 = ((x493*x494)%(x495&x496));

	if (t71 != 845830330LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x498 = 50U;
	int64_t x499 = -1LL;
	int64_t x500 = INT64_MIN;
	int64_t t72 = -94LL;

	t72 = ((x497*x498)%(x499&x500));

	if (t72 != -150LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x501 = INT64_MIN;
	volatile uint64_t x502 = UINT64_MAX;
	int64_t x503 = -2657285704919798266LL;
	int8_t x504 = -1;
	volatile uint64_t t73 = 244097254492400LLU;

	t73 = ((x501*x502)%(x503&x504));

	if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = 25;
	static int32_t t74 = -2890174;

	t74 = ((x505*x506)%(x507&x508));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x517 = 562U;
	uint64_t x518 = 168864275820LLU;
	uint32_t x519 = 226123U;
	uint16_t x520 = UINT16_MAX;
	static volatile uint64_t t75 = 1238909035841495721LLU;

	t75 = ((x517*x518)%(x519&x520));

	if (t75 != 13480LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x525 = INT8_MIN;
	static volatile uint16_t x526 = UINT16_MAX;
	int16_t x527 = 3;
	uint32_t x528 = UINT32_MAX;

	t76 = ((x525*x526)%(x527&x528));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x538 = 5U;
	uint32_t x539 = UINT32_MAX;
	uint64_t x540 = 443901LLU;
	uint64_t t77 = 1LLU;

	t77 = ((x537*x538)%(x539&x540));

	if (t77 != 11433LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x541 = INT16_MIN;
	int8_t x542 = INT8_MAX;
	uint32_t x543 = UINT32_MAX;
	uint64_t x544 = UINT64_MAX;

	t78 = ((x541*x542)%(x543&x544));

	if (t78 != 4290805760LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x549 = -1LL;
	volatile int8_t x551 = INT8_MAX;
	int64_t t79 = 16LL;

	t79 = ((x549*x550)%(x551&x552));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x553 = UINT64_MAX;
	int8_t x554 = INT8_MIN;
	int32_t x555 = 564450771;
	uint8_t x556 = 5U;

	t80 = ((x553*x554)%(x555&x556));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x557 = INT16_MIN;
	int8_t x558 = INT8_MIN;

	t81 = ((x557*x558)%(x559&x560));

	if (t81 != 3481LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x565 = -1;
	int16_t x566 = INT16_MAX;
	uint32_t x567 = UINT32_MAX;
	int32_t x568 = -1;
	uint32_t t82 = 6481U;

	t82 = ((x565*x566)%(x567&x568));

	if (t82 != 4294934529U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x569 = INT16_MIN;
	int64_t x570 = 45970454413879LL;
	int16_t x571 = INT16_MAX;
	volatile int32_t x572 = 22;
	volatile int64_t t83 = 11468796525256025LL;

	t83 = ((x569*x570)%(x571&x572));

	if (t83 != -16LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x573 = UINT8_MAX;
	static volatile int8_t x574 = INT8_MAX;
	int16_t x575 = INT16_MAX;
	volatile uint64_t x576 = UINT64_MAX;
	volatile uint64_t t84 = 23673375651078LLU;

	t84 = ((x573*x574)%(x575&x576));

	if (t84 != 32385LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x578 = -1LL;
	int16_t x579 = INT16_MIN;
	int32_t x580 = INT32_MIN;
	static volatile int64_t t85 = 7210979473699LL;

	t85 = ((x577*x578)%(x579&x580));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x583 = 7;
	uint16_t x584 = 306U;
	static int32_t t86 = -369930;

	t86 = ((x581*x582)%(x583&x584));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x585 = UINT64_MAX;
	volatile int16_t x587 = -674;
	static uint64_t t87 = 12068259LLU;

	t87 = ((x585*x586)%(x587&x588));

	if (t87 != 333LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x594 = 923U;
	int16_t x595 = -1;
	uint16_t x596 = 67U;
	volatile uint32_t t88 = 121885062U;

	t88 = ((x593*x594)%(x595&x596));

	if (t88 != 46U) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x602 = 4;
	uint64_t x604 = 2860226738848327LLU;
	static volatile uint64_t t89 = 0LLU;

	t89 = ((x601*x602)%(x603&x604));

	if (t89 != 508LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x611 = 5;
	static uint64_t x612 = 2572967537046012LLU;
	volatile uint64_t t90 = 13181458LLU;

	t90 = ((x609*x610)%(x611&x612));

	if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x617 = INT8_MIN;
	uint64_t x618 = UINT64_MAX;
	volatile uint16_t x619 = UINT16_MAX;
	static volatile uint32_t x620 = UINT32_MAX;

	t91 = ((x617*x618)%(x619&x620));

	if (t91 != 128LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x641 = 107U;
	int8_t x642 = INT8_MIN;
	int32_t x643 = INT32_MAX;

	t92 = ((x641*x642)%(x643&x644));

	if (t92 != 2147469955LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x661 = UINT64_MAX;
	int64_t x663 = INT64_MAX;
	int32_t x664 = INT32_MAX;
	volatile uint64_t t93 = 133870294412616LLU;

	t93 = ((x661*x662)%(x663&x664));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x669 = 1U;
	int16_t x670 = -1;
	int8_t x671 = -1;
	int32_t x672 = INT32_MIN;
	int32_t t94 = -7555348;

	t94 = ((x669*x670)%(x671&x672));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x673 = UINT8_MAX;
	int8_t x674 = 6;
	uint8_t x675 = UINT8_MAX;
	int16_t x676 = -3;
	volatile int32_t t95 = -9637745;

	t95 = ((x673*x674)%(x675&x676));

	if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x677 = -10048473;
	int8_t x678 = INT8_MIN;
	volatile int32_t x679 = INT32_MAX;
	int8_t x680 = 1;

	t96 = ((x677*x678)%(x679&x680));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x682 = UINT8_MAX;
	int8_t x683 = -1;
	int32_t x684 = -10;
	static volatile int32_t t97 = -5776707;

	t97 = ((x681*x682)%(x683&x684));

	if (t97 != -5) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x685 = -1;
	int32_t x686 = 132230501;
	volatile int16_t x688 = INT16_MIN;
	int64_t t98 = 2154LL;

	t98 = ((x685*x686)%(x687&x688));

	if (t98 != -132230501LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x689 = 47989454653LLU;
	int64_t x690 = INT64_MIN;
	static int16_t x691 = -1;
	int64_t x692 = -3850016147280021287LL;
	volatile uint64_t t99 = 1668LLU;

	t99 = ((x689*x690)%(x691&x692));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

