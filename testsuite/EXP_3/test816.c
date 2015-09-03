#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x8 = 132U;
static int64_t x10 = -1LL;
volatile int32_t t3 = -4306;
int16_t x23 = INT16_MIN;
static uint32_t x24 = 8303713U;
volatile int32_t t6 = -505686938;
volatile uint8_t x29 = 0U;
static volatile uint16_t x30 = 5U;
int8_t x32 = INT8_MIN;
volatile int32_t t7 = -118;
static volatile uint8_t x39 = 1U;
volatile int16_t x42 = INT16_MAX;
int16_t x49 = INT16_MAX;
int32_t t11 = 2;
int16_t x53 = 15441;
volatile int32_t t12 = -12;
int16_t x67 = -1;
int32_t t16 = -10914;
int64_t x82 = -1LL;
static volatile int32_t t18 = 2041534;
int32_t x93 = INT32_MIN;
int16_t x97 = INT16_MIN;
int64_t x99 = -1LL;
int8_t x102 = -12;
volatile int64_t x105 = -2146599402079385975LL;
volatile int32_t t25 = -351;
static volatile int32_t x121 = -1;
int16_t x125 = INT16_MIN;
int64_t x126 = 104317289169010230LL;
static int64_t x131 = -1092699970320953LL;
uint16_t x133 = UINT16_MAX;
volatile int8_t x138 = INT8_MIN;
int16_t x141 = 5061;
int64_t x142 = INT64_MAX;
int8_t x145 = -1;
static int8_t x147 = INT8_MAX;
int8_t x151 = INT8_MAX;
uint8_t x152 = 70U;
int64_t x178 = 0LL;
int8_t x180 = -1;
int32_t x182 = INT32_MIN;
volatile int32_t t43 = 95;
uint8_t x186 = UINT8_MAX;
volatile int32_t t45 = -8;
int32_t x201 = INT32_MIN;
int8_t x202 = -1;
int16_t x206 = -612;
int8_t x210 = -1;
volatile int16_t x212 = INT16_MAX;
static uint8_t x221 = 80U;
uint16_t x223 = UINT16_MAX;
int8_t x226 = -1;
volatile int32_t x228 = INT32_MAX;
volatile int32_t t54 = -496791;
uint16_t x237 = 172U;
volatile uint32_t x240 = UINT32_MAX;
int64_t x247 = INT64_MIN;
static volatile int32_t t59 = -83788;
static int64_t x254 = 11629261LL;
int32_t x258 = INT32_MAX;
volatile int32_t t62 = -2663132;
int32_t t64 = 299;
uint8_t x272 = 9U;
static int64_t x273 = -1LL;
int8_t x275 = 0;
volatile uint32_t x277 = 0U;
volatile uint32_t x279 = 485U;
static volatile int32_t t67 = 4543962;
static uint64_t x281 = 283630474062898605LLU;
int16_t x285 = 620;
uint8_t x287 = 11U;
int8_t x291 = -6;
uint64_t x292 = 35555893804252586LLU;
uint64_t x299 = 2LLU;
static int32_t x300 = 62115;
static uint8_t x310 = 104U;
int16_t x311 = -1542;
volatile int32_t t76 = 1012771049;
volatile int32_t t77 = -87;
int32_t t78 = -6971475;
int32_t x327 = INT32_MAX;
uint8_t x328 = 53U;
volatile int32_t t79 = -39;
int32_t t80 = 22123965;
int64_t x346 = 5LL;
int32_t t85 = 243900299;
int8_t x357 = -1;
int16_t x360 = 108;
volatile int32_t t87 = 29167900;
volatile int32_t t88 = -24645154;
int16_t x369 = INT16_MAX;
volatile uint16_t x372 = 14893U;
volatile int32_t x375 = INT32_MIN;
int32_t x377 = INT32_MIN;
volatile int64_t x381 = -2375591531039721LL;
static int16_t x386 = -1;
uint8_t x392 = UINT8_MAX;
volatile int32_t t95 = 3;
uint8_t x396 = UINT8_MAX;
int8_t x397 = -1;
int64_t x398 = INT64_MIN;
static int8_t x399 = INT8_MIN;
static int8_t x407 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 106U;
	uint16_t x2 = 13942U;
	int64_t x3 = INT64_MAX;
	static int64_t x4 = -2LL;
	volatile int32_t t0 = 29;

	t0 = ((x1&x2)<=(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 5846231U;
	volatile int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = 5;

	t1 = ((x5&x6)<=(x7%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 12;
	int64_t x11 = INT64_MIN;
	int8_t x12 = -1;
	volatile int32_t t2 = 6226640;

	t2 = ((x9&x10)<=(x11%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -4;
	volatile int16_t x14 = INT16_MAX;
	volatile int8_t x15 = INT8_MAX;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13&x14)<=(x15%x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int16_t x18 = -1;
	volatile uint32_t x19 = 50780U;
	int64_t x20 = INT64_MAX;
	volatile int32_t t4 = -64761083;

	t4 = ((x17&x18)<=(x19%x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 11183;
	int64_t x22 = 2657301823LL;
	int32_t t5 = 56048;

	t5 = ((x21&x22)<=(x23%x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = -1;
	uint32_t x26 = 4U;
	static uint16_t x27 = UINT16_MAX;
	int32_t x28 = -1;

	t6 = ((x25&x26)<=(x27%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x31 = INT8_MAX;

	t7 = ((x29&x30)<=(x31%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	uint64_t x38 = UINT64_MAX;
	int8_t x40 = -1;
	int32_t t8 = -41448;

	t8 = ((x37&x38)<=(x39%x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x43 = UINT16_MAX;
	uint64_t x44 = 468195590LLU;
	int32_t t9 = 3;

	t9 = ((x41&x42)<=(x43%x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x45 = 235659U;
	uint16_t x46 = 3U;
	int64_t x47 = -1LL;
	volatile int32_t x48 = INT32_MAX;
	volatile int32_t t10 = 64784706;

	t10 = ((x45&x46)<=(x47%x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x50 = UINT8_MAX;
	int16_t x51 = -1;
	uint8_t x52 = UINT8_MAX;

	t11 = ((x49&x50)<=(x51%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x54 = INT32_MIN;
	static int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;

	t12 = ((x53&x54)<=(x55%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 2U;
	uint64_t x58 = 3LLU;
	int8_t x59 = -12;
	int8_t x60 = -1;
	volatile int32_t t13 = -26523;

	t13 = ((x57&x58)<=(x59%x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MIN;
	uint16_t x62 = UINT16_MAX;
	int32_t x63 = -10;
	int16_t x64 = INT16_MIN;
	volatile int32_t t14 = 350;

	t14 = ((x61&x62)<=(x63%x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 10U;
	uint8_t x66 = 71U;
	int64_t x68 = -218643967116LL;
	int32_t t15 = -102110;

	t15 = ((x65&x66)<=(x67%x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x69 = UINT64_MAX;
	volatile uint64_t x70 = 25459094221769LLU;
	int32_t x71 = -47023532;
	static volatile uint32_t x72 = 282067U;

	t16 = ((x69&x70)<=(x71%x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x78 = -16;
	int8_t x79 = INT8_MIN;
	int8_t x80 = 23;
	int32_t t17 = 14;

	t17 = ((x77&x78)<=(x79%x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x81 = INT64_MIN;
	volatile int16_t x83 = -252;
	volatile uint16_t x84 = 1U;

	t18 = ((x81&x82)<=(x83%x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x85 = UINT16_MAX;
	static uint32_t x86 = 24685U;
	int8_t x87 = -3;
	static int8_t x88 = -1;
	int32_t t19 = -213;

	t19 = ((x85&x86)<=(x87%x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = 735;
	int16_t x90 = 18;
	uint8_t x91 = 1U;
	int64_t x92 = INT64_MIN;
	int32_t t20 = 1029819854;

	t20 = ((x89&x90)<=(x91%x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x94 = -1;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MAX;
	volatile int32_t t21 = 367;

	t21 = ((x93&x94)<=(x95%x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x98 = INT64_MAX;
	volatile int16_t x100 = 13667;
	int32_t t22 = -2395;

	t22 = ((x97&x98)<=(x99%x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x103 = 5065U;
	int32_t x104 = -1;
	int32_t t23 = -2285;

	t23 = ((x101&x102)<=(x103%x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x106 = 1U;
	uint32_t x107 = 125008455U;
	static volatile int64_t x108 = 14895136728LL;
	int32_t t24 = -853557021;

	t24 = ((x105&x106)<=(x107%x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = INT8_MIN;
	uint16_t x110 = 2U;
	int32_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;

	t25 = ((x109&x110)<=(x111%x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x113 = 0;
	int8_t x114 = INT8_MAX;
	int32_t x115 = 711663;
	static uint64_t x116 = 5841059164315LLU;
	volatile int32_t t26 = -1550;

	t26 = ((x113&x114)<=(x115%x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = INT16_MAX;
	static uint64_t x118 = 91062746913313LLU;
	static int8_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t27 = -376556;

	t27 = ((x117&x118)<=(x119%x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x122 = 119U;
	uint16_t x123 = UINT16_MAX;
	static int64_t x124 = -1LL;
	static volatile int32_t t28 = 8727377;

	t28 = ((x121&x122)<=(x123%x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x127 = 1U;
	uint16_t x128 = 993U;
	volatile int32_t t29 = 37;

	t29 = ((x125&x126)<=(x127%x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = 35U;
	volatile int32_t x130 = INT32_MAX;
	int8_t x132 = 1;
	int32_t t30 = 236243;

	t30 = ((x129&x130)<=(x131%x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x134 = 27U;
	int8_t x135 = INT8_MAX;
	static volatile int32_t x136 = -1;
	int32_t t31 = 458063;

	t31 = ((x133&x134)<=(x135%x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	int32_t x139 = 312583263;
	int32_t x140 = 339846312;
	volatile int32_t t32 = 416309;

	t32 = ((x137&x138)<=(x139%x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x143 = 1U;
	volatile int64_t x144 = -1LL;
	int32_t t33 = -199;

	t33 = ((x141&x142)<=(x143%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x146 = -1;
	int64_t x148 = -1LL;
	volatile int32_t t34 = 203255;

	t34 = ((x145&x146)<=(x147%x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x149 = INT32_MIN;
	static int8_t x150 = INT8_MIN;
	static int32_t t35 = -9267;

	t35 = ((x149&x150)<=(x151%x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x153 = UINT16_MAX;
	int64_t x154 = INT64_MAX;
	uint8_t x155 = 11U;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t36 = -11789798;

	t36 = ((x153&x154)<=(x155%x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = -1;
	static volatile int64_t x159 = INT64_MAX;
	volatile int32_t x160 = -1;
	static int32_t t37 = 486;

	t37 = ((x157&x158)<=(x159%x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -20;
	uint64_t x162 = 221LLU;
	int64_t x163 = 68090450073460LL;
	volatile uint16_t x164 = 13U;
	volatile int32_t t38 = -1014;

	t38 = ((x161&x162)<=(x163%x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = 26;
	int32_t x166 = INT32_MIN;
	static volatile int64_t x167 = -154162952363LL;
	static int32_t x168 = INT32_MIN;
	static int32_t t39 = -133869;

	t39 = ((x165&x166)<=(x167%x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 1U;
	int32_t x172 = INT32_MIN;
	int32_t t40 = 61;

	t40 = ((x169&x170)<=(x171%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x173 = 620544U;
	static volatile int16_t x174 = 1;
	static volatile uint8_t x175 = 50U;
	volatile int8_t x176 = INT8_MIN;
	int32_t t41 = 13960942;

	t41 = ((x173&x174)<=(x175%x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = -1LL;
	uint32_t x179 = 2943U;
	static volatile int32_t t42 = -1488599;

	t42 = ((x177&x178)<=(x179%x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	static int32_t x183 = 362527819;
	int32_t x184 = INT32_MAX;

	t43 = ((x181&x182)<=(x183%x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MIN;
	uint16_t x187 = 37U;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = 26264275;

	t44 = ((x185&x186)<=(x187%x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x189 = -1;
	volatile int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int16_t x192 = -1;

	t45 = ((x189&x190)<=(x191%x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = -1;
	uint16_t x195 = 4042U;
	int64_t x196 = -3837983011558747LL;
	static volatile int32_t t46 = 10610;

	t46 = ((x193&x194)<=(x195%x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	int32_t x198 = INT32_MAX;
	volatile int16_t x199 = -741;
	uint8_t x200 = 1U;
	static int32_t t47 = 87087299;

	t47 = ((x197&x198)<=(x199%x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x203 = INT16_MIN;
	volatile uint32_t x204 = UINT32_MAX;
	static volatile int32_t t48 = -113;

	t48 = ((x201&x202)<=(x203%x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int32_t x207 = -43740132;
	static int32_t x208 = 2865;
	static int32_t t49 = 1748662;

	t49 = ((x205&x206)<=(x207%x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = UINT8_MAX;
	int8_t x211 = -1;
	int32_t t50 = 2562;

	t50 = ((x209&x210)<=(x211%x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x213 = 4U;
	int16_t x214 = INT16_MIN;
	volatile int32_t x215 = -1;
	int32_t x216 = 31966932;
	int32_t t51 = 1208551;

	t51 = ((x213&x214)<=(x215%x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = INT8_MAX;
	int64_t x218 = 1245LL;
	volatile int32_t x219 = INT32_MAX;
	volatile int8_t x220 = -14;
	volatile int32_t t52 = -254;

	t52 = ((x217&x218)<=(x219%x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x222 = INT32_MAX;
	static int16_t x224 = INT16_MIN;
	static volatile int32_t t53 = -720820;

	t53 = ((x221&x222)<=(x223%x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x225 = UINT64_MAX;
	static uint32_t x227 = 9U;

	t54 = ((x225&x226)<=(x227%x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	volatile uint8_t x230 = 13U;
	static uint32_t x231 = 1858U;
	int64_t x232 = INT64_MIN;
	int32_t t55 = 12987;

	t55 = ((x229&x230)<=(x231%x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MIN;
	uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 34U;
	int64_t x236 = 134204LL;
	volatile int32_t t56 = 355;

	t56 = ((x233&x234)<=(x235%x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = -1LL;
	volatile int32_t t57 = 5942814;

	t57 = ((x237&x238)<=(x239%x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	static volatile int8_t x244 = INT8_MIN;
	volatile int32_t t58 = 4067;

	t58 = ((x241&x242)<=(x243%x244));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	uint32_t x246 = 1033072818U;
	int8_t x248 = -44;

	t59 = ((x245&x246)<=(x247%x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	volatile uint8_t x250 = UINT8_MAX;
	volatile uint16_t x251 = UINT16_MAX;
	volatile uint8_t x252 = 2U;
	volatile int32_t t60 = 1024221577;

	t60 = ((x249&x250)<=(x251%x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = -1;
	static uint64_t x255 = UINT64_MAX;
	uint16_t x256 = 82U;
	volatile int32_t t61 = -3772;

	t61 = ((x253&x254)<=(x255%x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = INT8_MAX;
	int32_t x259 = INT32_MIN;
	static uint16_t x260 = 33U;

	t62 = ((x257&x258)<=(x259%x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = UINT16_MAX;
	int64_t x262 = -111885828122802LL;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = -4602;

	t63 = ((x261&x262)<=(x263%x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -6;
	static int16_t x266 = INT16_MAX;
	uint16_t x267 = 23484U;
	static volatile int64_t x268 = -78665LL;

	t64 = ((x265&x266)<=(x267%x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 6628U;
	int8_t x270 = INT8_MIN;
	volatile uint8_t x271 = 0U;
	volatile int32_t t65 = 43;

	t65 = ((x269&x270)<=(x271%x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x274 = 3709;
	int64_t x276 = 385353721351233LL;
	volatile int32_t t66 = 16865247;

	t66 = ((x273&x274)<=(x275%x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x278 = 10450013U;
	static volatile int32_t x280 = -981510;

	t67 = ((x277&x278)<=(x279%x280));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x282 = 5025U;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t68 = -31;

	t68 = ((x281&x282)<=(x283%x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x286 = 4U;
	uint32_t x288 = 61142U;
	volatile int32_t t69 = 62688622;

	t69 = ((x285&x286)<=(x287%x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -3;
	uint8_t x290 = 10U;
	int32_t t70 = 32509479;

	t70 = ((x289&x290)<=(x291%x292));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x293 = INT8_MIN;
	int8_t x294 = 42;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = 3941128461LL;
	int32_t t71 = -10018162;

	t71 = ((x293&x294)<=(x295%x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = 18612U;
	static volatile int16_t x298 = -1;
	static int32_t t72 = -31804971;

	t72 = ((x297&x298)<=(x299%x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x301 = 56346067843892320LLU;
	volatile int64_t x302 = INT64_MIN;
	int8_t x303 = 0;
	static uint8_t x304 = 106U;
	volatile int32_t t73 = -69166;

	t73 = ((x301&x302)<=(x303%x304));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -2857089963495826573LL;
	volatile int32_t x306 = -1;
	int32_t x307 = INT32_MIN;
	volatile uint8_t x308 = 2U;
	int32_t t74 = 15250553;

	t74 = ((x305&x306)<=(x307%x308));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x309 = -1LL;
	volatile uint32_t x312 = UINT32_MAX;
	int32_t t75 = -11170;

	t75 = ((x309&x310)<=(x311%x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x313 = -334;
	static int16_t x314 = INT16_MIN;
	uint8_t x315 = UINT8_MAX;
	int32_t x316 = INT32_MIN;

	t76 = ((x313&x314)<=(x315%x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = 10U;
	int16_t x318 = -1;
	static int32_t x319 = 1190008;
	static int8_t x320 = INT8_MIN;

	t77 = ((x317&x318)<=(x319%x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x321 = 2U;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = -68201320;
	int64_t x324 = INT64_MIN;

	t78 = ((x321&x322)<=(x323%x324));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x325 = -1;
	int32_t x326 = INT32_MAX;

	t79 = ((x325&x326)<=(x327%x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x329 = 444U;
	static int8_t x330 = -3;
	int8_t x331 = -30;
	static uint16_t x332 = 230U;

	t80 = ((x329&x330)<=(x331%x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	int8_t x335 = -53;
	uint32_t x336 = 205214U;
	int32_t t81 = 26579;

	t81 = ((x333&x334)<=(x335%x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = INT64_MIN;
	int64_t x338 = 3265361008064486LL;
	int8_t x339 = INT8_MIN;
	static int16_t x340 = -1;
	volatile int32_t t82 = 797384590;

	t82 = ((x337&x338)<=(x339%x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	volatile uint8_t x342 = 29U;
	volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MAX;
	volatile int32_t t83 = -23134411;

	t83 = ((x341&x342)<=(x343%x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x345 = UINT32_MAX;
	static volatile uint8_t x347 = 1U;
	int64_t x348 = 3027LL;
	volatile int32_t t84 = 30;

	t84 = ((x345&x346)<=(x347%x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	int32_t x350 = 20;
	int8_t x351 = INT8_MAX;
	int16_t x352 = 2098;

	t85 = ((x349&x350)<=(x351%x352));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1316284;
	uint64_t x354 = 595LLU;
	volatile int16_t x355 = INT16_MAX;
	int8_t x356 = INT8_MIN;
	volatile int32_t t86 = -16610662;

	t86 = ((x353&x354)<=(x355%x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x358 = -23692142LL;
	volatile int16_t x359 = -1;

	t87 = ((x357&x358)<=(x359%x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = 2U;
	volatile int32_t x362 = INT32_MAX;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 316U;

	t88 = ((x361&x362)<=(x363%x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 4U;
	static uint16_t x366 = 5U;
	int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = UINT64_MAX;
	int32_t t89 = 132;

	t89 = ((x365&x366)<=(x367%x368));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = 3U;
	int32_t x371 = INT32_MIN;
	int32_t t90 = 1796;

	t90 = ((x369&x370)<=(x371%x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x373 = 344274726LLU;
	uint64_t x374 = 133316706LLU;
	int64_t x376 = 85297028963LL;
	int32_t t91 = -8;

	t91 = ((x373&x374)<=(x375%x376));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x378 = 24U;
	volatile uint16_t x379 = 4U;
	int16_t x380 = INT16_MAX;
	static int32_t t92 = 1;

	t92 = ((x377&x378)<=(x379%x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x382 = INT32_MIN;
	int64_t x383 = -1LL;
	int8_t x384 = -1;
	volatile int32_t t93 = 1;

	t93 = ((x381&x382)<=(x383%x384));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = 1;
	volatile uint8_t x387 = UINT8_MAX;
	int16_t x388 = 8594;
	volatile int32_t t94 = -65;

	t94 = ((x385&x386)<=(x387%x388));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = UINT64_MAX;
	volatile int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;

	t95 = ((x389&x390)<=(x391%x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x393 = INT8_MAX;
	static uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MIN;
	int32_t t96 = -74611136;

	t96 = ((x393&x394)<=(x395%x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t97 = 52;

	t97 = ((x397&x398)<=(x399%x400));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = -8;
	volatile uint8_t x402 = 0U;
	volatile int32_t x403 = -9829745;
	int8_t x404 = INT8_MAX;
	static volatile int32_t t98 = 0;

	t98 = ((x401&x402)<=(x403%x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = INT64_MIN;
	static int16_t x406 = -1;
	uint8_t x408 = 46U;
	volatile int32_t t99 = 1;

	t99 = ((x405&x406)<=(x407%x408));

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

