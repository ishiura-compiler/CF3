#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x14 = -1;
volatile int8_t x23 = INT8_MIN;
volatile int16_t x30 = INT16_MIN;
int8_t x32 = INT8_MIN;
int16_t x33 = 1120;
int8_t x34 = INT8_MIN;
volatile int8_t x35 = -1;
int32_t t7 = -673221;
static volatile int8_t x38 = -26;
uint16_t x41 = UINT16_MAX;
uint64_t x43 = UINT64_MAX;
uint16_t x52 = 72U;
int64_t t11 = 82785LL;
volatile uint32_t x60 = UINT32_MAX;
uint32_t t13 = 49443950U;
uint32_t x62 = 183418U;
int32_t x72 = 4810920;
volatile uint32_t t16 = 255698517U;
int32_t x75 = INT32_MIN;
uint32_t x77 = 425U;
volatile int32_t t19 = 7341986;
uint8_t x93 = 1U;
int32_t x110 = INT32_MIN;
volatile int64_t x122 = 2582LL;
int32_t x128 = INT32_MIN;
static volatile int32_t t30 = 195595433;
int64_t x129 = INT64_MIN;
volatile int64_t t33 = 574596548804LL;
uint16_t x143 = 7350U;
uint8_t x144 = 7U;
int16_t x145 = -1;
volatile uint64_t t36 = 4850983614546147LLU;
int32_t t38 = -53948;
uint64_t x165 = 3051511435429LLU;
volatile uint32_t x166 = UINT32_MAX;
volatile int16_t x168 = -102;
static uint32_t x177 = 439397U;
uint64_t x180 = 4445LLU;
int16_t x182 = 4;
uint32_t x190 = 26U;
int64_t x199 = INT64_MIN;
int64_t t45 = -48LL;
uint16_t x202 = UINT16_MAX;
volatile uint64_t x204 = UINT64_MAX;
volatile int16_t x207 = INT16_MIN;
static uint16_t x210 = UINT16_MAX;
uint64_t t49 = 532940185027LLU;
volatile int32_t x218 = 434;
volatile int64_t x225 = INT64_MIN;
uint16_t x227 = 478U;
int16_t x229 = 1;
int16_t x230 = INT16_MIN;
uint8_t x232 = 11U;
int32_t x235 = 20839;
volatile uint16_t x239 = 17U;
int64_t x240 = INT64_MIN;
int8_t x248 = INT8_MAX;
volatile int64_t t57 = 384348703LL;
int16_t x251 = INT16_MIN;
int16_t x252 = 893;
int8_t x253 = -1;
int16_t x262 = INT16_MAX;
uint8_t x272 = 20U;
static int8_t x273 = 1;
int64_t x276 = 500361019451321410LL;
uint64_t x278 = 242827123626LLU;
uint64_t x280 = UINT64_MAX;
volatile uint64_t x283 = 2360LLU;
volatile int64_t x284 = -768827423LL;
volatile uint32_t x286 = 867U;
uint8_t x287 = 9U;
int64_t x292 = -2719912102876LL;
int64_t t68 = -217159LL;
uint16_t x298 = 2U;
int16_t x300 = 1389;
uint64_t x301 = 368LLU;
uint64_t t70 = 1984533030LLU;
volatile int64_t x310 = INT64_MIN;
volatile uint64_t x312 = 1813618346427851LLU;
uint16_t x315 = UINT16_MAX;
volatile int32_t x324 = -1;
volatile int32_t t75 = -7381399;
volatile uint64_t t76 = 249LLU;
int8_t x337 = 0;
int32_t x340 = -56251199;
int8_t x343 = -1;
uint8_t x344 = 7U;
static volatile uint32_t x349 = UINT32_MAX;
uint32_t t82 = 18U;
int8_t x358 = 0;
int16_t x361 = INT16_MIN;
uint64_t t85 = 2342474194457846LLU;
volatile int16_t x371 = -1;
int8_t x376 = INT8_MAX;
volatile int16_t x384 = -1;
static volatile int8_t x385 = -4;
int64_t t91 = -719LL;
static int8_t x389 = INT8_MIN;
static int16_t x390 = 10;
volatile int64_t t92 = 0LL;
uint16_t x393 = 3U;
volatile uint32_t x394 = 9U;
uint16_t x405 = UINT16_MAX;
uint8_t x407 = 75U;
int16_t x409 = INT16_MIN;
uint64_t t96 = 4206835006652200LLU;
int64_t x420 = -1LL;
uint64_t x421 = UINT64_MAX;
int64_t x427 = INT64_MAX;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int32_t x6 = -1;
	static uint16_t x7 = UINT16_MAX;
	static int16_t x8 = 1;
	static volatile int32_t t0 = 9565607;

	t0 = (x5+(x6^(x7/x8)));

	if (t0 != -98304) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -2;
	volatile int16_t x10 = INT16_MAX;
	volatile int8_t x11 = INT8_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t1 = 95826;

	t1 = (x9+(x10^(x11/x12)));

	if (t1 != 32765) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x13 = -2;
	int32_t x15 = INT32_MAX;
	static uint16_t x16 = 24U;
	int32_t t2 = -606;

	t2 = (x13+(x14^(x15/x16)));

	if (t2 != -89478488) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	uint64_t x18 = 471LLU;
	int8_t x19 = 25;
	uint16_t x20 = 4416U;
	volatile uint64_t t3 = 9930354397418143LLU;

	t3 = (x17+(x18^(x19/x20)));

	if (t3 != 18446744071562068439LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 45U;
	volatile int16_t x22 = 1957;
	int16_t x24 = -1;
	volatile int32_t t4 = 3181;

	t4 = (x21+(x22^(x23/x24)));

	if (t4 != 1874) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	volatile uint32_t x26 = UINT32_MAX;
	int64_t x27 = -30551LL;
	volatile uint16_t x28 = 312U;
	static volatile int64_t t5 = -19475549245LL;

	t5 = (x25+(x26^(x27/x28)));

	if (t5 != 9223372032559808607LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -2621124314LL;
	volatile uint16_t x31 = 676U;
	int64_t t6 = 7195287LL;

	t6 = (x29+(x30^(x31/x32)));

	if (t6 != -2621091551LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x36 = UINT16_MAX;

	t7 = (x33+(x34^(x35/x36)));

	if (t7 != 992) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	int16_t x39 = 1;
	volatile int8_t x40 = -1;
	volatile int32_t t8 = 1;

	t8 = (x37+(x38^(x39/x40)));

	if (t8 != 32792) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MAX;
	uint64_t x44 = 560727507924383LLU;
	static uint64_t t9 = 61LLU;

	t9 = (x41+(x42^(x43/x44)));

	if (t9 != 2147516285LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 2825LL;
	static volatile int64_t x46 = INT64_MAX;
	uint64_t x47 = 679883401LLU;
	static volatile int64_t x48 = INT64_MIN;
	static uint64_t t10 = 708LLU;

	t10 = (x45+(x46^(x47/x48)));

	if (t10 != 9223372036854778632LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = 4883;
	int16_t x50 = INT16_MIN;
	volatile int64_t x51 = 134427756492LL;

	t11 = (x49+(x50^(x51/x52)));

	if (t11 != -1867020384LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 57292965793420708LLU;
	volatile uint8_t x54 = 59U;
	int64_t x55 = -54600875265LL;
	int16_t x56 = INT16_MAX;
	uint64_t t12 = 692LLU;

	t12 = (x53+(x54^(x55/x56)));

	if (t12 != 57292965791754376LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MAX;
	volatile uint8_t x58 = UINT8_MAX;
	int32_t x59 = -1;

	t13 = (x57+(x58^(x59/x60)));

	if (t13 != 33021U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	uint8_t x63 = UINT8_MAX;
	uint16_t x64 = UINT16_MAX;
	volatile uint32_t t14 = 52U;

	t14 = (x61+(x62^(x63/x64)));

	if (t14 != 183417U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -97712132;
	int32_t x66 = 114;
	static volatile int64_t x67 = 959041690LL;
	volatile int32_t x68 = INT32_MIN;
	volatile int64_t t15 = 379586110LL;

	t15 = (x65+(x66^(x67/x68)));

	if (t15 != -97712018LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = INT16_MAX;

	t16 = (x69+(x70^(x71/x72)));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint8_t x73 = 8U;
	uint32_t x74 = 56581031U;
	int8_t x76 = INT8_MIN;
	static uint32_t t17 = 2958397U;

	t17 = (x73+(x74^(x75/x76)));

	if (t17 != 39803823U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 1;
	int64_t x79 = INT64_MIN;
	uint32_t x80 = 6931621U;
	volatile int64_t t18 = -5LL;

	t18 = (x77+(x78^(x79/x80)));

	if (t18 != -1330622668769LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = INT8_MIN;
	int8_t x82 = 9;
	int16_t x83 = INT16_MIN;
	static int16_t x84 = 98;

	t19 = (x81+(x82^(x83/x84)));

	if (t19 != -453) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 4006U;
	volatile int32_t x86 = -1;
	int16_t x87 = INT16_MAX;
	int64_t x88 = 11949301365LL;
	static volatile int64_t t20 = 480277899851LL;

	t20 = (x85+(x86^(x87/x88)));

	if (t20 != 4005LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x89 = -3;
	int64_t x90 = INT64_MAX;
	volatile int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	int64_t t21 = 7166901LL;

	t21 = (x89+(x90^(x91/x92)));

	if (t21 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	static int8_t x96 = INT8_MIN;
	static int64_t t22 = -1322LL;

	t22 = (x93+(x94^(x95/x96)));

	if (t22 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = 5233;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	int32_t t23 = -955943952;

	t23 = (x97+(x98^(x99/x100)));

	if (t23 != 5105) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MAX;
	static uint64_t x102 = 30LLU;
	volatile uint8_t x103 = 1U;
	int32_t x104 = INT32_MAX;
	volatile uint64_t t24 = 4LLU;

	t24 = (x101+(x102^(x103/x104)));

	if (t24 != 9223372036854775837LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -255;
	volatile int32_t x106 = INT32_MAX;
	uint32_t x107 = 6U;
	int32_t x108 = INT32_MIN;
	uint32_t t25 = 82616404U;

	t25 = (x105+(x106^(x107/x108)));

	if (t25 != 2147483392U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -702890791911387934LL;
	int32_t x111 = INT32_MIN;
	volatile uint64_t x112 = UINT64_MAX;
	volatile uint64_t t26 = 950LLU;

	t26 = (x109+(x110^(x111/x112)));

	if (t26 != 17743853279650680034LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MAX;
	int16_t x114 = 318;
	volatile int16_t x115 = INT16_MAX;
	int64_t x116 = -17652770451963616LL;
	volatile int64_t t27 = -629LL;

	t27 = (x113+(x114^(x115/x116)));

	if (t27 != 33085LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 33U;
	int8_t x118 = -1;
	int64_t x119 = 13813861861655LL;
	uint8_t x120 = UINT8_MAX;
	int64_t t28 = -222194733811237LL;

	t28 = (x117+(x118^(x119/x120)));

	if (t28 != -54172007268LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -3;
	volatile int16_t x123 = 2043;
	volatile int8_t x124 = -1;
	int64_t t29 = -384513835321611722LL;

	t29 = (x121+(x122^(x123/x124)));

	if (t29 != -3568LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MAX;
	int16_t x127 = 887;

	t30 = (x125+(x126^(x127/x128)));

	if (t30 != -2147483521) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x130 = UINT32_MAX;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MIN;
	int64_t t31 = -16894457710LL;

	t31 = (x129+(x130^(x131/x132)));

	if (t31 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	volatile uint8_t x134 = 21U;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = -44;
	volatile int32_t t32 = 70848;

	t32 = (x133+(x134^(x135/x136)));

	if (t32 != 33532) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x137 = -1;
	int32_t x138 = INT32_MIN;
	int64_t x139 = INT64_MIN;
	volatile uint32_t x140 = UINT32_MAX;

	t33 = (x137+(x138^(x139/x140)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = 0U;
	uint16_t x142 = 5U;
	volatile int32_t t34 = -11134;

	t34 = (x141+(x142^(x143/x144)));

	if (t34 != 1055) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x146 = 4U;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 6U;
	volatile int32_t t35 = -69;

	t35 = (x145+(x146^(x147/x148)));

	if (t35 != 10925) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	uint64_t x150 = 0LLU;
	uint16_t x151 = 954U;
	static int64_t x152 = 8LL;

	t36 = (x149+(x150^(x151/x152)));

	if (t36 != 18446744073709518967LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x153 = 332U;
	static volatile int16_t x154 = -9;
	uint32_t x155 = 310724209U;
	static int8_t x156 = -1;
	uint32_t t37 = 1366771U;

	t37 = (x153+(x154^(x155/x156)));

	if (t37 != 323U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 15U;
	int32_t x158 = INT32_MIN;
	int32_t x159 = -4089815;
	int32_t x160 = 3;

	t38 = (x157+(x158^(x159/x160)));

	if (t38 != 2146120392) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x167 = -1;
	static uint64_t t39 = 136712870081LLU;

	t39 = (x165+(x166^(x167/x168)));

	if (t39 != 3055806402724LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x173 = INT16_MIN;
	int64_t x174 = -14111865787628LL;
	int16_t x175 = INT16_MAX;
	uint64_t x176 = 416836368394949LLU;
	volatile uint64_t t40 = 15913339677522LLU;

	t40 = (x173+(x174^(x175/x176)));

	if (t40 != 18446729961843731220LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x178 = INT32_MIN;
	volatile int64_t x179 = INT64_MIN;
	volatile uint64_t t41 = 18734113332456LLU;

	t41 = (x177+(x178^(x179/x180)));

	if (t41 != 18444669075925992201LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MAX;
	int64_t x183 = INT64_MAX;
	int16_t x184 = -1;
	int64_t t42 = -1100093022987543LL;

	t42 = (x181+(x182^(x183/x184)));

	if (t42 != -9223372034707292156LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	int32_t x191 = 2669;
	int64_t x192 = INT64_MAX;
	static volatile int64_t t43 = 228LL;

	t43 = (x189+(x190^(x191/x192)));

	if (t43 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	int64_t x194 = INT64_MAX;
	int32_t x195 = INT32_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t44 = 39534192237939231LL;

	t44 = (x193+(x194^(x195/x196)));

	if (t44 != 9223372036846354175LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = INT32_MAX;
	volatile uint32_t x198 = 7147U;
	uint8_t x200 = 48U;

	t45 = (x197+(x198^(x199/x200)));

	if (t45 != -192153581953659204LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 1669;
	uint16_t x203 = 0U;
	uint64_t t46 = 201150118544LLU;

	t46 = (x201+(x202^(x203/x204)));

	if (t46 != 67204LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x205 = -804364159;
	int64_t x206 = -2LL;
	volatile int16_t x208 = -1;
	int64_t t47 = -993603532531255LL;

	t47 = (x205+(x206^(x207/x208)));

	if (t47 != -804396929LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = INT64_MAX;
	volatile uint32_t x211 = UINT32_MAX;
	uint64_t x212 = 176579290026LLU;
	volatile uint64_t t48 = 557LLU;

	t48 = (x209+(x210^(x211/x212)));

	if (t48 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x213 = -1;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = 33U;
	uint64_t x216 = UINT64_MAX;

	t49 = (x213+(x214^(x215/x216)));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = INT32_MIN;
	static uint32_t x219 = 986288107U;
	int8_t x220 = INT8_MAX;
	uint32_t t50 = 22U;

	t50 = (x217+(x218^(x219/x220)));

	if (t50 != 2155250066U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x221 = UINT16_MAX;
	uint32_t x222 = 54U;
	volatile int8_t x223 = 1;
	uint8_t x224 = 5U;
	volatile uint32_t t51 = 327526328U;

	t51 = (x221+(x222^(x223/x224)));

	if (t51 != 65589U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = INT8_MAX;
	int32_t x228 = INT32_MAX;
	volatile int64_t t52 = 472222518793677007LL;

	t52 = (x225+(x226^(x227/x228)));

	if (t52 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x231 = INT32_MAX;
	static volatile int32_t t53 = -10;

	t53 = (x229+(x230^(x231/x232)));

	if (t53 != -195204933) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = -1231635573454932896LL;
	volatile int8_t x234 = 61;
	static volatile uint16_t x236 = 220U;
	int64_t t54 = -452798634LL;

	t54 = (x233+(x234^(x235/x236)));

	if (t54 != -1231635573454932797LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = INT8_MIN;
	volatile uint32_t x238 = UINT32_MAX;
	volatile int64_t t55 = -51832818946888417LL;

	t55 = (x237+(x238^(x239/x240)));

	if (t55 != 4294967167LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = 540137398429021LLU;
	int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;
	static uint64_t x244 = 1029LLU;
	uint64_t t56 = 5738LLU;

	t56 = (x241+(x242^(x243/x244)));

	if (t56 != 540137398396253LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x245 = 62841070LL;
	volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = 7581U;

	t57 = (x245+(x246^(x247/x248)));

	if (t57 != -2084642519LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x249 = UINT8_MAX;
	static int8_t x250 = INT8_MAX;
	int32_t t58 = 2;

	t58 = (x249+(x250^(x251/x252)));

	if (t58 != 162) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x254 = INT32_MAX;
	volatile int16_t x255 = 2947;
	static uint64_t x256 = 15087456701LLU;
	uint64_t t59 = 591726LLU;

	t59 = (x253+(x254^(x255/x256)));

	if (t59 != 2147483646LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x261 = -10957573948LL;
	uint8_t x263 = 113U;
	volatile int64_t x264 = INT64_MIN;
	volatile int64_t t60 = 12258259150LL;

	t60 = (x261+(x262^(x263/x264)));

	if (t60 != -10957541181LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = INT8_MAX;
	uint64_t x266 = 888506623144LLU;
	uint32_t x267 = 61012857U;
	int8_t x268 = INT8_MAX;
	uint64_t t61 = 9660024106LLU;

	t61 = (x265+(x266^(x267/x268)));

	if (t61 != 888506183815LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x269 = 0;
	int8_t x270 = -1;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t t62 = 61658LLU;

	t62 = (x269+(x270^(x271/x272)));

	if (t62 != 17524406870024074035LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x274 = 470;
	uint16_t x275 = 0U;
	static int64_t t63 = 28318027LL;

	t63 = (x273+(x274^(x275/x276)));

	if (t63 != 471LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = INT16_MIN;
	static uint16_t x279 = 1U;
	uint64_t t64 = 533562574LLU;

	t64 = (x277+(x278^(x279/x280)));

	if (t64 != 242827090858LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x281 = UINT64_MAX;
	volatile int16_t x282 = 3641;
	volatile uint64_t t65 = 41434703079LLU;

	t65 = (x281+(x282^(x283/x284)));

	if (t65 != 3640LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x285 = 3;
	uint64_t x288 = 224621LLU;
	static uint64_t t66 = 36569LLU;

	t66 = (x285+(x286^(x287/x288)));

	if (t66 != 870LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x289 = -1LL;
	int8_t x290 = 0;
	int64_t x291 = -3756725LL;
	int64_t t67 = 10LL;

	t67 = (x289+(x290^(x291/x292)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x293 = 3U;
	volatile int8_t x294 = -2;
	int16_t x295 = INT16_MIN;
	int64_t x296 = INT64_MAX;

	t68 = (x293+(x294^(x295/x296)));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = UINT16_MAX;
	static uint8_t x299 = 0U;
	int32_t t69 = -5;

	t69 = (x297+(x298^(x299/x300)));

	if (t69 != 65537) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	volatile uint8_t x304 = 114U;

	t70 = (x301+(x302^(x303/x304)));

	if (t70 != 80906772253112435LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	uint64_t x307 = 82396474123315LLU;
	int64_t x308 = INT64_MIN;
	volatile uint64_t t71 = 1221405079LLU;

	t71 = (x305+(x306^(x307/x308)));

	if (t71 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x309 = 266;
	int16_t x311 = INT16_MIN;
	uint64_t t72 = 743473837LLU;

	t72 = (x309+(x310^(x311/x312)));

	if (t72 != 9223372036854786245LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MIN;
	volatile int64_t x314 = INT64_MAX;
	volatile uint8_t x316 = 30U;
	volatile int64_t t73 = 719472906635LL;

	t73 = (x313+(x314^(x315/x316)));

	if (t73 != 9223372034707289975LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x317 = -1LL;
	static int32_t x318 = 13;
	int32_t x319 = -8617501;
	int64_t x320 = INT64_MAX;
	volatile int64_t t74 = 568406909LL;

	t74 = (x317+(x318^(x319/x320)));

	if (t74 != 12LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	static int8_t x322 = INT8_MAX;
	uint8_t x323 = UINT8_MAX;

	t75 = (x321+(x322^(x323/x324)));

	if (t75 != -258) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = UINT64_MAX;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -45825554606817790LL;

	t76 = (x325+(x326^(x327/x328)));

	if (t76 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MIN;
	int32_t x331 = 1664141;
	uint64_t x332 = UINT64_MAX;
	volatile uint64_t t77 = 15551923740784LLU;

	t77 = (x329+(x330^(x331/x332)));

	if (t77 != 18446744073709518720LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -8324109964418527LL;
	uint32_t x334 = 1734U;
	volatile int32_t x335 = INT32_MIN;
	static int8_t x336 = INT8_MIN;
	static volatile int64_t t78 = 7673474LL;

	t78 = (x333+(x334^(x335/x336)));

	if (t78 != -8324109947639577LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x338 = INT32_MAX;
	int16_t x339 = INT16_MIN;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x337+(x338^(x339/x340)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x341 = 14U;
	int8_t x342 = 18;
	volatile int32_t t80 = 8371;

	t80 = (x341+(x342^(x343/x344)));

	if (t80 != 32) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x345 = 18U;
	volatile uint64_t x346 = 3705819846LLU;
	static int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;
	uint64_t t81 = 9LLU;

	t81 = (x345+(x346^(x347/x348)));

	if (t81 != 3705819864LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x350 = -1;
	static int32_t x351 = INT32_MIN;
	static uint16_t x352 = 2U;

	t82 = (x349+(x350^(x351/x352)));

	if (t82 != 1073741822U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = UINT8_MAX;
	int8_t x354 = 0;
	int64_t x355 = -200456030LL;
	volatile uint8_t x356 = 15U;
	static int64_t t83 = -6156464LL;

	t83 = (x353+(x354^(x355/x356)));

	if (t83 != -13363480LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x357 = UINT32_MAX;
	uint64_t x359 = UINT64_MAX;
	static int8_t x360 = INT8_MAX;
	volatile uint64_t t84 = 6048293LLU;

	t84 = (x357+(x358^(x359/x360)));

	if (t84 != 145249957631262977LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x362 = UINT64_MAX;
	volatile int16_t x363 = -8593;
	int8_t x364 = INT8_MIN;

	t85 = (x361+(x362^(x363/x364)));

	if (t85 != 18446744073709518780LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 0;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = 0U;
	int16_t x368 = INT16_MAX;
	volatile uint32_t t86 = 721146884U;

	t86 = (x365+(x366^(x367/x368)));

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x369 = UINT64_MAX;
	int32_t x370 = -1;
	uint8_t x372 = 38U;
	uint64_t t87 = 2001502613402LLU;

	t87 = (x369+(x370^(x371/x372)));

	if (t87 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x373 = 981LL;
	volatile uint8_t x374 = UINT8_MAX;
	int64_t x375 = INT64_MAX;
	volatile int64_t t88 = -238842016542777LL;

	t88 = (x373+(x374^(x375/x376)));

	if (t88 != 72624976668148819LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int64_t x378 = INT64_MIN;
	static int8_t x379 = 18;
	int16_t x380 = 14;
	static uint64_t t89 = 176631153LLU;

	t89 = (x377+(x378^(x379/x380)));

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = INT16_MAX;
	int8_t x383 = -1;
	volatile uint64_t t90 = 4031798570075840LLU;

	t90 = (x381+(x382^(x383/x384)));

	if (t90 != 32765LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x386 = 0U;
	int64_t x387 = INT64_MAX;
	uint8_t x388 = 31U;

	t91 = (x385+(x386^(x387/x388)));

	if (t91 != 297528130221121796LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x391 = INT64_MAX;
	int8_t x392 = INT8_MAX;

	t92 = (x389+(x390^(x391/x392)));

	if (t92 != 72624976668147723LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int64_t t93 = 91LL;

	t93 = (x393+(x394^(x395/x396)));

	if (t93 != 12LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x406 = 1;
	volatile int8_t x408 = INT8_MAX;
	int32_t t94 = -10;

	t94 = (x405+(x406^(x407/x408)));

	if (t94 != 65536) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x410 = 26;
	int64_t x411 = -5610733720932449LL;
	uint16_t x412 = 78U;
	volatile int64_t t95 = 248726049440869006LL;

	t95 = (x409+(x410^(x411/x412)));

	if (t95 != -71932483634492LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x413 = 380730LLU;
	static int32_t x414 = -65139061;
	int32_t x415 = INT32_MAX;
	uint64_t x416 = 156601621487729562LLU;

	t96 = (x413+(x414^(x415/x416)));

	if (t96 != 18446744073644793285LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x417 = INT64_MIN;
	uint32_t x418 = 2093U;
	int64_t x419 = -64388300LL;
	int64_t t97 = 228LL;

	t97 = (x417+(x418^(x419/x420)));

	if (t97 != -9223372036790389535LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x422 = INT32_MAX;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	volatile uint64_t t98 = 65358LLU;

	t98 = (x421+(x422^(x423/x424)));

	if (t98 != 2147483646LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x425 = INT8_MAX;
	int32_t x426 = 8;
	int16_t x428 = -1;
	int64_t t99 = 68112LL;

	t99 = (x425+(x426^(x427/x428)));

	if (t99 != -9223372036854775672LL) { NG(); } else { ; }
	
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

