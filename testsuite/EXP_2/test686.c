#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -2319;
static int8_t x32 = -1;
volatile int16_t x34 = INT16_MAX;
uint16_t x36 = 3179U;
static int8_t x42 = INT8_MIN;
static volatile uint64_t x45 = 97631LLU;
volatile int16_t x49 = INT16_MIN;
uint16_t x50 = 2U;
int16_t x61 = 501;
int64_t x62 = 383LL;
volatile int32_t t16 = -5;
static volatile int64_t x76 = -42461LL;
int8_t x78 = 10;
int32_t x85 = 74;
int32_t t22 = 27;
volatile int32_t t24 = 341748746;
int32_t x105 = INT32_MIN;
int32_t x106 = INT32_MIN;
int32_t t25 = -2;
uint32_t x115 = UINT32_MAX;
volatile int32_t t27 = -487;
static int8_t x121 = INT8_MIN;
volatile int16_t x123 = INT16_MIN;
int64_t x130 = INT64_MAX;
volatile int32_t t30 = 807;
uint64_t x136 = UINT64_MAX;
int32_t x137 = -1;
uint16_t x139 = 1U;
int16_t x140 = -91;
volatile int32_t t34 = 451;
volatile uint32_t x154 = 15U;
int16_t x157 = INT16_MAX;
uint64_t x162 = 503081846LLU;
volatile uint64_t x167 = 23286880LLU;
static volatile int32_t t39 = -4656514;
volatile uint8_t x171 = 1U;
int64_t x172 = -1LL;
volatile int64_t x183 = INT64_MIN;
int32_t t46 = 7838;
uint32_t x206 = 37056U;
int8_t x208 = -1;
volatile int32_t t48 = 91697;
volatile int64_t x216 = INT64_MIN;
static uint32_t x217 = 366U;
int8_t x225 = 0;
int8_t x234 = INT8_MAX;
int32_t x241 = -124;
int32_t x243 = INT32_MAX;
int64_t x246 = -344172973LL;
int8_t x247 = -1;
int32_t t58 = -104165010;
volatile int32_t x264 = 26;
static volatile int32_t t61 = 0;
uint8_t x268 = UINT8_MAX;
uint16_t x274 = 69U;
int32_t x275 = -4866984;
static uint32_t x284 = UINT32_MAX;
int32_t t66 = 173117095;
int16_t x292 = 11;
int32_t t67 = -38254228;
uint64_t x300 = UINT64_MAX;
int32_t x302 = 89;
volatile int64_t x304 = INT64_MIN;
uint32_t x318 = 105U;
volatile int32_t t74 = 240105;
uint8_t x322 = UINT8_MAX;
static int8_t x331 = 22;
int64_t x336 = INT64_MIN;
int64_t x340 = INT64_MIN;
uint64_t x349 = 14164LLU;
volatile uint64_t x350 = 132713424662545242LLU;
int8_t x357 = INT8_MIN;
int64_t x372 = INT64_MIN;
int32_t x375 = 166496077;
static volatile int64_t x377 = INT64_MAX;
int32_t t87 = 472086;
volatile int8_t x382 = -4;
int32_t t88 = -11663;
static volatile uint16_t x386 = 130U;
int32_t x387 = INT32_MIN;
int32_t x391 = -1;
int8_t x395 = INT8_MAX;
uint8_t x402 = UINT8_MAX;
int64_t x408 = -3562344546117849LL;
int64_t x415 = INT64_MIN;
volatile int32_t x416 = INT32_MAX;
volatile int32_t t96 = -62622;
volatile int8_t x417 = INT8_MIN;
int64_t x418 = INT64_MAX;
int32_t x419 = INT32_MIN;
int8_t x421 = -1;
int16_t x423 = 3;
volatile int16_t x425 = INT16_MIN;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	static volatile int16_t x2 = INT16_MAX;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 5;

	t0 = ((x1+(x2%x3))<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 471047585451136230LL;
	uint16_t x6 = 18862U;
	uint8_t x7 = 1U;
	static int16_t x8 = -3;
	volatile int32_t t1 = -957192;

	t1 = ((x5+(x6%x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -368;
	int8_t x10 = 1;
	int64_t x11 = 123107430202LL;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -377447;

	t2 = ((x9+(x10%x11))<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 8565748190270613LLU;
	static uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MAX;
	uint16_t x16 = 172U;
	static int32_t t3 = 45728697;

	t3 = ((x13+(x14%x15))<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	static uint32_t x19 = UINT32_MAX;
	int64_t x20 = 1339264200247LL;
	static int32_t t4 = 27726814;

	t4 = ((x17+(x18%x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = INT16_MIN;
	int32_t x24 = 2781;
	int32_t t5 = -163709;

	t5 = ((x21+(x22%x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	static int64_t x26 = 487890971635048LL;
	volatile int8_t x27 = INT8_MAX;
	int64_t x28 = -2610LL;
	int32_t t6 = 223;

	t6 = ((x25+(x26%x27))<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = ((x29+(x30%x31))<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 0U;
	volatile int64_t x35 = INT64_MAX;
	volatile int32_t t8 = -525744;

	t8 = ((x33+(x34%x35))<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	int64_t x39 = INT64_MIN;
	volatile uint16_t x40 = UINT16_MAX;
	int32_t t9 = 227241;

	t9 = ((x37+(x38%x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 1U;
	int16_t x43 = INT16_MAX;
	static uint64_t x44 = 10LLU;
	int32_t t10 = -2179;

	t10 = ((x41+(x42%x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	uint32_t x47 = UINT32_MAX;
	uint8_t x48 = UINT8_MAX;
	static volatile int32_t t11 = -2;

	t11 = ((x45+(x46%x47))<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x51 = INT64_MIN;
	volatile uint32_t x52 = 568260241U;
	volatile int32_t t12 = -12;

	t12 = ((x49+(x50%x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = UINT16_MAX;
	static int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	int64_t x56 = -1LL;
	int32_t t13 = -224622354;

	t13 = ((x53+(x54%x55))<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	int16_t x58 = INT16_MIN;
	volatile uint64_t x59 = 1062289LLU;
	static volatile int32_t x60 = INT32_MAX;
	static volatile int32_t t14 = 6992;

	t14 = ((x57+(x58%x59))<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t15 = 63;

	t15 = ((x61+(x62%x63))<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1188LLU;
	volatile uint32_t x66 = 66U;
	volatile uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 3245U;

	t16 = ((x65+(x66%x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int32_t x70 = 16370;
	static uint16_t x71 = 3U;
	static volatile uint32_t x72 = 60U;
	int32_t t17 = 125588;

	t17 = ((x69+(x70%x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 292155135802LLU;
	static uint8_t x74 = UINT8_MAX;
	uint32_t x75 = 7991U;
	int32_t t18 = 3681;

	t18 = ((x73+(x74%x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = -1;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 60379480LLU;
	volatile int32_t t19 = -6572018;

	t19 = ((x77+(x78%x79))<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	uint64_t x82 = 215184462401LLU;
	uint32_t x83 = 12395065U;
	volatile int16_t x84 = INT16_MIN;
	static int32_t t20 = -10;

	t20 = ((x81+(x82%x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = 16;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -15277;

	t21 = ((x85+(x86%x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 88841670U;
	static int8_t x94 = INT8_MIN;
	volatile int64_t x95 = -27251552763LL;
	int64_t x96 = INT64_MAX;

	t22 = ((x93+(x94%x95))<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x97 = INT64_MIN;
	int8_t x98 = -1;
	uint8_t x99 = 1U;
	int8_t x100 = -1;
	volatile int32_t t23 = -264612926;

	t23 = ((x97+(x98%x99))<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 932U;
	int64_t x103 = 13014LL;
	uint16_t x104 = 9948U;

	t24 = ((x101+(x102%x103))<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x107 = INT16_MIN;
	int16_t x108 = -1;

	t25 = ((x105+(x106%x107))<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x113 = 37U;
	int32_t x114 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t26 = 6893;

	t26 = ((x113+(x114%x115))<=x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x117 = 360U;
	uint8_t x118 = 74U;
	int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MAX;

	t27 = ((x117+(x118%x119))<=x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MIN;
	static int64_t x124 = -1LL;
	int32_t t28 = 0;

	t28 = ((x121+(x122%x123))<=x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	int64_t x128 = 17115710LL;
	int32_t t29 = -809556436;

	t29 = ((x125+(x126%x127))<=x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 55934465U;
	int16_t x131 = INT16_MAX;
	static int16_t x132 = 1491;

	t30 = ((x129+(x130%x131))<=x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = 25;
	uint64_t x134 = 7709072072165LLU;
	uint64_t x135 = 9155637056577786719LLU;
	int32_t t31 = -50;

	t31 = ((x133+(x134%x135))<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x138 = UINT8_MAX;
	static volatile int32_t t32 = -952;

	t32 = ((x137+(x138%x139))<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 557U;
	volatile int64_t x142 = -1LL;
	volatile uint64_t x143 = 81682976360LLU;
	int16_t x144 = INT16_MIN;
	int32_t t33 = 353169511;

	t33 = ((x141+(x142%x143))<=x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = 0;
	volatile uint64_t x146 = 1017313LLU;
	volatile int64_t x147 = INT64_MIN;
	static int8_t x148 = INT8_MAX;

	t34 = ((x145+(x146%x147))<=x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -6109402968876853LL;
	uint64_t x150 = UINT64_MAX;
	int16_t x151 = INT16_MIN;
	static int8_t x152 = -1;
	static int32_t t35 = 2557480;

	t35 = ((x149+(x150%x151))<=x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x153 = -14540791885862238LL;
	static int32_t x155 = INT32_MAX;
	volatile int64_t x156 = INT64_MIN;
	volatile int32_t t36 = 6057;

	t36 = ((x153+(x154%x155))<=x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x158 = 1763397310LL;
	int16_t x159 = 315;
	int32_t x160 = INT32_MIN;
	int32_t t37 = -281997;

	t37 = ((x157+(x158%x159))<=x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x161 = INT8_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MAX;
	volatile int32_t t38 = 456506;

	t38 = ((x161+(x162%x163))<=x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x165 = 3752043U;
	volatile int16_t x166 = -1;
	static volatile uint16_t x168 = UINT16_MAX;

	t39 = ((x165+(x166%x167))<=x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 161U;
	volatile int8_t x170 = INT8_MAX;
	volatile int32_t t40 = -197453329;

	t40 = ((x169+(x170%x171))<=x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	volatile int16_t x174 = INT16_MAX;
	uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MAX;
	volatile int32_t t41 = 13597722;

	t41 = ((x173+(x174%x175))<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = 1U;
	volatile uint32_t x178 = 19U;
	static volatile uint8_t x179 = UINT8_MAX;
	volatile int8_t x180 = INT8_MAX;
	int32_t t42 = 30;

	t42 = ((x177+(x178%x179))<=x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = -1;
	static volatile int8_t x182 = INT8_MAX;
	volatile uint32_t x184 = 190U;
	int32_t t43 = -131334840;

	t43 = ((x181+(x182%x183))<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = -5;
	int32_t x186 = -1;
	static int64_t x187 = -982629602846LL;
	int32_t x188 = -1;
	volatile int32_t t44 = -7;

	t44 = ((x185+(x186%x187))<=x188);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = INT8_MIN;
	int32_t x190 = -1;
	volatile uint64_t x191 = 2242253357762104107LLU;
	static int16_t x192 = INT16_MIN;
	volatile int32_t t45 = 4264646;

	t45 = ((x189+(x190%x191))<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = 0;
	int16_t x195 = INT16_MAX;
	int16_t x196 = 44;

	t46 = ((x193+(x194%x195))<=x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x197 = 7;
	volatile uint32_t x198 = UINT32_MAX;
	int8_t x199 = -1;
	int64_t x200 = INT64_MIN;
	volatile int32_t t47 = 352588667;

	t47 = ((x197+(x198%x199))<=x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x205 = -29155783959933LL;
	volatile int64_t x207 = INT64_MIN;

	t48 = ((x205+(x206%x207))<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 1177173U;
	volatile uint16_t x210 = UINT16_MAX;
	volatile int64_t x211 = -1LL;
	uint16_t x212 = 32273U;
	volatile int32_t t49 = -1;

	t49 = ((x209+(x210%x211))<=x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	static uint8_t x214 = UINT8_MAX;
	uint32_t x215 = 2U;
	volatile int32_t t50 = -250245736;

	t50 = ((x213+(x214%x215))<=x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t51 = -12224;

	t51 = ((x217+(x218%x219))<=x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MIN;
	static int32_t x222 = INT32_MIN;
	static int8_t x223 = INT8_MIN;
	volatile uint32_t x224 = UINT32_MAX;
	int32_t t52 = 282;

	t52 = ((x221+(x222%x223))<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x226 = 12U;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = -39;
	int32_t t53 = -1679734;

	t53 = ((x225+(x226%x227))<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = 1;
	volatile uint32_t x230 = 26635464U;
	int8_t x231 = -1;
	uint32_t x232 = 2U;
	int32_t t54 = -2;

	t54 = ((x229+(x230%x231))<=x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x233 = INT16_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	volatile int32_t t55 = 758934;

	t55 = ((x233+(x234%x235))<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = INT64_MIN;
	static int8_t x238 = 0;
	int32_t x239 = INT32_MIN;
	uint64_t x240 = 11421407905497011LLU;
	int32_t t56 = -333411;

	t56 = ((x237+(x238%x239))<=x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x242 = INT16_MIN;
	int16_t x244 = INT16_MIN;
	int32_t t57 = -963;

	t57 = ((x241+(x242%x243))<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x245 = -1;
	int8_t x248 = -5;

	t58 = ((x245+(x246%x247))<=x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	static int64_t x254 = -12638679LL;
	int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	static int32_t t59 = -8526905;

	t59 = ((x253+(x254%x255))<=x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x258 = 10U;
	int64_t x259 = -2023813489LL;
	int8_t x260 = -63;
	static int32_t t60 = 82934;

	t60 = ((x257+(x258%x259))<=x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 89U;
	uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MAX;

	t61 = ((x261+(x262%x263))<=x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -6;
	int64_t x266 = -1LL;
	int64_t x267 = -1LL;
	static volatile int32_t t62 = -531860;

	t62 = ((x265+(x266%x267))<=x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x269 = -1;
	int8_t x270 = -1;
	static int8_t x271 = -5;
	int64_t x272 = INT64_MIN;
	static volatile int32_t t63 = 0;

	t63 = ((x269+(x270%x271))<=x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x273 = INT16_MIN;
	volatile uint8_t x276 = 3U;
	volatile int32_t t64 = 5165613;

	t64 = ((x273+(x274%x275))<=x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = INT16_MIN;
	int8_t x278 = -38;
	int16_t x279 = -1;
	static uint8_t x280 = 4U;
	int32_t t65 = 449172368;

	t65 = ((x277+(x278%x279))<=x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint16_t x282 = 4U;
	int16_t x283 = -101;

	t66 = ((x281+(x282%x283))<=x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = INT8_MIN;
	static uint32_t x290 = 101848U;
	static int64_t x291 = 413503181LL;

	t67 = ((x289+(x290%x291))<=x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = -12106371177525LL;
	int32_t x294 = -1;
	int16_t x295 = INT16_MIN;
	int16_t x296 = -84;
	int32_t t68 = -9893;

	t68 = ((x293+(x294%x295))<=x296);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x297 = INT16_MIN;
	static uint16_t x298 = 14U;
	volatile uint16_t x299 = 212U;
	volatile int32_t t69 = 1391;

	t69 = ((x297+(x298%x299))<=x300);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MIN;
	int64_t x303 = 3436448594575463561LL;
	volatile int32_t t70 = -48218;

	t70 = ((x301+(x302%x303))<=x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = 2447;
	uint8_t x306 = 1U;
	uint32_t x307 = UINT32_MAX;
	volatile int16_t x308 = -1;
	volatile int32_t t71 = -1317;

	t71 = ((x305+(x306%x307))<=x308);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = -2127792791664LL;
	int64_t x310 = -1LL;
	volatile int64_t x311 = -205LL;
	uint64_t x312 = 3878649081836167LLU;
	int32_t t72 = -437;

	t72 = ((x309+(x310%x311))<=x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = 844984714037325439LL;
	static int32_t x314 = 20;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t73 = 98;

	t73 = ((x313+(x314%x315))<=x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x317 = 16268164U;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 8098231364289LLU;

	t74 = ((x317+(x318%x319))<=x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x321 = 370U;
	uint64_t x323 = 5095352297359LLU;
	int8_t x324 = INT8_MAX;
	static int32_t t75 = 428;

	t75 = ((x321+(x322%x323))<=x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = INT64_MAX;
	uint64_t x327 = UINT64_MAX;
	volatile int16_t x328 = INT16_MIN;
	int32_t t76 = -196384828;

	t76 = ((x325+(x326%x327))<=x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x329 = 563449515268525456LLU;
	uint32_t x330 = 2993617U;
	int64_t x332 = -3661986733622135545LL;
	int32_t t77 = -3510;

	t77 = ((x329+(x330%x331))<=x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = 29144476657013LL;
	int16_t x334 = INT16_MIN;
	int16_t x335 = INT16_MIN;
	int32_t t78 = 5;

	t78 = ((x333+(x334%x335))<=x336);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x337 = 0U;
	uint32_t x338 = 464620032U;
	static int64_t x339 = -1LL;
	volatile int32_t t79 = 12081;

	t79 = ((x337+(x338%x339))<=x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = UINT16_MAX;
	volatile int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	volatile int16_t x344 = 8;
	static int32_t t80 = 1;

	t80 = ((x341+(x342%x343))<=x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = 1;
	static int8_t x346 = INT8_MIN;
	static int16_t x347 = -1;
	int64_t x348 = -33167512080830LL;
	int32_t t81 = 341;

	t81 = ((x345+(x346%x347))<=x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x351 = 6U;
	int64_t x352 = -16199418442155865LL;
	volatile int32_t t82 = -1;

	t82 = ((x349+(x350%x351))<=x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x358 = INT64_MAX;
	uint32_t x359 = 438539454U;
	static int64_t x360 = INT64_MIN;
	volatile int32_t t83 = 7856594;

	t83 = ((x357+(x358%x359))<=x360);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x365 = 30772596;
	int8_t x366 = INT8_MIN;
	volatile uint64_t x367 = 4LLU;
	int8_t x368 = INT8_MAX;
	int32_t t84 = -141859839;

	t84 = ((x365+(x366%x367))<=x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = -19;
	volatile uint64_t x370 = UINT64_MAX;
	int32_t x371 = -1;
	int32_t t85 = 1914858;

	t85 = ((x369+(x370%x371))<=x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = -3;
	uint8_t x374 = 8U;
	static int64_t x376 = INT64_MIN;
	int32_t t86 = -67966122;

	t86 = ((x373+(x374%x375))<=x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = 3;
	int8_t x379 = -3;
	volatile uint64_t x380 = 31015LLU;

	t87 = ((x377+(x378%x379))<=x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x381 = -1LL;
	uint16_t x383 = 7U;
	int16_t x384 = -1604;

	t88 = ((x381+(x382%x383))<=x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x385 = 3246U;
	int64_t x388 = INT64_MIN;
	volatile int32_t t89 = 32525;

	t89 = ((x385+(x386%x387))<=x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x389 = 2009LLU;
	uint8_t x390 = 69U;
	uint32_t x392 = 110207U;
	volatile int32_t t90 = 4495;

	t90 = ((x389+(x390%x391))<=x392);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = 1950937;
	static int32_t x394 = INT32_MAX;
	volatile int8_t x396 = 0;
	volatile int32_t t91 = -7485241;

	t91 = ((x393+(x394%x395))<=x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MIN;
	uint32_t x398 = 1495U;
	static int64_t x399 = 446716488532LL;
	volatile int8_t x400 = INT8_MIN;
	int32_t t92 = 24387370;

	t92 = ((x397+(x398%x399))<=x400);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x401 = INT64_MIN;
	int8_t x403 = INT8_MIN;
	int64_t x404 = -1LL;
	volatile int32_t t93 = 0;

	t93 = ((x401+(x402%x403))<=x404);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 648U;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MAX;
	static volatile int32_t t94 = 540;

	t94 = ((x405+(x406%x407))<=x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x409 = 1719912594U;
	uint32_t x410 = 14U;
	volatile uint32_t x411 = UINT32_MAX;
	static int32_t x412 = INT32_MIN;
	volatile int32_t t95 = 58343;

	t95 = ((x409+(x410%x411))<=x412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = INT16_MIN;
	volatile uint32_t x414 = UINT32_MAX;

	t96 = ((x413+(x414%x415))<=x416);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x420 = 13;
	volatile int32_t t97 = -91445037;

	t97 = ((x417+(x418%x419))<=x420);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x422 = 33;
	int64_t x424 = -1LL;
	int32_t t98 = 3322;

	t98 = ((x421+(x422%x423))<=x424);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x426 = 24U;
	static volatile uint64_t x427 = 7537LLU;
	static uint8_t x428 = UINT8_MAX;
	int32_t t99 = 650293344;

	t99 = ((x425+(x426%x427))<=x428);

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

