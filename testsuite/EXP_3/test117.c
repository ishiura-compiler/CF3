#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MIN;
static volatile int64_t x11 = INT64_MIN;
int32_t x19 = -13693;
static int32_t x20 = -1;
int32_t x24 = -1;
volatile int64_t t5 = 25513734874805810LL;
int64_t x26 = INT64_MIN;
volatile uint32_t t6 = 3U;
int16_t x38 = -3;
int16_t x50 = INT16_MIN;
uint32_t x52 = UINT32_MAX;
uint32_t x59 = 942U;
uint64_t x64 = 104146028945770LLU;
volatile int16_t x75 = INT16_MIN;
volatile uint32_t t16 = 59267U;
volatile uint64_t x82 = 169LLU;
uint8_t x83 = UINT8_MAX;
static int8_t x84 = INT8_MIN;
static volatile uint16_t x86 = 17814U;
static int16_t x92 = 39;
volatile int32_t t19 = -253195020;
int64_t t21 = -4618060269854LL;
static int16_t x102 = -1;
uint16_t x116 = 74U;
int32_t t28 = 0;
volatile int64_t t29 = 663137716283123474LL;
int32_t x137 = -1;
uint8_t x139 = UINT8_MAX;
uint16_t x140 = UINT16_MAX;
volatile int32_t t30 = 8103;
uint8_t x153 = 5U;
static uint16_t x157 = 252U;
volatile int64_t x162 = -1LL;
int16_t x163 = -1;
static uint32_t x164 = UINT32_MAX;
uint32_t t38 = 193306U;
static uint32_t x174 = 106U;
int8_t x176 = INT8_MAX;
int64_t x186 = -38614LL;
uint8_t x191 = UINT8_MAX;
uint16_t x195 = UINT16_MAX;
uint16_t x204 = UINT16_MAX;
uint64_t x205 = 225428189040922837LLU;
volatile uint64_t x206 = UINT64_MAX;
int8_t x208 = -1;
uint32_t x217 = UINT32_MAX;
uint32_t x219 = 14864U;
uint32_t t48 = 6U;
int32_t x223 = INT32_MAX;
static uint32_t x229 = UINT32_MAX;
uint16_t x233 = 1U;
int8_t x234 = -1;
volatile uint64_t x238 = 102525405LLU;
uint32_t x243 = UINT32_MAX;
volatile int8_t x245 = INT8_MAX;
int64_t x248 = 253384LL;
volatile int64_t t55 = 5828LL;
int64_t x249 = -239LL;
static uint16_t x257 = 1U;
int16_t x262 = -772;
uint64_t x267 = 13390646LLU;
int32_t x275 = INT32_MAX;
static volatile int8_t x277 = INT8_MIN;
int32_t t64 = -63;
int32_t x302 = -399;
uint8_t x308 = 21U;
volatile int16_t x318 = INT16_MAX;
int16_t x325 = 0;
int64_t t77 = 7LL;
int8_t x348 = 5;
volatile int32_t t78 = -422053;
int16_t x351 = 3;
uint8_t x352 = 73U;
int8_t x354 = INT8_MAX;
volatile int8_t x355 = -1;
int16_t x364 = -1;
volatile int32_t t82 = -1778;
int64_t x366 = -2413078903LL;
int16_t x367 = INT16_MAX;
int8_t x370 = INT8_MIN;
volatile uint32_t t84 = 6618U;
volatile uint16_t x377 = UINT16_MAX;
int8_t x387 = INT8_MIN;
int16_t x388 = INT16_MIN;
static uint32_t x391 = 1355037U;
uint32_t t88 = 51246U;
int32_t t89 = 169;
volatile uint32_t t91 = 1950797U;
int32_t x415 = 675352;
int64_t x417 = INT64_MIN;
uint16_t x418 = UINT16_MAX;
uint8_t x423 = UINT8_MAX;
volatile int8_t x431 = 37;
int64_t x443 = INT64_MAX;
uint64_t x446 = 3038435524971671652LLU;
int32_t t99 = 361;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 33U;
	int64_t x3 = 1LL;
	int64_t x4 = 413494103747364029LL;
	volatile int64_t t0 = 127270648282104290LL;

	t0 = ((x1<x2)^(x3+x4));

	if (t0 != 413494103747364030LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 31U;
	static int16_t x6 = 1348;
	volatile uint8_t x7 = UINT8_MAX;
	int64_t x8 = -9825037848918741LL;
	static int64_t t1 = 669LL;

	t1 = ((x5<x6)^(x7+x8));

	if (t1 != -9825037848918485LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x10 = UINT8_MAX;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 34010LLU;

	t2 = ((x9<x10)^(x11+x12));

	if (t2 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 51U;
	uint32_t x14 = 465U;
	static volatile int64_t x15 = INT64_MIN;
	volatile int64_t x16 = 7214997864113LL;
	int64_t t3 = 1069877499673807LL;

	t3 = ((x13<x14)^(x15+x16));

	if (t3 != -9223364821856911696LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	uint8_t x18 = UINT8_MAX;
	static volatile int32_t t4 = -2273872;

	t4 = ((x17<x18)^(x19+x20));

	if (t4 != -13693) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = INT64_MAX;
	int64_t x23 = INT64_MAX;

	t5 = ((x21<x22)^(x23+x24));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 473855929878LL;
	uint16_t x27 = 18U;
	uint32_t x28 = UINT32_MAX;

	t6 = ((x25<x26)^(x27+x28));

	if (t6 != 17U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint32_t x30 = UINT32_MAX;
	uint64_t x31 = 77653817LLU;
	static int32_t x32 = INT32_MIN;
	volatile uint64_t t7 = 26792LLU;

	t7 = ((x29<x30)^(x31+x32));

	if (t7 != 18446744071639721784LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int16_t x39 = -5;
	volatile uint8_t x40 = 0U;
	int32_t t8 = 10948931;

	t8 = ((x37<x38)^(x39+x40));

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = INT32_MIN;
	static int16_t x42 = -6;
	int32_t x43 = 1;
	static uint16_t x44 = 0U;
	volatile int32_t t9 = -72055265;

	t9 = ((x41<x42)^(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -1;
	static uint8_t x51 = UINT8_MAX;
	uint32_t t10 = 92145048U;

	t10 = ((x49<x50)^(x51+x52));

	if (t10 != 254U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x58 = 61655U;
	int64_t x60 = INT64_MIN;
	volatile int64_t t11 = 2LL;

	t11 = ((x57<x58)^(x59+x60));

	if (t11 != -9223372036854774866LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x61 = 369804103U;
	uint64_t x62 = 0LLU;
	int16_t x63 = 3;
	volatile uint64_t t12 = 4371053299104299769LLU;

	t12 = ((x61<x62)^(x63+x64));

	if (t12 != 104146028945773LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	static int8_t x67 = INT8_MIN;
	uint8_t x68 = 6U;
	static int32_t t13 = -7363060;

	t13 = ((x65<x66)^(x67+x68));

	if (t13 != -122) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x69 = -1;
	volatile uint16_t x70 = UINT16_MAX;
	int8_t x71 = -2;
	uint16_t x72 = 0U;
	int32_t t14 = 309;

	t14 = ((x69<x70)^(x71+x72));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = 8;
	int16_t x74 = INT16_MIN;
	uint8_t x76 = UINT8_MAX;
	int32_t t15 = 1;

	t15 = ((x73<x74)^(x75+x76));

	if (t15 != -32513) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MIN;
	static int32_t x78 = INT32_MIN;
	uint32_t x79 = 98U;
	uint32_t x80 = 81193940U;

	t16 = ((x77<x78)^(x79+x80));

	if (t16 != 81194038U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x81 = -432;
	volatile int32_t t17 = -2266695;

	t17 = ((x81<x82)^(x83+x84));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x85 = -3;
	static uint8_t x87 = 4U;
	int32_t x88 = 7295600;
	int32_t t18 = -3;

	t18 = ((x85<x86)^(x87+x88));

	if (t18 != 7295605) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x89 = 7160;
	volatile int8_t x90 = -30;
	int16_t x91 = INT16_MIN;

	t19 = ((x89<x90)^(x91+x92));

	if (t19 != -32729) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MIN;
	int32_t x94 = -1;
	static uint16_t x95 = 1057U;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t20 = 533397744474366843LL;

	t20 = ((x93<x94)^(x95+x96));

	if (t20 != -9223372036854774752LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = 2318982LLU;
	int64_t x98 = -7666LL;
	int32_t x99 = 1133;
	int64_t x100 = -3039402308LL;

	t21 = ((x97<x98)^(x99+x100));

	if (t21 != -3039401176LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = -2;
	int64_t x103 = -1LL;
	uint32_t x104 = 475343662U;
	volatile int64_t t22 = -2172232642487LL;

	t22 = ((x101<x102)^(x103+x104));

	if (t22 != 475343660LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x105 = 1659U;
	volatile int64_t x106 = -1LL;
	volatile int8_t x107 = -1;
	static int64_t x108 = -8LL;
	volatile int64_t t23 = 49424618004245LL;

	t23 = ((x105<x106)^(x107+x108));

	if (t23 != -9LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = INT8_MIN;
	volatile uint64_t x110 = 14821341LLU;
	static int8_t x111 = INT8_MAX;
	int32_t x112 = -9;
	int32_t t24 = -10573;

	t24 = ((x109<x110)^(x111+x112));

	if (t24 != 118) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = -27;
	volatile int64_t x115 = -1LL;
	int64_t t25 = 209451728874810497LL;

	t25 = ((x113<x114)^(x115+x116));

	if (t25 != 72LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 1U;
	uint16_t x118 = 402U;
	int16_t x119 = INT16_MAX;
	static int32_t x120 = 47;
	int32_t t26 = 9439;

	t26 = ((x117<x118)^(x119+x120));

	if (t26 != 32815) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MAX;
	uint8_t x122 = 0U;
	uint64_t x123 = UINT64_MAX;
	volatile int32_t x124 = INT32_MIN;
	uint64_t t27 = 10977093287LLU;

	t27 = ((x121<x122)^(x123+x124));

	if (t27 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = -14;
	uint8_t x131 = UINT8_MAX;
	static int32_t x132 = INT32_MIN;

	t28 = ((x129<x130)^(x131+x132));

	if (t28 != -2147483394) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = 1814737917655187894LL;
	uint8_t x134 = 6U;
	int64_t x135 = -21599325128LL;
	int16_t x136 = 4;

	t29 = ((x133<x134)^(x135+x136));

	if (t29 != -21599325124LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x138 = 289U;

	t30 = ((x137<x138)^(x139+x140));

	if (t30 != 65791) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 2002616LLU;
	int16_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile int16_t x144 = INT16_MAX;
	int32_t t31 = -115765;

	t31 = ((x141<x142)^(x143+x144));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 93;
	volatile uint64_t x146 = 4323638239068009LLU;
	volatile int16_t x147 = 5975;
	int16_t x148 = INT16_MAX;
	static volatile int32_t t32 = 593209714;

	t32 = ((x145<x146)^(x147+x148));

	if (t32 != 38743) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int16_t x150 = -2;
	volatile int32_t x151 = -1;
	int32_t x152 = 41804194;
	int32_t t33 = -7242920;

	t33 = ((x149<x150)^(x151+x152));

	if (t33 != 41804193) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x154 = -1;
	int32_t x155 = INT32_MAX;
	static uint64_t x156 = 3480843191LLU;
	volatile uint64_t t34 = 167LLU;

	t34 = ((x153<x154)^(x155+x156));

	if (t34 != 5628326838LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x158 = 16232U;
	static uint16_t x159 = 161U;
	uint64_t x160 = 167716291381LLU;
	volatile uint64_t t35 = 6543341192LLU;

	t35 = ((x157<x158)^(x159+x160));

	if (t35 != 167716291543LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = UINT64_MAX;
	volatile uint32_t t36 = 4772108U;

	t36 = ((x161<x162)^(x163+x164));

	if (t36 != 4294967294U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x165 = 12351LLU;
	volatile int64_t x166 = -1LL;
	int32_t x167 = -168;
	uint64_t x168 = 18266887915347LLU;
	volatile uint64_t t37 = 59LLU;

	t37 = ((x165<x166)^(x167+x168));

	if (t37 != 18266887915178LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 8874U;
	uint32_t x171 = 774115U;
	int8_t x172 = INT8_MIN;

	t38 = ((x169<x170)^(x171+x172));

	if (t38 != 773987U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x173 = -1;
	volatile uint32_t x175 = 79U;
	volatile uint32_t t39 = 0U;

	t39 = ((x173<x174)^(x175+x176));

	if (t39 != 206U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -50;
	static int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	int64_t x180 = -4247262LL;
	int64_t t40 = 1628782699198529LL;

	t40 = ((x177<x178)^(x179+x180));

	if (t40 != -4247390LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x185 = 26U;
	volatile int16_t x187 = 2;
	int16_t x188 = -1;
	static int32_t t41 = -27422907;

	t41 = ((x185<x186)^(x187+x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	uint8_t x192 = 1U;
	volatile int32_t t42 = -85;

	t42 = ((x189<x190)^(x191+x192));

	if (t42 != 256) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x193 = 13380;
	uint64_t x194 = 4240155350808023LLU;
	int16_t x196 = INT16_MIN;
	static int32_t t43 = -808;

	t43 = ((x193<x194)^(x195+x196));

	if (t43 != 32766) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x197 = 394LL;
	uint8_t x198 = 1U;
	int64_t x199 = -469579814116211LL;
	int16_t x200 = 0;
	volatile int64_t t44 = -231796925327590787LL;

	t44 = ((x197<x198)^(x199+x200));

	if (t44 != -469579814116211LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = 7952U;
	static int8_t x202 = 0;
	volatile uint64_t x203 = UINT64_MAX;
	uint64_t t45 = 16342263716LLU;

	t45 = ((x201<x202)^(x203+x204));

	if (t45 != 65534LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x207 = INT16_MAX;
	int32_t t46 = -118581;

	t46 = ((x205<x206)^(x207+x208));

	if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 20180LLU;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MAX;
	static int32_t t47 = -6980;

	t47 = ((x209<x210)^(x211+x212));

	if (t47 != -32642) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x218 = -1;
	int32_t x220 = 74379002;

	t48 = ((x217<x218)^(x219+x220));

	if (t48 != 74393866U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -40538164505095LL;
	static int16_t x222 = 10915;
	volatile uint64_t x224 = 9LLU;
	volatile uint64_t t49 = 54LLU;

	t49 = ((x221<x222)^(x223+x224));

	if (t49 != 2147483657LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 11U;
	volatile uint8_t x226 = 108U;
	int64_t x227 = INT64_MIN;
	uint8_t x228 = 1U;
	volatile int64_t t50 = INT64_MIN;

	t50 = ((x225<x226)^(x227+x228));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x230 = -1LL;
	int16_t x231 = INT16_MAX;
	static int16_t x232 = 1;
	static volatile int32_t t51 = 172493;

	t51 = ((x229<x230)^(x231+x232));

	if (t51 != 32768) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x235 = 365994U;
	uint32_t x236 = 3U;
	volatile uint32_t t52 = 1672U;

	t52 = ((x233<x234)^(x235+x236));

	if (t52 != 365997U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x237 = -2;
	uint32_t x239 = 13002U;
	volatile int32_t x240 = INT32_MAX;
	uint32_t t53 = 0U;

	t53 = ((x237<x238)^(x239+x240));

	if (t53 != 2147496649U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = -110;
	int8_t x242 = -1;
	int16_t x244 = INT16_MIN;
	uint32_t t54 = 4262U;

	t54 = ((x241<x242)^(x243+x244));

	if (t54 != 4294934526U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x246 = INT64_MIN;
	uint16_t x247 = 39U;

	t55 = ((x245<x246)^(x247+x248));

	if (t55 != 253423LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x250 = 0U;
	static uint32_t x251 = UINT32_MAX;
	volatile uint8_t x252 = UINT8_MAX;
	volatile uint32_t t56 = 1U;

	t56 = ((x249<x250)^(x251+x252));

	if (t56 != 255U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = 497U;
	uint64_t x254 = 37003135998LLU;
	int16_t x255 = 254;
	int16_t x256 = -1;
	volatile int32_t t57 = 56165860;

	t57 = ((x253<x254)^(x255+x256));

	if (t57 != 252) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x258 = INT16_MIN;
	static volatile uint8_t x259 = 0U;
	int64_t x260 = -3184370465661555LL;
	volatile int64_t t58 = -1749816291550LL;

	t58 = ((x257<x258)^(x259+x260));

	if (t58 != -3184370465661555LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x261 = INT64_MIN;
	volatile int64_t x263 = -12476991199LL;
	uint16_t x264 = 22344U;
	static int64_t t59 = 15827338LL;

	t59 = ((x261<x262)^(x263+x264));

	if (t59 != -12476968856LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 108U;
	volatile int16_t x266 = 0;
	volatile uint32_t x268 = UINT32_MAX;
	uint64_t t60 = 21370LLU;

	t60 = ((x265<x266)^(x267+x268));

	if (t60 != 4308357941LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x269 = 238404378LL;
	int64_t x270 = 570LL;
	uint32_t x271 = 21965747U;
	static int32_t x272 = INT32_MIN;
	volatile uint32_t t61 = 515666U;

	t61 = ((x269<x270)^(x271+x272));

	if (t61 != 2169449395U) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = -1;
	int8_t x274 = 0;
	volatile int32_t x276 = -1;
	volatile int32_t t62 = INT32_MAX;

	t62 = ((x273<x274)^(x275+x276));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x278 = 2157;
	volatile int64_t x279 = -361245663LL;
	uint64_t x280 = 200807LLU;
	volatile uint64_t t63 = 60196344LLU;

	t63 = ((x277<x278)^(x279+x280));

	if (t63 != 18446744073348506761LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x281 = UINT16_MAX;
	volatile uint16_t x282 = 21179U;
	static uint16_t x283 = 5099U;
	uint8_t x284 = 82U;

	t64 = ((x281<x282)^(x283+x284));

	if (t64 != 5181) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = -726368105879748LL;
	int32_t x286 = 102732;
	int16_t x287 = 101;
	uint16_t x288 = UINT16_MAX;
	volatile int32_t t65 = -535897748;

	t65 = ((x285<x286)^(x287+x288));

	if (t65 != 65637) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = 86832537LL;
	int8_t x294 = INT8_MAX;
	static int8_t x295 = -1;
	int16_t x296 = -1;
	static int32_t t66 = -7075;

	t66 = ((x293<x294)^(x295+x296));

	if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = -4724300LL;
	int8_t x298 = -1;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;
	volatile uint32_t t67 = 775633U;

	t67 = ((x297<x298)^(x299+x300));

	if (t67 != 4294967166U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = -1;
	int32_t x303 = INT32_MAX;
	static volatile uint32_t x304 = 402538525U;
	volatile uint32_t t68 = 101295241U;

	t68 = ((x301<x302)^(x303+x304));

	if (t68 != 2550022172U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = 3400;
	int32_t x306 = -238917120;
	static volatile int8_t x307 = INT8_MIN;
	static volatile int32_t t69 = 488742499;

	t69 = ((x305<x306)^(x307+x308));

	if (t69 != -107) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x309 = 1;
	int32_t x310 = 27573231;
	uint64_t x311 = 30LLU;
	int64_t x312 = -65025615680585LL;
	volatile uint64_t t70 = 16913701LLU;

	t70 = ((x309<x310)^(x311+x312));

	if (t70 != 18446679048093871060LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = -2;
	volatile uint32_t x314 = UINT32_MAX;
	static volatile uint8_t x315 = UINT8_MAX;
	uint32_t x316 = 22824012U;
	uint32_t t71 = 22701U;

	t71 = ((x313<x314)^(x315+x316));

	if (t71 != 22824266U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x319 = -1;
	uint16_t x320 = 31U;
	volatile int32_t t72 = 832349779;

	t72 = ((x317<x318)^(x319+x320));

	if (t72 != 31) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x321 = UINT64_MAX;
	volatile int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	int16_t x324 = -1;
	static int32_t t73 = -971202;

	t73 = ((x321<x322)^(x323+x324));

	if (t73 != 126) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x326 = 65283120U;
	static uint16_t x327 = 6895U;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t74 = -14;

	t74 = ((x325<x326)^(x327+x328));

	if (t74 != 6766) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 48227436LLU;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = 0U;
	int32_t x336 = INT32_MIN;
	volatile int32_t t75 = 40;

	t75 = ((x333<x334)^(x335+x336));

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x338 = INT32_MIN;
	int16_t x339 = 2;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t76 = 3363701685169LLU;

	t76 = ((x337<x338)^(x339+x340));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = UINT64_MAX;
	uint16_t x343 = 770U;
	volatile int64_t x344 = 1304541LL;

	t77 = ((x341<x342)^(x343+x344));

	if (t77 != 1305310LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 1;
	volatile int64_t x346 = -21659296610611473LL;
	int8_t x347 = INT8_MIN;

	t78 = ((x345<x346)^(x347+x348));

	if (t78 != -123) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = -1;
	volatile int32_t x350 = INT32_MIN;
	int32_t t79 = 18801971;

	t79 = ((x349<x350)^(x351+x352));

	if (t79 != 76) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = 529325284898789437LL;
	uint32_t x356 = UINT32_MAX;
	static uint32_t t80 = 201629U;

	t80 = ((x353<x354)^(x355+x356));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 885122LLU;
	volatile int16_t x358 = 27;
	volatile int32_t x359 = INT32_MAX;
	uint64_t x360 = UINT64_MAX;
	uint64_t t81 = 904LLU;

	t81 = ((x357<x358)^(x359+x360));

	if (t81 != 2147483646LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MAX;

	t82 = ((x361<x362)^(x363+x364));

	if (t82 != 126) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = 18;
	volatile int64_t x368 = 2595049988LL;
	static int64_t t83 = -642681417124864779LL;

	t83 = ((x365<x366)^(x367+x368));

	if (t83 != 2595082755LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x369 = UINT64_MAX;
	uint8_t x371 = 1U;
	uint32_t x372 = 105792369U;

	t84 = ((x369<x370)^(x371+x372));

	if (t84 != 105792370U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x378 = -1;
	uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MIN;
	uint64_t t85 = 8143387LLU;

	t85 = ((x377<x378)^(x379+x380));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = 1;
	uint32_t x382 = 470U;
	int32_t x383 = INT32_MIN;
	uint64_t x384 = 2LLU;
	uint64_t t86 = 821LLU;

	t86 = ((x381<x382)^(x383+x384));

	if (t86 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 1U;
	int8_t x386 = 0;
	static volatile int32_t t87 = -162314;

	t87 = ((x385<x386)^(x387+x388));

	if (t87 != -32896) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x389 = INT8_MIN;
	uint64_t x390 = 6396270857349LLU;
	int16_t x392 = -4847;

	t88 = ((x389<x390)^(x391+x392));

	if (t88 != 1350190U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 28138U;
	int32_t x395 = -1;
	int8_t x396 = 0;

	t89 = ((x393<x394)^(x395+x396));

	if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = INT8_MIN;
	static volatile int32_t x402 = -805;
	uint64_t x403 = 1793888961891324868LLU;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t90 = 132126146352470LLU;

	t90 = ((x401<x402)^(x403+x404));

	if (t90 != 1793888961891324867LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x405 = INT32_MAX;
	volatile uint8_t x406 = 0U;
	static uint32_t x407 = 30758694U;
	int32_t x408 = INT32_MIN;

	t91 = ((x405<x406)^(x407+x408));

	if (t91 != 2178242342U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = -1;
	int16_t x410 = INT16_MIN;
	int16_t x411 = 16171;
	uint16_t x412 = 22U;
	static volatile int32_t t92 = 1;

	t92 = ((x409<x410)^(x411+x412));

	if (t92 != 16193) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x413 = INT32_MAX;
	static int64_t x414 = 3628000613LL;
	uint8_t x416 = 27U;
	volatile int32_t t93 = 23460;

	t93 = ((x413<x414)^(x415+x416));

	if (t93 != 675378) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x419 = INT32_MIN;
	static uint16_t x420 = UINT16_MAX;
	volatile int32_t t94 = -138896;

	t94 = ((x417<x418)^(x419+x420));

	if (t94 != -2147418114) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x421 = 7U;
	static volatile int16_t x422 = INT16_MAX;
	volatile uint8_t x424 = 4U;
	int32_t t95 = 43449;

	t95 = ((x421<x422)^(x423+x424));

	if (t95 != 258) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x429 = INT32_MIN;
	static int32_t x430 = INT32_MIN;
	static uint16_t x432 = 1U;
	volatile int32_t t96 = 21;

	t96 = ((x429<x430)^(x431+x432));

	if (t96 != 38) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = -1;
	uint16_t x434 = 28817U;
	uint64_t x435 = 2034585924597867925LLU;
	static int32_t x436 = -1;
	volatile uint64_t t97 = 2751341787LLU;

	t97 = ((x433<x434)^(x435+x436));

	if (t97 != 2034585924597867925LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x441 = INT64_MIN;
	int8_t x442 = 1;
	int32_t x444 = INT32_MIN;
	int64_t t98 = -80769890161652LL;

	t98 = ((x441<x442)^(x443+x444));

	if (t98 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 34U;
	int16_t x447 = INT16_MAX;
	int16_t x448 = INT16_MIN;

	t99 = ((x445<x446)^(x447+x448));

	if (t99 != -2) { NG(); } else { ; }
	
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

