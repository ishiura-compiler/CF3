#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t1 = -4184;
int32_t x18 = INT32_MAX;
volatile uint64_t x23 = 8902521800904LLU;
volatile int32_t t6 = 235;
static uint8_t x30 = 55U;
uint32_t x36 = UINT32_MAX;
uint8_t x38 = 1U;
uint8_t x39 = 111U;
uint16_t x40 = 5U;
static int8_t x44 = -1;
static int8_t x50 = -2;
uint16_t x51 = 5312U;
static int32_t x60 = 672;
int32_t t14 = -5;
int64_t x61 = -900332074867LL;
uint8_t x64 = 55U;
volatile int32_t x65 = INT32_MAX;
volatile uint8_t x72 = 1U;
int16_t x77 = -1;
int32_t x84 = -1;
uint16_t x85 = 120U;
uint16_t x86 = 10U;
uint64_t x96 = 62LLU;
int32_t t21 = 62318;
volatile int8_t x97 = INT8_MIN;
int32_t t23 = -31959;
static volatile int16_t x126 = INT16_MIN;
uint64_t x127 = 110375927935887555LLU;
int8_t x134 = INT8_MAX;
int16_t x136 = INT16_MIN;
volatile int32_t t30 = 91109;
int32_t t31 = 258032;
uint64_t x151 = 3LLU;
volatile int8_t x159 = INT8_MIN;
int16_t x165 = -1;
uint32_t x170 = UINT32_MAX;
int32_t x174 = INT32_MAX;
volatile int32_t x175 = -4677062;
uint16_t x179 = 44U;
int16_t x180 = -1;
static volatile int64_t x194 = INT64_MIN;
int8_t x198 = -1;
static uint8_t x201 = 11U;
int8_t x204 = -1;
int32_t t43 = -193628;
int8_t x212 = 10;
static int32_t t45 = 127147;
int32_t t46 = -7471451;
volatile int16_t x217 = 0;
uint8_t x218 = UINT8_MAX;
static volatile int32_t t47 = 1359;
static uint8_t x222 = 1U;
int8_t x228 = INT8_MAX;
static int16_t x230 = INT16_MAX;
volatile int32_t x235 = -1;
volatile int16_t x237 = INT16_MIN;
int32_t x244 = -872;
static volatile uint64_t x246 = 900167LLU;
uint16_t x249 = 1U;
int8_t x253 = -1;
static volatile int8_t x272 = INT8_MIN;
uint32_t x273 = 7U;
static int64_t x274 = INT64_MIN;
int32_t x276 = 316451866;
static uint16_t x279 = 25943U;
uint32_t x280 = 8139U;
uint32_t x318 = 3495251U;
static int16_t x328 = -1;
uint64_t x330 = 79616481LLU;
uint32_t x335 = 125792859U;
int32_t t72 = 3313;
volatile uint16_t x337 = UINT16_MAX;
int16_t x338 = INT16_MIN;
static int32_t t74 = 514809;
int64_t x347 = INT64_MAX;
uint64_t x350 = UINT64_MAX;
int16_t x351 = INT16_MIN;
int32_t t76 = -20372965;
uint8_t x355 = 8U;
volatile int32_t t77 = 753;
int64_t x358 = INT64_MIN;
int32_t t78 = 0;
int16_t x361 = INT16_MAX;
int16_t x362 = -1;
int32_t t80 = -450744;
volatile uint8_t x370 = 75U;
volatile int64_t x376 = INT64_MIN;
int32_t t83 = 36439;
static uint64_t x381 = UINT64_MAX;
int16_t x382 = 2;
volatile uint8_t x383 = 47U;
volatile int64_t x385 = 39LL;
uint64_t x388 = 12079109LLU;
int16_t x391 = -1245;
volatile int32_t t86 = 155;
int16_t x403 = -1;
static volatile int32_t t88 = -18220694;
int32_t t91 = 66;
int64_t x422 = -1LL;
int8_t x423 = -1;
volatile uint16_t x424 = 6849U;
uint32_t x429 = UINT32_MAX;
uint32_t x433 = 47932U;
int8_t x436 = 0;
uint8_t x438 = 0U;
static int16_t x441 = INT16_MIN;
int32_t t98 = -62123;
int32_t x449 = -1;


void f0(void) {
	static uint64_t x1 = 4485399240264LLU;
	static int8_t x2 = INT8_MAX;
	volatile uint32_t x3 = 22694713U;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = -127;

	t0 = (((x1<x2)-x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = 4;
	int16_t x7 = 10729;
	int32_t x8 = INT32_MIN;

	t1 = (((x5<x6)-x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	int16_t x10 = -632;
	int64_t x11 = INT64_MAX;
	int64_t x12 = -1LL;
	static int32_t t2 = -191804;

	t2 = (((x9<x10)-x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	volatile int32_t x14 = INT32_MIN;
	volatile uint16_t x15 = 71U;
	int8_t x16 = INT8_MIN;
	static int32_t t3 = -208141;

	t3 = (((x13<x14)-x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int32_t x19 = INT32_MAX;
	volatile uint16_t x20 = 909U;
	static volatile int32_t t4 = -178814882;

	t4 = (((x17<x18)-x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 2762081270875210LL;
	int16_t x22 = INT16_MIN;
	uint32_t x24 = UINT32_MAX;
	int32_t t5 = -3480;

	t5 = (((x21<x22)-x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x26 = 7835035698478834801LLU;
	static uint64_t x27 = UINT64_MAX;
	volatile uint8_t x28 = UINT8_MAX;

	t6 = (((x25<x26)-x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 3080;
	int32_t x31 = INT32_MAX;
	int64_t x32 = -30098799611LL;
	static int32_t t7 = 642;

	t7 = (((x29<x30)-x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 1;
	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = UINT8_MAX;
	volatile int32_t t8 = -4;

	t8 = (((x33<x34)-x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 9374748061439LL;
	volatile int32_t t9 = 1;

	t9 = (((x37<x38)-x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static volatile uint8_t x42 = 30U;
	int8_t x43 = INT8_MIN;
	volatile int32_t t10 = -88730;

	t10 = (((x41<x42)-x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	static int64_t x46 = 0LL;
	int16_t x47 = INT16_MIN;
	int16_t x48 = 598;
	static volatile int32_t t11 = 41171026;

	t11 = (((x45<x46)-x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -10;
	int16_t x52 = -125;
	volatile int32_t t12 = 2929;

	t12 = (((x49<x50)-x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = INT64_MAX;
	int16_t x54 = INT16_MIN;
	static int16_t x55 = -8;
	int8_t x56 = INT8_MAX;
	static int32_t t13 = 1;

	t13 = (((x53<x54)-x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	static uint16_t x58 = 10U;
	uint64_t x59 = 21254417221161LLU;

	t14 = (((x57<x58)-x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	uint32_t x63 = 1U;
	volatile int32_t t15 = -21518613;

	t15 = (((x61<x62)-x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x66 = 2LL;
	int8_t x67 = -14;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -3715;

	t16 = (((x65<x66)-x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	static int64_t x70 = INT64_MIN;
	int16_t x71 = 120;
	volatile int32_t t17 = -452211;

	t17 = (((x69<x70)-x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	static int16_t x79 = INT16_MIN;
	volatile int32_t x80 = 94703711;
	int32_t t18 = 11;

	t18 = (((x77<x78)-x79)<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = 0;
	volatile uint32_t x82 = UINT32_MAX;
	int64_t x83 = 2LL;
	volatile int32_t t19 = -140243;

	t19 = (((x81<x82)-x83)<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x87 = 209006711805278436LLU;
	int32_t x88 = -9822;
	int32_t t20 = 124759590;

	t20 = (((x85<x86)-x87)<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = 19248070982645821LL;
	static uint8_t x95 = UINT8_MAX;

	t21 = (((x93<x94)-x95)<x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x98 = INT64_MIN;
	uint16_t x99 = 1U;
	int32_t x100 = INT32_MIN;
	int32_t t22 = -64595645;

	t22 = (((x97<x98)-x99)<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = 117747551;
	int16_t x102 = 6581;
	int16_t x103 = INT16_MAX;
	int64_t x104 = INT64_MAX;

	t23 = (((x101<x102)-x103)<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	static int64_t x106 = INT64_MIN;
	int64_t x107 = -564013315471203LL;
	volatile uint8_t x108 = 4U;
	volatile int32_t t24 = -1056479;

	t24 = (((x105<x106)-x107)<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = 51000309575LLU;
	uint32_t x110 = 70932U;
	int64_t x111 = INT64_MAX;
	static uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = 5757610;

	t25 = (((x109<x110)-x111)<x112);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x114 = INT16_MIN;
	int32_t x115 = -87985954;
	volatile uint64_t x116 = 83539378509246434LLU;
	int32_t t26 = 56;

	t26 = (((x113<x114)-x115)<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = 43089600770184037LLU;
	static uint8_t x122 = 18U;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MIN;
	static volatile int32_t t27 = -2203733;

	t27 = (((x121<x122)-x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x125 = 3;
	int8_t x128 = -1;
	static int32_t t28 = -5;

	t28 = (((x125<x126)-x127)<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MIN;
	uint8_t x135 = 0U;
	static volatile int32_t t29 = 253751400;

	t29 = (((x133<x134)-x135)<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = 1;
	static int64_t x138 = -23510886967363967LL;
	int32_t x139 = INT32_MAX;
	static int16_t x140 = 1026;

	t30 = (((x137<x138)-x139)<x140);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = -1;
	uint32_t x146 = UINT32_MAX;
	uint8_t x147 = 4U;
	int16_t x148 = -1;

	t31 = (((x145<x146)-x147)<x148);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x149 = INT64_MAX;
	int64_t x150 = -1LL;
	uint16_t x152 = 0U;
	static int32_t t32 = -218969646;

	t32 = (((x149<x150)-x151)<x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -1;
	int16_t x158 = -1;
	static int64_t x160 = -1LL;
	volatile int32_t t33 = -12;

	t33 = (((x157<x158)-x159)<x160);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MIN;
	static int16_t x162 = -3901;
	volatile int8_t x163 = -1;
	int64_t x164 = -125959268LL;
	static volatile int32_t t34 = -780692;

	t34 = (((x161<x162)-x163)<x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x166 = 78U;
	int32_t x167 = INT32_MAX;
	uint8_t x168 = UINT8_MAX;
	int32_t t35 = -108955;

	t35 = (((x165<x166)-x167)<x168);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x169 = 4U;
	uint64_t x171 = 440LLU;
	uint64_t x172 = UINT64_MAX;
	int32_t t36 = 155421;

	t36 = (((x169<x170)-x171)<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x173 = 526U;
	int64_t x176 = INT64_MIN;
	int32_t t37 = -1609425;

	t37 = (((x173<x174)-x175)<x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	volatile int32_t t38 = 2;

	t38 = (((x177<x178)-x179)<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = 169;
	int16_t x182 = 70;
	int8_t x183 = -5;
	volatile int8_t x184 = 1;
	static int32_t t39 = -1988292;

	t39 = (((x181<x182)-x183)<x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = INT64_MIN;
	uint8_t x190 = 30U;
	int8_t x191 = INT8_MIN;
	int16_t x192 = -1;
	volatile int32_t t40 = 302;

	t40 = (((x189<x190)-x191)<x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -5399;
	volatile int32_t x195 = -1;
	int64_t x196 = INT64_MAX;
	volatile int32_t t41 = 3086750;

	t41 = (((x193<x194)-x195)<x196);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = -1204;
	static int16_t x199 = 13;
	static uint8_t x200 = UINT8_MAX;
	static volatile int32_t t42 = 72622151;

	t42 = (((x197<x198)-x199)<x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 17U;

	t43 = (((x201<x202)-x203)<x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	int16_t x207 = 7622;
	uint8_t x208 = 1U;
	static volatile int32_t t44 = 7980139;

	t44 = (((x205<x206)-x207)<x208);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -1;
	int32_t x210 = -146679;
	uint64_t x211 = 1768093689164LLU;

	t45 = (((x209<x210)-x211)<x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x213 = 47U;
	static int16_t x214 = INT16_MIN;
	static uint8_t x215 = 31U;
	int32_t x216 = INT32_MAX;

	t46 = (((x213<x214)-x215)<x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x219 = INT8_MIN;
	uint32_t x220 = UINT32_MAX;

	t47 = (((x217<x218)-x219)<x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = 2;
	int8_t x223 = -51;
	int32_t x224 = INT32_MAX;
	static int32_t t48 = -659;

	t48 = (((x221<x222)-x223)<x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x225 = UINT32_MAX;
	int32_t x226 = INT32_MIN;
	int64_t x227 = -1LL;
	volatile int32_t t49 = 1;

	t49 = (((x225<x226)-x227)<x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MIN;
	int16_t x231 = INT16_MAX;
	int8_t x232 = INT8_MIN;
	static int32_t t50 = 86;

	t50 = (((x229<x230)-x231)<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -3;
	uint8_t x234 = 126U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t51 = -481;

	t51 = (((x233<x234)-x235)<x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x238 = UINT64_MAX;
	static int16_t x239 = 7852;
	int32_t x240 = INT32_MIN;
	int32_t t52 = 9398166;

	t52 = (((x237<x238)-x239)<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = 2U;
	uint32_t x242 = 1U;
	volatile int16_t x243 = -1;
	volatile int32_t t53 = -382693;

	t53 = (((x241<x242)-x243)<x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = -1;
	static int8_t x247 = INT8_MIN;
	int8_t x248 = -1;
	volatile int32_t t54 = 1072395;

	t54 = (((x245<x246)-x247)<x248);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x250 = 333859792557636376LL;
	int8_t x251 = INT8_MIN;
	int32_t x252 = 0;
	int32_t t55 = 600149440;

	t55 = (((x249<x250)-x251)<x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x254 = 26391831926800LLU;
	uint8_t x255 = 53U;
	uint64_t x256 = UINT64_MAX;
	static int32_t t56 = -120623;

	t56 = (((x253<x254)-x255)<x256);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x257 = INT16_MIN;
	volatile int8_t x258 = 52;
	volatile uint8_t x259 = UINT8_MAX;
	static uint16_t x260 = UINT16_MAX;
	volatile int32_t t57 = -345676;

	t57 = (((x257<x258)-x259)<x260);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x261 = 15U;
	uint16_t x262 = 1U;
	static uint64_t x263 = 2646243338142623LLU;
	int32_t x264 = INT32_MIN;
	volatile int32_t t58 = 270584637;

	t58 = (((x261<x262)-x263)<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = 1123384LL;
	int16_t x266 = -1805;
	volatile int64_t x267 = INT64_MAX;
	uint64_t x268 = 17981281LLU;
	volatile int32_t t59 = 518427;

	t59 = (((x265<x266)-x267)<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = UINT16_MAX;
	int16_t x270 = -2786;
	int8_t x271 = -1;
	volatile int32_t t60 = 0;

	t60 = (((x269<x270)-x271)<x272);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x275 = INT16_MAX;
	int32_t t61 = 60763;

	t61 = (((x273<x274)-x275)<x276);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = -1;
	volatile int8_t x278 = 1;
	int32_t t62 = 1504594;

	t62 = (((x277<x278)-x279)<x280);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x281 = INT64_MIN;
	volatile int8_t x282 = 1;
	int8_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t63 = 64986;

	t63 = (((x281<x282)-x283)<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = INT16_MIN;
	int64_t x286 = -433686436514LL;
	volatile int16_t x287 = INT16_MAX;
	volatile uint16_t x288 = 0U;
	int32_t t64 = -10829191;

	t64 = (((x285<x286)-x287)<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x293 = UINT32_MAX;
	static int8_t x294 = -2;
	int32_t x295 = 37;
	int8_t x296 = INT8_MAX;
	int32_t t65 = 11750;

	t65 = (((x293<x294)-x295)<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x305 = 467591218701LLU;
	int8_t x306 = -11;
	static int16_t x307 = INT16_MIN;
	static uint16_t x308 = 14638U;
	static int32_t t66 = 6384;

	t66 = (((x305<x306)-x307)<x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x313 = -8578903;
	static volatile int8_t x314 = INT8_MIN;
	volatile int64_t x315 = -3LL;
	uint32_t x316 = 98671927U;
	volatile int32_t t67 = 463;

	t67 = (((x313<x314)-x315)<x316);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = 107154330;
	static int32_t x319 = -54305;
	int16_t x320 = -1;
	volatile int32_t t68 = 313498885;

	t68 = (((x317<x318)-x319)<x320);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x321 = 2U;
	uint16_t x322 = UINT16_MAX;
	static int8_t x323 = -3;
	static uint8_t x324 = UINT8_MAX;
	volatile int32_t t69 = 1036876;

	t69 = (((x321<x322)-x323)<x324);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = -1;
	uint64_t x327 = 16711187177LLU;
	int32_t t70 = -107694506;

	t70 = (((x325<x326)-x327)<x328);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = -1;
	int32_t x331 = 16697;
	volatile int16_t x332 = INT16_MAX;
	volatile int32_t t71 = 6291;

	t71 = (((x329<x330)-x331)<x332);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x333 = 85U;
	volatile int16_t x334 = INT16_MIN;
	int8_t x336 = INT8_MIN;

	t72 = (((x333<x334)-x335)<x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x339 = -1LL;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t73 = 84676;

	t73 = (((x337<x338)-x339)<x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = 371161U;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MIN;
	uint32_t x344 = 1913421471U;

	t74 = (((x341<x342)-x343)<x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = INT16_MIN;
	volatile int16_t x346 = INT16_MAX;
	int16_t x348 = 1;
	int32_t t75 = -3;

	t75 = (((x345<x346)-x347)<x348);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x349 = -40;
	volatile int8_t x352 = INT8_MAX;

	t76 = (((x349<x350)-x351)<x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -1;
	uint16_t x354 = 571U;
	uint8_t x356 = UINT8_MAX;

	t77 = (((x353<x354)-x355)<x356);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x357 = -1LL;
	int64_t x359 = -2057813027828LL;
	int32_t x360 = -1;

	t78 = (((x357<x358)-x359)<x360);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x363 = UINT32_MAX;
	volatile int32_t x364 = -70089819;
	static volatile int32_t t79 = -1228;

	t79 = (((x361<x362)-x363)<x364);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x365 = -1;
	uint16_t x366 = 37U;
	int64_t x367 = -1LL;
	uint16_t x368 = UINT16_MAX;

	t80 = (((x365<x366)-x367)<x368);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x369 = UINT8_MAX;
	uint32_t x371 = UINT32_MAX;
	uint64_t x372 = 2687140LLU;
	volatile int32_t t81 = -12;

	t81 = (((x369<x370)-x371)<x372);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	static int16_t x375 = INT16_MIN;
	int32_t t82 = -14925;

	t82 = (((x373<x374)-x375)<x376);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x377 = 12U;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = -1;
	int8_t x380 = INT8_MAX;

	t83 = (((x377<x378)-x379)<x380);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x384 = INT32_MIN;
	static volatile int32_t t84 = 32454;

	t84 = (((x381<x382)-x383)<x384);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x386 = -1LL;
	volatile int16_t x387 = -1;
	volatile int32_t t85 = 492;

	t85 = (((x385<x386)-x387)<x388);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x389 = -10353;
	volatile int32_t x390 = INT32_MAX;
	static volatile uint16_t x392 = 57U;

	t86 = (((x389<x390)-x391)<x392);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = -47;
	uint32_t x394 = 18702651U;
	static volatile int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MIN;
	static int32_t t87 = -17;

	t87 = (((x393<x394)-x395)<x396);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int32_t x402 = -430254;
	int32_t x404 = 8;

	t88 = (((x401<x402)-x403)<x404);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = -1LL;
	int32_t x407 = 8917278;
	int8_t x408 = INT8_MIN;
	int32_t t89 = 0;

	t89 = (((x405<x406)-x407)<x408);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MAX;
	uint8_t x410 = UINT8_MAX;
	uint8_t x411 = UINT8_MAX;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t90 = 333;

	t90 = (((x409<x410)-x411)<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = INT8_MIN;
	static volatile int16_t x415 = INT16_MAX;
	int16_t x416 = INT16_MAX;

	t91 = (((x413<x414)-x415)<x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x417 = 3420U;
	static volatile uint64_t x418 = 14401675228393836LLU;
	int64_t x419 = -1LL;
	uint16_t x420 = 17U;
	volatile int32_t t92 = -2040;

	t92 = (((x417<x418)-x419)<x420);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = 195U;
	volatile int32_t t93 = -43213;

	t93 = (((x421<x422)-x423)<x424);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x430 = -1LL;
	int64_t x431 = -1LL;
	static uint32_t x432 = UINT32_MAX;
	int32_t t94 = -1055018658;

	t94 = (((x429<x430)-x431)<x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x434 = 1U;
	static uint8_t x435 = 2U;
	volatile int32_t t95 = 28171736;

	t95 = (((x433<x434)-x435)<x436);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -1;
	int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	volatile int32_t t96 = 632;

	t96 = (((x437<x438)-x439)<x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x442 = UINT64_MAX;
	uint16_t x443 = 906U;
	int8_t x444 = -1;
	volatile int32_t t97 = -22771578;

	t97 = (((x441<x442)-x443)<x444);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x445 = -1LL;
	int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MAX;
	int64_t x448 = INT64_MIN;

	t98 = (((x445<x446)-x447)<x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x450 = -1;
	int16_t x451 = INT16_MIN;
	int16_t x452 = -1;
	volatile int32_t t99 = -47;

	t99 = (((x449<x450)-x451)<x452);

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

