#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = -213LL;
volatile int32_t x37 = 6;
static volatile int8_t x38 = 33;
volatile int32_t t8 = -7495;
uint64_t x41 = 12618690126LLU;
static int8_t x47 = INT8_MIN;
int64_t x51 = -1LL;
volatile uint16_t x53 = UINT16_MAX;
uint64_t x54 = UINT64_MAX;
int32_t x68 = INT32_MIN;
int32_t x70 = INT32_MAX;
static int32_t x76 = INT32_MIN;
volatile int32_t t18 = -28;
int32_t t19 = -268;
uint32_t x90 = UINT32_MAX;
int32_t t20 = -404793681;
int64_t x93 = INT64_MIN;
static int64_t x98 = INT64_MIN;
int32_t t23 = -234369487;
static int64_t x109 = INT64_MAX;
static volatile int64_t x111 = INT64_MAX;
int16_t x112 = 84;
int32_t t26 = -23240;
volatile int16_t x121 = 18;
static int32_t x123 = INT32_MIN;
int64_t x125 = 30826283944067LL;
int32_t x126 = INT32_MIN;
int32_t x127 = INT32_MIN;
int64_t x128 = -1LL;
volatile int64_t x133 = INT64_MIN;
volatile int32_t t32 = 2937;
volatile int32_t t34 = 3;
int32_t t36 = -1857166;
volatile int32_t t37 = 354935;
static int16_t x161 = INT16_MIN;
int64_t x169 = 0LL;
volatile int32_t t40 = 495;
int16_t x177 = -1;
volatile int32_t x182 = INT32_MAX;
uint32_t x185 = UINT32_MAX;
uint8_t x189 = UINT8_MAX;
static int16_t x194 = INT16_MIN;
volatile int32_t x195 = -1;
volatile int32_t t46 = -212577251;
int64_t x198 = INT64_MIN;
static int8_t x200 = 23;
int32_t x201 = INT32_MIN;
int8_t x203 = INT8_MAX;
int64_t x208 = -1027964124199LL;
int16_t x211 = INT16_MIN;
static volatile uint32_t x214 = 484323U;
uint8_t x216 = UINT8_MAX;
int32_t x219 = 40168928;
static int8_t x220 = -1;
uint32_t x230 = UINT32_MAX;
volatile int16_t x235 = -1;
volatile int32_t t59 = 1017276;
int8_t x255 = 13;
uint8_t x261 = UINT8_MAX;
static uint8_t x263 = 1U;
volatile int64_t x265 = 24418956LL;
volatile int32_t t64 = -9939401;
volatile int64_t x270 = -243LL;
volatile int8_t x274 = 1;
volatile int64_t x276 = -14302715829329245LL;
int32_t t66 = 5;
static volatile int8_t x277 = INT8_MAX;
int32_t t67 = -74601;
int32_t x282 = INT32_MAX;
int32_t x289 = -1;
int8_t x299 = INT8_MAX;
volatile int32_t t72 = 6;
int32_t x301 = 7;
static int64_t x308 = -714LL;
uint8_t x309 = 95U;
static volatile int8_t x310 = 34;
volatile int64_t x312 = INT64_MAX;
static int32_t t75 = 216041;
int32_t t79 = 70677;
static volatile int32_t t82 = -6251136;
int64_t x366 = INT64_MIN;
volatile uint32_t x386 = 3112U;
static int16_t x387 = 167;
int32_t t93 = -12111294;
volatile int32_t t94 = -10;
static int64_t x397 = -62424564489457LL;
int16_t x401 = 29;
static volatile int16_t x404 = INT16_MAX;
int16_t x405 = -1;
int64_t x410 = -348545743LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int32_t x2 = INT32_MIN;
	volatile int8_t x3 = 52;
	volatile int32_t t0 = 515610049;

	t0 = ((x1<(x2%x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = 416;

	t1 = ((x5<(x6%x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = -61;
	int16_t x11 = -1;
	volatile uint64_t x12 = 375LLU;
	volatile int32_t t2 = 1;

	t2 = ((x9<(x10%x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile uint16_t x14 = UINT16_MAX;
	volatile int8_t x15 = -1;
	int32_t x16 = 4034597;
	static volatile int32_t t3 = -129140;

	t3 = ((x13<(x14%x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -507;
	int16_t x18 = -1196;
	uint64_t x19 = 157852147707LLU;
	int32_t x20 = -46760;
	static int32_t t4 = -443;

	t4 = ((x17<(x18%x19))<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int32_t x22 = INT32_MAX;
	uint8_t x23 = UINT8_MAX;
	static volatile uint16_t x24 = 11708U;
	int32_t t5 = 0;

	t5 = ((x21<(x22%x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x29 = UINT16_MAX;
	volatile uint16_t x30 = 51U;
	static int64_t x31 = INT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = 16854264;

	t6 = ((x29<(x30%x31))<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	static uint32_t x34 = 1U;
	uint64_t x35 = 31374804608616LLU;
	int16_t x36 = INT16_MIN;
	int32_t t7 = -7347551;

	t7 = ((x33<(x34%x35))<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = INT64_MAX;
	int32_t x40 = -227198693;

	t8 = ((x37<(x38%x39))<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x42 = INT8_MIN;
	int8_t x43 = 3;
	int8_t x44 = -11;
	volatile int32_t t9 = -832930795;

	t9 = ((x41<(x42%x43))<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x45 = INT32_MIN;
	volatile int64_t x46 = INT64_MIN;
	uint16_t x48 = 1810U;
	volatile int32_t t10 = 6077;

	t10 = ((x45<(x46%x47))<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = 3;
	volatile uint16_t x50 = 16U;
	int32_t x52 = INT32_MIN;
	int32_t t11 = -208252;

	t11 = ((x49<(x50%x51))<=x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x55 = -17;
	uint64_t x56 = 77LLU;
	volatile int32_t t12 = 1549709;

	t12 = ((x53<(x54%x55))<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -24580259LL;
	uint32_t x58 = 6U;
	int64_t x59 = 297LL;
	static volatile uint16_t x60 = 4U;
	static int32_t t13 = -1;

	t13 = ((x57<(x58%x59))<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = 17;
	int16_t x62 = INT16_MIN;
	int64_t x63 = -23211LL;
	int8_t x64 = INT8_MIN;
	int32_t t14 = 488;

	t14 = ((x61<(x62%x63))<=x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = 2;
	int16_t x66 = INT16_MIN;
	static volatile uint64_t x67 = UINT64_MAX;
	int32_t t15 = 0;

	t15 = ((x65<(x66%x67))<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	volatile uint32_t x71 = UINT32_MAX;
	uint16_t x72 = UINT16_MAX;
	int32_t t16 = 0;

	t16 = ((x69<(x70%x71))<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = -232395016LL;
	int32_t x74 = INT32_MIN;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t t17 = 31490;

	t17 = ((x73<(x74%x75))<=x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -27014006743LL;
	int64_t x78 = INT64_MIN;
	volatile int32_t x79 = -1;
	static int32_t x80 = 30233;

	t18 = ((x77<(x78%x79))<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 7963U;
	int64_t x82 = INT64_MAX;
	uint64_t x83 = 4635663156LLU;
	static int64_t x84 = 11119159923899LL;

	t19 = ((x81<(x82%x83))<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int16_t x91 = 1;
	volatile uint32_t x92 = 205U;

	t20 = ((x89<(x90%x91))<=x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x94 = 12552970LLU;
	volatile int16_t x95 = INT16_MIN;
	static volatile int64_t x96 = 164470148530401LL;
	volatile int32_t t21 = -1;

	t21 = ((x93<(x94%x95))<=x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	volatile int32_t t22 = 1;

	t22 = ((x97<(x98%x99))<=x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -7;
	volatile uint16_t x102 = 504U;
	volatile int8_t x103 = INT8_MIN;
	uint32_t x104 = 62151U;

	t23 = ((x101<(x102%x103))<=x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 3U;
	static volatile int8_t x107 = INT8_MIN;
	volatile uint8_t x108 = UINT8_MAX;
	static int32_t t24 = -1781205;

	t24 = ((x105<(x106%x107))<=x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x110 = INT8_MAX;
	volatile int32_t t25 = 2593326;

	t25 = ((x109<(x110%x111))<=x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = -5;
	int64_t x115 = INT64_MAX;
	int16_t x116 = INT16_MIN;

	t26 = ((x113<(x114%x115))<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = 1346LL;
	int8_t x118 = -1;
	int64_t x119 = 2050998673LL;
	int16_t x120 = -1;
	static volatile int32_t t27 = -224668;

	t27 = ((x117<(x118%x119))<=x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x122 = 234036LL;
	int16_t x124 = -1;
	volatile int32_t t28 = -178731;

	t28 = ((x121<(x122%x123))<=x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t t29 = 611367019;

	t29 = ((x125<(x126%x127))<=x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	uint32_t x130 = 1U;
	uint16_t x131 = 8U;
	uint64_t x132 = UINT64_MAX;
	volatile int32_t t30 = -97099799;

	t30 = ((x129<(x130%x131))<=x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MAX;
	volatile int16_t x136 = -1;
	int32_t t31 = -50;

	t31 = ((x133<(x134%x135))<=x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MIN;
	static uint8_t x138 = UINT8_MAX;
	int64_t x139 = -1LL;
	static int32_t x140 = INT32_MIN;

	t32 = ((x137<(x138%x139))<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = UINT64_MAX;
	volatile uint32_t x142 = 7U;
	volatile uint64_t x143 = UINT64_MAX;
	static int8_t x144 = INT8_MIN;
	int32_t t33 = -184663;

	t33 = ((x141<(x142%x143))<=x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = UINT8_MAX;
	volatile int32_t x146 = INT32_MAX;
	int16_t x147 = 13;
	volatile int32_t x148 = -27475194;

	t34 = ((x145<(x146%x147))<=x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x149 = 12U;
	volatile uint32_t x150 = 1388601U;
	int16_t x151 = -1;
	int8_t x152 = INT8_MIN;
	int32_t t35 = -6824081;

	t35 = ((x149<(x150%x151))<=x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 42652U;
	int32_t x154 = -16442;
	int16_t x155 = INT16_MIN;
	uint8_t x156 = 1U;

	t36 = ((x153<(x154%x155))<=x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MIN;
	int64_t x158 = 16177011523828LL;
	static uint8_t x159 = 12U;
	uint16_t x160 = 1626U;

	t37 = ((x157<(x158%x159))<=x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = 10448408600929LLU;
	uint8_t x163 = 11U;
	static uint8_t x164 = 14U;
	int32_t t38 = -870106;

	t38 = ((x161<(x162%x163))<=x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -58;
	uint64_t x166 = 2LLU;
	uint32_t x167 = UINT32_MAX;
	volatile int32_t x168 = 0;
	int32_t t39 = -69498787;

	t39 = ((x165<(x166%x167))<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x170 = -2989740LL;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 656U;

	t40 = ((x169<(x170%x171))<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint32_t x174 = 921419U;
	static uint8_t x175 = 24U;
	int64_t x176 = -45147798332LL;
	static volatile int32_t t41 = -1;

	t41 = ((x173<(x174%x175))<=x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = 159021964U;
	static uint8_t x179 = 13U;
	int64_t x180 = -1LL;
	int32_t t42 = 693820;

	t42 = ((x177<(x178%x179))<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	int32_t x183 = INT32_MIN;
	volatile uint16_t x184 = 1U;
	volatile int32_t t43 = 3665;

	t43 = ((x181<(x182%x183))<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x186 = -7;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = -1;
	volatile int32_t t44 = -46048555;

	t44 = ((x185<(x186%x187))<=x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -70898;
	int8_t x191 = 8;
	int32_t x192 = INT32_MIN;
	int32_t t45 = -27;

	t45 = ((x189<(x190%x191))<=x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = 8U;
	int64_t x196 = -1LL;

	t46 = ((x193<(x194%x195))<=x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	uint32_t x199 = UINT32_MAX;
	int32_t t47 = -37781;

	t47 = ((x197<(x198%x199))<=x200);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x202 = UINT16_MAX;
	int8_t x204 = INT8_MIN;
	volatile int32_t t48 = 0;

	t48 = ((x201<(x202%x203))<=x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = INT8_MAX;
	int8_t x206 = -1;
	uint16_t x207 = 16241U;
	volatile int32_t t49 = -5;

	t49 = ((x205<(x206%x207))<=x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x209 = 0U;
	int64_t x210 = 170471LL;
	int32_t x212 = INT32_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x209<(x210%x211))<=x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = INT16_MIN;
	volatile int32_t x215 = INT32_MIN;
	static volatile int32_t t51 = 4239;

	t51 = ((x213<(x214%x215))<=x216);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = -1;
	static uint16_t x218 = UINT16_MAX;
	static int32_t t52 = -7118;

	t52 = ((x217<(x218%x219))<=x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	volatile int16_t x223 = 1;
	volatile uint32_t x224 = 2362U;
	volatile int32_t t53 = 1;

	t53 = ((x221<(x222%x223))<=x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	static uint16_t x226 = UINT16_MAX;
	volatile int8_t x227 = -1;
	static int8_t x228 = 21;
	int32_t t54 = -166046;

	t54 = ((x225<(x226%x227))<=x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t55 = 13345015;

	t55 = ((x229<(x230%x231))<=x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int16_t x234 = INT16_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t56 = 115882051;

	t56 = ((x233<(x234%x235))<=x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x237 = 6U;
	int8_t x238 = -55;
	int64_t x239 = 17129733514421LL;
	uint8_t x240 = 9U;
	volatile int32_t t57 = -9423347;

	t57 = ((x237<(x238%x239))<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x241 = 2U;
	static int64_t x242 = -1LL;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = 21027U;
	volatile int32_t t58 = 0;

	t58 = ((x241<(x242%x243))<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = UINT8_MAX;
	uint32_t x246 = UINT32_MAX;
	static int8_t x247 = -2;
	int16_t x248 = INT16_MIN;

	t59 = ((x245<(x246%x247))<=x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = -1;
	int8_t x250 = INT8_MIN;
	static uint8_t x251 = 26U;
	uint16_t x252 = 1U;
	static volatile int32_t t60 = -57344192;

	t60 = ((x249<(x250%x251))<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = -1;
	static uint64_t x254 = UINT64_MAX;
	volatile int32_t x256 = 7827;
	int32_t t61 = 0;

	t61 = ((x253<(x254%x255))<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	int32_t x258 = 1;
	int32_t x259 = INT32_MAX;
	volatile int16_t x260 = INT16_MIN;
	int32_t t62 = -1305;

	t62 = ((x257<(x258%x259))<=x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x262 = INT32_MIN;
	int32_t x264 = -1;
	volatile int32_t t63 = 24;

	t63 = ((x261<(x262%x263))<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x266 = 1708042063U;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;

	t64 = ((x265<(x266%x267))<=x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x269 = INT32_MAX;
	volatile int64_t x271 = INT64_MAX;
	int64_t x272 = INT64_MIN;
	volatile int32_t t65 = 5413;

	t65 = ((x269<(x270%x271))<=x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = -1;
	uint16_t x275 = UINT16_MAX;

	t66 = ((x273<(x274%x275))<=x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = 373448940;
	volatile uint8_t x279 = UINT8_MAX;
	uint32_t x280 = UINT32_MAX;

	t67 = ((x277<(x278%x279))<=x280);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -1;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -1;
	int32_t t68 = 11;

	t68 = ((x281<(x282%x283))<=x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x285 = 57U;
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = -1LL;
	static int64_t x288 = -1LL;
	static volatile int32_t t69 = 71840;

	t69 = ((x285<(x286%x287))<=x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x290 = -1;
	int32_t x291 = -1574;
	static int64_t x292 = INT64_MIN;
	static int32_t t70 = 0;

	t70 = ((x289<(x290%x291))<=x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	static volatile int16_t x295 = INT16_MAX;
	volatile int64_t x296 = 10244471415770LL;
	volatile int32_t t71 = -262;

	t71 = ((x293<(x294%x295))<=x296);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = 15;
	int8_t x298 = INT8_MIN;
	int8_t x300 = -1;

	t72 = ((x297<(x298%x299))<=x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = INT8_MIN;
	int32_t x303 = -81;
	static uint8_t x304 = 1U;
	int32_t t73 = 0;

	t73 = ((x301<(x302%x303))<=x304);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = 3056;
	volatile uint8_t x306 = 110U;
	int32_t x307 = INT32_MIN;
	int32_t t74 = 388288;

	t74 = ((x305<(x306%x307))<=x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x311 = INT8_MIN;

	t75 = ((x309<(x310%x311))<=x312);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = -62;

	t76 = ((x313<(x314%x315))<=x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x317 = -12LL;
	int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MAX;
	uint32_t x320 = 249211770U;
	volatile int32_t t77 = 15;

	t77 = ((x317<(x318%x319))<=x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x321 = UINT32_MAX;
	volatile int16_t x322 = -1;
	uint8_t x323 = 2U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t78 = 810;

	t78 = ((x321<(x322%x323))<=x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x326 = -10;
	int8_t x327 = INT8_MIN;
	static volatile uint64_t x328 = UINT64_MAX;

	t79 = ((x325<(x326%x327))<=x328);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = UINT64_MAX;
	static volatile int32_t x334 = 3;
	int32_t x335 = 827535;
	uint8_t x336 = 18U;
	int32_t t80 = 8;

	t80 = ((x333<(x334%x335))<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -1;
	int64_t x338 = 180024LL;
	int8_t x339 = INT8_MIN;
	uint8_t x340 = 0U;
	volatile int32_t t81 = -1493;

	t81 = ((x337<(x338%x339))<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	static volatile int32_t x342 = -60;
	int8_t x343 = -1;
	int16_t x344 = INT16_MIN;

	t82 = ((x341<(x342%x343))<=x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	static uint8_t x346 = 51U;
	int64_t x347 = 112223944634LL;
	volatile uint64_t x348 = UINT64_MAX;
	static volatile int32_t t83 = -27866;

	t83 = ((x345<(x346%x347))<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -1039;
	int16_t x350 = 7;
	int8_t x351 = INT8_MAX;
	static int8_t x352 = INT8_MAX;
	static int32_t t84 = 1;

	t84 = ((x349<(x350%x351))<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = 14;
	int32_t x354 = INT32_MIN;
	int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	volatile int32_t t85 = -48662384;

	t85 = ((x353<(x354%x355))<=x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x357 = 423;
	uint32_t x358 = 105U;
	int32_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t86 = -11119284;

	t86 = ((x357<(x358%x359))<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 11U;
	volatile int64_t x367 = INT64_MAX;
	int64_t x368 = INT64_MIN;
	int32_t t87 = 27902;

	t87 = ((x365<(x366%x367))<=x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x369 = UINT32_MAX;
	int8_t x370 = -1;
	uint32_t x371 = 815U;
	uint32_t x372 = 6442580U;
	int32_t t88 = 418;

	t88 = ((x369<(x370%x371))<=x372);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MAX;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = INT8_MIN;
	volatile int16_t x376 = INT16_MIN;
	int32_t t89 = -742384;

	t89 = ((x373<(x374%x375))<=x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = 37;
	volatile uint32_t x379 = 1U;
	volatile uint64_t x380 = 165831091279220LLU;
	volatile int32_t t90 = 68;

	t90 = ((x377<(x378%x379))<=x380);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MIN;
	static uint32_t x382 = 66849809U;
	uint8_t x383 = 3U;
	int16_t x384 = -3731;
	int32_t t91 = 348;

	t91 = ((x381<(x382%x383))<=x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -24;
	uint32_t x388 = UINT32_MAX;
	volatile int32_t t92 = -214850;

	t92 = ((x385<(x386%x387))<=x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	int64_t x391 = -1877LL;
	int32_t x392 = INT32_MIN;

	t93 = ((x389<(x390%x391))<=x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = 891611887660711127LL;
	int8_t x395 = -2;
	int64_t x396 = -1LL;

	t94 = ((x393<(x394%x395))<=x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	int8_t x400 = -45;
	int32_t t95 = -40862622;

	t95 = ((x397<(x398%x399))<=x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x402 = INT32_MIN;
	static int32_t x403 = INT32_MAX;
	static int32_t t96 = -130893;

	t96 = ((x401<(x402%x403))<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x406 = -1;
	volatile uint16_t x407 = 4U;
	uint8_t x408 = 120U;
	volatile int32_t t97 = 380675487;

	t97 = ((x405<(x406%x407))<=x408);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x409 = UINT16_MAX;
	static uint16_t x411 = 20U;
	int32_t x412 = INT32_MIN;
	volatile int32_t t98 = 82258;

	t98 = ((x409<(x410%x411))<=x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = UINT32_MAX;
	uint8_t x414 = 108U;
	uint8_t x415 = 14U;
	int32_t x416 = INT32_MIN;
	static int32_t t99 = -79958487;

	t99 = ((x413<(x414%x415))<=x416);

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

