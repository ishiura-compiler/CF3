#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int8_t x13 = -1;
int32_t x19 = INT32_MAX;
int64_t x21 = -1LL;
static int8_t x29 = -3;
uint32_t x30 = 790357U;
int64_t x31 = INT64_MIN;
volatile int32_t x51 = -1;
int32_t x56 = INT32_MAX;
int64_t t12 = 7845793135020LL;
static uint32_t x63 = 0U;
int16_t x68 = INT16_MIN;
int64_t t14 = -5LL;
volatile int32_t x76 = INT32_MIN;
volatile int64_t t16 = -191356LL;
static int16_t x78 = INT16_MAX;
uint64_t t18 = 1195791876361988722LLU;
int64_t x114 = INT64_MIN;
volatile int16_t x119 = -9382;
int32_t t27 = 966500;
uint32_t x121 = 218214697U;
volatile int16_t x122 = INT16_MIN;
volatile uint32_t t28 = 15U;
int16_t x129 = -464;
static int32_t x134 = INT32_MIN;
int16_t x135 = -766;
int8_t x141 = -1;
static volatile int16_t x147 = 826;
static volatile int32_t x149 = -126;
int64_t x157 = INT64_MAX;
int32_t x158 = INT32_MIN;
volatile int64_t t39 = -9215098150875625LL;
int8_t x171 = -1;
int16_t x174 = 27;
volatile uint64_t x180 = 4657LLU;
int64_t x183 = -1LL;
static volatile int64_t t43 = -1LL;
int32_t x188 = INT32_MAX;
uint64_t t44 = 102955LLU;
uint64_t x190 = 39791472LLU;
volatile uint32_t x191 = UINT32_MAX;
static int8_t x202 = 60;
static volatile uint64_t t47 = 244110881574LLU;
volatile int64_t t48 = -2LL;
static int8_t x212 = -1;
static uint64_t x214 = 432347908001960789LLU;
static volatile uint32_t t51 = 15686U;
int8_t x224 = -1;
int8_t x227 = -1;
static volatile int64_t t53 = 3819537376LL;
int32_t x237 = 1005;
int16_t x238 = -1;
int16_t x248 = INT16_MAX;
int64_t x249 = INT64_MAX;
int8_t x251 = 62;
volatile int64_t t58 = -545875830169LL;
volatile int32_t t60 = -41609;
static int64_t t61 = 6672970LL;
volatile uint64_t t62 = 463085637256LLU;
int64_t x275 = INT64_MIN;
volatile int8_t x277 = INT8_MIN;
int8_t x278 = -1;
uint32_t x279 = UINT32_MAX;
int64_t t65 = -704758597351LL;
static int8_t x284 = -1;
static int16_t x289 = 153;
uint16_t x292 = 210U;
uint32_t x295 = 496727520U;
volatile uint32_t x297 = UINT32_MAX;
uint64_t x299 = 971273933LLU;
int32_t x300 = 624;
static volatile int16_t x312 = 1160;
volatile int16_t x321 = INT16_MIN;
static uint32_t t75 = 36902U;
int64_t x329 = -1LL;
volatile int32_t x331 = INT32_MAX;
static int8_t x333 = INT8_MIN;
uint64_t x335 = UINT64_MAX;
static int32_t x336 = INT32_MIN;
volatile uint8_t x339 = 3U;
volatile int64_t t78 = -4520613LL;
volatile int32_t x350 = -1956056;
int16_t x351 = -1;
volatile int64_t t81 = -9874140400LL;
volatile uint16_t x353 = UINT16_MAX;
uint64_t x356 = 876646403832LLU;
uint64_t t82 = 15643890058731LLU;
uint32_t t83 = 2359U;
volatile uint64_t t84 = 4030507523455322687LLU;
int32_t x366 = INT32_MIN;
volatile uint32_t t85 = 949671948U;
static volatile uint32_t x375 = 688154926U;
int16_t x378 = INT16_MAX;
uint32_t x379 = 50920U;
static int64_t x398 = INT64_MIN;
int32_t x403 = -1;
int16_t x411 = INT16_MIN;
uint8_t x413 = 9U;
int64_t x416 = -299420597043LL;
static int64_t x417 = INT64_MIN;
int8_t x420 = -10;
int64_t t98 = -916LL;


void f0(void) {
	int16_t x1 = -207;
	int8_t x2 = 38;
	uint64_t x4 = 94260920363518LLU;
	static uint64_t t0 = 3874282403LLU;

	t0 = (x1/(x2^(x3/x4)));

	if (t0 != 485440633518672405LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 71775782LLU;
	volatile int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	static volatile int32_t x8 = INT32_MIN;
	uint64_t t1 = 20534703LLU;

	t1 = (x5/(x6^(x7/x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int64_t x10 = INT64_MIN;
	static volatile int64_t x11 = -1094953510LL;
	int16_t x12 = INT16_MIN;
	int64_t t2 = 676LL;

	t2 = (x9/(x10^(x11/x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x14 = UINT8_MAX;
	volatile uint64_t x15 = 251200697972LLU;
	static uint64_t x16 = 288359503265789LLU;
	static volatile uint64_t t3 = 2LLU;

	t3 = (x13/(x14^(x15/x16)));

	if (t3 != 72340172838076673LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	static volatile int32_t x18 = 414833868;
	volatile uint64_t x20 = 650522057257166318LLU;
	uint64_t t4 = 2307520435LLU;

	t4 = (x17/(x18^(x19/x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = -1;
	int8_t x23 = -28;
	volatile uint16_t x24 = 2U;
	int64_t t5 = -15274771179LL;

	t5 = (x21/(x22^(x23/x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int64_t x26 = 341890089LL;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 96U;
	volatile int64_t t6 = -32277096LL;

	t6 = (x25/(x26^(x27/x28)));

	if (t6 != 5LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x32 = 2U;
	volatile int64_t t7 = -281488482LL;

	t7 = (x29/(x30^(x31/x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 5U;
	static volatile int32_t x38 = 561997959;
	static volatile uint16_t x39 = UINT16_MAX;
	static volatile int32_t x40 = 6;
	static volatile uint32_t t8 = 50998031U;

	t8 = (x37/(x38^(x39/x40)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	volatile int8_t x42 = 1;
	int8_t x43 = INT8_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = (x41/(x42^(x43/x44)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MAX;
	int64_t x46 = -21684691865LL;
	int16_t x47 = -2;
	int16_t x48 = INT16_MIN;
	int64_t t10 = 2530789LL;

	t10 = (x45/(x46^(x47/x48)));

	if (t10 != -425340239LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -15;
	static uint64_t x50 = UINT64_MAX;
	uint8_t x52 = 80U;
	volatile uint64_t t11 = 27328510312LLU;

	t11 = (x49/(x50^(x51/x52)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = INT32_MAX;
	static volatile int64_t x54 = 10052LL;
	int16_t x55 = INT16_MAX;

	t12 = (x53/(x54^(x55/x56)));

	if (t12 != 213637LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = INT8_MIN;
	int32_t x62 = 2;
	static volatile int8_t x64 = INT8_MAX;
	static volatile uint32_t t13 = 8U;

	t13 = (x61/(x62^(x63/x64)));

	if (t13 != 2147483584U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	static int32_t x66 = -601;
	volatile int64_t x67 = INT64_MAX;

	t14 = (x65/(x66^(x67/x68)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x69 = -1;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = 0U;
	int32_t x72 = 173669;
	volatile int32_t t15 = -24250;

	t15 = (x69/(x70^(x71/x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MIN;
	static int8_t x74 = INT8_MIN;
	static int64_t x75 = INT64_MAX;

	t16 = (x73/(x74^(x75/x76)));

	if (t16 != -2147483711LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -30769;
	int16_t x79 = -1;
	static uint16_t x80 = 382U;
	volatile int32_t t17 = 1;

	t17 = (x77/(x78^(x79/x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	int16_t x82 = INT16_MAX;
	uint32_t x83 = 23U;
	static volatile uint64_t x84 = UINT64_MAX;

	t18 = (x81/(x82^(x83/x84)));

	if (t18 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	uint32_t x86 = UINT32_MAX;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MIN;
	uint32_t t19 = 111287U;

	t19 = (x85/(x86^(x87/x88)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = -1;
	static int16_t x90 = 12331;
	uint8_t x91 = 0U;
	static int64_t x92 = 1019334689538LL;
	volatile int64_t t20 = -6LL;

	t20 = (x89/(x90^(x91/x92)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = 38U;
	int8_t x94 = 1;
	volatile int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	static int64_t t21 = 221482005LL;

	t21 = (x93/(x94^(x95/x96)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = 3960426U;
	uint16_t x100 = 4U;
	int64_t t22 = 5910686995947262LL;

	t22 = (x97/(x98^(x99/x100)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = 8625896527965356LL;
	volatile int8_t x102 = -1;
	int16_t x103 = INT16_MAX;
	static int64_t x104 = -1LL;
	volatile int64_t t23 = 3319878443636LL;

	t23 = (x101/(x102^(x103/x104)));

	if (t23 != 263257539155LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	static int64_t x106 = 12698LL;
	int64_t x107 = INT64_MIN;
	static int32_t x108 = 1;
	int64_t t24 = -21618110188LL;

	t24 = (x105/(x106^(x107/x108)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x110 = 78337804745LLU;
	uint32_t x111 = 1237814987U;
	int8_t x112 = -1;
	uint64_t t25 = 653608LLU;

	t25 = (x109/(x110^(x111/x112)));

	if (t25 != 235476908LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = INT8_MAX;
	static int32_t x115 = INT32_MIN;
	static int64_t x116 = INT64_MIN;
	int64_t t26 = 19584403LL;

	t26 = (x113/(x114^(x115/x116)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	volatile int16_t x120 = 1;

	t27 = (x117/(x118^(x119/x120)));

	if (t27 != -91827) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x123 = UINT8_MAX;
	uint32_t x124 = UINT32_MAX;

	t28 = (x121/(x122^(x123/x124)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MIN;
	int32_t x126 = 114184;
	uint8_t x127 = UINT8_MAX;
	static uint16_t x128 = 599U;
	static int64_t t29 = 79583LL;

	t29 = (x125/(x126^(x127/x128)));

	if (t29 != -80776396315199LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x130 = UINT16_MAX;
	volatile int16_t x131 = INT16_MAX;
	int8_t x132 = -30;
	int32_t t30 = -42090742;

	t30 = (x129/(x130^(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = -1;
	uint64_t x136 = UINT64_MAX;
	static volatile uint64_t t31 = 1923899262LLU;

	t31 = (x133/(x134^(x135/x136)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 114922673208547266LLU;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MIN;
	volatile uint64_t t32 = 2583206093724LLU;

	t32 = (x137/(x138^(x139/x140)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = INT16_MAX;
	static uint16_t x143 = UINT16_MAX;
	uint16_t x144 = 124U;
	static int32_t t33 = 107;

	t33 = (x141/(x142^(x143/x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x145 = 2328655;
	int8_t x146 = INT8_MAX;
	uint32_t x148 = 70188U;
	volatile uint32_t t34 = 927535U;

	t34 = (x145/(x146^(x147/x148)));

	if (t34 != 18335U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x150 = -1;
	static volatile int8_t x151 = 24;
	uint16_t x152 = UINT16_MAX;
	int32_t t35 = -602;

	t35 = (x149/(x150^(x151/x152)));

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	uint16_t x154 = 1U;
	int8_t x155 = 1;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t36 = INT32_MIN;

	t36 = (x153/(x154^(x155/x156)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x159 = 46LLU;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t37 = 7363551202820074LLU;

	t37 = (x157/(x158^(x159/x160)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	static int32_t x162 = INT32_MAX;
	int16_t x163 = -1;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t38 = 255235630;

	t38 = (x161/(x162^(x163/x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = -23;
	int64_t x166 = -91LL;
	static int64_t x167 = -1LL;
	int8_t x168 = -1;

	t39 = (x165/(x166^(x167/x168)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	static uint32_t x170 = 197727U;
	int16_t x172 = INT16_MAX;
	volatile uint32_t t40 = 631708935U;

	t40 = (x169/(x170^(x171/x172)));

	if (t40 != 21721U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	static int32_t x175 = INT32_MAX;
	uint16_t x176 = 3462U;
	static int64_t t41 = -1512009727302471744LL;

	t41 = (x173/(x174^(x175/x176)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -1;
	int16_t x178 = -253;
	static uint16_t x179 = UINT16_MAX;
	uint64_t t42 = 136808034745330022LLU;

	t42 = (x177/(x178^(x179/x180)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x181 = 53U;
	int64_t x182 = -1LL;
	int64_t x184 = 2252181060803210620LL;

	t43 = (x181/(x182^(x183/x184)));

	if (t43 != -53LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = 3835;
	static volatile int8_t x186 = INT8_MAX;
	uint64_t x187 = UINT64_MAX;

	t44 = (x185/(x186^(x187/x188)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 483901817LLU;
	int64_t x192 = -3371LL;
	uint64_t t45 = 94564087577LLU;

	t45 = (x189/(x190^(x191/x192)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 82708;
	static uint32_t x194 = UINT32_MAX;
	int32_t x195 = INT32_MAX;
	volatile uint64_t x196 = 6005LLU;
	static uint64_t t46 = 273567892450664LLU;

	t46 = (x193/(x194^(x195/x196)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MAX;
	int32_t x203 = INT32_MAX;
	static uint64_t x204 = UINT64_MAX;

	t47 = (x201/(x202^(x203/x204)));

	if (t47 != 546LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = -94611377316LL;
	int8_t x206 = INT8_MIN;
	int8_t x207 = 0;
	volatile int64_t x208 = -62462LL;

	t48 = (x205/(x206^(x207/x208)));

	if (t48 != 739151385LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x209 = 2949U;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	int32_t t49 = 113696;

	t49 = (x209/(x210^(x211/x212)));

	if (t49 != 2949) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 3;
	int16_t x215 = 20;
	volatile int64_t x216 = 301295550422640LL;
	uint64_t t50 = 3223854LLU;

	t50 = (x213/(x214^(x215/x216)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 96U;
	int32_t x219 = 185;
	uint32_t x220 = 7734U;

	t51 = (x217/(x218^(x219/x220)));

	if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = 1683651149274604854LLU;
	uint32_t x223 = UINT32_MAX;
	uint64_t t52 = 385LLU;

	t52 = (x221/(x222^(x223/x224)));

	if (t52 != 10LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = -809704837;
	int8_t x226 = 9;
	volatile int64_t x228 = -120580963412128563LL;

	t53 = (x225/(x226^(x227/x228)));

	if (t53 != -89967204LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x229 = UINT8_MAX;
	volatile int8_t x230 = INT8_MIN;
	static int32_t x231 = -1;
	int64_t x232 = -1LL;
	static volatile int64_t t54 = 2586LL;

	t54 = (x229/(x230^(x231/x232)));

	if (t54 != -2LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MAX;
	static int32_t x235 = 1002;
	uint32_t x236 = 2U;
	volatile uint64_t t55 = 648LLU;

	t55 = (x233/(x234^(x235/x236)));

	if (t55 != 8589936600LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x239 = INT32_MAX;
	int16_t x240 = INT16_MAX;
	volatile int32_t t56 = -197;

	t56 = (x237/(x238^(x239/x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x245 = UINT64_MAX;
	uint16_t x246 = 387U;
	static int64_t x247 = 725097585989LL;
	volatile uint64_t t57 = 378339942328LLU;

	t57 = (x245/(x246^(x247/x248)));

	if (t57 != 833609101351LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x250 = 336579715;
	static volatile int32_t x252 = INT32_MIN;

	t58 = (x249/(x250^(x251/x252)));

	if (t58 != 27403232060LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	uint64_t x255 = 278229733LLU;
	volatile int32_t x256 = INT32_MIN;
	volatile uint64_t t59 = 104485019456LLU;

	t59 = (x253/(x254^(x255/x256)));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 1843U;
	int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MIN;

	t60 = (x257/(x258^(x259/x260)));

	if (t60 != -921) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 4070258107LL;
	int16_t x262 = -1;
	static int32_t x263 = -1;
	int8_t x264 = INT8_MAX;

	t61 = (x261/(x262^(x263/x264)));

	if (t61 != -4070258107LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 34205397U;
	static uint64_t x266 = 40018667LLU;
	int64_t x267 = INT64_MIN;
	volatile int32_t x268 = INT32_MIN;

	t62 = (x265/(x266^(x267/x268)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = -1;
	uint16_t x270 = 18201U;
	int8_t x271 = INT8_MAX;
	int32_t x272 = INT32_MIN;
	volatile int32_t t63 = 7647;

	t63 = (x269/(x270^(x271/x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = 8034084889746435LL;
	int8_t x274 = -35;
	int8_t x276 = INT8_MIN;
	volatile int64_t t64 = 260294607LL;

	t64 = (x273/(x274^(x275/x276)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x280 = INT64_MIN;

	t65 = (x277/(x278^(x279/x280)));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x281 = 31135U;
	static int8_t x282 = 7;
	uint8_t x283 = 0U;
	volatile int32_t t66 = -7;

	t66 = (x281/(x282^(x283/x284)));

	if (t66 != 4447) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 264868LLU;
	uint64_t t67 = 1268450809125715LLU;

	t67 = (x289/(x290^(x291/x292)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x293 = INT16_MIN;
	static int64_t x294 = -1LL;
	int64_t x296 = INT64_MIN;
	volatile int64_t t68 = -100534848LL;

	t68 = (x293/(x294^(x295/x296)));

	if (t68 != 32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x298 = INT32_MIN;
	volatile uint64_t t69 = 2851926LLU;

	t69 = (x297/(x298^(x299/x300)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x301 = -16;
	static int8_t x302 = -1;
	uint64_t x303 = UINT64_MAX;
	static int64_t x304 = INT64_MAX;
	volatile uint64_t t70 = 154881LLU;

	t70 = (x301/(x302^(x303/x304)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	uint16_t x306 = 28U;
	int8_t x307 = INT8_MIN;
	static int32_t x308 = -681983;
	static int32_t t71 = 1362;

	t71 = (x305/(x306^(x307/x308)));

	if (t71 != 76695844) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MIN;
	int8_t x310 = -1;
	uint8_t x311 = UINT8_MAX;
	int32_t t72 = 46410;

	t72 = (x309/(x310^(x311/x312)));

	if (t72 != 128) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x317 = 94U;
	volatile int16_t x318 = INT16_MIN;
	uint64_t x319 = 294969574422256LLU;
	uint64_t x320 = 15989791030547625LLU;
	static uint64_t t73 = 21954636637180LLU;

	t73 = (x317/(x318^(x319/x320)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x322 = 6U;
	uint16_t x323 = UINT16_MAX;
	static int8_t x324 = INT8_MIN;
	int32_t t74 = -94405;

	t74 = (x321/(x322^(x323/x324)));

	if (t74 != 64) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = 0;
	uint32_t x326 = 5U;
	volatile uint8_t x327 = 2U;
	int8_t x328 = -1;

	t75 = (x325/(x326^(x327/x328)));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x330 = 40225U;
	uint32_t x332 = 103496403U;
	static volatile int64_t t76 = -972660LL;

	t76 = (x329/(x330^(x331/x332)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x334 = INT64_MAX;
	uint64_t t77 = 5994719174550192164LLU;

	t77 = (x333/(x334^(x335/x336)));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	static volatile int32_t x338 = -27003;
	static int64_t x340 = 2405064LL;

	t78 = (x337/(x338^(x339/x340)));

	if (t78 != 79527LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 436424015U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 5U;
	volatile uint32_t t79 = 189U;

	t79 = (x341/(x342^(x343/x344)));

	if (t79 != 16648U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MIN;
	int64_t x347 = -37356164634387535LL;
	uint16_t x348 = UINT16_MAX;
	volatile int64_t t80 = -2262796LL;

	t80 = (x345/(x346^(x347/x348)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = -1;
	int64_t x352 = INT64_MIN;

	t81 = (x349/(x350^(x351/x352)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x354 = 81U;
	int8_t x355 = INT8_MAX;

	t82 = (x353/(x354^(x355/x356)));

	if (t82 != 809LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = 0;
	static volatile uint32_t x358 = 54U;
	static int32_t x359 = INT32_MAX;
	uint8_t x360 = 42U;

	t83 = (x357/(x358^(x359/x360)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = 170864228LL;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 854675896179066598LLU;
	uint64_t x364 = 1361691194708764LLU;

	t84 = (x361/(x362^(x363/x364)));

	if (t84 != 262061LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = 355791U;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = 13959U;

	t85 = (x365/(x366^(x367/x368)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int32_t x370 = 29798535;
	int16_t x371 = -6854;
	int32_t x372 = -1;
	volatile int32_t t86 = 109204879;

	t86 = (x369/(x370^(x371/x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = 485082244194719LL;
	int8_t x374 = INT8_MIN;
	volatile uint8_t x376 = 110U;
	int64_t t87 = -188044LL;

	t87 = (x373/(x374^(x375/x376)));

	if (t87 != 113106LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x377 = 139U;
	int32_t x380 = INT32_MAX;
	uint32_t t88 = 1164378134U;

	t88 = (x377/(x378^(x379/x380)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x381 = 20U;
	int64_t x382 = INT64_MAX;
	int32_t x383 = -53839456;
	int64_t x384 = -7LL;
	int64_t t89 = 3867304815LL;

	t89 = (x381/(x382^(x383/x384)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t90 = -24135253LL;

	t90 = (x385/(x386^(x387/x388)));

	if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x389 = 7U;
	int64_t x390 = -1LL;
	int16_t x391 = -1;
	int16_t x392 = -1;
	int64_t t91 = 747968579939388448LL;

	t91 = (x389/(x390^(x391/x392)));

	if (t91 != -3LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x397 = 4935LLU;
	int32_t x399 = INT32_MIN;
	uint16_t x400 = 70U;
	volatile uint64_t t92 = 229796622574LLU;

	t92 = (x397/(x398^(x399/x400)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	int64_t x404 = INT64_MIN;
	volatile int64_t t93 = 26061432461303LL;

	t93 = (x401/(x402^(x403/x404)));

	if (t93 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	int8_t x406 = -1;
	uint8_t x407 = 82U;
	int32_t x408 = -22;
	int32_t t94 = 3;

	t94 = (x405/(x406^(x407/x408)));

	if (t94 != -16384) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = -24717777878065LL;
	volatile uint16_t x410 = 32749U;
	static volatile int64_t x412 = 239975908981LL;
	int64_t t95 = -41340660603207434LL;

	t95 = (x409/(x410^(x411/x412)));

	if (t95 != -754764355LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x414 = UINT8_MAX;
	static uint64_t x415 = 210542053783847LLU;
	static volatile uint64_t t96 = 26391165367LLU;

	t96 = (x413/(x414^(x415/x416)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	volatile int64_t t97 = 214LL;

	t97 = (x417/(x418^(x419/x420)));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x421 = 0;
	static int16_t x422 = -958;
	volatile uint16_t x423 = UINT16_MAX;
	int64_t x424 = INT64_MIN;

	t98 = (x421/(x422^(x423/x424)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MIN;
	static uint8_t x426 = 1U;
	int32_t x427 = INT32_MIN;
	static int8_t x428 = INT8_MAX;
	volatile int32_t t99 = -8;

	t99 = (x425/(x426^(x427/x428)));

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

