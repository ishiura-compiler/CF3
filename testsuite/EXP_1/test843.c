#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -1;
uint16_t x7 = 38U;
static uint16_t x10 = UINT16_MAX;
static volatile int32_t x16 = -7;
int64_t x21 = INT64_MIN;
int8_t x24 = 1;
int8_t x31 = 26;
volatile int64_t x38 = INT64_MAX;
int32_t x39 = INT32_MIN;
int32_t x44 = INT32_MIN;
static int32_t x46 = INT32_MAX;
int16_t x51 = INT16_MIN;
uint8_t x52 = 0U;
uint32_t x55 = 858U;
uint64_t x60 = UINT64_MAX;
volatile int16_t x61 = INT16_MIN;
uint8_t x62 = UINT8_MAX;
static volatile int32_t t15 = -95930515;
int8_t x65 = INT8_MAX;
int8_t x67 = 5;
int16_t x68 = INT16_MIN;
volatile int16_t x70 = 11821;
volatile uint16_t x76 = UINT16_MAX;
volatile int16_t x78 = 36;
uint64_t x84 = 17LLU;
int32_t x85 = INT32_MIN;
int16_t x87 = -6657;
volatile int64_t t21 = -30345791721916571LL;
uint16_t x89 = UINT16_MAX;
static int8_t x90 = INT8_MIN;
static int8_t x92 = INT8_MIN;
static volatile uint32_t t22 = 50U;
int32_t x94 = INT32_MIN;
volatile uint32_t x96 = 6U;
int32_t x100 = -1;
int64_t t24 = 218808140LL;
int64_t t25 = 1299799966405LL;
int32_t x107 = 6;
int16_t x109 = INT16_MIN;
uint8_t x115 = 15U;
int16_t x118 = -1;
uint8_t x123 = 0U;
int32_t x131 = -1;
int16_t x137 = -1;
uint32_t x139 = 110981082U;
uint16_t x140 = 3U;
int8_t x152 = INT8_MIN;
volatile int16_t x157 = 3698;
int64_t x158 = INT64_MIN;
int16_t x163 = INT16_MIN;
int8_t x165 = -2;
static int16_t x181 = INT16_MAX;
int32_t x188 = 652963;
volatile int32_t t46 = 29171;
static volatile int32_t x195 = INT32_MIN;
int32_t x203 = -1;
static uint32_t x204 = UINT32_MAX;
uint32_t t50 = 3231U;
volatile uint16_t x207 = 2439U;
volatile int64_t t51 = 1066525184381796800LL;
int16_t x217 = INT16_MIN;
static int64_t t54 = -24913663LL;
uint16_t x226 = 6U;
static volatile uint32_t x235 = 16057U;
static volatile int64_t x236 = 1LL;
int64_t t57 = -204895235080312040LL;
volatile uint64_t t58 = 13916598848051857LLU;
int8_t x246 = 13;
int64_t x247 = -12042823LL;
static int32_t x248 = -1;
static int64_t x249 = -1LL;
static volatile uint64_t t61 = 24LLU;
int64_t x256 = INT64_MIN;
int32_t x257 = 641169455;
static int16_t x259 = 174;
int64_t x265 = -1LL;
int16_t x267 = INT16_MIN;
int32_t x268 = -121;
static uint64_t t66 = 333369146LLU;
int64_t x273 = -1LL;
uint64_t t67 = 47581LLU;
int64_t x277 = INT64_MIN;
uint8_t x287 = 0U;
uint32_t x288 = UINT32_MAX;
volatile int32_t x293 = INT32_MIN;
uint8_t x295 = UINT8_MAX;
static int64_t x299 = INT64_MIN;
uint16_t x304 = 627U;
uint8_t x308 = UINT8_MAX;
static int16_t x310 = -82;
int64_t t77 = 84736LL;
uint8_t x318 = UINT8_MAX;
volatile int64_t x319 = -2244161190182786LL;
volatile uint32_t x320 = 3722089U;
int32_t x321 = INT32_MAX;
int64_t t80 = 10664LL;
int64_t x329 = INT64_MIN;
volatile int8_t x334 = -1;
int64_t x339 = -1LL;
int32_t x343 = 5965422;
int32_t x344 = -1;
uint32_t t85 = 214U;
static int32_t x354 = -24463610;
volatile int64_t t87 = 82270737512525337LL;
volatile int32_t x357 = -1;
int64_t x358 = INT64_MIN;
int64_t x361 = INT64_MIN;
uint32_t x362 = 37112U;
volatile int8_t x363 = -1;
volatile int64_t t89 = 379003195682375623LL;
int8_t x370 = -1;
uint64_t x372 = 59537168424LLU;
int64_t x374 = -8273525697LL;
static uint32_t x377 = 435961570U;
int8_t x384 = INT8_MAX;
volatile uint32_t t94 = 355856U;
int64_t x385 = -988830LL;
int8_t x387 = INT8_MIN;
int32_t x390 = INT32_MIN;
volatile int64_t x391 = INT64_MAX;
uint64_t x394 = 3LLU;
int64_t x396 = 58653LL;
uint64_t t97 = 1080840990LLU;
int32_t x397 = INT32_MAX;
volatile uint64_t t98 = 954178141LLU;
uint32_t x404 = 438690805U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	int16_t x3 = -1;
	int8_t x4 = 54;
	int64_t t0 = -28036475555030LL;

	t0 = (((x1%x2)^x3)&x4);

	if (t0 != 54LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int8_t x8 = -1;
	volatile int32_t t1 = 1;

	t1 = (((x5%x6)^x7)&x8);

	if (t1 != -39) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint8_t x11 = 50U;
	static int8_t x12 = -11;
	static int32_t t2 = 30944919;

	t2 = (((x9%x10)^x11)&x12);

	if (t2 != -32720) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = -1;
	static uint8_t x14 = 27U;
	volatile int64_t x15 = INT64_MIN;
	volatile int64_t t3 = 28779793LL;

	t3 = (((x13%x14)^x15)&x16);

	if (t3 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 8U;
	int64_t x20 = -120592572457866LL;
	volatile int64_t t4 = 137829157358429252LL;

	t4 = (((x17%x18)^x19)&x20);

	if (t4 != 1519279222LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 37U;
	uint64_t x23 = 5898283713916LLU;
	volatile uint64_t t5 = 425876599727499LLU;

	t5 = (((x21%x22)^x23)&x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	volatile uint64_t x26 = 1506134184622477758LLU;
	uint64_t x27 = 2239744811LLU;
	int8_t x28 = INT8_MIN;
	volatile uint64_t t6 = 903481453360LLU;

	t6 = (((x25%x26)^x27)&x28);

	if (t6 != 373133854035271680LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = 1U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = 484971256;

	t7 = (((x29%x30)^x31)&x32);

	if (t7 != 26) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MAX;
	static uint16_t x34 = 2031U;
	volatile int32_t x35 = 7;
	uint8_t x36 = UINT8_MAX;
	static int32_t t8 = -8;

	t8 = (((x33%x34)^x35)&x36);

	if (t8 != 120) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 109U;
	int16_t x40 = 3632;
	volatile int64_t t9 = 1948LL;

	t9 = (((x37%x38)^x39)&x40);

	if (t9 != 32LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -48;
	int8_t x42 = INT8_MAX;
	int8_t x43 = -1;
	volatile int32_t t10 = 121059071;

	t10 = (((x41%x42)^x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x47 = INT8_MAX;
	volatile int8_t x48 = INT8_MIN;
	int32_t t11 = -880;

	t11 = (((x45%x46)^x47)&x48);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = UINT64_MAX;
	static int32_t x50 = INT32_MIN;
	uint64_t t12 = 253233LLU;

	t12 = (((x49%x50)^x51)&x52);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	uint32_t x56 = UINT32_MAX;
	volatile int64_t t13 = -18844472281LL;

	t13 = (((x53%x54)^x55)&x56);

	if (t13 != 858LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -12610;
	volatile int8_t x58 = INT8_MIN;
	static uint64_t x59 = 402195487837392LLU;
	volatile uint64_t t14 = 8231282162942LLU;

	t14 = (((x57%x58)^x59)&x60);

	if (t14 != 18446341878221714286LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x63 = 16U;
	static volatile int8_t x64 = INT8_MIN;

	t15 = (((x61%x62)^x63)&x64);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	volatile int32_t t16 = 195;

	t16 = (((x65%x66)^x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 2U;
	static uint32_t x71 = 78U;
	uint16_t x72 = UINT16_MAX;
	uint32_t t17 = 83565U;

	t17 = (((x69%x70)^x71)&x72);

	if (t17 != 76U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static uint16_t x74 = 124U;
	uint16_t x75 = 9731U;
	int32_t t18 = -524;

	t18 = (((x73%x74)^x75)&x76);

	if (t18 != 55779) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x79 = 19141428754192994LL;
	int8_t x80 = -1;
	volatile int64_t t19 = 2022483674113LL;

	t19 = (((x77%x78)^x79)&x80);

	if (t19 != -19141428754193010LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	volatile int16_t x82 = INT16_MIN;
	uint32_t x83 = 45U;
	volatile uint64_t t20 = 195859497LLU;

	t20 = (((x81%x82)^x83)&x84);

	if (t20 != 16LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x86 = INT64_MAX;
	uint32_t x88 = UINT32_MAX;

	t21 = (((x85%x86)^x87)&x88);

	if (t21 != 2147476991LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x91 = 1137U;

	t22 = (((x89%x90)^x91)&x92);

	if (t22 != 1024U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x93 = 843048720553LLU;
	volatile int64_t x95 = INT64_MIN;
	volatile uint64_t t23 = 2096818092120392532LLU;

	t23 = (((x93%x94)^x95)&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static int16_t x98 = -1;
	int32_t x99 = -550;

	t24 = (((x97%x98)^x99)&x100);

	if (t24 != -550LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int64_t x102 = -230391373511754331LL;
	int64_t x103 = INT64_MAX;
	volatile uint16_t x104 = 321U;

	t25 = (((x101%x102)^x103)&x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	volatile uint8_t x106 = 6U;
	int64_t x108 = INT64_MIN;
	int64_t t26 = INT64_MIN;

	t26 = (((x105%x106)^x107)&x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 61070768192255LLU;
	uint8_t x111 = UINT8_MAX;
	volatile int16_t x112 = INT16_MIN;
	volatile uint64_t t27 = 3589673417LLU;

	t27 = (((x109%x110)^x111)&x112);

	if (t27 != 13187397910528LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint16_t x114 = UINT16_MAX;
	int8_t x116 = -30;
	volatile int64_t t28 = -65806663LL;

	t28 = (((x113%x114)^x115)&x116);

	if (t28 != -32LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MAX;
	uint64_t x119 = 3542477381155062LLU;
	int32_t x120 = -33280;
	static volatile uint64_t t29 = 4665108201169LLU;

	t29 = (((x117%x118)^x119)&x120);

	if (t29 != 3542477381122048LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	volatile int16_t x122 = -838;
	int16_t x124 = -6281;
	int64_t t30 = 8724545857541LL;

	t30 = (((x121%x122)^x123)&x124);

	if (t30 != 277LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MAX;
	int8_t x126 = -1;
	uint32_t x127 = 2745536U;
	static volatile uint32_t x128 = 259105842U;
	volatile uint32_t t31 = 1830965785U;

	t31 = (((x125%x126)^x127)&x128);

	if (t31 != 2204672U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = 7656;
	volatile uint32_t x130 = UINT32_MAX;
	int32_t x132 = -1;
	volatile uint32_t t32 = 13U;

	t32 = (((x129%x130)^x131)&x132);

	if (t32 != 4294959639U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 28;
	uint64_t x134 = 15312LLU;
	int16_t x135 = 111;
	int32_t x136 = 339111;
	static volatile uint64_t t33 = 539096263377345LLU;

	t33 = (((x133%x134)^x135)&x136);

	if (t33 != 35LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	volatile uint32_t t34 = 179569921U;

	t34 = (((x137%x138)^x139)&x140);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MAX;
	int32_t x142 = -6473;
	volatile int16_t x143 = -5;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = -7;

	t35 = (((x141%x142)^x143)&x144);

	if (t35 != 105) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 865LLU;
	int16_t x146 = INT16_MAX;
	int8_t x147 = -1;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 36LLU;

	t36 = (((x145%x146)^x147)&x148);

	if (t36 != 18446744073709550750LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 165U;
	int32_t x150 = INT32_MAX;
	uint16_t x151 = 112U;
	uint32_t t37 = 499146U;

	t37 = (((x149%x150)^x151)&x152);

	if (t37 != 128U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x153 = UINT32_MAX;
	static volatile uint64_t x154 = UINT64_MAX;
	uint64_t x155 = 91122LLU;
	int64_t x156 = INT64_MIN;
	uint64_t t38 = 1894LLU;

	t38 = (((x153%x154)^x155)&x156);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = INT16_MIN;
	static volatile int16_t x160 = 59;
	volatile int64_t t39 = -5292373LL;

	t39 = (((x157%x158)^x159)&x160);

	if (t39 != 50LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = 4U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t40 = -4047;

	t40 = (((x161%x162)^x163)&x164);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	int32_t x167 = 96916;
	int32_t x168 = -1;
	volatile int32_t t41 = 554982;

	t41 = (((x165%x166)^x167)&x168);

	if (t41 != 96916) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	static uint16_t x171 = 11U;
	static volatile int16_t x172 = INT16_MAX;
	uint64_t t42 = 247751636041LLU;

	t42 = (((x169%x170)^x171)&x172);

	if (t42 != 11LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 59;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = UINT32_MAX;
	int32_t x176 = INT32_MAX;
	volatile uint32_t t43 = 28388005U;

	t43 = (((x173%x174)^x175)&x176);

	if (t43 != 2147483588U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = (((x177%x178)^x179)&x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = 14U;
	static int32_t t45 = -19;

	t45 = (((x181%x182)^x183)&x184);

	if (t45 != 14) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	static volatile uint8_t x186 = UINT8_MAX;
	uint8_t x187 = UINT8_MAX;

	t46 = (((x185%x186)^x187)&x188);

	if (t46 != 652835) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 6;
	int16_t x190 = INT16_MIN;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = -1;
	int32_t t47 = -31113;

	t47 = (((x189%x190)^x191)&x192);

	if (t47 != 65529) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	static int64_t x194 = INT64_MIN;
	static int8_t x196 = INT8_MIN;
	int64_t t48 = -2498994176299LL;

	t48 = (((x193%x194)^x195)&x196);

	if (t48 != -9223372034707292288LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = -63231;
	uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MAX;
	uint8_t x200 = 4U;
	volatile int32_t t49 = 56;

	t49 = (((x197%x198)^x199)&x200);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -47;
	volatile int32_t x202 = 13;

	t50 = (((x201%x202)^x203)&x204);

	if (t50 != 7U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x205 = -1LL;
	uint32_t x206 = 2379U;
	int16_t x208 = INT16_MIN;

	t51 = (((x205%x206)^x207)&x208);

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = 8702U;
	static volatile int8_t x210 = INT8_MIN;
	volatile uint8_t x211 = 13U;
	static int64_t x212 = INT64_MIN;
	volatile int64_t t52 = -449508476623638039LL;

	t52 = (((x209%x210)^x211)&x212);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -6;
	uint32_t x214 = 15781273U;
	static int64_t x215 = -15169091181692LL;
	static int64_t x216 = INT64_MIN;
	volatile int64_t t53 = INT64_MIN;

	t53 = (((x213%x214)^x215)&x216);

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	int16_t x220 = -1;

	t54 = (((x217%x218)^x219)&x220);

	if (t54 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MAX;
	int8_t x223 = INT8_MAX;
	static volatile uint32_t x224 = 1434831U;
	static int64_t t55 = 1001236585189884LL;

	t55 = (((x221%x222)^x223)&x224);

	if (t55 != 1434752LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = INT64_MIN;
	static volatile uint16_t x227 = UINT16_MAX;
	int16_t x228 = -216;
	volatile int64_t t56 = -34730569973248974LL;

	t56 = (((x225%x226)^x227)&x228);

	if (t56 != -65536LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x233 = 1312U;
	int16_t x234 = -1;

	t57 = (((x233%x234)^x235)&x236);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	int64_t x238 = -1LL;
	uint64_t x239 = 4724408117100LLU;
	static uint8_t x240 = UINT8_MAX;

	t58 = (((x237%x238)^x239)&x240);

	if (t58 != 108LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = -1LL;
	int8_t x242 = -1;
	int32_t x243 = -12249017;
	static volatile int64_t x244 = INT64_MIN;
	int64_t t59 = INT64_MIN;

	t59 = (((x241%x242)^x243)&x244);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 0U;
	static int64_t t60 = -7LL;

	t60 = (((x245%x246)^x247)&x248);

	if (t60 != -12042823LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x250 = 4215488LLU;
	volatile int16_t x251 = INT16_MAX;
	int64_t x252 = INT64_MIN;

	t61 = (((x249%x250)^x251)&x252);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x253 = 14863U;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	int64_t t62 = -36121652LL;

	t62 = (((x253%x254)^x255)&x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x258 = -1;
	volatile int8_t x260 = 0;
	int32_t t63 = 46194078;

	t63 = (((x257%x258)^x259)&x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	volatile int64_t x262 = -1LL;
	int32_t x263 = INT32_MIN;
	uint64_t x264 = 95925873550LLU;
	static uint64_t t64 = 2599631LLU;

	t64 = (((x261%x262)^x263)&x264);

	if (t64 != 94489280512LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x266 = 12U;
	volatile int64_t t65 = 332491702147500LL;

	t65 = (((x265%x266)^x267)&x268);

	if (t65 != 32647LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x269 = INT32_MIN;
	uint64_t x270 = UINT64_MAX;
	uint64_t x271 = UINT64_MAX;
	int32_t x272 = INT32_MIN;

	t66 = (((x269%x270)^x271)&x272);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x274 = 8522067707044LLU;
	int32_t x275 = INT32_MIN;
	int32_t x276 = 54;

	t67 = (((x273%x274)^x275)&x276);

	if (t67 != 50LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x278 = INT16_MIN;
	volatile uint64_t x279 = UINT64_MAX;
	int64_t x280 = INT64_MAX;
	static uint64_t t68 = 8205LLU;

	t68 = (((x277%x278)^x279)&x280);

	if (t68 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MIN;
	int8_t x283 = 0;
	int32_t x284 = -307710;
	static volatile int32_t t69 = -117;

	t69 = (((x281%x282)^x283)&x284);

	if (t69 != 19970) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 1014U;
	int8_t x286 = -1;
	volatile uint32_t t70 = 354523678U;

	t70 = (((x285%x286)^x287)&x288);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x289 = 58U;
	static int8_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t71 = -229626749;

	t71 = (((x289%x290)^x291)&x292);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x294 = -1;
	uint32_t x296 = 37927317U;
	uint32_t t72 = 50587528U;

	t72 = (((x293%x294)^x295)&x296);

	if (t72 != 149U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = -23887613072612947LL;
	static int16_t x300 = INT16_MIN;
	volatile int64_t t73 = INT64_MIN;

	t73 = (((x297%x298)^x299)&x300);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x301 = INT32_MIN;
	uint64_t x302 = 855LLU;
	volatile int16_t x303 = -2879;
	volatile uint64_t t74 = 22480LLU;

	t74 = (((x301%x302)^x303)&x304);

	if (t74 != 627LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = 6;
	volatile uint32_t x306 = 72U;
	uint16_t x307 = 6U;
	volatile uint32_t t75 = 0U;

	t75 = (((x305%x306)^x307)&x308);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = UINT64_MAX;
	static uint32_t x311 = UINT32_MAX;
	static int64_t x312 = -1LL;
	volatile uint64_t t76 = 1176639014946780LLU;

	t76 = (((x309%x310)^x311)&x312);

	if (t76 != 4294967214LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x313 = 641U;
	static int64_t x314 = -1LL;
	int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;

	t77 = (((x313%x314)^x315)&x316);

	if (t77 != 2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x317 = INT16_MIN;
	int64_t t78 = 61LL;

	t78 = (((x317%x318)^x319)&x320);

	if (t78 != 527208LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x322 = 23481825799832420LLU;
	int32_t x323 = -1;
	int16_t x324 = 0;
	volatile uint64_t t79 = 2226628055911240701LLU;

	t79 = (((x321%x322)^x323)&x324);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = 5;
	int64_t x326 = INT64_MIN;
	uint8_t x327 = 14U;
	volatile int32_t x328 = INT32_MIN;

	t80 = (((x325%x326)^x327)&x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x330 = 8;
	static int64_t x331 = -1LL;
	uint64_t x332 = 631394712189LLU;
	uint64_t t81 = 800908912103644LLU;

	t81 = (((x329%x330)^x331)&x332);

	if (t81 != 631394712189LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x333 = -19799688884LL;
	static int64_t x335 = -5LL;
	uint32_t x336 = UINT32_MAX;
	int64_t t82 = 14507871LL;

	t82 = (((x333%x334)^x335)&x336);

	if (t82 != 4294967291LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = INT64_MAX;
	volatile uint32_t x340 = 1037904219U;
	volatile int64_t t83 = 671400026084LL;

	t83 = (((x337%x338)^x339)&x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = UINT16_MAX;
	uint32_t x342 = UINT32_MAX;
	uint32_t t84 = 1368113977U;

	t84 = (((x341%x342)^x343)&x344);

	if (t84 != 6027665U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x345 = UINT32_MAX;
	int16_t x346 = -1;
	static int8_t x347 = INT8_MIN;
	uint32_t x348 = 1151076111U;

	t85 = (((x345%x346)^x347)&x348);

	if (t85 != 1151076096U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = -246468539LL;
	int8_t x350 = 42;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	static int64_t t86 = 45268296433145637LL;

	t86 = (((x349%x350)^x351)&x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MIN;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = UINT16_MAX;

	t87 = (((x353%x354)^x355)&x356);

	if (t87 != 35088LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x359 = INT16_MIN;
	static int32_t x360 = -1;
	volatile int64_t t88 = -1182462173859LL;

	t88 = (((x357%x358)^x359)&x360);

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x364 = 63355707U;

	t89 = (((x361%x362)^x363)&x364);

	if (t89 != 27LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x365 = 2046LLU;
	static uint16_t x366 = UINT16_MAX;
	uint16_t x367 = UINT16_MAX;
	uint8_t x368 = 5U;
	volatile uint64_t t90 = 663771495075905LLU;

	t90 = (((x365%x366)^x367)&x368);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = 1U;
	int32_t x371 = -1;
	volatile uint64_t t91 = 4323334149975159002LLU;

	t91 = (((x369%x370)^x371)&x372);

	if (t91 != 3702593576LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x373 = 26792465;
	int16_t x375 = 0;
	int8_t x376 = INT8_MIN;
	static int64_t t92 = -1604377990566309654LL;

	t92 = (((x373%x374)^x375)&x376);

	if (t92 != 26792448LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x378 = 422U;
	uint64_t x379 = 140LLU;
	static int8_t x380 = -1;
	uint64_t t93 = 85LLU;

	t93 = (((x377%x378)^x379)&x380);

	if (t93 != 246LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x381 = INT32_MIN;
	uint32_t x382 = 428671595U;
	volatile int16_t x383 = INT16_MIN;

	t94 = (((x381%x382)^x383)&x384);

	if (t94 != 105U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x386 = -1LL;
	volatile int16_t x388 = INT16_MAX;
	static volatile int64_t t95 = 8759120LL;

	t95 = (((x385%x386)^x387)&x388);

	if (t95 != 32640LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MIN;
	static uint32_t x392 = 20467706U;
	int64_t t96 = 134155229342905193LL;

	t96 = (((x389%x390)^x391)&x392);

	if (t96 != 20467706LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x393 = INT64_MIN;
	int32_t x395 = INT32_MAX;

	t97 = (((x393%x394)^x395)&x396);

	if (t97 != 58653LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x398 = INT64_MIN;
	uint8_t x399 = 45U;
	uint64_t x400 = 49321329022LLU;

	t98 = (((x397%x398)^x399)&x400);

	if (t98 != 2076688722LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = 3;
	uint32_t x402 = 1069496423U;
	int8_t x403 = INT8_MAX;
	static volatile uint32_t t99 = 3369905U;

	t99 = (((x401%x402)^x403)&x404);

	if (t99 != 116U) { NG(); } else { ; }
	
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

