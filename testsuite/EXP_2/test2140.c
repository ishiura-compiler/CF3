#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = 13162U;
volatile int32_t t0 = 5749;
int8_t x8 = INT8_MAX;
int8_t x16 = -1;
int64_t x17 = -2247331278204809984LL;
int16_t x19 = INT16_MIN;
static int64_t x20 = INT64_MAX;
int32_t t5 = 75294;
int32_t t6 = 2;
uint8_t x33 = UINT8_MAX;
volatile int32_t x44 = 10;
static volatile int32_t t10 = 60397031;
int32_t x55 = -1;
int32_t x57 = INT32_MAX;
int16_t x59 = INT16_MIN;
volatile int16_t x61 = 2160;
int32_t t15 = -12992959;
static volatile int64_t x67 = -11188661599504LL;
volatile int32_t t16 = -4553459;
int8_t x70 = INT8_MIN;
volatile uint64_t x72 = 16459513568996838LLU;
int8_t x73 = INT8_MIN;
volatile int8_t x74 = 1;
uint64_t x77 = UINT64_MAX;
volatile int32_t t19 = -25229592;
int8_t x93 = INT8_MIN;
volatile int16_t x99 = INT16_MIN;
uint16_t x100 = UINT16_MAX;
uint8_t x108 = UINT8_MAX;
static int8_t x112 = INT8_MIN;
int16_t x113 = INT16_MIN;
volatile uint8_t x114 = UINT8_MAX;
uint32_t x116 = UINT32_MAX;
int64_t x117 = INT64_MAX;
volatile uint64_t x122 = UINT64_MAX;
volatile int32_t t30 = -73011;
int32_t t31 = -7;
static volatile int32_t t32 = -1;
int64_t x133 = -1LL;
uint32_t x137 = UINT32_MAX;
static int16_t x144 = INT16_MAX;
uint8_t x147 = 5U;
uint8_t x150 = 0U;
int32_t x162 = INT32_MAX;
volatile int32_t t40 = -1;
int8_t x172 = 16;
int32_t t42 = -134;
int16_t x174 = INT16_MAX;
int32_t x177 = INT32_MAX;
int32_t t46 = 2;
uint8_t x189 = UINT8_MAX;
static uint8_t x191 = UINT8_MAX;
volatile uint32_t x195 = 627938U;
volatile uint64_t x196 = 18732080LLU;
int16_t x197 = INT16_MIN;
int64_t x198 = INT64_MIN;
int16_t x210 = INT16_MAX;
int64_t x212 = INT64_MIN;
int32_t x215 = INT32_MIN;
int64_t x217 = 15480806377431187LL;
int64_t x232 = INT64_MIN;
static volatile int32_t t57 = -15320;
uint32_t x234 = 1U;
static int8_t x236 = -1;
static int32_t t58 = 4868;
uint32_t x237 = 95U;
int32_t t59 = -230562901;
int64_t x244 = INT64_MIN;
uint32_t x251 = 1867653055U;
int8_t x252 = INT8_MIN;
volatile int32_t x261 = 1;
uint8_t x262 = 31U;
volatile int32_t t65 = 15428786;
volatile int8_t x280 = INT8_MAX;
int32_t t71 = 328880;
int64_t x290 = INT64_MAX;
static int8_t x294 = INT8_MIN;
static int32_t t73 = 2401;
static int16_t x298 = -1;
static int8_t x302 = INT8_MIN;
uint64_t x306 = 1810LLU;
int32_t t77 = -2178;
int64_t x315 = INT64_MAX;
int32_t x320 = -1;
int64_t x322 = -1LL;
static uint8_t x324 = 0U;
static volatile int32_t x325 = 0;
int32_t t81 = 7787;
volatile int16_t x331 = INT16_MIN;
uint16_t x332 = 56U;
uint8_t x338 = UINT8_MAX;
int64_t x340 = -1LL;
int32_t x351 = -6692012;
volatile int64_t x352 = 683LL;
static uint8_t x353 = UINT8_MAX;
int8_t x356 = INT8_MIN;
static int32_t t90 = 197393;
volatile uint64_t x366 = 30912287910LLU;
static int32_t t91 = 1;
static int32_t x371 = -1;
volatile uint16_t x375 = UINT16_MAX;
uint32_t x377 = 253U;
static int8_t x384 = -23;
int64_t x385 = -1LL;
uint64_t x396 = 7963LLU;
static int64_t x397 = -4588LL;
volatile int64_t x398 = INT64_MIN;


void f0(void) {
	int64_t x1 = 236LL;
	static uint16_t x2 = 13U;
	int32_t x3 = -668773157;

	t0 = ((x1<(x2^x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	static volatile int32_t t1 = 22735753;

	t1 = ((x5<(x6^x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MIN;
	static volatile uint32_t x11 = 22451U;
	uint32_t x12 = 7824154U;
	volatile int32_t t2 = -48;

	t2 = ((x9<(x10^x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int32_t x14 = 826533;
	volatile int64_t x15 = INT64_MIN;
	int32_t t3 = -230;

	t3 = ((x13<(x14^x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x18 = 6;
	volatile int32_t t4 = -1;

	t4 = ((x17<(x18^x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -336326525;
	int32_t x22 = -133027578;
	static uint64_t x23 = 8364151LLU;
	static int8_t x24 = INT8_MAX;

	t5 = ((x21<(x22^x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = 1;
	int16_t x26 = INT16_MIN;
	static int8_t x27 = INT8_MAX;
	int64_t x28 = -1700920168348560411LL;

	t6 = ((x25<(x26^x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 3U;
	uint8_t x30 = UINT8_MAX;
	int16_t x31 = INT16_MAX;
	int64_t x32 = -59LL;
	volatile int32_t t7 = -745;

	t7 = ((x29<(x30^x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = 179872;
	static int32_t x35 = INT32_MIN;
	uint8_t x36 = 2U;
	int32_t t8 = -1;

	t8 = ((x33<(x34^x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	volatile uint32_t x38 = 139U;
	static int16_t x39 = INT16_MIN;
	uint16_t x40 = UINT16_MAX;
	int32_t t9 = 112;

	t9 = ((x37<(x38^x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -407;
	uint32_t x42 = 7436804U;
	uint16_t x43 = UINT16_MAX;

	t10 = ((x41<(x42^x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	static int64_t x46 = -1LL;
	int8_t x47 = INT8_MIN;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = 65;

	t11 = ((x45<(x46^x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 47U;
	static int32_t x50 = INT32_MIN;
	int8_t x51 = 62;
	uint32_t x52 = 3U;
	volatile int32_t t12 = 215;

	t12 = ((x49<(x50^x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 8389U;
	static int64_t x54 = -1LL;
	volatile uint8_t x56 = 26U;
	volatile int32_t t13 = 1712790;

	t13 = ((x53<(x54^x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	int64_t x60 = -1LL;
	volatile int32_t t14 = 676493610;

	t14 = ((x57<(x58^x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x62 = INT8_MAX;
	volatile uint16_t x63 = 883U;
	int16_t x64 = -1;

	t15 = ((x61<(x62^x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 1U;
	int16_t x66 = INT16_MAX;
	int32_t x68 = INT32_MIN;

	t16 = ((x65<(x66^x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	static int64_t x71 = INT64_MAX;
	static int32_t t17 = -1003236;

	t17 = ((x69<(x70^x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x75 = 2U;
	static int16_t x76 = -6059;
	volatile int32_t t18 = 794;

	t18 = ((x73<(x74^x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 3U;
	uint64_t x79 = 24891LLU;
	int8_t x80 = -54;

	t19 = ((x77<(x78^x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	volatile int16_t x82 = INT16_MIN;
	static volatile int16_t x83 = INT16_MIN;
	uint8_t x84 = 19U;
	volatile int32_t t20 = 84;

	t20 = ((x81<(x82^x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 789926291432LLU;
	static int8_t x86 = 5;
	volatile int32_t x87 = INT32_MIN;
	static int16_t x88 = INT16_MAX;
	static volatile int32_t t21 = -4;

	t21 = ((x85<(x86^x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 1U;
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = 27828830824295LL;
	int32_t x92 = -48694;
	volatile int32_t t22 = -7217;

	t22 = ((x89<(x90^x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	int8_t x95 = 1;
	int64_t x96 = INT64_MAX;
	int32_t t23 = -208755;

	t23 = ((x93<(x94^x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = INT32_MIN;
	int32_t t24 = -1;

	t24 = ((x97<(x98^x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 5U;
	int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	int64_t x104 = -1LL;
	static int32_t t25 = 53;

	t25 = ((x101<(x102^x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -101233680289430LL;
	volatile uint64_t x106 = UINT64_MAX;
	uint8_t x107 = 126U;
	volatile int32_t t26 = 497518893;

	t26 = ((x105<(x106^x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MAX;
	static uint32_t x110 = 444747U;
	static int32_t x111 = INT32_MAX;
	int32_t t27 = -1680;

	t27 = ((x109<(x110^x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x115 = -1;
	volatile int32_t t28 = -50417;

	t28 = ((x113<(x114^x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = 116783213032LL;
	int8_t x119 = INT8_MIN;
	uint16_t x120 = 1571U;
	int32_t t29 = 27425;

	t29 = ((x117<(x118^x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x123 = 31U;
	uint32_t x124 = UINT32_MAX;

	t30 = ((x121<(x122^x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 3LLU;
	int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	int32_t x128 = INT32_MIN;

	t31 = ((x125<(x126^x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	uint32_t x130 = UINT32_MAX;
	int32_t x131 = INT32_MAX;
	uint64_t x132 = 1LLU;

	t32 = ((x129<(x130^x131))==x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = INT32_MIN;
	int16_t x135 = INT16_MAX;
	volatile int8_t x136 = 2;
	int32_t t33 = -1;

	t33 = ((x133<(x134^x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = INT32_MIN;
	static int16_t x139 = -1;
	int64_t x140 = 1867383532029LL;
	volatile int32_t t34 = 116219;

	t34 = ((x137<(x138^x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -3481;
	int16_t x142 = INT16_MIN;
	volatile int32_t x143 = -1;
	static int32_t t35 = -152;

	t35 = ((x141<(x142^x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = UINT8_MAX;
	uint64_t x148 = 583321148147102LLU;
	volatile int32_t t36 = 478;

	t36 = ((x145<(x146^x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	static uint32_t x151 = 328U;
	volatile uint32_t x152 = UINT32_MAX;
	int32_t t37 = 184162;

	t37 = ((x149<(x150^x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 579LLU;
	volatile int64_t x154 = INT64_MIN;
	int16_t x155 = 209;
	int32_t x156 = INT32_MIN;
	int32_t t38 = -14070;

	t38 = ((x153<(x154^x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int64_t x158 = -21551366811LL;
	volatile int64_t x159 = INT64_MIN;
	volatile uint32_t x160 = 312U;
	volatile int32_t t39 = -7048;

	t39 = ((x157<(x158^x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = 7;
	int16_t x163 = -89;
	static int64_t x164 = INT64_MAX;

	t40 = ((x161<(x162^x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -1LL;
	int32_t x166 = INT32_MIN;
	int16_t x167 = -1;
	int8_t x168 = -1;
	int32_t t41 = -245658488;

	t41 = ((x165<(x166^x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MIN;
	volatile int64_t x170 = INT64_MIN;
	int8_t x171 = 0;

	t42 = ((x169<(x170^x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x173 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	int64_t x176 = INT64_MAX;
	static int32_t t43 = 1400843;

	t43 = ((x173<(x174^x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x178 = 1U;
	volatile uint64_t x179 = 335280388LLU;
	static volatile uint16_t x180 = 219U;
	int32_t t44 = -119;

	t44 = ((x177<(x178^x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = 3U;
	uint32_t x183 = 1U;
	uint16_t x184 = 928U;
	static int32_t t45 = -4139;

	t45 = ((x181<(x182^x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	uint64_t x186 = 62712971597600LLU;
	uint32_t x187 = UINT32_MAX;
	int16_t x188 = -1;

	t46 = ((x185<(x186^x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x190 = -1;
	static int8_t x192 = INT8_MAX;
	int32_t t47 = 850;

	t47 = ((x189<(x190^x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 348U;
	int64_t x194 = 6157006LL;
	volatile int32_t t48 = 156325019;

	t48 = ((x193<(x194^x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x199 = INT64_MIN;
	int16_t x200 = 2;
	int32_t t49 = 6716;

	t49 = ((x197<(x198^x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	volatile int8_t x202 = INT8_MAX;
	int8_t x203 = 22;
	int32_t x204 = -1;
	volatile int32_t t50 = -15519;

	t50 = ((x201<(x202^x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = -85;
	static uint64_t x206 = UINT64_MAX;
	uint32_t x207 = 5568340U;
	static volatile uint16_t x208 = 3U;
	volatile int32_t t51 = -1;

	t51 = ((x205<(x206^x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -38969638368385718LL;
	uint16_t x211 = UINT16_MAX;
	volatile int32_t t52 = -42950490;

	t52 = ((x209<(x210^x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = 2046;
	int8_t x214 = -1;
	volatile uint8_t x216 = 14U;
	int32_t t53 = 1;

	t53 = ((x213<(x214^x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 313392U;
	volatile int8_t x219 = INT8_MAX;
	static int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -15512;

	t54 = ((x217<(x218^x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	uint16_t x222 = 1U;
	int64_t x223 = 15075LL;
	static int64_t x224 = 0LL;
	int32_t t55 = 120;

	t55 = ((x221<(x222^x223))==x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = INT8_MIN;
	int64_t x226 = INT64_MAX;
	static int16_t x227 = -1;
	static int32_t x228 = INT32_MIN;
	static int32_t t56 = 721;

	t56 = ((x225<(x226^x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x229 = 3U;
	int8_t x230 = INT8_MAX;
	static int16_t x231 = INT16_MAX;

	t57 = ((x229<(x230^x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MAX;
	volatile int16_t x235 = 381;

	t58 = ((x233<(x234^x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = INT32_MIN;
	volatile int32_t x239 = -1;
	int16_t x240 = -70;

	t59 = ((x237<(x238^x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	static int64_t x242 = -461676777915055785LL;
	int32_t x243 = -97354;
	volatile int32_t t60 = 1858594;

	t60 = ((x241<(x242^x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 444U;
	static uint32_t x246 = 4275U;
	int16_t x247 = -1;
	uint16_t x248 = 4256U;
	int32_t t61 = 860247;

	t61 = ((x245<(x246^x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	volatile uint16_t x250 = UINT16_MAX;
	volatile int32_t t62 = 8;

	t62 = ((x249<(x250^x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 2037148799U;
	volatile int32_t x254 = 14248;
	uint32_t x255 = UINT32_MAX;
	int8_t x256 = -1;
	int32_t t63 = -2644151;

	t63 = ((x253<(x254^x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 13;
	static uint64_t x258 = UINT64_MAX;
	int64_t x259 = -60980933862926881LL;
	static volatile uint16_t x260 = 367U;
	volatile int32_t t64 = -186374925;

	t64 = ((x257<(x258^x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = 68;
	int8_t x264 = INT8_MAX;

	t65 = ((x261<(x262^x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 29;
	static int32_t x266 = INT32_MIN;
	int16_t x267 = -1;
	uint32_t x268 = 3081U;
	volatile int32_t t66 = 1;

	t66 = ((x265<(x266^x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MAX;
	int32_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	int32_t t67 = 35456;

	t67 = ((x269<(x270^x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = 11;
	static int64_t x274 = INT64_MAX;
	static int16_t x275 = -1;
	volatile int32_t x276 = INT32_MAX;
	int32_t t68 = -8572603;

	t68 = ((x273<(x274^x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = -7;
	int32_t x278 = -4688911;
	int64_t x279 = INT64_MAX;
	static int32_t t69 = -1009055;

	t69 = ((x277<(x278^x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x281 = -54;
	int8_t x282 = -1;
	uint32_t x283 = 0U;
	int64_t x284 = -1LL;
	static volatile int32_t t70 = 20149298;

	t70 = ((x281<(x282^x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 85604735LLU;
	uint8_t x286 = 45U;
	int32_t x287 = INT32_MAX;
	int16_t x288 = INT16_MIN;

	t71 = ((x285<(x286^x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -507;
	uint64_t x291 = UINT64_MAX;
	int32_t x292 = -1;
	volatile int32_t t72 = -1718986;

	t72 = ((x289<(x290^x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 26575256;
	static uint32_t x295 = UINT32_MAX;
	static uint16_t x296 = 2537U;

	t73 = ((x293<(x294^x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	static int16_t x300 = 1;
	static int32_t t74 = 9146;

	t74 = ((x297<(x298^x299))==x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint64_t x303 = 85LLU;
	int8_t x304 = -1;
	volatile int32_t t75 = 127934;

	t75 = ((x301<(x302^x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 827789197U;
	static uint32_t x307 = 13U;
	int16_t x308 = INT16_MIN;
	int32_t t76 = -48;

	t76 = ((x305<(x306^x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = INT64_MAX;
	int8_t x310 = INT8_MAX;
	int8_t x311 = INT8_MIN;
	int32_t x312 = 301;

	t77 = ((x309<(x310^x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int64_t x314 = INT64_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t78 = -48;

	t78 = ((x313<(x314^x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -925885194;
	volatile int8_t x318 = 1;
	static uint8_t x319 = UINT8_MAX;
	int32_t t79 = -1120;

	t79 = ((x317<(x318^x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = INT32_MIN;
	int16_t x323 = 1;
	int32_t t80 = 923263125;

	t80 = ((x321<(x322^x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = 112LL;

	t81 = ((x325<(x326^x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x329 = UINT64_MAX;
	volatile int32_t x330 = INT32_MAX;
	volatile int32_t t82 = -25862203;

	t82 = ((x329<(x330^x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = 27804163;
	uint64_t x334 = 59797947LLU;
	static volatile int64_t x335 = INT64_MIN;
	uint32_t x336 = 396U;
	volatile int32_t t83 = -89;

	t83 = ((x333<(x334^x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	uint32_t x339 = UINT32_MAX;
	int32_t t84 = 2;

	t84 = ((x337<(x338^x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	volatile int8_t x342 = -1;
	volatile int8_t x343 = INT8_MAX;
	static int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 92;

	t85 = ((x341<(x342^x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	int32_t x347 = -1;
	static int16_t x348 = INT16_MIN;
	static int32_t t86 = 1370877;

	t86 = ((x345<(x346^x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int32_t x350 = 61;
	static int32_t t87 = 117580378;

	t87 = ((x349<(x350^x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x354 = INT8_MIN;
	static volatile int16_t x355 = INT16_MAX;
	int32_t t88 = -419;

	t88 = ((x353<(x354^x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	static volatile uint64_t x358 = 4037853322LLU;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = 96593853;

	t89 = ((x357<(x358^x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 30LLU;
	int8_t x362 = INT8_MAX;
	int16_t x363 = INT16_MAX;
	int8_t x364 = 0;

	t90 = ((x361<(x362^x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 3;
	uint32_t x367 = UINT32_MAX;
	static uint32_t x368 = 5U;

	t91 = ((x365<(x366^x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = INT64_MIN;
	uint8_t x372 = 0U;
	volatile int32_t t92 = -63598708;

	t92 = ((x369<(x370^x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 2073U;
	uint8_t x374 = UINT8_MAX;
	static uint8_t x376 = 14U;
	int32_t t93 = 99273;

	t93 = ((x373<(x374^x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static int64_t x380 = -2046LL;
	volatile int32_t t94 = 29;

	t94 = ((x377<(x378^x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	int32_t x382 = INT32_MIN;
	uint64_t x383 = 24644LLU;
	int32_t t95 = 27988590;

	t95 = ((x381<(x382^x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x386 = 14049U;
	int32_t x387 = INT32_MAX;
	uint64_t x388 = 132098097528799LLU;
	static int32_t t96 = 197766;

	t96 = ((x385<(x386^x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 4;
	int16_t x390 = -1;
	int64_t x391 = INT64_MIN;
	int64_t x392 = -1LL;
	static volatile int32_t t97 = 3620841;

	t97 = ((x389<(x390^x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 5;
	int16_t x394 = INT16_MIN;
	volatile int32_t x395 = INT32_MIN;
	volatile int32_t t98 = -150;

	t98 = ((x393<(x394^x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x399 = -1;
	static int8_t x400 = -1;
	volatile int32_t t99 = 3;

	t99 = ((x397<(x398^x399))==x400);

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

