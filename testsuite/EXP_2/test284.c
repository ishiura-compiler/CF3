#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -3;
uint64_t x5 = 69LLU;
volatile int16_t x21 = 0;
static int32_t x23 = -1;
uint16_t x25 = 3U;
static uint32_t t4 = 208815U;
uint16_t x31 = 134U;
static int64_t x37 = 0LL;
int8_t x45 = INT8_MAX;
uint16_t x46 = 15U;
int64_t x50 = -1LL;
volatile int8_t x51 = -1;
uint64_t x52 = 2838LLU;
volatile uint64_t x55 = 1051489605LLU;
volatile int32_t x56 = INT32_MIN;
int32_t x61 = INT32_MIN;
static int64_t t12 = 42LL;
int64_t t13 = -60400232005176396LL;
int16_t x71 = INT16_MIN;
volatile int32_t t14 = 226923257;
volatile int32_t t16 = -22797169;
int64_t x106 = INT64_MIN;
static int32_t x111 = 50666813;
int16_t x112 = INT16_MIN;
static uint16_t x116 = 243U;
volatile uint32_t x119 = 18059009U;
int32_t t24 = 171855;
volatile uint64_t x121 = 122LLU;
static int8_t x125 = 14;
int32_t x130 = -3;
static int64_t t27 = -3LL;
static volatile int16_t x135 = 0;
int8_t x137 = -4;
int16_t x147 = -433;
volatile uint32_t t32 = 56185476U;
int32_t x159 = INT32_MAX;
uint32_t t33 = 525481U;
volatile int64_t t35 = -72LL;
int16_t x173 = 45;
int32_t x174 = -1701805;
uint16_t x179 = 23U;
int32_t x182 = -11016620;
uint16_t x184 = 9U;
volatile int64_t x187 = 315960406721LL;
volatile int32_t t40 = -1546028;
int32_t x204 = INT32_MAX;
static int8_t x208 = -1;
static int64_t x212 = INT64_MIN;
int64_t t44 = -25575340420LL;
int32_t x213 = -45912262;
uint8_t x218 = UINT8_MAX;
volatile int16_t x220 = INT16_MIN;
static volatile int32_t t46 = 1060212;
int16_t x224 = 14;
int64_t x225 = 274258847449625538LL;
int32_t x227 = INT32_MAX;
volatile int32_t t53 = 5144;
static int32_t x253 = 1356;
int8_t x254 = 2;
int64_t x259 = -1LL;
int8_t x263 = -1;
volatile int32_t t57 = 29397598;
uint64_t x267 = 151184167446LLU;
uint64_t x271 = UINT64_MAX;
uint64_t x273 = UINT64_MAX;
int64_t x275 = INT64_MIN;
volatile int32_t t60 = -26500;
int64_t x288 = INT64_MIN;
int32_t x292 = INT32_MIN;
static int32_t t65 = -12321781;
int64_t x300 = -60444861LL;
uint64_t t67 = 33938LLU;
static int64_t x312 = INT64_MIN;
static int64_t x314 = -11216002597LL;
static int16_t x323 = -1;
int32_t t73 = 14327;
int64_t x332 = INT64_MIN;
static int64_t t74 = -1032056912594266LL;
volatile uint64_t x335 = 296221460162LLU;
int32_t x338 = -31459;
uint32_t x339 = 1U;
int64_t x348 = INT64_MAX;
int64_t t78 = 6419112713LL;
int64_t x355 = INT64_MIN;
int64_t x359 = -1LL;
static int64_t x366 = INT64_MIN;
int64_t x379 = -1LL;
static int64_t t86 = -705LL;
uint64_t x385 = 2831431122751LLU;
static uint8_t x405 = 123U;
volatile uint32_t t91 = 3803021U;
int32_t x409 = -47;
static uint64_t x413 = 62839962LLU;
int8_t x421 = INT8_MAX;
int32_t t99 = 55021839;


void f0(void) {
	uint16_t x2 = 6147U;
	int16_t x3 = 285;
	static uint32_t x4 = 31091003U;
	volatile uint32_t t0 = 71065U;

	t0 = ((x1<(x2-x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	static uint32_t x7 = 36198U;
	static int8_t x8 = INT8_MIN;
	static int32_t t1 = -98131;

	t1 = ((x5<(x6-x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 3649U;
	uint32_t x14 = UINT32_MAX;
	int32_t x15 = INT32_MIN;
	volatile int32_t x16 = INT32_MIN;
	volatile int32_t t2 = -1793807;

	t2 = ((x13<(x14-x15))&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x22 = 5U;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t3 = 2;

	t3 = ((x21<(x22-x23))&x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x26 = -1LL;
	int64_t x27 = INT64_MAX;
	uint32_t x28 = UINT32_MAX;

	t4 = ((x25<(x26-x27))&x28);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	int64_t x30 = INT64_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t5 = 58857173;

	t5 = ((x29<(x30-x31))&x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x38 = -76201041LL;
	static int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	volatile int32_t t6 = 7;

	t6 = ((x37<(x38-x39))&x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	volatile int16_t x42 = INT16_MAX;
	uint16_t x43 = 3713U;
	static int8_t x44 = 0;
	static int32_t t7 = -1;

	t7 = ((x41<(x42-x43))&x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x47 = 0U;
	static int16_t x48 = INT16_MIN;
	volatile int32_t t8 = -423396;

	t8 = ((x45<(x46-x47))&x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = UINT64_MAX;
	volatile uint64_t t9 = 9538LLU;

	t9 = ((x49<(x50-x51))&x52);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	uint32_t x54 = UINT32_MAX;
	int32_t t10 = -64258;

	t10 = ((x53<(x54-x55))&x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = UINT16_MAX;
	int32_t x58 = 842912062;
	volatile uint16_t x59 = 34U;
	volatile uint64_t x60 = 984856579884LLU;
	uint64_t t11 = 115131LLU;

	t11 = ((x57<(x58-x59))&x60);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MAX;
	volatile int64_t x64 = 206965484581052LL;

	t12 = ((x61<(x62-x63))&x64);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = -1;
	int64_t x67 = -3073000078412992105LL;
	static int64_t x68 = -1LL;

	t13 = ((x65<(x66-x67))&x68);

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	volatile uint64_t x70 = UINT64_MAX;
	volatile int8_t x72 = INT8_MIN;

	t14 = ((x69<(x70-x71))&x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = -1;
	int8_t x78 = 26;
	uint8_t x79 = UINT8_MAX;
	uint8_t x80 = UINT8_MAX;
	static volatile int32_t t15 = -448635;

	t15 = ((x77<(x78-x79))&x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -5;
	uint8_t x82 = 42U;
	int8_t x83 = -1;
	uint16_t x84 = 22U;

	t16 = ((x81<(x82-x83))&x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = INT16_MIN;
	int16_t x86 = -1;
	volatile int64_t x87 = -93490326410312LL;
	volatile uint8_t x88 = 1U;
	int32_t t17 = 4572;

	t17 = ((x85<(x86-x87))&x88);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x89 = INT32_MIN;
	static int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	uint32_t t18 = 1038U;

	t18 = ((x89<(x90-x91))&x92);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	volatile int16_t x94 = INT16_MIN;
	int16_t x95 = -1;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t19 = 6847;

	t19 = ((x93<(x94-x95))&x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MIN;
	uint16_t x100 = 23829U;
	int32_t t20 = -108375;

	t20 = ((x97<(x98-x99))&x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	int64_t x107 = INT64_MIN;
	int64_t x108 = INT64_MAX;
	static int64_t t21 = 361038195LL;

	t21 = ((x105<(x106-x107))&x108);

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x110 = 17LLU;
	int32_t t22 = -9;

	t22 = ((x109<(x110-x111))&x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = -1LL;
	int32_t x114 = INT32_MAX;
	volatile uint16_t x115 = 1U;
	volatile int32_t t23 = 228;

	t23 = ((x113<(x114-x115))&x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = 2;
	int8_t x118 = -16;
	int16_t x120 = -1217;

	t24 = ((x117<(x118-x119))&x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x122 = INT16_MAX;
	static volatile int8_t x123 = INT8_MAX;
	volatile int16_t x124 = INT16_MAX;
	volatile int32_t t25 = -359126770;

	t25 = ((x121<(x122-x123))&x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x126 = -1LL;
	static int16_t x127 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t26 = 32163450;

	t26 = ((x125<(x126-x127))&x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x129 = 0U;
	int8_t x131 = INT8_MIN;
	volatile int64_t x132 = INT64_MAX;

	t27 = ((x129<(x130-x131))&x132);

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x133 = -228480;
	int8_t x134 = -1;
	int8_t x136 = INT8_MIN;
	int32_t t28 = 27;

	t28 = ((x133<(x134-x135))&x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = -1LL;
	int64_t x139 = -917455LL;
	uint64_t x140 = UINT64_MAX;
	uint64_t t29 = 7LLU;

	t29 = ((x137<(x138-x139))&x140);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	int64_t x142 = -1LL;
	static int16_t x143 = 105;
	volatile int32_t x144 = 206826;
	volatile int32_t t30 = -11;

	t30 = ((x141<(x142-x143))&x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x145 = UINT32_MAX;
	int32_t x146 = -1;
	static volatile int16_t x148 = -1;
	volatile int32_t t31 = -2334;

	t31 = ((x145<(x146-x147))&x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x149 = 1134313U;
	volatile int16_t x150 = 26;
	static int8_t x151 = -1;
	uint32_t x152 = 422U;

	t32 = ((x149<(x150-x151))&x152);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = INT64_MAX;
	uint32_t x158 = UINT32_MAX;
	uint32_t x160 = 2414270U;

	t33 = ((x157<(x158-x159))&x160);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	volatile int16_t x162 = -1;
	int8_t x163 = 41;
	volatile uint8_t x164 = 36U;
	int32_t t34 = -28322;

	t34 = ((x161<(x162-x163))&x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -599203362811553093LL;

	t35 = ((x165<(x166-x167))&x168);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = 98LL;
	int32_t x170 = -3962;
	static int64_t x171 = 64781215873611LL;
	volatile uint32_t x172 = UINT32_MAX;
	uint32_t t36 = 5344U;

	t36 = ((x169<(x170-x171))&x172);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x175 = INT32_MIN;
	int64_t x176 = 881144446692253672LL;
	volatile int64_t t37 = -83136719LL;

	t37 = ((x173<(x174-x175))&x176);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x177 = INT64_MIN;
	static volatile uint16_t x178 = 1U;
	static volatile int16_t x180 = -1;
	static volatile int32_t t38 = -19714340;

	t38 = ((x177<(x178-x179))&x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x183 = 1U;
	volatile int32_t t39 = 1450;

	t39 = ((x181<(x182-x183))&x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x185 = -218;
	uint16_t x186 = 3U;
	static volatile int32_t x188 = INT32_MIN;

	t40 = ((x185<(x186-x187))&x188);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	volatile int8_t x198 = 1;
	uint16_t x199 = 1863U;
	volatile uint16_t x200 = 2013U;
	static volatile int32_t t41 = 1633;

	t41 = ((x197<(x198-x199))&x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x201 = UINT32_MAX;
	static int64_t x202 = -33288000LL;
	static uint8_t x203 = 21U;
	static volatile int32_t t42 = -123963493;

	t42 = ((x201<(x202-x203))&x204);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x205 = -5;
	uint64_t x206 = 10050099148LLU;
	static int32_t x207 = INT32_MIN;
	int32_t t43 = 32;

	t43 = ((x205<(x206-x207))&x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x209 = INT64_MIN;
	volatile int8_t x210 = -1;
	static uint16_t x211 = UINT16_MAX;

	t44 = ((x209<(x210-x211))&x212);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x214 = 352397073U;
	int64_t x215 = -1698541692398LL;
	uint8_t x216 = 7U;
	volatile int32_t t45 = -1103;

	t45 = ((x213<(x214-x215))&x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x217 = INT16_MIN;
	volatile int16_t x219 = INT16_MIN;

	t46 = ((x217<(x218-x219))&x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x221 = 10U;
	int64_t x222 = 29287455881033894LL;
	int8_t x223 = INT8_MAX;
	volatile int32_t t47 = -16010516;

	t47 = ((x221<(x222-x223))&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x226 = UINT32_MAX;
	int32_t x228 = -7868866;
	volatile int32_t t48 = -33;

	t48 = ((x225<(x226-x227))&x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x229 = 1U;
	volatile int32_t x230 = INT32_MIN;
	static volatile int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	volatile int32_t t49 = 1;

	t49 = ((x229<(x230-x231))&x232);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MAX;
	static int8_t x234 = 1;
	static int32_t x235 = -1;
	volatile int64_t x236 = INT64_MIN;
	volatile int64_t t50 = -7426861412238LL;

	t50 = ((x233<(x234-x235))&x236);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -1LL;
	uint64_t x238 = 67585547524312511LLU;
	uint32_t x239 = 516978U;
	int32_t x240 = -1;
	volatile int32_t t51 = -944129;

	t51 = ((x237<(x238-x239))&x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	uint16_t x244 = 1U;
	int32_t t52 = 3;

	t52 = ((x241<(x242-x243))&x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x245 = 11U;
	uint32_t x246 = UINT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile int32_t x248 = 142092372;

	t53 = ((x245<(x246-x247))&x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -894;
	volatile int8_t x250 = INT8_MIN;
	uint8_t x251 = UINT8_MAX;
	int16_t x252 = -1;
	volatile int32_t t54 = 1;

	t54 = ((x249<(x250-x251))&x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x255 = 93LL;
	uint16_t x256 = 77U;
	volatile int32_t t55 = 835499648;

	t55 = ((x253<(x254-x255))&x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = INT32_MAX;
	uint64_t x258 = 105781LLU;
	int32_t x260 = -42351969;
	static int32_t t56 = -363277451;

	t56 = ((x257<(x258-x259))&x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = UINT32_MAX;
	int32_t x262 = -26;
	volatile int8_t x264 = INT8_MIN;

	t57 = ((x261<(x262-x263))&x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x265 = INT16_MAX;
	int8_t x266 = -1;
	volatile int64_t x268 = INT64_MIN;
	int64_t t58 = -550428998251077833LL;

	t58 = ((x265<(x266-x267))&x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = -1725229060LL;
	volatile int64_t x272 = INT64_MIN;
	int64_t t59 = -8155689608607LL;

	t59 = ((x269<(x270-x271))&x272);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = INT8_MIN;
	uint16_t x276 = 241U;

	t60 = ((x273<(x274-x275))&x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = 2799625;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	int32_t t61 = 11440867;

	t61 = ((x277<(x278-x279))&x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = -1;
	static int32_t x282 = -1;
	volatile int8_t x283 = INT8_MIN;
	int64_t x284 = -876545LL;
	static int64_t t62 = 7650LL;

	t62 = ((x281<(x282-x283))&x284);

	if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = -1;
	static int16_t x286 = INT16_MIN;
	int64_t x287 = -1LL;
	int64_t t63 = 106236LL;

	t63 = ((x285<(x286-x287))&x288);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = 1;
	int32_t x290 = INT32_MIN;
	int8_t x291 = -1;
	volatile int32_t t64 = 1713;

	t64 = ((x289<(x290-x291))&x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = 138U;
	volatile int8_t x294 = -7;
	int64_t x295 = -55592LL;
	static int32_t x296 = INT32_MAX;

	t65 = ((x293<(x294-x295))&x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	volatile uint8_t x298 = 1U;
	int8_t x299 = -48;
	int64_t t66 = 25751LL;

	t66 = ((x297<(x298-x299))&x300);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	static uint64_t x303 = UINT64_MAX;
	uint64_t x304 = 5452917LLU;

	t67 = ((x301<(x302-x303))&x304);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	volatile uint16_t x308 = 28U;
	int32_t t68 = -194;

	t68 = ((x305<(x306-x307))&x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 50U;
	static uint32_t x311 = UINT32_MAX;
	int64_t t69 = 97223467134LL;

	t69 = ((x309<(x310-x311))&x312);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -1LL;
	volatile uint16_t x315 = 3U;
	int32_t x316 = 1;
	int32_t t70 = 1009128;

	t70 = ((x313<(x314-x315))&x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x317 = INT16_MIN;
	uint32_t x318 = UINT32_MAX;
	volatile int16_t x319 = INT16_MIN;
	uint16_t x320 = 3164U;
	int32_t t71 = -459099;

	t71 = ((x317<(x318-x319))&x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x321 = -2731096;
	volatile uint8_t x322 = 58U;
	volatile int16_t x324 = INT16_MIN;
	static volatile int32_t t72 = 43;

	t72 = ((x321<(x322-x323))&x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 9U;
	int16_t x326 = -1;
	volatile uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = -11747;

	t73 = ((x325<(x326-x327))&x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 20LLU;
	int8_t x331 = 12;

	t74 = ((x329<(x330-x331))&x332);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = -1;
	int32_t x334 = 1237;
	static int64_t x336 = INT64_MIN;
	volatile int64_t t75 = -4563773883LL;

	t75 = ((x333<(x334-x335))&x336);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = 12;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t76 = -12;

	t76 = ((x337<(x338-x339))&x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x341 = INT8_MIN;
	int16_t x342 = INT16_MIN;
	uint16_t x343 = 21198U;
	volatile int8_t x344 = INT8_MIN;
	volatile int32_t t77 = 105176872;

	t77 = ((x341<(x342-x343))&x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	static int16_t x346 = INT16_MAX;
	int8_t x347 = -1;

	t78 = ((x345<(x346-x347))&x348);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = -1;
	static int32_t x350 = -1;
	static uint64_t x351 = 1919536177LLU;
	static int8_t x352 = INT8_MIN;
	volatile int32_t t79 = 1;

	t79 = ((x349<(x350-x351))&x352);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = INT8_MIN;
	volatile uint64_t x354 = UINT64_MAX;
	volatile uint32_t x356 = 27552U;
	volatile uint32_t t80 = 2004401U;

	t80 = ((x353<(x354-x355))&x356);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x357 = 87LLU;
	int32_t x358 = 87457371;
	volatile int8_t x360 = INT8_MIN;
	int32_t t81 = -6043;

	t81 = ((x357<(x358-x359))&x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x361 = -1;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = 9;
	volatile int8_t x364 = -1;
	int32_t t82 = 2024109;

	t82 = ((x361<(x362-x363))&x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x365 = -254;
	volatile uint64_t x367 = 3LLU;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t83 = 381732401;

	t83 = ((x365<(x366-x367))&x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = -3278943509227LL;
	int64_t x374 = -1LL;
	volatile int16_t x375 = INT16_MIN;
	volatile int32_t x376 = 883978552;
	volatile int32_t t84 = -73633265;

	t84 = ((x373<(x374-x375))&x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x377 = 15U;
	int8_t x378 = 0;
	static int32_t x380 = 238949054;
	int32_t t85 = -387;

	t85 = ((x377<(x378-x379))&x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x381 = 0U;
	int16_t x382 = 1;
	int32_t x383 = -1;
	static int64_t x384 = INT64_MIN;

	t86 = ((x381<(x382-x383))&x384);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x386 = INT16_MAX;
	static uint16_t x387 = 12389U;
	volatile uint16_t x388 = 9659U;
	int32_t t87 = -35518;

	t87 = ((x385<(x386-x387))&x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x393 = -333148473688LL;
	int8_t x394 = 29;
	int8_t x395 = 7;
	static int16_t x396 = INT16_MAX;
	int32_t t88 = 0;

	t88 = ((x393<(x394-x395))&x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	int32_t t89 = 958328622;

	t89 = ((x397<(x398-x399))&x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = -2;
	int32_t x402 = INT32_MIN;
	int32_t x403 = INT32_MIN;
	int8_t x404 = 0;
	volatile int32_t t90 = -313;

	t90 = ((x401<(x402-x403))&x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x406 = 4740600585LL;
	volatile int8_t x407 = INT8_MIN;
	uint32_t x408 = 8U;

	t91 = ((x405<(x406-x407))&x408);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x410 = INT16_MIN;
	int8_t x411 = -2;
	uint16_t x412 = 799U;
	volatile int32_t t92 = 745647;

	t92 = ((x409<(x410-x411))&x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x414 = 73940U;
	int64_t x415 = -1LL;
	int8_t x416 = 1;
	int32_t t93 = -2010;

	t93 = ((x413<(x414-x415))&x416);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = UINT64_MAX;
	uint16_t x418 = 1U;
	static int32_t x419 = -1;
	static int64_t x420 = -425433954596245LL;
	volatile int64_t t94 = -1515607004032609488LL;

	t94 = ((x417<(x418-x419))&x420);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x422 = -62;
	volatile int16_t x423 = -1;
	uint64_t x424 = 1879807099796950594LLU;
	uint64_t t95 = 341817848949206335LLU;

	t95 = ((x421<(x422-x423))&x424);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	static int32_t x427 = 520832090;
	int16_t x428 = INT16_MIN;
	volatile int32_t t96 = 1374562;

	t96 = ((x425<(x426-x427))&x428);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = INT16_MAX;
	volatile int8_t x430 = -1;
	volatile int8_t x431 = -28;
	uint8_t x432 = 54U;
	int32_t t97 = -41979;

	t97 = ((x429<(x430-x431))&x432);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x433 = INT16_MIN;
	volatile int64_t x434 = -31791LL;
	static int8_t x435 = INT8_MIN;
	int8_t x436 = INT8_MAX;
	int32_t t98 = 1;

	t98 = ((x433<(x434-x435))&x436);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = -527774342025706724LL;
	int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MIN;

	t99 = ((x437<(x438-x439))&x440);

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

