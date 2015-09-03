#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x15 = INT64_MAX;
uint8_t x26 = 57U;
int16_t x27 = -1;
uint64_t t1 = UINT64_MAX;
int8_t x41 = INT8_MAX;
int64_t x47 = -1LL;
volatile uint8_t x54 = UINT8_MAX;
uint32_t x55 = 4051271U;
int32_t t6 = 87197783;
uint32_t x81 = 1450U;
volatile uint8_t x108 = 1U;
static int16_t x141 = INT16_MAX;
volatile int32_t x144 = -1;
static int64_t x162 = INT64_MIN;
uint32_t t13 = 117U;
static uint8_t x165 = UINT8_MAX;
int32_t t14 = 6831;
int32_t t15 = 465;
static uint8_t x199 = UINT8_MAX;
uint64_t x200 = UINT64_MAX;
volatile uint32_t x225 = 4443220U;
uint8_t x227 = 121U;
volatile uint32_t t19 = 930U;
volatile int32_t t23 = 53;
int32_t t24 = 28149;
uint32_t x265 = 2U;
int32_t x274 = INT32_MIN;
static int16_t x276 = 18;
volatile int32_t x278 = INT32_MIN;
static int64_t x280 = -2089339298748412LL;
volatile int64_t t27 = -59480909354LL;
int8_t x306 = INT8_MIN;
int64_t x307 = -1LL;
uint8_t x308 = 3U;
uint64_t x322 = UINT64_MAX;
volatile int32_t t31 = -20406371;
int8_t x360 = INT8_MIN;
int32_t t34 = -155;
uint64_t x384 = 66715565005LLU;
uint8_t x389 = 18U;
volatile int32_t t36 = 209707267;
int8_t x417 = 9;
static int32_t x428 = INT32_MAX;
static uint64_t t38 = 7318LLU;
static uint16_t x433 = 2137U;
static int16_t x460 = -4;
int32_t t42 = -5795;
uint32_t x465 = 510U;
uint16_t x473 = 1U;
uint32_t x474 = 30432U;
int32_t t44 = 212;
volatile int16_t x478 = INT16_MIN;
static int64_t x484 = 40LL;
volatile int16_t x497 = INT16_MAX;
int8_t x500 = INT8_MIN;
uint16_t x504 = 4U;
uint8_t x529 = 24U;
int8_t x530 = INT8_MIN;
int32_t x536 = INT32_MIN;
int16_t x545 = INT16_MAX;
int32_t x547 = -12;
int16_t x551 = -30;
static int32_t t55 = -20446266;
uint16_t x554 = 0U;
static uint32_t x577 = 1080U;
uint8_t x600 = 43U;
int32_t t61 = -185304523;
uint32_t x602 = 109992552U;
volatile int32_t t62 = 1385;
static int32_t x630 = -3967459;
uint16_t x631 = 253U;
static uint64_t t65 = 13403038838040LLU;
static uint64_t x647 = 225617LLU;
uint32_t x705 = UINT32_MAX;
volatile int8_t x710 = -28;
int8_t x711 = INT8_MAX;
volatile int64_t t73 = 47509LL;
int32_t t74 = -8657785;
static int16_t x726 = INT16_MAX;
static int32_t x731 = INT32_MIN;
int32_t x783 = -5953;
int32_t x789 = 699786;
volatile uint64_t x790 = 20760267LLU;
int32_t x791 = -1;
uint8_t x800 = 9U;
volatile int8_t x827 = INT8_MAX;
static int32_t x828 = INT32_MIN;
volatile uint32_t x858 = UINT32_MAX;
static int32_t x895 = INT32_MAX;
volatile int32_t t90 = -497;
uint32_t x897 = UINT32_MAX;
static int64_t x900 = INT64_MIN;
static uint32_t t91 = UINT32_MAX;
uint8_t x902 = 24U;
volatile int32_t t93 = 27;
static int8_t x915 = 0;
int64_t x924 = INT64_MIN;
int32_t t95 = 1499022;
int32_t t98 = 1;
uint64_t x981 = UINT64_MAX;
volatile uint32_t x982 = 615760U;
volatile uint64_t t99 = 283691584122029LLU;


void f0(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = 0;
	uint64_t x16 = 1805924LLU;
	volatile int32_t t0 = -8092341;

	t0 = (x13<<((x14*x15)<=x16));

	if (t0 != 65534) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = UINT64_MAX;
	static int8_t x28 = INT8_MIN;

	t1 = (x25<<((x26*x27)<=x28));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x42 = 13198U;
	int8_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t2 = 6;

	t2 = (x41<<((x42*x43)<=x44));

	if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x45 = INT16_MAX;
	uint64_t x46 = 7680LLU;
	uint64_t x48 = 126312151759894762LLU;
	int32_t t3 = -26276;

	t3 = (x45<<((x46*x47)<=x48));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x49 = INT64_MAX;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -3;
	static int8_t x52 = INT8_MIN;
	volatile int64_t t4 = INT64_MAX;

	t4 = (x49<<((x50*x51)<=x52));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = INT64_MAX;
	uint64_t x56 = 15780427LLU;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x53<<((x54*x55)<=x56));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x61 = INT8_MAX;
	uint16_t x62 = 8824U;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = -1;

	t6 = (x61<<((x62*x63)<=x64));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x73 = 1;
	int32_t x74 = -1;
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t7 = -2231905;

	t7 = (x73<<((x74*x75)<=x76));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x82 = 16U;
	static uint64_t x83 = UINT64_MAX;
	volatile uint32_t x84 = 2047623677U;
	static uint32_t t8 = 389331826U;

	t8 = (x81<<((x82*x83)<=x84));

	if (t8 != 1450U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x105 = 1490329903U;
	volatile int32_t x106 = 447;
	uint16_t x107 = 0U;
	volatile uint32_t t9 = 13906517U;

	t9 = (x105<<((x106*x107)<=x108));

	if (t9 != 2980659806U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x113 = 12;
	int8_t x114 = INT8_MIN;
	uint16_t x115 = UINT16_MAX;
	uint64_t x116 = 78850670148325673LLU;
	static int32_t t10 = -3;

	t10 = (x113<<((x114*x115)<=x116));

	if (t10 != 12) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x142 = 3;
	static uint64_t x143 = 1572530999LLU;
	volatile int32_t t11 = -5272;

	t11 = (x141<<((x142*x143)<=x144));

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x149 = UINT8_MAX;
	static int32_t x150 = INT32_MIN;
	uint32_t x151 = 62U;
	static volatile uint16_t x152 = 41U;
	int32_t t12 = 155;

	t12 = (x149<<((x150*x151)<=x152));

	if (t12 != 510) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x161 = 74601U;
	volatile uint64_t x163 = 1805845221021LLU;
	static uint32_t x164 = 195U;

	t13 = (x161<<((x162*x163)<=x164));

	if (t13 != 74601U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x166 = INT32_MIN;
	static volatile int64_t x167 = 1LL;
	uint16_t x168 = 6186U;

	t14 = (x165<<((x166*x167)<=x168));

	if (t14 != 510) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x169 = 7;
	volatile uint64_t x170 = UINT64_MAX;
	int32_t x171 = -1;
	int16_t x172 = -1;

	t15 = (x169<<((x170*x171)<=x172));

	if (t15 != 14) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x181 = INT64_MAX;
	static uint32_t x182 = 7313078U;
	static uint16_t x183 = UINT16_MAX;
	static uint8_t x184 = UINT8_MAX;
	int64_t t16 = INT64_MAX;

	t16 = (x181<<((x182*x183)<=x184));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x197 = 890035691105273LL;
	static int16_t x198 = INT16_MAX;
	volatile int64_t t17 = -28218LL;

	t17 = (x197<<((x198*x199)<=x200));

	if (t17 != 1780071382210546LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x201 = INT16_MAX;
	volatile uint64_t x202 = UINT64_MAX;
	int32_t x203 = -1;
	static int32_t x204 = INT32_MAX;
	int32_t t18 = -222622853;

	t18 = (x201<<((x202*x203)<=x204));

	if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x226 = INT16_MAX;
	int32_t x228 = INT32_MAX;

	t19 = (x225<<((x226*x227)<=x228));

	if (t19 != 8886440U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t x234 = 461176U;
	int8_t x235 = INT8_MAX;
	static volatile int64_t x236 = INT64_MIN;
	int32_t t20 = 458;

	t20 = (x233<<((x234*x235)<=x236));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x245 = 475U;
	volatile int32_t x246 = 60;
	static uint8_t x247 = UINT8_MAX;
	uint64_t x248 = 7312677293576351638LLU;
	int32_t t21 = -30375;

	t21 = (x245<<((x246*x247)<=x248));

	if (t21 != 950) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x249 = 67590813668159454LLU;
	uint8_t x250 = 71U;
	int8_t x251 = 5;
	int64_t x252 = INT64_MAX;
	volatile uint64_t t22 = 10LLU;

	t22 = (x249<<((x250*x251)<=x252));

	if (t22 != 135181627336318908LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x253 = 1U;
	int8_t x254 = -2;
	uint16_t x255 = 11982U;
	volatile int32_t x256 = -3;

	t23 = (x253<<((x254*x255)<=x256));

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x257 = 1023U;
	static int64_t x258 = -55036721285LL;
	int64_t x259 = -1LL;
	uint8_t x260 = 3U;

	t24 = (x257<<((x258*x259)<=x260));

	if (t24 != 1023) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x266 = 1044U;
	uint32_t x267 = 3U;
	static volatile uint64_t x268 = UINT64_MAX;
	volatile uint32_t t25 = 15141U;

	t25 = (x265<<((x266*x267)<=x268));

	if (t25 != 4U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x273 = INT32_MAX;
	volatile uint64_t x275 = UINT64_MAX;
	volatile int32_t t26 = INT32_MAX;

	t26 = (x273<<((x274*x275)<=x276));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x277 = 1LL;
	volatile int8_t x279 = 0;

	t27 = (x277<<((x278*x279)<=x280));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x285 = INT16_MAX;
	static uint8_t x286 = UINT8_MAX;
	int16_t x287 = -2721;
	uint32_t x288 = 100U;
	volatile int32_t t28 = -2593087;

	t28 = (x285<<((x286*x287)<=x288));

	if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x305 = 18221U;
	int32_t t29 = -18231580;

	t29 = (x305<<((x306*x307)<=x308));

	if (t29 != 18221) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x313 = UINT8_MAX;
	volatile int32_t x314 = 0;
	int16_t x315 = -1;
	uint8_t x316 = 30U;
	volatile int32_t t30 = 3;

	t30 = (x313<<((x314*x315)<=x316));

	if (t30 != 510) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x321 = INT8_MAX;
	uint16_t x323 = 1U;
	int8_t x324 = 6;

	t31 = (x321<<((x322*x323)<=x324));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x349 = INT8_MAX;
	volatile uint16_t x350 = 869U;
	uint64_t x351 = 33784777877LLU;
	int8_t x352 = 1;
	volatile int32_t t32 = -4;

	t32 = (x349<<((x350*x351)<=x352));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x357 = INT8_MAX;
	int8_t x358 = -5;
	volatile uint16_t x359 = 25935U;
	int32_t t33 = -465196;

	t33 = (x357<<((x358*x359)<=x360));

	if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x361 = INT8_MAX;
	uint16_t x362 = 5283U;
	uint32_t x363 = 12833U;
	uint32_t x364 = 42U;

	t34 = (x361<<((x362*x363)<=x364));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x381 = 29466U;
	static volatile int8_t x382 = -7;
	int8_t x383 = -20;
	uint32_t t35 = 32436994U;

	t35 = (x381<<((x382*x383)<=x384));

	if (t35 != 58932U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x390 = 2U;
	static uint8_t x391 = 88U;
	static int64_t x392 = INT64_MIN;

	t36 = (x389<<((x390*x391)<=x392));

	if (t36 != 18) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x418 = 3LLU;
	uint16_t x419 = 56U;
	uint8_t x420 = 3U;
	volatile int32_t t37 = -49906103;

	t37 = (x417<<((x418*x419)<=x420));

	if (t37 != 9) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x425 = 7409350386011360LLU;
	uint64_t x426 = 4413799428896168339LLU;
	volatile int32_t x427 = -7046;

	t38 = (x425<<((x426*x427)<=x428));

	if (t38 != 7409350386011360LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x434 = INT16_MAX;
	int64_t x435 = -700LL;
	volatile int16_t x436 = INT16_MIN;
	static int32_t t39 = 41104;

	t39 = (x433<<((x434*x435)<=x436));

	if (t39 != 4274) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x441 = UINT64_MAX;
	volatile uint8_t x442 = 25U;
	static int32_t x443 = -180;
	uint8_t x444 = 20U;
	volatile uint64_t t40 = 16368780741LLU;

	t40 = (x441<<((x442*x443)<=x444));

	if (t40 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x449 = 83;
	uint8_t x450 = 0U;
	int64_t x451 = INT64_MAX;
	static int16_t x452 = -1019;
	volatile int32_t t41 = -1871;

	t41 = (x449<<((x450*x451)<=x452));

	if (t41 != 83) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x457 = 23;
	static uint16_t x458 = 32151U;
	uint32_t x459 = UINT32_MAX;

	t42 = (x457<<((x458*x459)<=x460));

	if (t42 != 46) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x466 = 6652719580450054649LLU;
	int8_t x467 = -1;
	int64_t x468 = INT64_MAX;
	volatile uint32_t t43 = 1293869U;

	t43 = (x465<<((x466*x467)<=x468));

	if (t43 != 510U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x475 = 45LLU;
	volatile int16_t x476 = 1;

	t44 = (x473<<((x474*x475)<=x476));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x477 = 1;
	static int32_t x479 = -16177;
	int16_t x480 = INT16_MIN;
	int32_t t45 = -1036001;

	t45 = (x477<<((x478*x479)<=x480));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x481 = UINT16_MAX;
	volatile int16_t x482 = INT16_MIN;
	uint16_t x483 = 9583U;
	static volatile int32_t t46 = -126318;

	t46 = (x481<<((x482*x483)<=x484));

	if (t46 != 131070) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x498 = UINT64_MAX;
	uint16_t x499 = UINT16_MAX;
	int32_t t47 = -129773;

	t47 = (x497<<((x498*x499)<=x500));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x501 = INT64_MAX;
	int64_t x502 = 216759601257LL;
	static volatile uint8_t x503 = 2U;
	static int64_t t48 = INT64_MAX;

	t48 = (x501<<((x502*x503)<=x504));

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x513 = 24204083LLU;
	int8_t x514 = -1;
	int16_t x515 = INT16_MIN;
	volatile int16_t x516 = INT16_MIN;
	uint64_t t49 = 1994516988791854304LLU;

	t49 = (x513<<((x514*x515)<=x516));

	if (t49 != 24204083LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x517 = 1900U;
	int16_t x518 = INT16_MAX;
	uint8_t x519 = UINT8_MAX;
	int8_t x520 = INT8_MIN;
	int32_t t50 = 693;

	t50 = (x517<<((x518*x519)<=x520));

	if (t50 != 1900) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x525 = 14;
	uint16_t x526 = 0U;
	int16_t x527 = -1;
	volatile int64_t x528 = -1LL;
	volatile int32_t t51 = 12;

	t51 = (x525<<((x526*x527)<=x528));

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x531 = -1LL;
	uint32_t x532 = UINT32_MAX;
	int32_t t52 = 0;

	t52 = (x529<<((x530*x531)<=x532));

	if (t52 != 48) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x533 = 0U;
	volatile uint16_t x534 = 985U;
	uint16_t x535 = 214U;
	int32_t t53 = 346012255;

	t53 = (x533<<((x534*x535)<=x536));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x546 = 0LLU;
	volatile uint32_t x548 = 26687072U;
	int32_t t54 = 487;

	t54 = (x545<<((x546*x547)<=x548));

	if (t54 != 65534) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x549 = 5750;
	static int64_t x550 = -1LL;
	int16_t x552 = INT16_MAX;

	t55 = (x549<<((x550*x551)<=x552));

	if (t55 != 11500) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x553 = 232U;
	int32_t x555 = -4103;
	volatile int16_t x556 = INT16_MIN;
	int32_t t56 = -596;

	t56 = (x553<<((x554*x555)<=x556));

	if (t56 != 232) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x561 = INT32_MAX;
	volatile int32_t x562 = 860638;
	uint8_t x563 = 1U;
	uint8_t x564 = 27U;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x561<<((x562*x563)<=x564));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x573 = 108U;
	volatile int8_t x574 = INT8_MAX;
	uint8_t x575 = 0U;
	volatile int16_t x576 = -1;
	volatile int32_t t58 = 343411008;

	t58 = (x573<<((x574*x575)<=x576));

	if (t58 != 108) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x578 = 51408628214202LL;
	int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	volatile uint32_t t59 = 12U;

	t59 = (x577<<((x578*x579)<=x580));

	if (t59 != 2160U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x593 = 11;
	int8_t x594 = INT8_MAX;
	static volatile int32_t x595 = -1;
	int32_t x596 = -66551007;
	int32_t t60 = -135777027;

	t60 = (x593<<((x594*x595)<=x596));

	if (t60 != 11) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x597 = 0;
	static int32_t x598 = INT32_MIN;
	int64_t x599 = 6965015LL;

	t61 = (x597<<((x598*x599)<=x600));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x601 = INT16_MAX;
	volatile int16_t x603 = INT16_MIN;
	int8_t x604 = INT8_MIN;

	t62 = (x601<<((x602*x603)<=x604));

	if (t62 != 65534) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x605 = 2126U;
	int16_t x606 = INT16_MIN;
	static int8_t x607 = INT8_MAX;
	int64_t x608 = 99270863LL;
	volatile int32_t t63 = -9599;

	t63 = (x605<<((x606*x607)<=x608));

	if (t63 != 4252) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x621 = 11U;
	int32_t x622 = 16572;
	static int8_t x623 = 11;
	int16_t x624 = -1242;
	static volatile int32_t t64 = -2923;

	t64 = (x621<<((x622*x623)<=x624));

	if (t64 != 11) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x629 = 166LLU;
	volatile int64_t x632 = -85882718473578872LL;

	t65 = (x629<<((x630*x631)<=x632));

	if (t65 != 166LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x645 = 15945791U;
	static int64_t x646 = INT64_MAX;
	int16_t x648 = 4;
	volatile uint32_t t66 = 1635790869U;

	t66 = (x645<<((x646*x647)<=x648));

	if (t66 != 15945791U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x653 = UINT8_MAX;
	int16_t x654 = 45;
	static int16_t x655 = -1;
	static int32_t x656 = INT32_MIN;
	static int32_t t67 = -228;

	t67 = (x653<<((x654*x655)<=x656));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x669 = INT16_MAX;
	int16_t x670 = 0;
	volatile uint64_t x671 = UINT64_MAX;
	int8_t x672 = INT8_MIN;
	static int32_t t68 = -19585544;

	t68 = (x669<<((x670*x671)<=x672));

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x693 = INT64_MAX;
	int16_t x694 = -3415;
	uint64_t x695 = UINT64_MAX;
	static uint8_t x696 = 8U;
	static int64_t t69 = INT64_MAX;

	t69 = (x693<<((x694*x695)<=x696));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x697 = 1LL;
	static int32_t x698 = 1;
	int32_t x699 = -347;
	int32_t x700 = INT32_MIN;
	volatile int64_t t70 = 10177445426337LL;

	t70 = (x697<<((x698*x699)<=x700));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x701 = 6U;
	static uint32_t x702 = UINT32_MAX;
	uint32_t x703 = 60U;
	volatile int32_t x704 = INT32_MIN;
	volatile int32_t t71 = -292689080;

	t71 = (x701<<((x702*x703)<=x704));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x706 = 3U;
	int8_t x707 = INT8_MAX;
	int16_t x708 = INT16_MIN;
	uint32_t t72 = UINT32_MAX;

	t72 = (x705<<((x706*x707)<=x708));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x709 = 507805420625LL;
	int16_t x712 = -9;

	t73 = (x709<<((x710*x711)<=x712));

	if (t73 != 1015610841250LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x717 = UINT8_MAX;
	int8_t x718 = INT8_MAX;
	volatile int32_t x719 = 13556809;
	volatile int8_t x720 = 1;

	t74 = (x717<<((x718*x719)<=x720));

	if (t74 != 255) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x721 = INT16_MAX;
	int16_t x722 = INT16_MIN;
	int16_t x723 = INT16_MIN;
	int32_t x724 = INT32_MIN;
	volatile int32_t t75 = 30119;

	t75 = (x721<<((x722*x723)<=x724));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x725 = 3208;
	volatile int8_t x727 = -1;
	int64_t x728 = -1LL;
	volatile int32_t t76 = 14640;

	t76 = (x725<<((x726*x727)<=x728));

	if (t76 != 6416) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x729 = UINT8_MAX;
	uint32_t x730 = 26079U;
	volatile int8_t x732 = -1;
	int32_t t77 = 381859084;

	t77 = (x729<<((x730*x731)<=x732));

	if (t77 != 510) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x753 = 126U;
	int16_t x754 = INT16_MAX;
	uint16_t x755 = UINT16_MAX;
	int32_t x756 = INT32_MIN;
	static volatile uint32_t t78 = 17U;

	t78 = (x753<<((x754*x755)<=x756));

	if (t78 != 126U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x769 = UINT8_MAX;
	uint8_t x770 = 1U;
	uint16_t x771 = 2148U;
	int32_t x772 = INT32_MIN;
	int32_t t79 = -584550964;

	t79 = (x769<<((x770*x771)<=x772));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x781 = 35440876321437383LLU;
	int32_t x782 = -1;
	int32_t x784 = -1;
	static volatile uint64_t t80 = 780087148725331650LLU;

	t80 = (x781<<((x782*x783)<=x784));

	if (t80 != 35440876321437383LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x792 = -24;
	volatile int32_t t81 = 32900140;

	t81 = (x789<<((x790*x791)<=x792));

	if (t81 != 1399572) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x797 = 52U;
	static int64_t x798 = -1LL;
	volatile int64_t x799 = INT64_MAX;
	int32_t t82 = -78292106;

	t82 = (x797<<((x798*x799)<=x800));

	if (t82 != 104) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x801 = 2054025453LL;
	int32_t x802 = INT32_MAX;
	volatile uint64_t x803 = 792871LLU;
	static int16_t x804 = INT16_MIN;
	int64_t t83 = 489667556194808LL;

	t83 = (x801<<((x802*x803)<=x804));

	if (t83 != 4108050906LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x825 = UINT32_MAX;
	static int8_t x826 = INT8_MIN;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x825<<((x826*x827)<=x828));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x829 = UINT64_MAX;
	int64_t x830 = 180LL;
	int64_t x831 = -1LL;
	static volatile uint16_t x832 = 1777U;
	volatile uint64_t t85 = 460582426182435527LLU;

	t85 = (x829<<((x830*x831)<=x832));

	if (t85 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x841 = 100452U;
	static uint16_t x842 = UINT16_MAX;
	int8_t x843 = INT8_MIN;
	int16_t x844 = INT16_MIN;
	volatile uint32_t t86 = 169U;

	t86 = (x841<<((x842*x843)<=x844));

	if (t86 != 200904U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x849 = UINT16_MAX;
	int16_t x850 = INT16_MAX;
	int16_t x851 = -1;
	int8_t x852 = -1;
	volatile int32_t t87 = 0;

	t87 = (x849<<((x850*x851)<=x852));

	if (t87 != 131070) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x857 = 196U;
	uint32_t x859 = UINT32_MAX;
	int16_t x860 = 2;
	static uint32_t t88 = 33547U;

	t88 = (x857<<((x858*x859)<=x860));

	if (t88 != 392U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x865 = 18780870;
	static uint32_t x866 = 32547U;
	volatile int8_t x867 = INT8_MAX;
	static int16_t x868 = 137;
	int32_t t89 = -201;

	t89 = (x865<<((x866*x867)<=x868));

	if (t89 != 18780870) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x893 = UINT8_MAX;
	uint64_t x894 = 10403171002LLU;
	volatile int16_t x896 = 3;

	t90 = (x893<<((x894*x895)<=x896));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x898 = 4173;
	uint32_t x899 = UINT32_MAX;

	t91 = (x897<<((x898*x899)<=x900));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x901 = INT16_MAX;
	static uint64_t x903 = 65138771976749933LLU;
	volatile int32_t x904 = INT32_MIN;
	static volatile int32_t t92 = 19;

	t92 = (x901<<((x902*x903)<=x904));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x909 = 15U;
	int32_t x910 = INT32_MIN;
	uint32_t x911 = UINT32_MAX;
	static volatile uint16_t x912 = UINT16_MAX;

	t93 = (x909<<((x910*x911)<=x912));

	if (t93 != 15) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x913 = INT16_MAX;
	int16_t x914 = -1;
	int16_t x916 = INT16_MAX;
	volatile int32_t t94 = -3367689;

	t94 = (x913<<((x914*x915)<=x916));

	if (t94 != 65534) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x921 = 12U;
	int8_t x922 = INT8_MAX;
	uint16_t x923 = 0U;

	t95 = (x921<<((x922*x923)<=x924));

	if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x945 = 224581LLU;
	uint16_t x946 = 3U;
	static volatile uint8_t x947 = UINT8_MAX;
	static int64_t x948 = -1LL;
	uint64_t t96 = 1851685LLU;

	t96 = (x945<<((x946*x947)<=x948));

	if (t96 != 224581LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x949 = 604851U;
	int32_t x950 = -1;
	volatile uint16_t x951 = 1803U;
	int8_t x952 = -19;
	static uint32_t t97 = 77037U;

	t97 = (x949<<((x950*x951)<=x952));

	if (t97 != 1209702U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x957 = 982246;
	uint32_t x958 = 27997U;
	int8_t x959 = INT8_MAX;
	volatile int8_t x960 = -1;

	t98 = (x957<<((x958*x959)<=x960));

	if (t98 != 1964492) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x983 = 0U;
	static int8_t x984 = 20;

	t99 = (x981<<((x982*x983)<=x984));

	if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
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

