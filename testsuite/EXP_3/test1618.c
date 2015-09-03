#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int64_t x4 = INT64_MIN;
static uint8_t x10 = 102U;
int64_t x12 = INT64_MAX;
volatile int8_t x16 = INT8_MAX;
volatile int32_t t4 = 5947486;
uint32_t x27 = UINT32_MAX;
volatile int32_t t6 = 3937027;
uint16_t x34 = UINT16_MAX;
static int32_t x48 = INT32_MIN;
volatile int32_t t12 = -252;
uint8_t x59 = 5U;
static volatile uint64_t x66 = UINT64_MAX;
int64_t x67 = INT64_MAX;
uint64_t x69 = 1069LLU;
uint32_t x70 = 114965U;
int8_t x76 = INT8_MAX;
uint16_t x82 = 3095U;
uint32_t x83 = UINT32_MAX;
int8_t x88 = -52;
static volatile int32_t t22 = 4;
int32_t x104 = INT32_MIN;
volatile int64_t x106 = INT64_MAX;
uint64_t x110 = 807LLU;
uint16_t x111 = UINT16_MAX;
int32_t x114 = INT32_MIN;
volatile uint64_t x119 = 971863LLU;
uint16_t x121 = UINT16_MAX;
volatile int8_t x122 = INT8_MIN;
uint32_t x127 = 0U;
int32_t t31 = -713155;
int64_t x131 = 6099998951182LL;
int32_t t33 = -62469;
volatile int64_t x145 = -1LL;
int64_t x148 = 3717095377LL;
int8_t x152 = INT8_MIN;
int32_t x154 = 389222383;
static volatile int32_t t39 = 9259;
int16_t x163 = -1;
int32_t x164 = INT32_MIN;
int16_t x170 = INT16_MIN;
uint64_t x174 = 27088LLU;
uint64_t x175 = UINT64_MAX;
int32_t x176 = -861861;
volatile uint8_t x179 = UINT8_MAX;
volatile int32_t t44 = -3379345;
int64_t x184 = INT64_MAX;
uint16_t x193 = UINT16_MAX;
int16_t x195 = 2779;
volatile uint64_t x200 = UINT64_MAX;
int8_t x209 = INT8_MIN;
static uint32_t x214 = UINT32_MAX;
volatile uint64_t x217 = 9LLU;
int8_t x221 = -1;
int32_t x228 = INT32_MIN;
uint16_t x233 = 42U;
int32_t x238 = -1;
volatile int32_t t59 = -11;
int16_t x242 = -1;
int32_t x245 = -1;
static volatile uint16_t x247 = UINT16_MAX;
static uint64_t x251 = UINT64_MAX;
static int32_t x252 = INT32_MIN;
volatile int32_t t62 = 5;
uint16_t x264 = 2837U;
uint8_t x271 = 2U;
static int32_t t68 = 3281;
static volatile int32_t t70 = -43775707;
uint8_t x286 = 12U;
static int16_t x290 = -1;
int64_t x294 = INT64_MAX;
uint64_t x295 = 23926544073437787LLU;
volatile int32_t x296 = -1;
int8_t x301 = -3;
static int8_t x302 = -1;
int32_t x303 = INT32_MIN;
volatile int32_t x306 = -1;
int32_t x314 = -1;
int64_t x316 = 659LL;
uint16_t x324 = 8U;
int8_t x328 = INT8_MAX;
int64_t x337 = INT64_MIN;
int16_t x338 = -1;
int32_t t84 = -854;
int16_t x341 = INT16_MIN;
volatile int32_t t85 = -169;
int8_t x349 = -1;
static int32_t x350 = 18094617;
volatile int32_t t87 = 1057393502;
uint8_t x353 = UINT8_MAX;
uint32_t x360 = UINT32_MAX;
int32_t x363 = 87;
static int64_t x366 = INT64_MIN;
static volatile int32_t t91 = 1023842;
static int64_t x375 = INT64_MIN;
volatile int32_t t93 = -508;
static int32_t x378 = 1501;
int32_t t96 = -3;
volatile int16_t x390 = -1;
int16_t x395 = -1;
volatile int32_t t99 = -51;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int16_t x3 = 1;
	volatile int32_t t0 = 12488;

	t0 = ((x1==x2)<<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1953370579LLU;
	static int16_t x6 = INT16_MAX;
	uint64_t x7 = UINT64_MAX;
	volatile int8_t x8 = INT8_MIN;
	int32_t t1 = 115;

	t1 = ((x5==x6)<<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	static int32_t x11 = INT32_MIN;
	volatile int32_t t2 = -11879179;

	t2 = ((x9==x10)<<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 93U;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -1LL;
	int32_t t3 = 40988;

	t3 = ((x13==x14)<<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MAX;
	uint16_t x18 = 7604U;
	volatile int16_t x19 = 2;
	int16_t x20 = -199;

	t4 = ((x17==x18)<<(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint8_t x22 = UINT8_MAX;
	int64_t x23 = INT64_MIN;
	int8_t x24 = 5;
	int32_t t5 = 804;

	t5 = ((x21==x22)<<(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	volatile int32_t x26 = -127302407;
	int8_t x28 = -12;

	t6 = ((x25==x26)<<(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 38;
	static int16_t x30 = 632;
	uint64_t x31 = 235LLU;
	int64_t x32 = -58486LL;
	volatile int32_t t7 = 1;

	t7 = ((x29==x30)<<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x35 = 43LLU;
	int8_t x36 = 13;
	static volatile int32_t t8 = -6657899;

	t8 = ((x33==x34)<<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = -1;
	volatile uint32_t x39 = 49286040U;
	volatile int8_t x40 = -6;
	volatile int32_t t9 = -1;

	t9 = ((x37==x38)<<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	static int16_t x43 = -1;
	int8_t x44 = INT8_MIN;
	int32_t t10 = 16382207;

	t10 = ((x41==x42)<<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint64_t x46 = UINT64_MAX;
	uint32_t x47 = 1606286U;
	int32_t t11 = 951889;

	t11 = ((x45==x46)<<(x47<=x48));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x50 = INT8_MIN;
	int8_t x51 = -1;
	int8_t x52 = 57;

	t12 = ((x49==x50)<<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 747U;
	int64_t x55 = -1LL;
	static int32_t x56 = -1;
	int32_t t13 = 2023;

	t13 = ((x53==x54)<<(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MIN;
	static volatile int16_t x60 = INT16_MAX;
	int32_t t14 = 5795906;

	t14 = ((x57==x58)<<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MIN;
	int32_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	int32_t t15 = 2458;

	t15 = ((x61==x62)<<(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 3557889U;
	static volatile int32_t x68 = INT32_MIN;
	volatile int32_t t16 = -368080;

	t16 = ((x65==x66)<<(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x71 = INT16_MIN;
	int32_t x72 = -1;
	int32_t t17 = -680869;

	t17 = ((x69==x70)<<(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x74 = INT64_MAX;
	static uint16_t x75 = UINT16_MAX;
	volatile int32_t t18 = 355670;

	t18 = ((x73==x74)<<(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x77 = 0U;
	uint8_t x78 = UINT8_MAX;
	int32_t x79 = -1;
	static int16_t x80 = -1;
	int32_t t19 = 91;

	t19 = ((x77==x78)<<(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 46;

	t20 = ((x81==x82)<<(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = 979150490505820LLU;
	int16_t x86 = -4492;
	int32_t x87 = 1833783;
	volatile int32_t t21 = 5;

	t21 = ((x85==x86)<<(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -98;
	static int16_t x90 = 98;
	uint64_t x91 = 5346442826062245730LLU;
	static int64_t x92 = INT64_MIN;

	t22 = ((x89==x90)<<(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -4;
	int64_t x94 = -987543697LL;
	static int8_t x95 = INT8_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -7604165;

	t23 = ((x93==x94)<<(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x97 = 253826U;
	uint16_t x98 = 2U;
	volatile int64_t x99 = -483682LL;
	static volatile uint8_t x100 = 75U;
	volatile int32_t t24 = 6045;

	t24 = ((x97==x98)<<(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1876;
	uint16_t x102 = 8392U;
	uint8_t x103 = 0U;
	int32_t t25 = -168;

	t25 = ((x101==x102)<<(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	volatile int8_t x107 = -36;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = 11166;

	t26 = ((x105==x106)<<(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -192110494685LL;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 19;

	t27 = ((x109==x110)<<(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	int16_t x115 = 1;
	static volatile int64_t x116 = INT64_MIN;
	int32_t t28 = 23012938;

	t28 = ((x113==x114)<<(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 182070;
	volatile int64_t x118 = INT64_MAX;
	int32_t x120 = -1;
	static int32_t t29 = 0;

	t29 = ((x117==x118)<<(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x123 = -1;
	uint64_t x124 = 4222239536075LLU;
	volatile int32_t t30 = 0;

	t30 = ((x121==x122)<<(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -487017122101LL;
	int16_t x126 = -1;
	int32_t x128 = INT32_MIN;

	t31 = ((x125==x126)<<(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 2U;
	int16_t x130 = INT16_MIN;
	volatile uint32_t x132 = UINT32_MAX;
	volatile int32_t t32 = -53317636;

	t32 = ((x129==x130)<<(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -875;
	uint16_t x134 = 2114U;
	uint64_t x135 = UINT64_MAX;
	int16_t x136 = INT16_MIN;

	t33 = ((x133==x134)<<(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -44;
	static int64_t x138 = INT64_MIN;
	uint8_t x139 = 32U;
	static volatile int16_t x140 = -87;
	int32_t t34 = 7553;

	t34 = ((x137==x138)<<(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	uint32_t x142 = 88636545U;
	int64_t x143 = 2542960525160170LL;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = -3700;

	t35 = ((x141==x142)<<(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MAX;
	int64_t x147 = INT64_MAX;
	int32_t t36 = 22495501;

	t36 = ((x145==x146)<<(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -139146580;
	int32_t x150 = -1;
	int8_t x151 = -1;
	int32_t t37 = -15415;

	t37 = ((x149==x150)<<(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 705454184U;
	uint8_t x155 = 6U;
	uint64_t x156 = 537686608645LLU;
	volatile int32_t t38 = 522858707;

	t38 = ((x153==x154)<<(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int16_t x158 = 0;
	static int16_t x159 = INT16_MIN;
	static int16_t x160 = INT16_MIN;

	t39 = ((x157==x158)<<(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	uint16_t x162 = UINT16_MAX;
	static volatile int32_t t40 = 75068702;

	t40 = ((x161==x162)<<(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 11U;
	int64_t x166 = 1485118768250083770LL;
	int8_t x167 = INT8_MAX;
	static uint32_t x168 = 5670U;
	volatile int32_t t41 = 265;

	t41 = ((x165==x166)<<(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	static uint8_t x171 = 1U;
	uint8_t x172 = 57U;
	int32_t t42 = 4225879;

	t42 = ((x169==x170)<<(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = 7556925;
	volatile int32_t t43 = -127306846;

	t43 = ((x173==x174)<<(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -3;
	int32_t x178 = -1;
	int32_t x180 = INT32_MAX;

	t44 = ((x177==x178)<<(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = 3021217;
	int8_t x182 = 1;
	int64_t x183 = -1LL;
	volatile int32_t t45 = -40;

	t45 = ((x181==x182)<<(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x185 = -488;
	int8_t x186 = -2;
	uint32_t x187 = 11136412U;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = 24891524;

	t46 = ((x185==x186)<<(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int64_t x190 = INT64_MAX;
	int32_t x191 = -1;
	volatile int32_t x192 = -10258539;
	volatile int32_t t47 = -2817;

	t47 = ((x189==x190)<<(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x194 = 6;
	static int16_t x196 = INT16_MIN;
	static int32_t t48 = 0;

	t48 = ((x193==x194)<<(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -55LL;
	static int16_t x198 = 102;
	volatile int32_t x199 = -1;
	int32_t t49 = -214665163;

	t49 = ((x197==x198)<<(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = UINT8_MAX;
	int8_t x203 = -1;
	volatile int8_t x204 = -1;
	volatile int32_t t50 = 57;

	t50 = ((x201==x202)<<(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	uint8_t x206 = 1U;
	uint64_t x207 = UINT64_MAX;
	int32_t x208 = 0;
	int32_t t51 = -11616;

	t51 = ((x205==x206)<<(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -56;
	volatile uint16_t x211 = UINT16_MAX;
	static volatile int32_t x212 = -1;
	volatile int32_t t52 = 293242;

	t52 = ((x209==x210)<<(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint64_t x215 = UINT64_MAX;
	volatile int16_t x216 = INT16_MAX;
	int32_t t53 = 357703426;

	t53 = ((x213==x214)<<(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = -1LL;
	int32_t x219 = 541057;
	int64_t x220 = -1LL;
	int32_t t54 = 262326;

	t54 = ((x217==x218)<<(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = UINT8_MAX;
	uint16_t x223 = 6U;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t55 = 18566484;

	t55 = ((x221==x222)<<(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static int8_t x226 = INT8_MIN;
	uint8_t x227 = 5U;
	volatile int32_t t56 = -111;

	t56 = ((x225==x226)<<(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = 3U;
	static int64_t x231 = INT64_MIN;
	static volatile int8_t x232 = 13;
	int32_t t57 = -6085217;

	t57 = ((x229==x230)<<(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = UINT8_MAX;
	int64_t x235 = INT64_MIN;
	uint8_t x236 = 3U;
	static int32_t t58 = -6784;

	t58 = ((x233==x234)<<(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int32_t x239 = -245466161;
	static int32_t x240 = INT32_MAX;

	t59 = ((x237==x238)<<(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int8_t x243 = 6;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 102936548;

	t60 = ((x241==x242)<<(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = -1;
	static int16_t x248 = 114;
	int32_t t61 = -6641;

	t61 = ((x245==x246)<<(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static uint32_t x250 = UINT32_MAX;

	t62 = ((x249==x250)<<(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 2470597U;
	static volatile uint64_t x254 = 3LLU;
	uint32_t x255 = 1858U;
	int64_t x256 = -1LL;
	int32_t t63 = 56844764;

	t63 = ((x253==x254)<<(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 2531432316340552642LLU;
	uint8_t x258 = 15U;
	int32_t x259 = 65495;
	int32_t x260 = -100;
	int32_t t64 = -388;

	t64 = ((x257==x258)<<(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 2475706428172331LL;
	static int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	volatile int32_t t65 = 0;

	t65 = ((x261==x262)<<(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = INT64_MAX;
	int16_t x266 = INT16_MIN;
	static uint8_t x267 = 4U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -144591175;

	t66 = ((x265==x266)<<(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	uint8_t x272 = 12U;
	int32_t t67 = 3;

	t67 = ((x269==x270)<<(x271<=x272));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = -1;
	uint32_t x274 = 15U;
	uint16_t x275 = 70U;
	int32_t x276 = INT32_MIN;

	t68 = ((x273==x274)<<(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 3U;
	uint32_t x278 = 957818U;
	volatile int64_t x279 = 5770LL;
	static int8_t x280 = 2;
	int32_t t69 = -312467;

	t69 = ((x277==x278)<<(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	static int16_t x283 = INT16_MIN;
	int8_t x284 = INT8_MIN;

	t70 = ((x281==x282)<<(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -875;
	volatile uint64_t x287 = 1467029144060555512LLU;
	uint64_t x288 = 377344486LLU;
	int32_t t71 = -4847;

	t71 = ((x285==x286)<<(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -1LL;
	static int16_t x291 = -1;
	int32_t x292 = INT32_MIN;
	int32_t t72 = 2033;

	t72 = ((x289==x290)<<(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 2;
	int32_t t73 = 7;

	t73 = ((x293==x294)<<(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static uint64_t x298 = 2740412753LLU;
	uint32_t x299 = UINT32_MAX;
	uint64_t x300 = 324271583LLU;
	volatile int32_t t74 = 1053156;

	t74 = ((x297==x298)<<(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x304 = -522;
	int32_t t75 = 0;

	t75 = ((x301==x302)<<(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -6490398109475LL;
	uint64_t x307 = 37707256178650LLU;
	int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 71;

	t76 = ((x305==x306)<<(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = -1;
	volatile int32_t x310 = -917722;
	uint32_t x311 = UINT32_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t77 = -54;

	t77 = ((x309==x310)<<(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 426863129043528738LLU;
	volatile int64_t x315 = -1LL;
	volatile int32_t t78 = 3556;

	t78 = ((x313==x314)<<(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint64_t x318 = UINT64_MAX;
	static uint64_t x319 = 141LLU;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t79 = 54578;

	t79 = ((x317==x318)<<(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 2285LLU;
	int16_t x322 = 19;
	int16_t x323 = INT16_MAX;
	int32_t t80 = 3486;

	t80 = ((x321==x322)<<(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 192570954224LL;
	int8_t x326 = INT8_MIN;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t t81 = 23409;

	t81 = ((x325==x326)<<(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	static int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MAX;
	int32_t t82 = 597;

	t82 = ((x329==x330)<<(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x333 = INT8_MIN;
	volatile int8_t x334 = 1;
	int64_t x335 = INT64_MIN;
	static uint8_t x336 = 28U;
	int32_t t83 = 25;

	t83 = ((x333==x334)<<(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = -13;
	uint64_t x340 = 3294645365569461LLU;

	t84 = ((x337==x338)<<(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x342 = INT32_MIN;
	static int32_t x343 = -1;
	int16_t x344 = INT16_MIN;

	t85 = ((x341==x342)<<(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x346 = 1;
	int8_t x347 = 18;
	uint64_t x348 = UINT64_MAX;
	int32_t t86 = 23341;

	t86 = ((x345==x346)<<(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = -1;

	t87 = ((x349==x350)<<(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = 17LLU;
	int32_t x355 = 185372754;
	int64_t x356 = INT64_MAX;
	static volatile int32_t t88 = 99350143;

	t88 = ((x353==x354)<<(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MAX;
	int64_t x358 = INT64_MIN;
	volatile int64_t x359 = INT64_MIN;
	int32_t t89 = -124895427;

	t89 = ((x357==x358)<<(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 117U;
	uint8_t x362 = 59U;
	static int64_t x364 = INT64_MAX;
	volatile int32_t t90 = 51786;

	t90 = ((x361==x362)<<(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	uint8_t x367 = 67U;
	volatile int64_t x368 = INT64_MIN;

	t91 = ((x365==x366)<<(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = 423;
	volatile uint32_t x371 = 71450271U;
	static uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -1297;

	t92 = ((x369==x370)<<(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = 1LL;
	int16_t x374 = -1786;
	int64_t x376 = INT64_MIN;

	t93 = ((x373==x374)<<(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	uint16_t x379 = UINT16_MAX;
	int64_t x380 = -6476LL;
	volatile int32_t t94 = -116320178;

	t94 = ((x377==x378)<<(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -209;
	static int32_t x382 = INT32_MIN;
	uint16_t x383 = UINT16_MAX;
	uint8_t x384 = 6U;
	int32_t t95 = 1271512;

	t95 = ((x381==x382)<<(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MIN;

	t96 = ((x385==x386)<<(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 6U;
	volatile int64_t x391 = INT64_MIN;
	static int64_t x392 = INT64_MIN;
	volatile int32_t t97 = 2;

	t97 = ((x389==x390)<<(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 3LLU;
	int8_t x394 = -2;
	int32_t x396 = INT32_MIN;
	int32_t t98 = 3;

	t98 = ((x393==x394)<<(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -524812644170561363LL;
	int32_t x398 = INT32_MAX;
	static int64_t x399 = 1LL;
	int32_t x400 = -1;

	t99 = ((x397==x398)<<(x399<=x400));

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

