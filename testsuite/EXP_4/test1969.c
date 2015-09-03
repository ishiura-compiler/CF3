#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int64_t x19 = -1LL;
static int64_t x23 = INT64_MIN;
static int32_t t3 = 8;
int16_t x29 = 5;
volatile uint64_t t6 = 3294645LLU;
int32_t x61 = 2062;
int16_t x62 = INT16_MIN;
uint64_t x64 = UINT64_MAX;
static int16_t x68 = 695;
uint32_t x69 = 83U;
static int8_t x72 = -7;
volatile uint32_t t9 = 248U;
static int8_t x74 = -1;
static int32_t x75 = INT32_MIN;
int8_t x80 = INT8_MIN;
int32_t t12 = 749577;
volatile int16_t x85 = INT16_MAX;
int16_t x88 = -1;
volatile uint64_t x91 = 1LLU;
int64_t x94 = INT64_MAX;
volatile int64_t x100 = 1926166LL;
uint16_t x105 = 8009U;
static int16_t x111 = INT16_MIN;
int64_t x114 = INT64_MIN;
static uint16_t x115 = UINT16_MAX;
uint16_t x118 = 1420U;
volatile uint32_t x129 = UINT32_MAX;
static int32_t x164 = -1;
int32_t x172 = INT32_MIN;
int16_t x174 = -1;
static volatile uint32_t t31 = 6U;
uint16_t x197 = 9569U;
uint32_t x205 = 74U;
uint64_t x206 = UINT64_MAX;
uint32_t t34 = 4223U;
uint16_t x210 = 1011U;
uint32_t x222 = UINT32_MAX;
int8_t x265 = 1;
int8_t x283 = -1;
volatile int32_t t42 = 0;
int16_t x295 = -3609;
static uint32_t x326 = UINT32_MAX;
int64_t x327 = INT64_MAX;
int32_t x335 = INT32_MIN;
uint32_t x345 = 1442016288U;
int16_t x346 = INT16_MIN;
volatile int16_t x347 = INT16_MIN;
static uint64_t x349 = 349252422LLU;
static int32_t x352 = 628;
static volatile int16_t x356 = 0;
static volatile uint64_t t50 = UINT64_MAX;
volatile uint64_t x361 = UINT64_MAX;
uint64_t x362 = UINT64_MAX;
int64_t x363 = -52LL;
int16_t x368 = INT16_MIN;
volatile int8_t x377 = INT8_MAX;
int32_t x400 = -2513083;
volatile uint32_t x403 = 39021713U;
uint16_t x405 = 2456U;
uint16_t x430 = 0U;
volatile uint32_t t58 = UINT32_MAX;
uint16_t x437 = UINT16_MAX;
uint32_t x443 = 7092485U;
static volatile int16_t x444 = -13;
int32_t t60 = 11;
int16_t x463 = INT16_MIN;
int64_t x464 = INT64_MAX;
volatile int32_t x468 = INT32_MIN;
volatile int64_t t65 = -10852898379575022LL;
volatile uint16_t x496 = 1U;
static uint8_t x517 = UINT8_MAX;
volatile uint64_t t69 = 3660854LLU;
static int16_t x540 = -1712;
volatile int32_t t70 = 3164;
static volatile int32_t x544 = -89263178;
int32_t x551 = -1;
volatile int64_t t73 = 49263176LL;
static volatile int32_t t74 = 786620089;
uint64_t x577 = 198645918069806LLU;
int32_t x580 = 534972;
int32_t x595 = -387533;
int32_t t77 = -51786;
int64_t x603 = INT64_MIN;
int32_t t78 = -2640180;
uint8_t x617 = 40U;
int16_t x620 = INT16_MAX;
int16_t x625 = INT16_MAX;
int64_t x627 = 58827537810379LL;
int32_t t82 = -1;
int8_t x638 = INT8_MIN;
volatile int32_t t84 = -1004891;
volatile int32_t t86 = 611374;
volatile int16_t x678 = INT16_MIN;
uint32_t x679 = UINT32_MAX;
int64_t x683 = INT64_MAX;
uint32_t x693 = UINT32_MAX;
int8_t x700 = INT8_MIN;
int8_t x701 = 24;
volatile int32_t x702 = -1;
volatile int32_t x707 = -167358;
static volatile uint32_t x714 = UINT32_MAX;
int64_t x716 = INT64_MIN;
uint32_t x717 = UINT32_MAX;
int16_t x723 = INT16_MIN;
volatile int64_t x735 = INT64_MIN;
uint8_t x737 = 2U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint32_t x2 = UINT32_MAX;
	int64_t x4 = INT64_MIN;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = (x1<<(x2<(x3|x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 7;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = 49573;
	int32_t t1 = -44217995;

	t1 = (x9<<(x10<(x11|x12)));

	if (t1 != 14) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 0U;
	uint64_t x18 = 33052LLU;
	static int16_t x20 = INT16_MAX;
	int32_t t2 = -171494325;

	t2 = (x17<<(x18<(x19|x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x21 = 0;
	static uint64_t x22 = UINT64_MAX;
	uint16_t x24 = UINT16_MAX;

	t3 = (x21<<(x22<(x23|x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = 30U;
	int64_t x26 = -1LL;
	volatile uint8_t x27 = UINT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile uint32_t t4 = 13408399U;

	t4 = (x25<<(x26<(x27|x28)));

	if (t4 != 30U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x30 = -1;
	int32_t x31 = -1;
	volatile int8_t x32 = -1;
	volatile int32_t t5 = 1;

	t5 = (x29<<(x30<(x31|x32)));

	if (t5 != 5) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x37 = 6901047595120LLU;
	int32_t x38 = -240;
	int64_t x39 = INT64_MAX;
	int64_t x40 = -4903023659507LL;

	t6 = (x37<<(x38<(x39|x40)));

	if (t6 != 13802095190240LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x63 = 14;
	static int32_t t7 = 12893899;

	t7 = (x61<<(x62<(x63|x64)));

	if (t7 != 4124) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x65 = 55031562963613601LLU;
	static uint32_t x66 = UINT32_MAX;
	int8_t x67 = INT8_MIN;
	uint64_t t8 = 12722714LLU;

	t8 = (x65<<(x66<(x67|x68)));

	if (t8 != 55031562963613601LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x70 = INT64_MIN;
	int8_t x71 = -1;

	t9 = (x69<<(x70<(x71|x72)));

	if (t9 != 166U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x73 = 6362U;
	volatile int64_t x76 = 730630LL;
	volatile int32_t t10 = -19;

	t10 = (x73<<(x74<(x75|x76)));

	if (t10 != 6362) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x77 = UINT16_MAX;
	static int8_t x78 = -1;
	uint64_t x79 = 18517839LLU;
	int32_t t11 = -112337;

	t11 = (x77<<(x78<(x79|x80)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x81 = 328;
	static int8_t x82 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	volatile int32_t x84 = 1953415;

	t12 = (x81<<(x82<(x83|x84)));

	if (t12 != 656) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x86 = INT16_MIN;
	volatile int64_t x87 = INT64_MAX;
	volatile int32_t t13 = -1226479;

	t13 = (x85<<(x86<(x87|x88)));

	if (t13 != 65534) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x89 = INT32_MAX;
	int32_t x90 = INT32_MIN;
	int64_t x92 = 218300550482LL;
	volatile int32_t t14 = INT32_MAX;

	t14 = (x89<<(x90<(x91|x92)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = INT8_MAX;
	static int32_t x95 = -1;
	int8_t x96 = -1;
	volatile int32_t t15 = 3;

	t15 = (x93<<(x94<(x95|x96)));

	if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = 8LLU;
	int16_t x98 = INT16_MAX;
	int16_t x99 = INT16_MAX;
	volatile uint64_t t16 = 49336356665LLU;

	t16 = (x97<<(x98<(x99|x100)));

	if (t16 != 16LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x106 = INT8_MAX;
	volatile int8_t x107 = 1;
	int64_t x108 = 0LL;
	volatile int32_t t17 = -17110173;

	t17 = (x105<<(x106<(x107|x108)));

	if (t17 != 8009) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x109 = 110384564U;
	volatile uint64_t x110 = 45353874554719LLU;
	int64_t x112 = INT64_MIN;
	volatile uint32_t t18 = 2U;

	t18 = (x109<<(x110<(x111|x112)));

	if (t18 != 220769128U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x113 = 2254U;
	uint16_t x116 = UINT16_MAX;
	static int32_t t19 = 8045546;

	t19 = (x113<<(x114<(x115|x116)));

	if (t19 != 4508) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x117 = 2;
	static int8_t x119 = INT8_MAX;
	int16_t x120 = INT16_MAX;
	static volatile int32_t t20 = -158418;

	t20 = (x117<<(x118<(x119|x120)));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x125 = UINT32_MAX;
	int16_t x126 = -3436;
	int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	uint32_t t21 = UINT32_MAX;

	t21 = (x125<<(x126<(x127|x128)));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x130 = INT8_MIN;
	int64_t x131 = INT64_MIN;
	volatile int8_t x132 = 1;
	uint32_t t22 = UINT32_MAX;

	t22 = (x129<<(x130<(x131|x132)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x133 = 12828202807362632LL;
	int16_t x134 = -4150;
	volatile int16_t x135 = -1;
	volatile int16_t x136 = INT16_MAX;
	int64_t t23 = -217161811864991872LL;

	t23 = (x133<<(x134<(x135|x136)));

	if (t23 != 25656405614725264LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x145 = 355U;
	int32_t x146 = 808590528;
	volatile int16_t x147 = 0;
	int8_t x148 = INT8_MIN;
	uint32_t t24 = 431977U;

	t24 = (x145<<(x146<(x147|x148)));

	if (t24 != 355U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = 279431276618LL;
	int64_t x163 = INT64_MIN;
	static volatile uint32_t t25 = UINT32_MAX;

	t25 = (x161<<(x162<(x163|x164)));

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x165 = INT16_MAX;
	int32_t x166 = -1;
	volatile int32_t x167 = INT32_MIN;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t26 = 158879836;

	t26 = (x165<<(x166<(x167|x168)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x169 = 22415;
	int8_t x170 = INT8_MIN;
	volatile uint64_t x171 = 1LLU;
	volatile int32_t t27 = 47511210;

	t27 = (x169<<(x170<(x171|x172)));

	if (t27 != 22415) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x173 = UINT64_MAX;
	uint8_t x175 = 8U;
	volatile int32_t x176 = 574;
	uint64_t t28 = 424764074130676LLU;

	t28 = (x173<<(x174<(x175|x176)));

	if (t28 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x177 = 7U;
	volatile uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -195088;
	uint32_t t29 = 118U;

	t29 = (x177<<(x178<(x179|x180)));

	if (t29 != 7U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x181 = INT64_MAX;
	uint8_t x182 = UINT8_MAX;
	int16_t x183 = 6;
	int32_t x184 = INT32_MIN;
	volatile int64_t t30 = INT64_MAX;

	t30 = (x181<<(x182<(x183|x184)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x189 = 249974477U;
	int8_t x190 = -1;
	volatile int8_t x191 = INT8_MAX;
	static int8_t x192 = -13;

	t31 = (x189<<(x190<(x191|x192)));

	if (t31 != 249974477U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x198 = 188U;
	uint64_t x199 = 16138200671505LLU;
	int64_t x200 = 361LL;
	int32_t t32 = -135;

	t32 = (x197<<(x198<(x199|x200)));

	if (t32 != 19138) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x201 = UINT16_MAX;
	int64_t x202 = INT64_MAX;
	int16_t x203 = INT16_MIN;
	int32_t x204 = INT32_MIN;
	int32_t t33 = -374566;

	t33 = (x201<<(x202<(x203|x204)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x207 = UINT16_MAX;
	int16_t x208 = INT16_MAX;

	t34 = (x205<<(x206<(x207|x208)));

	if (t34 != 74U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x209 = 59;
	int8_t x211 = -10;
	volatile uint8_t x212 = 90U;
	volatile int32_t t35 = -42;

	t35 = (x209<<(x210<(x211|x212)));

	if (t35 != 59) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x217 = 5906033U;
	int8_t x218 = -1;
	static int64_t x219 = 15878440LL;
	static int32_t x220 = INT32_MAX;
	uint32_t t36 = 63742477U;

	t36 = (x217<<(x218<(x219|x220)));

	if (t36 != 11812066U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = 68U;
	static volatile int8_t x223 = INT8_MIN;
	static int16_t x224 = INT16_MAX;
	static int32_t t37 = 3412;

	t37 = (x221<<(x222<(x223|x224)));

	if (t37 != 68) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x266 = -38064123975LL;
	static int16_t x267 = INT16_MIN;
	int16_t x268 = 223;
	volatile int32_t t38 = 15;

	t38 = (x265<<(x266<(x267|x268)));

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x273 = 3888U;
	volatile uint8_t x274 = UINT8_MAX;
	uint64_t x275 = 400651630926520LLU;
	int32_t x276 = INT32_MIN;
	volatile uint32_t t39 = 1459500U;

	t39 = (x273<<(x274<(x275|x276)));

	if (t39 != 7776U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x277 = 34LLU;
	int32_t x278 = INT32_MIN;
	int16_t x279 = INT16_MIN;
	static int8_t x280 = -24;
	static uint64_t t40 = 57442701LLU;

	t40 = (x277<<(x278<(x279|x280)));

	if (t40 != 68LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x281 = 105041LLU;
	int16_t x282 = INT16_MAX;
	volatile int16_t x284 = 62;
	uint64_t t41 = 6965686LLU;

	t41 = (x281<<(x282<(x283|x284)));

	if (t41 != 105041LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x289 = 16096U;
	int64_t x290 = -144293456234LL;
	volatile int32_t x291 = -199;
	int64_t x292 = INT64_MIN;

	t42 = (x289<<(x290<(x291|x292)));

	if (t42 != 32192) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x293 = UINT64_MAX;
	uint64_t x294 = UINT64_MAX;
	int16_t x296 = -6;
	uint64_t t43 = UINT64_MAX;

	t43 = (x293<<(x294<(x295|x296)));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	uint32_t x303 = 1U;
	int8_t x304 = 4;
	static volatile int32_t t44 = -2;

	t44 = (x301<<(x302<(x303|x304)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	static volatile int32_t x319 = 202681;
	volatile uint32_t x320 = 122706U;
	static uint64_t t45 = UINT64_MAX;

	t45 = (x317<<(x318<(x319|x320)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x325 = INT8_MAX;
	int64_t x328 = INT64_MIN;
	int32_t t46 = 0;

	t46 = (x325<<(x326<(x327|x328)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x333 = 141882604656249LLU;
	volatile int32_t x334 = -1;
	int16_t x336 = -1;
	uint64_t t47 = 481803010LLU;

	t47 = (x333<<(x334<(x335|x336)));

	if (t47 != 141882604656249LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x348 = UINT64_MAX;
	static uint32_t t48 = 2993339U;

	t48 = (x345<<(x346<(x347|x348)));

	if (t48 != 2884032576U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	volatile uint64_t t49 = 29LLU;

	t49 = (x349<<(x350<(x351|x352)));

	if (t49 != 349252422LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x353 = UINT64_MAX;
	volatile uint64_t x354 = UINT64_MAX;
	volatile int32_t x355 = -388392;

	t50 = (x353<<(x354<(x355|x356)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x364 = -13;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x361<<(x362<(x363|x364)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x365 = 67U;
	int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	static volatile int32_t t52 = 1603900;

	t52 = (x365<<(x366<(x367|x368)));

	if (t52 != 67) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x378 = INT64_MAX;
	int8_t x379 = -1;
	static uint8_t x380 = 1U;
	volatile int32_t t53 = -28;

	t53 = (x377<<(x378<(x379|x380)));

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x397 = 38;
	static uint32_t x398 = UINT32_MAX;
	volatile int32_t x399 = INT32_MIN;
	volatile int32_t t54 = 82398;

	t54 = (x397<<(x398<(x399|x400)));

	if (t54 != 38) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x401 = 27878593484LL;
	volatile int32_t x402 = 2;
	static int16_t x404 = INT16_MAX;
	int64_t t55 = -54525LL;

	t55 = (x401<<(x402<(x403|x404)));

	if (t55 != 55757186968LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x406 = -1942;
	int16_t x407 = -1;
	int8_t x408 = INT8_MIN;
	volatile int32_t t56 = -12;

	t56 = (x405<<(x406<(x407|x408)));

	if (t56 != 4912) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x429 = INT32_MAX;
	int32_t x431 = INT32_MIN;
	uint16_t x432 = UINT16_MAX;
	int32_t t57 = INT32_MAX;

	t57 = (x429<<(x430<(x431|x432)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x433 = UINT32_MAX;
	volatile int16_t x434 = -1;
	int64_t x435 = INT64_MIN;
	uint32_t x436 = UINT32_MAX;

	t58 = (x433<<(x434<(x435|x436)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x438 = UINT64_MAX;
	uint64_t x439 = 13282531LLU;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t59 = 17194309;

	t59 = (x437<<(x438<(x439|x440)));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x441 = 1;
	volatile uint8_t x442 = 20U;

	t60 = (x441<<(x442<(x443|x444)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x445 = 1333U;
	static int64_t x446 = INT64_MAX;
	volatile uint64_t x447 = 7713681509723869LLU;
	int8_t x448 = 43;
	volatile int32_t t61 = 910;

	t61 = (x445<<(x446<(x447|x448)));

	if (t61 != 1333) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x453 = 3225605730059178522LL;
	int8_t x454 = -4;
	int64_t x455 = -4951176720028LL;
	int8_t x456 = INT8_MIN;
	int64_t t62 = -515624007435LL;

	t62 = (x453<<(x454<(x455|x456)));

	if (t62 != 3225605730059178522LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x461 = UINT8_MAX;
	volatile int8_t x462 = INT8_MIN;
	int32_t t63 = -717;

	t63 = (x461<<(x462<(x463|x464)));

	if (t63 != 510) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x465 = 29U;
	int8_t x466 = INT8_MIN;
	uint32_t x467 = 39754239U;
	uint32_t t64 = 2U;

	t64 = (x465<<(x466<(x467|x468)));

	if (t64 != 29U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x481 = 2030993116592LL;
	int8_t x482 = -1;
	int8_t x483 = -4;
	volatile uint32_t x484 = UINT32_MAX;

	t65 = (x481<<(x482<(x483|x484)));

	if (t65 != 2030993116592LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x493 = INT8_MAX;
	static int32_t x494 = INT32_MIN;
	volatile uint32_t x495 = UINT32_MAX;
	static volatile int32_t t66 = 764;

	t66 = (x493<<(x494<(x495|x496)));

	if (t66 != 254) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x513 = 211639764308132525LLU;
	volatile uint32_t x514 = 927662115U;
	int32_t x515 = 698801;
	int64_t x516 = INT64_MIN;
	volatile uint64_t t67 = 932928LLU;

	t67 = (x513<<(x514<(x515|x516)));

	if (t67 != 211639764308132525LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x518 = INT16_MAX;
	int64_t x519 = 522566022LL;
	static volatile int8_t x520 = -2;
	int32_t t68 = 3072852;

	t68 = (x517<<(x518<(x519|x520)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x521 = 106217LLU;
	uint64_t x522 = 179486LLU;
	int16_t x523 = INT16_MIN;
	uint32_t x524 = UINT32_MAX;

	t69 = (x521<<(x522<(x523|x524)));

	if (t69 != 212434LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x537 = 0U;
	int16_t x538 = INT16_MAX;
	uint64_t x539 = 3470560721592839586LLU;

	t70 = (x537<<(x538<(x539|x540)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint64_t x541 = 33428828LLU;
	volatile int32_t x542 = 1065443;
	int16_t x543 = -1;
	uint64_t t71 = 304270LLU;

	t71 = (x541<<(x542<(x543|x544)));

	if (t71 != 33428828LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x549 = 259774240533LLU;
	static uint32_t x550 = UINT32_MAX;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t72 = 8768165726362476886LLU;

	t72 = (x549<<(x550<(x551|x552)));

	if (t72 != 259774240533LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x565 = 11338421048616LL;
	static volatile int32_t x566 = 431;
	int8_t x567 = INT8_MIN;
	int8_t x568 = 25;

	t73 = (x565<<(x566<(x567|x568)));

	if (t73 != 11338421048616LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x573 = 21018U;
	volatile int8_t x574 = INT8_MIN;
	int32_t x575 = INT32_MIN;
	int64_t x576 = -1LL;

	t74 = (x573<<(x574<(x575|x576)));

	if (t74 != 42036) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x578 = INT64_MAX;
	int32_t x579 = 71;
	uint64_t t75 = 21144477216301LLU;

	t75 = (x577<<(x578<(x579|x580)));

	if (t75 != 198645918069806LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x581 = 2993LL;
	uint64_t x582 = UINT64_MAX;
	int8_t x583 = INT8_MIN;
	static int16_t x584 = INT16_MIN;
	int64_t t76 = 51239322105509LL;

	t76 = (x581<<(x582<(x583|x584)));

	if (t76 != 2993LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x593 = 5;
	volatile int16_t x594 = 18;
	static int16_t x596 = INT16_MIN;

	t77 = (x593<<(x594<(x595|x596)));

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x601 = INT8_MAX;
	volatile uint32_t x602 = 1985568058U;
	int64_t x604 = INT64_MIN;

	t78 = (x601<<(x602<(x603|x604)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x618 = -1;
	volatile int32_t x619 = INT32_MAX;
	volatile int32_t t79 = 197982;

	t79 = (x617<<(x618<(x619|x620)));

	if (t79 != 80) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x626 = -3;
	uint32_t x628 = 121965553U;
	static volatile int32_t t80 = 6787;

	t80 = (x625<<(x626<(x627|x628)));

	if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x629 = 2666571514311LL;
	int64_t x630 = 2LL;
	static int16_t x631 = INT16_MIN;
	uint8_t x632 = 6U;
	volatile int64_t t81 = -2LL;

	t81 = (x629<<(x630<(x631|x632)));

	if (t81 != 2666571514311LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x633 = UINT16_MAX;
	int64_t x634 = INT64_MAX;
	volatile int64_t x635 = -32372174415638LL;
	static uint64_t x636 = 25472LLU;

	t82 = (x633<<(x634<(x635|x636)));

	if (t82 != 131070) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x637 = 6LLU;
	volatile uint8_t x639 = UINT8_MAX;
	int8_t x640 = -1;
	uint64_t t83 = 3358303586738LLU;

	t83 = (x637<<(x638<(x639|x640)));

	if (t83 != 12LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x641 = 1;
	uint32_t x642 = UINT32_MAX;
	uint8_t x643 = UINT8_MAX;
	uint8_t x644 = 122U;

	t84 = (x641<<(x642<(x643|x644)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x649 = INT32_MAX;
	volatile uint8_t x650 = UINT8_MAX;
	static int64_t x651 = -1LL;
	int32_t x652 = INT32_MIN;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x649<<(x650<(x651|x652)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x657 = 107U;
	int16_t x658 = -1;
	uint64_t x659 = UINT64_MAX;
	uint16_t x660 = 6292U;

	t86 = (x657<<(x658<(x659|x660)));

	if (t86 != 107) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x661 = UINT16_MAX;
	int64_t x662 = -1LL;
	int32_t x663 = -1;
	int32_t x664 = INT32_MAX;
	volatile int32_t t87 = 1654;

	t87 = (x661<<(x662<(x663|x664)));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x669 = 11U;
	int32_t x670 = INT32_MIN;
	static uint64_t x671 = 19645905211038LLU;
	uint32_t x672 = UINT32_MAX;
	static uint32_t t88 = 18U;

	t88 = (x669<<(x670<(x671|x672)));

	if (t88 != 11U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x677 = 16795U;
	int64_t x680 = -229596031100898LL;
	static volatile int32_t t89 = -2844;

	t89 = (x677<<(x678<(x679|x680)));

	if (t89 != 16795) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x681 = INT8_MAX;
	static volatile uint8_t x682 = 3U;
	uint8_t x684 = UINT8_MAX;
	volatile int32_t t90 = 5289158;

	t90 = (x681<<(x682<(x683|x684)));

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x694 = INT64_MIN;
	volatile int32_t x695 = -335964828;
	static uint16_t x696 = 268U;
	uint32_t t91 = 15882061U;

	t91 = (x693<<(x694<(x695|x696)));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x697 = 0U;
	static int8_t x698 = 44;
	int64_t x699 = -2018879782435LL;
	volatile int32_t t92 = 1;

	t92 = (x697<<(x698<(x699|x700)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x703 = 12;
	static int8_t x704 = -1;
	int32_t t93 = 7405;

	t93 = (x701<<(x702<(x703|x704)));

	if (t93 != 24) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x705 = 3455U;
	volatile uint16_t x706 = UINT16_MAX;
	int64_t x708 = -1LL;
	int32_t t94 = 354;

	t94 = (x705<<(x706<(x707|x708)));

	if (t94 != 3455) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x713 = 14U;
	int64_t x715 = -150302107LL;
	static volatile int32_t t95 = -1292214;

	t95 = (x713<<(x714<(x715|x716)));

	if (t95 != 14) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x718 = INT64_MIN;
	static volatile int8_t x719 = -1;
	static uint16_t x720 = 12445U;
	uint32_t t96 = 305499U;

	t96 = (x717<<(x718<(x719|x720)));

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x721 = INT8_MAX;
	volatile int8_t x722 = INT8_MIN;
	int16_t x724 = INT16_MIN;
	int32_t t97 = 1782;

	t97 = (x721<<(x722<(x723|x724)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x733 = 8156927862LLU;
	int64_t x734 = INT64_MIN;
	int32_t x736 = -12155;
	volatile uint64_t t98 = 2821694622LLU;

	t98 = (x733<<(x734<(x735|x736)));

	if (t98 != 16313855724LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x738 = INT64_MIN;
	volatile int8_t x739 = 5;
	int64_t x740 = -12580LL;
	volatile int32_t t99 = -97475020;

	t99 = (x737<<(x738<(x739|x740)));

	if (t99 != 4) { NG(); } else { ; }
	
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

