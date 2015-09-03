#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
int32_t t0 = -1;
uint32_t x14 = UINT32_MAX;
int16_t x17 = 10;
int64_t x18 = 2184440332931LL;
int32_t x19 = INT32_MIN;
volatile int32_t x20 = 22001;
static volatile int32_t t5 = 719849;
int16_t x26 = -47;
uint64_t x30 = UINT64_MAX;
uint16_t x31 = 84U;
volatile int32_t x34 = -1;
int8_t x41 = -1;
volatile int16_t x51 = INT16_MIN;
int64_t x58 = 2575506643225303303LL;
int32_t x63 = INT32_MAX;
volatile int16_t x71 = INT16_MIN;
uint8_t x79 = UINT8_MAX;
volatile uint16_t x85 = UINT16_MAX;
volatile int32_t x88 = -1;
uint8_t x90 = 53U;
uint16_t x92 = 12741U;
int32_t x95 = -1;
volatile int32_t x100 = -1;
int32_t x103 = INT32_MIN;
static int32_t t26 = -1;
volatile int16_t x109 = 2945;
int8_t x110 = -15;
int32_t x112 = INT32_MIN;
int16_t x116 = INT16_MIN;
int64_t x120 = INT64_MIN;
int64_t x125 = 193010LL;
static int16_t x130 = INT16_MIN;
static int8_t x131 = -1;
int16_t x132 = -28;
volatile int32_t t31 = 37087624;
volatile uint8_t x134 = 2U;
int16_t x137 = -1;
int16_t x140 = INT16_MAX;
volatile uint16_t x142 = 46U;
int32_t x148 = INT32_MIN;
int32_t t36 = -29242;
int32_t x158 = INT32_MAX;
int8_t x165 = INT8_MIN;
static volatile int8_t x169 = INT8_MIN;
int8_t x172 = INT8_MAX;
int16_t x173 = -1;
static volatile uint64_t x175 = UINT64_MAX;
int32_t x187 = -63;
uint32_t x190 = 182072U;
int16_t x191 = -1879;
int16_t x193 = INT16_MIN;
int64_t x194 = 9264LL;
volatile int8_t x195 = -1;
static int64_t x196 = INT64_MIN;
int32_t t47 = 2;
static volatile int64_t x201 = INT64_MIN;
volatile int32_t t49 = 95045;
static int32_t t50 = 1179445;
static uint8_t x216 = 1U;
int32_t t52 = 179674;
int64_t x217 = INT64_MIN;
volatile int32_t x225 = -1;
uint8_t x229 = 0U;
int32_t x230 = INT32_MIN;
int8_t x231 = -1;
uint32_t x237 = 21240101U;
int32_t x243 = INT32_MIN;
volatile uint16_t x247 = 12U;
volatile int16_t x254 = INT16_MIN;
volatile int64_t x256 = -1LL;
int32_t t63 = 2878;
int64_t x265 = -2LL;
int64_t x266 = INT64_MIN;
volatile int32_t t68 = 3;
static int32_t x286 = 4733;
int16_t x288 = INT16_MIN;
volatile int32_t t70 = 3794317;
int64_t x298 = INT64_MIN;
uint8_t x299 = 8U;
volatile int32_t x302 = INT32_MIN;
volatile int32_t x306 = INT32_MIN;
int32_t x319 = -1;
volatile int8_t x326 = INT8_MAX;
uint32_t x331 = 59735U;
int8_t x333 = INT8_MIN;
volatile uint16_t x334 = UINT16_MAX;
int8_t x341 = 9;
static int16_t x342 = INT16_MIN;
int64_t x351 = INT64_MAX;
uint16_t x362 = UINT16_MAX;
int32_t x363 = -1;
volatile int32_t t88 = 48934;
static volatile int64_t x367 = INT64_MIN;
int64_t x374 = -1LL;
volatile int8_t x376 = -1;
int64_t x380 = 514483LL;
static volatile int32_t t92 = -1474657;
int8_t x381 = INT8_MIN;
int32_t t93 = 374256;
static int32_t t96 = 5093854;
int32_t x404 = -911748;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int16_t x2 = INT16_MAX;
	uint64_t x4 = UINT64_MAX;

	t0 = ((x1%x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -83174572;

	t1 = ((x5%x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static volatile uint8_t x10 = 1U;
	static int8_t x11 = INT8_MIN;
	int8_t x12 = 0;
	static int32_t t2 = -89;

	t2 = ((x9%x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 350U;
	int32_t x15 = 637;
	volatile uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 14970;

	t3 = ((x13%x14)==(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t t4 = -123;

	t4 = ((x17%x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	static volatile int32_t x24 = INT32_MIN;

	t5 = ((x21%x22)==(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 4U;
	static uint8_t x27 = 13U;
	uint32_t x28 = 3715U;
	int32_t t6 = -11;

	t6 = ((x25%x26)==(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	static uint64_t x32 = 957670113072LLU;
	int32_t t7 = -43;

	t7 = ((x29%x30)==(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile uint64_t x35 = UINT64_MAX;
	int32_t x36 = 1;
	volatile int32_t t8 = -2778030;

	t8 = ((x33%x34)==(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = 15;
	int8_t x38 = -1;
	uint8_t x39 = 2U;
	static int32_t x40 = -12875;
	static volatile int32_t t9 = -3;

	t9 = ((x37%x38)==(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = INT8_MIN;
	int16_t x43 = -1;
	int16_t x44 = 1371;
	volatile int32_t t10 = 129179132;

	t10 = ((x41%x42)==(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	uint16_t x46 = 8534U;
	volatile int32_t x47 = INT32_MIN;
	int32_t x48 = 1117;
	static int32_t t11 = 28;

	t11 = ((x45%x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = -12697014LL;
	static volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 15884;

	t12 = ((x49%x50)==(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t13 = 911;

	t13 = ((x53%x54)==(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = UINT8_MAX;
	static int64_t x59 = 187036038522LL;
	volatile int64_t x60 = INT64_MAX;
	volatile int32_t t14 = 38;

	t14 = ((x57%x58)==(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int8_t x62 = -1;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 333755;

	t15 = ((x61%x62)==(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	int64_t x66 = -1LL;
	int8_t x67 = INT8_MIN;
	volatile int8_t x68 = 13;
	static int32_t t16 = 29856341;

	t16 = ((x65%x66)==(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1550;
	int64_t x70 = INT64_MIN;
	volatile int64_t x72 = -1LL;
	int32_t t17 = 570;

	t17 = ((x69%x70)==(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 537U;
	uint16_t x74 = 6704U;
	static int16_t x75 = -102;
	uint32_t x76 = 36626246U;
	volatile int32_t t18 = 108;

	t18 = ((x73%x74)==(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = -1LL;
	static int32_t x80 = INT32_MIN;
	static volatile int32_t t19 = 50;

	t19 = ((x77%x78)==(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 3U;
	static uint64_t x84 = 34LLU;
	volatile int32_t t20 = -4124066;

	t20 = ((x81%x82)==(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MIN;
	int32_t t21 = -2;

	t21 = ((x85%x86)==(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	volatile uint32_t x91 = 4926309U;
	volatile int32_t t22 = 3;

	t22 = ((x89%x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 114U;
	int8_t x94 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 187399975;

	t23 = ((x93%x94)==(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static volatile int32_t x98 = -1;
	volatile int64_t x99 = INT64_MAX;
	volatile int32_t t24 = 20;

	t24 = ((x97%x98)==(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint64_t x102 = 372597LLU;
	uint64_t x104 = 49287677457651LLU;
	volatile int32_t t25 = -28194343;

	t25 = ((x101%x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 7;
	int8_t x106 = 1;
	volatile uint16_t x107 = UINT16_MAX;
	int16_t x108 = 0;

	t26 = ((x105%x106)==(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x111 = -1;
	static int32_t t27 = 2683536;

	t27 = ((x109%x110)==(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 1170U;
	int8_t x114 = -1;
	uint32_t x115 = 5U;
	volatile int32_t t28 = -1;

	t28 = ((x113%x114)==(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MAX;
	static int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	static int32_t t29 = -1064;

	t29 = ((x117%x118)==(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = 725U;
	int8_t x127 = -1;
	static uint32_t x128 = UINT32_MAX;
	volatile int32_t t30 = -38931;

	t30 = ((x125%x126)==(x127<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;

	t31 = ((x129%x130)==(x131<x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t x135 = -1;
	static volatile int64_t x136 = INT64_MIN;
	volatile int32_t t32 = -15;

	t32 = ((x133%x134)==(x135<x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x138 = INT32_MIN;
	volatile uint32_t x139 = 185U;
	volatile int32_t t33 = -18;

	t33 = ((x137%x138)==(x139<x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = 9;
	int64_t x143 = 1804LL;
	int64_t x144 = INT64_MAX;
	int32_t t34 = 150888;

	t34 = ((x141%x142)==(x143<x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MIN;
	static int16_t x146 = 1572;
	int8_t x147 = INT8_MIN;
	volatile int32_t t35 = -908577;

	t35 = ((x145%x146)==(x147<x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x149 = -1;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = UINT32_MAX;
	static uint32_t x152 = 1167592857U;

	t36 = ((x149%x150)==(x151<x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MAX;
	static uint16_t x154 = UINT16_MAX;
	uint16_t x155 = UINT16_MAX;
	static volatile int64_t x156 = -1LL;
	volatile int32_t t37 = 10620364;

	t37 = ((x153%x154)==(x155<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	int64_t x159 = INT64_MIN;
	volatile int32_t x160 = INT32_MIN;
	int32_t t38 = 1651839;

	t38 = ((x157%x158)==(x159<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = INT16_MAX;
	static int16_t x162 = 2;
	volatile int16_t x163 = -8;
	int16_t x164 = -1;
	int32_t t39 = -1;

	t39 = ((x161%x162)==(x163<x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MIN;
	uint32_t x167 = UINT32_MAX;
	static int64_t x168 = 101415293LL;
	volatile int32_t t40 = 40544955;

	t40 = ((x165%x166)==(x167<x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MAX;
	int16_t x171 = INT16_MIN;
	int32_t t41 = 261469;

	t41 = ((x169%x170)==(x171<x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x174 = INT32_MIN;
	int32_t x176 = INT32_MAX;
	volatile int32_t t42 = 3;

	t42 = ((x173%x174)==(x175<x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x177 = 7U;
	int16_t x178 = 6517;
	volatile int16_t x179 = 462;
	volatile int16_t x180 = -38;
	static volatile int32_t t43 = -48722;

	t43 = ((x177%x178)==(x179<x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MIN;
	volatile int8_t x182 = -1;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	static volatile int32_t t44 = -8045718;

	t44 = ((x181%x182)==(x183<x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x185 = -1LL;
	uint8_t x186 = UINT8_MAX;
	int16_t x188 = INT16_MAX;
	volatile int32_t t45 = -8354531;

	t45 = ((x185%x186)==(x187<x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = -1;
	volatile int64_t x192 = INT64_MIN;
	int32_t t46 = 0;

	t46 = ((x189%x190)==(x191<x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {


	t47 = ((x193%x194)==(x195<x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 863U;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 1138U;
	int8_t x200 = INT8_MIN;
	volatile int32_t t48 = 2;

	t48 = ((x197%x198)==(x199<x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x202 = 11;
	int8_t x203 = -1;
	uint8_t x204 = 60U;

	t49 = ((x201%x202)==(x203<x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	int8_t x206 = INT8_MIN;
	static uint16_t x207 = UINT16_MAX;
	int64_t x208 = 2128310016556682LL;

	t50 = ((x205%x206)==(x207<x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = -13873;
	int16_t x211 = INT16_MIN;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t51 = 4975;

	t51 = ((x209%x210)==(x211<x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int64_t x213 = INT64_MAX;
	int32_t x214 = INT32_MAX;
	int64_t x215 = INT64_MAX;

	t52 = ((x213%x214)==(x215<x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	static uint16_t x220 = UINT16_MAX;
	int32_t t53 = -61034315;

	t53 = ((x217%x218)==(x219<x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	int16_t x222 = -1;
	int64_t x223 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;
	volatile int32_t t54 = 278298610;

	t54 = ((x221%x222)==(x223<x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x226 = -1;
	int64_t x227 = -1LL;
	uint32_t x228 = UINT32_MAX;
	volatile int32_t t55 = -1469428;

	t55 = ((x225%x226)==(x227<x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t56 = -3746223;

	t56 = ((x229%x230)==(x231<x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x233 = 49726742U;
	static uint8_t x234 = UINT8_MAX;
	uint32_t x235 = 95808U;
	volatile int64_t x236 = -1LL;
	volatile int32_t t57 = -8246;

	t57 = ((x233%x234)==(x235<x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x238 = INT8_MAX;
	uint32_t x239 = UINT32_MAX;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t58 = 422161865;

	t58 = ((x237%x238)==(x239<x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x241 = -3;
	int8_t x242 = 3;
	uint32_t x244 = 20249400U;
	int32_t t59 = 45977324;

	t59 = ((x241%x242)==(x243<x244));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MAX;
	volatile int16_t x248 = 7195;
	volatile int32_t t60 = 0;

	t60 = ((x245%x246)==(x247<x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x249 = UINT8_MAX;
	static int16_t x250 = INT16_MAX;
	int32_t x251 = -14;
	uint16_t x252 = 10U;
	volatile int32_t t61 = 13;

	t61 = ((x249%x250)==(x251<x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	uint16_t x255 = 21885U;
	int32_t t62 = 9224795;

	t62 = ((x253%x254)==(x255<x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 24665U;
	static int8_t x258 = -1;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;

	t63 = ((x257%x258)==(x259<x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x261 = UINT8_MAX;
	int64_t x262 = 38LL;
	uint32_t x263 = UINT32_MAX;
	volatile int16_t x264 = 2990;
	static volatile int32_t t64 = -6612;

	t64 = ((x261%x262)==(x263<x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x267 = 3446174973886LL;
	int32_t x268 = INT32_MIN;
	int32_t t65 = 22343;

	t65 = ((x265%x266)==(x267<x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	static int32_t x271 = -1;
	int16_t x272 = -11456;
	volatile int32_t t66 = 122;

	t66 = ((x269%x270)==(x271<x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	int16_t x275 = INT16_MAX;
	volatile int64_t x276 = INT64_MAX;
	static int32_t t67 = 204990894;

	t67 = ((x273%x274)==(x275<x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 1662U;
	int8_t x278 = -1;
	static volatile uint16_t x279 = UINT16_MAX;
	uint64_t x280 = 28515632042636LLU;

	t68 = ((x277%x278)==(x279<x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MAX;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = 2U;
	volatile int64_t x284 = -1LL;
	static volatile int32_t t69 = -1542272;

	t69 = ((x281%x282)==(x283<x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static int64_t x287 = INT64_MAX;

	t70 = ((x285%x286)==(x287<x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	uint32_t x290 = 2846U;
	static volatile uint64_t x291 = UINT64_MAX;
	int8_t x292 = 0;
	volatile int32_t t71 = 1045;

	t71 = ((x289%x290)==(x291<x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	volatile int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;
	int64_t x296 = -1LL;
	int32_t t72 = -107882753;

	t72 = ((x293%x294)==(x295<x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x300 = -1;
	int32_t t73 = 675518;

	t73 = ((x297%x298)==(x299<x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x301 = -1;
	static volatile int64_t x303 = INT64_MIN;
	uint32_t x304 = 0U;
	int32_t t74 = 1;

	t74 = ((x301%x302)==(x303<x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x307 = UINT16_MAX;
	int8_t x308 = INT8_MIN;
	volatile int32_t t75 = -21;

	t75 = ((x305%x306)==(x307<x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 7U;
	uint64_t x310 = 2LLU;
	volatile int16_t x311 = -3160;
	int64_t x312 = -43422113577933LL;
	static volatile int32_t t76 = 248353173;

	t76 = ((x309%x310)==(x311<x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x317 = 209U;
	int64_t x318 = -1LL;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t77 = -119825;

	t77 = ((x317%x318)==(x319<x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MAX;
	static int8_t x322 = -1;
	int64_t x323 = -4496481525LL;
	volatile uint64_t x324 = 1007286149380LLU;
	volatile int32_t t78 = -4447476;

	t78 = ((x321%x322)==(x323<x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x325 = 10306808102LLU;
	static int64_t x327 = -1LL;
	uint8_t x328 = 89U;
	volatile int32_t t79 = -200946063;

	t79 = ((x325%x326)==(x327<x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = -41933LL;
	int32_t x330 = -6546;
	int32_t x332 = INT32_MIN;
	int32_t t80 = -1202;

	t80 = ((x329%x330)==(x331<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x335 = INT32_MIN;
	uint16_t x336 = 23240U;
	volatile int32_t t81 = -153869716;

	t81 = ((x333%x334)==(x335<x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x337 = -1012;
	int8_t x338 = -1;
	uint16_t x339 = 1810U;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t82 = -1;

	t82 = ((x337%x338)==(x339<x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x343 = 4005;
	static volatile uint64_t x344 = UINT64_MAX;
	static volatile int32_t t83 = -13;

	t83 = ((x341%x342)==(x343<x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	int64_t x346 = -257434477943035030LL;
	static int8_t x347 = INT8_MIN;
	int16_t x348 = -1;
	static volatile int32_t t84 = 17117411;

	t84 = ((x345%x346)==(x347<x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x349 = -25LL;
	int64_t x350 = -43698LL;
	uint64_t x352 = UINT64_MAX;
	int32_t t85 = 424126564;

	t85 = ((x349%x350)==(x351<x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x353 = UINT8_MAX;
	int8_t x354 = -56;
	uint64_t x355 = UINT64_MAX;
	static int8_t x356 = 1;
	int32_t t86 = -12041549;

	t86 = ((x353%x354)==(x355<x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = UINT8_MAX;
	static int64_t x358 = 46973724LL;
	int64_t x359 = INT64_MIN;
	volatile int16_t x360 = -30;
	static int32_t t87 = 216;

	t87 = ((x357%x358)==(x359<x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x361 = 1789544420U;
	int16_t x364 = -1;

	t88 = ((x361%x362)==(x363<x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -72;
	int8_t x368 = -28;
	volatile int32_t t89 = -116503;

	t89 = ((x365%x366)==(x367<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -707;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t90 = 222989112;

	t90 = ((x369%x370)==(x371<x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x373 = 2040U;
	volatile uint32_t x375 = 536U;
	static int32_t t91 = 14426169;

	t91 = ((x373%x374)==(x375<x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -60771;
	int32_t x378 = -204;
	volatile uint16_t x379 = UINT16_MAX;

	t92 = ((x377%x378)==(x379<x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x382 = -1;
	volatile int8_t x383 = INT8_MIN;
	static volatile uint64_t x384 = 1313174839725006001LLU;

	t93 = ((x381%x382)==(x383<x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x385 = 7U;
	uint16_t x386 = 24893U;
	int8_t x387 = INT8_MIN;
	int16_t x388 = 3201;
	volatile int32_t t94 = 0;

	t94 = ((x385%x386)==(x387<x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MIN;
	uint8_t x390 = UINT8_MAX;
	int8_t x391 = 59;
	int32_t x392 = -1;
	int32_t t95 = 20672214;

	t95 = ((x389%x390)==(x391<x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = 43462759951676LLU;
	uint16_t x394 = 392U;
	int8_t x395 = INT8_MIN;
	volatile uint64_t x396 = 13319LLU;

	t96 = ((x393%x394)==(x395<x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = INT32_MAX;
	int16_t x398 = 3678;
	int16_t x399 = INT16_MIN;
	uint16_t x400 = 4746U;
	volatile int32_t t97 = 936;

	t97 = ((x397%x398)==(x399<x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x401 = -1;
	int8_t x402 = -1;
	volatile int32_t x403 = 31163;
	int32_t t98 = 460;

	t98 = ((x401%x402)==(x403<x404));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x405 = 13U;
	int64_t x406 = -64224135616958LL;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MAX;
	int32_t t99 = 7544681;

	t99 = ((x405%x406)==(x407<x408));

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

