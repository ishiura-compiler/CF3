#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
int32_t x3 = 627;
volatile int32_t t0 = 1705626;
int32_t t1 = 3589;
static int64_t x12 = -5071LL;
int32_t x15 = -1;
volatile int16_t x20 = -1;
uint8_t x23 = 83U;
int32_t t5 = -12144;
volatile int32_t x26 = INT32_MAX;
volatile int16_t x32 = -1;
uint32_t x33 = 252733U;
uint16_t x42 = 342U;
int16_t x43 = -1;
int16_t x45 = INT16_MIN;
int32_t x49 = -1;
uint32_t x50 = 6233U;
static int32_t t12 = 0;
uint32_t x53 = UINT32_MAX;
uint32_t x54 = 189963541U;
static volatile uint16_t x57 = 1U;
int64_t x59 = INT64_MIN;
int8_t x66 = -1;
uint16_t x67 = 1U;
volatile int32_t t15 = -8604986;
static uint32_t x70 = 10U;
int32_t x72 = -437;
int16_t x83 = INT16_MIN;
uint16_t x91 = UINT16_MAX;
static volatile int16_t x93 = -1;
int16_t x110 = INT16_MAX;
volatile int64_t x113 = 1488166339LL;
int16_t x117 = INT16_MAX;
volatile uint64_t x119 = UINT64_MAX;
int16_t x127 = INT16_MIN;
static volatile uint64_t x128 = 879941593105830LLU;
int32_t t29 = -83;
int16_t x135 = -1;
int64_t x136 = INT64_MIN;
static volatile int32_t t30 = -3;
int32_t x141 = -1;
int32_t t32 = 105854138;
uint16_t x146 = 558U;
int32_t t33 = -2;
static volatile int32_t t36 = -37353943;
int8_t x169 = INT8_MIN;
int32_t x175 = 6;
uint64_t x176 = 732490557LLU;
uint8_t x190 = 3U;
int16_t x191 = -828;
int8_t x192 = 1;
static int16_t x198 = 1;
volatile int16_t x199 = INT16_MIN;
static uint32_t x203 = UINT32_MAX;
uint32_t x206 = UINT32_MAX;
static int16_t x213 = -1;
int8_t x217 = -1;
volatile int8_t x237 = -1;
int16_t x251 = -717;
int8_t x256 = INT8_MIN;
int32_t x257 = 13;
uint8_t x260 = 43U;
uint8_t x262 = 1U;
int32_t x263 = INT32_MAX;
uint8_t x278 = 63U;
volatile int32_t x281 = INT32_MIN;
int8_t x293 = 30;
static volatile uint8_t x316 = 1U;
int32_t x321 = INT32_MIN;
uint32_t x327 = 591U;
uint32_t x330 = 426U;
volatile uint64_t x332 = UINT64_MAX;
uint16_t x333 = 7U;
static volatile int32_t x336 = INT32_MIN;
static uint16_t x337 = 7358U;
uint8_t x346 = 0U;
int16_t x348 = -1;
volatile int64_t x359 = INT64_MAX;
int16_t x363 = INT16_MIN;
int16_t x370 = 1;
volatile int64_t x375 = INT64_MAX;
uint32_t x376 = 114905279U;
int32_t t82 = 2;
static int32_t t83 = -471;
uint64_t x385 = 20LLU;
int32_t t87 = -337302167;
volatile int32_t t89 = -2834;
int64_t x409 = INT64_MAX;
volatile int32_t x419 = INT32_MIN;
uint32_t x424 = 178U;
static uint16_t x432 = UINT16_MAX;
uint64_t x434 = 33LLU;
volatile int32_t t96 = 17;
volatile uint16_t x441 = 2842U;
int64_t x442 = INT64_MAX;
uint8_t x443 = 1U;
static int8_t x446 = INT8_MIN;
uint16_t x447 = 15U;
uint64_t x448 = 72484645143307LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	static int16_t x4 = INT16_MIN;

	t0 = (x1<=((x2/x3)*x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	uint8_t x6 = 4U;
	volatile int64_t x7 = 2143LL;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5<=((x6/x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	uint8_t x10 = 9U;
	uint64_t x11 = UINT64_MAX;
	static int32_t t2 = -392755213;

	t2 = (x9<=((x10/x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 201221U;
	static int8_t x14 = -1;
	int64_t x16 = INT64_MAX;
	int32_t t3 = -1380;

	t3 = (x13<=((x14/x15)*x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 344220669269LLU;
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -203;

	t4 = (x17<=((x18/x19)*x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint16_t x22 = 4U;
	static uint64_t x24 = 122LLU;

	t5 = (x21<=((x22/x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	static int8_t x27 = INT8_MIN;
	int32_t x28 = -113;
	static volatile int32_t t6 = 4;

	t6 = (x25<=((x26/x27)*x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = UINT32_MAX;
	static uint8_t x30 = UINT8_MAX;
	static int32_t x31 = INT32_MAX;
	static int32_t t7 = -25655604;

	t7 = (x29<=((x30/x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 8831947100LLU;
	int8_t x35 = 7;
	int8_t x36 = -2;
	static volatile int32_t t8 = -15;

	t8 = (x33<=((x34/x35)*x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 3063U;
	volatile uint64_t x38 = 60440873272663621LLU;
	int64_t x39 = INT64_MIN;
	uint32_t x40 = 1U;
	int32_t t9 = 37324;

	t9 = (x37<=((x38/x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	volatile int64_t x44 = -1LL;
	int32_t t10 = 376052362;

	t10 = (x41<=((x42/x43)*x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x46 = -1;
	volatile int64_t x47 = -1LL;
	int32_t x48 = -1;
	volatile int32_t t11 = -448;

	t11 = (x45<=((x46/x47)*x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x51 = UINT16_MAX;
	static volatile int8_t x52 = INT8_MIN;

	t12 = (x49<=((x50/x51)*x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = -267322;

	t13 = (x53<=((x54/x55)*x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -2197;

	t14 = (x57<=((x58/x59)*x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = 113018754;
	static uint32_t x68 = UINT32_MAX;

	t15 = (x65<=((x66/x67)*x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int32_t x71 = INT32_MIN;
	volatile int32_t t16 = 745414;

	t16 = (x69<=((x70/x71)*x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int8_t x74 = INT8_MAX;
	static int16_t x75 = -1;
	uint64_t x76 = 43368345732LLU;
	int32_t t17 = -1;

	t17 = (x73<=((x74/x75)*x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 14221658801LLU;
	volatile int16_t x79 = -982;
	int64_t x80 = INT64_MIN;
	int32_t t18 = -15;

	t18 = (x77<=((x78/x79)*x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x81 = INT64_MIN;
	uint32_t x82 = UINT32_MAX;
	static int16_t x84 = 16;
	int32_t t19 = -7474181;

	t19 = (x81<=((x82/x83)*x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = INT16_MIN;
	uint16_t x86 = 53U;
	uint32_t x87 = UINT32_MAX;
	volatile int64_t x88 = INT64_MAX;
	volatile int32_t t20 = 31346;

	t20 = (x85<=((x86/x87)*x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int32_t x90 = INT32_MAX;
	volatile uint16_t x92 = 1U;
	int32_t t21 = 2746;

	t21 = (x89<=((x90/x91)*x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x94 = INT16_MAX;
	static int64_t x95 = 1773308989950LL;
	int64_t x96 = -1LL;
	static volatile int32_t t22 = -3;

	t22 = (x93<=((x94/x95)*x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = 1735173;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 345613U;
	static uint16_t x100 = 1906U;
	static int32_t t23 = -15502;

	t23 = (x97<=((x98/x99)*x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1453479U;
	int32_t x102 = 104460234;
	uint16_t x103 = 3599U;
	uint16_t x104 = 2U;
	int32_t t24 = 44;

	t24 = (x101<=((x102/x103)*x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	uint64_t x112 = UINT64_MAX;
	int32_t t25 = 59;

	t25 = (x109<=((x110/x111)*x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x114 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	uint8_t x116 = 0U;
	volatile int32_t t26 = 230025;

	t26 = (x113<=((x114/x115)*x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x118 = -850296;
	int32_t x120 = -27;
	volatile int32_t t27 = -422304;

	t27 = (x117<=((x118/x119)*x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = -1;
	static volatile int16_t x126 = -7;
	static int32_t t28 = -96;

	t28 = (x125<=((x126/x127)*x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -25;
	static volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = UINT32_MAX;
	static volatile int32_t x132 = 128;

	t29 = (x129<=((x130/x131)*x132));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 17710U;
	static volatile int32_t x134 = -1;

	t30 = (x133<=((x134/x135)*x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -42260780318428517LL;
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = UINT32_MAX;
	int32_t t31 = -72;

	t31 = (x137<=((x138/x139)*x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	uint8_t x144 = 5U;

	t32 = (x141<=((x142/x143)*x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 98147LLU;
	uint16_t x147 = 873U;
	int64_t x148 = 77108871372998LL;

	t33 = (x145<=((x146/x147)*x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = -1994;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t34 = 177421059;

	t34 = (x149<=((x150/x151)*x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x153 = 937U;
	uint32_t x154 = 56838U;
	static int64_t x155 = INT64_MIN;
	volatile int8_t x156 = INT8_MIN;
	int32_t t35 = 54834;

	t35 = (x153<=((x154/x155)*x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	int32_t x158 = 1;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 4934U;

	t36 = (x157<=((x158/x159)*x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = INT32_MAX;
	int16_t x162 = -2697;
	int16_t x163 = -192;
	int32_t x164 = 508;
	int32_t t37 = 5139;

	t37 = (x161<=((x162/x163)*x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MAX;
	uint64_t x166 = UINT64_MAX;
	volatile uint64_t x167 = UINT64_MAX;
	int8_t x168 = -1;
	volatile int32_t t38 = -13118;

	t38 = (x165<=((x166/x167)*x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x170 = -1LL;
	volatile uint32_t x171 = 1U;
	int16_t x172 = INT16_MIN;
	volatile int32_t t39 = 356;

	t39 = (x169<=((x170/x171)*x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = 10902752;
	static int64_t x174 = -1LL;
	static int32_t t40 = 2400;

	t40 = (x173<=((x174/x175)*x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -830063583899LL;
	int8_t x182 = 1;
	volatile int8_t x183 = -1;
	uint64_t x184 = 993LLU;
	volatile int32_t t41 = -1027755538;

	t41 = (x181<=((x182/x183)*x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x189 = INT64_MIN;
	int32_t t42 = -1751;

	t42 = (x189<=((x190/x191)*x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x193 = -35;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -26508LL;
	int32_t x196 = -1;
	volatile int32_t t43 = 1;

	t43 = (x193<=((x194/x195)*x196));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = 1;
	int8_t x200 = 11;
	int32_t t44 = 10826;

	t44 = (x197<=((x198/x199)*x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	volatile int8_t x202 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t45 = 223;

	t45 = (x201<=((x202/x203)*x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = UINT64_MAX;
	static int32_t x207 = -1;
	volatile int8_t x208 = INT8_MAX;
	volatile int32_t t46 = 3549345;

	t46 = (x205<=((x206/x207)*x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x209 = 8U;
	int16_t x210 = INT16_MAX;
	volatile int8_t x211 = INT8_MIN;
	volatile int8_t x212 = INT8_MIN;
	static int32_t t47 = -1;

	t47 = (x209<=((x210/x211)*x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x214 = 0U;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = -7;
	int32_t t48 = 8752741;

	t48 = (x213<=((x214/x215)*x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x218 = INT8_MIN;
	int32_t x219 = -1;
	int32_t x220 = -6057137;
	int32_t t49 = 7;

	t49 = (x217<=((x218/x219)*x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = -1;
	int32_t x223 = -1;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = (x221<=((x222/x223)*x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x225 = INT64_MAX;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = -1LL;
	int32_t x228 = -163;
	static int32_t t51 = 417658618;

	t51 = (x225<=((x226/x227)*x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = 129651642U;
	uint16_t x230 = 75U;
	int16_t x231 = 1;
	int64_t x232 = -1LL;
	int32_t t52 = -1842571;

	t52 = (x229<=((x230/x231)*x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 60123587416656LLU;
	uint8_t x234 = 0U;
	static uint64_t x235 = UINT64_MAX;
	uint8_t x236 = UINT8_MAX;
	volatile int32_t t53 = -692624;

	t53 = (x233<=((x234/x235)*x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x238 = INT32_MAX;
	int16_t x239 = INT16_MIN;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t54 = 57328;

	t54 = (x237<=((x238/x239)*x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -4965;
	int8_t x242 = INT8_MAX;
	static int8_t x243 = INT8_MIN;
	uint8_t x244 = UINT8_MAX;
	int32_t t55 = 1713679;

	t55 = (x241<=((x242/x243)*x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int64_t x246 = INT64_MIN;
	static volatile uint32_t x247 = 137U;
	uint64_t x248 = 465LLU;
	int32_t t56 = 109605229;

	t56 = (x245<=((x246/x247)*x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x249 = -466800885625331LL;
	uint64_t x250 = 82843697502038LLU;
	volatile uint8_t x252 = 18U;
	static int32_t t57 = 37877922;

	t57 = (x249<=((x250/x251)*x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x253 = 1695059U;
	int8_t x254 = INT8_MAX;
	static uint8_t x255 = 7U;
	int32_t t58 = 31;

	t58 = (x253<=((x254/x255)*x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x258 = 1;
	int64_t x259 = -1012825418LL;
	int32_t t59 = 291309123;

	t59 = (x257<=((x258/x259)*x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x264 = INT8_MIN;
	int32_t t60 = 16;

	t60 = (x261<=((x262/x263)*x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = 3536U;
	int64_t x270 = -17028130LL;
	volatile uint32_t x271 = UINT32_MAX;
	uint64_t x272 = UINT64_MAX;
	int32_t t61 = -1;

	t61 = (x269<=((x270/x271)*x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	volatile int16_t x280 = INT16_MAX;
	int32_t t62 = -172596;

	t62 = (x277<=((x278/x279)*x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = -1;
	static int32_t t63 = 7223237;

	t63 = (x281<=((x282/x283)*x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = -1LL;
	int32_t x291 = INT32_MIN;
	int8_t x292 = INT8_MAX;
	volatile int32_t t64 = 122;

	t64 = (x289<=((x290/x291)*x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x294 = INT64_MIN;
	static volatile int64_t x295 = -263942926833LL;
	int32_t x296 = INT32_MIN;
	int32_t t65 = 720981742;

	t65 = (x293<=((x294/x295)*x296));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = UINT32_MAX;
	int16_t x298 = 0;
	static int32_t x299 = 37;
	int16_t x300 = INT16_MIN;
	volatile int32_t t66 = -3926;

	t66 = (x297<=((x298/x299)*x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 382U;
	int64_t x302 = 88LL;
	static uint8_t x303 = UINT8_MAX;
	volatile int32_t x304 = -1;
	static int32_t t67 = -452;

	t67 = (x301<=((x302/x303)*x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x310 = UINT32_MAX;
	volatile int16_t x311 = -1;
	int32_t x312 = 704005;
	volatile int32_t t68 = 2816456;

	t68 = (x309<=((x310/x311)*x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x313 = -1;
	volatile int16_t x314 = INT16_MIN;
	int8_t x315 = 4;
	volatile int32_t t69 = 31375;

	t69 = (x313<=((x314/x315)*x316));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x322 = 3032U;
	static volatile uint64_t x323 = 448206139LLU;
	int16_t x324 = -1;
	int32_t t70 = 1753145;

	t70 = (x321<=((x322/x323)*x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x325 = -21;
	int32_t x326 = 0;
	int64_t x328 = -1LL;
	int32_t t71 = -13735;

	t71 = (x325<=((x326/x327)*x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static int32_t x331 = 1;
	int32_t t72 = -9003;

	t72 = (x329<=((x330/x331)*x332));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x334 = -32;
	uint64_t x335 = 1947LLU;
	volatile int32_t t73 = -170502;

	t73 = (x333<=((x334/x335)*x336));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x338 = INT16_MAX;
	static int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	volatile int32_t t74 = 3197;

	t74 = (x337<=((x338/x339)*x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 601789297U;
	uint32_t x347 = 387870632U;
	int32_t t75 = -3280614;

	t75 = (x345<=((x346/x347)*x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x350 = 7370998516695180348LLU;
	int32_t x351 = INT32_MAX;
	int8_t x352 = 4;
	static volatile int32_t t76 = 59;

	t76 = (x349<=((x350/x351)*x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x353 = UINT8_MAX;
	static int32_t x354 = -1940;
	uint32_t x355 = 6U;
	volatile uint64_t x356 = UINT64_MAX;
	volatile int32_t t77 = 190;

	t77 = (x353<=((x354/x355)*x356));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = 42359332393LLU;
	uint64_t x358 = 18706063922LLU;
	uint16_t x360 = 9101U;
	static volatile int32_t t78 = 15;

	t78 = (x357<=((x358/x359)*x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x361 = INT16_MIN;
	uint16_t x362 = 15U;
	volatile uint32_t x364 = 1405548636U;
	volatile int32_t t79 = -19342;

	t79 = (x361<=((x362/x363)*x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x365 = 174U;
	int32_t x366 = 1868;
	volatile int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;
	int32_t t80 = -4;

	t80 = (x365<=((x366/x367)*x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	uint32_t x372 = 124699U;
	int32_t t81 = -27;

	t81 = (x369<=((x370/x371)*x372));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x373 = 5U;
	uint8_t x374 = 0U;

	t82 = (x373<=((x374/x375)*x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x377 = INT8_MIN;
	uint8_t x378 = 0U;
	uint16_t x379 = UINT16_MAX;
	volatile uint16_t x380 = 24155U;

	t83 = (x377<=((x378/x379)*x380));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x381 = -85;
	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	int32_t t84 = 38972;

	t84 = (x381<=((x382/x383)*x384));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x386 = UINT32_MAX;
	static int16_t x387 = INT16_MIN;
	uint32_t x388 = 1699716028U;
	volatile int32_t t85 = 280380;

	t85 = (x385<=((x386/x387)*x388));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = 70352;
	int8_t x392 = -1;
	volatile int32_t t86 = -5523598;

	t86 = (x389<=((x390/x391)*x392));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = -3315586;
	static volatile int32_t x395 = -5174991;
	int8_t x396 = -1;

	t87 = (x393<=((x394/x395)*x396));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x397 = INT64_MIN;
	volatile uint16_t x398 = 343U;
	static int32_t x399 = INT32_MAX;
	uint8_t x400 = 23U;
	int32_t t88 = 4898;

	t88 = (x397<=((x398/x399)*x400));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x405 = UINT16_MAX;
	int64_t x406 = INT64_MAX;
	int64_t x407 = INT64_MAX;
	uint64_t x408 = 0LLU;

	t89 = (x405<=((x406/x407)*x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x410 = 890720579094LLU;
	int64_t x411 = -265893071LL;
	int16_t x412 = 9;
	volatile int32_t t90 = 2024;

	t90 = (x409<=((x410/x411)*x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x413 = 438;
	volatile int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = INT16_MIN;
	volatile int32_t t91 = -1550;

	t91 = (x413<=((x414/x415)*x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = 61;
	volatile int8_t x418 = 0;
	uint32_t x420 = 30345534U;
	volatile int32_t t92 = -1581;

	t92 = (x417<=((x418/x419)*x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x421 = 848623098488868128LLU;
	uint16_t x422 = 2852U;
	uint8_t x423 = 10U;
	static int32_t t93 = -11;

	t93 = (x421<=((x422/x423)*x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = INT32_MIN;
	static int8_t x426 = -1;
	uint8_t x427 = 3U;
	static uint64_t x428 = 5673945341285128LLU;
	volatile int32_t t94 = 6154462;

	t94 = (x425<=((x426/x427)*x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x429 = 354298582U;
	int32_t x430 = INT32_MAX;
	volatile int64_t x431 = -1LL;
	int32_t t95 = -202386;

	t95 = (x429<=((x430/x431)*x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x433 = 52U;
	volatile int8_t x435 = -1;
	int64_t x436 = -1LL;

	t96 = (x433<=((x434/x435)*x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x437 = INT16_MIN;
	uint64_t x438 = 4232976314LLU;
	uint64_t x439 = 3901243530425LLU;
	static int64_t x440 = INT64_MAX;
	int32_t t97 = 470;

	t97 = (x437<=((x438/x439)*x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x444 = 0LL;
	volatile int32_t t98 = -504407983;

	t98 = (x441<=((x442/x443)*x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x445 = 7U;
	int32_t t99 = -28797847;

	t99 = (x445<=((x446/x447)*x448));

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

