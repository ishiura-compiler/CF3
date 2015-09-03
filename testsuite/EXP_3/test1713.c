#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = INT8_MIN;
volatile int16_t x10 = INT16_MAX;
volatile int32_t t2 = -1424;
int32_t x21 = -1;
static volatile int8_t x40 = INT8_MAX;
volatile int32_t t6 = 145;
int16_t x52 = 11691;
static volatile int8_t x54 = INT8_MAX;
int8_t x60 = -3;
volatile int32_t t11 = -56;
int32_t x63 = -14;
int32_t t14 = -2061;
int32_t x82 = -6255471;
int64_t x87 = INT64_MIN;
volatile int32_t t17 = -2899;
int16_t x96 = INT16_MAX;
uint8_t x99 = 42U;
int16_t x100 = INT16_MIN;
int16_t x102 = INT16_MIN;
uint32_t x103 = 10U;
int64_t x105 = INT64_MIN;
int32_t t21 = -879;
int64_t x110 = -1LL;
volatile int32_t x112 = -1;
uint64_t x113 = 14127114194LLU;
int32_t t23 = 9;
static int64_t x117 = INT64_MIN;
volatile int8_t x118 = -1;
volatile int32_t t25 = -403;
int32_t t27 = 0;
int16_t x138 = INT16_MIN;
volatile int32_t x149 = INT32_MIN;
static int8_t x150 = INT8_MIN;
volatile uint16_t x169 = 32587U;
int8_t x171 = 1;
uint8_t x180 = UINT8_MAX;
int64_t x185 = INT64_MIN;
volatile int32_t x211 = -1;
volatile int32_t x213 = -1;
volatile uint64_t x215 = UINT64_MAX;
int64_t x221 = -1LL;
static uint16_t x224 = 51U;
int64_t x232 = INT64_MAX;
volatile int32_t t47 = 740501235;
volatile int32_t t48 = -204316;
int32_t t50 = 7242788;
int32_t x249 = -1;
volatile int64_t x259 = -1LL;
volatile int32_t t54 = 89374;
volatile int8_t x263 = INT8_MAX;
int8_t x269 = 1;
int16_t x271 = -1;
int16_t x276 = INT16_MAX;
volatile int32_t t58 = 3637;
int64_t x296 = -1LL;
static int64_t x305 = 1167824641LL;
volatile int32_t t65 = 4;
int16_t x313 = -1967;
int32_t x314 = INT32_MIN;
int32_t t69 = -3;
uint32_t x336 = 47161U;
int32_t t71 = 5003429;
static uint64_t x344 = UINT64_MAX;
int32_t x345 = INT32_MAX;
int8_t x346 = 39;
int64_t x348 = -762011548087114206LL;
static volatile int16_t x359 = INT16_MAX;
uint16_t x360 = UINT16_MAX;
int64_t x364 = INT64_MIN;
int8_t x372 = -56;
int16_t x379 = -66;
int64_t x380 = -1LL;
volatile int32_t t81 = -7537;
uint64_t x387 = 54142463564463198LLU;
uint64_t x388 = UINT64_MAX;
static int32_t t83 = -37;
volatile int32_t t84 = -28744;
static int16_t x393 = -1;
uint64_t x397 = 0LLU;
static int32_t t87 = -3881;
static int16_t x414 = 164;
int64_t x424 = -1LL;
int32_t t90 = 1832;
uint8_t x427 = UINT8_MAX;
volatile int32_t t91 = -39;
uint16_t x430 = 278U;
volatile uint32_t x438 = UINT32_MAX;
int32_t t94 = 7664051;
volatile int16_t x453 = INT16_MIN;
static int32_t t97 = -24576343;


void f0(void) {
	static int32_t x1 = -1;
	int16_t x3 = INT16_MIN;
	static volatile uint8_t x4 = UINT8_MAX;
	static volatile int32_t t0 = -42;

	t0 = ((x1-x2)<=(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	volatile int32_t x11 = -1;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -57110665;

	t1 = ((x9-x10)<=(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = UINT8_MAX;
	uint32_t x14 = 153640U;
	int32_t x15 = -1;
	int8_t x16 = -1;

	t2 = ((x13-x14)<=(x15&x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	static uint64_t x18 = 684075522711944LLU;
	int32_t x19 = INT32_MIN;
	uint16_t x20 = 0U;
	volatile int32_t t3 = -880938;

	t3 = ((x17-x18)<=(x19&x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = UINT16_MAX;
	static uint16_t x23 = 50U;
	uint8_t x24 = 34U;
	int32_t t4 = -85275;

	t4 = ((x21-x22)<=(x23&x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -1905;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = 78331161LLU;
	int64_t x36 = INT64_MAX;
	int32_t t5 = 1448;

	t5 = ((x33-x34)<=(x35&x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = -24;
	int32_t x39 = INT32_MIN;

	t6 = ((x37-x38)<=(x39&x40));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MAX;
	uint64_t x42 = 50460007366LLU;
	static uint16_t x43 = UINT16_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t7 = 14;

	t7 = ((x41-x42)<=(x43&x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -25;
	int32_t x46 = INT32_MIN;
	int64_t x47 = 46855526791619LL;
	int64_t x48 = INT64_MIN;
	int32_t t8 = 226;

	t8 = ((x45-x46)<=(x47&x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x49 = 152044205U;
	int16_t x50 = INT16_MIN;
	int32_t x51 = INT32_MIN;
	static volatile int32_t t9 = -11151562;

	t9 = ((x49-x50)<=(x51&x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x53 = 10;
	volatile int16_t x55 = INT16_MIN;
	uint32_t x56 = 910082593U;
	volatile int32_t t10 = 163;

	t10 = ((x53-x54)<=(x55&x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	static int32_t x58 = INT32_MIN;
	int32_t x59 = -1;

	t11 = ((x57-x58)<=(x59&x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x61 = UINT16_MAX;
	volatile int64_t x62 = -17208159128582LL;
	int8_t x64 = INT8_MIN;
	volatile int32_t t12 = -16;

	t12 = ((x61-x62)<=(x63&x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	volatile int32_t x66 = 45123;
	uint64_t x67 = 139538218579652LLU;
	int64_t x68 = INT64_MIN;
	int32_t t13 = 2;

	t13 = ((x65-x66)<=(x67&x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -224LL;
	int16_t x74 = INT16_MIN;
	uint8_t x75 = 16U;
	uint16_t x76 = 1662U;

	t14 = ((x73-x74)<=(x75&x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -1LL;
	int16_t x78 = INT16_MIN;
	int32_t x79 = -1;
	static uint32_t x80 = UINT32_MAX;
	volatile int32_t t15 = -3329;

	t15 = ((x77-x78)<=(x79&x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x81 = 3192LLU;
	volatile uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MAX;
	static volatile int32_t t16 = -79903;

	t16 = ((x81-x82)<=(x83&x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x85 = 1;
	volatile uint8_t x86 = 0U;
	int16_t x88 = -3588;

	t17 = ((x85-x86)<=(x87&x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = INT64_MAX;
	uint16_t x94 = 29U;
	uint8_t x95 = UINT8_MAX;
	int32_t t18 = -112761029;

	t18 = ((x93-x94)<=(x95&x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -1;
	int64_t x98 = 14225820594LL;
	volatile int32_t t19 = -367433;

	t19 = ((x97-x98)<=(x99&x100));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x101 = INT32_MIN;
	static uint8_t x104 = 29U;
	volatile int32_t t20 = 376638256;

	t20 = ((x101-x102)<=(x103&x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x106 = INT16_MIN;
	uint32_t x107 = UINT32_MAX;
	uint64_t x108 = UINT64_MAX;

	t21 = ((x105-x106)<=(x107&x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -1;
	int16_t x111 = INT16_MIN;
	static int32_t t22 = 3647782;

	t22 = ((x109-x110)<=(x111&x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = INT32_MAX;
	volatile int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;

	t23 = ((x113-x114)<=(x115&x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	int32_t t24 = 12343;

	t24 = ((x117-x118)<=(x119&x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MAX;

	t25 = ((x121-x122)<=(x123&x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x125 = 2867790U;
	int8_t x126 = -52;
	int64_t x127 = -1LL;
	volatile uint16_t x128 = 3676U;
	volatile int32_t t26 = -42;

	t26 = ((x125-x126)<=(x127&x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x129 = 391432LLU;
	static int16_t x130 = -3107;
	int32_t x131 = INT32_MAX;
	uint32_t x132 = 12U;

	t27 = ((x129-x130)<=(x131&x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x133 = 3U;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -1;
	uint32_t x136 = 2U;
	volatile int32_t t28 = 109;

	t28 = ((x133-x134)<=(x135&x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x137 = UINT64_MAX;
	int64_t x139 = -1578LL;
	int8_t x140 = INT8_MIN;
	int32_t t29 = 0;

	t29 = ((x137-x138)<=(x139&x140));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x151 = 18314U;
	int8_t x152 = INT8_MIN;
	int32_t t30 = -2499;

	t30 = ((x149-x150)<=(x151&x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x157 = 93U;
	static uint8_t x158 = 88U;
	int64_t x159 = INT64_MAX;
	uint32_t x160 = 0U;
	volatile int32_t t31 = 208987548;

	t31 = ((x157-x158)<=(x159&x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x161 = INT8_MAX;
	int64_t x162 = 323LL;
	static uint32_t x163 = 1470903191U;
	uint32_t x164 = 219U;
	static volatile int32_t t32 = -11689592;

	t32 = ((x161-x162)<=(x163&x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x165 = -1;
	uint16_t x166 = UINT16_MAX;
	volatile uint16_t x167 = 712U;
	uint32_t x168 = 2689085U;
	int32_t t33 = 1;

	t33 = ((x165-x166)<=(x167&x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x170 = INT16_MIN;
	volatile int8_t x172 = INT8_MIN;
	static volatile int32_t t34 = -144321329;

	t34 = ((x169-x170)<=(x171&x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x173 = INT8_MAX;
	int32_t x174 = -106270593;
	int8_t x175 = -1;
	int64_t x176 = INT64_MAX;
	volatile int32_t t35 = -190;

	t35 = ((x173-x174)<=(x175&x176));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x177 = UINT16_MAX;
	volatile int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	volatile int32_t t36 = -106268746;

	t36 = ((x177-x178)<=(x179&x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x181 = INT16_MAX;
	static volatile uint32_t x182 = 353889487U;
	int32_t x183 = INT32_MIN;
	uint32_t x184 = UINT32_MAX;
	static int32_t t37 = -12;

	t37 = ((x181-x182)<=(x183&x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x186 = -1085238570811LL;
	uint64_t x187 = 31814582022342140LLU;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t38 = 16146;

	t38 = ((x185-x186)<=(x187&x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x189 = 723182U;
	volatile uint8_t x190 = 6U;
	uint16_t x191 = UINT16_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t39 = -3258;

	t39 = ((x189-x190)<=(x191&x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = 25062404U;
	int64_t x194 = -17240626404141641LL;
	int64_t x195 = 900216163873538LL;
	volatile int8_t x196 = INT8_MAX;
	int32_t t40 = 58;

	t40 = ((x193-x194)<=(x195&x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x197 = -5589485023034LL;
	int16_t x198 = 26;
	uint64_t x199 = 2218748375917651LLU;
	int8_t x200 = 0;
	volatile int32_t t41 = 477531249;

	t41 = ((x197-x198)<=(x199&x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = -31;
	int8_t x206 = INT8_MAX;
	int16_t x207 = INT16_MIN;
	int8_t x208 = -1;
	int32_t t42 = 14645279;

	t42 = ((x205-x206)<=(x207&x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = -1;
	static int32_t x210 = 1;
	volatile uint16_t x212 = UINT16_MAX;
	static volatile int32_t t43 = -36971;

	t43 = ((x209-x210)<=(x211&x212));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x214 = INT64_MIN;
	uint32_t x216 = 4991718U;
	volatile int32_t t44 = -45;

	t44 = ((x213-x214)<=(x215&x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int32_t x219 = -20118;
	static volatile int64_t x220 = -1LL;
	static int32_t t45 = 62046;

	t45 = ((x217-x218)<=(x219&x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x222 = INT8_MIN;
	int8_t x223 = 11;
	int32_t t46 = -36;

	t46 = ((x221-x222)<=(x223&x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x229 = 160346017U;
	static uint16_t x230 = 291U;
	static int32_t x231 = -1;

	t47 = ((x229-x230)<=(x231&x232));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x233 = -1;
	uint32_t x234 = 9U;
	int16_t x235 = INT16_MAX;
	int32_t x236 = 363;

	t48 = ((x233-x234)<=(x235&x236));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 98U;
	uint32_t x239 = 1404699U;
	uint32_t x240 = 568U;
	volatile int32_t t49 = 0;

	t49 = ((x237-x238)<=(x239&x240));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = -12284831704LL;
	int64_t x243 = -1LL;
	int16_t x244 = -1;

	t50 = ((x241-x242)<=(x243&x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x245 = -1;
	int8_t x246 = 2;
	int16_t x247 = INT16_MIN;
	volatile int64_t x248 = 43885878LL;
	int32_t t51 = 28407832;

	t51 = ((x245-x246)<=(x247&x248));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x250 = UINT8_MAX;
	static int16_t x251 = 1;
	static uint8_t x252 = 1U;
	volatile int32_t t52 = 0;

	t52 = ((x249-x250)<=(x251&x252));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = -208;
	volatile int8_t x254 = INT8_MIN;
	static volatile uint64_t x255 = 47LLU;
	int32_t x256 = INT32_MIN;
	int32_t t53 = 4;

	t53 = ((x253-x254)<=(x255&x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MAX;
	int16_t x260 = INT16_MIN;

	t54 = ((x257-x258)<=(x259&x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x261 = INT16_MIN;
	volatile uint8_t x262 = 0U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t55 = 0;

	t55 = ((x261-x262)<=(x263&x264));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x270 = 148886286LLU;
	uint64_t x272 = UINT64_MAX;
	int32_t t56 = -298427014;

	t56 = ((x269-x270)<=(x271&x272));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	volatile int64_t x274 = -7708830368LL;
	static uint64_t x275 = UINT64_MAX;
	int32_t t57 = -112116;

	t57 = ((x273-x274)<=(x275&x276));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -1;
	static uint8_t x282 = 18U;
	static int32_t x283 = INT32_MIN;
	static int8_t x284 = INT8_MIN;

	t58 = ((x281-x282)<=(x283&x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x285 = 1;
	int16_t x286 = 0;
	int32_t x287 = -142235;
	static int64_t x288 = -1407538566097131LL;
	static int32_t t59 = -64;

	t59 = ((x285-x286)<=(x287&x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = INT64_MAX;
	static volatile int64_t x291 = -1LL;
	static int16_t x292 = INT16_MAX;
	static volatile int32_t t60 = 19532502;

	t60 = ((x289-x290)<=(x291&x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = 514936159030041109LL;
	uint8_t x294 = 23U;
	int64_t x295 = -1LL;
	volatile int32_t t61 = 4900;

	t61 = ((x293-x294)<=(x295&x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	volatile int32_t t62 = 26;

	t62 = ((x297-x298)<=(x299&x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x302 = 0LL;
	uint16_t x303 = 1U;
	static uint64_t x304 = UINT64_MAX;
	int32_t t63 = 22557;

	t63 = ((x301-x302)<=(x303&x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x306 = -143982751995496125LL;
	static int64_t x307 = INT64_MAX;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t64 = 0;

	t64 = ((x305-x306)<=(x307&x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x309 = 4558298LLU;
	volatile int64_t x310 = 6795451154678810LL;
	static uint64_t x311 = 12124916046651LLU;
	int32_t x312 = -2889;

	t65 = ((x309-x310)<=(x311&x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x315 = 88U;
	int32_t x316 = 335;
	volatile int32_t t66 = 21;

	t66 = ((x313-x314)<=(x315&x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x317 = INT64_MIN;
	int64_t x318 = -6991111758LL;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = UINT64_MAX;
	int32_t t67 = -7993;

	t67 = ((x317-x318)<=(x319&x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x321 = INT16_MIN;
	static int32_t x322 = INT32_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -1;
	int32_t t68 = -144;

	t68 = ((x321-x322)<=(x323&x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = 7030055056LLU;
	uint32_t x326 = 6439267U;
	uint32_t x327 = UINT32_MAX;
	int8_t x328 = INT8_MIN;

	t69 = ((x325-x326)<=(x327&x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 10829194;
	int16_t x330 = -1;
	volatile int64_t x331 = -1LL;
	static int32_t x332 = -1;
	volatile int32_t t70 = 726;

	t70 = ((x329-x330)<=(x331&x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = 1084;
	uint32_t x334 = 118354804U;
	int8_t x335 = INT8_MIN;

	t71 = ((x333-x334)<=(x335&x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x337 = -5;
	int8_t x338 = INT8_MIN;
	volatile uint8_t x339 = 126U;
	int32_t x340 = -196;
	int32_t t72 = 786;

	t72 = ((x337-x338)<=(x339&x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x341 = -210;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = INT64_MAX;
	volatile int32_t t73 = -702905;

	t73 = ((x341-x342)<=(x343&x344));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x347 = 371407910;
	int32_t t74 = 118155;

	t74 = ((x345-x346)<=(x347&x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x349 = 14434715983781714LLU;
	int8_t x350 = -61;
	int32_t x351 = INT32_MIN;
	int64_t x352 = INT64_MAX;
	volatile int32_t t75 = 16668897;

	t75 = ((x349-x350)<=(x351&x352));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	uint8_t x355 = 37U;
	static uint32_t x356 = UINT32_MAX;
	int32_t t76 = 40253282;

	t76 = ((x353-x354)<=(x355&x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = -3183616849484458945LL;
	volatile int32_t t77 = -4117054;

	t77 = ((x357-x358)<=(x359&x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = INT64_MIN;
	volatile int32_t x362 = INT32_MIN;
	int8_t x363 = INT8_MIN;
	int32_t t78 = -43832;

	t78 = ((x361-x362)<=(x363&x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x365 = 266969659092325345LLU;
	volatile uint16_t x366 = UINT16_MAX;
	int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	volatile int32_t t79 = 9208929;

	t79 = ((x365-x366)<=(x367&x368));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = -620611346LL;
	volatile int64_t x370 = -1LL;
	static int16_t x371 = -1;
	int32_t t80 = -6008;

	t80 = ((x369-x370)<=(x371&x372));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x377 = INT8_MAX;
	int64_t x378 = -1LL;

	t81 = ((x377-x378)<=(x379&x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x381 = 0U;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = -1795LL;
	int32_t x384 = 65594082;
	static volatile int32_t t82 = -1;

	t82 = ((x381-x382)<=(x383&x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x385 = INT16_MAX;
	static int8_t x386 = INT8_MIN;

	t83 = ((x385-x386)<=(x387&x388));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = -1;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = -1LL;
	static int16_t x392 = INT16_MAX;

	t84 = ((x389-x390)<=(x391&x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x394 = -317169304;
	static uint32_t x395 = 1U;
	int8_t x396 = 0;
	int32_t t85 = 0;

	t85 = ((x393-x394)<=(x395&x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x398 = 15U;
	int32_t x399 = INT32_MAX;
	uint8_t x400 = 1U;
	int32_t t86 = 37017;

	t86 = ((x397-x398)<=(x399&x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x401 = UINT16_MAX;
	static uint16_t x402 = 2406U;
	static volatile int32_t x403 = INT32_MAX;
	volatile uint64_t x404 = 1041107840473214LLU;

	t87 = ((x401-x402)<=(x403&x404));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x409 = -15;
	uint32_t x410 = UINT32_MAX;
	static uint64_t x411 = 274LLU;
	int8_t x412 = INT8_MIN;
	volatile int32_t t88 = -549434060;

	t88 = ((x409-x410)<=(x411&x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x413 = 0;
	static int16_t x415 = INT16_MAX;
	static int64_t x416 = 0LL;
	static int32_t t89 = 45;

	t89 = ((x413-x414)<=(x415&x416));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x421 = INT8_MIN;
	uint8_t x422 = 39U;
	uint64_t x423 = UINT64_MAX;

	t90 = ((x421-x422)<=(x423&x424));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = INT32_MAX;
	uint16_t x426 = 21U;
	static uint16_t x428 = 15276U;

	t91 = ((x425-x426)<=(x427&x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x429 = -1;
	static volatile uint64_t x431 = UINT64_MAX;
	uint8_t x432 = UINT8_MAX;
	static volatile int32_t t92 = 0;

	t92 = ((x429-x430)<=(x431&x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x433 = INT16_MAX;
	int16_t x434 = 3114;
	uint32_t x435 = 93U;
	int16_t x436 = INT16_MIN;
	volatile int32_t t93 = 0;

	t93 = ((x433-x434)<=(x435&x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x437 = INT64_MAX;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -1LL;

	t94 = ((x437-x438)<=(x439&x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = -1;
	volatile int16_t x446 = INT16_MAX;
	uint16_t x447 = 79U;
	int32_t x448 = INT32_MIN;
	static int32_t t95 = 2;

	t95 = ((x445-x446)<=(x447&x448));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x449 = 25;
	static int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	int32_t x452 = 675001;
	int32_t t96 = -5;

	t96 = ((x449-x450)<=(x451&x452));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x454 = 575U;
	int16_t x455 = INT16_MIN;
	uint32_t x456 = UINT32_MAX;

	t97 = ((x453-x454)<=(x455&x456));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x457 = -461LL;
	uint8_t x458 = 0U;
	static uint32_t x459 = 17112838U;
	int8_t x460 = INT8_MIN;
	static volatile int32_t t98 = -2;

	t98 = ((x457-x458)<=(x459&x460));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x461 = -3739219LL;
	int32_t x462 = -1;
	volatile int16_t x463 = -1;
	int8_t x464 = INT8_MIN;
	int32_t t99 = 109;

	t99 = ((x461-x462)<=(x463&x464));

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

