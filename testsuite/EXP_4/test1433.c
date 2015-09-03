#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
int64_t t1 = 2729436637456353520LL;
volatile uint16_t x15 = 2440U;
int32_t t2 = -268400;
static int64_t x22 = 3LL;
volatile int8_t x26 = 3;
int8_t x47 = INT8_MIN;
uint64_t x48 = UINT64_MAX;
volatile int32_t t6 = -182;
static int16_t x50 = 188;
uint64_t x52 = 5653673827LLU;
static int32_t x62 = 146376;
volatile uint64_t x63 = 1749LLU;
uint32_t x74 = UINT32_MAX;
static volatile uint64_t x78 = UINT64_MAX;
volatile uint16_t x83 = 20106U;
static volatile int32_t t11 = 198;
int8_t x87 = 2;
static int64_t t13 = 211976206331367053LL;
int64_t x97 = 16514662182439253LL;
int16_t x100 = INT16_MIN;
volatile int64_t t14 = -37LL;
uint16_t x107 = 16U;
int16_t x129 = INT16_MIN;
uint8_t x133 = UINT8_MAX;
uint16_t x134 = 1U;
volatile uint64_t x136 = 280814962375042287LLU;
uint8_t x146 = 7U;
uint32_t x154 = 846920U;
uint8_t x156 = 2U;
volatile uint32_t t20 = 101128456U;
volatile int8_t x178 = 15;
static uint32_t x179 = 16U;
int16_t x197 = INT16_MAX;
static volatile int8_t x204 = -1;
volatile int64_t t26 = 4020006469955871669LL;
volatile uint32_t t27 = 7102U;
int8_t x233 = INT8_MIN;
uint16_t x234 = UINT16_MAX;
int32_t x258 = 454;
static volatile uint64_t x263 = UINT64_MAX;
uint8_t x277 = 38U;
uint16_t x296 = 2U;
int32_t x308 = 3;
uint32_t t36 = 2U;
static volatile int16_t x320 = INT16_MIN;
int8_t x321 = -3;
uint32_t x322 = 69005021U;
static uint64_t x370 = 17158939311174113LLU;
uint32_t x371 = UINT32_MAX;
uint32_t t45 = 19U;
static volatile int16_t x387 = INT16_MAX;
int32_t x397 = INT32_MIN;
uint64_t x398 = UINT64_MAX;
uint8_t x418 = 105U;
uint32_t x434 = UINT32_MAX;
static uint64_t x435 = UINT64_MAX;
volatile uint32_t x441 = UINT32_MAX;
static int16_t x449 = INT16_MIN;
uint64_t x451 = 13LLU;
uint16_t x464 = UINT16_MAX;
static int16_t x465 = -1;
volatile int64_t x480 = 36154LL;
int8_t x483 = INT8_MIN;
uint8_t x505 = 111U;
static uint8_t x506 = UINT8_MAX;
uint64_t x507 = 1378177817LLU;
uint16_t x555 = 0U;
volatile int32_t x556 = INT32_MIN;
static int16_t x604 = INT16_MIN;
volatile int64_t t62 = 9402245305511LL;
int32_t x629 = 26664;
int32_t x643 = INT32_MAX;
static volatile int32_t x647 = INT32_MIN;
volatile int8_t x648 = INT8_MIN;
int16_t x658 = 3;
int8_t x678 = 3;
int64_t x703 = 18LL;
uint64_t x704 = 3973294002955311LLU;
int8_t x732 = 0;
int32_t x765 = INT32_MIN;
int16_t x768 = INT16_MAX;
static uint64_t x770 = UINT64_MAX;
volatile uint32_t x783 = 34641U;
volatile int32_t t77 = 4;
uint16_t x795 = 72U;
volatile int64_t x803 = INT64_MIN;
int16_t x807 = 7;
int32_t x828 = INT32_MIN;
int32_t t83 = 10342935;
static volatile int32_t x829 = -1;
uint64_t x838 = 2909114087LLU;
int32_t x839 = INT32_MAX;
volatile int64_t t87 = -25121078LL;
static volatile int16_t x857 = INT16_MIN;
static int64_t t91 = -619328547240LL;
int16_t x869 = INT16_MIN;
int16_t x870 = INT16_MAX;
volatile int32_t x871 = INT32_MIN;
uint8_t x895 = 3U;
int32_t x896 = -1;
int32_t x904 = INT32_MAX;
int64_t x910 = 8728171774521LL;
int32_t x913 = INT32_MAX;
static uint32_t t99 = 15951697U;


void f0(void) {
	static volatile int32_t x1 = -1;
	volatile uint8_t x2 = UINT8_MAX;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -485580756;

	t0 = (x1*(x2>>(x3<x4)));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = 10LL;
	static int16_t x10 = 1;
	int64_t x11 = -234766490LL;
	volatile uint8_t x12 = 33U;

	t1 = (x9*(x10>>(x11<x12)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	uint16_t x14 = 2673U;
	int16_t x16 = 7;

	t2 = (x13*(x14>>(x15<x16)));

	if (t2 != -342144) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	static int64_t x23 = 660877096387621349LL;
	static int8_t x24 = 47;
	volatile int64_t t3 = -105800694483LL;

	t3 = (x21*(x22>>(x23<x24)));

	if (t3 != -98304LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -334LL;
	uint32_t x27 = UINT32_MAX;
	uint16_t x28 = UINT16_MAX;
	int64_t t4 = 20657LL;

	t4 = (x25*(x26>>(x27<x28)));

	if (t4 != -1002LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x29 = 0U;
	uint16_t x30 = 10U;
	int16_t x31 = INT16_MAX;
	int8_t x32 = INT8_MAX;
	uint32_t t5 = 1U;

	t5 = (x29*(x30>>(x31<x32)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x45 = 0;
	volatile int32_t x46 = 438;

	t6 = (x45*(x46>>(x47<x48)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x49 = 1;
	int8_t x51 = 41;
	int32_t t7 = 18134;

	t7 = (x49*(x50>>(x51<x52)));

	if (t7 != 94) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x61 = 50LLU;
	int64_t x64 = -1LL;
	static volatile uint64_t t8 = 4084004375LLU;

	t8 = (x61*(x62>>(x63<x64)));

	if (t8 != 3659400LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x73 = -245123636;
	volatile int8_t x75 = INT8_MIN;
	volatile int64_t x76 = INT64_MAX;
	volatile uint32_t t9 = 15U;

	t9 = (x73*(x74>>(x75<x76)));

	if (t9 != 245123636U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x77 = 28;
	static volatile int32_t x79 = INT32_MAX;
	int8_t x80 = -1;
	static volatile uint64_t t10 = 2136897006LLU;

	t10 = (x77*(x78>>(x79<x80)));

	if (t10 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = -1;
	static uint8_t x82 = 20U;
	static int32_t x84 = INT32_MAX;

	t11 = (x81*(x82>>(x83<x84)));

	if (t11 != -10) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 1U;
	uint8_t x86 = 105U;
	int16_t x88 = INT16_MIN;
	volatile int32_t t12 = 1;

	t12 = (x85*(x86>>(x87<x88)));

	if (t12 != 105) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x93 = -11322081LL;
	int8_t x94 = 1;
	int64_t x95 = -110LL;
	uint64_t x96 = 203813646LLU;

	t13 = (x93*(x94>>(x95<x96)));

	if (t13 != -11322081LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x98 = 124U;
	uint16_t x99 = UINT16_MAX;

	t14 = (x97*(x98>>(x99<x100)));

	if (t14 != 2047818110622467372LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x105 = UINT8_MAX;
	volatile uint64_t x106 = 7383801LLU;
	static int32_t x108 = -81156739;
	volatile uint64_t t15 = 3841133703100LLU;

	t15 = (x105*(x106>>(x107<x108)));

	if (t15 != 1882869255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x117 = 5;
	uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 32628U;
	volatile int8_t x120 = INT8_MIN;
	volatile uint32_t t16 = 3753226U;

	t16 = (x117*(x118>>(x119<x120)));

	if (t16 != 4294967291U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 15632LLU;
	volatile uint64_t x132 = 906906857116736LLU;
	volatile int32_t t17 = -7963;

	t17 = (x129*(x130>>(x131<x132)));

	if (t17 != -1073709056) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x135 = 47U;
	int32_t t18 = -447;

	t18 = (x133*(x134>>(x135<x136)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int32_t x147 = INT32_MAX;
	int16_t x148 = 7252;
	static uint32_t t19 = 21428U;

	t19 = (x145*(x146>>(x147<x148)));

	if (t19 != 4294967289U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x153 = UINT16_MAX;
	volatile int64_t x155 = INT64_MAX;

	t20 = (x153*(x154>>(x155<x156)));

	if (t20 != 3963294648U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x177 = INT8_MIN;
	int32_t x180 = 745;
	int32_t t21 = -132814626;

	t21 = (x177*(x178>>(x179<x180)));

	if (t21 != -896) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x185 = 2356;
	volatile uint64_t x186 = UINT64_MAX;
	volatile int64_t x187 = INT64_MIN;
	int32_t x188 = INT32_MAX;
	static volatile uint64_t t22 = 2764005757602LLU;

	t22 = (x185*(x186>>(x187<x188)));

	if (t22 != 18446744073709549260LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x198 = 51U;
	int64_t x199 = -1LL;
	uint32_t x200 = 1474050U;
	volatile int32_t t23 = 226190789;

	t23 = (x197*(x198>>(x199<x200)));

	if (t23 != 819175) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x201 = 63858066LLU;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	volatile uint64_t t24 = 51LLU;

	t24 = (x201*(x202>>(x203<x204)));

	if (t24 != 4023058158LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x217 = INT8_MIN;
	int8_t x218 = 1;
	static int64_t x219 = INT64_MIN;
	int16_t x220 = 15338;
	volatile int32_t t25 = 19715883;

	t25 = (x217*(x218>>(x219<x220)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x225 = INT64_MIN;
	int64_t x226 = 1LL;
	uint8_t x227 = 14U;
	volatile int32_t x228 = INT32_MAX;

	t26 = (x225*(x226>>(x227<x228)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x229 = 1656U;
	static uint32_t x230 = 50541306U;
	int16_t x231 = INT16_MIN;
	static uint8_t x232 = 2U;

	t27 = (x229*(x230>>(x231<x232)));

	if (t27 != 3193495704U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x235 = INT64_MAX;
	uint32_t x236 = 1413U;
	volatile int32_t t28 = -2973;

	t28 = (x233*(x234>>(x235<x236)));

	if (t28 != -8388480) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x257 = -52818490177879LL;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = -1;
	int64_t t29 = 105LL;

	t29 = (x257*(x258>>(x259<x260)));

	if (t29 != -11989797270378533LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x261 = 1007996LLU;
	int8_t x262 = INT8_MAX;
	uint64_t x264 = 4204400973674LLU;
	volatile uint64_t t30 = 7996LLU;

	t30 = (x261*(x262>>(x263<x264)));

	if (t30 != 128015492LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x265 = 2821527709LL;
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = INT32_MIN;
	static volatile uint32_t x268 = UINT32_MAX;
	int64_t t31 = 29478560LL;

	t31 = (x265*(x266>>(x267<x268)));

	if (t31 != 92452998440803LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x269 = 3896LLU;
	volatile uint16_t x270 = 3U;
	static int16_t x271 = INT16_MIN;
	int64_t x272 = 2LL;
	volatile uint64_t t32 = 8209940172510820LLU;

	t32 = (x269*(x270>>(x271<x272)));

	if (t32 != 3896LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x278 = UINT16_MAX;
	static uint32_t x279 = UINT32_MAX;
	static uint16_t x280 = 573U;
	int32_t t33 = -31;

	t33 = (x277*(x278>>(x279<x280)));

	if (t33 != 2490330) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x293 = -31828255447047LL;
	int16_t x294 = INT16_MAX;
	int16_t x295 = -2;
	volatile int64_t t34 = 7173LL;

	t34 = (x293*(x294>>(x295<x296)));

	if (t34 != -521442308988971001LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x301 = -1LL;
	static uint32_t x302 = 41U;
	volatile uint64_t x303 = UINT64_MAX;
	static uint64_t x304 = UINT64_MAX;
	static volatile int64_t t35 = -1LL;

	t35 = (x301*(x302>>(x303<x304)));

	if (t35 != -41LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile uint16_t x306 = 4U;
	int32_t x307 = INT32_MIN;

	t36 = (x305*(x306>>(x307<x308)));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x313 = 41;
	volatile uint64_t x314 = 145514773015354LLU;
	int64_t x315 = 1LL;
	static uint32_t x316 = UINT32_MAX;
	volatile uint64_t t37 = 22603159510029LLU;

	t37 = (x313*(x314>>(x315<x316)));

	if (t37 != 2983052846814757LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x317 = UINT8_MAX;
	static uint64_t x318 = 102268575847LLU;
	int16_t x319 = 376;
	uint64_t t38 = 404LLU;

	t38 = (x317*(x318>>(x319<x320)));

	if (t38 != 26078486840985LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x323 = -15579630682366426LL;
	static uint8_t x324 = 1U;
	uint32_t t39 = 9U;

	t39 = (x321*(x322>>(x323<x324)));

	if (t39 != 4191459766U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x329 = 0U;
	uint16_t x330 = 3804U;
	uint32_t x331 = UINT32_MAX;
	uint16_t x332 = 82U;
	volatile int32_t t40 = 2;

	t40 = (x329*(x330>>(x331<x332)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x337 = 154U;
	volatile uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 0U;
	uint8_t x340 = 2U;
	uint64_t t41 = 7191LLU;

	t41 = (x337*(x338>>(x339<x340)));

	if (t41 != 18446744073709551462LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x341 = -17;
	static volatile int16_t x342 = INT16_MAX;
	int8_t x343 = INT8_MIN;
	int16_t x344 = -8;
	int32_t t42 = 42;

	t42 = (x341*(x342>>(x343<x344)));

	if (t42 != -278511) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x365 = -1;
	uint32_t x366 = 716508U;
	volatile int16_t x367 = -1;
	int16_t x368 = INT16_MIN;
	volatile uint32_t t43 = 39353U;

	t43 = (x365*(x366>>(x367<x368)));

	if (t43 != 4294250788U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x369 = 51754731496LLU;
	uint64_t x372 = 14883LLU;
	uint64_t t44 = 20LLU;

	t44 = (x369*(x370>>(x371<x372)));

	if (t44 != 5798245596876692200LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x381 = UINT32_MAX;
	uint16_t x382 = UINT16_MAX;
	int64_t x383 = 2773414463040433LL;
	int8_t x384 = -1;

	t45 = (x381*(x382>>(x383<x384)));

	if (t45 != 4294901761U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x385 = -1LL;
	static uint16_t x386 = UINT16_MAX;
	int32_t x388 = INT32_MAX;
	int64_t t46 = 7LL;

	t46 = (x385*(x386>>(x387<x388)));

	if (t46 != -32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x399 = -1;
	int8_t x400 = INT8_MAX;
	static volatile uint64_t t47 = 104553LLU;

	t47 = (x397*(x398>>(x399<x400)));

	if (t47 != 2147483648LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x405 = 4012U;
	uint8_t x406 = 2U;
	int32_t x407 = -11139;
	volatile int8_t x408 = INT8_MIN;
	volatile int32_t t48 = 105;

	t48 = (x405*(x406>>(x407<x408)));

	if (t48 != 4012) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x417 = -1LL;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MAX;
	volatile int64_t t49 = -2787496519161LL;

	t49 = (x417*(x418>>(x419<x420)));

	if (t49 != -52LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x433 = UINT64_MAX;
	uint32_t x436 = 7108U;
	uint64_t t50 = 6928655769902922LLU;

	t50 = (x433*(x434>>(x435<x436)));

	if (t50 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x437 = -1;
	volatile int64_t x438 = 0LL;
	static int8_t x439 = INT8_MIN;
	static volatile uint64_t x440 = 29358LLU;
	static int64_t t51 = 772154669394LL;

	t51 = (x437*(x438>>(x439<x440)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x442 = 76LLU;
	volatile uint8_t x443 = 3U;
	volatile int16_t x444 = 304;
	volatile uint64_t t52 = 362024933LLU;

	t52 = (x441*(x442>>(x443<x444)));

	if (t52 != 163208757210LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x450 = UINT16_MAX;
	int8_t x452 = -1;
	static int32_t t53 = -7;

	t53 = (x449*(x450>>(x451<x452)));

	if (t53 != -1073709056) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x461 = 36504042729596LLU;
	static uint16_t x462 = 50U;
	uint32_t x463 = 1370448816U;
	static volatile uint64_t t54 = 446LLU;

	t54 = (x461*(x462>>(x463<x464)));

	if (t54 != 1825202136479800LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x466 = 11117686U;
	int8_t x467 = 2;
	uint16_t x468 = UINT16_MAX;
	volatile uint32_t t55 = 403U;

	t55 = (x465*(x466>>(x467<x468)));

	if (t55 != 4289408453U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x477 = INT64_MIN;
	uint64_t x478 = 1024492343943471LLU;
	static int16_t x479 = INT16_MAX;
	uint64_t t56 = 453LLU;

	t56 = (x477*(x478>>(x479<x480)));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x481 = -1;
	uint8_t x482 = UINT8_MAX;
	uint64_t x484 = 18LLU;
	volatile int32_t t57 = 474421036;

	t57 = (x481*(x482>>(x483<x484)));

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x489 = 10U;
	static int64_t x490 = 93557632LL;
	static uint8_t x491 = 10U;
	uint64_t x492 = UINT64_MAX;
	volatile int64_t t58 = -396682126438048775LL;

	t58 = (x489*(x490>>(x491<x492)));

	if (t58 != 467788160LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t59 = -34980524;

	t59 = (x505*(x506>>(x507<x508)));

	if (t59 != 28305) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x553 = -13;
	uint32_t x554 = 83988131U;
	uint32_t t60 = 88U;

	t60 = (x553*(x554>>(x555<x556)));

	if (t60 != 3203121593U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x557 = 1951;
	uint8_t x558 = 20U;
	int16_t x559 = INT16_MIN;
	uint32_t x560 = 4503U;
	volatile int32_t t61 = -733907964;

	t61 = (x557*(x558>>(x559<x560)));

	if (t61 != 39020) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x601 = 0LL;
	uint32_t x602 = 167603105U;
	uint64_t x603 = UINT64_MAX;

	t62 = (x601*(x602>>(x603<x604)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x609 = 1;
	volatile uint8_t x610 = 45U;
	int8_t x611 = INT8_MIN;
	uint32_t x612 = 207505U;
	int32_t t63 = 37;

	t63 = (x609*(x610>>(x611<x612)));

	if (t63 != 45) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x625 = -1;
	volatile int8_t x626 = INT8_MAX;
	int8_t x627 = 35;
	static volatile int64_t x628 = -9490051440679LL;
	int32_t t64 = -19;

	t64 = (x625*(x626>>(x627<x628)));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x630 = 15;
	volatile int64_t x631 = -313LL;
	int32_t x632 = -497;
	int32_t t65 = -57267206;

	t65 = (x629*(x630>>(x631<x632)));

	if (t65 != 399960) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x641 = INT16_MAX;
	static uint8_t x642 = 14U;
	uint8_t x644 = 1U;
	volatile int32_t t66 = -52388;

	t66 = (x641*(x642>>(x643<x644)));

	if (t66 != 458738) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x645 = INT16_MAX;
	uint64_t x646 = UINT64_MAX;
	static volatile uint64_t t67 = 955134161323LLU;

	t67 = (x645*(x646>>(x647<x648)));

	if (t67 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x657 = 17;
	static uint16_t x659 = UINT16_MAX;
	int8_t x660 = INT8_MIN;
	volatile int32_t t68 = -2747113;

	t68 = (x657*(x658>>(x659<x660)));

	if (t68 != 51) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x677 = 4876U;
	volatile int16_t x679 = INT16_MAX;
	int16_t x680 = -894;
	volatile int32_t t69 = 35163787;

	t69 = (x677*(x678>>(x679<x680)));

	if (t69 != 14628) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x681 = 80234023938481LLU;
	uint64_t x682 = 3720576711758985950LLU;
	static int16_t x683 = -1;
	int64_t x684 = INT64_MIN;
	volatile uint64_t t70 = 7048709476541573627LLU;

	t70 = (x681*(x682>>(x683<x684)));

	if (t70 != 8658803891023692158LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x685 = -1LL;
	volatile int32_t x686 = 1050;
	int64_t x687 = -1LL;
	uint16_t x688 = 84U;
	volatile int64_t t71 = 793748440433814586LL;

	t71 = (x685*(x686>>(x687<x688)));

	if (t71 != -525LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x701 = -1;
	uint32_t x702 = 13166U;
	uint32_t t72 = 31U;

	t72 = (x701*(x702>>(x703<x704)));

	if (t72 != 4294960713U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x729 = -1;
	uint16_t x730 = 384U;
	volatile int16_t x731 = INT16_MAX;
	volatile int32_t t73 = 8;

	t73 = (x729*(x730>>(x731<x732)));

	if (t73 != -384) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x766 = 309LLU;
	uint64_t x767 = 669308LLU;
	uint64_t t74 = 30LLU;

	t74 = (x765*(x766>>(x767<x768)));

	if (t74 != 18446743410137104384LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x769 = INT8_MIN;
	static int32_t x771 = -1;
	static uint8_t x772 = 6U;
	volatile uint64_t t75 = 0LLU;

	t75 = (x769*(x770>>(x771<x772)));

	if (t75 != 128LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x781 = INT64_MIN;
	volatile uint16_t x782 = 1U;
	static uint16_t x784 = 30595U;
	int64_t t76 = INT64_MIN;

	t76 = (x781*(x782>>(x783<x784)));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x785 = 1827;
	int8_t x786 = INT8_MAX;
	int8_t x787 = INT8_MAX;
	int64_t x788 = -1LL;

	t77 = (x785*(x786>>(x787<x788)));

	if (t77 != 232029) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x793 = INT8_MIN;
	uint32_t x794 = 73116U;
	int16_t x796 = 4530;
	uint32_t t78 = 3069U;

	t78 = (x793*(x794>>(x795<x796)));

	if (t78 != 4290287872U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x797 = INT16_MIN;
	volatile uint8_t x798 = UINT8_MAX;
	int64_t x799 = INT64_MAX;
	volatile int64_t x800 = -1LL;
	static int32_t t79 = -871;

	t79 = (x797*(x798>>(x799<x800)));

	if (t79 != -8355840) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x801 = INT32_MIN;
	uint64_t x802 = UINT64_MAX;
	volatile int8_t x804 = -3;
	volatile uint64_t t80 = 166LLU;

	t80 = (x801*(x802>>(x803<x804)));

	if (t80 != 2147483648LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x805 = -1;
	int16_t x806 = INT16_MAX;
	int16_t x808 = 4;
	volatile int32_t t81 = -21400840;

	t81 = (x805*(x806>>(x807<x808)));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x809 = 31U;
	static volatile int8_t x810 = INT8_MAX;
	static int16_t x811 = INT16_MIN;
	int8_t x812 = INT8_MIN;
	static int32_t t82 = -5247265;

	t82 = (x809*(x810>>(x811<x812)));

	if (t82 != 1953) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x825 = INT16_MIN;
	volatile int32_t x826 = 1;
	int8_t x827 = 1;

	t83 = (x825*(x826>>(x827<x828)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x830 = INT64_MAX;
	int64_t x831 = -26145860LL;
	int16_t x832 = -1;
	static volatile int64_t t84 = 677LL;

	t84 = (x829*(x830>>(x831<x832)));

	if (t84 != -4611686018427387903LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x833 = UINT64_MAX;
	uint16_t x834 = 13766U;
	int64_t x835 = -1LL;
	static int32_t x836 = INT32_MIN;
	static uint64_t t85 = 1797804850927823LLU;

	t85 = (x833*(x834>>(x835<x836)));

	if (t85 != 18446744073709537850LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x837 = -33028794674LL;
	int32_t x840 = INT32_MIN;
	uint64_t t86 = 1LLU;

	t86 = (x837*(x838>>(x839<x840)));

	if (t86 != 14595932579493337058LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x841 = -1LL;
	uint8_t x842 = 115U;
	int32_t x843 = INT32_MIN;
	volatile int32_t x844 = INT32_MAX;

	t87 = (x841*(x842>>(x843<x844)));

	if (t87 != -57LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x849 = INT64_MIN;
	uint64_t x850 = 20710709LLU;
	uint8_t x851 = 55U;
	int32_t x852 = INT32_MAX;
	uint64_t t88 = 52826LLU;

	t88 = (x849*(x850>>(x851<x852)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x853 = 10U;
	static int32_t x854 = 11684;
	uint16_t x855 = 113U;
	volatile int64_t x856 = -1LL;
	volatile int32_t t89 = 25006439;

	t89 = (x853*(x854>>(x855<x856)));

	if (t89 != 116840) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x858 = 759237U;
	volatile int64_t x859 = -1LL;
	static uint16_t x860 = UINT16_MAX;
	uint32_t t90 = 168515218U;

	t90 = (x857*(x858>>(x859<x860)));

	if (t90 != 445579264U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x861 = 439589U;
	int64_t x862 = 1LL;
	int16_t x863 = -6;
	static int8_t x864 = -3;

	t91 = (x861*(x862>>(x863<x864)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x872 = -3131LL;
	int32_t t92 = -18;

	t92 = (x869*(x870>>(x871<x872)));

	if (t92 != -536838144) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x873 = 3U;
	uint32_t x874 = UINT32_MAX;
	int8_t x875 = INT8_MAX;
	volatile uint8_t x876 = 4U;
	volatile uint32_t t93 = 1U;

	t93 = (x873*(x874>>(x875<x876)));

	if (t93 != 4294967293U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x877 = -1;
	int32_t x878 = 603754401;
	volatile int8_t x879 = 1;
	uint64_t x880 = UINT64_MAX;
	int32_t t94 = 1463;

	t94 = (x877*(x878>>(x879<x880)));

	if (t94 != -301877200) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x881 = INT16_MIN;
	volatile int8_t x882 = 0;
	uint64_t x883 = 234038562615860LLU;
	int32_t x884 = INT32_MIN;
	int32_t t95 = -180400893;

	t95 = (x881*(x882>>(x883<x884)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x893 = INT8_MAX;
	static uint32_t x894 = 12693281U;
	volatile uint32_t t96 = 1292U;

	t96 = (x893*(x894>>(x895<x896)));

	if (t96 != 1612046687U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x901 = -1;
	uint8_t x902 = UINT8_MAX;
	static int32_t x903 = INT32_MIN;
	int32_t t97 = 120441658;

	t97 = (x901*(x902>>(x903<x904)));

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x909 = 3383097733073878858LLU;
	volatile int32_t x911 = -1;
	uint64_t x912 = 98516LLU;
	static uint64_t t98 = 1091396684907LLU;

	t98 = (x909*(x910>>(x911<x912)));

	if (t98 != 931475446241995642LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x914 = 32560134U;
	uint32_t x915 = 193U;
	volatile int8_t x916 = INT8_MAX;

	t99 = (x913*(x914>>(x915<x916)));

	if (t99 != 4262407162U) { NG(); } else { ; }
	
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

