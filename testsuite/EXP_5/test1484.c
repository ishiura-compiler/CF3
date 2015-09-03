#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x7 = UINT32_MAX;
int8_t x9 = INT8_MAX;
static int64_t x10 = INT64_MAX;
static int8_t x14 = INT8_MIN;
volatile int32_t x16 = 320290;
uint32_t x19 = 35413792U;
int64_t x25 = 308548215852488837LL;
volatile int32_t t8 = 153286;
int16_t x42 = 1;
int8_t x49 = INT8_MIN;
static uint64_t x54 = UINT64_MAX;
volatile int32_t x58 = -3;
int16_t x60 = INT16_MIN;
uint64_t x61 = 5572178LLU;
int32_t x66 = -1;
uint64_t x71 = 3787890410198562303LLU;
uint32_t x72 = 209665U;
static uint8_t x80 = 2U;
uint16_t x94 = 7U;
int32_t x96 = 153796;
volatile int64_t t25 = INT64_MIN;
uint32_t x109 = 225U;
static uint32_t x110 = 12941926U;
volatile int64_t x116 = INT64_MAX;
uint8_t x119 = 60U;
int32_t x121 = INT32_MIN;
static int32_t x123 = INT32_MIN;
int64_t x128 = INT64_MIN;
uint32_t x130 = 1613311197U;
volatile int32_t t31 = -366467;
volatile uint64_t t32 = UINT64_MAX;
static volatile int64_t x139 = 11880612736053LL;
volatile int8_t x141 = INT8_MAX;
uint64_t x142 = 67739331376105LLU;
uint64_t x145 = 391992LLU;
uint16_t x147 = 7U;
int64_t x151 = INT64_MAX;
static volatile int8_t x158 = -1;
static uint8_t x164 = 4U;
static int32_t t39 = 208;
int16_t x165 = -7490;
int64_t x167 = INT64_MAX;
int64_t x168 = INT64_MAX;
int32_t x169 = INT32_MIN;
int64_t x170 = INT64_MAX;
static volatile int32_t t41 = INT32_MIN;
volatile uint32_t t42 = 3365U;
int64_t x184 = INT64_MIN;
uint16_t x188 = UINT16_MAX;
volatile uint32_t t45 = 1905853U;
int16_t x192 = -1;
volatile uint16_t x200 = UINT16_MAX;
int16_t x201 = 7965;
volatile uint8_t x202 = UINT8_MAX;
static volatile int32_t x204 = INT32_MIN;
uint16_t x205 = 63U;
int32_t t50 = -357583;
volatile int32_t x219 = -1;
int16_t x222 = INT16_MAX;
volatile int32_t t54 = 2920;
uint16_t x225 = 0U;
volatile uint64_t x227 = 25513135481LLU;
int32_t t55 = 2;
volatile int8_t x229 = -1;
volatile int16_t x234 = INT16_MIN;
int32_t x235 = 19462;
volatile int16_t x237 = 438;
int8_t x238 = -1;
int32_t x239 = INT32_MIN;
volatile int8_t x241 = INT8_MAX;
static volatile int32_t x242 = INT32_MIN;
int8_t x243 = 0;
uint8_t x249 = 0U;
uint8_t x258 = UINT8_MAX;
static uint32_t x261 = 4668691U;
int16_t x266 = -140;
int64_t x270 = -203381166099667LL;
uint32_t x273 = 6340U;
uint64_t x282 = 57492LLU;
int32_t x283 = INT32_MAX;
volatile int32_t t70 = 128372842;
uint64_t x289 = 966329LLU;
int32_t x291 = -1;
uint64_t t71 = 1795319200LLU;
int32_t x296 = 31220267;
uint64_t t72 = 272641019472LLU;
int32_t x297 = -1;
static int8_t x300 = INT8_MIN;
int32_t t73 = -112496;
int64_t x302 = 328884970LL;
volatile int32_t t75 = -373011;
int8_t x315 = -1;
int8_t x325 = INT8_MIN;
int8_t x326 = INT8_MIN;
int64_t x327 = -280715197330774LL;
int64_t x331 = INT64_MIN;
uint8_t x335 = 38U;
uint64_t t83 = 2972LLU;
int64_t x341 = -1LL;
uint32_t t85 = 1444933273U;
int32_t x350 = -1;
uint32_t x354 = 0U;
static int64_t t88 = 1996342613LL;
uint16_t x361 = 92U;
int8_t x366 = INT8_MIN;
int64_t x370 = INT64_MIN;
int64_t t92 = -34259604563LL;
int8_t x383 = -1;
int64_t x392 = -636308411004004933LL;
volatile uint8_t x399 = 6U;
int32_t t98 = INT32_MIN;
int16_t x404 = INT16_MAX;


void f0(void) {
	volatile int8_t x1 = -1;
	uint64_t x2 = 243LLU;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = 4110U;
	volatile int32_t t0 = -23086618;

	t0 = (x1-((x2<x3)&x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 65852843;
	volatile uint16_t x6 = 14U;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 311748710606271LL;

	t1 = (x5-((x6<x7)&x8));

	if (t1 != 65852843LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x11 = INT64_MIN;
	static int16_t x12 = -1;
	volatile int32_t t2 = -612;

	t2 = (x9-((x10<x11)&x12));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile uint8_t x15 = 1U;
	volatile int32_t t3 = -686;

	t3 = (x13-((x14<x15)&x16));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	volatile int16_t x18 = -52;
	int8_t x20 = INT8_MAX;
	volatile int64_t t4 = 494075590347LL;

	t4 = (x17-((x18<x19)&x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	uint64_t x22 = UINT64_MAX;
	uint8_t x23 = UINT8_MAX;
	int64_t x24 = INT64_MAX;
	int64_t t5 = -63350LL;

	t5 = (x21-((x22<x23)&x24));

	if (t5 != 2147483647LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MAX;
	int64_t x27 = INT64_MIN;
	int8_t x28 = -14;
	volatile int64_t t6 = -136792523132LL;

	t6 = (x25-((x26<x27)&x28));

	if (t6 != 308548215852488837LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -1LL;
	uint64_t x30 = UINT64_MAX;
	int32_t x31 = INT32_MIN;
	static volatile int16_t x32 = INT16_MAX;
	int64_t t7 = 3802139462307509LL;

	t7 = (x29-((x30<x31)&x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = 20U;
	int8_t x36 = INT8_MIN;

	t8 = (x33-((x34<x35)&x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 196451609850521LLU;
	static int32_t x38 = -460;
	volatile int64_t x39 = INT64_MIN;
	int64_t x40 = 238768LL;
	uint64_t t9 = 1804545547836692LLU;

	t9 = (x37-((x38<x39)&x40));

	if (t9 != 196451609850521LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	int64_t t10 = -4350LL;

	t10 = (x41-((x42<x43)&x44));

	if (t10 != -32768LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MAX;
	int8_t x46 = INT8_MIN;
	volatile int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	volatile int32_t t11 = -3888973;

	t11 = (x45-((x46<x47)&x48));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 3U;
	int32_t x51 = 172868;
	int8_t x52 = -1;
	volatile int32_t t12 = 53382;

	t12 = (x49-((x50<x51)&x52));

	if (t12 != -129) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 12931U;
	int16_t x55 = -9495;
	volatile int32_t x56 = 1230418;
	int32_t t13 = -2803;

	t13 = (x53-((x54<x55)&x56));

	if (t13 != 12931) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	uint32_t x59 = 12344U;
	int64_t t14 = -225646443402LL;

	t14 = (x57-((x58<x59)&x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = 16;
	uint64_t t15 = 18983LLU;

	t15 = (x61-((x62<x63)&x64));

	if (t15 != 5572178LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3991U;
	uint8_t x67 = 24U;
	static int8_t x68 = INT8_MIN;
	int32_t t16 = 128417454;

	t16 = (x65-((x66<x67)&x68));

	if (t16 != 3991) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -681795031358566LL;
	static volatile int32_t x70 = 98634295;
	int64_t t17 = -7439862987702LL;

	t17 = (x69-((x70<x71)&x72));

	if (t17 != -681795031358567LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 23U;
	int8_t x74 = 10;
	static volatile uint64_t x75 = UINT64_MAX;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = -40637230756356135LL;

	t18 = (x73-((x74<x75)&x76));

	if (t18 != 23LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 437317016696424899LLU;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 14225U;
	volatile uint64_t t19 = 482397LLU;

	t19 = (x77-((x78<x79)&x80));

	if (t19 != 437317016696424899LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x81 = INT16_MIN;
	int64_t x82 = INT64_MAX;
	int32_t x83 = INT32_MAX;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = -100020393;

	t20 = (x81-((x82<x83)&x84));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	int64_t x86 = INT64_MIN;
	static uint16_t x87 = 4484U;
	int32_t x88 = 53446;
	static volatile int32_t t21 = -173552;

	t21 = (x85-((x86<x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 261106496334161304LLU;
	volatile uint64_t t22 = 8499176087LLU;

	t22 = (x89-((x90<x91)&x92));

	if (t22 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	uint64_t x95 = 115754LLU;
	int32_t t23 = 2035253;

	t23 = (x93-((x94<x95)&x96));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 97U;
	int16_t x98 = -1;
	int8_t x99 = INT8_MAX;
	uint16_t x100 = 174U;
	volatile int32_t t24 = -376844;

	t24 = (x97-((x98<x99)&x100));

	if (t24 != 97) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = INT64_MIN;
	uint16_t x106 = 5U;
	volatile uint16_t x107 = 4U;
	volatile int16_t x108 = INT16_MIN;

	t25 = (x105-((x106<x107)&x108));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x111 = 10544;
	static volatile int8_t x112 = -1;
	uint32_t t26 = 26930U;

	t26 = (x109-((x110<x111)&x112));

	if (t26 != 225U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -1LL;
	int64_t x114 = -3038962534LL;
	int8_t x115 = INT8_MAX;
	volatile int64_t t27 = 83LL;

	t27 = (x113-((x114<x115)&x116));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	int64_t x118 = -786995019LL;
	volatile int16_t x120 = 2385;
	int32_t t28 = 1523;

	t28 = (x117-((x118<x119)&x120));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x122 = 483190943LLU;
	uint8_t x124 = 20U;
	static volatile int32_t t29 = INT32_MIN;

	t29 = (x121-((x122<x123)&x124));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	int32_t x126 = -1;
	int64_t x127 = INT64_MAX;
	int64_t t30 = INT64_MAX;

	t30 = (x125-((x126<x127)&x128));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x129 = 2U;
	int8_t x131 = 0;
	int16_t x132 = -1;

	t31 = (x129-((x130<x131)&x132));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = -1LL;
	int64_t x134 = INT64_MIN;
	uint64_t x135 = UINT64_MAX;
	uint64_t x136 = 172869128LLU;

	t32 = (x133-((x134<x135)&x136));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = 1175808456698849982LL;
	int8_t x138 = -1;
	int64_t x140 = 32903191634LL;
	volatile int64_t t33 = 390331818974501LL;

	t33 = (x137-((x138<x139)&x140));

	if (t33 != 1175808456698849982LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x143 = 56869U;
	static int32_t x144 = -1;
	int32_t t34 = -496372;

	t34 = (x141-((x142<x143)&x144));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x146 = INT64_MIN;
	int16_t x148 = -11789;
	uint64_t t35 = 8LLU;

	t35 = (x145-((x146<x147)&x148));

	if (t35 != 391991LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = -31;
	uint16_t x150 = 4U;
	uint8_t x152 = UINT8_MAX;
	int32_t t36 = 41;

	t36 = (x149-((x150<x151)&x152));

	if (t36 != -32) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 5U;
	volatile uint8_t x154 = 8U;
	int64_t x155 = -1LL;
	int64_t x156 = INT64_MIN;
	static int64_t t37 = 779162329274487LL;

	t37 = (x153-((x154<x155)&x156));

	if (t37 != 5LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t38 = 0;

	t38 = (x157-((x158<x159)&x160));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = UINT8_MAX;
	uint64_t x162 = 5468LLU;
	uint16_t x163 = 0U;

	t39 = (x161-((x162<x163)&x164));

	if (t39 != 255) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MAX;
	volatile int64_t t40 = -2391660752413LL;

	t40 = (x165-((x166<x167)&x168));

	if (t40 != -7490LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x171 = INT8_MAX;
	int32_t x172 = -2;

	t41 = (x169-((x170<x171)&x172));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint16_t x175 = UINT16_MAX;
	volatile uint32_t x176 = UINT32_MAX;

	t42 = (x173-((x174<x175)&x176));

	if (t42 != 4294967167U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = UINT16_MAX;
	uint16_t x178 = 1167U;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	volatile int64_t t43 = -72650360535028743LL;

	t43 = (x177-((x178<x179)&x180));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x181 = INT8_MIN;
	int32_t x182 = 65;
	uint32_t x183 = 466587U;
	int64_t t44 = 107086343LL;

	t44 = (x181-((x182<x183)&x184));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint32_t x185 = UINT32_MAX;
	static int32_t x186 = -7;
	uint8_t x187 = 99U;

	t45 = (x185-((x186<x187)&x188));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x189 = 21U;
	static uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = INT8_MIN;
	uint32_t t46 = 2170U;

	t46 = (x189-((x190<x191)&x192));

	if (t46 != 21U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x193 = INT16_MIN;
	static int64_t x194 = 22247758796LL;
	uint64_t x195 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile uint32_t t47 = 397U;

	t47 = (x193-((x194<x195)&x196));

	if (t47 != 4294934527U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = 295;
	int8_t x198 = -1;
	volatile int8_t x199 = INT8_MIN;
	volatile int32_t t48 = 12;

	t48 = (x197-((x198<x199)&x200));

	if (t48 != 295) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x203 = INT8_MIN;
	int32_t t49 = 7506517;

	t49 = (x201-((x202<x203)&x204));

	if (t49 != 7965) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = -1;
	int16_t x207 = INT16_MIN;
	volatile int32_t x208 = INT32_MIN;

	t50 = (x205-((x206<x207)&x208));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -26309;
	int32_t x212 = 1;
	static volatile int32_t t51 = 2512638;

	t51 = (x209-((x210<x211)&x212));

	if (t51 != 126) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x213 = 28253U;
	static volatile int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MAX;
	static int32_t x216 = -1;
	int32_t t52 = -36690501;

	t52 = (x213-((x214<x215)&x216));

	if (t52 != 28253) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x217 = 12U;
	int64_t x218 = INT64_MIN;
	int64_t x220 = INT64_MAX;
	int64_t t53 = 7186666835476799LL;

	t53 = (x217-((x218<x219)&x220));

	if (t53 != 11LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = INT16_MAX;
	volatile int32_t x223 = INT32_MIN;
	int16_t x224 = -886;

	t54 = (x221-((x222<x223)&x224));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x226 = -1;
	int16_t x228 = -585;

	t55 = (x225-((x226<x227)&x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = -6;
	static int64_t x231 = INT64_MIN;
	int32_t x232 = INT32_MAX;
	int32_t t56 = -284454804;

	t56 = (x229-((x230<x231)&x232));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x233 = 15806069LLU;
	static uint64_t x236 = 575782700037390887LLU;
	volatile uint64_t t57 = 3875LLU;

	t57 = (x233-((x234<x235)&x236));

	if (t57 != 15806068LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x240 = INT8_MAX;
	static int32_t t58 = -12094654;

	t58 = (x237-((x238<x239)&x240));

	if (t58 != 438) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x244 = INT64_MAX;
	volatile int64_t t59 = -129825524444615828LL;

	t59 = (x241-((x242<x243)&x244));

	if (t59 != 126LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x245 = -30;
	int64_t x246 = INT64_MAX;
	static int8_t x247 = INT8_MIN;
	uint32_t x248 = UINT32_MAX;
	volatile uint32_t t60 = 2599U;

	t60 = (x245-((x246<x247)&x248));

	if (t60 != 4294967266U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = 3U;
	volatile int8_t x251 = -7;
	int64_t x252 = INT64_MAX;
	int64_t t61 = 6851844229644LL;

	t61 = (x249-((x250<x251)&x252));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = -396359739817LL;
	volatile uint64_t x254 = UINT64_MAX;
	volatile uint8_t x255 = 3U;
	volatile int32_t x256 = INT32_MIN;
	static int64_t t62 = 17020814LL;

	t62 = (x253-((x254<x255)&x256));

	if (t62 != -396359739817LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 14738LLU;
	uint8_t x259 = UINT8_MAX;
	int16_t x260 = -1;
	volatile uint64_t t63 = 495124969LLU;

	t63 = (x257-((x258<x259)&x260));

	if (t63 != 14738LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x262 = 7970U;
	uint16_t x263 = 1599U;
	uint32_t x264 = 24460563U;
	uint32_t t64 = 152482962U;

	t64 = (x261-((x262<x263)&x264));

	if (t64 != 4668691U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x265 = 0U;
	uint8_t x267 = UINT8_MAX;
	int16_t x268 = INT16_MIN;
	static int32_t t65 = 135;

	t65 = (x265-((x266<x267)&x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x269 = UINT8_MAX;
	static int32_t x271 = INT32_MIN;
	static volatile int32_t x272 = 197053920;
	static volatile int32_t t66 = -7;

	t66 = (x269-((x270<x271)&x272));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x274 = -1;
	static uint8_t x275 = 68U;
	uint8_t x276 = 76U;
	volatile uint32_t t67 = 47334U;

	t67 = (x273-((x274<x275)&x276));

	if (t67 != 6340U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = INT8_MIN;
	int64_t x278 = 11433812290493LL;
	volatile uint32_t x279 = 448890221U;
	uint16_t x280 = 15750U;
	static int32_t t68 = 241062;

	t68 = (x277-((x278<x279)&x280));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = -1;
	int64_t x284 = 46001165930287683LL;
	static volatile int64_t t69 = 14LL;

	t69 = (x281-((x282<x283)&x284));

	if (t69 != -2LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = 0;
	int8_t x286 = INT8_MAX;
	volatile int8_t x287 = -22;
	uint16_t x288 = 11889U;

	t70 = (x285-((x286<x287)&x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x290 = 3;
	uint32_t x292 = UINT32_MAX;

	t71 = (x289-((x290<x291)&x292));

	if (t71 != 966329LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 603421043LLU;
	int64_t x294 = 1730381089059030LL;
	volatile int32_t x295 = -41;

	t72 = (x293-((x294<x295)&x296));

	if (t72 != 603421043LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x298 = INT32_MIN;
	int8_t x299 = INT8_MIN;

	t73 = (x297-((x298<x299)&x300));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x301 = -1;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = INT64_MIN;
	static int64_t t74 = 12323668LL;

	t74 = (x301-((x302<x303)&x304));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x305 = INT16_MAX;
	volatile int64_t x306 = -1LL;
	int16_t x307 = 31;
	int16_t x308 = INT16_MIN;

	t75 = (x305-((x306<x307)&x308));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x309 = INT16_MIN;
	static uint32_t x310 = 105U;
	uint64_t x311 = 1259641LLU;
	volatile uint16_t x312 = 320U;
	volatile int32_t t76 = -236;

	t76 = (x309-((x310<x311)&x312));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -129398;
	int32_t x314 = -1;
	static int8_t x316 = -1;
	volatile int32_t t77 = 14978581;

	t77 = (x313-((x314<x315)&x316));

	if (t77 != -129398) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MAX;
	int32_t x318 = 115058;
	volatile int8_t x319 = 1;
	static int8_t x320 = -1;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x317-((x318<x319)&x320));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -1;
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = -23;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t79 = -6856;

	t79 = (x321-((x322<x323)&x324));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x328 = -1;
	int32_t t80 = -86;

	t80 = (x325-((x326<x327)&x328));

	if (t80 != -128) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = -1;
	static int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	int32_t t81 = 129919;

	t81 = (x329-((x330<x331)&x332));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x333 = 8591U;
	int64_t x334 = -88LL;
	int32_t x336 = -2811150;
	int32_t t82 = -500931;

	t82 = (x333-((x334<x335)&x336));

	if (t82 != 8591) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x337 = 195U;
	int8_t x338 = 1;
	volatile uint16_t x339 = UINT16_MAX;
	uint64_t x340 = 2016540784663086239LLU;

	t83 = (x337-((x338<x339)&x340));

	if (t83 != 194LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = INT32_MIN;
	int16_t x343 = -14422;
	int64_t x344 = -1LL;
	int64_t t84 = -20638LL;

	t84 = (x341-((x342<x343)&x344));

	if (t84 != -2LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 87706U;
	static int16_t x346 = 88;
	static int64_t x347 = INT64_MAX;
	uint8_t x348 = 83U;

	t85 = (x345-((x346<x347)&x348));

	if (t85 != 87705U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x349 = UINT64_MAX;
	static int64_t x351 = -1LL;
	static int64_t x352 = -363261110LL;
	uint64_t t86 = UINT64_MAX;

	t86 = (x349-((x350<x351)&x352));

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = INT8_MAX;
	int32_t x355 = -1;
	volatile uint8_t x356 = 2U;
	int32_t t87 = -5;

	t87 = (x353-((x354<x355)&x356));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = 1201U;
	int64_t x360 = INT64_MAX;

	t88 = (x357-((x358<x359)&x360));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x362 = 33U;
	volatile uint64_t x363 = 901375206614LLU;
	volatile int64_t x364 = INT64_MAX;
	int64_t t89 = 176621343LL;

	t89 = (x361-((x362<x363)&x364));

	if (t89 != 91LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = -13209003;
	uint32_t x367 = 3U;
	volatile uint8_t x368 = 12U;
	int32_t t90 = 8003;

	t90 = (x365-((x366<x367)&x368));

	if (t90 != -13209003) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x369 = -2;
	int32_t x371 = 3257;
	uint32_t x372 = 4U;
	uint32_t t91 = 3129U;

	t91 = (x369-((x370<x371)&x372));

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = 38;
	int32_t x374 = INT32_MIN;
	int8_t x375 = -62;
	static int64_t x376 = -377203LL;

	t92 = (x373-((x374<x375)&x376));

	if (t92 != 37LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x377 = -1;
	uint16_t x378 = 1878U;
	volatile uint8_t x379 = 2U;
	uint64_t x380 = 193532LLU;
	volatile uint64_t t93 = UINT64_MAX;

	t93 = (x377-((x378<x379)&x380));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 49U;
	static volatile int64_t x382 = INT64_MIN;
	volatile int16_t x384 = INT16_MAX;
	uint32_t t94 = 389U;

	t94 = (x381-((x382<x383)&x384));

	if (t94 != 48U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x385 = -1;
	int16_t x386 = INT16_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	int32_t x388 = -1;
	int32_t t95 = -12962301;

	t95 = (x385-((x386<x387)&x388));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = INT32_MIN;
	uint32_t x390 = 97973U;
	uint64_t x391 = 2139126LLU;
	volatile int64_t t96 = -54LL;

	t96 = (x389-((x390<x391)&x392));

	if (t96 != -2147483649LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = 4233;
	int64_t x394 = INT64_MAX;
	static uint16_t x395 = 1304U;
	int8_t x396 = INT8_MIN;
	static int32_t t97 = -3672658;

	t97 = (x393-((x394<x395)&x396));

	if (t97 != 4233) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x397 = INT32_MIN;
	static int32_t x398 = INT32_MIN;
	volatile int8_t x400 = -2;

	t98 = (x397-((x398<x399)&x400));

	if (t98 != INT32_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	static int16_t x402 = -55;
	static volatile int32_t x403 = INT32_MIN;
	int64_t t99 = INT64_MIN;

	t99 = (x401-((x402<x403)&x404));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

