#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
uint64_t x4 = 190079807648496004LLU;
static volatile int32_t t1 = -868088262;
uint32_t t4 = UINT32_MAX;
int32_t x29 = 31311;
int32_t x30 = -1;
static int64_t x34 = INT64_MIN;
volatile int32_t t8 = 431;
int8_t x40 = 41;
uint64_t x43 = 1800LLU;
static int32_t x46 = INT32_MIN;
volatile int32_t t12 = -94320248;
volatile int32_t x53 = 1;
uint64_t x55 = 53164LLU;
int16_t x56 = INT16_MIN;
volatile int32_t x63 = 168;
static int64_t t15 = INT64_MIN;
int16_t x70 = 0;
int32_t x74 = -27708;
int16_t x77 = INT16_MIN;
int32_t t20 = 9;
int8_t x86 = INT8_MIN;
int32_t x87 = INT32_MIN;
uint16_t x90 = 737U;
int64_t x97 = -7LL;
uint32_t x98 = 6896716U;
static volatile int8_t x99 = 4;
static int64_t x128 = -3LL;
volatile uint16_t x131 = 533U;
int8_t x133 = 3;
int8_t x135 = INT8_MAX;
int64_t x138 = 79386514LL;
int16_t x139 = -2;
int16_t x140 = -1;
uint32_t x148 = 9244U;
int8_t x150 = INT8_MIN;
int32_t x151 = INT32_MIN;
int16_t x159 = INT16_MIN;
int32_t t41 = 1965404;
volatile int32_t x186 = INT32_MIN;
int8_t x191 = 1;
volatile int32_t x193 = -1;
int64_t x197 = INT64_MAX;
int8_t x205 = INT8_MIN;
int32_t t54 = 90709127;
int8_t x225 = INT8_MIN;
volatile uint8_t x227 = UINT8_MAX;
volatile int32_t t56 = 59937011;
volatile int32_t t58 = 7;
int32_t x237 = INT32_MAX;
uint8_t x239 = UINT8_MAX;
volatile int8_t x245 = -1;
int16_t x250 = 0;
int8_t x252 = -1;
uint8_t x253 = 66U;
static volatile int16_t x256 = 572;
int8_t x257 = INT8_MIN;
int32_t x258 = INT32_MAX;
volatile int64_t x270 = INT64_MIN;
int16_t x292 = INT16_MAX;
int32_t t72 = -109598402;
volatile int32_t x295 = INT32_MAX;
uint8_t x298 = 9U;
uint16_t x306 = 777U;
static int32_t x309 = INT32_MAX;
static volatile int32_t x310 = INT32_MIN;
static int16_t x311 = INT16_MIN;
static uint16_t x322 = 0U;
int16_t x327 = 1;
uint16_t x331 = UINT16_MAX;
volatile int32_t x337 = 85;
static int32_t x343 = INT32_MIN;
uint16_t x344 = 6923U;
int16_t x348 = INT16_MAX;
static int64_t x357 = -5626953LL;
uint32_t x358 = 181U;
int64_t x360 = -1LL;
int64_t t89 = -1808LL;
int8_t x361 = -30;
volatile int32_t t91 = -1744;
static uint32_t x369 = UINT32_MAX;
int8_t x372 = INT8_MIN;
uint16_t x373 = UINT16_MAX;
static uint16_t x376 = UINT16_MAX;
volatile int32_t t94 = INT32_MAX;
int16_t x381 = -3;
int8_t x382 = INT8_MIN;
int16_t x384 = -8;
uint64_t x390 = 3073169LLU;
int64_t x392 = -1LL;
static volatile int32_t x399 = INT32_MAX;
int8_t x400 = INT8_MIN;


void f0(void) {
	int8_t x1 = 1;
	int8_t x3 = 1;
	uint64_t t0 = 109844963568313LLU;

	t0 = ((x1<(x2==x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 176U;
	static volatile int64_t x6 = INT64_MIN;
	uint64_t x7 = 1483080059129670728LLU;
	int16_t x8 = -1;

	t1 = ((x5<(x6==x7))*x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = INT8_MIN;
	static int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 7944LL;

	t2 = ((x9<(x10==x11))*x12);

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -4;
	int32_t x14 = INT32_MIN;
	int8_t x15 = 1;
	static uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -13105;

	t3 = ((x13<(x14==x15))*x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static uint8_t x18 = 1U;
	int16_t x19 = 6;
	volatile uint32_t x20 = UINT32_MAX;

	t4 = ((x17<(x18==x19))*x20);

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 629;
	static volatile int32_t x22 = INT32_MIN;
	static int64_t x23 = 910LL;
	static int32_t x24 = -4044;
	volatile int32_t t5 = 770176034;

	t5 = ((x21<(x22==x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -32;
	static int32_t x26 = -844845673;
	volatile int16_t x27 = INT16_MAX;
	volatile int32_t x28 = 165111604;
	int32_t t6 = 0;

	t6 = ((x25<(x26==x27))*x28);

	if (t6 != 165111604) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 15542849;

	t7 = ((x29<(x30==x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = 20;
	static int16_t x35 = INT16_MIN;
	uint8_t x36 = 0U;

	t8 = ((x33<(x34==x35))*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 10146LLU;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = 21924U;
	static int32_t t9 = 1;

	t9 = ((x37<(x38==x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 13931;
	int16_t x42 = 781;
	uint32_t x44 = 778U;
	static uint32_t t10 = 4949U;

	t10 = ((x41<(x42==x43))*x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 15569LLU;
	uint8_t x47 = 0U;
	int8_t x48 = INT8_MAX;
	int32_t t11 = 7;

	t11 = ((x45<(x46==x47))*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = INT64_MIN;
	static int16_t x51 = 1;
	int8_t x52 = -1;

	t12 = ((x49<(x50==x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 53LLU;
	static volatile int32_t t13 = 1;

	t13 = ((x53<(x54==x55))*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -107581LL;
	static int8_t x58 = INT8_MIN;
	uint8_t x59 = 75U;
	volatile uint8_t x60 = 2U;
	int32_t t14 = 4;

	t14 = ((x57<(x58==x59))*x60);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int64_t x62 = INT64_MIN;
	static int64_t x64 = INT64_MIN;

	t15 = ((x61<(x62==x63))*x64);

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -135487840984LL;
	static int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MIN;
	static int16_t x68 = INT16_MIN;
	int32_t t16 = -804;

	t16 = ((x65<(x66==x67))*x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = 1644520;

	t17 = ((x69<(x70==x71))*x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	static int16_t x75 = 14;
	int64_t x76 = 1325343LL;
	static int64_t t18 = -3392LL;

	t18 = ((x73<(x74==x75))*x76);

	if (t18 != 1325343LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x78 = INT64_MAX;
	int64_t x79 = INT64_MIN;
	int8_t x80 = INT8_MIN;
	static volatile int32_t t19 = 489;

	t19 = ((x77<(x78==x79))*x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MIN;
	int8_t x82 = -2;
	static int8_t x83 = INT8_MAX;
	int32_t x84 = -1;

	t20 = ((x81<(x82==x83))*x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int64_t x88 = -31188LL;
	volatile int64_t t21 = -30LL;

	t21 = ((x85<(x86==x87))*x88);

	if (t21 != -31188LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x89 = 934557;
	static uint32_t x91 = 7197U;
	static uint16_t x92 = 15192U;
	volatile int32_t t22 = -562449757;

	t22 = ((x89<(x90==x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	volatile uint32_t x94 = 148561U;
	uint8_t x95 = 15U;
	int16_t x96 = INT16_MIN;
	int32_t t23 = -13671;

	t23 = ((x93<(x94==x95))*x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x100 = INT16_MAX;
	int32_t t24 = 24;

	t24 = ((x97<(x98==x99))*x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -21;
	int32_t x102 = INT32_MIN;
	int64_t x103 = INT64_MIN;
	uint16_t x104 = 11188U;
	static int32_t t25 = 351;

	t25 = ((x101<(x102==x103))*x104);

	if (t25 != 11188) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	volatile int64_t x106 = INT64_MIN;
	volatile uint64_t x107 = 924263199490LLU;
	static uint16_t x108 = UINT16_MAX;
	static int32_t t26 = 8029;

	t26 = ((x105<(x106==x107))*x108);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -6100;
	uint8_t x110 = UINT8_MAX;
	uint8_t x111 = 0U;
	int16_t x112 = -640;
	int32_t t27 = -36396;

	t27 = ((x109<(x110==x111))*x112);

	if (t27 != -640) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	static uint8_t x114 = 13U;
	volatile int16_t x115 = 0;
	uint32_t x116 = 32178109U;
	uint32_t t28 = 21U;

	t28 = ((x113<(x114==x115))*x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 5U;
	int64_t x118 = -1LL;
	volatile int16_t x119 = 790;
	volatile int32_t x120 = -13630;
	volatile int32_t t29 = 10;

	t29 = ((x117<(x118==x119))*x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	static int16_t x123 = INT16_MAX;
	int64_t x124 = INT64_MIN;
	int64_t t30 = INT64_MIN;

	t30 = ((x121<(x122==x123))*x124);

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = 46;
	int32_t x127 = INT32_MAX;
	volatile int64_t t31 = 2020258687584942LL;

	t31 = ((x125<(x126==x127))*x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = INT8_MIN;
	int16_t x132 = INT16_MAX;
	static volatile int32_t t32 = 1701262;

	t32 = ((x129<(x130==x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = -164;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t33 = -1;

	t33 = ((x133<(x134==x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int32_t t34 = 3714596;

	t34 = ((x137<(x138==x139))*x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = -1;
	int16_t x142 = INT16_MAX;
	static int16_t x143 = INT16_MIN;
	int32_t x144 = 252993809;
	static int32_t t35 = -19;

	t35 = ((x141<(x142==x143))*x144);

	if (t35 != 252993809) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	int32_t x146 = 110187;
	static uint8_t x147 = 4U;
	static volatile uint32_t t36 = 0U;

	t36 = ((x145<(x146==x147))*x148);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static volatile int64_t x152 = -1LL;
	int64_t t37 = -154738449511LL;

	t37 = ((x149<(x150==x151))*x152);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	static volatile uint64_t x154 = 209306599769307LLU;
	int64_t x155 = INT64_MIN;
	static int16_t x156 = -1;
	volatile int32_t t38 = -6006489;

	t38 = ((x153<(x154==x155))*x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	static int16_t x158 = -1550;
	int8_t x160 = -1;
	int32_t t39 = -286735499;

	t39 = ((x157<(x158==x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static int32_t x162 = 11120;
	static int8_t x163 = INT8_MAX;
	static volatile int32_t x164 = -13;
	volatile int32_t t40 = 4881;

	t40 = ((x161<(x162==x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	int32_t x166 = -178;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = INT8_MIN;

	t41 = ((x165<(x166==x167))*x168);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 993U;
	int32_t x170 = -2218;
	uint8_t x171 = 1U;
	static uint8_t x172 = 17U;
	int32_t t42 = -59217654;

	t42 = ((x169<(x170==x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -7;
	volatile int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;
	volatile uint16_t x176 = 32449U;
	static int32_t t43 = 335059248;

	t43 = ((x173<(x174==x175))*x176);

	if (t43 != 32449) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x177 = INT16_MIN;
	volatile int64_t x178 = -1LL;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = 393;

	t44 = ((x177<(x178==x179))*x180);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	int64_t x182 = 209325452685674LL;
	uint32_t x183 = 2U;
	int64_t x184 = INT64_MIN;
	static int64_t t45 = INT64_MIN;

	t45 = ((x181<(x182==x183))*x184);

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -14224390702225LL;
	static int64_t x187 = INT64_MIN;
	static int8_t x188 = INT8_MIN;
	int32_t t46 = 1799;

	t46 = ((x185<(x186==x187))*x188);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 25399661751159LLU;
	volatile int8_t x190 = INT8_MIN;
	uint32_t x192 = 67U;
	volatile uint32_t t47 = 9U;

	t47 = ((x189<(x190==x191))*x192);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x194 = 11266645411506826LLU;
	int32_t x195 = -3;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t48 = -3204;

	t48 = ((x193<(x194==x195))*x196);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = INT64_MIN;
	int8_t x199 = 0;
	int8_t x200 = INT8_MIN;
	int32_t t49 = -295131;

	t49 = ((x197<(x198==x199))*x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 15U;
	int16_t x202 = -1;
	volatile uint16_t x203 = UINT16_MAX;
	static int64_t x204 = -5580543LL;
	int64_t t50 = -58019LL;

	t50 = ((x201<(x202==x203))*x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x206 = -1;
	uint32_t x207 = 7241U;
	int32_t x208 = INT32_MAX;
	volatile int32_t t51 = INT32_MAX;

	t51 = ((x205<(x206==x207))*x208);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 57U;
	int16_t x211 = INT16_MAX;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t52 = 13628;

	t52 = ((x209<(x210==x211))*x212);

	if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	volatile int64_t x214 = 10412444LL;
	int8_t x215 = 25;
	int64_t x216 = -2566546918LL;
	int64_t t53 = -762582090827726951LL;

	t53 = ((x213<(x214==x215))*x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile uint8_t x218 = 0U;
	int64_t x219 = INT64_MAX;
	static int16_t x220 = INT16_MIN;

	t54 = ((x217<(x218==x219))*x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x221 = INT32_MAX;
	uint32_t x222 = 1U;
	int32_t x223 = -1;
	int64_t x224 = INT64_MAX;
	static volatile int64_t t55 = -45LL;

	t55 = ((x221<(x222==x223))*x224);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x226 = UINT16_MAX;
	int8_t x228 = 39;

	t56 = ((x225<(x226==x227))*x228);

	if (t56 != 39) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	static uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 6U;
	volatile uint8_t x232 = 1U;
	volatile int32_t t57 = 149212219;

	t57 = ((x229<(x230==x231))*x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x233 = INT16_MIN;
	static volatile int16_t x234 = 309;
	uint64_t x235 = 99633455323LLU;
	int32_t x236 = -1;

	t58 = ((x233<(x234==x235))*x236);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x238 = 1318U;
	volatile uint32_t x240 = 1006735294U;
	volatile uint32_t t59 = 117862U;

	t59 = ((x237<(x238==x239))*x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = INT64_MIN;
	int64_t x242 = -9019473311LL;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 5295490;

	t60 = ((x241<(x242==x243))*x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = -1;
	volatile uint64_t x247 = 8022LLU;
	static uint8_t x248 = 3U;
	volatile int32_t t61 = -36207;

	t61 = ((x245<(x246==x247))*x248);

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -16999855373271459LL;
	static int32_t x251 = INT32_MIN;
	volatile int32_t t62 = -3942990;

	t62 = ((x249<(x250==x251))*x252);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	static volatile int64_t x255 = -18313882510196821LL;
	int32_t t63 = 2;

	t63 = ((x253<(x254==x255))*x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x259 = -996843;
	int32_t x260 = INT32_MIN;
	int32_t t64 = INT32_MIN;

	t64 = ((x257<(x258==x259))*x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -1LL;
	int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -13;
	int32_t t65 = -8390;

	t65 = ((x261<(x262==x263))*x264);

	if (t65 != -13) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	uint16_t x266 = 2336U;
	static int32_t x267 = -528578472;
	int32_t x268 = INT32_MIN;
	int32_t t66 = INT32_MIN;

	t66 = ((x265<(x266==x267))*x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 4530U;
	static uint16_t x271 = UINT16_MAX;
	uint16_t x272 = 5U;
	volatile int32_t t67 = 156206;

	t67 = ((x269<(x270==x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	static int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -5411536;

	t68 = ((x273<(x274==x275))*x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MAX;
	int16_t x278 = -3;
	volatile int64_t x279 = -253549768220LL;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 55282;

	t69 = ((x277<(x278==x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static uint8_t x282 = 5U;
	static uint32_t x283 = 510884809U;
	int64_t x284 = -302680113135LL;
	static volatile int64_t t70 = 12227974LL;

	t70 = ((x281<(x282==x283))*x284);

	if (t70 != -302680113135LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -40;
	uint16_t x286 = 55U;
	int32_t x287 = -1;
	uint32_t x288 = 88403U;
	uint32_t t71 = 138U;

	t71 = ((x285<(x286==x287))*x288);

	if (t71 != 88403U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	uint32_t x290 = UINT32_MAX;
	uint32_t x291 = 52320870U;

	t72 = ((x289<(x290==x291))*x292);

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	static int16_t x294 = -2195;
	volatile uint32_t x296 = 55U;
	static uint32_t t73 = 1U;

	t73 = ((x293<(x294==x295))*x296);

	if (t73 != 55U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	static int32_t x299 = INT32_MIN;
	static uint16_t x300 = 433U;
	int32_t t74 = -449;

	t74 = ((x297<(x298==x299))*x300);

	if (t74 != 433) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	volatile uint16_t x302 = UINT16_MAX;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = INT32_MAX;
	volatile int32_t t75 = INT32_MAX;

	t75 = ((x301<(x302==x303))*x304);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 23080736U;
	uint8_t x307 = 2U;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 7;

	t76 = ((x305<(x306==x307))*x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x312 = -2LL;
	static int64_t t77 = -342565887522584LL;

	t77 = ((x309<(x310==x311))*x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 5U;
	volatile int32_t x315 = 406;
	uint64_t x316 = 192674LLU;
	uint64_t t78 = 213LLU;

	t78 = ((x313<(x314==x315))*x316);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	static volatile uint8_t x318 = 6U;
	int32_t x319 = INT32_MAX;
	int32_t x320 = -6656763;
	int32_t t79 = -205817125;

	t79 = ((x317<(x318==x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	static int64_t x323 = INT64_MIN;
	static uint32_t x324 = 420U;
	uint32_t t80 = 14945U;

	t80 = ((x321<(x322==x323))*x324);

	if (t80 != 420U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = INT64_MIN;
	uint8_t x326 = 0U;
	uint32_t x328 = 413023U;
	volatile uint32_t t81 = 1073U;

	t81 = ((x325<(x326==x327))*x328);

	if (t81 != 413023U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -117;
	uint32_t x330 = 1938U;
	volatile uint16_t x332 = UINT16_MAX;
	int32_t t82 = 2868029;

	t82 = ((x329<(x330==x331))*x332);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 10U;
	volatile uint8_t x334 = 0U;
	volatile uint8_t x335 = UINT8_MAX;
	uint64_t x336 = 6438149370624480520LLU;
	static volatile uint64_t t83 = 1382085862688LLU;

	t83 = ((x333<(x334==x335))*x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	static volatile int16_t x339 = 10;
	int16_t x340 = 448;
	volatile int32_t t84 = -14;

	t84 = ((x337<(x338==x339))*x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 19U;
	volatile int64_t x342 = -24078107813LL;
	int32_t t85 = 12293926;

	t85 = ((x341<(x342==x343))*x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	volatile int8_t x347 = -1;
	int32_t t86 = -169;

	t86 = ((x345<(x346==x347))*x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 14;
	int32_t x350 = INT32_MIN;
	int64_t x351 = 66823261146438LL;
	static volatile int8_t x352 = INT8_MAX;
	int32_t t87 = 1;

	t87 = ((x349<(x350==x351))*x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = 9265279131550744LL;
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = INT32_MAX;
	uint64_t x356 = 697417957LLU;
	static volatile uint64_t t88 = 434782LLU;

	t88 = ((x353<(x354==x355))*x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = INT16_MAX;

	t89 = ((x357<(x358==x359))*x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x362 = UINT8_MAX;
	int16_t x363 = 74;
	uint8_t x364 = 5U;
	volatile int32_t t90 = -63934;

	t90 = ((x361<(x362==x363))*x364);

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = 626;
	int64_t x366 = INT64_MAX;
	int16_t x367 = INT16_MAX;
	int16_t x368 = INT16_MAX;

	t91 = ((x365<(x366==x367))*x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x370 = 1;
	static volatile uint16_t x371 = UINT16_MAX;
	volatile int32_t t92 = 194864222;

	t92 = ((x369<(x370==x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x374 = 14U;
	int32_t x375 = INT32_MIN;
	int32_t t93 = -1441600;

	t93 = ((x373<(x374==x375))*x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int32_t x378 = 1055723;
	static volatile uint16_t x379 = 32525U;
	int32_t x380 = INT32_MAX;

	t94 = ((x377<(x378==x379))*x380);

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -313813;
	volatile int32_t t95 = 1285603;

	t95 = ((x381<(x382==x383))*x384);

	if (t95 != -8) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	static volatile int64_t x386 = -1LL;
	int16_t x387 = INT16_MIN;
	uint8_t x388 = 2U;
	int32_t t96 = -1928;

	t96 = ((x385<(x386==x387))*x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = INT8_MIN;
	static int64_t x391 = -1LL;
	volatile int64_t t97 = -6431778851866LL;

	t97 = ((x389<(x390==x391))*x392);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MAX;
	uint64_t x396 = 803241LLU;
	uint64_t t98 = 12LLU;

	t98 = ((x393<(x394==x395))*x396);

	if (t98 != 803241LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = INT64_MIN;
	int32_t t99 = 64992998;

	t99 = ((x397<(x398==x399))*x400);

	if (t99 != -128) { NG(); } else { ; }
	
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

