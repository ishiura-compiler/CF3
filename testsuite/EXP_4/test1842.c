#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
static uint16_t x5 = UINT16_MAX;
int8_t x6 = 1;
volatile int32_t t1 = 445342;
static uint64_t x9 = 11847LLU;
int8_t x11 = INT8_MIN;
volatile int32_t t2 = 1;
int64_t x20 = -1414LL;
static volatile int32_t t4 = 3;
int64_t x22 = -43LL;
int32_t x33 = INT32_MIN;
uint32_t x34 = 5U;
uint16_t x37 = 2248U;
static int32_t t9 = -1;
int64_t x44 = 197071694LL;
volatile int32_t t11 = -163158833;
int32_t x50 = INT32_MAX;
uint64_t x51 = UINT64_MAX;
int32_t x54 = 218938;
static uint8_t x56 = 6U;
static int8_t x59 = INT8_MAX;
uint8_t x74 = 5U;
uint64_t x78 = 42264LLU;
volatile uint16_t x79 = UINT16_MAX;
static int64_t x80 = INT64_MAX;
volatile uint8_t x83 = 0U;
int8_t x84 = -25;
static volatile int32_t t20 = 12683;
volatile int64_t x89 = INT64_MAX;
static int16_t x96 = -12;
int32_t x98 = 4606310;
int32_t x100 = INT32_MAX;
int32_t t25 = -50;
static int32_t x108 = INT32_MAX;
static uint64_t x111 = 1140959786885LLU;
int8_t x117 = -6;
static uint64_t x128 = UINT64_MAX;
int8_t x130 = -33;
int16_t x135 = INT16_MAX;
static int8_t x138 = INT8_MAX;
static volatile int32_t t34 = 640440;
static volatile int32_t t35 = 922149279;
int32_t t36 = 107;
int32_t t37 = 41;
uint16_t x154 = UINT16_MAX;
static uint8_t x157 = 49U;
int64_t x169 = -25818LL;
static volatile int32_t t46 = 4245;
int8_t x190 = INT8_MIN;
volatile int64_t x193 = -1LL;
int16_t x195 = -30;
static int16_t x197 = INT16_MIN;
static int8_t x205 = INT8_MIN;
volatile int64_t x208 = -1LL;
int32_t t51 = -1762929;
int32_t x209 = INT32_MAX;
int8_t x212 = -25;
uint8_t x215 = UINT8_MAX;
int64_t x217 = 2518094LL;
int16_t x219 = 652;
volatile int32_t t54 = 4;
int16_t x231 = -1;
static volatile int32_t x233 = INT32_MAX;
int8_t x236 = INT8_MIN;
volatile int32_t t61 = -129530;
int64_t x252 = INT64_MIN;
static volatile int32_t t62 = 1287;
int16_t x256 = 1;
int16_t x262 = INT16_MIN;
int8_t x263 = 15;
static int32_t t65 = -258714;
volatile int64_t x266 = -1LL;
static uint8_t x268 = 1U;
uint16_t x270 = UINT16_MAX;
volatile int32_t t67 = -1012518;
int8_t x276 = 3;
int32_t x279 = 0;
static uint8_t x297 = 46U;
int8_t x301 = -1;
int32_t t75 = -468;
int16_t x305 = INT16_MAX;
static int32_t t76 = -10267462;
uint16_t x309 = 484U;
volatile uint16_t x334 = UINT16_MAX;
volatile uint64_t x338 = UINT64_MAX;
volatile int64_t x344 = 467LL;
static int32_t x348 = -1;
static int32_t x355 = 7202078;
volatile int32_t t88 = -75355;
volatile int64_t x358 = -1LL;
uint8_t x367 = 112U;
int8_t x368 = INT8_MAX;
uint32_t x369 = 0U;
int8_t x374 = -2;
static volatile int32_t t93 = -2082470;
uint32_t x384 = 3U;
int8_t x385 = -7;
int64_t x386 = -225959LL;
volatile int32_t t97 = 18127935;
static int64_t x397 = INT64_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint32_t x2 = 36633U;
	uint16_t x3 = 770U;
	volatile int32_t t0 = 0;

	t0 = (x1<(x2|(x3&x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = UINT16_MAX;
	int8_t x8 = -1;

	t1 = (x5<(x6|(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 61581;
	int16_t x12 = INT16_MAX;

	t2 = (x9<(x10|(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = 511;
	volatile uint8_t x14 = UINT8_MAX;
	static int64_t x15 = -6012306979554LL;
	static int16_t x16 = -1;
	int32_t t3 = -2101;

	t3 = (x13<(x14|(x15&x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	static uint16_t x18 = 97U;
	static int8_t x19 = -1;

	t4 = (x17<(x18|(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint64_t x23 = UINT64_MAX;
	uint16_t x24 = 0U;
	volatile int32_t t5 = 6;

	t5 = (x21<(x22|(x23&x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1785184199LL;
	uint16_t x26 = UINT16_MAX;
	int8_t x27 = 0;
	int16_t x28 = -1;
	volatile int32_t t6 = 680462;

	t6 = (x25<(x26|(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 568550U;
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = -425626636;

	t7 = (x29<(x30|(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x35 = INT64_MAX;
	static volatile uint32_t x36 = 498483506U;
	int32_t t8 = 11;

	t8 = (x33<(x34|(x35&x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = UINT32_MAX;
	volatile uint16_t x39 = 193U;
	uint16_t x40 = 12081U;

	t9 = (x37<(x38|(x39&x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MAX;
	int16_t x43 = INT16_MIN;
	static int32_t t10 = 1059638096;

	t10 = (x41<(x42|(x43&x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	int32_t x48 = 0;

	t11 = (x45<(x46|(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = -535528321;

	t12 = (x49<(x50|(x51&x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int64_t x55 = 0LL;
	volatile int32_t t13 = -1067;

	t13 = (x53<(x54|(x55&x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -103255046614568004LL;
	int32_t x58 = 72;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 255172;

	t14 = (x57<(x58|(x59&x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int8_t x62 = INT8_MAX;
	int16_t x63 = -12;
	int64_t x64 = INT64_MAX;
	int32_t t15 = -1899;

	t15 = (x61<(x62|(x63&x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	static volatile int32_t x66 = INT32_MIN;
	int32_t x67 = -1;
	static int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = 80;

	t16 = (x65<(x66|(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = UINT16_MAX;
	int8_t x70 = INT8_MAX;
	volatile int64_t x71 = -5192277LL;
	volatile int16_t x72 = -1;
	int32_t t17 = -4373479;

	t17 = (x69<(x70|(x71&x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int32_t x75 = 103599485;
	uint32_t x76 = 50U;
	volatile int32_t t18 = -2482;

	t18 = (x73<(x74|(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t t19 = 3781;

	t19 = (x77<(x78|(x79&x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;

	t20 = (x81<(x82|(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static volatile int64_t x86 = INT64_MIN;
	static int32_t x87 = -252;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 0;

	t21 = (x85<(x86|(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = -1;
	uint8_t x91 = 37U;
	static int64_t x92 = -808LL;
	int32_t t22 = -163;

	t22 = (x89<(x90|(x91&x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int16_t x94 = INT16_MAX;
	int64_t x95 = INT64_MAX;
	int32_t t23 = -9193781;

	t23 = (x93<(x94|(x95&x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x99 = INT16_MIN;
	static int32_t t24 = -197;

	t24 = (x97<(x98|(x99&x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -7;
	volatile int16_t x102 = INT16_MAX;
	int16_t x103 = INT16_MIN;
	static uint8_t x104 = 0U;

	t25 = (x101<(x102|(x103&x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 10482U;
	int16_t x106 = INT16_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	volatile int32_t t26 = -10227738;

	t26 = (x105<(x106|(x107&x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	volatile uint64_t x110 = 234637LLU;
	static uint16_t x112 = 85U;
	volatile int32_t t27 = -158523;

	t27 = (x109<(x110|(x111&x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 14U;
	uint16_t x114 = 451U;
	int8_t x115 = INT8_MIN;
	static int16_t x116 = -638;
	int32_t t28 = 12362000;

	t28 = (x113<(x114|(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x118 = -14;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 8011;

	t29 = (x117<(x118|(x119&x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = 3140LLU;
	static volatile int16_t x122 = INT16_MIN;
	volatile int32_t x123 = INT32_MAX;
	uint64_t x124 = 20985001716LLU;
	static int32_t t30 = 44921627;

	t30 = (x121<(x122|(x123&x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 452599;
	int8_t x126 = -15;
	uint32_t x127 = 798820U;
	static volatile int32_t t31 = -191900687;

	t31 = (x125<(x126|(x127&x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 2042LLU;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -11;

	t32 = (x129<(x130|(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 28916U;
	static uint32_t x134 = UINT32_MAX;
	static uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = -3;

	t33 = (x133<(x134|(x135&x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = -2;
	static int64_t x139 = INT64_MIN;
	volatile int16_t x140 = INT16_MIN;

	t34 = (x137<(x138|(x139&x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = -101LL;
	static int16_t x142 = INT16_MIN;
	int32_t x143 = INT32_MIN;
	volatile int64_t x144 = -1223823936555LL;

	t35 = (x141<(x142|(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = UINT8_MAX;
	volatile int64_t x147 = -94768666340895133LL;
	int32_t x148 = 1063628;

	t36 = (x145<(x146|(x147&x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = INT8_MIN;
	int16_t x151 = -15;
	int8_t x152 = -1;

	t37 = (x149<(x150|(x151&x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile uint32_t x156 = 39465911U;
	int32_t t38 = -2889758;

	t38 = (x153<(x154|(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = INT8_MAX;
	static uint64_t x159 = UINT64_MAX;
	int8_t x160 = 54;
	volatile int32_t t39 = 1545768;

	t39 = (x157<(x158|(x159&x160)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MAX;
	volatile uint32_t x162 = 1U;
	uint8_t x163 = 2U;
	uint16_t x164 = 38U;
	volatile int32_t t40 = -1827;

	t40 = (x161<(x162|(x163&x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	static int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -438889330;

	t41 = (x165<(x166|(x167&x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = 156879390584982479LL;
	static int32_t x171 = INT32_MIN;
	int16_t x172 = -1;
	int32_t t42 = -85837;

	t42 = (x169<(x170|(x171&x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 476445LLU;
	int8_t x174 = -24;
	int64_t x175 = INT64_MIN;
	static uint8_t x176 = 4U;
	volatile int32_t t43 = -14808531;

	t43 = (x173<(x174|(x175&x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 1076776U;
	int32_t x178 = -4717918;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = INT64_MAX;
	int32_t t44 = 220188;

	t44 = (x177<(x178|(x179&x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	int64_t x182 = INT64_MIN;
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = -1;

	t45 = (x181<(x182|(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x186 = 13187U;
	volatile uint8_t x187 = 48U;
	int16_t x188 = INT16_MIN;

	t46 = (x185<(x186|(x187&x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 125582242U;
	volatile uint32_t x191 = 7478843U;
	uint8_t x192 = 53U;
	volatile int32_t t47 = -103;

	t47 = (x189<(x190|(x191&x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	int32_t t48 = 233;

	t48 = (x193<(x194|(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 1875249079394505026LLU;
	static uint16_t x199 = 15808U;
	volatile int16_t x200 = -2944;
	int32_t t49 = 200653;

	t49 = (x197<(x198|(x199&x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 14U;
	uint32_t x204 = UINT32_MAX;
	int32_t t50 = 3411;

	t50 = (x201<(x202|(x203&x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 61700536U;
	volatile uint8_t x207 = UINT8_MAX;

	t51 = (x205<(x206|(x207&x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = UINT16_MAX;
	uint64_t x211 = 738068LLU;
	static volatile int32_t t52 = 1;

	t52 = (x209<(x210|(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	uint64_t x214 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	static int32_t t53 = -3;

	t53 = (x213<(x214|(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x218 = UINT64_MAX;
	int32_t x220 = INT32_MIN;

	t54 = (x217<(x218|(x219&x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = UINT16_MAX;
	int8_t x222 = INT8_MIN;
	int32_t x223 = INT32_MIN;
	int16_t x224 = -4;
	static int32_t t55 = 27;

	t55 = (x221<(x222|(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = INT8_MIN;
	static int64_t x227 = 78LL;
	int32_t x228 = INT32_MIN;
	int32_t t56 = -65707848;

	t56 = (x225<(x226|(x227&x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint16_t x230 = UINT16_MAX;
	static int16_t x232 = 9322;
	volatile int32_t t57 = 431047147;

	t57 = (x229<(x230|(x231&x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x234 = 1885U;
	int16_t x235 = INT16_MIN;
	int32_t t58 = -2605487;

	t58 = (x233<(x234|(x235&x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = -1;
	int32_t x238 = 450409;
	int32_t x239 = -880;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 930080163;

	t59 = (x237<(x238|(x239&x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = -1;
	uint8_t x242 = UINT8_MAX;
	static uint32_t x243 = 503U;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 7582933;

	t60 = (x241<(x242|(x243&x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 22U;
	static int16_t x246 = -7;
	int16_t x247 = INT16_MAX;
	int64_t x248 = INT64_MIN;

	t61 = (x245<(x246|(x247&x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	static int64_t x250 = INT64_MAX;
	uint32_t x251 = 6022U;

	t62 = (x249<(x250|(x251&x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -8203528141985LL;
	int64_t x254 = INT64_MAX;
	uint32_t x255 = 6185693U;
	int32_t t63 = -1;

	t63 = (x253<(x254|(x255&x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 38278722U;
	volatile int8_t x258 = -4;
	int32_t x259 = -29;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 3064244;

	t64 = (x257<(x258|(x259&x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 24U;
	volatile uint16_t x264 = 9U;

	t65 = (x261<(x262|(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 1488993514U;
	int16_t x267 = INT16_MIN;
	int32_t t66 = 22205;

	t66 = (x265<(x266|(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int32_t x271 = INT32_MIN;
	static volatile int16_t x272 = INT16_MIN;

	t67 = (x269<(x270|(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MAX;
	uint32_t x274 = 11U;
	static uint64_t x275 = UINT64_MAX;
	volatile int32_t t68 = 9382938;

	t68 = (x273<(x274|(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x277 = 82U;
	uint32_t x278 = 5U;
	uint16_t x280 = UINT16_MAX;
	int32_t t69 = 1050987;

	t69 = (x277<(x278|(x279&x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 46U;
	volatile uint64_t x282 = 31046LLU;
	uint64_t x283 = 312577LLU;
	uint8_t x284 = 6U;
	static volatile int32_t t70 = -1550317;

	t70 = (x281<(x282|(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 3546;
	int64_t x286 = -1LL;
	int32_t x287 = INT32_MAX;
	static uint64_t x288 = 1249046912989195LLU;
	volatile int32_t t71 = 19459;

	t71 = (x285<(x286|(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	int32_t x290 = -79;
	int32_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t72 = -172515;

	t72 = (x289<(x290|(x291&x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	static int8_t x294 = INT8_MIN;
	int64_t x295 = -27935776868454LL;
	uint16_t x296 = UINT16_MAX;
	int32_t t73 = 44226;

	t73 = (x293<(x294|(x295&x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -6557;
	static int32_t x299 = INT32_MIN;
	static volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 6024642;

	t74 = (x297<(x298|(x299&x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = 5;
	volatile int64_t x303 = INT64_MAX;
	static int8_t x304 = 1;

	t75 = (x301<(x302|(x303&x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MAX;
	int32_t x307 = -1;
	volatile int32_t x308 = -1;

	t76 = (x305<(x306|(x307&x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x310 = 117U;
	static int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MIN;
	static int32_t t77 = 1048163;

	t77 = (x309<(x310|(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 125;
	volatile uint32_t x314 = 537249U;
	int8_t x315 = -1;
	volatile int32_t x316 = INT32_MAX;
	static volatile int32_t t78 = -646449;

	t78 = (x313<(x314|(x315&x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = 406793542LL;
	static int8_t x318 = INT8_MAX;
	volatile uint8_t x319 = 15U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = -6097;

	t79 = (x317<(x318|(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MAX;
	static uint8_t x322 = 13U;
	static int64_t x323 = 2501663LL;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -1;

	t80 = (x321<(x322|(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int32_t x326 = INT32_MIN;
	static volatile int8_t x327 = 1;
	int16_t x328 = -5125;
	int32_t t81 = -184452641;

	t81 = (x325<(x326|(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = INT32_MIN;
	int64_t x330 = -1LL;
	uint8_t x331 = 2U;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = 384844;

	t82 = (x329<(x330|(x331&x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -1;
	volatile int32_t x335 = -1;
	uint64_t x336 = 1LLU;
	volatile int32_t t83 = 366377128;

	t83 = (x333<(x334|(x335&x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 2LL;
	volatile int16_t x339 = -9429;
	uint8_t x340 = UINT8_MAX;
	static int32_t t84 = -704;

	t84 = (x337<(x338|(x339&x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 7U;
	int8_t x342 = -1;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int32_t t85 = -762;

	t85 = (x341<(x342|(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = -1;
	int16_t x346 = INT16_MIN;
	int32_t x347 = 14368412;
	static int32_t t86 = 43;

	t86 = (x345<(x346|(x347&x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = 9779LL;
	int64_t x350 = -1LL;
	volatile int32_t x351 = -1;
	int16_t x352 = -1;
	static int32_t t87 = -5622;

	t87 = (x349<(x350|(x351&x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	int16_t x354 = INT16_MIN;
	int32_t x356 = -9;

	t88 = (x353<(x354|(x355&x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint16_t x359 = 181U;
	volatile uint64_t x360 = 801289439060474LLU;
	static int32_t t89 = 1;

	t89 = (x357<(x358|(x359&x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	volatile int32_t x363 = -1;
	int64_t x364 = -1LL;
	int32_t t90 = 3;

	t90 = (x361<(x362|(x363&x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 396962786854543LLU;
	uint16_t x366 = 73U;
	volatile int32_t t91 = 88;

	t91 = (x365<(x366|(x367&x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x370 = 248U;
	volatile uint16_t x371 = 0U;
	uint64_t x372 = 497718700LLU;
	static int32_t t92 = -1;

	t92 = (x369<(x370|(x371&x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint16_t x375 = 1U;
	int32_t x376 = INT32_MIN;

	t93 = (x373<(x374|(x375&x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x377 = 4U;
	int8_t x378 = 0;
	volatile uint16_t x379 = 16325U;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -326098550;

	t94 = (x377<(x378|(x379&x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MAX;
	uint64_t x383 = 102156592436006536LLU;
	volatile int32_t t95 = -58532392;

	t95 = (x381<(x382|(x383&x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x387 = 42U;
	int16_t x388 = INT16_MAX;
	volatile int32_t t96 = 530734379;

	t96 = (x385<(x386|(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint64_t x390 = UINT64_MAX;
	static int32_t x391 = -24213;
	int8_t x392 = -2;

	t97 = (x389<(x390|(x391&x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -1;
	static int64_t x394 = -109257954994894LL;
	int16_t x395 = -2;
	int16_t x396 = INT16_MAX;
	int32_t t98 = 1;

	t98 = (x393<(x394|(x395&x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = -1LL;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MAX;
	volatile int32_t t99 = 2243887;

	t99 = (x397<(x398|(x399&x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

