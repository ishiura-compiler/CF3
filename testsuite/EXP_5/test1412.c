#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = 2U;
volatile int32_t t3 = -3765204;
uint8_t x20 = 1U;
volatile uint16_t x25 = 121U;
int32_t t6 = -410125;
static uint64_t x43 = 57285544368LLU;
volatile int16_t x46 = INT16_MIN;
uint16_t x50 = UINT16_MAX;
uint32_t x55 = 116U;
int32_t x57 = -37;
uint16_t x59 = UINT16_MAX;
int16_t x63 = INT16_MIN;
int32_t x74 = 954150;
static int32_t x76 = INT32_MAX;
uint64_t x83 = 1287690490437379LLU;
volatile int32_t t21 = -57957;
int64_t x95 = -1LL;
static uint32_t x96 = 12513U;
uint8_t x104 = UINT8_MAX;
int32_t t26 = -13355;
static volatile int32_t x109 = INT32_MIN;
static int16_t x119 = INT16_MIN;
volatile uint16_t x126 = 911U;
volatile uint16_t x135 = 20U;
static int32_t x136 = 269;
int16_t x143 = INT16_MAX;
int32_t x144 = INT32_MIN;
int32_t t35 = -701409714;
volatile int16_t x163 = 21;
volatile int16_t x167 = INT16_MAX;
int64_t x168 = INT64_MIN;
int32_t t40 = -256196;
int32_t t42 = 62891;
int16_t x180 = 5726;
int32_t x183 = -1;
static int8_t x184 = INT8_MIN;
static int32_t t44 = -251526;
volatile uint16_t x185 = UINT16_MAX;
volatile int32_t t45 = -20698124;
uint8_t x191 = UINT8_MAX;
uint16_t x193 = UINT16_MAX;
int8_t x201 = INT8_MAX;
uint64_t x202 = 1762805181279394LLU;
static uint8_t x204 = UINT8_MAX;
volatile int32_t t49 = 2779562;
int16_t x208 = -15;
int64_t x213 = 2016143LL;
int64_t x222 = -6LL;
uint16_t x224 = 938U;
volatile int32_t t54 = -19789838;
static int64_t x232 = -4701926691669934LL;
volatile int8_t x238 = INT8_MIN;
int8_t x242 = 21;
uint16_t x247 = 6U;
int8_t x249 = -1;
volatile uint16_t x252 = 20028U;
volatile int16_t x255 = INT16_MIN;
volatile int32_t t63 = 28;
uint8_t x261 = 58U;
uint16_t x265 = UINT16_MAX;
int8_t x268 = -1;
int32_t x273 = -1;
int8_t x274 = -1;
static uint64_t x277 = 98LLU;
int8_t x282 = INT8_MIN;
int32_t t69 = 396162;
static uint64_t x287 = 52158LLU;
int16_t x296 = INT16_MIN;
int16_t x305 = -1;
int64_t x310 = -4255186572219889LL;
static int32_t x322 = 501356225;
uint8_t x324 = 1U;
int8_t x332 = 1;
int32_t x334 = INT32_MIN;
int16_t x336 = INT16_MIN;
int64_t x341 = -1LL;
int32_t t86 = 23170504;
uint16_t x355 = 47U;
volatile int32_t t87 = -6623462;
uint64_t x361 = UINT64_MAX;
int16_t x365 = INT16_MAX;
int32_t x374 = -11867;
int32_t x375 = 35;
volatile int32_t t92 = 12107;
uint64_t x377 = 2924358534LLU;
int32_t x383 = 1831;
int8_t x384 = INT8_MIN;
int16_t x386 = -306;
int32_t t95 = -12;
static uint16_t x401 = 225U;


void f0(void) {
	int64_t x1 = 22945369829403LL;
	static volatile int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -1;

	t0 = (x1==((x2<x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 9346633881585LL;
	int16_t x7 = -1;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -75393;

	t1 = (x5==((x6<x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = -51;
	static uint8_t x11 = 36U;
	static int8_t x12 = -1;
	volatile int32_t t2 = -445968;

	t2 = (x9==((x10<x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint8_t x14 = 5U;
	volatile int8_t x15 = INT8_MIN;
	int64_t x16 = -1LL;

	t3 = (x13==((x14<x15)%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 195U;
	uint32_t x18 = UINT32_MAX;
	int64_t x19 = -1LL;
	static int32_t t4 = -24549;

	t4 = (x17==((x18<x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 1947656LLU;
	volatile int64_t x22 = -1LL;
	int16_t x23 = INT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 2;

	t5 = (x21==((x22<x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = 379114;
	int64_t x27 = -53301146358981920LL;
	int32_t x28 = INT32_MAX;

	t6 = (x25==((x26<x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	uint32_t x31 = 188322288U;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 2;

	t7 = (x29==((x30<x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	volatile int16_t x34 = -11795;
	int32_t x35 = INT32_MIN;
	int16_t x36 = INT16_MAX;
	static int32_t t8 = 156542806;

	t8 = (x33==((x34<x35)%x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	uint16_t x38 = UINT16_MAX;
	uint16_t x39 = 165U;
	int16_t x40 = 8793;
	int32_t t9 = -783135696;

	t9 = (x37==((x38<x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -1;
	int32_t x42 = -1;
	volatile int8_t x44 = 2;
	int32_t t10 = -218090;

	t10 = (x41==((x42<x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	uint16_t x47 = 53U;
	uint16_t x48 = 3U;
	int32_t t11 = 2405;

	t11 = (x45==((x46<x47)%x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int8_t x51 = -1;
	uint16_t x52 = UINT16_MAX;
	int32_t t12 = -692176;

	t12 = (x49==((x50<x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 0U;
	int32_t x54 = INT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 82073;

	t13 = (x53==((x54<x55)%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -265803108;
	uint32_t x60 = 16174474U;
	volatile int32_t t14 = -498;

	t14 = (x57==((x58<x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MIN;
	static uint32_t x62 = 12850264U;
	uint64_t x64 = 204LLU;
	static volatile int32_t t15 = -482943;

	t15 = (x61==((x62<x63)%x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	volatile int8_t x66 = -1;
	int8_t x67 = -1;
	int16_t x68 = 13132;
	int32_t t16 = -16;

	t16 = (x65==((x66<x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 132244844U;
	static uint16_t x70 = 149U;
	uint16_t x71 = 1U;
	volatile int8_t x72 = -1;
	int32_t t17 = -53030129;

	t17 = (x69==((x70<x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	int8_t x75 = INT8_MAX;
	int32_t t18 = 509220038;

	t18 = (x73==((x74<x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	static int64_t x78 = INT64_MAX;
	volatile uint32_t x79 = 1U;
	uint8_t x80 = 3U;
	volatile int32_t t19 = -417;

	t19 = (x77==((x78<x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 16651U;
	volatile int16_t x82 = INT16_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t20 = 3711;

	t20 = (x81==((x82<x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	uint16_t x86 = 2U;
	int64_t x87 = -2573882534360LL;
	static uint8_t x88 = 31U;

	t21 = (x85==((x86<x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	static int32_t x90 = 5814124;
	static int64_t x91 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t22 = 0;

	t22 = (x89==((x90<x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint64_t x94 = 14866LLU;
	volatile int32_t t23 = -129;

	t23 = (x93==((x94<x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = -1;
	int16_t x98 = -3557;
	int8_t x99 = 4;
	static int32_t x100 = 43975;
	int32_t t24 = -68;

	t24 = (x97==((x98<x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -30;
	int8_t x102 = INT8_MIN;
	int16_t x103 = -1;
	int32_t t25 = 892440;

	t25 = (x101==((x102<x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	static uint8_t x106 = 0U;
	static int64_t x107 = 21LL;
	volatile int16_t x108 = 22;

	t26 = (x105==((x106<x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -693993;
	volatile int32_t x111 = -1;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -80498;

	t27 = (x109==((x110<x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = UINT16_MAX;
	uint32_t x114 = 170U;
	int16_t x115 = INT16_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t28 = 126462;

	t28 = (x113==((x114<x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -273374;
	static int32_t x118 = 449;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 7160;

	t29 = (x117==((x118<x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x127 = -1;
	uint8_t x128 = 89U;
	volatile int32_t t30 = -54164;

	t30 = (x125==((x126<x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 7209827U;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	int64_t x132 = -1LL;
	int32_t t31 = 190907;

	t31 = (x129==((x130<x131)%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -348;
	int64_t x134 = -3636957188299LL;
	int32_t t32 = 133608924;

	t32 = (x133==((x134<x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	volatile int32_t x138 = -7315711;
	int32_t x139 = -1;
	int64_t x140 = -34254092LL;
	volatile int32_t t33 = 412411;

	t33 = (x137==((x138<x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	int64_t x142 = INT64_MIN;
	volatile int32_t t34 = -503721634;

	t34 = (x141==((x142<x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = INT64_MAX;
	uint16_t x146 = UINT16_MAX;
	uint8_t x147 = 37U;
	int8_t x148 = -1;

	t35 = (x145==((x146<x147)%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = INT32_MAX;
	uint64_t x150 = 26364443LLU;
	int32_t x151 = INT32_MIN;
	int32_t x152 = -1;
	int32_t t36 = 150;

	t36 = (x149==((x150<x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MIN;
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 849856LLU;
	static int64_t x156 = INT64_MIN;
	int32_t t37 = -256583104;

	t37 = (x153==((x154<x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x158 = INT8_MIN;
	volatile uint16_t x159 = 2191U;
	int16_t x160 = INT16_MIN;
	volatile int32_t t38 = -1;

	t38 = (x157==((x158<x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x161 = 38U;
	volatile int16_t x162 = -1;
	uint32_t x164 = 889164298U;
	int32_t t39 = -1477;

	t39 = (x161==((x162<x163)%x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x165 = -121074452;
	uint8_t x166 = 125U;

	t40 = (x165==((x166<x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	static uint16_t x170 = 364U;
	uint64_t x171 = 813935559169LLU;
	volatile uint16_t x172 = 12U;
	volatile int32_t t41 = -5;

	t41 = (x169==((x170<x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = 10107;
	uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = INT64_MIN;

	t42 = (x173==((x174<x175)%x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = 1835U;
	uint8_t x178 = 31U;
	int16_t x179 = -867;
	int32_t t43 = -6653;

	t43 = (x177==((x178<x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x181 = 7784U;
	uint8_t x182 = UINT8_MAX;

	t44 = (x181==((x182<x183)%x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x186 = 0;
	static uint16_t x187 = UINT16_MAX;
	int64_t x188 = INT64_MIN;

	t45 = (x185==((x186<x187)%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -65541176;
	int8_t x190 = INT8_MAX;
	volatile int32_t x192 = -1;
	int32_t t46 = 1;

	t46 = (x189==((x190<x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x194 = 88591662785LLU;
	int64_t x195 = INT64_MIN;
	int64_t x196 = 740LL;
	static int32_t t47 = -36;

	t47 = (x193==((x194<x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x198 = INT16_MIN;
	volatile uint64_t x199 = 5373394396133064716LLU;
	static volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t48 = 367160814;

	t48 = (x197==((x198<x199)%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x203 = 12;

	t49 = (x201==((x202<x203)%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x205 = UINT8_MAX;
	static uint64_t x206 = 7301LLU;
	static uint32_t x207 = 284514005U;
	int32_t t50 = 29238;

	t50 = (x205==((x206<x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = 12;
	static int64_t x211 = INT64_MIN;
	uint64_t x212 = 2746LLU;
	volatile int32_t t51 = 245073;

	t51 = (x209==((x210<x211)%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x214 = 23U;
	int32_t x215 = 5;
	uint8_t x216 = 127U;
	int32_t t52 = -6452;

	t52 = (x213==((x214<x215)%x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MAX;
	volatile int8_t x218 = 2;
	int32_t x219 = INT32_MIN;
	static volatile int64_t x220 = -320800945824030178LL;
	static int32_t t53 = -1657;

	t53 = (x217==((x218<x219)%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x221 = UINT8_MAX;
	volatile int16_t x223 = -1;

	t54 = (x221==((x222<x223)%x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	static uint16_t x226 = 6620U;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;
	volatile int32_t t55 = -2;

	t55 = (x225==((x226<x227)%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = 864788;
	int32_t x231 = 17964235;
	int32_t t56 = -30159;

	t56 = (x229==((x230<x231)%x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 7U;
	uint32_t x234 = 0U;
	static int64_t x235 = 7913117596425540LL;
	int8_t x236 = -1;
	int32_t t57 = -16777;

	t57 = (x233==((x234<x235)%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x237 = INT8_MIN;
	int8_t x239 = -4;
	int32_t x240 = -7847058;
	int32_t t58 = -558446021;

	t58 = (x237==((x238<x239)%x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -2;
	int32_t x243 = INT32_MIN;
	int32_t x244 = -1;
	int32_t t59 = -66815;

	t59 = (x241==((x242<x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = -1LL;
	int16_t x246 = -12374;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t60 = -51;

	t60 = (x245==((x246<x247)%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x250 = UINT16_MAX;
	volatile int16_t x251 = -7;
	static int32_t t61 = -11;

	t61 = (x249==((x250<x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x253 = 744U;
	static uint16_t x254 = 4008U;
	volatile int32_t x256 = -682;
	int32_t t62 = -206122;

	t62 = (x253==((x254<x255)%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = 45;
	volatile int32_t x258 = INT32_MIN;
	static uint16_t x259 = 12U;
	int32_t x260 = -1;

	t63 = (x257==((x258<x259)%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = -1;
	int16_t x263 = INT16_MAX;
	int32_t x264 = INT32_MIN;
	int32_t t64 = -40042042;

	t64 = (x261==((x262<x263)%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x266 = 340LLU;
	uint32_t x267 = 802013333U;
	static volatile int32_t t65 = -1;

	t65 = (x265==((x266<x267)%x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x269 = 2373U;
	volatile int8_t x270 = 42;
	volatile int64_t x271 = INT64_MIN;
	uint16_t x272 = 22U;
	volatile int32_t t66 = -1;

	t66 = (x269==((x270<x271)%x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x275 = 9;
	volatile int8_t x276 = INT8_MIN;
	int32_t t67 = -211;

	t67 = (x273==((x274<x275)%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x278 = 9520U;
	volatile int32_t x279 = INT32_MIN;
	int64_t x280 = INT64_MAX;
	int32_t t68 = -1;

	t68 = (x277==((x278<x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MAX;
	int64_t x283 = 0LL;
	volatile uint16_t x284 = 11U;

	t69 = (x281==((x282<x283)%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = UINT16_MAX;
	int32_t x286 = 1380;
	uint16_t x288 = 209U;
	volatile int32_t t70 = 2249;

	t70 = (x285==((x286<x287)%x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x289 = 7619927183023001LLU;
	int32_t x290 = -202692284;
	int8_t x291 = 47;
	uint8_t x292 = 3U;
	static volatile int32_t t71 = 147;

	t71 = (x289==((x290<x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 1LLU;
	int32_t x295 = INT32_MIN;
	volatile int32_t t72 = -5;

	t72 = (x293==((x294<x295)%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	static int16_t x300 = INT16_MIN;
	volatile int32_t t73 = -14567;

	t73 = (x297==((x298<x299)%x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = -14;
	int64_t x302 = INT64_MAX;
	volatile int8_t x303 = 14;
	static volatile uint32_t x304 = 346319U;
	int32_t t74 = -235;

	t74 = (x301==((x302<x303)%x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x306 = UINT16_MAX;
	volatile uint64_t x307 = 1334205884685LLU;
	int8_t x308 = INT8_MAX;
	volatile int32_t t75 = 382165;

	t75 = (x305==((x306<x307)%x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MAX;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 199U;
	volatile int32_t t76 = -104385;

	t76 = (x309==((x310<x311)%x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = -371782;
	static volatile int16_t x314 = INT16_MAX;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t77 = 2;

	t77 = (x313==((x314<x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	volatile int64_t x318 = INT64_MIN;
	static int64_t x319 = -74592LL;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t78 = 35;

	t78 = (x317==((x318<x319)%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 400U;
	static volatile uint16_t x323 = UINT16_MAX;
	static int32_t t79 = -8;

	t79 = (x321==((x322<x323)%x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x325 = 3646U;
	int32_t x326 = INT32_MAX;
	uint8_t x327 = 0U;
	int8_t x328 = INT8_MAX;
	int32_t t80 = -26;

	t80 = (x325==((x326<x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = -1;
	volatile int8_t x331 = 1;
	volatile int32_t t81 = 23816;

	t81 = (x329==((x330<x331)%x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x333 = 1005LL;
	uint8_t x335 = 7U;
	volatile int32_t t82 = -63053939;

	t82 = (x333==((x334<x335)%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x337 = 182656U;
	uint16_t x338 = UINT16_MAX;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = 42116326014140830LL;
	volatile int32_t t83 = -6;

	t83 = (x337==((x338<x339)%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x342 = -1;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t84 = -62685;

	t84 = (x341==((x342<x343)%x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x345 = 195341724LLU;
	static int8_t x346 = INT8_MAX;
	static int32_t x347 = INT32_MIN;
	volatile uint8_t x348 = 1U;
	volatile int32_t t85 = -658317;

	t85 = (x345==((x346<x347)%x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MAX;
	int8_t x350 = 29;
	uint64_t x351 = 15361LLU;
	int64_t x352 = -251LL;

	t86 = (x349==((x350<x351)%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x353 = 85U;
	static uint8_t x354 = UINT8_MAX;
	int32_t x356 = -1;

	t87 = (x353==((x354<x355)%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -1LL;
	uint64_t x358 = 8529216LLU;
	volatile uint8_t x359 = 1U;
	uint64_t x360 = 153155160543453LLU;
	int32_t t88 = 5070;

	t88 = (x357==((x358<x359)%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x362 = 52;
	uint16_t x363 = 402U;
	volatile int8_t x364 = INT8_MIN;
	volatile int32_t t89 = 10;

	t89 = (x361==((x362<x363)%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x366 = INT64_MIN;
	int32_t x367 = -1;
	uint16_t x368 = 251U;
	int32_t t90 = -11207;

	t90 = (x365==((x366<x367)%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x369 = UINT8_MAX;
	int8_t x370 = 0;
	int32_t x371 = INT32_MIN;
	static int16_t x372 = 122;
	int32_t t91 = 18;

	t91 = (x369==((x370<x371)%x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = 8;
	int16_t x376 = INT16_MIN;

	t92 = (x373==((x374<x375)%x376));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x378 = INT64_MIN;
	volatile uint16_t x379 = 23U;
	volatile int32_t x380 = 5678;
	volatile int32_t t93 = 2009368;

	t93 = (x377==((x378<x379)%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	volatile int32_t t94 = 153;

	t94 = (x381==((x382<x383)%x384));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x385 = INT64_MAX;
	volatile int32_t x387 = -3;
	static int32_t x388 = -1;

	t95 = (x385==((x386<x387)%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x389 = INT16_MIN;
	static int8_t x390 = 6;
	volatile uint64_t x391 = UINT64_MAX;
	int64_t x392 = -1432600611725975LL;
	int32_t t96 = 7;

	t96 = (x389==((x390<x391)%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x393 = 2U;
	int16_t x394 = -1291;
	static volatile int16_t x395 = INT16_MAX;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t97 = -703500532;

	t97 = (x393==((x394<x395)%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = INT16_MAX;
	uint64_t x398 = UINT64_MAX;
	volatile uint64_t x399 = UINT64_MAX;
	int8_t x400 = 58;
	int32_t t98 = 17155899;

	t98 = (x397==((x398<x399)%x400));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x402 = -1;
	int16_t x403 = INT16_MAX;
	int8_t x404 = INT8_MIN;
	volatile int32_t t99 = -4851;

	t99 = (x401==((x402<x403)%x404));

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

