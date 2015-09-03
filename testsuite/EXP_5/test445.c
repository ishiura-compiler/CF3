#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x7 = -350;
static int8_t x13 = INT8_MIN;
int32_t t2 = -16;
volatile int64_t t3 = -2310047317078088LL;
int16_t x27 = INT16_MIN;
static int64_t x29 = -1LL;
int8_t x30 = INT8_MIN;
uint32_t x32 = 1810156972U;
int64_t t5 = -686999098721502557LL;
uint64_t x38 = UINT64_MAX;
uint32_t x40 = 31450047U;
int32_t t6 = 6171;
uint8_t x42 = 1U;
int8_t x43 = 0;
int64_t x46 = 4570719169581LL;
static int64_t t8 = 1100258222012LL;
int8_t x61 = INT8_MIN;
uint8_t x62 = UINT8_MAX;
static uint16_t x63 = 5U;
uint16_t x69 = 3U;
static int16_t x71 = INT16_MIN;
int16_t x74 = INT16_MAX;
int32_t t13 = 12;
volatile uint64_t t14 = 12445949LLU;
static int32_t x91 = -431;
int8_t x95 = -60;
volatile uint8_t x105 = 15U;
uint16_t x106 = 14U;
int8_t x110 = -36;
static int64_t x116 = 11631721178LL;
static int32_t x117 = -1829;
int32_t t23 = -3638;
volatile uint64_t x138 = UINT64_MAX;
volatile int32_t t26 = -334584503;
uint16_t x151 = 6U;
int16_t x152 = 125;
uint32_t x156 = 148389643U;
int8_t x164 = INT8_MIN;
int32_t t30 = 68840;
int32_t t31 = INT32_MAX;
int32_t x173 = -1;
uint8_t x179 = UINT8_MAX;
int16_t x187 = INT16_MIN;
volatile uint8_t x191 = UINT8_MAX;
uint32_t x196 = UINT32_MAX;
uint16_t x201 = 1187U;
uint32_t x204 = 1154U;
volatile int32_t t37 = -28686539;
int16_t x208 = -1;
int32_t t39 = -23965;
volatile int64_t x216 = 323315224331LL;
volatile int64_t x220 = 25649926LL;
uint32_t x222 = 4819503U;
int64_t t42 = 1042506LL;
uint32_t x246 = 398815662U;
volatile int32_t t44 = -2126;
int64_t x250 = -145812436388LL;
int32_t x259 = INT32_MAX;
int32_t t48 = -91417973;
uint16_t x265 = UINT16_MAX;
int64_t x272 = INT64_MAX;
static int32_t x287 = -18;
volatile uint64_t t53 = 646217LLU;
volatile int32_t x309 = INT32_MAX;
static uint32_t x311 = 4U;
int16_t x318 = 2;
uint16_t x320 = UINT16_MAX;
static int32_t x321 = INT32_MIN;
static int8_t x335 = -1;
static int16_t x337 = INT16_MIN;
int32_t t62 = -123976251;
int16_t x349 = -8;
volatile int32_t t64 = 167323980;
static uint16_t x357 = 115U;
static int16_t x374 = INT16_MAX;
volatile int32_t x379 = -1;
int8_t x382 = INT8_MIN;
int32_t t72 = -79285202;
int64_t x389 = INT64_MIN;
int32_t x390 = -1;
uint32_t x400 = 184395U;
volatile int64_t t74 = 88295851LL;
uint64_t x404 = 1LLU;
int8_t x406 = INT8_MIN;
volatile int8_t x407 = INT8_MIN;
uint8_t x411 = 0U;
static uint16_t x417 = 0U;
volatile int8_t x419 = INT8_MIN;
int32_t t78 = 220462375;
int64_t x422 = -1LL;
static uint8_t x424 = 28U;
uint32_t x425 = 14275530U;
volatile int32_t t83 = 0;
static int32_t t84 = -1;
int8_t x452 = INT8_MAX;
int32_t x464 = -1;
static volatile uint8_t x473 = 0U;
uint64_t x485 = 319549286631LLU;
static volatile int16_t x487 = -3312;
uint64_t t92 = 226634LLU;
static int64_t x491 = -23LL;
volatile int32_t x493 = -1;
static int64_t x494 = INT64_MAX;
uint8_t x499 = 0U;
volatile int32_t x504 = 85908;
static volatile uint64_t x513 = UINT64_MAX;
uint64_t x514 = 2153534762545924LLU;
uint8_t x515 = UINT8_MAX;


void f0(void) {
	static int64_t x5 = INT64_MIN;
	int16_t x6 = 3;
	static volatile uint64_t x8 = 16264LLU;
	volatile int64_t t0 = -11217166707712LL;

	t0 = (x5*((x6*x7)<x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = 1662U;
	volatile uint64_t x11 = UINT64_MAX;
	uint32_t x12 = UINT32_MAX;
	int32_t t1 = -8356;

	t1 = (x9*((x10*x11)<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x14 = -1684135648405LL;
	static volatile uint32_t x15 = 25U;
	int32_t x16 = 3383102;

	t2 = (x13*((x14*x15)<x16));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	int8_t x22 = INT8_MAX;
	static uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;

	t3 = (x21*((x22*x23)<x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MIN;
	int32_t x28 = INT32_MAX;
	int32_t t4 = -295464;

	t4 = (x25*((x26*x27)<x28));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x31 = -1;

	t5 = (x29*((x30*x31)<x32));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x37 = 1809U;
	int16_t x39 = 41;

	t6 = (x37*((x38*x39)<x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x41 = -6374437;
	int8_t x44 = INT8_MAX;
	int32_t t7 = -13121;

	t7 = (x41*((x42*x43)<x44));

	if (t7 != -6374437) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x47 = UINT8_MAX;
	int16_t x48 = -24;

	t8 = (x45*((x46*x47)<x48));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x53 = INT64_MIN;
	volatile int16_t x54 = -1;
	static uint32_t x55 = 1517909U;
	static volatile int64_t x56 = -1LL;
	int64_t t9 = -32090LL;

	t9 = (x53*((x54*x55)<x56));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	volatile uint64_t x58 = 417175346LLU;
	volatile int64_t x59 = INT64_MIN;
	int8_t x60 = 0;
	int32_t t10 = 337709;

	t10 = (x57*((x58*x59)<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x64 = 119U;
	int32_t t11 = 344657013;

	t11 = (x61*((x62*x63)<x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x70 = 89U;
	volatile uint16_t x72 = UINT16_MAX;
	static int32_t t12 = 2499;

	t12 = (x69*((x70*x71)<x72));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x73 = -1;
	uint8_t x75 = UINT8_MAX;
	volatile uint16_t x76 = UINT16_MAX;

	t13 = (x73*((x74*x75)<x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x77 = 1787563441206794LLU;
	static int64_t x78 = -110149417244LL;
	int64_t x79 = -1LL;
	static int32_t x80 = -192;

	t14 = (x77*((x78*x79)<x80));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = UINT8_MAX;
	int32_t x92 = -1;
	int32_t t15 = -13036;

	t15 = (x89*((x90*x91)<x92));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x93 = 44747914U;
	uint32_t x94 = 36068609U;
	uint32_t x96 = UINT32_MAX;
	uint32_t t16 = 1590U;

	t16 = (x93*((x94*x95)<x96));

	if (t16 != 44747914U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x97 = 14U;
	int32_t x98 = -1;
	static int32_t x99 = 505588073;
	int64_t x100 = -1445144843157LL;
	int32_t t17 = 262695065;

	t17 = (x97*((x98*x99)<x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x101 = 2U;
	int8_t x102 = INT8_MAX;
	static int16_t x103 = -1;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t18 = 63956229;

	t18 = (x101*((x102*x103)<x104));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x107 = INT8_MIN;
	static volatile uint16_t x108 = UINT16_MAX;
	int32_t t19 = -1;

	t19 = (x105*((x106*x107)<x108));

	if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MIN;
	uint64_t x111 = 61758086LLU;
	uint16_t x112 = 50U;
	int32_t t20 = 951;

	t20 = (x109*((x110*x111)<x112));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x113 = 2558U;
	int16_t x114 = INT16_MIN;
	static int8_t x115 = -1;
	int32_t t21 = -314156;

	t21 = (x113*((x114*x115)<x116));

	if (t21 != 2558) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x118 = 0;
	int8_t x119 = 37;
	static uint8_t x120 = 1U;
	int32_t t22 = 11;

	t22 = (x117*((x118*x119)<x120));

	if (t22 != -1829) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	uint8_t x122 = UINT8_MAX;
	static int8_t x123 = 7;
	static uint16_t x124 = 7421U;

	t23 = (x121*((x122*x123)<x124));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 2547U;
	uint8_t x126 = 48U;
	int64_t x127 = -14421LL;
	uint16_t x128 = UINT16_MAX;
	volatile uint32_t t24 = 27117560U;

	t24 = (x125*((x126*x127)<x128));

	if (t24 != 2547U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 9610417U;
	int8_t x134 = INT8_MAX;
	uint64_t x135 = 28402380LLU;
	static int16_t x136 = INT16_MIN;
	uint32_t t25 = 17066U;

	t25 = (x133*((x134*x135)<x136));

	if (t25 != 9610417U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MAX;
	static uint16_t x139 = UINT16_MAX;
	volatile uint16_t x140 = 0U;

	t26 = (x137*((x138*x139)<x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x149 = INT64_MIN;
	int32_t x150 = -1;
	int64_t t27 = INT64_MIN;

	t27 = (x149*((x150*x151)<x152));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = -8;
	volatile int32_t x154 = 79291231;
	uint64_t x155 = 13377LLU;
	static int32_t t28 = -576694171;

	t28 = (x153*((x154*x155)<x156));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x161 = -32687819LL;
	uint8_t x162 = UINT8_MAX;
	int16_t x163 = 1;
	volatile int64_t t29 = -8135161985400LL;

	t29 = (x161*((x162*x163)<x164));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 547401493039LLU;
	int32_t x168 = -29431;

	t30 = (x165*((x166*x167)<x168));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MAX;
	uint64_t x171 = 16459673549672LLU;
	int64_t x172 = INT64_MIN;

	t31 = (x169*((x170*x171)<x172));

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x174 = 1;
	static uint64_t x175 = 324733762163LLU;
	int64_t x176 = INT64_MIN;
	volatile int32_t t32 = -15;

	t32 = (x173*((x174*x175)<x176));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x177 = INT32_MIN;
	uint16_t x178 = 2U;
	int16_t x180 = INT16_MAX;
	int32_t t33 = INT32_MIN;

	t33 = (x177*((x178*x179)<x180));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	static int32_t x188 = INT32_MIN;
	volatile int32_t t34 = 73337;

	t34 = (x185*((x186*x187)<x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x189 = 3340U;
	static int8_t x190 = INT8_MIN;
	int32_t x192 = -1;
	static volatile uint32_t t35 = 11024173U;

	t35 = (x189*((x190*x191)<x192));

	if (t35 != 3340U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x193 = 3580174509LL;
	uint16_t x194 = 5U;
	int8_t x195 = -63;
	static volatile int64_t t36 = 87LL;

	t36 = (x193*((x194*x195)<x196));

	if (t36 != 3580174509LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x202 = -1;
	int64_t x203 = -1LL;

	t37 = (x201*((x202*x203)<x204));

	if (t37 != 1187) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x205 = INT16_MIN;
	volatile int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	static volatile int32_t t38 = 38864631;

	t38 = (x205*((x206*x207)<x208));

	if (t38 != -32768) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = INT8_MIN;
	volatile int32_t x210 = INT32_MIN;
	uint64_t x211 = 113674406LLU;
	int8_t x212 = -1;

	t39 = (x209*((x210*x211)<x212));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x213 = 32443U;
	static int32_t x214 = 40;
	static uint64_t x215 = 276316LLU;
	volatile int32_t t40 = 0;

	t40 = (x213*((x214*x215)<x216));

	if (t40 != 32443) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x217 = INT16_MIN;
	int16_t x218 = -1;
	int8_t x219 = INT8_MAX;
	static int32_t t41 = -2;

	t41 = (x217*((x218*x219)<x220));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = INT64_MIN;
	static volatile int8_t x223 = 8;
	volatile uint8_t x224 = 3U;

	t42 = (x221*((x222*x223)<x224));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MAX;
	volatile uint32_t x243 = 6417653U;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t43 = 18326798;

	t43 = (x241*((x242*x243)<x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x245 = 1;
	volatile int32_t x247 = -10;
	static uint16_t x248 = 16U;

	t44 = (x245*((x246*x247)<x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = 14663;
	int32_t x251 = 74;
	int16_t x252 = 1;
	static int32_t t45 = -196;

	t45 = (x249*((x250*x251)<x252));

	if (t45 != 14663) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x253 = 0U;
	int16_t x254 = -1;
	int16_t x255 = INT16_MIN;
	int64_t x256 = 612241892523LL;
	int32_t t46 = 2274325;

	t46 = (x253*((x254*x255)<x256));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x257 = 11293U;
	uint32_t x258 = UINT32_MAX;
	int32_t x260 = -1417094;
	int32_t t47 = 241239933;

	t47 = (x257*((x258*x259)<x260));

	if (t47 != 11293) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x261 = INT16_MAX;
	volatile int32_t x262 = INT32_MIN;
	volatile int64_t x263 = -1LL;
	static int32_t x264 = -1;

	t48 = (x261*((x262*x263)<x264));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x266 = 0;
	volatile uint8_t x267 = UINT8_MAX;
	volatile int16_t x268 = -1;
	int32_t t49 = 139518284;

	t49 = (x265*((x266*x267)<x268));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x269 = 14817125690LLU;
	uint8_t x270 = 0U;
	int64_t x271 = INT64_MAX;
	uint64_t t50 = 2LLU;

	t50 = (x269*((x270*x271)<x272));

	if (t50 != 14817125690LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	int16_t x275 = 0;
	int8_t x276 = INT8_MIN;
	int64_t t51 = -273LL;

	t51 = (x273*((x274*x275)<x276));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x285 = UINT8_MAX;
	volatile int64_t x286 = -16443002837244073LL;
	int32_t x288 = INT32_MAX;
	static volatile int32_t t52 = -28;

	t52 = (x285*((x286*x287)<x288));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x301 = 84481196016259LLU;
	uint64_t x302 = 137255LLU;
	static int64_t x303 = INT64_MIN;
	static int64_t x304 = INT64_MIN;

	t53 = (x301*((x302*x303)<x304));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x305 = UINT32_MAX;
	uint16_t x306 = 1U;
	int64_t x307 = INT64_MAX;
	int8_t x308 = INT8_MAX;
	volatile uint32_t t54 = 21155U;

	t54 = (x305*((x306*x307)<x308));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x310 = INT32_MAX;
	static int64_t x312 = -6531497804849668LL;
	static volatile int32_t t55 = -1577442;

	t55 = (x309*((x310*x311)<x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x313 = 468046U;
	volatile uint64_t x314 = 671409155478196139LLU;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -1;
	volatile uint32_t t56 = 55246387U;

	t56 = (x313*((x314*x315)<x316));

	if (t56 != 468046U) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x317 = -1;
	int8_t x319 = INT8_MAX;
	volatile int32_t t57 = 13;

	t57 = (x317*((x318*x319)<x320));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x322 = UINT32_MAX;
	int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MAX;
	int32_t t58 = INT32_MIN;

	t58 = (x321*((x322*x323)<x324));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = 31241709143534LL;
	int16_t x326 = 0;
	volatile int32_t x327 = INT32_MIN;
	uint64_t x328 = 402537270LLU;
	volatile int64_t t59 = -1LL;

	t59 = (x325*((x326*x327)<x328));

	if (t59 != 31241709143534LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = 1;
	int32_t x336 = INT32_MAX;
	int32_t t60 = 135778;

	t60 = (x333*((x334*x335)<x336));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x338 = INT8_MIN;
	volatile int64_t x339 = -1042LL;
	int32_t x340 = 231196;
	static int32_t t61 = 404;

	t61 = (x337*((x338*x339)<x340));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x341 = -308;
	uint32_t x342 = 1U;
	int8_t x343 = INT8_MAX;
	static uint8_t x344 = 23U;

	t62 = (x341*((x342*x343)<x344));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x345 = 397849209497LL;
	volatile int8_t x346 = 5;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = 284U;
	volatile int64_t t63 = 117206LL;

	t63 = (x345*((x346*x347)<x348));

	if (t63 != 397849209497LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x350 = -13;
	uint8_t x351 = 12U;
	static volatile uint64_t x352 = 8383LLU;

	t64 = (x349*((x350*x351)<x352));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x358 = 66506U;
	static uint16_t x359 = 122U;
	uint8_t x360 = 32U;
	int32_t t65 = -32858087;

	t65 = (x357*((x358*x359)<x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x361 = 448U;
	static int32_t x362 = 818862;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t66 = -1;

	t66 = (x361*((x362*x363)<x364));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x365 = INT64_MAX;
	uint32_t x366 = 1U;
	volatile int8_t x367 = -1;
	uint32_t x368 = 1432016447U;
	static volatile int64_t t67 = -9LL;

	t67 = (x365*((x366*x367)<x368));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x369 = -1;
	static int32_t x370 = INT32_MIN;
	int64_t x371 = -1LL;
	static int16_t x372 = INT16_MIN;
	int32_t t68 = 108566;

	t68 = (x369*((x370*x371)<x372));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x373 = INT8_MAX;
	int16_t x375 = 111;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int32_t t69 = -4919256;

	t69 = (x373*((x374*x375)<x376));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x377 = 3583046LLU;
	volatile uint32_t x378 = 23233U;
	volatile int16_t x380 = INT16_MAX;
	volatile uint64_t t70 = 377095651680263532LLU;

	t70 = (x377*((x378*x379)<x380));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x381 = -1;
	static int8_t x383 = INT8_MAX;
	volatile uint64_t x384 = UINT64_MAX;
	int32_t t71 = 1888;

	t71 = (x381*((x382*x383)<x384));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x385 = -745516296;
	int16_t x386 = -8035;
	int64_t x387 = 3157148LL;
	int64_t x388 = -192900544169781974LL;

	t72 = (x385*((x386*x387)<x388));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x391 = -1;
	static int32_t x392 = -1;
	volatile int64_t t73 = -64LL;

	t73 = (x389*((x390*x391)<x392));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x397 = INT64_MAX;
	int32_t x398 = -500;
	volatile uint16_t x399 = 3576U;

	t74 = (x397*((x398*x399)<x400));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x401 = UINT64_MAX;
	volatile uint8_t x402 = 6U;
	volatile int64_t x403 = 17415LL;
	uint64_t t75 = 941405932904LLU;

	t75 = (x401*((x402*x403)<x404));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MIN;
	static volatile int8_t x408 = 47;
	volatile int32_t t76 = -56821;

	t76 = (x405*((x406*x407)<x408));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x409 = 2U;
	int64_t x410 = INT64_MIN;
	int16_t x412 = 1;
	volatile int32_t t77 = 257355722;

	t77 = (x409*((x410*x411)<x412));

	if (t77 != 2) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x418 = INT8_MIN;
	uint64_t x420 = UINT64_MAX;

	t78 = (x417*((x418*x419)<x420));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = 184414750029366LLU;
	int16_t x423 = -27;
	volatile uint64_t t79 = 288254702781621LLU;

	t79 = (x421*((x422*x423)<x424));

	if (t79 != 184414750029366LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x426 = 14046421449LLU;
	uint8_t x427 = 2U;
	uint32_t x428 = 1U;
	uint32_t t80 = 1833U;

	t80 = (x425*((x426*x427)<x428));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x429 = 444;
	int8_t x430 = 15;
	static int16_t x431 = INT16_MAX;
	uint32_t x432 = 164384U;
	static int32_t t81 = -2254773;

	t81 = (x429*((x430*x431)<x432));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x433 = -500;
	int8_t x434 = -51;
	int8_t x435 = -1;
	volatile int16_t x436 = -1;
	int32_t t82 = -643041;

	t82 = (x433*((x434*x435)<x436));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x437 = 227;
	static uint16_t x438 = 1U;
	static volatile int8_t x439 = 3;
	static int32_t x440 = INT32_MAX;

	t83 = (x437*((x438*x439)<x440));

	if (t83 != 227) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x441 = INT8_MIN;
	volatile int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	volatile int64_t x444 = INT64_MIN;

	t84 = (x441*((x442*x443)<x444));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x449 = -1;
	uint32_t x450 = 1U;
	uint32_t x451 = 247U;
	volatile int32_t t85 = -9;

	t85 = (x449*((x450*x451)<x452));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x453 = INT16_MAX;
	int64_t x454 = -26648457505LL;
	int8_t x455 = INT8_MIN;
	static volatile uint64_t x456 = 337451505889469621LLU;
	volatile int32_t t86 = 12;

	t86 = (x453*((x454*x455)<x456));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x461 = INT32_MIN;
	uint32_t x462 = 0U;
	uint8_t x463 = 104U;
	volatile int32_t t87 = INT32_MIN;

	t87 = (x461*((x462*x463)<x464));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x465 = -68;
	static uint64_t x466 = UINT64_MAX;
	uint16_t x467 = 1160U;
	volatile int64_t x468 = INT64_MIN;
	int32_t t88 = 421;

	t88 = (x465*((x466*x467)<x468));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x474 = 790U;
	int8_t x475 = INT8_MAX;
	static int64_t x476 = -40867587223502121LL;
	int32_t t89 = -4108430;

	t89 = (x473*((x474*x475)<x476));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x477 = INT64_MAX;
	int8_t x478 = 1;
	static int32_t x479 = INT32_MIN;
	uint32_t x480 = 110424U;
	static int64_t t90 = -430LL;

	t90 = (x477*((x478*x479)<x480));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x481 = -17;
	volatile int8_t x482 = -1;
	uint16_t x483 = 5U;
	int64_t x484 = INT64_MAX;
	static volatile int32_t t91 = 1211;

	t91 = (x481*((x482*x483)<x484));

	if (t91 != -17) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x486 = 12U;
	static int8_t x488 = INT8_MIN;

	t92 = (x485*((x486*x487)<x488));

	if (t92 != 319549286631LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x489 = 28354U;
	int8_t x490 = INT8_MIN;
	int16_t x492 = 341;
	volatile uint32_t t93 = 1U;

	t93 = (x489*((x490*x491)<x492));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x495 = 1;
	int64_t x496 = 398979862710820091LL;
	volatile int32_t t94 = 151;

	t94 = (x493*((x494*x495)<x496));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x497 = 1;
	uint64_t x498 = 848663511341918286LLU;
	volatile int8_t x500 = INT8_MAX;
	int32_t t95 = -126864564;

	t95 = (x497*((x498*x499)<x500));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x501 = -1;
	static int8_t x502 = INT8_MAX;
	volatile int8_t x503 = 43;
	int32_t t96 = -1;

	t96 = (x501*((x502*x503)<x504));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x509 = 26U;
	uint8_t x510 = 2U;
	static int16_t x511 = INT16_MIN;
	static volatile int64_t x512 = INT64_MAX;
	int32_t t97 = 1338916;

	t97 = (x509*((x510*x511)<x512));

	if (t97 != 26) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x516 = INT32_MIN;
	uint64_t t98 = UINT64_MAX;

	t98 = (x513*((x514*x515)<x516));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x521 = INT8_MAX;
	int64_t x522 = INT64_MAX;
	uint64_t x523 = 5541693547LLU;
	static volatile int64_t x524 = INT64_MAX;
	int32_t t99 = 1;

	t99 = (x521*((x522*x523)<x524));

	if (t99 != 127) { NG(); } else { ; }
	
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

