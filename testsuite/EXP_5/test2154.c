#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x7 = 28027U;
uint32_t x8 = 5989629U;
uint32_t x9 = UINT32_MAX;
uint32_t x11 = 8053100U;
static int64_t x12 = 1761292341222366772LL;
static uint8_t x15 = 34U;
int64_t x16 = INT64_MIN;
int64_t x18 = -1LL;
static int16_t x21 = 77;
static int64_t x23 = 7646056546570LL;
uint64_t x33 = UINT64_MAX;
int32_t t8 = 294148501;
uint16_t x43 = 503U;
int32_t x49 = INT32_MIN;
int32_t t12 = 75;
volatile uint8_t x57 = UINT8_MAX;
int64_t x59 = INT64_MIN;
uint64_t x64 = UINT64_MAX;
int32_t t15 = -3334401;
static int16_t x72 = 3517;
int32_t x75 = -6391;
int32_t t18 = -3;
volatile int16_t x82 = INT16_MIN;
uint64_t x83 = 192929635LLU;
volatile int32_t t21 = 254449;
int32_t x90 = INT32_MIN;
uint16_t x94 = 8U;
int32_t t23 = -3336;
static uint32_t x98 = 565122U;
int16_t x110 = -1;
int32_t x112 = -34979;
int8_t x113 = -1;
volatile int16_t x130 = INT16_MAX;
static uint16_t x131 = 51U;
uint32_t x132 = 4089985U;
int32_t t32 = -104;
uint8_t x141 = 6U;
volatile int32_t t35 = -93383445;
int32_t x150 = -1;
static uint8_t x157 = 0U;
volatile int8_t x158 = INT8_MAX;
int64_t x160 = 386972473839LL;
int8_t x162 = -1;
volatile int32_t t41 = -106;
volatile int32_t t42 = 6;
int64_t x176 = -1LL;
uint8_t x180 = 4U;
int16_t x188 = INT16_MAX;
volatile int32_t t46 = -213;
volatile int8_t x193 = -1;
int64_t x196 = 3421258887LL;
volatile int32_t t48 = 6744;
int64_t x200 = INT64_MAX;
uint8_t x202 = 1U;
int32_t x206 = INT32_MIN;
static uint16_t x213 = 1U;
int32_t x214 = INT32_MAX;
int16_t x220 = -1;
int32_t t56 = 7;
int32_t x230 = -257809;
static int64_t x237 = INT64_MIN;
int64_t x246 = INT64_MIN;
static volatile int32_t x250 = -5581;
volatile int16_t x252 = -1;
volatile int16_t x256 = INT16_MAX;
volatile uint32_t x259 = 55U;
int32_t x265 = -1;
int32_t x269 = -1;
int8_t x272 = INT8_MIN;
static int32_t t67 = -125408;
int64_t x275 = -1LL;
volatile int32_t t68 = 0;
uint16_t x278 = 27108U;
int64_t x280 = INT64_MAX;
int32_t x282 = -1;
int16_t x283 = -1;
static int32_t t70 = 1;
volatile int16_t x285 = 9;
int32_t x294 = INT32_MAX;
int8_t x316 = INT8_MIN;
uint32_t x322 = 1575725882U;
int32_t x323 = 847336;
volatile int8_t x326 = -13;
static int32_t x328 = 3;
static int8_t x331 = -20;
static uint32_t x332 = UINT32_MAX;
int8_t x334 = -1;
uint16_t x339 = UINT16_MAX;
uint8_t x341 = UINT8_MAX;
uint16_t x342 = 94U;
int8_t x350 = INT8_MIN;
int32_t t87 = -1;
int32_t x363 = -12037438;
uint64_t x367 = UINT64_MAX;
int64_t x373 = INT64_MIN;
int64_t x392 = INT64_MIN;
static int16_t x394 = INT16_MIN;
uint8_t x397 = 24U;


void f0(void) {
	int32_t x1 = -1;
	static uint32_t x2 = UINT32_MAX;
	static int16_t x3 = 19;
	uint64_t x4 = 809012638LLU;
	volatile int32_t t0 = 13;

	t0 = (x1<((x2^x3)<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = -1;
	int32_t t1 = 346800;

	t1 = (x5<((x6^x7)<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -1;
	volatile int32_t t2 = -122;

	t2 = (x9<((x10^x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile int32_t x14 = INT32_MIN;
	int32_t t3 = 42;

	t3 = (x13<((x14^x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x19 = INT64_MAX;
	uint16_t x20 = 13196U;
	int32_t t4 = -7760020;

	t4 = (x17<((x18^x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = INT8_MIN;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -69885;

	t5 = (x21<((x22^x23)<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -115;
	int16_t x26 = 3941;
	int16_t x27 = INT16_MAX;
	int32_t x28 = -6;
	int32_t t6 = -616;

	t6 = (x25<((x26^x27)<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = 3527U;
	int16_t x30 = INT16_MIN;
	volatile uint8_t x31 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 641253422;

	t7 = (x29<((x30^x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -4276;
	static uint32_t x35 = 14167U;
	volatile int8_t x36 = -4;

	t8 = (x33<((x34^x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int64_t x38 = -1LL;
	int64_t x39 = -557648908914000100LL;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = -88;

	t9 = (x37<((x38^x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	static int32_t x42 = -709559;
	static volatile int32_t x44 = -870055325;
	int32_t t10 = -59716;

	t10 = (x41<((x42^x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = 14U;
	int32_t x47 = INT32_MAX;
	int16_t x48 = 135;
	int32_t t11 = -57;

	t11 = (x45<((x46^x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 60303U;
	static int32_t x51 = INT32_MIN;
	volatile int8_t x52 = -1;

	t12 = (x49<((x50^x51)<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	int16_t x55 = 49;
	volatile uint32_t x56 = 138U;
	int32_t t13 = 185817656;

	t13 = (x53<((x54^x55)<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 3U;
	int64_t x60 = INT64_MIN;
	int32_t t14 = -1742;

	t14 = (x57<((x58^x59)<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 37U;
	int16_t x62 = -1;
	uint64_t x63 = 173493024600508267LLU;

	t15 = (x61<((x62^x63)<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -106;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 18LLU;
	uint16_t x68 = 198U;
	int32_t t16 = 22404442;

	t16 = (x65<((x66^x67)<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = INT64_MIN;
	int8_t x71 = INT8_MIN;
	volatile int32_t t17 = 283873878;

	t17 = (x69<((x70^x71)<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static volatile int32_t x74 = INT32_MIN;
	static uint8_t x76 = UINT8_MAX;

	t18 = (x73<((x74^x75)<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x77 = UINT8_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x79 = -48;
	int8_t x80 = 19;
	static volatile int32_t t19 = 212778;

	t19 = (x77<((x78^x79)<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int16_t x84 = 2099;
	int32_t t20 = 76341264;

	t20 = (x81<((x82^x83)<=x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = INT32_MIN;
	static int16_t x86 = INT16_MIN;
	volatile int64_t x87 = -134LL;
	volatile int16_t x88 = INT16_MIN;

	t21 = (x85<((x86^x87)<=x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	volatile int32_t x91 = -432;
	int64_t x92 = 64927LL;
	int32_t t22 = -349;

	t22 = (x89<((x90^x91)<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1449109U;
	int64_t x95 = 1767942824588571LL;
	int8_t x96 = INT8_MIN;

	t23 = (x93<((x94^x95)<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	static uint32_t x99 = 14244U;
	static volatile int64_t x100 = 20248547818252LL;
	volatile int32_t t24 = -16983;

	t24 = (x97<((x98^x99)<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	static int16_t x102 = -1;
	int16_t x103 = -1;
	int32_t x104 = -123708463;
	static volatile int32_t t25 = 1370;

	t25 = (x101<((x102^x103)<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	static int16_t x106 = INT16_MIN;
	static int32_t x107 = INT32_MIN;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = -33103297;

	t26 = (x105<((x106^x107)<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x111 = INT16_MAX;
	int32_t t27 = 2325;

	t27 = (x109<((x110^x111)<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 73682544125625LLU;
	int8_t x116 = -1;
	int32_t t28 = -1;

	t28 = (x113<((x114^x115)<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int32_t x118 = INT32_MIN;
	int32_t x119 = -1;
	int8_t x120 = -12;
	int32_t t29 = -23682;

	t29 = (x117<((x118^x119)<=x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = 10914655;
	int8_t x122 = -1;
	int16_t x123 = -3003;
	static int8_t x124 = -62;
	volatile int32_t t30 = 0;

	t30 = (x121<((x122^x123)<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MIN;
	static int64_t x126 = INT64_MIN;
	volatile int8_t x127 = INT8_MIN;
	int64_t x128 = INT64_MAX;
	static int32_t t31 = 1778207;

	t31 = (x125<((x126^x127)<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 0U;

	t32 = (x129<((x130^x131)<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MAX;
	static volatile int16_t x134 = -1;
	int16_t x135 = 1629;
	int64_t x136 = INT64_MIN;
	static int32_t t33 = 2541259;

	t33 = (x133<((x134^x135)<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = INT64_MAX;
	uint64_t x139 = 122723979829LLU;
	static uint16_t x140 = UINT16_MAX;
	volatile int32_t t34 = -3942894;

	t34 = (x137<((x138^x139)<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -500039282;
	static int64_t x143 = INT64_MIN;
	static uint16_t x144 = 74U;

	t35 = (x141<((x142^x143)<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	static int32_t x146 = 324483524;
	int64_t x147 = INT64_MIN;
	volatile int32_t x148 = -1;
	volatile int32_t t36 = 3538155;

	t36 = (x145<((x146^x147)<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int16_t x151 = -60;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = 563;

	t37 = (x149<((x150^x151)<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MAX;
	static int32_t x155 = INT32_MAX;
	static int64_t x156 = -267619843302LL;
	volatile int32_t t38 = 11;

	t38 = (x153<((x154^x155)<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x159 = INT64_MAX;
	int32_t t39 = 5;

	t39 = (x157<((x158^x159)<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 0U;
	uint16_t x163 = 8337U;
	int64_t x164 = INT64_MIN;
	int32_t t40 = -269450;

	t40 = (x161<((x162^x163)<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1497840;
	int16_t x166 = INT16_MIN;
	static int64_t x167 = -1LL;
	uint64_t x168 = 3110417751LLU;

	t41 = (x165<((x166^x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -1;
	int64_t x172 = INT64_MIN;

	t42 = (x169<((x170^x171)<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 15U;
	uint64_t x174 = 757393LLU;
	int8_t x175 = INT8_MAX;
	volatile int32_t t43 = 110;

	t43 = (x173<((x174^x175)<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -89456496158LL;
	int32_t x178 = 3601180;
	int64_t x179 = -1LL;
	static int32_t t44 = 445747182;

	t44 = (x177<((x178^x179)<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 30456877LLU;
	uint64_t x182 = 164195482451LLU;
	int8_t x183 = 1;
	int8_t x184 = 63;
	static int32_t t45 = -92624132;

	t45 = (x181<((x182^x183)<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = 23340181664658LL;
	static int8_t x186 = INT8_MIN;
	uint64_t x187 = UINT64_MAX;

	t46 = (x185<((x186^x187)<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 1172896LLU;
	int64_t x190 = INT64_MAX;
	uint64_t x191 = 29461595752427156LLU;
	static volatile uint32_t x192 = UINT32_MAX;
	int32_t t47 = -2868;

	t47 = (x189<((x190^x191)<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = -772378287LL;
	int16_t x195 = INT16_MIN;

	t48 = (x193<((x194^x195)<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	int64_t x198 = INT64_MIN;
	static uint32_t x199 = 0U;
	int32_t t49 = -9634423;

	t49 = (x197<((x198^x199)<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 411U;
	uint32_t x203 = 64895U;
	int32_t x204 = -1;
	volatile int32_t t50 = -847775556;

	t50 = (x201<((x202^x203)<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x207 = 0;
	uint8_t x208 = UINT8_MAX;
	int32_t t51 = 360682;

	t51 = (x205<((x206^x207)<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 108205U;
	int32_t x210 = -79514;
	static volatile uint8_t x211 = UINT8_MAX;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t52 = -59083562;

	t52 = (x209<((x210^x211)<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x215 = 5784;
	uint8_t x216 = 45U;
	int32_t t53 = -130182;

	t53 = (x213<((x214^x215)<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = -5;
	static int32_t x218 = INT32_MIN;
	static uint32_t x219 = 12U;
	int32_t t54 = 9;

	t54 = (x217<((x218^x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 5U;
	int64_t x223 = -1LL;
	int16_t x224 = INT16_MIN;
	volatile int32_t t55 = -116;

	t55 = (x221<((x222^x223)<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 2U;
	int8_t x226 = INT8_MAX;
	int8_t x227 = -2;
	uint8_t x228 = 3U;

	t56 = (x225<((x226^x227)<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	uint64_t x231 = UINT64_MAX;
	uint64_t x232 = UINT64_MAX;
	int32_t t57 = -2611;

	t57 = (x229<((x230^x231)<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MAX;
	int16_t x236 = 0;
	volatile int32_t t58 = -250079371;

	t58 = (x233<((x234^x235)<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 117U;
	static int64_t x239 = INT64_MIN;
	uint8_t x240 = 0U;
	int32_t t59 = -3222;

	t59 = (x237<((x238^x239)<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = -3;
	int16_t x242 = INT16_MAX;
	int16_t x243 = INT16_MAX;
	uint16_t x244 = 142U;
	volatile int32_t t60 = -4234238;

	t60 = (x241<((x242^x243)<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 2U;
	static uint16_t x247 = 8213U;
	int8_t x248 = -60;
	volatile int32_t t61 = -152735400;

	t61 = (x245<((x246^x247)<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	volatile int32_t x251 = INT32_MAX;
	volatile int32_t t62 = 1;

	t62 = (x249<((x250^x251)<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -5;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 3047;
	int32_t t63 = 0;

	t63 = (x253<((x254^x255)<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = 26;
	uint64_t x258 = UINT64_MAX;
	volatile int16_t x260 = -1;
	static volatile int32_t t64 = 1;

	t64 = (x257<((x258^x259)<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int8_t x262 = -1;
	int8_t x263 = -36;
	uint32_t x264 = UINT32_MAX;
	volatile int32_t t65 = 0;

	t65 = (x261<((x262^x263)<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x266 = INT16_MIN;
	int32_t x267 = -15143966;
	static int64_t x268 = 1752682LL;
	volatile int32_t t66 = 2;

	t66 = (x265<((x266^x267)<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	uint8_t x271 = UINT8_MAX;

	t67 = (x269<((x270^x271)<=x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -4826660;
	static int32_t x274 = 2;
	static int32_t x276 = -495;

	t68 = (x273<((x274^x275)<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x279 = -1;
	static volatile int32_t t69 = 26848710;

	t69 = (x277<((x278^x279)<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 129316800U;
	uint64_t x284 = 22LLU;

	t70 = (x281<((x282^x283)<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -72686LL;
	static uint32_t x287 = 995021506U;
	volatile int32_t x288 = 8;
	int32_t t71 = 1;

	t71 = (x285<((x286^x287)<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MIN;
	volatile uint64_t x290 = 7609042726LLU;
	static volatile int8_t x291 = INT8_MIN;
	uint8_t x292 = 3U;
	int32_t t72 = -151;

	t72 = (x289<((x290^x291)<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = 25;
	int64_t x295 = INT64_MAX;
	int64_t x296 = -31LL;
	static volatile int32_t t73 = -234862;

	t73 = (x293<((x294^x295)<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = INT32_MIN;
	static volatile int64_t x298 = INT64_MAX;
	volatile int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	int32_t t74 = -1878;

	t74 = (x297<((x298^x299)<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int8_t x303 = 4;
	uint16_t x304 = UINT16_MAX;
	static volatile int32_t t75 = 7624;

	t75 = (x301<((x302^x303)<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	static int64_t x306 = INT64_MAX;
	uint32_t x307 = 1676524U;
	int16_t x308 = 116;
	int32_t t76 = -12482;

	t76 = (x305<((x306^x307)<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 9593567106351LLU;
	int32_t x310 = -1;
	int32_t x311 = 773098076;
	static volatile uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = -9179685;

	t77 = (x309<((x310^x311)<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -789;
	static uint64_t x314 = 61LLU;
	uint32_t x315 = 5291U;
	volatile int32_t t78 = -40825;

	t78 = (x313<((x314^x315)<=x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x317 = UINT8_MAX;
	static volatile int64_t x318 = -419576LL;
	int32_t x319 = INT32_MIN;
	static int8_t x320 = 0;
	volatile int32_t t79 = 414;

	t79 = (x317<((x318^x319)<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x324 = -1;
	static int32_t t80 = -6433;

	t80 = (x321<((x322^x323)<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MAX;
	uint16_t x327 = 3U;
	int32_t t81 = -1;

	t81 = (x325<((x326^x327)<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 16294U;
	uint8_t x330 = 61U;
	volatile int32_t t82 = 464737;

	t82 = (x329<((x330^x331)<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 120921880967LLU;
	static int64_t x335 = INT64_MAX;
	int16_t x336 = -974;
	volatile int32_t t83 = 149686519;

	t83 = (x333<((x334^x335)<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MAX;
	int16_t x338 = INT16_MAX;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = -64379;

	t84 = (x337<((x338^x339)<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	int32_t t85 = 30806;

	t85 = (x341<((x342^x343)<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	int32_t x347 = -823840598;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 348;

	t86 = (x345<((x346^x347)<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x351 = -1;
	uint8_t x352 = 15U;

	t87 = (x349<((x350^x351)<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile uint16_t x354 = 30782U;
	int8_t x355 = -1;
	static volatile int64_t x356 = -113223794474943793LL;
	volatile int32_t t88 = 954229517;

	t88 = (x353<((x354^x355)<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 761004U;
	uint8_t x358 = 99U;
	int8_t x359 = INT8_MIN;
	uint8_t x360 = 11U;
	static volatile int32_t t89 = -31981;

	t89 = (x357<((x358^x359)<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = INT64_MIN;
	static uint16_t x362 = UINT16_MAX;
	int64_t x364 = -7845918880LL;
	volatile int32_t t90 = 8125;

	t90 = (x361<((x362^x363)<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	volatile uint16_t x368 = 2U;
	static int32_t t91 = -65;

	t91 = (x365<((x366^x367)<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	int32_t x370 = 2281;
	int8_t x371 = INT8_MIN;
	static int8_t x372 = -1;
	volatile int32_t t92 = 23;

	t92 = (x369<((x370^x371)<=x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = INT32_MIN;
	static int8_t x375 = INT8_MAX;
	int16_t x376 = -320;
	int32_t t93 = 230285655;

	t93 = (x373<((x374^x375)<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -1;
	uint64_t x378 = UINT64_MAX;
	static uint16_t x379 = UINT16_MAX;
	int8_t x380 = INT8_MAX;
	int32_t t94 = 53373;

	t94 = (x377<((x378^x379)<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = 11;
	int16_t x382 = INT16_MIN;
	int64_t x383 = 183583470135060233LL;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t95 = 5360;

	t95 = (x381<((x382^x383)<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	uint16_t x386 = UINT16_MAX;
	int64_t x387 = INT64_MIN;
	int32_t x388 = INT32_MIN;
	int32_t t96 = -1;

	t96 = (x385<((x386^x387)<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	int8_t x390 = INT8_MAX;
	static uint8_t x391 = 11U;
	volatile int32_t t97 = 3146;

	t97 = (x389<((x390^x391)<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int64_t x395 = 391058157LL;
	uint8_t x396 = 90U;
	int32_t t98 = -54;

	t98 = (x393<((x394^x395)<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x398 = -1;
	int16_t x399 = -4;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t99 = 11759175;

	t99 = (x397<((x398^x399)<=x400));

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

