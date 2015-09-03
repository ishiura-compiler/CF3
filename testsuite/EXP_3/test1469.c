#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -4391;
uint16_t x7 = 0U;
volatile int32_t t3 = -335444574;
volatile uint64_t x17 = 0LLU;
volatile int32_t x18 = -1;
static int64_t x28 = -389255769LL;
int32_t t6 = 121539;
uint32_t x31 = UINT32_MAX;
volatile int8_t x36 = INT8_MAX;
int32_t x43 = -1;
static volatile int16_t x47 = INT16_MIN;
int32_t x52 = INT32_MAX;
int16_t x59 = -15781;
int64_t x65 = 97262551579LL;
volatile uint64_t x68 = 39LLU;
static volatile int32_t x70 = INT32_MAX;
int8_t x73 = -46;
volatile int32_t t18 = -110596154;
uint32_t x77 = 2221878U;
static int8_t x81 = INT8_MIN;
int8_t x83 = -7;
static int64_t x87 = -175751700620074091LL;
uint8_t x88 = 40U;
volatile int32_t x100 = INT32_MAX;
volatile int64_t x101 = INT64_MAX;
int32_t x112 = INT32_MAX;
int64_t x119 = -37530LL;
int32_t x132 = 2027;
uint64_t x142 = UINT64_MAX;
volatile int32_t t35 = -21349945;
int8_t x146 = 39;
volatile int32_t t38 = -23498;
static int32_t x159 = 47668782;
int32_t x171 = INT32_MIN;
int8_t x174 = INT8_MIN;
uint16_t x175 = 1U;
int64_t x179 = INT64_MIN;
int8_t x185 = -1;
int32_t x192 = INT32_MIN;
int16_t x202 = INT16_MIN;
int32_t t50 = -252396;
uint8_t x205 = 12U;
uint64_t x206 = UINT64_MAX;
uint16_t x208 = 1U;
static uint16_t x212 = 26U;
static int32_t t52 = 1;
int16_t x213 = -5;
int32_t x214 = INT32_MIN;
static uint32_t x219 = 149999U;
int16_t x221 = INT16_MIN;
volatile uint32_t x224 = 32482U;
static int32_t x230 = -48186;
int32_t x232 = INT32_MIN;
static int64_t x245 = INT64_MAX;
int8_t x249 = INT8_MIN;
uint8_t x253 = 104U;
uint32_t x258 = 37538U;
static volatile int32_t t64 = 65;
uint32_t x265 = 2594169U;
int64_t x269 = INT64_MAX;
int8_t x277 = 1;
static volatile int8_t x282 = -1;
int8_t x294 = -1;
int8_t x296 = INT8_MAX;
int16_t x305 = 3660;
int32_t t76 = 17424;
volatile int64_t x318 = INT64_MAX;
static int32_t t79 = 34324165;
static int64_t x326 = 6962657378311LL;
int8_t x333 = 2;
static int8_t x335 = -1;
int16_t x340 = INT16_MAX;
volatile int32_t t84 = -2469;
volatile int8_t x349 = INT8_MIN;
uint64_t x352 = UINT64_MAX;
volatile int32_t x354 = 17;
int16_t x360 = INT16_MIN;
volatile int64_t x362 = 963503LL;
int32_t x366 = -148;
int16_t x370 = -1;
uint64_t x373 = UINT64_MAX;
int64_t x374 = -111400112175535LL;
uint64_t x384 = UINT64_MAX;
int32_t t95 = -111;
static volatile int8_t x386 = INT8_MIN;
int8_t x389 = INT8_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = -241479;

	t0 = ((x1<x2)^(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 586046429823960LLU;
	uint8_t x6 = 55U;
	static int16_t x8 = -1;
	int32_t t1 = -7;

	t1 = ((x5<x6)^(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 85U;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = -11;

	t2 = ((x9<x10)^(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint64_t x14 = 227776LLU;
	volatile int8_t x15 = -1;
	uint8_t x16 = 6U;

	t3 = ((x13<x14)^(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = INT16_MIN;
	static uint8_t x20 = 3U;
	volatile int32_t t4 = 2087911;

	t4 = ((x17<x18)^(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	volatile int8_t x22 = INT8_MIN;
	volatile int32_t x23 = INT32_MIN;
	static int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 1515;

	t5 = ((x21<x22)^(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 2326585U;
	int32_t x26 = -1;
	static uint16_t x27 = UINT16_MAX;

	t6 = ((x25<x26)^(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = 1;
	volatile int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 643248611;

	t7 = ((x29<x30)^(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int32_t x34 = -2249;
	int64_t x35 = INT64_MIN;
	int32_t t8 = -3321177;

	t8 = ((x33<x34)^(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 2663U;
	volatile uint8_t x38 = 1U;
	static int32_t x39 = -1;
	int16_t x40 = INT16_MIN;
	int32_t t9 = 326;

	t9 = ((x37<x38)^(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = INT8_MIN;
	int16_t x44 = INT16_MIN;
	int32_t t10 = -1684;

	t10 = ((x41<x42)^(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	volatile uint8_t x46 = UINT8_MAX;
	int64_t x48 = INT64_MIN;
	static int32_t t11 = 886637678;

	t11 = ((x45<x46)^(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int32_t x50 = -57553;
	uint64_t x51 = 55262403492958135LLU;
	int32_t t12 = -1736242;

	t12 = ((x49<x50)^(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	volatile uint32_t x54 = UINT32_MAX;
	uint8_t x55 = UINT8_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = -9407;

	t13 = ((x53<x54)^(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 0;
	static int32_t x58 = -5;
	int16_t x60 = 19;
	volatile int32_t t14 = 41;

	t14 = ((x57<x58)^(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 59LLU;
	int64_t x62 = INT64_MAX;
	uint8_t x63 = 3U;
	volatile uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = -3957883;

	t15 = ((x61<x62)^(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x66 = 9;
	uint64_t x67 = 620780987147LLU;
	volatile int32_t t16 = 59950361;

	t16 = ((x65<x66)^(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = INT16_MIN;
	int8_t x71 = -1;
	int16_t x72 = -1;
	volatile int32_t t17 = -244723344;

	t17 = ((x69<x70)^(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MAX;
	uint16_t x75 = 438U;
	static uint32_t x76 = UINT32_MAX;

	t18 = ((x73<x74)^(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x78 = 2U;
	static int32_t x79 = -1;
	int16_t x80 = -1446;
	static volatile int32_t t19 = -5879693;

	t19 = ((x77<x78)^(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = INT32_MIN;
	static int16_t x84 = 4751;
	volatile int32_t t20 = -72989950;

	t20 = ((x81<x82)^(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 38339887U;
	volatile int32_t x86 = INT32_MAX;
	int32_t t21 = -115909447;

	t21 = ((x85<x86)^(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int16_t x90 = -10843;
	volatile uint32_t x91 = 1U;
	volatile int32_t x92 = INT32_MIN;
	static int32_t t22 = -32017;

	t22 = ((x89<x90)^(x91<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int8_t x94 = -4;
	uint16_t x95 = 2616U;
	static uint8_t x96 = 3U;
	volatile int32_t t23 = 16274;

	t23 = ((x93<x94)^(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	static volatile uint16_t x98 = 23U;
	volatile int64_t x99 = INT64_MIN;
	volatile int32_t t24 = -530;

	t24 = ((x97<x98)^(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -16;
	int8_t x103 = 0;
	int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -12;

	t25 = ((x101<x102)^(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -1;
	uint32_t x106 = UINT32_MAX;
	volatile uint32_t x107 = 200228U;
	int32_t x108 = -2471;
	volatile int32_t t26 = 3523600;

	t26 = ((x105<x106)^(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -1LL;
	int8_t x110 = -1;
	int8_t x111 = -1;
	int32_t t27 = 187;

	t27 = ((x109<x110)^(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	volatile int32_t x114 = 6;
	int8_t x115 = 12;
	uint16_t x116 = 8984U;
	volatile int32_t t28 = -172222396;

	t28 = ((x113<x114)^(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 23U;
	int64_t x118 = INT64_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -1483393;

	t29 = ((x117<x118)^(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = INT16_MIN;
	static volatile int8_t x123 = INT8_MIN;
	int16_t x124 = -4087;
	int32_t t30 = -273100;

	t30 = ((x121<x122)^(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 150755128937332213LLU;
	uint8_t x126 = 1U;
	int8_t x127 = -26;
	volatile int32_t x128 = -1;
	static volatile int32_t t31 = -297;

	t31 = ((x125<x126)^(x127<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -16;
	volatile int64_t x130 = -2093599486294LL;
	volatile int32_t x131 = 2182547;
	volatile int32_t t32 = -396;

	t32 = ((x129<x130)^(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = 650378656564518LLU;
	int16_t x136 = -1;
	int32_t t33 = -57;

	t33 = ((x133<x134)^(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -1;
	static int64_t x138 = 18981LL;
	int16_t x139 = INT16_MIN;
	static uint16_t x140 = 3805U;
	volatile int32_t t34 = -56767645;

	t34 = ((x137<x138)^(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x143 = INT8_MIN;
	static volatile uint64_t x144 = 741378LLU;

	t35 = ((x141<x142)^(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 0;

	t36 = ((x145<x146)^(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	static int32_t x150 = -60716;
	static int32_t x151 = 9660715;
	int64_t x152 = -1LL;
	volatile int32_t t37 = 6;

	t37 = ((x149<x150)^(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 4144682U;
	int64_t x154 = INT64_MIN;
	volatile uint16_t x155 = 192U;
	int64_t x156 = INT64_MIN;

	t38 = ((x153<x154)^(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 14360LLU;
	int32_t x158 = -1;
	uint64_t x160 = 12860584151158297LLU;
	volatile int32_t t39 = -105374125;

	t39 = ((x157<x158)^(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 0U;
	uint16_t x162 = 14U;
	int8_t x163 = 1;
	volatile uint8_t x164 = 4U;
	int32_t t40 = -1033443;

	t40 = ((x161<x162)^(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = INT32_MAX;
	uint16_t x167 = 47U;
	static uint32_t x168 = 5470U;
	volatile int32_t t41 = 50;

	t41 = ((x165<x166)^(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = -5415697;
	int64_t x170 = INT64_MAX;
	static uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = 6541;

	t42 = ((x169<x170)^(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	static int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 19124;

	t43 = ((x173<x174)^(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -1LL;
	uint64_t x180 = 1989229928191376LLU;
	static volatile int32_t t44 = 5;

	t44 = ((x177<x178)^(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 1U;
	uint8_t x183 = 7U;
	int64_t x184 = -5838391841LL;
	volatile int32_t t45 = 4;

	t45 = ((x181<x182)^(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x186 = INT16_MIN;
	int8_t x187 = INT8_MIN;
	int16_t x188 = -1;
	int32_t t46 = 8500;

	t46 = ((x185<x186)^(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = 19388957347431LL;
	static uint64_t x190 = UINT64_MAX;
	int16_t x191 = 38;
	static volatile int32_t t47 = -304;

	t47 = ((x189<x190)^(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = -1LL;
	volatile int32_t x194 = INT32_MIN;
	volatile int8_t x195 = INT8_MIN;
	uint16_t x196 = 71U;
	volatile int32_t t48 = 2;

	t48 = ((x193<x194)^(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	static uint16_t x198 = UINT16_MAX;
	int8_t x199 = INT8_MIN;
	int64_t x200 = INT64_MAX;
	int32_t t49 = 4766187;

	t49 = ((x197<x198)^(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int16_t x203 = -1;
	uint32_t x204 = UINT32_MAX;

	t50 = ((x201<x202)^(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x207 = 7;
	static volatile int32_t t51 = 18;

	t51 = ((x205<x206)^(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 178077882;
	int16_t x210 = -13;
	uint16_t x211 = 20032U;

	t52 = ((x209<x210)^(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = 1492U;
	int32_t t53 = -7;

	t53 = ((x213<x214)^(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 36U;
	int32_t x220 = -1;
	int32_t t54 = -3;

	t54 = ((x217<x218)^(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x222 = 29766179U;
	int32_t x223 = -443;
	volatile int32_t t55 = 1;

	t55 = ((x221<x222)^(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = -1;
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -1;

	t56 = ((x225<x226)^(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = INT64_MAX;
	int64_t x231 = -4691204309761LL;
	volatile int32_t t57 = 1055541;

	t57 = ((x229<x230)^(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 64U;
	int32_t x234 = 0;
	uint32_t x235 = UINT32_MAX;
	uint8_t x236 = 4U;
	volatile int32_t t58 = 18;

	t58 = ((x233<x234)^(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 32505614830LL;
	int8_t x238 = INT8_MIN;
	static int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t59 = -102216;

	t59 = ((x237<x238)^(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = 44189229LL;
	static int16_t x242 = INT16_MAX;
	uint64_t x243 = 5LLU;
	static int32_t x244 = 8626939;
	static volatile int32_t t60 = -1;

	t60 = ((x241<x242)^(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = INT8_MAX;
	int8_t x247 = -1;
	static uint64_t x248 = UINT64_MAX;
	int32_t t61 = -814470;

	t61 = ((x245<x246)^(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = -1LL;
	static volatile uint16_t x251 = 691U;
	int32_t x252 = 2587414;
	int32_t t62 = -873;

	t62 = ((x249<x250)^(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x254 = INT32_MIN;
	int8_t x255 = INT8_MIN;
	int16_t x256 = INT16_MAX;
	volatile int32_t t63 = -47737;

	t63 = ((x253<x254)^(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 4582U;
	volatile int64_t x259 = INT64_MAX;
	int32_t x260 = -1;

	t64 = ((x257<x258)^(x259<x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x261 = 5412U;
	int32_t x262 = INT32_MAX;
	uint16_t x263 = UINT16_MAX;
	uint8_t x264 = 1U;
	volatile int32_t t65 = -48662;

	t65 = ((x261<x262)^(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	uint64_t x267 = 8LLU;
	int64_t x268 = -1LL;
	int32_t t66 = -106;

	t66 = ((x265<x266)^(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x270 = INT64_MAX;
	uint64_t x271 = 98197978724482LLU;
	volatile int32_t x272 = 2;
	static volatile int32_t t67 = 3468905;

	t67 = ((x269<x270)^(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = 23;
	uint64_t x274 = UINT64_MAX;
	static int16_t x275 = -11;
	volatile uint16_t x276 = 7285U;
	static int32_t t68 = -19;

	t68 = ((x273<x274)^(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -37;
	volatile uint8_t x279 = 26U;
	int64_t x280 = -674083903857LL;
	volatile int32_t t69 = 0;

	t69 = ((x277<x278)^(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = 943196LL;
	static volatile int32_t t70 = 870402;

	t70 = ((x281<x282)^(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = 25122U;
	int64_t x286 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = -1;
	int32_t t71 = -27129928;

	t71 = ((x285<x286)^(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = 22U;
	static volatile uint8_t x290 = 10U;
	uint32_t x291 = 417718748U;
	volatile uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -501;

	t72 = ((x289<x290)^(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = -1;
	static volatile int32_t x295 = -507024169;
	volatile int32_t t73 = 1;

	t73 = ((x293<x294)^(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 7U;
	int16_t x298 = -1;
	static uint8_t x299 = 34U;
	static uint16_t x300 = 11U;
	static int32_t t74 = 6;

	t74 = ((x297<x298)^(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = 426722514U;
	int16_t x302 = -1;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MIN;
	volatile int32_t t75 = 3856;

	t75 = ((x301<x302)^(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int16_t x307 = 2;
	volatile int32_t x308 = 1847;

	t76 = ((x305<x306)^(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 76704195LLU;
	static uint16_t x310 = 1825U;
	uint16_t x311 = 14100U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t77 = 124803105;

	t77 = ((x309<x310)^(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 3LLU;
	uint32_t x315 = 880U;
	static int16_t x316 = -9;
	int32_t t78 = 2;

	t78 = ((x313<x314)^(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static uint8_t x319 = 3U;
	static volatile uint64_t x320 = 15810LLU;

	t79 = ((x317<x318)^(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = INT16_MIN;
	int32_t x323 = 2620091;
	int16_t x324 = INT16_MIN;
	int32_t t80 = -133;

	t80 = ((x321<x322)^(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 7U;
	int64_t x327 = -48151874607693277LL;
	int32_t x328 = INT32_MAX;
	int32_t t81 = 200893204;

	t81 = ((x325<x326)^(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MAX;
	static int64_t x331 = -125203069977LL;
	uint64_t x332 = 214500707792882557LLU;
	static volatile int32_t t82 = -3834327;

	t82 = ((x329<x330)^(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x334 = -50249553174212975LL;
	uint64_t x336 = 450LLU;
	int32_t t83 = 343048;

	t83 = ((x333<x334)^(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	static volatile uint16_t x338 = 166U;
	volatile uint16_t x339 = 33U;

	t84 = ((x337<x338)^(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	uint16_t x342 = 0U;
	int8_t x343 = -25;
	volatile int8_t x344 = 3;
	volatile int32_t t85 = 7806789;

	t85 = ((x341<x342)^(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MAX;
	volatile int32_t t86 = 3541373;

	t86 = ((x345<x346)^(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 4U;
	static uint64_t x351 = 67836823855LLU;
	volatile int32_t t87 = 10;

	t87 = ((x349<x350)^(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint32_t x355 = 3U;
	int16_t x356 = -1;
	int32_t t88 = -127;

	t88 = ((x353<x354)^(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 1;
	uint16_t x358 = 28U;
	int64_t x359 = -164294413LL;
	int32_t t89 = -266547719;

	t89 = ((x357<x358)^(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -1;
	int32_t x363 = -2090208;
	static int16_t x364 = -1;
	static int32_t t90 = 56068309;

	t90 = ((x361<x362)^(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x365 = -1;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MIN;
	volatile int32_t t91 = 1;

	t91 = ((x365<x366)^(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x369 = -1;
	static volatile uint16_t x371 = UINT16_MAX;
	uint32_t x372 = 37453000U;
	volatile int32_t t92 = -1064558978;

	t92 = ((x369<x370)^(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x375 = -6980LL;
	int16_t x376 = -1;
	volatile int32_t t93 = -11247;

	t93 = ((x373<x374)^(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 4554961U;
	int64_t x378 = INT64_MAX;
	static uint16_t x379 = 589U;
	static int16_t x380 = -489;
	volatile int32_t t94 = 188208667;

	t94 = ((x377<x378)^(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 10U;
	uint16_t x382 = 1U;
	uint64_t x383 = 248955605582326840LLU;

	t95 = ((x381<x382)^(x383<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = -1;
	static int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t96 = -7;

	t96 = ((x385<x386)^(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MAX;
	volatile int64_t x392 = INT64_MAX;
	static int32_t t97 = 148035873;

	t97 = ((x389<x390)^(x391<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile uint64_t x394 = 2287053652113941872LLU;
	int16_t x395 = INT16_MIN;
	static int32_t x396 = INT32_MIN;
	int32_t t98 = 0;

	t98 = ((x393<x394)^(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x397 = INT16_MAX;
	uint16_t x398 = UINT16_MAX;
	volatile int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MAX;
	int32_t t99 = -1441;

	t99 = ((x397<x398)^(x399<x400));

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

