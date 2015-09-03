#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x14 = -1LL;
static int8_t x22 = INT8_MIN;
static int32_t x23 = INT32_MAX;
int32_t x29 = INT32_MIN;
static int32_t x41 = -18982;
uint32_t x43 = 540678U;
static uint32_t x44 = UINT32_MAX;
static uint16_t x53 = UINT16_MAX;
int32_t x63 = INT32_MIN;
int64_t x68 = -1LL;
static int16_t x72 = INT16_MAX;
int32_t t17 = -30466;
volatile int64_t t18 = 494371386110LL;
int64_t x85 = -1LL;
int8_t x89 = -7;
volatile int32_t x91 = INT32_MIN;
volatile uint8_t x93 = 7U;
uint8_t x94 = 0U;
int32_t x98 = 727;
uint8_t x104 = UINT8_MAX;
uint64_t x113 = 271293913492202315LLU;
volatile int8_t x117 = INT8_MIN;
int64_t x128 = INT64_MIN;
static int32_t t29 = 488315;
int64_t x133 = INT64_MAX;
int8_t x134 = INT8_MIN;
int32_t x136 = INT32_MIN;
int32_t x138 = 20257;
int32_t t33 = -3006869;
uint8_t x160 = 59U;
int64_t x161 = INT64_MIN;
volatile int32_t x162 = -551;
int32_t t39 = -1;
int16_t x176 = -169;
int16_t x177 = 3783;
volatile uint8_t x184 = 3U;
int32_t x186 = INT32_MIN;
int32_t x187 = 321629;
volatile int32_t t44 = -3;
static volatile int16_t x190 = INT16_MIN;
uint64_t x200 = UINT64_MAX;
static volatile uint8_t x203 = 0U;
int16_t x212 = INT16_MIN;
uint16_t x217 = 75U;
int32_t x219 = 517386248;
volatile int32_t t52 = -266128;
int8_t x235 = 13;
static int16_t x240 = -1;
int32_t x245 = 3502;
volatile uint16_t x246 = 811U;
int16_t x252 = INT16_MIN;
volatile int32_t t59 = -27195590;
uint32_t x260 = 199842688U;
volatile int32_t t60 = 106072;
static int16_t x262 = INT16_MIN;
int16_t x263 = 0;
int16_t x268 = -4928;
int64_t x271 = -1LL;
int16_t x273 = -1;
volatile int32_t t64 = 883;
int64_t x277 = INT64_MAX;
int64_t x281 = INT64_MIN;
uint8_t x283 = UINT8_MAX;
volatile int8_t x294 = INT8_MIN;
volatile int32_t t69 = 6951022;
int8_t x299 = -1;
volatile int32_t t73 = -1675;
int64_t x326 = -1LL;
uint64_t x330 = 476249LLU;
volatile int16_t x335 = 2;
int8_t x343 = 2;
int16_t x348 = -1;
int64_t x361 = INT64_MAX;
int64_t x362 = -57652906371LL;
int32_t x368 = INT32_MIN;
uint32_t x378 = UINT32_MAX;
static uint16_t x389 = UINT16_MAX;
volatile int16_t x393 = -1;
static volatile int32_t t93 = 224;
int32_t x397 = INT32_MAX;
int8_t x398 = -1;
uint8_t x401 = 10U;
int32_t x409 = -1;
static int16_t x414 = INT16_MAX;


void f0(void) {
	uint32_t x1 = 967U;
	volatile int64_t x2 = INT64_MAX;
	int8_t x3 = -1;
	int16_t x4 = 2;
	static uint32_t t0 = 71829U;

	t0 = (x1&(x2<=(x3/x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int16_t x6 = 2;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 10;
	int32_t t1 = 3198;

	t1 = (x5&(x6<=(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	uint16_t x10 = 498U;
	uint64_t x11 = 22058711307146210LLU;
	uint32_t x12 = UINT32_MAX;
	volatile int32_t t2 = -25613455;

	t2 = (x9&(x10<=(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -57331682LL;
	int8_t x15 = INT8_MAX;
	int32_t x16 = INT32_MIN;
	volatile int64_t t3 = 48597145053928081LL;

	t3 = (x13&(x14<=(x15/x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	static uint8_t x18 = UINT8_MAX;
	int16_t x19 = -989;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -33257160;

	t4 = (x17&(x18<=(x19/x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	static uint64_t x24 = 223149873588535LLU;
	uint32_t t5 = 12166339U;

	t5 = (x21&(x22<=(x23/x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static volatile int16_t x26 = 0;
	int8_t x27 = -1;
	int8_t x28 = INT8_MAX;
	int32_t t6 = 633;

	t6 = (x25&(x26<=(x27/x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -56792;
	int64_t x31 = INT64_MAX;
	int64_t x32 = INT64_MAX;
	volatile int32_t t7 = 376237;

	t7 = (x29&(x30<=(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	volatile int32_t x38 = INT32_MAX;
	static uint32_t x39 = UINT32_MAX;
	volatile int32_t x40 = INT32_MIN;
	uint64_t t8 = 17248836886908044LLU;

	t8 = (x37&(x38<=(x39/x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x42 = UINT8_MAX;
	volatile int32_t t9 = 387176;

	t9 = (x41&(x42<=(x43/x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	uint64_t x46 = 172450525995964457LLU;
	volatile uint64_t x47 = 3490585741016LLU;
	volatile int64_t x48 = -1LL;
	static int32_t t10 = 1700;

	t10 = (x45&(x46<=(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	static uint8_t x50 = 0U;
	uint16_t x51 = UINT16_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -15703;

	t11 = (x49&(x50<=(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x54 = UINT64_MAX;
	uint8_t x55 = 4U;
	int64_t x56 = 15319713467786476LL;
	int32_t t12 = -210080936;

	t12 = (x53&(x54<=(x55/x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	uint64_t x58 = 601389246LLU;
	int32_t x59 = -1;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t13 = 0LL;

	t13 = (x57&(x58<=(x59/x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 5885859U;
	uint32_t x62 = UINT32_MAX;
	volatile int16_t x64 = 541;
	volatile uint32_t t14 = 13140195U;

	t14 = (x61&(x62<=(x63/x64)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = 887;
	int16_t x66 = INT16_MIN;
	uint8_t x67 = 18U;
	int32_t t15 = 2487;

	t15 = (x65&(x66<=(x67/x68)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = 0LLU;
	volatile int32_t t16 = 6834046;

	t16 = (x69&(x70<=(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -4;
	int16_t x74 = -1;
	uint16_t x75 = UINT16_MAX;
	static uint64_t x76 = UINT64_MAX;

	t17 = (x73&(x74<=(x75/x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MIN;
	uint32_t x78 = 177U;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 85U;

	t18 = (x77&(x78<=(x79/x80)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	uint8_t x82 = UINT8_MAX;
	int32_t x83 = -568;
	int16_t x84 = INT16_MIN;
	volatile int64_t t19 = 94LL;

	t19 = (x81&(x82<=(x83/x84)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x86 = 799289U;
	int64_t x87 = 2004609797235153LL;
	volatile int64_t x88 = INT64_MIN;
	static int64_t t20 = 21LL;

	t20 = (x85&(x86<=(x87/x88)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -1LL;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t21 = -78;

	t21 = (x89&(x90<=(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x95 = 0U;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = -182736795;

	t22 = (x93&(x94<=(x95/x96)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 3U;
	static uint8_t x99 = 7U;
	volatile uint32_t x100 = UINT32_MAX;
	uint32_t t23 = 308977U;

	t23 = (x97&(x98<=(x99/x100)));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = 6;
	int8_t x103 = INT8_MAX;
	static volatile int32_t t24 = -192485304;

	t24 = (x101&(x102<=(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = INT64_MIN;
	volatile uint16_t x106 = UINT16_MAX;
	int16_t x107 = 245;
	static volatile int64_t x108 = INT64_MIN;
	int64_t t25 = -147LL;

	t25 = (x105&(x106<=(x107/x108)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	uint8_t x110 = 107U;
	uint8_t x111 = UINT8_MAX;
	static int64_t x112 = INT64_MAX;
	int64_t t26 = -356LL;

	t26 = (x109&(x110<=(x111/x112)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x114 = 3149U;
	uint32_t x115 = 6U;
	volatile int8_t x116 = -1;
	volatile uint64_t t27 = 1487688624181109LLU;

	t27 = (x113&(x114<=(x115/x116)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = -1LL;
	volatile int32_t x119 = INT32_MAX;
	int32_t x120 = -1;
	volatile int32_t t28 = 0;

	t28 = (x117&(x118<=(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	uint16_t x127 = UINT16_MAX;

	t29 = (x125&(x126<=(x127/x128)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	volatile int64_t x131 = -1LL;
	volatile int16_t x132 = -1;
	static int32_t t30 = 48233;

	t30 = (x129&(x130<=(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x135 = INT32_MAX;
	static volatile int64_t t31 = 1831570111520LL;

	t31 = (x133&(x134<=(x135/x136)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x137 = 52590710837LLU;
	static int64_t x139 = 2145670722221880LL;
	static uint32_t x140 = 249870U;
	static volatile uint64_t t32 = 79312151863LLU;

	t32 = (x137&(x138<=(x139/x140)));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x141 = -1;
	volatile int16_t x142 = -146;
	int8_t x143 = INT8_MIN;
	volatile int8_t x144 = INT8_MAX;

	t33 = (x141&(x142<=(x143/x144)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 24U;
	uint32_t x146 = 132073U;
	int8_t x147 = -1;
	volatile int64_t x148 = INT64_MIN;
	int32_t t34 = 9137;

	t34 = (x145&(x146<=(x147/x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x149 = INT16_MAX;
	int64_t x150 = INT64_MIN;
	int8_t x151 = INT8_MIN;
	volatile int8_t x152 = -14;
	int32_t t35 = 1334;

	t35 = (x149&(x150<=(x151/x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x153 = INT64_MIN;
	int16_t x154 = 1329;
	uint16_t x155 = 10U;
	static int32_t x156 = -435;
	int64_t t36 = 933811058LL;

	t36 = (x153&(x154<=(x155/x156)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	int32_t x158 = INT32_MAX;
	int8_t x159 = INT8_MIN;
	static int32_t t37 = -4770507;

	t37 = (x157&(x158<=(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = INT64_MAX;
	static int64_t t38 = 28050LL;

	t38 = (x161&(x162<=(x163/x164)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x165 = 116029;
	uint16_t x166 = 3925U;
	static int32_t x167 = -2029435;
	int32_t x168 = INT32_MIN;

	t39 = (x165&(x166<=(x167/x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MAX;
	int64_t x170 = 454082042904559LL;
	int8_t x171 = INT8_MIN;
	volatile uint16_t x172 = 7U;
	int32_t t40 = -21;

	t40 = (x169&(x170<=(x171/x172)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = INT8_MIN;
	static uint8_t x174 = 30U;
	int16_t x175 = -1;
	int32_t t41 = -348009;

	t41 = (x173&(x174<=(x175/x176)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = 141;
	int32_t x180 = INT32_MIN;
	volatile int32_t t42 = -780;

	t42 = (x177&(x178<=(x179/x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MIN;
	volatile int64_t x182 = -5562LL;
	int32_t x183 = -1;
	static int64_t t43 = 373LL;

	t43 = (x181&(x182<=(x183/x184)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x185 = INT8_MIN;
	volatile uint16_t x188 = 28U;

	t44 = (x185&(x186<=(x187/x188)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = 96364854545817966LLU;
	int16_t x191 = INT16_MAX;
	static volatile uint16_t x192 = 99U;
	uint64_t t45 = 27598805366LLU;

	t45 = (x189&(x190<=(x191/x192)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x193 = 6557U;
	uint8_t x194 = UINT8_MAX;
	int8_t x195 = -1;
	uint8_t x196 = 86U;
	int32_t t46 = -32362;

	t46 = (x193&(x194<=(x195/x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 2U;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	volatile int32_t t47 = 58;

	t47 = (x197&(x198<=(x199/x200)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MAX;
	int64_t x202 = INT64_MIN;
	int64_t x204 = -1LL;
	int32_t t48 = -1;

	t48 = (x201&(x202<=(x203/x204)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MAX;
	uint8_t x211 = 64U;
	volatile int32_t t49 = 0;

	t49 = (x209&(x210<=(x211/x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 19U;
	static volatile int8_t x214 = INT8_MIN;
	int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MAX;
	static int32_t t50 = -6671;

	t50 = (x213&(x214<=(x215/x216)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x218 = 26757126991071882LLU;
	uint16_t x220 = 32296U;
	int32_t t51 = -8603;

	t51 = (x217&(x218<=(x219/x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 0U;
	uint64_t x226 = 116LLU;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = 2563;

	t52 = (x225&(x226<=(x227/x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x229 = INT16_MIN;
	int8_t x230 = -1;
	static int32_t x231 = 275;
	static volatile int16_t x232 = 1946;
	volatile int32_t t53 = 4912948;

	t53 = (x229&(x230<=(x231/x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	int16_t x234 = INT16_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t54 = 8010;

	t54 = (x233&(x234<=(x235/x236)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x237 = -27755815LL;
	uint32_t x238 = 23571796U;
	int16_t x239 = INT16_MIN;
	volatile int64_t t55 = 6511600897096LL;

	t55 = (x237&(x238<=(x239/x240)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	volatile int64_t x243 = INT64_MAX;
	volatile int16_t x244 = 6;
	int64_t t56 = 0LL;

	t56 = (x241&(x242<=(x243/x244)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x247 = -142;
	volatile int32_t x248 = INT32_MAX;
	int32_t t57 = 1352954;

	t57 = (x245&(x246<=(x247/x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -1;
	static uint64_t x250 = UINT64_MAX;
	int16_t x251 = -1;
	int32_t t58 = -1;

	t58 = (x249&(x250<=(x251/x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = 0;
	uint8_t x255 = 0U;
	int64_t x256 = 99034LL;

	t59 = (x253&(x254<=(x255/x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = 6056731;
	int8_t x258 = -22;
	int8_t x259 = INT8_MIN;

	t60 = (x257&(x258<=(x259/x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1;
	static int32_t x264 = 265219162;
	int32_t t61 = 1055130599;

	t61 = (x261&(x262<=(x263/x264)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x265 = -184;
	static int64_t x266 = INT64_MIN;
	int16_t x267 = -1;
	int32_t t62 = -507;

	t62 = (x265&(x266<=(x267/x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1LL;
	static uint8_t x270 = 4U;
	static uint16_t x272 = 1167U;
	volatile int64_t t63 = 480977636LL;

	t63 = (x269&(x270<=(x271/x272)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x274 = 14U;
	volatile uint64_t x275 = 534LLU;
	int16_t x276 = -1;

	t64 = (x273&(x274<=(x275/x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	static uint32_t x280 = 31622U;
	static int64_t t65 = 69624LL;

	t65 = (x277&(x278<=(x279/x280)));

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x282 = -3855342;
	volatile int8_t x284 = 3;
	int64_t t66 = 625LL;

	t66 = (x281&(x282<=(x283/x284)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MAX;
	int32_t x288 = 59;
	volatile int32_t t67 = 3;

	t67 = (x285&(x286<=(x287/x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = INT64_MIN;
	static volatile int64_t x290 = INT64_MAX;
	int64_t x291 = -1LL;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t68 = -637030LL;

	t68 = (x289&(x290<=(x291/x292)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -3611;
	uint64_t x295 = 142118LLU;
	int32_t x296 = INT32_MIN;

	t69 = (x293&(x294<=(x295/x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -926;
	uint64_t x298 = 4673899072674746LLU;
	uint64_t x300 = 33084181617LLU;
	int32_t t70 = 132537;

	t70 = (x297&(x298<=(x299/x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x301 = 21151U;
	static int64_t x302 = INT64_MIN;
	volatile int32_t x303 = INT32_MIN;
	int64_t x304 = INT64_MAX;
	volatile int32_t t71 = -1001;

	t71 = (x301&(x302<=(x303/x304)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MAX;
	volatile int32_t x306 = -10981282;
	int8_t x307 = INT8_MIN;
	static volatile uint16_t x308 = UINT16_MAX;
	volatile int32_t t72 = 93;

	t72 = (x305&(x306<=(x307/x308)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MAX;
	static volatile uint8_t x311 = UINT8_MAX;
	volatile uint64_t x312 = UINT64_MAX;

	t73 = (x309&(x310<=(x311/x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = 24;
	uint64_t x314 = UINT64_MAX;
	volatile int16_t x315 = 5109;
	volatile int64_t x316 = 1406703LL;
	int32_t t74 = -15128303;

	t74 = (x313&(x314<=(x315/x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	static int64_t x320 = INT64_MAX;
	volatile int32_t t75 = 115;

	t75 = (x317&(x318<=(x319/x320)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x321 = INT32_MAX;
	volatile int32_t x322 = -411161610;
	static int8_t x323 = INT8_MAX;
	volatile uint32_t x324 = 35393568U;
	volatile int32_t t76 = 4109679;

	t76 = (x321&(x322<=(x323/x324)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x325 = 4516LLU;
	uint32_t x327 = 16U;
	int32_t x328 = INT32_MIN;
	uint64_t t77 = 27617LLU;

	t77 = (x325&(x326<=(x327/x328)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x329 = UINT8_MAX;
	uint16_t x331 = 13U;
	int8_t x332 = -1;
	volatile int32_t t78 = -307618967;

	t78 = (x329&(x330<=(x331/x332)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x333 = UINT32_MAX;
	static int32_t x334 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	volatile uint32_t t79 = 697U;

	t79 = (x333&(x334<=(x335/x336)));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = -410;
	int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MIN;
	volatile int32_t t80 = 7;

	t80 = (x337&(x338<=(x339/x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x341 = INT64_MAX;
	static int32_t x342 = INT32_MIN;
	int32_t x344 = INT32_MIN;
	int64_t t81 = -394052007253230347LL;

	t81 = (x341&(x342<=(x343/x344)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	volatile uint64_t x347 = UINT64_MAX;
	volatile int32_t t82 = 4630;

	t82 = (x345&(x346<=(x347/x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MIN;
	static uint16_t x350 = UINT16_MAX;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = 5499;
	int32_t t83 = 289;

	t83 = (x349&(x350<=(x351/x352)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x353 = 1692LLU;
	volatile uint32_t x354 = UINT32_MAX;
	uint8_t x355 = UINT8_MAX;
	uint16_t x356 = 34U;
	static uint64_t t84 = 8478LLU;

	t84 = (x353&(x354<=(x355/x356)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x357 = 263536859U;
	uint32_t x358 = 1611068722U;
	volatile uint64_t x359 = 411700161582561907LLU;
	int32_t x360 = INT32_MAX;
	static uint32_t t85 = 3U;

	t85 = (x357&(x358<=(x359/x360)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x363 = INT32_MAX;
	volatile uint8_t x364 = 1U;
	volatile int64_t t86 = -40579608294859LL;

	t86 = (x361&(x362<=(x363/x364)));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = -1LL;
	int16_t x367 = INT16_MAX;
	volatile int32_t t87 = -18010234;

	t87 = (x365&(x366<=(x367/x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x369 = 7U;
	int8_t x370 = INT8_MIN;
	volatile int32_t x371 = -1;
	int32_t x372 = -1;
	volatile int32_t t88 = 599036652;

	t88 = (x369&(x370<=(x371/x372)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = 21690U;
	int64_t x379 = INT64_MIN;
	int64_t x380 = -13LL;
	int32_t t89 = -2575;

	t89 = (x377&(x378<=(x379/x380)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x381 = -1LL;
	int64_t x382 = 134449LL;
	int8_t x383 = INT8_MAX;
	static volatile int32_t x384 = INT32_MAX;
	volatile int64_t t90 = 26648502975LL;

	t90 = (x381&(x382<=(x383/x384)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x385 = 2489;
	static uint16_t x386 = UINT16_MAX;
	volatile int32_t x387 = 54443;
	int8_t x388 = -1;
	volatile int32_t t91 = 24;

	t91 = (x385&(x386<=(x387/x388)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x390 = 1;
	static int64_t x391 = INT64_MIN;
	int16_t x392 = 1239;
	volatile int32_t t92 = -332371;

	t92 = (x389&(x390<=(x391/x392)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x394 = 3675U;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = -1;

	t93 = (x393&(x394<=(x395/x396)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x399 = INT8_MAX;
	static int8_t x400 = INT8_MIN;
	int32_t t94 = 0;

	t94 = (x397&(x398<=(x399/x400)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x402 = 14U;
	uint32_t x403 = UINT32_MAX;
	volatile int8_t x404 = -1;
	static volatile int32_t t95 = -12;

	t95 = (x401&(x402<=(x403/x404)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = 2548838;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 397U;
	int32_t t96 = 1003;

	t96 = (x405&(x406<=(x407/x408)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x410 = INT8_MIN;
	uint64_t x411 = 1228754LLU;
	int8_t x412 = -1;
	volatile int32_t t97 = -3;

	t97 = (x409&(x410<=(x411/x412)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	int64_t x416 = 154382695327LL;
	volatile int32_t t98 = 5023152;

	t98 = (x413&(x414<=(x415/x416)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = 49819824;
	int8_t x418 = INT8_MIN;
	int32_t x419 = 20;
	uint32_t x420 = 6U;
	static volatile int32_t t99 = -1;

	t99 = (x417&(x418<=(x419/x420)));

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

