#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = 7;
static int32_t t0 = 4676071;
int8_t x11 = 2;
uint64_t x15 = UINT64_MAX;
uint8_t x26 = 105U;
int32_t t3 = -862;
uint64_t x36 = UINT64_MAX;
volatile uint8_t x39 = 1U;
uint64_t x45 = UINT64_MAX;
static volatile int32_t x48 = -14;
uint64_t x49 = UINT64_MAX;
uint8_t x57 = 3U;
int8_t x60 = INT8_MAX;
int32_t t8 = 487456979;
static volatile uint16_t x68 = UINT16_MAX;
uint32_t x77 = 394U;
int32_t x85 = INT32_MAX;
int32_t t13 = 11;
int32_t x99 = INT32_MAX;
int32_t t14 = -207658;
uint64_t x119 = UINT64_MAX;
int32_t t16 = 5168401;
static uint64_t x126 = 434038LLU;
static uint32_t x129 = UINT32_MAX;
uint8_t x133 = UINT8_MAX;
volatile uint8_t x142 = 84U;
int32_t x143 = -1728810;
static uint8_t x161 = 6U;
static int8_t x162 = -1;
uint16_t x163 = UINT16_MAX;
int32_t t21 = -7605;
volatile uint32_t t22 = 13805463U;
static int64_t x171 = INT64_MAX;
uint64_t x192 = 7590959411750LLU;
int64_t t25 = -471025191247LL;
int64_t x211 = INT64_MIN;
int32_t t27 = 200134;
uint8_t x231 = UINT8_MAX;
static int16_t x255 = INT16_MAX;
int8_t x266 = INT8_MIN;
volatile int32_t x287 = -1;
uint8_t x293 = 2U;
int64_t x304 = INT64_MIN;
int32_t t36 = -1230;
int8_t x313 = 13;
static volatile int32_t t38 = 441085146;
int8_t x330 = -1;
volatile uint64_t x345 = 9929546057386451LLU;
int64_t x347 = INT64_MIN;
static int8_t x348 = INT8_MIN;
uint64_t t41 = 8LLU;
static uint16_t x353 = 149U;
static volatile int16_t x354 = INT16_MIN;
int16_t x355 = -2;
int8_t x359 = INT8_MIN;
uint64_t t46 = UINT64_MAX;
volatile int64_t x383 = 137957405940LL;
uint64_t x391 = 589387326LLU;
int32_t x394 = -1;
volatile uint16_t x436 = UINT16_MAX;
uint16_t x485 = 5012U;
uint16_t x497 = UINT16_MAX;
uint32_t x505 = 1073U;
int16_t x509 = INT16_MAX;
int32_t x510 = -1;
volatile int8_t x512 = -17;
int8_t x519 = -2;
int64_t x528 = -7841864066526131LL;
int8_t x538 = -13;
static int64_t x550 = -1LL;
volatile uint32_t x553 = 133U;
int8_t x555 = -1;
volatile uint16_t x565 = 0U;
static int16_t x568 = INT16_MIN;
int64_t x578 = INT64_MAX;
int16_t x584 = -1;
static int32_t x590 = INT32_MAX;
int32_t t71 = 226584744;
static uint16_t x606 = UINT16_MAX;
uint64_t x619 = 25967178623LLU;
uint32_t x650 = 8523937U;
int32_t x652 = -1;
uint32_t t76 = 131U;
int32_t x663 = INT32_MIN;
uint32_t t77 = 25U;
uint64_t x665 = UINT64_MAX;
uint8_t x673 = 1U;
uint64_t x675 = UINT64_MAX;
volatile int8_t x676 = INT8_MIN;
static int64_t x678 = 12896741727LL;
int16_t x686 = INT16_MAX;
int16_t x687 = INT16_MIN;
int8_t x703 = -13;
int16_t x720 = -78;
int8_t x722 = INT8_MIN;
uint16_t x729 = UINT16_MAX;
volatile int8_t x753 = INT8_MAX;
int8_t x754 = -1;
static int32_t x756 = 234463807;
volatile int32_t t90 = 5898585;
volatile int32_t x758 = INT32_MIN;
static volatile uint64_t x762 = 31785174778LLU;
static int64_t x764 = INT64_MAX;
uint16_t x765 = 3U;
uint8_t x767 = 1U;
uint32_t x768 = 10U;
int32_t x775 = -50393;
int32_t t95 = -1;
int16_t x778 = -5092;
volatile int16_t x780 = INT16_MAX;
uint64_t x793 = 348062283072279LLU;
volatile int16_t x796 = INT16_MIN;
volatile uint8_t x798 = 13U;


void f0(void) {
	volatile uint8_t x1 = 127U;
	volatile int8_t x2 = INT8_MIN;
	static uint32_t x3 = 14602U;

	t0 = (x1<<(x2&(x3<x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 45U;
	static volatile int16_t x10 = -1;
	volatile uint16_t x12 = UINT16_MAX;
	uint32_t t1 = 31933429U;

	t1 = (x9<<(x10&(x11<x12)));

	if (t1 != 90U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MAX;
	static int32_t x14 = -2692137;
	volatile uint32_t x16 = 179807U;
	volatile int32_t t2 = -6002;

	t2 = (x13<<(x14&(x15<x16)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x25 = 3U;
	int32_t x27 = -1;
	volatile uint32_t x28 = 35U;

	t3 = (x25<<(x26&(x27<x28)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = 2U;
	uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = 130168277073053808LL;
	static volatile int32_t t4 = 87599681;

	t4 = (x33<<(x34&(x35<x36)));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x37 = INT8_MAX;
	volatile uint32_t x38 = 118829934U;
	int8_t x40 = INT8_MAX;
	static volatile int32_t t5 = 218750002;

	t5 = (x37<<(x38&(x39<x40)));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x46 = 43U;
	int16_t x47 = -1;
	volatile uint64_t t6 = UINT64_MAX;

	t6 = (x45<<(x46&(x47<x48)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x50 = 236878281U;
	int32_t x51 = 13540;
	int64_t x52 = 81023841LL;
	uint64_t t7 = 9979LLU;

	t7 = (x49<<(x50&(x51<x52)));

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x58 = 766416510U;
	int64_t x59 = INT64_MAX;

	t8 = (x57<<(x58&(x59<x60)));

	if (t8 != 3) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x65 = 500U;
	int8_t x66 = INT8_MIN;
	int64_t x67 = 27819353219882520LL;
	volatile uint32_t t9 = 470409076U;

	t9 = (x65<<(x66&(x67<x68)));

	if (t9 != 500U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x73 = UINT16_MAX;
	static uint64_t x74 = 654LLU;
	int16_t x75 = -1;
	uint16_t x76 = 5U;
	volatile int32_t t10 = -17;

	t10 = (x73<<(x74&(x75<x76)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	int64_t x80 = INT64_MIN;
	volatile uint32_t t11 = 2U;

	t11 = (x77<<(x78&(x79<x80)));

	if (t11 != 394U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x86 = -1;
	int16_t x87 = INT16_MAX;
	int32_t x88 = -1;
	int32_t t12 = INT32_MAX;

	t12 = (x85<<(x86&(x87<x88)));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x89 = 394;
	uint16_t x90 = 0U;
	int64_t x91 = INT64_MIN;
	int32_t x92 = 0;

	t13 = (x89<<(x90&(x91<x92)));

	if (t13 != 394) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x97 = 3;
	volatile int64_t x98 = -1LL;
	int32_t x100 = 1520;

	t14 = (x97<<(x98&(x99<x100)));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x113 = INT16_MAX;
	uint8_t x114 = 53U;
	static int8_t x115 = INT8_MAX;
	uint64_t x116 = 1800289120961646555LLU;
	int32_t t15 = -1;

	t15 = (x113<<(x114&(x115<x116)));

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x117 = 4U;
	static volatile uint64_t x118 = 938892136617348LLU;
	uint16_t x120 = 14U;

	t16 = (x117<<(x118&(x119<x120)));

	if (t16 != 4) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x125 = 24785126U;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 104U;
	volatile uint32_t t17 = 6977425U;

	t17 = (x125<<(x126&(x127<x128)));

	if (t17 != 24785126U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x130 = 4;
	int32_t x131 = INT32_MAX;
	int8_t x132 = INT8_MIN;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x129<<(x130&(x131<x132)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x134 = INT8_MIN;
	volatile int64_t x135 = INT64_MIN;
	uint32_t x136 = 38767U;
	int32_t t19 = 437011;

	t19 = (x133<<(x134&(x135<x136)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x141 = 260142195;
	int16_t x144 = INT16_MIN;
	int32_t t20 = -66514541;

	t20 = (x141<<(x142&(x143<x144)));

	if (t20 != 260142195) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x164 = INT8_MAX;

	t21 = (x161<<(x162&(x163<x164)));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x165 = UINT32_MAX;
	static volatile int8_t x166 = INT8_MAX;
	static int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MAX;

	t22 = (x165<<(x166&(x167<x168)));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x169 = INT32_MAX;
	int64_t x170 = INT64_MAX;
	static int8_t x172 = INT8_MAX;
	volatile int32_t t23 = INT32_MAX;

	t23 = (x169<<(x170&(x171<x172)));

	if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x181 = 14374U;
	int64_t x182 = -6488971800LL;
	volatile uint16_t x183 = 24455U;
	uint64_t x184 = 11340LLU;
	volatile int32_t t24 = 208968097;

	t24 = (x181<<(x182&(x183<x184)));

	if (t24 != 14374) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x189 = 28391661465LL;
	static int16_t x190 = INT16_MIN;
	volatile uint16_t x191 = 1877U;

	t25 = (x189<<(x190&(x191<x192)));

	if (t25 != 28391661465LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x205 = INT16_MAX;
	static int8_t x206 = -1;
	int64_t x207 = -1LL;
	uint64_t x208 = 7140171LLU;
	volatile int32_t t26 = 56979;

	t26 = (x205<<(x206&(x207<x208)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x209 = 7223;
	int16_t x210 = INT16_MIN;
	uint8_t x212 = 1U;

	t27 = (x209<<(x210&(x211<x212)));

	if (t27 != 7223) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x229 = 113U;
	int64_t x230 = INT64_MAX;
	int16_t x232 = -1;
	volatile uint32_t t28 = 110413U;

	t28 = (x229<<(x230&(x231<x232)));

	if (t28 != 113U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x241 = 0LL;
	uint64_t x242 = 1065057213904017535LLU;
	static volatile int32_t x243 = -15;
	int64_t x244 = INT64_MIN;
	volatile int64_t t29 = 67964LL;

	t29 = (x241<<(x242&(x243<x244)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x253 = 717896515533605LLU;
	int8_t x254 = INT8_MIN;
	int32_t x256 = -699;
	uint64_t t30 = 4047245041748534LLU;

	t30 = (x253<<(x254&(x255<x256)));

	if (t30 != 717896515533605LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x265 = 152719308;
	volatile uint32_t x267 = 2U;
	uint64_t x268 = 7100809LLU;
	int32_t t31 = 29028101;

	t31 = (x265<<(x266&(x267<x268)));

	if (t31 != 152719308) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x273 = UINT64_MAX;
	static int8_t x274 = INT8_MIN;
	static uint8_t x275 = UINT8_MAX;
	static uint32_t x276 = 5479299U;
	uint64_t t32 = UINT64_MAX;

	t32 = (x273<<(x274&(x275<x276)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x281 = INT32_MAX;
	int8_t x282 = INT8_MIN;
	uint16_t x283 = 177U;
	int16_t x284 = INT16_MIN;
	volatile int32_t t33 = INT32_MAX;

	t33 = (x281<<(x282&(x283<x284)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x285 = INT8_MAX;
	static volatile int8_t x286 = -5;
	volatile uint8_t x288 = 0U;
	int32_t t34 = -3;

	t34 = (x285<<(x286&(x287<x288)));

	if (t34 != 254) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x294 = 15981LLU;
	int8_t x295 = INT8_MIN;
	uint32_t x296 = 536526946U;
	int32_t t35 = -38747266;

	t35 = (x293<<(x294&(x295<x296)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x301 = UINT16_MAX;
	volatile uint32_t x302 = UINT32_MAX;
	volatile int8_t x303 = INT8_MAX;

	t36 = (x301<<(x302&(x303<x304)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x309 = 464U;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 4U;
	volatile uint64_t x312 = UINT64_MAX;
	static int32_t t37 = -3;

	t37 = (x309<<(x310&(x311<x312)));

	if (t37 != 464) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x314 = -62043693043379LL;
	int16_t x315 = -1;
	volatile int8_t x316 = INT8_MIN;

	t38 = (x313<<(x314&(x315<x316)));

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x329 = 261145648630835LL;
	volatile int64_t x331 = 1736338232LL;
	uint16_t x332 = 1976U;
	static volatile int64_t t39 = -50541296833LL;

	t39 = (x329<<(x330&(x331<x332)));

	if (t39 != 261145648630835LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int32_t x334 = INT32_MAX;
	volatile int16_t x335 = 376;
	uint8_t x336 = 5U;
	int32_t t40 = -7869536;

	t40 = (x333<<(x334&(x335<x336)));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x346 = UINT64_MAX;

	t41 = (x345<<(x346&(x347<x348)));

	if (t41 != 19859092114772902LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x356 = -297LL;
	static volatile int32_t t42 = 7772;

	t42 = (x353<<(x354&(x355<x356)));

	if (t42 != 149) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x357 = 1;
	static int16_t x358 = INT16_MAX;
	int32_t x360 = -1;
	volatile int32_t t43 = -13;

	t43 = (x357<<(x358&(x359<x360)));

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x361 = 219U;
	int8_t x362 = -9;
	int16_t x363 = INT16_MIN;
	volatile int32_t x364 = INT32_MAX;
	int32_t t44 = 234;

	t44 = (x361<<(x362&(x363<x364)));

	if (t44 != 438) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x369 = 28773398873LLU;
	int16_t x370 = -1;
	static int32_t x371 = INT32_MIN;
	uint32_t x372 = 15U;
	uint64_t t45 = 16553LLU;

	t45 = (x369<<(x370&(x371<x372)));

	if (t45 != 28773398873LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MIN;
	volatile int64_t x375 = INT64_MIN;
	int8_t x376 = INT8_MIN;

	t46 = (x373<<(x374&(x375<x376)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x381 = 1;
	static int8_t x382 = INT8_MAX;
	static int16_t x384 = INT16_MIN;
	static int32_t t47 = -4;

	t47 = (x381<<(x382&(x383<x384)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x389 = 0;
	int8_t x390 = INT8_MIN;
	uint64_t x392 = 290396105465319685LLU;
	int32_t t48 = -29596;

	t48 = (x389<<(x390&(x391<x392)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x393 = 1923993U;
	uint64_t x395 = UINT64_MAX;
	volatile int16_t x396 = -1;
	uint32_t t49 = 245200U;

	t49 = (x393<<(x394&(x395<x396)));

	if (t49 != 1923993U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MIN;
	volatile int32_t x403 = 68;
	volatile int16_t x404 = INT16_MAX;
	int32_t t50 = -186;

	t50 = (x401<<(x402&(x403<x404)));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x433 = UINT32_MAX;
	int32_t x434 = INT32_MAX;
	volatile int64_t x435 = INT64_MIN;
	uint32_t t51 = 299908U;

	t51 = (x433<<(x434&(x435<x436)));

	if (t51 != 4294967294U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x477 = INT64_MAX;
	int64_t x478 = INT64_MIN;
	int32_t x479 = 1;
	static volatile uint16_t x480 = UINT16_MAX;
	volatile int64_t t52 = INT64_MAX;

	t52 = (x477<<(x478&(x479<x480)));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x481 = UINT8_MAX;
	volatile int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MIN;
	static int64_t x484 = INT64_MIN;
	volatile int32_t t53 = 2106;

	t53 = (x481<<(x482&(x483<x484)));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x486 = 845;
	int32_t x487 = -1;
	static int16_t x488 = 1;
	int32_t t54 = -272991;

	t54 = (x485<<(x486&(x487<x488)));

	if (t54 != 10024) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x489 = UINT16_MAX;
	int32_t x490 = -1;
	int64_t x491 = INT64_MAX;
	static volatile int16_t x492 = -67;
	int32_t t55 = -1458588;

	t55 = (x489<<(x490&(x491<x492)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x498 = -1LL;
	int8_t x499 = INT8_MIN;
	uint16_t x500 = 29903U;
	volatile int32_t t56 = 16118687;

	t56 = (x497<<(x498&(x499<x500)));

	if (t56 != 131070) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x506 = -1LL;
	static int32_t x507 = -1;
	volatile uint16_t x508 = UINT16_MAX;
	uint32_t t57 = 7656940U;

	t57 = (x505<<(x506&(x507<x508)));

	if (t57 != 2146U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x511 = -1;
	int32_t t58 = -806155;

	t58 = (x509<<(x510&(x511<x512)));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x513 = 8U;
	int64_t x514 = -1LL;
	static int64_t x515 = INT64_MIN;
	uint8_t x516 = 28U;
	volatile int32_t t59 = 227;

	t59 = (x513<<(x514&(x515<x516)));

	if (t59 != 16) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x517 = INT32_MAX;
	volatile int32_t x518 = -1;
	uint64_t x520 = 455789387874LLU;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x517<<(x518&(x519<x520)));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x525 = 74;
	int8_t x526 = INT8_MIN;
	static int32_t x527 = INT32_MAX;
	volatile int32_t t61 = 1;

	t61 = (x525<<(x526&(x527<x528)));

	if (t61 != 74) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x537 = 2261063U;
	int32_t x539 = INT32_MAX;
	uint64_t x540 = UINT64_MAX;
	static volatile uint32_t t62 = 1519534U;

	t62 = (x537<<(x538&(x539<x540)));

	if (t62 != 4522126U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x545 = UINT16_MAX;
	int8_t x546 = INT8_MIN;
	uint8_t x547 = 5U;
	static int64_t x548 = -1LL;
	volatile int32_t t63 = -194010906;

	t63 = (x545<<(x546&(x547<x548)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x549 = INT16_MAX;
	int32_t x551 = 1473;
	uint16_t x552 = UINT16_MAX;
	int32_t t64 = -19;

	t64 = (x549<<(x550&(x551<x552)));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x554 = UINT32_MAX;
	static uint16_t x556 = 108U;
	uint32_t t65 = 1171922825U;

	t65 = (x553<<(x554&(x555<x556)));

	if (t65 != 266U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x566 = -1LL;
	uint64_t x567 = 11LLU;
	int32_t t66 = 10;

	t66 = (x565<<(x566&(x567<x568)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x573 = 1U;
	int8_t x574 = -10;
	uint32_t x575 = 263442922U;
	static int16_t x576 = INT16_MAX;
	int32_t t67 = -1;

	t67 = (x573<<(x574&(x575<x576)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x577 = 13929;
	volatile int64_t x579 = INT64_MIN;
	static int32_t x580 = INT32_MIN;
	int32_t t68 = -2;

	t68 = (x577<<(x578&(x579<x580)));

	if (t68 != 27858) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x581 = 7328907710644429980LLU;
	int16_t x582 = INT16_MIN;
	int32_t x583 = -1;
	static volatile uint64_t t69 = 9340389562LLU;

	t69 = (x581<<(x582&(x583<x584)));

	if (t69 != 7328907710644429980LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x585 = 80561207821392LLU;
	volatile int32_t x586 = INT32_MIN;
	uint8_t x587 = 16U;
	int16_t x588 = -10;
	uint64_t t70 = 935LLU;

	t70 = (x585<<(x586&(x587<x588)));

	if (t70 != 80561207821392LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x589 = INT8_MAX;
	volatile uint32_t x591 = 3242297U;
	int64_t x592 = INT64_MIN;

	t71 = (x589<<(x590&(x591<x592)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x605 = 37;
	static int32_t x607 = INT32_MAX;
	uint32_t x608 = 486U;
	static volatile int32_t t72 = -857;

	t72 = (x605<<(x606&(x607<x608)));

	if (t72 != 37) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x609 = 1U;
	int32_t x610 = -1;
	static uint64_t x611 = UINT64_MAX;
	int64_t x612 = INT64_MIN;
	volatile int32_t t73 = -156830;

	t73 = (x609<<(x610&(x611<x612)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x617 = 338U;
	volatile int16_t x618 = 8891;
	uint8_t x620 = UINT8_MAX;
	int32_t t74 = -2;

	t74 = (x617<<(x618&(x619<x620)));

	if (t74 != 338) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x625 = UINT16_MAX;
	volatile int64_t x626 = INT64_MIN;
	static int16_t x627 = -653;
	volatile uint8_t x628 = UINT8_MAX;
	int32_t t75 = 415658;

	t75 = (x625<<(x626&(x627<x628)));

	if (t75 != 65535) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x649 = 50502850U;
	int16_t x651 = 3268;

	t76 = (x649<<(x650&(x651<x652)));

	if (t76 != 50502850U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x661 = 0U;
	uint64_t x662 = 86LLU;
	int8_t x664 = 1;

	t77 = (x661<<(x662&(x663<x664)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x666 = 1918562384U;
	int16_t x667 = 15;
	int8_t x668 = INT8_MAX;
	static volatile uint64_t t78 = UINT64_MAX;

	t78 = (x665<<(x666&(x667<x668)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x674 = UINT32_MAX;
	volatile int32_t t79 = -58;

	t79 = (x673<<(x674&(x675<x676)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x677 = 19U;
	volatile int8_t x679 = INT8_MAX;
	uint8_t x680 = UINT8_MAX;
	static volatile int32_t t80 = -1;

	t80 = (x677<<(x678&(x679<x680)));

	if (t80 != 38) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x685 = 1000;
	int8_t x688 = -6;
	static int32_t t81 = -41592;

	t81 = (x685<<(x686&(x687<x688)));

	if (t81 != 2000) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x689 = 9U;
	uint16_t x690 = 1079U;
	static volatile uint32_t x691 = 1174U;
	uint8_t x692 = 2U;
	int32_t t82 = 24543;

	t82 = (x689<<(x690&(x691<x692)));

	if (t82 != 9) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x697 = INT64_MAX;
	static volatile uint16_t x698 = 6U;
	int64_t x699 = INT64_MIN;
	uint32_t x700 = UINT32_MAX;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x697<<(x698&(x699<x700)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x701 = 64075968LLU;
	uint32_t x702 = 15480069U;
	volatile int16_t x704 = INT16_MIN;
	uint64_t t84 = 28447771LLU;

	t84 = (x701<<(x702&(x703<x704)));

	if (t84 != 64075968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x717 = 1730815253U;
	uint8_t x718 = 1U;
	volatile int32_t x719 = INT32_MAX;
	static volatile uint32_t t85 = 2U;

	t85 = (x717<<(x718&(x719<x720)));

	if (t85 != 1730815253U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x721 = 1465U;
	int8_t x723 = INT8_MAX;
	static int32_t x724 = INT32_MIN;
	volatile int32_t t86 = 454102679;

	t86 = (x721<<(x722&(x723<x724)));

	if (t86 != 1465) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x725 = UINT64_MAX;
	volatile int16_t x726 = -1;
	int8_t x727 = -59;
	static int64_t x728 = INT64_MAX;
	volatile uint64_t t87 = 388352844LLU;

	t87 = (x725<<(x726&(x727<x728)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x730 = 1997U;
	int32_t x731 = -8;
	static int16_t x732 = INT16_MAX;
	volatile int32_t t88 = 232851;

	t88 = (x729<<(x730&(x731<x732)));

	if (t88 != 131070) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x741 = UINT16_MAX;
	volatile int8_t x742 = -40;
	volatile uint64_t x743 = 99286742430390333LLU;
	static int16_t x744 = -1;
	volatile int32_t t89 = 4;

	t89 = (x741<<(x742&(x743<x744)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x755 = 1U;

	t90 = (x753<<(x754&(x755<x756)));

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x757 = 6U;
	uint32_t x759 = 49230U;
	uint64_t x760 = 418613231574LLU;
	int32_t t91 = -3;

	t91 = (x757<<(x758&(x759<x760)));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x761 = 39U;
	static uint8_t x763 = 3U;
	volatile int32_t t92 = 870663;

	t92 = (x761<<(x762&(x763<x764)));

	if (t92 != 39) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x766 = INT16_MIN;
	volatile int32_t t93 = -10294170;

	t93 = (x765<<(x766&(x767<x768)));

	if (t93 != 3) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x769 = INT64_MAX;
	int16_t x770 = INT16_MIN;
	int32_t x771 = -4401;
	static int8_t x772 = INT8_MAX;
	int64_t t94 = INT64_MAX;

	t94 = (x769<<(x770&(x771<x772)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x773 = UINT8_MAX;
	int16_t x774 = 0;
	static int64_t x776 = 2751LL;

	t95 = (x773<<(x774&(x775<x776)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x777 = 694607862464658LL;
	int64_t x779 = -147843965717314LL;
	int64_t t96 = -204566LL;

	t96 = (x777<<(x778&(x779<x780)));

	if (t96 != 694607862464658LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x785 = UINT32_MAX;
	uint8_t x786 = UINT8_MAX;
	uint64_t x787 = 49810664810158936LLU;
	int16_t x788 = INT16_MIN;
	static volatile uint32_t t97 = 1269568471U;

	t97 = (x785<<(x786&(x787<x788)));

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x794 = -1;
	int64_t x795 = 95690982587160LL;
	volatile uint64_t t98 = 4038365196823LLU;

	t98 = (x793<<(x794&(x795<x796)));

	if (t98 != 348062283072279LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x797 = INT8_MAX;
	static volatile uint64_t x799 = UINT64_MAX;
	int16_t x800 = -1;
	volatile int32_t t99 = -42596;

	t99 = (x797<<(x798&(x799<x800)));

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

