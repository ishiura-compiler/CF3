#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = UINT16_MAX;
int8_t x21 = -2;
int32_t x22 = -15702;
int32_t x25 = INT32_MIN;
uint16_t x28 = 7485U;
static int64_t t7 = -338668146895LL;
static uint64_t x38 = 7435640147166LLU;
int16_t x42 = INT16_MAX;
uint64_t x44 = 155107621805224716LLU;
static volatile uint64_t t9 = 2LLU;
static volatile int8_t x46 = -1;
uint64_t x47 = UINT64_MAX;
volatile int32_t t12 = -12;
volatile int16_t x60 = INT16_MIN;
static int64_t t14 = 7LL;
int64_t x65 = 27992594LL;
int64_t x66 = INT64_MIN;
volatile int16_t x69 = 559;
uint64_t x72 = UINT64_MAX;
volatile uint64_t t16 = 0LLU;
static int64_t x73 = INT64_MAX;
uint32_t x81 = 50U;
volatile int64_t t19 = -7815672007764LL;
uint32_t x94 = 1996023U;
uint16_t x95 = 82U;
uint8_t x104 = UINT8_MAX;
volatile int32_t t25 = 229821;
static uint8_t x120 = 6U;
int16_t x132 = INT16_MIN;
uint8_t x133 = UINT8_MAX;
int64_t x135 = INT64_MIN;
uint8_t x141 = 4U;
static int64_t x143 = -1LL;
volatile int64_t x150 = INT64_MAX;
int8_t x152 = INT8_MAX;
volatile uint64_t t34 = 316775371798904143LLU;
volatile int32_t t35 = -27343617;
volatile int8_t x159 = -30;
int64_t x160 = INT64_MAX;
int16_t x161 = INT16_MIN;
int8_t x166 = -1;
int8_t x168 = -4;
int64_t t38 = 200872713833LL;
volatile int64_t t39 = 1593146633009467482LL;
int8_t x173 = INT8_MIN;
uint32_t t40 = 6273365U;
static int8_t x177 = INT8_MIN;
int64_t t41 = 401827351952LL;
volatile int32_t x184 = INT32_MAX;
static int64_t x188 = INT64_MIN;
int32_t x191 = INT32_MIN;
static volatile int32_t t44 = 8754;
uint64_t x195 = 923806403907448LLU;
uint8_t x203 = UINT8_MAX;
static int32_t t46 = 4825;
static volatile uint8_t x207 = 3U;
volatile int64_t x208 = INT64_MIN;
static int64_t t47 = 1141807192LL;
int8_t x212 = 47;
uint32_t x216 = 2758U;
uint16_t x222 = UINT16_MAX;
int32_t t51 = 112317397;
volatile int32_t x234 = -1;
int8_t x236 = 29;
volatile int32_t t54 = 126097654;
uint8_t x243 = 81U;
int8_t x245 = INT8_MIN;
static int8_t x255 = INT8_MIN;
uint64_t x257 = UINT64_MAX;
int16_t x258 = INT16_MIN;
int64_t x260 = 68438829352LL;
volatile int8_t x270 = -1;
int64_t x272 = INT64_MIN;
uint16_t x287 = 1777U;
volatile uint32_t x292 = 79221U;
int32_t x294 = INT32_MIN;
uint64_t t66 = 24530682112763LLU;
uint16_t x298 = UINT16_MAX;
static int32_t t67 = -157;
volatile int16_t x308 = -1;
volatile uint16_t x310 = 10U;
uint32_t x314 = UINT32_MAX;
int8_t x321 = 0;
volatile int32_t x322 = -1;
static volatile uint32_t x324 = UINT32_MAX;
int32_t x332 = INT32_MIN;
uint8_t x335 = 1U;
uint32_t t76 = 25U;
int32_t x337 = 7156722;
int16_t x346 = -45;
static int32_t x358 = 2;
static uint8_t x367 = 56U;
static uint32_t x370 = 89073U;
int32_t x377 = 943912;
int8_t x388 = INT8_MIN;
int32_t x392 = INT32_MIN;
volatile int32_t t90 = -738972;
static int32_t t91 = -5741;
int8_t x397 = 2;
uint16_t x400 = UINT16_MAX;
uint64_t t92 = 3658452963127LLU;
int64_t x404 = -43LL;
int64_t x413 = INT64_MIN;
uint64_t x416 = 30937471707LLU;
int32_t x417 = -1;
int16_t x422 = -1;
int8_t x424 = INT8_MIN;
static uint8_t x427 = 3U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = -1LL;
	static int64_t x3 = INT64_MIN;
	volatile uint16_t x4 = 225U;
	int64_t t0 = 989847661LL;

	t0 = ((x1<x2)&(x3/x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	static int8_t x6 = 28;
	int32_t x8 = 91553535;
	static int32_t t1 = 221024971;

	t1 = ((x5<x6)&(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -1LL;
	int64_t x14 = INT64_MIN;
	int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MIN;
	volatile int32_t t2 = -11992000;

	t2 = ((x13<x14)&(x15/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = 17681;
	int8_t x18 = -1;
	int64_t x19 = 662LL;
	int32_t x20 = -1;
	int64_t t3 = 1320LL;

	t3 = ((x17<x18)&(x19/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x23 = INT32_MIN;
	static uint16_t x24 = 20U;
	static volatile int32_t t4 = -1025204946;

	t4 = ((x21<x22)&(x23/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x26 = INT8_MAX;
	int64_t x27 = -1LL;
	int64_t t5 = 6708LL;

	t5 = ((x25<x26)&(x27/x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 5615LL;
	uint64_t x30 = 468LLU;
	uint32_t x31 = UINT32_MAX;
	uint8_t x32 = 3U;
	static uint32_t t6 = 1066376239U;

	t6 = ((x29<x30)&(x31/x32));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = 1;
	volatile uint16_t x34 = UINT16_MAX;
	static uint8_t x35 = 53U;
	int64_t x36 = -1LL;

	t7 = ((x33<x34)&(x35/x36));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 76U;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = 2428;

	t8 = ((x37<x38)&(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MAX;
	volatile int64_t x43 = -367596LL;

	t9 = ((x41<x42)&(x43/x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	static uint8_t x48 = 1U;
	volatile uint64_t t10 = 420151828588476LLU;

	t10 = ((x45<x46)&(x47/x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -5;
	uint8_t x50 = 55U;
	uint32_t x51 = UINT32_MAX;
	volatile uint64_t x52 = 963286244255031LLU;
	uint64_t t11 = 15226736559561LLU;

	t11 = ((x49<x50)&(x51/x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 10;
	static int8_t x54 = -1;
	volatile int8_t x55 = 5;
	volatile uint16_t x56 = 2903U;

	t12 = ((x53<x54)&(x55/x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = INT16_MIN;
	static uint32_t x59 = UINT32_MAX;
	static uint32_t t13 = 78171940U;

	t13 = ((x57<x58)&(x59/x60));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = INT32_MIN;
	volatile int16_t x62 = INT16_MAX;
	int8_t x63 = INT8_MIN;
	int64_t x64 = INT64_MAX;

	t14 = ((x61<x62)&(x63/x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x67 = UINT64_MAX;
	volatile int16_t x68 = -29;
	static uint64_t t15 = 138326275975791323LLU;

	t15 = ((x65<x66)&(x67/x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = -1;
	uint64_t x71 = UINT64_MAX;

	t16 = ((x69<x70)&(x71/x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x74 = INT64_MIN;
	int8_t x75 = 0;
	int64_t x76 = INT64_MIN;
	volatile int64_t t17 = 15071544LL;

	t17 = ((x73<x74)&(x75/x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x77 = -1;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = -3514803817LL;
	int32_t x80 = 9387;
	volatile int64_t t18 = 257070168600151LL;

	t18 = ((x77<x78)&(x79/x80));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = 8083U;
	int64_t x83 = -1LL;
	volatile int32_t x84 = INT32_MAX;

	t19 = ((x81<x82)&(x83/x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	uint32_t x86 = 1191629U;
	volatile int16_t x87 = INT16_MIN;
	static volatile int8_t x88 = INT8_MIN;
	volatile int32_t t20 = -23;

	t20 = ((x85<x86)&(x87/x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	int64_t x90 = 258661LL;
	int64_t x91 = 2226006069181LL;
	volatile int64_t x92 = INT64_MAX;
	static volatile int64_t t21 = 19554095538715LL;

	t21 = ((x89<x90)&(x91/x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	int64_t x96 = 4305808224LL;
	int64_t t22 = 57359LL;

	t22 = ((x93<x94)&(x95/x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 30177U;
	static int8_t x98 = INT8_MIN;
	int16_t x99 = -2426;
	volatile int64_t x100 = -2962035LL;
	int64_t t23 = 12454785287LL;

	t23 = ((x97<x98)&(x99/x100));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MAX;
	int8_t x102 = 1;
	int8_t x103 = 31;
	static volatile int32_t t24 = -2057818;

	t24 = ((x101<x102)&(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 2U;
	uint16_t x110 = 2814U;
	int16_t x111 = 0;
	volatile int32_t x112 = INT32_MIN;

	t25 = ((x109<x110)&(x111/x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = 296;
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	volatile int32_t t26 = 6;

	t26 = ((x117<x118)&(x119/x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = 7707027;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t27 = 4017137198LL;

	t27 = ((x121<x122)&(x123/x124));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	uint32_t x126 = 6U;
	static int32_t x127 = INT32_MIN;
	volatile int64_t x128 = -48521717286197LL;
	volatile int64_t t28 = 17788489929214170LL;

	t28 = ((x125<x126)&(x127/x128));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 1;
	volatile int64_t x130 = INT64_MIN;
	int16_t x131 = INT16_MAX;
	static int32_t t29 = 237825983;

	t29 = ((x129<x130)&(x131/x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x134 = UINT16_MAX;
	int8_t x136 = INT8_MAX;
	static int64_t t30 = 21321LL;

	t30 = ((x133<x134)&(x135/x136));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x137 = 13;
	volatile uint16_t x138 = 53U;
	static int8_t x139 = INT8_MIN;
	volatile int32_t x140 = INT32_MIN;
	static volatile int32_t t31 = -475889;

	t31 = ((x137<x138)&(x139/x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x142 = 4582616122109LLU;
	volatile uint16_t x144 = 4U;
	int64_t t32 = 31368LL;

	t32 = ((x141<x142)&(x143/x144));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	static int8_t x147 = INT8_MIN;
	volatile int64_t x148 = -111696625LL;
	volatile int64_t t33 = -3LL;

	t33 = ((x145<x146)&(x147/x148));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	uint64_t x151 = UINT64_MAX;

	t34 = ((x149<x150)&(x151/x152));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = 324U;
	volatile int32_t x155 = INT32_MIN;
	volatile int8_t x156 = INT8_MIN;

	t35 = ((x153<x154)&(x155/x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = INT64_MIN;
	int64_t t36 = 25600LL;

	t36 = ((x157<x158)&(x159/x160));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x162 = INT8_MIN;
	static int8_t x163 = 35;
	int64_t x164 = -1LL;
	int64_t t37 = -41031993LL;

	t37 = ((x161<x162)&(x163/x164));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -1;
	int64_t x167 = INT64_MIN;

	t38 = ((x165<x166)&(x167/x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x169 = INT64_MAX;
	volatile int32_t x170 = INT32_MAX;
	static int64_t x171 = 22LL;
	int32_t x172 = 12827824;

	t39 = ((x169<x170)&(x171/x172));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x174 = 22937LL;
	static int32_t x175 = INT32_MIN;
	uint32_t x176 = 737648112U;

	t40 = ((x173<x174)&(x175/x176));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = INT64_MIN;
	static uint16_t x179 = 2U;
	volatile int64_t x180 = -1LL;

	t41 = ((x177<x178)&(x179/x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 2569U;
	static volatile int8_t x182 = 1;
	int64_t x183 = INT64_MIN;
	static volatile int64_t t42 = 34LL;

	t42 = ((x181<x182)&(x183/x184));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = 2;
	static int16_t x187 = -1;
	volatile int64_t t43 = 6778706882470831LL;

	t43 = ((x185<x186)&(x187/x188));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = 11;
	int16_t x190 = 1209;
	volatile int8_t x192 = -39;

	t44 = ((x189<x190)&(x191/x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x193 = 579891297U;
	uint32_t x194 = 0U;
	int32_t x196 = -85830594;
	uint64_t t45 = 1893730811LLU;

	t45 = ((x193<x194)&(x195/x196));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = 1;
	static uint16_t x204 = 3U;

	t46 = ((x201<x202)&(x203/x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x205 = INT8_MAX;
	int32_t x206 = -1;

	t47 = ((x205<x206)&(x207/x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = INT32_MAX;
	volatile int64_t x210 = INT64_MAX;
	uint64_t x211 = 1LLU;
	volatile uint64_t t48 = 165241420611523360LLU;

	t48 = ((x209<x210)&(x211/x212));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x213 = 1U;
	int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	volatile uint32_t t49 = 24904U;

	t49 = ((x213<x214)&(x215/x216));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	volatile int8_t x219 = -1;
	static int16_t x220 = 1717;
	volatile int32_t t50 = -470;

	t50 = ((x217<x218)&(x219/x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x221 = INT8_MAX;
	static int8_t x223 = -1;
	static uint16_t x224 = 26647U;

	t51 = ((x221<x222)&(x223/x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = -1;
	int16_t x226 = 14910;
	uint32_t x227 = 18029806U;
	uint32_t x228 = 643U;
	uint32_t t52 = 7680276U;

	t52 = ((x225<x226)&(x227/x228));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x229 = -1;
	uint32_t x230 = 120396U;
	int64_t x231 = -1LL;
	int32_t x232 = INT32_MIN;
	int64_t t53 = 170412LL;

	t53 = ((x229<x230)&(x231/x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 7427744102746587903LLU;
	static int32_t x235 = INT32_MIN;

	t54 = ((x233<x234)&(x235/x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MAX;
	volatile int32_t x242 = -1;
	volatile int8_t x244 = -1;
	int32_t t55 = -1;

	t55 = ((x241<x242)&(x243/x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x246 = 3U;
	int8_t x247 = INT8_MIN;
	volatile int64_t x248 = 304207282LL;
	volatile int64_t t56 = 36LL;

	t56 = ((x245<x246)&(x247/x248));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x253 = -1;
	volatile int32_t x254 = -1;
	int32_t x256 = INT32_MIN;
	volatile int32_t t57 = -88681461;

	t57 = ((x253<x254)&(x255/x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x259 = 7U;
	static volatile int64_t t58 = -658025LL;

	t58 = ((x257<x258)&(x259/x260));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x261 = INT64_MIN;
	int16_t x262 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	volatile int64_t x264 = -1LL;
	static volatile int64_t t59 = 16LL;

	t59 = ((x261<x262)&(x263/x264));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x265 = 1U;
	static int16_t x266 = INT16_MIN;
	volatile int8_t x267 = INT8_MIN;
	uint32_t x268 = 102U;
	volatile uint32_t t60 = 123850072U;

	t60 = ((x265<x266)&(x267/x268));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	uint32_t x271 = 13018U;
	int64_t t61 = 10527876710713LL;

	t61 = ((x269<x270)&(x271/x272));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x273 = INT8_MIN;
	static volatile uint8_t x274 = 98U;
	int32_t x275 = 14000699;
	int8_t x276 = INT8_MAX;
	int32_t t62 = 102597;

	t62 = ((x273<x274)&(x275/x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MAX;
	volatile uint16_t x278 = UINT16_MAX;
	uint32_t x279 = UINT32_MAX;
	uint8_t x280 = 15U;
	volatile uint32_t t63 = 348U;

	t63 = ((x277<x278)&(x279/x280));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = 1275;
	int32_t x286 = -724015;
	uint8_t x288 = UINT8_MAX;
	static int32_t t64 = -28061;

	t64 = ((x285<x286)&(x287/x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x289 = 26U;
	uint8_t x290 = UINT8_MAX;
	static volatile int8_t x291 = 1;
	static volatile uint32_t t65 = 62210248U;

	t65 = ((x289<x290)&(x291/x292));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = 1;
	volatile int8_t x295 = -1;
	uint64_t x296 = 150063LLU;

	t66 = ((x293<x294)&(x295/x296));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MIN;
	int32_t x299 = INT32_MIN;
	volatile uint8_t x300 = 1U;

	t67 = ((x297<x298)&(x299/x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = -172871682;
	static int64_t x302 = 606058247322105691LL;
	int64_t x303 = INT64_MIN;
	uint32_t x304 = 686U;
	volatile int64_t t68 = -16270231019017715LL;

	t68 = ((x301<x302)&(x303/x304));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = 0;
	volatile int64_t x306 = -35709LL;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t t69 = -1145394;

	t69 = ((x305<x306)&(x307/x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x309 = 1U;
	uint16_t x311 = 45U;
	int16_t x312 = -1;
	volatile int32_t t70 = -2110493;

	t70 = ((x309<x310)&(x311/x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x313 = 61;
	uint16_t x315 = 24U;
	int32_t x316 = INT32_MIN;
	int32_t t71 = 5;

	t71 = ((x313<x314)&(x315/x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MIN;
	static volatile uint8_t x318 = 0U;
	volatile int32_t x319 = INT32_MIN;
	uint64_t x320 = 33975LLU;
	uint64_t t72 = 3LLU;

	t72 = ((x317<x318)&(x319/x320));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x323 = UINT32_MAX;
	uint32_t t73 = 7U;

	t73 = ((x321<x322)&(x323/x324));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = INT64_MIN;
	uint8_t x326 = 41U;
	int16_t x327 = INT16_MAX;
	uint16_t x328 = UINT16_MAX;
	static int32_t t74 = 484382;

	t74 = ((x325<x326)&(x327/x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = -4LL;
	uint64_t x330 = 1799LLU;
	uint16_t x331 = 0U;
	volatile int32_t t75 = 839841315;

	t75 = ((x329<x330)&(x331/x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = 246325015LLU;
	uint8_t x334 = UINT8_MAX;
	volatile uint32_t x336 = UINT32_MAX;

	t76 = ((x333<x334)&(x335/x336));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = -1;
	int32_t x339 = -1;
	volatile int16_t x340 = -10;
	volatile int32_t t77 = 1;

	t77 = ((x337<x338)&(x339/x340));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x341 = 5LLU;
	uint16_t x342 = 166U;
	uint8_t x343 = 0U;
	uint16_t x344 = 85U;
	volatile int32_t t78 = 307388;

	t78 = ((x341<x342)&(x343/x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x345 = INT64_MIN;
	static uint64_t x347 = UINT64_MAX;
	uint8_t x348 = 8U;
	static volatile uint64_t t79 = 48192511696501LLU;

	t79 = ((x345<x346)&(x347/x348));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint16_t x350 = 43U;
	volatile int16_t x351 = INT16_MAX;
	static volatile uint16_t x352 = 473U;
	volatile int32_t t80 = 1;

	t80 = ((x349<x350)&(x351/x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x353 = 208729;
	int16_t x354 = INT16_MIN;
	uint32_t x355 = UINT32_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	volatile uint32_t t81 = 58867570U;

	t81 = ((x353<x354)&(x355/x356));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MIN;
	int8_t x359 = 3;
	uint64_t x360 = UINT64_MAX;
	uint64_t t82 = 13LLU;

	t82 = ((x357<x358)&(x359/x360));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x361 = -1;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t83 = -13669958;

	t83 = ((x361<x362)&(x363/x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x365 = INT8_MAX;
	uint64_t x366 = 80810LLU;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t84 = 2;

	t84 = ((x365<x366)&(x367/x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x369 = -1;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = -1LL;
	volatile int64_t t85 = -397918528181724983LL;

	t85 = ((x369<x370)&(x371/x372));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = 253U;
	volatile uint32_t x374 = UINT32_MAX;
	static uint16_t x375 = 1U;
	int32_t x376 = INT32_MAX;
	static int32_t t86 = 818307;

	t86 = ((x373<x374)&(x375/x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x378 = 2U;
	int32_t x379 = INT32_MIN;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t87 = -26413088191LL;

	t87 = ((x377<x378)&(x379/x380));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x381 = INT64_MIN;
	volatile int8_t x382 = INT8_MIN;
	int16_t x383 = -14064;
	static int64_t x384 = INT64_MIN;
	int64_t t88 = 1967991861192345355LL;

	t88 = ((x381<x382)&(x383/x384));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x385 = 1440LL;
	uint8_t x386 = 107U;
	static uint32_t x387 = 1046045080U;
	uint32_t t89 = 659U;

	t89 = ((x385<x386)&(x387/x388));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MAX;
	int8_t x391 = -1;

	t90 = ((x389<x390)&(x391/x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x393 = INT16_MIN;
	uint32_t x394 = 78613U;
	uint16_t x395 = 7798U;
	uint8_t x396 = 9U;

	t91 = ((x393<x394)&(x395/x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x398 = -1;
	volatile uint64_t x399 = 78401116875LLU;

	t92 = ((x397<x398)&(x399/x400));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x401 = INT32_MAX;
	uint64_t x402 = 32937942LLU;
	volatile int16_t x403 = 27;
	int64_t t93 = -2630031LL;

	t93 = ((x401<x402)&(x403/x404));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 83U;
	static int8_t x406 = -1;
	static int8_t x407 = -5;
	volatile int64_t x408 = 6845150874LL;
	static volatile int64_t t94 = -6841518LL;

	t94 = ((x405<x406)&(x407/x408));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -203309;
	int8_t x410 = -6;
	int16_t x411 = -5979;
	int32_t x412 = INT32_MIN;
	static int32_t t95 = 3616485;

	t95 = ((x409<x410)&(x411/x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x414 = -1LL;
	static int16_t x415 = INT16_MAX;
	static uint64_t t96 = 522361041502127LLU;

	t96 = ((x413<x414)&(x415/x416));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x418 = 165;
	int64_t x419 = -401123LL;
	int8_t x420 = INT8_MAX;
	int64_t t97 = 2LL;

	t97 = ((x417<x418)&(x419/x420));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x421 = INT64_MIN;
	static volatile uint64_t x423 = 1LLU;
	static volatile uint64_t t98 = 261895LLU;

	t98 = ((x421<x422)&(x423/x424));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x425 = INT8_MIN;
	volatile uint64_t x426 = 1507251278460582560LLU;
	volatile int32_t x428 = -1;
	volatile int32_t t99 = 528561091;

	t99 = ((x425<x426)&(x427/x428));

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

