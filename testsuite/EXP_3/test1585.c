#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 1U;
static uint64_t x3 = 0LLU;
volatile uint8_t x7 = UINT8_MAX;
int64_t x8 = INT64_MAX;
int8_t x12 = INT8_MAX;
volatile int32_t t2 = -260;
uint64_t x16 = 113636001037LLU;
volatile uint64_t t3 = 2326033473876LLU;
uint8_t x17 = UINT8_MAX;
volatile int8_t x18 = -1;
uint64_t x28 = UINT64_MAX;
volatile int16_t x29 = -2708;
int32_t x32 = INT32_MIN;
int16_t x33 = INT16_MIN;
static int64_t x38 = INT64_MIN;
static int16_t x42 = 9;
volatile int64_t x45 = INT64_MIN;
static uint16_t x49 = UINT16_MAX;
int8_t x56 = -1;
int16_t x62 = INT16_MIN;
int32_t x64 = -290540499;
int64_t t18 = -33588653168954LL;
uint16_t x77 = 12U;
int32_t t19 = -682296591;
uint32_t x82 = UINT32_MAX;
int64_t x83 = INT64_MAX;
volatile uint32_t t20 = 412506U;
int8_t x90 = INT8_MAX;
uint8_t x94 = 101U;
int32_t t23 = -22817;
int32_t x97 = -1;
int16_t x99 = INT16_MIN;
int32_t t24 = -534928309;
uint16_t x102 = UINT16_MAX;
int8_t x104 = -1;
volatile int16_t x105 = -1;
int8_t x107 = 3;
static int16_t x108 = -11255;
static volatile uint64_t x111 = 31LLU;
int16_t x115 = -1;
int64_t x117 = -1LL;
uint8_t x118 = 23U;
int8_t x119 = INT8_MAX;
int64_t t29 = -219335234575LL;
int8_t x134 = -1;
static int32_t x139 = -1440;
int64_t t34 = -115406447LL;
uint64_t x143 = 2976163LLU;
int32_t x148 = INT32_MIN;
int64_t x158 = 11821LL;
static int32_t t41 = 2002190;
static int64_t x169 = -1LL;
int64_t x178 = INT64_MIN;
static int8_t x181 = -1;
int32_t x183 = -1038262380;
int32_t x185 = INT32_MIN;
uint16_t x186 = UINT16_MAX;
int8_t x193 = INT8_MAX;
int16_t x201 = INT16_MIN;
static int8_t x202 = 25;
volatile uint8_t x203 = 0U;
int32_t x205 = INT32_MIN;
int16_t x206 = INT16_MIN;
int16_t x211 = -1;
int64_t x213 = INT64_MIN;
static int16_t x217 = INT16_MIN;
uint16_t x218 = 14U;
uint8_t x219 = 14U;
volatile int32_t t54 = -2222794;
static int32_t x222 = -1;
static int64_t t56 = -226691110364LL;
volatile uint64_t x231 = 665607818035546LLU;
volatile uint8_t x244 = 3U;
static uint64_t x245 = 13578LLU;
volatile int64_t x248 = INT64_MIN;
int32_t x249 = INT32_MIN;
int32_t x255 = INT32_MAX;
static uint16_t x256 = UINT16_MAX;
static int32_t x257 = -2;
int32_t x264 = INT32_MIN;
int32_t t65 = -3241184;
static volatile int32_t x272 = INT32_MAX;
int32_t x273 = -1;
int64_t x274 = 301456446281LL;
uint64_t x275 = UINT64_MAX;
volatile int64_t t68 = -181669415LL;
static int16_t x279 = -1;
volatile uint64_t x282 = UINT64_MAX;
int32_t x283 = 10770;
int32_t x285 = INT32_MAX;
volatile int32_t t71 = INT32_MAX;
volatile int64_t x290 = INT64_MIN;
volatile int64_t t72 = 1LL;
int16_t x295 = -1248;
uint8_t x296 = 76U;
int16_t x297 = INT16_MAX;
int32_t x298 = 859;
volatile int32_t x305 = -1;
volatile int8_t x307 = INT8_MIN;
static volatile int32_t t76 = 27874979;
static uint16_t x310 = 919U;
volatile int32_t t77 = -1887142;
int64_t x313 = -1LL;
uint8_t x316 = 25U;
static volatile int64_t t78 = -6043LL;
int32_t x324 = INT32_MIN;
int32_t x339 = -1;
static volatile int32_t x340 = -1;
volatile int32_t x342 = INT32_MIN;
int32_t x344 = 232419;
static int32_t x346 = -1;
int8_t x348 = -1;
int32_t t85 = -55;
int8_t x350 = 1;
static uint8_t x358 = 1U;
int8_t x362 = 1;
volatile int32_t t89 = -31321877;
int64_t x368 = -43865302LL;
volatile int32_t t92 = 30;
static int16_t x377 = INT16_MAX;
uint64_t x379 = 6131207928LLU;
int8_t x381 = 29;
static int32_t t95 = -12725;
uint32_t x391 = 523U;
int32_t x399 = -51093;
uint32_t x403 = 28918U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x4 = -1;
	volatile int32_t t0 = -1;

	t0 = ((x1%x2)|(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int64_t x6 = -267971LL;
	volatile int64_t t1 = -5LL;

	t1 = ((x5%x6)|(x7<=x8));

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static uint8_t x10 = 1U;
	volatile int64_t x11 = INT64_MIN;

	t2 = ((x9%x10)|(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = -1;

	t3 = ((x13%x14)|(x15<=x16));

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = -951354;

	t4 = ((x17%x18)|(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint32_t x22 = 229612U;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = -3600;
	static uint32_t t5 = 8013U;

	t5 = ((x21%x22)|(x23<=x24));

	if (t5 != 74835U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MAX;
	volatile int64_t t6 = 1974LL;

	t6 = ((x25%x26)|(x27<=x28));

	if (t6 != -127LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 75249LLU;
	static int16_t x31 = INT16_MIN;
	volatile uint64_t t7 = 1727845420LLU;

	t7 = ((x29%x30)|(x31<=x32));

	if (t7 != 35171LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x34 = 20U;
	int8_t x35 = 1;
	int8_t x36 = INT8_MIN;
	int32_t t8 = 188341217;

	t8 = ((x33%x34)|(x35<=x36));

	if (t8 != -8) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	int64_t x39 = 2762577495513140436LL;
	static int16_t x40 = INT16_MIN;
	static volatile int64_t t9 = 2450LL;

	t9 = ((x37%x38)|(x39<=x40));

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	int8_t x43 = INT8_MIN;
	volatile int32_t x44 = INT32_MIN;
	static int32_t t10 = 29550824;

	t10 = ((x41%x42)|(x43<=x44));

	if (t10 != 7) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 722329LL;
	static volatile int64_t x47 = INT64_MIN;
	uint64_t x48 = 16059925209370939LLU;
	volatile int64_t t11 = -334280432819292478LL;

	t11 = ((x45%x46)|(x47<=x48));

	if (t11 != -439922LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MAX;
	static volatile uint16_t x51 = UINT16_MAX;
	int32_t x52 = INT32_MIN;
	static int64_t t12 = -3688LL;

	t12 = ((x49%x50)|(x51<=x52));

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int16_t x54 = INT16_MAX;
	int32_t x55 = -1;
	int64_t t13 = -2153060LL;

	t13 = ((x53%x54)|(x55<=x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	static int32_t x58 = INT32_MAX;
	uint64_t x59 = UINT64_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int64_t t14 = -372LL;

	t14 = ((x57%x58)|(x59<=x60));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	static int32_t x63 = INT32_MIN;
	static volatile int32_t t15 = 20181752;

	t15 = ((x61%x62)|(x63<=x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int8_t x66 = 19;
	static int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	static volatile int32_t t16 = -7978;

	t16 = ((x65%x66)|(x67<=x68));

	if (t16 != -13) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int16_t x70 = INT16_MIN;
	int64_t x71 = -1LL;
	volatile int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -1901773;

	t17 = ((x69%x70)|(x71<=x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -74LL;
	volatile int8_t x74 = -1;
	int16_t x75 = INT16_MAX;
	int8_t x76 = INT8_MIN;

	t18 = ((x73%x74)|(x75<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x78 = 5;
	int32_t x79 = 11;
	volatile int16_t x80 = 1;

	t19 = ((x77%x78)|(x79<=x80));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 468U;
	static volatile int8_t x84 = -8;

	t20 = ((x81%x82)|(x83<=x84));

	if (t20 != 468U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	int16_t x86 = INT16_MAX;
	static uint64_t x87 = 2518699499LLU;
	volatile int32_t x88 = -1;
	int32_t t21 = -4173251;

	t21 = ((x85%x86)|(x87<=x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	volatile int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MAX;
	int32_t t22 = 90;

	t22 = ((x89%x90)|(x91<=x92));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x93 = INT8_MIN;
	int32_t x95 = INT32_MIN;
	uint32_t x96 = UINT32_MAX;

	t23 = ((x93%x94)|(x95<=x96));

	if (t23 != -27) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x98 = 12958U;
	uint16_t x100 = 0U;

	t24 = ((x97%x98)|(x99<=x100));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = 167918722;
	int8_t x103 = INT8_MIN;
	int32_t t25 = 2572;

	t25 = ((x101%x102)|(x103<=x104));

	if (t25 != 18053) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	volatile int64_t t26 = 185778LL;

	t26 = ((x105%x106)|(x107<=x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 28U;
	uint64_t x110 = 62340162LLU;
	volatile int8_t x112 = 0;
	volatile uint64_t t27 = 304LLU;

	t27 = ((x109%x110)|(x111<=x112));

	if (t27 != 28LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 1U;
	static uint8_t x114 = UINT8_MAX;
	int64_t x116 = INT64_MAX;
	uint32_t t28 = 9865U;

	t28 = ((x113%x114)|(x115<=x116));

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x120 = INT8_MIN;

	t29 = ((x117%x118)|(x119<=x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	static int8_t x123 = INT8_MAX;
	static uint16_t x124 = UINT16_MAX;
	static int32_t t30 = -7;

	t30 = ((x121%x122)|(x123<=x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	volatile int64_t x126 = -1LL;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = 2;
	int64_t t31 = 11242LL;

	t31 = ((x125%x126)|(x127<=x128));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 14485267960638772LL;
	int32_t x130 = -7016802;
	int16_t x131 = -15;
	int32_t x132 = INT32_MIN;
	int64_t t32 = -1006833085019924LL;

	t32 = ((x129%x130)|(x131<=x132));

	if (t32 != 1061734LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	uint32_t x135 = UINT32_MAX;
	static volatile int64_t x136 = INT64_MIN;
	volatile int32_t t33 = -71;

	t33 = ((x133%x134)|(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = -218;
	uint64_t x140 = 6LLU;

	t34 = ((x137%x138)|(x139<=x140));

	if (t34 != -142LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 149262855662606031LLU;
	volatile uint32_t x142 = 146572U;
	uint64_t x144 = 3765868321LLU;
	uint64_t t35 = 511414896LLU;

	t35 = ((x141%x142)|(x143<=x144));

	if (t35 != 43579LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 20860U;
	int64_t x146 = -1LL;
	int16_t x147 = -180;
	volatile int64_t t36 = -1067898LL;

	t36 = ((x145%x146)|(x147<=x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -13781435814LL;
	static uint32_t x150 = 27276934U;
	static int32_t x151 = 1733;
	static volatile uint16_t x152 = 1U;
	int64_t t37 = 1068348072LL;

	t37 = ((x149%x150)|(x151<=x152));

	if (t37 != -6584144LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = INT8_MIN;
	volatile uint8_t x154 = 61U;
	volatile int16_t x155 = INT16_MAX;
	uint32_t x156 = 2436U;
	static volatile int32_t t38 = -61217068;

	t38 = ((x153%x154)|(x155<=x156));

	if (t38 != -6) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -1;
	static int8_t x159 = INT8_MIN;
	uint16_t x160 = 51U;
	volatile int64_t t39 = -403079LL;

	t39 = ((x157%x158)|(x159<=x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 258106LLU;
	int32_t x162 = INT32_MIN;
	static int64_t x163 = INT64_MAX;
	int32_t x164 = INT32_MAX;
	uint64_t t40 = 258112264LLU;

	t40 = ((x161%x162)|(x163<=x164));

	if (t40 != 258106LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	volatile int64_t x167 = -363542645656697554LL;
	int32_t x168 = INT32_MIN;

	t41 = ((x165%x166)|(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 14190U;
	int8_t x171 = INT8_MAX;
	static volatile uint32_t x172 = 0U;
	volatile int64_t t42 = 2529223151951731095LL;

	t42 = ((x169%x170)|(x171<=x172));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 74;
	volatile int32_t x174 = INT32_MIN;
	int8_t x175 = 34;
	static uint16_t x176 = UINT16_MAX;
	volatile int32_t t43 = -5;

	t43 = ((x173%x174)|(x175<=x176));

	if (t43 != 75) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 45U;
	static int32_t x179 = -1;
	int32_t x180 = INT32_MAX;
	int64_t t44 = -1663LL;

	t44 = ((x177%x178)|(x179<=x180));

	if (t44 != 45LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 11U;
	uint16_t x184 = 85U;
	volatile int32_t t45 = -386;

	t45 = ((x181%x182)|(x183<=x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x187 = INT16_MAX;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t46 = 972469761;

	t46 = ((x185%x186)|(x187<=x188));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	int32_t x190 = -6;
	int32_t x191 = INT32_MIN;
	int8_t x192 = -14;
	volatile int32_t t47 = -965;

	t47 = ((x189%x190)|(x191<=x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x194 = 2U;
	volatile int32_t x195 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 201;

	t48 = ((x193%x194)|(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	int8_t x198 = -1;
	uint16_t x199 = UINT16_MAX;
	int32_t x200 = 0;
	uint32_t t49 = 1096767909U;

	t49 = ((x197%x198)|(x199<=x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x204 = 7LLU;
	volatile int32_t t50 = -3;

	t50 = ((x201%x202)|(x203<=x204));

	if (t50 != -17) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = INT8_MIN;
	static uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -8432;

	t51 = ((x205%x206)|(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 198939737;
	int32_t x210 = -3079298;
	int64_t x212 = INT64_MAX;
	volatile int32_t t52 = -1;

	t52 = ((x209%x210)|(x211<=x212));

	if (t52 != 1864665) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x214 = -1;
	int16_t x215 = INT16_MIN;
	static volatile int32_t x216 = 3;
	volatile int64_t t53 = 10454949LL;

	t53 = ((x213%x214)|(x215<=x216));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x220 = INT16_MIN;

	t54 = ((x217%x218)|(x219<=x220));

	if (t54 != -8) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = INT16_MIN;
	static int8_t x223 = -1;
	uint64_t x224 = 2481982LLU;
	int32_t t55 = 528254853;

	t55 = ((x221%x222)|(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	static int16_t x226 = -1;
	volatile int8_t x227 = -1;
	int8_t x228 = INT8_MAX;

	t56 = ((x225%x226)|(x227<=x228));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -2758;
	int16_t x230 = -4012;
	int64_t x232 = INT64_MAX;
	volatile int32_t t57 = 120777;

	t57 = ((x229%x230)|(x231<=x232));

	if (t57 != -2757) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MIN;
	static int8_t x235 = INT8_MAX;
	volatile int16_t x236 = INT16_MIN;
	int32_t t58 = -288254;

	t58 = ((x233%x234)|(x235<=x236));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MAX;
	uint32_t x239 = 28257U;
	volatile int64_t x240 = -288560LL;
	volatile int64_t t59 = -211595138774791671LL;

	t59 = ((x237%x238)|(x239<=x240));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 383LLU;
	static uint64_t x242 = 478LLU;
	uint64_t x243 = 449102501633795LLU;
	uint64_t t60 = 7283182771LLU;

	t60 = ((x241%x242)|(x243<=x244));

	if (t60 != 383LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MIN;
	static int16_t x247 = INT16_MIN;
	volatile uint64_t t61 = 13841676497708220LLU;

	t61 = ((x245%x246)|(x247<=x248));

	if (t61 != 13578LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x250 = INT64_MAX;
	uint32_t x251 = UINT32_MAX;
	static int64_t x252 = -1LL;
	int64_t t62 = 7495LL;

	t62 = ((x249%x250)|(x251<=x252));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x253 = 137355995729950LLU;
	int8_t x254 = 6;
	volatile uint64_t t63 = 13823578688LLU;

	t63 = ((x253%x254)|(x255<=x256));

	if (t63 != 4LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	volatile int32_t x259 = INT32_MIN;
	uint32_t x260 = 297817U;
	static int32_t t64 = 189;

	t64 = ((x257%x258)|(x259<=x260));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	int32_t x262 = -14974735;
	static uint8_t x263 = 2U;

	t65 = ((x261%x262)|(x263<=x264));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = 16811891824397LL;
	int64_t x267 = INT64_MIN;
	uint64_t x268 = 15830692LLU;
	volatile int64_t t66 = 185LL;

	t66 = ((x265%x266)|(x267<=x268));

	if (t66 != 4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 26356U;
	int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	volatile int32_t t67 = 111900573;

	t67 = ((x269%x270)|(x271<=x272));

	if (t67 != 117) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x276 = -1LL;

	t68 = ((x273%x274)|(x275<=x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	uint64_t x278 = UINT64_MAX;
	uint16_t x280 = 0U;
	volatile uint64_t t69 = 250489284804286LLU;

	t69 = ((x277%x278)|(x279<=x280));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = INT16_MIN;
	static int32_t x284 = INT32_MIN;
	volatile uint64_t t70 = 2698096080LLU;

	t70 = ((x281%x282)|(x283<=x284));

	if (t70 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;
	static int32_t x288 = INT32_MAX;

	t71 = ((x285%x286)|(x287<=x288));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = INT32_MIN;
	uint32_t x291 = 49745774U;
	static uint8_t x292 = 88U;

	t72 = ((x289%x290)|(x291<=x292));

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = 103U;
	int64_t t73 = -957639567993244848LL;

	t73 = ((x293%x294)|(x295<=x296));

	if (t73 != -79LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x299 = 2233156032LLU;
	static uint32_t x300 = 195U;
	int32_t t74 = 37426829;

	t74 = ((x297%x298)|(x299<=x300));

	if (t74 != 125) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int8_t x302 = -1;
	static int32_t x303 = INT32_MIN;
	static uint32_t x304 = UINT32_MAX;
	static volatile int64_t t75 = 70163729417892LL;

	t75 = ((x301%x302)|(x303<=x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x306 = INT16_MAX;
	int64_t x308 = INT64_MIN;

	t76 = ((x305%x306)|(x307<=x308));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 1U;
	volatile int8_t x311 = -1;
	static volatile int8_t x312 = INT8_MIN;

	t77 = ((x309%x310)|(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 87U;
	static volatile int32_t x315 = INT32_MAX;

	t78 = ((x313%x314)|(x315<=x316));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x321 = UINT64_MAX;
	uint64_t x322 = 2503214LLU;
	int8_t x323 = -4;
	uint64_t t79 = 631215392105654972LLU;

	t79 = ((x321%x322)|(x323<=x324));

	if (t79 != 2122093LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = UINT32_MAX;
	static int8_t x326 = INT8_MIN;
	static int16_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	static uint32_t t80 = 39U;

	t80 = ((x325%x326)|(x327<=x328));

	if (t80 != 127U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x329 = UINT32_MAX;
	static uint8_t x330 = 41U;
	volatile int64_t x331 = INT64_MIN;
	int64_t x332 = 48LL;
	uint32_t t81 = 55U;

	t81 = ((x329%x330)|(x331<=x332));

	if (t81 != 37U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = 3151;
	int16_t x334 = INT16_MAX;
	static int32_t x335 = 6;
	volatile int8_t x336 = INT8_MAX;
	int32_t t82 = 897072;

	t82 = ((x333%x334)|(x335<=x336));

	if (t82 != 3151) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = -1;
	uint16_t x338 = 35U;
	volatile int32_t t83 = -47093;

	t83 = ((x337%x338)|(x339<=x340));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x341 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	volatile int64_t t84 = -22807110477LL;

	t84 = ((x341%x342)|(x343<=x344));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 3441U;
	static int32_t x347 = INT32_MIN;

	t85 = ((x345%x346)|(x347<=x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 23473959;
	static int32_t t86 = 1;

	t86 = ((x349%x350)|(x351<=x352));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x353 = 51;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t87 = -5145043;

	t87 = ((x353%x354)|(x355<=x356));

	if (t87 != 51) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	int32_t x360 = -1;
	static int32_t t88 = 0;

	t88 = ((x357%x358)|(x359<=x360));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x361 = -1;
	uint32_t x363 = 496U;
	volatile int64_t x364 = INT64_MAX;

	t89 = ((x361%x362)|(x363<=x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	static int32_t x367 = 2790;
	int64_t t90 = 139LL;

	t90 = ((x365%x366)|(x367<=x368));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = INT8_MAX;
	int8_t x370 = 1;
	int64_t x371 = 409411691LL;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t91 = -2399990;

	t91 = ((x369%x370)|(x371<=x372));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	volatile int32_t x374 = INT32_MIN;
	static int32_t x375 = -1;
	static int8_t x376 = INT8_MIN;

	t92 = ((x373%x374)|(x375<=x376));

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x378 = INT32_MIN;
	int64_t x380 = INT64_MIN;
	static volatile int32_t t93 = 67777;

	t93 = ((x377%x378)|(x379<=x380));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x382 = INT8_MIN;
	static uint64_t x383 = 43190738718954851LLU;
	static int32_t x384 = INT32_MIN;
	volatile int32_t t94 = 5303829;

	t94 = ((x381%x382)|(x383<=x384));

	if (t94 != 29) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = -32221394;
	static int8_t x386 = INT8_MIN;
	int16_t x387 = 12967;
	static int32_t x388 = INT32_MAX;

	t95 = ((x385%x386)|(x387<=x388));

	if (t95 != -81) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MIN;
	volatile int32_t x392 = -4;
	volatile int32_t t96 = 83664;

	t96 = ((x389%x390)|(x391<=x392));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x393 = 86U;
	volatile int64_t x394 = -115LL;
	volatile int64_t x395 = INT64_MIN;
	int32_t x396 = -17;
	volatile int64_t t97 = -25LL;

	t97 = ((x393%x394)|(x395<=x396));

	if (t97 != 87LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x397 = -1;
	int16_t x398 = -1;
	volatile uint16_t x400 = 7822U;
	int32_t t98 = -2549;

	t98 = ((x397%x398)|(x399<=x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x401 = -1;
	int16_t x402 = -1;
	int64_t x404 = 3127LL;
	volatile int32_t t99 = 117745;

	t99 = ((x401%x402)|(x403<=x404));

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

