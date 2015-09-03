#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x5 = UINT64_MAX;
static int32_t x8 = INT32_MIN;
int16_t x9 = -1;
int16_t x16 = INT16_MAX;
uint64_t x20 = UINT64_MAX;
int32_t x24 = 138579;
uint16_t x30 = 13U;
int32_t x34 = -1;
uint16_t x41 = UINT16_MAX;
volatile int8_t x43 = INT8_MIN;
int64_t x44 = -1LL;
int64_t t10 = -3083205306258293LL;
int32_t x45 = INT32_MIN;
int8_t x53 = 30;
int16_t x59 = INT16_MIN;
int32_t x60 = 775784;
uint32_t x61 = 18841150U;
static int32_t t15 = INT32_MAX;
uint16_t x72 = UINT16_MAX;
static int64_t x75 = -8245305088648763LL;
volatile int64_t t18 = 8803861065174LL;
int8_t x78 = 35;
int64_t x80 = -1LL;
int64_t t19 = -42647188383109LL;
static int64_t x81 = -23533735702036396LL;
int32_t x94 = INT32_MAX;
int64_t x102 = -214467161435812899LL;
int32_t x103 = INT32_MAX;
static volatile int16_t x105 = INT16_MIN;
volatile int32_t t28 = -569335928;
volatile int32_t t29 = 1;
volatile uint64_t x122 = 2274162958LLU;
int8_t x123 = INT8_MIN;
static volatile int32_t t30 = 1148;
uint64_t x130 = 2623771777392474LLU;
int32_t x140 = -1;
static int64_t x144 = -1LL;
int8_t x151 = -1;
int64_t x152 = 157095354496805LL;
int32_t x159 = INT32_MIN;
uint32_t x161 = UINT32_MAX;
int64_t x163 = INT64_MIN;
uint32_t x168 = UINT32_MAX;
uint8_t x169 = UINT8_MAX;
uint64_t x171 = UINT64_MAX;
int64_t x174 = INT64_MIN;
int16_t x183 = INT16_MIN;
int32_t t47 = 20948987;
static int32_t t49 = 21;
uint64_t x209 = UINT64_MAX;
volatile int32_t t54 = INT32_MIN;
uint64_t x223 = 6824972LLU;
int64_t x228 = 3620667862818LL;
int32_t x232 = -1;
int16_t x234 = -1;
uint64_t x238 = UINT64_MAX;
static volatile int8_t x240 = INT8_MIN;
uint16_t x243 = 1U;
int8_t x244 = 4;
volatile int32_t t60 = -13;
uint8_t x248 = 9U;
int16_t x258 = 410;
static uint32_t x260 = 1U;
volatile uint32_t t64 = 80038817U;
uint16_t x262 = UINT16_MAX;
uint32_t x268 = 3358873U;
volatile uint32_t t66 = 11411U;
int32_t x270 = INT32_MIN;
int32_t t68 = -17;
uint32_t x278 = UINT32_MAX;
int16_t x284 = -1;
int32_t t70 = -371;
int64_t x291 = INT64_MAX;
volatile uint64_t t72 = UINT64_MAX;
int16_t x294 = 3145;
int32_t t73 = INT32_MIN;
int64_t x299 = -1LL;
int16_t x303 = INT16_MAX;
int8_t x307 = INT8_MIN;
uint8_t x308 = 22U;
int32_t x313 = -6052415;
static int32_t x317 = -12;
static int16_t x319 = INT16_MIN;
int32_t x323 = INT32_MAX;
static volatile uint64_t t81 = 953LLU;
int8_t x329 = INT8_MAX;
static uint8_t x331 = UINT8_MAX;
int16_t x332 = 4;
int64_t x343 = INT64_MIN;
static int32_t x345 = INT32_MIN;
uint64_t x355 = UINT64_MAX;
static volatile int32_t t88 = -47069;
static int8_t x360 = INT8_MAX;
volatile int32_t t89 = 19;
int16_t x364 = 69;
int32_t x375 = INT32_MIN;
int16_t x381 = INT16_MIN;
static uint32_t x388 = 26884994U;
uint32_t x390 = UINT32_MAX;
static uint64_t x399 = 242683861638LLU;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MIN;
	static int64_t x4 = -30444504LL;
	volatile int64_t t0 = -456LL;

	t0 = (((x1^x2)<=x3)*x4);

	if (t0 != -30444504LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 215521043239LL;
	int16_t x7 = INT16_MIN;
	volatile int32_t t1 = INT32_MIN;

	t1 = (((x5^x6)<=x7)*x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x10 = -1LL;
	volatile int64_t x11 = 59973LL;
	volatile uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = (((x9^x10)<=x11)*x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = 2LL;
	int64_t x15 = 95326593LL;
	int32_t t3 = -1;

	t3 = (((x13^x14)<=x15)*x16);

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 17798401LLU;
	volatile uint64_t t4 = 89881455659084LLU;

	t4 = (((x17^x18)<=x19)*x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1;
	uint8_t x22 = 2U;
	int32_t x23 = -16128959;
	volatile int32_t t5 = -901191;

	t5 = (((x21^x22)<=x23)*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = UINT64_MAX;
	uint64_t x28 = 1906LLU;
	static uint64_t t6 = 2173168LLU;

	t6 = (((x25^x26)<=x27)*x28);

	if (t6 != 1906LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int32_t x31 = INT32_MIN;
	static volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = -1;

	t7 = (((x29^x30)<=x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 1522788490089129620LLU;
	int16_t x35 = INT16_MIN;
	uint64_t x36 = 2849LLU;
	volatile uint64_t t8 = 700358880LLU;

	t8 = (((x33^x34)<=x35)*x36);

	if (t8 != 2849LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -139732;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = 19260U;
	static int16_t x40 = -1;
	int32_t t9 = -15810807;

	t9 = (((x37^x38)<=x39)*x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = 48;

	t10 = (((x41^x42)<=x43)*x44);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 2579422167889495LLU;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = -697755255981401LL;
	volatile int64_t t11 = -34863983288LL;

	t11 = (((x45^x46)<=x47)*x48);

	if (t11 != -697755255981401LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MIN;
	volatile int8_t x51 = INT8_MAX;
	uint8_t x52 = 14U;
	volatile int32_t t12 = 753;

	t12 = (((x49^x50)<=x51)*x52);

	if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x54 = 26U;
	uint32_t x55 = 1255088U;
	int8_t x56 = 0;
	int32_t t13 = 1;

	t13 = (((x53^x54)<=x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 2908261805LLU;
	volatile uint64_t x58 = 144146LLU;
	int32_t t14 = 264687167;

	t14 = (((x57^x58)<=x59)*x60);

	if (t14 != 775784) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = INT16_MIN;
	static int16_t x63 = -116;
	int32_t x64 = INT32_MAX;

	t15 = (((x61^x62)<=x63)*x64);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int16_t x66 = -1;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 6020U;

	t16 = (((x65^x66)<=x67)*x68);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = -1;
	uint64_t x70 = 90474868LLU;
	volatile int32_t x71 = 9998829;
	int32_t t17 = 2666;

	t17 = (((x69^x70)<=x71)*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = 46U;
	int64_t x76 = INT64_MIN;

	t18 = (((x73^x74)<=x75)*x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 12U;
	uint64_t x79 = 3111729272LLU;

	t19 = (((x77^x78)<=x79)*x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x82 = -1;
	volatile uint64_t x83 = 34430209856LLU;
	int32_t x84 = -14;
	static int32_t t20 = -857504;

	t20 = (((x81^x82)<=x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	static uint8_t x86 = 12U;
	int64_t x87 = -381733LL;
	int64_t x88 = -1LL;
	volatile int64_t t21 = 280160370LL;

	t21 = (((x85^x86)<=x87)*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 1U;
	volatile int32_t x90 = INT32_MAX;
	volatile int32_t x91 = -1;
	uint16_t x92 = 9829U;
	static volatile int32_t t22 = -505775443;

	t22 = (((x89^x90)<=x91)*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = -1;
	static volatile uint16_t x95 = UINT16_MAX;
	int64_t x96 = INT64_MIN;
	static volatile int64_t t23 = INT64_MIN;

	t23 = (((x93^x94)<=x95)*x96);

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	volatile int8_t x98 = INT8_MIN;
	static int64_t x99 = INT64_MIN;
	uint16_t x100 = 1008U;
	volatile int32_t t24 = -1;

	t24 = (((x97^x98)<=x99)*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 12;
	static uint32_t x104 = UINT32_MAX;
	static uint32_t t25 = UINT32_MAX;

	t25 = (((x101^x102)<=x103)*x104);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x106 = 109U;
	uint64_t x107 = 114825842653812130LLU;
	volatile int16_t x108 = INT16_MAX;
	volatile int32_t t26 = 1;

	t26 = (((x105^x106)<=x107)*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	uint32_t x110 = 20192690U;
	uint32_t x111 = 14U;
	static uint8_t x112 = 5U;
	volatile int32_t t27 = -12743;

	t27 = (((x109^x110)<=x111)*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	uint16_t x114 = 910U;
	int64_t x115 = INT64_MIN;
	volatile int8_t x116 = INT8_MAX;

	t28 = (((x113^x114)<=x115)*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 14812;
	uint32_t x118 = 79014069U;
	uint32_t x119 = 89468U;
	int8_t x120 = 20;

	t29 = (((x117^x118)<=x119)*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 1U;
	static int8_t x124 = -1;

	t30 = (((x121^x122)<=x123)*x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 5396669804946918209LLU;
	static int32_t x126 = -1037531;
	int8_t x127 = -1;
	int16_t x128 = -60;
	int32_t t31 = -1;

	t31 = (((x125^x126)<=x127)*x128);

	if (t31 != -60) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -16726885053463LL;
	volatile int64_t x131 = INT64_MIN;
	static volatile uint64_t x132 = 83101895410408013LLU;
	uint64_t t32 = 1200334444724LLU;

	t32 = (((x129^x130)<=x131)*x132);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MAX;
	int8_t x135 = -1;
	volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t33 = 0;

	t33 = (((x133^x134)<=x135)*x136);

	if (t33 != 255) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = -1;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MIN;
	volatile int32_t t34 = -1950652;

	t34 = (((x137^x138)<=x139)*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint32_t x142 = UINT32_MAX;
	static int64_t x143 = 503596LL;
	int64_t t35 = 1955572227418651LL;

	t35 = (((x141^x142)<=x143)*x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int8_t x146 = INT8_MIN;
	uint32_t x147 = 9U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -103033679;

	t36 = (((x145^x146)<=x147)*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	uint32_t x150 = 185853121U;
	static volatile int64_t t37 = -2924345372072410617LL;

	t37 = (((x149^x150)<=x151)*x152);

	if (t37 != 157095354496805LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MIN;
	uint32_t x154 = 117831U;
	int16_t x155 = INT16_MIN;
	volatile int16_t x156 = INT16_MIN;
	static int32_t t38 = 950758;

	t38 = (((x153^x154)<=x155)*x156);

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x157 = -1LL;
	static volatile int64_t x158 = -18495704839LL;
	int32_t x160 = INT32_MAX;
	static int32_t t39 = -338395;

	t39 = (((x157^x158)<=x159)*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = INT32_MIN;
	int64_t x164 = -1LL;
	int64_t t40 = 283575516LL;

	t40 = (((x161^x162)<=x163)*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = -1;
	volatile int32_t x166 = INT32_MIN;
	static volatile int32_t x167 = INT32_MIN;
	volatile uint32_t t41 = 14U;

	t41 = (((x165^x166)<=x167)*x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	static int16_t x172 = INT16_MIN;
	int32_t t42 = -54;

	t42 = (((x169^x170)<=x171)*x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = 1;
	static volatile int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 90812302;

	t43 = (((x173^x174)<=x175)*x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile uint64_t x178 = 7109114905LLU;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int64_t t44 = INT64_MIN;

	t44 = (((x177^x178)<=x179)*x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	uint8_t x182 = UINT8_MAX;
	int32_t x184 = -3699670;
	static volatile int32_t t45 = -232115629;

	t45 = (((x181^x182)<=x183)*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile int64_t x186 = INT64_MAX;
	static volatile int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MAX;
	int64_t t46 = INT64_MAX;

	t46 = (((x185^x186)<=x187)*x188);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	int64_t x190 = -2078075LL;
	static uint32_t x191 = 1352882994U;
	int16_t x192 = INT16_MIN;

	t47 = (((x189^x190)<=x191)*x192);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	int16_t x194 = 1223;
	static int8_t x195 = 24;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = (((x193^x194)<=x195)*x196);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 1U;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = 4U;

	t49 = (((x197^x198)<=x199)*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x201 = -13438874906861LL;
	static uint64_t x202 = UINT64_MAX;
	uint8_t x203 = 10U;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = 164091323;

	t50 = (((x201^x202)<=x203)*x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MIN;
	uint8_t x207 = 7U;
	int32_t x208 = -3697;
	volatile int32_t t51 = 128399689;

	t51 = (((x205^x206)<=x207)*x208);

	if (t51 != -3697) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -31325;
	uint32_t x211 = 110728U;
	int64_t x212 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = (((x209^x210)<=x211)*x212);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	volatile uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (((x213^x214)<=x215)*x216);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint32_t x218 = 589U;
	int16_t x219 = 15;
	int32_t x220 = INT32_MIN;

	t54 = (((x217^x218)<=x219)*x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 1;
	int16_t x222 = INT16_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile uint32_t t55 = 58005U;

	t55 = (((x221^x222)<=x223)*x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = 5LLU;
	int16_t x226 = INT16_MIN;
	uint64_t x227 = 1LLU;
	static int64_t t56 = 597243771350LL;

	t56 = (((x225^x226)<=x227)*x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x230 = 502U;
	static int64_t x231 = 27456135255028LL;
	volatile int32_t t57 = 3;

	t57 = (((x229^x230)<=x231)*x232);

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x235 = INT16_MAX;
	int16_t x236 = INT16_MAX;
	int32_t t58 = -20695;

	t58 = (((x233^x234)<=x235)*x236);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 819U;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t t59 = 132366112;

	t59 = (((x237^x238)<=x239)*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 436U;
	volatile int32_t x242 = INT32_MIN;

	t60 = (((x241^x242)<=x243)*x244);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = 20889;
	int8_t x247 = -1;
	int32_t t61 = 0;

	t61 = (((x245^x246)<=x247)*x248);

	if (t61 != 9) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MAX;
	volatile uint8_t x251 = UINT8_MAX;
	int8_t x252 = -11;
	int32_t t62 = -12;

	t62 = (((x249^x250)<=x251)*x252);

	if (t62 != -11) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 19;
	uint32_t x254 = UINT32_MAX;
	uint16_t x255 = 428U;
	volatile int64_t x256 = -47051110LL;
	volatile int64_t t63 = -1067570LL;

	t63 = (((x253^x254)<=x255)*x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	uint8_t x259 = UINT8_MAX;

	t64 = (((x257^x258)<=x259)*x260);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MAX;
	volatile uint16_t x263 = 19669U;
	int32_t x264 = -415098044;
	int32_t t65 = 6963687;

	t65 = (((x261^x262)<=x263)*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = UINT64_MAX;
	static int64_t x266 = -1LL;
	volatile int64_t x267 = INT64_MIN;

	t66 = (((x265^x266)<=x267)*x268);

	if (t66 != 3358873U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	volatile int64_t x271 = INT64_MIN;
	int64_t x272 = -1LL;
	volatile int64_t t67 = -18LL;

	t67 = (((x269^x270)<=x271)*x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 2U;
	int32_t x274 = 2793402;
	uint32_t x275 = 25U;
	uint8_t x276 = 3U;

	t68 = (((x273^x274)<=x275)*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 1123LLU;
	int16_t x279 = 218;
	static int64_t x280 = -7392LL;
	int64_t t69 = 21495LL;

	t69 = (((x277^x278)<=x279)*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x281 = UINT64_MAX;
	uint8_t x282 = 20U;
	static int64_t x283 = -1LL;

	t70 = (((x281^x282)<=x283)*x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 206U;
	volatile int16_t x286 = 3;
	int64_t x287 = -40LL;
	int8_t x288 = 3;
	int32_t t71 = -5537;

	t71 = (((x285^x286)<=x287)*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MAX;
	int64_t x290 = -1LL;
	volatile uint64_t x292 = UINT64_MAX;

	t72 = (((x289^x290)<=x291)*x292);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	static int32_t x295 = 5203;
	int32_t x296 = INT32_MIN;

	t73 = (((x293^x294)<=x295)*x296);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 19321U;
	int16_t x298 = INT16_MAX;
	int8_t x300 = -59;
	volatile int32_t t74 = 2242;

	t74 = (((x297^x298)<=x299)*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 63287067U;
	volatile uint8_t x302 = 0U;
	uint64_t x304 = 1LLU;
	volatile uint64_t t75 = 2118578249298LLU;

	t75 = (((x301^x302)<=x303)*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1;
	int16_t x306 = -1;
	int32_t t76 = 1463;

	t76 = (((x305^x306)<=x307)*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -14;
	static uint32_t x310 = 62U;
	uint64_t x311 = 7064250430224665LLU;
	int32_t x312 = INT32_MIN;
	int32_t t77 = INT32_MIN;

	t77 = (((x309^x310)<=x311)*x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = INT16_MIN;
	uint8_t x315 = 91U;
	int32_t x316 = INT32_MAX;
	int32_t t78 = -118;

	t78 = (((x313^x314)<=x315)*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 12292U;
	int32_t x320 = -27;
	int32_t t79 = 0;

	t79 = (((x317^x318)<=x319)*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = 339;
	uint32_t x322 = 1791258U;
	int8_t x324 = -1;
	volatile int32_t t80 = -1;

	t80 = (((x321^x322)<=x323)*x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 1066625837041600LLU;
	int8_t x326 = INT8_MIN;
	volatile int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 28467467119604LLU;

	t81 = (((x325^x326)<=x327)*x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = INT16_MIN;
	volatile int32_t t82 = 1;

	t82 = (((x329^x330)<=x331)*x332);

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	uint8_t x334 = UINT8_MAX;
	uint8_t x335 = UINT8_MAX;
	int64_t x336 = -3470831881LL;
	volatile int64_t t83 = 1020LL;

	t83 = (((x333^x334)<=x335)*x336);

	if (t83 != -3470831881LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x337 = INT32_MAX;
	int8_t x338 = 52;
	uint16_t x339 = 88U;
	int8_t x340 = 7;
	volatile int32_t t84 = 4151;

	t84 = (((x337^x338)<=x339)*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static uint32_t x342 = 37842U;
	volatile int64_t x344 = 924819LL;
	static volatile int64_t t85 = -288LL;

	t85 = (((x341^x342)<=x343)*x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 14651390667295937LLU;
	int16_t x347 = -46;
	volatile int64_t x348 = -1LL;
	static volatile int64_t t86 = -12067662489638140LL;

	t86 = (((x345^x346)<=x347)*x348);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 21257U;
	static uint32_t x350 = UINT32_MAX;
	volatile uint8_t x351 = 2U;
	int64_t x352 = -4168LL;
	volatile int64_t t87 = 1295928337914451052LL;

	t87 = (((x349^x350)<=x351)*x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	volatile uint8_t x354 = 2U;
	static int16_t x356 = -2887;

	t88 = (((x353^x354)<=x355)*x356);

	if (t88 != -2887) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int32_t x358 = -26144;
	int16_t x359 = INT16_MAX;

	t89 = (((x357^x358)<=x359)*x360);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	uint8_t x362 = 37U;
	int32_t x363 = -13;
	int32_t t90 = -2;

	t90 = (((x361^x362)<=x363)*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MAX;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 21745U;
	volatile int32_t t91 = -236;

	t91 = (((x365^x366)<=x367)*x368);

	if (t91 != 21745) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = 7U;
	int32_t x371 = INT32_MAX;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = 1207;

	t92 = (((x369^x370)<=x371)*x372);

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = INT8_MIN;
	static int64_t x374 = INT64_MIN;
	static uint32_t x376 = 0U;
	uint32_t t93 = 2144U;

	t93 = (((x373^x374)<=x375)*x376);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 219448791493LLU;
	int8_t x378 = 19;
	int8_t x379 = -1;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = -27836029;

	t94 = (((x377^x378)<=x379)*x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MIN;
	int32_t x383 = INT32_MAX;
	static int16_t x384 = 338;
	int32_t t95 = 59292489;

	t95 = (((x381^x382)<=x383)*x384);

	if (t95 != 338) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 1;
	int64_t x386 = INT64_MIN;
	volatile int16_t x387 = -20;
	static uint32_t t96 = 1530329U;

	t96 = (((x385^x386)<=x387)*x388);

	if (t96 != 26884994U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x391 = -1;
	volatile int32_t x392 = -1;
	static int32_t t97 = -124495;

	t97 = (((x389^x390)<=x391)*x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 858396LLU;
	int64_t x394 = INT64_MAX;
	static uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MAX;
	static volatile int32_t t98 = 24941829;

	t98 = (((x393^x394)<=x395)*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = 17466;
	int32_t x398 = 23;
	int64_t x400 = 39901647230841619LL;
	static volatile int64_t t99 = -229275784789LL;

	t99 = (((x397^x398)<=x399)*x400);

	if (t99 != 39901647230841619LL) { NG(); } else { ; }
	
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

