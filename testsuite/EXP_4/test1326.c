#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = -454738740102959365LL;
uint16_t x5 = 167U;
uint16_t x6 = 91U;
volatile uint64_t t2 = 8086859250430521175LLU;
volatile uint32_t t4 = 1361U;
int16_t x32 = INT16_MAX;
int64_t t7 = INT64_MIN;
static int64_t x33 = -1LL;
static uint32_t x43 = 754340956U;
int8_t x48 = 45;
static volatile int16_t x50 = -1;
int32_t x53 = 57177580;
int8_t x57 = INT8_MIN;
volatile int32_t x62 = 6750135;
int8_t x66 = INT8_MIN;
uint8_t x68 = 31U;
uint32_t x72 = 51691U;
int32_t t17 = 8127;
volatile uint32_t x77 = 373U;
uint32_t x80 = 555U;
int64_t x85 = -769LL;
uint32_t x86 = UINT32_MAX;
static int8_t x89 = INT8_MAX;
static uint64_t x91 = 25LLU;
volatile int16_t x95 = 3;
static int8_t x96 = 6;
int64_t t23 = INT64_MIN;
static volatile int16_t x99 = -1;
uint8_t x101 = 4U;
volatile int32_t t25 = -1;
int64_t x111 = INT64_MAX;
int32_t x112 = -7;
int16_t x117 = INT16_MIN;
static int32_t x123 = -820922;
uint16_t x128 = UINT16_MAX;
int32_t t31 = -1274;
volatile int32_t t32 = -492256;
volatile uint64_t t34 = 9749898905LLU;
int32_t t37 = 217;
static int32_t t38 = INT32_MAX;
static volatile int32_t x164 = 41436;
uint64_t x166 = 6188728898153853LLU;
int64_t x171 = INT64_MAX;
int8_t x174 = INT8_MIN;
volatile int8_t x177 = -1;
int16_t x182 = INT16_MAX;
static int8_t x186 = -2;
uint64_t x202 = UINT64_MAX;
int8_t x220 = -1;
volatile int32_t t54 = -46834870;
int8_t x224 = INT8_MAX;
int16_t x229 = 13;
uint64_t t58 = 6107606382363736LLU;
int16_t x246 = INT16_MIN;
static int16_t x251 = -1;
int8_t x254 = INT8_MIN;
volatile int32_t t63 = -16165;
int32_t x262 = INT32_MIN;
int32_t t65 = -1851427;
int16_t x273 = -1;
static int32_t t70 = -45970362;
int8_t x287 = INT8_MAX;
uint8_t x295 = UINT8_MAX;
int32_t x296 = -113495116;
uint64_t x303 = 1091462918386457LLU;
int32_t x305 = -1;
static uint32_t x307 = 8571959U;
volatile int64_t t76 = 168926888076LL;
int64_t t77 = -13903877835959LL;
uint8_t x319 = 1U;
int32_t x323 = INT32_MIN;
int64_t x325 = -1LL;
uint8_t x327 = 3U;
int32_t x329 = INT32_MAX;
uint64_t x331 = UINT64_MAX;
uint8_t x338 = UINT8_MAX;
uint64_t x342 = 1070445898321LLU;
static int32_t x346 = 0;
int64_t x348 = -1LL;
static volatile int32_t t86 = -72;
uint64_t t88 = 76144169308098LLU;
uint16_t x358 = UINT16_MAX;
volatile uint64_t x363 = 21701753328700LLU;
volatile int32_t t90 = -19;
int64_t x365 = -1LL;
static int32_t x366 = -1;
int32_t x369 = -26;
volatile int8_t x372 = INT8_MIN;
int16_t x375 = 11223;
int16_t x376 = 10828;
int32_t x378 = INT32_MAX;
static uint32_t x380 = 2147U;
uint32_t x384 = 7525U;
volatile int8_t x386 = -1;
uint8_t x389 = 80U;
int32_t x391 = INT32_MIN;
volatile uint64_t t98 = 148236597872516LLU;


void f0(void) {
	static int64_t x1 = -1LL;
	int16_t x2 = 3;
	volatile int64_t x3 = INT64_MIN;
	int32_t x4 = 11719;

	t0 = (x1^(x2&(x3==x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x7 = 224U;
	uint16_t x8 = 3197U;
	int32_t t1 = 0;

	t1 = (x5^(x6&(x7==x8)));

	if (t1 != 167) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 5325795960542423092LLU;
	volatile int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MAX;
	static uint64_t x12 = 49LLU;

	t2 = (x9^(x10&(x11==x12)));

	if (t2 != 5325795960542423092LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = INT8_MAX;
	static int64_t x15 = -1LL;
	static int32_t x16 = INT32_MIN;
	static int64_t t3 = INT64_MIN;

	t3 = (x13^(x14&(x15==x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	static volatile uint32_t x18 = 3733U;
	int64_t x19 = INT64_MIN;
	int64_t x20 = INT64_MIN;

	t4 = (x17^(x18&(x19==x20)));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -3;
	int32_t x22 = INT32_MIN;
	int64_t x23 = INT64_MIN;
	static volatile int64_t x24 = INT64_MIN;
	int32_t t5 = -1013513;

	t5 = (x21^(x22&(x23==x24)));

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	static uint16_t x27 = 8U;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 254535612LLU;

	t6 = (x25^(x26&(x27==x28)));

	if (t6 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int16_t x30 = INT16_MAX;
	volatile int16_t x31 = INT16_MIN;

	t7 = (x29^(x30&(x31==x32)));

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x34 = UINT32_MAX;
	static int8_t x35 = 36;
	uint8_t x36 = UINT8_MAX;
	int64_t t8 = 81594LL;

	t8 = (x33^(x34&(x35==x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	int32_t x38 = -253005;
	int16_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int64_t t9 = INT64_MIN;

	t9 = (x37^(x38&(x39==x40)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	volatile int64_t x42 = INT64_MIN;
	volatile uint64_t x44 = 51392LLU;
	int64_t t10 = -11776LL;

	t10 = (x41^(x42&(x43==x44)));

	if (t10 != 255LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = INT8_MIN;
	static uint8_t x47 = 2U;
	static volatile int64_t t11 = -4741535790737610LL;

	t11 = (x45^(x46&(x47==x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	uint8_t x51 = 1U;
	uint64_t x52 = UINT64_MAX;
	int32_t t12 = 1022494;

	t12 = (x49^(x50&(x51==x52)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 14U;
	uint64_t x55 = 1791367053LLU;
	uint32_t x56 = UINT32_MAX;
	int32_t t13 = 198683953;

	t13 = (x53^(x54&(x55==x56)));

	if (t13 != 57177580) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = -287;
	uint32_t t14 = 1318931758U;

	t14 = (x57^(x58&(x59==x60)));

	if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x63 = 0U;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = -2601038;

	t15 = (x61^(x62&(x63==x64)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	uint16_t x67 = UINT16_MAX;
	volatile int32_t t16 = -14111;

	t16 = (x65^(x66&(x67==x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	static uint16_t x70 = UINT16_MAX;
	static uint16_t x71 = 4U;

	t17 = (x69^(x70&(x71==x72)));

	if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 255485U;
	uint64_t x74 = 498467357LLU;
	static int64_t x75 = 1LL;
	int8_t x76 = INT8_MIN;
	volatile uint64_t t18 = 592107927LLU;

	t18 = (x73^(x74&(x75==x76)));

	if (t18 != 255485LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x78 = UINT8_MAX;
	uint8_t x79 = UINT8_MAX;
	uint32_t t19 = 7U;

	t19 = (x77^(x78&(x79==x80)));

	if (t19 != 373U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 113238103388173LL;
	int16_t x82 = -1;
	uint8_t x83 = 4U;
	volatile int16_t x84 = -1;
	volatile int64_t t20 = 13200832339012LL;

	t20 = (x81^(x82&(x83==x84)));

	if (t20 != 113238103388173LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x87 = 25U;
	int64_t x88 = -1LL;
	volatile int64_t t21 = 4LL;

	t21 = (x85^(x86&(x87==x88)));

	if (t21 != -769LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = INT8_MIN;
	static int64_t x92 = 684685348570LL;
	static volatile int32_t t22 = -72700;

	t22 = (x89^(x90&(x91==x92)));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	volatile int32_t x94 = -9104662;

	t23 = (x93^(x94&(x95==x96)));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint16_t x98 = 2232U;
	int32_t x100 = -850433140;
	static int32_t t24 = -23;

	t24 = (x97^(x98&(x99==x100)));

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = -3523;
	volatile int32_t x103 = INT32_MIN;
	static uint8_t x104 = UINT8_MAX;

	t25 = (x101^(x102&(x103==x104)));

	if (t25 != 4) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MAX;
	int32_t x107 = INT32_MIN;
	int8_t x108 = 0;
	static volatile int64_t t26 = INT64_MAX;

	t26 = (x105^(x106&(x107==x108)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	uint32_t x110 = 0U;
	static volatile int64_t t27 = 782984501LL;

	t27 = (x109^(x110&(x111==x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MAX;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = UINT64_MAX;
	int64_t t28 = 4461LL;

	t28 = (x113^(x114&(x115==x116)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 39642042LLU;
	int16_t x119 = INT16_MAX;
	static int64_t x120 = INT64_MIN;
	uint64_t t29 = 8323226158LLU;

	t29 = (x117^(x118&(x119==x120)));

	if (t29 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 2161948LLU;
	int16_t x122 = INT16_MIN;
	int16_t x124 = INT16_MAX;
	static volatile uint64_t t30 = 9395232226470990LLU;

	t30 = (x121^(x122&(x123==x124)));

	if (t30 != 2161948LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint8_t x126 = 29U;
	int16_t x127 = -1;

	t31 = (x125^(x126&(x127==x128)));

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = 2U;
	int32_t x130 = 3045;
	int8_t x131 = -3;
	uint16_t x132 = 6179U;

	t32 = (x129^(x130&(x131==x132)));

	if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	volatile uint16_t x134 = 46U;
	int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MAX;
	static volatile int64_t t33 = 2023919537849LL;

	t33 = (x133^(x134&(x135==x136)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 574661186921985779LLU;
	uint8_t x138 = 46U;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 325526U;

	t34 = (x137^(x138&(x139==x140)));

	if (t34 != 574661186921985779LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 11202LLU;
	int64_t x142 = -1LL;
	uint32_t x143 = 9943U;
	int16_t x144 = INT16_MIN;
	volatile uint64_t t35 = 971593LLU;

	t35 = (x141^(x142&(x143==x144)));

	if (t35 != 11202LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	volatile uint16_t x146 = 3U;
	volatile uint32_t x147 = 4U;
	uint16_t x148 = 0U;
	static uint32_t t36 = UINT32_MAX;

	t36 = (x145^(x146&(x147==x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -2;
	static int8_t x150 = -1;
	int64_t x151 = -821067364988810LL;
	uint64_t x152 = 12499899617952LLU;

	t37 = (x149^(x150&(x151==x152)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	uint16_t x154 = 1U;
	static int16_t x155 = INT16_MIN;
	volatile int16_t x156 = -5;

	t38 = (x153^(x154&(x155==x156)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 81U;
	static int16_t x158 = INT16_MAX;
	static volatile uint8_t x159 = 1U;
	static int16_t x160 = -19;
	static volatile int32_t t39 = -4;

	t39 = (x157^(x158&(x159==x160)));

	if (t39 != 81) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MIN;
	static int64_t t40 = INT64_MIN;

	t40 = (x161^(x162&(x163==x164)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int16_t x167 = -1;
	uint64_t x168 = 6753623847150974370LLU;
	volatile uint64_t t41 = 16428540LLU;

	t41 = (x165^(x166&(x167==x168)));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	volatile uint64_t x170 = UINT64_MAX;
	uint32_t x172 = 268497U;
	uint64_t t42 = 94586814509622LLU;

	t42 = (x169^(x170&(x171==x172)));

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 10U;
	int16_t x175 = INT16_MAX;
	int64_t x176 = INT64_MAX;
	int32_t t43 = 308;

	t43 = (x173^(x174&(x175==x176)));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = 5814105690LLU;
	volatile int8_t x179 = 13;
	volatile int8_t x180 = -1;
	uint64_t t44 = UINT64_MAX;

	t44 = (x177^(x178&(x179==x180)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 15723401U;
	static uint16_t x183 = 3U;
	static int64_t x184 = INT64_MAX;
	volatile uint32_t t45 = 116U;

	t45 = (x181^(x182&(x183==x184)));

	if (t45 != 15723401U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = -31597;
	int16_t x187 = 1;
	volatile uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -58747972;

	t46 = (x185^(x186&(x187==x188)));

	if (t46 != -31597) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	static uint16_t x190 = UINT16_MAX;
	volatile int16_t x191 = 1747;
	int8_t x192 = 3;
	volatile uint32_t t47 = UINT32_MAX;

	t47 = (x189^(x190&(x191==x192)));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = INT8_MIN;
	static int16_t x194 = INT16_MAX;
	int8_t x195 = 0;
	volatile int64_t x196 = -1LL;
	int32_t t48 = 2;

	t48 = (x193^(x194&(x195==x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -1;
	volatile int8_t x198 = 12;
	volatile int16_t x199 = INT16_MAX;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 200620;

	t49 = (x197^(x198&(x199==x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int64_t x203 = INT64_MIN;
	int64_t x204 = 370163397961682579LL;
	static uint64_t t50 = 139LLU;

	t50 = (x201^(x202&(x203==x204)));

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = INT64_MIN;
	static int32_t x206 = 220;
	static int64_t x207 = INT64_MAX;
	uint8_t x208 = 2U;
	int64_t t51 = INT64_MIN;

	t51 = (x205^(x206&(x207==x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 6756126308210196LL;
	uint16_t x210 = 81U;
	int64_t x211 = -1LL;
	int16_t x212 = 382;
	int64_t t52 = 95810826761LL;

	t52 = (x209^(x210&(x211==x212)));

	if (t52 != 6756126308210196LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	volatile int16_t x214 = INT16_MIN;
	int32_t x215 = -9895;
	int64_t x216 = -1LL;
	int64_t t53 = INT64_MAX;

	t53 = (x213^(x214&(x215==x216)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 2910431;
	int16_t x218 = 0;
	uint64_t x219 = UINT64_MAX;

	t54 = (x217^(x218&(x219==x220)));

	if (t54 != 2910431) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 0;
	int16_t x222 = -1;
	uint16_t x223 = 14U;
	int32_t t55 = -858512;

	t55 = (x221^(x222&(x223==x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = UINT32_MAX;
	static int8_t x227 = -36;
	uint32_t x228 = UINT32_MAX;
	volatile uint32_t t56 = 16997933U;

	t56 = (x225^(x226&(x227==x228)));

	if (t56 != 4294934528U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 24097U;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = -1;
	volatile uint32_t t57 = 181489U;

	t57 = (x229^(x230&(x231==x232)));

	if (t57 != 12U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 80889U;
	static uint64_t x234 = 26LLU;
	static int32_t x235 = -1;
	uint64_t x236 = 618780LLU;

	t58 = (x233^(x234&(x235==x236)));

	if (t58 != 80889LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	volatile int64_t x238 = 1371LL;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	int64_t t59 = 540179718730LL;

	t59 = (x237^(x238&(x239==x240)));

	if (t59 != 127LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 0U;
	volatile uint8_t x242 = 0U;
	int32_t x243 = INT32_MIN;
	static uint8_t x244 = 4U;
	volatile int32_t t60 = 1029399787;

	t60 = (x241^(x242&(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 12U;
	int64_t x247 = INT64_MAX;
	int8_t x248 = INT8_MIN;
	int32_t t61 = -678183955;

	t61 = (x245^(x246&(x247==x248)));

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static uint64_t x250 = 4403503697765167169LLU;
	int64_t x252 = INT64_MIN;
	uint64_t t62 = 6330360LLU;

	t62 = (x249^(x250&(x251==x252)));

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -52;
	int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MIN;

	t63 = (x253^(x254&(x255==x256)));

	if (t63 != -52) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	volatile uint16_t x258 = UINT16_MAX;
	volatile int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -1;

	t64 = (x257^(x258&(x259==x260)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	static int32_t x263 = INT32_MAX;
	int32_t x264 = 51;

	t65 = (x261^(x262&(x263==x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 0U;
	uint32_t x266 = 1U;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	uint32_t t66 = 7375031U;

	t66 = (x265^(x266&(x267==x268)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 56;
	uint32_t x270 = UINT32_MAX;
	static uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	uint32_t t67 = 1666521U;

	t67 = (x269^(x270&(x271==x272)));

	if (t67 != 56U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int16_t x275 = -1;
	int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -321;

	t68 = (x273^(x274&(x275==x276)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	static uint8_t x278 = 5U;
	uint16_t x279 = 11U;
	int64_t x280 = INT64_MAX;
	int32_t t69 = INT32_MIN;

	t69 = (x277^(x278&(x279==x280)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 0U;
	uint8_t x282 = 2U;
	int16_t x283 = INT16_MAX;
	static int32_t x284 = -67;

	t70 = (x281^(x282&(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 13U;
	int16_t x286 = INT16_MIN;
	volatile uint64_t x288 = 122599458052LLU;
	static uint32_t t71 = 2009257487U;

	t71 = (x285^(x286&(x287==x288)));

	if (t71 != 13U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	volatile uint32_t x291 = 22119U;
	uint32_t x292 = UINT32_MAX;
	static volatile int32_t t72 = INT32_MIN;

	t72 = (x289^(x290&(x291==x292)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = INT16_MIN;
	int64_t x294 = -7239037154448LL;
	int64_t t73 = 7LL;

	t73 = (x293^(x294&(x295==x296)));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	volatile int64_t x298 = -1LL;
	static uint16_t x299 = UINT16_MAX;
	uint32_t x300 = 118948783U;
	int64_t t74 = -734127048357624456LL;

	t74 = (x297^(x298&(x299==x300)));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MIN;
	volatile int16_t x302 = 3;
	volatile int32_t x304 = INT32_MAX;
	int32_t t75 = 331;

	t75 = (x301^(x302&(x303==x304)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = -4809892127LL;
	volatile int64_t x308 = INT64_MIN;

	t76 = (x305^(x306&(x307==x308)));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -3LL;
	uint16_t x310 = 1136U;
	int64_t x311 = -1LL;
	uint8_t x312 = UINT8_MAX;

	t77 = (x309^(x310&(x311==x312)));

	if (t77 != -3LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 7U;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MIN;
	static uint16_t x316 = 31U;
	uint64_t t78 = 30812LLU;

	t78 = (x313^(x314&(x315==x316)));

	if (t78 != 7LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 3803U;
	uint64_t x318 = 850928123859LLU;
	int64_t x320 = -15LL;
	volatile uint64_t t79 = 338551787LLU;

	t79 = (x317^(x318&(x319==x320)));

	if (t79 != 3803LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	uint8_t x322 = UINT8_MAX;
	uint32_t x324 = UINT32_MAX;
	int32_t t80 = -852420594;

	t80 = (x321^(x322&(x323==x324)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x326 = 4581U;
	static volatile int8_t x328 = INT8_MAX;
	int64_t t81 = -715601716539827LL;

	t81 = (x325^(x326&(x327==x328)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x330 = 753713270LLU;
	int8_t x332 = INT8_MAX;
	static uint64_t t82 = 12012321709602632LLU;

	t82 = (x329^(x330&(x331==x332)));

	if (t82 != 2147483647LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MAX;
	uint8_t x334 = 65U;
	int8_t x335 = INT8_MAX;
	int16_t x336 = 1260;
	int32_t t83 = 1353941;

	t83 = (x333^(x334&(x335==x336)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile int8_t x340 = INT8_MIN;
	uint32_t t84 = UINT32_MAX;

	t84 = (x337^(x338&(x339==x340)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	int16_t x343 = 47;
	int8_t x344 = -1;
	volatile uint64_t t85 = 16341LLU;

	t85 = (x341^(x342&(x343==x344)));

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 51U;
	volatile int64_t x347 = INT64_MIN;

	t86 = (x345^(x346&(x347==x348)));

	if (t86 != 51) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 1U;
	volatile int8_t x350 = 0;
	uint64_t x351 = 1902054203LLU;
	uint16_t x352 = 250U;
	volatile int32_t t87 = -190;

	t87 = (x349^(x350&(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	static uint64_t x354 = 848458LLU;
	int8_t x355 = -13;
	static int32_t x356 = INT32_MIN;

	t88 = (x353^(x354&(x355==x356)));

	if (t88 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int8_t x359 = INT8_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x357^(x358&(x359==x360)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	volatile int8_t x362 = -1;
	uint16_t x364 = 858U;

	t90 = (x361^(x362&(x363==x364)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x367 = -1;
	int32_t x368 = INT32_MIN;
	static volatile int64_t t91 = 2583554115814LL;

	t91 = (x365^(x366&(x367==x368)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x370 = INT8_MIN;
	int8_t x371 = 7;
	volatile int32_t t92 = -117553516;

	t92 = (x369^(x370&(x371==x372)));

	if (t92 != -26) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = 203LL;
	volatile int32_t x374 = INT32_MIN;
	int64_t t93 = -84224LL;

	t93 = (x373^(x374&(x375==x376)));

	if (t93 != 203LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	static int64_t x379 = INT64_MIN;
	volatile int32_t t94 = -1;

	t94 = (x377^(x378&(x379==x380)));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -19;
	int8_t x382 = INT8_MIN;
	uint64_t x383 = 16787444824704609LLU;
	int32_t t95 = 1633978;

	t95 = (x381^(x382&(x383==x384)));

	if (t95 != -19) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	static volatile int8_t x387 = INT8_MIN;
	static int16_t x388 = INT16_MAX;
	static volatile int32_t t96 = 12;

	t96 = (x385^(x386&(x387==x388)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	static int16_t x392 = 185;
	int32_t t97 = -49;

	t97 = (x389^(x390&(x391==x392)));

	if (t97 != 80) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 10612276488873LLU;
	uint32_t x396 = 242U;

	t98 = (x393^(x394&(x395==x396)));

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 24U;
	int16_t x398 = -192;
	static uint16_t x399 = 1976U;
	int8_t x400 = -9;
	int32_t t99 = 15;

	t99 = (x397^(x398&(x399==x400)));

	if (t99 != 24) { NG(); } else { ; }
	
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

