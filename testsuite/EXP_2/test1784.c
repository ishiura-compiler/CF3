#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -3;
volatile uint16_t x4 = 1354U;
volatile int32_t t0 = 121044;
static volatile uint32_t t2 = 0U;
static int16_t x14 = INT16_MIN;
int64_t x15 = INT64_MIN;
int64_t x20 = -1LL;
static int8_t x23 = INT8_MAX;
int32_t x27 = INT32_MIN;
int8_t x29 = 1;
int64_t x33 = 11974LL;
uint16_t x35 = 91U;
static int16_t x38 = INT16_MAX;
static int32_t t9 = 21020179;
static int8_t x42 = INT8_MIN;
int16_t x47 = 38;
static uint32_t t11 = 535447U;
uint16_t x53 = 5U;
static volatile int32_t t13 = -48246276;
volatile int32_t t14 = -3;
static int16_t x63 = -2740;
int8_t x64 = INT8_MIN;
volatile int64_t x65 = -140598052997355LL;
int64_t x68 = INT64_MIN;
uint8_t x70 = UINT8_MAX;
int8_t x83 = 2;
volatile int32_t t20 = -4094225;
volatile int8_t x85 = 2;
int32_t x87 = INT32_MIN;
uint8_t x91 = UINT8_MAX;
static uint64_t x92 = 408169424011521466LLU;
static uint8_t x95 = 13U;
int16_t x104 = INT16_MIN;
uint8_t x107 = 110U;
int32_t x110 = INT32_MIN;
uint32_t x112 = 17000U;
int16_t x114 = 770;
uint32_t x116 = 5224U;
int32_t x117 = INT32_MIN;
uint32_t t30 = 1042U;
uint32_t t32 = 5005944U;
volatile int32_t t35 = -65002666;
uint8_t x146 = UINT8_MAX;
int16_t x147 = 7348;
volatile int16_t x158 = INT16_MAX;
int64_t x160 = 3LL;
int64_t t39 = 1122378710385279151LL;
int64_t x161 = -1826062026306249807LL;
volatile uint16_t x162 = UINT16_MAX;
int16_t x165 = INT16_MAX;
int32_t x174 = -1;
uint64_t x177 = UINT64_MAX;
int8_t x181 = INT8_MIN;
int16_t x184 = INT16_MIN;
int64_t x185 = -7974413902748034LL;
volatile int32_t x186 = 111551;
int8_t x188 = INT8_MIN;
int8_t x195 = INT8_MIN;
int64_t x198 = -1LL;
uint8_t x202 = 110U;
int16_t x205 = INT16_MAX;
int8_t x208 = -1;
uint64_t x218 = UINT64_MAX;
volatile int32_t x220 = -111544546;
static volatile int64_t x221 = -832491439910474LL;
int32_t x228 = INT32_MIN;
uint8_t x231 = UINT8_MAX;
volatile int32_t t57 = -23228298;
int16_t x234 = -1708;
int32_t t60 = 23689;
int8_t x246 = -2;
static int8_t x253 = INT8_MIN;
int8_t x255 = INT8_MIN;
volatile int32_t x257 = INT32_MAX;
int32_t x281 = INT32_MIN;
static int64_t x282 = 2013LL;
int32_t x283 = INT32_MIN;
static int32_t x286 = INT32_MIN;
uint32_t x288 = 16U;
int32_t t72 = 1909375;
uint8_t x293 = 1U;
int32_t x295 = INT32_MIN;
volatile int64_t x296 = INT64_MIN;
volatile int64_t t73 = -123532953721LL;
int64_t x299 = INT64_MIN;
volatile int32_t t74 = 444229;
uint32_t x302 = 77388663U;
static int64_t x305 = -1LL;
volatile int32_t t76 = -1218330;
int64_t x317 = -1LL;
static volatile int32_t x320 = INT32_MIN;
uint64_t x323 = 13442234677975LLU;
int8_t x324 = INT8_MIN;
int64_t x330 = 146LL;
int8_t x331 = INT8_MAX;
int16_t x334 = -1;
volatile uint32_t x339 = UINT32_MAX;
uint32_t x340 = 133U;
volatile int8_t x341 = 1;
uint32_t x346 = 0U;
int8_t x348 = -1;
int32_t x355 = INT32_MAX;
volatile int64_t t88 = -513430843255LL;
int8_t x357 = -1;
uint16_t x361 = UINT16_MAX;
int64_t x363 = INT64_MIN;
int32_t x364 = INT32_MIN;
int64_t x365 = INT64_MIN;
uint8_t x368 = UINT8_MAX;
int32_t t93 = -30683;
uint64_t x379 = 709570LLU;
volatile int32_t x382 = -715301;
int64_t x384 = INT64_MAX;
volatile int8_t x389 = INT8_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint32_t x3 = UINT32_MAX;

	t0 = ((x1==(x2&x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -11;
	int32_t x6 = 26063;
	volatile int16_t x7 = -1;
	static int16_t x8 = -15518;
	int32_t t1 = -8994096;

	t1 = ((x5==(x6&x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1299U;
	int8_t x10 = 4;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = 1262744036U;

	t2 = ((x9==(x10&x11))*x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x16 = 827109;
	volatile int32_t t3 = -56354;

	t3 = ((x13==(x14&x15))*x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int64_t x18 = -1LL;
	uint16_t x19 = UINT16_MAX;
	static int64_t t4 = -1LL;

	t4 = ((x17==(x18&x19))*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static volatile uint16_t x22 = 1U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = 62565912;

	t5 = ((x21==(x22&x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint8_t x26 = UINT8_MAX;
	volatile uint8_t x28 = 100U;
	int32_t t6 = 126599032;

	t6 = ((x25==(x26&x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = -1;
	volatile int64_t x31 = 2145LL;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 3;

	t7 = ((x29==(x30&x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	volatile int8_t x36 = -1;
	int32_t t8 = 22196019;

	t8 = ((x33==(x34&x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint16_t x39 = 1U;
	int32_t x40 = -5;

	t9 = ((x37==(x38&x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x41 = UINT64_MAX;
	int16_t x43 = 1;
	int16_t x44 = 1;
	volatile int32_t t10 = -9852986;

	t10 = ((x41==(x42&x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 374;
	int16_t x46 = INT16_MAX;
	static uint32_t x48 = 407U;

	t11 = ((x45==(x46&x47))*x48);

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	volatile int32_t x50 = INT32_MAX;
	static int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = 69U;
	static int32_t t12 = -29539526;

	t12 = ((x49==(x50&x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 664155LLU;
	int16_t x55 = INT16_MIN;
	static int8_t x56 = 25;

	t13 = ((x53==(x54&x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = UINT16_MAX;
	volatile int64_t x58 = -359455LL;
	int16_t x59 = -1;
	uint8_t x60 = 1U;

	t14 = ((x57==(x58&x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint8_t x62 = 2U;
	volatile int32_t t15 = 0;

	t15 = ((x61==(x62&x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 532846304660839LLU;
	uint8_t x67 = 16U;
	volatile int64_t t16 = -1LL;

	t16 = ((x65==(x66&x67))*x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x71 = 95U;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -63;

	t17 = ((x69==(x70&x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 13U;
	static uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MIN;
	int8_t x76 = 9;
	volatile int32_t t18 = -682;

	t18 = ((x73==(x74&x75))*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	int64_t x78 = -1LL;
	int16_t x79 = -1;
	uint32_t x80 = 526768457U;
	static uint32_t t19 = 2705698U;

	t19 = ((x77==(x78&x79))*x80);

	if (t19 != 526768457U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	static uint32_t x82 = 77799289U;
	int16_t x84 = -1;

	t20 = ((x81==(x82&x83))*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	volatile int64_t x88 = 2LL;
	volatile int64_t t21 = -16LL;

	t21 = ((x85==(x86&x87))*x88);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 15372LLU;
	int8_t x90 = 53;
	volatile uint64_t t22 = 11545539223539901LLU;

	t22 = ((x89==(x90&x91))*x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 376U;
	static volatile int32_t x94 = -4533;
	uint64_t x96 = UINT64_MAX;
	volatile uint64_t t23 = 3877610672774309247LLU;

	t23 = ((x93==(x94&x95))*x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	volatile uint32_t x98 = 33389U;
	int8_t x99 = INT8_MIN;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 93;

	t24 = ((x97==(x98&x99))*x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 25U;
	int16_t x102 = -1;
	int64_t x103 = -29882118LL;
	static int32_t t25 = -526701917;

	t25 = ((x101==(x102&x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint16_t x106 = 40U;
	int32_t x108 = INT32_MAX;
	volatile int32_t t26 = 3;

	t26 = ((x105==(x106&x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int32_t x111 = -1;
	volatile uint32_t t27 = 753830U;

	t27 = ((x109==(x110&x111))*x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile uint16_t x115 = UINT16_MAX;
	uint32_t t28 = 4287599U;

	t28 = ((x113==(x114&x115))*x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x118 = UINT32_MAX;
	int8_t x119 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -12;

	t29 = ((x117==(x118&x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 61;
	int16_t x122 = INT16_MAX;
	int16_t x123 = -1;
	uint32_t x124 = 180U;

	t30 = ((x121==(x122&x123))*x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	static int64_t x126 = -1LL;
	uint32_t x127 = 5980U;
	uint32_t x128 = 7U;
	static volatile uint32_t t31 = 2101197U;

	t31 = ((x125==(x126&x127))*x128);

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = 3616025U;
	uint32_t x130 = UINT32_MAX;
	volatile uint16_t x131 = 1U;
	static volatile uint32_t x132 = 108760U;

	t32 = ((x129==(x130&x131))*x132);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int64_t x134 = INT64_MAX;
	static volatile uint32_t x135 = 15046U;
	int16_t x136 = INT16_MAX;
	int32_t t33 = -414581;

	t33 = ((x133==(x134&x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = 65830305175656294LL;
	volatile int8_t x138 = 0;
	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t34 = 905655;

	t34 = ((x137==(x138&x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 12U;
	volatile int32_t x142 = INT32_MIN;
	static int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MIN;

	t35 = ((x141==(x142&x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = 5963LL;
	static int32_t x148 = -24;
	volatile int32_t t36 = 1;

	t36 = ((x145==(x146&x147))*x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = 1;
	int8_t x150 = -1;
	static int64_t x151 = -1LL;
	int64_t x152 = INT64_MIN;
	static int64_t t37 = -54LL;

	t37 = ((x149==(x150&x151))*x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	static int32_t x154 = INT32_MAX;
	uint64_t x155 = 72LLU;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 379563;

	t38 = ((x153==(x154&x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MAX;
	static uint8_t x159 = 7U;

	t39 = ((x157==(x158&x159))*x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = 1;
	int64_t x164 = INT64_MIN;
	int64_t t40 = -634359320441568LL;

	t40 = ((x161==(x162&x163))*x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int64_t x168 = -3LL;
	volatile int64_t t41 = -213971LL;

	t41 = ((x165==(x166&x167))*x168);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 751299U;
	int8_t x170 = INT8_MAX;
	static int32_t x171 = INT32_MIN;
	static volatile int8_t x172 = 1;
	int32_t t42 = -391345;

	t42 = ((x169==(x170&x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 3792U;
	static int32_t x175 = 2948207;
	uint32_t x176 = 60914U;
	static uint32_t t43 = 1U;

	t43 = ((x173==(x174&x175))*x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = -4206376720820955525LL;
	volatile int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = -10004035LL;

	t44 = ((x177==(x178&x179))*x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int16_t x183 = 1;
	volatile int32_t t45 = 39;

	t45 = ((x181==(x182&x183))*x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x187 = 1;
	static volatile int32_t t46 = -3537;

	t46 = ((x185==(x186&x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = -9;
	int32_t x190 = INT32_MIN;
	volatile uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 6641U;
	volatile int32_t t47 = 241392;

	t47 = ((x189==(x190&x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 7;
	int32_t x194 = INT32_MIN;
	static uint8_t x196 = 7U;
	int32_t t48 = 7;

	t48 = ((x193==(x194&x195))*x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -22545087635838LL;
	int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	volatile int32_t t49 = 34914424;

	t49 = ((x197==(x198&x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	int32_t x203 = -1;
	int64_t x204 = 0LL;
	static volatile int64_t t50 = -1071637802LL;

	t50 = ((x201==(x202&x203))*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = INT8_MAX;
	int16_t x207 = -1;
	int32_t t51 = -5784;

	t51 = ((x205==(x206&x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -21;
	int8_t x210 = INT8_MAX;
	int64_t x211 = INT64_MAX;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t52 = -1041482056;

	t52 = ((x209==(x210&x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -3;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = INT8_MIN;
	static uint64_t x216 = 3665264553LLU;
	uint64_t t53 = 2103934725LLU;

	t53 = ((x213==(x214&x215))*x216);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	volatile int32_t t54 = -68235003;

	t54 = ((x217==(x218&x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = UINT32_MAX;
	int8_t x223 = INT8_MIN;
	uint8_t x224 = 9U;
	int32_t t55 = -30;

	t55 = ((x221==(x222&x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = 0LL;
	int64_t x226 = 93316793155930LL;
	volatile int64_t x227 = INT64_MIN;
	int32_t t56 = INT32_MIN;

	t56 = ((x225==(x226&x227))*x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 14U;
	volatile int32_t x230 = 30;
	int32_t x232 = INT32_MIN;

	t57 = ((x229==(x230&x231))*x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = -1;
	int16_t x235 = INT16_MIN;
	volatile int32_t x236 = 196;
	int32_t t58 = 0;

	t58 = ((x233==(x234&x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t59 = 1002929707U;

	t59 = ((x237==(x238&x239))*x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 2U;
	uint64_t x242 = 207LLU;
	volatile int16_t x243 = -6760;
	int32_t x244 = -87;

	t60 = ((x241==(x242&x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	volatile int16_t x247 = INT16_MAX;
	int16_t x248 = 0;
	int32_t t61 = -9;

	t61 = ((x245==(x246&x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 903;
	int16_t x250 = INT16_MIN;
	int16_t x251 = 4044;
	int16_t x252 = INT16_MAX;
	volatile int32_t t62 = 50039415;

	t62 = ((x249==(x250&x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x254 = UINT16_MAX;
	static int8_t x256 = INT8_MIN;
	static volatile int32_t t63 = 3;

	t63 = ((x253==(x254&x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = INT64_MAX;
	int64_t t64 = -210174568LL;

	t64 = ((x257==(x258&x259))*x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 60;
	volatile uint8_t x262 = 2U;
	uint32_t x263 = UINT32_MAX;
	int8_t x264 = INT8_MAX;
	static volatile int32_t t65 = 1;

	t65 = ((x261==(x262&x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	int16_t x266 = INT16_MIN;
	int32_t x267 = INT32_MIN;
	uint8_t x268 = 0U;
	static int32_t t66 = -120603132;

	t66 = ((x265==(x266&x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	volatile uint8_t x270 = 0U;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = -15795;
	int32_t t67 = -13142;

	t67 = ((x269==(x270&x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MAX;
	int64_t x276 = -1LL;
	int64_t t68 = -1962894LL;

	t68 = ((x273==(x274&x275))*x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 3961;
	volatile uint8_t x278 = 1U;
	int32_t x279 = -29878;
	uint8_t x280 = 4U;
	volatile int32_t t69 = -147000184;

	t69 = ((x277==(x278&x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x284 = -1;
	volatile int32_t t70 = -170;

	t70 = ((x281==(x282&x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 3327745U;
	static int32_t x287 = 12;
	uint32_t t71 = 2U;

	t71 = ((x285==(x286&x287))*x288);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 217843276237LL;
	int8_t x290 = 62;
	int16_t x291 = 0;
	volatile int16_t x292 = INT16_MIN;

	t72 = ((x289==(x290&x291))*x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;

	t73 = ((x293==(x294&x295))*x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = -19705677;
	int16_t x298 = -1687;
	static int32_t x300 = -2079473;

	t74 = ((x297==(x298&x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int64_t x303 = INT64_MIN;
	static int64_t x304 = -1151588LL;
	volatile int64_t t75 = -18649582LL;

	t75 = ((x301==(x302&x303))*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x306 = 31LLU;
	int8_t x307 = INT8_MAX;
	static uint16_t x308 = UINT16_MAX;

	t76 = ((x305==(x306&x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	volatile int64_t x310 = INT64_MAX;
	int32_t x311 = INT32_MIN;
	static uint64_t x312 = 6LLU;
	static uint64_t t77 = 467485220LLU;

	t77 = ((x309==(x310&x311))*x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 277293LLU;
	int32_t x314 = INT32_MIN;
	int64_t x315 = 4581373380199576111LL;
	uint64_t x316 = UINT64_MAX;
	static volatile uint64_t t78 = 13843898477854039LLU;

	t78 = ((x313==(x314&x315))*x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = UINT32_MAX;
	volatile int64_t x319 = INT64_MIN;
	int32_t t79 = -5535599;

	t79 = ((x317==(x318&x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 1;
	int16_t x322 = -1;
	int32_t t80 = -92994;

	t80 = ((x321==(x322&x323))*x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -12389331320709LL;
	volatile int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MIN;
	int64_t x328 = -38114LL;
	int64_t t81 = 27365549000796192LL;

	t81 = ((x325==(x326&x327))*x328);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint16_t x332 = 9U;
	int32_t t82 = 1;

	t82 = ((x329==(x330&x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = -1;
	int8_t x335 = -1;
	int64_t x336 = INT64_MIN;
	static int64_t t83 = INT64_MIN;

	t83 = ((x333==(x334&x335))*x336);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint16_t x338 = UINT16_MAX;
	uint32_t t84 = 5447U;

	t84 = ((x337==(x338&x339))*x340);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x342 = INT8_MIN;
	static int8_t x343 = 14;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 544;

	t85 = ((x341==(x342&x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = 2274U;
	int8_t x347 = INT8_MIN;
	int32_t t86 = 195;

	t86 = ((x345==(x346&x347))*x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -148;
	static volatile int16_t x350 = INT16_MAX;
	uint16_t x351 = 2U;
	uint64_t x352 = UINT64_MAX;
	uint64_t t87 = 12546723527LLU;

	t87 = ((x349==(x350&x351))*x352);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 370412508LLU;
	int32_t x354 = INT32_MAX;
	int64_t x356 = 74907690111LL;

	t88 = ((x353==(x354&x355))*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = 971;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = 125;

	t89 = ((x357==(x358&x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = 460489435LL;
	static int32_t t90 = 447;

	t90 = ((x361==(x362&x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MAX;
	int8_t x367 = -1;
	volatile int32_t t91 = -382364876;

	t91 = ((x365==(x366&x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	volatile int8_t x372 = 1;
	volatile int32_t t92 = -6685;

	t92 = ((x369==(x370&x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	volatile int8_t x374 = INT8_MIN;
	volatile uint8_t x375 = 7U;
	int16_t x376 = INT16_MAX;

	t93 = ((x373==(x374&x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -3;
	int32_t x378 = -29523874;
	volatile int64_t x380 = INT64_MAX;
	int64_t t94 = -572263625168487LL;

	t94 = ((x377==(x378&x379))*x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	int8_t x383 = -1;
	int64_t t95 = -167LL;

	t95 = ((x381==(x382&x383))*x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MAX;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 63;

	t96 = ((x385==(x386&x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x390 = 4U;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 4422;

	t97 = ((x389==(x390&x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	static int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = UINT64_MAX;
	int8_t x396 = -1;
	volatile int32_t t98 = -10;

	t98 = ((x393==(x394&x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	int8_t x398 = INT8_MIN;
	volatile int16_t x399 = INT16_MAX;
	uint8_t x400 = 112U;
	int32_t t99 = 1;

	t99 = ((x397==(x398&x399))*x400);

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

