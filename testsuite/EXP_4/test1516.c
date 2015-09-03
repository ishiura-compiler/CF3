#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 2U;
volatile uint8_t x5 = 7U;
uint64_t x16 = 685057025058923LLU;
volatile int32_t t4 = -1823628;
int16_t x21 = 13;
int64_t x24 = -1LL;
volatile int64_t x28 = INT64_MIN;
int64_t x35 = INT64_MIN;
volatile uint16_t x38 = 1495U;
static uint16_t x39 = 0U;
int32_t x40 = -1;
int16_t x42 = INT16_MAX;
int8_t x43 = INT8_MIN;
uint32_t x51 = 506U;
int32_t x52 = -1;
uint32_t x57 = 71023119U;
int16_t x58 = 0;
volatile int32_t t16 = 109529582;
uint8_t x69 = 96U;
int8_t x77 = -3;
static volatile int32_t t19 = 699215;
static int64_t x81 = 25588883236LL;
int64_t x83 = 333226LL;
static volatile int8_t x84 = 50;
int64_t x85 = INT64_MAX;
uint16_t x93 = 28386U;
uint32_t x94 = 32534U;
static uint64_t x97 = UINT64_MAX;
static uint32_t x101 = 34U;
static int8_t x102 = 15;
int64_t x106 = INT64_MIN;
int32_t x121 = INT32_MIN;
uint32_t x128 = 456U;
int32_t x130 = -430543;
volatile int16_t x131 = INT16_MAX;
uint32_t x133 = UINT32_MAX;
uint64_t x138 = 1690750618LLU;
int64_t x142 = INT64_MIN;
int32_t t35 = -42048;
static int32_t t36 = -27699;
int32_t x151 = INT32_MIN;
static int32_t t38 = -44;
uint16_t x159 = 13U;
static int32_t x164 = INT32_MIN;
static int32_t t40 = 5076;
int8_t x169 = 1;
static uint8_t x176 = 5U;
int32_t t43 = -257;
volatile int32_t t44 = 833272;
volatile uint16_t x182 = 2500U;
volatile uint8_t x183 = 56U;
int32_t x185 = 113904;
int64_t x186 = INT64_MIN;
volatile int32_t t46 = -227589;
uint8_t x190 = 2U;
uint8_t x194 = UINT8_MAX;
volatile int32_t t48 = 1760449;
int32_t x202 = INT32_MIN;
uint8_t x203 = 6U;
int64_t x204 = 14027120450LL;
uint16_t x205 = 0U;
volatile int64_t x206 = INT64_MAX;
int16_t x207 = INT16_MIN;
int32_t t51 = -3;
int64_t x212 = INT64_MAX;
int32_t t52 = -215392739;
volatile int32_t t53 = 15138;
int64_t x221 = -1LL;
int16_t x223 = INT16_MIN;
volatile int64_t x227 = INT64_MAX;
static int32_t t56 = -6194;
int64_t x232 = INT64_MIN;
int32_t t58 = 1656025;
volatile int64_t x247 = INT64_MIN;
int8_t x251 = -1;
int16_t x254 = -1;
static int64_t x258 = INT64_MAX;
int16_t x260 = -4;
uint8_t x263 = UINT8_MAX;
int32_t x265 = INT32_MIN;
static int32_t t66 = 2;
static int64_t x284 = INT64_MAX;
static uint16_t x285 = 2U;
int32_t x288 = -3;
static volatile int32_t t71 = -118685492;
int64_t x297 = 811LL;
int16_t x299 = INT16_MIN;
static int16_t x300 = INT16_MAX;
int32_t t74 = 3366451;
static int16_t x301 = -13;
uint32_t x302 = 201754U;
static int8_t x304 = 1;
uint64_t x309 = 1LLU;
volatile int32_t x311 = -1;
uint8_t x314 = 1U;
uint32_t x315 = 156043U;
int8_t x320 = INT8_MIN;
static int64_t x327 = 1723088982741320LL;
static uint32_t x329 = 1671174684U;
volatile int16_t x330 = -1;
int32_t x340 = INT32_MIN;
static int64_t x344 = INT64_MAX;
int8_t x356 = INT8_MIN;
uint32_t x367 = 354664601U;
volatile uint16_t x368 = 3746U;
static int16_t x374 = -5366;
static int32_t x375 = -1768;
int16_t x376 = INT16_MIN;
int32_t x384 = 197137492;
volatile int32_t t95 = -96257;
int16_t x388 = INT16_MAX;
uint16_t x390 = 144U;
int64_t x391 = INT64_MIN;
int32_t t97 = 3018050;
static uint8_t x397 = 1U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int64_t x3 = 1661LL;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 33777248;

	t0 = (x1==(x2^(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -25;
	volatile int32_t x7 = -3;
	int8_t x8 = INT8_MIN;
	int32_t t1 = -3722;

	t1 = (x5==(x6^(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint64_t x10 = UINT64_MAX;
	uint16_t x11 = 13964U;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 6570183;

	t2 = (x9==(x10^(x11<x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 15;
	volatile int8_t x14 = INT8_MIN;
	uint8_t x15 = 78U;
	int32_t t3 = 6788;

	t3 = (x13==(x14^(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int16_t x17 = -1230;
	int32_t x18 = -1;
	uint64_t x19 = 16LLU;
	int64_t x20 = -25798942744288132LL;

	t4 = (x17==(x18^(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = 1;
	static int64_t x23 = -1LL;
	volatile int32_t t5 = 96;

	t5 = (x21==(x22^(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	int32_t x26 = -1;
	uint32_t x27 = UINT32_MAX;
	static volatile int32_t t6 = -4408787;

	t6 = (x25==(x26^(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 509795295;
	volatile int8_t x30 = INT8_MIN;
	int8_t x31 = 1;
	uint32_t x32 = 117639291U;
	volatile int32_t t7 = -30981798;

	t7 = (x29==(x30^(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static volatile uint64_t x34 = 32407308LLU;
	volatile int32_t x36 = -1;
	static volatile int32_t t8 = -537;

	t8 = (x33==(x34^(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	int32_t t9 = -109;

	t9 = (x37==(x38^(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -408;
	volatile int64_t x44 = -67124560094184LL;
	volatile int32_t t10 = 247;

	t10 = (x41==(x42^(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = 17U;
	static int8_t x47 = INT8_MIN;
	int32_t x48 = -985;
	volatile int32_t t11 = 1513061;

	t11 = (x45==(x46^(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 105233321U;
	int32_t x50 = INT32_MAX;
	int32_t t12 = -789983;

	t12 = (x49==(x50^(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int32_t x54 = 657135420;
	int8_t x55 = 1;
	static int32_t x56 = -6631;
	static int32_t t13 = -2127;

	t13 = (x53==(x54^(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x59 = 56U;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 0;

	t14 = (x57==(x58^(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 6U;
	volatile uint16_t x62 = UINT16_MAX;
	uint8_t x63 = 2U;
	static volatile int64_t x64 = INT64_MIN;
	volatile int32_t t15 = 40231141;

	t15 = (x61==(x62^(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 3358099075827881LLU;
	uint8_t x66 = UINT8_MAX;
	volatile int8_t x67 = INT8_MIN;
	static int16_t x68 = 70;

	t16 = (x65==(x66^(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x70 = -97;
	static uint32_t x71 = UINT32_MAX;
	static uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -9;

	t17 = (x69==(x70^(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	int16_t x74 = -122;
	static volatile int16_t x75 = 4828;
	static volatile int64_t x76 = INT64_MIN;
	volatile int32_t t18 = 250;

	t18 = (x73==(x74^(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	int16_t x80 = INT16_MIN;

	t19 = (x77==(x78^(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 32U;
	volatile int32_t t20 = -1366;

	t20 = (x81==(x82^(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -1;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 735285;

	t21 = (x85==(x86^(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 35LLU;
	int32_t x90 = 0;
	uint32_t x91 = 6165099U;
	static uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = -215;

	t22 = (x89==(x90^(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x95 = 317U;
	uint64_t x96 = UINT64_MAX;
	int32_t t23 = -55617;

	t23 = (x93==(x94^(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 5996385U;
	int64_t x99 = INT64_MAX;
	volatile int16_t x100 = -15;
	volatile int32_t t24 = 117658641;

	t24 = (x97==(x98^(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x103 = 2282LL;
	uint16_t x104 = 21814U;
	int32_t t25 = -103;

	t25 = (x101==(x102^(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int8_t x107 = -1;
	uint32_t x108 = 1977U;
	volatile int32_t t26 = 638127209;

	t26 = (x105==(x106^(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 211;
	volatile int8_t x110 = -1;
	int16_t x111 = INT16_MAX;
	int16_t x112 = 399;
	volatile int32_t t27 = -20716;

	t27 = (x109==(x110^(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 22U;
	uint8_t x114 = 9U;
	static int64_t x115 = 9976446426976LL;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 14;

	t28 = (x113==(x114^(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x118 = 9;
	uint64_t x119 = 31761095205196179LLU;
	static uint32_t x120 = 239792175U;
	int32_t t29 = -133096257;

	t29 = (x117==(x118^(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	static volatile int32_t x123 = INT32_MAX;
	uint32_t x124 = 4848736U;
	int32_t t30 = -1;

	t30 = (x121==(x122^(x123<x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x125 = 436242123769573LLU;
	static uint32_t x126 = 1U;
	static int8_t x127 = INT8_MAX;
	int32_t t31 = 31832;

	t31 = (x125==(x126^(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint8_t x132 = 36U;
	static volatile int32_t t32 = -5363390;

	t32 = (x129==(x130^(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -2;
	static int16_t x135 = INT16_MAX;
	uint8_t x136 = UINT8_MAX;
	int32_t t33 = -13609252;

	t33 = (x133==(x134^(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	uint64_t x139 = 21012822LLU;
	volatile int16_t x140 = 1;
	volatile int32_t t34 = -128281;

	t34 = (x137==(x138^(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 30891U;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;

	t35 = (x141==(x142^(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 2U;
	static int32_t x146 = INT32_MAX;
	int32_t x147 = INT32_MIN;
	static int64_t x148 = 1280844320294186LL;

	t36 = (x145==(x146^(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile int32_t x150 = 1998724;
	int64_t x152 = 113LL;
	volatile int32_t t37 = -194;

	t37 = (x149==(x150^(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	static int32_t x154 = 0;
	uint16_t x155 = 2128U;
	int64_t x156 = 410915064753282865LL;

	t38 = (x153==(x154^(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = -9131992188418LL;
	uint64_t x158 = 12191LLU;
	int8_t x160 = -14;
	static volatile int32_t t39 = -327217;

	t39 = (x157==(x158^(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x161 = INT32_MAX;
	int8_t x162 = 19;
	int32_t x163 = -356467276;

	t40 = (x161==(x162^(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	static uint16_t x167 = 22353U;
	uint32_t x168 = 8U;
	int32_t t41 = -14673;

	t41 = (x165==(x166^(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x170 = -384;
	volatile int8_t x171 = -1;
	uint16_t x172 = 29894U;
	volatile int32_t t42 = -1;

	t42 = (x169==(x170^(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	static int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MAX;

	t43 = (x173==(x174^(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 320U;
	volatile uint32_t x178 = 51716335U;
	int64_t x179 = -1LL;
	volatile uint64_t x180 = 5280312LLU;

	t44 = (x177==(x178^(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int64_t x184 = -1LL;
	volatile int32_t t45 = 2583574;

	t45 = (x181==(x182^(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x187 = 623086349223LL;
	static int16_t x188 = INT16_MAX;

	t46 = (x185==(x186^(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = -3994549106250LL;
	int16_t x191 = INT16_MIN;
	int16_t x192 = 3;
	int32_t t47 = -669929;

	t47 = (x189==(x190^(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -736;
	int8_t x195 = -1;
	uint8_t x196 = 103U;

	t48 = (x193==(x194^(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = -1LL;
	int8_t x198 = 6;
	volatile int64_t x199 = -1LL;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 3551722;

	t49 = (x197==(x198^(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = 7426706LLU;
	static int32_t t50 = -78;

	t50 = (x201==(x202^(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x208 = -348546225521349619LL;

	t51 = (x205==(x206^(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = 496U;
	static volatile int64_t x211 = -1LL;

	t52 = (x209==(x210^(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x215 = -1;
	int64_t x216 = INT64_MAX;

	t53 = (x213==(x214^(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 194948;
	uint8_t x218 = 94U;
	int16_t x219 = INT16_MIN;
	static int8_t x220 = INT8_MIN;
	volatile int32_t t54 = 15;

	t54 = (x217==(x218^(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x224 = INT64_MIN;
	static volatile int32_t t55 = 31906202;

	t55 = (x221==(x222^(x223<x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = 1U;
	int32_t x226 = 374725292;
	uint16_t x228 = UINT16_MAX;

	t56 = (x225==(x226^(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	static int8_t x230 = INT8_MIN;
	uint32_t x231 = 0U;
	int32_t t57 = 1535662;

	t57 = (x229==(x230^(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	static volatile int8_t x235 = INT8_MAX;
	int32_t x236 = -202;

	t58 = (x233==(x234^(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	volatile uint64_t x239 = UINT64_MAX;
	int64_t x240 = -1LL;
	volatile int32_t t59 = -1072;

	t59 = (x237==(x238^(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 2868;
	static int32_t x242 = INT32_MAX;
	int8_t x243 = INT8_MIN;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 10896512;

	t60 = (x241==(x242^(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 772U;
	static int16_t x246 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = 745;

	t61 = (x245==(x246^(x247<x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	static volatile int8_t x250 = INT8_MAX;
	int32_t x252 = -188874188;
	static int32_t t62 = -3;

	t62 = (x249==(x250^(x251<x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 125U;
	int16_t x255 = INT16_MAX;
	static int64_t x256 = -1LL;
	volatile int32_t t63 = 0;

	t63 = (x253==(x254^(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint32_t x259 = 1722579U;
	int32_t t64 = 195;

	t64 = (x257==(x258^(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = INT16_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t65 = 73331;

	t65 = (x261==(x262^(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x266 = 11867U;
	uint8_t x267 = 42U;
	int16_t x268 = INT16_MIN;

	t66 = (x265==(x266^(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = UINT8_MAX;
	static uint32_t x270 = UINT32_MAX;
	static volatile int32_t x271 = -2961;
	static volatile uint32_t x272 = 3U;
	static int32_t t67 = 31724;

	t67 = (x269==(x270^(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 219U;
	int16_t x274 = -1;
	int32_t x275 = 8515414;
	int16_t x276 = -580;
	int32_t t68 = -171309767;

	t68 = (x273==(x274^(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int64_t x278 = 20118971739233539LL;
	uint8_t x279 = 5U;
	static int32_t x280 = -1;
	volatile int32_t t69 = 10;

	t69 = (x277==(x278^(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x281 = INT16_MIN;
	int64_t x282 = -641478486983LL;
	int16_t x283 = INT16_MIN;
	int32_t t70 = -20825;

	t70 = (x281==(x282^(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = 43;
	uint16_t x287 = 306U;

	t71 = (x285==(x286^(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = 1;
	volatile int8_t x291 = INT8_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	int32_t t72 = -72028671;

	t72 = (x289==(x290^(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	int64_t x294 = -50113615319181702LL;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = 17509U;
	volatile int32_t t73 = 15023393;

	t73 = (x293==(x294^(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 1877U;

	t74 = (x297==(x298^(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x303 = UINT16_MAX;
	volatile int32_t t75 = -548281122;

	t75 = (x301==(x302^(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 57068LL;
	uint8_t x306 = 44U;
	int64_t x307 = 29711LL;
	static int32_t x308 = 1422950;
	int32_t t76 = 10541;

	t76 = (x305==(x306^(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 1U;
	uint8_t x312 = 2U;
	static volatile int32_t t77 = 221;

	t77 = (x309==(x310^(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 5;
	uint8_t x316 = 42U;
	volatile int32_t t78 = 5;

	t78 = (x313==(x314^(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = 184046343;
	int32_t x318 = -1;
	static uint16_t x319 = 13U;
	static int32_t t79 = -1001217;

	t79 = (x317==(x318^(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint16_t x321 = 1513U;
	static uint32_t x322 = 80745U;
	int64_t x323 = INT64_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = 10643796;

	t80 = (x321==(x322^(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	static int8_t x326 = INT8_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t81 = 16539324;

	t81 = (x325==(x326^(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x331 = 659U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t82 = -58111244;

	t82 = (x329==(x330^(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 0;
	int8_t x334 = INT8_MIN;
	int8_t x335 = 2;
	uint32_t x336 = 1005395U;
	static int32_t t83 = 13;

	t83 = (x333==(x334^(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x337 = INT64_MIN;
	static int16_t x338 = INT16_MIN;
	int8_t x339 = -1;
	int32_t t84 = 112;

	t84 = (x337==(x338^(x339<x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = INT8_MAX;
	uint64_t x342 = 0LLU;
	int16_t x343 = 2;
	int32_t t85 = 1;

	t85 = (x341==(x342^(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 27289668661LLU;
	int16_t x346 = INT16_MIN;
	volatile int32_t x347 = INT32_MAX;
	int16_t x348 = INT16_MAX;
	volatile int32_t t86 = -152;

	t86 = (x345==(x346^(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 16U;
	int64_t x351 = -1652781LL;
	uint8_t x352 = 1U;
	int32_t t87 = 188572728;

	t87 = (x349==(x350^(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = 293846533244090870LL;
	static int32_t x355 = INT32_MIN;
	static int32_t t88 = -2969759;

	t88 = (x353==(x354^(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 84LLU;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MIN;
	static int32_t x360 = INT32_MIN;
	int32_t t89 = -1;

	t89 = (x357==(x358^(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -410132LL;
	int32_t x362 = -1;
	static uint32_t x363 = UINT32_MAX;
	int8_t x364 = INT8_MAX;
	static int32_t t90 = 103807;

	t90 = (x361==(x362^(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 166012LLU;
	uint8_t x366 = UINT8_MAX;
	int32_t t91 = 379400854;

	t91 = (x365==(x366^(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	uint64_t x370 = 3411969685458300LLU;
	uint8_t x371 = 2U;
	static int8_t x372 = INT8_MIN;
	static int32_t t92 = 44166748;

	t92 = (x369==(x370^(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 0;
	volatile int32_t t93 = 2;

	t93 = (x373==(x374^(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	volatile int16_t x378 = -12;
	static int32_t x379 = INT32_MIN;
	int64_t x380 = -58477492LL;
	static volatile int32_t t94 = -10246;

	t94 = (x377==(x378^(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = INT32_MAX;
	int8_t x382 = 1;
	volatile int16_t x383 = INT16_MIN;

	t95 = (x381==(x382^(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x385 = UINT64_MAX;
	int16_t x386 = -3;
	static uint16_t x387 = 86U;
	volatile int32_t t96 = 209431;

	t96 = (x385==(x386^(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 2U;
	int16_t x392 = -1;

	t97 = (x389==(x390^(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	int32_t x394 = INT32_MIN;
	volatile int8_t x395 = INT8_MAX;
	static int16_t x396 = 0;
	volatile int32_t t98 = -4;

	t98 = (x393==(x394^(x395<x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x398 = 11559943623LLU;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 17855645691LLU;
	static int32_t t99 = -12;

	t99 = (x397==(x398^(x399<x400)));

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

