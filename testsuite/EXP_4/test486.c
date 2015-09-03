#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
volatile int32_t x7 = -149679804;
uint64_t x8 = 368227696996LLU;
int32_t x11 = 94;
int16_t x24 = INT16_MAX;
static uint8_t x33 = 22U;
int64_t x37 = INT64_MIN;
int64_t t8 = -242955601LL;
int8_t x49 = -1;
uint8_t x50 = 5U;
uint16_t x51 = 66U;
int8_t x60 = INT8_MAX;
int64_t x63 = -22803LL;
static int32_t x64 = INT32_MIN;
static uint32_t x72 = UINT32_MAX;
int64_t x88 = -1818110214541136520LL;
int64_t x94 = 1LL;
volatile int16_t x96 = INT16_MIN;
volatile uint64_t t17 = 13827806LLU;
uint16_t x110 = UINT16_MAX;
uint8_t x114 = UINT8_MAX;
int64_t x115 = 73LL;
uint8_t x117 = 20U;
uint16_t x122 = 8U;
volatile int64_t x130 = 3802463LL;
int8_t x132 = -1;
static volatile int16_t x134 = -8644;
uint8_t x148 = 1U;
int64_t x151 = 72121096834050LL;
int64_t x157 = 6393LL;
volatile uint16_t x162 = 1U;
uint64_t t30 = 0LLU;
int16_t x165 = INT16_MAX;
int8_t x170 = 0;
uint8_t x174 = 2U;
int64_t x176 = -1LL;
volatile int32_t x186 = INT32_MIN;
int16_t x187 = -1;
volatile uint32_t t34 = 58U;
static int8_t x195 = INT8_MAX;
static uint16_t x205 = 11U;
uint16_t x206 = UINT16_MAX;
uint32_t x209 = 1050392596U;
uint64_t x223 = 16335275945LLU;
uint8_t x224 = 70U;
static int32_t x233 = INT32_MAX;
int32_t x236 = -1;
int16_t x237 = -174;
int8_t x241 = 0;
volatile uint8_t x247 = UINT8_MAX;
int32_t x250 = 3682;
volatile int32_t t43 = -215065382;
volatile int64_t x257 = -229LL;
volatile uint32_t x268 = 122600U;
uint64_t t46 = 7874075856988LLU;
int8_t x278 = INT8_MIN;
volatile int16_t x291 = INT16_MIN;
uint32_t x295 = 22173U;
volatile int32_t x296 = -1;
uint64_t t52 = 21443LLU;
uint8_t x300 = UINT8_MAX;
int32_t x303 = 1419;
int32_t t54 = 336158363;
uint32_t x306 = 6381399U;
static int64_t x321 = INT64_MIN;
uint64_t x322 = 19646LLU;
uint64_t x324 = UINT64_MAX;
uint32_t x328 = 82914U;
int16_t x332 = INT16_MAX;
static uint32_t x333 = UINT32_MAX;
static int32_t x341 = INT32_MIN;
static int32_t t62 = -30674213;
static volatile int16_t x349 = INT16_MIN;
int16_t x368 = INT16_MAX;
volatile uint64_t t67 = 5432174844LLU;
int16_t x375 = -1;
volatile int64_t x392 = -1LL;
int64_t t73 = -1441333405LL;
uint8_t x396 = 49U;
uint64_t x400 = UINT64_MAX;
volatile int8_t x411 = 0;
volatile int64_t t76 = 64628627LL;
uint16_t x416 = 3798U;
uint8_t x438 = UINT8_MAX;
int8_t x440 = -1;
int16_t x441 = 1;
int16_t x447 = INT16_MIN;
volatile uint32_t t81 = 25590U;
static int16_t x450 = -1;
int32_t t83 = 723069;
uint64_t x461 = UINT64_MAX;
int16_t x471 = -1;
int32_t x472 = -1;
uint64_t x475 = UINT64_MAX;
int16_t x477 = -1;
uint8_t x478 = UINT8_MAX;
volatile int64_t x481 = -535LL;
volatile uint64_t x483 = 3521558160828LLU;
int8_t x484 = -7;
int32_t x493 = -7144242;
uint8_t x496 = 0U;
uint64_t x500 = 42580126420415LLU;
int32_t x509 = INT32_MAX;
int8_t x518 = INT8_MIN;
static uint16_t x519 = UINT16_MAX;


void f0(void) {
	int32_t x2 = INT32_MAX;
	volatile uint16_t x3 = 22424U;
	int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 73683288LLU;

	t0 = (x1%(x2|(x3*x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	static uint64_t x6 = UINT64_MAX;
	volatile uint64_t t1 = 15573684644456LLU;

	t1 = (x5%(x6|(x7*x8)));

	if (t1 != 4294967295LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int16_t x10 = -3374;
	int32_t x12 = -1179;
	volatile int32_t t2 = -286972861;

	t2 = (x9%(x10|(x11*x12)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int8_t x14 = 1;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = 26U;
	int64_t t3 = -2220646123585084LL;

	t3 = (x13%(x14|(x15*x16)));

	if (t3 != -402503LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int16_t x18 = 14718;
	int32_t x19 = -1;
	uint32_t x20 = 484953U;
	static uint32_t t4 = 8364U;

	t4 = (x17%(x18|(x19*x20)));

	if (t4 != 32767U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x22 = 924U;
	volatile uint32_t x23 = UINT32_MAX;
	volatile int64_t t5 = -983155684LL;

	t5 = (x21%(x22|(x23*x24)));

	if (t5 != -2654456051LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = INT32_MAX;
	int64_t x35 = 90841475271049247LL;
	int8_t x36 = 1;
	static volatile int64_t t6 = 13LL;

	t6 = (x33%(x34|(x35*x36)));

	if (t6 != 22LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x38 = 11079927U;
	volatile int16_t x39 = INT16_MIN;
	int64_t x40 = -1LL;
	static int64_t t7 = -99683909860779929LL;

	t7 = (x37%(x38|(x39*x40)));

	if (t7 != -1096763LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x45 = 10866U;
	int64_t x46 = -1LL;
	uint16_t x47 = 57U;
	static int32_t x48 = -1;

	t8 = (x45%(x46|(x47*x48)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x52 = 5LLU;
	uint64_t t9 = 53LLU;

	t9 = (x49%(x50|(x51*x52)));

	if (t9 != 150LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = 2409U;
	uint32_t x54 = 3684U;
	int16_t x55 = -14;
	static int8_t x56 = -4;
	uint32_t t10 = 46599150U;

	t10 = (x53%(x54|(x55*x56)));

	if (t10 != 2409U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = INT32_MAX;
	uint16_t x58 = 2721U;
	int8_t x59 = -1;
	int32_t t11 = 11649;

	t11 = (x57%(x58|(x59*x60)));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x62 = 1384515483155LLU;
	uint64_t t12 = 245LLU;

	t12 = (x61%(x62|(x63*x64)));

	if (t12 != 5145360796980LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -1;
	volatile int8_t x71 = 2;
	uint32_t t13 = 1383U;

	t13 = (x69%(x70|(x71*x72)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = INT64_MAX;
	uint8_t x74 = UINT8_MAX;
	volatile uint8_t x75 = 14U;
	uint32_t x76 = 1910U;
	int64_t t14 = -5077LL;

	t14 = (x73%(x74|(x75*x76)));

	if (t14 != 23439LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = INT16_MIN;
	int32_t x82 = INT32_MAX;
	static uint32_t x83 = 404372U;
	volatile uint8_t x84 = 0U;
	static uint32_t t15 = 22382333U;

	t15 = (x81%(x82|(x83*x84)));

	if (t15 != 2147450881U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x85 = 239LLU;
	static volatile int8_t x86 = INT8_MIN;
	int16_t x87 = 0;
	uint64_t t16 = 12533670371516LLU;

	t16 = (x85%(x86|(x87*x88)));

	if (t16 != 239LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = INT8_MIN;
	uint64_t x95 = 1480LLU;

	t17 = (x93%(x94|(x95*x96)));

	if (t17 != 48496511LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x97 = 24403U;
	static int32_t x98 = -1;
	uint8_t x99 = 0U;
	static int64_t x100 = -25773107LL;
	static volatile int64_t t18 = -3366LL;

	t18 = (x97%(x98|(x99*x100)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x101 = -7487435736632219LL;
	static uint64_t x102 = UINT64_MAX;
	static uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	uint64_t t19 = 25542291311467LLU;

	t19 = (x101%(x102|(x103*x104)));

	if (t19 != 18439256637972919397LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = -1LL;
	volatile uint16_t x111 = 19773U;
	uint32_t x112 = UINT32_MAX;
	int64_t t20 = 1149412LL;

	t20 = (x109%(x110|(x111*x112)));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x113 = -23339;
	volatile uint32_t x116 = 5U;
	volatile int64_t t21 = -1608549354914573202LL;

	t21 = (x113%(x114|(x115*x116)));

	if (t21 != -344LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x118 = INT64_MIN;
	uint32_t x119 = 19215U;
	static volatile int32_t x120 = -245962590;
	int64_t t22 = 150467LL;

	t22 = (x117%(x118|(x119*x120)));

	if (t22 != 20LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	volatile int32_t t23 = -243090;

	t23 = (x121%(x122|(x123*x124)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = 8033;
	int32_t x131 = -1;
	volatile int64_t t24 = -1750381912728830LL;

	t24 = (x129%(x130|(x131*x132)));

	if (t24 != 8033LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x133 = INT16_MIN;
	static volatile uint16_t x135 = 10122U;
	static uint8_t x136 = UINT8_MAX;
	volatile int32_t t25 = 1270467;

	t25 = (x133%(x134|(x135*x136)));

	if (t25 != -344) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x145 = 30LLU;
	static volatile int64_t x146 = -1LL;
	volatile int16_t x147 = -1;
	uint64_t t26 = 450498558476807LLU;

	t26 = (x145%(x146|(x147*x148)));

	if (t26 != 30LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x149 = UINT8_MAX;
	uint64_t x150 = UINT64_MAX;
	int16_t x152 = INT16_MAX;
	uint64_t t27 = 3640721840LLU;

	t27 = (x149%(x150|(x151*x152)));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x153 = INT32_MAX;
	int8_t x154 = -1;
	uint8_t x155 = 87U;
	int8_t x156 = 31;
	volatile int32_t t28 = -1005306;

	t28 = (x153%(x154|(x155*x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x158 = INT16_MIN;
	int32_t x159 = -1;
	uint8_t x160 = 25U;
	int64_t t29 = -17968223357LL;

	t29 = (x157%(x158|(x159*x160)));

	if (t29 != 18LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = UINT16_MAX;
	uint64_t x163 = 13527202LLU;
	int8_t x164 = INT8_MAX;

	t30 = (x161%(x162|(x163*x164)));

	if (t30 != 65535LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x166 = 3U;
	int8_t x167 = 21;
	int16_t x168 = 59;
	volatile int32_t t31 = -105;

	t31 = (x165%(x166|(x167*x168)));

	if (t31 != 553) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x169 = 5;
	uint64_t x171 = 1127505644185LLU;
	volatile int32_t x172 = -4017883;
	volatile uint64_t t32 = 63LLU;

	t32 = (x169%(x170|(x171*x172)));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x173 = 251445394119LL;
	uint64_t x175 = 10LLU;
	uint64_t t33 = 246629LLU;

	t33 = (x173%(x174|(x175*x176)));

	if (t33 != 251445394119LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x185 = 27119U;
	int8_t x188 = INT8_MIN;

	t34 = (x185%(x186|(x187*x188)));

	if (t34 != 27119U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = INT8_MIN;
	int8_t x194 = -8;
	static int16_t x196 = INT16_MIN;
	static int32_t t35 = 79585;

	t35 = (x193%(x194|(x195*x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x207 = -125660273474470LL;
	volatile int16_t x208 = INT16_MAX;
	volatile int64_t t36 = 196780975122229011LL;

	t36 = (x205%(x206|(x207*x208)));

	if (t36 != 11LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x210 = INT16_MIN;
	static int16_t x211 = INT16_MIN;
	int8_t x212 = 1;
	static volatile uint32_t t37 = 24937U;

	t37 = (x209%(x210|(x211*x212)));

	if (t37 != 1050392596U) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x221 = INT16_MAX;
	static int32_t x222 = -1201154;
	uint64_t t38 = 423777LLU;

	t38 = (x221%(x222|(x223*x224)));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x234 = 2LLU;
	volatile int16_t x235 = INT16_MIN;
	static volatile uint64_t t39 = 1701471154869LLU;

	t39 = (x233%(x234|(x235*x236)));

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MAX;
	int16_t x240 = -1;
	static volatile int32_t t40 = 3973;

	t40 = (x237%(x238|(x239*x240)));

	if (t40 != -47) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x242 = 60U;
	static int8_t x243 = 0;
	int32_t x244 = -456;
	volatile int32_t t41 = -1039292;

	t41 = (x241%(x242|(x243*x244)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x245 = -1798261;
	int16_t x246 = -1;
	int16_t x248 = 96;
	volatile int32_t t42 = -162312340;

	t42 = (x245%(x246|(x247*x248)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x249 = INT32_MAX;
	static int16_t x251 = INT16_MIN;
	int8_t x252 = -1;

	t43 = (x249%(x250|(x251*x252)));

	if (t43 != 31897) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x258 = UINT64_MAX;
	uint16_t x259 = 2026U;
	uint8_t x260 = 0U;
	static uint64_t t44 = 206523293086916936LLU;

	t44 = (x257%(x258|(x259*x260)));

	if (t44 != 18446744073709551387LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MIN;
	volatile uint64_t x263 = 19645LLU;
	int16_t x264 = INT16_MIN;
	volatile uint64_t t45 = 6LLU;

	t45 = (x261%(x262|(x263*x264)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x265 = 3LLU;
	int64_t x266 = -332105999545264682LL;
	int8_t x267 = -1;

	t46 = (x265%(x266|(x267*x268)));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x269 = -30606LL;
	uint64_t x270 = 28861635245LLU;
	static uint8_t x271 = 1U;
	volatile uint16_t x272 = 2U;
	uint64_t t47 = 509239LLU;

	t47 = (x269%(x270|(x271*x272)));

	if (t47 != 16067616828LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x273 = -1LL;
	static volatile int64_t x274 = INT64_MIN;
	static volatile int8_t x275 = 8;
	volatile uint16_t x276 = 49U;
	int64_t t48 = 127914LL;

	t48 = (x273%(x274|(x275*x276)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x277 = UINT64_MAX;
	uint16_t x279 = 116U;
	int16_t x280 = -33;
	uint64_t t49 = 3209540468070358710LLU;

	t49 = (x277%(x278|(x279*x280)));

	if (t49 != 115LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x281 = UINT64_MAX;
	static int32_t x282 = 51463;
	static uint8_t x283 = 0U;
	int8_t x284 = 0;
	static volatile uint64_t t50 = 5967718375860794742LLU;

	t50 = (x281%(x282|(x283*x284)));

	if (t50 != 50152LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x289 = 282U;
	static int16_t x290 = -11902;
	uint32_t x292 = 31464U;
	uint32_t t51 = 1896U;

	t51 = (x289%(x290|(x291*x292)));

	if (t51 != 282U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x293 = UINT16_MAX;
	static uint64_t x294 = 396004LLU;

	t52 = (x293%(x294|(x295*x296)));

	if (t52 != 65535LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x297 = -1;
	int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	static volatile int32_t t53 = 123;

	t53 = (x297%(x298|(x299*x300)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MIN;
	int16_t x304 = INT16_MIN;

	t54 = (x301%(x302|(x303*x304)));

	if (t54 != -128) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = -1;
	int32_t x307 = -62;
	int8_t x308 = INT8_MAX;
	volatile uint32_t t55 = 7998U;

	t55 = (x305%(x306|(x307*x308)));

	if (t55 != 128U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x313 = 2178927928144167LL;
	int8_t x314 = INT8_MIN;
	int8_t x315 = INT8_MAX;
	static int16_t x316 = INT16_MAX;
	static volatile int64_t t56 = 34829LL;

	t56 = (x313%(x314|(x315*x316)));

	if (t56 != 103LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x317 = 3U;
	int64_t x318 = 0LL;
	volatile uint32_t x319 = UINT32_MAX;
	int32_t x320 = INT32_MIN;
	static int64_t t57 = 37142037617LL;

	t57 = (x317%(x318|(x319*x320)));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x323 = 0;
	static uint64_t t58 = 1016749268985716659LLU;

	t58 = (x321%(x322|(x323*x324)));

	if (t58 != 19588LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x325 = INT32_MAX;
	int64_t x326 = -14144724506LL;
	volatile int8_t x327 = INT8_MIN;
	int64_t t59 = -14470LL;

	t59 = (x325%(x326|(x327*x328)));

	if (t59 != 2147483647LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x329 = 6U;
	static int64_t x330 = 221957904836256LL;
	int16_t x331 = -176;
	volatile int64_t t60 = 64287LL;

	t60 = (x329%(x330|(x331*x332)));

	if (t60 != 6LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x334 = INT16_MAX;
	int8_t x335 = INT8_MAX;
	int16_t x336 = 200;
	volatile uint32_t t61 = 196456U;

	t61 = (x333%(x334|(x335*x336)));

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x342 = INT16_MIN;
	static int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;

	t62 = (x341%(x342|(x343*x344)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x350 = UINT16_MAX;
	static int32_t x351 = -1;
	int64_t x352 = -82925485891932LL;
	static int64_t t63 = 1399377887974471LL;

	t63 = (x349%(x350|(x351*x352)));

	if (t63 != -32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x353 = 1;
	int64_t x354 = -4771147792LL;
	int16_t x355 = -12;
	uint16_t x356 = 1274U;
	volatile int64_t t64 = -2660251926983LL;

	t64 = (x353%(x354|(x355*x356)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x357 = INT16_MIN;
	int64_t x358 = -1LL;
	int64_t x359 = 2484243LL;
	int32_t x360 = INT32_MIN;
	volatile int64_t t65 = -44772394110363812LL;

	t65 = (x357%(x358|(x359*x360)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -511900;
	uint16_t x363 = UINT16_MAX;
	volatile uint16_t x364 = 12237U;
	static int64_t t66 = 190173389LL;

	t66 = (x361%(x362|(x363*x364)));

	if (t66 != -170178LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x365 = 203675497U;
	volatile int64_t x366 = -462452461683LL;
	static uint64_t x367 = UINT64_MAX;

	t67 = (x365%(x366|(x367*x368)));

	if (t67 != 203675497LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x369 = -1;
	uint32_t x370 = 302U;
	static int8_t x371 = INT8_MIN;
	uint8_t x372 = 6U;
	static volatile uint32_t t68 = 52217247U;

	t68 = (x369%(x370|(x371*x372)));

	if (t68 != 721U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t69 = 901956;

	t69 = (x373%(x374|(x375*x376)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x377 = -548513731942499LL;
	int16_t x378 = INT16_MAX;
	static int32_t x379 = -1;
	int16_t x380 = INT16_MAX;
	volatile int64_t t70 = -1LL;

	t70 = (x377%(x378|(x379*x380)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x381 = INT16_MIN;
	uint16_t x382 = 1526U;
	static volatile int8_t x383 = 1;
	int16_t x384 = INT16_MAX;
	int32_t t71 = 383740;

	t71 = (x381%(x382|(x383*x384)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x385 = 3548U;
	int32_t x386 = INT32_MIN;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t72 = 89;

	t72 = (x385%(x386|(x387*x388)));

	if (t72 != 3548) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x389 = INT8_MAX;
	static uint32_t x390 = UINT32_MAX;
	volatile int8_t x391 = INT8_MIN;

	t73 = (x389%(x390|(x391*x392)));

	if (t73 != 127LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x393 = -1;
	int16_t x394 = -2116;
	volatile uint32_t x395 = 27754U;
	volatile uint32_t t74 = 17971300U;

	t74 = (x393%(x394|(x395*x396)));

	if (t74 != 2049U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x397 = 1LLU;
	static uint16_t x398 = UINT16_MAX;
	uint64_t x399 = UINT64_MAX;
	volatile uint64_t t75 = 1743027767190301498LLU;

	t75 = (x397%(x398|(x399*x400)));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x409 = UINT8_MAX;
	int64_t x410 = 3434020157864082LL;
	int8_t x412 = 2;

	t76 = (x409%(x410|(x411*x412)));

	if (t76 != 255LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x413 = -2818;
	uint16_t x414 = 0U;
	uint16_t x415 = 447U;
	int32_t t77 = 15348734;

	t77 = (x413%(x414|(x415*x416)));

	if (t77 != -2818) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x417 = 21U;
	int16_t x418 = 20;
	uint8_t x419 = 11U;
	uint16_t x420 = 448U;
	volatile int32_t t78 = 1487976;

	t78 = (x417%(x418|(x419*x420)));

	if (t78 != 21) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x437 = INT8_MIN;
	volatile int16_t x439 = INT16_MIN;
	volatile int32_t t79 = -2998;

	t79 = (x437%(x438|(x439*x440)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x442 = 27U;
	int8_t x443 = -1;
	uint32_t x444 = 250U;
	volatile uint32_t t80 = 430U;

	t80 = (x441%(x442|(x443*x444)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x445 = 7775258U;
	uint8_t x446 = 41U;
	static int8_t x448 = 1;

	t81 = (x445%(x446|(x447*x448)));

	if (t81 != 7775258U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = 5538U;
	static uint16_t x451 = 55U;
	static uint16_t x452 = 4U;
	uint32_t t82 = 979U;

	t82 = (x449%(x450|(x451*x452)));

	if (t82 != 5538U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x453 = -1;
	volatile uint16_t x454 = UINT16_MAX;
	uint16_t x455 = 15U;
	int8_t x456 = INT8_MAX;

	t83 = (x453%(x454|(x455*x456)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x457 = INT8_MIN;
	volatile int16_t x458 = 2;
	volatile int64_t x459 = -1784236649LL;
	uint8_t x460 = 35U;
	volatile int64_t t84 = -3167709LL;

	t84 = (x457%(x458|(x459*x460)));

	if (t84 != -128LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x462 = 86810LL;
	volatile int64_t x463 = -41708186LL;
	volatile uint16_t x464 = 1779U;
	volatile uint64_t t85 = 52806389330785LLU;

	t85 = (x461%(x462|(x463*x464)));

	if (t85 != 74198846501LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x469 = 11912883U;
	static uint64_t x470 = 24926235685980LLU;
	uint64_t t86 = 2210907151LLU;

	t86 = (x469%(x470|(x471*x472)));

	if (t86 != 11912883LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MAX;
	static int16_t x476 = INT16_MIN;
	static uint64_t t87 = 2237788058744267LLU;

	t87 = (x473%(x474|(x475*x476)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x479 = UINT64_MAX;
	uint32_t x480 = 479015U;
	uint64_t t88 = 1884936542289640645LLU;

	t88 = (x477%(x478|(x479*x480)));

	if (t88 != 478976LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x482 = UINT8_MAX;
	static uint64_t t89 = 119089023LLU;

	t89 = (x481%(x482|(x483*x484)));

	if (t89 != 24650907125226LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x494 = 409752;
	int16_t x495 = INT16_MIN;
	static int32_t t90 = -573300264;

	t90 = (x493%(x494|(x495*x496)));

	if (t90 != -178458) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x497 = 34U;
	int8_t x498 = -1;
	uint16_t x499 = 107U;
	volatile uint64_t t91 = 3925966659614422236LLU;

	t91 = (x497%(x498|(x499*x500)));

	if (t91 != 34LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x501 = INT64_MIN;
	static int32_t x502 = INT32_MAX;
	volatile int64_t x503 = 362731063597LL;
	int16_t x504 = 35;
	volatile int64_t t92 = 22689LL;

	t92 = (x501%(x502|(x503*x504)));

	if (t92 != -12266427323858LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x505 = -81749800;
	uint32_t x506 = 1400U;
	volatile int16_t x507 = INT16_MIN;
	int32_t x508 = -1;
	static volatile uint32_t t93 = 121204U;

	t93 = (x505%(x506|(x507*x508)));

	if (t93 != 29752U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x510 = UINT16_MAX;
	uint16_t x511 = 4544U;
	uint16_t x512 = 1U;
	static int32_t t94 = 415;

	t94 = (x509%(x510|(x511*x512)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x513 = 936501431;
	int8_t x514 = 0;
	int16_t x515 = INT16_MAX;
	static int8_t x516 = INT8_MAX;
	volatile int32_t t95 = 15009;

	t95 = (x513%(x514|(x515*x516)));

	if (t95 != 184406) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x517 = INT32_MAX;
	int32_t x520 = -3;
	static int32_t t96 = -112775;

	t96 = (x517%(x518|(x519*x520)));

	if (t96 != 22) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x525 = 0LLU;
	volatile uint32_t x526 = 751930U;
	int64_t x527 = INT64_MAX;
	int8_t x528 = -1;
	volatile uint64_t t97 = 93564061923866063LLU;

	t97 = (x525%(x526|(x527*x528)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x529 = -1;
	volatile uint32_t x530 = 2770U;
	uint8_t x531 = 14U;
	int16_t x532 = 333;
	volatile uint32_t t98 = 52U;

	t98 = (x529%(x530|(x531*x532)));

	if (t98 != 4539U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x533 = INT64_MIN;
	int8_t x534 = INT8_MIN;
	int16_t x535 = INT16_MIN;
	uint8_t x536 = 1U;
	static int64_t t99 = 6612LL;

	t99 = (x533%(x534|(x535*x536)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

