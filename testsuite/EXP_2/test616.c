#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = INT32_MIN;
int8_t x16 = INT8_MIN;
volatile int32_t x18 = 20125;
int16_t x19 = -107;
int32_t x23 = INT32_MIN;
int16_t x27 = INT16_MAX;
int16_t x30 = 0;
int32_t x33 = -2296578;
int8_t x41 = 0;
static volatile uint32_t x53 = UINT32_MAX;
int32_t x60 = INT32_MIN;
int32_t t16 = 1569739;
int8_t x76 = INT8_MAX;
int16_t x86 = INT16_MIN;
uint32_t x98 = 1076909314U;
uint8_t x100 = UINT8_MAX;
uint8_t x106 = 15U;
int64_t t24 = -2034923813LL;
uint16_t x110 = 123U;
uint32_t t25 = 71U;
int8_t x118 = -1;
int32_t x122 = -1;
static volatile int32_t t28 = 1966757;
int64_t x130 = 614LL;
uint32_t t30 = 25U;
static int8_t x133 = 17;
int8_t x136 = INT8_MIN;
int32_t x138 = -2;
volatile uint64_t t32 = 513896196392974444LLU;
int32_t x147 = INT32_MAX;
uint64_t t33 = 31649389418LLU;
int32_t x157 = INT32_MAX;
static int64_t x165 = -1LL;
int16_t x166 = 607;
int64_t x174 = INT64_MIN;
int8_t x178 = 1;
static volatile int64_t x185 = INT64_MAX;
int32_t x189 = 427;
uint64_t x192 = 397355620851LLU;
uint32_t x195 = 13671U;
int32_t t43 = -15923757;
int32_t t44 = -3;
static int32_t t45 = -399377;
int64_t x215 = INT64_MIN;
volatile uint8_t x219 = 60U;
int32_t t49 = -92;
int32_t t50 = -7644;
int64_t x225 = INT64_MAX;
volatile int8_t x228 = 16;
volatile int32_t t54 = 190;
static volatile uint16_t x250 = UINT16_MAX;
static uint64_t t56 = 38015019LLU;
int16_t x259 = -1;
volatile int32_t t57 = 1959898;
int8_t x261 = -1;
volatile uint8_t x265 = 2U;
volatile int32_t t61 = -193;
int16_t x282 = 0;
volatile uint64_t x293 = 101739982361LLU;
int16_t x294 = INT16_MIN;
int8_t x297 = -1;
uint8_t x298 = UINT8_MAX;
uint32_t x299 = UINT32_MAX;
int16_t x303 = INT16_MAX;
uint64_t x306 = UINT64_MAX;
volatile uint32_t x309 = 0U;
static uint64_t x313 = 5963LLU;
int16_t x315 = INT16_MIN;
volatile uint32_t t71 = 127U;
int8_t x325 = INT8_MIN;
static int64_t x329 = INT64_MIN;
uint8_t x331 = 8U;
volatile int32_t x332 = -829014231;
static int32_t t73 = -102;
volatile int64_t x337 = INT64_MIN;
uint32_t x338 = 0U;
static int16_t x345 = 9569;
uint16_t x346 = 1248U;
static int64_t x348 = 48779LL;
int64_t x353 = INT64_MAX;
int16_t x355 = INT16_MIN;
uint16_t x358 = 9U;
int16_t x387 = 45;
uint8_t x394 = 20U;
volatile int16_t x398 = -1;
int32_t t89 = 151251;
int64_t x417 = -1LL;
uint8_t x418 = 50U;
static volatile int64_t x425 = INT64_MIN;
volatile uint32_t x432 = 800411820U;
int64_t x444 = INT64_MAX;
volatile int64_t t99 = 6651403076LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static int64_t x2 = 2826LL;
	uint32_t x3 = 743U;
	int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 67713517011671626LL;

	t0 = ((x1<(x2/x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -940177824322LL;
	volatile int16_t x6 = 1;
	int16_t x7 = -826;
	volatile int8_t x8 = 22;
	volatile int32_t t1 = -296102631;

	t1 = ((x5<(x6/x7))%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int8_t x11 = INT8_MAX;
	int32_t x12 = -99;
	volatile int32_t t2 = -1;

	t2 = ((x9<(x10/x11))%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int8_t x14 = INT8_MAX;
	int64_t x15 = 2599460945327970483LL;
	int32_t t3 = -3;

	t3 = ((x13<(x14/x15))%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 827U;
	int16_t x20 = 1;
	static int32_t t4 = -479835;

	t4 = ((x17<(x18/x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -520377205LL;
	uint8_t x22 = 28U;
	int64_t x24 = 7LL;
	volatile int64_t t5 = -72224LL;

	t5 = ((x21<(x22/x23))%x24);

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	uint64_t x26 = 4041503934LLU;
	volatile int32_t x28 = 1564;
	static int32_t t6 = 1;

	t6 = ((x25<(x26/x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 403788870U;
	int32_t x31 = INT32_MIN;
	uint8_t x32 = UINT8_MAX;
	int32_t t7 = 559456747;

	t7 = ((x29<(x30/x31))%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	int32_t x35 = -1;
	static int8_t x36 = -1;
	volatile int32_t t8 = 0;

	t8 = ((x33<(x34/x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 4232;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t9 = 35642;

	t9 = ((x37<(x38/x39))%x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	static uint16_t x44 = 1U;
	int32_t t10 = 26820829;

	t10 = ((x41<(x42/x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 2017U;
	int64_t x46 = -15124LL;
	int32_t x47 = -1;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = 75LL;

	t11 = ((x45<(x46/x47))%x48);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	uint64_t x50 = UINT64_MAX;
	volatile uint16_t x51 = 4950U;
	static uint32_t x52 = 62U;
	static volatile uint32_t t12 = 27867928U;

	t12 = ((x49<(x50/x51))%x52);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 6908524LLU;
	int64_t x55 = 1485339486314212115LL;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -10;

	t13 = ((x53<(x54/x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 107947058U;
	int32_t x58 = INT32_MIN;
	volatile uint8_t x59 = 51U;
	int32_t t14 = -1;

	t14 = ((x57<(x58/x59))%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 1U;
	static uint32_t x62 = UINT32_MAX;
	static volatile int64_t x63 = INT64_MAX;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 19;

	t15 = ((x61<(x62/x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint16_t x66 = 1U;
	static uint16_t x67 = UINT16_MAX;
	volatile int32_t x68 = INT32_MAX;

	t16 = ((x65<(x66/x67))%x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x69 = -1;
	volatile uint8_t x70 = 2U;
	static uint32_t x71 = 31600399U;
	uint16_t x72 = UINT16_MAX;
	static int32_t t17 = -1;

	t17 = ((x69<(x70/x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 242002488U;
	static int16_t x74 = INT16_MIN;
	uint64_t x75 = 200551533541033LLU;
	int32_t t18 = -2936;

	t18 = ((x73<(x74/x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	uint64_t x82 = UINT64_MAX;
	static int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	int32_t t19 = -1;

	t19 = ((x81<(x82/x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 0U;
	int32_t x87 = INT32_MIN;
	int16_t x88 = -1;
	static int32_t t20 = -64346;

	t20 = ((x85<(x86/x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	static volatile int8_t x95 = 1;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t21 = 3;

	t21 = ((x93<(x94/x95))%x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int64_t x99 = -1LL;
	int32_t t22 = 4;

	t22 = ((x97<(x98/x99))%x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -47;
	int64_t x102 = INT64_MAX;
	int8_t x103 = -1;
	volatile int16_t x104 = INT16_MIN;
	static int32_t t23 = 493448083;

	t23 = ((x101<(x102/x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x105 = UINT32_MAX;
	static uint16_t x107 = 528U;
	volatile int64_t x108 = -1LL;

	t24 = ((x105<(x106/x107))%x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	static uint16_t x111 = UINT16_MAX;
	uint32_t x112 = 211U;

	t25 = ((x109<(x110/x111))%x112);

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x113 = 6517LLU;
	int32_t x114 = INT32_MAX;
	static volatile int16_t x115 = 2;
	uint8_t x116 = 41U;
	int32_t t26 = 98718;

	t26 = ((x113<(x114/x115))%x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	volatile int8_t x119 = INT8_MAX;
	int8_t x120 = -1;
	static volatile int32_t t27 = -21247217;

	t27 = ((x117<(x118/x119))%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MIN;
	volatile int16_t x123 = INT16_MAX;
	volatile int16_t x124 = INT16_MAX;

	t28 = ((x121<(x122/x123))%x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -43735780549LL;
	uint16_t x126 = UINT16_MAX;
	static int32_t x127 = INT32_MAX;
	uint64_t x128 = 2582398448067392LLU;
	volatile uint64_t t29 = 39LLU;

	t29 = ((x125<(x126/x127))%x128);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;

	t30 = ((x129<(x130/x131))%x132);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	int32_t t31 = 25351;

	t31 = ((x133<(x134/x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;

	t32 = ((x137<(x138/x139))%x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = 197700151U;
	volatile int64_t x146 = -243758964LL;
	static uint64_t x148 = 175401863LLU;

	t33 = ((x145<(x146/x147))%x148);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	volatile int32_t x152 = INT32_MIN;
	int32_t t34 = 16;

	t34 = ((x149<(x150/x151))%x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = -903;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = UINT32_MAX;
	volatile uint16_t x156 = UINT16_MAX;
	volatile int32_t t35 = 4382;

	t35 = ((x153<(x154/x155))%x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = INT16_MIN;
	int64_t x159 = 1LL;
	static int32_t x160 = -1;
	static volatile int32_t t36 = 308713777;

	t36 = ((x157<(x158/x159))%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x161 = 1600032997LLU;
	static uint16_t x162 = UINT16_MAX;
	int32_t x163 = -7574239;
	int32_t x164 = -978;
	volatile int32_t t37 = -8423287;

	t37 = ((x161<(x162/x163))%x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x167 = 1U;
	int32_t x168 = -59547086;
	volatile int32_t t38 = 1;

	t38 = ((x165<(x166/x167))%x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint8_t x175 = 27U;
	volatile uint8_t x176 = UINT8_MAX;
	int32_t t39 = 30603092;

	t39 = ((x173<(x174/x175))%x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = -2;
	int64_t x179 = 95LL;
	uint16_t x180 = 436U;
	volatile int32_t t40 = 7881;

	t40 = ((x177<(x178/x179))%x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x186 = -1LL;
	int32_t x187 = INT32_MAX;
	static volatile uint64_t x188 = UINT64_MAX;
	uint64_t t41 = 11LLU;

	t41 = ((x185<(x186/x187))%x188);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = 2620942245LL;
	static int8_t x191 = INT8_MIN;
	static volatile uint64_t t42 = 65740035468879LLU;

	t42 = ((x189<(x190/x191))%x192);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x193 = INT8_MIN;
	uint16_t x194 = UINT16_MAX;
	int32_t x196 = INT32_MAX;

	t43 = ((x193<(x194/x195))%x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = INT32_MIN;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -1628418;
	static int16_t x200 = INT16_MAX;

	t44 = ((x197<(x198/x199))%x200);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MAX;
	volatile int8_t x203 = -1;
	int16_t x204 = INT16_MIN;

	t45 = ((x201<(x202/x203))%x204);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = 751539697473207LL;
	uint32_t x206 = 31U;
	int32_t x207 = -109785545;
	int8_t x208 = INT8_MIN;
	volatile int32_t t46 = 492010571;

	t46 = ((x205<(x206/x207))%x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int64_t x212 = -1740LL;
	int64_t t47 = -385450LL;

	t47 = ((x209<(x210/x211))%x212);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	int32_t x216 = 3960659;
	volatile int32_t t48 = -1;

	t48 = ((x213<(x214/x215))%x216);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = 0U;
	uint32_t x218 = UINT32_MAX;
	uint16_t x220 = 28U;

	t49 = ((x217<(x218/x219))%x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 126U;
	uint32_t x222 = 5220U;
	int16_t x223 = -3963;
	uint16_t x224 = 3617U;

	t50 = ((x221<(x222/x223))%x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x226 = INT64_MIN;
	int32_t x227 = INT32_MIN;
	static volatile int32_t t51 = 83012268;

	t51 = ((x225<(x226/x227))%x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	uint32_t x235 = 502438672U;
	int16_t x236 = 471;
	int32_t t52 = 27;

	t52 = ((x233<(x234/x235))%x236);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x237 = 6U;
	static uint8_t x238 = UINT8_MAX;
	int64_t x239 = -1LL;
	volatile int32_t x240 = -1;
	int32_t t53 = 12445246;

	t53 = ((x237<(x238/x239))%x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x245 = 1U;
	uint16_t x246 = 4U;
	uint16_t x247 = 13104U;
	int32_t x248 = -1;

	t54 = ((x245<(x246/x247))%x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	uint64_t x251 = UINT64_MAX;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t55 = -3;

	t55 = ((x249<(x250/x251))%x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = UINT64_MAX;
	int8_t x254 = INT8_MAX;
	int32_t x255 = -1;
	static volatile uint64_t x256 = 66231137956LLU;

	t56 = ((x253<(x254/x255))%x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = 6;
	int32_t x260 = INT32_MIN;

	t57 = ((x257<(x258/x259))%x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x262 = -1;
	int64_t x263 = 2369LL;
	static int32_t x264 = INT32_MIN;
	static volatile int32_t t58 = -84;

	t58 = ((x261<(x262/x263))%x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x266 = INT8_MAX;
	int32_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	static int32_t t59 = -1366876;

	t59 = ((x265<(x266/x267))%x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 1987999390LLU;
	uint8_t x270 = 54U;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;
	int64_t t60 = 261870449748447LL;

	t60 = ((x269<(x270/x271))%x272);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = -1;
	int64_t x275 = INT64_MIN;
	uint8_t x276 = UINT8_MAX;

	t61 = ((x273<(x274/x275))%x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -19;
	int32_t x278 = -700;
	int32_t x279 = -1;
	uint32_t x280 = 824U;
	volatile uint32_t t62 = 976246583U;

	t62 = ((x277<(x278/x279))%x280);

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t63 = 15224LLU;

	t63 = ((x281<(x282/x283))%x284);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = -1LL;
	uint32_t x286 = 298794U;
	volatile int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int32_t t64 = -27;

	t64 = ((x285<(x286/x287))%x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x289 = INT64_MIN;
	uint8_t x290 = 1U;
	static int64_t x291 = INT64_MIN;
	int8_t x292 = -19;
	volatile int32_t t65 = 25996;

	t65 = ((x289<(x290/x291))%x292);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x295 = 184LLU;
	static volatile int64_t x296 = -1LL;
	volatile int64_t t66 = -1602423133739185LL;

	t66 = ((x293<(x294/x295))%x296);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x300 = INT64_MIN;
	int64_t t67 = -688601LL;

	t67 = ((x297<(x298/x299))%x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = UINT8_MAX;
	uint32_t x304 = UINT32_MAX;
	volatile uint32_t t68 = 49386U;

	t68 = ((x301<(x302/x303))%x304);

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x305 = 2U;
	int8_t x307 = INT8_MIN;
	volatile int16_t x308 = 1827;
	int32_t t69 = 36;

	t69 = ((x305<(x306/x307))%x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x310 = INT8_MAX;
	uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 788412159U;
	static volatile uint32_t t70 = 803U;

	t70 = ((x309<(x310/x311))%x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x314 = UINT64_MAX;
	uint32_t x316 = 306888317U;

	t71 = ((x313<(x314/x315))%x316);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x326 = 3245242549265648LLU;
	volatile int8_t x327 = INT8_MIN;
	uint64_t x328 = UINT64_MAX;
	static volatile uint64_t t72 = 66LLU;

	t72 = ((x325<(x326/x327))%x328);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x330 = -1;

	t73 = ((x329<(x330/x331))%x332);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x339 = 355717U;
	static uint8_t x340 = 6U;
	static volatile int32_t t74 = -10;

	t74 = ((x337<(x338/x339))%x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x341 = 356;
	static int16_t x342 = 7074;
	int64_t x343 = INT64_MAX;
	int8_t x344 = -4;
	static volatile int32_t t75 = 12674966;

	t75 = ((x341<(x342/x343))%x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x347 = 866343017LLU;
	volatile int64_t t76 = -1LL;

	t76 = ((x345<(x346/x347))%x348);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MIN;
	int16_t x351 = INT16_MIN;
	uint16_t x352 = 239U;
	volatile int32_t t77 = -11805;

	t77 = ((x349<(x350/x351))%x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x354 = 6;
	static int32_t x356 = 600506;
	volatile int32_t t78 = -3377797;

	t78 = ((x353<(x354/x355))%x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x357 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	volatile int64_t x360 = 495LL;
	int64_t t79 = -1341953258LL;

	t79 = ((x357<(x358/x359))%x360);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x365 = INT64_MIN;
	uint16_t x366 = 0U;
	int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	static int64_t t80 = -7447830866LL;

	t80 = ((x365<(x366/x367))%x368);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x369 = -1;
	static int32_t x370 = INT32_MIN;
	uint32_t x371 = UINT32_MAX;
	static int8_t x372 = INT8_MIN;
	static volatile int32_t t81 = -2679963;

	t81 = ((x369<(x370/x371))%x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x373 = INT32_MAX;
	int32_t x374 = -1;
	volatile int16_t x375 = 226;
	uint32_t x376 = 118616U;
	static uint32_t t82 = 225163725U;

	t82 = ((x373<(x374/x375))%x376);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x378 = 1938631172U;
	uint8_t x379 = 3U;
	uint64_t x380 = 1299LLU;
	volatile uint64_t t83 = 222LLU;

	t83 = ((x377<(x378/x379))%x380);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MIN;
	int16_t x382 = 0;
	int16_t x383 = INT16_MIN;
	int32_t x384 = 909757;
	static volatile int32_t t84 = -3;

	t84 = ((x381<(x382/x383))%x384);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1LL;
	static int32_t x386 = INT32_MIN;
	uint64_t x388 = 192419091582772LLU;
	static volatile uint64_t t85 = 7018836998471244668LLU;

	t85 = ((x385<(x386/x387))%x388);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x389 = -1;
	static int16_t x390 = 724;
	int8_t x391 = -1;
	uint64_t x392 = 40513LLU;
	uint64_t t86 = 30803049880073310LLU;

	t86 = ((x389<(x390/x391))%x392);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x393 = 61U;
	int32_t x395 = INT32_MIN;
	volatile int64_t x396 = INT64_MIN;
	static int64_t t87 = 79445952LL;

	t87 = ((x393<(x394/x395))%x396);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = -12;
	volatile int64_t x399 = 60572121072096027LL;
	int8_t x400 = -21;
	volatile int32_t t88 = -91338;

	t88 = ((x397<(x398/x399))%x400);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x401 = -1;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MAX;
	int16_t x404 = INT16_MIN;

	t89 = ((x401<(x402/x403))%x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x405 = INT64_MAX;
	volatile uint16_t x406 = 517U;
	volatile int32_t x407 = -1;
	volatile uint32_t x408 = 3662162U;
	uint32_t t90 = 10427U;

	t90 = ((x405<(x406/x407))%x408);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x409 = 8174039779LL;
	int16_t x410 = INT16_MIN;
	int16_t x411 = -1;
	static uint8_t x412 = 5U;
	static int32_t t91 = -2;

	t91 = ((x409<(x410/x411))%x412);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x413 = 17U;
	uint32_t x414 = UINT32_MAX;
	int64_t x415 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t92 = 57;

	t92 = ((x413<(x414/x415))%x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x419 = 1;
	int32_t x420 = -1;
	volatile int32_t t93 = 6;

	t93 = ((x417<(x418/x419))%x420);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x421 = 49282U;
	volatile int8_t x422 = -61;
	int32_t x423 = INT32_MIN;
	uint16_t x424 = UINT16_MAX;
	int32_t t94 = -104219;

	t94 = ((x421<(x422/x423))%x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x426 = 200396003623LLU;
	uint32_t x427 = 356745U;
	uint8_t x428 = UINT8_MAX;
	static volatile int32_t t95 = -175135836;

	t95 = ((x425<(x426/x427))%x428);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x429 = 2727LLU;
	volatile uint32_t x430 = 1562950828U;
	static int8_t x431 = INT8_MIN;
	uint32_t t96 = 1429400457U;

	t96 = ((x429<(x430/x431))%x432);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x433 = 4417U;
	int64_t x434 = INT64_MIN;
	uint8_t x435 = 11U;
	uint8_t x436 = 7U;
	int32_t t97 = 622;

	t97 = ((x433<(x434/x435))%x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MAX;
	int8_t x438 = INT8_MIN;
	static int16_t x439 = INT16_MIN;
	static int32_t x440 = INT32_MAX;
	volatile int32_t t98 = -7775;

	t98 = ((x437<(x438/x439))%x440);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x441 = -566;
	static volatile int32_t x442 = -7716756;
	volatile int64_t x443 = INT64_MIN;

	t99 = ((x441<(x442/x443))%x444);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

