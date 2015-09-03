#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
uint8_t x9 = 1U;
volatile int16_t x12 = INT16_MAX;
volatile int8_t x15 = INT8_MAX;
int32_t x16 = -851091577;
uint16_t x18 = UINT16_MAX;
uint64_t x19 = 193LLU;
volatile int64_t x24 = 198588990927818LL;
static int32_t x30 = INT32_MIN;
volatile uint32_t x35 = 32041979U;
uint64_t x36 = 55267475LLU;
uint32_t x48 = UINT32_MAX;
int16_t x54 = INT16_MAX;
uint16_t x57 = 1252U;
int64_t x61 = INT64_MIN;
volatile uint16_t x62 = UINT16_MAX;
int32_t x63 = -1;
int32_t x64 = -1;
volatile int32_t t16 = -9983169;
volatile int64_t t18 = -219941LL;
int8_t x77 = 1;
uint32_t x79 = UINT32_MAX;
int16_t x80 = 1;
uint16_t x85 = UINT16_MAX;
int16_t x92 = INT16_MIN;
uint8_t x97 = 25U;
int32_t x98 = -1;
uint16_t x100 = 1U;
volatile int64_t t25 = 3154518424033782LL;
int64_t x107 = INT64_MIN;
uint32_t x108 = 26U;
volatile int32_t t26 = 3115;
uint32_t x113 = UINT32_MAX;
uint32_t x116 = 375948U;
static uint32_t t28 = 11U;
int64_t x117 = INT64_MAX;
uint32_t x118 = 8442547U;
int32_t x125 = 560469189;
int32_t t31 = 0;
uint8_t x129 = 7U;
int8_t x131 = -1;
int8_t x132 = -1;
uint64_t x137 = 226837470726036LLU;
uint32_t x143 = 1252U;
static int32_t x146 = 42;
uint16_t x147 = UINT16_MAX;
static volatile int32_t t36 = -11452356;
static volatile int8_t x152 = INT8_MAX;
volatile int64_t x163 = INT64_MIN;
int16_t x166 = INT16_MIN;
int64_t x171 = 263073625551LL;
int64_t x177 = INT64_MAX;
int16_t x178 = INT16_MAX;
uint32_t x184 = UINT32_MAX;
int64_t t45 = 10LL;
int64_t t47 = 7LL;
int32_t x194 = -1;
int16_t x201 = INT16_MIN;
uint8_t x204 = 124U;
volatile int32_t t50 = 2443;
int8_t x216 = -26;
int64_t t53 = -4154LL;
static int16_t x218 = 1;
int16_t x219 = 1;
int32_t x220 = INT32_MAX;
int32_t t54 = -7;
int8_t x221 = INT8_MIN;
volatile uint64_t t56 = 1059606029056550279LLU;
uint8_t x242 = 1U;
volatile int64_t x243 = INT64_MAX;
static uint16_t x249 = UINT16_MAX;
int64_t x252 = INT64_MIN;
volatile int64_t t62 = -1462960333903696245LL;
int64_t x254 = INT64_MIN;
volatile uint64_t x258 = 1960087828LLU;
static int64_t x260 = 237LL;
int64_t x261 = 3920LL;
volatile int32_t x262 = -1;
volatile int64_t t65 = 1454LL;
static int32_t x265 = INT32_MAX;
int8_t x267 = 52;
static uint8_t x269 = 3U;
uint16_t x279 = 91U;
uint8_t x288 = UINT8_MAX;
int16_t x289 = 10363;
int16_t x297 = 2;
static uint64_t x300 = 78343292821075LLU;
int32_t x302 = INT32_MIN;
int64_t x307 = -1LL;
static uint64_t x317 = 241557413LLU;
int32_t x325 = -26145268;
uint8_t x331 = 51U;
uint32_t t82 = 50132076U;
int64_t x333 = -1LL;
static volatile uint16_t x336 = 11U;
int64_t t84 = 30443599LL;
uint32_t x342 = UINT32_MAX;
uint64_t x343 = UINT64_MAX;
uint32_t x356 = 381754U;
int8_t x357 = -11;
int64_t x362 = INT64_MIN;
uint64_t x363 = 132790196749115LLU;
int8_t x364 = INT8_MIN;
volatile uint64_t x365 = 2607125LLU;
volatile uint32_t x369 = 821136U;
static volatile uint32_t t91 = 7749954U;
static int32_t x388 = INT32_MIN;
int16_t x389 = -1;
static int32_t x398 = INT32_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int16_t x2 = INT16_MIN;
	static int32_t x3 = INT32_MIN;
	uint16_t x4 = 1890U;
	volatile int32_t t0 = 14391863;

	t0 = ((x1%x2)+(x3<x4));

	if (t0 != 32768) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 266628095LL;
	int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MAX;
	volatile int64_t t1 = -1LL;

	t1 = ((x5%x6)+(x7<x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -1LL;
	volatile uint8_t x11 = UINT8_MAX;
	volatile int64_t t2 = -1501934730LL;

	t2 = ((x9%x10)+(x11<x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	int32_t x14 = INT32_MIN;
	volatile int32_t t3 = 30201285;

	t3 = ((x13%x14)+(x15<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -14347493;

	t4 = ((x17%x18)+(x19<x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -39373707;
	static volatile int32_t x22 = -130287;
	uint16_t x23 = 32761U;
	static volatile int32_t t5 = 75735;

	t5 = ((x21%x22)+(x23<x24));

	if (t5 != -27032) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 4428U;
	volatile uint8_t x26 = 115U;
	int8_t x27 = INT8_MIN;
	volatile uint8_t x28 = 8U;
	volatile int32_t t6 = -490422;

	t6 = ((x25%x26)+(x27<x28));

	if (t6 != 59) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MIN;
	static int16_t x31 = -1;
	static int32_t x32 = 91900;
	volatile int32_t t7 = -21009611;

	t7 = ((x29%x30)+(x31<x32));

	if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	static volatile int8_t x34 = -1;
	int32_t t8 = -41053707;

	t8 = ((x33%x34)+(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint8_t x38 = 34U;
	int16_t x39 = -1;
	static int64_t x40 = INT64_MIN;
	static volatile int32_t t9 = 6397;

	t9 = ((x37%x38)+(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 76U;
	int32_t x42 = INT32_MIN;
	static int16_t x43 = INT16_MIN;
	static int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 12372;

	t10 = ((x41%x42)+(x43<x44));

	if (t10 != 77) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	int64_t x46 = -1LL;
	int32_t x47 = -1;
	int64_t t11 = -308324235450566907LL;

	t11 = ((x45%x46)+(x47<x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2733073346897252761LL;
	volatile uint32_t x50 = UINT32_MAX;
	int16_t x51 = INT16_MIN;
	volatile int16_t x52 = -3;
	int64_t t12 = -55513349015LL;

	t12 = ((x49%x50)+(x51<x52));

	if (t12 != 2832459092LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	volatile int32_t t13 = 123;

	t13 = ((x53%x54)+(x55<x56));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x58 = INT32_MAX;
	int8_t x59 = -1;
	int32_t x60 = 175379962;
	volatile int32_t t14 = -64250;

	t14 = ((x57%x58)+(x59<x60));

	if (t14 != 1253) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t t15 = 56872695377252719LL;

	t15 = ((x61%x62)+(x63<x64));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 102U;
	uint8_t x66 = 2U;
	volatile int16_t x67 = -263;
	int32_t x68 = 6666268;

	t16 = ((x65%x66)+(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 277624415;
	int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	uint16_t x72 = UINT16_MAX;
	static volatile int64_t t17 = 968LL;

	t17 = ((x69%x70)+(x71<x72));

	if (t17 != 277624415LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -56845544LL;
	static int32_t x74 = 87996;
	uint8_t x75 = 88U;
	int8_t x76 = -30;

	t18 = ((x73%x74)+(x75<x76));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MAX;
	volatile int64_t t19 = -315487096305242LL;

	t19 = ((x77%x78)+(x79<x80));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MIN;
	int32_t x83 = INT32_MIN;
	int64_t x84 = INT64_MIN;
	volatile int32_t t20 = -214;

	t20 = ((x81%x82)+(x83<x84));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = UINT8_MAX;
	uint16_t x87 = 1U;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -1;

	t21 = ((x85%x86)+(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MAX;
	static int16_t x90 = 52;
	uint64_t x91 = UINT64_MAX;
	int32_t t22 = -9;

	t22 = ((x89%x90)+(x91<x92));

	if (t22 != 23) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	static uint64_t x95 = UINT64_MAX;
	uint64_t x96 = UINT64_MAX;
	volatile int64_t t23 = -46630LL;

	t23 = ((x93%x94)+(x95<x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x99 = 14362514;
	volatile int32_t t24 = -495402311;

	t24 = ((x97%x98)+(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	int16_t x102 = -1;
	static int64_t x103 = 7179179713972LL;
	volatile int8_t x104 = -40;

	t25 = ((x101%x102)+(x103<x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 20U;
	volatile uint16_t x106 = UINT16_MAX;

	t26 = ((x105%x106)+(x107<x108));

	if (t26 != 21) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	static int64_t x110 = -191528238264786LL;
	uint32_t x111 = 5773277U;
	int64_t x112 = -1LL;
	int64_t t27 = -3658962498LL;

	t27 = ((x109%x110)+(x111<x112));

	if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = -1;
	int32_t x115 = 1378911;

	t28 = ((x113%x114)+(x115<x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x119 = 0U;
	static int64_t x120 = INT64_MIN;
	volatile int64_t t29 = 2023LL;

	t29 = ((x117%x118)+(x119<x120));

	if (t29 != 3838904LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	static uint64_t x123 = 2LLU;
	static int32_t x124 = -1;
	int32_t t30 = -1;

	t30 = ((x121%x122)+(x123<x124));

	if (t30 != -7) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	int16_t x127 = -136;
	static int64_t x128 = INT64_MIN;

	t31 = ((x125%x126)+(x127<x128));

	if (t31 != 5317) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	static int64_t t32 = 12111LL;

	t32 = ((x129%x130)+(x131<x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -33;
	int8_t x134 = INT8_MIN;
	uint32_t x135 = UINT32_MAX;
	uint32_t x136 = 213U;
	volatile int32_t t33 = -48618;

	t33 = ((x133%x134)+(x135<x136));

	if (t33 != -33) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 3U;
	uint64_t x139 = 2365520583843266769LLU;
	volatile uint32_t x140 = 1202329U;
	volatile uint64_t t34 = 207607363324LLU;

	t34 = ((x137%x138)+(x139<x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	static volatile int64_t x142 = -69184112594713841LL;
	static uint32_t x144 = 17012748U;
	int64_t t35 = 408470LL;

	t35 = ((x141%x142)+(x143<x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	static int16_t x148 = -2009;

	t36 = ((x145%x146)+(x147<x148));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	static int8_t x150 = INT8_MIN;
	uint8_t x151 = UINT8_MAX;
	int64_t t37 = -5LL;

	t37 = ((x149%x150)+(x151<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 626U;
	int8_t x154 = INT8_MAX;
	volatile int64_t x155 = 1028813975610466LL;
	uint64_t x156 = 71555112125LLU;
	volatile int32_t t38 = -7859;

	t38 = ((x153%x154)+(x155<x156));

	if (t38 != 118) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 6;
	uint8_t x158 = UINT8_MAX;
	int64_t x159 = -53326LL;
	volatile int32_t x160 = INT32_MIN;
	int32_t t39 = 4170388;

	t39 = ((x157%x158)+(x159<x160));

	if (t39 != 6) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 2568LL;
	int8_t x162 = -34;
	static int32_t x164 = INT32_MAX;
	volatile int64_t t40 = 2232865LL;

	t40 = ((x161%x162)+(x163<x164));

	if (t40 != 19LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -3;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t41 = -22585;

	t41 = ((x165%x166)+(x167<x168));

	if (t41 != -3) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 1454077032652436653LLU;
	uint32_t x172 = 12U;
	volatile uint64_t t42 = 2094248622393822LLU;

	t42 = ((x169%x170)+(x171<x172));

	if (t42 != 498909840940155890LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int16_t x174 = -1;
	static volatile int64_t x175 = INT64_MIN;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t43 = 0U;

	t43 = ((x173%x174)+(x175<x176));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x179 = -1;
	int16_t x180 = 91;
	static int64_t t44 = 5LL;

	t44 = ((x177%x178)+(x179<x180));

	if (t44 != 8LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MIN;

	t45 = ((x181%x182)+(x183<x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = INT32_MAX;
	uint32_t x186 = UINT32_MAX;
	volatile int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MAX;
	uint32_t t46 = 1U;

	t46 = ((x185%x186)+(x187<x188));

	if (t46 != 2147483648U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	static volatile int16_t x190 = -6;
	static volatile int16_t x191 = -1;
	int32_t x192 = -1;

	t47 = ((x189%x190)+(x191<x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 69088014614089804LLU;
	volatile int32_t x195 = -1;
	static int8_t x196 = -1;
	volatile uint64_t t48 = 163199LLU;

	t48 = ((x193%x194)+(x195<x196));

	if (t48 != 69088014614089804LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 183U;
	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MAX;
	volatile uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = -93277224;

	t49 = ((x197%x198)+(x199<x200));

	if (t49 != 183) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x202 = INT8_MIN;
	static int32_t x203 = 151151;

	t50 = ((x201%x202)+(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = 254U;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t51 = 77;

	t51 = ((x205%x206)+(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	uint64_t x210 = 7096LLU;
	static uint16_t x211 = 21573U;
	int8_t x212 = -1;
	uint64_t t52 = 75LLU;

	t52 = ((x209%x210)+(x211<x212));

	if (t52 != 6855LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	static int64_t x214 = -471LL;
	int64_t x215 = INT64_MAX;

	t53 = ((x213%x214)+(x215<x216));

	if (t53 != -164LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -1;

	t54 = ((x217%x218)+(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -1;
	static int32_t x223 = INT32_MAX;
	static int64_t x224 = -1LL;
	int32_t t55 = -23399986;

	t55 = ((x221%x222)+(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = -1;
	uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MIN;
	int16_t x228 = -1;

	t56 = ((x225%x226)+(x227<x228));

	if (t56 != 1LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -7;
	uint32_t x230 = 473205207U;
	int32_t x231 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	volatile uint32_t t57 = 2074U;

	t57 = ((x229%x230)+(x231<x232));

	if (t57 != 36120426U) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = 704U;
	int8_t x234 = -1;
	static uint32_t x235 = UINT32_MAX;
	int16_t x236 = 5;
	static volatile uint32_t t58 = 716312U;

	t58 = ((x233%x234)+(x235<x236));

	if (t58 != 704U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	int8_t x238 = INT8_MIN;
	uint8_t x239 = 12U;
	int8_t x240 = 9;
	volatile int32_t t59 = 161;

	t59 = ((x237%x238)+(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t60 = -19;

	t60 = ((x241%x242)+(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile int16_t x246 = 488;
	int16_t x247 = -14;
	int64_t x248 = INT64_MAX;
	static int64_t t61 = -1926863959LL;

	t61 = ((x245%x246)+(x247<x248));

	if (t61 != -7LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 62807LL;
	int16_t x251 = INT16_MAX;

	t62 = ((x249%x250)+(x251<x252));

	if (t62 != 2728LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	int32_t x255 = -19186;
	int8_t x256 = -1;
	int64_t t63 = 74089099710991689LL;

	t63 = ((x253%x254)+(x255<x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -1LL;
	int16_t x259 = INT16_MIN;
	volatile uint64_t t64 = 29561613894LLU;

	t64 = ((x257%x258)+(x259<x260));

	if (t64 != 461548760LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x263 = -18;
	int8_t x264 = INT8_MIN;

	t65 = ((x261%x262)+(x263<x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 3298U;
	uint8_t x268 = UINT8_MAX;
	volatile uint32_t t66 = 16150U;

	t66 = ((x265%x266)+(x267<x268));

	if (t66 != 842U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	int16_t x271 = 14;
	uint64_t x272 = 1594LLU;
	static int32_t t67 = 7705211;

	t67 = ((x269%x270)+(x271<x272));

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = -350;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = 1488639059242LLU;
	volatile int32_t t68 = -19786;

	t68 = ((x273%x274)+(x275<x276));

	if (t68 != 85) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	static int16_t x278 = 11473;
	int64_t x280 = -3492914LL;
	volatile int32_t t69 = 180099;

	t69 = ((x277%x278)+(x279<x280));

	if (t69 != -1927) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int16_t x282 = -1;
	int8_t x283 = 2;
	volatile uint16_t x284 = UINT16_MAX;
	int32_t t70 = 0;

	t70 = ((x281%x282)+(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	volatile int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile int32_t t71 = 4;

	t71 = ((x285%x286)+(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x290 = INT8_MIN;
	volatile int16_t x291 = -1;
	int16_t x292 = INT16_MIN;
	static volatile int32_t t72 = -9;

	t72 = ((x289%x290)+(x291<x292));

	if (t72 != 123) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 125650094;
	volatile uint8_t x294 = 1U;
	int32_t x295 = INT32_MIN;
	volatile int64_t x296 = -1LL;
	static volatile int32_t t73 = -384;

	t73 = ((x293%x294)+(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = 300U;
	uint16_t x299 = UINT16_MAX;
	volatile int32_t t74 = 179178373;

	t74 = ((x297%x298)+(x299<x300));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	uint8_t x303 = 0U;
	int32_t x304 = -40251;
	volatile int64_t t75 = -4110391783975LL;

	t75 = ((x301%x302)+(x303<x304));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 43U;
	int64_t x306 = 983201662LL;
	int64_t x308 = -1LL;
	volatile int64_t t76 = -16906602474124LL;

	t76 = ((x305%x306)+(x307<x308));

	if (t76 != 43LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	uint32_t x310 = 13186U;
	int16_t x311 = -1;
	uint16_t x312 = 2U;
	uint32_t t77 = 26649U;

	t77 = ((x309%x310)+(x311<x312));

	if (t77 != 10190U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 75U;
	int16_t x314 = -1;
	int32_t x315 = 40696;
	int64_t x316 = INT64_MIN;
	static int32_t t78 = 41;

	t78 = ((x313%x314)+(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -766933957533652771LL;
	static uint64_t t79 = 812597995317190LLU;

	t79 = ((x317%x318)+(x319<x320));

	if (t79 != 248LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	static int64_t x322 = -1LL;
	volatile uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 14U;
	int64_t t80 = -1124287341LL;

	t80 = ((x321%x322)+(x323<x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MAX;
	int64_t t81 = 35517571589055LL;

	t81 = ((x325%x326)+(x327<x328));

	if (t81 != -26145268LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 3;
	uint32_t x330 = 442523048U;
	static volatile uint64_t x332 = 7570446690562698108LLU;

	t82 = ((x329%x330)+(x331<x332));

	if (t82 != 4U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x334 = UINT64_MAX;
	uint32_t x335 = UINT32_MAX;
	volatile uint64_t t83 = 58943951627LLU;

	t83 = ((x333%x334)+(x335<x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -840962851961LL;
	int64_t x338 = INT64_MIN;
	volatile uint8_t x339 = 53U;
	int64_t x340 = -1LL;

	t84 = ((x337%x338)+(x339<x340));

	if (t84 != -840962851961LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	volatile uint16_t x344 = 24298U;
	volatile uint32_t t85 = 2025999460U;

	t85 = ((x341%x342)+(x343<x344));

	if (t85 != 65535U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	int32_t x346 = -90553225;
	int32_t x347 = -1;
	int32_t x348 = INT32_MAX;
	static int32_t t86 = -1;

	t86 = ((x345%x346)+(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = INT16_MIN;
	int64_t x354 = INT64_MAX;
	volatile int64_t x355 = 142134405LL;
	int64_t t87 = -107LL;

	t87 = ((x353%x354)+(x355<x356));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x358 = INT64_MIN;
	int16_t x359 = -1;
	int32_t x360 = INT32_MAX;
	int64_t t88 = -4050633001038LL;

	t88 = ((x357%x358)+(x359<x360));

	if (t88 != -10LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = 1;
	static volatile int64_t t89 = 51785922706818905LL;

	t89 = ((x361%x362)+(x363<x364));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x366 = 8208592LL;
	int64_t x367 = INT64_MIN;
	static int16_t x368 = 232;
	volatile uint64_t t90 = 5479223161181878494LLU;

	t90 = ((x365%x366)+(x367<x368));

	if (t90 != 2607126LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x370 = UINT16_MAX;
	int32_t x371 = 15;
	static volatile int8_t x372 = -1;

	t91 = ((x369%x370)+(x371<x372));

	if (t91 != 34716U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x373 = 18338U;
	uint16_t x374 = 1U;
	int16_t x375 = INT16_MAX;
	static volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t92 = -565539951;

	t92 = ((x373%x374)+(x375<x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x377 = -1;
	volatile int8_t x378 = INT8_MAX;
	uint8_t x379 = 34U;
	int32_t x380 = 558444933;
	volatile int32_t t93 = -9145;

	t93 = ((x377%x378)+(x379<x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 11085U;
	static int8_t x386 = -1;
	int64_t x387 = 726754LL;
	volatile uint32_t t94 = 6176760U;

	t94 = ((x385%x386)+(x387<x388));

	if (t94 != 11085U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x390 = INT16_MAX;
	uint16_t x391 = 1194U;
	uint8_t x392 = UINT8_MAX;
	int32_t t95 = 17;

	t95 = ((x389%x390)+(x391<x392));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = -2;
	int8_t x394 = -30;
	volatile uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t96 = -627;

	t96 = ((x393%x394)+(x395<x396));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x397 = -1LL;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = UINT8_MAX;
	volatile int64_t t97 = 507647425546691008LL;

	t97 = ((x397%x398)+(x399<x400));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x401 = -2278;
	static int32_t x402 = -1;
	int16_t x403 = INT16_MIN;
	int64_t x404 = -1LL;
	volatile int32_t t98 = 1;

	t98 = ((x401%x402)+(x403<x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x405 = UINT32_MAX;
	static int8_t x406 = INT8_MAX;
	uint64_t x407 = 89917620510902LLU;
	static int8_t x408 = INT8_MIN;
	volatile uint32_t t99 = 45969675U;

	t99 = ((x405%x406)+(x407<x408));

	if (t99 != 16U) { NG(); } else { ; }
	
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

