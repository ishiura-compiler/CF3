#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x1 = UINT32_MAX;
uint16_t x2 = 87U;
int32_t t0 = 0;
volatile int32_t t1 = 30984912;
static uint64_t x24 = 223811LLU;
volatile int8_t x27 = 0;
int8_t x40 = -1;
int16_t x42 = INT16_MIN;
int64_t x44 = INT64_MIN;
volatile int32_t t9 = -77;
int16_t x56 = INT16_MAX;
volatile int64_t x57 = INT64_MIN;
volatile uint32_t x59 = 67221602U;
int16_t x61 = 0;
static volatile uint16_t x63 = 16200U;
volatile int32_t t12 = 332163;
int64_t x79 = 379626LL;
int32_t x81 = INT32_MIN;
int32_t t16 = -1893752;
static volatile int32_t x87 = 1315;
static uint64_t x99 = 10382LLU;
static int8_t x101 = -1;
static uint32_t t19 = 2240618U;
int16_t x105 = INT16_MIN;
static int16_t x114 = INT16_MIN;
uint16_t x117 = UINT16_MAX;
int32_t x130 = INT32_MAX;
int64_t x136 = INT64_MAX;
int64_t t26 = INT64_MAX;
int8_t x151 = -23;
int8_t x152 = 0;
volatile int32_t t29 = -174;
int8_t x185 = INT8_MIN;
static int32_t x190 = -1;
int16_t x194 = INT16_MIN;
static int32_t t34 = INT32_MIN;
static volatile int16_t x200 = -427;
int64_t x208 = 59039LL;
int8_t x215 = INT8_MAX;
uint8_t x231 = UINT8_MAX;
int16_t x232 = -1;
uint64_t x241 = 1865147798LLU;
uint32_t x255 = 105713U;
uint16_t x265 = 498U;
int64_t x271 = -1746405092LL;
int16_t x275 = INT16_MIN;
volatile uint32_t x281 = 1U;
int8_t x288 = -30;
volatile int32_t t50 = 65290328;
static int8_t x295 = -1;
int16_t x301 = INT16_MIN;
volatile int32_t t54 = 770251;
int32_t x337 = -37504611;
static uint16_t x339 = 38U;
uint8_t x340 = UINT8_MAX;
static uint16_t x343 = 416U;
uint32_t x349 = 21U;
static int16_t x352 = INT16_MIN;
static volatile int32_t t58 = -57;
int32_t x364 = -1;
static int64_t x365 = INT64_MAX;
volatile int64_t x372 = 158538739LL;
static volatile int8_t x381 = INT8_MIN;
uint16_t x384 = UINT16_MAX;
static int32_t t65 = -11;
static volatile uint8_t x403 = 36U;
volatile int32_t x409 = 14318163;
int32_t t68 = -3163166;
uint8_t x419 = 106U;
static volatile int32_t t69 = 3342;
int8_t x423 = INT8_MIN;
static uint8_t x424 = UINT8_MAX;
volatile int32_t x427 = INT32_MAX;
int64_t x428 = -1LL;
volatile uint8_t x434 = 126U;
volatile int32_t t76 = 1;
volatile uint64_t x460 = UINT64_MAX;
static int16_t x476 = 0;
volatile int32_t t80 = 12;
int16_t x483 = INT16_MIN;
int32_t t81 = -52;
static int64_t x504 = 1012LL;
static volatile int8_t x508 = INT8_MAX;
int64_t x517 = INT64_MAX;
uint8_t x518 = 54U;
uint16_t x528 = 1U;
int8_t x543 = -1;
volatile int64_t t91 = 720788069742266721LL;
static int8_t x548 = -1;
static int8_t x556 = -1;
uint16_t x559 = UINT16_MAX;
uint16_t x568 = 3U;
uint8_t x571 = 19U;
volatile int32_t t96 = -1989878;
static int32_t t98 = -807;
uint64_t x581 = 1063LLU;


void f0(void) {
	int64_t x3 = 1LL;
	int8_t x4 = INT8_MIN;

	t0 = ((x1<(x2*x3))^x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = UINT32_MAX;
	volatile uint64_t x10 = UINT64_MAX;
	uint32_t x11 = 610937U;
	volatile int16_t x12 = 737;

	t1 = ((x9<(x10*x11))^x12);

	if (t1 != 736) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 1U;
	int8_t x14 = INT8_MIN;
	int8_t x15 = 45;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = ((x13<(x14*x15))^x16);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	volatile int32_t x18 = INT32_MIN;
	uint32_t x19 = 0U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 0;

	t3 = ((x17<(x18*x19))^x20);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -28876;
	uint32_t x22 = 6205610U;
	uint8_t x23 = UINT8_MAX;
	volatile uint64_t t4 = 9302096160114260LLU;

	t4 = ((x21<(x22*x23))^x24);

	if (t4 != 223811LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -96LL;
	volatile uint32_t x26 = 2U;
	int16_t x28 = 0;
	int32_t t5 = -30630;

	t5 = ((x25<(x26*x27))^x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x37 = -326683025;
	volatile uint16_t x38 = UINT16_MAX;
	uint16_t x39 = 856U;
	int32_t t6 = -15736247;

	t6 = ((x37<(x38*x39))^x40);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MAX;
	int64_t x43 = -1LL;
	int64_t t7 = INT64_MIN;

	t7 = ((x41<(x42*x43))^x44);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 9U;
	static uint16_t x46 = 118U;
	int32_t x47 = 0;
	uint32_t x48 = 27U;
	static volatile uint32_t t8 = 293150303U;

	t8 = ((x45<(x46*x47))^x48);

	if (t8 != 27U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x49 = INT32_MIN;
	uint32_t x50 = 0U;
	volatile int16_t x51 = INT16_MIN;
	uint8_t x52 = UINT8_MAX;

	t9 = ((x49<(x50*x51))^x52);

	if (t9 != 255) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = -508;
	int16_t x55 = INT16_MIN;
	static int32_t t10 = 3;

	t10 = ((x53<(x54*x55))^x56);

	if (t10 != 32766) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x58 = 27;
	int8_t x60 = -1;
	static int32_t t11 = 373;

	t11 = ((x57<(x58*x59))^x60);

	if (t11 != -2) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x62 = 571LLU;
	volatile uint8_t x64 = 7U;

	t12 = ((x61<(x62*x63))^x64);

	if (t12 != 6) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x69 = 431867U;
	static volatile uint32_t x70 = 304341U;
	static int32_t x71 = -377995;
	int8_t x72 = INT8_MIN;
	volatile int32_t t13 = 249308;

	t13 = ((x69<(x70*x71))^x72);

	if (t13 != -127) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 129259949LLU;
	uint64_t x74 = 558444LLU;
	int8_t x75 = -1;
	static int64_t x76 = INT64_MIN;
	int64_t t14 = -1786089LL;

	t14 = ((x73<(x74*x75))^x76);

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x77 = 66057454472054828LLU;
	uint32_t x78 = 43308820U;
	volatile int64_t x80 = 9274499047014978LL;
	static int64_t t15 = -32276731LL;

	t15 = ((x77<(x78*x79))^x80);

	if (t15 != 9274499047014978LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x82 = 1802158227LL;
	int16_t x83 = INT16_MIN;
	int32_t x84 = -1;

	t16 = ((x81<(x82*x83))^x84);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = 755U;
	int64_t x86 = -35315486LL;
	int32_t x88 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = ((x85<(x86*x87))^x88);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 239319900LL;
	static volatile int64_t x98 = -14704880122056479LL;
	static volatile int64_t x100 = -1LL;
	volatile int64_t t18 = -1LL;

	t18 = ((x97<(x98*x99))^x100);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 59U;
	uint32_t x104 = 2055573418U;

	t19 = ((x101<(x102*x103))^x104);

	if (t19 != 2055573418U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x106 = INT32_MIN;
	static int64_t x107 = -1LL;
	int16_t x108 = INT16_MAX;
	volatile int32_t t20 = 35;

	t20 = ((x105<(x106*x107))^x108);

	if (t20 != 32766) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x109 = 1U;
	volatile int32_t x110 = INT32_MIN;
	static uint32_t x111 = UINT32_MAX;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t21 = -1653;

	t21 = ((x109<(x110*x111))^x112);

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = 219LLU;
	static volatile int8_t x115 = 1;
	volatile int64_t x116 = INT64_MAX;
	int64_t t22 = 717889091438892LL;

	t22 = ((x113<(x114*x115))^x116);

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x118 = INT8_MIN;
	static uint32_t x119 = UINT32_MAX;
	int16_t x120 = -1;
	int32_t t23 = 25811;

	t23 = ((x117<(x118*x119))^x120);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x121 = INT32_MIN;
	static int8_t x122 = 1;
	volatile uint32_t x123 = 13232U;
	static int16_t x124 = -1;
	static volatile int32_t t24 = -23467260;

	t24 = ((x121<(x122*x123))^x124);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 1;
	volatile uint32_t x131 = 1403U;
	int8_t x132 = INT8_MAX;
	int32_t t25 = 47;

	t25 = ((x129<(x130*x131))^x132);

	if (t25 != 126) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = 2151569684919066276LL;
	volatile uint32_t x134 = 2131128457U;
	int16_t x135 = -3;

	t26 = ((x133<(x134*x135))^x136);

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = 5366;
	uint64_t x138 = 9766729958LLU;
	volatile int64_t x139 = 35486906639277LL;
	int8_t x140 = INT8_MIN;
	static volatile int32_t t27 = -3168263;

	t27 = ((x137<(x138*x139))^x140);

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = 6U;
	static uint8_t x146 = UINT8_MAX;
	uint16_t x147 = UINT16_MAX;
	volatile uint16_t x148 = 0U;
	volatile int32_t t28 = 95;

	t28 = ((x145<(x146*x147))^x148);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x149 = UINT8_MAX;
	static int32_t x150 = 72237;

	t29 = ((x149<(x150*x151))^x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	int32_t x159 = INT32_MAX;
	int32_t x160 = 1;
	static int32_t t30 = -196482918;

	t30 = ((x157<(x158*x159))^x160);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x161 = INT64_MIN;
	uint8_t x162 = 28U;
	int32_t x163 = -1;
	static volatile int32_t x164 = INT32_MAX;
	volatile int32_t t31 = 1857;

	t31 = ((x161<(x162*x163))^x164);

	if (t31 != 2147483646) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x186 = 18882599U;
	uint64_t x187 = 0LLU;
	static int64_t x188 = INT64_MIN;
	int64_t t32 = INT64_MIN;

	t32 = ((x185<(x186*x187))^x188);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x189 = INT64_MAX;
	int16_t x191 = -371;
	int32_t x192 = -1;
	int32_t t33 = 397;

	t33 = ((x189<(x190*x191))^x192);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x193 = -1;
	int16_t x195 = 1;
	int32_t x196 = INT32_MIN;

	t34 = ((x193<(x194*x195))^x196);

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x197 = 0;
	volatile uint64_t x198 = 4055411991LLU;
	static int32_t x199 = 14281610;
	int32_t t35 = -168990219;

	t35 = ((x197<(x198*x199))^x200);

	if (t35 != -428) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 148359U;
	uint32_t x206 = 53324362U;
	int32_t x207 = INT32_MIN;
	volatile int64_t t36 = 389615LL;

	t36 = ((x205<(x206*x207))^x208);

	if (t36 != 59039LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x209 = INT8_MIN;
	uint64_t x210 = UINT64_MAX;
	static int64_t x211 = -1LL;
	int8_t x212 = -25;
	volatile int32_t t37 = -153;

	t37 = ((x209<(x210*x211))^x212);

	if (t37 != -25) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	static int16_t x216 = -5890;
	static volatile int32_t t38 = 4278;

	t38 = ((x213<(x214*x215))^x216);

	if (t38 != -5889) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	int8_t x227 = INT8_MIN;
	uint16_t x228 = 10469U;
	int32_t t39 = -2223038;

	t39 = ((x225<(x226*x227))^x228);

	if (t39 != 10468) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x229 = 1601LLU;
	uint8_t x230 = UINT8_MAX;
	static volatile int32_t t40 = -3;

	t40 = ((x229<(x230*x231))^x232);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x237 = -1;
	uint8_t x238 = UINT8_MAX;
	uint16_t x239 = UINT16_MAX;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t41 = 405770311U;

	t41 = ((x237<(x238*x239))^x240);

	if (t41 != 4294967294U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x242 = -35;
	int16_t x243 = INT16_MIN;
	volatile int64_t x244 = INT64_MAX;
	volatile int64_t t42 = INT64_MAX;

	t42 = ((x241<(x242*x243))^x244);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	volatile uint32_t x251 = 12U;
	static int16_t x252 = INT16_MIN;
	int32_t t43 = -388670672;

	t43 = ((x249<(x250*x251))^x252);

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x254 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;
	static volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x253<(x254*x255))^x256);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x257 = INT8_MIN;
	static volatile uint32_t x258 = 380727U;
	static int32_t x259 = INT32_MAX;
	volatile int8_t x260 = INT8_MIN;
	volatile int32_t t45 = -1;

	t45 = ((x257<(x258*x259))^x260);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x266 = UINT8_MAX;
	volatile int8_t x267 = INT8_MIN;
	uint8_t x268 = 6U;
	volatile int32_t t46 = -21919;

	t46 = ((x265<(x266*x267))^x268);

	if (t46 != 6) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = -1;
	int32_t x270 = INT32_MIN;
	volatile int16_t x272 = -1;
	volatile int32_t t47 = 1;

	t47 = ((x269<(x270*x271))^x272);

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	uint64_t x276 = 17189339960997LLU;
	uint64_t t48 = 28044091614LLU;

	t48 = ((x273<(x274*x275))^x276);

	if (t48 != 17189339960997LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x282 = -1;
	int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t49 = 14539;

	t49 = ((x281<(x282*x283))^x284);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x285 = 65U;
	int32_t x286 = INT32_MAX;
	int16_t x287 = -1;

	t50 = ((x285<(x286*x287))^x288);

	if (t50 != -30) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MIN;
	volatile uint16_t x294 = 20280U;
	int64_t x296 = -1LL;
	int64_t t51 = 23277332418LL;

	t51 = ((x293<(x294*x295))^x296);

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x302 = -1;
	static int32_t x303 = INT32_MAX;
	uint32_t x304 = 7734U;
	static uint32_t t52 = 3118139U;

	t52 = ((x301<(x302*x303))^x304);

	if (t52 != 7734U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x305 = -1;
	static uint16_t x306 = 8889U;
	volatile int8_t x307 = -1;
	int16_t x308 = INT16_MIN;
	int32_t t53 = -6;

	t53 = ((x305<(x306*x307))^x308);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x325 = 156707775;
	int32_t x326 = INT32_MIN;
	volatile uint64_t x327 = 537LLU;
	uint8_t x328 = 9U;

	t54 = ((x325<(x326*x327))^x328);

	if (t54 != 8) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x329 = -16922786011LL;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = -1;
	uint8_t x332 = 6U;
	static int32_t t55 = -15663;

	t55 = ((x329<(x330*x331))^x332);

	if (t55 != 7) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x338 = 5;
	volatile int32_t t56 = 678703;

	t56 = ((x337<(x338*x339))^x340);

	if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x341 = 50414;
	int16_t x342 = INT16_MAX;
	int16_t x344 = INT16_MAX;
	volatile int32_t t57 = -18148377;

	t57 = ((x341<(x342*x343))^x344);

	if (t57 != 32766) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x350 = 0;
	int32_t x351 = -1;

	t58 = ((x349<(x350*x351))^x352);

	if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x357 = 0;
	volatile uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 224044841U;
	int8_t x360 = 12;
	int32_t t59 = 816007;

	t59 = ((x357<(x358*x359))^x360);

	if (t59 != 13) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = 5;
	static int8_t x363 = -2;
	int32_t t60 = -88;

	t60 = ((x361<(x362*x363))^x364);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x366 = -180;
	static volatile int16_t x367 = INT16_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t61 = INT32_MIN;

	t61 = ((x365<(x366*x367))^x368);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x369 = 156U;
	uint16_t x370 = 2430U;
	uint64_t x371 = 5794035423188724923LLU;
	static int64_t t62 = 354180LL;

	t62 = ((x369<(x370*x371))^x372);

	if (t62 != 158538738LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x373 = 8379;
	int32_t x374 = 241;
	uint16_t x375 = UINT16_MAX;
	static volatile int64_t x376 = INT64_MIN;
	volatile int64_t t63 = 21LL;

	t63 = ((x373<(x374*x375))^x376);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x382 = INT8_MIN;
	volatile int16_t x383 = INT16_MIN;
	int32_t t64 = -48462878;

	t64 = ((x381<(x382*x383))^x384);

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x389 = UINT32_MAX;
	int64_t x390 = 581852280LL;
	uint32_t x391 = UINT32_MAX;
	int32_t x392 = INT32_MIN;

	t65 = ((x389<(x390*x391))^x392);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x393 = UINT32_MAX;
	int32_t x394 = 3;
	int32_t x395 = -1;
	volatile uint32_t x396 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = ((x393<(x394*x395))^x396);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint32_t x402 = UINT32_MAX;
	int16_t x404 = -982;
	int32_t t67 = 77112532;

	t67 = ((x401<(x402*x403))^x404);

	if (t67 != -982) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x410 = -1;
	int8_t x411 = -1;
	uint8_t x412 = UINT8_MAX;

	t68 = ((x409<(x410*x411))^x412);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x417 = INT32_MAX;
	static uint64_t x418 = 5386751002245116LLU;
	int32_t x420 = INT32_MIN;

	t69 = ((x417<(x418*x419))^x420);

	if (t69 != -2147483647) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x421 = -1LL;
	uint32_t x422 = 7503U;
	static int32_t t70 = -176;

	t70 = ((x421<(x422*x423))^x424);

	if (t70 != 254) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x425 = INT32_MIN;
	uint32_t x426 = 3U;
	volatile int64_t t71 = 61LL;

	t71 = ((x425<(x426*x427))^x428);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x429 = UINT64_MAX;
	volatile uint8_t x430 = 14U;
	volatile uint32_t x431 = UINT32_MAX;
	uint32_t x432 = 30U;
	volatile uint32_t t72 = 1U;

	t72 = ((x429<(x430*x431))^x432);

	if (t72 != 30U) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x433 = INT16_MIN;
	static uint64_t x435 = 23LLU;
	int8_t x436 = -1;
	static int32_t t73 = -2574838;

	t73 = ((x433<(x434*x435))^x436);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x437 = 240;
	uint32_t x438 = 46534602U;
	static int16_t x439 = INT16_MIN;
	int8_t x440 = INT8_MIN;
	int32_t t74 = -3420;

	t74 = ((x437<(x438*x439))^x440);

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x441 = INT32_MIN;
	uint64_t x442 = 293LLU;
	static int16_t x443 = 5;
	int32_t x444 = 139213081;
	volatile int32_t t75 = -239795314;

	t75 = ((x441<(x442*x443))^x444);

	if (t75 != 139213081) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x445 = UINT16_MAX;
	uint32_t x446 = 42218106U;
	static int16_t x447 = INT16_MIN;
	int16_t x448 = 2;

	t76 = ((x445<(x446*x447))^x448);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x457 = INT8_MAX;
	uint8_t x458 = UINT8_MAX;
	volatile int32_t x459 = -1;
	static uint64_t t77 = UINT64_MAX;

	t77 = ((x457<(x458*x459))^x460);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x465 = 18;
	uint64_t x466 = UINT64_MAX;
	static int16_t x467 = 1;
	uint64_t x468 = 329370LLU;
	volatile uint64_t t78 = 33547076754540LLU;

	t78 = ((x465<(x466*x467))^x468);

	if (t78 != 329371LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x473 = -1;
	uint32_t x474 = 952432U;
	int32_t x475 = INT32_MIN;
	int32_t t79 = 18357819;

	t79 = ((x473<(x474*x475))^x476);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = INT8_MIN;
	uint16_t x478 = UINT16_MAX;
	volatile int8_t x479 = -9;
	int16_t x480 = -1;

	t80 = ((x477<(x478*x479))^x480);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x481 = INT32_MIN;
	uint32_t x482 = 869697080U;
	uint16_t x484 = 28U;

	t81 = ((x481<(x482*x483))^x484);

	if (t81 != 29) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x485 = UINT64_MAX;
	int16_t x486 = -43;
	int8_t x487 = INT8_MAX;
	int16_t x488 = INT16_MIN;
	int32_t t82 = 4;

	t82 = ((x485<(x486*x487))^x488);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x489 = INT64_MIN;
	volatile uint16_t x490 = 0U;
	int8_t x491 = 15;
	volatile int16_t x492 = -1;
	int32_t t83 = -405663143;

	t83 = ((x489<(x490*x491))^x492);

	if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x493 = 3657U;
	uint8_t x494 = 122U;
	int8_t x495 = -1;
	uint8_t x496 = UINT8_MAX;
	static int32_t t84 = -156;

	t84 = ((x493<(x494*x495))^x496);

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x501 = -24652;
	volatile int8_t x502 = INT8_MIN;
	static uint8_t x503 = 6U;
	static int64_t t85 = 53848LL;

	t85 = ((x501<(x502*x503))^x504);

	if (t85 != 1013LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = INT64_MIN;
	volatile int8_t x506 = INT8_MAX;
	uint16_t x507 = UINT16_MAX;
	volatile int32_t t86 = -15082;

	t86 = ((x505<(x506*x507))^x508);

	if (t86 != 126) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x519 = 11337U;
	int16_t x520 = INT16_MIN;
	volatile int32_t t87 = 23258;

	t87 = ((x517<(x518*x519))^x520);

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x521 = 1;
	static int8_t x522 = 1;
	volatile uint8_t x523 = 27U;
	volatile uint32_t x524 = 1U;
	uint32_t t88 = 1639U;

	t88 = ((x521<(x522*x523))^x524);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x525 = 13442U;
	int8_t x526 = INT8_MIN;
	uint32_t x527 = UINT32_MAX;
	static volatile int32_t t89 = -3;

	t89 = ((x525<(x526*x527))^x528);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x537 = INT32_MIN;
	int8_t x538 = 11;
	static int16_t x539 = INT16_MAX;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t90 = -5376753;

	t90 = ((x537<(x538*x539))^x540);

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x541 = 124U;
	static volatile int32_t x542 = -1;
	int64_t x544 = -38108489705120722LL;

	t91 = ((x541<(x542*x543))^x544);

	if (t91 != -38108489705120722LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x545 = INT8_MIN;
	int32_t x546 = -1;
	volatile int8_t x547 = INT8_MIN;
	volatile int32_t t92 = 21345;

	t92 = ((x545<(x546*x547))^x548);

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x553 = 476442LLU;
	int64_t x554 = -1330724531249LL;
	uint16_t x555 = UINT16_MAX;
	int32_t t93 = -34;

	t93 = ((x553<(x554*x555))^x556);

	if (t93 != -2) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x557 = INT8_MIN;
	int32_t x558 = -1;
	int32_t x560 = -1;
	static int32_t t94 = 3871;

	t94 = ((x557<(x558*x559))^x560);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x565 = 3711LLU;
	volatile int32_t x566 = INT32_MIN;
	volatile uint32_t x567 = UINT32_MAX;
	int32_t t95 = 316837331;

	t95 = ((x565<(x566*x567))^x568);

	if (t95 != 2) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x569 = INT8_MIN;
	int8_t x570 = INT8_MIN;
	static int8_t x572 = INT8_MIN;

	t96 = ((x569<(x570*x571))^x572);

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x573 = 6U;
	uint32_t x574 = UINT32_MAX;
	uint64_t x575 = UINT64_MAX;
	int8_t x576 = INT8_MIN;
	volatile int32_t t97 = -29;

	t97 = ((x573<(x574*x575))^x576);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x577 = UINT64_MAX;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = -3310;
	int32_t x580 = 2569872;

	t98 = ((x577<(x578*x579))^x580);

	if (t98 != 2569872) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x582 = UINT32_MAX;
	int16_t x583 = INT16_MIN;
	volatile int8_t x584 = INT8_MAX;
	volatile int32_t t99 = 379903;

	t99 = ((x581<(x582*x583))^x584);

	if (t99 != 126) { NG(); } else { ; }
	
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

