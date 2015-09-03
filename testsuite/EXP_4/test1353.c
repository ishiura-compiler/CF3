#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
uint32_t x8 = 3U;
static volatile uint8_t x12 = 3U;
volatile uint32_t t2 = 196799U;
static uint16_t x15 = UINT16_MAX;
static int8_t x17 = -1;
int32_t x19 = INT32_MAX;
volatile int16_t x26 = -3;
static uint32_t x28 = 2U;
int32_t x32 = -1;
static int16_t x39 = INT16_MIN;
int32_t x46 = INT32_MIN;
int32_t x49 = INT32_MIN;
int32_t x50 = 32484132;
int32_t t11 = 134033997;
static volatile uint64_t x59 = 26318976LLU;
volatile uint16_t x62 = 24U;
int64_t x67 = 0LL;
int64_t x78 = INT64_MIN;
static int32_t x92 = INT32_MIN;
int64_t x94 = 132956034LL;
static int8_t x105 = -1;
static int32_t x106 = -1;
int32_t t22 = -1796;
static uint32_t x112 = 5489U;
static int32_t x113 = INT32_MIN;
int32_t t26 = 725;
int32_t x127 = INT32_MIN;
volatile int32_t t27 = -540475;
static volatile int8_t x129 = INT8_MAX;
volatile uint8_t x133 = 2U;
static volatile uint32_t t29 = 241161U;
uint8_t x141 = 10U;
static volatile int32_t t31 = 4119634;
int16_t x146 = INT16_MIN;
static uint16_t x147 = UINT16_MAX;
int16_t x149 = INT16_MAX;
int64_t t34 = 4473795263399LL;
static volatile int64_t x168 = INT64_MIN;
uint32_t x169 = UINT32_MAX;
uint32_t t38 = 11U;
int16_t x182 = -1;
volatile int8_t x207 = 16;
volatile uint16_t x209 = UINT16_MAX;
static volatile uint64_t x212 = UINT64_MAX;
int8_t x225 = 6;
uint8_t x246 = 110U;
volatile uint8_t x254 = 11U;
int8_t x258 = -30;
int64_t x262 = -23947191751640803LL;
int16_t x268 = 15;
int32_t x274 = INT32_MIN;
int16_t x276 = INT16_MIN;
volatile uint64_t t58 = 749280517233469463LLU;
static int64_t x283 = -3260112LL;
int16_t x285 = -152;
volatile int64_t x288 = 58LL;
static int32_t t61 = -7;
static int16_t x289 = -1;
int16_t x294 = INT16_MAX;
int16_t x301 = INT16_MIN;
int64_t x307 = -1LL;
int8_t x322 = INT8_MIN;
static int64_t x326 = 185177201491187LL;
static volatile int16_t x348 = -1;
uint8_t x357 = 13U;
uint16_t x364 = UINT16_MAX;
int32_t t78 = -1034754293;
int32_t x376 = INT32_MIN;
int64_t x381 = -12236095644393159LL;
int64_t x382 = INT64_MAX;
volatile int16_t x383 = INT16_MIN;
uint32_t x386 = 319U;
static volatile int32_t x389 = 927;
int32_t t84 = -307886879;
static uint64_t x405 = 295382524334690045LLU;
int32_t x423 = -1;
static uint64_t x441 = 7388309275LLU;
uint32_t x442 = UINT32_MAX;
int32_t x444 = INT32_MIN;
volatile int64_t x450 = -130943282899072LL;
uint64_t x462 = 15353952030154LLU;
uint8_t x464 = 7U;
uint64_t t99 = 91320023LLU;


void f0(void) {
	static volatile int32_t x1 = -1;
	int64_t x2 = INT64_MAX;
	int16_t x3 = -1;
	int16_t x4 = INT16_MIN;
	volatile int64_t t0 = -970994423458571LL;

	t0 = (x1+(x2+(x3<x4)));

	if (t0 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 142596368U;
	uint64_t x7 = 0LLU;
	uint32_t t1 = 29287U;

	t1 = (x5+(x6+(x7<x8)));

	if (t1 != 142596368U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 97254U;
	int16_t x11 = INT16_MIN;

	t2 = (x9+(x10+(x11<x12)));

	if (t2 != 97127U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x16 = 12222179728900353LL;
	volatile int32_t t3 = -159055332;

	t3 = (x13+(x14+(x15<x16)));

	if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -70098;

	t4 = (x17+(x18+(x19<x20)));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int16_t x22 = -1;
	volatile uint16_t x23 = UINT16_MAX;
	static int64_t x24 = -1LL;
	static int64_t t5 = 1880104464LL;

	t5 = (x21+(x22+(x23<x24)));

	if (t5 != -2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2U;
	int32_t x27 = INT32_MIN;
	volatile uint32_t t6 = UINT32_MAX;

	t6 = (x25+(x26+(x27<x28)));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 6909;
	static int16_t x30 = 0;
	volatile int32_t x31 = -1377;
	volatile int32_t t7 = 694820;

	t7 = (x29+(x30+(x31<x32)));

	if (t7 != 6910) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = 1LL;
	volatile int16_t x40 = INT16_MIN;
	int64_t t8 = -45LL;

	t8 = (x37+(x38+(x39<x40)));

	if (t8 != -32767LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	static uint64_t x42 = 209686709678LLU;
	int16_t x43 = INT16_MIN;
	static volatile int8_t x44 = -9;
	static uint64_t t9 = 25830LLU;

	t9 = (x41+(x42+(x43<x44)));

	if (t9 != 209686676911LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 1;
	int8_t x47 = -41;
	volatile int64_t x48 = -12343483393726332LL;
	int32_t t10 = -93106066;

	t10 = (x45+(x46+(x47<x48)));

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x51 = INT8_MIN;
	uint64_t x52 = 676LLU;

	t11 = (x49+(x50+(x51<x52)));

	if (t11 != -2114999516) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = -3;
	static int16_t x54 = -5;
	uint16_t x55 = UINT16_MAX;
	volatile int16_t x56 = -1;
	int32_t t12 = 16681;

	t12 = (x53+(x54+(x55<x56)));

	if (t12 != -8) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x57 = 5U;
	int16_t x58 = INT16_MAX;
	int16_t x60 = 2;
	int32_t t13 = -7;

	t13 = (x57+(x58+(x59<x60)));

	if (t13 != 32772) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	volatile int64_t x63 = -1LL;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t14 = 8515189;

	t14 = (x61+(x62+(x63<x64)));

	if (t14 != -32743) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = 244775321;
	uint16_t x66 = 24U;
	int32_t x68 = INT32_MAX;
	int32_t t15 = -556;

	t15 = (x65+(x66+(x67<x68)));

	if (t15 != 244775346) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 36443170212LLU;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = 2392;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t16 = 1014782543473669LLU;

	t16 = (x69+(x70+(x71<x72)));

	if (t16 != 36443235747LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x77 = 7347590;
	static volatile int16_t x79 = 2131;
	int8_t x80 = INT8_MAX;
	int64_t t17 = 58056277169192510LL;

	t17 = (x77+(x78+(x79<x80)));

	if (t17 != -9223372036847428218LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = -1;
	volatile int16_t x82 = INT16_MIN;
	int64_t x83 = INT64_MIN;
	static uint64_t x84 = 1LLU;
	volatile int32_t t18 = 75635747;

	t18 = (x81+(x82+(x83<x84)));

	if (t18 != -32769) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x89 = INT8_MIN;
	uint16_t x90 = 2U;
	int32_t x91 = -473;
	volatile int32_t t19 = 1644;

	t19 = (x89+(x90+(x91<x92)));

	if (t19 != -126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	int32_t x95 = 0;
	uint32_t x96 = UINT32_MAX;
	volatile int64_t t20 = -900395969428324LL;

	t20 = (x93+(x94+(x95<x96)));

	if (t20 != -2014527613LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 24013U;
	uint8_t x98 = UINT8_MAX;
	uint16_t x99 = 17099U;
	uint32_t x100 = UINT32_MAX;
	static int32_t t21 = -2644;

	t21 = (x97+(x98+(x99<x100)));

	if (t21 != 24269) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x107 = UINT32_MAX;
	int64_t x108 = INT64_MIN;

	t22 = (x105+(x106+(x107<x108)));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = -1;
	uint32_t x110 = UINT32_MAX;
	int32_t x111 = INT32_MIN;
	volatile uint32_t t23 = 15211U;

	t23 = (x109+(x110+(x111<x112)));

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x114 = 18LL;
	int64_t x115 = -233LL;
	int64_t x116 = INT64_MIN;
	int64_t t24 = 64LL;

	t24 = (x113+(x114+(x115<x116)));

	if (t24 != -2147483630LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = INT64_MAX;
	int16_t x119 = 0;
	int8_t x120 = INT8_MIN;
	static int64_t t25 = 814571871625LL;

	t25 = (x117+(x118+(x119<x120)));

	if (t25 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 125U;
	int8_t x122 = INT8_MIN;
	static int32_t x123 = INT32_MIN;
	volatile uint16_t x124 = 0U;

	t26 = (x121+(x122+(x123<x124)));

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 14211;
	int16_t x126 = INT16_MIN;
	int8_t x128 = INT8_MIN;

	t27 = (x125+(x126+(x127<x128)));

	if (t27 != -18556) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x130 = INT32_MIN;
	uint16_t x131 = 3792U;
	int64_t x132 = INT64_MIN;
	int32_t t28 = -75388941;

	t28 = (x129+(x130+(x131<x132)));

	if (t28 != -2147483521) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x134 = 4768395U;
	int64_t x135 = 36236556241LL;
	int8_t x136 = INT8_MAX;

	t29 = (x133+(x134+(x135<x136)));

	if (t29 != 4768397U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	int16_t x138 = -1;
	int64_t x139 = -71506713291LL;
	uint16_t x140 = 0U;
	static int32_t t30 = INT32_MIN;

	t30 = (x137+(x138+(x139<x140)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x142 = 1;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;

	t31 = (x141+(x142+(x143<x144)));

	if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 8005;
	uint8_t x148 = 10U;
	int32_t t32 = 17212718;

	t32 = (x145+(x146+(x147<x148)));

	if (t32 != -24763) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = INT8_MAX;
	static int16_t x151 = -252;
	uint16_t x152 = 24U;
	static volatile int32_t t33 = 12346940;

	t33 = (x149+(x150+(x151<x152)));

	if (t33 != 32895) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x153 = INT64_MAX;
	int16_t x154 = -1;
	int16_t x155 = -1;
	uint32_t x156 = 15U;

	t34 = (x153+(x154+(x155<x156)));

	if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x157 = UINT32_MAX;
	volatile int16_t x158 = INT16_MIN;
	volatile int16_t x159 = 0;
	volatile int32_t x160 = INT32_MIN;
	volatile uint32_t t35 = 110926098U;

	t35 = (x157+(x158+(x159<x160)));

	if (t35 != 4294934527U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -1;
	uint32_t x162 = 3054211U;
	uint8_t x163 = 21U;
	uint8_t x164 = 3U;
	uint32_t t36 = 4656U;

	t36 = (x161+(x162+(x163<x164)));

	if (t36 != 3054210U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = -1;
	volatile int16_t x166 = -1;
	static uint32_t x167 = 1995U;
	volatile int32_t t37 = 61273196;

	t37 = (x165+(x166+(x167<x168)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x170 = 64004;
	int32_t x171 = INT32_MIN;
	volatile int32_t x172 = INT32_MIN;

	t38 = (x169+(x170+(x171<x172)));

	if (t38 != 64003U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = -1LL;
	int8_t x174 = -1;
	int64_t x175 = 252588469174792LL;
	static int32_t x176 = INT32_MAX;
	int64_t t39 = 3LL;

	t39 = (x173+(x174+(x175<x176)));

	if (t39 != -2LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x181 = INT64_MIN;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = -26;
	int64_t t40 = INT64_MIN;

	t40 = (x181+(x182+(x183<x184)));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = 17U;
	uint64_t x186 = 3979054268459LLU;
	uint64_t x187 = 339151148263501117LLU;
	uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t41 = 204212115LLU;

	t41 = (x185+(x186+(x187<x188)));

	if (t41 != 3979054268477LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MAX;
	int16_t x190 = -1;
	int64_t x191 = 10078262LL;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t42 = -526103348;

	t42 = (x189+(x190+(x191<x192)));

	if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x197 = 3211U;
	uint64_t x198 = UINT64_MAX;
	uint32_t x199 = 2U;
	volatile uint16_t x200 = UINT16_MAX;
	uint64_t t43 = 153LLU;

	t43 = (x197+(x198+(x199<x200)));

	if (t43 != 3211LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	uint8_t x206 = 80U;
	static volatile int32_t x208 = -55914;
	int32_t t44 = -37625;

	t44 = (x205+(x206+(x207<x208)));

	if (t44 != 79) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x210 = 14U;
	int32_t x211 = 0;
	int32_t t45 = -2221908;

	t45 = (x209+(x210+(x211<x212)));

	if (t45 != 65550) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 1U;
	uint8_t x214 = UINT8_MAX;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = INT8_MIN;
	uint32_t t46 = 210521U;

	t46 = (x213+(x214+(x215<x216)));

	if (t46 != 256U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x217 = 28964509017LL;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MAX;
	uint8_t x220 = 56U;
	int64_t t47 = 14724LL;

	t47 = (x217+(x218+(x219<x220)));

	if (t47 != 28964476249LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x221 = 206860;
	int32_t x222 = INT32_MIN;
	static volatile int8_t x223 = INT8_MAX;
	volatile int64_t x224 = -1LL;
	int32_t t48 = -2255953;

	t48 = (x221+(x222+(x223<x224)));

	if (t48 != -2147276788) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x226 = INT16_MIN;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t49 = 170916016;

	t49 = (x225+(x226+(x227<x228)));

	if (t49 != -32762) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = -1;
	static int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	static int32_t x236 = -1;
	int32_t t50 = -7;

	t50 = (x233+(x234+(x235<x236)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x241 = 13U;
	volatile uint16_t x242 = 14U;
	int16_t x243 = INT16_MIN;
	volatile uint8_t x244 = 9U;
	static volatile uint32_t t51 = 37U;

	t51 = (x241+(x242+(x243<x244)));

	if (t51 != 28U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x245 = UINT16_MAX;
	static int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MAX;
	int32_t t52 = 245606;

	t52 = (x245+(x246+(x247<x248)));

	if (t52 != 65646) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x253 = 70U;
	int32_t x255 = -1;
	static int32_t x256 = INT32_MAX;
	uint32_t t53 = 101259U;

	t53 = (x253+(x254+(x255<x256)));

	if (t53 != 82U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x257 = 0U;
	int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MIN;
	int32_t t54 = -3536176;

	t54 = (x257+(x258+(x259<x260)));

	if (t54 != -29) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	volatile int64_t x264 = INT64_MIN;
	static volatile int64_t t55 = 42248521758475203LL;

	t55 = (x261+(x262+(x263<x264)));

	if (t55 != -23947191751640931LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x265 = INT16_MAX;
	int32_t x266 = INT32_MIN;
	int32_t x267 = 1;
	int32_t t56 = 19697;

	t56 = (x265+(x266+(x267<x268)));

	if (t56 != -2147450880) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = INT32_MIN;
	static int16_t x270 = INT16_MAX;
	int32_t x271 = INT32_MIN;
	uint16_t x272 = 8793U;
	static volatile int32_t t57 = -12525673;

	t57 = (x269+(x270+(x271<x272)));

	if (t57 != -2147450880) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x273 = UINT64_MAX;
	int16_t x275 = INT16_MIN;

	t58 = (x273+(x274+(x275<x276)));

	if (t58 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x277 = 2056904820LLU;
	int8_t x278 = INT8_MIN;
	volatile int64_t x279 = -1LL;
	static int64_t x280 = -1LL;
	volatile uint64_t t59 = 123693609191LLU;

	t59 = (x277+(x278+(x279<x280)));

	if (t59 != 2056904692LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x281 = INT8_MAX;
	static volatile uint8_t x282 = UINT8_MAX;
	int32_t x284 = INT32_MAX;
	static int32_t t60 = -1;

	t60 = (x281+(x282+(x283<x284)));

	if (t60 != 383) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 60730U;

	t61 = (x285+(x286+(x287<x288)));

	if (t61 != 103) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x290 = -1;
	uint16_t x291 = 241U;
	int64_t x292 = 359942LL;
	int32_t t62 = 190;

	t62 = (x289+(x290+(x291<x292)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x293 = INT16_MIN;
	int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t63 = 1;

	t63 = (x293+(x294+(x295<x296)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = INT16_MIN;
	int8_t x298 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = -1;
	int32_t t64 = 9059;

	t64 = (x297+(x298+(x299<x300)));

	if (t64 != -32896) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x302 = -14942792;
	int16_t x303 = -1;
	static uint8_t x304 = 121U;
	volatile int32_t t65 = -62555;

	t65 = (x301+(x302+(x303<x304)));

	if (t65 != -14975559) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x305 = -3698;
	int8_t x306 = 1;
	uint16_t x308 = 38U;
	static int32_t t66 = 1;

	t66 = (x305+(x306+(x307<x308)));

	if (t66 != -3696) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x309 = UINT32_MAX;
	volatile int32_t x310 = -1;
	volatile uint16_t x311 = 3U;
	int16_t x312 = -1;
	uint32_t t67 = 2692U;

	t67 = (x309+(x310+(x311<x312)));

	if (t67 != 4294967294U) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -1;
	volatile int16_t x314 = INT16_MIN;
	uint16_t x315 = 28U;
	uint8_t x316 = 16U;
	int32_t t68 = -6718;

	t68 = (x313+(x314+(x315<x316)));

	if (t68 != -32769) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x321 = INT16_MIN;
	static int64_t x323 = INT64_MIN;
	int32_t x324 = -1;
	static int32_t t69 = -1;

	t69 = (x321+(x322+(x323<x324)));

	if (t69 != -32895) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x325 = 122564;
	static uint32_t x327 = 562163630U;
	volatile int16_t x328 = INT16_MIN;
	int64_t t70 = -4601987837512203797LL;

	t70 = (x325+(x326+(x327<x328)));

	if (t70 != 185177201613752LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x329 = -1;
	static volatile uint32_t x330 = 1049U;
	int16_t x331 = -6;
	uint64_t x332 = UINT64_MAX;
	static volatile uint32_t t71 = 439U;

	t71 = (x329+(x330+(x331<x332)));

	if (t71 != 1049U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = 5598;
	static int64_t x334 = -14LL;
	uint16_t x335 = 3793U;
	static volatile int8_t x336 = -1;
	int64_t t72 = 532503930303332LL;

	t72 = (x333+(x334+(x335<x336)));

	if (t72 != 5584LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = 2U;
	static int32_t x343 = -1;
	static int8_t x344 = -1;
	volatile int32_t t73 = -4;

	t73 = (x341+(x342+(x343<x344)));

	if (t73 != -126) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x345 = INT32_MAX;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = 1;
	static volatile uint32_t t74 = 225899409U;

	t74 = (x345+(x346+(x347<x348)));

	if (t74 != 2147483646U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x349 = 12086;
	static uint32_t x350 = UINT32_MAX;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -274;
	uint32_t t75 = 12135U;

	t75 = (x349+(x350+(x351<x352)));

	if (t75 != 12086U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x353 = 16935U;
	volatile int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	uint16_t x356 = 8U;
	uint32_t t76 = 1082891886U;

	t76 = (x353+(x354+(x355<x356)));

	if (t76 != 4294951464U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint32_t x358 = UINT32_MAX;
	int8_t x359 = -1;
	volatile int8_t x360 = 0;
	volatile uint32_t t77 = 14762U;

	t77 = (x357+(x358+(x359<x360)));

	if (t77 != 13U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = 11U;
	volatile int8_t x362 = INT8_MIN;
	static int8_t x363 = -2;

	t78 = (x361+(x362+(x363<x364)));

	if (t78 != -116) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = 1106U;
	uint16_t x366 = UINT16_MAX;
	static uint16_t x367 = 14003U;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t79 = 2767;

	t79 = (x365+(x366+(x367<x368)));

	if (t79 != 66641) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = INT16_MIN;
	uint16_t x374 = 2783U;
	static int16_t x375 = INT16_MIN;
	int32_t t80 = 2353491;

	t80 = (x373+(x374+(x375<x376)));

	if (t80 != -29985) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x377 = 25U;
	int8_t x378 = -3;
	volatile uint32_t x379 = 85630U;
	uint32_t x380 = 522U;
	volatile int32_t t81 = 12022;

	t81 = (x377+(x378+(x379<x380)));

	if (t81 != 22) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x384 = 7LLU;
	int64_t t82 = 164LL;

	t82 = (x381+(x382+(x383<x384)));

	if (t82 != 9211135941210382648LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x385 = INT64_MIN;
	int16_t x387 = 11457;
	static int16_t x388 = 0;
	int64_t t83 = 1829495207LL;

	t83 = (x385+(x386+(x387<x388)));

	if (t83 != -9223372036854775489LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x390 = UINT16_MAX;
	static int32_t x391 = INT32_MAX;
	static volatile uint32_t x392 = 57331825U;

	t84 = (x389+(x390+(x391<x392)));

	if (t84 != 66462) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = 1;
	int32_t x394 = -877639317;
	volatile int64_t x395 = -2LL;
	uint64_t x396 = 64939LLU;
	int32_t t85 = 4640267;

	t85 = (x393+(x394+(x395<x396)));

	if (t85 != -877639316) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x397 = INT8_MIN;
	int64_t x398 = -1LL;
	int64_t x399 = -1LL;
	int8_t x400 = INT8_MIN;
	volatile int64_t t86 = -4659572362434LL;

	t86 = (x397+(x398+(x399<x400)));

	if (t86 != -129LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -31;
	int16_t x402 = -1;
	int8_t x403 = -1;
	uint16_t x404 = UINT16_MAX;
	static volatile int32_t t87 = 0;

	t87 = (x401+(x402+(x403<x404)));

	if (t87 != -31) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = INT32_MIN;
	static uint64_t t88 = 17058700900691547LLU;

	t88 = (x405+(x406+(x407<x408)));

	if (t88 != 295382524334657277LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x409 = 7LL;
	int32_t x410 = INT32_MIN;
	int64_t x411 = INT64_MAX;
	volatile int32_t x412 = INT32_MIN;
	static int64_t t89 = -6713609786021063LL;

	t89 = (x409+(x410+(x411<x412)));

	if (t89 != -2147483641LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = INT16_MAX;
	static volatile uint16_t x414 = 0U;
	int32_t x415 = -8026789;
	int16_t x416 = INT16_MAX;
	int32_t t90 = -8;

	t90 = (x413+(x414+(x415<x416)));

	if (t90 != 32768) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x417 = -14658LL;
	static int16_t x418 = INT16_MAX;
	static volatile uint32_t x419 = UINT32_MAX;
	uint16_t x420 = 0U;
	volatile int64_t t91 = -174483624144LL;

	t91 = (x417+(x418+(x419<x420)));

	if (t91 != 18109LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x421 = 37U;
	int64_t x422 = INT64_MIN;
	static volatile uint64_t x424 = 2482958093799LLU;
	int64_t t92 = 560LL;

	t92 = (x421+(x422+(x423<x424)));

	if (t92 != -9223372036854775771LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x429 = -1;
	int32_t x430 = -13494;
	int32_t x431 = INT32_MAX;
	int32_t x432 = 781040;
	volatile int32_t t93 = -57931;

	t93 = (x429+(x430+(x431<x432)));

	if (t93 != -13495) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x437 = 1U;
	int16_t x438 = INT16_MIN;
	uint32_t x439 = 66707U;
	uint32_t x440 = 12U;
	volatile int32_t t94 = 1797720;

	t94 = (x437+(x438+(x439<x440)));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x443 = -1LL;
	uint64_t t95 = 0LLU;

	t95 = (x441+(x442+(x443<x444)));

	if (t95 != 11683276570LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x445 = 1;
	int64_t x446 = 548938417183227LL;
	int64_t x447 = 1LL;
	int32_t x448 = -6284;
	int64_t t96 = -133285860582456LL;

	t96 = (x445+(x446+(x447<x448)));

	if (t96 != 548938417183228LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -66931;
	uint64_t x451 = 56LLU;
	int64_t x452 = INT64_MIN;
	static int64_t t97 = 1369321617LL;

	t97 = (x449+(x450+(x451<x452)));

	if (t97 != -130943282966002LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = -128963LL;
	int32_t x454 = -25452;
	int16_t x455 = -1;
	volatile uint64_t x456 = 1930082276LLU;
	int64_t t98 = 79660520664LL;

	t98 = (x453+(x454+(x455<x456)));

	if (t98 != -154415LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = UINT64_MAX;
	int16_t x463 = INT16_MIN;

	t99 = (x461+(x462+(x463<x464)));

	if (t99 != 15353952030154LLU) { NG(); } else { ; }
	
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

