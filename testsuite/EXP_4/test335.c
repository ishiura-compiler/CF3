#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -8214;
static int32_t t1 = 22;
int8_t x14 = 1;
static int64_t x17 = INT64_MIN;
int16_t x36 = -1;
int16_t x48 = INT16_MAX;
int32_t t11 = 72;
uint64_t x68 = 1632334855807LLU;
volatile int32_t t17 = 755;
static volatile uint8_t x88 = 1U;
static uint64_t x94 = 2LLU;
int32_t x98 = INT32_MIN;
uint32_t x99 = 859974604U;
uint32_t x100 = UINT32_MAX;
int8_t x115 = -47;
volatile int32_t x117 = INT32_MAX;
volatile int32_t x119 = -1;
volatile int32_t t25 = 61728449;
static volatile int32_t t26 = -3966;
int8_t x127 = 35;
uint16_t x132 = UINT16_MAX;
volatile int32_t t29 = 1255820;
uint32_t x140 = 3U;
uint64_t x141 = UINT64_MAX;
volatile int32_t x148 = 596119;
int32_t t32 = -178;
static uint64_t x152 = 3LLU;
volatile int32_t t33 = -15666336;
int8_t x156 = INT8_MIN;
static uint32_t x157 = 526068142U;
int16_t x160 = INT16_MIN;
int8_t x162 = INT8_MIN;
int32_t x164 = INT32_MAX;
volatile int8_t x168 = INT8_MAX;
volatile int32_t t37 = -39275202;
uint16_t x171 = UINT16_MAX;
int32_t x177 = -1322;
static int8_t x183 = 40;
uint8_t x189 = UINT8_MAX;
int16_t x190 = -200;
uint32_t x195 = 457236U;
volatile int16_t x197 = -1;
uint32_t x214 = 2059360U;
volatile int8_t x232 = -1;
int32_t x238 = INT32_MIN;
static uint8_t x254 = 5U;
static int32_t x261 = INT32_MIN;
uint64_t x263 = UINT64_MAX;
volatile int32_t t59 = 2557119;
int8_t x268 = INT8_MAX;
volatile int32_t t61 = 79418955;
int32_t x279 = -1;
static volatile int32_t t63 = -86751;
static int32_t t65 = -2845737;
int16_t x297 = -1;
uint32_t x300 = 257284560U;
uint8_t x301 = UINT8_MAX;
static int16_t x302 = 86;
int32_t x311 = INT32_MAX;
static volatile int32_t t69 = -105491;
volatile int32_t t70 = -173;
static uint8_t x329 = 98U;
uint64_t x332 = UINT64_MAX;
static int64_t x338 = INT64_MIN;
uint16_t x342 = UINT16_MAX;
static uint16_t x345 = 1U;
static volatile int32_t t77 = -10438779;
uint32_t x349 = 1965U;
uint8_t x365 = 18U;
static int8_t x366 = -1;
int16_t x370 = INT16_MIN;
static volatile int32_t t82 = -1;
uint64_t x385 = UINT64_MAX;
int16_t x387 = INT16_MIN;
int8_t x388 = INT8_MIN;
volatile int32_t t86 = 16024;
int8_t x402 = INT8_MIN;
volatile int32_t t88 = -446;
int64_t x405 = INT64_MAX;
int32_t x407 = -5968360;
int64_t x408 = INT64_MIN;
uint32_t x413 = 25143U;
static int32_t x422 = INT32_MAX;
volatile int32_t t93 = 220;
static uint32_t x426 = 1905009567U;
int32_t t95 = 66475605;
int64_t x435 = 279967650447464LL;
static int32_t x436 = 289;
int16_t x457 = INT16_MIN;
uint8_t x458 = 26U;
int64_t x460 = -1LL;
volatile int32_t t99 = 1278;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = 250183689;

	t0 = (x1<=(x2^(x3-x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = -1;
	int64_t x8 = -198308777245553LL;

	t1 = (x5<=(x6^(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2497U;
	static volatile int8_t x10 = INT8_MIN;
	uint8_t x11 = UINT8_MAX;
	volatile int64_t x12 = -7145937LL;
	int32_t t2 = 0;

	t2 = (x9<=(x10^(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	int32_t x15 = -2685;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = 197;

	t3 = (x13<=(x14^(x15-x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	uint8_t x19 = 15U;
	int16_t x20 = -12701;
	volatile int32_t t4 = 315093214;

	t4 = (x17<=(x18^(x19-x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	volatile int8_t x30 = INT8_MAX;
	static int8_t x31 = INT8_MIN;
	uint16_t x32 = 1U;
	static int32_t t5 = -1415511;

	t5 = (x29<=(x30^(x31-x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = UINT64_MAX;
	static int8_t x34 = INT8_MIN;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t6 = 72455801;

	t6 = (x33<=(x34^(x35-x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 94701;
	int16_t x38 = -1;
	int16_t x39 = 6553;
	uint8_t x40 = 0U;
	volatile int32_t t7 = 948650400;

	t7 = (x37<=(x38^(x39-x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	volatile int32_t x42 = INT32_MAX;
	int64_t x43 = 3061632833895LL;
	uint8_t x44 = 60U;
	volatile int32_t t8 = -969462164;

	t8 = (x41<=(x42^(x43-x44)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	static uint8_t x46 = 1U;
	int8_t x47 = INT8_MIN;
	int32_t t9 = 2034852;

	t9 = (x45<=(x46^(x47-x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = -367LL;
	int16_t x52 = INT16_MAX;
	volatile int32_t t10 = 0;

	t10 = (x49<=(x50^(x51-x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint32_t x54 = UINT32_MAX;
	static int32_t x55 = 0;
	uint8_t x56 = 1U;

	t11 = (x53<=(x54^(x55-x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	static int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	int16_t x60 = 164;
	volatile int32_t t12 = 47;

	t12 = (x57<=(x58^(x59-x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = INT8_MIN;
	int8_t x63 = 1;
	static int32_t x64 = 3014280;
	volatile int32_t t13 = -177660155;

	t13 = (x61<=(x62^(x63-x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = INT32_MAX;
	uint16_t x66 = UINT16_MAX;
	int64_t x67 = 2076664LL;
	volatile int32_t t14 = -51;

	t14 = (x65<=(x66^(x67-x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	static volatile int32_t x75 = -1;
	int64_t x76 = INT64_MAX;
	static volatile int32_t t15 = -174920711;

	t15 = (x73<=(x74^(x75-x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = -1LL;
	uint16_t x79 = 25U;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t16 = 1;

	t16 = (x77<=(x78^(x79-x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x81 = -14763978799036633LL;
	int16_t x82 = INT16_MAX;
	static volatile int32_t x83 = INT32_MIN;
	int32_t x84 = -237;

	t17 = (x81<=(x82^(x83-x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 0U;
	volatile int16_t x86 = 1;
	int8_t x87 = 14;
	int32_t t18 = -397;

	t18 = (x85<=(x86^(x87-x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x89 = 30U;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	static int32_t x92 = INT32_MIN;
	volatile int32_t t19 = 1788;

	t19 = (x89<=(x90^(x91-x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -1LL;
	uint16_t x95 = 0U;
	uint32_t x96 = 2U;
	volatile int32_t t20 = 1674761;

	t20 = (x93<=(x94^(x95-x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -1LL;
	volatile int32_t t21 = 1;

	t21 = (x97<=(x98^(x99-x100)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = 1;
	static int32_t t22 = 2;

	t22 = (x101<=(x102^(x103-x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x109 = -98298971LL;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -23;
	uint64_t x112 = 9742047566LLU;
	int32_t t23 = -381302;

	t23 = (x109<=(x110^(x111-x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = -1060340;
	int16_t x114 = INT16_MAX;
	int8_t x116 = -19;
	volatile int32_t t24 = -191932493;

	t24 = (x113<=(x114^(x115-x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = 1;
	int8_t x120 = -7;

	t25 = (x117<=(x118^(x119-x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x121 = INT32_MIN;
	int32_t x122 = INT32_MAX;
	volatile uint32_t x123 = 6398U;
	uint16_t x124 = 32379U;

	t26 = (x121<=(x122^(x123-x124)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x125 = 0U;
	static int8_t x126 = -12;
	int16_t x128 = 823;
	static int32_t t27 = -566265309;

	t27 = (x125<=(x126^(x127-x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x129 = UINT64_MAX;
	static uint8_t x130 = 2U;
	uint64_t x131 = 686208LLU;
	volatile int32_t t28 = -1;

	t28 = (x129<=(x130^(x131-x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	static int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;

	t29 = (x133<=(x134^(x135-x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	uint32_t x138 = 177867557U;
	int32_t x139 = INT32_MAX;
	volatile int32_t t30 = -1947080;

	t30 = (x137<=(x138^(x139-x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x142 = 1656991709U;
	static int16_t x143 = -10;
	uint64_t x144 = UINT64_MAX;
	int32_t t31 = 18777392;

	t31 = (x141<=(x142^(x143-x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MAX;
	static int16_t x146 = INT16_MAX;
	int32_t x147 = -1;

	t32 = (x145<=(x146^(x147-x148)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = -1;
	int8_t x150 = INT8_MAX;
	volatile int16_t x151 = -1;

	t33 = (x149<=(x150^(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MAX;
	static int16_t x154 = INT16_MAX;
	static volatile uint8_t x155 = 8U;
	int32_t t34 = 24;

	t34 = (x153<=(x154^(x155-x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x158 = INT8_MIN;
	static int8_t x159 = INT8_MIN;
	volatile int32_t t35 = 16496074;

	t35 = (x157<=(x158^(x159-x160)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x161 = 5U;
	int16_t x163 = -1;
	static int32_t t36 = -131741;

	t36 = (x161<=(x162^(x163-x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 0U;
	static uint8_t x166 = UINT8_MAX;
	static uint8_t x167 = 1U;

	t37 = (x165<=(x166^(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x169 = -1;
	uint16_t x170 = 741U;
	int8_t x172 = INT8_MIN;
	int32_t t38 = -102;

	t38 = (x169<=(x170^(x171-x172)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x173 = UINT64_MAX;
	volatile int32_t x174 = INT32_MIN;
	volatile int32_t x175 = INT32_MIN;
	int16_t x176 = -27;
	int32_t t39 = 947672;

	t39 = (x173<=(x174^(x175-x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x178 = INT8_MAX;
	volatile int16_t x179 = -1;
	int16_t x180 = 32;
	volatile int32_t t40 = -72576;

	t40 = (x177<=(x178^(x179-x180)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 39LLU;
	uint8_t x182 = UINT8_MAX;
	static int16_t x184 = 1951;
	volatile int32_t t41 = 1;

	t41 = (x181<=(x182^(x183-x184)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 14U;
	uint16_t x186 = 6U;
	uint64_t x187 = 51654039LLU;
	int64_t x188 = -1LL;
	int32_t t42 = 925;

	t42 = (x185<=(x186^(x187-x188)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x191 = 1U;
	uint16_t x192 = 52U;
	volatile int32_t t43 = -94;

	t43 = (x189<=(x190^(x191-x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = 23174462617576806LLU;
	uint64_t x194 = UINT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t44 = -204483921;

	t44 = (x193<=(x194^(x195-x196)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x198 = 21232U;
	uint16_t x199 = 56U;
	static uint8_t x200 = 3U;
	int32_t t45 = 51073980;

	t45 = (x197<=(x198^(x199-x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x205 = 7038U;
	int8_t x206 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	volatile uint32_t x208 = UINT32_MAX;
	int32_t t46 = 1;

	t46 = (x205<=(x206^(x207-x208)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MIN;
	uint16_t x210 = UINT16_MAX;
	static int64_t x211 = -1LL;
	uint32_t x212 = 310U;
	volatile int32_t t47 = 3405263;

	t47 = (x209<=(x210^(x211-x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x215 = 4U;
	int8_t x216 = INT8_MIN;
	int32_t t48 = -242509030;

	t48 = (x213<=(x214^(x215-x216)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x221 = INT32_MIN;
	uint32_t x222 = 36U;
	volatile int8_t x223 = -6;
	uint8_t x224 = 81U;
	int32_t t49 = -6837345;

	t49 = (x221<=(x222^(x223-x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MIN;
	uint8_t x227 = 0U;
	volatile int8_t x228 = INT8_MIN;
	volatile int32_t t50 = -86;

	t50 = (x225<=(x226^(x227-x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x229 = INT16_MAX;
	uint32_t x230 = 1034971265U;
	int64_t x231 = INT64_MIN;
	volatile int32_t t51 = -179587;

	t51 = (x229<=(x230^(x231-x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MAX;
	int16_t x234 = -1;
	static int32_t x235 = 637849;
	uint32_t x236 = UINT32_MAX;
	int32_t t52 = -221;

	t52 = (x233<=(x234^(x235-x236)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = INT64_MIN;
	int32_t x239 = INT32_MAX;
	uint8_t x240 = 0U;
	volatile int32_t t53 = -937;

	t53 = (x237<=(x238^(x239-x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int64_t x243 = -138570684993LL;
	int8_t x244 = INT8_MIN;
	volatile int32_t t54 = -7232271;

	t54 = (x241<=(x242^(x243-x244)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = UINT16_MAX;
	static volatile uint8_t x246 = UINT8_MAX;
	uint64_t x247 = 1086735403008LLU;
	static int64_t x248 = INT64_MIN;
	int32_t t55 = 188454;

	t55 = (x245<=(x246^(x247-x248)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MAX;
	static int64_t x250 = -1000387LL;
	static int8_t x251 = -1;
	static int32_t x252 = INT32_MIN;
	volatile int32_t t56 = -860;

	t56 = (x249<=(x250^(x251-x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = 67;
	uint16_t x255 = 168U;
	int8_t x256 = -17;
	int32_t t57 = 115;

	t57 = (x253<=(x254^(x255-x256)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x257 = UINT8_MAX;
	int32_t x258 = 0;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = INT32_MAX;
	int32_t t58 = 1221849;

	t58 = (x257<=(x258^(x259-x260)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = UINT64_MAX;
	int32_t x264 = INT32_MIN;

	t59 = (x261<=(x262^(x263-x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x265 = 14696417972172LLU;
	static int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	int32_t t60 = 1175;

	t60 = (x265<=(x266^(x267-x268)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int32_t x270 = -1;
	uint64_t x271 = UINT64_MAX;
	volatile int16_t x272 = 98;

	t61 = (x269<=(x270^(x271-x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = INT64_MAX;
	uint64_t x274 = 6567951442586910121LLU;
	int64_t x275 = -834584540LL;
	uint64_t x276 = 65486730544403616LLU;
	volatile int32_t t62 = 72277;

	t62 = (x273<=(x274^(x275-x276)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -273036;
	volatile int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MIN;

	t63 = (x277<=(x278^(x279-x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x285 = INT16_MAX;
	int32_t x286 = 25449;
	uint64_t x287 = 146721881869LLU;
	uint8_t x288 = 12U;
	int32_t t64 = 194;

	t64 = (x285<=(x286^(x287-x288)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	static int32_t x294 = INT32_MIN;
	static int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;

	t65 = (x293<=(x294^(x295-x296)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x298 = -1LL;
	int16_t x299 = INT16_MAX;
	static volatile int32_t t66 = -7;

	t66 = (x297<=(x298^(x299-x300)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x303 = -1;
	static volatile int8_t x304 = INT8_MIN;
	int32_t t67 = -1178384;

	t67 = (x301<=(x302^(x303-x304)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = -1;
	int16_t x306 = -1;
	static int8_t x307 = -1;
	uint8_t x308 = 103U;
	volatile int32_t t68 = 525;

	t68 = (x305<=(x306^(x307-x308)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = -1;
	int16_t x310 = -87;
	uint64_t x312 = UINT64_MAX;

	t69 = (x309<=(x310^(x311-x312)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MIN;
	int16_t x314 = 901;
	static uint32_t x315 = 384U;
	static uint8_t x316 = 24U;

	t70 = (x313<=(x314^(x315-x316)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	static int16_t x318 = INT16_MIN;
	volatile int16_t x319 = INT16_MIN;
	static uint64_t x320 = 563LLU;
	volatile int32_t t71 = 19112;

	t71 = (x317<=(x318^(x319-x320)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x325 = 27U;
	uint64_t x326 = UINT64_MAX;
	static int64_t x327 = -7LL;
	uint64_t x328 = 4408953878999LLU;
	volatile int32_t t72 = -4432;

	t72 = (x325<=(x326^(x327-x328)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x330 = 0LL;
	int8_t x331 = 2;
	int32_t t73 = 1;

	t73 = (x329<=(x330^(x331-x332)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile uint32_t x334 = 89112534U;
	static uint32_t x335 = 981761896U;
	int32_t x336 = -1;
	static int32_t t74 = -273161406;

	t74 = (x333<=(x334^(x335-x336)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x337 = 12293678092973LL;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	int32_t t75 = 75824;

	t75 = (x337<=(x338^(x339-x340)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x341 = 3080U;
	static int64_t x343 = INT64_MAX;
	int16_t x344 = 98;
	volatile int32_t t76 = -20105293;

	t76 = (x341<=(x342^(x343-x344)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x346 = 7;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;

	t77 = (x345<=(x346^(x347-x348)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x350 = 309U;
	int16_t x351 = INT16_MIN;
	int8_t x352 = -1;
	static volatile int32_t t78 = 3549;

	t78 = (x349<=(x350^(x351-x352)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = -1;
	uint32_t x359 = UINT32_MAX;
	static int64_t x360 = INT64_MAX;
	volatile int32_t t79 = -19;

	t79 = (x357<=(x358^(x359-x360)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x367 = -1;
	int32_t x368 = 714;
	static volatile int32_t t80 = 196;

	t80 = (x365<=(x366^(x367-x368)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = -1;
	volatile int32_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	volatile int32_t t81 = -1565;

	t81 = (x369<=(x370^(x371-x372)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x373 = -1;
	volatile uint64_t x374 = 1268173074696274LLU;
	static volatile int64_t x375 = INT64_MAX;
	uint16_t x376 = UINT16_MAX;

	t82 = (x373<=(x374^(x375-x376)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x381 = -1;
	int8_t x382 = -1;
	static int16_t x383 = 59;
	volatile uint64_t x384 = 0LLU;
	int32_t t83 = -159598317;

	t83 = (x381<=(x382^(x383-x384)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x386 = 10U;
	int32_t t84 = 209853;

	t84 = (x385<=(x386^(x387-x388)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = INT64_MAX;
	uint16_t x390 = 140U;
	int16_t x391 = -1;
	uint32_t x392 = UINT32_MAX;
	static int32_t t85 = -17;

	t85 = (x389<=(x390^(x391-x392)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = -1;
	volatile int8_t x394 = INT8_MIN;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = UINT8_MAX;

	t86 = (x393<=(x394^(x395-x396)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = 1;
	int32_t x398 = INT32_MIN;
	static int32_t x399 = -1;
	volatile uint32_t x400 = UINT32_MAX;
	static int32_t t87 = 6;

	t87 = (x397<=(x398^(x399-x400)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MIN;
	volatile int32_t x403 = -1;
	uint64_t x404 = 166764324101377LLU;

	t88 = (x401<=(x402^(x403-x404)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x406 = 0;
	static volatile int32_t t89 = 3606767;

	t89 = (x405<=(x406^(x407-x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x409 = -66;
	int16_t x410 = -1;
	volatile int64_t x411 = -1LL;
	uint64_t x412 = 6089093LLU;
	volatile int32_t t90 = -4028;

	t90 = (x409<=(x410^(x411-x412)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 26U;
	static int8_t x416 = -1;
	static volatile int32_t t91 = 31803943;

	t91 = (x413<=(x414^(x415-x416)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x417 = UINT16_MAX;
	int16_t x418 = 6548;
	uint64_t x419 = 1001720556628998624LLU;
	int8_t x420 = -5;
	volatile int32_t t92 = 3;

	t92 = (x417<=(x418^(x419-x420)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = -448390455569LL;
	static int16_t x423 = INT16_MIN;
	uint64_t x424 = 53LLU;

	t93 = (x421<=(x422^(x423-x424)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x425 = 478092LLU;
	static int16_t x427 = INT16_MIN;
	int8_t x428 = 13;
	int32_t t94 = 131534;

	t94 = (x425<=(x426^(x427-x428)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x429 = 258161U;
	static uint16_t x430 = 902U;
	static int16_t x431 = -28;
	int8_t x432 = -1;

	t95 = (x429<=(x430^(x431-x432)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MAX;
	volatile int32_t t96 = -20;

	t96 = (x433<=(x434^(x435-x436)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x445 = 1856;
	volatile uint8_t x446 = 32U;
	int16_t x447 = -1;
	static uint32_t x448 = 155044211U;
	int32_t t97 = -1728;

	t97 = (x445<=(x446^(x447-x448)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x453 = 13U;
	uint32_t x454 = 1316979U;
	int64_t x455 = 54LL;
	int64_t x456 = -1LL;
	volatile int32_t t98 = 167252006;

	t98 = (x453<=(x454^(x455-x456)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x459 = INT64_MIN;

	t99 = (x457<=(x458^(x459-x460)));

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

