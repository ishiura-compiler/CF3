#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MAX;
int32_t t0 = 10593335;
uint16_t x6 = 837U;
int64_t x24 = INT64_MIN;
static volatile int64_t x25 = -3199254310450727LL;
uint8_t x26 = UINT8_MAX;
uint64_t x28 = 3882887LLU;
int16_t x29 = -10;
int8_t x30 = INT8_MIN;
uint16_t x32 = 15U;
uint16_t x37 = 92U;
int8_t x41 = INT8_MIN;
volatile int32_t t11 = -3570;
volatile int32_t t12 = -61333242;
int8_t x65 = INT8_MIN;
volatile uint64_t x74 = 121LLU;
volatile int32_t x87 = -1;
static int64_t x91 = INT64_MIN;
int32_t t24 = 27453;
uint8_t x118 = 9U;
uint8_t x123 = UINT8_MAX;
static int16_t x124 = -1;
uint16_t x129 = 3726U;
int64_t x141 = 6263999LL;
uint64_t x155 = 8783046016LLU;
int64_t x156 = INT64_MAX;
static volatile uint16_t x159 = 21U;
volatile int32_t t34 = 12788;
int8_t x167 = -1;
static int8_t x168 = INT8_MIN;
int8_t x169 = INT8_MIN;
static volatile int32_t t37 = 2160;
static int16_t x174 = INT16_MIN;
static volatile int16_t x176 = 1;
volatile int32_t x182 = INT32_MIN;
int64_t x185 = 2680840504LL;
int32_t x188 = INT32_MAX;
int32_t x193 = -1;
int32_t x200 = -137976;
volatile int32_t t44 = 23304161;
int16_t x201 = INT16_MAX;
int8_t x219 = INT8_MIN;
volatile int32_t t47 = 234;
static int32_t t50 = 2487;
int32_t x240 = INT32_MAX;
int8_t x243 = INT8_MIN;
int64_t x245 = -897LL;
static int64_t x247 = INT64_MIN;
volatile int16_t x248 = -1;
static volatile int16_t x249 = 1;
int32_t x253 = -1031172164;
int8_t x256 = INT8_MIN;
int32_t t56 = 181954167;
int16_t x266 = INT16_MIN;
static int8_t x270 = 0;
volatile uint32_t x273 = 12U;
static int32_t t61 = 418966;
int64_t x284 = INT64_MIN;
uint8_t x286 = UINT8_MAX;
volatile int32_t t63 = -4857;
int8_t x289 = INT8_MIN;
int64_t x290 = -1LL;
int64_t x291 = 205219938184119LL;
volatile int8_t x304 = INT8_MIN;
uint32_t x309 = UINT32_MAX;
int64_t x310 = -1LL;
static int8_t x311 = INT8_MIN;
static int64_t x314 = 109664869288LL;
uint32_t x316 = UINT32_MAX;
static volatile int16_t x324 = 77;
uint32_t x327 = 6U;
static volatile int16_t x335 = -1;
uint32_t x338 = 5842003U;
int8_t x347 = INT8_MIN;
int64_t x348 = -18081544081LL;
volatile int8_t x354 = INT8_MIN;
int32_t x358 = INT32_MIN;
int64_t x361 = INT64_MAX;
volatile int32_t t80 = -3091;
int64_t x369 = -1LL;
static int64_t x374 = -44543462LL;
uint64_t x379 = 172593861375804261LLU;
static int32_t t85 = 4636816;
static int32_t x386 = 126;
volatile uint8_t x393 = 24U;
volatile int32_t t87 = -243;
int32_t x399 = INT32_MIN;
volatile int32_t t90 = -101582;
uint32_t x409 = 7U;
int16_t x411 = -1;
int64_t x415 = -1LL;
int32_t t92 = -5131;
int16_t x417 = INT16_MAX;
volatile int32_t x418 = -548350;
uint16_t x422 = 25U;
int8_t x427 = INT8_MIN;
int16_t x428 = INT16_MIN;
volatile int32_t t96 = -82;
volatile int16_t x433 = -25;
int32_t x439 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint32_t x2 = 2736U;
	int8_t x3 = INT8_MIN;

	t0 = (x1<((x2/x3)-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	uint16_t x7 = 12U;
	int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -69906;

	t1 = (x5<((x6/x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	uint32_t x10 = 0U;
	static int16_t x11 = 53;
	int8_t x12 = -1;
	volatile int32_t t2 = 8389923;

	t2 = (x9<((x10/x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int8_t x14 = 3;
	static int8_t x15 = 1;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = -90701041;

	t3 = (x13<((x14/x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -12410;
	int32_t x18 = INT32_MAX;
	int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -343863;

	t4 = (x17<((x18/x19)-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 3947295531327239LLU;
	uint64_t x22 = 125782080LLU;
	uint64_t x23 = UINT64_MAX;
	volatile int32_t t5 = 854082414;

	t5 = (x21<((x22/x23)-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x27 = 3370U;
	volatile int32_t t6 = -15530;

	t6 = (x25<((x26/x27)-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x31 = 192;
	volatile int32_t t7 = -1;

	t7 = (x29<((x30/x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 2U;
	int8_t x34 = -1;
	uint8_t x35 = 1U;
	static int8_t x36 = INT8_MAX;
	int32_t t8 = -4105072;

	t8 = (x33<((x34/x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x38 = 1;
	volatile int8_t x39 = 1;
	int32_t x40 = INT32_MAX;
	static volatile int32_t t9 = 14576552;

	t9 = (x37<((x38/x39)-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	volatile int16_t x43 = -1;
	static volatile int8_t x44 = INT8_MIN;
	int32_t t10 = 1345976;

	t10 = (x41<((x42/x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = UINT16_MAX;
	int8_t x47 = -1;
	int64_t x48 = -20969LL;

	t11 = (x45<((x46/x47)-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 1;
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MIN;

	t12 = (x49<((x50/x51)-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 287;
	int8_t x54 = 23;
	static uint8_t x55 = 73U;
	static uint64_t x56 = UINT64_MAX;
	volatile int32_t t13 = 9;

	t13 = (x53<((x54/x55)-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	int64_t x58 = -13632113832449LL;
	int64_t x59 = INT64_MIN;
	int64_t x60 = 659280420514LL;
	int32_t t14 = -7;

	t14 = (x57<((x58/x59)-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x66 = 1915343354U;
	static volatile int8_t x67 = -1;
	int8_t x68 = 1;
	volatile int32_t t15 = 2164394;

	t15 = (x65<((x66/x67)-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MAX;
	uint8_t x75 = UINT8_MAX;
	uint16_t x76 = 1934U;
	volatile int32_t t16 = 1;

	t16 = (x73<((x74/x75)-x76));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	int16_t x80 = INT16_MAX;
	volatile int32_t t17 = -173;

	t17 = (x77<((x78/x79)-x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	volatile int16_t x82 = -1;
	int16_t x83 = INT16_MAX;
	static int8_t x84 = -19;
	volatile int32_t t18 = -1709849;

	t18 = (x81<((x82/x83)-x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x85 = -1;
	uint64_t x86 = 262853406649909971LLU;
	int8_t x88 = INT8_MIN;
	volatile int32_t t19 = -13;

	t19 = (x85<((x86/x87)-x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = INT64_MIN;
	uint64_t x90 = 58032248129438653LLU;
	int8_t x92 = -14;
	volatile int32_t t20 = 42;

	t20 = (x89<((x90/x91)-x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x93 = UINT32_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 1354;

	t21 = (x93<((x94/x95)-x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x97 = INT64_MIN;
	int64_t x98 = 181LL;
	int16_t x99 = INT16_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t22 = -29;

	t22 = (x97<((x98/x99)-x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = 0;
	volatile int16_t x110 = -826;
	volatile int8_t x111 = INT8_MAX;
	int64_t x112 = 11LL;
	static int32_t t23 = 1;

	t23 = (x109<((x110/x111)-x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = 15;
	int8_t x114 = -1;
	int8_t x115 = INT8_MAX;
	volatile int16_t x116 = INT16_MIN;

	t24 = (x113<((x114/x115)-x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 7546U;
	uint8_t x119 = 15U;
	static uint32_t x120 = 17578386U;
	static int32_t t25 = -628469013;

	t25 = (x117<((x118/x119)-x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x121 = 3U;
	int32_t x122 = -282309300;
	int32_t t26 = 6320;

	t26 = (x121<((x122/x123)-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x130 = 1;
	static uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t27 = 1477983;

	t27 = (x129<((x130/x131)-x132));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x133 = 27U;
	uint32_t x134 = 59U;
	int64_t x135 = INT64_MAX;
	int64_t x136 = -108400LL;
	int32_t t28 = 0;

	t28 = (x133<((x134/x135)-x136));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x137 = -791165854LL;
	static volatile int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	int16_t x140 = 3;
	volatile int32_t t29 = 387595313;

	t29 = (x137<((x138/x139)-x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x142 = UINT8_MAX;
	int32_t x143 = -1;
	volatile uint16_t x144 = 4326U;
	static volatile int32_t t30 = 180656854;

	t30 = (x141<((x142/x143)-x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 203968652861710LLU;
	static int16_t x146 = INT16_MIN;
	uint8_t x147 = UINT8_MAX;
	uint16_t x148 = UINT16_MAX;
	static int32_t t31 = 139;

	t31 = (x145<((x146/x147)-x148));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = 893U;
	static int8_t x150 = INT8_MAX;
	static volatile int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int32_t t32 = 3567;

	t32 = (x149<((x150/x151)-x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 2045U;
	uint16_t x154 = 902U;
	volatile int32_t t33 = -7;

	t33 = (x153<((x154/x155)-x156));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x157 = -14060;
	uint16_t x158 = 8U;
	static int8_t x160 = INT8_MIN;

	t34 = (x157<((x158/x159)-x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = 1;
	uint16_t x162 = 5421U;
	int64_t x163 = 2796327963843LL;
	uint8_t x164 = 96U;
	int32_t t35 = 122;

	t35 = (x161<((x162/x163)-x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x165 = 18LLU;
	volatile int16_t x166 = INT16_MIN;
	volatile int32_t t36 = 16488359;

	t36 = (x165<((x166/x167)-x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x170 = 553689036509385LLU;
	int16_t x171 = -1;
	int64_t x172 = INT64_MAX;

	t37 = (x169<((x170/x171)-x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = -1;
	int16_t x175 = -1;
	static volatile int32_t t38 = 427;

	t38 = (x173<((x174/x175)-x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = 24419904060485LL;
	volatile int32_t x178 = -5;
	volatile uint16_t x179 = UINT16_MAX;
	static volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t39 = 178194720;

	t39 = (x177<((x178/x179)-x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = -88;
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MAX;
	volatile int32_t t40 = -1257690;

	t40 = (x181<((x182/x183)-x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x186 = INT32_MIN;
	int64_t x187 = INT64_MIN;
	int32_t t41 = -50;

	t41 = (x185<((x186/x187)-x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile int8_t x190 = 1;
	volatile uint8_t x191 = 4U;
	uint64_t x192 = 1143316LLU;
	static volatile int32_t t42 = 9;

	t42 = (x189<((x190/x191)-x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x194 = INT8_MAX;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 0U;
	static volatile int32_t t43 = 713430304;

	t43 = (x193<((x194/x195)-x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x197 = INT16_MAX;
	volatile int64_t x198 = -5841289631328LL;
	int32_t x199 = INT32_MAX;

	t44 = (x197<((x198/x199)-x200));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x202 = 27571U;
	static uint16_t x203 = 2U;
	int16_t x204 = -1;
	volatile int32_t t45 = -17;

	t45 = (x201<((x202/x203)-x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x205 = 1532U;
	uint32_t x206 = 17637U;
	uint16_t x207 = UINT16_MAX;
	volatile int8_t x208 = 10;
	int32_t t46 = 3896;

	t46 = (x205<((x206/x207)-x208));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = 1592U;
	int8_t x218 = INT8_MIN;
	volatile uint8_t x220 = 3U;

	t47 = (x217<((x218/x219)-x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MAX;
	volatile int64_t x223 = -1LL;
	uint64_t x224 = 180LLU;
	int32_t t48 = 3659;

	t48 = (x221<((x222/x223)-x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = -1;
	static volatile int64_t x226 = INT64_MIN;
	volatile int64_t x227 = INT64_MAX;
	int16_t x228 = 5767;
	static int32_t t49 = -1;

	t49 = (x225<((x226/x227)-x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x229 = 52;
	int64_t x230 = -1LL;
	volatile int16_t x231 = 191;
	volatile int16_t x232 = -1;

	t50 = (x229<((x230/x231)-x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x233 = 14600LLU;
	uint64_t x234 = 1748238242881962289LLU;
	uint64_t x235 = 123443216LLU;
	int64_t x236 = -24945392LL;
	static int32_t t51 = 836;

	t51 = (x233<((x234/x235)-x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x237 = UINT8_MAX;
	volatile int32_t x238 = -1;
	uint16_t x239 = 32467U;
	volatile int32_t t52 = -3;

	t52 = (x237<((x238/x239)-x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x241 = INT8_MAX;
	int64_t x242 = -1LL;
	int8_t x244 = INT8_MAX;
	int32_t t53 = -375684357;

	t53 = (x241<((x242/x243)-x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x246 = 105U;
	static volatile int32_t t54 = -1332;

	t54 = (x245<((x246/x247)-x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x250 = -279385391182183LL;
	uint16_t x251 = 314U;
	uint16_t x252 = UINT16_MAX;
	int32_t t55 = 25;

	t55 = (x249<((x250/x251)-x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x254 = -1;
	static int64_t x255 = -15660969841064727LL;

	t56 = (x253<((x254/x255)-x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x257 = 4076667838579179LL;
	uint16_t x258 = 240U;
	int16_t x259 = INT16_MIN;
	int16_t x260 = 14;
	volatile int32_t t57 = 40220603;

	t57 = (x257<((x258/x259)-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x261 = 886U;
	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = 22918LLU;
	int64_t x264 = 3375090172547LL;
	int32_t t58 = 39126;

	t58 = (x261<((x262/x263)-x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x265 = INT64_MIN;
	int8_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	static volatile int32_t t59 = -1700;

	t59 = (x265<((x266/x267)-x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = 1749;
	volatile int64_t x271 = -209392LL;
	int8_t x272 = INT8_MIN;
	int32_t t60 = 34;

	t60 = (x269<((x270/x271)-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x274 = 62025951U;
	int64_t x275 = INT64_MAX;
	volatile int16_t x276 = -13;

	t61 = (x273<((x274/x275)-x276));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = -3;
	int64_t x282 = -1209LL;
	uint16_t x283 = 52U;
	static int32_t t62 = -213242;

	t62 = (x281<((x282/x283)-x284));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 32;
	int64_t x287 = INT64_MAX;
	uint64_t x288 = 2LLU;

	t63 = (x285<((x286/x287)-x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x292 = INT8_MIN;
	int32_t t64 = -275972188;

	t64 = (x289<((x290/x291)-x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = INT8_MIN;
	uint32_t x294 = 34U;
	static int32_t x295 = -2856713;
	int16_t x296 = -416;
	volatile int32_t t65 = 7;

	t65 = (x293<((x294/x295)-x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	volatile int32_t x298 = -1;
	int32_t x299 = 7936673;
	volatile int8_t x300 = INT8_MIN;
	volatile int32_t t66 = -207;

	t66 = (x297<((x298/x299)-x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x301 = 4700U;
	volatile uint32_t x302 = 597726288U;
	int8_t x303 = INT8_MIN;
	int32_t t67 = -2963305;

	t67 = (x301<((x302/x303)-x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = 1;
	uint8_t x306 = 1U;
	int32_t x307 = -1;
	static int8_t x308 = 5;
	int32_t t68 = -5120073;

	t68 = (x305<((x306/x307)-x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x312 = -1;
	int32_t t69 = 472464325;

	t69 = (x309<((x310/x311)-x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x313 = INT8_MIN;
	int8_t x315 = INT8_MIN;
	static volatile int32_t t70 = 0;

	t70 = (x313<((x314/x315)-x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x321 = -1;
	static int8_t x322 = INT8_MIN;
	static uint16_t x323 = 2U;
	int32_t t71 = -48;

	t71 = (x321<((x322/x323)-x324));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x325 = 6899310U;
	int8_t x326 = INT8_MIN;
	static volatile int64_t x328 = INT64_MAX;
	int32_t t72 = -356;

	t72 = (x325<((x326/x327)-x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x329 = INT32_MIN;
	static int16_t x330 = INT16_MAX;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = -1;
	volatile int32_t t73 = -1;

	t73 = (x329<((x330/x331)-x332));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = -1;
	int8_t x334 = INT8_MIN;
	int32_t x336 = -1;
	int32_t t74 = -6;

	t74 = (x333<((x334/x335)-x336));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x337 = 8478237880161034LLU;
	int32_t x339 = 1;
	static int16_t x340 = INT16_MAX;
	volatile int32_t t75 = -1;

	t75 = (x337<((x338/x339)-x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = 42U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = -242480923;
	int64_t x344 = 15569382057914LL;
	volatile int32_t t76 = 26792;

	t76 = (x341<((x342/x343)-x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x346 = -3;
	int32_t t77 = 3;

	t77 = (x345<((x346/x347)-x348));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MIN;
	static int8_t x355 = INT8_MAX;
	uint32_t x356 = 3735U;
	int32_t t78 = -50663768;

	t78 = (x353<((x354/x355)-x356));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x357 = 41526427205LLU;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t79 = 1;

	t79 = (x357<((x358/x359)-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x362 = 668LL;
	volatile int8_t x363 = 2;
	uint16_t x364 = 402U;

	t80 = (x361<((x362/x363)-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = INT8_MAX;
	volatile int32_t x367 = -1;
	int8_t x368 = INT8_MAX;
	volatile int32_t t81 = -76;

	t81 = (x365<((x366/x367)-x368));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x370 = UINT64_MAX;
	static volatile int16_t x371 = -107;
	static int16_t x372 = INT16_MAX;
	volatile int32_t t82 = -1;

	t82 = (x369<((x370/x371)-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x373 = 7660805968LL;
	int64_t x375 = INT64_MAX;
	uint64_t x376 = UINT64_MAX;
	int32_t t83 = 17101348;

	t83 = (x373<((x374/x375)-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x377 = 31567U;
	volatile int32_t x378 = INT32_MIN;
	static uint64_t x380 = UINT64_MAX;
	static int32_t t84 = -90872;

	t84 = (x377<((x378/x379)-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x381 = 22019U;
	int32_t x382 = -209727;
	int16_t x383 = -1;
	volatile uint64_t x384 = UINT64_MAX;

	t85 = (x381<((x382/x383)-x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x385 = INT32_MIN;
	volatile int32_t x387 = INT32_MIN;
	static volatile int64_t x388 = -1LL;
	volatile int32_t t86 = -197;

	t86 = (x385<((x386/x387)-x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x394 = INT8_MAX;
	static uint64_t x395 = 123951077162935LLU;
	uint16_t x396 = UINT16_MAX;

	t87 = (x393<((x394/x395)-x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x397 = 1345491LLU;
	uint16_t x398 = 21495U;
	int8_t x400 = -22;
	static int32_t t88 = 20419;

	t88 = (x397<((x398/x399)-x400));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x401 = INT32_MAX;
	int64_t x402 = -1LL;
	uint32_t x403 = 2043858U;
	int64_t x404 = 17225048514549172LL;
	int32_t t89 = 40564997;

	t89 = (x401<((x402/x403)-x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x405 = 3908364LLU;
	static int16_t x406 = INT16_MAX;
	uint8_t x407 = 9U;
	static volatile int64_t x408 = INT64_MAX;

	t90 = (x405<((x406/x407)-x408));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x410 = -20500201;
	volatile int32_t x412 = -62128277;
	int32_t t91 = 315077744;

	t91 = (x409<((x410/x411)-x412));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = 1U;
	int16_t x414 = 7768;
	int8_t x416 = -13;

	t92 = (x413<((x414/x415)-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x419 = 734581LLU;
	int32_t x420 = INT32_MIN;
	volatile int32_t t93 = -88082;

	t93 = (x417<((x418/x419)-x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x421 = INT8_MIN;
	volatile int8_t x423 = INT8_MIN;
	uint8_t x424 = 5U;
	int32_t t94 = -84960;

	t94 = (x421<((x422/x423)-x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = INT16_MIN;
	static volatile int64_t x426 = INT64_MIN;
	static volatile int32_t t95 = -29365;

	t95 = (x425<((x426/x427)-x428));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = -7;
	uint64_t x430 = UINT64_MAX;
	int8_t x431 = INT8_MAX;
	volatile int8_t x432 = INT8_MIN;

	t96 = (x429<((x430/x431)-x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x434 = INT32_MIN;
	volatile int16_t x435 = INT16_MAX;
	static uint64_t x436 = UINT64_MAX;
	volatile int32_t t97 = -1558014;

	t97 = (x433<((x434/x435)-x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x437 = 82U;
	static volatile uint8_t x438 = 29U;
	int32_t x440 = INT32_MIN;
	int32_t t98 = 181247206;

	t98 = (x437<((x438/x439)-x440));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x441 = 0U;
	int32_t x442 = INT32_MIN;
	static int64_t x443 = INT64_MAX;
	static uint64_t x444 = 24101671556658845LLU;
	volatile int32_t t99 = 78400;

	t99 = (x441<((x442/x443)-x444));

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

