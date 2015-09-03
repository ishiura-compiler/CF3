#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x17 = UINT64_MAX;
volatile int16_t x18 = 1;
uint32_t x23 = 1738461U;
static uint64_t t3 = 26885490809027LLU;
volatile int32_t x37 = -1;
uint32_t x38 = 64108995U;
uint32_t t4 = 819U;
volatile uint32_t x43 = 6431106U;
int16_t x49 = INT16_MIN;
volatile int64_t x51 = 754627LL;
static int32_t t7 = -45746;
uint32_t t8 = 41351U;
uint64_t x128 = UINT64_MAX;
volatile uint64_t t10 = 3LLU;
int32_t x132 = INT32_MIN;
static int32_t x138 = -1;
uint16_t x139 = UINT16_MAX;
int32_t t12 = 4020579;
volatile int64_t x151 = INT64_MAX;
static int8_t x159 = INT8_MIN;
volatile uint8_t x165 = UINT8_MAX;
static uint16_t x171 = 694U;
uint64_t t16 = 3969361LLU;
volatile int32_t t17 = 1277749;
static int64_t x187 = INT64_MIN;
static volatile uint64_t t19 = 500LLU;
int16_t x190 = INT16_MIN;
static int16_t x191 = -1;
uint32_t x198 = 1311016U;
int8_t x204 = INT8_MAX;
int8_t x224 = INT8_MAX;
uint16_t x241 = 3U;
int32_t t26 = -2;
volatile uint32_t x254 = 27682398U;
uint8_t x268 = 2U;
volatile int32_t x270 = -83633637;
volatile int32_t t32 = -532395804;
int8_t x278 = 0;
uint16_t x286 = 5U;
int8_t x287 = INT8_MIN;
int16_t x288 = INT16_MIN;
static volatile int32_t t34 = -26764308;
static int32_t x289 = INT32_MIN;
int64_t x291 = 8732649162LL;
volatile uint32_t t37 = 34019U;
uint8_t x331 = 76U;
uint8_t x332 = UINT8_MAX;
uint32_t x341 = UINT32_MAX;
static uint16_t x344 = 118U;
int32_t t41 = 0;
uint64_t x349 = UINT64_MAX;
int64_t x351 = -1LL;
uint64_t t42 = 136692261328LLU;
static int16_t x357 = INT16_MAX;
int32_t x370 = -1;
volatile int32_t t45 = 11557;
uint64_t t47 = 23451274672593098LLU;
static int64_t x408 = -1362175605177LL;
int16_t x448 = 28;
static int8_t x464 = INT8_MAX;
volatile int16_t x467 = 95;
int8_t x468 = INT8_MIN;
int16_t x489 = INT16_MAX;
uint64_t t57 = 629494153LLU;
uint16_t x508 = UINT16_MAX;
uint64_t t59 = 1LLU;
uint64_t x511 = UINT64_MAX;
int64_t x513 = 172104324LL;
int64_t x516 = 66479238352LL;
uint64_t x519 = 3057528081131739LLU;
int64_t t62 = -134152934519LL;
int16_t x527 = INT16_MAX;
static int32_t x548 = INT32_MIN;
volatile uint64_t t66 = 149088LLU;
int32_t x550 = -12;
static int32_t x552 = INT32_MIN;
uint8_t x565 = 9U;
static uint8_t x589 = 27U;
static uint8_t x590 = UINT8_MAX;
int16_t x591 = INT16_MIN;
int16_t x592 = INT16_MIN;
volatile int32_t t73 = 10;
uint32_t x606 = UINT32_MAX;
static uint64_t x621 = UINT64_MAX;
int16_t x624 = 704;
int16_t x626 = -685;
volatile int32_t t77 = 234985;
uint8_t x631 = 28U;
int8_t x633 = 26;
volatile int8_t x636 = INT8_MAX;
volatile int32_t t79 = 15;
volatile uint8_t x647 = 1U;
int16_t x668 = INT16_MIN;
int64_t x688 = -1LL;
volatile int32_t x703 = 363723;
uint64_t x705 = 19606090LLU;
int8_t x707 = -37;
int16_t x717 = INT16_MIN;
volatile uint64_t x722 = 821003LLU;
static volatile uint64_t t89 = 1752091LLU;
int8_t x733 = INT8_MIN;
int32_t x736 = -1;
volatile uint64_t t94 = 805587391842966361LLU;
volatile uint64_t t95 = 0LLU;
uint32_t x769 = 20330578U;
volatile int8_t x771 = INT8_MIN;
int32_t x772 = 960371741;
uint64_t x774 = 28197730396077LLU;
static volatile uint8_t x776 = 1U;
int8_t x793 = INT8_MIN;
uint64_t x794 = UINT64_MAX;
static volatile int16_t x795 = 80;


void f0(void) {
	uint32_t x1 = 112389U;
	int8_t x2 = -19;
	uint32_t x3 = 40U;
	int64_t x4 = -1LL;
	static uint32_t t0 = 351742886U;

	t0 = ((x1*x2)<<(x3<=x4));

	if (t0 != 4292831905U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x9 = INT16_MIN;
	uint64_t x10 = 7090485583588053839LLU;
	static int8_t x11 = INT8_MIN;
	int16_t x12 = -13572;
	uint64_t t1 = 119918048467LLU;

	t1 = ((x9*x10)<<(x11<=x12));

	if (t1 != 14156749432163958784LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x19 = 19U;
	static int64_t x20 = INT64_MIN;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x17*x18)<<(x19<=x20));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	static uint16_t x24 = UINT16_MAX;

	t3 = ((x21*x22)<<(x23<=x24));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x39 = 24U;
	int64_t x40 = -1LL;

	t4 = ((x37*x38)<<(x39<=x40));

	if (t4 != 4230858301U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x41 = UINT32_MAX;
	static uint8_t x42 = UINT8_MAX;
	static int16_t x44 = INT16_MIN;
	volatile uint32_t t5 = 2495044U;

	t5 = ((x41*x42)<<(x43<=x44));

	if (t5 != 4294966786U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = 271589735388312LLU;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	volatile uint64_t t6 = 144LLU;

	t6 = ((x45*x46)<<(x47<=x48));

	if (t6 != 18446200894238774992LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x50 = -5034;
	int8_t x52 = -1;

	t7 = ((x49*x50)<<(x51<=x52));

	if (t7 != 164954112) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x69 = 1441174437U;
	int8_t x70 = INT8_MIN;
	volatile int8_t x71 = -5;
	volatile uint16_t x72 = UINT16_MAX;

	t8 = ((x69*x70)<<(x71<=x72));

	if (t8 != 426531584U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x89 = UINT32_MAX;
	static int32_t x90 = -1;
	uint64_t x91 = UINT64_MAX;
	uint32_t x92 = 190674031U;
	volatile uint32_t t9 = 3U;

	t9 = ((x89*x90)<<(x91<=x92));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x125 = 2409LL;
	uint64_t x126 = UINT64_MAX;
	static uint8_t x127 = 114U;

	t10 = ((x125*x126)<<(x127<=x128));

	if (t10 != 18446744073709546798LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x130 = 0U;
	uint8_t x131 = 0U;
	int32_t t11 = 1;

	t11 = ((x129*x130)<<(x131<=x132));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x137 = -28;
	static volatile uint16_t x140 = 7653U;

	t12 = ((x137*x138)<<(x139<=x140));

	if (t12 != 28) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x149 = UINT64_MAX;
	uint64_t x150 = 550492206946LLU;
	volatile uint8_t x152 = UINT8_MAX;
	uint64_t t13 = 14663057LLU;

	t13 = ((x149*x150)<<(x151<=x152));

	if (t13 != 18446743523217344670LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x157 = 260115U;
	int8_t x158 = 1;
	uint64_t x160 = UINT64_MAX;
	static volatile uint32_t t14 = 131642886U;

	t14 = ((x157*x158)<<(x159<=x160));

	if (t14 != 520230U) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MAX;
	static uint16_t x168 = 1897U;
	volatile int32_t t15 = -58609;

	t15 = ((x165*x166)<<(x167<=x168));

	if (t15 != 8355585) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x169 = INT16_MIN;
	uint64_t x170 = 67039190538LLU;
	static int64_t x172 = -345LL;

	t16 = ((x169*x170)<<(x171<=x172));

	if (t16 != 18444547333514002432LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x177 = 1;
	uint16_t x178 = 142U;
	volatile int32_t x179 = 39;
	uint16_t x180 = 1U;

	t17 = ((x177*x178)<<(x179<=x180));

	if (t17 != 142) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x181 = 11LLU;
	int64_t x182 = -1LL;
	int32_t x183 = INT32_MAX;
	int64_t x184 = INT64_MIN;
	uint64_t t18 = 8752383770571203915LLU;

	t18 = ((x181*x182)<<(x183<=x184));

	if (t18 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x185 = INT32_MIN;
	uint64_t x186 = UINT64_MAX;
	int8_t x188 = INT8_MIN;

	t19 = ((x185*x186)<<(x187<=x188));

	if (t19 != 4294967296LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x189 = 0;
	static int32_t x192 = -89;
	static int32_t t20 = 109764;

	t20 = ((x189*x190)<<(x191<=x192));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x197 = -15750;
	int32_t x199 = INT32_MIN;
	static int64_t x200 = -1LL;
	volatile uint32_t t21 = 26138U;

	t21 = ((x197*x198)<<(x199<=x200));

	if (t21 != 1652668960U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x201 = 0;
	static volatile int32_t x202 = -1;
	volatile uint64_t x203 = UINT64_MAX;
	int32_t t22 = -64220125;

	t22 = ((x201*x202)<<(x203<=x204));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x209 = 1U;
	int64_t x210 = 48422LL;
	uint64_t x211 = 7682990147974909448LLU;
	volatile int64_t x212 = INT64_MIN;
	volatile int64_t t23 = -14LL;

	t23 = ((x209*x210)<<(x211<=x212));

	if (t23 != 96844LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	int32_t t24 = 0;

	t24 = ((x221*x222)<<(x223<=x224));

	if (t24 != 256) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x229 = 13U;
	static uint32_t x230 = UINT32_MAX;
	static int32_t x231 = INT32_MAX;
	int16_t x232 = 5361;
	uint32_t t25 = 23U;

	t25 = ((x229*x230)<<(x231<=x232));

	if (t25 != 4294967283U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x242 = 14;
	volatile int8_t x243 = INT8_MAX;
	volatile int16_t x244 = 369;

	t26 = ((x241*x242)<<(x243<=x244));

	if (t26 != 84) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x245 = 218U;
	volatile uint16_t x246 = 236U;
	volatile uint8_t x247 = UINT8_MAX;
	int64_t x248 = INT64_MAX;
	volatile int32_t t27 = -100362;

	t27 = ((x245*x246)<<(x247<=x248));

	if (t27 != 102896) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x249 = -1;
	volatile uint32_t x250 = 401146521U;
	volatile uint32_t x251 = 3702224U;
	int16_t x252 = INT16_MIN;
	static volatile uint32_t t28 = 3614287U;

	t28 = ((x249*x250)<<(x251<=x252));

	if (t28 != 3492674254U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x253 = -1;
	int8_t x255 = INT8_MIN;
	uint32_t x256 = UINT32_MAX;
	uint32_t t29 = 308063019U;

	t29 = ((x253*x254)<<(x255<=x256));

	if (t29 != 4239602500U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x257 = INT64_MIN;
	static volatile uint64_t x258 = UINT64_MAX;
	uint16_t x259 = UINT16_MAX;
	int8_t x260 = -1;
	uint64_t t30 = 3LLU;

	t30 = ((x257*x258)<<(x259<=x260));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x265 = -6319;
	int8_t x266 = INT8_MIN;
	int32_t x267 = -4691;
	int32_t t31 = 269617983;

	t31 = ((x265*x266)<<(x267<=x268));

	if (t31 != 1617664) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x269 = -1;
	int64_t x271 = -1621774LL;
	int32_t x272 = INT32_MIN;

	t32 = ((x269*x270)<<(x271<=x272));

	if (t32 != 83633637) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x277 = INT32_MIN;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t33 = 182948227;

	t33 = ((x277*x278)<<(x279<=x280));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x285 = 4851;

	t34 = ((x285*x286)<<(x287<=x288));

	if (t34 != 24255) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x290 = 14836852865LLU;
	uint64_t x292 = UINT64_MAX;
	uint64_t t35 = 20LLU;

	t35 = ((x289*x290)<<(x291<=x292));

	if (t35 != 10063178464099303424LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x301 = 24602LLU;
	static volatile uint16_t x302 = 503U;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MAX;
	uint64_t t36 = 508849865358LLU;

	t36 = ((x301*x302)<<(x303<=x304));

	if (t36 != 24749612LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x325 = 4307810U;
	int32_t x326 = INT32_MAX;
	static uint16_t x327 = 3U;
	uint8_t x328 = UINT8_MAX;

	t37 = ((x325*x326)<<(x327<=x328));

	if (t37 != 4286351676U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x329 = UINT16_MAX;
	uint16_t x330 = 3238U;
	int32_t t38 = 3113822;

	t38 = ((x329*x330)<<(x331<=x332));

	if (t38 != 424404660) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x333 = 15;
	volatile int16_t x334 = 436;
	uint64_t x335 = 70844722846002033LLU;
	static int32_t x336 = INT32_MIN;
	int32_t t39 = -904218550;

	t39 = ((x333*x334)<<(x335<=x336));

	if (t39 != 13080) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x342 = -1;
	int32_t x343 = 12;
	uint32_t t40 = 227791U;

	t40 = ((x341*x342)<<(x343<=x344));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x345 = 0U;
	int8_t x346 = INT8_MIN;
	int8_t x347 = -17;
	int64_t x348 = INT64_MIN;

	t41 = ((x345*x346)<<(x347<=x348));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x350 = INT64_MIN;
	static uint16_t x352 = UINT16_MAX;

	t42 = ((x349*x350)<<(x351<=x352));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x358 = 15LLU;
	volatile uint8_t x359 = 1U;
	static uint64_t x360 = 2162026346797120355LLU;
	uint64_t t43 = 359528025310332LLU;

	t43 = ((x357*x358)<<(x359<=x360));

	if (t43 != 983010LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x365 = 21;
	uint32_t x366 = 380055U;
	int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	static uint32_t t44 = 86887U;

	t44 = ((x365*x366)<<(x367<=x368));

	if (t44 != 7981155U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x369 = -762;
	static uint64_t x371 = 5725283LLU;
	volatile int16_t x372 = -1;

	t45 = ((x369*x370)<<(x371<=x372));

	if (t45 != 1524) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x377 = -1;
	int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	int32_t x380 = 453856033;
	volatile int64_t t46 = -52971735742LL;

	t46 = ((x377*x378)<<(x379<=x380));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x385 = 49611LLU;
	volatile int32_t x386 = INT32_MIN;
	int8_t x387 = INT8_MAX;
	uint32_t x388 = 260009U;

	t47 = ((x385*x386)<<(x387<=x388));

	if (t47 != 18446530996087029760LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x397 = 1;
	static volatile uint32_t x398 = 428118U;
	volatile int64_t x399 = INT64_MIN;
	int8_t x400 = 5;
	uint32_t t48 = 394505U;

	t48 = ((x397*x398)<<(x399<=x400));

	if (t48 != 856236U) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x405 = UINT32_MAX;
	uint16_t x406 = UINT16_MAX;
	static int32_t x407 = -1;
	volatile uint32_t t49 = 29U;

	t49 = ((x405*x406)<<(x407<=x408));

	if (t49 != 4294901761U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x409 = 0U;
	static volatile uint64_t x410 = UINT64_MAX;
	static int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	uint64_t t50 = 31897077381220410LLU;

	t50 = ((x409*x410)<<(x411<=x412));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x445 = -188535811;
	uint32_t x446 = 0U;
	int16_t x447 = INT16_MAX;
	volatile uint32_t t51 = 9294U;

	t51 = ((x445*x446)<<(x447<=x448));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x457 = -1;
	int16_t x458 = INT16_MIN;
	int16_t x459 = -1;
	int16_t x460 = INT16_MAX;
	volatile int32_t t52 = -2600;

	t52 = ((x457*x458)<<(x459<=x460));

	if (t52 != 65536) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x461 = 22;
	int64_t x462 = 411564985LL;
	int64_t x463 = INT64_MIN;
	int64_t t53 = -9741130415433LL;

	t53 = ((x461*x462)<<(x463<=x464));

	if (t53 != 18108859340LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x465 = 0LL;
	uint16_t x466 = 18U;
	volatile int64_t t54 = -7113103LL;

	t54 = ((x465*x466)<<(x467<=x468));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x473 = INT8_MAX;
	volatile uint64_t x474 = UINT64_MAX;
	static uint64_t x475 = UINT64_MAX;
	uint32_t x476 = 147149067U;
	uint64_t t55 = 11908762863LLU;

	t55 = ((x473*x474)<<(x475<=x476));

	if (t55 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x490 = 265676584U;
	uint8_t x491 = UINT8_MAX;
	int64_t x492 = -1LL;
	uint32_t t56 = 1596531415U;

	t56 = ((x489*x490)<<(x491<=x492));

	if (t56 != 3820886232U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x493 = 232LLU;
	uint32_t x494 = UINT32_MAX;
	int32_t x495 = INT32_MIN;
	int16_t x496 = -333;

	t57 = ((x493*x494)<<(x495<=x496));

	if (t57 != 1992864824880LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x501 = INT16_MAX;
	uint64_t x502 = 70575444783856391LLU;
	volatile int8_t x503 = 1;
	static volatile uint16_t x504 = 283U;
	uint64_t t58 = 13LLU;

	t58 = ((x501*x502)<<(x503<=x504));

	if (t58 != 13405180037856823794LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x505 = INT8_MIN;
	uint64_t x506 = UINT64_MAX;
	int64_t x507 = -1LL;

	t59 = ((x505*x506)<<(x507<=x508));

	if (t59 != 256LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x509 = INT16_MIN;
	static int16_t x510 = INT16_MIN;
	int64_t x512 = INT64_MAX;
	volatile int32_t t60 = 28527;

	t60 = ((x509*x510)<<(x511<=x512));

	if (t60 != 1073741824) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x514 = 0;
	static volatile int32_t x515 = INT32_MIN;
	volatile int64_t t61 = 24LL;

	t61 = ((x513*x514)<<(x515<=x516));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x517 = -3332825LL;
	int8_t x518 = INT8_MIN;
	static volatile int8_t x520 = -1;

	t62 = ((x517*x518)<<(x519<=x520));

	if (t62 != 853203200LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x521 = 35U;
	int64_t x522 = 23354LL;
	int8_t x523 = INT8_MIN;
	static int32_t x524 = 88437814;
	volatile int64_t t63 = 435596891LL;

	t63 = ((x521*x522)<<(x523<=x524));

	if (t63 != 1634780LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x525 = 116776837660856198LLU;
	uint32_t x526 = 536630451U;
	uint64_t x528 = 6035939911504LLU;
	uint64_t t64 = 17228641585495224LLU;

	t64 = ((x525*x526)<<(x527<=x528));

	if (t64 != 1836868087576143204LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x541 = 36U;
	int64_t x542 = 63128910457LL;
	static int32_t x543 = -1;
	int16_t x544 = 2;
	int64_t t65 = 3402LL;

	t65 = ((x541*x542)<<(x543<=x544));

	if (t65 != 4545281552904LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x545 = 13391549044254997LLU;
	uint32_t x546 = 81437U;
	static uint8_t x547 = 25U;

	t66 = ((x545*x546)<<(x547<=x548));

	if (t66 != 2209679168130645345LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x549 = UINT64_MAX;
	static int32_t x551 = INT32_MIN;
	uint64_t t67 = 5LLU;

	t67 = ((x549*x550)<<(x551<=x552));

	if (t67 != 24LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = -1;
	int16_t x558 = -1;
	int16_t x559 = 120;
	static int64_t x560 = -174LL;
	int32_t t68 = -20;

	t68 = ((x557*x558)<<(x559<=x560));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x561 = 6U;
	volatile uint32_t x562 = UINT32_MAX;
	volatile uint32_t x563 = 2U;
	int8_t x564 = INT8_MIN;
	volatile uint32_t t69 = 10U;

	t69 = ((x561*x562)<<(x563<=x564));

	if (t69 != 4294967284U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x566 = 711754803493663441LLU;
	uint16_t x567 = UINT16_MAX;
	volatile int8_t x568 = -1;
	volatile uint64_t t70 = 54740358LLU;

	t70 = ((x565*x566)<<(x567<=x568));

	if (t70 != 6405793231442970969LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x569 = 483U;
	uint16_t x570 = UINT16_MAX;
	uint32_t x571 = 1906463065U;
	uint64_t x572 = 1373969304531LLU;
	int32_t t71 = 3102928;

	t71 = ((x569*x570)<<(x571<=x572));

	if (t71 != 63306810) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x573 = 3118389258LLU;
	static uint32_t x574 = 3081812U;
	static int64_t x575 = INT64_MAX;
	volatile uint32_t x576 = 1U;
	uint64_t t72 = 8646868LLU;

	t72 = ((x573*x574)<<(x575<=x576));

	if (t72 != 9610289435975496LLU) { NG(); } else { ; }
	
}

void f73(void) {


	t73 = ((x589*x590)<<(x591<=x592));

	if (t73 != 13770) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x601 = 434070U;
	uint32_t x602 = 2016U;
	int32_t x603 = INT32_MIN;
	uint16_t x604 = UINT16_MAX;
	uint32_t t74 = 2226934U;

	t74 = ((x601*x602)<<(x603<=x604));

	if (t74 != 1750170240U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x605 = INT16_MIN;
	int32_t x607 = INT32_MIN;
	uint16_t x608 = 6198U;
	volatile uint32_t t75 = 10U;

	t75 = ((x605*x606)<<(x607<=x608));

	if (t75 != 65536U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x622 = 267164U;
	int8_t x623 = INT8_MIN;
	volatile uint64_t t76 = 1363LLU;

	t76 = ((x621*x622)<<(x623<=x624));

	if (t76 != 18446744073709017288LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x625 = INT16_MIN;
	static uint32_t x627 = 7U;
	static volatile uint32_t x628 = 67009U;

	t77 = ((x625*x626)<<(x627<=x628));

	if (t77 != 44892160) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x629 = 364;
	int32_t x630 = 3740;
	static int64_t x632 = INT64_MIN;
	int32_t t78 = 612133;

	t78 = ((x629*x630)<<(x631<=x632));

	if (t78 != 1361360) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x634 = 0U;
	int16_t x635 = 3715;

	t79 = ((x633*x634)<<(x635<=x636));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x645 = -1;
	int16_t x646 = -1;
	uint64_t x648 = UINT64_MAX;
	static volatile int32_t t80 = -411098;

	t80 = ((x645*x646)<<(x647<=x648));

	if (t80 != 2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x653 = -243702;
	uint64_t x654 = UINT64_MAX;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = UINT32_MAX;
	volatile uint64_t t81 = 1067568621025377033LLU;

	t81 = ((x653*x654)<<(x655<=x656));

	if (t81 != 487404LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x665 = 636555633962177LLU;
	static int16_t x666 = -10295;
	int8_t x667 = 7;
	volatile uint64_t t82 = 623LLU;

	t82 = ((x665*x666)<<(x667<=x668));

	if (t82 != 11893403822068939401LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x685 = INT16_MIN;
	int8_t x686 = INT8_MIN;
	int16_t x687 = -166;
	volatile int32_t t83 = -68390581;

	t83 = ((x685*x686)<<(x687<=x688));

	if (t83 != 8388608) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x693 = INT16_MIN;
	int32_t x694 = -1;
	uint64_t x695 = UINT64_MAX;
	volatile int64_t x696 = INT64_MIN;
	volatile int32_t t84 = 52611;

	t84 = ((x693*x694)<<(x695<=x696));

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x701 = 2006468LLU;
	volatile uint8_t x702 = 9U;
	uint16_t x704 = 28U;
	uint64_t t85 = 5921946160507LLU;

	t85 = ((x701*x702)<<(x703<=x704));

	if (t85 != 18058212LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x706 = -30609381761LL;
	int32_t x708 = INT32_MIN;
	volatile uint64_t t86 = 1LLU;

	t86 = ((x705*x706)<<(x707<=x708));

	if (t86 != 17846613780059027126LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x709 = UINT16_MAX;
	static int8_t x710 = 0;
	static int32_t x711 = INT32_MIN;
	int32_t x712 = INT32_MIN;
	int32_t t87 = -10626;

	t87 = ((x709*x710)<<(x711<=x712));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x718 = 0U;
	static uint32_t x719 = UINT32_MAX;
	int16_t x720 = INT16_MIN;
	static volatile int32_t t88 = -36;

	t88 = ((x717*x718)<<(x719<=x720));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x721 = INT64_MIN;
	volatile uint32_t x723 = 610119178U;
	int64_t x724 = INT64_MAX;

	t89 = ((x721*x722)<<(x723<=x724));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x725 = UINT64_MAX;
	uint64_t x726 = 5569832202475332LLU;
	static volatile int32_t x727 = 240946;
	static uint16_t x728 = 20906U;
	uint64_t t90 = 517108133465LLU;

	t90 = ((x725*x726)<<(x727<=x728));

	if (t90 != 18441174241507076284LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x729 = 2U;
	int8_t x730 = -1;
	int64_t x731 = INT64_MIN;
	int64_t x732 = 1LL;
	static uint32_t t91 = 33206U;

	t91 = ((x729*x730)<<(x731<=x732));

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x734 = -1LL;
	int32_t x735 = INT32_MIN;
	volatile int64_t t92 = 7013084LL;

	t92 = ((x733*x734)<<(x735<=x736));

	if (t92 != 256LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x745 = 749676U;
	int8_t x746 = -20;
	volatile int8_t x747 = -1;
	int16_t x748 = -1;
	uint32_t t93 = 120U;

	t93 = ((x745*x746)<<(x747<=x748));

	if (t93 != 4264980256U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x749 = INT64_MIN;
	static uint64_t x750 = 235440474597861304LLU;
	int32_t x751 = -1;
	uint32_t x752 = 2056894827U;

	t94 = ((x749*x750)<<(x751<=x752));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x757 = -1;
	uint64_t x758 = 36929LLU;
	uint32_t x759 = 0U;
	uint32_t x760 = 35624415U;

	t95 = ((x757*x758)<<(x759<=x760));

	if (t95 != 18446744073709477758LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x770 = UINT64_MAX;
	static uint64_t t96 = 111774554938LLU;

	t96 = ((x769*x770)<<(x771<=x772));

	if (t96 != 18446744073668890460LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x773 = -1LL;
	uint32_t x775 = UINT32_MAX;
	uint64_t t97 = 26648587032LLU;

	t97 = ((x773*x774)<<(x775<=x776));

	if (t97 != 18446715875979155539LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x785 = 1853LL;
	uint64_t x786 = 644737LLU;
	static volatile uint64_t x787 = UINT64_MAX;
	uint32_t x788 = 3644224U;
	static uint64_t t98 = 5069989013668670998LLU;

	t98 = ((x785*x786)<<(x787<=x788));

	if (t98 != 1194697661LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x796 = 318020616001LLU;
	uint64_t t99 = 246729413372LLU;

	t99 = ((x793*x794)<<(x795<=x796));

	if (t99 != 256LLU) { NG(); } else { ; }
	
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

