#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = UINT8_MAX;
int32_t t1 = 245;
uint64_t x10 = 86LLU;
uint16_t x13 = UINT16_MAX;
int8_t x14 = INT8_MAX;
static uint8_t x18 = 6U;
static volatile int8_t x28 = -1;
int32_t x36 = INT32_MAX;
int16_t x39 = -1;
int64_t x42 = INT64_MIN;
uint32_t x44 = 1519784U;
int32_t t10 = 54639;
int16_t x47 = 1;
int32_t t13 = 1288896;
int32_t t14 = 0;
static volatile uint64_t x66 = 8200241712LLU;
uint8_t x70 = 25U;
int32_t t17 = -7;
static int8_t x78 = INT8_MIN;
int16_t x89 = INT16_MAX;
uint32_t x91 = 28660681U;
static int8_t x93 = -1;
static uint8_t x100 = UINT8_MAX;
volatile int8_t x101 = INT8_MAX;
static int32_t t25 = -154914;
uint16_t x105 = UINT16_MAX;
int32_t x110 = INT32_MAX;
static int8_t x111 = -1;
int16_t x112 = INT16_MAX;
int32_t t27 = 6524;
volatile int32_t x122 = INT32_MIN;
int16_t x124 = INT16_MIN;
volatile int32_t t30 = -34012;
uint64_t x134 = 6764244123344115LLU;
static int32_t t33 = -3123568;
int64_t x137 = INT64_MIN;
int8_t x142 = 22;
int32_t t35 = 0;
volatile int64_t x145 = 196611863LL;
int32_t x151 = -854;
static volatile uint64_t x152 = UINT64_MAX;
int64_t x156 = INT64_MIN;
static uint16_t x157 = UINT16_MAX;
static volatile int16_t x162 = INT16_MIN;
uint8_t x164 = 19U;
int32_t t40 = 7;
uint8_t x165 = 3U;
uint8_t x173 = 58U;
volatile int64_t x176 = -920955299518225248LL;
static volatile int64_t x177 = -35377244504059736LL;
volatile uint16_t x178 = 3518U;
uint16_t x196 = 96U;
volatile int64_t x200 = INT64_MAX;
static int64_t x207 = -294306933976538LL;
int32_t t53 = 4;
int16_t x219 = INT16_MAX;
int8_t x224 = INT8_MIN;
static int32_t x228 = INT32_MIN;
int32_t t58 = -628;
volatile uint32_t x241 = 16U;
volatile int16_t x245 = 0;
volatile uint64_t x246 = 10589907342272LLU;
uint8_t x248 = UINT8_MAX;
int32_t x250 = INT32_MIN;
volatile uint16_t x267 = 1U;
int32_t x269 = INT32_MAX;
volatile int16_t x272 = INT16_MIN;
volatile int32_t t67 = 419;
int8_t x284 = -1;
uint32_t x287 = 41U;
int64_t x288 = -3349203212497420076LL;
int64_t x290 = INT64_MIN;
static uint16_t x299 = 4220U;
uint32_t x302 = UINT32_MAX;
int32_t t75 = 63;
int32_t x305 = INT32_MAX;
int32_t x307 = -1;
uint16_t x308 = 0U;
uint8_t x310 = 14U;
int8_t x320 = INT8_MIN;
static volatile int32_t t79 = -11;
static int16_t x325 = -22;
static int8_t x327 = INT8_MAX;
int32_t x328 = INT32_MIN;
volatile int32_t x333 = 305920950;
volatile int32_t x337 = -1;
uint8_t x338 = UINT8_MAX;
int32_t x343 = INT32_MAX;
int64_t x347 = INT64_MIN;
int64_t x351 = INT64_MIN;
volatile int32_t t88 = -23076858;
int32_t x357 = INT32_MIN;
uint8_t x359 = UINT8_MAX;
volatile int32_t t89 = -8141;
int32_t x363 = INT32_MAX;
int64_t x365 = INT64_MIN;
uint32_t x370 = 244234589U;
volatile int32_t t92 = 0;
volatile int8_t x384 = -1;
static volatile int32_t t97 = -2492363;
static volatile uint32_t x393 = 6U;
static int64_t x399 = -1LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = 24;
	uint8_t x3 = UINT8_MAX;
	static volatile uint8_t x4 = 79U;
	volatile int32_t t0 = 15403;

	t0 = ((x1<=x2)<(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 0U;
	uint32_t x7 = 54311U;
	int32_t x8 = -93374;

	t1 = ((x5<=x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x11 = 1577686;
	uint32_t x12 = 2U;
	static int32_t t2 = 64488;

	t2 = ((x9<=x10)<(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = INT32_MIN;
	volatile int64_t x16 = INT64_MAX;
	static int32_t t3 = -3;

	t3 = ((x13<=x14)<(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x19 = 7568LL;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -224259;

	t4 = ((x17<=x18)<(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 1991;
	int16_t x22 = INT16_MIN;
	int64_t x23 = -1LL;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -20533;

	t5 = ((x21<=x22)<(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	int8_t x26 = 0;
	static uint32_t x27 = UINT32_MAX;
	int32_t t6 = 7169;

	t6 = ((x25<=x26)<(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 113U;
	int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	static volatile int32_t t7 = 143;

	t7 = ((x29<=x30)<(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MAX;
	int64_t x34 = 14LL;
	uint8_t x35 = 120U;
	int32_t t8 = -14416352;

	t8 = ((x33<=x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	static uint64_t x40 = 133804482606129369LLU;
	volatile int32_t t9 = 6;

	t9 = ((x37<=x38)<(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	static uint32_t x43 = 29244789U;

	t10 = ((x41<=x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	static volatile int32_t x48 = INT32_MAX;
	volatile int32_t t11 = 1729175;

	t11 = ((x45<=x46)<(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 262816U;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	uint16_t x52 = 2835U;
	volatile int32_t t12 = -19801498;

	t12 = ((x49<=x50)<(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 26;
	volatile int64_t x54 = 16010192LL;
	uint64_t x55 = 72890318093LLU;
	volatile int16_t x56 = 177;

	t13 = ((x53<=x54)<(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 81;
	uint64_t x58 = 18251225034LLU;
	int64_t x59 = INT64_MIN;
	int64_t x60 = INT64_MIN;

	t14 = ((x57<=x58)<(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 25990U;
	uint16_t x62 = 2005U;
	int16_t x63 = 17;
	int32_t x64 = -1;
	volatile int32_t t15 = 59095;

	t15 = ((x61<=x62)<(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 1;
	int16_t x67 = -1;
	static volatile int32_t x68 = INT32_MAX;
	static int32_t t16 = 53;

	t16 = ((x65<=x66)<(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 2135;
	uint16_t x71 = 1440U;
	volatile uint64_t x72 = UINT64_MAX;

	t17 = ((x69<=x70)<(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	uint16_t x74 = 14U;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = -1;
	static volatile int32_t t18 = 581;

	t18 = ((x73<=x74)<(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static int64_t x79 = INT64_MIN;
	volatile int64_t x80 = -702287663286LL;
	int32_t t19 = -34004;

	t19 = ((x77<=x78)<(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -257293LL;
	static uint64_t x82 = 3478695276304007LLU;
	int8_t x83 = INT8_MAX;
	int32_t x84 = 380012;
	volatile int32_t t20 = -9230050;

	t20 = ((x81<=x82)<(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = 871358768336203161LLU;
	int16_t x87 = -1;
	uint64_t x88 = 10650246334195728LLU;
	int32_t t21 = 4;

	t21 = ((x85<=x86)<(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 423748094212166LLU;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 23;

	t22 = ((x89<=x90)<(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = 824U;
	int32_t x95 = -1;
	int64_t x96 = 972445LL;
	static int32_t t23 = -8184911;

	t23 = ((x93<=x94)<(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static int64_t x98 = INT64_MAX;
	uint16_t x99 = 271U;
	volatile int32_t t24 = 21764378;

	t24 = ((x97<=x98)<(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x102 = UINT32_MAX;
	uint8_t x103 = UINT8_MAX;
	static volatile uint32_t x104 = 1620003U;

	t25 = ((x101<=x102)<(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x106 = UINT32_MAX;
	int32_t x107 = 978;
	uint32_t x108 = 0U;
	static int32_t t26 = -3325015;

	t26 = ((x105<=x106)<(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;

	t27 = ((x109<=x110)<(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x113 = 95LLU;
	volatile int16_t x114 = -1;
	static int32_t x115 = -1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 2466427;

	t28 = ((x113<=x114)<(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x118 = -4;
	uint64_t x119 = UINT64_MAX;
	uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = -10;

	t29 = ((x117<=x118)<(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 137521247702465472LLU;
	volatile uint8_t x123 = UINT8_MAX;

	t30 = ((x121<=x122)<(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -33;
	static uint16_t x126 = 30506U;
	static volatile uint64_t x127 = 27LLU;
	int16_t x128 = -1;
	volatile int32_t t31 = 244919619;

	t31 = ((x125<=x126)<(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	static int64_t x130 = INT64_MIN;
	int64_t x131 = 61600375285949222LL;
	int16_t x132 = -41;
	int32_t t32 = 81918;

	t32 = ((x129<=x130)<(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint32_t x135 = 6U;
	uint16_t x136 = 964U;

	t33 = ((x133<=x134)<(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = 790U;
	int32_t x139 = 8;
	int64_t x140 = INT64_MIN;
	int32_t t34 = 41011747;

	t34 = ((x137<=x138)<(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = UINT8_MAX;

	t35 = ((x141<=x142)<(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x146 = -1LL;
	static int32_t x147 = -171;
	volatile int16_t x148 = -3;
	volatile int32_t t36 = -13;

	t36 = ((x145<=x146)<(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x150 = 72U;
	volatile int32_t t37 = -2703;

	t37 = ((x149<=x150)<(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 3492;
	volatile int8_t x154 = -16;
	uint8_t x155 = 2U;
	int32_t t38 = 439;

	t38 = ((x153<=x154)<(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 35578825LLU;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;
	volatile int32_t t39 = -3;

	t39 = ((x157<=x158)<(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 1;
	uint16_t x163 = UINT16_MAX;

	t40 = ((x161<=x162)<(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MAX;
	volatile int8_t x167 = 58;
	static volatile int8_t x168 = 1;
	volatile int32_t t41 = 1801840;

	t41 = ((x165<=x166)<(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = UINT64_MAX;
	int32_t t42 = 3;

	t42 = ((x169<=x170)<(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	static uint8_t x175 = 2U;
	static int32_t t43 = -123833889;

	t43 = ((x173<=x174)<(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x179 = -1LL;
	int32_t x180 = -7;
	volatile int32_t t44 = -55424157;

	t44 = ((x177<=x178)<(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 0;
	int16_t x182 = -1;
	uint16_t x183 = UINT16_MAX;
	int64_t x184 = -28LL;
	volatile int32_t t45 = 4;

	t45 = ((x181<=x182)<(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = 10U;
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MIN;
	static uint32_t x188 = UINT32_MAX;
	int32_t t46 = -1586375;

	t46 = ((x185<=x186)<(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int32_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	int16_t x192 = INT16_MAX;
	int32_t t47 = 1256;

	t47 = ((x189<=x190)<(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 606U;
	uint16_t x194 = 453U;
	int32_t x195 = INT32_MIN;
	static volatile int32_t t48 = -55109193;

	t48 = ((x193<=x194)<(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 1;
	static volatile int64_t x198 = INT64_MAX;
	static int16_t x199 = -1;
	volatile int32_t t49 = 1024030;

	t49 = ((x197<=x198)<(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	volatile uint32_t x202 = 6U;
	static uint32_t x203 = UINT32_MAX;
	int64_t x204 = -6582360153LL;
	int32_t t50 = 491;

	t50 = ((x201<=x202)<(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	static uint64_t x206 = 114485416LLU;
	volatile int16_t x208 = INT16_MIN;
	int32_t t51 = 10486;

	t51 = ((x205<=x206)<(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 15254;
	uint32_t x210 = 364U;
	static int8_t x211 = 2;
	uint16_t x212 = 7561U;
	int32_t t52 = 340029856;

	t52 = ((x209<=x210)<(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = 63U;
	uint16_t x214 = 242U;
	static uint32_t x215 = 355933U;
	int8_t x216 = -1;

	t53 = ((x213<=x214)<(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = UINT16_MAX;
	int8_t x218 = -1;
	uint32_t x220 = UINT32_MAX;
	volatile int32_t t54 = 2;

	t54 = ((x217<=x218)<(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 1;
	uint16_t x222 = UINT16_MAX;
	int32_t x223 = INT32_MIN;
	static volatile int32_t t55 = 1150150;

	t55 = ((x221<=x222)<(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -361666983LL;
	uint8_t x226 = 13U;
	int8_t x227 = INT8_MIN;
	static volatile int32_t t56 = 230;

	t56 = ((x225<=x226)<(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 894191438789LLU;
	static volatile int32_t x230 = INT32_MIN;
	volatile int8_t x231 = -1;
	volatile uint64_t x232 = 5413274249753LLU;
	volatile int32_t t57 = 15724521;

	t57 = ((x229<=x230)<(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x233 = UINT32_MAX;
	static int32_t x234 = INT32_MAX;
	int16_t x235 = INT16_MIN;
	int16_t x236 = -7;

	t58 = ((x233<=x234)<(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 0U;
	int8_t x238 = -9;
	int8_t x239 = INT8_MAX;
	uint16_t x240 = 1U;
	volatile int32_t t59 = 570;

	t59 = ((x237<=x238)<(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x242 = 14001237U;
	uint32_t x243 = UINT32_MAX;
	volatile int64_t x244 = INT64_MAX;
	int32_t t60 = 121936;

	t60 = ((x241<=x242)<(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x247 = 80066237LLU;
	int32_t t61 = 23635848;

	t61 = ((x245<=x246)<(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 59318179LL;
	uint16_t x251 = UINT16_MAX;
	int16_t x252 = 182;
	volatile int32_t t62 = 60;

	t62 = ((x249<=x250)<(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = INT32_MAX;
	uint16_t x254 = 12U;
	int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 20U;
	volatile int32_t t63 = -90614;

	t63 = ((x253<=x254)<(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	static volatile uint32_t x258 = UINT32_MAX;
	int8_t x259 = -1;
	volatile int64_t x260 = INT64_MIN;
	volatile int32_t t64 = 4517952;

	t64 = ((x257<=x258)<(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	int16_t x262 = INT16_MIN;
	int16_t x263 = -4;
	volatile int64_t x264 = -1LL;
	int32_t t65 = 898;

	t65 = ((x261<=x262)<(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = INT64_MAX;
	uint32_t x266 = UINT32_MAX;
	volatile int32_t x268 = 0;
	int32_t t66 = -7146185;

	t66 = ((x265<=x266)<(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	int8_t x271 = 1;

	t67 = ((x269<=x270)<(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -31;
	uint16_t x275 = 31U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 231255;

	t68 = ((x273<=x274)<(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	int32_t x278 = 756;
	volatile int16_t x279 = INT16_MIN;
	int8_t x280 = -1;
	volatile int32_t t69 = -258242159;

	t69 = ((x277<=x278)<(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 49U;
	uint32_t x282 = UINT32_MAX;
	static int64_t x283 = INT64_MIN;
	static volatile int32_t t70 = -1574;

	t70 = ((x281<=x282)<(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = -29;
	int32_t x286 = 0;
	int32_t t71 = 241;

	t71 = ((x285<=x286)<(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	int64_t x291 = INT64_MIN;
	volatile uint64_t x292 = 1797LLU;
	volatile int32_t t72 = 96569;

	t72 = ((x289<=x290)<(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 26U;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t73 = -632628191;

	t73 = ((x293<=x294)<(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	volatile uint8_t x298 = 3U;
	uint64_t x300 = 183308689187240LLU;
	volatile int32_t t74 = 21535663;

	t74 = ((x297<=x298)<(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x301 = 1U;
	static uint32_t x303 = UINT32_MAX;
	volatile int64_t x304 = -1LL;

	t75 = ((x301<=x302)<(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = -1LL;
	volatile int32_t t76 = 37;

	t76 = ((x305<=x306)<(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	volatile uint16_t x311 = UINT16_MAX;
	uint16_t x312 = 325U;
	volatile int32_t t77 = 62;

	t77 = ((x309<=x310)<(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int32_t x314 = -543938045;
	static uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 4249526235198LLU;
	volatile int32_t t78 = -846;

	t78 = ((x313<=x314)<(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	static int32_t x318 = 18;
	int32_t x319 = INT32_MIN;

	t79 = ((x317<=x318)<(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -11;
	int16_t x322 = -1;
	uint8_t x323 = 36U;
	int64_t x324 = -1LL;
	int32_t t80 = -297938439;

	t80 = ((x321<=x322)<(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = 5;
	int32_t t81 = 0;

	t81 = ((x325<=x326)<(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	volatile int64_t x330 = -889103441200811083LL;
	uint8_t x331 = 0U;
	int16_t x332 = 1536;
	static volatile int32_t t82 = -35363;

	t82 = ((x329<=x330)<(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	static int32_t t83 = -76;

	t83 = ((x333<=x334)<(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = -14;
	volatile int8_t x340 = INT8_MIN;
	volatile int32_t t84 = -7;

	t84 = ((x337<=x338)<(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = 5974U;
	uint32_t x342 = 14985U;
	int16_t x344 = -26;
	volatile int32_t t85 = 896;

	t85 = ((x341<=x342)<(x343&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x345 = 1;
	volatile int16_t x346 = 2120;
	static int8_t x348 = INT8_MIN;
	int32_t t86 = 2842578;

	t86 = ((x345<=x346)<(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 1073U;
	static int8_t x350 = INT8_MAX;
	static int16_t x352 = INT16_MIN;
	int32_t t87 = 364;

	t87 = ((x349<=x350)<(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int32_t x354 = INT32_MAX;
	uint64_t x355 = UINT64_MAX;
	volatile uint8_t x356 = 1U;

	t88 = ((x353<=x354)<(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x358 = INT8_MIN;
	static uint32_t x360 = 0U;

	t89 = ((x357<=x358)<(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -1LL;
	uint64_t x362 = 130761253262603519LLU;
	uint32_t x364 = 479U;
	volatile int32_t t90 = 45044;

	t90 = ((x361<=x362)<(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = INT16_MIN;
	int64_t x367 = 13362210LL;
	int64_t x368 = 90LL;
	volatile int32_t t91 = 2;

	t91 = ((x365<=x366)<(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 26U;
	static int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;

	t92 = ((x369<=x370)<(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MAX;
	uint16_t x374 = 0U;
	int64_t x375 = 247616623801071141LL;
	static int16_t x376 = -839;
	int32_t t93 = 492586;

	t93 = ((x373<=x374)<(x375&x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -13;
	static volatile uint32_t x378 = UINT32_MAX;
	uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MIN;
	static int32_t t94 = -107849360;

	t94 = ((x377<=x378)<(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	static uint16_t x383 = UINT16_MAX;
	static int32_t t95 = 9912;

	t95 = ((x381<=x382)<(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	static volatile int32_t x386 = -976047;
	volatile uint8_t x387 = UINT8_MAX;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -983;

	t96 = ((x385<=x386)<(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 21U;
	volatile uint8_t x390 = 2U;
	static int16_t x391 = 21;
	int32_t x392 = INT32_MIN;

	t97 = ((x389<=x390)<(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -1;
	int8_t x395 = -16;
	volatile uint64_t x396 = UINT64_MAX;
	int32_t t98 = -2726999;

	t98 = ((x393<=x394)<(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 8618436806510LLU;
	int64_t x398 = INT64_MAX;
	int64_t x400 = -1LL;
	volatile int32_t t99 = -432185147;

	t99 = ((x397<=x398)<(x399&x400));

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

