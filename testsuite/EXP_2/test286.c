#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x10 = 77U;
volatile uint64_t x11 = 9495793836400442LLU;
int16_t x12 = INT16_MIN;
int32_t x17 = INT32_MAX;
int8_t x19 = -1;
int32_t t2 = 6765;
static int16_t x23 = 568;
int64_t x24 = 492110852566565LL;
static volatile int32_t x25 = -1;
int16_t x31 = -8093;
int32_t t6 = -1052;
static int8_t x37 = 1;
volatile int32_t t7 = -480442810;
uint8_t x53 = UINT8_MAX;
volatile int8_t x54 = INT8_MIN;
volatile int8_t x55 = INT8_MIN;
static int32_t t11 = -743;
int32_t t12 = 15832;
int8_t x70 = INT8_MIN;
static int8_t x76 = INT8_MIN;
int64_t x79 = -598304LL;
uint16_t x82 = 14556U;
volatile int32_t t17 = -84305776;
int32_t t18 = 12783955;
static int8_t x102 = -1;
uint16_t x104 = UINT16_MAX;
volatile int16_t x105 = -2;
static uint16_t x108 = 8493U;
static volatile int32_t t21 = -1;
volatile int32_t x109 = INT32_MIN;
volatile int64_t x120 = INT64_MIN;
volatile int64_t t24 = INT64_MIN;
int16_t x124 = -216;
volatile int32_t x140 = INT32_MIN;
static volatile int32_t t27 = INT32_MIN;
uint16_t x153 = 6981U;
static uint16_t x155 = 1U;
static uint32_t x157 = 3034449U;
static volatile int32_t t32 = 528631927;
static volatile uint16_t x164 = UINT16_MAX;
volatile int32_t t33 = 18451;
uint32_t x173 = 30631U;
volatile int64_t x174 = -1LL;
static int8_t x179 = -9;
volatile int32_t x182 = -1;
uint16_t x183 = UINT16_MAX;
volatile uint16_t x191 = 21456U;
static int64_t x199 = 50762881881LL;
int8_t x200 = -1;
volatile int8_t x201 = INT8_MIN;
volatile int16_t x202 = -7;
volatile uint16_t x204 = 799U;
int32_t x213 = INT32_MIN;
static volatile uint16_t x214 = 1U;
static volatile int32_t t45 = -1;
uint64_t x219 = 262475162858746924LLU;
uint16_t x221 = 255U;
int32_t x222 = -1945005;
int16_t x229 = INT16_MIN;
uint32_t x231 = 30379699U;
int32_t x235 = INT32_MAX;
uint8_t x239 = UINT8_MAX;
volatile int8_t x247 = INT8_MIN;
uint64_t x248 = 1280858124LLU;
uint64_t x250 = UINT64_MAX;
int8_t x257 = INT8_MAX;
static uint64_t x259 = UINT64_MAX;
int16_t x262 = INT16_MIN;
volatile int32_t t59 = -39578;
int32_t x278 = -93909;
volatile uint64_t t62 = 40LLU;
uint8_t x289 = 57U;
uint8_t x299 = UINT8_MAX;
volatile int32_t x302 = 1809;
int8_t x317 = -1;
static volatile int32_t x343 = -1;
int64_t t78 = -63LL;
int32_t t82 = -3719;
int16_t x375 = INT16_MIN;
int64_t x379 = -22919039752973383LL;
int64_t x380 = INT64_MAX;
volatile int64_t t85 = 1546841072861880LL;
volatile int64_t t86 = INT64_MIN;
int16_t x387 = INT16_MAX;
int8_t x388 = INT8_MAX;
static int64_t x393 = -1620587773080LL;
static int16_t x394 = 500;
static int64_t x401 = -1LL;
int32_t x404 = -1;
int16_t x405 = -721;
static int64_t x407 = -1LL;
uint16_t x408 = 1U;
uint64_t x409 = UINT64_MAX;
uint8_t x420 = 65U;
uint16_t x423 = 32U;
int32_t t95 = 28220314;
volatile int32_t x425 = INT32_MAX;
int32_t t97 = 1070;
int64_t x440 = -1LL;
int64_t t98 = -4298753060LL;
int64_t x444 = 1739LL;


void f0(void) {
	static uint8_t x1 = 0U;
	static int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	uint64_t x4 = 2307140020LLU;
	uint64_t t0 = 55877760454696163LLU;

	t0 = ((x1<(x2-x3))^x4);

	if (t0 != 2307140021LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 20U;
	int32_t t1 = -3091;

	t1 = ((x9<(x10-x11))^x12);

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = -1;
	int16_t x20 = INT16_MIN;

	t2 = ((x17<(x18-x19))^x20);

	if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x21 = INT8_MIN;
	int16_t x22 = 18;
	int64_t t3 = -739849LL;

	t3 = ((x21<(x22-x23))^x24);

	if (t3 != 492110852566565LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x26 = INT16_MIN;
	static uint8_t x27 = UINT8_MAX;
	volatile int8_t x28 = INT8_MIN;
	volatile int32_t t4 = -379;

	t4 = ((x25<(x26-x27))^x28);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 10;
	volatile int16_t x30 = -1;
	static int8_t x32 = 63;
	int32_t t5 = -398154696;

	t5 = ((x29<(x30-x31))^x32);

	if (t5 != 62) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MAX;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	uint16_t x36 = 3567U;

	t6 = ((x33<(x34-x35))^x36);

	if (t6 != 3567) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = UINT16_MAX;
	static int16_t x39 = INT16_MIN;
	int16_t x40 = -4031;

	t7 = ((x37<(x38-x39))^x40);

	if (t7 != -4032) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x42 = -1;
	static uint8_t x43 = 7U;
	int8_t x44 = INT8_MIN;
	volatile int32_t t8 = 95607;

	t8 = ((x41<(x42-x43))^x44);

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = ((x45<(x46-x47))^x48);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = 9767LLU;
	int64_t x51 = INT64_MIN;
	int32_t x52 = -47251;
	volatile int32_t t10 = 1234729;

	t10 = ((x49<(x50-x51))^x52);

	if (t10 != -47252) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x56 = -1;

	t11 = ((x53<(x54-x55))^x56);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MIN;

	t12 = ((x57<(x58-x59))^x60);

	if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x65 = 224U;
	static uint16_t x66 = 22U;
	int8_t x67 = INT8_MIN;
	uint64_t x68 = UINT64_MAX;
	static uint64_t t13 = UINT64_MAX;

	t13 = ((x65<(x66-x67))^x68);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -4477497888444035557LL;
	volatile int64_t x71 = INT64_MIN;
	uint16_t x72 = UINT16_MAX;
	int32_t t14 = 9;

	t14 = ((x69<(x70-x71))^x72);

	if (t14 != 65534) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = -1691930689550909642LL;
	uint8_t x74 = 18U;
	volatile uint16_t x75 = 22U;
	static int32_t t15 = 941673;

	t15 = ((x73<(x74-x75))^x76);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	int64_t x80 = INT64_MIN;
	int64_t t16 = 1LL;

	t16 = ((x77<(x78-x79))^x80);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = 1U;
	int8_t x83 = INT8_MAX;
	int8_t x84 = -4;

	t17 = ((x81<(x82-x83))^x84);

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = 107112290409096LL;
	int64_t x91 = -7779912145868LL;
	static int16_t x92 = -1;

	t18 = ((x89<(x90-x91))^x92);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = INT8_MIN;
	volatile int8_t x94 = INT8_MAX;
	int16_t x95 = -2217;
	int32_t x96 = 2;
	int32_t t19 = -22;

	t19 = ((x93<(x94-x95))^x96);

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x101 = 85U;
	int16_t x103 = 1589;
	int32_t t20 = -2;

	t20 = ((x101<(x102-x103))^x104);

	if (t20 != 65535) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = INT8_MIN;
	volatile int64_t x107 = INT64_MIN;

	t21 = ((x105<(x106-x107))^x108);

	if (t21 != 8492) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x110 = 24421957819223LLU;
	int64_t x111 = -1LL;
	static volatile int32_t x112 = INT32_MIN;
	int32_t t22 = INT32_MIN;

	t22 = ((x109<(x110-x111))^x112);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	volatile int32_t x115 = INT32_MIN;
	volatile int32_t x116 = -1;
	volatile int32_t t23 = -6580144;

	t23 = ((x113<(x114-x115))^x116);

	if (t23 != -2) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static int8_t x119 = -2;

	t24 = ((x117<(x118-x119))^x120);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x122 = 4190557787983210378LLU;
	static int16_t x123 = -54;
	volatile int32_t t25 = -60;

	t25 = ((x121<(x122-x123))^x124);

	if (t25 != -215) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	int8_t x135 = -4;
	static int64_t x136 = INT64_MAX;
	int64_t t26 = INT64_MAX;

	t26 = ((x133<(x134-x135))^x136);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 324LLU;
	static volatile int8_t x138 = INT8_MAX;
	int64_t x139 = -1LL;

	t27 = ((x137<(x138-x139))^x140);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -1943016982670248LL;
	int64_t x142 = -1LL;
	uint16_t x143 = 185U;
	int64_t x144 = -148817945149789LL;
	volatile int64_t t28 = -7195042778677725LL;

	t28 = ((x141<(x142-x143))^x144);

	if (t28 != -148817945149790LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x145 = INT16_MIN;
	volatile int32_t x146 = INT32_MAX;
	uint8_t x147 = 13U;
	int64_t x148 = INT64_MIN;
	volatile int64_t t29 = -13993LL;

	t29 = ((x145<(x146-x147))^x148);

	if (t29 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x149 = UINT8_MAX;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = -1LL;
	int64_t t30 = -17439603327644LL;

	t30 = ((x149<(x150-x151))^x152);

	if (t30 != -2LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x154 = 99U;
	volatile int32_t x156 = INT32_MAX;
	int32_t t31 = INT32_MAX;

	t31 = ((x153<(x154-x155))^x156);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x158 = INT32_MAX;
	uint16_t x159 = UINT16_MAX;
	int32_t x160 = INT32_MIN;

	t32 = ((x157<(x158-x159))^x160);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 1;
	int64_t x162 = -1LL;
	uint16_t x163 = 22207U;

	t33 = ((x161<(x162-x163))^x164);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x169 = -534318;
	uint16_t x170 = 200U;
	int8_t x171 = -4;
	int32_t x172 = 0;
	int32_t t34 = 117410292;

	t34 = ((x169<(x170-x171))^x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x175 = 17U;
	volatile int8_t x176 = 27;
	int32_t t35 = -624300027;

	t35 = ((x173<(x174-x175))^x176);

	if (t35 != 27) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x177 = 17197U;
	int16_t x178 = -1730;
	int8_t x180 = -6;
	int32_t t36 = 1;

	t36 = ((x177<(x178-x179))^x180);

	if (t36 != -6) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MIN;
	int64_t x184 = INT64_MIN;
	int64_t t37 = INT64_MIN;

	t37 = ((x181<(x182-x183))^x184);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MIN;
	uint64_t x187 = 16195395141493LLU;
	int16_t x188 = -1;
	static volatile int32_t t38 = -258379129;

	t38 = ((x185<(x186-x187))^x188);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x189 = UINT16_MAX;
	volatile uint16_t x190 = 499U;
	uint16_t x192 = 24U;
	volatile int32_t t39 = -1018;

	t39 = ((x189<(x190-x191))^x192);

	if (t39 != 24) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x193 = INT32_MAX;
	static int16_t x194 = 17;
	static volatile int16_t x195 = INT16_MIN;
	uint32_t x196 = UINT32_MAX;
	uint32_t t40 = UINT32_MAX;

	t40 = ((x193<(x194-x195))^x196);

	if (t40 != UINT32_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	volatile uint16_t x198 = 2U;
	int32_t t41 = -4;

	t41 = ((x197<(x198-x199))^x200);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x203 = 2502U;
	volatile int32_t t42 = -36601;

	t42 = ((x201<(x202-x203))^x204);

	if (t42 != 799) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x205 = INT16_MAX;
	uint16_t x206 = 4U;
	uint16_t x207 = 1U;
	volatile int32_t x208 = INT32_MIN;
	static int32_t t43 = INT32_MIN;

	t43 = ((x205<(x206-x207))^x208);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x209 = 25U;
	int32_t x210 = INT32_MAX;
	static uint8_t x211 = 25U;
	uint16_t x212 = 185U;
	int32_t t44 = -241373880;

	t44 = ((x209<(x210-x211))^x212);

	if (t44 != 184) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x215 = -1701;
	int8_t x216 = INT8_MIN;

	t45 = ((x213<(x214-x215))^x216);

	if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x218 = 4U;
	volatile int8_t x220 = INT8_MIN;
	volatile int32_t t46 = 2739687;

	t46 = ((x217<(x218-x219))^x220);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x223 = INT8_MIN;
	int8_t x224 = -9;
	int32_t t47 = 118200597;

	t47 = ((x221<(x222-x223))^x224);

	if (t47 != -9) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x225 = 3LLU;
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = INT32_MIN;
	static int64_t x228 = -20173899752LL;
	volatile int64_t t48 = 11403918824675929LL;

	t48 = ((x225<(x226-x227))^x228);

	if (t48 != -20173899751LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = INT16_MIN;
	int32_t x232 = -1;
	static int32_t t49 = -53989254;

	t49 = ((x229<(x230-x231))^x232);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = 10;
	static volatile int64_t x234 = INT64_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x233<(x234-x235))^x236);

	if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x237 = -1;
	volatile uint32_t x238 = 24102217U;
	int64_t x240 = -1LL;
	int64_t t51 = 17725LL;

	t51 = ((x237<(x238-x239))^x240);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = -1148;
	static int64_t x242 = INT64_MAX;
	volatile uint32_t x243 = 6109119U;
	int16_t x244 = INT16_MAX;
	volatile int32_t t52 = 15623403;

	t52 = ((x241<(x242-x243))^x244);

	if (t52 != 32766) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x245 = INT32_MIN;
	uint16_t x246 = 6U;
	uint64_t t53 = 7138400918LLU;

	t53 = ((x245<(x246-x247))^x248);

	if (t53 != 1280858125LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 2U;
	int32_t x251 = -1;
	int64_t x252 = INT64_MIN;
	int64_t t54 = INT64_MIN;

	t54 = ((x249<(x250-x251))^x252);

	if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MIN;
	static volatile int32_t x254 = INT32_MAX;
	uint32_t x255 = 1099953308U;
	int8_t x256 = -1;
	int32_t t55 = -10061;

	t55 = ((x253<(x254-x255))^x256);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x258 = 90LLU;
	volatile int32_t x260 = INT32_MIN;
	int32_t t56 = INT32_MIN;

	t56 = ((x257<(x258-x259))^x260);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = INT8_MIN;
	static int32_t x263 = INT32_MIN;
	uint8_t x264 = 52U;
	int32_t t57 = 1;

	t57 = ((x261<(x262-x263))^x264);

	if (t57 != 53) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = -31141220LL;
	uint8_t x266 = UINT8_MAX;
	volatile int32_t x267 = 134554963;
	int32_t x268 = 232596316;
	static int32_t t58 = 29778;

	t58 = ((x265<(x266-x267))^x268);

	if (t58 != 232596316) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -676;
	int64_t x270 = -1LL;
	volatile uint32_t x271 = 3426U;
	volatile int16_t x272 = INT16_MIN;

	t59 = ((x269<(x270-x271))^x272);

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = 51;
	int32_t x274 = -1;
	static uint8_t x275 = UINT8_MAX;
	int32_t x276 = INT32_MAX;
	int32_t t60 = INT32_MAX;

	t60 = ((x273<(x274-x275))^x276);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = -1;
	uint8_t x279 = 1U;
	int16_t x280 = INT16_MIN;
	int32_t t61 = -193578;

	t61 = ((x277<(x278-x279))^x280);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = 98067;
	volatile uint8_t x283 = 4U;
	static uint64_t x284 = 500638084881475013LLU;

	t62 = ((x281<(x282-x283))^x284);

	if (t62 != 500638084881475012LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x285 = UINT32_MAX;
	volatile int16_t x286 = INT16_MIN;
	static uint16_t x287 = 9133U;
	volatile uint64_t x288 = 49280206LLU;
	static uint64_t t63 = 6LLU;

	t63 = ((x285<(x286-x287))^x288);

	if (t63 != 49280206LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x290 = INT8_MIN;
	int64_t x291 = 180601364450LL;
	uint64_t x292 = 842839534736LLU;
	uint64_t t64 = 2482302728806295LLU;

	t64 = ((x289<(x290-x291))^x292);

	if (t64 != 842839534736LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x297 = INT16_MIN;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x300 = 0U;
	uint32_t t65 = 7436U;

	t65 = ((x297<(x298-x299))^x300);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x301 = -536011287;
	uint8_t x303 = 1U;
	int16_t x304 = INT16_MIN;
	volatile int32_t t66 = -59244775;

	t66 = ((x301<(x302-x303))^x304);

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x305 = -14;
	int32_t x306 = -1;
	int16_t x307 = -1;
	int32_t x308 = -1;
	int32_t t67 = 520584;

	t67 = ((x305<(x306-x307))^x308);

	if (t67 != -2) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x309 = 73199U;
	int16_t x310 = INT16_MIN;
	int16_t x311 = -1;
	volatile uint16_t x312 = UINT16_MAX;
	volatile int32_t t68 = -63;

	t68 = ((x309<(x310-x311))^x312);

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = INT16_MAX;
	int8_t x314 = -3;
	static uint8_t x315 = 1U;
	uint64_t x316 = 2LLU;
	volatile uint64_t t69 = 515011369LLU;

	t69 = ((x313<(x314-x315))^x316);

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x318 = -17593245;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 5LLU;
	volatile uint64_t t70 = 2221336LLU;

	t70 = ((x317<(x318-x319))^x320);

	if (t70 != 5LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x321 = 49U;
	volatile int64_t x322 = INT64_MIN;
	static volatile int64_t x323 = INT64_MIN;
	int8_t x324 = -4;
	static volatile int32_t t71 = 3505796;

	t71 = ((x321<(x322-x323))^x324);

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	static volatile uint64_t x326 = 3721LLU;
	int64_t x327 = 186310LL;
	volatile int64_t x328 = INT64_MAX;
	volatile int64_t t72 = INT64_MAX;

	t72 = ((x325<(x326-x327))^x328);

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MAX;
	static int8_t x331 = INT8_MAX;
	static volatile uint16_t x332 = 573U;
	volatile int32_t t73 = -227248;

	t73 = ((x329<(x330-x331))^x332);

	if (t73 != 572) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MAX;
	int64_t x334 = 9588573238LL;
	int64_t x335 = -90981LL;
	int8_t x336 = -1;
	volatile int32_t t74 = -102;

	t74 = ((x333<(x334-x335))^x336);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x337 = INT64_MIN;
	uint64_t x338 = UINT64_MAX;
	uint32_t x339 = 2U;
	int8_t x340 = 1;
	volatile int32_t t75 = -886;

	t75 = ((x337<(x338-x339))^x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x341 = 10U;
	int64_t x342 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;
	int32_t t76 = -1;

	t76 = ((x341<(x342-x343))^x344);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	uint16_t x346 = 1214U;
	int8_t x347 = INT8_MIN;
	volatile int8_t x348 = 39;
	volatile int32_t t77 = 0;

	t77 = ((x345<(x346-x347))^x348);

	if (t77 != 38) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x349 = UINT16_MAX;
	volatile uint8_t x350 = UINT8_MAX;
	uint32_t x351 = 31706U;
	int64_t x352 = -26740LL;

	t78 = ((x349<(x350-x351))^x352);

	if (t78 != -26739LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x353 = 3077263526241LLU;
	int8_t x354 = INT8_MIN;
	int16_t x355 = INT16_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t79 = -2413;

	t79 = ((x353<(x354-x355))^x356);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = INT8_MIN;
	static int64_t x358 = 5LL;
	volatile int64_t x359 = -1LL;
	static uint8_t x360 = UINT8_MAX;
	int32_t t80 = 21800;

	t80 = ((x357<(x358-x359))^x360);

	if (t80 != 254) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = INT16_MIN;
	volatile uint8_t x363 = UINT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t81 = -20628611;

	t81 = ((x361<(x362-x363))^x364);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x365 = INT32_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint32_t x367 = 9056339U;
	int8_t x368 = INT8_MAX;

	t82 = ((x365<(x366-x367))^x368);

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x369 = 124938151136LLU;
	uint32_t x370 = UINT32_MAX;
	uint32_t x371 = UINT32_MAX;
	volatile uint64_t x372 = 1478154590152LLU;
	volatile uint64_t t83 = 33311LLU;

	t83 = ((x369<(x370-x371))^x372);

	if (t83 != 1478154590152LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x373 = 805160U;
	static int16_t x374 = INT16_MIN;
	volatile int8_t x376 = INT8_MIN;
	static int32_t t84 = 168959;

	t84 = ((x373<(x374-x375))^x376);

	if (t84 != -128) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int16_t x378 = INT16_MIN;

	t85 = ((x377<(x378-x379))^x380);

	if (t85 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = INT16_MIN;
	static volatile int64_t x382 = 17297748LL;
	int64_t x383 = INT64_MAX;
	static int64_t x384 = INT64_MIN;

	t86 = ((x381<(x382-x383))^x384);

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 7238U;
	int8_t x386 = -1;
	volatile int32_t t87 = 2357852;

	t87 = ((x385<(x386-x387))^x388);

	if (t87 != 126) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x389 = 34;
	uint64_t x390 = UINT64_MAX;
	static int16_t x391 = INT16_MIN;
	static uint32_t x392 = 3U;
	uint32_t t88 = 1539U;

	t88 = ((x389<(x390-x391))^x392);

	if (t88 != 2U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x395 = INT64_MAX;
	int32_t x396 = INT32_MIN;
	static int32_t t89 = INT32_MIN;

	t89 = ((x393<(x394-x395))^x396);

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x402 = -321;
	static uint32_t x403 = UINT32_MAX;
	volatile int32_t t90 = -46;

	t90 = ((x401<(x402-x403))^x404);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x406 = -1;
	int32_t t91 = 1982740;

	t91 = ((x405<(x406-x407))^x408);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x410 = 1185317LLU;
	int8_t x411 = INT8_MIN;
	volatile int64_t x412 = 157733009011113LL;
	int64_t t92 = 33577079022LL;

	t92 = ((x409<(x410-x411))^x412);

	if (t92 != 157733009011113LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x413 = UINT32_MAX;
	uint64_t x414 = 118251779290976LLU;
	int32_t x415 = INT32_MIN;
	static volatile int16_t x416 = INT16_MIN;
	volatile int32_t t93 = 7038;

	t93 = ((x413<(x414-x415))^x416);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -7;
	uint8_t x418 = UINT8_MAX;
	uint8_t x419 = 27U;
	volatile int32_t t94 = 0;

	t94 = ((x417<(x418-x419))^x420);

	if (t94 != 64) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = -202;
	int32_t x422 = -1;
	int32_t x424 = -1;

	t95 = ((x421<(x422-x423))^x424);

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x426 = -1;
	int16_t x427 = 14;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = ((x425<(x426-x427))^x428);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MAX;
	volatile uint32_t x434 = UINT32_MAX;
	uint16_t x435 = 1482U;
	int8_t x436 = INT8_MAX;

	t97 = ((x433<(x434-x435))^x436);

	if (t97 != 126) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = -1;
	int32_t x438 = -1;
	int16_t x439 = INT16_MAX;

	t98 = ((x437<(x438-x439))^x440);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = -133101971;
	int32_t x442 = INT32_MAX;
	int64_t x443 = 103911279294397LL;
	int64_t t99 = 630312999504580LL;

	t99 = ((x441<(x442-x443))^x444);

	if (t99 != 1739LL) { NG(); } else { ; }
	
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
