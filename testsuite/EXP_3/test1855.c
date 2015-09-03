#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t2 = 827098678;
static uint16_t x16 = 11809U;
static uint32_t x20 = 1U;
int32_t t6 = 177771484;
static int64_t x31 = 28889046985LL;
static uint8_t x34 = UINT8_MAX;
int64_t x35 = INT64_MIN;
volatile int32_t t8 = -3443731;
volatile int32_t t9 = 53;
int8_t x47 = INT8_MAX;
static volatile int16_t x48 = INT16_MIN;
uint16_t x57 = UINT16_MAX;
static int32_t x64 = -395;
int32_t t15 = 902911356;
uint16_t x75 = UINT16_MAX;
int32_t x76 = INT32_MAX;
int64_t x80 = INT64_MAX;
static volatile uint32_t x81 = 68973629U;
int32_t t21 = -21119;
static int16_t x101 = INT16_MAX;
volatile uint32_t x103 = 59U;
int16_t x106 = -1;
int32_t x118 = INT32_MIN;
int32_t x120 = -1;
static int32_t t29 = -498445753;
int16_t x121 = -1;
int16_t x127 = -1;
static int64_t x128 = -1853899LL;
int16_t x133 = INT16_MAX;
volatile uint8_t x136 = 0U;
volatile int32_t t34 = 55446;
uint8_t x148 = 10U;
int16_t x153 = INT16_MIN;
int64_t x155 = -1LL;
int64_t x156 = -1LL;
volatile int32_t t38 = -15362661;
static volatile int16_t x167 = INT16_MAX;
int8_t x178 = 1;
int32_t x185 = INT32_MIN;
static int16_t x191 = -1;
int32_t t48 = -842;
uint32_t x210 = UINT32_MAX;
int32_t t52 = -395580089;
int16_t x223 = INT16_MIN;
int32_t t55 = 425219709;
uint32_t x227 = 255U;
int16_t x234 = 0;
volatile int32_t t58 = 3074498;
volatile int64_t x243 = -369004355LL;
int8_t x248 = 1;
int8_t x253 = -1;
int32_t t65 = 10895841;
volatile int32_t t68 = -103;
volatile uint8_t x282 = 63U;
volatile int32_t t70 = 317;
int32_t t71 = 138350865;
static int64_t x291 = -1LL;
int32_t t73 = -1462793;
volatile uint64_t x298 = 233430334453LLU;
volatile int16_t x299 = INT16_MIN;
int64_t x309 = 2455186136636500LL;
int8_t x311 = 10;
static int64_t x316 = INT64_MIN;
int32_t t78 = -251243515;
int8_t x319 = INT8_MIN;
static uint64_t x325 = UINT64_MAX;
uint8_t x328 = UINT8_MAX;
int32_t t84 = 0;
static uint32_t x353 = 1868U;
int32_t x361 = -3424;
static volatile int32_t t90 = 1;
int64_t x367 = INT64_MIN;
volatile int64_t x369 = 12938746LL;
int16_t x373 = INT16_MIN;
static uint8_t x375 = 125U;
int8_t x378 = -1;
int32_t t94 = -16064;
int32_t x383 = INT32_MIN;
static int16_t x386 = 640;
int8_t x391 = 0;
uint16_t x394 = 57U;
static int16_t x396 = -6186;
int32_t x398 = 6261857;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint32_t x2 = UINT32_MAX;
	int16_t x3 = 14036;
	int64_t x4 = 367162818133LL;
	volatile int32_t t0 = -1077;

	t0 = ((x1^x2)<(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x6 = -15;
	static volatile uint64_t x7 = UINT64_MAX;
	int32_t x8 = -1;
	int32_t t1 = 358515518;

	t1 = ((x5^x6)<(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 1;
	volatile int32_t x10 = INT32_MIN;
	static int8_t x11 = INT8_MAX;
	static int8_t x12 = INT8_MIN;

	t2 = ((x9^x10)<(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -4;
	uint16_t x14 = 30U;
	int8_t x15 = INT8_MIN;
	volatile int32_t t3 = 1804;

	t3 = ((x13^x14)<(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -215909147LL;
	static uint8_t x18 = 4U;
	int64_t x19 = -65641087724LL;
	int32_t t4 = 156;

	t4 = ((x17^x18)<(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int16_t x22 = 0;
	int16_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -32457430;

	t5 = ((x21^x22)<(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MAX;
	volatile int8_t x26 = -1;
	static uint8_t x27 = 1U;
	uint64_t x28 = UINT64_MAX;

	t6 = ((x25^x26)<(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 56U;
	static uint64_t x30 = UINT64_MAX;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = 653;

	t7 = ((x29^x30)<(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -4462526;
	volatile int64_t x36 = INT64_MAX;

	t8 = ((x33^x34)<(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	uint8_t x38 = 1U;
	static volatile uint8_t x39 = 18U;
	int8_t x40 = -1;

	t9 = ((x37^x38)<(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 20604203763618LL;
	static int8_t x42 = -1;
	int32_t x43 = -1;
	volatile int64_t x44 = 2252LL;
	volatile int32_t t10 = 2;

	t10 = ((x41^x42)<(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static int8_t x46 = 22;
	volatile int32_t t11 = -3406931;

	t11 = ((x45^x46)<(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 39;
	int32_t x50 = -1;
	static uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 20185U;
	int32_t t12 = -383;

	t12 = ((x49^x50)<(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int32_t x54 = -15;
	uint64_t x55 = UINT64_MAX;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 1646;

	t13 = ((x53^x54)<(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 213585550U;
	uint32_t x59 = 19561U;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -215823875;

	t14 = ((x57^x58)<(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int8_t x62 = -1;
	int64_t x63 = 14576LL;

	t15 = ((x61^x62)<(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 22803385102648590LLU;
	int64_t x66 = INT64_MIN;
	volatile int8_t x67 = 1;
	int8_t x68 = -1;
	int32_t t16 = 34811;

	t16 = ((x65^x66)<(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	volatile uint64_t x70 = 1661007186LLU;
	static int16_t x71 = INT16_MIN;
	volatile int64_t x72 = -7744583337224341LL;
	int32_t t17 = -104;

	t17 = ((x69^x70)<(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 0U;
	int32_t x74 = -1;
	int32_t t18 = 4931660;

	t18 = ((x73^x74)<(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x77 = INT16_MIN;
	uint64_t x78 = 3042403025238623233LLU;
	int16_t x79 = INT16_MIN;
	volatile int32_t t19 = -1;

	t19 = ((x77^x78)<(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MAX;
	volatile int16_t x83 = -1;
	static volatile int16_t x84 = 93;
	static int32_t t20 = 55993959;

	t20 = ((x81^x82)<(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -1;
	int16_t x86 = 6638;
	uint32_t x87 = 27481448U;
	int16_t x88 = INT16_MIN;

	t21 = ((x85^x86)<(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = 7U;
	static int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;
	static int16_t x92 = INT16_MAX;
	int32_t t22 = 7894394;

	t22 = ((x89^x90)<(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x93 = 179775417LLU;
	volatile int64_t x94 = INT64_MIN;
	uint64_t x95 = 6952427LLU;
	int32_t x96 = -30335;
	volatile int32_t t23 = 4511;

	t23 = ((x93^x94)<(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = -869;
	volatile uint16_t x99 = 1167U;
	int32_t x100 = INT32_MAX;
	volatile int32_t t24 = -1;

	t24 = ((x97^x98)<(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = UINT32_MAX;
	static int64_t x104 = 7915360125619LL;
	volatile int32_t t25 = 1772024;

	t25 = ((x101^x102)<(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t26 = 51589894;

	t26 = ((x105^x106)<(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	volatile int16_t x110 = -17;
	static uint8_t x111 = UINT8_MAX;
	int16_t x112 = INT16_MIN;
	static int32_t t27 = 3637;

	t27 = ((x109^x110)<(x111&x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint64_t x114 = 7700590009942867LLU;
	int32_t x115 = INT32_MAX;
	uint16_t x116 = UINT16_MAX;
	static int32_t t28 = -155323646;

	t28 = ((x113^x114)<(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 0;
	volatile uint8_t x119 = 15U;

	t29 = ((x117^x118)<(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int64_t x123 = 28544LL;
	static int32_t x124 = INT32_MIN;
	static volatile int32_t t30 = -18245128;

	t30 = ((x121^x122)<(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint32_t x126 = 101U;
	volatile int32_t t31 = 215445496;

	t31 = ((x125^x126)<(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	volatile int64_t x130 = -2555838LL;
	int32_t x131 = INT32_MIN;
	uint64_t x132 = 155980LLU;
	int32_t t32 = 3554;

	t32 = ((x129^x130)<(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x134 = INT32_MIN;
	int16_t x135 = -3;
	int32_t t33 = -1;

	t33 = ((x133^x134)<(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	int8_t x139 = INT8_MIN;
	volatile int32_t x140 = -1;

	t34 = ((x137^x138)<(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = INT16_MIN;
	static int16_t x143 = -296;
	static int16_t x144 = -4649;
	volatile int32_t t35 = 4;

	t35 = ((x141^x142)<(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = 46;
	int64_t x146 = 1300645715842930569LL;
	uint64_t x147 = 96982777LLU;
	int32_t t36 = 473941;

	t36 = ((x145^x146)<(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -23;
	int64_t x150 = INT64_MIN;
	uint16_t x151 = 51U;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 275;

	t37 = ((x149^x150)<(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MAX;

	t38 = ((x153^x154)<(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	uint32_t x159 = UINT32_MAX;
	uint64_t x160 = 862883645026LLU;
	int32_t t39 = 8231;

	t39 = ((x157^x158)<(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x161 = 4911U;
	int8_t x162 = -1;
	int16_t x163 = 3528;
	static int16_t x164 = INT16_MIN;
	static int32_t t40 = -9;

	t40 = ((x161^x162)<(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 7603466461322LLU;
	uint32_t x166 = 356292099U;
	int16_t x168 = INT16_MAX;
	volatile int32_t t41 = -669;

	t41 = ((x165^x166)<(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -31LL;
	int64_t x170 = INT64_MAX;
	uint8_t x171 = 2U;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = -14623;

	t42 = ((x169^x170)<(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = -15LL;
	int16_t x175 = INT16_MIN;
	int16_t x176 = INT16_MIN;
	int32_t t43 = -1;

	t43 = ((x173^x174)<(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	uint8_t x179 = 30U;
	volatile uint32_t x180 = 1029169015U;
	int32_t t44 = 16652;

	t44 = ((x177^x178)<(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -2042562949234207LL;
	int8_t x182 = 5;
	static int16_t x183 = -84;
	static volatile uint32_t x184 = 287U;
	volatile int32_t t45 = -2764095;

	t45 = ((x181^x182)<(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	static volatile uint32_t x188 = 1462780560U;
	int32_t t46 = -371494917;

	t46 = ((x185^x186)<(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = 1824965;
	static int16_t x192 = INT16_MAX;
	volatile int32_t t47 = 10;

	t47 = ((x189^x190)<(x191&x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 7196195381LLU;
	int64_t x194 = INT64_MIN;
	int16_t x195 = 0;
	uint32_t x196 = 9391U;

	t48 = ((x193^x194)<(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	uint16_t x198 = 12U;
	uint8_t x199 = 7U;
	int32_t x200 = 11;
	static volatile int32_t t49 = 15699;

	t49 = ((x197^x198)<(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 538U;
	uint64_t x202 = 30731349LLU;
	uint64_t x203 = 29LLU;
	int64_t x204 = 536025269907746490LL;
	int32_t t50 = 216;

	t50 = ((x201^x202)<(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	static uint16_t x206 = UINT16_MAX;
	static int64_t x207 = -114771447LL;
	int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 15187;

	t51 = ((x205^x206)<(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 104U;
	volatile uint64_t x211 = 19508166076467807LLU;
	int32_t x212 = 3;

	t52 = ((x209^x210)<(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	volatile int64_t x214 = INT64_MIN;
	int64_t x215 = 1300646028872408457LL;
	static uint32_t x216 = 1315391U;
	volatile int32_t t53 = 362752;

	t53 = ((x213^x214)<(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 2U;
	int16_t x218 = -1;
	uint64_t x219 = 255670248609988LLU;
	int64_t x220 = INT64_MAX;
	int32_t t54 = -49;

	t54 = ((x217^x218)<(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -9689;
	int32_t x224 = 880;

	t55 = ((x221^x222)<(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static volatile uint16_t x226 = UINT16_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t56 = 1;

	t56 = ((x225^x226)<(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 1U;
	static int64_t x230 = INT64_MIN;
	int8_t x231 = 1;
	uint8_t x232 = 127U;
	int32_t t57 = -867647227;

	t57 = ((x229^x230)<(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	int16_t x236 = 8;

	t58 = ((x233^x234)<(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -6;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = 31900;

	t59 = ((x237^x238)<(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	int64_t x242 = INT64_MAX;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = -27;

	t60 = ((x241^x242)<(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = -11101721385LL;
	int16_t x247 = INT16_MAX;
	int32_t t61 = 532818231;

	t61 = ((x245^x246)<(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -4013085LL;
	volatile int16_t x250 = -613;
	int64_t x251 = -1LL;
	int32_t x252 = -56103;
	static int32_t t62 = -228004112;

	t62 = ((x249^x250)<(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x254 = -1;
	int32_t x255 = -94876;
	static volatile uint16_t x256 = 68U;
	static volatile int32_t t63 = 0;

	t63 = ((x253^x254)<(x255&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x257 = 994308U;
	int64_t x258 = INT64_MIN;
	uint64_t x259 = 1716147770190201856LLU;
	static volatile int64_t x260 = -1LL;
	int32_t t64 = 482;

	t64 = ((x257^x258)<(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -476129644841LL;
	uint16_t x262 = 6U;
	volatile uint8_t x263 = UINT8_MAX;
	int32_t x264 = -125;

	t65 = ((x261^x262)<(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x265 = UINT16_MAX;
	uint16_t x266 = 102U;
	int64_t x267 = INT64_MIN;
	static int32_t x268 = INT32_MIN;
	volatile int32_t t66 = -306;

	t66 = ((x265^x266)<(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 244209U;
	int8_t x270 = 0;
	static int8_t x271 = 0;
	uint16_t x272 = 236U;
	int32_t t67 = 390;

	t67 = ((x269^x270)<(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	static uint64_t x274 = 839LLU;
	uint64_t x275 = 790919404528LLU;
	uint64_t x276 = 2LLU;

	t68 = ((x273^x274)<(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int16_t x278 = INT16_MIN;
	static int32_t x279 = -4;
	int32_t x280 = -1;
	static int32_t t69 = 111283;

	t69 = ((x277^x278)<(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x283 = INT8_MIN;
	int8_t x284 = INT8_MIN;

	t70 = ((x281^x282)<(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = 41670592188175620LL;
	static volatile uint64_t x286 = UINT64_MAX;
	int16_t x287 = 15142;
	uint16_t x288 = 56U;

	t71 = ((x285^x286)<(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = 0U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -207;

	t72 = ((x289^x290)<(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MAX;
	static int32_t x294 = -1;
	static int32_t x295 = -6149251;
	uint64_t x296 = UINT64_MAX;

	t73 = ((x293^x294)<(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 14309;

	t74 = ((x297^x298)<(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MIN;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x303 = UINT16_MAX;
	int64_t x304 = 1689280496065421LL;
	volatile int32_t t75 = 377609020;

	t75 = ((x301^x302)<(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = -468;
	int8_t x308 = 12;
	int32_t t76 = 1456;

	t76 = ((x305^x306)<(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x310 = INT8_MIN;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 12079;

	t77 = ((x309^x310)<(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MAX;
	static volatile int16_t x315 = INT16_MIN;

	t78 = ((x313^x314)<(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	int16_t x318 = -3073;
	uint16_t x320 = 14U;
	volatile int32_t t79 = 5;

	t79 = ((x317^x318)<(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MAX;
	int8_t x322 = -1;
	int8_t x323 = INT8_MIN;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -260;

	t80 = ((x321^x322)<(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x326 = 976;
	uint16_t x327 = UINT16_MAX;
	volatile int32_t t81 = -5;

	t81 = ((x325^x326)<(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 2;
	volatile int32_t x330 = INT32_MIN;
	int16_t x331 = 9780;
	int8_t x332 = -1;
	int32_t t82 = -10637;

	t82 = ((x329^x330)<(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	int16_t x334 = INT16_MIN;
	uint64_t x335 = 7059364766LLU;
	int16_t x336 = INT16_MIN;
	int32_t t83 = -42;

	t83 = ((x333^x334)<(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1341;
	int8_t x338 = INT8_MIN;
	volatile int8_t x339 = INT8_MIN;
	volatile int64_t x340 = INT64_MIN;

	t84 = ((x337^x338)<(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x341 = -588637441635624LL;
	uint16_t x342 = 3699U;
	static int32_t x343 = 471;
	uint32_t x344 = 16784U;
	int32_t t85 = 23;

	t85 = ((x341^x342)<(x343&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = -60;
	static int8_t x346 = -1;
	static uint32_t x347 = UINT32_MAX;
	volatile uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 30;

	t86 = ((x345^x346)<(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 871613975622050LL;
	int32_t x350 = -1;
	static int8_t x351 = INT8_MIN;
	static int8_t x352 = -1;
	int32_t t87 = 181659169;

	t87 = ((x349^x350)<(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int8_t x356 = 1;
	volatile int32_t t88 = 1606;

	t88 = ((x353^x354)<(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x357 = UINT64_MAX;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 3339U;
	int32_t x360 = -5960309;
	static volatile int32_t t89 = -4;

	t89 = ((x357^x358)<(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x362 = UINT16_MAX;
	uint8_t x363 = 2U;
	uint8_t x364 = 31U;

	t90 = ((x361^x362)<(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -264LL;
	static volatile int16_t x366 = -115;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 2043343;

	t91 = ((x365^x366)<(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	static volatile uint8_t x372 = UINT8_MAX;
	volatile int32_t t92 = -61701625;

	t92 = ((x369^x370)<(x371&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -1038207208492347LL;
	static uint32_t x376 = 42U;
	static int32_t t93 = 718154;

	t93 = ((x373^x374)<(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -1;
	uint32_t x379 = 1U;
	int32_t x380 = -1;

	t94 = ((x377^x378)<(x379&x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	uint32_t x382 = 24039537U;
	int64_t x384 = 8018795138343LL;
	static volatile int32_t t95 = -4945;

	t95 = ((x381^x382)<(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	uint8_t x387 = UINT8_MAX;
	static uint32_t x388 = UINT32_MAX;
	int32_t t96 = -5245;

	t96 = ((x385^x386)<(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x389 = 1U;
	static uint64_t x390 = UINT64_MAX;
	int64_t x392 = -1LL;
	volatile int32_t t97 = -103664;

	t97 = ((x389^x390)<(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint16_t x395 = 12U;
	volatile int32_t t98 = -1;

	t98 = ((x393^x394)<(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = UINT64_MAX;
	int32_t x399 = INT32_MAX;
	int64_t x400 = INT64_MIN;
	volatile int32_t t99 = 189681;

	t99 = ((x397^x398)<(x399&x400));

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

