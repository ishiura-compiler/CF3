#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x6 = 15159U;
int32_t x11 = INT32_MIN;
uint32_t x12 = 87U;
volatile int64_t t2 = -30166LL;
uint32_t x21 = UINT32_MAX;
int32_t x23 = INT32_MIN;
uint32_t x27 = 6U;
static int64_t x28 = -1195040740452902340LL;
int64_t x36 = INT64_MIN;
uint64_t t8 = 140730LLU;
int8_t x37 = INT8_MIN;
static volatile int32_t x54 = INT32_MIN;
int32_t x65 = INT32_MIN;
int32_t x74 = 1632;
int8_t x75 = INT8_MAX;
int16_t x76 = -3812;
int8_t x84 = 1;
static int16_t x87 = 0;
uint32_t t25 = 11U;
int32_t x106 = INT32_MIN;
int32_t x114 = INT32_MIN;
uint32_t x115 = UINT32_MAX;
uint32_t t32 = 15576U;
int32_t x137 = -1;
static int32_t x139 = INT32_MIN;
int16_t x140 = INT16_MIN;
uint64_t x150 = 451834919814LLU;
uint64_t x169 = UINT64_MAX;
uint16_t x172 = 1U;
uint8_t x173 = UINT8_MAX;
int64_t x187 = INT64_MIN;
int64_t t45 = -198LL;
int64_t x193 = -23537608740817456LL;
uint64_t x194 = UINT64_MAX;
int16_t x195 = 0;
int16_t x196 = INT16_MIN;
volatile int64_t t49 = 416192448289278385LL;
int64_t x212 = INT64_MAX;
int8_t x213 = 0;
uint64_t x219 = 15994483LLU;
static int64_t x227 = INT64_MIN;
volatile int64_t t55 = 66LL;
static int8_t x230 = INT8_MIN;
volatile int64_t x235 = INT64_MAX;
volatile uint8_t x237 = 0U;
volatile int64_t t58 = -40833LL;
int16_t x244 = INT16_MIN;
int16_t x247 = INT16_MIN;
volatile int32_t x252 = -3630;
volatile int32_t t61 = 23;
uint32_t x254 = 52U;
static int8_t x269 = -1;
uint64_t x270 = 13627099LLU;
uint32_t x289 = UINT32_MAX;
uint64_t t71 = 2996LLU;
uint32_t t72 = 15U;
volatile int32_t x308 = INT32_MIN;
volatile uint64_t t75 = 185LLU;
static int16_t x310 = INT16_MIN;
static int16_t x312 = 27;
uint64_t x314 = 1011013637039LLU;
static int16_t x319 = INT16_MIN;
volatile uint32_t t78 = 24304U;
volatile int64_t x323 = INT64_MAX;
static volatile int32_t x324 = INT32_MIN;
uint32_t x326 = UINT32_MAX;
uint32_t x327 = 3583U;
uint64_t x329 = 395180935515704LLU;
volatile int64_t x331 = INT64_MIN;
int16_t x342 = INT16_MIN;
static int64_t t84 = 4071715175454642912LL;
int32_t x347 = 239511;
static int8_t x350 = -1;
volatile uint64_t x352 = 123086390163054LLU;
int16_t x359 = INT16_MIN;
uint8_t x368 = 1U;
int8_t x369 = 4;
int8_t x372 = -1;
uint32_t t90 = 4586865U;
volatile int64_t x373 = INT64_MIN;
int8_t x375 = INT8_MIN;
int16_t x376 = 803;
static uint16_t x380 = 11616U;
uint64_t t93 = 7611871LLU;
int16_t x388 = -1;
uint32_t x392 = 16U;
int32_t x400 = INT32_MIN;
int8_t x401 = INT8_MIN;
int8_t x405 = INT8_MAX;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int16_t x2 = INT16_MAX;
	volatile uint16_t x3 = 17U;
	int16_t x4 = -1;
	static uint32_t t0 = 245U;

	t0 = (x1^(x2^(x3/x4)));

	if (t0 != 32751U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 158963633108LL;
	volatile uint64_t x7 = 239LLU;
	int64_t x8 = 212302251865454349LL;
	uint64_t t1 = 2654355LLU;

	t1 = (x5^(x6^(x7/x8)));

	if (t1 != 158963642595LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = UINT32_MAX;

	t2 = (x9^(x10^(x11/x12)));

	if (t2 != -9223372032584492233LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = -1;
	int16_t x15 = INT16_MIN;
	uint64_t x16 = 3755882536515070LLU;
	uint64_t t3 = 1950LLU;

	t3 = (x13^(x14^(x15/x16)));

	if (t3 != 4911LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	uint8_t x18 = UINT8_MAX;
	static volatile int8_t x19 = INT8_MAX;
	static volatile uint64_t x20 = 8LLU;
	volatile uint64_t t4 = 12LLU;

	t4 = (x17^(x18^(x19/x20)));

	if (t4 != 18446744073709551375LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int8_t x24 = 60;
	uint32_t t5 = 1627029299U;

	t5 = (x21^(x22^(x23/x24)));

	if (t5 != 4259160609U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int32_t x26 = INT32_MIN;
	int64_t t6 = -75952793685012LL;

	t6 = (x25^(x26^(x27/x28)));

	if (t6 != 2147483520LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	uint16_t x30 = 0U;
	static volatile int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = 238820;

	t7 = (x29^(x30^(x31/x32)));

	if (t7 != -256) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 3U;
	volatile int32_t x34 = INT32_MIN;
	uint64_t x35 = 8420317440433973LLU;

	t8 = (x33^(x34^(x35/x36)));

	if (t8 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	int8_t x39 = INT8_MIN;
	static uint16_t x40 = UINT16_MAX;
	int64_t t9 = -6849300LL;

	t9 = (x37^(x38^(x39/x40)));

	if (t9 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 9U;
	volatile int32_t x42 = INT32_MAX;
	uint32_t x43 = 1944325U;
	static int32_t x44 = INT32_MAX;
	volatile uint32_t t10 = 7U;

	t10 = (x41^(x42^(x43/x44)));

	if (t10 != 2147483638U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 30;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 1U;
	volatile int64_t t11 = 13LL;

	t11 = (x45^(x46^(x47/x48)));

	if (t11 != 9223372036854743070LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	uint8_t x52 = UINT8_MAX;
	static int32_t t12 = -12;

	t12 = (x49^(x50^(x51/x52)));

	if (t12 != 8421631) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 4U;
	uint16_t x55 = 13867U;
	volatile int8_t x56 = 2;
	int32_t t13 = -43;

	t13 = (x53^(x54^(x55/x56)));

	if (t13 != -2147476719) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	static int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	uint8_t x60 = 4U;
	volatile int64_t t14 = 358237LL;

	t14 = (x57^(x58^(x59/x60)));

	if (t14 != -2147483617LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = -116;
	int32_t x63 = -1;
	volatile int64_t x64 = INT64_MIN;
	int64_t t15 = 120LL;

	t15 = (x61^(x62^(x63/x64)));

	if (t15 != 2147483532LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int16_t x68 = 1;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x65^(x66^(x67/x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -137177LL;
	static uint64_t x70 = UINT64_MAX;
	uint8_t x71 = 2U;
	int16_t x72 = -4;
	uint64_t t17 = 27430LLU;

	t17 = (x69^(x70^(x71/x72)));

	if (t17 != 137176LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static volatile int32_t t18 = 17328;

	t18 = (x73^(x74^(x75/x76)));

	if (t18 != 2147482015) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 548U;
	int64_t x78 = 48192LL;
	static int64_t x79 = 546976860603575LL;
	static uint16_t x80 = 7846U;
	int64_t t19 = -21LL;

	t19 = (x77^(x78^(x79/x80)));

	if (t19 != 69714080106LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 1;
	int16_t x82 = 2486;
	static int32_t x83 = INT32_MIN;
	volatile int32_t t20 = 37283;

	t20 = (x81^(x82^(x83/x84)));

	if (t20 != -2147481161) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	volatile int8_t x86 = -29;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = 89435382264LLU;

	t21 = (x85^(x86^(x87/x88)));

	if (t21 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 13948LLU;
	int8_t x90 = INT8_MIN;
	uint16_t x91 = UINT16_MAX;
	static uint8_t x92 = UINT8_MAX;
	static uint64_t t22 = 8931910007LLU;

	t22 = (x89^(x90^(x91/x92)));

	if (t22 != 18446744073709537533LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = INT64_MIN;
	static volatile int8_t x95 = INT8_MIN;
	int64_t x96 = INT64_MIN;
	volatile int64_t t23 = 0LL;

	t23 = (x93^(x94^(x95/x96)));

	if (t23 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 138LL;
	int8_t x98 = -1;
	volatile int32_t x99 = INT32_MIN;
	static int8_t x100 = 1;
	volatile int64_t t24 = 36877676028478LL;

	t24 = (x97^(x98^(x99/x100)));

	if (t24 != 2147483509LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = UINT8_MAX;
	volatile uint16_t x102 = 7273U;
	int16_t x103 = 0;
	static uint32_t x104 = 2402U;

	t25 = (x101^(x102^(x103/x104)));

	if (t25 != 7318U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 1;
	volatile uint16_t x107 = 1168U;
	static uint8_t x108 = 2U;
	int32_t t26 = -596;

	t26 = (x105^(x106^(x107/x108)));

	if (t26 != -2147483063) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int16_t x110 = -1;
	int8_t x111 = INT8_MIN;
	int32_t x112 = -22748331;
	int32_t t27 = INT32_MIN;

	t27 = (x109^(x110^(x111/x112)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x116 = INT16_MAX;
	volatile uint32_t t28 = 7U;

	t28 = (x113^(x114^(x115/x116)));

	if (t28 != 2147352452U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int64_t x118 = -12989LL;
	int16_t x119 = -1260;
	static int8_t x120 = -1;
	static int64_t t29 = -3342633830515933LL;

	t29 = (x117^(x118^(x119/x120)));

	if (t29 != 13871LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x121 = -1;
	static uint64_t x122 = 16280024LLU;
	uint8_t x123 = 2U;
	volatile int32_t x124 = 55;
	volatile uint64_t t30 = 4399827541LLU;

	t30 = (x121^(x122^(x123/x124)));

	if (t30 != 18446744073693271591LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MAX;
	int16_t x130 = -1;
	int16_t x131 = -3572;
	int32_t x132 = 1076667;
	volatile int32_t t31 = INT32_MIN;

	t31 = (x129^(x130^(x131/x132)));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -4;

	t32 = (x133^(x134^(x135/x136)));

	if (t32 != 536903679U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x138 = UINT64_MAX;
	static uint64_t t33 = 502432585358225444LLU;

	t33 = (x137^(x138^(x139/x140)));

	if (t33 != 65536LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x141 = 1U;
	int64_t x142 = 630690479294LL;
	int8_t x143 = INT8_MIN;
	static int64_t x144 = -17728LL;
	int64_t t34 = 131920612LL;

	t34 = (x141^(x142^(x143/x144)));

	if (t34 != 630690479295LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MIN;
	uint16_t x147 = UINT16_MAX;
	volatile int8_t x148 = INT8_MIN;
	int32_t t35 = 1830456;

	t35 = (x145^(x146^(x147/x148)));

	if (t35 != -511) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int32_t x151 = -777348812;
	volatile int8_t x152 = 5;
	uint64_t t36 = 23LLU;

	t36 = (x149^(x150^(x151/x152)));

	if (t36 != 451947920455LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	volatile int64_t x154 = INT64_MIN;
	static uint16_t x155 = 3U;
	int16_t x156 = INT16_MIN;
	volatile int64_t t37 = -112934236LL;

	t37 = (x153^(x154^(x155/x156)));

	if (t37 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = INT64_MIN;
	volatile int32_t x158 = INT32_MIN;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = 3520U;
	int64_t t38 = -941874LL;

	t38 = (x157^(x158^(x159/x160)));

	if (t38 != -9220751759263271247LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -19;
	uint32_t x162 = UINT32_MAX;
	static int32_t x163 = INT32_MIN;
	static int32_t x164 = 12;
	uint32_t t39 = 494538095U;

	t39 = (x161^(x162^(x163/x164)));

	if (t39 != 4116010308U) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 42U;
	static volatile uint8_t x166 = UINT8_MAX;
	uint32_t x167 = 1495352U;
	int32_t x168 = INT32_MIN;
	uint32_t t40 = 1316537U;

	t40 = (x165^(x166^(x167/x168)));

	if (t40 != 213U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	static volatile uint32_t x171 = UINT32_MAX;
	volatile uint64_t t41 = 2077762LLU;

	t41 = (x169^(x170^(x171/x172)));

	if (t41 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = INT32_MIN;
	static int16_t x175 = -9154;
	int32_t x176 = INT32_MIN;
	volatile int32_t t42 = 233;

	t42 = (x173^(x174^(x175/x176)));

	if (t42 != -2147483393) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MIN;
	int16_t x180 = -1;
	int32_t t43 = -2641;

	t43 = (x177^(x178^(x179/x180)));

	if (t43 != -65536) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MAX;
	int32_t x183 = -1874;
	int16_t x184 = INT16_MIN;
	static uint64_t t44 = 182360LLU;

	t44 = (x181^(x182^(x183/x184)));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	static int16_t x188 = INT16_MIN;

	t45 = (x185^(x186^(x187/x188)));

	if (t45 != 281474976710783LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x189 = UINT64_MAX;
	uint64_t x190 = 128469LLU;
	static uint16_t x191 = 359U;
	volatile int32_t x192 = INT32_MAX;
	uint64_t t46 = 369691LLU;

	t46 = (x189^(x190^(x191/x192)));

	if (t46 != 18446744073709423146LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t t47 = 7340962778233LLU;

	t47 = (x193^(x194^(x195/x196)));

	if (t47 != 23537608740817455LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 12U;
	volatile uint32_t x198 = 110U;
	int16_t x199 = -1;
	int16_t x200 = -1;
	volatile uint32_t t48 = 616227U;

	t48 = (x197^(x198^(x199/x200)));

	if (t48 != 99U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	int16_t x203 = -169;
	int16_t x204 = 16156;

	t49 = (x201^(x202^(x203/x204)));

	if (t49 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	uint32_t x206 = UINT32_MAX;
	int64_t x207 = -706610950LL;
	int64_t x208 = -484026841177098073LL;
	static uint64_t t50 = 57546LLU;

	t50 = (x205^(x206^(x207/x208)));

	if (t50 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = UINT8_MAX;
	int32_t x211 = -1;
	int64_t t51 = 2879994253LL;

	t51 = (x209^(x210^(x211/x212)));

	if (t51 != -2147483393LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x214 = 13990U;
	volatile uint16_t x215 = 473U;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t52 = 0LLU;

	t52 = (x213^(x214^(x215/x216)));

	if (t52 != 13990LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 7172839639LL;
	uint8_t x218 = UINT8_MAX;
	uint32_t x220 = UINT32_MAX;
	volatile uint64_t t53 = 366179381189354LLU;

	t53 = (x217^(x218^(x219/x220)));

	if (t53 != 7172839464LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -1;
	uint64_t x222 = 361004653LLU;
	static uint8_t x223 = 14U;
	volatile int16_t x224 = INT16_MIN;
	uint64_t t54 = 1776882LLU;

	t54 = (x221^(x222^(x223/x224)));

	if (t54 != 18446744073348546962LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = 17U;
	int16_t x226 = INT16_MAX;
	int16_t x228 = INT16_MAX;

	t55 = (x225^(x226^(x227/x228)));

	if (t55 != -281483566940138LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x229 = 25015725;
	volatile int8_t x231 = INT8_MIN;
	int8_t x232 = -1;
	volatile int32_t t56 = 3;

	t56 = (x229^(x230^(x231/x232)));

	if (t56 != -25015635) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = INT16_MIN;
	volatile int32_t x234 = INT32_MIN;
	static volatile int64_t x236 = 4814126897LL;
	int64_t t57 = 1LL;

	t57 = (x233^(x234^(x235/x236)));

	if (t57 != 231589189LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x238 = 3U;
	int8_t x239 = 15;
	int64_t x240 = 2339LL;

	t58 = (x237^(x238^(x239/x240)));

	if (t58 != 3LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x241 = 420507764U;
	uint32_t x242 = UINT32_MAX;
	volatile uint8_t x243 = 79U;
	volatile uint32_t t59 = 34U;

	t59 = (x241^(x242^(x243/x244)));

	if (t59 != 3874459531U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = -471184779;
	int8_t x246 = INT8_MIN;
	uint16_t x248 = 17U;
	volatile int32_t t60 = 622716272;

	t60 = (x245^(x246^(x247/x248)));

	if (t60 != -471183988) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x249 = 741;
	uint16_t x250 = UINT16_MAX;
	int16_t x251 = -4;

	t61 = (x249^(x250^(x251/x252)));

	if (t61 != 64794) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = 55LLU;
	static int8_t x255 = -1;
	uint32_t x256 = 690067U;
	static uint64_t t62 = 640LLU;

	t62 = (x253^(x254^(x255/x256)));

	if (t62 != 6220LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x257 = 121U;
	uint16_t x258 = 0U;
	static volatile int16_t x259 = INT16_MAX;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t63 = 41872;

	t63 = (x257^(x258^(x259/x260)));

	if (t63 != 120) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x261 = 1U;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t64 = 149617384016LL;

	t64 = (x261^(x262^(x263/x264)));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	volatile int16_t x268 = -1;
	static volatile uint64_t t65 = 304946656LLU;

	t65 = (x265^(x266^(x267/x268)));

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	volatile uint64_t t66 = 2672183508LLU;

	t66 = (x269^(x270^(x271/x272)));

	if (t66 != 18446744073695924517LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x273 = 10818239U;
	int32_t x274 = INT32_MAX;
	static int32_t x275 = 560;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t67 = 3LLU;

	t67 = (x273^(x274^(x275/x276)));

	if (t67 != 2136665408LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x277 = INT32_MIN;
	volatile int16_t x278 = -1;
	static int32_t x279 = 54560;
	int16_t x280 = INT16_MAX;
	volatile int32_t t68 = -33676;

	t68 = (x277^(x278^(x279/x280)));

	if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x281 = INT16_MAX;
	uint16_t x282 = 61U;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -1LL;
	volatile int64_t t69 = 28970LL;

	t69 = (x281^(x282^(x283/x284)));

	if (t69 != -32573LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = -59;
	uint32_t x286 = 14U;
	uint8_t x287 = 5U;
	volatile int64_t x288 = INT64_MAX;
	int64_t t70 = 39LL;

	t70 = (x285^(x286^(x287/x288)));

	if (t70 != -53LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x290 = 4874U;
	volatile uint64_t x291 = 2028557884637053LLU;
	int16_t x292 = INT16_MAX;

	t71 = (x289^(x290^(x291/x292)));

	if (t71 != 62645491877LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 2U;
	volatile int8_t x296 = INT8_MIN;

	t72 = (x293^(x294^(x295/x296)));

	if (t72 != 32767U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	volatile int16_t x299 = INT16_MIN;
	uint32_t x300 = 671U;
	volatile int64_t t73 = 4320396944101LL;

	t73 = (x297^(x298^(x299/x300)));

	if (t73 != 9223372036848375011LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -8;
	volatile int16_t x302 = INT16_MAX;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	int64_t t74 = -193759800089244801LL;

	t74 = (x301^(x302^(x303/x304)));

	if (t74 != -4295000057LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = UINT16_MAX;
	int16_t x306 = 0;
	uint64_t x307 = 1687314LLU;

	t75 = (x305^(x306^(x307/x308)));

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x309 = 11U;
	static uint64_t x311 = 25115044677LLU;
	static uint64_t t76 = 1949638088LLU;

	t76 = (x309^(x310^(x311/x312)));

	if (t76 != 18446744072779335260LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x313 = 6;
	static int8_t x315 = -1;
	static int16_t x316 = -1;
	uint64_t t77 = 110LLU;

	t77 = (x313^(x314^(x315/x316)));

	if (t77 != 1011013637032LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 3U;
	int16_t x318 = INT16_MAX;
	static int8_t x320 = -1;

	t78 = (x317^(x318^(x319/x320)));

	if (t78 != 65532U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 0;
	int64_t x322 = INT64_MIN;
	volatile int64_t t79 = 139955553LL;

	t79 = (x321^(x322^(x323/x324)));

	if (t79 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x325 = UINT8_MAX;
	uint64_t x328 = UINT64_MAX;
	volatile uint64_t t80 = 251265LLU;

	t80 = (x325^(x326^(x327/x328)));

	if (t80 != 4294967040LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x330 = 64;
	static volatile int32_t x332 = INT32_MIN;
	volatile uint64_t t81 = 9929029725519860LLU;

	t81 = (x329^(x330^(x331/x332)));

	if (t81 != 395185230483064LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x333 = -1;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = 191U;
	int8_t x336 = INT8_MIN;
	static int32_t t82 = INT32_MIN;

	t82 = (x333^(x334^(x335/x336)));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	volatile int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t83 = 20;

	t83 = (x337^(x338^(x339/x340)));

	if (t83 != 2147483520) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = INT16_MAX;
	volatile uint32_t x343 = 476U;
	int64_t x344 = INT64_MAX;

	t84 = (x341^(x342^(x343/x344)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = -6274711;
	uint16_t x348 = 6U;
	volatile int32_t t85 = -1750730;

	t85 = (x345^(x346^(x347/x348)));

	if (t85 != 6249095) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x349 = 3;
	int16_t x351 = -1;
	uint64_t t86 = 25LLU;

	t86 = (x349^(x350^(x351/x352)));

	if (t86 != 18446744073709401744LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x353 = 2U;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MIN;
	int32_t t87 = 15;

	t87 = (x353^(x354^(x355/x356)));

	if (t87 != 65533) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = UINT16_MAX;
	static uint32_t x358 = 121403545U;
	int16_t x360 = INT16_MAX;
	uint32_t t88 = 25385457U;

	t88 = (x357^(x358^(x359/x360)));

	if (t88 != 4173559961U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = INT64_MIN;
	static volatile int64_t t89 = 19226016245614800LL;

	t89 = (x365^(x366^(x367/x368)));

	if (t89 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x370 = 11;
	volatile uint32_t x371 = 402722U;

	t90 = (x369^(x370^(x371/x372)));

	if (t90 != 15U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x374 = -198274746400370LL;
	int64_t t91 = -125006061930910LL;

	t91 = (x373^(x374^(x375/x376)));

	if (t91 != 9223173762108375438LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x377 = 2;
	int32_t x378 = INT32_MIN;
	uint16_t x379 = 10646U;
	int32_t t92 = 39211;

	t92 = (x377^(x378^(x379/x380)));

	if (t92 != -2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x381 = 0U;
	static volatile uint64_t x382 = 545LLU;
	int8_t x383 = INT8_MIN;
	static uint32_t x384 = UINT32_MAX;

	t93 = (x381^(x382^(x383/x384)));

	if (t93 != 545LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x385 = 946039U;
	volatile uint64_t x386 = UINT64_MAX;
	int16_t x387 = INT16_MAX;
	uint64_t t94 = 269901594919LLU;

	t94 = (x385^(x386^(x387/x388)));

	if (t94 != 921737LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MIN;
	uint16_t x390 = 0U;
	uint32_t x391 = UINT32_MAX;
	volatile uint32_t t95 = 984516042U;

	t95 = (x389^(x390^(x391/x392)));

	if (t95 != 2415919103U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 8U;
	static int32_t x398 = -1;
	int32_t x399 = -11;
	int32_t t96 = 9534532;

	t96 = (x397^(x398^(x399/x400)));

	if (t96 != -9) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = -1LL;
	volatile int16_t x403 = INT16_MIN;
	int32_t x404 = INT32_MAX;
	int64_t t97 = -519281859348578422LL;

	t97 = (x401^(x402^(x403/x404)));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x406 = INT32_MIN;
	volatile uint8_t x407 = 4U;
	volatile int64_t x408 = INT64_MIN;
	volatile int64_t t98 = -6224738841LL;

	t98 = (x405^(x406^(x407/x408)));

	if (t98 != -2147483521LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x409 = INT8_MAX;
	int8_t x410 = -1;
	static int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MIN;
	int32_t t99 = -2;

	t99 = (x409^(x410^(x411/x412)));

	if (t99 != -65664) { NG(); } else { ; }
	
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

