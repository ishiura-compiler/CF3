#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x7 = UINT32_MAX;
volatile int64_t x11 = INT64_MIN;
uint64_t x14 = 1LLU;
int8_t x19 = -31;
int32_t x20 = 12;
static int32_t x23 = INT32_MAX;
uint8_t x25 = 124U;
volatile int64_t x27 = INT64_MIN;
uint64_t x29 = 734145LLU;
volatile int32_t t8 = -1403;
int64_t x44 = INT64_MAX;
uint64_t x47 = 4500LLU;
volatile int32_t t12 = 56180506;
uint32_t x55 = UINT32_MAX;
static int8_t x57 = 6;
volatile int8_t x58 = -3;
uint8_t x59 = 81U;
int8_t x61 = INT8_MIN;
int64_t x63 = -1LL;
int32_t t15 = 80846;
volatile int32_t t16 = -220;
int32_t x69 = INT32_MAX;
int64_t x70 = INT64_MAX;
static uint32_t x71 = UINT32_MAX;
int8_t x73 = INT8_MAX;
int16_t x74 = INT16_MAX;
int32_t t18 = 8108;
volatile int16_t x78 = INT16_MAX;
int8_t x82 = INT8_MIN;
int8_t x83 = INT8_MAX;
uint16_t x84 = 25745U;
int64_t x89 = -1LL;
static int64_t x95 = 1171LL;
static int16_t x104 = 15;
int64_t x107 = INT64_MIN;
volatile int64_t x109 = 7081324395924674LL;
int16_t x118 = INT16_MIN;
volatile int64_t x123 = INT64_MIN;
int16_t x125 = INT16_MAX;
int8_t x128 = INT8_MIN;
int16_t x130 = INT16_MIN;
uint64_t x132 = 26362LLU;
uint8_t x147 = 38U;
uint64_t x149 = 156115658093534LLU;
volatile int32_t t38 = 2;
static uint64_t x157 = UINT64_MAX;
uint32_t x159 = 675U;
int64_t x165 = -48694918098535708LL;
int64_t x166 = INT64_MIN;
int16_t x169 = INT16_MIN;
uint16_t x175 = 6U;
volatile int16_t x182 = INT16_MAX;
uint64_t x183 = 878296424LLU;
static int32_t t46 = 3624;
static uint8_t x191 = UINT8_MAX;
volatile int32_t t47 = 8153;
volatile int8_t x195 = 8;
volatile int8_t x200 = -1;
uint16_t x202 = 14U;
int32_t x215 = 54897;
static int32_t t54 = 44;
volatile uint16_t x221 = 8U;
volatile uint64_t x227 = UINT64_MAX;
int8_t x230 = -1;
int32_t x231 = -591238;
int8_t x235 = INT8_MIN;
static int32_t t58 = -3251248;
int64_t x242 = INT64_MIN;
uint64_t x243 = UINT64_MAX;
static int32_t x248 = 8;
int16_t x249 = 0;
int8_t x256 = INT8_MAX;
uint32_t x259 = 410519139U;
volatile int16_t x260 = 15877;
static volatile int32_t t64 = 39;
uint8_t x265 = 41U;
static uint64_t x267 = UINT64_MAX;
static int64_t x268 = INT64_MIN;
static int32_t t66 = -12729127;
int64_t x269 = INT64_MIN;
int16_t x273 = -554;
static int16_t x275 = 380;
uint8_t x276 = 50U;
volatile int16_t x278 = 1;
int32_t x287 = -3733;
int32_t x291 = INT32_MAX;
int8_t x293 = INT8_MAX;
int16_t x294 = -1;
int64_t x295 = -1LL;
uint8_t x302 = 0U;
static int64_t x310 = INT64_MAX;
static uint16_t x315 = 382U;
static int8_t x320 = INT8_MAX;
uint8_t x326 = UINT8_MAX;
volatile int32_t x331 = INT32_MAX;
volatile int32_t t82 = 132278699;
int8_t x337 = 0;
int16_t x339 = -247;
int32_t x340 = INT32_MIN;
static volatile int32_t x345 = -198780;
volatile uint32_t x350 = 22U;
volatile int32_t t87 = -214410869;
int32_t x354 = 82;
int8_t x355 = -1;
int8_t x356 = INT8_MIN;
static volatile int16_t x360 = -1;
int8_t x370 = -1;
int32_t x378 = -8674796;
uint16_t x381 = 5124U;
uint8_t x382 = UINT8_MAX;
uint64_t x387 = 9303843034381LLU;
volatile int8_t x389 = INT8_MAX;
uint32_t x390 = 0U;
uint64_t x396 = UINT64_MAX;
volatile uint16_t x398 = 1209U;


void f0(void) {
	static uint8_t x1 = 3U;
	int64_t x2 = -1LL;
	int32_t x3 = -214;
	int8_t x4 = -1;
	int32_t t0 = -590933122;

	t0 = (x1==(x2==(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x6 = 5704LLU;
	static int64_t x8 = INT64_MIN;
	int32_t t1 = -2;

	t1 = (x5==(x6==(x7<x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int16_t x10 = -3589;
	static int8_t x12 = -21;
	int32_t t2 = -827;

	t2 = (x9==(x10==(x11<x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	static int32_t x15 = INT32_MIN;
	volatile int8_t x16 = -1;
	int32_t t3 = -3;

	t3 = (x13==(x14==(x15<x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	static int64_t x18 = -1LL;
	int32_t t4 = -232151001;

	t4 = (x17==(x18==(x19<x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	static int64_t x22 = INT64_MIN;
	static uint64_t x24 = UINT64_MAX;
	int32_t t5 = -220;

	t5 = (x21==(x22==(x23<x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x26 = 6U;
	static uint16_t x28 = UINT16_MAX;
	static volatile int32_t t6 = -7910;

	t6 = (x25==(x26==(x27<x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x30 = 7057775019691075403LLU;
	static int8_t x31 = 14;
	uint16_t x32 = 0U;
	volatile int32_t t7 = -28780;

	t7 = (x29==(x30==(x31<x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 12U;
	int8_t x34 = INT8_MAX;
	static uint32_t x35 = UINT32_MAX;
	static int8_t x36 = INT8_MIN;

	t8 = (x33==(x34==(x35<x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = 4U;
	uint64_t x38 = 24945323190LLU;
	uint32_t x39 = 912639U;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 4312;

	t9 = (x37==(x38==(x39<x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x42 = -3;
	uint64_t x43 = 293174856174LLU;
	volatile int32_t t10 = -26082;

	t10 = (x41==(x42==(x43<x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -108901;
	int8_t x46 = INT8_MIN;
	static volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = -81;

	t11 = (x45==(x46==(x47<x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	int32_t x50 = INT32_MAX;
	int8_t x51 = -2;
	uint16_t x52 = UINT16_MAX;

	t12 = (x49==(x50==(x51<x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	uint8_t x54 = 54U;
	int64_t x56 = INT64_MAX;
	static volatile int32_t t13 = 0;

	t13 = (x53==(x54==(x55<x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x60 = 6119347U;
	int32_t t14 = -38;

	t14 = (x57==(x58==(x59<x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = -244908575243LL;
	int64_t x64 = INT64_MIN;

	t15 = (x61==(x62==(x63<x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 275U;
	volatile int32_t x66 = INT32_MIN;
	int16_t x67 = -1;
	uint32_t x68 = 11908U;

	t16 = (x65==(x66==(x67<x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x72 = INT16_MAX;
	static int32_t t17 = -6;

	t17 = (x69==(x70==(x71<x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 2U;
	int8_t x76 = INT8_MAX;

	t18 = (x73==(x74==(x75<x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 825;
	int8_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = 100531;

	t19 = (x77==(x78==(x79<x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int32_t t20 = 549921;

	t20 = (x81==(x82==(x83<x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x85 = 21LLU;
	static int8_t x86 = INT8_MIN;
	static uint32_t x87 = 25426U;
	int64_t x88 = INT64_MIN;
	int32_t t21 = 689;

	t21 = (x85==(x86==(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int64_t x90 = 167026994964967LL;
	static int32_t x91 = INT32_MAX;
	int64_t x92 = INT64_MAX;
	int32_t t22 = 0;

	t22 = (x89==(x90==(x91<x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -51;
	static volatile uint8_t x94 = UINT8_MAX;
	uint64_t x96 = 190726313919601LLU;
	int32_t t23 = -5;

	t23 = (x93==(x94==(x95<x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	int64_t x98 = -1LL;
	static int8_t x99 = -2;
	uint8_t x100 = 35U;
	int32_t t24 = -29;

	t24 = (x97==(x98==(x99<x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 247170035U;
	static int16_t x102 = -1;
	uint64_t x103 = 6525717468LLU;
	volatile int32_t t25 = -125298640;

	t25 = (x101==(x102==(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 154U;
	uint64_t x106 = UINT64_MAX;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = -9856;

	t26 = (x105==(x106==(x107<x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = -1;
	int16_t x111 = INT16_MIN;
	static uint8_t x112 = 19U;
	int32_t t27 = 3;

	t27 = (x109==(x110==(x111<x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -68LL;
	static volatile int32_t x114 = -13094;
	uint16_t x115 = 4U;
	uint8_t x116 = 3U;
	static int32_t t28 = 1607966;

	t28 = (x113==(x114==(x115<x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x119 = -15;
	static int16_t x120 = INT16_MIN;
	int32_t t29 = 17491;

	t29 = (x117==(x118==(x119<x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 752682384340LLU;
	uint8_t x122 = UINT8_MAX;
	static uint64_t x124 = 7912756728LLU;
	volatile int32_t t30 = 2083342;

	t30 = (x121==(x122==(x123<x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x126 = 7U;
	volatile uint64_t x127 = 0LLU;
	int32_t t31 = 2865949;

	t31 = (x125==(x126==(x127<x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	volatile uint16_t x131 = 25U;
	int32_t t32 = -1;

	t32 = (x129==(x130==(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	int16_t x134 = INT16_MAX;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t33 = -356;

	t33 = (x133==(x134==(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	static uint32_t x138 = 473U;
	int16_t x139 = INT16_MIN;
	uint32_t x140 = UINT32_MAX;
	static volatile int32_t t34 = 4258531;

	t34 = (x137==(x138==(x139<x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = 13U;
	uint32_t x143 = UINT32_MAX;
	volatile uint16_t x144 = 20U;
	int32_t t35 = -1;

	t35 = (x141==(x142==(x143<x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 13U;
	volatile int16_t x146 = -1;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 2088070;

	t36 = (x145==(x146==(x147<x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x150 = 15U;
	volatile int64_t x151 = INT64_MIN;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -7;

	t37 = (x149==(x150==(x151<x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = UINT64_MAX;
	uint16_t x154 = 5U;
	int8_t x155 = INT8_MIN;
	static int8_t x156 = 43;

	t38 = (x153==(x154==(x155<x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = 66995920LL;
	int32_t x160 = -8;
	volatile int32_t t39 = 30794;

	t39 = (x157==(x158==(x159<x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 3079827U;
	uint64_t x162 = 10922940LLU;
	int64_t x163 = INT64_MAX;
	int16_t x164 = -1;
	int32_t t40 = 109206;

	t40 = (x161==(x162==(x163<x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x167 = INT8_MAX;
	uint32_t x168 = UINT32_MAX;
	int32_t t41 = -75450892;

	t41 = (x165==(x166==(x167<x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x170 = UINT64_MAX;
	static int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -149;

	t42 = (x169==(x170==(x171<x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	static volatile int16_t x174 = -7;
	volatile uint64_t x176 = UINT64_MAX;
	static int32_t t43 = 1;

	t43 = (x173==(x174==(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	int8_t x178 = 12;
	uint32_t x179 = 1403U;
	int32_t x180 = INT32_MIN;
	int32_t t44 = 12;

	t44 = (x177==(x178==(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t45 = -5252;

	t45 = (x181==(x182==(x183<x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MAX;
	int8_t x186 = -1;
	int32_t x187 = 1017119821;
	int8_t x188 = -1;

	t46 = (x185==(x186==(x187<x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	uint64_t x190 = 14706122359LLU;
	int8_t x192 = 15;

	t47 = (x189==(x190==(x191<x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int8_t x194 = -1;
	int32_t x196 = INT32_MIN;
	int32_t t48 = 51;

	t48 = (x193==(x194==(x195<x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MAX;
	volatile uint16_t x199 = UINT16_MAX;
	int32_t t49 = -2453030;

	t49 = (x197==(x198==(x199<x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	uint8_t x203 = UINT8_MAX;
	volatile int64_t x204 = INT64_MIN;
	static int32_t t50 = -6;

	t50 = (x201==(x202==(x203<x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x205 = UINT8_MAX;
	static volatile int32_t x206 = 31;
	int8_t x207 = -1;
	volatile uint16_t x208 = 890U;
	volatile int32_t t51 = -2114;

	t51 = (x205==(x206==(x207<x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	int16_t x212 = 15451;
	int32_t t52 = -942337608;

	t52 = (x209==(x210==(x211<x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static uint32_t x214 = UINT32_MAX;
	volatile uint32_t x216 = 576U;
	volatile int32_t t53 = 5119;

	t53 = (x213==(x214==(x215<x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 21U;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = 7U;
	int8_t x220 = 0;

	t54 = (x217==(x218==(x219<x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = 1U;
	int32_t x223 = 32363107;
	volatile int32_t x224 = -3;
	volatile int32_t t55 = -60;

	t55 = (x221==(x222==(x223<x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1198690LLU;
	static int16_t x226 = INT16_MIN;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t56 = -15102;

	t56 = (x225==(x226==(x227<x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	static int16_t x232 = INT16_MAX;
	int32_t t57 = 993;

	t57 = (x229==(x230==(x231<x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint32_t x234 = 2070U;
	volatile int32_t x236 = -1;

	t58 = (x233==(x234==(x235<x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -126661024574LL;
	int64_t x239 = 523171048744637775LL;
	uint64_t x240 = 187LLU;
	volatile int32_t t59 = -1647;

	t59 = (x237==(x238==(x239<x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static int16_t x244 = 1;
	volatile int32_t t60 = 14770;

	t60 = (x241==(x242==(x243<x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 0;
	uint64_t x246 = UINT64_MAX;
	static volatile uint32_t x247 = UINT32_MAX;
	static volatile int32_t t61 = -1651;

	t61 = (x245==(x246==(x247<x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 9529374524539LLU;
	int32_t x251 = INT32_MAX;
	volatile int32_t x252 = -1;
	volatile int32_t t62 = 18831;

	t62 = (x249==(x250==(x251<x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x253 = 1544U;
	uint8_t x254 = 32U;
	static uint16_t x255 = 24604U;
	static int32_t t63 = -6;

	t63 = (x253==(x254==(x255<x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	uint8_t x258 = 98U;

	t64 = (x257==(x258==(x259<x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = 104;
	int8_t x263 = INT8_MIN;
	int8_t x264 = -1;
	volatile int32_t t65 = 270;

	t65 = (x261==(x262==(x263<x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = 396557608;

	t66 = (x265==(x266==(x267<x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	volatile uint16_t x271 = 1U;
	volatile uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 4068;

	t67 = (x269==(x270==(x271<x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	static volatile int32_t t68 = -25891;

	t68 = (x273==(x274==(x275<x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x277 = 30U;
	volatile uint8_t x279 = UINT8_MAX;
	uint8_t x280 = 4U;
	int32_t t69 = -542417104;

	t69 = (x277==(x278==(x279<x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -1;
	int32_t x282 = INT32_MIN;
	uint32_t x283 = 1787349449U;
	int64_t x284 = -1LL;
	int32_t t70 = 7512571;

	t70 = (x281==(x282==(x283<x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -35LL;
	uint8_t x286 = 47U;
	int16_t x288 = -1;
	int32_t t71 = -3837781;

	t71 = (x285==(x286==(x287<x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	uint64_t x292 = 1140LLU;
	int32_t t72 = 0;

	t72 = (x289==(x290==(x291<x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x296 = INT32_MAX;
	volatile int32_t t73 = -4;

	t73 = (x293==(x294==(x295<x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 76718679LLU;
	int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;
	volatile int32_t t74 = 1;

	t74 = (x297==(x298==(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -17844126495114LL;
	uint32_t x303 = 704963U;
	static volatile int32_t x304 = INT32_MIN;
	int32_t t75 = 5;

	t75 = (x301==(x302==(x303<x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = UINT8_MAX;
	volatile int32_t x307 = 26131807;
	volatile uint32_t x308 = 1468U;
	static int32_t t76 = 1395;

	t76 = (x305==(x306==(x307<x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static int8_t x311 = INT8_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t77 = -60;

	t77 = (x309==(x310==(x311<x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	static int16_t x314 = INT16_MAX;
	static uint32_t x316 = 226768099U;
	int32_t t78 = -778443898;

	t78 = (x313==(x314==(x315<x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	uint32_t x318 = 31171U;
	int32_t x319 = -1;
	volatile int32_t t79 = 1662150;

	t79 = (x317==(x318==(x319<x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 27590526310985LLU;
	static uint8_t x322 = 0U;
	static uint16_t x323 = 6U;
	int8_t x324 = -1;
	int32_t t80 = 0;

	t80 = (x321==(x322==(x323<x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MAX;
	uint32_t x327 = 15945U;
	int8_t x328 = -1;
	int32_t t81 = -117802;

	t81 = (x325==(x326==(x327<x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -15;
	static int32_t x330 = 1;
	static int64_t x332 = INT64_MIN;

	t82 = (x329==(x330==(x331<x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	int32_t x334 = INT32_MIN;
	volatile int32_t x335 = INT32_MIN;
	static int32_t x336 = -1;
	int32_t t83 = 27642;

	t83 = (x333==(x334==(x335<x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	int32_t t84 = -665560;

	t84 = (x337==(x338==(x339<x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 1851;

	t85 = (x341==(x342==(x343<x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x346 = -7;
	static int8_t x347 = -3;
	int16_t x348 = -11;
	volatile int32_t t86 = -2311203;

	t86 = (x345==(x346==(x347<x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -1;
	int16_t x351 = -1;
	uint8_t x352 = UINT8_MAX;

	t87 = (x349==(x350==(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static volatile int32_t t88 = 810547948;

	t88 = (x353==(x354==(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	volatile int8_t x358 = -8;
	int32_t x359 = -317434525;
	int32_t t89 = 1955;

	t89 = (x357==(x358==(x359<x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	static uint32_t x362 = 1310286068U;
	int8_t x363 = INT8_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	static int32_t t90 = -269000494;

	t90 = (x361==(x362==(x363<x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 74786674U;
	int32_t x366 = INT32_MIN;
	int16_t x367 = -18;
	volatile uint64_t x368 = UINT64_MAX;
	volatile int32_t t91 = -38615722;

	t91 = (x365==(x366==(x367<x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 27298755418159LL;
	int8_t x371 = 53;
	uint32_t x372 = 10U;
	int32_t t92 = -200033;

	t92 = (x369==(x370==(x371<x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x373 = -1;
	uint8_t x374 = 47U;
	int64_t x375 = INT64_MAX;
	static volatile uint8_t x376 = 0U;
	int32_t t93 = -863065;

	t93 = (x373==(x374==(x375<x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 7LLU;
	static int8_t x379 = 5;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 0;

	t94 = (x377==(x378==(x379<x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x383 = 31U;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 6;

	t95 = (x381==(x382==(x383<x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	volatile int16_t x388 = -3;
	volatile int32_t t96 = 39385;

	t96 = (x385==(x386==(x387<x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x391 = INT8_MIN;
	int16_t x392 = 0;
	static int32_t t97 = 44;

	t97 = (x389==(x390==(x391<x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint8_t x394 = 0U;
	static volatile int16_t x395 = -1187;
	int32_t t98 = 1;

	t98 = (x393==(x394==(x395<x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x397 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MAX;
	static int32_t t99 = -299;

	t99 = (x397==(x398==(x399<x400)));

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

