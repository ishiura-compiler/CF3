#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 1609712336936LLU;
int8_t x2 = INT8_MAX;
uint64_t x5 = 1114LLU;
int16_t x7 = INT16_MIN;
static volatile int32_t t2 = 4139;
static int32_t x23 = INT32_MIN;
int64_t x31 = 12406LL;
volatile int32_t t7 = 1132;
int64_t x33 = INT64_MIN;
int32_t x34 = INT32_MIN;
uint32_t x36 = 7251U;
int16_t x43 = 16;
static volatile uint8_t x54 = UINT8_MAX;
volatile int32_t t13 = 55827;
int8_t x61 = INT8_MAX;
volatile uint8_t x64 = UINT8_MAX;
static int32_t t15 = 13879;
int32_t x74 = INT32_MAX;
int32_t x82 = 238;
static int64_t x83 = 105895LL;
static int16_t x84 = -6966;
volatile int32_t t19 = -79;
static int32_t x90 = INT32_MIN;
volatile int32_t t21 = -235;
int32_t x100 = 48422;
volatile int8_t x103 = -1;
volatile int64_t x109 = 52364245622623LL;
int64_t x111 = -535129351486409069LL;
int64_t x112 = INT64_MAX;
int64_t x119 = INT64_MAX;
uint16_t x127 = 759U;
int8_t x130 = INT8_MIN;
volatile int32_t x131 = INT32_MAX;
volatile uint8_t x133 = UINT8_MAX;
static int32_t x136 = -1;
volatile int64_t x140 = 1712045195483109LL;
volatile int32_t t32 = 2836;
uint16_t x144 = UINT16_MAX;
int8_t x147 = 7;
int32_t t35 = 467;
volatile int32_t x154 = INT32_MIN;
int32_t x155 = 19630;
volatile int16_t x160 = 3072;
volatile int32_t t38 = -706954;
uint8_t x167 = UINT8_MAX;
int64_t x169 = INT64_MIN;
int32_t t40 = 198041418;
static int8_t x177 = INT8_MAX;
volatile int16_t x179 = -3;
uint8_t x181 = UINT8_MAX;
int16_t x185 = INT16_MIN;
static volatile int8_t x192 = INT8_MIN;
volatile int32_t t45 = 10;
uint8_t x206 = 96U;
uint64_t x207 = 127701630LLU;
int8_t x210 = INT8_MAX;
int8_t x214 = INT8_MIN;
uint8_t x217 = 31U;
int64_t x223 = INT64_MAX;
int64_t x227 = INT64_MIN;
volatile int8_t x238 = INT8_MAX;
uint32_t x242 = 1248U;
uint32_t x245 = 14U;
static int16_t x247 = 7942;
static uint32_t x261 = 5199936U;
uint16_t x262 = UINT16_MAX;
uint32_t x264 = 11067U;
int16_t x265 = -2;
static volatile int16_t x268 = 1;
uint16_t x279 = 8U;
int64_t x286 = INT64_MIN;
int32_t t66 = -192717;
uint8_t x291 = UINT8_MAX;
int16_t x296 = -1;
int32_t t69 = -130;
uint64_t x303 = UINT64_MAX;
int32_t x304 = 360;
int32_t x311 = 903347;
int64_t x317 = -1LL;
int64_t x325 = 1005319LL;
static int64_t x329 = 2588175533LL;
int16_t x331 = INT16_MAX;
int32_t x334 = INT32_MIN;
uint64_t x336 = UINT64_MAX;
int32_t x338 = -80456;
static volatile int32_t x339 = -1;
int32_t x340 = INT32_MAX;
int8_t x342 = 10;
static uint32_t x344 = UINT32_MAX;
int64_t x345 = 346619052489888LL;
uint32_t x347 = 26U;
volatile int64_t x350 = 426184655102LL;
volatile uint16_t x352 = UINT16_MAX;
int32_t t83 = 3;
static int16_t x365 = -21;
uint32_t x366 = 104332U;
int64_t x370 = 5938199679799LL;
volatile uint8_t x375 = UINT8_MAX;
int64_t x378 = INT64_MIN;
int32_t x382 = INT32_MIN;
uint32_t x384 = UINT32_MAX;
uint16_t x385 = 6U;
static int8_t x388 = -7;
int16_t x391 = INT16_MAX;
static int64_t x392 = INT64_MIN;
int8_t x394 = -1;
int16_t x398 = -1;
int16_t x405 = -1;
volatile uint64_t x407 = 2567393925832984LLU;
volatile int32_t x409 = -305323557;
int8_t x418 = -1;


void f0(void) {
	uint64_t x3 = 16176923417386LLU;
	int64_t x4 = -423348656194334155LL;
	int32_t t0 = -618672;

	t0 = ((x1<x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x6 = INT8_MIN;
	uint8_t x8 = 20U;
	int32_t t1 = 2025278;

	t1 = ((x5<x6)<=(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int8_t x10 = -2;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -8;

	t2 = ((x9<x10)<=(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint32_t x14 = 386822U;
	volatile uint8_t x15 = 19U;
	static int8_t x16 = -21;
	int32_t t3 = -104556078;

	t3 = ((x13<x14)<=(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x18 = UINT16_MAX;
	int64_t x19 = INT64_MIN;
	int8_t x20 = 1;
	int32_t t4 = -1982798;

	t4 = ((x17<x18)<=(x19/x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 159U;
	int16_t x22 = INT16_MIN;
	int8_t x24 = -24;
	volatile int32_t t5 = 13249198;

	t5 = ((x21<x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 1457U;
	static int16_t x26 = -1;
	int32_t x27 = -1;
	volatile int64_t x28 = 1074LL;
	static int32_t t6 = -29773;

	t6 = ((x25<x26)<=(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 0;
	static uint8_t x30 = UINT8_MAX;
	volatile int32_t x32 = INT32_MAX;

	t7 = ((x29<x30)<=(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x35 = UINT32_MAX;
	volatile int32_t t8 = 33145110;

	t8 = ((x33<x34)<=(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 50LLU;
	int64_t x38 = -6086LL;
	volatile int8_t x39 = INT8_MIN;
	uint16_t x40 = 1994U;
	volatile int32_t t9 = 165605179;

	t9 = ((x37<x38)<=(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	int64_t x42 = 829529LL;
	static int32_t x44 = 4436;
	int32_t t10 = 61;

	t10 = ((x41<x42)<=(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int8_t x46 = 2;
	int32_t x47 = -6;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = -332670933;

	t11 = ((x45<x46)<=(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MAX;
	volatile uint32_t x51 = 9357704U;
	int16_t x52 = 7;
	volatile int32_t t12 = 161;

	t12 = ((x49<x50)<=(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -1LL;
	int16_t x55 = INT16_MIN;
	static volatile uint32_t x56 = 11748639U;

	t13 = ((x53<x54)<=(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MIN;
	int32_t t14 = 3883116;

	t14 = ((x61<x62)<=(x63/x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MAX;
	uint8_t x70 = UINT8_MAX;
	uint8_t x71 = 1U;
	int32_t x72 = 2954;

	t15 = ((x69<x70)<=(x71/x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile int32_t t16 = -8556;

	t16 = ((x73<x74)<=(x75/x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x78 = 31LLU;
	int64_t x79 = INT64_MIN;
	static int16_t x80 = INT16_MAX;
	int32_t t17 = 3692;

	t17 = ((x77<x78)<=(x79/x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = 22;
	volatile int32_t t18 = 9326828;

	t18 = ((x81<x82)<=(x83/x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint16_t x85 = 26141U;
	static int32_t x86 = INT32_MIN;
	volatile uint32_t x87 = 1U;
	uint8_t x88 = UINT8_MAX;

	t19 = ((x85<x86)<=(x87/x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int16_t x91 = -1;
	int16_t x92 = 1777;
	volatile int32_t t20 = -15867614;

	t20 = ((x89<x90)<=(x91/x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -3;
	uint8_t x94 = 27U;
	int8_t x95 = -1;
	uint16_t x96 = 1U;

	t21 = ((x93<x94)<=(x95/x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = UINT64_MAX;
	uint16_t x98 = 16U;
	int8_t x99 = -1;
	static int32_t t22 = -3783276;

	t22 = ((x97<x98)<=(x99/x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MIN;
	int64_t x104 = -1LL;
	volatile int32_t t23 = -8289240;

	t23 = ((x101<x102)<=(x103/x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	volatile int32_t x106 = -313;
	uint16_t x107 = 648U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t24 = -7;

	t24 = ((x105<x106)<=(x107/x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = INT16_MAX;
	volatile int32_t t25 = -73123729;

	t25 = ((x109<x110)<=(x111/x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 384LLU;
	uint64_t x114 = UINT64_MAX;
	static uint32_t x115 = UINT32_MAX;
	static int8_t x116 = INT8_MAX;
	volatile int32_t t26 = -995124;

	t26 = ((x113<x114)<=(x115/x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	static volatile int32_t t27 = 66365856;

	t27 = ((x117<x118)<=(x119/x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	int64_t x123 = INT64_MIN;
	uint32_t x124 = 2116U;
	volatile int32_t t28 = 22;

	t28 = ((x121<x122)<=(x123/x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	int16_t x128 = -33;
	volatile int32_t t29 = 280615;

	t29 = ((x125<x126)<=(x127/x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t30 = 4863;

	t30 = ((x129<x130)<=(x131/x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 0U;
	volatile int32_t t31 = -2;

	t31 = ((x133<x134)<=(x135/x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = 469514;
	uint32_t x138 = 60354U;
	uint8_t x139 = 3U;

	t32 = ((x137<x138)<=(x139/x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 125U;
	int64_t x142 = -702119060655LL;
	int8_t x143 = 0;
	volatile int32_t t33 = 55;

	t33 = ((x141<x142)<=(x143/x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = 3;
	volatile int32_t x146 = INT32_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t34 = 761498322;

	t34 = ((x145<x146)<=(x147/x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x149 = 63568697;
	uint8_t x150 = 2U;
	int32_t x151 = -1;
	uint32_t x152 = 519704827U;

	t35 = ((x149<x150)<=(x151/x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x156 = 3U;
	volatile int32_t t36 = 141476904;

	t36 = ((x153<x154)<=(x155/x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MAX;
	volatile int16_t x159 = -1;
	volatile int32_t t37 = -544;

	t37 = ((x157<x158)<=(x159/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = INT64_MIN;
	volatile int16_t x162 = -36;
	uint16_t x163 = 11260U;
	int16_t x164 = -172;

	t38 = ((x161<x162)<=(x163/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = 6426;
	static int8_t x166 = INT8_MIN;
	int32_t x168 = INT32_MAX;
	int32_t t39 = -31;

	t39 = ((x165<x166)<=(x167/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x170 = INT32_MIN;
	uint16_t x171 = 761U;
	static uint64_t x172 = UINT64_MAX;

	t40 = ((x169<x170)<=(x171/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x174 = INT64_MIN;
	uint32_t x175 = 21U;
	uint64_t x176 = 19993272498730757LLU;
	int32_t t41 = -477175;

	t41 = ((x173<x174)<=(x175/x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x178 = -23151;
	static int32_t x180 = -6;
	static int32_t t42 = -10489;

	t42 = ((x177<x178)<=(x179/x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x182 = INT64_MIN;
	static uint32_t x183 = 102485U;
	uint64_t x184 = UINT64_MAX;
	int32_t t43 = -7;

	t43 = ((x181<x182)<=(x183/x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = 5537U;
	static uint64_t x188 = 6511LLU;
	volatile int32_t t44 = -82910465;

	t44 = ((x185<x186)<=(x187/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = -1LL;
	int8_t x190 = -1;
	static int16_t x191 = INT16_MIN;

	t45 = ((x189<x190)<=(x191/x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = -1;
	static uint64_t x198 = 507917028LLU;
	static volatile int8_t x199 = INT8_MAX;
	static int64_t x200 = 1523816LL;
	volatile int32_t t46 = -121206937;

	t46 = ((x197<x198)<=(x199/x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	int8_t x202 = INT8_MAX;
	int32_t x203 = -1;
	int8_t x204 = 25;
	int32_t t47 = -63246632;

	t47 = ((x201<x202)<=(x203/x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x208 = INT16_MIN;
	volatile int32_t t48 = 4240399;

	t48 = ((x205<x206)<=(x207/x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x209 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	volatile int16_t x212 = INT16_MIN;
	volatile int32_t t49 = 66391;

	t49 = ((x209<x210)<=(x211/x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x213 = UINT32_MAX;
	static volatile uint8_t x215 = 3U;
	uint64_t x216 = UINT64_MAX;
	int32_t t50 = -29;

	t50 = ((x213<x214)<=(x215/x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x218 = 11;
	static int32_t x219 = 661;
	volatile uint32_t x220 = 1067U;
	int32_t t51 = -3946448;

	t51 = ((x217<x218)<=(x219/x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = -32;
	uint32_t x222 = 44U;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t52 = -617;

	t52 = ((x221<x222)<=(x223/x224));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x225 = 3770;
	volatile int32_t x226 = INT32_MAX;
	uint8_t x228 = 1U;
	volatile int32_t t53 = 46100659;

	t53 = ((x225<x226)<=(x227/x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MIN;
	static int64_t x231 = -1LL;
	volatile uint64_t x232 = UINT64_MAX;
	int32_t t54 = 14871027;

	t54 = ((x229<x230)<=(x231/x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x237 = -23858020377235584LL;
	int16_t x239 = INT16_MAX;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t55 = 52162686;

	t55 = ((x237<x238)<=(x239/x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MIN;
	int64_t x243 = -251445227LL;
	int64_t x244 = INT64_MAX;
	int32_t t56 = -191;

	t56 = ((x241<x242)<=(x243/x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x246 = INT16_MAX;
	volatile uint64_t x248 = 5887LLU;
	int32_t t57 = -70;

	t57 = ((x245<x246)<=(x247/x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x253 = UINT8_MAX;
	volatile int16_t x254 = INT16_MIN;
	int64_t x255 = 2900467620177383LL;
	int16_t x256 = -1348;
	volatile int32_t t58 = -105771161;

	t58 = ((x253<x254)<=(x255/x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x257 = -7;
	static uint16_t x258 = 7U;
	static int16_t x259 = INT16_MIN;
	volatile int8_t x260 = INT8_MIN;
	int32_t t59 = -20;

	t59 = ((x257<x258)<=(x259/x260));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x263 = INT16_MIN;
	int32_t t60 = -775345599;

	t60 = ((x261<x262)<=(x263/x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x266 = INT32_MIN;
	int16_t x267 = 7;
	volatile int32_t t61 = -135394902;

	t61 = ((x265<x266)<=(x267/x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x269 = 138837305196137819LLU;
	uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = 0;
	uint32_t x272 = 15U;
	int32_t t62 = -167301579;

	t62 = ((x269<x270)<=(x271/x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x274 = 7U;
	int8_t x275 = 11;
	int64_t x276 = INT64_MIN;
	static volatile int32_t t63 = 87285;

	t63 = ((x273<x274)<=(x275/x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x277 = 962722697LLU;
	static volatile int16_t x278 = INT16_MIN;
	uint16_t x280 = 1413U;
	int32_t t64 = 2;

	t64 = ((x277<x278)<=(x279/x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x281 = INT16_MAX;
	int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MAX;
	static int32_t t65 = 389743;

	t65 = ((x281<x282)<=(x283/x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = 13U;
	uint32_t x287 = 47964U;
	int64_t x288 = 1565635LL;

	t66 = ((x285<x286)<=(x287/x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = 1;
	uint64_t x290 = 1471420324833410LLU;
	int16_t x292 = INT16_MAX;
	int32_t t67 = 10;

	t67 = ((x289<x290)<=(x291/x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = INT64_MAX;
	int32_t x294 = 247108;
	volatile int8_t x295 = INT8_MIN;
	int32_t t68 = 6524;

	t68 = ((x293<x294)<=(x295/x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int64_t x298 = 4LL;
	uint64_t x299 = 3673883999245591LLU;
	int32_t x300 = 655;

	t69 = ((x297<x298)<=(x299/x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 763U;
	int16_t x302 = INT16_MAX;
	int32_t t70 = -31;

	t70 = ((x301<x302)<=(x303/x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 4572U;
	int64_t x306 = -1LL;
	int32_t x307 = INT32_MIN;
	volatile int64_t x308 = INT64_MAX;
	int32_t t71 = 2051686;

	t71 = ((x305<x306)<=(x307/x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	static uint8_t x312 = 2U;
	volatile int32_t t72 = -13;

	t72 = ((x309<x310)<=(x311/x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x313 = UINT64_MAX;
	int64_t x314 = INT64_MAX;
	uint16_t x315 = UINT16_MAX;
	static int16_t x316 = INT16_MAX;
	int32_t t73 = 0;

	t73 = ((x313<x314)<=(x315/x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x318 = 1U;
	int64_t x319 = INT64_MIN;
	uint16_t x320 = UINT16_MAX;
	int32_t t74 = 1026174;

	t74 = ((x317<x318)<=(x319/x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x321 = 85;
	int64_t x322 = INT64_MIN;
	static uint8_t x323 = 0U;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t75 = 1646798;

	t75 = ((x321<x322)<=(x323/x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x326 = INT64_MAX;
	static uint8_t x327 = 10U;
	volatile int64_t x328 = INT64_MIN;
	static volatile int32_t t76 = -16298853;

	t76 = ((x325<x326)<=(x327/x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x330 = -6;
	int64_t x332 = -1LL;
	volatile int32_t t77 = -34562;

	t77 = ((x329<x330)<=(x331/x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int64_t x335 = INT64_MIN;
	int32_t t78 = 159190033;

	t78 = ((x333<x334)<=(x335/x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x337 = UINT32_MAX;
	int32_t t79 = -4;

	t79 = ((x337<x338)<=(x339/x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -12;
	volatile int8_t x343 = -1;
	static int32_t t80 = 1040785;

	t80 = ((x341<x342)<=(x343/x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x346 = INT8_MIN;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t81 = 112982656;

	t81 = ((x345<x346)<=(x347/x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MIN;
	int64_t x351 = 5348814LL;
	int32_t t82 = 105498;

	t82 = ((x349<x350)<=(x351/x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = 28544;
	int8_t x354 = -1;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MAX;

	t83 = ((x353<x354)<=(x355/x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x357 = -1LL;
	static int64_t x358 = 482595360362782LL;
	uint16_t x359 = 746U;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x357<x358)<=(x359/x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x361 = -1;
	int64_t x362 = INT64_MIN;
	volatile uint8_t x363 = 3U;
	static int8_t x364 = INT8_MAX;
	int32_t t85 = -180386639;

	t85 = ((x361<x362)<=(x363/x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x367 = 618;
	uint8_t x368 = 102U;
	int32_t t86 = 127822;

	t86 = ((x365<x366)<=(x367/x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = -25287;
	int16_t x371 = -58;
	volatile int8_t x372 = 1;
	int32_t t87 = 5;

	t87 = ((x369<x370)<=(x371/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x373 = 0U;
	static int32_t x374 = INT32_MIN;
	static int8_t x376 = 1;
	volatile int32_t t88 = 173;

	t88 = ((x373<x374)<=(x375/x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	uint8_t x379 = 24U;
	int16_t x380 = INT16_MAX;
	volatile int32_t t89 = -102140170;

	t89 = ((x377<x378)<=(x379/x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x381 = 3229913;
	int8_t x383 = INT8_MAX;
	static volatile int32_t t90 = -438068;

	t90 = ((x381<x382)<=(x383/x384));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x386 = 0U;
	int8_t x387 = INT8_MIN;
	volatile int32_t t91 = -104;

	t91 = ((x385<x386)<=(x387/x388));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x389 = 6693;
	uint32_t x390 = 75782072U;
	int32_t t92 = -1;

	t92 = ((x389<x390)<=(x391/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x393 = 0;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = -1LL;
	volatile int32_t t93 = -4830271;

	t93 = ((x393<x394)<=(x395/x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = -8885;
	static int8_t x399 = INT8_MIN;
	uint8_t x400 = 88U;
	volatile int32_t t94 = 227;

	t94 = ((x397<x398)<=(x399/x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int16_t x402 = INT16_MIN;
	volatile int32_t x403 = INT32_MIN;
	static int64_t x404 = -1LL;
	volatile int32_t t95 = -1;

	t95 = ((x401<x402)<=(x403/x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x406 = INT16_MIN;
	volatile int16_t x408 = -1;
	int32_t t96 = 1;

	t96 = ((x405<x406)<=(x407/x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x410 = 7LL;
	static int8_t x411 = -48;
	uint16_t x412 = UINT16_MAX;
	static volatile int32_t t97 = 43;

	t97 = ((x409<x410)<=(x411/x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x413 = 4302322U;
	uint64_t x414 = 907853LLU;
	int16_t x415 = -1;
	int64_t x416 = -1032818LL;
	int32_t t98 = 553608292;

	t98 = ((x413<x414)<=(x415/x416));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x417 = INT16_MAX;
	int64_t x419 = -1LL;
	uint8_t x420 = 40U;
	int32_t t99 = -343948;

	t99 = ((x417<x418)<=(x419/x420));

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

