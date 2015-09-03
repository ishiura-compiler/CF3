#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
int8_t x4 = INT8_MIN;
int32_t t0 = -819;
int16_t x7 = INT16_MIN;
int32_t x11 = 402141810;
int8_t x21 = 6;
static int8_t x25 = INT8_MIN;
int8_t x27 = -1;
volatile int32_t t7 = 0;
int64_t x42 = INT64_MIN;
uint16_t x48 = UINT16_MAX;
int64_t x50 = INT64_MIN;
volatile int64_t t13 = INT64_MIN;
volatile uint32_t x58 = 2075235456U;
uint16_t x66 = 21657U;
static uint8_t x69 = 1U;
volatile int16_t x75 = INT16_MIN;
int8_t x78 = INT8_MIN;
uint64_t t19 = 316973147LLU;
uint64_t x83 = 1LLU;
int64_t x84 = INT64_MIN;
int16_t x89 = 1698;
static volatile uint8_t x92 = UINT8_MAX;
int32_t t22 = -9013401;
int64_t x103 = -1LL;
int16_t x106 = INT16_MIN;
static int64_t x113 = INT64_MAX;
int64_t x117 = INT64_MIN;
volatile int64_t t29 = -232218981728392LL;
int16_t x127 = INT16_MIN;
volatile int16_t x135 = -1;
uint8_t x140 = UINT8_MAX;
int8_t x144 = -1;
int32_t t35 = 1030970;
volatile uint32_t x145 = 1100576U;
volatile int8_t x150 = INT8_MAX;
volatile int32_t t38 = -3758;
uint64_t x158 = 840LLU;
volatile int64_t t39 = -20456753042333148LL;
static int32_t x163 = -1;
int8_t x167 = INT8_MIN;
int16_t x172 = INT16_MIN;
static volatile int32_t t42 = -90867;
volatile uint32_t x177 = UINT32_MAX;
uint32_t x180 = 51412344U;
volatile uint32_t t44 = 3201678U;
uint32_t x182 = 247U;
int32_t x196 = INT32_MAX;
static uint64_t x200 = UINT64_MAX;
volatile uint64_t t49 = UINT64_MAX;
volatile int16_t x201 = -14920;
int16_t x203 = -1;
int16_t x207 = -4;
volatile int64_t t51 = 161908837462031LL;
volatile int8_t x210 = INT8_MAX;
uint64_t x211 = 978755LLU;
int64_t x217 = -1LL;
int64_t x218 = -22LL;
uint32_t x229 = 25125U;
volatile int16_t x243 = INT16_MIN;
int16_t x244 = INT16_MIN;
volatile int32_t t60 = -13;
int16_t x246 = -8878;
static int64_t x247 = -1LL;
static uint16_t x248 = 3694U;
static volatile int16_t x249 = 954;
int32_t x251 = INT32_MAX;
int64_t x255 = INT64_MIN;
uint64_t x256 = UINT64_MAX;
uint64_t t63 = UINT64_MAX;
static int64_t x257 = 106817944LL;
uint8_t x259 = 5U;
uint16_t x262 = UINT16_MAX;
int32_t x265 = -1;
uint32_t x267 = 277U;
static int32_t x271 = -55516;
static int64_t x272 = INT64_MAX;
static int64_t x275 = -1794828120877LL;
int32_t x276 = INT32_MIN;
volatile int32_t t68 = -2134;
volatile uint32_t t69 = 6U;
uint16_t x281 = UINT16_MAX;
volatile int16_t x284 = -1;
volatile int64_t x285 = 269466241298832368LL;
static volatile int32_t x297 = -286081;
uint8_t x298 = 1U;
int16_t x303 = 1;
uint32_t x306 = 14427364U;
int64_t x311 = 0LL;
int64_t x312 = -158248535186505532LL;
int64_t t77 = -51685084LL;
int16_t x316 = 0;
volatile int32_t t78 = 0;
uint32_t x321 = UINT32_MAX;
int16_t x325 = INT16_MIN;
volatile int32_t t81 = 30972428;
uint16_t x343 = 0U;
uint16_t x346 = 7321U;
int16_t x347 = INT16_MAX;
int16_t x352 = INT16_MIN;
int32_t t87 = 624715028;
int8_t x355 = -1;
int16_t x357 = INT16_MIN;
static uint64_t x360 = 14774287LLU;
static volatile uint64_t t89 = 109386266739LLU;
int64_t x362 = INT64_MAX;
int64_t x365 = INT64_MIN;
uint64_t x367 = 68LLU;
static int16_t x368 = INT16_MAX;
uint16_t x369 = UINT16_MAX;
static volatile int64_t x371 = INT64_MAX;
int8_t x374 = 0;
uint32_t t93 = 1572U;
volatile int64_t x377 = INT64_MAX;
uint16_t x380 = 5U;
uint32_t x381 = 2053U;
uint64_t x385 = UINT64_MAX;
int64_t x388 = -1LL;
int8_t x398 = INT8_MIN;


void f0(void) {
	int16_t x1 = 101;
	volatile int16_t x3 = -81;

	t0 = ((x1<(x2&x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 74U;
	int64_t x6 = INT64_MAX;
	uint16_t x8 = UINT16_MAX;
	int32_t t1 = -720858;

	t1 = ((x5<(x6&x7))^x8);

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 1;
	uint8_t x10 = UINT8_MAX;
	uint8_t x12 = 38U;
	volatile int32_t t2 = 7;

	t2 = ((x9<(x10&x11))^x12);

	if (t2 != 39) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	int8_t x14 = 1;
	volatile int32_t x15 = INT32_MAX;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 893;

	t3 = ((x13<(x14&x15))^x16);

	if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static int16_t x18 = -1;
	int16_t x19 = INT16_MAX;
	int16_t x20 = 6;
	volatile int32_t t4 = -9731;

	t4 = ((x17<(x18&x19))^x20);

	if (t4 != 7) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	volatile int8_t x23 = INT8_MIN;
	int64_t x24 = 5LL;
	volatile int64_t t5 = -4313904040014LL;

	t5 = ((x21<(x22&x23))^x24);

	if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	uint32_t x28 = 40U;
	uint32_t t6 = 0U;

	t6 = ((x25<(x26&x27))^x28);

	if (t6 != 41U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = INT8_MIN;
	uint32_t x30 = 926U;
	int64_t x31 = INT64_MIN;
	static uint8_t x32 = 15U;

	t7 = ((x29<(x30&x31))^x32);

	if (t7 != 14) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 5347156203324702738LLU;
	int8_t x34 = -18;
	volatile int32_t x35 = 459724869;
	int8_t x36 = 7;
	int32_t t8 = 34470514;

	t8 = ((x33<(x34&x35))^x36);

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int16_t x38 = -14;
	volatile int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t9 = INT32_MIN;

	t9 = ((x37<(x38&x39))^x40);

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x43 = 26;
	int8_t x44 = -1;
	volatile int32_t t10 = 13;

	t10 = ((x41<(x42&x43))^x44);

	if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MAX;
	uint16_t x47 = UINT16_MAX;
	volatile int32_t t11 = 1149;

	t11 = ((x45<(x46&x47))^x48);

	if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -1;
	uint32_t x51 = UINT32_MAX;
	uint64_t x52 = 3815LLU;
	uint64_t t12 = 73436029978024LLU;

	t12 = ((x49<(x50&x51))^x52);

	if (t12 != 3814LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x53 = 19109U;
	volatile int32_t x54 = INT32_MIN;
	static uint32_t x55 = 30392263U;
	int64_t x56 = INT64_MIN;

	t13 = ((x53<(x54&x55))^x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 30445U;
	int32_t x59 = INT32_MAX;
	uint16_t x60 = 22711U;
	volatile int32_t t14 = -2385;

	t14 = ((x57<(x58&x59))^x60);

	if (t14 != 22710) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -1;
	int16_t x62 = INT16_MIN;
	int32_t x63 = 275319;
	int16_t x64 = -3;
	static int32_t t15 = 351;

	t15 = ((x61<(x62&x63))^x64);

	if (t15 != -4) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 36U;
	uint8_t x67 = UINT8_MAX;
	volatile int16_t x68 = -1;
	int32_t t16 = 374998;

	t16 = ((x65<(x66&x67))^x68);

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	static int8_t x71 = INT8_MIN;
	uint64_t x72 = 108245189931306457LLU;
	volatile uint64_t t17 = 8656780694037439491LLU;

	t17 = ((x69<(x70&x71))^x72);

	if (t17 != 108245189931306457LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int32_t x74 = 354741;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -1488477;

	t18 = ((x73<(x74&x75))^x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 1U;
	int16_t x79 = 6;
	uint64_t x80 = 777128092621427LLU;

	t19 = ((x77<(x78&x79))^x80);

	if (t19 != 777128092621427LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	int64_t x82 = -1LL;
	static volatile int64_t t20 = INT64_MIN;

	t20 = ((x81<(x82&x83))^x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int8_t x86 = -1;
	volatile int64_t x87 = INT64_MIN;
	static int8_t x88 = 5;
	int32_t t21 = 1836039;

	t21 = ((x85<(x86&x87))^x88);

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = 0;
	static volatile uint64_t x91 = UINT64_MAX;

	t22 = ((x89<(x90&x91))^x92);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	int8_t x94 = -1;
	int8_t x95 = -1;
	int32_t x96 = 51;
	static volatile int32_t t23 = 512708194;

	t23 = ((x93<(x94&x95))^x96);

	if (t23 != 51) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = 2;
	static int8_t x99 = -62;
	volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t24 = 1908313;

	t24 = ((x97<(x98&x99))^x100);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -4;
	uint32_t x102 = 165640056U;
	volatile uint32_t x104 = 6U;
	uint32_t t25 = 161464U;

	t25 = ((x101<(x102&x103))^x104);

	if (t25 != 7U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	uint16_t x107 = 1U;
	static int16_t x108 = -7;
	int32_t t26 = 447;

	t26 = ((x105<(x106&x107))^x108);

	if (t26 != -8) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int64_t x110 = INT64_MAX;
	uint8_t x111 = 4U;
	static volatile uint64_t x112 = 8393134952014749LLU;
	uint64_t t27 = 111104LLU;

	t27 = ((x109<(x110&x111))^x112);

	if (t27 != 8393134952014749LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = 4;
	volatile uint64_t x115 = 174226LLU;
	volatile int64_t x116 = 37648901080890594LL;
	volatile int64_t t28 = -60762623677241610LL;

	t28 = ((x113<(x114&x115))^x116);

	if (t28 != 37648901080890594LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = -1LL;
	int8_t x119 = INT8_MAX;
	int64_t x120 = INT64_MAX;

	t29 = ((x117<(x118&x119))^x120);

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	volatile int32_t x122 = -94966;
	static int32_t x123 = 1;
	int16_t x124 = -1;
	volatile int32_t t30 = -4681;

	t30 = ((x121<(x122&x123))^x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 11960198LLU;
	int32_t x126 = 194667971;
	int8_t x128 = 42;
	int32_t t31 = 53450;

	t31 = ((x125<(x126&x127))^x128);

	if (t31 != 43) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int32_t x130 = -1;
	static int32_t x131 = INT32_MAX;
	volatile int32_t x132 = INT32_MIN;
	volatile int32_t t32 = 0;

	t32 = ((x129<(x130&x131))^x132);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 901U;
	int64_t x134 = -1LL;
	static int32_t x136 = -996;
	int32_t t33 = -508;

	t33 = ((x133<(x134&x135))^x136);

	if (t33 != -996) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = -1LL;
	uint16_t x138 = 3918U;
	uint64_t x139 = UINT64_MAX;
	int32_t t34 = 797;

	t34 = ((x137<(x138&x139))^x140);

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 2802611296776491LLU;
	volatile int16_t x142 = INT16_MAX;
	int16_t x143 = INT16_MIN;

	t35 = ((x141<(x142&x143))^x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = -1;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = 60U;
	uint32_t t36 = 4271U;

	t36 = ((x145<(x146&x147))^x148);

	if (t36 != 60U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 107U;
	int64_t x151 = -1LL;
	volatile int64_t x152 = INT64_MIN;
	int64_t t37 = -7912269244031LL;

	t37 = ((x149<(x150&x151))^x152);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	uint32_t x154 = 1994135U;
	volatile int16_t x155 = INT16_MIN;
	uint8_t x156 = 1U;

	t38 = ((x153<(x154&x155))^x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	static int64_t x159 = -1LL;
	int64_t x160 = INT64_MIN;

	t39 = ((x157<(x158&x159))^x160);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = 3;
	static int8_t x162 = INT8_MAX;
	uint8_t x164 = 59U;
	volatile int32_t t40 = -1;

	t40 = ((x161<(x162&x163))^x164);

	if (t40 != 58) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -15118;
	static volatile uint64_t x166 = 4557917335519607414LLU;
	uint32_t x168 = 0U;
	volatile uint32_t t41 = 253U;

	t41 = ((x165<(x166&x167))^x168);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 4U;
	uint64_t x170 = 3LLU;
	int32_t x171 = INT32_MIN;

	t42 = ((x169<(x170&x171))^x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	int32_t x174 = INT32_MIN;
	uint64_t x175 = 4026472846365603016LLU;
	int64_t x176 = INT64_MIN;
	int64_t t43 = -226439LL;

	t43 = ((x173<(x174&x175))^x176);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	int16_t x179 = 0;

	t44 = ((x177<(x178&x179))^x180);

	if (t44 != 51412344U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MAX;
	int32_t t45 = -7079861;

	t45 = ((x181<(x182&x183))^x184);

	if (t45 != 126) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = INT32_MIN;
	int32_t x186 = -1044824455;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 6LL;

	t46 = ((x185<(x186&x187))^x188);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 1269294LL;
	uint8_t x190 = 8U;
	uint8_t x191 = 45U;
	int32_t x192 = -111077938;
	int32_t t47 = -813441;

	t47 = ((x189<(x190&x191))^x192);

	if (t47 != -111077938) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = -1991963;
	static uint16_t x194 = UINT16_MAX;
	int8_t x195 = INT8_MAX;
	int32_t t48 = -84595;

	t48 = ((x193<(x194&x195))^x196);

	if (t48 != 2147483646) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	uint64_t x198 = 2091485947273879LLU;
	uint16_t x199 = 247U;

	t49 = ((x197<(x198&x199))^x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = 36;
	static int32_t x204 = INT32_MAX;
	static volatile int32_t t50 = 41;

	t50 = ((x201<(x202&x203))^x204);

	if (t50 != 2147483646) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 1178309973LLU;
	int64_t x206 = 48561248826LL;
	int64_t x208 = 37045579192LL;

	t51 = ((x205<(x206&x207))^x208);

	if (t51 != 37045579193LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = 19;
	int8_t x212 = -10;
	static volatile int32_t t52 = -7;

	t52 = ((x209<(x210&x211))^x212);

	if (t52 != -9) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	volatile uint32_t x214 = 14716U;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = 8;
	volatile int32_t t53 = -1615908;

	t53 = ((x213<(x214&x215))^x216);

	if (t53 != 8) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x219 = 178095U;
	int32_t x220 = -1;
	int32_t t54 = 412415005;

	t54 = ((x217<(x218&x219))^x220);

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 1558334283396LLU;
	static int8_t x222 = INT8_MIN;
	static int16_t x223 = INT16_MIN;
	uint16_t x224 = 1U;
	volatile int32_t t55 = 6641865;

	t55 = ((x221<(x222&x223))^x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -461;
	static int16_t x226 = INT16_MAX;
	uint8_t x227 = 2U;
	int64_t x228 = INT64_MAX;
	int64_t t56 = -1976150799132LL;

	t56 = ((x225<(x226&x227))^x228);

	if (t56 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = UINT16_MAX;
	int64_t x231 = INT64_MAX;
	int16_t x232 = -5051;
	static int32_t t57 = -12;

	t57 = ((x229<(x230&x231))^x232);

	if (t57 != -5052) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	uint64_t x234 = UINT64_MAX;
	int16_t x235 = -1;
	uint16_t x236 = UINT16_MAX;
	int32_t t58 = -74;

	t58 = ((x233<(x234&x235))^x236);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = -1LL;
	uint32_t x239 = UINT32_MAX;
	uint16_t x240 = UINT16_MAX;
	static int32_t t59 = 5467;

	t59 = ((x237<(x238&x239))^x240);

	if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile uint8_t x242 = 0U;

	t60 = ((x241<(x242&x243))^x244);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -3189792;
	static volatile int32_t t61 = 11;

	t61 = ((x245<(x246&x247))^x248);

	if (t61 != 3695) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -1;
	int16_t x252 = -1;
	volatile int32_t t62 = -233729;

	t62 = ((x249<(x250&x251))^x252);

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 6413185;
	uint64_t x254 = 24686225LLU;

	t63 = ((x253<(x254&x255))^x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x258 = 311879361U;
	int16_t x260 = INT16_MIN;
	static int32_t t64 = -3548474;

	t64 = ((x257<(x258&x259))^x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 203196602U;
	int8_t x263 = -26;
	uint64_t x264 = 230856383789619LLU;
	static uint64_t t65 = 9LLU;

	t65 = ((x261<(x262&x263))^x264);

	if (t65 != 230856383789619LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = -63;
	static volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = -2;

	t66 = ((x265<(x266&x267))^x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = 1577463U;
	int16_t x270 = 135;
	int64_t t67 = INT64_MAX;

	t67 = ((x269<(x270&x271))^x272);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	uint16_t x274 = UINT16_MAX;

	t68 = ((x273<(x274&x275))^x276);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = INT32_MIN;
	uint64_t x278 = 827999605717LLU;
	static int32_t x279 = INT32_MIN;
	uint32_t x280 = 103012U;

	t69 = ((x277<(x278&x279))^x280);

	if (t69 != 103012U) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = -1LL;
	static uint16_t x283 = 71U;
	volatile int32_t t70 = 139049;

	t70 = ((x281<(x282&x283))^x284);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	int64_t x287 = 200344LL;
	int64_t x288 = INT64_MAX;
	volatile int64_t t71 = INT64_MAX;

	t71 = ((x285<(x286&x287))^x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 39428793;
	int8_t x290 = INT8_MAX;
	int64_t x291 = -189899747916913533LL;
	int16_t x292 = 1;
	volatile int32_t t72 = -203940736;

	t72 = ((x289<(x290&x291))^x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	static int16_t x294 = -1;
	volatile int16_t x295 = -7;
	int64_t x296 = INT64_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = ((x293<(x294&x295))^x296);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x299 = INT64_MAX;
	int64_t x300 = INT64_MIN;
	static int64_t t74 = -49639831LL;

	t74 = ((x297<(x298&x299))^x300);

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x301 = INT16_MAX;
	static int8_t x302 = -1;
	volatile int16_t x304 = INT16_MAX;
	int32_t t75 = 24578;

	t75 = ((x301<(x302&x303))^x304);

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x305 = INT64_MAX;
	int8_t x307 = INT8_MAX;
	volatile int32_t x308 = -1;
	int32_t t76 = -35;

	t76 = ((x305<(x306&x307))^x308);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = UINT32_MAX;
	uint64_t x310 = UINT64_MAX;

	t77 = ((x309<(x310&x311))^x312);

	if (t77 != -158248535186505532LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -141847446LL;
	int32_t x314 = INT32_MAX;
	uint8_t x315 = UINT8_MAX;

	t78 = ((x313<(x314&x315))^x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 43LL;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t79 = INT32_MIN;

	t79 = ((x317<(x318&x319))^x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x322 = -4467446274370182132LL;
	static int32_t x323 = -13448;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = ((x321<(x322&x323))^x324);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x326 = 26653734267LLU;
	volatile uint16_t x327 = UINT16_MAX;
	static volatile int16_t x328 = INT16_MIN;

	t81 = ((x325<(x326&x327))^x328);

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 18557U;
	uint32_t x330 = 3U;
	uint16_t x331 = UINT16_MAX;
	static int16_t x332 = INT16_MAX;
	int32_t t82 = 1;

	t82 = ((x329<(x330&x331))^x332);

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 19U;
	uint32_t x334 = 60160U;
	uint8_t x335 = 1U;
	int32_t x336 = 597600;
	volatile int32_t t83 = 435283268;

	t83 = ((x333<(x334&x335))^x336);

	if (t83 != 597600) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = 1U;
	volatile int64_t x339 = 18882111537074046LL;
	int16_t x340 = INT16_MIN;
	volatile int32_t t84 = 58;

	t84 = ((x337<(x338&x339))^x340);

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	uint32_t x342 = 208398U;
	int16_t x344 = -1;
	int32_t t85 = 1468;

	t85 = ((x341<(x342&x343))^x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x348 = 41976950723221LL;
	int64_t t86 = 955382367LL;

	t86 = ((x345<(x346&x347))^x348);

	if (t86 != 41976950723220LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = -1;
	int8_t x351 = -3;

	t87 = ((x349<(x350&x351))^x352);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = -1;
	uint16_t x356 = UINT16_MAX;
	static int32_t t88 = 419;

	t88 = ((x353<(x354&x355))^x356);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x358 = -1;
	uint16_t x359 = 4950U;

	t89 = ((x357<(x358&x359))^x360);

	if (t89 != 14774286LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x361 = INT64_MIN;
	int8_t x363 = 0;
	uint32_t x364 = 0U;
	uint32_t t90 = 59779U;

	t90 = ((x361<(x362&x363))^x364);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x366 = -1LL;
	static volatile int32_t t91 = 11;

	t91 = ((x365<(x366&x367))^x368);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 325U;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 16851320;

	t92 = ((x369<(x370&x371))^x372);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -58509285LL;
	uint8_t x375 = 10U;
	volatile uint32_t x376 = 824311258U;

	t93 = ((x373<(x374&x375))^x376);

	if (t93 != 824311259U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x378 = 0LLU;
	static volatile int64_t x379 = -140LL;
	volatile int32_t t94 = 985;

	t94 = ((x377<(x378&x379))^x380);

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x382 = INT32_MAX;
	int8_t x383 = -11;
	static uint64_t x384 = 12021182325468783LLU;
	uint64_t t95 = 368LLU;

	t95 = ((x381<(x382&x383))^x384);

	if (t95 != 12021182325468782LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x386 = -45;
	int32_t x387 = INT32_MAX;
	volatile int64_t t96 = -689678LL;

	t96 = ((x385<(x386&x387))^x388);

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	volatile int32_t x390 = -1;
	static uint64_t x391 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t97 = 0;

	t97 = ((x389<(x390&x391))^x392);

	if (t97 != 254) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 4492700;
	volatile uint8_t x394 = 100U;
	int32_t x395 = -548789855;
	uint16_t x396 = 32U;
	volatile int32_t t98 = -4000316;

	t98 = ((x393<(x394&x395))^x396);

	if (t98 != 32) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	volatile int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MAX;
	static int32_t t99 = INT32_MAX;

	t99 = ((x397<(x398&x399))^x400);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

