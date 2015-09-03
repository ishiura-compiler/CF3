#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = 6663;
int64_t x12 = 25231379901LL;
volatile int64_t t2 = -9261900371401376LL;
static int8_t x13 = INT8_MIN;
static int16_t x16 = INT16_MIN;
uint8_t x19 = UINT8_MAX;
volatile uint8_t x29 = 93U;
uint16_t x32 = 7U;
int8_t x48 = -1;
int64_t x77 = INT64_MIN;
static int16_t x89 = INT16_MAX;
static volatile uint64_t x97 = 141459507LLU;
static volatile int8_t x103 = 8;
int16_t x106 = INT16_MIN;
static int64_t x111 = INT64_MIN;
int8_t x112 = INT8_MIN;
int64_t t22 = 62623303LL;
volatile int8_t x128 = -1;
static volatile int8_t x135 = INT8_MIN;
volatile uint32_t t27 = 1648U;
int32_t x138 = 718089688;
uint32_t t28 = 87995995U;
int16_t x147 = INT16_MIN;
int16_t x154 = INT16_MIN;
uint64_t x158 = 1708273710801LLU;
int32_t t32 = -1432447;
int8_t x162 = 7;
uint32_t x164 = 2976U;
uint8_t x167 = UINT8_MAX;
int32_t x168 = -1;
int16_t x170 = INT16_MIN;
volatile int32_t x177 = INT32_MIN;
volatile int64_t x184 = INT64_MAX;
volatile uint16_t x189 = 38U;
static uint32_t t40 = 393U;
volatile int8_t x204 = INT8_MIN;
static volatile uint64_t x206 = UINT64_MAX;
uint16_t x219 = 5U;
volatile int32_t t46 = 26;
uint64_t x225 = 253LLU;
volatile int64_t t49 = 163382LL;
int64_t x243 = -6672LL;
uint16_t x250 = 6902U;
int8_t x251 = -2;
int32_t t54 = 131265646;
uint8_t x258 = UINT8_MAX;
uint8_t x261 = UINT8_MAX;
int32_t x262 = 0;
int32_t x264 = 6;
volatile int16_t x272 = INT16_MIN;
int8_t x279 = INT8_MIN;
int64_t x282 = INT64_MAX;
int32_t x285 = 1;
int16_t x291 = INT16_MIN;
int32_t x292 = 1;
volatile int32_t t66 = 1;
int8_t x301 = INT8_MAX;
static int32_t x307 = 114903;
int32_t x309 = INT32_MIN;
uint32_t x319 = UINT32_MAX;
int16_t x321 = -1;
int64_t x323 = -5052844938532LL;
volatile uint32_t x325 = 5U;
volatile int8_t x338 = INT8_MIN;
int8_t x339 = -1;
int64_t x349 = INT64_MIN;
int8_t x354 = 0;
int32_t t78 = 88856;
static volatile uint8_t x362 = 3U;
uint64_t x364 = 138788619408348120LLU;
uint32_t t81 = 360878517U;
int8_t x378 = -1;
int16_t x396 = INT16_MIN;
static volatile int32_t t85 = 11229440;
volatile int8_t x404 = INT8_MIN;
int32_t x415 = INT32_MIN;
uint32_t x416 = 45U;
volatile uint32_t t87 = 14U;
int32_t x430 = -4;
int32_t x433 = INT32_MAX;
static int64_t x436 = INT64_MAX;
int32_t t92 = -1782709;
int32_t x443 = INT32_MIN;
int64_t x453 = -218153070987LL;
int16_t x454 = -290;
int32_t t97 = 8385141;
int64_t x467 = INT64_MIN;


void f0(void) {
	int64_t x1 = -41LL;
	int16_t x2 = -14592;
	volatile int8_t x3 = INT8_MIN;
	uint16_t x4 = 3471U;
	int32_t t0 = 367;

	t0 = ((x1<(x2/x3))-x4);

	if (t0 != -3470) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	static uint32_t x6 = UINT32_MAX;
	int64_t x8 = -1LL;
	volatile int64_t t1 = 4717346667LL;

	t1 = ((x5<(x6/x7))-x8);

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -812LL;
	volatile int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MIN;

	t2 = ((x9<(x10/x11))-x12);

	if (t2 != -25231379900LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = 3704U;
	int8_t x15 = -1;
	int32_t t3 = 1;

	t3 = ((x13<(x14/x15))-x16);

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	uint8_t x18 = 2U;
	uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 1085147185247017767LLU;

	t4 = ((x17<(x18/x19))-x20);

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 242016;
	int32_t x22 = 5640526;
	static int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -7883;

	t5 = ((x21<(x22/x23))-x24);

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x30 = INT16_MIN;
	volatile uint8_t x31 = 6U;
	volatile int32_t t6 = 2;

	t6 = ((x29<(x30/x31))-x32);

	if (t6 != -7) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -1;
	uint32_t x42 = 131053U;
	volatile uint8_t x43 = 68U;
	uint32_t x44 = 133516U;
	volatile uint32_t t7 = 77U;

	t7 = ((x41<(x42/x43))-x44);

	if (t7 != 4294833780U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	int32_t x46 = 52813367;
	int8_t x47 = -1;
	int32_t t8 = 1036;

	t8 = ((x45<(x46/x47))-x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = 71495U;
	int64_t x55 = INT64_MIN;
	int64_t x56 = -344573771305686LL;
	volatile int64_t t9 = 547888533500715797LL;

	t9 = ((x53<(x54/x55))-x56);

	if (t9 != 344573771305687LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 3LLU;
	static int8_t x58 = INT8_MIN;
	static uint16_t x59 = UINT16_MAX;
	static uint16_t x60 = UINT16_MAX;
	int32_t t10 = 67467;

	t10 = ((x57<(x58/x59))-x60);

	if (t10 != -65535) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MAX;
	uint64_t x63 = 20279173687952LLU;
	int16_t x64 = INT16_MAX;
	volatile int32_t t11 = 14771;

	t11 = ((x61<(x62/x63))-x64);

	if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 0U;
	int64_t x66 = INT64_MAX;
	int8_t x67 = 8;
	volatile int8_t x68 = INT8_MIN;
	static int32_t t12 = 11843;

	t12 = ((x65<(x66/x67))-x68);

	if (t12 != 129) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x69 = INT8_MIN;
	int8_t x70 = -47;
	uint32_t x71 = 9665U;
	int32_t x72 = -3630;
	int32_t t13 = 14832;

	t13 = ((x69<(x70/x71))-x72);

	if (t13 != 3630) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x78 = INT8_MAX;
	uint32_t x79 = 1564U;
	static int16_t x80 = -1;
	static int32_t t14 = -337;

	t14 = ((x77<(x78/x79))-x80);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = -1;
	static uint64_t x82 = UINT64_MAX;
	int16_t x83 = -1;
	uint16_t x84 = 2U;
	int32_t t15 = -32412599;

	t15 = ((x81<(x82/x83))-x84);

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x85 = UINT16_MAX;
	int8_t x86 = -1;
	int8_t x87 = -47;
	int64_t x88 = 41325124569574511LL;
	volatile int64_t t16 = 283LL;

	t16 = ((x85<(x86/x87))-x88);

	if (t16 != -41325124569574511LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x90 = 770313;
	volatile uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 93U;
	int32_t t17 = -32;

	t17 = ((x89<(x90/x91))-x92);

	if (t17 != -93) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x98 = INT16_MAX;
	uint64_t x99 = UINT64_MAX;
	int64_t x100 = 211318LL;
	int64_t t18 = 51LL;

	t18 = ((x97<(x98/x99))-x100);

	if (t18 != -211318LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = -1;
	static int64_t x102 = INT64_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t19 = 679144458;

	t19 = ((x101<(x102/x103))-x104);

	if (t19 != 129) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x105 = 10009U;
	int16_t x107 = INT16_MIN;
	int16_t x108 = -40;
	volatile int32_t t20 = -55;

	t20 = ((x105<(x106/x107))-x108);

	if (t20 != 40) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = INT64_MIN;
	static volatile int32_t t21 = -7;

	t21 = ((x109<(x110/x111))-x112);

	if (t21 != 129) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = -1;
	int32_t x115 = INT32_MAX;
	volatile int64_t x116 = -1LL;

	t22 = ((x113<(x114/x115))-x116);

	if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = 2981506107LL;
	uint64_t x118 = 13526542548604LLU;
	volatile int32_t x119 = -124393;
	uint16_t x120 = 423U;
	volatile int32_t t23 = -170516978;

	t23 = ((x117<(x118/x119))-x120);

	if (t23 != -423) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint64_t x122 = 14017LLU;
	static int8_t x123 = INT8_MIN;
	uint64_t x124 = 51LLU;
	uint64_t t24 = 18LLU;

	t24 = ((x121<(x122/x123))-x124);

	if (t24 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = 1591;
	int16_t x127 = -126;
	static volatile int32_t t25 = 65199;

	t25 = ((x125<(x126/x127))-x128);

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = -10;
	uint64_t x130 = 556965697618185337LLU;
	static int16_t x131 = -33;
	int16_t x132 = -1;
	static volatile int32_t t26 = 83442;

	t26 = ((x129<(x130/x131))-x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = UINT64_MAX;
	static uint16_t x134 = UINT16_MAX;
	static uint32_t x136 = UINT32_MAX;

	t27 = ((x133<(x134/x135))-x136);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x137 = -1LL;
	int64_t x139 = 6LL;
	uint32_t x140 = 1182459132U;

	t28 = ((x137<(x138/x139))-x140);

	if (t28 != 3112508165U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	static int32_t x142 = 18;
	uint32_t x143 = 2836908U;
	static int16_t x144 = INT16_MAX;
	volatile int32_t t29 = 219911;

	t29 = ((x141<(x142/x143))-x144);

	if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x145 = UINT8_MAX;
	uint64_t x146 = 3979849379398326LLU;
	volatile uint8_t x148 = 61U;
	volatile int32_t t30 = -733140;

	t30 = ((x145<(x146/x147))-x148);

	if (t30 != -61) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MIN;
	int16_t x155 = INT16_MAX;
	uint8_t x156 = 87U;
	int32_t t31 = -167894;

	t31 = ((x153<(x154/x155))-x156);

	if (t31 != -86) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x157 = -1;
	volatile uint16_t x159 = 1668U;
	volatile uint16_t x160 = 2U;

	t32 = ((x157<(x158/x159))-x160);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x161 = -1;
	int32_t x163 = 1950384;
	volatile uint32_t t33 = 112U;

	t33 = ((x161<(x162/x163))-x164);

	if (t33 != 4294964321U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x165 = 1;
	uint32_t x166 = 5317U;
	volatile int32_t t34 = 7;

	t34 = ((x165<(x166/x167))-x168);

	if (t34 != 2) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 545U;
	volatile uint16_t x171 = 7U;
	static uint8_t x172 = 18U;
	int32_t t35 = -41133727;

	t35 = ((x169<(x170/x171))-x172);

	if (t35 != -18) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = 1LLU;
	int64_t x175 = -1LL;
	uint64_t x176 = 367156354035LLU;
	uint64_t t36 = 51848628926LLU;

	t36 = ((x173<(x174/x175))-x176);

	if (t36 != 18446743706553197581LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x178 = UINT8_MAX;
	static int32_t x179 = -1;
	uint16_t x180 = 4808U;
	volatile int32_t t37 = 13900;

	t37 = ((x177<(x178/x179))-x180);

	if (t37 != -4807) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x181 = 16566U;
	static int16_t x182 = INT16_MIN;
	uint32_t x183 = 110U;
	volatile int64_t t38 = 178226270301LL;

	t38 = ((x181<(x182/x183))-x184);

	if (t38 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	int8_t x188 = -1;
	static int32_t t39 = 128453;

	t39 = ((x185<(x186/x187))-x188);

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	static uint32_t x192 = UINT32_MAX;

	t40 = ((x189<(x190/x191))-x192);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int32_t x199 = 48786051;
	static uint32_t x200 = UINT32_MAX;
	uint32_t t41 = 26U;

	t41 = ((x197<(x198/x199))-x200);

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x201 = -11;
	uint64_t x202 = 3455892183191727538LLU;
	int8_t x203 = INT8_MIN;
	static volatile int32_t t42 = -189499092;

	t42 = ((x201<(x202/x203))-x204);

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x205 = 609U;
	int32_t x207 = -1;
	int64_t x208 = INT64_MAX;
	int64_t t43 = -1761947LL;

	t43 = ((x205<(x206/x207))-x208);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x209 = UINT16_MAX;
	uint8_t x210 = 2U;
	int64_t x211 = -38726596745LL;
	uint16_t x212 = 5U;
	volatile int32_t t44 = 19;

	t44 = ((x209<(x210/x211))-x212);

	if (t44 != -5) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MIN;
	volatile int16_t x214 = INT16_MIN;
	uint64_t x215 = 12450938466434LLU;
	volatile int16_t x216 = 117;
	volatile int32_t t45 = 30;

	t45 = ((x213<(x214/x215))-x216);

	if (t45 != -117) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MIN;
	static int8_t x218 = -1;
	int32_t x220 = -1;

	t46 = ((x217<(x218/x219))-x220);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = -31672LL;
	uint32_t x222 = UINT32_MAX;
	int32_t x223 = INT32_MIN;
	static int16_t x224 = INT16_MAX;
	static volatile int32_t t47 = -1041885;

	t47 = ((x221<(x222/x223))-x224);

	if (t47 != -32766) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x226 = INT8_MIN;
	static int8_t x227 = INT8_MIN;
	int16_t x228 = 211;
	int32_t t48 = -1029421;

	t48 = ((x225<(x226/x227))-x228);

	if (t48 != -211) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x229 = INT64_MAX;
	volatile int8_t x230 = INT8_MAX;
	uint16_t x231 = 546U;
	int64_t x232 = -31348777LL;

	t49 = ((x229<(x230/x231))-x232);

	if (t49 != 31348777LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = -73;
	volatile uint8_t x234 = 54U;
	int16_t x235 = -1;
	int8_t x236 = INT8_MIN;
	int32_t t50 = -238;

	t50 = ((x233<(x234/x235))-x236);

	if (t50 != 129) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x237 = INT64_MIN;
	uint16_t x238 = 10948U;
	static int32_t x239 = INT32_MIN;
	volatile uint8_t x240 = 2U;
	int32_t t51 = -582;

	t51 = ((x237<(x238/x239))-x240);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 13612U;
	uint64_t x242 = 60LLU;
	int16_t x244 = INT16_MIN;
	int32_t t52 = 941094;

	t52 = ((x241<(x242/x243))-x244);

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = INT64_MAX;
	uint16_t x248 = UINT16_MAX;
	int32_t t53 = -1;

	t53 = ((x245<(x246/x247))-x248);

	if (t53 != -65535) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = INT8_MIN;
	int32_t x252 = -62;

	t54 = ((x249<(x250/x251))-x252);

	if (t54 != 62) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x253 = INT16_MIN;
	uint32_t x254 = 396U;
	uint16_t x255 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;
	uint64_t t55 = 785200355424940LLU;

	t55 = ((x253<(x254/x255))-x256);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = 42547477U;
	volatile int8_t x259 = -7;
	uint16_t x260 = UINT16_MAX;
	int32_t t56 = -5;

	t56 = ((x257<(x258/x259))-x260);

	if (t56 != -65534) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x263 = INT16_MAX;
	static volatile int32_t t57 = 124;

	t57 = ((x261<(x262/x263))-x264);

	if (t57 != -6) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x265 = UINT16_MAX;
	volatile int8_t x266 = INT8_MIN;
	int16_t x267 = 3;
	static int32_t x268 = -1;
	volatile int32_t t58 = -90525466;

	t58 = ((x265<(x266/x267))-x268);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x269 = 15922U;
	uint32_t x270 = UINT32_MAX;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t t59 = 1745668;

	t59 = ((x269<(x270/x271))-x272);

	if (t59 != 32769) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x273 = 3982701U;
	int64_t x274 = INT64_MAX;
	volatile int32_t x275 = -101;
	uint32_t x276 = UINT32_MAX;
	uint32_t t60 = 21028875U;

	t60 = ((x273<(x274/x275))-x276);

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x277 = 0U;
	volatile int16_t x278 = INT16_MIN;
	uint32_t x280 = UINT32_MAX;
	uint32_t t61 = 164913208U;

	t61 = ((x277<(x278/x279))-x280);

	if (t61 != 2U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 638023175LLU;
	int64_t x283 = -1LL;
	volatile int8_t x284 = 1;
	static volatile int32_t t62 = 234;

	t62 = ((x281<(x282/x283))-x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	int32_t x288 = 12336961;
	int32_t t63 = -24913;

	t63 = ((x285<(x286/x287))-x288);

	if (t63 != -12336961) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	static int32_t t64 = 7067;

	t64 = ((x289<(x290/x291))-x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	static int8_t x294 = -1;
	static int8_t x295 = INT8_MIN;
	int16_t x296 = -1;
	volatile int32_t t65 = 1;

	t65 = ((x293<(x294/x295))-x296);

	if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = 2091577;
	int64_t x299 = -1LL;
	static int16_t x300 = INT16_MIN;

	t66 = ((x297<(x298/x299))-x300);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x302 = 677750457;
	int64_t x303 = INT64_MIN;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t67 = 422758;

	t67 = ((x301<(x302/x303))-x304);

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x305 = 45424661810553499LLU;
	static int16_t x306 = INT16_MIN;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t68 = -29490664;

	t68 = ((x305<(x306/x307))-x308);

	if (t68 != 32768) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x310 = INT8_MIN;
	uint16_t x311 = 15944U;
	static int32_t x312 = INT32_MAX;
	int32_t t69 = -32685978;

	t69 = ((x309<(x310/x311))-x312);

	if (t69 != -2147483646) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	uint64_t x315 = 528127849LLU;
	int8_t x316 = INT8_MIN;
	volatile int32_t t70 = -15;

	t70 = ((x313<(x314/x315))-x316);

	if (t70 != 129) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = -276LL;
	int32_t x318 = INT32_MIN;
	static uint8_t x320 = UINT8_MAX;
	static volatile int32_t t71 = -1033239;

	t71 = ((x317<(x318/x319))-x320);

	if (t71 != -254) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x322 = 670197050337LL;
	int64_t x324 = INT64_MAX;
	int64_t t72 = -1267256977664LL;

	t72 = ((x321<(x322/x323))-x324);

	if (t72 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x326 = -1;
	static volatile int64_t x327 = -1LL;
	volatile uint8_t x328 = UINT8_MAX;
	int32_t t73 = 571734693;

	t73 = ((x325<(x326/x327))-x328);

	if (t73 != -255) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x329 = 7550U;
	int16_t x330 = 493;
	volatile int16_t x331 = -1;
	uint8_t x332 = 2U;
	volatile int32_t t74 = -44284478;

	t74 = ((x329<(x330/x331))-x332);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x333 = UINT8_MAX;
	int32_t x334 = INT32_MIN;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = -2;
	int32_t t75 = 73;

	t75 = ((x333<(x334/x335))-x336);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	int32_t t76 = -670;

	t76 = ((x337<(x338/x339))-x340);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x350 = INT32_MIN;
	static uint16_t x351 = 1U;
	int16_t x352 = -1;
	static int32_t t77 = 1356104;

	t77 = ((x349<(x350/x351))-x352);

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x353 = INT32_MAX;
	static int32_t x355 = INT32_MIN;
	static int16_t x356 = -1;

	t78 = ((x353<(x354/x355))-x356);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	static int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t79 = -1610;

	t79 = ((x357<(x358/x359))-x360);

	if (t79 != 129) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = INT32_MIN;
	static int64_t x363 = INT64_MAX;
	uint64_t t80 = 68759710LLU;

	t80 = ((x361<(x362/x363))-x364);

	if (t80 != 18307955454301203497LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x369 = INT64_MIN;
	static int8_t x370 = INT8_MIN;
	uint64_t x371 = 345500990541927322LLU;
	static uint32_t x372 = UINT32_MAX;

	t81 = ((x369<(x370/x371))-x372);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MIN;
	uint32_t x374 = 1869U;
	int32_t x375 = INT32_MIN;
	static int32_t x376 = 2772;
	int32_t t82 = -5606981;

	t82 = ((x373<(x374/x375))-x376);

	if (t82 != -2772) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x377 = -1;
	int8_t x379 = INT8_MAX;
	volatile uint64_t x380 = UINT64_MAX;
	volatile uint64_t t83 = 14140403937814737LLU;

	t83 = ((x377<(x378/x379))-x380);

	if (t83 != 2LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = -1;
	uint16_t x395 = UINT16_MAX;
	static volatile int32_t t84 = -14958;

	t84 = ((x393<(x394/x395))-x396);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = -1;
	int8_t x398 = -1;
	int16_t x399 = -1;
	uint16_t x400 = 337U;

	t85 = ((x397<(x398/x399))-x400);

	if (t85 != -336) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x401 = 266474686116520LL;
	int64_t x402 = -1428823817586LL;
	int32_t x403 = -3;
	static volatile int32_t t86 = -5963549;

	t86 = ((x401<(x402/x403))-x404);

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = INT64_MAX;
	int16_t x414 = INT16_MIN;

	t87 = ((x413<(x414/x415))-x416);

	if (t87 != 4294967251U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x417 = INT32_MAX;
	volatile uint64_t x418 = 6678986LLU;
	volatile int8_t x419 = 4;
	volatile int8_t x420 = -1;
	int32_t t88 = 50;

	t88 = ((x417<(x418/x419))-x420);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x426 = 62U;
	static int16_t x427 = 5;
	int64_t x428 = INT64_MAX;
	static volatile int64_t t89 = 1045LL;

	t89 = ((x425<(x426/x427))-x428);

	if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x429 = INT32_MIN;
	uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = -1;
	volatile int32_t t90 = -243924;

	t90 = ((x429<(x430/x431))-x432);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x434 = 108U;
	static int8_t x435 = INT8_MIN;
	volatile int64_t t91 = -21924295LL;

	t91 = ((x433<(x434/x435))-x436);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x437 = -5;
	uint64_t x438 = 178576LLU;
	uint32_t x439 = 85199U;
	uint8_t x440 = UINT8_MAX;

	t92 = ((x437<(x438/x439))-x440);

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x441 = 34;
	static uint16_t x442 = 115U;
	volatile int8_t x444 = -17;
	int32_t t93 = -65778867;

	t93 = ((x441<(x442/x443))-x444);

	if (t93 != 17) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MIN;
	int64_t x446 = -13177453852LL;
	uint8_t x447 = 1U;
	int8_t x448 = INT8_MIN;
	volatile int32_t t94 = -119;

	t94 = ((x445<(x446/x447))-x448);

	if (t94 != 129) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x449 = INT8_MIN;
	int32_t x450 = INT32_MAX;
	uint8_t x451 = 1U;
	int16_t x452 = INT16_MIN;
	volatile int32_t t95 = 0;

	t95 = ((x449<(x450/x451))-x452);

	if (t95 != 32769) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x455 = 1130958727882LLU;
	int8_t x456 = INT8_MIN;
	volatile int32_t t96 = 492265;

	t96 = ((x453<(x454/x455))-x456);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = -1LL;
	int32_t x458 = 108244301;
	int64_t x459 = -168436170269781192LL;
	static int16_t x460 = INT16_MIN;

	t97 = ((x457<(x458/x459))-x460);

	if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = -1;
	int64_t x462 = INT64_MIN;
	uint16_t x463 = 63U;
	int64_t x464 = -16323410809546002LL;
	volatile int64_t t98 = -12407127LL;

	t98 = ((x461<(x462/x463))-x464);

	if (t98 != 16323410809546002LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x465 = 6U;
	static uint16_t x466 = UINT16_MAX;
	int32_t x468 = 0;
	static int32_t t99 = -19715361;

	t99 = ((x465<(x466/x467))-x468);

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

