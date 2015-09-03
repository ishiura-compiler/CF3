#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -3;
volatile int8_t x13 = 4;
int64_t x15 = -1LL;
static int32_t x16 = INT32_MIN;
int32_t t2 = -171869701;
static uint64_t x23 = 1646LLU;
static uint64_t x25 = 0LLU;
volatile int32_t x28 = INT32_MAX;
volatile int8_t x35 = INT8_MIN;
int32_t t7 = 40751;
int64_t x38 = INT64_MAX;
volatile uint64_t x39 = 1936667542704627LLU;
static int64_t x40 = 0LL;
uint8_t x54 = UINT8_MAX;
uint16_t x62 = UINT16_MAX;
int8_t x82 = -1;
int16_t x85 = -71;
volatile int32_t x89 = -2933;
uint32_t x92 = 21018U;
uint8_t x95 = UINT8_MAX;
int64_t x96 = 71494LL;
static int32_t t19 = 0;
uint32_t x114 = 29444U;
uint16_t x117 = UINT16_MAX;
volatile int32_t t23 = -1;
int32_t x125 = INT32_MAX;
volatile int64_t x134 = -396196043558708LL;
static volatile uint8_t x135 = 0U;
int8_t x136 = -17;
static uint32_t x152 = 2798U;
static int64_t x154 = INT64_MIN;
volatile int32_t t29 = -119677;
int64_t x173 = -17812LL;
uint64_t x183 = 530867318390514892LLU;
int64_t x184 = 27191LL;
volatile int32_t t35 = 6307115;
static volatile int16_t x215 = 37;
int8_t x223 = INT8_MAX;
int64_t x226 = INT64_MAX;
uint8_t x237 = 7U;
uint8_t x238 = 89U;
int8_t x239 = 7;
static volatile int32_t t43 = 38199258;
volatile int64_t x257 = -15473LL;
uint16_t x259 = 314U;
volatile uint8_t x265 = 3U;
static volatile int32_t x268 = -66;
int64_t x269 = -12336109709LL;
static int16_t x272 = -961;
volatile uint16_t x280 = 9018U;
int8_t x291 = INT8_MAX;
int32_t x309 = -1;
volatile uint16_t x313 = UINT16_MAX;
static uint64_t x318 = 33000834164LLU;
volatile int16_t x319 = -83;
int16_t x320 = INT16_MAX;
static int32_t t54 = -27628644;
uint16_t x334 = 147U;
int16_t x335 = INT16_MAX;
int32_t t57 = -1;
volatile int32_t t58 = 147;
int64_t x342 = INT64_MIN;
volatile int32_t t61 = -405;
uint32_t x358 = 1000999020U;
int16_t x364 = -1;
static volatile int16_t x366 = -55;
int32_t t64 = -140;
volatile int64_t x374 = 5491252LL;
static int64_t x375 = -1LL;
uint8_t x376 = 83U;
int16_t x390 = -1;
int64_t x392 = 1107547LL;
static int32_t t69 = 3040;
int8_t x401 = INT8_MAX;
static int32_t x406 = -1;
int32_t x421 = 853519;
static int8_t x424 = INT8_MAX;
volatile int32_t t73 = -423;
static volatile uint64_t x429 = 10771LLU;
volatile int8_t x430 = INT8_MIN;
int32_t x431 = INT32_MIN;
int8_t x441 = INT8_MIN;
int16_t x442 = -1;
uint16_t x444 = UINT16_MAX;
volatile int32_t t75 = -7;
int16_t x455 = 476;
static volatile int32_t t77 = 194374;
int32_t x457 = INT32_MIN;
volatile int32_t x458 = INT32_MAX;
static volatile int32_t x468 = INT32_MIN;
volatile uint64_t x475 = 40246353370854237LLU;
static volatile int32_t t81 = 9178485;
static volatile int16_t x490 = INT16_MIN;
int16_t x498 = -593;
uint32_t x499 = UINT32_MAX;
int8_t x500 = -1;
int32_t x502 = -1;
uint8_t x504 = UINT8_MAX;
static volatile int32_t t85 = -26;
uint16_t x530 = 6U;
static int16_t x531 = -1;
uint8_t x532 = 30U;
volatile int32_t t89 = 1;
static volatile int16_t x534 = -13996;
int16_t x541 = -19;
static volatile int32_t t92 = -148764874;
int16_t x547 = 3;
volatile int32_t t96 = -287;
uint16_t x561 = UINT16_MAX;
int8_t x564 = -2;
int8_t x568 = -1;
int32_t x570 = INT32_MIN;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static int8_t x2 = 1;
	int16_t x3 = 0;
	volatile int32_t x4 = INT32_MIN;

	t0 = (x1==(x2==(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	uint16_t x6 = 44U;
	volatile int32_t x7 = INT32_MIN;
	volatile uint32_t x8 = 78839U;
	volatile int32_t t1 = 7;

	t1 = (x5==(x6==(x7*x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = UINT16_MAX;

	t2 = (x13==(x14==(x15*x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 304264568;
	int16_t x18 = INT16_MIN;
	static int8_t x19 = -1;
	static int16_t x20 = 13290;
	volatile int32_t t3 = 41329;

	t3 = (x17==(x18==(x19*x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 30;
	uint32_t x22 = 2U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = -28;

	t4 = (x21==(x22==(x23*x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t t5 = -65632;

	t5 = (x25==(x26==(x27*x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 95066255LLU;
	int16_t x30 = 5;
	int32_t x31 = -1;
	uint16_t x32 = 159U;
	static int32_t t6 = -99575774;

	t6 = (x29==(x30==(x31*x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -1;
	int16_t x34 = -3134;
	int16_t x36 = INT16_MAX;

	t7 = (x33==(x34==(x35*x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int32_t t8 = -30050;

	t8 = (x37==(x38==(x39*x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -6578844072372LL;
	int16_t x46 = INT16_MIN;
	uint16_t x47 = UINT16_MAX;
	uint8_t x48 = UINT8_MAX;
	int32_t t9 = 51801;

	t9 = (x45==(x46==(x47*x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x53 = 13331528659LLU;
	static int8_t x55 = INT8_MIN;
	static int8_t x56 = INT8_MIN;
	int32_t t10 = -111088889;

	t10 = (x53==(x54==(x55*x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x61 = INT16_MIN;
	static int64_t x63 = -1LL;
	static uint8_t x64 = UINT8_MAX;
	int32_t t11 = 15315;

	t11 = (x61==(x62==(x63*x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = -1;
	uint64_t x66 = 41245LLU;
	volatile int64_t x67 = 280330612LL;
	uint32_t x68 = 0U;
	static int32_t t12 = -33873953;

	t12 = (x65==(x66==(x67*x68)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 74U;
	int16_t x70 = 1;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	int32_t t13 = 258393;

	t13 = (x69==(x70==(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = 7;
	uint8_t x74 = 94U;
	uint16_t x75 = 0U;
	int8_t x76 = INT8_MAX;
	int32_t t14 = 19920;

	t14 = (x73==(x74==(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x77 = UINT64_MAX;
	int64_t x78 = INT64_MAX;
	volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = 522;
	static int32_t t15 = 3;

	t15 = (x77==(x78==(x79*x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MIN;
	static int64_t x83 = INT64_MIN;
	uint64_t x84 = 20664981LLU;
	int32_t t16 = 31713724;

	t16 = (x81==(x82==(x83*x84)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	volatile int16_t x88 = INT16_MIN;
	int32_t t17 = -10058966;

	t17 = (x85==(x86==(x87*x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x90 = INT64_MIN;
	int64_t x91 = -1LL;
	volatile int32_t t18 = 134221;

	t18 = (x89==(x90==(x91*x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = INT64_MAX;
	int32_t x94 = -1;

	t19 = (x93==(x94==(x95*x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = 43376007;
	static int32_t x103 = -1;
	uint16_t x104 = UINT16_MAX;
	int32_t t20 = 534629;

	t20 = (x101==(x102==(x103*x104)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = -1;
	uint8_t x115 = UINT8_MAX;
	uint64_t x116 = 52LLU;
	volatile int32_t t21 = -325197181;

	t21 = (x113==(x114==(x115*x116)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x118 = 166;
	volatile int8_t x119 = INT8_MAX;
	uint64_t x120 = 428876LLU;
	volatile int32_t t22 = 181;

	t22 = (x117==(x118==(x119*x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	static uint32_t x122 = UINT32_MAX;
	uint32_t x123 = UINT32_MAX;
	int32_t x124 = INT32_MAX;

	t23 = (x121==(x122==(x123*x124)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x126 = UINT16_MAX;
	static volatile uint8_t x127 = UINT8_MAX;
	uint16_t x128 = UINT16_MAX;
	int32_t t24 = 1639103;

	t24 = (x125==(x126==(x127*x128)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = INT32_MIN;
	volatile int32_t t25 = -1;

	t25 = (x133==(x134==(x135*x136)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x137 = 1928491471825355133LL;
	static uint64_t x138 = UINT64_MAX;
	int32_t x139 = -1;
	int8_t x140 = INT8_MIN;
	volatile int32_t t26 = -243129;

	t26 = (x137==(x138==(x139*x140)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = INT32_MAX;
	int16_t x150 = INT16_MIN;
	static int16_t x151 = -340;
	volatile int32_t t27 = 4;

	t27 = (x149==(x150==(x151*x152)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x153 = 56152150U;
	int16_t x155 = INT16_MIN;
	uint16_t x156 = UINT16_MAX;
	static int32_t t28 = 2;

	t28 = (x153==(x154==(x155*x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int32_t x159 = INT32_MIN;
	uint32_t x160 = UINT32_MAX;

	t29 = (x157==(x158==(x159*x160)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x161 = -831211666851008805LL;
	int32_t x162 = 124318;
	int32_t x163 = -1;
	volatile int16_t x164 = -1;
	volatile int32_t t30 = -614;

	t30 = (x161==(x162==(x163*x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x174 = 697U;
	volatile uint32_t x175 = UINT32_MAX;
	volatile uint32_t x176 = 72071U;
	static volatile int32_t t31 = -1342;

	t31 = (x173==(x174==(x175*x176)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x177 = -31399449356083428LL;
	int32_t x178 = -1612790;
	uint16_t x179 = 61U;
	volatile int16_t x180 = INT16_MAX;
	static volatile int32_t t32 = 541099;

	t32 = (x177==(x178==(x179*x180)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = UINT8_MAX;
	int32_t x182 = 395525;
	static volatile int32_t t33 = 603405;

	t33 = (x181==(x182==(x183*x184)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = INT64_MIN;
	int64_t x187 = -1LL;
	int32_t x188 = -136874932;
	int32_t t34 = 71412074;

	t34 = (x185==(x186==(x187*x188)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x205 = INT32_MIN;
	volatile int8_t x206 = INT8_MIN;
	uint64_t x207 = UINT64_MAX;
	static int32_t x208 = -1;

	t35 = (x205==(x206==(x207*x208)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x213 = -1;
	static uint64_t x214 = 1283643714498250LLU;
	uint16_t x216 = 0U;
	static int32_t t36 = 2;

	t36 = (x213==(x214==(x215*x216)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = 27U;
	uint8_t x222 = 31U;
	uint16_t x224 = UINT16_MAX;
	int32_t t37 = -453621801;

	t37 = (x221==(x222==(x223*x224)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x225 = INT64_MIN;
	volatile int8_t x227 = -10;
	int8_t x228 = -15;
	int32_t t38 = -6322639;

	t38 = (x225==(x226==(x227*x228)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x233 = INT32_MIN;
	static int32_t x234 = INT32_MIN;
	static int32_t x235 = 16;
	int16_t x236 = INT16_MIN;
	volatile int32_t t39 = 289;

	t39 = (x233==(x234==(x235*x236)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x240 = 14126671;
	volatile int32_t t40 = -1;

	t40 = (x237==(x238==(x239*x240)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x241 = INT64_MIN;
	uint16_t x242 = 55U;
	int16_t x243 = INT16_MIN;
	static int8_t x244 = -1;
	static volatile int32_t t41 = -154547903;

	t41 = (x241==(x242==(x243*x244)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x245 = -4;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -12;
	uint64_t x248 = 1308218834924180LLU;
	volatile int32_t t42 = -2193;

	t42 = (x245==(x246==(x247*x248)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x249 = 0;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = UINT8_MAX;
	volatile uint16_t x252 = UINT16_MAX;

	t43 = (x249==(x250==(x251*x252)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x253 = INT16_MIN;
	uint16_t x254 = 373U;
	volatile uint64_t x255 = 29182766969LLU;
	volatile int8_t x256 = 0;
	volatile int32_t t44 = 272;

	t44 = (x253==(x254==(x255*x256)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x258 = INT16_MIN;
	int16_t x260 = INT16_MAX;
	int32_t t45 = -2199;

	t45 = (x257==(x258==(x259*x260)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x266 = INT16_MAX;
	int8_t x267 = 1;
	int32_t t46 = -1266876;

	t46 = (x265==(x266==(x267*x268)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x270 = -38861327;
	volatile int8_t x271 = 24;
	static volatile int32_t t47 = 0;

	t47 = (x269==(x270==(x271*x272)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x277 = 5;
	volatile int8_t x278 = -5;
	int64_t x279 = 50990LL;
	volatile int32_t t48 = -305;

	t48 = (x277==(x278==(x279*x280)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MIN;
	volatile int16_t x292 = -202;
	static volatile int32_t t49 = 1;

	t49 = (x289==(x290==(x291*x292)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x297 = INT32_MIN;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = UINT32_MAX;
	int32_t x300 = -1;
	int32_t t50 = 82;

	t50 = (x297==(x298==(x299*x300)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x305 = INT32_MIN;
	uint8_t x306 = 110U;
	static uint64_t x307 = 183490362630519LLU;
	static int64_t x308 = 911090643162338805LL;
	volatile int32_t t51 = 680486;

	t51 = (x305==(x306==(x307*x308)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x310 = 8461;
	uint8_t x311 = 28U;
	int8_t x312 = INT8_MAX;
	volatile int32_t t52 = -7;

	t52 = (x309==(x310==(x311*x312)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 290403122295105919LLU;
	int8_t x316 = INT8_MAX;
	int32_t t53 = 83;

	t53 = (x313==(x314==(x315*x316)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x317 = INT64_MIN;

	t54 = (x317==(x318==(x319*x320)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x321 = 17788U;
	int64_t x322 = INT64_MAX;
	uint8_t x323 = 76U;
	uint64_t x324 = 3LLU;
	volatile int32_t t55 = -49249;

	t55 = (x321==(x322==(x323*x324)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = 59;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MAX;
	volatile int32_t t56 = -371;

	t56 = (x325==(x326==(x327*x328)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x333 = 1016;
	uint64_t x336 = UINT64_MAX;

	t57 = (x333==(x334==(x335*x336)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x337 = INT8_MIN;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	int8_t x340 = -48;

	t58 = (x337==(x338==(x339*x340)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x341 = 11U;
	volatile int32_t x343 = -163905436;
	uint64_t x344 = 154967472330525LLU;
	int32_t t59 = 303380;

	t59 = (x341==(x342==(x343*x344)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x349 = 3124187321LL;
	int16_t x350 = INT16_MIN;
	int32_t x351 = INT32_MIN;
	static volatile uint64_t x352 = UINT64_MAX;
	int32_t t60 = 6;

	t60 = (x349==(x350==(x351*x352)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x353 = 31;
	int32_t x354 = INT32_MAX;
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 0U;

	t61 = (x353==(x354==(x355*x356)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x357 = UINT16_MAX;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t62 = -278;

	t62 = (x357==(x358==(x359*x360)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x361 = -91765;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 1419984198722LLU;
	int32_t t63 = -8;

	t63 = (x361==(x362==(x363*x364)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x365 = 3917837U;
	static uint16_t x367 = 15U;
	int16_t x368 = INT16_MIN;

	t64 = (x365==(x366==(x367*x368)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	int16_t x371 = 5;
	volatile uint16_t x372 = UINT16_MAX;
	volatile int32_t t65 = 908363;

	t65 = (x369==(x370==(x371*x372)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x373 = UINT8_MAX;
	int32_t t66 = 468413;

	t66 = (x373==(x374==(x375*x376)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x381 = UINT32_MAX;
	int32_t x382 = -1;
	int16_t x383 = 12;
	uint16_t x384 = UINT16_MAX;
	static int32_t t67 = 417385826;

	t67 = (x381==(x382==(x383*x384)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x389 = INT8_MIN;
	volatile uint64_t x391 = 116571LLU;
	int32_t t68 = 25649;

	t68 = (x389==(x390==(x391*x392)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x393 = -6;
	int64_t x394 = -3140640LL;
	volatile uint64_t x395 = 79051035687299341LLU;
	int8_t x396 = 15;

	t69 = (x393==(x394==(x395*x396)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x402 = 45131LLU;
	uint8_t x403 = 1U;
	volatile int64_t x404 = -2100555532594413646LL;
	int32_t t70 = 3;

	t70 = (x401==(x402==(x403*x404)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x405 = INT32_MIN;
	static int16_t x407 = 778;
	uint32_t x408 = 6465740U;
	volatile int32_t t71 = 5;

	t71 = (x405==(x406==(x407*x408)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x422 = 755;
	static int16_t x423 = -1;
	int32_t t72 = -116;

	t72 = (x421==(x422==(x423*x424)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x425 = INT8_MIN;
	uint32_t x426 = 6281877U;
	uint64_t x427 = UINT64_MAX;
	volatile uint32_t x428 = 1U;

	t73 = (x425==(x426==(x427*x428)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x432 = 0U;
	int32_t t74 = 5048;

	t74 = (x429==(x430==(x431*x432)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x443 = 127;

	t75 = (x441==(x442==(x443*x444)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x445 = UINT32_MAX;
	int64_t x446 = 109363054380889LL;
	uint16_t x447 = 54U;
	static uint16_t x448 = 1007U;
	int32_t t76 = 281061;

	t76 = (x445==(x446==(x447*x448)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x453 = 1344097235260641719LLU;
	volatile int8_t x454 = -1;
	int16_t x456 = INT16_MAX;

	t77 = (x453==(x454==(x455*x456)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x459 = -56;
	static uint8_t x460 = 4U;
	int32_t t78 = -72;

	t78 = (x457==(x458==(x459*x460)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x465 = INT64_MAX;
	static volatile int16_t x466 = INT16_MAX;
	int32_t x467 = 0;
	static volatile int32_t t79 = -5673476;

	t79 = (x465==(x466==(x467*x468)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x473 = -1;
	uint64_t x474 = UINT64_MAX;
	volatile int32_t x476 = -166555;
	int32_t t80 = -159905;

	t80 = (x473==(x474==(x475*x476)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x477 = 10U;
	int32_t x478 = 50736;
	uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MIN;

	t81 = (x477==(x478==(x479*x480)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x489 = INT64_MIN;
	volatile int8_t x491 = INT8_MIN;
	static volatile int16_t x492 = INT16_MIN;
	int32_t t82 = 3;

	t82 = (x489==(x490==(x491*x492)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x493 = INT8_MAX;
	static int32_t x494 = INT32_MIN;
	int16_t x495 = -757;
	uint32_t x496 = 4336U;
	volatile int32_t t83 = 6293;

	t83 = (x493==(x494==(x495*x496)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x497 = 61;
	static int32_t t84 = 1022;

	t84 = (x497==(x498==(x499*x500)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x501 = INT8_MIN;
	static int16_t x503 = -14;

	t85 = (x501==(x502==(x503*x504)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x509 = 163;
	volatile int16_t x510 = 0;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = -2265;
	volatile int32_t t86 = -10353398;

	t86 = (x509==(x510==(x511*x512)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x513 = INT64_MIN;
	volatile int16_t x514 = INT16_MIN;
	int8_t x515 = INT8_MAX;
	uint64_t x516 = 134936094982890LLU;
	volatile int32_t t87 = -11689438;

	t87 = (x513==(x514==(x515*x516)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x525 = INT16_MAX;
	int64_t x526 = INT64_MIN;
	int32_t x527 = -44583254;
	static int8_t x528 = 0;
	volatile int32_t t88 = 15356947;

	t88 = (x525==(x526==(x527*x528)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x529 = INT16_MIN;

	t89 = (x529==(x530==(x531*x532)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x533 = INT16_MAX;
	uint8_t x535 = UINT8_MAX;
	volatile uint16_t x536 = UINT16_MAX;
	volatile int32_t t90 = -19873;

	t90 = (x533==(x534==(x535*x536)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x537 = 10;
	int64_t x538 = 5376LL;
	volatile uint32_t x539 = 6017874U;
	static int8_t x540 = -1;
	int32_t t91 = -12864681;

	t91 = (x537==(x538==(x539*x540)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x542 = 4186615U;
	int8_t x543 = -1;
	int16_t x544 = INT16_MAX;

	t92 = (x541==(x542==(x543*x544)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x545 = INT8_MIN;
	static volatile uint16_t x546 = 7602U;
	static int16_t x548 = -1;
	static int32_t t93 = 192469356;

	t93 = (x545==(x546==(x547*x548)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x549 = 20;
	static uint64_t x550 = UINT64_MAX;
	volatile int32_t x551 = INT32_MAX;
	uint32_t x552 = 1681502U;
	volatile int32_t t94 = -360;

	t94 = (x549==(x550==(x551*x552)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x553 = INT64_MIN;
	volatile uint32_t x554 = 21170U;
	int8_t x555 = -1;
	uint16_t x556 = UINT16_MAX;
	int32_t t95 = -2159;

	t95 = (x553==(x554==(x555*x556)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x557 = INT8_MAX;
	int32_t x558 = 17985746;
	int32_t x559 = 197478;
	volatile int8_t x560 = -36;

	t96 = (x557==(x558==(x559*x560)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x562 = INT64_MIN;
	int16_t x563 = -1;
	volatile int32_t t97 = 48450;

	t97 = (x561==(x562==(x563*x564)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x565 = INT32_MAX;
	int32_t x566 = INT32_MIN;
	int16_t x567 = INT16_MIN;
	int32_t t98 = -3185;

	t98 = (x565==(x566==(x567*x568)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x569 = INT16_MIN;
	uint16_t x571 = 160U;
	int32_t x572 = -1;
	volatile int32_t t99 = 18250203;

	t99 = (x569==(x570==(x571*x572)));

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

