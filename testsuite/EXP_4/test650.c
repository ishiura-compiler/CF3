#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 1U;
uint64_t t1 = UINT64_MAX;
volatile int16_t x11 = INT16_MIN;
uint64_t t3 = 8935LLU;
int8_t x18 = INT8_MIN;
volatile uint64_t t7 = UINT64_MAX;
static int8_t x36 = INT8_MIN;
int64_t x37 = INT64_MAX;
static volatile int8_t x41 = -39;
static volatile int8_t x43 = 25;
int32_t t10 = -368460568;
static int16_t x47 = -1;
int16_t x49 = 1466;
int16_t x51 = -1;
int32_t x53 = INT32_MIN;
int16_t x56 = INT16_MAX;
volatile int32_t x60 = -1;
int32_t x62 = INT32_MIN;
volatile uint64_t x63 = UINT64_MAX;
volatile int64_t t16 = 46911723583LL;
static uint16_t x77 = 2277U;
int32_t x79 = -1;
static int8_t x83 = INT8_MIN;
int32_t x85 = -1;
static uint16_t x92 = 691U;
uint32_t x95 = 14475665U;
uint64_t x96 = UINT64_MAX;
volatile uint64_t x97 = UINT64_MAX;
uint64_t x100 = 2634LLU;
static volatile uint64_t t24 = 560321680786594823LLU;
int16_t x109 = INT16_MIN;
int8_t x113 = INT8_MIN;
uint8_t x130 = 0U;
volatile int64_t t32 = 29982140037639LL;
volatile int64_t x134 = INT64_MIN;
volatile uint8_t x141 = 5U;
static int64_t x142 = INT64_MIN;
int64_t t34 = -26631405LL;
volatile uint32_t t35 = 12405566U;
uint64_t x157 = 5LLU;
static int8_t x163 = INT8_MIN;
int64_t x166 = 12558792305267LL;
int64_t x178 = INT64_MIN;
static volatile int64_t t43 = -6LL;
int16_t x188 = INT16_MIN;
int32_t x191 = INT32_MIN;
int8_t x195 = -5;
uint32_t t47 = UINT32_MAX;
volatile int16_t x198 = -1;
int64_t x199 = INT64_MAX;
int64_t x204 = -1LL;
volatile int64_t t49 = 8LL;
static int64_t x206 = 0LL;
int64_t x207 = INT64_MIN;
volatile int8_t x212 = INT8_MAX;
int64_t x215 = -13LL;
static volatile int8_t x219 = INT8_MAX;
int32_t x225 = -1;
uint64_t x226 = UINT64_MAX;
int16_t x233 = INT16_MIN;
int16_t x234 = INT16_MIN;
static int8_t x244 = INT8_MAX;
uint64_t x250 = 129390LLU;
volatile uint64_t t61 = 10313938001LLU;
static volatile uint32_t x261 = 113759U;
int64_t x267 = -696121279367434697LL;
int8_t x270 = -1;
int64_t x276 = 133779360LL;
int64_t x278 = -29480750230LL;
uint16_t x285 = UINT16_MAX;
int16_t x292 = -4313;
static int64_t t70 = INT64_MIN;
int32_t t71 = -3170761;
static volatile int8_t x301 = 0;
uint32_t x305 = UINT32_MAX;
int16_t x308 = INT16_MIN;
uint64_t x309 = 6933403779045332LLU;
volatile int16_t x314 = 9;
int32_t x331 = 91;
static int64_t t79 = -8LL;
volatile int32_t t80 = -7288562;
int64_t x343 = 43134LL;
static int64_t x347 = -2286950892293LL;
int32_t x356 = INT32_MIN;
uint64_t x358 = 9565820LLU;
int16_t x359 = -1;
volatile uint64_t t86 = 124091793640LLU;
int16_t x367 = 5131;
static int32_t x373 = INT32_MIN;
static volatile int8_t x376 = 1;
static int64_t t89 = -3LL;
int32_t x378 = -112760187;
int64_t x380 = INT64_MIN;
int8_t x386 = 3;
static volatile uint64_t t91 = 4068355LLU;
static int16_t x390 = 27;
int32_t x391 = INT32_MIN;
volatile uint32_t x394 = UINT32_MAX;
int8_t x401 = 47;
static int8_t x408 = INT8_MIN;
uint16_t x413 = UINT16_MAX;
int32_t x419 = -407;
static volatile int16_t x422 = 5427;
int16_t x423 = INT16_MIN;
volatile uint64_t x424 = 5LLU;


void f0(void) {
	volatile int16_t x1 = -10;
	int32_t x2 = -13510730;
	int32_t x4 = INT32_MIN;
	volatile uint32_t t0 = 25014U;

	t0 = (x1^(x2&(x3/x4)));

	if (t0 != 4294967286U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	uint64_t x6 = 186LLU;
	uint8_t x7 = UINT8_MAX;
	int16_t x8 = INT16_MIN;

	t1 = (x5^(x6&(x7/x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MIN;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = -4;

	t2 = (x9^(x10&(x11/x12)));

	if (t2 != 511) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint64_t x14 = UINT64_MAX;
	static volatile int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13^(x14&(x15/x16)));

	if (t3 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile uint32_t x19 = UINT32_MAX;
	static volatile int16_t x20 = -1;
	volatile uint32_t t4 = UINT32_MAX;

	t4 = (x17^(x18&(x19/x20)));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int16_t x22 = -15;
	volatile int8_t x23 = INT8_MAX;
	int16_t x24 = 1;
	int32_t t5 = -30601287;

	t5 = (x21^(x22&(x23/x24)));

	if (t5 != -114) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	static int32_t x26 = -1;
	static uint8_t x27 = 0U;
	volatile int32_t x28 = 1;
	uint64_t t6 = UINT64_MAX;

	t6 = (x25^(x26&(x27/x28)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -1;
	int8_t x30 = 1;
	static uint64_t x31 = 3911072160659708LLU;
	int32_t x32 = -1;

	t7 = (x29^(x30&(x31/x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	uint16_t x34 = 139U;
	int32_t x35 = -1;
	int32_t t8 = 4;

	t8 = (x33^(x34&(x35/x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = -29;
	uint64_t x39 = 0LLU;
	static int64_t x40 = INT64_MIN;
	volatile uint64_t t9 = 104961692852023848LLU;

	t9 = (x37^(x38&(x39/x40)));

	if (t9 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -1;
	int8_t x44 = INT8_MIN;

	t10 = (x41^(x42&(x43/x44)));

	if (t10 != -39) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int64_t x46 = INT64_MAX;
	static volatile int8_t x48 = 21;
	int64_t t11 = -508658082LL;

	t11 = (x45^(x46&(x47/x48)));

	if (t11 != -2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -16221;
	int8_t x52 = -1;
	int32_t t12 = 5438750;

	t12 = (x49^(x50&(x51/x52)));

	if (t12 != 1467) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 94U;
	uint64_t x55 = 219702778LLU;
	static uint64_t t13 = 0LLU;

	t13 = (x53^(x54&(x55/x56)));

	if (t13 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	uint32_t x58 = UINT32_MAX;
	static int8_t x59 = -15;
	static volatile uint32_t t14 = 3870842U;

	t14 = (x57^(x58&(x59/x60)));

	if (t14 != 65520U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t15 = 3529969792LLU;

	t15 = (x61^(x62&(x63/x64)));

	if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	volatile int32_t x66 = 2610552;
	int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;

	t16 = (x65^(x66&(x67/x68)));

	if (t16 != -65537LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 1006LLU;
	static int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MAX;
	uint16_t x72 = 14U;
	uint64_t t17 = 2379LLU;

	t17 = (x69^(x70&(x71/x72)));

	if (t17 != 2762LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	volatile int8_t x74 = -1;
	int32_t x75 = INT32_MAX;
	int64_t x76 = -3932557LL;
	int64_t t18 = 12LL;

	t18 = (x73^(x74&(x75/x76)));

	if (t18 != 545LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x78 = INT16_MIN;
	static int32_t x80 = -1;
	volatile int32_t t19 = 176947;

	t19 = (x77^(x78&(x79/x80)));

	if (t19 != 2277) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 5278226LLU;
	int8_t x82 = 1;
	static int16_t x84 = INT16_MIN;
	static volatile uint64_t t20 = 1738588LLU;

	t20 = (x81^(x82&(x83/x84)));

	if (t20 != 5278226LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	volatile int16_t x87 = 2090;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 1291303;

	t21 = (x85^(x86&(x87/x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int16_t x90 = -1;
	volatile int32_t x91 = INT32_MIN;
	volatile int32_t t22 = 0;

	t22 = (x89^(x90&(x91/x92)));

	if (t22 != 3107790) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	static int32_t x94 = -1;
	volatile uint64_t t23 = 8614557175167LLU;

	t23 = (x93^(x94&(x95/x96)));

	if (t23 != 65535LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = -1;
	static int32_t x99 = INT32_MIN;

	t24 = (x97^(x98&(x99/x100)));

	if (t24 != 18439740754016475660LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 76645439531LLU;
	uint64_t x102 = UINT64_MAX;
	volatile uint8_t x103 = 27U;
	uint8_t x104 = UINT8_MAX;
	volatile uint64_t t25 = 5286323501LLU;

	t25 = (x101^(x102&(x103/x104)));

	if (t25 != 76645439531LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -46;
	uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = -1;
	volatile uint32_t t26 = 23U;

	t26 = (x105^(x106&(x107/x108)));

	if (t26 != 4294934482U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -1LL;
	int16_t x111 = INT16_MAX;
	uint16_t x112 = 119U;
	int64_t t27 = 688414724394905285LL;

	t27 = (x109^(x110&(x111/x112)));

	if (t27 != -32493LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x114 = INT16_MIN;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MIN;
	static int32_t t28 = -119;

	t28 = (x113^(x114&(x115/x116)));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 3;
	int32_t x118 = -4642014;
	int32_t x119 = -1;
	static uint64_t x120 = 10685597781LLU;
	static uint64_t t29 = 200467LLU;

	t29 = (x117^(x118&(x119/x120)));

	if (t29 != 1721828099LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -50;
	volatile int32_t x122 = INT32_MIN;
	static int8_t x123 = -8;
	int32_t x124 = 5411;
	volatile int32_t t30 = 16480464;

	t30 = (x121^(x122&(x123/x124)));

	if (t30 != -50) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 4189584;
	int32_t x126 = -1;
	int16_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 175665;

	t31 = (x125^(x126&(x127/x128)));

	if (t31 != 4189584) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -1LL;
	uint8_t x131 = 33U;
	static uint16_t x132 = 57U;

	t32 = (x129^(x130&(x131/x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -1LL;
	volatile int64_t x135 = -1LL;
	uint8_t x136 = 62U;
	int64_t t33 = 17711646LL;

	t33 = (x133^(x134&(x135/x136)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x143 = 9U;
	uint16_t x144 = UINT16_MAX;

	t34 = (x141^(x142&(x143/x144)));

	if (t34 != 5LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	static volatile int8_t x146 = INT8_MAX;
	int16_t x147 = -15;
	uint32_t x148 = UINT32_MAX;

	t35 = (x145^(x146&(x147/x148)));

	if (t35 != 2147483648U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 0U;
	int64_t x150 = -1LL;
	volatile int16_t x151 = INT16_MIN;
	uint32_t x152 = 106628U;
	static int64_t t36 = 689861011870592LL;

	t36 = (x149^(x150&(x151/x152)));

	if (t36 != 40279LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = -1;
	uint8_t x154 = UINT8_MAX;
	static int8_t x155 = 0;
	uint32_t x156 = UINT32_MAX;
	static uint32_t t37 = UINT32_MAX;

	t37 = (x153^(x154&(x155/x156)));

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = -7;
	volatile int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	uint64_t t38 = 14695LLU;

	t38 = (x157^(x158&(x159/x160)));

	if (t38 != 5LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = -5;
	int16_t x164 = -1386;
	volatile int32_t t39 = 8092607;

	t39 = (x161^(x162&(x163/x164)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MAX;
	uint8_t x167 = UINT8_MAX;
	int32_t x168 = 260572164;
	int64_t t40 = 113043535LL;

	t40 = (x165^(x166&(x167/x168)));

	if (t40 != 32767LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MAX;
	static uint64_t x170 = 1LLU;
	int8_t x171 = -9;
	uint16_t x172 = 1U;
	volatile uint64_t t41 = 179924755LLU;

	t41 = (x169^(x170&(x171/x172)));

	if (t41 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = INT64_MAX;
	volatile uint32_t x174 = 140U;
	static int16_t x175 = -1;
	static int64_t x176 = -1LL;
	static int64_t t42 = INT64_MAX;

	t42 = (x173^(x174&(x175/x176)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -1;
	uint16_t x179 = 57U;
	uint16_t x180 = 2U;

	t43 = (x177^(x178&(x179/x180)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x181 = INT8_MIN;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = -130788828305LL;
	volatile int64_t x184 = -501LL;
	uint64_t t44 = 797198688534LLU;

	t44 = (x181^(x182&(x183/x184)));

	if (t44 != 18446744073448496057LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = -1;
	static int32_t x187 = 31080;
	int64_t t45 = INT64_MIN;

	t45 = (x185^(x186&(x187/x188)));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	int32_t x190 = -8811;
	int8_t x192 = -12;
	int64_t t46 = -778946483157006LL;

	t46 = (x189^(x190&(x191/x192)));

	if (t46 != -9223372036675827584LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MIN;

	t47 = (x193^(x194&(x195/x196)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x200 = INT8_MIN;
	static int64_t t48 = 4821771871477755LL;

	t48 = (x197^(x198&(x199/x200)));

	if (t48 != 72057594037895169LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MAX;
	uint8_t x202 = 37U;
	uint8_t x203 = UINT8_MAX;

	t49 = (x201^(x202&(x203/x204)));

	if (t49 != 2147483646LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 480588U;
	int8_t x208 = INT8_MIN;
	int64_t t50 = -917426663796LL;

	t50 = (x205^(x206&(x207/x208)));

	if (t50 != 480588LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = 15474;
	static volatile uint32_t x210 = UINT32_MAX;
	uint8_t x211 = 0U;
	uint32_t t51 = 21197U;

	t51 = (x209^(x210&(x211/x212)));

	if (t51 != 15474U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x213 = UINT16_MAX;
	volatile int64_t x214 = INT64_MIN;
	uint32_t x216 = 2239419U;
	static int64_t t52 = -879126339LL;

	t52 = (x213^(x214&(x215/x216)));

	if (t52 != 65535LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x217 = 44U;
	volatile int16_t x218 = -283;
	volatile uint8_t x220 = UINT8_MAX;
	volatile int32_t t53 = -3924;

	t53 = (x217^(x218&(x219/x220)));

	if (t53 != 44) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x221 = -122254131546928609LL;
	int16_t x222 = INT16_MAX;
	int32_t x223 = -7716925;
	volatile uint32_t x224 = 14U;
	int64_t t54 = -1936592871LL;

	t54 = (x221^(x222&(x223/x224)));

	if (t54 != -122254131546918538LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x227 = 49211869328767691LL;
	int64_t x228 = -1LL;
	uint64_t t55 = 186LLU;

	t55 = (x225^(x226&(x227/x228)));

	if (t55 != 49211869328767690LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x229 = INT16_MIN;
	static uint8_t x230 = 47U;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MIN;
	int64_t t56 = -1455788552LL;

	t56 = (x229^(x230&(x231/x232)));

	if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x235 = 4779U;
	int64_t x236 = -3LL;
	volatile int64_t t57 = -9602238LL;

	t57 = (x233^(x234&(x235/x236)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x237 = -4420126;
	static uint64_t x238 = 59LLU;
	volatile int16_t x239 = -1;
	static int16_t x240 = 7351;
	volatile uint64_t t58 = 860694191308935625LLU;

	t58 = (x237^(x238&(x239/x240)));

	if (t58 != 18446744073705131490LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = INT64_MAX;
	static uint64_t x242 = UINT64_MAX;
	static volatile int16_t x243 = INT16_MIN;
	volatile uint64_t t59 = 4159994106LLU;

	t59 = (x241^(x242&(x243/x244)));

	if (t59 != 9223372036854776065LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MAX;
	int8_t x246 = 47;
	int32_t x247 = -5618308;
	volatile int32_t x248 = 11388473;
	int32_t t60 = 30973;

	t60 = (x245^(x246&(x247/x248)));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = -24;
	static int32_t x251 = INT32_MIN;
	uint8_t x252 = 90U;

	t61 = (x249^(x250&(x251/x252)));

	if (t61 != 18446744073709426374LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x253 = 7;
	static int32_t x254 = 509177;
	int64_t x255 = 1078093025122LL;
	volatile int8_t x256 = 8;
	int64_t t62 = 6370241672LL;

	t62 = (x253^(x254&(x255/x256)));

	if (t62 != 213231LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x262 = INT8_MIN;
	int64_t x263 = -1LL;
	int64_t x264 = -16LL;
	int64_t t63 = -1741469077349256561LL;

	t63 = (x261^(x262&(x263/x264)));

	if (t63 != 113759LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x265 = 7587153U;
	static uint32_t x266 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	int64_t t64 = -4LL;

	t64 = (x265^(x266&(x267/x268)));

	if (t64 != 7587153LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x269 = 1U;
	int64_t x271 = -1LL;
	int16_t x272 = -1;
	static int64_t t65 = -58341234841190582LL;

	t65 = (x269^(x270&(x271/x272)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	int16_t x275 = 5;
	uint64_t t66 = UINT64_MAX;

	t66 = (x273^(x274&(x275/x276)));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 44U;
	volatile uint32_t x279 = UINT32_MAX;
	static int8_t x280 = INT8_MIN;
	static volatile int64_t t67 = 31408LL;

	t67 = (x277^(x278&(x279/x280)));

	if (t67 != 44LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x281 = -190628525;
	volatile int64_t x282 = INT64_MAX;
	static int64_t x283 = INT64_MIN;
	int16_t x284 = -6256;
	static int64_t t68 = 651377LL;

	t68 = (x281^(x282&(x283/x284)));

	if (t68 != -1474324094226827LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x286 = UINT64_MAX;
	static uint64_t x287 = 13872LLU;
	int8_t x288 = -1;
	volatile uint64_t t69 = 126505729911027LLU;

	t69 = (x285^(x286&(x287/x288)));

	if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = -192;

	t70 = (x289^(x290&(x291/x292)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = INT32_MIN;
	uint8_t x298 = 28U;
	int32_t x299 = INT32_MAX;
	uint8_t x300 = 12U;

	t71 = (x297^(x298&(x299/x300)));

	if (t71 != -2147483640) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x302 = 41;
	uint8_t x303 = 2U;
	int32_t x304 = INT32_MIN;
	int32_t t72 = -1;

	t72 = (x301^(x302&(x303/x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = INT32_MAX;
	volatile int32_t x307 = -2879916;
	uint32_t t73 = 120558U;

	t73 = (x305^(x306&(x307/x308)));

	if (t73 != 4294967208U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x310 = 1;
	volatile int64_t x311 = INT64_MIN;
	static uint8_t x312 = 11U;
	volatile uint64_t t74 = 242635534LLU;

	t74 = (x309^(x310&(x311/x312)));

	if (t74 != 6933403779045332LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	volatile int16_t x315 = INT16_MAX;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t75 = -1;

	t75 = (x313^(x314&(x315/x316)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = -1;
	static uint16_t x322 = UINT16_MAX;
	uint8_t x323 = 3U;
	uint16_t x324 = UINT16_MAX;
	int32_t t76 = -1;

	t76 = (x321^(x322&(x323/x324)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x325 = 819498LLU;
	int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = 27U;
	volatile uint64_t t77 = 68259040286227389LLU;

	t77 = (x325^(x326&(x327/x328)));

	if (t77 != 819479LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x329 = 1778410038000265010LLU;
	static int64_t x330 = -1476901LL;
	int16_t x332 = INT16_MIN;
	uint64_t t78 = 50815LLU;

	t78 = (x329^(x330&(x331/x332)));

	if (t78 != 1778410038000265010LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = 952252332;
	volatile int64_t x335 = 6795044076LL;
	uint8_t x336 = UINT8_MAX;

	t79 = (x333^(x334&(x335/x336)));

	if (t79 != 2138959187LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x337 = 9U;
	uint8_t x338 = UINT8_MAX;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = -18;

	t80 = (x337^(x338&(x339/x340)));

	if (t80 != 206) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = -248902868418236LL;
	int64_t x342 = -32055261621072LL;
	uint32_t x344 = 48270U;
	volatile int64_t t81 = 152585LL;

	t81 = (x341^(x342&(x343/x344)));

	if (t81 != -248902868418236LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	int16_t x348 = -730;
	volatile int64_t t82 = -31460340564020LL;

	t82 = (x345^(x346&(x347/x348)));

	if (t82 != -4294967296LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	static int16_t x350 = INT16_MIN;
	uint32_t x351 = 10145571U;
	static int32_t x352 = INT32_MIN;
	static uint32_t t83 = 4U;

	t83 = (x349^(x350&(x351/x352)));

	if (t83 != 127U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x354 = INT16_MAX;
	int8_t x355 = 1;
	int32_t t84 = -82;

	t84 = (x353^(x354&(x355/x356)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = UINT64_MAX;
	uint32_t x360 = 5986604U;
	volatile uint64_t t85 = 50207LLU;

	t85 = (x357^(x358&(x359/x360)));

	if (t85 != 18446744073709551027LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = INT32_MIN;
	volatile uint64_t x362 = UINT64_MAX;
	int8_t x363 = -1;
	static int32_t x364 = 1;

	t86 = (x361^(x362&(x363/x364)));

	if (t86 != 2147483647LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = 4U;
	volatile int32_t x368 = -3103;
	volatile uint64_t t87 = 355968863LLU;

	t87 = (x365^(x366&(x367/x368)));

	if (t87 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	volatile int8_t x372 = INT8_MIN;
	volatile int32_t t88 = 1;

	t88 = (x369^(x370&(x371/x372)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x374 = -1LL;
	volatile uint8_t x375 = 0U;

	t89 = (x373^(x374&(x375/x376)));

	if (t89 != -2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x377 = 332249U;
	uint16_t x379 = 10U;
	int64_t t90 = 284140904263830191LL;

	t90 = (x377^(x378&(x379/x380)));

	if (t90 != 332249LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	volatile uint64_t x387 = 55960559546545LLU;
	volatile int32_t x388 = 138883631;

	t91 = (x385^(x386&(x387/x388)));

	if (t91 != 4294967292LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x389 = -1LL;
	int64_t x392 = -1LL;
	int64_t t92 = -10197412594958737LL;

	t92 = (x389^(x390&(x391/x392)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	int64_t x395 = 57311860LL;
	static int64_t x396 = -2345184454147219LL;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x393^(x394&(x395/x396)));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x402 = INT64_MIN;
	volatile int8_t x403 = INT8_MAX;
	int8_t x404 = -1;
	volatile int64_t t94 = -37LL;

	t94 = (x401^(x402&(x403/x404)));

	if (t94 != -9223372036854775761LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x405 = -16;
	uint32_t x406 = UINT32_MAX;
	int64_t x407 = -244117885643529883LL;
	int64_t t95 = 193239268902LL;

	t95 = (x405^(x406&(x407/x408)));

	if (t95 != -3638703155LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x409 = UINT8_MAX;
	int32_t x410 = 397716566;
	int8_t x411 = -1;
	int32_t x412 = -1;
	int32_t t96 = 66966564;

	t96 = (x409^(x410&(x411/x412)));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x414 = -1;
	int64_t x415 = -1LL;
	uint8_t x416 = 4U;
	volatile int64_t t97 = 139234114609172491LL;

	t97 = (x413^(x414&(x415/x416)));

	if (t97 != 65535LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = 72LLU;
	static uint32_t x418 = 205U;
	int8_t x420 = -1;
	uint64_t t98 = 103409989317LLU;

	t98 = (x417^(x418&(x419/x420)));

	if (t98 != 205LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x421 = -838;
	static volatile uint64_t t99 = 5051756322796LLU;

	t99 = (x421^(x422&(x423/x424)));

	if (t99 != 18446744073709546923LLU) { NG(); } else { ; }
	
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

