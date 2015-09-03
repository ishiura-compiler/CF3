#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 1448559938430286LLU;
int32_t x9 = -46975452;
uint16_t x18 = 6U;
static int16_t x24 = INT16_MIN;
int32_t t6 = 7632124;
volatile int32_t t7 = INT32_MIN;
uint32_t x44 = UINT32_MAX;
volatile uint32_t t9 = 10U;
uint16_t x54 = UINT16_MAX;
int8_t x63 = -10;
int8_t x68 = -1;
static int16_t x75 = INT16_MAX;
volatile uint32_t x83 = 5178654U;
int16_t x85 = INT16_MIN;
int64_t x90 = INT64_MIN;
uint16_t x91 = 2812U;
volatile int16_t x95 = INT16_MIN;
int64_t x102 = INT64_MIN;
int32_t x103 = INT32_MIN;
int64_t x111 = INT64_MIN;
int64_t x113 = INT64_MIN;
uint64_t x114 = 70599457LLU;
volatile int32_t x122 = -1634;
int64_t x127 = INT64_MIN;
static int16_t x131 = -1;
int8_t x132 = -1;
uint16_t x133 = 120U;
int32_t t28 = 734457;
static int64_t x137 = -1LL;
volatile uint8_t x138 = UINT8_MAX;
volatile int8_t x140 = INT8_MIN;
int64_t x152 = -868051197796LL;
int64_t t32 = 36539LL;
int16_t x153 = -3;
static int32_t x154 = -1016598391;
volatile uint8_t x169 = 24U;
int32_t x171 = -1;
uint16_t x172 = 6475U;
static uint16_t x180 = 23790U;
int16_t x188 = INT16_MIN;
volatile uint16_t x198 = 42U;
static uint64_t x199 = 497791787425099656LLU;
static int16_t x201 = 2;
uint8_t x208 = 87U;
volatile int64_t x211 = -8287214LL;
int32_t t46 = -39882;
int32_t t47 = -2594657;
volatile int8_t x217 = -57;
int8_t x236 = 7;
volatile uint8_t x241 = 0U;
uint64_t x257 = 2054690874957343LLU;
volatile int32_t t56 = -40104;
static int8_t x265 = 8;
int8_t x266 = 0;
volatile uint32_t t58 = 23152403U;
volatile int16_t x278 = INT16_MIN;
uint32_t x297 = UINT32_MAX;
static int8_t x298 = INT8_MIN;
static uint64_t x311 = UINT64_MAX;
static volatile int32_t t69 = -451100;
int64_t x319 = -1317708LL;
static int32_t x326 = INT32_MAX;
int16_t x327 = INT16_MIN;
int16_t x336 = -839;
uint32_t x339 = UINT32_MAX;
volatile int32_t t75 = -321976147;
static int64_t x344 = INT64_MIN;
static volatile int64_t t76 = INT64_MIN;
int16_t x348 = INT16_MAX;
volatile int32_t t77 = 29148811;
volatile int8_t x350 = INT8_MIN;
int64_t t78 = 10LL;
int8_t x353 = INT8_MIN;
volatile int8_t x354 = INT8_MAX;
static uint8_t x358 = 1U;
volatile int8_t x360 = -1;
int32_t x361 = INT32_MAX;
volatile uint8_t x364 = UINT8_MAX;
int32_t x368 = 174;
static uint16_t x372 = UINT16_MAX;
static int32_t t83 = -3366747;
volatile int8_t x378 = 36;
int32_t t85 = 4984039;
static int32_t x381 = 989;
int16_t x383 = -1;
int64_t x394 = INT64_MAX;
uint8_t x397 = UINT8_MAX;
static uint32_t t91 = 18248088U;
volatile uint64_t t94 = 12LLU;
int32_t x424 = -4;
volatile int32_t t96 = 5606;
static int16_t x427 = -9440;
int16_t x429 = 1;
static int8_t x430 = -1;
volatile int32_t t99 = -129516818;


void f0(void) {
	int8_t x1 = -1;
	int64_t x3 = -1LL;
	static int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = ((x1<=(x2/x3))^x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x10 = 926690U;
	uint64_t x11 = 67703983582467188LLU;
	int64_t x12 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

	t1 = ((x9<=(x10/x11))^x12);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = UINT8_MAX;
	static int16_t x14 = 3466;
	uint32_t x15 = UINT32_MAX;
	volatile int32_t x16 = -51556310;
	volatile int32_t t2 = -31430371;

	t2 = ((x13<=(x14/x15))^x16);

	if (t2 != -51556310) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 133710487LLU;
	int32_t x19 = -944373;
	int32_t x20 = INT32_MIN;
	int32_t t3 = INT32_MIN;

	t3 = ((x17<=(x18/x19))^x20);

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	static volatile int16_t x22 = 51;
	int16_t x23 = -3435;
	static volatile int32_t t4 = -9429;

	t4 = ((x21<=(x22/x23))^x24);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile uint8_t x26 = 82U;
	volatile int64_t x27 = INT64_MIN;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 16166;

	t5 = ((x25<=(x26/x27))^x28);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 195LLU;
	int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MAX;
	static volatile int8_t x32 = INT8_MAX;

	t6 = ((x29<=(x30/x31))^x32);

	if (t6 != 126) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = INT8_MAX;
	int16_t x34 = -1;
	int32_t x35 = INT32_MIN;
	volatile int32_t x36 = INT32_MIN;

	t7 = ((x33<=(x34/x35))^x36);

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = INT8_MAX;
	static uint16_t x38 = 3U;
	int16_t x39 = -2;
	static int8_t x40 = -1;
	volatile int32_t t8 = -269315;

	t8 = ((x37<=(x38/x39))^x40);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -1;
	static uint16_t x42 = UINT16_MAX;
	uint8_t x43 = 1U;

	t9 = ((x41<=(x42/x43))^x44);

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	static uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 136505U;
	int64_t x52 = -1LL;
	int64_t t10 = 115LL;

	t10 = ((x49<=(x50/x51))^x52);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x53 = INT32_MIN;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = INT8_MAX;
	static int32_t t11 = -9946;

	t11 = ((x53<=(x54/x55))^x56);

	if (t11 != 126) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = -1LL;
	volatile uint16_t x58 = 163U;
	int32_t x59 = INT32_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t12 = 6395434;

	t12 = ((x57<=(x58/x59))^x60);

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 613U;
	static uint32_t x62 = UINT32_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t13 = INT64_MIN;

	t13 = ((x61<=(x62/x63))^x64);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = 5036U;
	uint8_t x66 = 0U;
	uint16_t x67 = UINT16_MAX;
	int32_t t14 = -53;

	t14 = ((x65<=(x66/x67))^x68);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MAX;
	int64_t x72 = 6431939873363997LL;
	static int64_t t15 = 3LL;

	t15 = ((x69<=(x70/x71))^x72);

	if (t15 != 6431939873363996LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MIN;
	volatile uint64_t x76 = 533146556LLU;
	uint64_t t16 = 8408730266825666LLU;

	t16 = ((x73<=(x74/x75))^x76);

	if (t16 != 533146557LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 6U;
	int8_t x82 = INT8_MIN;
	int32_t x84 = -1;
	int32_t t17 = -74;

	t17 = ((x81<=(x82/x83))^x84);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x86 = 1;
	volatile uint16_t x87 = 9421U;
	int64_t x88 = INT64_MAX;
	int64_t t18 = 704377663LL;

	t18 = ((x85<=(x86/x87))^x88);

	if (t18 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = 76385LL;
	int16_t x92 = INT16_MIN;
	volatile int32_t t19 = -154;

	t19 = ((x89<=(x90/x91))^x92);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = -1141;
	int8_t x94 = INT8_MAX;
	int64_t x96 = 1153600327LL;
	volatile int64_t t20 = 476787LL;

	t20 = ((x93<=(x94/x95))^x96);

	if (t20 != 1153600326LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = INT32_MIN;
	uint64_t x98 = UINT64_MAX;
	int64_t x99 = INT64_MIN;
	static uint64_t x100 = 4376407LLU;
	uint64_t t21 = 3896LLU;

	t21 = ((x97<=(x98/x99))^x100);

	if (t21 != 4376407LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 0U;
	int32_t x104 = 232873;
	volatile int32_t t22 = 6602896;

	t22 = ((x101<=(x102/x103))^x104);

	if (t22 != 232872) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MIN;
	int32_t x112 = -1;
	int32_t t23 = 52;

	t23 = ((x109<=(x110/x111))^x112);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x115 = INT64_MAX;
	static uint32_t x116 = 189080685U;
	volatile uint32_t t24 = 6556U;

	t24 = ((x113<=(x114/x115))^x116);

	if (t24 != 189080685U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x121 = INT16_MIN;
	uint16_t x123 = 443U;
	int64_t x124 = INT64_MIN;
	int64_t t25 = 92904LL;

	t25 = ((x121<=(x122/x123))^x124);

	if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = 143;
	static uint32_t x128 = 134U;
	uint32_t t26 = 110405U;

	t26 = ((x125<=(x126/x127))^x128);

	if (t26 != 135U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = -360803LL;
	int32_t x130 = 37950609;
	static int32_t t27 = -3474308;

	t27 = ((x129<=(x130/x131))^x132);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x134 = INT64_MIN;
	int64_t x135 = INT64_MIN;
	volatile int8_t x136 = -28;

	t28 = ((x133<=(x134/x135))^x136);

	if (t28 != -28) { NG(); } else { ; }
	
}

void f29(void) {
	static uint16_t x139 = UINT16_MAX;
	int32_t t29 = -16;

	t29 = ((x137<=(x138/x139))^x140);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x141 = 8U;
	uint16_t x142 = UINT16_MAX;
	static uint64_t x143 = 32199LLU;
	uint16_t x144 = 4406U;
	static volatile int32_t t30 = 3043;

	t30 = ((x141<=(x142/x143))^x144);

	if (t30 != 4406) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = -271;
	int8_t x146 = INT8_MAX;
	static int16_t x147 = -1;
	uint8_t x148 = 8U;
	static volatile int32_t t31 = 9;

	t31 = ((x145<=(x146/x147))^x148);

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 350925684739693505LLU;
	static int16_t x150 = INT16_MAX;
	int8_t x151 = -9;

	t32 = ((x149<=(x150/x151))^x152);

	if (t32 != -868051197795LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x155 = 507206041822542LL;
	static int64_t x156 = -68181714475LL;
	int64_t t33 = 3402LL;

	t33 = ((x153<=(x154/x155))^x156);

	if (t33 != -68181714476LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x157 = 1091949867U;
	int8_t x158 = INT8_MAX;
	int64_t x159 = 1187370597411LL;
	uint8_t x160 = 59U;
	static int32_t t34 = 125115;

	t34 = ((x157<=(x158/x159))^x160);

	if (t34 != 59) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 2345893231060460938LLU;
	static int8_t x162 = 48;
	static volatile int16_t x163 = INT16_MIN;
	static volatile int8_t x164 = -1;
	int32_t t35 = 208541;

	t35 = ((x161<=(x162/x163))^x164);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x165 = 39387591U;
	int16_t x166 = -1;
	uint64_t x167 = 2685943646090LLU;
	uint32_t x168 = 353359U;
	static volatile uint32_t t36 = 49106233U;

	t36 = ((x165<=(x166/x167))^x168);

	if (t36 != 353359U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x170 = -3;
	int32_t t37 = 16681;

	t37 = ((x169<=(x170/x171))^x172);

	if (t37 != 6475) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 31U;
	int32_t x174 = 163109610;
	volatile int16_t x175 = 1417;
	int32_t x176 = -2;
	volatile int32_t t38 = 30;

	t38 = ((x173<=(x174/x175))^x176);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x177 = UINT64_MAX;
	uint16_t x178 = UINT16_MAX;
	static int32_t x179 = 1777845;
	static int32_t t39 = -7;

	t39 = ((x177<=(x178/x179))^x180);

	if (t39 != 23790) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -10;
	static int8_t x187 = -1;
	volatile int32_t t40 = -7;

	t40 = ((x185<=(x186/x187))^x188);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -1;
	static volatile int8_t x190 = INT8_MIN;
	static uint8_t x191 = 14U;
	int8_t x192 = INT8_MIN;
	volatile int32_t t41 = 886;

	t41 = ((x189<=(x190/x191))^x192);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x193 = 1018851903LL;
	uint16_t x194 = 1148U;
	volatile uint16_t x195 = 4038U;
	int16_t x196 = INT16_MAX;
	int32_t t42 = -59615;

	t42 = ((x193<=(x194/x195))^x196);

	if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = INT32_MIN;
	static int8_t x200 = -32;
	volatile int32_t t43 = 21;

	t43 = ((x197<=(x198/x199))^x200);

	if (t43 != -32) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = INT64_MAX;
	static int8_t x203 = -1;
	uint64_t x204 = 2344LLU;
	volatile uint64_t t44 = 480527489LLU;

	t44 = ((x201<=(x202/x203))^x204);

	if (t44 != 2344LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x205 = 175U;
	int64_t x206 = -1803908551347830LL;
	int8_t x207 = INT8_MAX;
	volatile int32_t t45 = 444334;

	t45 = ((x205<=(x206/x207))^x208);

	if (t45 != 87) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x209 = 2104;
	static int64_t x210 = INT64_MIN;
	static int8_t x212 = INT8_MAX;

	t46 = ((x209<=(x210/x211))^x212);

	if (t46 != 126) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = INT16_MIN;
	volatile int16_t x215 = -414;
	static volatile int16_t x216 = -2;

	t47 = ((x213<=(x214/x215))^x216);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x218 = -1;
	int8_t x219 = INT8_MAX;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t48 = 15674033;

	t48 = ((x217<=(x218/x219))^x220);

	if (t48 != 126) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x225 = UINT8_MAX;
	static int8_t x226 = INT8_MIN;
	int8_t x227 = 14;
	uint64_t x228 = 66LLU;
	uint64_t t49 = 277079713207524LLU;

	t49 = ((x225<=(x226/x227))^x228);

	if (t49 != 66LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x229 = INT64_MAX;
	uint64_t x230 = 19LLU;
	int32_t x231 = 689723;
	int32_t x232 = INT32_MIN;
	int32_t t50 = INT32_MIN;

	t50 = ((x229<=(x230/x231))^x232);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x233 = INT64_MAX;
	volatile int32_t x234 = -1717866;
	int8_t x235 = 1;
	int32_t t51 = -1;

	t51 = ((x233<=(x234/x235))^x236);

	if (t51 != 7) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = 29;
	int64_t x238 = INT64_MAX;
	static int8_t x239 = -30;
	static volatile int16_t x240 = -1;
	int32_t t52 = 12541818;

	t52 = ((x237<=(x238/x239))^x240);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = 2790710589161LL;
	volatile int8_t x244 = -1;
	volatile int32_t t53 = 14199;

	t53 = ((x241<=(x242/x243))^x244);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x245 = UINT64_MAX;
	static uint16_t x246 = 23035U;
	uint64_t x247 = UINT64_MAX;
	uint64_t x248 = UINT64_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x245<=(x246/x247))^x248);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MAX;
	uint32_t x255 = 496659U;
	uint8_t x256 = 19U;
	volatile int32_t t55 = -13914;

	t55 = ((x253<=(x254/x255))^x256);

	if (t55 != 19) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x258 = 1U;
	int32_t x259 = INT32_MIN;
	volatile int16_t x260 = -1;

	t56 = ((x257<=(x258/x259))^x260);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x267 = -1;
	static volatile int8_t x268 = INT8_MIN;
	static int32_t t57 = -15853688;

	t57 = ((x265<=(x266/x267))^x268);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = INT8_MIN;
	uint32_t x270 = 5577841U;
	volatile int8_t x271 = 37;
	static uint32_t x272 = 10U;

	t58 = ((x269<=(x270/x271))^x272);

	if (t58 != 10U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	int64_t x274 = 95541082781836LL;
	int32_t x275 = INT32_MIN;
	int64_t x276 = -1LL;
	int64_t t59 = 290227077587091LL;

	t59 = ((x273<=(x274/x275))^x276);

	if (t59 != -2LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x277 = UINT64_MAX;
	volatile int32_t x279 = -1;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t60 = -97520;

	t60 = ((x277<=(x278/x279))^x280);

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x281 = -1;
	uint64_t x282 = 6170908904322802LLU;
	int64_t x283 = -1LL;
	uint32_t x284 = 0U;
	volatile uint32_t t61 = 10U;

	t61 = ((x281<=(x282/x283))^x284);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	int64_t x288 = -1661LL;
	volatile int64_t t62 = -22823052511425844LL;

	t62 = ((x285<=(x286/x287))^x288);

	if (t62 != -1662LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x289 = 24592U;
	uint8_t x290 = 0U;
	static int8_t x291 = 3;
	int16_t x292 = INT16_MIN;
	int32_t t63 = 116;

	t63 = ((x289<=(x290/x291))^x292);

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -1;
	uint32_t x294 = 249206176U;
	int32_t x295 = INT32_MIN;
	uint16_t x296 = UINT16_MAX;
	int32_t t64 = 2756;

	t64 = ((x293<=(x294/x295))^x296);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x299 = 2U;
	uint64_t x300 = 216388LLU;
	volatile uint64_t t65 = 11LLU;

	t65 = ((x297<=(x298/x299))^x300);

	if (t65 != 216388LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x302 = 346617U;
	volatile int8_t x303 = INT8_MAX;
	int32_t x304 = INT32_MIN;
	int32_t t66 = -108463;

	t66 = ((x301<=(x302/x303))^x304);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x305 = INT16_MIN;
	volatile int8_t x306 = INT8_MIN;
	int64_t x307 = -211922073640LL;
	int8_t x308 = 1;
	volatile int32_t t67 = -1;

	t67 = ((x305<=(x306/x307))^x308);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = -1;
	volatile uint8_t x310 = 8U;
	int32_t x312 = -5541;
	volatile int32_t t68 = 0;

	t68 = ((x309<=(x310/x311))^x312);

	if (t68 != -5541) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = 390LL;
	uint32_t x314 = 18459U;
	int64_t x315 = -469LL;
	int8_t x316 = INT8_MAX;

	t69 = ((x313<=(x314/x315))^x316);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = -103232968;
	uint16_t x318 = UINT16_MAX;
	uint16_t x320 = 0U;
	static volatile int32_t t70 = 42798116;

	t70 = ((x317<=(x318/x319))^x320);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = -4469;
	static volatile int16_t x322 = INT16_MIN;
	int8_t x323 = 1;
	int32_t x324 = 760432440;
	int32_t t71 = -5006;

	t71 = ((x321<=(x322/x323))^x324);

	if (t71 != 760432440) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x325 = INT64_MIN;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t72 = -426;

	t72 = ((x325<=(x326/x327))^x328);

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x329 = INT16_MIN;
	volatile int32_t x330 = -1;
	static volatile uint8_t x331 = UINT8_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t73 = 22792;

	t73 = ((x329<=(x330/x331))^x332);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x333 = INT64_MIN;
	uint64_t x334 = 465112561LLU;
	uint16_t x335 = 4655U;
	volatile int32_t t74 = 61779478;

	t74 = ((x333<=(x334/x335))^x336);

	if (t74 != -839) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = 118168LLU;
	int32_t x338 = -1;
	int16_t x340 = INT16_MIN;

	t75 = ((x337<=(x338/x339))^x340);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x341 = 7;
	uint64_t x342 = UINT64_MAX;
	int64_t x343 = -1LL;

	t76 = ((x341<=(x342/x343))^x344);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = 121;
	uint64_t x346 = UINT64_MAX;
	uint8_t x347 = 69U;

	t77 = ((x345<=(x346/x347))^x348);

	if (t77 != 32766) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x349 = 64U;
	int16_t x351 = INT16_MAX;
	static int64_t x352 = -1LL;

	t78 = ((x349<=(x350/x351))^x352);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x355 = -7292LL;
	int16_t x356 = 127;
	static volatile int32_t t79 = 32989165;

	t79 = ((x353<=(x354/x355))^x356);

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 7;
	uint8_t x359 = 51U;
	int32_t t80 = 76445;

	t80 = ((x357<=(x358/x359))^x360);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = -1699500;
	static int32_t t81 = -217;

	t81 = ((x361<=(x362/x363))^x364);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = INT64_MIN;
	static int32_t t82 = -61285;

	t82 = ((x365<=(x366/x367))^x368);

	if (t82 != 175) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = -1LL;
	int16_t x370 = -13;
	uint16_t x371 = 2U;

	t83 = ((x369<=(x370/x371))^x372);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MIN;
	int16_t x375 = -7969;
	int64_t x376 = -140767939650LL;
	volatile int64_t t84 = 1396512797625518LL;

	t84 = ((x373<=(x374/x375))^x376);

	if (t84 != -140767939650LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x377 = INT32_MIN;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = -1;

	t85 = ((x377<=(x378/x379))^x380);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x382 = INT16_MAX;
	uint32_t x384 = UINT32_MAX;
	uint32_t t86 = UINT32_MAX;

	t86 = ((x381<=(x382/x383))^x384);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x385 = -1;
	int8_t x386 = INT8_MIN;
	static int8_t x387 = -1;
	int16_t x388 = -1;
	volatile int32_t t87 = -8198931;

	t87 = ((x385<=(x386/x387))^x388);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MAX;
	uint8_t x390 = 2U;
	int64_t x391 = INT64_MIN;
	int8_t x392 = -1;
	volatile int32_t t88 = -7;

	t88 = ((x389<=(x390/x391))^x392);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = -1;
	volatile uint32_t x395 = UINT32_MAX;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x393<=(x394/x395))^x396);

	if (t89 != 254) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x398 = -1;
	int64_t x399 = -1LL;
	volatile int16_t x400 = -30;
	int32_t t90 = 264;

	t90 = ((x397<=(x398/x399))^x400);

	if (t90 != -30) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = INT64_MIN;
	uint32_t x402 = UINT32_MAX;
	int64_t x403 = INT64_MIN;
	uint32_t x404 = UINT32_MAX;

	t91 = ((x401<=(x402/x403))^x404);

	if (t91 != 4294967294U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x405 = 20;
	uint64_t x406 = 8LLU;
	int32_t x407 = 6482;
	int8_t x408 = 0;
	int32_t t92 = -2720;

	t92 = ((x405<=(x406/x407))^x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x409 = UINT64_MAX;
	int8_t x410 = 0;
	int64_t x411 = INT64_MIN;
	volatile int16_t x412 = -1;
	static int32_t t93 = 162886202;

	t93 = ((x409<=(x410/x411))^x412);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = 49804U;
	static int64_t x415 = INT64_MAX;
	uint64_t x416 = UINT64_MAX;

	t94 = ((x413<=(x414/x415))^x416);

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x417 = 50962061762LLU;
	volatile int32_t x418 = -1;
	static int16_t x419 = INT16_MIN;
	int16_t x420 = INT16_MIN;
	int32_t t95 = 851550938;

	t95 = ((x417<=(x418/x419))^x420);

	if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = -2;
	volatile uint64_t x422 = UINT64_MAX;
	int16_t x423 = -10375;

	t96 = ((x421<=(x422/x423))^x424);

	if (t96 != -4) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = -54;
	uint16_t x428 = UINT16_MAX;
	int32_t t97 = -60037;

	t97 = ((x425<=(x426/x427))^x428);

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x431 = INT16_MIN;
	int8_t x432 = -1;
	int32_t t98 = -181457;

	t98 = ((x429<=(x430/x431))^x432);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x433 = UINT64_MAX;
	static int16_t x434 = INT16_MAX;
	static volatile int64_t x435 = INT64_MIN;
	static int8_t x436 = -1;

	t99 = ((x433<=(x434/x435))^x436);

	if (t99 != -1) { NG(); } else { ; }
	
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

