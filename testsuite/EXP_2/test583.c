#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x13 = 366221;
int32_t x14 = -1;
int8_t x42 = -1;
volatile uint16_t x57 = UINT16_MAX;
volatile int32_t t6 = 1;
int64_t x103 = INT64_MIN;
static volatile int32_t x116 = INT32_MAX;
uint32_t x121 = 123712007U;
int16_t x122 = INT16_MAX;
int16_t x123 = INT16_MAX;
static uint32_t t9 = 80441U;
int64_t x134 = 5LL;
int32_t x160 = INT32_MIN;
volatile int32_t t15 = 1440;
static int64_t t16 = -131147391LL;
uint16_t x205 = 0U;
int64_t x206 = -23LL;
int64_t x207 = 23042009LL;
int32_t x225 = INT32_MAX;
static uint8_t x235 = UINT8_MAX;
int16_t x242 = -1;
volatile uint32_t t20 = 32U;
int8_t x250 = 0;
int64_t x267 = INT64_MIN;
static volatile int16_t x277 = 1923;
static volatile uint32_t t23 = 26224U;
static volatile uint16_t x295 = UINT16_MAX;
int64_t x296 = 2542399LL;
static volatile uint64_t t25 = 586213255711196LLU;
int16_t x326 = INT16_MIN;
int32_t x327 = INT32_MIN;
uint32_t x328 = 590946051U;
int32_t x337 = 1;
uint64_t x381 = UINT64_MAX;
volatile uint8_t x382 = 11U;
int8_t x383 = INT8_MIN;
int32_t x399 = -128838;
static int8_t x438 = INT8_MAX;
int64_t x447 = -1LL;
int32_t x453 = INT32_MAX;
int64_t t36 = 220817596LL;
static int16_t x482 = 0;
volatile uint8_t x520 = 120U;
uint64_t t38 = 962040810890416LLU;
volatile int16_t x536 = 112;
volatile uint32_t t40 = 1496420U;
int32_t x543 = INT32_MIN;
static volatile int32_t t41 = 0;
uint32_t x599 = 826U;
int8_t x600 = INT8_MAX;
static int8_t x604 = -1;
uint8_t x608 = UINT8_MAX;
volatile int32_t t45 = -5135;
static volatile uint64_t x625 = 3629989426669LLU;
int32_t x628 = -1152267;
uint8_t x633 = 15U;
int64_t x652 = INT64_MIN;
volatile int8_t x666 = 0;
int16_t x668 = INT16_MIN;
volatile int32_t t52 = 252698;
uint32_t x678 = UINT32_MAX;
volatile int8_t x694 = 2;
int8_t x780 = -1;
int8_t x782 = -1;
volatile int16_t x783 = -1;
int32_t x792 = -1;
volatile uint64_t t61 = 1160393LLU;
volatile int32_t t62 = 86024617;
uint8_t x810 = UINT8_MAX;
volatile int8_t x811 = INT8_MAX;
static volatile uint32_t x815 = 2854U;
volatile uint32_t t64 = 22217U;
uint64_t t65 = 11LLU;
static int16_t x825 = 3;
int16_t x827 = INT16_MIN;
static int32_t x828 = 1;
uint16_t x872 = 5U;
static int16_t x891 = -7383;
volatile int64_t t72 = -13624268218201011LL;
volatile int32_t t74 = 78;
int16_t x972 = INT16_MAX;
uint8_t x982 = UINT8_MAX;
int64_t x983 = INT64_MAX;
volatile int32_t x1002 = -1;
int8_t x1029 = 1;
uint64_t t81 = 40LLU;
volatile int64_t x1047 = INT64_MIN;
int16_t x1048 = INT16_MIN;
int32_t x1058 = INT32_MIN;
static uint8_t x1084 = 0U;
static uint8_t x1150 = 49U;
uint8_t x1152 = 23U;
volatile int32_t t87 = -1382069;
int32_t x1154 = -1;
int8_t x1156 = -59;
static int64_t x1183 = INT64_MAX;
uint8_t x1197 = 60U;
int64_t x1223 = INT64_MIN;
uint8_t x1249 = 1U;
volatile uint16_t x1253 = 10U;
uint16_t x1256 = 296U;
uint64_t x1260 = 64829425591294LLU;


void f0(void) {
	uint16_t x9 = 8U;
	int8_t x10 = INT8_MIN;
	volatile int32_t x11 = INT32_MIN;
	int32_t x12 = -76691;
	int32_t t0 = -8273698;

	t0 = ((x9<<(x10/x11))&x12);

	if (t0 != 8) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x15 = 17160997954400096LL;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t1 = -4LL;

	t1 = ((x13<<(x14/x15))&x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x29 = 6089396LL;
	int32_t x30 = INT32_MAX;
	int32_t x31 = INT32_MIN;
	uint16_t x32 = 17U;
	int64_t t2 = -4383LL;

	t2 = ((x29<<(x30/x31))&x32);

	if (t2 != 16LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x37 = UINT16_MAX;
	volatile int32_t x38 = INT32_MIN;
	volatile uint64_t x39 = UINT64_MAX;
	int16_t x40 = -1;
	int32_t t3 = -32782;

	t3 = ((x37<<(x38/x39))&x40);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x41 = 9U;
	static volatile int64_t x43 = -13795634379LL;
	int16_t x44 = INT16_MIN;
	volatile uint32_t t4 = 21535U;

	t4 = ((x41<<(x42/x43))&x44);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x58 = -1;
	uint16_t x59 = 5856U;
	uint16_t x60 = 5U;
	volatile int32_t t5 = 1856307;

	t5 = ((x57<<(x58/x59))&x60);

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x93 = 2261710;
	int16_t x94 = -1;
	static uint32_t x95 = UINT32_MAX;
	int16_t x96 = INT16_MAX;

	t6 = ((x93<<(x94/x95))&x96);

	if (t6 != 1436) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x101 = 116U;
	int64_t x102 = -159433985873047207LL;
	volatile uint32_t x104 = 50U;
	static volatile uint32_t t7 = 369091U;

	t7 = ((x101<<(x102/x103))&x104);

	if (t7 != 48U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x113 = UINT64_MAX;
	volatile uint32_t x114 = 3092970U;
	int64_t x115 = INT64_MIN;
	volatile uint64_t t8 = 176508LLU;

	t8 = ((x113<<(x114/x115))&x116);

	if (t8 != 2147483647LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x124 = -1;

	t9 = ((x121<<(x122/x123))&x124);

	if (t9 != 247424014U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x125 = 92702U;
	int64_t x126 = -1LL;
	uint32_t x127 = 117443271U;
	int32_t x128 = INT32_MIN;
	uint32_t t10 = 722745U;

	t10 = ((x125<<(x126/x127))&x128);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x129 = 107762546920878LLU;
	uint64_t x130 = 19402522613LLU;
	int16_t x131 = -16254;
	uint8_t x132 = 1U;
	uint64_t t11 = 9262613912268LLU;

	t11 = ((x129<<(x130/x131))&x132);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int16_t x135 = -43;
	int8_t x136 = INT8_MAX;
	volatile uint32_t t12 = 0U;

	t12 = ((x133<<(x134/x135))&x136);

	if (t12 != 127U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x141 = UINT16_MAX;
	uint16_t x142 = UINT16_MAX;
	volatile uint16_t x143 = UINT16_MAX;
	int64_t x144 = INT64_MAX;
	int64_t t13 = -60444945326630LL;

	t13 = ((x141<<(x142/x143))&x144);

	if (t13 != 131070LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x145 = INT32_MAX;
	static int64_t x146 = 11900287077871LL;
	int64_t x147 = INT64_MAX;
	volatile int16_t x148 = 40;
	volatile int32_t t14 = 674;

	t14 = ((x145<<(x146/x147))&x148);

	if (t14 != 40) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x157 = 257060559;
	static volatile int16_t x158 = INT16_MAX;
	int32_t x159 = 521937432;

	t15 = ((x157<<(x158/x159))&x160);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x177 = INT64_MAX;
	volatile int64_t x178 = 4LL;
	int8_t x179 = INT8_MIN;
	volatile int16_t x180 = INT16_MIN;

	t16 = ((x177<<(x178/x179))&x180);

	if (t16 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t17 = 10067660;

	t17 = ((x205<<(x206/x207))&x208);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x226 = 255LLU;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	static int32_t t18 = 906139620;

	t18 = ((x225<<(x226/x227))&x228);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x233 = 5U;
	int16_t x234 = -31;
	static volatile uint64_t x236 = 17468LLU;
	static volatile uint64_t t19 = 221842590794589LLU;

	t19 = ((x233<<(x234/x235))&x236);

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x241 = INT8_MAX;
	int8_t x243 = INT8_MIN;
	uint32_t x244 = 5U;

	t20 = ((x241<<(x242/x243))&x244);

	if (t20 != 5U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x249 = INT8_MAX;
	static uint32_t x251 = 1057915738U;
	uint8_t x252 = 1U;
	int32_t t21 = 490112882;

	t21 = ((x249<<(x250/x251))&x252);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = -5083585;
	static int64_t x268 = -1LL;
	volatile int64_t t22 = INT64_MAX;

	t22 = ((x265<<(x266/x267))&x268);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x278 = 0U;
	volatile int8_t x279 = 1;
	uint32_t x280 = UINT32_MAX;

	t23 = ((x277<<(x278/x279))&x280);

	if (t23 != 1923U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x293 = UINT16_MAX;
	volatile int32_t x294 = 1609;
	static volatile int64_t t24 = 228720078515296LL;

	t24 = ((x293<<(x294/x295))&x296);

	if (t24 != 52031LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x313 = 27LLU;
	volatile int32_t x314 = -85;
	static int32_t x315 = INT32_MIN;
	uint32_t x316 = UINT32_MAX;

	t25 = ((x313<<(x314/x315))&x316);

	if (t25 != 27LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x325 = 34U;
	volatile uint32_t t26 = 27037U;

	t26 = ((x325<<(x326/x327))&x328);

	if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x338 = 85U;
	int64_t x339 = INT64_MAX;
	int64_t x340 = INT64_MIN;
	static int64_t t27 = 8891203LL;

	t27 = ((x337<<(x338/x339))&x340);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x345 = INT8_MAX;
	volatile int32_t x346 = 1;
	uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 48679838U;
	uint32_t t28 = 157072U;

	t28 = ((x345<<(x346/x347))&x348);

	if (t28 != 30U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x384 = UINT32_MAX;
	uint64_t t29 = 242923232649677LLU;

	t29 = ((x381<<(x382/x383))&x384);

	if (t29 != 4294967295LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x389 = INT16_MAX;
	int16_t x390 = INT16_MAX;
	uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t30 = -471293;

	t30 = ((x389<<(x390/x391))&x392);

	if (t30 != 32640) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x397 = 5U;
	static int32_t x398 = -2790935;
	int8_t x400 = INT8_MIN;
	int32_t t31 = 52844287;

	t31 = ((x397<<(x398/x399))&x400);

	if (t31 != 10485760) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x401 = 43;
	static int32_t x402 = 557453444;
	volatile uint64_t x403 = 112508561LLU;
	int16_t x404 = -1;
	static int32_t t32 = 6;

	t32 = ((x401<<(x402/x403))&x404);

	if (t32 != 688) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x437 = 15U;
	int64_t x439 = INT64_MIN;
	int8_t x440 = 57;
	int32_t t33 = -919;

	t33 = ((x437<<(x438/x439))&x440);

	if (t33 != 9) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x445 = 214;
	int16_t x446 = -1;
	int16_t x448 = -1;
	int32_t t34 = -26;

	t34 = ((x445<<(x446/x447))&x448);

	if (t34 != 428) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x454 = -1;
	int16_t x455 = -774;
	int16_t x456 = -483;
	volatile int32_t t35 = 3869532;

	t35 = ((x453<<(x454/x455))&x456);

	if (t35 != 2147483165) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x473 = 30U;
	volatile int32_t x474 = -3;
	uint8_t x475 = 77U;
	int64_t x476 = INT64_MIN;

	t36 = ((x473<<(x474/x475))&x476);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x481 = 400967495;
	static uint32_t x483 = 912U;
	volatile int8_t x484 = INT8_MAX;
	int32_t t37 = -2799;

	t37 = ((x481<<(x482/x483))&x484);

	if (t37 != 71) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x517 = 1642073639LLU;
	int8_t x518 = 0;
	int64_t x519 = -258863LL;

	t38 = ((x517<<(x518/x519))&x520);

	if (t38 != 32LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x521 = 11358;
	volatile uint8_t x522 = UINT8_MAX;
	volatile uint32_t x523 = 612741398U;
	static uint64_t x524 = UINT64_MAX;
	volatile uint64_t t39 = 1LLU;

	t39 = ((x521<<(x522/x523))&x524);

	if (t39 != 11358LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x533 = 236967072U;
	volatile int16_t x534 = 850;
	int32_t x535 = 269440102;

	t40 = ((x533<<(x534/x535))&x536);

	if (t40 != 32U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x541 = 50U;
	static uint32_t x542 = UINT32_MAX;
	uint16_t x544 = UINT16_MAX;

	t41 = ((x541<<(x542/x543))&x544);

	if (t41 != 100) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x553 = 695545;
	static uint16_t x554 = UINT16_MAX;
	int64_t x555 = INT64_MAX;
	uint8_t x556 = 5U;
	int32_t t42 = 444434;

	t42 = ((x553<<(x554/x555))&x556);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x597 = UINT64_MAX;
	uint8_t x598 = 108U;
	static uint64_t t43 = 38945418587414742LLU;

	t43 = ((x597<<(x598/x599))&x600);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x601 = 1;
	volatile uint16_t x602 = 895U;
	uint16_t x603 = 195U;
	volatile int32_t t44 = -1;

	t44 = ((x601<<(x602/x603))&x604);

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x605 = 7081U;
	int64_t x606 = -1LL;
	static volatile int32_t x607 = INT32_MIN;

	t45 = ((x605<<(x606/x607))&x608);

	if (t45 != 169) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x609 = 172050U;
	uint16_t x610 = 1U;
	int8_t x611 = INT8_MAX;
	uint8_t x612 = 5U;
	uint32_t t46 = 32618U;

	t46 = ((x609<<(x610/x611))&x612);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x626 = 1;
	static int64_t x627 = INT64_MAX;
	uint64_t t47 = 195826LLU;

	t47 = ((x625<<(x626/x627))&x628);

	if (t47 != 3629988339941LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x634 = INT32_MIN;
	int32_t x635 = INT32_MIN;
	int8_t x636 = -6;
	static volatile int32_t t48 = -16;

	t48 = ((x633<<(x634/x635))&x636);

	if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x637 = INT64_MAX;
	static uint16_t x638 = 7U;
	volatile int32_t x639 = INT32_MIN;
	int64_t x640 = -110331635LL;
	int64_t t49 = -8700627LL;

	t49 = ((x637<<(x638/x639))&x640);

	if (t49 != 9223372036744444173LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x645 = 33672245370LLU;
	static volatile uint16_t x646 = 6U;
	volatile uint32_t x647 = UINT32_MAX;
	static int32_t x648 = INT32_MIN;
	uint64_t t50 = 2048941804LLU;

	t50 = ((x645<<(x646/x647))&x648);

	if (t50 != 32212254720LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x649 = 401U;
	int16_t x650 = -1;
	int16_t x651 = -1;
	int64_t t51 = 14351833658037061LL;

	t51 = ((x649<<(x650/x651))&x652);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x665 = 67657712;
	int16_t x667 = INT16_MAX;

	t52 = ((x665<<(x666/x667))&x668);

	if (t52 != 67633152) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x669 = 16U;
	uint32_t x670 = 9072U;
	int32_t x671 = -1;
	int16_t x672 = INT16_MIN;
	static volatile int32_t t53 = 7489;

	t53 = ((x669<<(x670/x671))&x672);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x677 = INT32_MAX;
	int64_t x679 = INT64_MIN;
	static volatile int8_t x680 = INT8_MAX;
	static volatile int32_t t54 = -63341;

	t54 = ((x677<<(x678/x679))&x680);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x693 = 22U;
	static int64_t x695 = INT64_MIN;
	volatile uint32_t x696 = 22U;
	volatile uint32_t t55 = 10138U;

	t55 = ((x693<<(x694/x695))&x696);

	if (t55 != 22U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x701 = 19U;
	int8_t x702 = INT8_MIN;
	int64_t x703 = INT64_MAX;
	volatile int32_t x704 = 26715;
	static int32_t t56 = -43925257;

	t56 = ((x701<<(x702/x703))&x704);

	if (t56 != 19) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x709 = 127U;
	volatile uint8_t x710 = UINT8_MAX;
	int16_t x711 = INT16_MIN;
	int8_t x712 = -1;
	volatile int32_t t57 = 14999939;

	t57 = ((x709<<(x710/x711))&x712);

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x749 = INT16_MAX;
	int64_t x750 = -1LL;
	int32_t x751 = INT32_MAX;
	int8_t x752 = -46;
	int32_t t58 = 105946;

	t58 = ((x749<<(x750/x751))&x752);

	if (t58 != 32722) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x777 = INT32_MAX;
	int32_t x778 = -1;
	static uint8_t x779 = 7U;
	static volatile int32_t t59 = INT32_MAX;

	t59 = ((x777<<(x778/x779))&x780);

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x781 = 45455274;
	int64_t x784 = 1108640169920774LL;
	static volatile int64_t t60 = -770LL;

	t60 = ((x781<<(x782/x783))&x784);

	if (t60 != 84084996LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x789 = 683717LLU;
	static uint8_t x790 = 0U;
	volatile int64_t x791 = INT64_MAX;

	t61 = ((x789<<(x790/x791))&x792);

	if (t61 != 683717LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x801 = 0U;
	static int64_t x802 = 424LL;
	int64_t x803 = 201141726488469LL;
	uint16_t x804 = UINT16_MAX;

	t62 = ((x801<<(x802/x803))&x804);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x809 = 507494854618LLU;
	uint8_t x812 = 27U;
	uint64_t t63 = 9497086LLU;

	t63 = ((x809<<(x810/x811))&x812);

	if (t63 != 8LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x813 = UINT32_MAX;
	int8_t x814 = INT8_MAX;
	uint8_t x816 = 12U;

	t64 = ((x813<<(x814/x815))&x816);

	if (t64 != 12U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x817 = INT16_MAX;
	int32_t x818 = -1;
	volatile int16_t x819 = -1;
	uint64_t x820 = 280356190784398486LLU;

	t65 = ((x817<<(x818/x819))&x820);

	if (t65 != 9366LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x826 = 1;
	volatile int32_t t66 = -24227309;

	t66 = ((x825<<(x826/x827))&x828);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x841 = 194656784LLU;
	int32_t x842 = -54220;
	volatile int32_t x843 = INT32_MIN;
	volatile int16_t x844 = INT16_MAX;
	volatile uint64_t t67 = 35654093751310397LLU;

	t67 = ((x841<<(x842/x843))&x844);

	if (t67 != 14864LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x869 = 249;
	volatile int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MIN;
	static int32_t t68 = 0;

	t68 = ((x869<<(x870/x871))&x872);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x881 = 3867;
	int8_t x882 = INT8_MIN;
	volatile int8_t x883 = -46;
	int16_t x884 = INT16_MAX;
	volatile int32_t t69 = 14931510;

	t69 = ((x881<<(x882/x883))&x884);

	if (t69 != 15468) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x889 = 1568812LLU;
	static uint16_t x890 = 17U;
	uint16_t x892 = UINT16_MAX;
	uint64_t t70 = 7572217664113LLU;

	t70 = ((x889<<(x890/x891))&x892);

	if (t70 != 61484LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x917 = 212U;
	uint64_t x918 = UINT64_MAX;
	static volatile int32_t x919 = -91994244;
	uint8_t x920 = 45U;
	static int32_t t71 = -1;

	t71 = ((x917<<(x918/x919))&x920);

	if (t71 != 40) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x929 = INT64_MAX;
	volatile uint8_t x930 = UINT8_MAX;
	int32_t x931 = 376643117;
	static int32_t x932 = INT32_MIN;

	t72 = ((x929<<(x930/x931))&x932);

	if (t72 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x945 = 0;
	int16_t x946 = 6;
	int32_t x947 = INT32_MAX;
	static volatile int32_t x948 = INT32_MIN;
	int32_t t73 = -553;

	t73 = ((x945<<(x946/x947))&x948);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x953 = 1U;
	static int8_t x954 = 14;
	static uint16_t x955 = UINT16_MAX;
	int16_t x956 = INT16_MIN;

	t74 = ((x953<<(x954/x955))&x956);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x969 = INT64_MAX;
	uint8_t x970 = 6U;
	static uint64_t x971 = 65524627785956096LLU;
	volatile int64_t t75 = 2052421353437183233LL;

	t75 = ((x969<<(x970/x971))&x972);

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x981 = 10U;
	int8_t x984 = -1;
	uint32_t t76 = 17849U;

	t76 = ((x981<<(x982/x983))&x984);

	if (t76 != 10U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x989 = INT16_MAX;
	static uint32_t x990 = UINT32_MAX;
	static volatile int8_t x991 = INT8_MIN;
	uint16_t x992 = UINT16_MAX;
	volatile int32_t t77 = -903649;

	t77 = ((x989<<(x990/x991))&x992);

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x997 = 4U;
	uint8_t x998 = UINT8_MAX;
	int16_t x999 = INT16_MAX;
	static uint32_t x1000 = UINT32_MAX;
	volatile uint32_t t78 = 7721U;

	t78 = ((x997<<(x998/x999))&x1000);

	if (t78 != 4U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1001 = UINT16_MAX;
	int32_t x1003 = -1;
	volatile int16_t x1004 = INT16_MAX;
	int32_t t79 = 1023999;

	t79 = ((x1001<<(x1002/x1003))&x1004);

	if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1013 = 1869336819704LLU;
	uint32_t x1014 = 3U;
	int64_t x1015 = -792594756036434891LL;
	int64_t x1016 = INT64_MIN;
	uint64_t t80 = 227246243398984LLU;

	t80 = ((x1013<<(x1014/x1015))&x1016);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x1030 = INT16_MAX;
	static volatile int64_t x1031 = INT64_MAX;
	uint64_t x1032 = 132994LLU;

	t81 = ((x1029<<(x1030/x1031))&x1032);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x1045 = INT32_MAX;
	volatile int64_t x1046 = -1LL;
	static int32_t t82 = -6951393;

	t82 = ((x1045<<(x1046/x1047))&x1048);

	if (t82 != 2147450880) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x1057 = 19U;
	int32_t x1059 = INT32_MIN;
	int32_t x1060 = -16260307;
	int32_t t83 = -1;

	t83 = ((x1057<<(x1058/x1059))&x1060);

	if (t83 != 36) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x1077 = 18244U;
	static uint64_t x1078 = 61LLU;
	int32_t x1079 = 49762594;
	int16_t x1080 = 1215;
	static volatile int32_t t84 = 0;

	t84 = ((x1077<<(x1078/x1079))&x1080);

	if (t84 != 1028) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1081 = 6875811848902LLU;
	static int32_t x1082 = INT32_MAX;
	static int32_t x1083 = INT32_MAX;
	volatile uint64_t t85 = 13340625130845440LLU;

	t85 = ((x1081<<(x1082/x1083))&x1084);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1121 = 0U;
	volatile int8_t x1122 = INT8_MIN;
	int8_t x1123 = INT8_MIN;
	static volatile uint32_t x1124 = 37715U;
	volatile uint32_t t86 = 216724U;

	t86 = ((x1121<<(x1122/x1123))&x1124);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x1149 = INT8_MAX;
	volatile int64_t x1151 = INT64_MIN;

	t87 = ((x1149<<(x1150/x1151))&x1152);

	if (t87 != 23) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x1153 = UINT8_MAX;
	int32_t x1155 = -1;
	volatile int32_t t88 = 340407;

	t88 = ((x1153<<(x1154/x1155))&x1156);

	if (t88 != 452) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1161 = 5U;
	uint8_t x1162 = 1U;
	uint8_t x1163 = 5U;
	int8_t x1164 = 10;
	volatile int32_t t89 = -3632138;

	t89 = ((x1161<<(x1162/x1163))&x1164);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1181 = 26U;
	int16_t x1182 = -1;
	volatile int32_t x1184 = INT32_MIN;
	volatile int32_t t90 = 5;

	t90 = ((x1181<<(x1182/x1183))&x1184);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x1185 = UINT32_MAX;
	uint32_t x1186 = 406U;
	uint8_t x1187 = 14U;
	static int8_t x1188 = 4;
	volatile uint32_t t91 = 54547U;

	t91 = ((x1185<<(x1186/x1187))&x1188);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1198 = -1;
	int8_t x1199 = INT8_MIN;
	uint64_t x1200 = 3142738677005509009LLU;
	volatile uint64_t t92 = 8572393LLU;

	t92 = ((x1197<<(x1198/x1199))&x1200);

	if (t92 != 16LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1209 = 48381635U;
	volatile int64_t x1210 = INT64_MAX;
	int64_t x1211 = INT64_MIN;
	static int32_t x1212 = -16938850;
	uint32_t t93 = 1347330U;

	t93 = ((x1209<<(x1210/x1211))&x1212);

	if (t93 != 48236674U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x1221 = 9U;
	int16_t x1222 = -8437;
	volatile uint32_t x1224 = 0U;
	volatile uint32_t t94 = 16650803U;

	t94 = ((x1221<<(x1222/x1223))&x1224);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x1229 = 508U;
	uint8_t x1230 = 22U;
	volatile uint8_t x1231 = 5U;
	static int8_t x1232 = INT8_MIN;
	volatile uint32_t t95 = 23736U;

	t95 = ((x1229<<(x1230/x1231))&x1232);

	if (t95 != 8064U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1250 = 6;
	volatile int16_t x1251 = INT16_MIN;
	uint8_t x1252 = 1U;
	int32_t t96 = -9468;

	t96 = ((x1249<<(x1250/x1251))&x1252);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1254 = UINT8_MAX;
	int32_t x1255 = INT32_MAX;
	volatile int32_t t97 = 458133785;

	t97 = ((x1253<<(x1254/x1255))&x1256);

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1257 = 0U;
	int8_t x1258 = INT8_MIN;
	int8_t x1259 = INT8_MIN;
	uint64_t t98 = 163236235175408545LLU;

	t98 = ((x1257<<(x1258/x1259))&x1260);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1261 = INT32_MAX;
	uint8_t x1262 = UINT8_MAX;
	static int16_t x1263 = 858;
	static volatile uint16_t x1264 = UINT16_MAX;
	static volatile int32_t t99 = 183490;

	t99 = ((x1261<<(x1262/x1263))&x1264);

	if (t99 != 65535) { NG(); } else { ; }
	
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

