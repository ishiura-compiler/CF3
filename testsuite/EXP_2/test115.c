#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
uint8_t x11 = 79U;
int8_t x22 = INT8_MAX;
int32_t x24 = INT32_MIN;
uint16_t x41 = 6U;
int16_t x45 = INT16_MIN;
volatile int8_t x46 = -1;
int64_t t8 = -34LL;
int16_t x50 = INT16_MAX;
volatile int16_t x57 = -1;
volatile int32_t t12 = -234893107;
int8_t x65 = -1;
volatile int16_t x67 = -1;
static uint8_t x69 = 25U;
int32_t x72 = -1;
int64_t x75 = INT64_MIN;
volatile uint32_t x79 = UINT32_MAX;
static volatile int32_t t16 = 46;
volatile int64_t x84 = INT64_MAX;
int64_t x85 = INT64_MAX;
uint16_t x88 = 12U;
uint16_t x91 = 14888U;
volatile int32_t t20 = -6003099;
uint64_t x99 = 7872465662933LLU;
uint32_t x100 = 521411U;
volatile int64_t x102 = -1LL;
int32_t x104 = INT32_MIN;
static volatile uint8_t x125 = UINT8_MAX;
uint64_t x126 = 3175LLU;
int64_t t29 = 7437285LL;
uint32_t x139 = 13022967U;
static uint8_t x144 = UINT8_MAX;
int8_t x148 = INT8_MIN;
int32_t t33 = 11;
int32_t x157 = INT32_MAX;
static volatile int64_t x160 = INT64_MAX;
volatile int64_t t34 = -15858253LL;
int32_t x163 = INT32_MAX;
volatile int32_t t37 = 6;
int8_t x181 = -1;
static int8_t x184 = INT8_MIN;
static volatile int32_t t38 = -74405;
int8_t x196 = 30;
static uint8_t x235 = 8U;
int32_t t52 = -882182;
int64_t x247 = 34436486147381LL;
int64_t x253 = INT64_MAX;
int64_t t55 = 677008433LL;
int16_t x261 = -1;
int8_t x264 = 0;
volatile int8_t x268 = INT8_MIN;
static uint16_t x270 = UINT16_MAX;
volatile int32_t t60 = 1156;
int32_t x277 = -1;
int8_t x283 = INT8_MAX;
int64_t x286 = -1LL;
uint64_t t63 = 31952488352LLU;
uint64_t x289 = 7342085LLU;
volatile uint64_t x292 = UINT64_MAX;
volatile uint64_t x294 = UINT64_MAX;
volatile int8_t x295 = -44;
volatile int32_t t65 = -7155;
int64_t x300 = -1LL;
int16_t x302 = -1;
uint16_t x306 = 2U;
uint16_t x309 = UINT16_MAX;
uint16_t x310 = 10U;
int32_t x329 = -1;
uint32_t t76 = 97U;
volatile int64_t x347 = -1LL;
int32_t x348 = 111838946;
static int32_t x357 = INT32_MIN;
volatile uint16_t x359 = 572U;
int16_t x361 = -1;
static uint64_t x362 = 34850LLU;
static int64_t x364 = INT64_MIN;
int64_t t79 = -207227LL;
int16_t x372 = -8;
static int64_t x376 = INT64_MAX;
static volatile int32_t t82 = -185;
uint32_t x393 = UINT32_MAX;
int8_t x395 = 0;
int16_t x398 = 3;
int16_t x399 = -1;
static volatile int32_t t86 = 114;
volatile int8_t x415 = INT8_MAX;
int32_t x416 = 2309;
volatile int32_t t91 = 188;
volatile int32_t t92 = 12474027;
int32_t x437 = -310796;
volatile uint64_t t94 = 337183487076786LLU;
int16_t x441 = INT16_MIN;
uint64_t x443 = 66719893649LLU;
static uint8_t x444 = UINT8_MAX;
uint64_t x445 = 7LLU;
int32_t x448 = -1;
int32_t t98 = -14310;
int64_t x462 = -1LL;
int64_t x463 = -127774932156199543LL;


void f0(void) {
	uint32_t x1 = 649U;
	int32_t x2 = -1;
	uint16_t x3 = UINT16_MAX;
	int32_t t0 = 0;

	t0 = ((x1<(x2+x3))&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int64_t x6 = -1LL;
	uint8_t x7 = UINT8_MAX;
	int32_t x8 = 904400;
	volatile int32_t t1 = 1;

	t1 = ((x5<(x6+x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x10 = -2715645LL;
	int64_t x12 = -13LL;
	int64_t t2 = -222105787603941061LL;

	t2 = ((x9<(x10+x11))&x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -42127014523LL;
	int32_t x14 = INT32_MAX;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -847114;

	t3 = ((x13<(x14+x15))&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 32;
	static int8_t x18 = 23;
	int64_t x19 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = -1685;

	t4 = ((x17<(x18+x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x23 = 1149559396U;
	static volatile int32_t t5 = -58;

	t5 = ((x21<(x22+x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = 951630636457457LLU;
	int64_t x38 = INT64_MAX;
	int64_t x39 = -1LL;
	uint32_t x40 = 1U;
	volatile uint32_t t6 = 920421855U;

	t6 = ((x37<(x38+x39))&x40);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = -1;
	int32_t x43 = INT32_MAX;
	uint64_t x44 = 35243780LLU;
	volatile uint64_t t7 = 4686800244650100706LLU;

	t7 = ((x41<(x42+x43))&x44);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x47 = INT16_MIN;
	static int64_t x48 = -228903440767754152LL;

	t8 = ((x45<(x46+x47))&x48);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	static int64_t x51 = -1LL;
	static int8_t x52 = -1;
	volatile int32_t t9 = -4789105;

	t9 = ((x49<(x50+x51))&x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	volatile uint16_t x54 = 3247U;
	uint32_t x55 = 234U;
	int64_t x56 = INT64_MAX;
	volatile int64_t t10 = -1542303LL;

	t10 = ((x53<(x54+x55))&x56);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = INT16_MAX;
	int16_t x59 = -123;
	int8_t x60 = INT8_MAX;
	static volatile int32_t t11 = 91509;

	t11 = ((x57<(x58+x59))&x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = INT8_MIN;
	static uint16_t x63 = UINT16_MAX;
	uint16_t x64 = UINT16_MAX;

	t12 = ((x61<(x62+x63))&x64);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x66 = 6202798;
	uint64_t x68 = 902040848962LLU;
	static uint64_t t13 = 1666LLU;

	t13 = ((x65<(x66+x67))&x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x70 = -6954;
	static int32_t x71 = INT32_MAX;
	static volatile int32_t t14 = -1;

	t14 = ((x69<(x70+x71))&x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x73 = 112U;
	static uint64_t x74 = 234117424265LLU;
	int8_t x76 = -1;
	static int32_t t15 = 106;

	t15 = ((x73<(x74+x75))&x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MIN;
	int16_t x80 = INT16_MIN;

	t16 = ((x77<(x78+x79))&x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 0U;
	volatile int16_t x82 = 0;
	static uint64_t x83 = 18232698464876848LLU;
	int64_t t17 = 144LL;

	t17 = ((x81<(x82+x83))&x84);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x86 = INT64_MIN;
	int8_t x87 = 40;
	int32_t t18 = 546868924;

	t18 = ((x85<(x86+x87))&x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int64_t x90 = INT64_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t19 = 999157658410198LL;

	t19 = ((x89<(x90+x91))&x92);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 13833778324071LLU;
	int8_t x96 = INT8_MAX;

	t20 = ((x93<(x94+x95))&x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = -40;
	int16_t x98 = INT16_MIN;
	volatile uint32_t t21 = 957881U;

	t21 = ((x97<(x98+x99))&x100);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	volatile int32_t t22 = -9635;

	t22 = ((x101<(x102+x103))&x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = 0;
	int64_t x106 = INT64_MIN;
	int16_t x107 = INT16_MAX;
	static int8_t x108 = 1;
	int32_t t23 = 1024076;

	t23 = ((x105<(x106+x107))&x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	uint64_t x110 = UINT64_MAX;
	volatile int16_t x111 = 9;
	volatile uint64_t x112 = 19020030LLU;
	static uint64_t t24 = 15376743LLU;

	t24 = ((x109<(x110+x111))&x112);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x113 = INT8_MIN;
	volatile int8_t x114 = -1;
	static uint64_t x115 = 2305756218782LLU;
	uint8_t x116 = 20U;
	static volatile int32_t t25 = 39462759;

	t25 = ((x113<(x114+x115))&x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x117 = INT16_MIN;
	int64_t x118 = INT64_MIN;
	uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 69U;
	volatile int32_t t26 = -2137;

	t26 = ((x117<(x118+x119))&x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x121 = INT16_MIN;
	uint64_t x122 = 1180921LLU;
	int16_t x123 = INT16_MIN;
	static uint16_t x124 = UINT16_MAX;
	volatile int32_t t27 = 2;

	t27 = ((x121<(x122+x123))&x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;
	int32_t t28 = -127;

	t28 = ((x125<(x126+x127))&x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 108229082600439LL;
	uint64_t x130 = UINT64_MAX;
	int8_t x131 = 6;
	static int64_t x132 = -1LL;

	t29 = ((x129<(x130+x131))&x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	uint16_t x134 = 2U;
	volatile int8_t x135 = INT8_MAX;
	uint8_t x136 = 0U;
	int32_t t30 = -52073324;

	t30 = ((x133<(x134+x135))&x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	volatile uint64_t x140 = 11306137945LLU;
	uint64_t t31 = 27263553LLU;

	t31 = ((x137<(x138+x139))&x140);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = -4;
	int32_t t32 = -7863488;

	t32 = ((x141<(x142+x143))&x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 118U;
	volatile int16_t x147 = INT16_MAX;

	t33 = ((x145<(x146+x147))&x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x158 = UINT8_MAX;
	static uint32_t x159 = UINT32_MAX;

	t34 = ((x157<(x158+x159))&x160);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 689046383620400944LLU;
	int64_t x162 = INT64_MIN;
	uint8_t x164 = 3U;
	static int32_t t35 = 56;

	t35 = ((x161<(x162+x163))&x164);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = -1;
	static uint64_t x170 = 125983170LLU;
	int32_t x171 = INT32_MIN;
	int8_t x172 = 4;
	int32_t t36 = -35802;

	t36 = ((x169<(x170+x171))&x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	volatile int64_t x179 = INT64_MIN;
	int16_t x180 = 46;

	t37 = ((x177<(x178+x179))&x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x182 = 22;
	int8_t x183 = INT8_MIN;

	t38 = ((x181<(x182+x183))&x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = UINT32_MAX;
	uint16_t x186 = 22U;
	static uint32_t x187 = 302086U;
	volatile int16_t x188 = 2359;
	int32_t t39 = -7;

	t39 = ((x185<(x186+x187))&x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = -26;
	int32_t x190 = INT32_MAX;
	uint64_t x191 = 157535LLU;
	int32_t x192 = -12298298;
	volatile int32_t t40 = 929733;

	t40 = ((x189<(x190+x191))&x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x193 = 1U;
	static int8_t x194 = 58;
	int32_t x195 = INT32_MIN;
	volatile int32_t t41 = -9;

	t41 = ((x193<(x194+x195))&x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = INT64_MIN;
	int64_t x202 = 864806404873LL;
	static uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MIN;
	static int64_t t42 = -3LL;

	t42 = ((x201<(x202+x203))&x204);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	int32_t x207 = 6;
	volatile uint32_t x208 = 58604U;
	static volatile uint32_t t43 = 13177U;

	t43 = ((x205<(x206+x207))&x208);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x209 = INT16_MIN;
	uint64_t x210 = UINT64_MAX;
	uint16_t x211 = 0U;
	int16_t x212 = INT16_MAX;
	volatile int32_t t44 = -64194424;

	t44 = ((x209<(x210+x211))&x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x213 = -1;
	int8_t x214 = INT8_MAX;
	int32_t x215 = 10;
	uint8_t x216 = 86U;
	volatile int32_t t45 = 1365;

	t45 = ((x213<(x214+x215))&x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = -4;
	int64_t x219 = 1134666LL;
	volatile int16_t x220 = INT16_MAX;
	volatile int32_t t46 = -6;

	t46 = ((x217<(x218+x219))&x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = UINT32_MAX;
	int64_t x222 = INT64_MAX;
	volatile int16_t x223 = -2;
	int16_t x224 = INT16_MIN;
	volatile int32_t t47 = 130488;

	t47 = ((x221<(x222+x223))&x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = 1720464074987760LL;
	int16_t x226 = -1;
	volatile uint8_t x227 = 15U;
	uint32_t x228 = 7U;
	volatile uint32_t t48 = 20544U;

	t48 = ((x225<(x226+x227))&x228);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x229 = 0;
	static uint64_t x230 = 16015LLU;
	int64_t x231 = 986331524LL;
	int8_t x232 = INT8_MAX;
	int32_t t49 = -12;

	t49 = ((x229<(x230+x231))&x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = INT32_MIN;
	uint64_t x234 = UINT64_MAX;
	uint64_t x236 = UINT64_MAX;
	uint64_t t50 = 254LLU;

	t50 = ((x233<(x234+x235))&x236);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x238 = INT64_MIN;
	static int8_t x239 = 3;
	int8_t x240 = INT8_MIN;
	int32_t t51 = 1;

	t51 = ((x237<(x238+x239))&x240);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = -1;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MIN;

	t52 = ((x241<(x242+x243))&x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x245 = UINT16_MAX;
	volatile uint32_t x246 = 2U;
	int16_t x248 = INT16_MIN;
	volatile int32_t t53 = 2461735;

	t53 = ((x245<(x246+x247))&x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 15U;
	uint32_t x250 = 13U;
	int32_t x251 = 9306445;
	static int32_t x252 = INT32_MAX;
	static int32_t t54 = 241931;

	t54 = ((x249<(x250+x251))&x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x254 = 607307U;
	static volatile uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MAX;

	t55 = ((x253<(x254+x255))&x256);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = 121LL;
	int16_t x258 = -1;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = 1U;
	volatile int32_t t56 = -318424468;

	t56 = ((x257<(x258+x259))&x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x262 = 5353U;
	int64_t x263 = 36060937392405LL;
	int32_t t57 = -49;

	t57 = ((x261<(x262+x263))&x264);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 1U;
	int8_t x266 = 0;
	int8_t x267 = -1;
	int32_t t58 = -308;

	t58 = ((x265<(x266+x267))&x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int8_t x271 = 4;
	int32_t x272 = 50;
	volatile int32_t t59 = 5;

	t59 = ((x269<(x270+x271))&x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x274 = -1LL;
	int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MAX;

	t60 = ((x273<(x274+x275))&x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x278 = INT32_MAX;
	int64_t x279 = -110786LL;
	static uint32_t x280 = 1U;
	static volatile uint32_t t61 = 12248U;

	t61 = ((x277<(x278+x279))&x280);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x281 = UINT64_MAX;
	int64_t x282 = INT64_MIN;
	volatile uint8_t x284 = UINT8_MAX;
	int32_t t62 = 669584;

	t62 = ((x281<(x282+x283))&x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x287 = UINT8_MAX;
	uint64_t x288 = UINT64_MAX;

	t63 = ((x285<(x286+x287))&x288);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x290 = 61U;
	static int64_t x291 = 186756674300003062LL;
	uint64_t t64 = 2519603323852688LLU;

	t64 = ((x289<(x290+x291))&x292);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = -1;
	static int32_t x296 = 161266528;

	t65 = ((x293<(x294+x295))&x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile int64_t x299 = 61064432673LL;
	static int64_t t66 = 83140879898776LL;

	t66 = ((x297<(x298+x299))&x300);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x301 = -14922842136762228LL;
	int16_t x303 = INT16_MAX;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t67 = -374873465;

	t67 = ((x301<(x302+x303))&x304);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 15U;
	int8_t x307 = 1;
	static int64_t x308 = -5195522029784LL;
	int64_t t68 = -98950LL;

	t68 = ((x305<(x306+x307))&x308);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x311 = INT64_MIN;
	uint64_t x312 = 28946340366222LLU;
	volatile uint64_t t69 = 3LLU;

	t69 = ((x309<(x310+x311))&x312);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x313 = -1;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 568954525LLU;
	int32_t x316 = INT32_MAX;
	static volatile int32_t t70 = -1408;

	t70 = ((x313<(x314+x315))&x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x317 = INT64_MIN;
	int32_t x318 = -220;
	volatile int16_t x319 = INT16_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t71 = 0;

	t71 = ((x317<(x318+x319))&x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x321 = 19;
	volatile int16_t x322 = INT16_MAX;
	static uint64_t x323 = 188747703688617637LLU;
	int16_t x324 = INT16_MAX;
	int32_t t72 = -3671;

	t72 = ((x321<(x322+x323))&x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x325 = 78U;
	uint64_t x326 = UINT64_MAX;
	int32_t x327 = -1;
	static uint64_t x328 = 256903180LLU;
	uint64_t t73 = 551517540LLU;

	t73 = ((x325<(x326+x327))&x328);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x330 = -1;
	volatile uint32_t x331 = 719U;
	static uint32_t x332 = 533972157U;
	volatile uint32_t t74 = 43879021U;

	t74 = ((x329<(x330+x331))&x332);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = -1LL;
	int16_t x334 = INT16_MIN;
	int16_t x335 = -1;
	int8_t x336 = -21;
	volatile int32_t t75 = -3570;

	t75 = ((x333<(x334+x335))&x336);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x341 = UINT32_MAX;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = UINT32_MAX;
	uint32_t x344 = 4327U;

	t76 = ((x341<(x342+x343))&x344);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x345 = INT8_MAX;
	uint16_t x346 = UINT16_MAX;
	static volatile int32_t t77 = 1;

	t77 = ((x345<(x346+x347))&x348);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x358 = INT16_MIN;
	static uint64_t x360 = 986668946715429LLU;
	volatile uint64_t t78 = 738LLU;

	t78 = ((x357<(x358+x359))&x360);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x363 = INT8_MAX;

	t79 = ((x361<(x362+x363))&x364);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = INT32_MIN;
	static int64_t x370 = -1LL;
	int64_t x371 = 94350912161LL;
	int32_t t80 = -6933610;

	t80 = ((x369<(x370+x371))&x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MAX;
	volatile uint32_t x374 = 10489U;
	uint16_t x375 = 424U;
	int64_t t81 = 4304825936LL;

	t81 = ((x373<(x374+x375))&x376);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x377 = UINT16_MAX;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MIN;
	int16_t x380 = INT16_MAX;

	t82 = ((x377<(x378+x379))&x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x381 = -2148929977145479034LL;
	int32_t x382 = 1093100;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t83 = 1;

	t83 = ((x381<(x382+x383))&x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x385 = 61185800150992510LL;
	static int8_t x386 = -56;
	int64_t x387 = -504994LL;
	static int8_t x388 = INT8_MIN;
	static volatile int32_t t84 = -77878204;

	t84 = ((x385<(x386+x387))&x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x394 = 221391952895LL;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t85 = 15617920;

	t85 = ((x393<(x394+x395))&x396);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x397 = UINT8_MAX;
	static volatile int8_t x400 = INT8_MIN;

	t86 = ((x397<(x398+x399))&x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = INT16_MIN;
	volatile int8_t x402 = -1;
	volatile int16_t x403 = INT16_MIN;
	uint8_t x404 = 2U;
	volatile int32_t t87 = -648694690;

	t87 = ((x401<(x402+x403))&x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = INT32_MIN;
	static int16_t x406 = -1;
	int16_t x407 = INT16_MAX;
	static int16_t x408 = 10168;
	static volatile int32_t t88 = 721;

	t88 = ((x405<(x406+x407))&x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = -1;
	int64_t x411 = -13181794332517LL;
	int16_t x412 = INT16_MIN;
	int32_t t89 = 3;

	t89 = ((x409<(x410+x411))&x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MIN;
	uint32_t x414 = UINT32_MAX;
	static volatile int32_t t90 = -6;

	t90 = ((x413<(x414+x415))&x416);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x417 = 253033U;
	static uint16_t x418 = 209U;
	static volatile int64_t x419 = -9324799995LL;
	uint16_t x420 = UINT16_MAX;

	t91 = ((x417<(x418+x419))&x420);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = UINT32_MAX;
	static int64_t x426 = 446LL;
	static uint8_t x427 = 0U;
	int16_t x428 = INT16_MIN;

	t92 = ((x425<(x426+x427))&x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x429 = 12U;
	uint16_t x430 = UINT16_MAX;
	volatile int64_t x431 = -1LL;
	uint16_t x432 = 1U;
	volatile int32_t t93 = -5695;

	t93 = ((x429<(x430+x431))&x432);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x438 = 56;
	int16_t x439 = -1;
	uint64_t x440 = 9068691583531131401LLU;

	t94 = ((x437<(x438+x439))&x440);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x442 = -12007;
	int32_t t95 = -261;

	t95 = ((x441<(x442+x443))&x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x446 = 369719552;
	int32_t x447 = -1;
	int32_t t96 = -336344;

	t96 = ((x445<(x446+x447))&x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 53U;
	volatile uint8_t x450 = UINT8_MAX;
	static int32_t x451 = 378331534;
	int64_t x452 = -1LL;
	volatile int64_t t97 = 74614739LL;

	t97 = ((x449<(x450+x451))&x452);

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x457 = INT8_MIN;
	int64_t x458 = -1393LL;
	int16_t x459 = INT16_MAX;
	int32_t x460 = -1;

	t98 = ((x457<(x458+x459))&x460);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = INT32_MAX;
	volatile int8_t x464 = INT8_MIN;
	int32_t t99 = -25248038;

	t99 = ((x461<(x462+x463))&x464);

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
