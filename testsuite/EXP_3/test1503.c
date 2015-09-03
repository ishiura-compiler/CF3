#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t1 = -9;
uint16_t x11 = UINT16_MAX;
int32_t t2 = 1675;
int8_t x14 = -1;
int16_t x15 = -10;
static int32_t x20 = 915467547;
int8_t x26 = INT8_MIN;
static int32_t x33 = -1;
int64_t x34 = INT64_MAX;
static volatile int8_t x36 = INT8_MAX;
int32_t x40 = INT32_MIN;
int64_t x50 = -1LL;
static int8_t x51 = -1;
static int16_t x55 = 198;
volatile int32_t t13 = -1;
int32_t x60 = -1;
volatile uint16_t x64 = 10U;
int32_t t15 = -3691;
uint8_t x66 = UINT8_MAX;
int16_t x68 = -9;
static volatile int32_t t16 = -462105742;
static uint8_t x78 = UINT8_MAX;
int32_t x92 = INT32_MAX;
int16_t x96 = INT16_MIN;
static int16_t x106 = INT16_MAX;
int64_t x108 = 16229LL;
static int32_t x109 = -3109154;
uint32_t x112 = 2503955U;
static int16_t x117 = INT16_MIN;
static int32_t x120 = 9953976;
uint32_t x123 = 12U;
static volatile int32_t t30 = -131996;
static uint16_t x125 = UINT16_MAX;
int8_t x127 = -1;
uint32_t x132 = 3U;
volatile int32_t t32 = 27;
int32_t x133 = -1;
int64_t x148 = 13237880LL;
static int32_t t36 = 27;
static volatile int64_t x150 = INT64_MIN;
static uint32_t x168 = 13457553U;
int64_t x173 = -1LL;
volatile int32_t x179 = -1;
volatile uint16_t x190 = UINT16_MAX;
uint8_t x192 = UINT8_MAX;
int64_t x195 = -1LL;
int8_t x198 = -4;
uint8_t x199 = UINT8_MAX;
int32_t t49 = -1;
uint8_t x208 = 22U;
int8_t x210 = -1;
static int8_t x218 = 1;
volatile int32_t t56 = -1;
uint16_t x229 = 17U;
int32_t x233 = -1;
uint8_t x237 = 40U;
volatile int32_t t59 = -140534;
static volatile int32_t x241 = INT32_MIN;
int8_t x242 = INT8_MAX;
int32_t t61 = -5385935;
int16_t x255 = -1;
volatile int32_t x259 = -791179;
uint16_t x265 = UINT16_MAX;
int64_t x268 = INT64_MAX;
static uint16_t x281 = UINT16_MAX;
uint32_t x282 = 11077077U;
volatile int32_t t73 = 6;
int64_t x298 = -15815LL;
uint32_t x305 = 457U;
int16_t x306 = 6;
int64_t x313 = -1LL;
int8_t x316 = -1;
int64_t x323 = INT64_MIN;
volatile int32_t x330 = INT32_MIN;
int32_t t82 = 3866918;
static uint32_t x335 = UINT32_MAX;
volatile int32_t x337 = INT32_MIN;
uint8_t x338 = UINT8_MAX;
uint16_t x340 = UINT16_MAX;
uint8_t x345 = 6U;
static volatile int32_t t86 = 26145;
int64_t x352 = INT64_MIN;
volatile int32_t t87 = 906876;
static int32_t t88 = -3930853;
int8_t x363 = 1;
int32_t x365 = -1;
static int16_t x367 = INT16_MAX;
uint16_t x373 = 0U;
uint64_t x375 = UINT64_MAX;
volatile int64_t x389 = -97405832010032420LL;
static int32_t t97 = -192109;
int64_t x393 = -3448200536397490950LL;
int8_t x394 = INT8_MIN;
uint32_t x400 = 1U;
static volatile int32_t t99 = -12063564;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MAX;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	static int32_t t0 = -1009715222;

	t0 = ((x1|x2)==(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 1U;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -15204420;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5|x6)==(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	int8_t x12 = 1;

	t2 = ((x9|x10)==(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -159;

	t3 = ((x13|x14)==(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 15U;
	int64_t x18 = 91243995LL;
	uint8_t x19 = UINT8_MAX;
	int32_t t4 = -1971346;

	t4 = ((x17|x18)==(x19<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	static uint16_t x24 = 94U;
	int32_t t5 = 115;

	t5 = ((x21|x22)==(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 22;
	static int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -4478571;

	t6 = ((x25|x26)==(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	int64_t x30 = INT64_MIN;
	volatile int16_t x31 = INT16_MIN;
	static int16_t x32 = INT16_MIN;
	int32_t t7 = 10923;

	t7 = ((x29|x30)==(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = 1U;
	int32_t t8 = 683;

	t8 = ((x33|x34)==(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	volatile int32_t x38 = -3;
	uint16_t x39 = 3130U;
	int32_t t9 = -55904;

	t9 = ((x37|x38)==(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -10;
	int32_t x42 = INT32_MAX;
	uint32_t x43 = 46U;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = -614814;

	t10 = ((x41|x42)==(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -743;
	volatile uint8_t x46 = 1U;
	volatile int16_t x47 = INT16_MIN;
	int16_t x48 = 96;
	int32_t t11 = 4139;

	t11 = ((x45|x46)==(x47<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = UINT8_MAX;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = -1;

	t12 = ((x49|x50)==(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 5;
	int32_t x54 = 1;
	volatile int32_t x56 = -1;

	t13 = ((x53|x54)==(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	static int8_t x58 = INT8_MIN;
	volatile int8_t x59 = INT8_MIN;
	int32_t t14 = 348183893;

	t14 = ((x57|x58)==(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	volatile int16_t x62 = INT16_MIN;
	uint16_t x63 = 11449U;

	t15 = ((x61|x62)==(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 30U;
	int8_t x67 = -1;

	t16 = ((x65|x66)==(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = INT32_MIN;
	uint64_t x70 = 4978013739LLU;
	static volatile uint32_t x71 = 521506860U;
	int16_t x72 = INT16_MAX;
	volatile int32_t t17 = -1;

	t17 = ((x69|x70)==(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	static int16_t x74 = -1;
	int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	int32_t t18 = 1;

	t18 = ((x73|x74)==(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	volatile int64_t x79 = 90742LL;
	int64_t x80 = INT64_MIN;
	static volatile int32_t t19 = 3788;

	t19 = ((x77|x78)==(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	uint64_t x83 = 1094054586LLU;
	uint64_t x84 = 9331066LLU;
	volatile int32_t t20 = 22;

	t20 = ((x81|x82)==(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static uint64_t x86 = 4LLU;
	uint8_t x87 = 1U;
	int32_t x88 = 8;
	int32_t t21 = 27834;

	t21 = ((x85|x86)==(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	volatile int64_t x91 = -199315390501853193LL;
	volatile int32_t t22 = 7;

	t22 = ((x89|x90)==(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = 110082638475127LL;
	int16_t x94 = INT16_MAX;
	uint64_t x95 = 2279694265362509147LLU;
	int32_t t23 = -142;

	t23 = ((x93|x94)==(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -832;
	volatile int16_t x98 = 722;
	int16_t x99 = INT16_MIN;
	volatile int16_t x100 = INT16_MAX;
	volatile int32_t t24 = -412100;

	t24 = ((x97|x98)==(x99<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 10850U;
	uint16_t x102 = UINT16_MAX;
	int64_t x103 = INT64_MIN;
	static volatile int32_t x104 = INT32_MIN;
	volatile int32_t t25 = 81;

	t25 = ((x101|x102)==(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 1607902U;
	int8_t x107 = -14;
	static volatile int32_t t26 = -46;

	t26 = ((x105|x106)==(x107<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x110 = -107855029;
	int16_t x111 = -1;
	static int32_t t27 = -45921718;

	t27 = ((x109|x110)==(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	volatile uint64_t x115 = 249842077072LLU;
	int16_t x116 = -1;
	volatile int32_t t28 = 19296288;

	t28 = ((x113|x114)==(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x118 = UINT32_MAX;
	int8_t x119 = INT8_MIN;
	int32_t t29 = 14859638;

	t29 = ((x117|x118)==(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 1954263584157064989LLU;
	uint16_t x122 = 16604U;
	int32_t x124 = INT32_MIN;

	t30 = ((x121|x122)==(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x126 = 21U;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = -1172485;

	t31 = ((x125|x126)==(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 3484LLU;
	int8_t x130 = INT8_MAX;
	int16_t x131 = -1;

	t32 = ((x129|x130)==(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	volatile uint8_t x135 = 5U;
	uint32_t x136 = UINT32_MAX;
	volatile int32_t t33 = 1802390;

	t33 = ((x133|x134)==(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -16;
	volatile int16_t x138 = INT16_MIN;
	volatile int32_t x139 = -1;
	volatile int16_t x140 = -1;
	static int32_t t34 = -21;

	t34 = ((x137|x138)==(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 47;
	int8_t x142 = INT8_MAX;
	int16_t x143 = -5;
	static int8_t x144 = 0;
	static int32_t t35 = -830740;

	t35 = ((x141|x142)==(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -1;
	static volatile uint16_t x146 = 1U;
	static int32_t x147 = -1;

	t36 = ((x145|x146)==(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MAX;
	static volatile int8_t x151 = INT8_MIN;
	static int32_t x152 = -48832196;
	int32_t t37 = 0;

	t37 = ((x149|x150)==(x151<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 26LLU;
	uint8_t x154 = UINT8_MAX;
	static int32_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t38 = -43569322;

	t38 = ((x153|x154)==(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int16_t x158 = INT16_MIN;
	uint8_t x159 = UINT8_MAX;
	uint16_t x160 = UINT16_MAX;
	int32_t t39 = -2627;

	t39 = ((x157|x158)==(x159<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = 7U;
	int16_t x164 = -1;
	int32_t t40 = 753;

	t40 = ((x161|x162)==(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 6744U;
	volatile int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int32_t t41 = -1;

	t41 = ((x165|x166)==(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	uint16_t x170 = 1846U;
	volatile int16_t x171 = -2507;
	static int8_t x172 = INT8_MAX;
	volatile int32_t t42 = 52221;

	t42 = ((x169|x170)==(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x174 = UINT16_MAX;
	static int32_t x175 = INT32_MAX;
	static int8_t x176 = 0;
	volatile int32_t t43 = 9895959;

	t43 = ((x173|x174)==(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = UINT32_MAX;
	int16_t x178 = INT16_MIN;
	int32_t x180 = INT32_MAX;
	static volatile int32_t t44 = 2;

	t44 = ((x177|x178)==(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int16_t x182 = 988;
	int8_t x183 = -5;
	static uint64_t x184 = 6LLU;
	volatile int32_t t45 = 2485671;

	t45 = ((x181|x182)==(x183<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 1;
	volatile int8_t x186 = 47;
	static int16_t x187 = -10;
	uint32_t x188 = UINT32_MAX;
	static volatile int32_t t46 = -9143161;

	t46 = ((x185|x186)==(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int32_t t47 = -21750;

	t47 = ((x189|x190)==(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = INT16_MAX;
	int16_t x196 = -1;
	static int32_t t48 = 0;

	t48 = ((x193|x194)==(x195<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 12U;
	volatile int32_t x200 = -1;

	t49 = ((x197|x198)==(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int64_t x202 = 100119805385119LL;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;
	volatile int32_t t50 = -183;

	t50 = ((x201|x202)==(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = UINT32_MAX;
	volatile int16_t x206 = 0;
	uint64_t x207 = UINT64_MAX;
	volatile int32_t t51 = -9337;

	t51 = ((x205|x206)==(x207<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static int64_t x211 = -1LL;
	int16_t x212 = INT16_MAX;
	static volatile int32_t t52 = 120772429;

	t52 = ((x209|x210)==(x211<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 1U;
	static int64_t x214 = INT64_MIN;
	volatile int32_t x215 = INT32_MIN;
	uint64_t x216 = 2010944LLU;
	volatile int32_t t53 = 56294;

	t53 = ((x213|x214)==(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 56;
	int16_t x219 = 40;
	static uint16_t x220 = UINT16_MAX;
	int32_t t54 = 9411902;

	t54 = ((x217|x218)==(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -1;
	static int16_t x222 = INT16_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	int32_t t55 = 97162;

	t55 = ((x221|x222)==(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x225 = UINT64_MAX;
	uint32_t x226 = 2U;
	static int16_t x227 = INT16_MIN;
	int8_t x228 = -1;

	t56 = ((x225|x226)==(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = -1LL;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = 1;
	static int32_t t57 = -86;

	t57 = ((x229|x230)==(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MIN;
	int64_t x236 = -17798816LL;
	static int32_t t58 = 2;

	t58 = ((x233|x234)==(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = -1;
	uint8_t x240 = 1U;

	t59 = ((x237|x238)==(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x243 = -1LL;
	static int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 2594;

	t60 = ((x241|x242)==(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -1;
	int16_t x246 = -2382;
	uint8_t x247 = 6U;
	uint32_t x248 = 18U;

	t61 = ((x245|x246)==(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = 2U;
	int8_t x250 = 0;
	uint64_t x251 = UINT64_MAX;
	int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 130;

	t62 = ((x249|x250)==(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	uint16_t x254 = 37U;
	int64_t x256 = -531732822LL;
	int32_t t63 = 87;

	t63 = ((x253|x254)==(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	int16_t x258 = 749;
	static int16_t x260 = -1;
	volatile int32_t t64 = -7;

	t64 = ((x257|x258)==(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	int32_t x262 = 1;
	uint16_t x263 = 126U;
	static volatile int64_t x264 = 9295753904LL;
	int32_t t65 = 104582138;

	t65 = ((x261|x262)==(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -1LL;
	int8_t x267 = -1;
	volatile int32_t t66 = -5546334;

	t66 = ((x265|x266)==(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = -324516150;
	int32_t x270 = INT32_MIN;
	volatile int32_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = -35913056;

	t67 = ((x269|x270)==(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	volatile int8_t x274 = INT8_MAX;
	volatile int8_t x275 = INT8_MAX;
	volatile int16_t x276 = INT16_MAX;
	volatile int32_t t68 = 49789;

	t68 = ((x273|x274)==(x275<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = 14482U;
	uint16_t x278 = 3U;
	volatile int8_t x279 = INT8_MIN;
	int64_t x280 = -1LL;
	int32_t t69 = 2;

	t69 = ((x277|x278)==(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x283 = UINT16_MAX;
	int8_t x284 = INT8_MAX;
	volatile int32_t t70 = -52;

	t70 = ((x281|x282)==(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x285 = -1;
	int32_t x286 = -386438951;
	int16_t x287 = INT16_MAX;
	int16_t x288 = 6;
	volatile int32_t t71 = 28590;

	t71 = ((x285|x286)==(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MAX;
	static int32_t x290 = 6862417;
	int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -11;

	t72 = ((x289|x290)==(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = INT32_MIN;
	int8_t x294 = 1;
	static uint8_t x295 = UINT8_MAX;
	int64_t x296 = 16183454629LL;

	t73 = ((x293|x294)==(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	uint64_t x299 = 8014936974987LLU;
	uint64_t x300 = 1112018300LLU;
	volatile int32_t t74 = -9431;

	t74 = ((x297|x298)==(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int16_t x302 = 0;
	static int8_t x303 = INT8_MAX;
	int32_t x304 = 26267;
	int32_t t75 = 100;

	t75 = ((x301|x302)==(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x307 = 3844663106574610LLU;
	int64_t x308 = -14829871085178691LL;
	int32_t t76 = -4194;

	t76 = ((x305|x306)==(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	int32_t x310 = 29530;
	uint64_t x311 = 90250LLU;
	uint32_t x312 = UINT32_MAX;
	static int32_t t77 = 87130980;

	t77 = ((x309|x310)==(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = UINT16_MAX;
	uint64_t x315 = 14121136641306590LLU;
	static int32_t t78 = -7502;

	t78 = ((x313|x314)==(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MAX;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = 1512990000U;
	volatile int32_t x320 = 81;
	volatile int32_t t79 = 3;

	t79 = ((x317|x318)==(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static uint8_t x322 = 3U;
	uint8_t x324 = 0U;
	volatile int32_t t80 = 2;

	t80 = ((x321|x322)==(x323<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 4U;
	uint64_t x326 = 3423LLU;
	uint16_t x327 = 13688U;
	volatile uint8_t x328 = 98U;
	int32_t t81 = 21073;

	t81 = ((x325|x326)==(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 34059U;
	int32_t x331 = INT32_MIN;
	int32_t x332 = INT32_MIN;

	t82 = ((x329|x330)==(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = 292958662658679LLU;
	int64_t x334 = INT64_MIN;
	volatile int32_t x336 = -509;
	volatile int32_t t83 = -13;

	t83 = ((x333|x334)==(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x339 = 1U;
	volatile int32_t t84 = 1;

	t84 = ((x337|x338)==(x339<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = INT64_MIN;
	volatile uint16_t x343 = UINT16_MAX;
	int64_t x344 = INT64_MIN;
	static volatile int32_t t85 = 2739;

	t85 = ((x341|x342)==(x343<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 31U;
	static volatile int8_t x348 = 30;

	t86 = ((x345|x346)==(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = -1;
	volatile int64_t x350 = INT64_MAX;
	uint32_t x351 = 744809682U;

	t87 = ((x349|x350)==(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -6305;
	int16_t x354 = INT16_MIN;
	volatile int8_t x355 = INT8_MIN;
	volatile int8_t x356 = -3;

	t88 = ((x353|x354)==(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 4995U;
	uint32_t x358 = 173422108U;
	int64_t x359 = INT64_MIN;
	static volatile uint8_t x360 = UINT8_MAX;
	int32_t t89 = -187121;

	t89 = ((x357|x358)==(x359<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 148;
	volatile uint8_t x362 = 112U;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 377089875;

	t90 = ((x361|x362)==(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -248937966;

	t91 = ((x365|x366)==(x367<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 14U;
	uint32_t x370 = 31365U;
	uint16_t x371 = 12224U;
	volatile uint32_t x372 = 124U;
	int32_t t92 = -224078746;

	t92 = ((x369|x370)==(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = 2;
	uint32_t x376 = 162957372U;
	volatile int32_t t93 = -247675623;

	t93 = ((x373|x374)==(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 0;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	volatile int16_t x380 = 3;
	int32_t t94 = -6;

	t94 = ((x377|x378)==(x379<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	volatile int32_t x382 = -15626640;
	int16_t x383 = -1;
	int64_t x384 = -5534966342LL;
	volatile int32_t t95 = 105;

	t95 = ((x381|x382)==(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 1058U;
	static int32_t x386 = 1906502;
	static uint32_t x387 = 16487U;
	uint32_t x388 = 352035U;
	volatile int32_t t96 = -1196;

	t96 = ((x385|x386)==(x387<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x390 = 14508255U;
	static uint32_t x391 = UINT32_MAX;
	int64_t x392 = 12741314403980741LL;

	t97 = ((x389|x390)==(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 2157;

	t98 = ((x393|x394)==(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static volatile uint16_t x398 = 450U;
	static int64_t x399 = 19023LL;

	t99 = ((x397|x398)==(x399<x400));

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

