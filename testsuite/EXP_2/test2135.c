#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t t2 = 2;
static int16_t x15 = INT16_MIN;
int16_t x20 = 10;
static volatile int32_t t4 = 42;
volatile uint64_t t5 = 1009788274LLU;
uint32_t x26 = UINT32_MAX;
int8_t x28 = 0;
static volatile int64_t x34 = -4556744506836510319LL;
static uint16_t x36 = 2211U;
int32_t t8 = 1;
int64_t x50 = INT64_MIN;
int16_t x52 = 44;
volatile int32_t t14 = -5582;
uint32_t x70 = 2677U;
static int32_t t17 = -41231;
volatile int32_t t19 = 91161981;
static int32_t x81 = INT32_MIN;
static volatile uint64_t x86 = 31181084434351272LLU;
int8_t x88 = INT8_MIN;
int64_t x89 = INT64_MIN;
volatile uint16_t x90 = 4U;
volatile uint64_t x103 = 215355902637226358LLU;
int16_t x104 = INT16_MIN;
uint64_t x116 = UINT64_MAX;
static int16_t x118 = -1;
int32_t t30 = 837645346;
int32_t x128 = INT32_MIN;
volatile int8_t x129 = INT8_MIN;
volatile int32_t t32 = INT32_MIN;
int32_t x136 = -1;
static int16_t x152 = INT16_MIN;
int32_t x154 = -1;
static volatile int32_t t40 = -7960596;
int64_t x169 = INT64_MAX;
volatile uint8_t x173 = 1U;
uint32_t x181 = UINT32_MAX;
volatile int64_t x184 = -8361567LL;
volatile int64_t t45 = -1915LL;
int16_t x185 = INT16_MIN;
volatile uint64_t x186 = UINT64_MAX;
static volatile int64_t t47 = INT64_MIN;
int64_t x198 = -120684615LL;
volatile int32_t t50 = INT32_MIN;
static volatile uint64_t t53 = UINT64_MAX;
volatile int8_t x219 = -1;
uint8_t x225 = 3U;
int64_t t57 = 17775998462390LL;
int16_t x233 = -19;
int8_t x237 = INT8_MAX;
static volatile uint64_t t60 = UINT64_MAX;
volatile int32_t x245 = -147168798;
volatile int32_t t61 = 923775175;
static uint16_t x253 = 231U;
int32_t x257 = INT32_MIN;
int32_t x262 = INT32_MAX;
volatile int8_t x266 = INT8_MAX;
int8_t x272 = INT8_MAX;
int32_t t67 = -461961;
int16_t x274 = INT16_MIN;
volatile uint64_t x280 = 686831797243LLU;
volatile int64_t x282 = 329950LL;
int64_t x285 = -1LL;
uint8_t x288 = 109U;
int32_t t71 = 2079247;
uint16_t x297 = UINT16_MAX;
int8_t x298 = INT8_MAX;
static int32_t x301 = -1;
static volatile int8_t x303 = INT8_MIN;
volatile int16_t x307 = INT16_MIN;
static int32_t t76 = -10065;
uint8_t x315 = 1U;
uint32_t x320 = 215244539U;
int16_t x322 = -2529;
int16_t x323 = INT16_MAX;
int8_t x325 = INT8_MIN;
int32_t x329 = INT32_MIN;
static int32_t x331 = -1;
volatile int32_t t82 = 2003974;
volatile int16_t x338 = INT16_MIN;
volatile int32_t t84 = -127;
volatile int32_t t85 = 52396;
int32_t x345 = 0;
uint32_t x346 = UINT32_MAX;
int32_t x348 = INT32_MAX;
int32_t x350 = INT32_MIN;
static volatile int16_t x355 = INT16_MIN;
uint64_t x361 = UINT64_MAX;
int32_t t90 = -19280919;
static int8_t x390 = INT8_MIN;
int8_t x392 = INT8_MAX;


void f0(void) {
	int8_t x1 = 1;
	int16_t x3 = -1;
	volatile int16_t x4 = -7;
	int32_t t0 = -1800987;

	t0 = ((x1<(x2^x3))*x4);

	if (t0 != -7) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 20U;
	uint32_t x6 = 262680648U;
	int8_t x7 = INT8_MIN;
	int64_t x8 = INT64_MIN;
	int64_t t1 = INT64_MIN;

	t1 = ((x5<(x6^x7))*x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static int64_t x10 = INT64_MIN;
	uint64_t x11 = 2260928282LLU;
	volatile uint16_t x12 = 44U;

	t2 = ((x9<(x10^x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = 6;
	static uint32_t x14 = UINT32_MAX;
	volatile uint32_t x16 = 279142256U;
	volatile uint32_t t3 = 111077U;

	t3 = ((x13<(x14^x15))*x16);

	if (t3 != 279142256U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1;
	int32_t x18 = 51;
	uint16_t x19 = UINT16_MAX;

	t4 = ((x17<(x18^x19))*x20);

	if (t4 != 10) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	static int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	uint64_t x24 = 260457576512401085LLU;

	t5 = ((x21<(x22^x23))*x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static volatile int64_t x27 = INT64_MIN;
	volatile int32_t t6 = -1;

	t6 = ((x25<(x26^x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int8_t x30 = INT8_MIN;
	volatile int64_t x31 = -1LL;
	static uint8_t x32 = 3U;
	static volatile int32_t t7 = 743;

	t7 = ((x29<(x30^x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = -1;
	int16_t x35 = -1;

	t8 = ((x33<(x34^x35))*x36);

	if (t8 != 2211) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 12U;
	int32_t x39 = -1;
	int64_t x40 = 151595050784438431LL;
	int64_t t9 = 15191954240971LL;

	t9 = ((x37<(x38^x39))*x40);

	if (t9 != 151595050784438431LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	volatile int8_t x42 = -2;
	uint8_t x43 = UINT8_MAX;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -29097097;

	t10 = ((x41<(x42^x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3;
	static uint64_t x46 = 214292723832734218LLU;
	int8_t x47 = INT8_MIN;
	int16_t x48 = 61;
	int32_t t11 = 1;

	t11 = ((x45<(x46^x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint16_t x51 = 38U;
	int32_t t12 = 1826;

	t12 = ((x49<(x50^x51))*x52);

	if (t12 != 44) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile uint64_t x54 = 10022LLU;
	int32_t x55 = 193464354;
	uint16_t x56 = 932U;
	volatile int32_t t13 = 1;

	t13 = ((x53<(x54^x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	static uint32_t x58 = UINT32_MAX;
	static int32_t x59 = INT32_MIN;
	static volatile int16_t x60 = 0;

	t14 = ((x57<(x58^x59))*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int16_t x62 = -1;
	static int32_t x63 = -1;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 576930015;

	t15 = ((x61<(x62^x63))*x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 15;
	static volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = INT32_MAX;
	uint16_t x68 = 187U;
	int32_t t16 = 135;

	t16 = ((x65<(x66^x67))*x68);

	if (t16 != 187) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	uint16_t x71 = 9U;
	static int16_t x72 = -143;

	t17 = ((x69<(x70^x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	static int32_t x74 = INT32_MIN;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -475768;

	t18 = ((x73<(x74^x75))*x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	static uint16_t x78 = UINT16_MAX;
	static volatile uint32_t x79 = 79879825U;
	int8_t x80 = INT8_MAX;

	t19 = ((x77<(x78^x79))*x80);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = -1655;
	int32_t t20 = 100;

	t20 = ((x81<(x82^x83))*x84);

	if (t20 != -1655) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int8_t x87 = -1;
	static int32_t t21 = -5930;

	t21 = ((x85<(x86^x87))*x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x91 = -1LL;
	static int8_t x92 = INT8_MIN;
	volatile int32_t t22 = 65104;

	t22 = ((x89<(x90^x91))*x92);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	volatile uint8_t x95 = 30U;
	volatile int32_t x96 = -1;
	int32_t t23 = 11893;

	t23 = ((x93<(x94^x95))*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = UINT32_MAX;
	int32_t x99 = INT32_MAX;
	volatile int64_t x100 = INT64_MIN;
	static volatile int64_t t24 = INT64_MIN;

	t24 = ((x97<(x98^x99))*x100);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MAX;
	static int32_t x102 = -1;
	volatile int32_t t25 = -1627;

	t25 = ((x101<(x102^x103))*x104);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	static int64_t x108 = -15LL;
	static int64_t t26 = 3634669LL;

	t26 = ((x105<(x106^x107))*x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MIN;
	static int16_t x111 = -1;
	static uint32_t x112 = 426U;
	volatile uint32_t t27 = 71793766U;

	t27 = ((x109<(x110^x111))*x112);

	if (t27 != 426U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	static int64_t x114 = -1LL;
	uint64_t x115 = 139518169805010LLU;
	static volatile uint64_t t28 = 463461779330LLU;

	t28 = ((x113<(x114^x115))*x116);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	static int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = INT32_MIN;

	t29 = ((x117<(x118^x119))*x120);

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1482U;
	uint64_t x122 = 2952343674087493LLU;
	int8_t x123 = INT8_MIN;
	int32_t x124 = 22;

	t30 = ((x121<(x122^x123))*x124);

	if (t30 != 22) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = UINT64_MAX;
	volatile int64_t x126 = -14LL;
	volatile int8_t x127 = 26;
	volatile int32_t t31 = 740;

	t31 = ((x125<(x126^x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x130 = 0U;
	int8_t x131 = -1;
	int32_t x132 = INT32_MIN;

	t32 = ((x129<(x130^x131))*x132);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 1;
	static uint32_t x134 = 729341678U;
	volatile int32_t x135 = INT32_MIN;
	static int32_t t33 = -1;

	t33 = ((x133<(x134^x135))*x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	int16_t x138 = INT16_MAX;
	static uint64_t x139 = 49182783534930LLU;
	static int32_t x140 = INT32_MIN;
	int32_t t34 = -13992;

	t34 = ((x137<(x138^x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile uint64_t x142 = 919873349814801LLU;
	int32_t x143 = INT32_MIN;
	int64_t x144 = 24370LL;
	int64_t t35 = -58879556602644857LL;

	t35 = ((x141<(x142^x143))*x144);

	if (t35 != 24370LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	int64_t x146 = 128LL;
	uint16_t x147 = UINT16_MAX;
	uint64_t x148 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x145<(x146^x147))*x148);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint32_t x150 = UINT32_MAX;
	static int8_t x151 = INT8_MIN;
	int32_t t37 = -78514;

	t37 = ((x149<(x150^x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -1;
	int32_t x155 = INT32_MAX;
	static int16_t x156 = 1;
	int32_t t38 = -5417136;

	t38 = ((x153<(x154^x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 0U;
	volatile uint32_t t39 = 917U;

	t39 = ((x157<(x158^x159))*x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = INT8_MIN;
	volatile int32_t x163 = -1;
	int16_t x164 = 20;

	t40 = ((x161<(x162^x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 3505U;
	int16_t x166 = -14811;
	int64_t x167 = 381037061377745354LL;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -7374084;

	t41 = ((x165<(x166^x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x170 = UINT64_MAX;
	volatile int64_t x171 = INT64_MIN;
	volatile uint64_t x172 = 208658LLU;
	uint64_t t42 = 12LLU;

	t42 = ((x169<(x170^x171))*x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = 1050U;
	int32_t x175 = 17302;
	int16_t x176 = 37;
	int32_t t43 = -6404;

	t43 = ((x173<(x174^x175))*x176);

	if (t43 != 37) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = 467;
	int8_t x178 = INT8_MIN;
	uint64_t x179 = UINT64_MAX;
	volatile uint64_t x180 = 554300917979702546LLU;
	volatile uint64_t t44 = 21158431LLU;

	t44 = ((x177<(x178^x179))*x180);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = INT64_MAX;
	static int32_t x183 = -182641451;

	t45 = ((x181<(x182^x183))*x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x187 = 4U;
	static volatile int64_t x188 = INT64_MAX;
	int64_t t46 = INT64_MAX;

	t46 = ((x185<(x186^x187))*x188);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	static uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MAX;
	static int64_t x192 = INT64_MIN;

	t47 = ((x189<(x190^x191))*x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int8_t x194 = 13;
	uint8_t x195 = UINT8_MAX;
	int32_t x196 = 7005;
	int32_t t48 = -210;

	t48 = ((x193<(x194^x195))*x196);

	if (t48 != 7005) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 10141U;
	int32_t x199 = 6831;
	int32_t x200 = -1;
	volatile int32_t t49 = 91757115;

	t49 = ((x197<(x198^x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 1112U;
	static volatile uint16_t x202 = UINT16_MAX;
	uint32_t x203 = 1054932132U;
	int32_t x204 = INT32_MIN;

	t50 = ((x201<(x202^x203))*x204);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	volatile int8_t x206 = INT8_MIN;
	int16_t x207 = 45;
	int8_t x208 = INT8_MAX;
	int32_t t51 = 1;

	t51 = ((x205<(x206^x207))*x208);

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x209 = INT32_MIN;
	static volatile int16_t x210 = INT16_MIN;
	int32_t x211 = 882073;
	uint8_t x212 = UINT8_MAX;
	int32_t t52 = -14;

	t52 = ((x209<(x210^x211))*x212);

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 1767;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = UINT64_MAX;

	t53 = ((x213<(x214^x215))*x216);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	int32_t x218 = -1;
	int8_t x220 = INT8_MAX;
	static int32_t t54 = -6;

	t54 = ((x217<(x218^x219))*x220);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = INT32_MAX;
	int8_t x222 = INT8_MAX;
	static volatile int64_t x223 = -1LL;
	volatile uint32_t x224 = UINT32_MAX;
	static uint32_t t55 = 63U;

	t55 = ((x221<(x222^x223))*x224);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = INT16_MIN;
	static int8_t x227 = -1;
	int64_t x228 = -7470175367895719LL;
	static int64_t t56 = -3172480903761LL;

	t56 = ((x225<(x226^x227))*x228);

	if (t56 != -7470175367895719LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1562661517478LL;
	static int32_t x230 = INT32_MIN;
	uint8_t x231 = 3U;
	int64_t x232 = 1111629149134275353LL;

	t57 = ((x229<(x230^x231))*x232);

	if (t57 != 1111629149134275353LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = 83365411893LL;
	int16_t x235 = -1;
	volatile int32_t x236 = INT32_MAX;
	int32_t t58 = -24292;

	t58 = ((x233<(x234^x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x238 = UINT8_MAX;
	static uint32_t x239 = 1431520U;
	uint32_t x240 = 156662946U;
	volatile uint32_t t59 = 19435U;

	t59 = ((x237<(x238^x239))*x240);

	if (t59 != 156662946U) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = -43;
	volatile uint16_t x242 = 1U;
	int16_t x243 = 11;
	uint64_t x244 = UINT64_MAX;

	t60 = ((x241<(x242^x243))*x244);

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 3U;
	uint8_t x247 = UINT8_MAX;
	volatile uint8_t x248 = 4U;

	t61 = ((x245<(x246^x247))*x248);

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = INT16_MAX;
	int16_t x250 = -1;
	uint64_t x251 = 1LLU;
	static int8_t x252 = -6;
	static int32_t t62 = -30;

	t62 = ((x249<(x250^x251))*x252);

	if (t62 != -6) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x254 = 11U;
	static int64_t x255 = -8291589198993730LL;
	static uint16_t x256 = 766U;
	volatile int32_t t63 = 6351;

	t63 = ((x253<(x254^x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -100;
	uint16_t x259 = 11219U;
	uint32_t x260 = UINT32_MAX;
	static uint32_t t64 = UINT32_MAX;

	t64 = ((x257<(x258^x259))*x260);

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MAX;
	uint16_t x263 = UINT16_MAX;
	int16_t x264 = -15;
	int32_t t65 = 142;

	t65 = ((x261<(x262^x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 364173376424850295LLU;
	int16_t x267 = INT16_MIN;
	int64_t x268 = -1LL;
	volatile int64_t t66 = -14730LL;

	t66 = ((x265<(x266^x267))*x268);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int16_t x270 = -1;
	int8_t x271 = -1;

	t67 = ((x269<(x270^x271))*x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = INT8_MIN;
	volatile uint8_t x275 = 5U;
	int16_t x276 = INT16_MIN;
	static int32_t t68 = 15;

	t68 = ((x273<(x274^x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 3006782259713544LLU;
	uint16_t x278 = 10U;
	int8_t x279 = 0;
	uint64_t t69 = 7540LLU;

	t69 = ((x277<(x278^x279))*x280);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x281 = 166U;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = INT64_MAX;
	volatile int64_t t70 = INT64_MAX;

	t70 = ((x281<(x282^x283))*x284);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	static uint64_t x287 = UINT64_MAX;

	t71 = ((x285<(x286^x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = 3;
	static int64_t x290 = INT64_MIN;
	static uint64_t x291 = 3653387241972LLU;
	volatile int64_t x292 = -156013398938386LL;
	volatile int64_t t72 = -2014LL;

	t72 = ((x289<(x290^x291))*x292);

	if (t72 != -156013398938386LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -3;
	int16_t x294 = -1;
	int64_t x295 = INT64_MIN;
	static volatile int8_t x296 = INT8_MIN;
	int32_t t73 = -177;

	t73 = ((x293<(x294^x295))*x296);

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x299 = 426U;
	static uint8_t x300 = 0U;
	static int32_t t74 = -67913163;

	t74 = ((x297<(x298^x299))*x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = ((x301<(x302^x303))*x304);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = INT64_MAX;
	int64_t x306 = -276433589121LL;
	volatile int16_t x308 = -1;

	t76 = ((x305<(x306^x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1599779;
	int8_t x310 = 1;
	int16_t x311 = -1;
	int8_t x312 = -32;
	static int32_t t77 = 248;

	t77 = ((x309<(x310^x311))*x312);

	if (t77 != -32) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = UINT8_MAX;
	volatile uint32_t x314 = 5U;
	volatile uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = 1852657436U;

	t78 = ((x313<(x314^x315))*x316);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MIN;
	int8_t x318 = INT8_MIN;
	static volatile int8_t x319 = -1;
	uint32_t t79 = 143U;

	t79 = ((x317<(x318^x319))*x320);

	if (t79 != 215244539U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x321 = INT64_MIN;
	int16_t x324 = -158;
	volatile int32_t t80 = 2;

	t80 = ((x321<(x322^x323))*x324);

	if (t80 != -158) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1678910;
	int64_t x327 = -4LL;
	int8_t x328 = INT8_MIN;
	int32_t t81 = 192565;

	t81 = ((x325<(x326^x327))*x328);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	static int8_t x332 = INT8_MIN;

	t82 = ((x329<(x330^x331))*x332);

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 467U;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	uint8_t x336 = 1U;
	volatile int32_t t83 = 79746;

	t83 = ((x333<(x334^x335))*x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 1644327315767LLU;
	int32_t x339 = -1;
	uint8_t x340 = 8U;

	t84 = ((x337<(x338^x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -926438693LL;
	volatile int8_t x342 = INT8_MAX;
	volatile uint8_t x343 = 7U;
	int8_t x344 = INT8_MAX;

	t85 = ((x341<(x342^x343))*x344);

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x347 = 43879122691LLU;
	volatile int32_t t86 = INT32_MAX;

	t86 = ((x345<(x346^x347))*x348);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 38571U;
	int64_t x351 = -21LL;
	uint32_t x352 = 352586396U;
	uint32_t t87 = 9012498U;

	t87 = ((x349<(x350^x351))*x352);

	if (t87 != 352586396U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = INT8_MAX;
	int16_t x354 = INT16_MAX;
	static int64_t x356 = 1LL;
	volatile int64_t t88 = 210LL;

	t88 = ((x353<(x354^x355))*x356);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static uint32_t x358 = 5698U;
	int8_t x359 = 0;
	uint32_t x360 = 60U;
	volatile uint32_t t89 = 918U;

	t89 = ((x357<(x358^x359))*x360);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 3U;
	uint32_t x363 = 24567174U;
	volatile int32_t x364 = INT32_MAX;

	t90 = ((x361<(x362^x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	static volatile int16_t x366 = INT16_MIN;
	int64_t x367 = 1LL;
	volatile int32_t x368 = INT32_MAX;
	volatile int32_t t91 = 4;

	t91 = ((x365<(x366^x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	uint8_t x370 = 1U;
	volatile int64_t x371 = 562614886LL;
	int64_t x372 = INT64_MAX;
	int64_t t92 = 8805277141900963LL;

	t92 = ((x369<(x370^x371))*x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	int16_t x374 = INT16_MAX;
	uint32_t x375 = 327U;
	uint64_t x376 = 267203308LLU;
	volatile uint64_t t93 = 55882124881888LLU;

	t93 = ((x373<(x374^x375))*x376);

	if (t93 != 267203308LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 3LL;
	int32_t x378 = -551;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = -131;

	t94 = ((x377<(x378^x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	static int16_t x382 = -2665;
	static int8_t x383 = INT8_MIN;
	int16_t x384 = -1;
	int32_t t95 = -687134484;

	t95 = ((x381<(x382^x383))*x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile int32_t x387 = INT32_MAX;
	static uint32_t x388 = 50U;
	uint32_t t96 = 670U;

	t96 = ((x385<(x386^x387))*x388);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	volatile int64_t x391 = 216753LL;
	int32_t t97 = -256625;

	t97 = ((x389<(x390^x391))*x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = 803648443085LL;
	uint16_t x394 = 965U;
	static int8_t x395 = INT8_MIN;
	int16_t x396 = -1;
	static int32_t t98 = -1;

	t98 = ((x393<(x394^x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = -1;
	volatile int8_t x399 = -1;
	uint64_t x400 = 8399247967LLU;
	volatile uint64_t t99 = 59768105313LLU;

	t99 = ((x397<(x398^x399))*x400);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

