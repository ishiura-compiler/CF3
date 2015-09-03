#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x19 = INT8_MIN;
int32_t t2 = -180;
static int16_t x26 = INT16_MIN;
int16_t x29 = -1;
int64_t x32 = -1LL;
int16_t x37 = INT16_MIN;
int32_t t6 = 2301;
volatile int32_t t7 = -1376;
volatile uint64_t x54 = UINT64_MAX;
int8_t x56 = INT8_MIN;
int8_t x57 = 17;
static uint16_t x59 = 15451U;
int64_t x61 = 5800953622490795LL;
volatile int32_t t11 = -1;
static uint32_t x71 = 752U;
int16_t x74 = INT16_MIN;
uint64_t x79 = 521678088441601333LLU;
volatile int8_t x80 = INT8_MAX;
static int32_t t16 = 4186838;
uint16_t x86 = 15U;
int8_t x87 = INT8_MAX;
static volatile uint64_t x88 = 4211533160994LLU;
int32_t x92 = INT32_MIN;
int8_t x94 = 3;
volatile int32_t t19 = -1152;
static volatile int64_t x101 = INT64_MIN;
uint64_t x106 = 1965924900LLU;
int16_t x112 = 3;
volatile int32_t x113 = -1;
int32_t x121 = 13363518;
volatile int8_t x122 = INT8_MAX;
int16_t x123 = INT16_MIN;
int32_t t26 = 1;
uint8_t x132 = UINT8_MAX;
int32_t t28 = -1038049275;
uint8_t x133 = 2U;
static int8_t x134 = 1;
int8_t x137 = 7;
uint64_t x138 = 9875LLU;
uint64_t x139 = UINT64_MAX;
int32_t x142 = -1226909;
volatile int32_t t31 = 0;
static int32_t x147 = INT32_MIN;
int8_t x149 = INT8_MIN;
volatile int8_t x156 = -19;
uint64_t x164 = 8838LLU;
uint64_t x176 = UINT64_MAX;
volatile int32_t t38 = 6;
volatile int32_t t40 = 96356;
int32_t x191 = 43;
volatile int32_t x195 = -1;
int64_t x204 = -919LL;
uint64_t x215 = 174550LLU;
int8_t x219 = INT8_MAX;
uint32_t x224 = UINT32_MAX;
volatile int32_t t49 = 3039;
static volatile int32_t x231 = INT32_MIN;
static volatile uint8_t x245 = 36U;
int16_t x247 = INT16_MIN;
int8_t x255 = INT8_MIN;
static volatile uint32_t x264 = UINT32_MAX;
int64_t x270 = -1LL;
static int16_t x278 = INT16_MAX;
int16_t x281 = INT16_MIN;
uint64_t x283 = UINT64_MAX;
volatile int32_t t60 = 70;
static int32_t x286 = -1;
int64_t x287 = INT64_MIN;
volatile int32_t t61 = -29697;
int8_t x293 = -1;
volatile int32_t t63 = -3845;
static volatile int32_t x297 = INT32_MIN;
static int16_t x300 = -1;
uint64_t x305 = UINT64_MAX;
int8_t x306 = INT8_MAX;
static int8_t x310 = -1;
volatile int32_t x317 = -1;
static volatile uint64_t x319 = 3070437093LLU;
int8_t x323 = -1;
int8_t x325 = INT8_MAX;
volatile int16_t x331 = 8558;
volatile int32_t t72 = 16470738;
int64_t x338 = -3LL;
static uint32_t x351 = 15U;
static int32_t x352 = 49203276;
int64_t x356 = 34927471624391LL;
uint32_t x359 = UINT32_MAX;
int16_t x368 = INT16_MAX;
int64_t x372 = -4772533808LL;
int32_t t80 = 1076;
int8_t x382 = INT8_MAX;
int8_t x385 = INT8_MIN;
int32_t x388 = INT32_MAX;
int64_t x395 = -1LL;
volatile int8_t x397 = INT8_MAX;
int16_t x405 = -1;
uint16_t x408 = UINT16_MAX;
volatile int16_t x412 = 50;
static volatile int32_t t92 = -731;
uint16_t x425 = 431U;
volatile uint16_t x430 = UINT16_MAX;
static uint8_t x435 = 3U;
int8_t x442 = INT8_MAX;
int64_t x444 = INT64_MAX;
static volatile uint64_t x448 = UINT64_MAX;
int32_t t98 = -14643;


void f0(void) {
	int8_t x1 = -2;
	volatile int64_t x2 = INT64_MAX;
	static int8_t x3 = -3;
	uint16_t x4 = 165U;
	static int32_t t0 = -13296;

	t0 = (x1<=(x2^(x3+x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = INT8_MIN;
	int64_t x7 = -1LL;
	uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 81;

	t1 = (x5<=(x6^(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = INT32_MIN;
	int64_t x20 = 158LL;

	t2 = (x17<=(x18^(x19+x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = -1;
	int64_t x27 = 73LL;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t3 = -3371313;

	t3 = (x25<=(x26^(x27+x28)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x30 = INT32_MIN;
	static uint64_t x31 = 38941LLU;
	static int32_t t4 = 103974945;

	t4 = (x29<=(x30^(x31+x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x33 = -14;
	volatile uint8_t x34 = 124U;
	int8_t x35 = 0;
	int32_t x36 = -1;
	int32_t t5 = 12311;

	t5 = (x33<=(x34^(x35+x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x38 = INT8_MAX;
	volatile uint32_t x39 = 3790102U;
	uint32_t x40 = 52472U;

	t6 = (x37<=(x38^(x39+x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = 3841U;
	uint8_t x42 = UINT8_MAX;
	static int8_t x43 = INT8_MIN;
	volatile int64_t x44 = 85374633791801LL;

	t7 = (x41<=(x42^(x43+x44)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = 421921302407025002LL;
	uint8_t x50 = 13U;
	volatile int32_t x51 = -1;
	static uint8_t x52 = UINT8_MAX;
	static int32_t t8 = -17652;

	t8 = (x49<=(x50^(x51+x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = 0;
	uint16_t x55 = 3554U;
	int32_t t9 = 372548787;

	t9 = (x53<=(x54^(x55+x56)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x58 = 3LLU;
	int16_t x60 = -8485;
	volatile int32_t t10 = 175;

	t10 = (x57<=(x58^(x59+x60)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x62 = INT16_MIN;
	static int32_t x63 = INT32_MIN;
	static int16_t x64 = 10;

	t11 = (x61<=(x62^(x63+x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x65 = INT64_MIN;
	int32_t x66 = 242;
	uint8_t x67 = 10U;
	int64_t x68 = INT64_MIN;
	static int32_t t12 = 4339;

	t12 = (x65<=(x66^(x67+x68)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = 0U;
	uint32_t x72 = 16197879U;
	int32_t t13 = -80;

	t13 = (x69<=(x70^(x71+x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	int16_t x76 = 2105;
	volatile int32_t t14 = -110;

	t14 = (x73<=(x74^(x75+x76)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = UINT64_MAX;
	int16_t x78 = INT16_MIN;
	int32_t t15 = 96730134;

	t15 = (x77<=(x78^(x79+x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = 1854;
	int16_t x82 = -5;
	int16_t x83 = INT16_MAX;
	static uint64_t x84 = 28682890753LLU;

	t16 = (x81<=(x82^(x83+x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = -11;
	static volatile int32_t t17 = 200823277;

	t17 = (x85<=(x86^(x87+x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = -1;
	uint16_t x90 = 13U;
	uint16_t x91 = 7U;
	int32_t t18 = 28403801;

	t18 = (x89<=(x90^(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MAX;
	static int16_t x95 = -1;
	uint64_t x96 = 98576614LLU;

	t19 = (x93<=(x94^(x95+x96)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x97 = 18U;
	int16_t x98 = 11;
	volatile int64_t x99 = INT64_MIN;
	uint8_t x100 = 101U;
	volatile int32_t t20 = 1;

	t20 = (x97<=(x98^(x99+x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x102 = 41259374186LL;
	int64_t x103 = 770200LL;
	int8_t x104 = -1;
	volatile int32_t t21 = -771;

	t21 = (x101<=(x102^(x103+x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = INT32_MIN;
	volatile int32_t x107 = INT32_MIN;
	int64_t x108 = -67168351062242201LL;
	volatile int32_t t22 = 276575787;

	t22 = (x105<=(x106^(x107+x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	uint64_t x111 = 251740310LLU;
	int32_t t23 = 86;

	t23 = (x109<=(x110^(x111+x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = INT64_MIN;
	int64_t x115 = 33LL;
	int64_t x116 = INT64_MIN;
	int32_t t24 = 1316007;

	t24 = (x113<=(x114^(x115+x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	int64_t x118 = INT64_MIN;
	static int32_t x119 = -52;
	int8_t x120 = -3;
	volatile int32_t t25 = 15;

	t25 = (x117<=(x118^(x119+x120)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x124 = INT16_MIN;

	t26 = (x121<=(x122^(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -16117417LL;
	static int64_t x126 = INT64_MIN;
	volatile int16_t x127 = INT16_MIN;
	volatile int8_t x128 = INT8_MAX;
	int32_t t27 = 2723848;

	t27 = (x125<=(x126^(x127+x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x129 = UINT8_MAX;
	static int32_t x130 = INT32_MAX;
	int8_t x131 = -2;

	t28 = (x129<=(x130^(x131+x132)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x135 = -1;
	int32_t x136 = -95;
	volatile int32_t t29 = 428202;

	t29 = (x133<=(x134^(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x140 = UINT32_MAX;
	int32_t t30 = 782193130;

	t30 = (x137<=(x138^(x139+x140)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x141 = 7U;
	uint16_t x143 = 761U;
	uint8_t x144 = 0U;

	t31 = (x141<=(x142^(x143+x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x145 = 487;
	int32_t x146 = -1;
	static volatile uint16_t x148 = UINT16_MAX;
	int32_t t32 = 1;

	t32 = (x145<=(x146^(x147+x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x150 = -1;
	int64_t x151 = -21LL;
	int64_t x152 = 484595LL;
	int32_t t33 = 625;

	t33 = (x149<=(x150^(x151+x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x153 = INT64_MAX;
	static int8_t x154 = -1;
	int16_t x155 = -4;
	static volatile int32_t t34 = 2721;

	t34 = (x153<=(x154^(x155+x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = INT64_MAX;
	int16_t x158 = -222;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MAX;
	int32_t t35 = -1;

	t35 = (x157<=(x158^(x159+x160)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x161 = 86U;
	volatile int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	static volatile int32_t t36 = 6;

	t36 = (x161<=(x162^(x163+x164)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x173 = 66U;
	int64_t x174 = -1LL;
	uint64_t x175 = UINT64_MAX;
	int32_t t37 = -498353077;

	t37 = (x173<=(x174^(x175+x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MAX;
	uint64_t x178 = UINT64_MAX;
	int16_t x179 = -119;
	uint16_t x180 = 2918U;

	t38 = (x177<=(x178^(x179+x180)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = -9;
	volatile uint16_t x182 = 2961U;
	static int64_t x183 = -7686642944345161LL;
	int32_t x184 = -1;
	static volatile int32_t t39 = 1971;

	t39 = (x181<=(x182^(x183+x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 6U;
	int64_t x186 = INT64_MAX;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = UINT32_MAX;

	t40 = (x185<=(x186^(x187+x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MAX;
	int32_t x192 = -992640071;
	int32_t t41 = -1368165;

	t41 = (x189<=(x190^(x191+x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = INT64_MAX;
	volatile int8_t x194 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t42 = -3977;

	t42 = (x193<=(x194^(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x197 = 37U;
	volatile int32_t x198 = -378687;
	static volatile uint16_t x199 = 0U;
	uint32_t x200 = 1U;
	volatile int32_t t43 = -9550;

	t43 = (x197<=(x198^(x199+x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MAX;
	static volatile int64_t x203 = 174194096862559163LL;
	volatile int32_t t44 = -9575924;

	t44 = (x201<=(x202^(x203+x204)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x205 = 56396278224LLU;
	int32_t x206 = INT32_MIN;
	int64_t x207 = 405LL;
	int8_t x208 = 0;
	volatile int32_t t45 = 39;

	t45 = (x205<=(x206^(x207+x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x209 = -5077LL;
	static int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MAX;
	int8_t x212 = 4;
	static volatile int32_t t46 = -95;

	t46 = (x209<=(x210^(x211+x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 9067970393994LLU;
	volatile int64_t x214 = INT64_MAX;
	static int16_t x216 = INT16_MIN;
	volatile int32_t t47 = 265666356;

	t47 = (x213<=(x214^(x215+x216)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	int8_t x220 = 29;
	volatile int32_t t48 = -179013;

	t48 = (x217<=(x218^(x219+x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x221 = 120LLU;
	int64_t x222 = -1LL;
	int64_t x223 = INT64_MIN;

	t49 = (x221<=(x222^(x223+x224)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x229 = INT16_MAX;
	int8_t x230 = -1;
	volatile int16_t x232 = INT16_MAX;
	volatile int32_t t50 = -5784;

	t50 = (x229<=(x230^(x231+x232)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x237 = 291;
	int16_t x238 = 5;
	static int16_t x239 = -3;
	volatile uint64_t x240 = UINT64_MAX;
	volatile int32_t t51 = -2061428;

	t51 = (x237<=(x238^(x239+x240)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MAX;
	uint32_t x242 = UINT32_MAX;
	uint64_t x243 = 676986875331613855LLU;
	volatile uint16_t x244 = 345U;
	volatile int32_t t52 = -332;

	t52 = (x241<=(x242^(x243+x244)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x246 = 203278530744690595LLU;
	volatile uint16_t x248 = 692U;
	int32_t t53 = 15685435;

	t53 = (x245<=(x246^(x247+x248)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x253 = 3LLU;
	volatile int32_t x254 = -1;
	uint64_t x256 = UINT64_MAX;
	int32_t t54 = 2426958;

	t54 = (x253<=(x254^(x255+x256)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x257 = 1U;
	int8_t x258 = -1;
	int32_t x259 = -969965984;
	volatile uint16_t x260 = 17112U;
	volatile int32_t t55 = -90889;

	t55 = (x257<=(x258^(x259+x260)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	int16_t x262 = INT16_MIN;
	static uint8_t x263 = 33U;
	volatile int32_t t56 = -47899442;

	t56 = (x261<=(x262^(x263+x264)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x265 = 695586625U;
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	volatile int32_t x268 = INT32_MAX;
	volatile int32_t t57 = 477984644;

	t57 = (x265<=(x266^(x267+x268)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x269 = 0;
	int16_t x271 = 1;
	int64_t x272 = INT64_MIN;
	volatile int32_t t58 = 58;

	t58 = (x269<=(x270^(x271+x272)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x277 = -29;
	int8_t x279 = INT8_MAX;
	static int64_t x280 = -1LL;
	int32_t t59 = 1004041189;

	t59 = (x277<=(x278^(x279+x280)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x282 = 8508117281857LLU;
	volatile uint32_t x284 = UINT32_MAX;

	t60 = (x281<=(x282^(x283+x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x285 = INT32_MIN;
	int8_t x288 = INT8_MAX;

	t61 = (x285<=(x286^(x287+x288)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 19U;
	int16_t x290 = INT16_MAX;
	volatile int32_t x291 = INT32_MAX;
	uint32_t x292 = 2293U;
	int32_t t62 = 19;

	t62 = (x289<=(x290^(x291+x292)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x294 = 45;
	static int8_t x295 = -1;
	uint64_t x296 = 4190820LLU;

	t63 = (x293<=(x294^(x295+x296)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x298 = 16;
	uint64_t x299 = 3LLU;
	volatile int32_t t64 = -5664;

	t64 = (x297<=(x298^(x299+x300)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x307 = INT8_MIN;
	int64_t x308 = 10381LL;
	int32_t t65 = -7849267;

	t65 = (x305<=(x306^(x307+x308)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x309 = 0;
	int8_t x311 = 35;
	uint64_t x312 = 2901945845833626171LLU;
	volatile int32_t t66 = -83818;

	t66 = (x309<=(x310^(x311+x312)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x314 = -3;
	int16_t x315 = -7;
	uint64_t x316 = 58510966097437747LLU;
	int32_t t67 = 21;

	t67 = (x313<=(x314^(x315+x316)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x318 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t68 = 8;

	t68 = (x317<=(x318^(x319+x320)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x321 = 3U;
	volatile int16_t x322 = INT16_MIN;
	static volatile int32_t x324 = 0;
	volatile int32_t t69 = -33138741;

	t69 = (x321<=(x322^(x323+x324)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x326 = 2U;
	int32_t x327 = -1;
	int32_t x328 = -100;
	volatile int32_t t70 = 175594309;

	t70 = (x325<=(x326^(x327+x328)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x329 = 1U;
	int16_t x330 = INT16_MIN;
	int8_t x332 = -1;
	volatile int32_t t71 = 16903;

	t71 = (x329<=(x330^(x331+x332)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x333 = -15692LL;
	static int64_t x334 = INT64_MIN;
	static int8_t x335 = INT8_MAX;
	uint64_t x336 = 4515035479700740LLU;

	t72 = (x333<=(x334^(x335+x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = -800;
	static uint16_t x339 = 117U;
	volatile int64_t x340 = -1LL;
	volatile int32_t t73 = -492311902;

	t73 = (x337<=(x338^(x339+x340)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x341 = 5666U;
	volatile int16_t x342 = INT16_MIN;
	volatile int32_t x343 = -333608;
	int16_t x344 = INT16_MAX;
	volatile int32_t t74 = 12856;

	t74 = (x341<=(x342^(x343+x344)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = 13;
	int8_t x350 = -1;
	volatile int32_t t75 = -1;

	t75 = (x349<=(x350^(x351+x352)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = UINT8_MAX;
	uint8_t x354 = UINT8_MAX;
	uint32_t x355 = 12798U;
	int32_t t76 = -21632;

	t76 = (x353<=(x354^(x355+x356)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x357 = -46429207LL;
	uint64_t x358 = 43202275228LLU;
	uint32_t x360 = UINT32_MAX;
	int32_t t77 = -1;

	t77 = (x357<=(x358^(x359+x360)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x361 = INT16_MAX;
	static int64_t x362 = -1LL;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = -1;
	volatile int32_t t78 = 914039695;

	t78 = (x361<=(x362^(x363+x364)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = INT8_MIN;
	uint32_t x366 = 1429509U;
	uint64_t x367 = 31387386LLU;
	volatile int32_t t79 = -315879;

	t79 = (x365<=(x366^(x367+x368)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 1U;
	uint16_t x371 = UINT16_MAX;

	t80 = (x369<=(x370^(x371+x372)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x373 = 45U;
	int64_t x374 = INT64_MIN;
	int64_t x375 = -3601015420738609LL;
	static volatile int32_t x376 = INT32_MAX;
	int32_t t81 = -39938;

	t81 = (x373<=(x374^(x375+x376)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint64_t x377 = UINT64_MAX;
	volatile int64_t x378 = -1LL;
	volatile uint64_t x379 = 63739308517LLU;
	int8_t x380 = -1;
	int32_t t82 = -107930477;

	t82 = (x377<=(x378^(x379+x380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x381 = 2269U;
	volatile int16_t x383 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;
	int32_t t83 = 7;

	t83 = (x381<=(x382^(x383+x384)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x386 = INT64_MIN;
	uint64_t x387 = 260301603136LLU;
	volatile int32_t t84 = 0;

	t84 = (x385<=(x386^(x387+x388)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = INT64_MIN;
	uint16_t x390 = 6617U;
	uint64_t x391 = 45822LLU;
	int64_t x392 = -1LL;
	static int32_t t85 = -10;

	t85 = (x389<=(x390^(x391+x392)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = -1LL;
	int8_t x394 = INT8_MAX;
	static volatile int16_t x396 = INT16_MAX;
	int32_t t86 = 369;

	t86 = (x393<=(x394^(x395+x396)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x398 = 2427259U;
	uint32_t x399 = 2U;
	int16_t x400 = INT16_MIN;
	static volatile int32_t t87 = -66040;

	t87 = (x397<=(x398^(x399+x400)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x401 = -1;
	int32_t x402 = -2;
	volatile int32_t x403 = INT32_MIN;
	volatile uint16_t x404 = 741U;
	volatile int32_t t88 = -137631;

	t88 = (x401<=(x402^(x403+x404)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x406 = UINT64_MAX;
	int64_t x407 = 435596267995160206LL;
	static volatile int32_t t89 = -15709;

	t89 = (x405<=(x406^(x407+x408)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x409 = 1546U;
	volatile uint32_t x410 = 69480U;
	volatile int8_t x411 = INT8_MAX;
	volatile int32_t t90 = 299371327;

	t90 = (x409<=(x410^(x411+x412)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = 1596233277429LLU;
	static int32_t x418 = INT32_MAX;
	volatile uint16_t x419 = UINT16_MAX;
	int8_t x420 = INT8_MIN;
	int32_t t91 = 0;

	t91 = (x417<=(x418^(x419+x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x421 = 0;
	int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	int32_t x424 = INT32_MIN;

	t92 = (x421<=(x422^(x423+x424)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x426 = UINT32_MAX;
	uint8_t x427 = 3U;
	uint64_t x428 = 1679942263521695LLU;
	volatile int32_t t93 = -18470;

	t93 = (x425<=(x426^(x427+x428)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	static int64_t x431 = 32522LL;
	int8_t x432 = INT8_MIN;
	volatile int32_t t94 = -81172;

	t94 = (x429<=(x430^(x431+x432)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x433 = -1;
	static int8_t x434 = INT8_MIN;
	uint8_t x436 = 10U;
	int32_t t95 = 283686;

	t95 = (x433<=(x434^(x435+x436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = -2370972310LL;
	uint8_t x438 = UINT8_MAX;
	volatile uint32_t x439 = 510513U;
	static int16_t x440 = INT16_MIN;
	static int32_t t96 = 497910487;

	t96 = (x437<=(x438^(x439+x440)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	int32_t t97 = 323476;

	t97 = (x441<=(x442^(x443+x444)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x445 = UINT8_MAX;
	uint64_t x446 = 2516LLU;
	volatile int16_t x447 = 22;

	t98 = (x445<=(x446^(x447+x448)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x453 = -1519;
	int64_t x454 = INT64_MIN;
	volatile int64_t x455 = -8597LL;
	int64_t x456 = INT64_MAX;
	static volatile int32_t t99 = -10;

	t99 = (x453<=(x454^(x455+x456)));

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

