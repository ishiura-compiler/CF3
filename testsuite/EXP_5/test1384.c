#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x28 = UINT32_MAX;
volatile uint32_t x49 = 43528077U;
int8_t x59 = -1;
uint8_t x64 = 1U;
int64_t x69 = INT64_MAX;
int32_t x84 = INT32_MAX;
int16_t x98 = -1;
int64_t x105 = INT64_MAX;
int8_t x111 = INT8_MAX;
int32_t t10 = 6723;
int16_t x119 = INT16_MIN;
volatile int32_t t11 = -471999180;
int32_t x122 = INT32_MAX;
static int32_t x123 = INT32_MIN;
static uint64_t t12 = UINT64_MAX;
int32_t x127 = -1;
uint32_t x215 = 0U;
uint32_t x218 = UINT32_MAX;
volatile uint16_t x219 = 0U;
uint64_t t16 = 1340866085110530LLU;
uint16_t x263 = 13U;
volatile int64_t x273 = 1384339261719LL;
uint64_t x276 = UINT64_MAX;
int8_t x294 = INT8_MIN;
volatile uint32_t x301 = 5506U;
volatile uint64_t x302 = UINT64_MAX;
static uint8_t x303 = 3U;
static uint32_t x310 = UINT32_MAX;
uint16_t x313 = UINT16_MAX;
int32_t x316 = INT32_MAX;
int16_t x364 = INT16_MIN;
static uint16_t x380 = 11U;
int32_t x404 = INT32_MAX;
static int32_t t32 = -15102;
int8_t x427 = INT8_MAX;
int16_t x437 = 1;
int64_t t35 = 5287516520555LL;
volatile int32_t x469 = INT32_MAX;
int64_t x503 = -65927241224562212LL;
int32_t x513 = 9380636;
static int8_t x518 = -1;
volatile int64_t x522 = INT64_MAX;
int16_t x524 = -21;
int8_t x539 = 11;
uint32_t x542 = UINT32_MAX;
int8_t x544 = INT8_MAX;
int32_t t44 = -25699174;
uint16_t x561 = UINT16_MAX;
int32_t t45 = -1855139;
uint32_t x632 = 45131793U;
static volatile uint32_t x635 = 5990637U;
int64_t x636 = INT64_MIN;
uint32_t x649 = 78261781U;
uint16_t x650 = 28025U;
volatile uint32_t t53 = 138733U;
static int32_t x659 = -1;
static int8_t x678 = -1;
static volatile int32_t x704 = INT32_MAX;
int16_t x723 = INT16_MIN;
volatile int32_t x727 = INT32_MIN;
uint16_t x736 = 1U;
int16_t x746 = -6626;
static int32_t x747 = INT32_MIN;
uint8_t x792 = 20U;
volatile int64_t x800 = INT64_MIN;
volatile uint64_t t67 = UINT64_MAX;
int64_t x836 = INT64_MIN;
volatile int32_t t68 = -1;
static int8_t x849 = INT8_MAX;
volatile int64_t x852 = INT64_MAX;
int8_t x894 = INT8_MIN;
static uint32_t x895 = 13305U;
volatile uint8_t x896 = 2U;
int64_t x957 = 153678004168LL;
int64_t x983 = 868006627430LL;
volatile uint32_t x997 = 0U;
uint32_t t79 = 768U;
int64_t x1043 = -1LL;
uint8_t x1065 = 33U;
uint64_t x1078 = 3938812821LLU;
int8_t x1110 = 41;
uint8_t x1112 = 3U;
uint32_t x1122 = 250258964U;
uint32_t x1129 = 41909891U;
int64_t x1130 = -1LL;
volatile uint64_t x1133 = 256474739061641819LLU;
static int64_t t89 = 26493037004LL;
int8_t x1150 = 31;
uint8_t x1161 = UINT8_MAX;
int8_t x1162 = 0;
int64_t x1169 = 125063LL;
int64_t x1175 = INT64_MIN;
uint64_t x1181 = UINT64_MAX;
uint16_t x1193 = 3364U;
static volatile uint32_t x1194 = UINT32_MAX;
int32_t x1212 = INT32_MAX;
uint8_t x1226 = 7U;
uint64_t t99 = 2729LLU;


void f0(void) {
	uint8_t x21 = 0U;
	volatile int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	static int16_t x24 = 6489;
	static volatile int32_t t0 = -44332090;

	t0 = (x21<<((x22<x23)*x24));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x25 = 28360661LLU;
	uint8_t x26 = 61U;
	int8_t x27 = INT8_MIN;
	uint64_t t1 = 11527LLU;

	t1 = (x25<<((x26<x27)*x28));

	if (t1 != 28360661LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x50 = 25;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	volatile uint32_t t2 = 1463000378U;

	t2 = (x49<<((x50<x51)*x52));

	if (t2 != 43528077U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x57 = 58U;
	int16_t x58 = -1;
	uint8_t x60 = 0U;
	int32_t t3 = 51;

	t3 = (x57<<((x58<x59)*x60));

	if (t3 != 58) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x61 = 49U;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MIN;
	volatile int32_t t4 = -1454;

	t4 = (x61<<((x62<x63)*x64));

	if (t4 != 49) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x70 = -1LL;
	int16_t x71 = INT16_MIN;
	static volatile int16_t x72 = INT16_MIN;
	int64_t t5 = INT64_MAX;

	t5 = (x69<<((x70<x71)*x72));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x73 = 42U;
	int32_t x74 = INT32_MAX;
	uint8_t x75 = UINT8_MAX;
	volatile int16_t x76 = -1;
	volatile int32_t t6 = 28941809;

	t6 = (x73<<((x74<x75)*x76));

	if (t6 != 42) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x81 = 5364104700LL;
	static uint32_t x82 = UINT32_MAX;
	static uint8_t x83 = 8U;
	volatile int64_t t7 = -292061866793LL;

	t7 = (x81<<((x82<x83)*x84));

	if (t7 != 5364104700LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x97 = 2937019162070LLU;
	int16_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	uint64_t t8 = 6LLU;

	t8 = (x97<<((x98<x99)*x100));

	if (t8 != 2937019162070LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x106 = 734U;
	int32_t x107 = -1;
	uint32_t x108 = 4032477U;
	int64_t t9 = INT64_MAX;

	t9 = (x105<<((x106<x107)*x108));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x109 = INT16_MAX;
	int16_t x110 = INT16_MAX;
	volatile uint64_t x112 = 37474LLU;

	t10 = (x109<<((x110<x111)*x112));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x117 = UINT16_MAX;
	static int8_t x118 = INT8_MIN;
	uint64_t x120 = 1043573926969928LLU;

	t11 = (x117<<((x118<x119)*x120));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x121 = UINT64_MAX;
	int16_t x124 = -4091;

	t12 = (x121<<((x122<x123)*x124));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x125 = 12159103626267LLU;
	static int32_t x126 = -26;
	uint32_t x128 = 0U;
	volatile uint64_t t13 = 156119340LLU;

	t13 = (x125<<((x126<x127)*x128));

	if (t13 != 12159103626267LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x169 = UINT32_MAX;
	static volatile int16_t x170 = INT16_MAX;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MIN;
	uint32_t t14 = UINT32_MAX;

	t14 = (x169<<((x170<x171)*x172));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x213 = 0U;
	static int32_t x214 = -782;
	volatile int8_t x216 = INT8_MIN;
	static int32_t t15 = -3366412;

	t15 = (x213<<((x214<x215)*x216));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x217 = 28075LLU;
	int32_t x220 = -54519;

	t16 = (x217<<((x218<x219)*x220));

	if (t16 != 28075LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x221 = 2U;
	int16_t x222 = -1;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -1;
	volatile int32_t t17 = 21;

	t17 = (x221<<((x222<x223)*x224));

	if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x249 = 0U;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 15077231LLU;
	int32_t x252 = -1;
	volatile int32_t t18 = 102;

	t18 = (x249<<((x250<x251)*x252));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x261 = 650899U;
	int64_t x262 = -1LL;
	static uint8_t x264 = 1U;
	static uint32_t t19 = 12U;

	t19 = (x261<<((x262<x263)*x264));

	if (t19 != 1301798U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x269 = 11325U;
	volatile int64_t x270 = 9948945870LL;
	int64_t x271 = -1LL;
	int32_t x272 = INT32_MIN;
	int32_t t20 = 615;

	t20 = (x269<<((x270<x271)*x272));

	if (t20 != 11325) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x274 = UINT8_MAX;
	uint8_t x275 = 12U;
	int64_t t21 = -4069321829234803LL;

	t21 = (x273<<((x274<x275)*x276));

	if (t21 != 1384339261719LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x289 = 25491593U;
	int32_t x290 = INT32_MAX;
	int8_t x291 = INT8_MAX;
	uint64_t x292 = 3509221976297067LLU;
	uint32_t t22 = 5098039U;

	t22 = (x289<<((x290<x291)*x292));

	if (t22 != 25491593U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x293 = 44U;
	volatile int64_t x295 = -995431LL;
	static volatile int64_t x296 = INT64_MIN;
	int32_t t23 = -48;

	t23 = (x293<<((x294<x295)*x296));

	if (t23 != 44) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x304 = INT32_MIN;
	volatile uint32_t t24 = 28418145U;

	t24 = (x301<<((x302<x303)*x304));

	if (t24 != 5506U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x309 = INT64_MAX;
	static uint64_t x311 = 405430LLU;
	static volatile int32_t x312 = INT32_MIN;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x309<<((x310<x311)*x312));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x314 = 479654621876LLU;
	volatile int16_t x315 = INT16_MAX;
	int32_t t26 = 0;

	t26 = (x313<<((x314<x315)*x316));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x361 = 12;
	int64_t x362 = 7286173072615909LL;
	int16_t x363 = 7070;
	volatile int32_t t27 = -19680052;

	t27 = (x361<<((x362<x363)*x364));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x369 = 1U;
	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	int32_t x372 = -38236;
	static volatile int32_t t28 = -21878493;

	t28 = (x369<<((x370<x371)*x372));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x377 = INT8_MAX;
	static uint64_t x378 = 162685LLU;
	static uint16_t x379 = 180U;
	volatile int32_t t29 = 146901;

	t29 = (x377<<((x378<x379)*x380));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x385 = 1707236564U;
	int64_t x386 = INT64_MIN;
	volatile uint64_t x387 = 1LLU;
	int64_t x388 = -13708576267LL;
	uint32_t t30 = 467U;

	t30 = (x385<<((x386<x387)*x388));

	if (t30 != 1707236564U) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x401 = INT16_MAX;
	volatile uint64_t x402 = 2146072077703940LLU;
	uint16_t x403 = 39U;
	int32_t t31 = 1995;

	t31 = (x401<<((x402<x403)*x404));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x409 = 34305;
	int32_t x410 = -1;
	uint64_t x411 = 935LLU;
	int64_t x412 = INT64_MIN;

	t32 = (x409<<((x410<x411)*x412));

	if (t32 != 34305) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x425 = 19085490365618947LL;
	volatile uint16_t x426 = 318U;
	uint32_t x428 = 2U;
	int64_t t33 = 84634767651LL;

	t33 = (x425<<((x426<x427)*x428));

	if (t33 != 19085490365618947LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x438 = INT16_MAX;
	int32_t x439 = INT32_MIN;
	int64_t x440 = INT64_MIN;
	int32_t t34 = 617;

	t34 = (x437<<((x438<x439)*x440));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x445 = 1697122LL;
	int32_t x446 = INT32_MIN;
	uint32_t x447 = UINT32_MAX;
	static int8_t x448 = 1;

	t35 = (x445<<((x446<x447)*x448));

	if (t35 != 3394244LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x470 = -2989670338649823577LL;
	int64_t x471 = INT64_MIN;
	int32_t x472 = INT32_MAX;
	int32_t t36 = INT32_MAX;

	t36 = (x469<<((x470<x471)*x472));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x501 = 86U;
	int32_t x502 = 704903;
	int16_t x504 = -1;
	volatile int32_t t37 = 95940955;

	t37 = (x501<<((x502<x503)*x504));

	if (t37 != 86) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x514 = INT64_MAX;
	int8_t x515 = -1;
	static uint32_t x516 = UINT32_MAX;
	volatile int32_t t38 = 137;

	t38 = (x513<<((x514<x515)*x516));

	if (t38 != 9380636) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x517 = UINT16_MAX;
	uint64_t x519 = 8066520311807414LLU;
	int16_t x520 = 10497;
	static int32_t t39 = -9;

	t39 = (x517<<((x518<x519)*x520));

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x521 = INT8_MAX;
	uint8_t x523 = UINT8_MAX;
	int32_t t40 = 16489380;

	t40 = (x521<<((x522<x523)*x524));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x529 = 27347U;
	volatile int64_t x530 = 95621LL;
	static uint32_t x531 = 736U;
	static volatile int16_t x532 = INT16_MIN;
	volatile uint32_t t41 = 269582159U;

	t41 = (x529<<((x530<x531)*x532));

	if (t41 != 27347U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x537 = UINT8_MAX;
	volatile int32_t x538 = INT32_MAX;
	int32_t x540 = -61;
	static int32_t t42 = 30300;

	t42 = (x537<<((x538<x539)*x540));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x541 = UINT32_MAX;
	volatile int16_t x543 = INT16_MIN;
	uint32_t t43 = UINT32_MAX;

	t43 = (x541<<((x542<x543)*x544));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x549 = INT16_MAX;
	static uint8_t x550 = 33U;
	volatile uint8_t x551 = 0U;
	static int8_t x552 = INT8_MIN;

	t44 = (x549<<((x550<x551)*x552));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x562 = UINT64_MAX;
	static uint16_t x563 = UINT16_MAX;
	int16_t x564 = INT16_MAX;

	t45 = (x561<<((x562<x563)*x564));

	if (t45 != 65535) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x581 = UINT16_MAX;
	static int8_t x582 = -1;
	static int8_t x583 = INT8_MAX;
	int64_t x584 = 0LL;
	volatile int32_t t46 = 21;

	t46 = (x581<<((x582<x583)*x584));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x589 = 1025U;
	static int8_t x590 = -1;
	int32_t x591 = -1082970;
	uint32_t x592 = UINT32_MAX;
	static volatile uint32_t t47 = 7U;

	t47 = (x589<<((x590<x591)*x592));

	if (t47 != 1025U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x617 = 3U;
	volatile uint64_t x618 = UINT64_MAX;
	volatile uint16_t x619 = 22U;
	static volatile uint8_t x620 = 6U;
	static int32_t t48 = -1;

	t48 = (x617<<((x618<x619)*x620));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x629 = UINT8_MAX;
	int8_t x630 = -1;
	volatile int32_t x631 = INT32_MIN;
	static int32_t t49 = -1849531;

	t49 = (x629<<((x630<x631)*x632));

	if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x633 = INT8_MAX;
	uint32_t x634 = 82928337U;
	int32_t t50 = -660713;

	t50 = (x633<<((x634<x635)*x636));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x641 = INT16_MAX;
	int8_t x642 = INT8_MAX;
	int32_t x643 = -62;
	uint8_t x644 = 82U;
	volatile int32_t t51 = 8526;

	t51 = (x641<<((x642<x643)*x644));

	if (t51 != 32767) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x651 = -11;
	uint16_t x652 = 123U;
	volatile uint32_t t52 = 467789U;

	t52 = (x649<<((x650<x651)*x652));

	if (t52 != 78261781U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x653 = 6931U;
	uint32_t x654 = 509U;
	int8_t x655 = 3;
	volatile uint16_t x656 = UINT16_MAX;

	t53 = (x653<<((x654<x655)*x656));

	if (t53 != 6931U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x657 = 2323213U;
	int64_t x658 = INT64_MAX;
	volatile int8_t x660 = -1;
	static uint32_t t54 = 101354U;

	t54 = (x657<<((x658<x659)*x660));

	if (t54 != 2323213U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x661 = 394;
	uint8_t x662 = 36U;
	int8_t x663 = INT8_MIN;
	static int8_t x664 = 5;
	volatile int32_t t55 = -7312399;

	t55 = (x661<<((x662<x663)*x664));

	if (t55 != 394) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x669 = 666926435U;
	volatile int32_t x670 = INT32_MIN;
	static int64_t x671 = INT64_MIN;
	uint32_t x672 = 9877926U;
	uint32_t t56 = 94398990U;

	t56 = (x669<<((x670<x671)*x672));

	if (t56 != 666926435U) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x677 = INT64_MAX;
	int16_t x679 = -1;
	uint8_t x680 = 6U;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x677<<((x678<x679)*x680));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x701 = UINT16_MAX;
	int16_t x702 = INT16_MIN;
	int64_t x703 = INT64_MIN;
	static volatile int32_t t58 = 712334;

	t58 = (x701<<((x702<x703)*x704));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x721 = INT64_MAX;
	int32_t x722 = 1643033;
	uint16_t x724 = 1626U;
	int64_t t59 = INT64_MAX;

	t59 = (x721<<((x722<x723)*x724));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x725 = 0LL;
	int16_t x726 = INT16_MAX;
	int32_t x728 = -32707096;
	static volatile int64_t t60 = 3253464011428488LL;

	t60 = (x725<<((x726<x727)*x728));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x733 = 20490215LLU;
	static volatile int64_t x734 = INT64_MAX;
	int32_t x735 = -1;
	uint64_t t61 = 526956328984LLU;

	t61 = (x733<<((x734<x735)*x736));

	if (t61 != 20490215LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x741 = 7592U;
	uint8_t x742 = 6U;
	uint8_t x743 = 1U;
	int8_t x744 = INT8_MIN;
	int32_t t62 = 125;

	t62 = (x741<<((x742<x743)*x744));

	if (t62 != 7592) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x745 = 1U;
	int16_t x748 = -1;
	volatile uint32_t t63 = 110U;

	t63 = (x745<<((x746<x747)*x748));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x757 = INT32_MAX;
	uint64_t x758 = UINT64_MAX;
	static volatile int64_t x759 = INT64_MIN;
	static int16_t x760 = INT16_MIN;
	static volatile int32_t t64 = INT32_MAX;

	t64 = (x757<<((x758<x759)*x760));

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x785 = 43109340U;
	int8_t x786 = -1;
	int64_t x787 = -2035358080984964LL;
	uint16_t x788 = 2U;
	volatile uint32_t t65 = 82U;

	t65 = (x785<<((x786<x787)*x788));

	if (t65 != 43109340U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x789 = 1670879U;
	int16_t x790 = INT16_MIN;
	static int64_t x791 = INT64_MAX;
	volatile uint32_t t66 = 261U;

	t66 = (x789<<((x790<x791)*x792));

	if (t66 != 3991928832U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x797 = UINT64_MAX;
	static int16_t x798 = 23;
	int8_t x799 = -1;

	t67 = (x797<<((x798<x799)*x800));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x833 = UINT16_MAX;
	int64_t x834 = 881775856832LL;
	uint8_t x835 = 19U;

	t68 = (x833<<((x834<x835)*x836));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x837 = UINT64_MAX;
	int64_t x838 = 517224743LL;
	volatile uint64_t x839 = 393LLU;
	int64_t x840 = INT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (x837<<((x838<x839)*x840));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x841 = 27U;
	static int64_t x842 = -1LL;
	int16_t x843 = -2768;
	int64_t x844 = INT64_MIN;
	int32_t t70 = 0;

	t70 = (x841<<((x842<x843)*x844));

	if (t70 != 27) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x850 = UINT64_MAX;
	uint32_t x851 = 3438949U;
	volatile int32_t t71 = 15193621;

	t71 = (x849<<((x850<x851)*x852));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x857 = INT16_MAX;
	volatile uint64_t x858 = UINT64_MAX;
	static int16_t x859 = -389;
	uint32_t x860 = 199520U;
	static int32_t t72 = 10;

	t72 = (x857<<((x858<x859)*x860));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x881 = 1;
	volatile int32_t x882 = INT32_MAX;
	volatile uint8_t x883 = UINT8_MAX;
	int8_t x884 = -1;
	volatile int32_t t73 = -36755602;

	t73 = (x881<<((x882<x883)*x884));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x893 = 1701;
	int32_t t74 = 77287;

	t74 = (x893<<((x894<x895)*x896));

	if (t74 != 1701) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x897 = 48U;
	uint8_t x898 = UINT8_MAX;
	volatile int64_t x899 = INT64_MIN;
	volatile uint8_t x900 = UINT8_MAX;
	int32_t t75 = 23;

	t75 = (x897<<((x898<x899)*x900));

	if (t75 != 48) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x958 = 1;
	int32_t x959 = -31083;
	static volatile int64_t x960 = INT64_MAX;
	int64_t t76 = 20566047125626LL;

	t76 = (x957<<((x958<x959)*x960));

	if (t76 != 153678004168LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x981 = INT8_MAX;
	static int64_t x982 = INT64_MAX;
	int16_t x984 = INT16_MIN;
	volatile int32_t t77 = -2237;

	t77 = (x981<<((x982<x983)*x984));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x993 = INT16_MAX;
	static uint8_t x994 = UINT8_MAX;
	uint16_t x995 = 8U;
	int32_t x996 = INT32_MIN;
	volatile int32_t t78 = 13912647;

	t78 = (x993<<((x994<x995)*x996));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x998 = UINT8_MAX;
	static int16_t x999 = -1;
	uint16_t x1000 = 26U;

	t79 = (x997<<((x998<x999)*x1000));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x1013 = 122U;
	volatile int8_t x1014 = INT8_MIN;
	volatile int8_t x1015 = INT8_MIN;
	volatile int64_t x1016 = INT64_MAX;
	static volatile int32_t t80 = 426727387;

	t80 = (x1013<<((x1014<x1015)*x1016));

	if (t80 != 122) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1041 = 657859;
	uint16_t x1042 = 1U;
	static int32_t x1044 = INT32_MIN;
	volatile int32_t t81 = 11;

	t81 = (x1041<<((x1042<x1043)*x1044));

	if (t81 != 657859) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1066 = UINT8_MAX;
	int64_t x1067 = INT64_MIN;
	int16_t x1068 = 42;
	int32_t t82 = -193233407;

	t82 = (x1065<<((x1066<x1067)*x1068));

	if (t82 != 33) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x1073 = 1688030019LLU;
	volatile int16_t x1074 = INT16_MIN;
	static int16_t x1075 = INT16_MIN;
	static int32_t x1076 = -1;
	uint64_t t83 = 1873LLU;

	t83 = (x1073<<((x1074<x1075)*x1076));

	if (t83 != 1688030019LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1077 = UINT64_MAX;
	volatile uint32_t x1079 = 4U;
	uint32_t x1080 = 1U;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x1077<<((x1078<x1079)*x1080));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1109 = UINT64_MAX;
	int32_t x1111 = INT32_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x1109<<((x1110<x1111)*x1112));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1121 = UINT64_MAX;
	static uint64_t x1123 = 53247LLU;
	int16_t x1124 = INT16_MIN;
	volatile uint64_t t86 = UINT64_MAX;

	t86 = (x1121<<((x1122<x1123)*x1124));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1131 = -1;
	int16_t x1132 = -1;
	uint32_t t87 = 68706U;

	t87 = (x1129<<((x1130<x1131)*x1132));

	if (t87 != 41909891U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1134 = INT16_MIN;
	int16_t x1135 = INT16_MIN;
	int64_t x1136 = -1LL;
	uint64_t t88 = 282469LLU;

	t88 = (x1133<<((x1134<x1135)*x1136));

	if (t88 != 256474739061641819LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1141 = 28535974LL;
	static int32_t x1142 = INT32_MAX;
	volatile uint32_t x1143 = 3795621U;
	volatile int32_t x1144 = INT32_MIN;

	t89 = (x1141<<((x1142<x1143)*x1144));

	if (t89 != 28535974LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1145 = UINT8_MAX;
	uint16_t x1146 = UINT16_MAX;
	int16_t x1147 = -333;
	int8_t x1148 = INT8_MAX;
	volatile int32_t t90 = -5770;

	t90 = (x1145<<((x1146<x1147)*x1148));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1149 = INT8_MAX;
	int8_t x1151 = -1;
	static int8_t x1152 = INT8_MAX;
	volatile int32_t t91 = -4113314;

	t91 = (x1149<<((x1150<x1151)*x1152));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1153 = UINT64_MAX;
	volatile int64_t x1154 = -1LL;
	int64_t x1155 = INT64_MIN;
	volatile uint64_t x1156 = UINT64_MAX;
	uint64_t t92 = UINT64_MAX;

	t92 = (x1153<<((x1154<x1155)*x1156));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x1163 = -1LL;
	uint8_t x1164 = UINT8_MAX;
	int32_t t93 = 828472;

	t93 = (x1161<<((x1162<x1163)*x1164));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1170 = 394U;
	uint8_t x1171 = 76U;
	uint64_t x1172 = 582516982470LLU;
	int64_t t94 = 189236LL;

	t94 = (x1169<<((x1170<x1171)*x1172));

	if (t94 != 125063LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1173 = 0;
	static volatile int32_t x1174 = INT32_MIN;
	int32_t x1176 = 102;
	int32_t t95 = 179039121;

	t95 = (x1173<<((x1174<x1175)*x1176));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1182 = INT8_MIN;
	int16_t x1183 = INT16_MIN;
	int32_t x1184 = INT32_MIN;
	static uint64_t t96 = UINT64_MAX;

	t96 = (x1181<<((x1182<x1183)*x1184));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1195 = 5;
	int16_t x1196 = INT16_MIN;
	int32_t t97 = -90443;

	t97 = (x1193<<((x1194<x1195)*x1196));

	if (t97 != 3364) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1209 = 0LL;
	int32_t x1210 = -1;
	uint32_t x1211 = 3088058U;
	int64_t t98 = -769338016LL;

	t98 = (x1209<<((x1210<x1211)*x1212));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x1225 = 3728167LLU;
	int64_t x1227 = INT64_MIN;
	uint32_t x1228 = 19772784U;

	t99 = (x1225<<((x1226<x1227)*x1228));

	if (t99 != 3728167LLU) { NG(); } else { ; }
	
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

