#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
int32_t x21 = INT32_MAX;
volatile uint16_t x22 = 263U;
int32_t x28 = -96729;
volatile int32_t t5 = -69974072;
static int32_t t6 = 651;
static uint16_t x43 = 5417U;
static int32_t x47 = INT32_MIN;
int16_t x56 = -1;
volatile int32_t t15 = 1682;
int32_t x73 = 804;
int64_t x75 = INT64_MAX;
int64_t x78 = INT64_MIN;
uint8_t x80 = UINT8_MAX;
volatile int32_t t17 = 7168056;
int16_t x81 = INT16_MIN;
uint32_t x82 = UINT32_MAX;
static uint64_t x84 = 67253LLU;
int32_t t18 = 5;
int32_t x89 = 7875703;
int32_t t21 = 22713992;
static volatile int32_t t22 = 107;
int32_t t25 = 3729;
uint16_t x116 = 243U;
uint16_t x117 = UINT16_MAX;
static int8_t x120 = -1;
uint8_t x134 = UINT8_MAX;
volatile int32_t t31 = -1595251;
int8_t x141 = -26;
volatile int64_t x146 = -284LL;
int32_t t35 = 1424435;
int32_t t36 = -1045379;
int32_t t38 = -164050;
int32_t t40 = -44;
static int64_t x177 = INT64_MIN;
int32_t t42 = -3;
uint32_t x186 = 454U;
static int16_t x187 = INT16_MAX;
static volatile uint32_t x188 = 7232972U;
uint32_t x193 = 7452192U;
int32_t x194 = -1;
int64_t x196 = INT64_MIN;
uint64_t x208 = UINT64_MAX;
volatile int32_t t49 = -29;
uint8_t x215 = 4U;
static uint16_t x216 = 5234U;
int8_t x217 = 1;
int32_t x225 = -6596211;
uint32_t x229 = 2U;
uint64_t x232 = UINT64_MAX;
volatile int32_t t54 = -1637644;
int8_t x248 = INT8_MIN;
uint32_t x252 = UINT32_MAX;
static int64_t x253 = 2648LL;
uint64_t x254 = 720016859611LLU;
static int16_t x256 = 0;
volatile uint16_t x257 = UINT16_MAX;
int16_t x263 = INT16_MIN;
volatile int16_t x264 = -8859;
int8_t x270 = 0;
int16_t x272 = INT16_MIN;
int16_t x279 = INT16_MIN;
int64_t x286 = INT64_MIN;
static int16_t x288 = INT16_MIN;
int16_t x291 = INT16_MAX;
uint64_t x292 = UINT64_MAX;
static int8_t x298 = INT8_MIN;
static volatile int32_t t66 = -5230899;
int32_t x301 = -42;
int64_t x302 = INT64_MAX;
static int32_t t67 = -31622772;
uint8_t x305 = 5U;
int32_t t68 = 952;
uint16_t x311 = UINT16_MAX;
int32_t t72 = -60941145;
int32_t x329 = INT32_MIN;
int8_t x332 = INT8_MIN;
int8_t x336 = 1;
int32_t t75 = -24;
int16_t x361 = INT16_MIN;
int32_t t80 = 4;
static int64_t x369 = 454LL;
volatile int32_t x374 = INT32_MIN;
volatile uint32_t x383 = UINT32_MAX;
volatile int32_t t84 = 8362239;
static volatile int32_t t86 = 37;
int8_t x393 = INT8_MIN;
uint32_t x396 = 3943U;
static int16_t x403 = INT16_MIN;
int64_t x406 = INT64_MIN;
int16_t x410 = INT16_MIN;
int32_t x412 = INT32_MIN;
int32_t x414 = INT32_MIN;
int16_t x416 = INT16_MAX;
int32_t t93 = 3623615;
int8_t x435 = INT8_MIN;
static int16_t x436 = INT16_MAX;
int64_t x439 = INT64_MIN;
volatile int32_t t99 = 1;


void f0(void) {
	uint16_t x1 = 28671U;
	int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 163965;

	t0 = (x1==((x2/x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	uint32_t x6 = UINT32_MAX;
	volatile int8_t x7 = -2;
	volatile uint64_t x8 = 9235864LLU;
	static volatile int32_t t1 = 0;

	t1 = (x5==((x6/x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int64_t x10 = 831LL;
	int32_t x11 = INT32_MIN;
	int32_t x12 = -398935405;
	int32_t t2 = 880957;

	t2 = (x9==((x10/x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -502551681492LL;
	volatile int64_t x14 = INT64_MIN;
	uint8_t x15 = UINT8_MAX;
	static uint16_t x16 = 419U;
	int32_t t3 = 1;

	t3 = (x13==((x14/x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x23 = -1;
	int64_t x24 = -4880497073LL;
	int32_t t4 = 161034;

	t4 = (x21==((x22/x23)^x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = 64960354744LLU;
	static uint8_t x26 = 85U;
	int8_t x27 = -1;

	t5 = (x25==((x26/x27)^x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = 8;
	volatile int32_t x31 = -1335545;
	static uint64_t x32 = 519374435477476LLU;

	t6 = (x29==((x30/x31)^x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 56U;
	int32_t x34 = -1681;
	uint16_t x35 = 13089U;
	int8_t x36 = 1;
	int32_t t7 = -5575959;

	t7 = (x33==((x34/x35)^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	volatile int64_t x42 = -1LL;
	volatile uint64_t x44 = UINT64_MAX;
	volatile int32_t t8 = 895965;

	t8 = (x41==((x42/x43)^x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = 58U;
	uint8_t x46 = 34U;
	int16_t x48 = INT16_MIN;
	int32_t t9 = 3341;

	t9 = (x45==((x46/x47)^x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = 238897LL;
	volatile uint64_t x50 = UINT64_MAX;
	volatile int64_t x51 = INT64_MIN;
	volatile uint64_t x52 = 6048482852051LLU;
	int32_t t10 = 122289;

	t10 = (x49==((x50/x51)^x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 413158;
	volatile uint32_t x54 = 332U;
	static int64_t x55 = INT64_MIN;
	int32_t t11 = -32338472;

	t11 = (x53==((x54/x55)^x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	uint64_t x58 = 58LLU;
	static int64_t x59 = INT64_MAX;
	static uint32_t x60 = 1U;
	volatile int32_t t12 = -1342;

	t12 = (x57==((x58/x59)^x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x61 = INT64_MAX;
	static volatile uint32_t x62 = 100246U;
	int64_t x63 = 705674099857599LL;
	int16_t x64 = -2803;
	static int32_t t13 = 31891439;

	t13 = (x61==((x62/x63)^x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	int32_t x66 = INT32_MAX;
	int64_t x67 = INT64_MIN;
	volatile int64_t x68 = -1LL;
	volatile int32_t t14 = 1410;

	t14 = (x65==((x66/x67)^x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MAX;
	int64_t x71 = -1LL;
	int64_t x72 = -1758752LL;

	t15 = (x69==((x70/x71)^x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x74 = INT16_MAX;
	volatile uint32_t x76 = 29028771U;
	volatile int32_t t16 = -122772225;

	t16 = (x73==((x74/x75)^x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x77 = -1;
	int32_t x79 = 77294562;

	t17 = (x77==((x78/x79)^x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x83 = 1;

	t18 = (x81==((x82/x83)^x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MIN;
	uint32_t x86 = 29U;
	uint64_t x87 = UINT64_MAX;
	static uint64_t x88 = UINT64_MAX;
	static int32_t t19 = -26375;

	t19 = (x85==((x86/x87)^x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = 2052913;
	static int32_t x91 = INT32_MIN;
	uint8_t x92 = 3U;
	volatile int32_t t20 = 0;

	t20 = (x89==((x90/x91)^x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MAX;
	volatile uint8_t x95 = UINT8_MAX;
	int8_t x96 = -1;

	t21 = (x93==((x94/x95)^x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int32_t x98 = 279316581;
	int8_t x99 = 58;
	int16_t x100 = -1;

	t22 = (x97==((x98/x99)^x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	volatile int32_t x103 = -98340;
	int64_t x104 = INT64_MAX;
	volatile int32_t t23 = -873;

	t23 = (x101==((x102/x103)^x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = -265425026;
	static uint32_t x106 = 95589484U;
	int32_t x107 = -2150233;
	int64_t x108 = INT64_MAX;
	volatile int32_t t24 = -32;

	t24 = (x105==((x106/x107)^x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x109 = INT16_MAX;
	uint16_t x110 = 13347U;
	int8_t x111 = 2;
	int32_t x112 = INT32_MAX;

	t25 = (x109==((x110/x111)^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MIN;
	int8_t x114 = 1;
	int32_t x115 = -1;
	volatile int32_t t26 = -34209;

	t26 = (x113==((x114/x115)^x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = INT32_MIN;
	static int16_t x119 = INT16_MIN;
	volatile int32_t t27 = 3713056;

	t27 = (x117==((x118/x119)^x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x121 = INT8_MIN;
	static uint32_t x122 = 0U;
	int16_t x123 = -37;
	int64_t x124 = INT64_MIN;
	int32_t t28 = -94;

	t28 = (x121==((x122/x123)^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = 620;
	static int8_t x126 = -1;
	volatile uint32_t x127 = 26U;
	int8_t x128 = INT8_MIN;
	int32_t t29 = 15;

	t29 = (x125==((x126/x127)^x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MAX;
	int16_t x130 = -289;
	int16_t x131 = INT16_MAX;
	int16_t x132 = INT16_MIN;
	volatile int32_t t30 = -9;

	t30 = (x129==((x130/x131)^x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x133 = 2504LLU;
	static int64_t x135 = 53803580887208LL;
	volatile uint32_t x136 = 304859U;

	t31 = (x133==((x134/x135)^x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = INT64_MAX;
	static int8_t x138 = INT8_MAX;
	static uint64_t x139 = UINT64_MAX;
	static volatile int64_t x140 = INT64_MIN;
	int32_t t32 = 2;

	t32 = (x137==((x138/x139)^x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x142 = 10252119063339143LL;
	static int8_t x143 = INT8_MIN;
	static int64_t x144 = INT64_MAX;
	volatile int32_t t33 = -8179591;

	t33 = (x141==((x142/x143)^x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 39U;
	int8_t x147 = -1;
	uint32_t x148 = 15U;
	static volatile int32_t t34 = 314992384;

	t34 = (x145==((x146/x147)^x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	uint16_t x150 = 20U;
	uint32_t x151 = UINT32_MAX;
	uint64_t x152 = UINT64_MAX;

	t35 = (x149==((x150/x151)^x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 5;
	int8_t x154 = -3;
	volatile uint8_t x155 = UINT8_MAX;
	int16_t x156 = INT16_MIN;

	t36 = (x153==((x154/x155)^x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = INT8_MAX;
	static uint64_t x159 = 798LLU;
	int32_t x160 = INT32_MIN;
	volatile int32_t t37 = 303636735;

	t37 = (x157==((x158/x159)^x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	int32_t x162 = -1;
	static int32_t x163 = -1;
	uint16_t x164 = 46U;

	t38 = (x161==((x162/x163)^x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = UINT32_MAX;
	static int8_t x170 = INT8_MIN;
	int16_t x171 = INT16_MAX;
	int32_t x172 = -1;
	int32_t t39 = 2132176;

	t39 = (x169==((x170/x171)^x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MIN;
	static uint32_t x174 = UINT32_MAX;
	int64_t x175 = 636163802431095LL;
	int32_t x176 = INT32_MIN;

	t40 = (x173==((x174/x175)^x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 216076LLU;
	int16_t x180 = INT16_MIN;
	int32_t t41 = 67877067;

	t41 = (x177==((x178/x179)^x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 2420334873538LLU;
	int8_t x182 = -2;
	static uint16_t x183 = UINT16_MAX;
	int8_t x184 = INT8_MIN;

	t42 = (x181==((x182/x183)^x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 502U;
	volatile int32_t t43 = 5;

	t43 = (x185==((x186/x187)^x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 2084911510621LLU;
	int16_t x190 = -1;
	uint16_t x191 = 1192U;
	int8_t x192 = INT8_MAX;
	int32_t t44 = 5;

	t44 = (x189==((x190/x191)^x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x195 = 988660U;
	volatile int32_t t45 = 3555;

	t45 = (x193==((x194/x195)^x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = -292;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1;
	int32_t x200 = INT32_MAX;
	volatile int32_t t46 = 856690;

	t46 = (x197==((x198/x199)^x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = -462971946;
	static int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MAX;
	volatile int32_t t47 = 9;

	t47 = (x201==((x202/x203)^x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = UINT64_MAX;
	static int32_t x206 = INT32_MAX;
	int16_t x207 = INT16_MAX;
	volatile int32_t t48 = 7462150;

	t48 = (x205==((x206/x207)^x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	static volatile uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MAX;

	t49 = (x209==((x210/x211)^x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 58U;
	int32_t x214 = -1;
	volatile int32_t t50 = 29;

	t50 = (x213==((x214/x215)^x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MAX;
	int16_t x219 = 109;
	int64_t x220 = INT64_MAX;
	volatile int32_t t51 = -59;

	t51 = (x217==((x218/x219)^x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x226 = 495U;
	int32_t x227 = INT32_MIN;
	int64_t x228 = -1LL;
	volatile int32_t t52 = -137795;

	t52 = (x225==((x226/x227)^x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x230 = -3447LL;
	int8_t x231 = INT8_MAX;
	int32_t t53 = -41;

	t53 = (x229==((x230/x231)^x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = -7852;
	volatile uint64_t x235 = 1603534622314615439LLU;
	uint32_t x236 = 3U;

	t54 = (x233==((x234/x235)^x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x237 = 1U;
	int64_t x238 = INT64_MIN;
	uint32_t x239 = 260750443U;
	static uint16_t x240 = 214U;
	volatile int32_t t55 = 6;

	t55 = (x237==((x238/x239)^x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = UINT8_MAX;
	volatile int32_t x243 = INT32_MIN;
	static uint8_t x244 = 23U;
	static volatile int32_t t56 = -400;

	t56 = (x241==((x242/x243)^x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = -1;
	int64_t x246 = -115141735737531LL;
	uint64_t x247 = UINT64_MAX;
	int32_t t57 = -102941529;

	t57 = (x245==((x246/x247)^x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	uint8_t x250 = UINT8_MAX;
	uint16_t x251 = 22U;
	int32_t t58 = 295615239;

	t58 = (x249==((x250/x251)^x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x255 = 52487739LLU;
	volatile int32_t t59 = 253700;

	t59 = (x253==((x254/x255)^x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x258 = 418;
	int32_t x259 = -2;
	uint32_t x260 = UINT32_MAX;
	static int32_t t60 = 4;

	t60 = (x257==((x258/x259)^x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x261 = INT64_MIN;
	int64_t x262 = -43260789194LL;
	static int32_t t61 = -68365001;

	t61 = (x261==((x262/x263)^x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	int64_t x271 = -286853238308192LL;
	volatile int32_t t62 = -32;

	t62 = (x269==((x270/x271)^x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MIN;
	volatile uint8_t x278 = UINT8_MAX;
	volatile int8_t x280 = -1;
	int32_t t63 = -19410;

	t63 = (x277==((x278/x279)^x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x285 = INT32_MAX;
	static int8_t x287 = INT8_MIN;
	static volatile int32_t t64 = -3129086;

	t64 = (x285==((x286/x287)^x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x289 = 266746100U;
	volatile int32_t x290 = 7914153;
	static int32_t t65 = 4212188;

	t65 = (x289==((x290/x291)^x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x297 = -1LL;
	static volatile int16_t x299 = -1440;
	int16_t x300 = -4;

	t66 = (x297==((x298/x299)^x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x303 = UINT32_MAX;
	uint16_t x304 = UINT16_MAX;

	t67 = (x301==((x302/x303)^x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x306 = UINT64_MAX;
	volatile uint8_t x307 = 2U;
	int32_t x308 = INT32_MIN;

	t68 = (x305==((x306/x307)^x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = INT64_MAX;
	int8_t x310 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t69 = -1335200;

	t69 = (x309==((x310/x311)^x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x313 = UINT16_MAX;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = 6;
	static int16_t x316 = -1;
	int32_t t70 = 1264;

	t70 = (x313==((x314/x315)^x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = -17;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MIN;
	int8_t x320 = INT8_MAX;
	static int32_t t71 = -412002;

	t71 = (x317==((x318/x319)^x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x321 = 2079356683LLU;
	int8_t x322 = -1;
	static uint16_t x323 = 11U;
	int64_t x324 = INT64_MIN;

	t72 = (x321==((x322/x323)^x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 2U;
	int8_t x326 = -1;
	int32_t x327 = 111;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t73 = -14614786;

	t73 = (x325==((x326/x327)^x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x330 = UINT32_MAX;
	int32_t x331 = INT32_MAX;
	volatile int32_t t74 = 461491;

	t74 = (x329==((x330/x331)^x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 2U;
	volatile int16_t x334 = INT16_MAX;
	int32_t x335 = 209;

	t75 = (x333==((x334/x335)^x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = 0;
	volatile int32_t x338 = -516;
	static uint64_t x339 = UINT64_MAX;
	volatile int32_t x340 = INT32_MAX;
	static int32_t t76 = 40305379;

	t76 = (x337==((x338/x339)^x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x341 = INT8_MAX;
	volatile int64_t x342 = -505766673786434LL;
	uint32_t x343 = 462787634U;
	int64_t x344 = INT64_MAX;
	int32_t t77 = -336197;

	t77 = (x341==((x342/x343)^x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -1;
	int16_t x346 = -1;
	volatile int8_t x347 = INT8_MIN;
	int8_t x348 = -1;
	volatile int32_t t78 = 323181457;

	t78 = (x345==((x346/x347)^x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = -40;
	volatile int8_t x358 = INT8_MIN;
	uint16_t x359 = 4960U;
	int64_t x360 = INT64_MAX;
	static volatile int32_t t79 = -317;

	t79 = (x357==((x358/x359)^x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x362 = INT32_MIN;
	static int64_t x363 = INT64_MAX;
	volatile int8_t x364 = INT8_MIN;

	t80 = (x361==((x362/x363)^x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x365 = 42U;
	int8_t x366 = -8;
	static uint32_t x367 = 17537U;
	int16_t x368 = INT16_MIN;
	static volatile int32_t t81 = 248313;

	t81 = (x365==((x366/x367)^x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x370 = -1;
	int32_t x371 = INT32_MIN;
	int64_t x372 = 17221LL;
	int32_t t82 = 923;

	t82 = (x369==((x370/x371)^x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x373 = UINT32_MAX;
	uint32_t x375 = UINT32_MAX;
	static int32_t x376 = -1588;
	int32_t t83 = -58;

	t83 = (x373==((x374/x375)^x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x381 = INT16_MIN;
	int32_t x382 = -1;
	volatile int8_t x384 = -1;

	t84 = (x381==((x382/x383)^x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x385 = 226U;
	uint64_t x386 = UINT64_MAX;
	static int64_t x387 = INT64_MIN;
	static volatile uint32_t x388 = 20280U;
	volatile int32_t t85 = -1;

	t85 = (x385==((x386/x387)^x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = -3LL;
	static int8_t x390 = INT8_MAX;
	volatile uint16_t x391 = UINT16_MAX;
	uint16_t x392 = 580U;

	t86 = (x389==((x390/x391)^x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x394 = -417304522841LL;
	int8_t x395 = 61;
	volatile int32_t t87 = -14;

	t87 = (x393==((x394/x395)^x396));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -1;
	int64_t x398 = -17083LL;
	uint16_t x399 = 24U;
	uint64_t x400 = 0LLU;
	volatile int32_t t88 = -17862232;

	t88 = (x397==((x398/x399)^x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x401 = INT16_MAX;
	static volatile uint8_t x402 = 3U;
	int64_t x404 = 342729583848466737LL;
	int32_t t89 = -179;

	t89 = (x401==((x402/x403)^x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = 5889U;
	static int8_t x407 = INT8_MIN;
	volatile int8_t x408 = -1;
	volatile int32_t t90 = -1911;

	t90 = (x405==((x406/x407)^x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x409 = -238;
	int64_t x411 = INT64_MAX;
	volatile int32_t t91 = 13;

	t91 = (x409==((x410/x411)^x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = INT8_MAX;
	int16_t x415 = INT16_MAX;
	volatile int32_t t92 = 14659304;

	t92 = (x413==((x414/x415)^x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = INT16_MIN;
	int8_t x418 = -1;
	uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MIN;

	t93 = (x417==((x418/x419)^x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = -1;
	static int8_t x422 = -1;
	volatile int32_t x423 = INT32_MIN;
	volatile int8_t x424 = 11;
	volatile int32_t t94 = -11;

	t94 = (x421==((x422/x423)^x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = INT64_MIN;
	uint16_t x426 = 6U;
	int32_t x427 = INT32_MIN;
	volatile uint16_t x428 = UINT16_MAX;
	static int32_t t95 = 1799;

	t95 = (x425==((x426/x427)^x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x429 = UINT16_MAX;
	int32_t x430 = -1;
	int16_t x431 = -455;
	int32_t x432 = -1;
	volatile int32_t t96 = -113;

	t96 = (x429==((x430/x431)^x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = 65LL;
	volatile int64_t x434 = 6LL;
	volatile int32_t t97 = 148;

	t97 = (x433==((x434/x435)^x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = -4LL;
	int8_t x438 = -1;
	static int16_t x440 = -1;
	int32_t t98 = 2264;

	t98 = (x437==((x438/x439)^x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x441 = INT32_MIN;
	static int8_t x442 = INT8_MAX;
	int16_t x443 = INT16_MAX;
	int8_t x444 = -3;

	t99 = (x441==((x442/x443)^x444));

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

