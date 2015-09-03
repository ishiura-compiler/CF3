#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = 8824;
int16_t x8 = INT16_MIN;
int8_t x14 = -1;
volatile int32_t t3 = 618074;
int64_t x27 = INT64_MIN;
int64_t x31 = -1LL;
volatile int8_t x33 = INT8_MIN;
volatile int8_t x40 = INT8_MIN;
uint64_t x46 = 61LLU;
int16_t x48 = INT16_MAX;
int32_t x49 = INT32_MAX;
static uint16_t x51 = 14U;
int32_t x55 = -1;
uint32_t x57 = 30225956U;
static int32_t x65 = 1;
static volatile uint16_t x68 = 23487U;
int64_t x73 = INT64_MIN;
static volatile uint16_t x77 = UINT16_MAX;
static volatile int64_t x83 = INT64_MAX;
static int64_t x84 = 1878574979LL;
uint16_t x87 = UINT16_MAX;
static volatile int32_t t21 = -213235;
int16_t x94 = INT16_MIN;
volatile int32_t t22 = 3159;
int32_t t23 = -5;
volatile int16_t x102 = INT16_MIN;
volatile int32_t t24 = -14623517;
static int32_t x111 = INT32_MIN;
static uint32_t x114 = 2119596334U;
int8_t x117 = INT8_MAX;
volatile int32_t x118 = INT32_MIN;
int64_t x120 = INT64_MIN;
uint64_t x125 = UINT64_MAX;
int32_t x126 = INT32_MAX;
int32_t x127 = -5085;
volatile uint64_t x129 = UINT64_MAX;
int32_t x138 = -1;
int32_t t32 = 430436936;
int8_t x150 = INT8_MIN;
static uint16_t x152 = 69U;
static volatile int8_t x153 = 4;
int8_t x159 = INT8_MAX;
volatile int32_t t39 = 3839;
int8_t x174 = INT8_MIN;
int32_t x181 = INT32_MIN;
int32_t t42 = -159;
uint16_t x186 = 705U;
int32_t t45 = -2386;
int64_t x205 = -376513LL;
volatile int32_t t47 = -48700;
int64_t x209 = INT64_MAX;
int8_t x211 = 9;
volatile int32_t t48 = -76;
volatile int16_t x217 = -7218;
int32_t t49 = -136;
static uint16_t x232 = UINT16_MAX;
int32_t x236 = INT32_MIN;
volatile int32_t t53 = -4;
volatile int32_t t54 = -1;
int32_t x241 = INT32_MIN;
int32_t t55 = -6;
volatile int32_t t56 = 27987;
int8_t x256 = INT8_MIN;
static int64_t x266 = -820LL;
static int32_t x271 = -63273;
uint8_t x272 = 31U;
int32_t x273 = INT32_MAX;
int16_t x280 = INT16_MIN;
int16_t x282 = INT16_MIN;
uint64_t x283 = 210288573289LLU;
int32_t t64 = 2319;
int64_t x295 = 219650017515LL;
static int32_t t73 = -1;
static volatile int32_t x323 = -939;
int32_t t74 = -22;
static int64_t x329 = 917158202391134933LL;
volatile int64_t x330 = INT64_MAX;
static volatile int8_t x332 = -1;
uint32_t x335 = UINT32_MAX;
int32_t t77 = -39897518;
int8_t x339 = INT8_MAX;
volatile int32_t t79 = -257900;
int64_t x346 = INT64_MIN;
int32_t t80 = 86890085;
int16_t x356 = 6;
int64_t x368 = INT64_MAX;
static int8_t x374 = 1;
volatile int32_t x378 = INT32_MIN;
static int32_t x386 = 96010527;
static int32_t t92 = 0;
int64_t x400 = INT64_MIN;
int16_t x402 = INT16_MIN;
static int8_t x412 = 5;
volatile int64_t x415 = -104629394LL;
int16_t x424 = -1;
int32_t t99 = 1661;


void f0(void) {
	int8_t x1 = -31;
	uint16_t x3 = 411U;
	int8_t x4 = -1;
	int32_t t0 = 466880;

	t0 = (x1<=((x2/x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = 2195;
	volatile uint32_t x7 = 211U;
	static int32_t t1 = 27;

	t1 = (x5<=((x6/x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -26;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = UINT64_MAX;
	static int32_t t2 = -972694;

	t2 = (x13<=((x14/x15)<x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = INT64_MIN;
	volatile int32_t x18 = -1;
	static uint64_t x19 = 283270312869199097LLU;
	int64_t x20 = -1LL;

	t3 = (x17<=((x18/x19)<x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = 0U;
	static uint32_t x22 = 51800U;
	int32_t x23 = INT32_MIN;
	static int64_t x24 = INT64_MIN;
	int32_t t4 = 9095;

	t4 = (x21<=((x22/x23)<x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = INT16_MIN;
	int16_t x26 = -1;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -12084624;

	t5 = (x25<=((x26/x27)<x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 10LL;
	static int32_t x30 = -57;
	static volatile int16_t x32 = 529;
	int32_t t6 = 160611446;

	t6 = (x29<=((x30/x31)<x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x34 = 8U;
	uint8_t x35 = 12U;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = 12584886;

	t7 = (x33<=((x34/x35)<x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -166061723LL;
	volatile int32_t x38 = INT32_MAX;
	int32_t x39 = -1030999579;
	volatile int32_t t8 = -76637;

	t8 = (x37<=((x38/x39)<x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static uint64_t x42 = UINT64_MAX;
	static int16_t x43 = -1;
	int8_t x44 = 55;
	volatile int32_t t9 = -47442;

	t9 = (x41<=((x42/x43)<x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 0U;
	int8_t x47 = INT8_MIN;
	int32_t t10 = 12;

	t10 = (x45<=((x46/x47)<x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = INT16_MIN;
	int8_t x52 = INT8_MAX;
	int32_t t11 = -101;

	t11 = (x49<=((x50/x51)<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -1;
	int8_t x54 = -38;
	static int16_t x56 = -1614;
	int32_t t12 = -112020;

	t12 = (x53<=((x54/x55)<x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = -9843155;

	t13 = (x57<=((x58/x59)<x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 54;
	static int16_t x62 = -1;
	uint8_t x63 = 1U;
	uint64_t x64 = 3949873332358665747LLU;
	volatile int32_t t14 = -26119743;

	t14 = (x61<=((x62/x63)<x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = -4;
	static volatile int32_t x67 = -1;
	int32_t t15 = 3;

	t15 = (x65<=((x66/x67)<x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MAX;
	uint32_t x70 = UINT32_MAX;
	int64_t x71 = INT64_MIN;
	volatile uint16_t x72 = UINT16_MAX;
	volatile int32_t t16 = 1;

	t16 = (x69<=((x70/x71)<x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = -1;
	static int64_t x75 = INT64_MAX;
	int16_t x76 = -4834;
	int32_t t17 = 50608;

	t17 = (x73<=((x74/x75)<x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x78 = 8970562374369LL;
	int16_t x79 = -2423;
	int32_t x80 = -2;
	volatile int32_t t18 = -68544;

	t18 = (x77<=((x78/x79)<x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -18;
	volatile int64_t x82 = INT64_MIN;
	volatile int32_t t19 = -3683757;

	t19 = (x81<=((x82/x83)<x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	static uint64_t x86 = 1763356LLU;
	int32_t x88 = INT32_MIN;
	int32_t t20 = -3178926;

	t20 = (x85<=((x86/x87)<x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MIN;
	volatile uint8_t x91 = 28U;
	int64_t x92 = -14601LL;

	t21 = (x89<=((x90/x91)<x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x93 = INT16_MIN;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;

	t22 = (x93<=((x94/x95)<x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -28803;
	static uint32_t x98 = 16306299U;
	volatile int8_t x99 = 1;
	static volatile int8_t x100 = INT8_MIN;

	t23 = (x97<=((x98/x99)<x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1U;
	static int8_t x103 = INT8_MIN;
	int8_t x104 = -1;

	t24 = (x101<=((x102/x103)<x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x105 = 54243LL;
	static uint8_t x106 = 102U;
	static volatile uint32_t x107 = 1751657853U;
	int32_t x108 = -1;
	int32_t t25 = -126375;

	t25 = (x105<=((x106/x107)<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = -156;
	int16_t x110 = INT16_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t26 = 45;

	t26 = (x109<=((x110/x111)<x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x113 = UINT16_MAX;
	static int8_t x115 = INT8_MIN;
	int8_t x116 = -3;
	static volatile int32_t t27 = -25211833;

	t27 = (x113<=((x114/x115)<x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x119 = INT32_MIN;
	static volatile int32_t t28 = 3;

	t28 = (x117<=((x118/x119)<x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x121 = 867798734U;
	volatile int32_t x122 = -4492;
	static int32_t x123 = INT32_MIN;
	uint8_t x124 = 5U;
	int32_t t29 = 33376;

	t29 = (x121<=((x122/x123)<x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x128 = 15026972258531118LL;
	static int32_t t30 = -29473320;

	t30 = (x125<=((x126/x127)<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x130 = UINT16_MAX;
	static int16_t x131 = 40;
	static int8_t x132 = INT8_MIN;
	volatile int32_t t31 = -62534;

	t31 = (x129<=((x130/x131)<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -18;
	static int16_t x139 = INT16_MAX;
	int16_t x140 = -6;

	t32 = (x137<=((x138/x139)<x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = -1;
	static uint16_t x142 = 1U;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 7348U;
	volatile int32_t t33 = 987903;

	t33 = (x141<=((x142/x143)<x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = INT16_MIN;
	int64_t x147 = -1LL;
	uint64_t x148 = UINT64_MAX;
	int32_t t34 = -50;

	t34 = (x145<=((x146/x147)<x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = 891710505LLU;
	static int16_t x151 = 7718;
	static volatile int32_t t35 = -5122;

	t35 = (x149<=((x150/x151)<x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x154 = 69965618;
	static int64_t x155 = -1LL;
	int16_t x156 = INT16_MAX;
	static volatile int32_t t36 = -16;

	t36 = (x153<=((x154/x155)<x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int16_t x160 = 3559;
	volatile int32_t t37 = -19;

	t37 = (x157<=((x158/x159)<x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	uint16_t x162 = 233U;
	int32_t x163 = INT32_MIN;
	volatile int32_t x164 = INT32_MAX;
	int32_t t38 = 44034;

	t38 = (x161<=((x162/x163)<x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = 3;
	volatile int64_t x166 = -1LL;
	uint8_t x167 = 3U;
	uint8_t x168 = UINT8_MAX;

	t39 = (x165<=((x166/x167)<x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	static int64_t x170 = -704160471LL;
	static int32_t x171 = INT32_MAX;
	static uint64_t x172 = 286LLU;
	int32_t t40 = -12631;

	t40 = (x169<=((x170/x171)<x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = 17U;
	static uint64_t x175 = 8148215907299408LLU;
	uint16_t x176 = 2U;
	int32_t t41 = -92451;

	t41 = (x173<=((x174/x175)<x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x182 = 52U;
	int32_t x183 = INT32_MIN;
	int8_t x184 = -1;

	t42 = (x181<=((x182/x183)<x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 9744U;
	int8_t x187 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t43 = -852851;

	t43 = (x185<=((x186/x187)<x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x193 = -1;
	int32_t x194 = 5620059;
	volatile int16_t x195 = -1;
	static int32_t x196 = -84965;
	static volatile int32_t t44 = 7609;

	t44 = (x193<=((x194/x195)<x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x197 = 192;
	volatile int32_t x198 = INT32_MIN;
	uint8_t x199 = 7U;
	int16_t x200 = -1;

	t45 = (x197<=((x198/x199)<x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	uint64_t x204 = 391206198073953179LLU;
	int32_t t46 = 531;

	t46 = (x201<=((x202/x203)<x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x206 = 121U;
	int8_t x207 = 58;
	static volatile uint8_t x208 = UINT8_MAX;

	t47 = (x205<=((x206/x207)<x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x210 = INT16_MIN;
	int16_t x212 = INT16_MAX;

	t48 = (x209<=((x210/x211)<x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x218 = INT64_MAX;
	static uint32_t x219 = 1U;
	int32_t x220 = INT32_MIN;

	t49 = (x217<=((x218/x219)<x220));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = UINT32_MAX;
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = 17U;
	volatile int32_t t50 = 52;

	t50 = (x221<=((x222/x223)<x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 7U;
	static volatile int64_t x226 = INT64_MAX;
	uint32_t x227 = 8653927U;
	uint64_t x228 = UINT64_MAX;
	int32_t t51 = -276;

	t51 = (x225<=((x226/x227)<x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x229 = -1;
	int8_t x230 = -58;
	int16_t x231 = -1;
	volatile int32_t t52 = -1;

	t52 = (x229<=((x230/x231)<x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x233 = UINT32_MAX;
	static int64_t x234 = INT64_MIN;
	uint8_t x235 = 7U;

	t53 = (x233<=((x234/x235)<x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x237 = 228U;
	int64_t x238 = 17079795587371LL;
	uint16_t x239 = 8U;
	static int32_t x240 = 1;

	t54 = (x237<=((x238/x239)<x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;

	t55 = (x241<=((x242/x243)<x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x245 = INT16_MAX;
	uint32_t x246 = 12524U;
	static int64_t x247 = INT64_MIN;
	volatile uint8_t x248 = UINT8_MAX;

	t56 = (x245<=((x246/x247)<x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = 20661LLU;
	uint32_t x250 = UINT32_MAX;
	static int16_t x251 = -1802;
	static volatile int16_t x252 = -1;
	volatile int32_t t57 = 310;

	t57 = (x249<=((x250/x251)<x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x253 = 2U;
	int32_t x254 = -224246;
	int32_t x255 = INT32_MIN;
	static int32_t t58 = -149282188;

	t58 = (x253<=((x254/x255)<x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x257 = 7321U;
	int16_t x258 = 30;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int32_t t59 = -1204166;

	t59 = (x257<=((x258/x259)<x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x265 = -18;
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t60 = 0;

	t60 = (x265<=((x266/x267)<x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x269 = 53684821;
	static uint8_t x270 = 1U;
	int32_t t61 = -4;

	t61 = (x269<=((x270/x271)<x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x274 = INT32_MAX;
	int32_t x275 = -1;
	int8_t x276 = 12;
	volatile int32_t t62 = -5839757;

	t62 = (x273<=((x274/x275)<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x277 = INT8_MAX;
	volatile int32_t x278 = INT32_MIN;
	int32_t x279 = -2;
	volatile int32_t t63 = 62014;

	t63 = (x277<=((x278/x279)<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	static uint8_t x284 = UINT8_MAX;

	t64 = (x281<=((x282/x283)<x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x287 = 228330007415296LLU;
	uint32_t x288 = UINT32_MAX;
	int32_t t65 = -610324;

	t65 = (x285<=((x286/x287)<x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x289 = 3U;
	uint16_t x290 = 251U;
	int16_t x291 = -1;
	static int16_t x292 = INT16_MAX;
	int32_t t66 = 46;

	t66 = (x289<=((x290/x291)<x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x293 = UINT16_MAX;
	volatile uint16_t x294 = 70U;
	static volatile int8_t x296 = -24;
	volatile int32_t t67 = -8066932;

	t67 = (x293<=((x294/x295)<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 742369U;
	uint32_t x298 = 1407421U;
	uint32_t x299 = 135731U;
	static int32_t x300 = -58950341;
	int32_t t68 = 10;

	t68 = (x297<=((x298/x299)<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = UINT64_MAX;
	int8_t x302 = -51;
	int16_t x303 = -1;
	int32_t x304 = -6473021;
	volatile int32_t t69 = 1;

	t69 = (x301<=((x302/x303)<x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MAX;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t70 = -115042;

	t70 = (x305<=((x306/x307)<x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x309 = -1;
	int16_t x310 = INT16_MIN;
	volatile int16_t x311 = INT16_MIN;
	int64_t x312 = -1LL;
	static int32_t t71 = 0;

	t71 = (x309<=((x310/x311)<x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 52LLU;
	uint64_t x314 = 204727LLU;
	static int32_t x315 = INT32_MAX;
	uint16_t x316 = 2537U;
	int32_t t72 = -111714;

	t72 = (x313<=((x314/x315)<x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = -2;
	static volatile int16_t x319 = -1;
	int32_t x320 = INT32_MIN;

	t73 = (x317<=((x318/x319)<x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	static int16_t x324 = INT16_MIN;

	t74 = (x321<=((x322/x323)<x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x325 = INT64_MAX;
	volatile int32_t x326 = -54645;
	int32_t x327 = INT32_MIN;
	static int8_t x328 = -1;
	volatile int32_t t75 = -10;

	t75 = (x325<=((x326/x327)<x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x331 = INT32_MAX;
	static volatile int32_t t76 = -1;

	t76 = (x329<=((x330/x331)<x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x333 = 811U;
	int8_t x334 = -1;
	int16_t x336 = -1;

	t77 = (x333<=((x334/x335)<x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MIN;
	static volatile int32_t x338 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	static int32_t t78 = -6974;

	t78 = (x337<=((x338/x339)<x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x341 = INT64_MIN;
	uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	int16_t x344 = -1;

	t79 = (x341<=((x342/x343)<x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = 3079069LLU;
	uint16_t x347 = UINT16_MAX;
	volatile int16_t x348 = 0;

	t80 = (x345<=((x346/x347)<x348));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = 1LL;
	uint8_t x350 = 0U;
	volatile uint32_t x351 = UINT32_MAX;
	int16_t x352 = -5;
	static volatile int32_t t81 = -36958;

	t81 = (x349<=((x350/x351)<x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = UINT16_MAX;
	volatile int64_t x354 = INT64_MIN;
	volatile int64_t x355 = -698217578LL;
	static volatile int32_t t82 = -39;

	t82 = (x353<=((x354/x355)<x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = INT32_MIN;
	static uint16_t x359 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	int32_t t83 = -421130116;

	t83 = (x357<=((x358/x359)<x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int16_t x362 = -57;
	volatile int64_t x363 = INT64_MIN;
	uint64_t x364 = 98950265LLU;
	volatile int32_t t84 = 12730588;

	t84 = (x361<=((x362/x363)<x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x365 = 835013722371LL;
	static int32_t x366 = INT32_MIN;
	int32_t x367 = INT32_MAX;
	int32_t t85 = -478;

	t85 = (x365<=((x366/x367)<x368));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = -1LL;
	uint8_t x370 = 39U;
	uint32_t x371 = 2806961U;
	uint32_t x372 = 32533U;
	volatile int32_t t86 = -7;

	t86 = (x369<=((x370/x371)<x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 3U;
	volatile int32_t x375 = -852;
	int64_t x376 = -60LL;
	volatile int32_t t87 = -1827;

	t87 = (x373<=((x374/x375)<x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	static int16_t x380 = INT16_MAX;
	int32_t t88 = -296448;

	t88 = (x377<=((x378/x379)<x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x381 = INT32_MIN;
	static volatile uint8_t x382 = UINT8_MAX;
	uint16_t x383 = UINT16_MAX;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t89 = 19;

	t89 = (x381<=((x382/x383)<x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x385 = INT32_MIN;
	static uint8_t x387 = 52U;
	static int8_t x388 = INT8_MIN;
	int32_t t90 = -54273092;

	t90 = (x385<=((x386/x387)<x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = INT8_MIN;
	uint64_t x390 = UINT64_MAX;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t91 = 622932;

	t91 = (x389<=((x390/x391)<x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = INT64_MIN;
	volatile uint8_t x394 = UINT8_MAX;
	static uint32_t x395 = 6235U;
	static int32_t x396 = INT32_MAX;

	t92 = (x393<=((x394/x395)<x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = INT16_MAX;
	volatile uint64_t x398 = 13666362738727523LLU;
	uint64_t x399 = 11050965094LLU;
	volatile int32_t t93 = -100;

	t93 = (x397<=((x398/x399)<x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	volatile int16_t x404 = INT16_MIN;
	static volatile int32_t t94 = 1;

	t94 = (x401<=((x402/x403)<x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 477518U;
	int32_t x406 = -1;
	static int8_t x407 = 1;
	int16_t x408 = INT16_MAX;
	int32_t t95 = 12021388;

	t95 = (x405<=((x406/x407)<x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	int32_t t96 = 1526587;

	t96 = (x409<=((x410/x411)<x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x413 = -35;
	uint16_t x414 = 0U;
	volatile int16_t x416 = -1;
	static volatile int32_t t97 = 0;

	t97 = (x413<=((x414/x415)<x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = 0;
	int64_t x418 = 37804373451LL;
	int16_t x419 = INT16_MIN;
	int8_t x420 = 1;
	static volatile int32_t t98 = -95488;

	t98 = (x417<=((x418/x419)<x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x421 = INT64_MIN;
	uint64_t x422 = 22786353190LLU;
	static uint64_t x423 = 252850291769683LLU;

	t99 = (x421<=((x422/x423)<x424));

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

