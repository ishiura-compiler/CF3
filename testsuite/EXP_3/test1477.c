#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = -1312192114LL;
int32_t x8 = -3;
volatile int32_t x11 = INT32_MIN;
static uint16_t x14 = 4636U;
int32_t t5 = 5389;
uint32_t x26 = 2389223U;
static uint32_t x28 = 0U;
int16_t x29 = INT16_MIN;
int32_t x39 = -409755;
uint32_t x40 = 2408U;
static int32_t x42 = -855;
int64_t x43 = INT64_MIN;
volatile int32_t t12 = -77312303;
int8_t x53 = INT8_MIN;
int32_t t15 = -34;
volatile int64_t x66 = INT64_MAX;
volatile int32_t t16 = 328695790;
uint8_t x71 = 7U;
uint32_t x80 = UINT32_MAX;
int32_t t19 = -95;
int32_t t21 = -29435357;
uint16_t x90 = 116U;
uint16_t x94 = 5U;
static int32_t t23 = -10116;
uint64_t x97 = UINT64_MAX;
static int32_t t24 = -488031223;
int16_t x104 = INT16_MIN;
int64_t x113 = INT64_MAX;
int8_t x123 = INT8_MIN;
static int16_t x128 = INT16_MIN;
int64_t x129 = INT64_MAX;
volatile int32_t x134 = INT32_MIN;
volatile int8_t x143 = INT8_MAX;
uint8_t x144 = 47U;
uint8_t x158 = UINT8_MAX;
uint16_t x159 = 10774U;
int64_t x161 = -1LL;
volatile int8_t x165 = 0;
int32_t x171 = -1;
static volatile int32_t t42 = -109396;
static volatile int32_t x175 = INT32_MIN;
int32_t t43 = -115607792;
int64_t x181 = 0LL;
volatile int32_t x190 = -1;
int32_t x191 = INT32_MIN;
volatile int8_t x196 = INT8_MAX;
static int64_t x198 = 2050835502921LL;
int16_t x200 = -1;
volatile int32_t x209 = 7539606;
int16_t x211 = 3363;
int64_t x212 = 7180566091LL;
int16_t x214 = INT16_MAX;
static int16_t x223 = -1;
int32_t t56 = -39437702;
int16_t x244 = 27;
int32_t t60 = 1;
uint64_t x251 = 1543372765646LLU;
int8_t x259 = INT8_MIN;
static int32_t t64 = -5;
uint32_t x263 = 463U;
int32_t x264 = INT32_MIN;
static int64_t x268 = -127802650LL;
int8_t x273 = -1;
volatile int32_t t70 = -11533;
static int32_t x296 = INT32_MAX;
static int16_t x297 = 471;
int32_t x298 = -3418;
int32_t x302 = -12783;
static volatile int32_t t75 = 179;
volatile int64_t x307 = INT64_MIN;
int64_t x309 = -1462LL;
int8_t x312 = 1;
uint16_t x317 = UINT16_MAX;
volatile int16_t x318 = INT16_MIN;
volatile uint32_t x319 = 0U;
int64_t x325 = INT64_MIN;
int8_t x339 = -1;
int32_t t85 = 1;
uint32_t x347 = 24U;
volatile uint64_t x352 = UINT64_MAX;
static uint16_t x360 = UINT16_MAX;
static uint16_t x362 = 1937U;
volatile int16_t x365 = -1;
int8_t x368 = 0;
volatile int64_t x375 = 239718394205LL;
uint16_t x378 = 1U;
uint16_t x389 = 39U;
uint32_t x391 = UINT32_MAX;
volatile uint8_t x396 = 68U;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	static uint64_t x2 = UINT64_MAX;
	uint16_t x3 = 11U;
	volatile uint64_t x4 = 31690LLU;
	int32_t t0 = -3028;

	t0 = ((x1<=x2)==(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = 1LL;
	int64_t x7 = INT64_MIN;
	static volatile int32_t t1 = 4;

	t1 = ((x5<=x6)==(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile int64_t x10 = INT64_MIN;
	uint32_t x12 = 1623U;
	volatile int32_t t2 = -39549;

	t2 = ((x9<=x10)==(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 159;
	static volatile int32_t x15 = -1;
	uint32_t x16 = 61U;
	static volatile int32_t t3 = 18720;

	t3 = ((x13<=x14)==(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = 10037882;
	uint8_t x19 = UINT8_MAX;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = 508;

	t4 = ((x17<=x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -115;
	int16_t x22 = -1;
	static int32_t x23 = -1;
	uint16_t x24 = 768U;

	t5 = ((x21<=x22)==(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int64_t x27 = 44109784716637LL;
	volatile int32_t t6 = 11828;

	t6 = ((x25<=x26)==(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x30 = 521547U;
	int16_t x31 = -1;
	int64_t x32 = -5415185373LL;
	volatile int32_t t7 = 20240578;

	t7 = ((x29<=x30)==(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 68U;
	uint32_t x34 = 898808U;
	volatile uint32_t x35 = UINT32_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 30855;

	t8 = ((x33<=x34)==(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	uint8_t x38 = UINT8_MAX;
	volatile int32_t t9 = -61;

	t9 = ((x37<=x38)==(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 701U;
	volatile int32_t x44 = 5057;
	int32_t t10 = 4430;

	t10 = ((x41<=x42)==(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MIN;
	int16_t x47 = -1;
	static int8_t x48 = -1;
	volatile int32_t t11 = 14723800;

	t11 = ((x45<=x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 59046485U;
	volatile int8_t x50 = -1;
	static volatile int64_t x51 = -3702102706030590033LL;
	int32_t x52 = INT32_MAX;

	t12 = ((x49<=x50)==(x51<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -1LL;
	uint16_t x55 = 25U;
	volatile int8_t x56 = -1;
	volatile int32_t t13 = 49117;

	t13 = ((x53<=x54)==(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int16_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t14 = -1;

	t14 = ((x57<=x58)==(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint8_t x62 = UINT8_MAX;
	volatile uint16_t x63 = 6U;
	int32_t x64 = INT32_MIN;

	t15 = ((x61<=x62)==(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 48231720346766693LLU;
	int8_t x67 = -1;
	int8_t x68 = 0;

	t16 = ((x65<=x66)==(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static int8_t x70 = INT8_MIN;
	int8_t x72 = -1;
	volatile int32_t t17 = -533514502;

	t17 = ((x69<=x70)==(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 9269U;
	static int8_t x74 = -50;
	static uint16_t x75 = UINT16_MAX;
	int32_t x76 = INT32_MAX;
	volatile int32_t t18 = -3222;

	t18 = ((x73<=x74)==(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = -2;
	uint8_t x78 = 5U;
	int8_t x79 = -1;

	t19 = ((x77<=x78)==(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 122U;
	volatile uint64_t x82 = UINT64_MAX;
	static int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;
	static int32_t t20 = 1038852;

	t20 = ((x81<=x82)==(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 14142;
	static int32_t x86 = INT32_MIN;
	int8_t x87 = -2;
	volatile int64_t x88 = -424LL;

	t21 = ((x85<=x86)==(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -130697260;
	uint64_t x91 = UINT64_MAX;
	volatile int16_t x92 = -385;
	volatile int32_t t22 = -506;

	t22 = ((x89<=x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = INT8_MAX;
	int16_t x95 = INT16_MAX;
	static volatile uint16_t x96 = UINT16_MAX;

	t23 = ((x93<=x94)==(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 34U;
	static int64_t x99 = -66611168670626LL;
	uint64_t x100 = UINT64_MAX;

	t24 = ((x97<=x98)==(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static int8_t x102 = -17;
	int16_t x103 = -51;
	volatile int32_t t25 = 15;

	t25 = ((x101<=x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1947671;
	volatile uint64_t x106 = UINT64_MAX;
	uint64_t x107 = 324439580683391LLU;
	static int8_t x108 = INT8_MIN;
	static int32_t t26 = 409095699;

	t26 = ((x105<=x106)==(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	static int16_t x110 = 5;
	uint16_t x111 = 29U;
	static int16_t x112 = 0;
	int32_t t27 = -18426854;

	t27 = ((x109<=x110)==(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1908;
	static volatile int64_t x115 = -1LL;
	static uint64_t x116 = 5184616LLU;
	volatile int32_t t28 = 626;

	t28 = ((x113<=x114)==(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = INT8_MIN;
	static int64_t x119 = -1LL;
	static int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -64086;

	t29 = ((x117<=x118)==(x119<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 41U;
	static volatile uint8_t x122 = 30U;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t30 = 10097902;

	t30 = ((x121<=x122)==(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = -1;
	int32_t x126 = INT32_MAX;
	uint8_t x127 = 0U;
	int32_t t31 = -29104;

	t31 = ((x125<=x126)==(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x130 = INT32_MAX;
	static uint32_t x131 = UINT32_MAX;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t32 = 1063030890;

	t32 = ((x129<=x130)==(x131<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = -186588;
	uint32_t x135 = 120U;
	volatile int64_t x136 = -1LL;
	int32_t t33 = -2788;

	t33 = ((x133<=x134)==(x135<x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 1683467977306LLU;
	uint32_t x138 = 90708299U;
	static uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 13;

	t34 = ((x137<=x138)==(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x141 = 14066U;
	static volatile int64_t x142 = INT64_MIN;
	int32_t t35 = -1;

	t35 = ((x141<=x142)==(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MAX;
	int8_t x146 = -1;
	uint8_t x147 = 89U;
	volatile uint64_t x148 = 16032LLU;
	int32_t t36 = 221;

	t36 = ((x145<=x146)==(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	uint64_t x150 = 4142512311762LLU;
	uint32_t x151 = 27U;
	static int16_t x152 = -1;
	static volatile int32_t t37 = -1;

	t37 = ((x149<=x150)==(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 33;
	volatile int64_t x154 = INT64_MIN;
	int8_t x155 = INT8_MIN;
	volatile int64_t x156 = INT64_MIN;
	int32_t t38 = 5093;

	t38 = ((x153<=x154)==(x155<x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -1LL;
	int32_t x160 = INT32_MAX;
	int32_t t39 = 33311374;

	t39 = ((x157<=x158)==(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = 71;
	volatile uint64_t x163 = 20529233811366LLU;
	static int32_t x164 = -11724066;
	int32_t t40 = 5;

	t40 = ((x161<=x162)==(x163<x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x166 = INT16_MAX;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = -7;

	t41 = ((x165<=x166)==(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = INT64_MAX;
	volatile int32_t x170 = INT32_MIN;
	uint64_t x172 = 129089LLU;

	t42 = ((x169<=x170)==(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -3;
	int8_t x174 = -1;
	uint16_t x176 = 121U;

	t43 = ((x173<=x174)==(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile uint32_t x178 = UINT32_MAX;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = -1;
	int32_t t44 = 10742;

	t44 = ((x177<=x178)==(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	volatile int32_t t45 = 21;

	t45 = ((x181<=x182)==(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int16_t x186 = -1;
	int64_t x187 = -111247345960LL;
	static int64_t x188 = INT64_MAX;
	int32_t t46 = 170138950;

	t46 = ((x185<=x186)==(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 22U;
	uint16_t x192 = 217U;
	volatile int32_t t47 = -453;

	t47 = ((x189<=x190)==(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MAX;
	uint8_t x195 = 0U;
	static int32_t t48 = 17378166;

	t48 = ((x193<=x194)==(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -1;
	int32_t x199 = INT32_MAX;
	static int32_t t49 = -93563371;

	t49 = ((x197<=x198)==(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MAX;
	int16_t x202 = INT16_MIN;
	volatile int64_t x203 = INT64_MIN;
	static int64_t x204 = INT64_MIN;
	static volatile int32_t t50 = -62703;

	t50 = ((x201<=x202)==(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	uint32_t x206 = UINT32_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 23U;
	volatile int32_t t51 = -9968473;

	t51 = ((x205<=x206)==(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x210 = 5U;
	int32_t t52 = 1474;

	t52 = ((x209<=x210)==(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -1;
	static volatile int8_t x215 = INT8_MIN;
	int64_t x216 = -4422LL;
	int32_t t53 = 42142;

	t53 = ((x213<=x214)==(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int64_t x218 = INT64_MAX;
	int16_t x219 = INT16_MIN;
	uint8_t x220 = 11U;
	volatile int32_t t54 = -404273250;

	t54 = ((x217<=x218)==(x219<x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 1696944590U;
	static int64_t x222 = -55993030238246LL;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = -4187531;

	t55 = ((x221<=x222)==(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	static int32_t x226 = INT32_MAX;
	static volatile int32_t x227 = -1;
	volatile uint32_t x228 = 190340384U;

	t56 = ((x225<=x226)==(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = 0;
	int64_t x231 = INT64_MAX;
	volatile int16_t x232 = -1;
	volatile int32_t t57 = -1315;

	t57 = ((x229<=x230)==(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MIN;
	static uint16_t x234 = 140U;
	uint32_t x235 = 7865130U;
	int32_t x236 = INT32_MIN;
	int32_t t58 = 363;

	t58 = ((x233<=x234)==(x235<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 545552337U;
	int64_t x238 = INT64_MIN;
	static uint8_t x239 = 2U;
	int8_t x240 = INT8_MIN;
	int32_t t59 = -114;

	t59 = ((x237<=x238)==(x239<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int64_t x242 = 13271999625852LL;
	int16_t x243 = INT16_MIN;

	t60 = ((x241<=x242)==(x243<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 5;
	static uint8_t x246 = 0U;
	volatile int32_t x247 = -1;
	int32_t x248 = -13739;
	volatile int32_t t61 = -10;

	t61 = ((x245<=x246)==(x247<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -34;
	static int64_t x250 = INT64_MAX;
	uint32_t x252 = 0U;
	volatile int32_t t62 = -2236906;

	t62 = ((x249<=x250)==(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	uint8_t x254 = 6U;
	static volatile int8_t x255 = 0;
	int8_t x256 = INT8_MAX;
	static int32_t t63 = 1428;

	t63 = ((x253<=x254)==(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 12;
	volatile uint16_t x258 = UINT16_MAX;
	volatile int64_t x260 = -101012753263LL;

	t64 = ((x257<=x258)==(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int64_t x262 = INT64_MIN;
	static int32_t t65 = 8334111;

	t65 = ((x261<=x262)==(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;
	int32_t t66 = -2882132;

	t66 = ((x265<=x266)==(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	uint64_t x270 = 1539885048465408615LLU;
	uint64_t x271 = 47372001LLU;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -246;

	t67 = ((x269<=x270)==(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MIN;
	int32_t x275 = -484;
	volatile int16_t x276 = INT16_MAX;
	int32_t t68 = -1;

	t68 = ((x273<=x274)==(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	int16_t x278 = -1;
	uint64_t x279 = 108952673784510LLU;
	static int16_t x280 = 40;
	int32_t t69 = -618;

	t69 = ((x277<=x278)==(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	volatile int16_t x282 = 15003;
	int32_t x283 = -1;
	static volatile int64_t x284 = INT64_MIN;

	t70 = ((x281<=x282)==(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 3;
	uint16_t x286 = 332U;
	int16_t x287 = INT16_MIN;
	volatile int8_t x288 = INT8_MAX;
	int32_t t71 = 16;

	t71 = ((x285<=x286)==(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = 175LL;
	uint16_t x290 = 7U;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = UINT16_MAX;
	static int32_t t72 = 74424367;

	t72 = ((x289<=x290)==(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int8_t x294 = INT8_MAX;
	static uint16_t x295 = 3U;
	int32_t t73 = -1;

	t73 = ((x293<=x294)==(x295<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x299 = 13U;
	uint16_t x300 = UINT16_MAX;
	static int32_t t74 = 130888281;

	t74 = ((x297<=x298)==(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	uint8_t x303 = UINT8_MAX;
	static int8_t x304 = INT8_MAX;

	t75 = ((x301<=x302)==(x303<x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MIN;
	volatile int32_t x306 = INT32_MAX;
	uint16_t x308 = 1689U;
	volatile int32_t t76 = 3;

	t76 = ((x305<=x306)==(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x310 = INT32_MAX;
	volatile int64_t x311 = INT64_MAX;
	static int32_t t77 = 369417365;

	t77 = ((x309<=x310)==(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	static uint8_t x314 = 3U;
	int32_t x315 = INT32_MAX;
	volatile int8_t x316 = 13;
	int32_t t78 = -104;

	t78 = ((x313<=x314)==(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x320 = 1U;
	int32_t t79 = 34;

	t79 = ((x317<=x318)==(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	volatile int32_t x322 = INT32_MAX;
	uint8_t x323 = UINT8_MAX;
	int64_t x324 = -1LL;
	static int32_t t80 = 330980;

	t80 = ((x321<=x322)==(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x326 = UINT8_MAX;
	int16_t x327 = 0;
	static uint8_t x328 = 48U;
	int32_t t81 = 8160037;

	t81 = ((x325<=x326)==(x327<x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int32_t x330 = 662;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -474943;

	t82 = ((x329<=x330)==(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MAX;
	uint16_t x334 = 736U;
	int32_t x335 = INT32_MIN;
	volatile int32_t x336 = -1;
	volatile int32_t t83 = 715158626;

	t83 = ((x333<=x334)==(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MAX;
	uint16_t x338 = UINT16_MAX;
	uint64_t x340 = UINT64_MAX;
	static volatile int32_t t84 = 7227789;

	t84 = ((x337<=x338)==(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MAX;
	uint32_t x343 = UINT32_MAX;
	uint64_t x344 = 233569371LLU;

	t85 = ((x341<=x342)==(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -20LL;
	volatile int32_t x346 = 1;
	int16_t x348 = -42;
	volatile int32_t t86 = -549;

	t86 = ((x345<=x346)==(x347<x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 8351LL;
	int8_t x350 = INT8_MIN;
	volatile uint16_t x351 = UINT16_MAX;
	static volatile int32_t t87 = 24104;

	t87 = ((x349<=x350)==(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x353 = -1LL;
	uint8_t x354 = 26U;
	static int32_t x355 = INT32_MIN;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -1293001;

	t88 = ((x353<=x354)==(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	uint32_t x358 = UINT32_MAX;
	uint16_t x359 = UINT16_MAX;
	volatile int32_t t89 = 126902730;

	t89 = ((x357<=x358)==(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	static int16_t x363 = 1537;
	static uint8_t x364 = 15U;
	int32_t t90 = -24;

	t90 = ((x361<=x362)==(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 2U;
	volatile uint8_t x367 = 12U;
	volatile int32_t t91 = 189361467;

	t91 = ((x365<=x366)==(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 2U;
	uint32_t x370 = UINT32_MAX;
	static uint64_t x371 = UINT64_MAX;
	uint8_t x372 = UINT8_MAX;
	static int32_t t92 = -12007;

	t92 = ((x369<=x370)==(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	int8_t x374 = INT8_MAX;
	uint32_t x376 = 63835355U;
	int32_t t93 = 11;

	t93 = ((x373<=x374)==(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;
	int32_t t94 = -437263853;

	t94 = ((x377<=x378)==(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	static int32_t x382 = -3636;
	static volatile int8_t x383 = -2;
	uint64_t x384 = 230658LLU;
	int32_t t95 = 6;

	t95 = ((x381<=x382)==(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -132531921496818411LL;
	int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MIN;
	int16_t x388 = -1;
	volatile int32_t t96 = 2195;

	t96 = ((x385<=x386)==(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x390 = UINT8_MAX;
	volatile uint16_t x392 = 10897U;
	int32_t t97 = 473;

	t97 = ((x389<=x390)==(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = -1;
	int16_t x394 = 1;
	static uint8_t x395 = 86U;
	volatile int32_t t98 = 1147257;

	t98 = ((x393<=x394)==(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MAX;
	int64_t x398 = INT64_MIN;
	int8_t x399 = -1;
	static volatile int64_t x400 = 7535LL;
	int32_t t99 = 25353538;

	t99 = ((x397<=x398)==(x399<x400));

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

