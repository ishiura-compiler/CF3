#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -2691;
volatile int32_t t0 = -207;
int8_t x7 = 3;
volatile uint8_t x9 = 6U;
volatile int32_t t2 = 1845166;
volatile int8_t x13 = INT8_MAX;
int64_t x14 = -33540687LL;
static uint32_t x30 = 70471111U;
volatile uint16_t x36 = UINT16_MAX;
uint16_t x45 = UINT16_MAX;
static int8_t x47 = INT8_MIN;
static int32_t t11 = 0;
uint32_t x50 = UINT32_MAX;
uint8_t x55 = 51U;
int16_t x62 = -1;
int32_t x68 = -1;
static volatile int8_t x73 = INT8_MAX;
volatile int32_t t20 = 98182;
volatile int8_t x88 = -1;
volatile int32_t t22 = 164006;
uint16_t x97 = 28522U;
int64_t x99 = INT64_MIN;
volatile int32_t t24 = -4900;
uint64_t x111 = 173592737181434LLU;
static uint64_t x115 = 238298234776296LLU;
volatile int64_t x126 = INT64_MAX;
static volatile uint8_t x140 = 102U;
volatile int32_t t33 = 1932476;
static uint64_t x141 = UINT64_MAX;
volatile int32_t t34 = -12828;
uint16_t x155 = 0U;
uint64_t x158 = 4277LLU;
int32_t t37 = -1;
int16_t x168 = -40;
volatile int8_t x172 = INT8_MAX;
volatile int32_t x174 = 4379;
static int32_t x178 = -12257;
int32_t x184 = 7736259;
int64_t x186 = 18056LL;
int8_t x191 = INT8_MIN;
volatile int64_t x195 = INT64_MAX;
volatile int32_t t49 = -908364;
int32_t x211 = INT32_MIN;
int16_t x224 = INT16_MIN;
int16_t x227 = INT16_MIN;
int64_t x230 = 31831889624030725LL;
int32_t x236 = -1;
volatile int32_t x249 = INT32_MIN;
int16_t x254 = INT16_MAX;
int16_t x263 = INT16_MIN;
int64_t x264 = INT64_MIN;
static volatile int32_t t63 = -1;
static volatile uint64_t x267 = 5351LLU;
uint32_t x273 = UINT32_MAX;
uint8_t x276 = 11U;
int64_t x279 = INT64_MIN;
int8_t x285 = INT8_MIN;
int32_t x286 = INT32_MIN;
volatile int32_t t68 = -3328;
volatile int32_t x290 = INT32_MIN;
volatile int32_t x292 = -52087;
volatile uint32_t x293 = UINT32_MAX;
static volatile uint16_t x294 = 48U;
int8_t x295 = INT8_MAX;
volatile int32_t t70 = 251112;
volatile int8_t x303 = INT8_MIN;
uint8_t x308 = UINT8_MAX;
uint32_t x312 = 105U;
static uint8_t x313 = 4U;
int8_t x314 = INT8_MIN;
static uint64_t x327 = 61873965500494238LLU;
int64_t x334 = -1LL;
volatile uint32_t x336 = UINT32_MAX;
volatile int32_t x337 = -78360410;
int64_t x345 = -3523LL;
uint8_t x351 = 0U;
int8_t x360 = INT8_MIN;
int64_t x361 = -1138587LL;
uint8_t x364 = UINT8_MAX;
volatile int32_t t88 = -4;
uint64_t x372 = UINT64_MAX;
volatile int32_t t89 = 1809614;
volatile int16_t x378 = INT16_MAX;
uint8_t x379 = 1U;
volatile int32_t x381 = INT32_MIN;
static volatile int32_t x383 = -1;
int32_t x384 = -1;
int32_t t92 = -3823;
volatile int64_t x395 = INT64_MIN;
int16_t x397 = 119;
int32_t t96 = -2;
int64_t x401 = -1LL;
static volatile int32_t t97 = 2457511;
volatile int32_t x405 = INT32_MIN;
int16_t x407 = -692;


void f0(void) {
	int16_t x2 = -6;
	int16_t x3 = 0;
	volatile uint32_t x4 = 1464172460U;

	t0 = (x1<=(x2+(x3<x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MIN;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = -1;

	t1 = (x5<=(x6+(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = 3U;
	int64_t x11 = INT64_MIN;
	int16_t x12 = -1;

	t2 = (x9<=(x10+(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = -22;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -18133609;

	t3 = (x13<=(x14+(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 0U;
	int16_t x18 = INT16_MIN;
	int8_t x19 = 1;
	int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 51;

	t4 = (x17<=(x18+(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = -1;
	volatile uint16_t x24 = 230U;
	volatile int32_t t5 = 505399025;

	t5 = (x21<=(x22+(x23<x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static int8_t x26 = INT8_MAX;
	volatile int8_t x27 = 31;
	int16_t x28 = -113;
	volatile int32_t t6 = -1;

	t6 = (x25<=(x26+(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	volatile int8_t x31 = INT8_MIN;
	static int16_t x32 = 104;
	static int32_t t7 = 0;

	t7 = (x29<=(x30+(x31<x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -34;
	int16_t x34 = 4;
	uint32_t x35 = 172U;
	int32_t t8 = -4913121;

	t8 = (x33<=(x34+(x35<x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -12745051808591797LL;
	int32_t x38 = 3932;
	int32_t x39 = -1;
	static int64_t x40 = -1099223LL;
	int32_t t9 = 76;

	t9 = (x37<=(x38+(x39<x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MIN;
	static int16_t x42 = -1;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	int32_t t10 = -26;

	t10 = (x41<=(x42+(x43<x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MAX;
	volatile int64_t x48 = INT64_MIN;

	t11 = (x45<=(x46+(x47<x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = -1;
	volatile int32_t t12 = 62781;

	t12 = (x49<=(x50+(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 9U;
	int16_t x54 = INT16_MIN;
	volatile int64_t x56 = INT64_MAX;
	volatile int32_t t13 = 269858;

	t13 = (x53<=(x54+(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	uint32_t x58 = UINT32_MAX;
	static volatile uint32_t x59 = 70308241U;
	uint64_t x60 = 5324699624912LLU;
	static volatile int32_t t14 = 4144915;

	t14 = (x57<=(x58+(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = INT32_MIN;
	static int32_t t15 = -684785147;

	t15 = (x61<=(x62+(x63<x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = UINT32_MAX;
	int8_t x66 = 3;
	static uint64_t x67 = 2898LLU;
	volatile int32_t t16 = -2859;

	t16 = (x65<=(x66+(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MIN;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 20887806562149LLU;
	uint16_t x72 = 14144U;
	int32_t t17 = 5127575;

	t17 = (x69<=(x70+(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 119705293;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;
	static int32_t t18 = -39821;

	t18 = (x73<=(x74+(x75<x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = 6;
	static int16_t x80 = -1;
	static volatile int32_t t19 = 14397;

	t19 = (x77<=(x78+(x79<x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 2674421111LLU;
	int32_t x82 = INT32_MAX;
	int64_t x83 = 136LL;
	volatile uint8_t x84 = 0U;

	t20 = (x81<=(x82+(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 3621U;
	volatile int16_t x86 = INT16_MIN;
	int8_t x87 = INT8_MIN;
	int32_t t21 = -2295;

	t21 = (x85<=(x86+(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	uint8_t x90 = 3U;
	static int16_t x91 = INT16_MIN;
	uint8_t x92 = 23U;

	t22 = (x89<=(x90+(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -6;
	uint8_t x94 = 4U;
	volatile uint32_t x95 = UINT32_MAX;
	int32_t x96 = -55331;
	static int32_t t23 = 0;

	t23 = (x93<=(x94+(x95<x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -4;
	static int16_t x100 = INT16_MAX;

	t24 = (x97<=(x98+(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = 0;
	int64_t x103 = 649550452256LL;
	int8_t x104 = INT8_MAX;
	volatile int32_t t25 = 260897147;

	t25 = (x101<=(x102+(x103<x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x105 = -1LL;
	uint8_t x106 = UINT8_MAX;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MAX;
	int32_t t26 = -3344;

	t26 = (x105<=(x106+(x107<x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	uint8_t x110 = UINT8_MAX;
	static int16_t x112 = INT16_MIN;
	volatile int32_t t27 = -101003;

	t27 = (x109<=(x110+(x111<x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 7U;
	int8_t x114 = -1;
	int8_t x116 = -1;
	volatile int32_t t28 = 2835649;

	t28 = (x113<=(x114+(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	static volatile int8_t x118 = 5;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = 24293601735LLU;
	volatile int32_t t29 = -41;

	t29 = (x117<=(x118+(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -177339;
	int64_t x122 = -1LL;
	int32_t x123 = 993356;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 1;

	t30 = (x121<=(x122+(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 508LLU;
	int8_t x127 = 2;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = -5202;

	t31 = (x125<=(x126+(x127<x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	uint32_t x130 = 1U;
	static uint16_t x131 = UINT16_MAX;
	uint64_t x132 = 2645044LLU;
	static int32_t t32 = 32449;

	t32 = (x129<=(x130+(x131<x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = -373755;
	int32_t x138 = -50;
	volatile uint64_t x139 = 1LLU;

	t33 = (x137<=(x138+(x139<x140)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x142 = -1;
	int16_t x143 = -6;
	int16_t x144 = INT16_MAX;

	t34 = (x141<=(x142+(x143<x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	int16_t x146 = -248;
	volatile int32_t x147 = INT32_MIN;
	static int8_t x148 = -1;
	volatile int32_t t35 = -16;

	t35 = (x145<=(x146+(x147<x148)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 751U;
	int16_t x154 = INT16_MIN;
	volatile int32_t x156 = INT32_MAX;
	int32_t t36 = -256625206;

	t36 = (x153<=(x154+(x155<x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	volatile int8_t x159 = INT8_MAX;
	volatile int64_t x160 = INT64_MAX;

	t37 = (x157<=(x158+(x159<x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = 55321172563LL;
	int32_t x162 = -1;
	int32_t x163 = -1;
	static volatile int8_t x164 = -1;
	volatile int32_t t38 = -3;

	t38 = (x161<=(x162+(x163<x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -9762505LL;
	volatile uint64_t x167 = 71116261702LLU;
	volatile int32_t t39 = -23521;

	t39 = (x165<=(x166+(x167<x168)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = 45;
	int64_t x170 = 3LL;
	int8_t x171 = INT8_MAX;
	volatile int32_t t40 = -653968169;

	t40 = (x169<=(x170+(x171<x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 0U;
	volatile int64_t x175 = 992261725LL;
	uint16_t x176 = 14U;
	int32_t t41 = -1393;

	t41 = (x173<=(x174+(x175<x176)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = -553919447521LL;
	static int16_t x179 = -1;
	int8_t x180 = 1;
	static int32_t t42 = 5987;

	t42 = (x177<=(x178+(x179<x180)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint32_t x182 = 0U;
	int32_t x183 = INT32_MIN;
	int32_t t43 = 29903;

	t43 = (x181<=(x182+(x183<x184)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 525171967288960LLU;
	static uint32_t x187 = 1901318U;
	uint64_t x188 = 100007481LLU;
	static int32_t t44 = 7314;

	t44 = (x185<=(x186+(x187<x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = -1;
	uint64_t x190 = 4545047869044LLU;
	int8_t x192 = -1;
	volatile int32_t t45 = -1;

	t45 = (x189<=(x190+(x191<x192)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t46 = 1083;

	t46 = (x193<=(x194+(x195<x196)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x197 = 7358836462653154540LLU;
	uint8_t x198 = 44U;
	int64_t x199 = -1LL;
	static volatile int32_t x200 = INT32_MIN;
	int32_t t47 = -1;

	t47 = (x197<=(x198+(x199<x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = -8345723LL;
	volatile int16_t x202 = INT16_MIN;
	static int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = -7864;

	t48 = (x201<=(x202+(x203<x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x205 = INT32_MAX;
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	uint16_t x208 = 6U;

	t49 = (x205<=(x206+(x207<x208)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MIN;
	uint16_t x210 = 12176U;
	int16_t x212 = -42;
	volatile int32_t t50 = -405387;

	t50 = (x209<=(x210+(x211<x212)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -12;
	uint8_t x214 = 13U;
	uint16_t x215 = 79U;
	int64_t x216 = -1LL;
	int32_t t51 = 0;

	t51 = (x213<=(x214+(x215<x216)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = INT32_MIN;
	int16_t x220 = 1;
	volatile int32_t t52 = -7917;

	t52 = (x217<=(x218+(x219<x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = 2540;
	volatile int32_t x222 = -1283082;
	static int8_t x223 = -1;
	volatile int32_t t53 = 209816995;

	t53 = (x221<=(x222+(x223<x224)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x225 = INT8_MIN;
	static uint32_t x226 = 29660U;
	uint16_t x228 = 3U;
	int32_t t54 = -7105;

	t54 = (x225<=(x226+(x227<x228)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MIN;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MAX;
	volatile int32_t t55 = 11444;

	t55 = (x229<=(x230+(x231<x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -12055;
	int16_t x234 = 239;
	int16_t x235 = INT16_MIN;
	int32_t t56 = -485452;

	t56 = (x233<=(x234+(x235<x236)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	volatile int32_t x239 = -3802;
	static volatile int16_t x240 = -6331;
	int32_t t57 = 465749719;

	t57 = (x237<=(x238+(x239<x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x241 = INT32_MIN;
	static int16_t x242 = INT16_MIN;
	int64_t x243 = -1119201LL;
	volatile uint64_t x244 = 125562972LLU;
	volatile int32_t t58 = 12603;

	t58 = (x241<=(x242+(x243<x244)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	static int16_t x246 = INT16_MIN;
	int16_t x247 = INT16_MIN;
	static uint8_t x248 = 10U;
	static volatile int32_t t59 = -49889742;

	t59 = (x245<=(x246+(x247<x248)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x250 = 308U;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t60 = -165718;

	t60 = (x249<=(x250+(x251<x252)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x253 = INT32_MIN;
	static int32_t x255 = INT32_MIN;
	static volatile uint8_t x256 = 26U;
	volatile int32_t t61 = 2;

	t61 = (x253<=(x254+(x255<x256)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x257 = INT32_MAX;
	int16_t x258 = 0;
	int8_t x259 = 32;
	uint8_t x260 = 20U;
	static volatile int32_t t62 = -3097343;

	t62 = (x257<=(x258+(x259<x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -33LL;
	int32_t x262 = 32;

	t63 = (x261<=(x262+(x263<x264)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = 6619LL;
	static int32_t x266 = -1;
	uint8_t x268 = 0U;
	volatile int32_t t64 = 721008;

	t64 = (x265<=(x266+(x267<x268)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x274 = 5U;
	int16_t x275 = 3;
	int32_t t65 = 30893105;

	t65 = (x273<=(x274+(x275<x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = 7378;
	int16_t x278 = 264;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t66 = -2033355;

	t66 = (x277<=(x278+(x279<x280)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -3;
	int16_t x282 = INT16_MAX;
	static int32_t x283 = -271;
	int64_t x284 = 0LL;
	volatile int32_t t67 = 493015746;

	t67 = (x281<=(x282+(x283<x284)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x287 = INT64_MIN;
	uint64_t x288 = 8069135LLU;

	t68 = (x285<=(x286+(x287<x288)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x289 = 1LL;
	uint16_t x291 = UINT16_MAX;
	volatile int32_t t69 = -5;

	t69 = (x289<=(x290+(x291<x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x296 = 1537508551U;

	t70 = (x293<=(x294+(x295<x296)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MAX;
	int64_t x298 = -219037096427LL;
	static int8_t x299 = INT8_MIN;
	uint8_t x300 = UINT8_MAX;
	int32_t t71 = -3469;

	t71 = (x297<=(x298+(x299<x300)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x301 = INT16_MAX;
	int16_t x302 = INT16_MIN;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t72 = 19;

	t72 = (x301<=(x302+(x303<x304)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MIN;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	int32_t t73 = 430747846;

	t73 = (x305<=(x306+(x307<x308)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = 197U;
	volatile uint64_t x310 = 8434169500260030250LLU;
	int8_t x311 = 21;
	int32_t t74 = -10751109;

	t74 = (x309<=(x310+(x311<x312)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x315 = INT16_MIN;
	static int16_t x316 = INT16_MIN;
	volatile int32_t t75 = -3299;

	t75 = (x313<=(x314+(x315<x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MIN;
	volatile uint16_t x318 = 3496U;
	int32_t x319 = INT32_MAX;
	int8_t x320 = 1;
	static volatile int32_t t76 = 2580;

	t76 = (x317<=(x318+(x319<x320)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 531204719061776LLU;
	int32_t x322 = INT32_MAX;
	int32_t x323 = 3329813;
	volatile uint16_t x324 = 3431U;
	volatile int32_t t77 = -714236276;

	t77 = (x321<=(x322+(x323<x324)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -33;
	uint64_t x326 = 24486LLU;
	static int8_t x328 = INT8_MAX;
	int32_t t78 = 0;

	t78 = (x325<=(x326+(x327<x328)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t79 = 115338495;

	t79 = (x329<=(x330+(x331<x332)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	int32_t t80 = -23167;

	t80 = (x333<=(x334+(x335<x336)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x338 = INT8_MIN;
	uint8_t x339 = 3U;
	uint32_t x340 = 24055U;
	int32_t t81 = -872785;

	t81 = (x337<=(x338+(x339<x340)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = UINT64_MAX;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = 4671U;
	uint16_t x344 = 7U;
	int32_t t82 = -113;

	t82 = (x341<=(x342+(x343<x344)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x346 = -38;
	int16_t x347 = INT16_MIN;
	volatile int32_t x348 = -3;
	int32_t t83 = -36793;

	t83 = (x345<=(x346+(x347<x348)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	static int64_t x350 = INT64_MIN;
	int64_t x352 = -1LL;
	volatile int32_t t84 = -341474;

	t84 = (x349<=(x350+(x351<x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x353 = 6U;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = -1;
	int32_t x356 = 7;
	int32_t t85 = -10983;

	t85 = (x353<=(x354+(x355<x356)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -1;
	int32_t x358 = INT32_MAX;
	static uint8_t x359 = 40U;
	volatile int32_t t86 = 3467961;

	t86 = (x357<=(x358+(x359<x360)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x362 = -1;
	int8_t x363 = -1;
	int32_t t87 = -123706;

	t87 = (x361<=(x362+(x363<x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 5331;
	int16_t x366 = -1;
	uint16_t x367 = 1262U;
	uint16_t x368 = 6U;

	t88 = (x365<=(x366+(x367<x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = INT8_MIN;
	static int32_t x370 = 48;
	uint64_t x371 = 2541403LLU;

	t89 = (x369<=(x370+(x371<x372)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	static uint16_t x374 = 3236U;
	uint8_t x375 = 4U;
	int16_t x376 = -1457;
	static volatile int32_t t90 = 125;

	t90 = (x373<=(x374+(x375<x376)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = -355LL;
	static uint64_t x380 = UINT64_MAX;
	volatile int32_t t91 = 63174;

	t91 = (x377<=(x378+(x379<x380)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x382 = -1;

	t92 = (x381<=(x382+(x383<x384)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	int64_t x387 = 902087868062025LL;
	static int16_t x388 = -1;
	volatile int32_t t93 = 20;

	t93 = (x385<=(x386+(x387<x388)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = 227217;
	static int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	volatile int8_t x392 = INT8_MIN;
	int32_t t94 = 951026956;

	t94 = (x389<=(x390+(x391<x392)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -6;
	static uint64_t x394 = 961191216199825LLU;
	volatile int32_t x396 = 502381;
	static volatile int32_t t95 = -1153941;

	t95 = (x393<=(x394+(x395<x396)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = -1;
	int64_t x399 = -4558785714570232604LL;
	uint64_t x400 = UINT64_MAX;

	t96 = (x397<=(x398+(x399<x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x402 = -1;
	uint8_t x403 = 6U;
	uint16_t x404 = 49U;

	t97 = (x401<=(x402+(x403<x404)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x406 = 3334926U;
	int32_t x408 = INT32_MIN;
	int32_t t98 = 12;

	t98 = (x405<=(x406+(x407<x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x409 = 0U;
	int32_t x410 = -7695010;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MIN;
	volatile int32_t t99 = 348;

	t99 = (x409<=(x410+(x411<x412)));

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

